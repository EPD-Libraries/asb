/*Parses ainb data?*/
undefined8 FUN_710075c6cc(uint *param_1,long **param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined ***pppuVar3;
  char cVar4;
  undefined2 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  long **pplVar15;
  size_t __n;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  char **ppcVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long *__dest;
  long **pplVar28;
  uint local_7c34;
  uint local_7c14;
  undefined **local_7be8;
  long *local_7be0;
  long *plStack_7bd8;
  undefined8 uStack_7bd0;
  undefined8 uStack_7bc8;
  undefined8 uStack_7bc0;
  long *local_7bb8;
  uint local_7bb0;
  undefined8 uStack_7ba8;
  undefined8 uStack_7ba0;
  undefined8 uStack_7b98;
  undefined8 uStack_7b90;
  undefined4 uStack_7b88;
  undefined auStack_7b80 [200];
  long *local_7ab8;
  undefined local_7ab0;
  char *local_7aa8;
  undefined4 local_7aa0;
  ushort local_7a9c;
  long alStack_7a98 [700];
  undefined **local_64b8;
  undefined local_64b0;
  undefined2 local_64af;
  char *local_64a8;
  undefined4 local_64a0;
  undefined4 uStack_649c;
  undefined uStack_6498;
  undefined local_6497;
  undefined8 local_6494;
  undefined4 local_648c;
  undefined4 uStack_6488;
  undefined4 uStack_6484;
  undefined4 uStack_6480;
  undefined8 local_647c;
  undefined8 uStack_6474;
  undefined8 local_646c;
  undefined8 uStack_6464;
  undefined4 local_645c;
  undefined1 *local_6458;
  long *local_6450;
  int local_6448;
  undefined8 local_6444;
  undefined local_63c5;
  char *local_63c0;
  undefined8 local_63b8;
  int local_63b0;
  char acStack_63a8 [8192];
  undefined8 local_43a8;
  undefined8 *local_43a0;
  undefined8 auStack_4398 [512];
  undefined **local_3398;
  int local_3390;
  undefined auStack_3388 [8];
  char *local_3380;
  long *local_3378;
  char *local_388;
  int local_380;
  char local_37c [255];
  undefined local_27d;
  char *local_278;
  undefined4 local_270;
  char local_26c [127];
  undefined local_1ed;

  lVar10 = DAT_710463bea0;
  uVar21 = *(uint *)(param_2 + 8);
  if (uVar21 == 0) {
    return 0;
  }
  if (0 < (int)uVar21) { //No else
    if (DAT_710463bea0 == 0) {
      lVar10 = aligned_alloc(8,(ulong)uVar21 << 3);
    }
    else {
      plVar9 = *param_2;
      if (plVar9 == (long *)0x0) {
        lVar26 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
        pplVar11 = (long **)(lVar10 + 8);
        if (lVar26 != 0) {
          pplVar11 = (long **)(lVar26 + 0x88);
        }
        plVar9 = *pplVar11;
        if (plVar9 == (long *)0x0) goto LAB_710075c744;
      }
      lVar10 = (**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar21 << 3,8);
    }
    if (lVar10 != 0) {
      *param_1 = uVar21;
      *(long *)(param_1 + 2) = lVar10;
    }
  }
LAB_710075c744:
  uVar21 = *param_1;
  if (0 < (int)uVar21) {
    lVar10 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 2) + lVar10) = 0;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar21 * 8 - lVar10 != 0);
  }
  uVar21 = *(uint *)(param_2 + 8);
  if (uVar21 != 0) {
    local_7c34 = 0;
    uVar23 = 0;
LAB_710075c840:
    lVar10 = DAT_710463bea0;
    uVar17 = uVar23 & 0xffffffff;
    if (0x1ff < uVar23) {
      uVar17 = 0;
    }
    if (*(char *)param_2[uVar17 + 9] != '\0') {
      if (DAT_710463bea0 == 0) {
        pplVar11 = (long **)aligned_alloc(8,0x140);
      }
      else {
        plVar9 = *param_2;
        if (plVar9 == (long *)0x0) {
          lVar26 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
          if (lVar26 == 0) {
            pplVar11 = (long **)(lVar10 + 8);
          }
          else {
            pplVar11 = (long **)(lVar26 + 0x88);
          }
          plVar9 = *pplVar11;
          if (plVar9 == (long *)0x0) {
            pplVar11 = (long **)0x0;
            goto LAB_710075c884;
          }
        }
        pplVar11 = (long **)(**(code **)(*plVar9 + 0x30))(plVar9,0x140,8);
      }
LAB_710075c884:
      plVar9 = (long *)((long)pplVar11 + 0x34);
      *(undefined4 *)(pplVar11 + 2) = 0;
      pplVar15 = pplVar11 + 3;
      *pplVar15 = (long *)0x0;
      pplVar28 = pplVar11 + 5;
      *pplVar28 = plVar9;
      *pplVar11 = (long *)pplVar11;
      pplVar11[1] = (long *)pplVar11;
      pplVar11[4] = (long *)0x0;
      *(undefined4 *)(pplVar11 + 6) = 0x100;
      *(undefined *)((long)pplVar11 + 0x133) = 0;
      if (plVar9 != (long *)&DAT_7103776e54) {
        *(undefined *)plVar9 = 0;
      }
      *(undefined *)(pplVar11 + 0x27) = 0;
      *(undefined4 *)((long)pplVar11 + 0x13c) = 0xffffffff;
      lVar10 = (long)(int)uVar23;
      if (*param_1 <= uVar23) {
        lVar10 = 0;
      }
      *(long ***)(*(long *)(param_1 + 2) + lVar10 * 8) = pplVar11;
      if (uVar23 < 0x200) {
        uVar21 = *(uint *)((long)param_2 + uVar23 * 4 + 0x1048);
        uVar17 = uVar23;
        if (uVar21 == 0xffffffff) {
LAB_710075c914:
          FUN_710074c860((byte **)pplVar28,(byte **)(param_2 + uVar17 + 9));
          memset(auStack_7b80,0,0xc4);
          local_7aa8 = (char *)0x0;
          local_7ab8 = (long *)0x0;
          local_7be0 = (long *)0x0;
          plStack_7bd8 = (long *)0x0;
          local_7bb0 = 0;
          uStack_7bd0 = 0;
          uStack_7bc8 = 0;
          uStack_7bc0 = 0;
          local_7bb8 = (long *)0x0;
          uStack_7b88 = 0;
          uStack_7ba8 = 0;
          uStack_7ba0 = 0;
          uStack_7b98 = 0;
          uStack_7b90 = 0;
          local_7ab0 = 1;
          local_7aa0 = 1;
          local_7a9c = 1;
          local_7be8 = &PTR_LAB_7104527900;
          memset(alStack_7a98,0,0x15e0);
          local_27d = 0;
          local_37c[0] = '\0';
          local_380 = 0x100;
          *(undefined *)((long)pplVar11[5] + (long)*(int *)(pplVar11 + 6) + -1) = 0;
          plVar9 = *pplVar28;
          if ((plVar9 == (long *)0x0) || (*(char *)plVar9 == '\0')) {
LAB_710075d900:
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            do {
              if (lVar10 == 0x400000) goto LAB_710075d900;
              lVar26 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (*(char *)((long)plVar9 + lVar26) != '\0');
          }
          uVar21 = (uint)lVar10;
          if (0xff < (int)uVar21) {
            uVar21 = 0xff;
          }
          local_388 = local_37c;
          if (0 < (int)uVar21) {
            memcpy(local_37c,plVar9,(ulong)uVar21);
            if (0 < (int)uVar21) {
              local_37c[(int)uVar21] = '\0';
            }
          }
          pcVar14 = local_388;
          local_388[(long)local_380 + -1] = '\0';
          if ((local_388 == (char *)0x0) || (*local_388 == '\0')) {
LAB_710075d8f4:
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            do {
              if (lVar10 == 0x400000) goto LAB_710075d8f4;
              lVar26 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (local_388[lVar26] != '\0');
            uVar21 = (uint)lVar10;
            if (-1 < (int)uVar21) goto LAB_710075cab8;
          }
          uVar21 = 0;
LAB_710075cab8:
          __n = 5;
          if ((5 < (int)(local_380 - uVar21)) ||
             (__n = (size_t)(local_380 + ~uVar21), 0 < (int)(local_380 + ~uVar21))) {
            memcpy(local_388 + uVar21,".ainb",__n);
            if ((int)lVar10 < (int)(__n + uVar21)) {
              pcVar14[__n + uVar21] = '\0';
            }
          }
          uVar17 = DAT_7104647ac0;
          local_388[(long)local_380 + -1] = '\0';
          plVar9 = param_2[6];
          local_3398 = &PTR_LAB_7104529470;
          memset(auStack_3388,0,0x3000);
          local_7c14 = 0;
          local_3380 = local_388;
          local_3390 = 1;
          local_3378 = plVar9;
LAB_710075cb60:
          local_43a8 = 0x20000000000;
          iVar7 = 0;
          local_43a0 = auStack_4398;
          do {
            plVar9 = (long *)(*(code *)local_3398[2])(&local_3398,iVar7);
            if ((*plVar9 == 0) && (plVar9[1] != 0)) {
              if (local_43a8._4_4_ <= (int)local_43a8) goto LAB_710075cbc8;
              local_43a0[(int)local_43a8] = plVar9 + 1;
              local_43a8 = local_43a8 & 0xffffffff00000000 | (ulong)((int)local_43a8 + 1);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_3390);
LAB_710075cbc8:
          if ((int)local_43a8 != 0) {
            memset(acStack_63a8,0,0x2000);
            local_63c0 = acStack_63a8;
            local_63b8 = 0x200;
            puVar25 = local_43a0 + (int)local_43a8;
            local_63b0 = 0;
            puVar18 = local_43a0;
LAB_710075cc00:
            ppcVar24 = (char **)*puVar18;
            local_6444._0_1_ = 0;
            local_6448 = 0x80;
            plVar9 = (long *)ppcVar24[1];
            local_6450 = &local_6444;
            if (*(char *)plVar9 == '\0') {
              plVar9 = param_2[6];
              if ((plVar9 != (long *)0x0) && (*(char *)plVar9 != '\0')) {
                uVar16 = 0;
                do {
                  if (uVar16 == 0x400000) goto LAB_710075d348;
                  uVar20 = uVar16 + 1;
                  lVar10 = uVar16 + 1;
                  uVar16 = uVar20;
                } while (*(char *)((long)plVar9 + lVar10) != '\0');
                if (0x7f < (int)uVar20) goto LAB_710075daf0;
                if (0 < (int)uVar20) goto LAB_710075cc88;
              }
LAB_710075d348:
              uVar16 = 0;
LAB_710075ccdc:
              iVar7 = (int)uVar16;
              *(undefined *)((long)&local_6444 + (uVar16 & 0xffffffff)) = 0x2f;
LAB_710075ccec:
              *(undefined *)((long)&local_6444 + (ulong)(iVar7 + 1)) = 0;
              pcVar14 = *ppcVar24;
              local_63c5 = 0;
              if ((byte)local_6444 != 0) goto LAB_710075cd04;
LAB_710075d0cc:
              lVar10 = 0;
LAB_710075d0d0:
              iVar7 = 0;
            }
            else {
              if (*(char *)plVar9 == '\0') goto LAB_710075d348;
              uVar20 = 0;
              do {
                if (*(char *)((long)plVar9 + uVar20 + 1) == '\0') {
                  uVar20 = uVar20 + 1;
                  break;
                }
                if (*(char *)((long)plVar9 + uVar20 + 2) == '\0') {
                  uVar20 = uVar20 + 2;
                  break;
                }
                if (*(char *)((long)plVar9 + uVar20 + 3) == '\0') {
                  uVar20 = uVar20 + 3;
                  break;
                }
                if (*(char *)((long)plVar9 + uVar20 + 4) == '\0') {
                  uVar20 = uVar20 + 4;
                  break;
                }
                if (uVar20 == 0x3ffffc) goto LAB_710075d348;
                lVar10 = uVar20 + 5;
                uVar20 = uVar20 + 5;
              } while (*(char *)((long)plVar9 + lVar10) != '\0');
              if ((int)uVar20 < 0x80) {
                if ((int)uVar20 < 1) goto LAB_710075d348;
              }
              else {
LAB_710075daf0:
                uVar20 = 0x7f;
              }
LAB_710075cc88:
              local_63c5 = 0;
              memcpy(&local_6444,plVar9,uVar20 & 0xffffffff);
              *(undefined *)((long)&local_6444 + (uVar20 & 0xffffffff)) = 0;
              local_63c5 = 0;
              uVar16 = (ulong)(byte)local_6444;
              if ((byte)local_6444 == 0) goto LAB_710075ccdc;
              uVar16 = 0;
              do {
                if (uVar16 == 0x400000) {
                  uVar16 = 0;
                  goto LAB_710075ccdc;
                }
                lVar10 = uVar16 + 1;
                uVar16 = uVar16 + 1;
              } while (*(char *)((long)&local_6444 + lVar10) != '\0');
              if ((int)uVar16 < 0) {
                iVar7 = 0;
                local_6444._0_1_ = 0x2f;
                goto LAB_710075ccec;
              }
              if ((int)uVar16 < 0x7f) goto LAB_710075ccdc;
              pcVar14 = *ppcVar24;
              local_63c5 = 0;
LAB_710075cd04:
              lVar10 = 0;
              do {
                if (lVar10 == 0x400000) goto LAB_710075d0cc;
                lVar26 = lVar10 + 1;
                lVar10 = lVar10 + 1;
              } while (*(char *)((long)&local_6444 + lVar26) != '\0');
              iVar7 = (int)lVar10;
              if (iVar7 < 0) goto LAB_710075d0d0;
            }
            local_63c5 = 0;
            if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) {
LAB_710075d340:
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              do {
                if (pcVar14[lVar26 + 1] == '\0') {
                  lVar26 = lVar26 + 1;
                  break;
                }
                if (pcVar14[lVar26 + 2] == '\0') {
                  lVar26 = lVar26 + 2;
                  break;
                }
                if (pcVar14[lVar26 + 3] == '\0') {
                  lVar26 = lVar26 + 3;
                  break;
                }
                if (pcVar14[lVar26 + 4] == '\0') {
                  lVar26 = lVar26 + 4;
                  break;
                }
                if (lVar26 == 0x3ffffc) goto LAB_710075d340;
                lVar19 = lVar26 + 5;
                lVar26 = lVar26 + 5;
              } while (pcVar14[lVar19] != '\0');
            }
            uVar21 = (uint)lVar26;
            if (0x80 - iVar7 <= (int)uVar21) {
              uVar21 = 0x7f - iVar7;
            }
            if (0 < (int)uVar21) {
              memcpy((void *)((long)&local_6444 + (long)iVar7),pcVar14,(ulong)uVar21);
              if ((int)lVar10 < (int)((long)(int)uVar21 + (long)iVar7)) {
                *(undefined *)((long)&local_6444 + (long)(int)uVar21 + (long)iVar7) = 0;
              }
            }
            FUN_710075de00(uVar17,(char **)&local_6450);
            lVar10 = DAT_710463bea0;
            *(byte *)((long)local_6450 + (long)local_6448 + -1) = 0;
            if (*(uint *)(uVar17 + 0x40) != 0) {
              uVar16 = 0;
              do {
                for (lVar26 = *(long *)(*(long *)(uVar17 + 0x48) + uVar16 * 0x50 + 0x28);
                    lVar26 != 0; lVar26 = *(long *)(lVar26 + (ulong)(~uVar21 >> 0x1f) * 8)) {
                  plVar9 = *(long **)(lVar26 + 0x18);
                  if (local_6450 == plVar9) {
LAB_710075ce60:
                    plVar9 = (long *)(lVar26 + 0x20);
                    if (*(long *)(lVar26 + 0x28) != 0) {
                      plVar9 = (long *)(*(long *)(lVar26 + 0x28) + 0x28);
                    }
                    lVar26 = *plVar9;
                    if (lVar26 != 0) {
                      if (local_3390 < 1) goto LAB_710075d09c;
                      iVar7 = 0;
                      goto LAB_710075d048;
                    }
                    break;
                  }
                  plVar13 = local_6450;
                  lVar19 = 0x3fffff;
LAB_710075ce1c:
                  uVar21 = (uint)*(byte *)plVar13 - (uint)*(byte *)plVar9;
                  if (uVar21 == 0) {
                    if (*(byte *)plVar13 != 0) goto code_r0x00710075ce34;
                    goto LAB_710075ce5c;
                  }
                }
LAB_710075ce7c:
                uVar16 = uVar16 + 1;
              } while (uVar16 != *(uint *)(uVar17 + 0x40));
            }
            if (DAT_710463bea0 == 0) {
              puVar12 = (undefined8 *)aligned_alloc(8,0x40);
            }
            else {
              plVar9 = *param_2;
              if (plVar9 == (long *)0x0) {
                lVar26 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
                pplVar28 = (long **)(lVar10 + 8);
                if (lVar26 != 0) {
                  pplVar28 = (long **)(lVar26 + 0x88);
                }
                plVar9 = *pplVar28;
              }
              puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x40,8);
            }
            *(undefined8 *)((long)puVar12 + 0x1c) = 0;
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar27 = puVar12 + 2;
            *(undefined2 *)puVar27 = 1;
            *(undefined8 *)((long)puVar12 + 0x14) = 0;
            *(undefined8 *)((long)puVar12 + 0x24) = 0;
            *(undefined8 *)((long)puVar12 + 0x2c) = 0;
            *(undefined8 *)((long)puVar12 + 0x34) = 0;
            *(undefined4 *)((long)puVar12 + 0x3c) = 0;
            if (((DAT_7104647a80 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_7104647a80), iVar7 != 0)) {
              local_278 = "ainb";
              DAT_7104647a78 = FUN_71008ad8d8(DAT_710463bf58,&local_278);
              __cxa_guard_release(&DAT_7104647a80);
            } // Checks file magic?
            local_6497 = 0;
            local_64af = 0x101;
            local_64a0 = 0x1010100;
            local_645c = 0;
            uStack_649c = 0x1010100;
            uStack_6498 = 1;
            local_6494 = 0;
            local_64b0 = 1;
            local_646c = 0;
            uStack_6464 = 0;
            local_647c = 0;
            uStack_6474 = 0;
            local_648c = 0;
            uStack_6480 = 0;
            local_6458 = &DAT_7103776e54;
            uStack_6488 = (undefined4)DAT_7104647a78;
            uStack_6484 = (undefined4)((ulong)DAT_7104647a78 >> 0x20);
            local_64b8 = &PTR_LAB_7104212af0;
            local_64a8 = "AIControllerUnit";
            *(byte *)((long)local_6450 + (long)local_6448 + -1) = 0;
            if ((*(byte *)puVar27 >> 1 & 1) == 0) {
              *(undefined4 *)((long)puVar12 + 0x14) = 0;
              *(byte *)(puVar12 + 2) = *(byte *)puVar27 & 0xf0 | 2;
              *(undefined *)((long)puVar12 + 0x11) = 1;
              FUN_7100773020(DAT_710463e798,(long)puVar27,(char **)&local_6450,(long)&local_64b8);
            }
            else {
              lVar10 = puVar12[3];
              if (lVar10 != 0) {
                *(undefined *)((long)*(int *)(lVar10 + 0x2e0) + *(long *)(lVar10 + 0x2d8) + -1) = 0;
              }
              FUN_71007289f8(&local_278,&DAT_71036bad9a);
              *(undefined4 *)(undefined8 *)((long)puVar12 + 0x14) = 8;
            }
            iVar7 = local_63b0;
            if (local_63b0 < (int)local_63b8) {
              local_63b0 = local_63b0 + 1;
              local_63b8._4_4_ = local_63b8._4_4_ + iVar7;
              if ((int)local_63b8 <= local_63b8._4_4_) {
                local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
              }
              *(char ***)(local_63c0 + (long)local_63b8._4_4_ * 0x10) = ppcVar24;
              *(undefined8 **)((long)(local_63c0 + (long)local_63b8._4_4_ * 0x10) + 8) = puVar12;
            }
            goto LAB_710075cff4;
          }
          goto LAB_710075d35c;
        }
      }
      else {
        uVar21 = *(uint *)(param_2 + 0x209);
        if (uVar21 == 0xffffffff) {
          uVar17 = 0;
          goto LAB_710075c914;
        }
      }
      uVar2 = uVar21;
      if (*param_1 <= uVar21) {
        uVar2 = 0;
      }
      lVar10 = *(long *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8);
      *(undefined *)(lVar10 + 0x138) = 1;
      *(undefined *)(pplVar11 + 0x27) = 1;
      pplVar11[3] = *(long **)(lVar10 + 0x18);
      if (uVar23 < 0x200) {
        plVar13 = param_2[uVar23 + 0x309];
      }
      else {
        plVar13 = param_2[0x309];
      }
      if (plVar13 == (long *)0x0) {
        plVar13 = param_2[3];
      }
      pplVar11[4] = plVar13;
      *(undefined *)((long)*(int *)(lVar10 + 0x30) + *(long *)(lVar10 + 0x28) + -1) = 0;
      __dest = pplVar11[5];
      plVar13 = *(long **)(lVar10 + 0x28);
      if (__dest != plVar13) {
        if (plVar13 == (long *)0x0) {
LAB_710075dccc:
          uVar17 = 0;
        }
        else {
          uVar17 = (ulong)*(byte *)plVar13;
          if (*(byte *)plVar13 != 0) {
            uVar17 = 0;
            do {
              if (uVar17 == 0x400000) goto LAB_710075dccc;
              lVar26 = uVar17 + 1;
              uVar17 = uVar17 + 1;
            } while (*(byte *)((long)plVar13 + lVar26) != 0);
          }
        }
        iVar7 = (int)uVar17;
        if (*(int *)(pplVar11 + 6) <= (int)uVar17) {
          iVar7 = *(int *)(pplVar11 + 6) + -1;
        }
        memcpy(__dest,plVar13,(long)iVar7);
        *(byte *)((long)__dest + (long)iVar7) = 0;
      }
      memcpy(plVar9,(void *)(lVar10 + 0x34),0x100);
      *(uint *)((long)pplVar11 + 0x13c) = uVar21;
      goto LAB_710075d478;
    }
    goto LAB_710075d47c;
  }
LAB_710075d5ac:
  uVar23 = (ulong)*param_1;
  if (*param_1 != 0) {
    plVar9 = *(long **)(param_1 + 2);
    do {
      lVar10 = *plVar9;
      if ((((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) &&
          (*(char *)(lVar10 + 0x138) == '\0' || *(int *)(lVar10 + 0x13c) == -1)) &&
         ((int)param_1[4] < (int)param_1[5])) {
        *(long *)(*(long *)(param_1 + 6) + (long)(int)param_1[4] * 8) = *(long *)(lVar10 + 0x18);
        param_1[4] = param_1[4] + 1;
      }
      uVar23 = uVar23 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar23 != 0);
  }
  return 1;
code_r0x00710075ce34:
  plVar9 = (long *)((long)plVar9 + 1);
  plVar13 = (long *)((long)plVar13 + 1);
  bVar6 = lVar19 == 0;
  lVar19 = lVar19 + -1;
  if (bVar6) {
LAB_710075ce5c:
    if (lVar26 != 0) goto LAB_710075ce60;
    goto LAB_710075ce7c;
  }
  goto LAB_710075ce1c;
  while (iVar7 = iVar7 + 1, iVar7 < local_3390) {
LAB_710075d048:
    plVar9 = (long *)(*(code *)local_3398[2])(&local_3398,iVar7);
    if (*plVar9 == 0 && (char **)(plVar9 + 1) == ppcVar24) {
      *plVar9 = lVar26;
      FUN_710075e794(lVar26,(long *)&local_3398);
      break;
    }
  }
LAB_710075d09c:
  uVar16 = (ulong)local_7c14;
  bVar6 = 0x15d < local_7c14;
  local_7c14 = local_7c14 + 1;
  plVar9 = alStack_7a98 + uVar16;
  if (bVar6) {
    plVar9 = alStack_7a98;
  }
  *plVar9 = lVar26;
LAB_710075cff4:
  iVar7 = local_63b0;
  puVar18 = puVar18 + 1;
  if (puVar18 == puVar25) goto LAB_710075d0e0;
  goto LAB_710075cc00;
LAB_710075d0e0:
  if (local_63b0 != 0) {
    iVar22 = 0;
    do {
      local_63b8._4_4_ = local_63b8._4_4_ + iVar22;
      if ((int)local_63b8 <= local_63b8._4_4_) {
        local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
      }
      lVar10 = *(long *)(local_63c0 + (long)local_63b8._4_4_ * 0x10 + 8);
      if ((*(long *)(lVar10 + 0x28) != 0) && (*(int *)(lVar10 + 0x20) == 1)) {
        FUN_7100771288((long)(int *)(lVar10 + 0x20));
      }
      lVar10 = *(long *)(lVar10 + 0x18);
      if (lVar10 != 0) {
        *(undefined *)((long)*(int *)(lVar10 + 0x2e0) + *(long *)(lVar10 + 0x2d8) + -1) = 0;
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x138));
      }
      local_63b8._4_4_ = local_63b8._4_4_ + iVar22;
      if ((int)local_63b8 <= local_63b8._4_4_) {
        local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
      }
      FUN_710090bcc4((byte *)(*(long *)(local_63c0 + (long)local_63b8._4_4_ * 0x10 + 8) + 0x10),0);
      local_63b8._4_4_ = local_63b8._4_4_ + iVar22;
      if ((int)local_63b8 <= local_63b8._4_4_) {
        local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
      }
      lVar10 = *(long *)(local_63c0 + (long)local_63b8._4_4_ * 0x10 + 8);
      if (((((*(byte *)(lVar10 + 0x10) >> 1 & 1) == 0) ||
           (((*(long *)(lVar10 + 0x28) != 0 && (*(int *)(lVar10 + 0x20) == 1)) ||
            (lVar26 = *(long *)(lVar10 + 0x18), lVar26 == 0)))) ||
          ((cVar4 = *(char *)(lVar26 + 0xd2), cVar4 != '\x01' &&
           (((cVar4 != '\0' && (cVar4 != '\x06')) || (*(int *)(lVar26 + 0xc) == 7)))))) ||
         ((*(byte *)(lVar10 + 0x10) >> 3 & 1) == 0)) {
LAB_710075d338:
        puVar25 = (undefined8 *)0x0;
      }
      else {
        puVar18 = *(undefined8 **)(lVar26 + 0x28);
        puVar25 = puVar18;
        if (((*(int *)(lVar26 + 0xc) != 0xe) &&
            (puVar25 = (undefined8 *)0x0, puVar18 != (undefined8 *)0x0)) &&
           ((*(int *)(lVar26 + 0xc) == 8 &&
            (puVar25 = puVar18, (*(byte *)(lVar26 + 3) >> 4 & 1) != 0)))) goto LAB_710075d338;
      }
      if (((DAT_7104647508 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7104647508), iVar8 != 0))
      {
        DAT_7104647500 = &PTR_LAB_7104212b38;
        __cxa_guard_release(&DAT_7104647508);
      }
      if ((puVar25 == (undefined8 *)0x0) ||
         (lVar10 = (**(code **)*puVar25)(puVar25,&DAT_7104647500), lVar10 == 0)) {
        local_1ed = 0;
        local_278 = local_26c;
        local_26c[0] = '\0';
        local_270 = 0x80;
        uVar21 = local_63b8._4_4_ + iVar22;
        uVar16 = (ulong)uVar21;
        uVar23 = uVar16;
        if ((int)local_63b8 <= (int)uVar21) {
          uVar23 = (ulong)(uVar21 - (int)local_63b8);
        }
        if (**(char **)(*(long *)(local_63c0 +
                                 (-(uVar23 >> 0x1f) & 0xfffffff000000000 | uVar23 << 4)) + 8) ==
            '\0') {
          local_6450 = param_2[6];
        }
        else {
          if ((int)local_63b8 <= (int)uVar21) {
            uVar16 = (ulong)(uVar21 - (int)local_63b8);
          }
          local_6450 = *(long **)(*(long *)(local_63c0 +
                                           (-(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4)) +
                                 8);
        }
        FUN_710075dce8(&local_278,(char **)&local_6450,0xffffffff);
        local_6450 = (long *)&DAT_7103651102;
        FUN_710075dce8(&local_278,(char **)&local_6450,0xffffffff);
        uVar21 = local_63b8._4_4_ + iVar22;
        if ((int)local_63b8 <= (int)uVar21) {
          uVar21 = uVar21 - (int)local_63b8;
        }
        local_6450 = **(long ***)
                       (local_63c0 +
                       (-(ulong)(uVar21 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar21 << 4));
        FUN_710075dce8(&local_278,(char **)&local_6450,0xffffffff);
        FUN_710075de00(uVar17,&local_278);
        iVar7 = local_63b0;
        if (local_63b0 == 0) {
          return 0;
        }
        iVar22 = 0;
        goto LAB_710075d758;
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 != 0) {
        uVar21 = local_63b8._4_4_ + iVar22;
        if ((int)local_63b8 <= (int)uVar21) {
          uVar21 = uVar21 - (int)local_63b8;
        }
        if (0 < local_3390) {
          iVar8 = 0;
          plVar9 = *(long **)(local_63c0 +
                             (-(ulong)(uVar21 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar21 << 4));
          do {
            plVar13 = (long *)(*(code *)local_3398[2])(&local_3398,iVar8);
            if (*plVar13 == 0 && plVar13 + 1 == plVar9) {
              *plVar13 = lVar10;
              FUN_710075e794(lVar10,(long *)&local_3398);
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_3390);
        }
        uVar16 = (ulong)local_7c14;
        bVar6 = 0x15d < local_7c14;
        local_7c14 = local_7c14 + 1;
        plVar9 = alStack_7a98 + uVar16;
        if (bVar6) {
          plVar9 = alStack_7a98;
        }
        *plVar9 = lVar10;
      }
      local_63b8._4_4_ = local_63b8._4_4_ + iVar22;
      if ((int)local_63b8 <= local_63b8._4_4_) {
        local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
      }
      plVar9 = *(long **)(local_63c0 + (long)local_63b8._4_4_ * 0x10 + 8);
      lVar10 = plVar9[7];
      if (lVar10 != 0) {
        plVar9[7] = 0;
        if (*plVar9 != 0) {
          *(long *)(*plVar9 + 8) = plVar9[1];
        }
        if ((long *)plVar9[1] != (long *)0x0) {
          *(long *)plVar9[1] = *plVar9;
        }
        *plVar9 = 0;
        plVar9[1] = 0;
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
      }
      plVar9[7] = (long)pplVar11;
      plVar13 = *pplVar11;
      *pplVar11 = plVar9;
      *plVar9 = (long)plVar13;
      plVar9[1] = (long)pplVar11;
      if (plVar13 != (long *)0x0) {
        plVar13[1] = (long)plVar9;
      }
      iVar22 = iVar22 + 1;
      *(int *)(pplVar11 + 2) = *(int *)(pplVar11 + 2) + 1;
    } while (iVar22 != iVar7);
  }
  local_43a0 = auStack_4398;
  local_43a8 = 0x20000000000;
  if (local_3390 < 1) goto LAB_710075d35c;
  goto LAB_710075cb60;
LAB_710075d758:
  local_63b8._4_4_ = local_63b8._4_4_ + iVar22;
  if ((int)local_63b8 <= local_63b8._4_4_) {
    local_63b8._4_4_ = local_63b8._4_4_ - (int)local_63b8;
  }
  plVar9 = *(long **)(local_63c0 + (long)local_63b8._4_4_ * 0x10 + 8);
  lVar10 = plVar9[7];
  if (lVar10 != 0) {
    plVar9[7] = 0;
    if (*plVar9 != 0) {
      *(long *)(*plVar9 + 8) = plVar9[1];
    }
    if ((long *)plVar9[1] != (long *)0x0) {
      *(long *)plVar9[1] = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
  }
  if ((*(byte *)(plVar9 + 2) >> 1 & 1) != 0) {
    *(byte *)(plVar9 + 2) = *(byte *)(plVar9 + 2) & 0xf8 | 4;
    if (plVar9[5] == 0) {
      lVar10 = plVar9[3];
      if (lVar10 != 0) {
LAB_710075d814:
        lVar26 = DAT_710463e798;
        if (DAT_710463e798 != 0) {
          pMVar1 = (MutexType *)(DAT_710463e798 + 0x3d8);
          plVar9[3] = 0;
          nn::os::LockMutex(pMVar1);
          if (*(char *)(lVar26 + 0x3c8) == '\0') {
            iVar8 = *(int *)(lVar10 + 0x90) + -1;
            *(int *)(lVar10 + 0x90) = iVar8;
          }
          else {
            iVar8 = *(int *)(lVar10 + 0x8c) + -1;
            *(int *)(lVar10 + 0x8c) = iVar8;
          }
          if (iVar8 == -1) {
            uVar5 = (undefined2)((ulong)(lVar10 - *(long *)(lVar26 + 0x350)) / 0x390);
            if (*(char *)(lVar26 + 0x3c8) == '\x01') {
              uVar21 = *(uint *)(lVar26 + 0x3cc);
              if (*(uint *)(lVar26 + 0x3f8) <= uVar21) {
                uVar21 = 0;
              }
              *(undefined2 *)(*(long *)(lVar26 + 0x400) + (long)(int)uVar21 * 2) = uVar5;
              *(int *)(lVar26 + 0x3cc) = *(int *)(lVar26 + 0x3cc) + 1;
            }
            else {
              uVar21 = *(uint *)(lVar26 + 0x3d0);
              if (*(uint *)(lVar26 + 0x408) <= uVar21) {
                uVar21 = 0;
              }
              *(undefined2 *)(*(long *)(lVar26 + 0x410) + (long)(int)uVar21 * 2) = uVar5;
              *(int *)(lVar26 + 0x3d0) = *(int *)(lVar26 + 0x3d0) + 1;
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
      }
    }
    else {
      FUN_7100724870((long)(plVar9 + 4));
      lVar10 = plVar9[3];
      if (lVar10 != 0) goto LAB_710075d814;
      *(undefined4 *)((long)plVar9 + 0x14) = 0xe;
    }
  }
  if (plVar9[5] != 0) {
    FUN_7100724870((long)(plVar9 + 4));
    FUN_7100c8151c((long)(plVar9 + 4));
  }
  if (DAT_710463bea0 == 0) {
    free(plVar9);
  }
  else {
    plVar13 = FUN_7100783ac4(DAT_710463bea0,plVar9);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x38))(plVar13,plVar9);
    }
  }
  iVar22 = iVar22 + 1;
  if (iVar7 == iVar22) {
    return 0;
  }
  goto LAB_710075d758;
LAB_710075d35c:
  local_7bb0 = local_7c14;
  local_7be0 = *param_2;
  plStack_7bd8 = param_2[1];
  local_7a9c = local_7a9c & 0xff00 | (ushort)*(byte *)((long)param_2 + 0x2872);
  if (uVar23 < 0x200) {
    local_7bb8 = param_2[uVar23 + 0x309];
  }
  else {
    local_7bb8 = param_2[0x309];
  }
  if (local_7bb8 == (long *)0x0) {
    local_7bb8 = param_2[3];
  }
  local_7aa0 = *(undefined4 *)(param_2 + 0x512);
  local_7ab0 = *(undefined *)(param_2 + 0x50e);
  local_3398 = &PTR_FUN_71045294a0;
  local_7ab8 = param_2[4];
  pppuVar3 = &local_3398;
  if (*(undefined ****)(DAT_7104647ac0 + 0x1b0) != (undefined ***)0x0) {
    pppuVar3 = *(undefined ****)(DAT_7104647ac0 + 0x1b0);
  }
  plVar9 = (long *)(*(code *)(*pppuVar3)[4])(pppuVar3,param_2,uVar23 & 0xffffffff);
  *pplVar15 = plVar9;
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  uVar17 = (*(code *)(*pppuVar3)[5])(pppuVar3,&local_7be8,param_2);
  if (((uVar17 & 1) == 0) || (local_7aa8 == (char *)0x0)) {
    local_7aa8 = "Unknown";
  }
  FUN_710074cac4((long)*pplVar15,(long *)&local_7be8,0);
  (*pplVar15)[0xc] = (long)param_2[5];
  if (*(char *)((long)param_2 + 0x2871) != '\0') {
    local_63c0 = "";
    FUN_710075e648((long)*pplVar15,&local_63c0,0);
  }
  local_7c34 = local_7c34 + 1;
LAB_710075d478:
  uVar21 = *(uint *)(param_2 + 8);
LAB_710075d47c:
  lVar10 = DAT_710463bea0;
  uVar23 = uVar23 + 1;
  if (uVar21 <= uVar23) goto LAB_710075d564;
  goto LAB_710075c840;
LAB_710075d564:
  if (0 < (int)local_7c34) {
    if (DAT_710463bea0 == 0) {
      lVar10 = aligned_alloc(8,(long)(int)(local_7c34 << 3));
    }
    else {
      plVar9 = *param_2;
      if (plVar9 == (long *)0x0) {
        lVar26 = nn::os::GetTlsValue(*(TlsSlot *)(DAT_710463c000 + 0x48));
        pplVar11 = (long **)(lVar10 + 8);
        if (lVar26 != 0) {
          pplVar11 = (long **)(lVar26 + 0x88);
        }
        plVar9 = *pplVar11;
        if (plVar9 == (long *)0x0) goto LAB_710075d5ac;
      }
      lVar10 = (**(code **)(*plVar9 + 0x30))(plVar9,(long)(int)(local_7c34 << 3),8);
    }
    if (lVar10 != 0) {
      *(long *)(param_1 + 6) = lVar10;
      param_1[4] = 0;
      param_1[5] = local_7c34;
    }
  }
  goto LAB_710075d5ac;
}

