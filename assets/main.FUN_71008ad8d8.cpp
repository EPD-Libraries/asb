
undefined8 FUN_71008ad8d8(long param_1,char **param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  nn::os::AcquireReadLock((ReaderWriterLockType *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_1) {
    do {
      lVar3 = *(long *)(lVar1 + 0x10);
      *(undefined *)((long)*(int *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40) + -1) = 0;
      pcVar4 = *(char **)(lVar3 + 0x40);
      pcVar5 = *param_2;
      lVar3 = 0x400001;
      if (pcVar4 == pcVar5) {
LAB_71008ad970:
        puVar2 = (undefined8 *)(lVar1 + 0x10);
        goto LAB_71008ad974;
      }
      do {
        if (*pcVar4 != *pcVar5) break;
        if (*pcVar4 == '\0') goto LAB_71008ad970;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1);
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
LAB_71008ad974:
  uVar6 = *puVar2;
  nn::os::ReleaseReadLock((ReaderWriterLockType *)(param_1 + 0x18));
  return uVar6;
}

