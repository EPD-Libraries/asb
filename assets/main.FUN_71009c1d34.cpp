// Parses data from an ainb file; param_2 is a character from
undefined4 FUN_71009c1d34(long param_1,char *param_2,char *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  char *local_130;
  undefined4 local_128;
  char local_124 [255];
  undefined local_25;

  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    uVar6 = 0;
    do {
      uVar2 = uVar6;
      if (*(uint *)(param_1 + 0x40) <= uVar6) {
        uVar2 = 0;
      }
      puVar1 = (uint *)(*(long *)(param_1 + 0x48) + (ulong)uVar2 * 0x20);
      pcVar7 = *(char **)(puVar1 + 6);
      lVar5 = 0x400001;
      pcVar4 = param_2;
      if (pcVar7 == param_2) {
LAB_71009c1dac:
        uVar2 = puVar1[4];
        if (0 < (int)uVar2) {
          uVar8 = 0;
          bVar9 = true;
          do {
            uVar3 = uVar8;
            if (*puVar1 <= uVar8) {
              uVar3 = 0;
            }
            pcVar4 = *(char **)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x10);
            lVar5 = 0x400001;
            pcVar7 = param_3;
            if (pcVar4 == param_3) {
LAB_71009c1e74:
              return *(undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x10 + 8);
            }
            do {
              if (*pcVar7 != *pcVar4) break;
              if (*pcVar7 == '\0') {
                if (!bVar9) goto LAB_71009c1e24;
                goto LAB_71009c1e74;
              }
              pcVar4 = pcVar4 + 1;
              pcVar7 = pcVar7 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            uVar8 = uVar8 + 1;
            bVar9 = (int)uVar8 < (int)uVar2;
          } while (uVar8 != uVar2);
        }
      }
      else {
        do {
          if (*pcVar7 != *pcVar4) break;
          if (*pcVar7 == '\0') goto LAB_71009c1dac;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
LAB_71009c1e24:
      uVar6 = uVar6 + 1;
    } while (uVar6 != *(uint *)(param_1 + 0x50));
  }
  local_124[0] = '\0';
  local_130 = local_124;
  local_128 = 0x100;
  local_25 = 0;
  FUN_71006fe870(&local_130,"%s.ain");
  return 0;
}

