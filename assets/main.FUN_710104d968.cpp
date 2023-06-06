
bool FUN_710104d968(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int fileVersion;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long **pplVar7;
  undefined **local_268;
  undefined2 local_260;
  undefined local_25e;
  char *local_258;
  undefined4 local_250;
  undefined local_24c;
  undefined4 local_24b;
  undefined local_247;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined1 *local_208;
  char *local_200;
  int local_1f8;
  char local_1f4 [255];
  undefined local_f5;
  long *local_f0;
  long lStack_e8;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [127];
  undefined local_55;
  undefined4 local_38 [2];

  lVar2 = DAT_710463bea0;
  fileVersion = *(int *)(param_2 + 4);
  local_e0 = local_d4;
  local_55 = 0;
  local_d4[0] = '\0';
  local_d8 = 0x80;
  if (fileVersion != 0x417) {
    FUN_71006fe870(&local_e0,"Resource version mismatch. current:%d resource:%d (%s)");
    goto LAB_710104da88;
  }
  local_d4[0] = '\0';
  if (DAT_710463bea0 == 0) {
    puVar4 = (undefined8 *)aligned_alloc(8,0x18);
  }
  else {
    plVar5 = param_4;
    if (param_4 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
      if (lVar6 == 0) {
        pplVar7 = (long **)(lVar2 + 8);
      }
      else {
        pplVar7 = (long **)(lVar6 + 0x88);
      }
      plVar5 = *pplVar7;
      if (plVar5 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_710104d9ec;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
  }
LAB_710104d9ec:
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_7104505668;
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  lVar2 = DAT_710463bea0;
  local_f0 = param_4;
  lStack_e8 = param_2;
  if (DAT_710463bea0 == 0) {
    param_4 = (long *)aligned_alloc(8,0x88);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
      if (lVar6 == 0) {
        pplVar7 = (long **)(lVar2 + 8);
      }
      else {
        pplVar7 = (long **)(lVar6 + 0x88);
      }
      param_4 = *pplVar7;
      if (param_4 == (long *)0x0) goto LAB_710104da34;
    }
    param_4 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x88,8);
  }
LAB_710104da34:
  *param_4 = (long)&PTR_FUN_7104505908;
  memset(param_4 + 1,0,0x80);
  puVar4[2] = param_4;
  FUN_710104dcac((long)param_4,&local_f0);
  *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) | 1;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x1f0))();
  if (0 < iVar3) {
    local_200 = local_1f4;
    local_1f8 = 0x100;
    local_1f4[0] = '\0';
    local_f5 = 0;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x218))(*(long **)(param_1 + 0x28),0);
    FUN_71006fe870(&local_200,"AnimationEvent/AsNode/%s.baev");
    local_24c = 0;
    local_25e = 1;
    local_250 = 0x1010100;
    local_24b = 0x1010101;
    local_247 = 0;
    local_268 = &PTR_LAB_7104212af0;
    local_244 = 0;
    local_23c = 0;
    local_234 = 0;
    local_22c = 0;
    local_224 = 0;
    local_21c = 0;
    local_214 = 0;
    local_20c = 0;
    local_258 = "AnimationEvent";
    local_208 = &DAT_7103776e54;
    local_260 = 0x101;
    local_38[0] = 0xffffffff;
    local_200[(long)local_1f8 + -1] = '\0';
    puVar4 = (undefined8 *)
             FUN_710073c85c((byte *)(param_1 + 0x30),&local_200,(long)&local_268,local_38);
    if (((DAT_7104647b60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7104647b60), iVar3 != 0)) {
      DAT_7104647b58 = &PTR_LAB_7104212b38;
      __cxa_guard_release(&DAT_7104647b60);
    }
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,&DAT_7104647b58);
    }
  }
LAB_710104da88:
  return fileVersion == 0x417;
}

