// Initialize ainb resource files
void FUN_71009c178c(long param_1,long **param_2)
//param_2 is a pointer to a byte array representing the raw data from the file
// param_1 is an address for where data will be stored
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *start_byte;
  undefined *puVar7;
  long **pplVar8;
  long local_start_byte;
  int iVar10;
  long lVar11;
  long string_array;
  char *local_1f0;
  undefined4 local_1e8;
  char local_1e4 [255];
  undefined local_e5;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [127];
  undefined local_55;

  start_byte = param_2[1]; // pointer to the first byte in the file data
  local_55 = 0;
  local_e0 = local_d4;
  local_d4[0] = '\0';
  local_d8 = 0x80;

  // Ensure the file version is correct by reading the value from 0x04
  *(long **)(param_1 + 0x10) = start_byte; // Set the value at param_1 + 0x10 to the first byte of the bin data
  if (*(int *)((long)param_2[1] + 4) == 0x407) {
    local_d4[0] = '\0';
  }
  else {
    FUN_71006fe870(&local_e0,"Resource version mismatch. current:%d resource:%d (%s)");
    start_byte = *(long **)(param_1 + 0x10);
  }

  *(long *)(param_1 + 0x18) = (long)start_byte + 0x74; // Value stored in memory at offset 0x18 is a pointer to start_byte + 0x74
  *(long *)(param_1 + 0x48) = (long)start_byte + 0x74 + (long)*(int *)((long)start_byte + 0xc) * 0x18; // Value at (start_byte + 0xc) times 0x18 is an offset from the start of the file stored at offset 0x48 in memory region
  *(long *)(param_1 + 0x20) = (long)start_byte + *(long)(int *)((long)start_byte + 0x2c);
  *(long *)(param_1 + 0x28) = (long)start_byte + (long)*(int *)((long)start_byte + 0x34);
  *(long *)(param_1 + 0x30) = (long)start_byte + (long)*(int *)(start_byte + 4);
  *(long *)(param_1 + 8) = (long)start_byte + (long)*(int *)(start_byte + 8);
  *(long *)(param_1 + 0x40) = (long)start_byte + (long)*(int *)((long)start_byte + 0x3c);
  *(long *)(param_1 + 0x38) = (long)start_byte + (long)*(int *)((long)start_byte + 0x4c);
  if (*(int *)((long)start_byte + 0x44) == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    lVar5 = (long)start_byte + (long)*(int *)((long)start_byte + 0x44);
    *(long *)(param_1 + 0x50) = lVar5;
    local_start_byte = DAT_710463bea0;
    if (*(int *)(lVar5 + 4) == 2) {
      if (DAT_710463bea0 == 0) {
        puVar4 = (undefined8 *)aligned_alloc(8,0x10);
      }
      else {
        start_byte = *param_2;
        if (start_byte == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
          if (lVar5 == 0) {
            pplVar8 = (long **)(local_start_byte + 8);
          }
          else {
            pplVar8 = (long **)(lVar5 + 0x88);
          }
          start_byte = *pplVar8;
        }
        puVar4 = (undefined8 *)(**(code **)(*start_byte + 0x30))(start_byte,0x10,8);
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_71009c1ba8((uint *)puVar4,*param_2,*(long *)(param_1 + 0x50));
      *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    else {
      local_1e4[0] = '\0';
      local_1f0 = local_1e4;
      local_1e8 = 0x100;
      local_e5 = 0;
      FUN_71006fe870(&local_1f0,"%s.ain");
    }
  }


  lVar5 = DAT_7104640ce8;
  local_start_byte = *(long *)(param_1 + 0x10); //local_start_byte is the pointer to the start of the binary data
  if (((*(byte *)(DAT_7104640ce8 + 0x3c) >> 1 & 1) != 0) && (0 < (int)*(uint *)(local_start_byte + 0x48))) {
    ulong *data_offset = (uint *)(local_start_byte + 0x48); // The value at offset 0x48 is an offset relative to the file start
    *(ulong *)(param_1 + 0x60) = local_start_byte + data_offset;
  }

  iVar2 = *(int *)(local_start_byte + 0x28);
  piVar1 = (int *)(local_start_byte + iVar2); // Pointer to the position in the file referenced by the offset iVar2
  if (0 < *piVar1) {
    string_array = local_start_byte + *(int *)(local_start_byte + 0x24); //address of the string array in memory
    lVar11 = *(long *)(piVar1 + 1);
    uVar3 = FUN_71009c1d34(lVar5,(char *)(string_array + *(long *)(piVar1 + 3)),
                           (char *)(string_array + piVar1[3]));
    *(undefined4 *)(local_start_byte + lVar11) = uVar3;
    if (1 < *piVar1) {
      iVar10 = 1;
      start_byte = (long *)(iVar2 + local_start_byte + 0x18);
      do {
        local_start_byte = *(long *)(param_1 + 0x10);
        lVar5 = local_start_byte + *(int *)(local_start_byte + 0x24);
        string_array = start_byte[-1];
        uVar3 = FUN_71009c1d34(DAT_7104640ce8,(char *)(lVar5 + *start_byte),
                               (char *)(lVar5 + *(int *)start_byte));
        *(undefined4 *)(local_start_byte + string_array) = uVar3;
        iVar10 = iVar10 + 1;
        start_byte = (long *)((long)start_byte + 0xc);
      } while (iVar10 < *piVar1);
    }
  }

  if ((*(char **)(param_1 + 0x60) != (char *)0x0) && (**(char **)(param_1 + 0x60) == '\0')) {
    FUN_71009c1a80(&local_1f0,param_1);
    puVar7 = *(undefined **)(param_1 + 0x60);
    if (-1 < *(short *)(puVar7 + 6)) {
      *(uint *)(*(long *)(param_1 + 0x10) + 0x18) = (int)*(short *)(puVar7 + 6) & 0xffff;
      puVar7 = *(undefined **)(param_1 + 0x60);
    }
    *puVar7 = 1;
  }
  return;
}

