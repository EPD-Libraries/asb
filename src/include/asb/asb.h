#pragma once

#include <absl/algorithm/container.h>
#include <absl/container/btree_map.h>
#include <exio/binary_reader.h>
#include <exio/binary_writer.h>
#include <exio/error.h>
#include <exio/swap.h>
#include <exio/types.h>
#include <exio/util/magic_utils.h>
#include <nonstd/span.h>

namespace oepd {

namespace asb {

template <typename T>
using Table = absl::btree_map<T, u32>;

constexpr auto Magic = exio::util::MakeMagic("ASB ");

struct Header {
  char magic[4];
  u32 version;
  u32 unknown_2;
  u32 unkown_3;
  u32 unknown_4;
  u32 entry_string_array;
};
static_assert(sizeof(Header) == 0x16);

struct HashEntry {
  u32 hash;
  u32 size;
};
static_assert(sizeof(HashEntry) == 0x08);

struct NameEntry {
  char name[160];
  u32 size;
};
static_assert(sizeof(NameEntry) == 0xA4);

class ASB {
public:
  ASB(tcb::span<const u8> data);
  ASB(std::string_view yml_text);

  static ASB FromBinary(tcb::span<const u8> data);
  static ASB FromText(std::string_view yml_text);
  std::vector<u8> ToBinary();
  std::string ToText();

  u32 m_unknown_1;
  u32 m_unknown_2;
  Table<u32> m_crc_table{};
  Table<std::string> m_name_table{};

private:
  exio::BinaryReader m_reader;
};

}  // namespace asb

}  // namespace oepd