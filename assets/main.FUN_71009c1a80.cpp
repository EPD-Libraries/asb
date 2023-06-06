/*
param_2 is the address in memory where data is stored
*/
void FUN_71009c1a80(undefined8 param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  long offset;
  long read_index;
  long lVar6;
  ushort *puVar7;
  uint uVar8;
  long local_start_byte;
  undefined4 *puVar10;
  long lVar11;
  long current_byte;

  offset = *(long *)(param_2 + 0x60); // offset is a pointer to data in the file
  if (0 < *(short *)(offset + 2)) {
    read_index = 0;
    do {
      current_byte = offset + read_index * 8;
      local_start_byte = *(long *)(param_2 + 0x10);
      cVar2 = *(char *)(current_byte + 8);
      lVar11 = (long)*(int *)(*(long *)(param_2 + 0x48) + (ulong)*(ushort *)(current_byte + 10) * 0x3c + 0x14); // Assing the value found at the offset from ( val(param_2 + 0x48) + ( val(current_byte + 10) * 0x3c) + 0x14) to lVar11
      lVar6 = local_start_byte + lVar11;
      if (cVar2 == '\x01') {
        *(undefined2 *)
         (local_start_byte + *(int *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0x95) +
                                   (ulong)*(ushort *)(current_byte + 0xc)) * 4 + 0xa4)) =
             *(undefined2 *)(current_byte + 0xe);
      }
      else if (cVar2 == '\0') {
        uVar3 = *(ushort *)(current_byte + 0xc);
        uVar8 = *(byte *)(lVar6 + 0x94) - 1;
        if ((int)(uint)uVar3 < (int)uVar8) {
          current_byte = (ulong)uVar8 - (ulong)uVar3;
          puVar10 = (undefined4 *)
                    (local_start_byte + lVar11 + ((ulong)uVar3 + (ulong)*(byte *)(lVar6 + 0x95)) * 4 + 0xa8);
          do {
            current_byte = current_byte + -1;
            puVar10[-1] = *puVar10;
            puVar10 = puVar10 + 1;
          } while (current_byte != 0);
        }
        *(char *)(lVar6 + 0x94) = (char)uVar8;
      }
      else if (cVar2 == '\x02') {
        uVar8 = (uint)*(ushort *)(current_byte + 0xc);
        lVar6 = *(long *)(param_2 + 0x48) + (ulong)*(ushort *)(current_byte + 10) * 0x3c;
        puVar7 = (ushort *)(lVar6 + 4);
        uVar3 = *puVar7;
        if ((int)(uint)*(ushort *)(current_byte + 0xc) < (int)(uVar3 - 1)) {
          current_byte = *(long *)(param_2 + 8);
          do {
            uVar1 = uVar8 + *(int *)(lVar6 + 0x20);
            uVar8 = uVar8 + 1;
            *(undefined4 *)(current_byte + (ulong)uVar1 * 4) =
                 *(undefined4 *)(current_byte + (ulong)(uVar1 + 1) * 4);
            uVar3 = *puVar7;
          } while ((int)uVar8 < (int)(uVar3 - 1));
        }
        *puVar7 = uVar3 - 1;
      }
      read_index = read_index + 1;
    } while (read_index < *(short *)(offset + 2));
  }
  return;
}

