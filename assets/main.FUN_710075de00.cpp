
ulong FUN_710075de00(ulong param_1,char **param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  char *local_48;
  short *local_40;
  uint local_38;
  byte local_34;
  char *local_18;
  
  uVar6 = param_1;
  if (((((*(byte *)(param_1 + 0x110) >> 1 & 1) != 0) &&
       (((*(long *)(param_1 + 0x128) == 0 || (*(int *)(param_1 + 0x120) != 1)) &&
        (lVar8 = *(long *)(param_1 + 0x118), lVar8 != 0)))) &&
      (((bVar1 = *(byte *)(lVar8 + 0xd2), bVar1 == 1 ||
        (((bVar1 == 0 || (bVar1 == 6)) && (*(int *)(lVar8 + 0xc) != 7)))) &&
       ((*(byte *)(param_1 + 0x110) >> 3 & 1) != 0)))) &&
     ((iVar5 = *(int *)(lVar8 + 0xc), iVar5 == 0xe ||
      (((*(long *)(lVar8 + 0x28) != 0 && (iVar5 == 8)) && ((*(byte *)(lVar8 + 3) >> 4 & 1) == 0)))))
     ) {
    if (((*(long *)(param_1 + 0x128) != 0) && (*(int *)(param_1 + 0x120) == 1)) ||
       (((1 < bVar1 && (bVar1 != 6)) ||
        ((((puVar9 = *(undefined8 **)(lVar8 + 0x28), puVar7 = puVar9, iVar5 != 0xe &&
           (puVar7 = (undefined8 *)0x0, puVar9 != (undefined8 *)0x0)) && (iVar5 == 8)) &&
         (puVar7 = puVar9, (*(byte *)(lVar8 + 3) >> 4 & 1) != 0)))))) {
      puVar7 = (undefined8 *)0x0;
    }
    if (((DAT_71045c0128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71045c0128), iVar5 != 0)) {
      DAT_71045c0120 = &PTR_LAB_7104212b68;
      __cxa_guard_release(&DAT_71045c0128);
    }
    lVar8 = (**(code **)*puVar7)(puVar7,&DAT_71045c0120);
    local_40 = *(short **)(lVar8 + 8);
    local_38 = 0;
    local_34 = 0;
    if (local_40 != (short *)0x0) {
      uVar4 = *(uint *)(local_40 + 6);
      if (*local_40 == 0x5942) {
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      if (uVar4 != 0) {
        local_34 = *(byte *)((long)local_40 + (ulong)uVar4);
        local_38 = uVar4;
        if (((8 < local_34 - 0xc0) || ((1 << (ulong)(local_34 - 0xc0 & 0x1f) & 0x113U) == 0)) &&
           ((local_34 != 0 && ((local_34 & 0xe0) != 0x20)))) {
          uVar4 = *(uint *)((long)local_40 + (ulong)(uVar4 + 4));
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          local_38 = uVar3 >> 0x10 | uVar3 << 0x10;
          if (*local_40 != 0x5942) {
            local_38 = uVar4;
          }
        }
      }
    }
    local_18 = (char *)0x0;
    (*param_2)[(long)*(int *)(param_2 + 1) + -1] = '\0';
    uVar6 = FUN_710073aec4(&local_40,&local_18,*param_2);
    if ((uVar6 & 1) != 0) goto LAB_710075e424;
  }
  if (((((*(byte *)(param_1 + 0x138) >> 1 & 1) != 0) &&
       (((*(long *)(param_1 + 0x150) == 0 || (*(int *)(param_1 + 0x148) != 1)) &&
        (lVar8 = *(long *)(param_1 + 0x140), lVar8 != 0)))) &&
      (((bVar1 = *(byte *)(lVar8 + 0xd2), bVar1 == 1 ||
        (((bVar1 == 0 || (bVar1 == 6)) && (*(int *)(lVar8 + 0xc) != 7)))) &&
       ((*(byte *)(param_1 + 0x138) >> 3 & 1) != 0)))) &&
     ((iVar5 = *(int *)(lVar8 + 0xc), iVar5 == 0xe ||
      (((*(long *)(lVar8 + 0x28) != 0 && (iVar5 == 8)) && ((*(byte *)(lVar8 + 3) >> 4 & 1) == 0)))))
     ) {
    if (((*(long *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 0x148) == 1)) ||
       (((1 < bVar1 && (bVar1 != 6)) ||
        ((((puVar9 = *(undefined8 **)(lVar8 + 0x28), puVar7 = puVar9, iVar5 != 0xe &&
           (puVar7 = (undefined8 *)0x0, puVar9 != (undefined8 *)0x0)) && (iVar5 == 8)) &&
         (puVar7 = puVar9, (*(byte *)(lVar8 + 3) >> 4 & 1) != 0)))))) {
      puVar7 = (undefined8 *)0x0;
    }
    if (((DAT_71045c0128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71045c0128), iVar5 != 0)) {
      DAT_71045c0120 = &PTR_LAB_7104212b68;
      __cxa_guard_release(&DAT_71045c0128);
    }
    lVar8 = (**(code **)*puVar7)(puVar7,&DAT_71045c0120);
    local_40 = *(short **)(lVar8 + 8);
    local_38 = 0;
    local_34 = 0;
    if (local_40 != (short *)0x0) {
      uVar4 = *(uint *)(local_40 + 6);
      if (*local_40 == 0x5942) {
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      if (uVar4 != 0) {
        local_34 = *(byte *)((long)local_40 + (ulong)uVar4);
        local_38 = uVar4;
        if (((8 < local_34 - 0xc0) || ((1 << (ulong)(local_34 - 0xc0 & 0x1f) & 0x113U) == 0)) &&
           ((local_34 != 0 && ((local_34 & 0xe0) != 0x20)))) {
          uVar4 = *(uint *)((long)local_40 + (ulong)(uVar4 + 4));
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          local_38 = uVar3 >> 0x10 | uVar3 << 0x10;
          if (*local_40 != 0x5942) {
            local_38 = uVar4;
          }
        }
      }
    }
    local_18 = (char *)0x0;
    (*param_2)[(long)*(int *)(param_2 + 1) + -1] = '\0';
    uVar6 = FUN_710073aec4(&local_40,&local_18,*param_2);
    if ((uVar6 & 1) != 0) goto LAB_710075e424;
  }
  if (((((*(byte *)(param_1 + 0x160) >> 1 & 1) != 0) &&
       (((*(long *)(param_1 + 0x178) == 0 || (*(int *)(param_1 + 0x170) != 1)) &&
        (lVar8 = *(long *)(param_1 + 0x168), lVar8 != 0)))) &&
      ((bVar1 = *(byte *)(lVar8 + 0xd2), bVar1 == 1 ||
       (((bVar1 == 0 || (bVar1 == 6)) && (*(int *)(lVar8 + 0xc) != 7)))))) &&
     (((*(byte *)(param_1 + 0x160) >> 3 & 1) != 0 &&
      ((iVar5 = *(int *)(lVar8 + 0xc), iVar5 == 0xe ||
       (((*(long *)(lVar8 + 0x28) != 0 && (iVar5 == 8)) && ((*(byte *)(lVar8 + 3) >> 4 & 1) == 0))))
      )))) {
    if (((*(long *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x170) == 1)) ||
       (((1 < bVar1 && (bVar1 != 6)) ||
        ((((puVar9 = *(undefined8 **)(lVar8 + 0x28), puVar7 = puVar9, iVar5 != 0xe &&
           (puVar7 = (undefined8 *)0x0, puVar9 != (undefined8 *)0x0)) && (iVar5 == 8)) &&
         (puVar7 = puVar9, (*(byte *)(lVar8 + 3) >> 4 & 1) != 0)))))) {
      puVar7 = (undefined8 *)0x0;
    }
    if (((DAT_71045c0128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71045c0128), iVar5 != 0)) {
      DAT_71045c0120 = &PTR_LAB_7104212b68;
      __cxa_guard_release(&DAT_71045c0128);
    }
    lVar8 = (**(code **)*puVar7)(puVar7,&DAT_71045c0120);
    local_40 = *(short **)(lVar8 + 8);
    local_38 = 0;
    local_34 = 0;
    if (local_40 != (short *)0x0) {
      uVar4 = *(uint *)(local_40 + 6);
      if (*local_40 == 0x5942) {
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      if (uVar4 != 0) {
        local_34 = *(byte *)((long)local_40 + (ulong)uVar4);
        local_38 = uVar4;
        if (((8 < local_34 - 0xc0) || ((1 << (ulong)(local_34 - 0xc0 & 0x1f) & 0x113U) == 0)) &&
           ((local_34 != 0 && ((local_34 & 0xe0) != 0x20)))) {
          uVar4 = *(uint *)((long)local_40 + (ulong)(uVar4 + 4));
          uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          local_38 = uVar3 >> 0x10 | uVar3 << 0x10;
          if (*local_40 != 0x5942) {
            local_38 = uVar4;
          }
        }
      }
    }
    local_18 = (char *)0x0;
    (*param_2)[(long)*(int *)(param_2 + 1) + -1] = '\0';
    uVar6 = FUN_710073aec4(&local_40,&local_18,*param_2);
    if ((uVar6 & 1) != 0) goto LAB_710075e424;
  }
  if ((*(byte *)(param_1 + 0x188) >> 1 & 1) == 0) {
    return uVar6;
  }
  if ((*(long *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 0x198) == 1)) {
    return uVar6;
  }
  lVar8 = *(long *)(param_1 + 400);
  if (lVar8 == 0) {
    return uVar6;
  }
  cVar2 = *(char *)(lVar8 + 0xd2);
  if (cVar2 != '\x01') {
    if ((cVar2 != '\0') && (cVar2 != '\x06')) {
      return uVar6;
    }
    if (*(int *)(lVar8 + 0xc) == 7) {
      return uVar6;
    }
  }
  if ((*(byte *)(param_1 + 0x188) >> 3 & 1) == 0) {
    return uVar6;
  }
  if (*(int *)(lVar8 + 0xc) != 0xe) {
    if (*(long *)(lVar8 + 0x28) == 0) {
      return uVar6;
    }
    if (*(int *)(lVar8 + 0xc) != 8) {
      return uVar6;
    }
    if ((*(byte *)(lVar8 + 3) >> 4 & 1) != 0) {
      return uVar6;
    }
  }
  puVar7 = (undefined8 *)FUN_710075e5bc((byte *)(param_1 + 0x188));
  if (((DAT_71045c0128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71045c0128), iVar5 != 0)) {
    DAT_71045c0120 = &PTR_LAB_7104212b68;
    __cxa_guard_release(&DAT_71045c0128);
  }
  lVar8 = (**(code **)*puVar7)(puVar7,&DAT_71045c0120);
  local_40 = *(short **)(lVar8 + 8);
  local_38 = 0;
  local_34 = 0;
  if (local_40 != (short *)0x0) {
    uVar4 = *(uint *)(local_40 + 6);
    if (*local_40 == 0x5942) {
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    }
    if (uVar4 != 0) {
      local_34 = *(byte *)((long)local_40 + (ulong)uVar4);
      local_38 = uVar4;
      if ((((8 < local_34 - 0xc0) || ((1 << (ulong)(local_34 - 0xc0 & 0x1f) & 0x113U) == 0)) &&
          (local_34 != 0)) && ((local_34 & 0xe0) != 0x20)) {
        uVar4 = *(uint *)((long)local_40 + (ulong)(uVar4 + 4));
        uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        local_38 = uVar3 >> 0x10 | uVar3 << 0x10;
        if (*local_40 != 0x5942) {
          local_38 = uVar4;
        }
      }
    }
  }
  local_18 = (char *)0x0;
  (*param_2)[(long)*(int *)(param_2 + 1) + -1] = '\0';
  uVar6 = FUN_710073aec4(&local_40,&local_18,*param_2);
  if ((uVar6 & 1) == 0) {
    return uVar6;
  }
LAB_710075e424:
  local_48 = local_18;
  uVar4 = FUN_7100b90a74(param_2,&local_48,0xffffffff);
  return (ulong)uVar4;
}

