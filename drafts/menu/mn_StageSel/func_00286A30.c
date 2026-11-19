/* Draft (not built): func_00286A30 at 0x00286A30, size 0x220, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 94 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x228, original 0x220
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00286A30.s */

// src/menu/mn_StageSel.c func_00286A30 size diff=94/138
s32 A2d_SetMode(s32);
s32 func_001484A0(s32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_0046B860;
extern s32 D_0046B861;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s16 D_004E05F8;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00286A30(u8 *arg0) {
    s16 temp_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    u8 *temp_a0;
    u8 *temp_a0_2;

    if (D_004E05F8 != 0) {
        func_001484A0(3);
        A2d_SetMode(1);
    } else {
        func_001484A0(0);
        A2d_SetMode(0);
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x7000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14), 0);
    *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0x30), 0);
    *(s32 *)((u8 *)arg0 + 0x20) = func_0022D670(**(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C), 0);
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xC), 0);
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x34), 0);
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x40), 0);
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x4C), 0);
    *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x58), 0);
    *(s32 *)((u8 *)arg0 + 0x3C) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x64), 0);
    temp_v1 = *(s16 *)((u8 *)arg0 + 0x25C);
    if (*(s16 *)((u8 *)arg0 + 0x25E) != temp_v1) {
        *(s16 *)((u8 *)arg0 + 0x25E) = temp_v1;
        temp_a0_2 = *(u8 **)((u8 *)arg0 + 4);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x7000);
        D_00470238 = 0;
        temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x18);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
        }
        *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (*(&D_0046B860 + (*(s16 *)((u8 *)arg0 + 0x25C) * 2)) * 4)), 0);
        temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x28);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        *(s32 *)((u8 *)arg0 + 0x28) = func_0022D670(*(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (*(&D_0046B861 + (*(s16 *)((u8 *)arg0 + 0x25C) * 2)) * 4)), 0);
    }
    func_00286C50(arg0);
}

/* Similar function already in C: func_002C1860 (src/story/str_status.c), similarity 0.69.
 * It is the template below (not built). */
#if 0
void func_002C1860(u8 *arg0)
{
  u8 temp_a0_2;
  u8 *temp_a0;
  u8 *new_var;
  temp_a0 = *((u8 **) (((u8 *) arg0) + 4));
  D_00470704 = (s32) temp_a0;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0, 0x2000);
  D_00470238 = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 8)), 0);
  *((s32 *) (((u8 *) arg0) + 0x10)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0x10)), 0);
  *((s32 *) (((u8 *) arg0) + 0x14)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0x18)), 0);
  *((s32 *) (((u8 *) arg0) + 0x18)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0x20)), 0);
  *((s32 *) (((u8 *) arg0) + 0x1C)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0x30)), 0);
  *((s32 *) (((u8 *) arg0) + 0x20)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0xC8)), 0);
  *((s32 *) (((u8 *) arg0) + 0x24)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0xA8)), 0);
  *((s32 *) (((u8 *) arg0) + 0x28)) = 0;
  new_var = (u8 *) arg0;
  *((s32 *) (new_var + 0x2C)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (new_var + 0)))) + 0x1C)))) + 0x28)), 0);
  *((s32 *) (new_var + 0x30)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (new_var + 0)))) + 0x1C)))) + 0x90)), 0);
  if ((*((u8 *) (new_var + 0xAB))) == 0)
  {
    goto block_2;
  }
  *((s32 *) (((u8 *) arg0) + 0x34)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x1C)))) + 0x68)), 0);
  goto block_3;
  block_2:
  *((s32 *) (new_var + 0x34)) = 0;

  block_3:
  temp_a0_2 = *((u8 *) (new_var + 0xAB));

  if (((s32) temp_a0_2) < ((s32) (*((u8 *) (((u8 *) arg0) + 0xAD)))))
  {
    goto block_6;
  }
  if (((s32) temp_a0_2) >= 2)
  {
    goto block_8;
  }
  block_6:
  *((s32 *) (new_var + 0x38)) = func_0022D670(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) (*((u8 **) (new_var + 0)))) + 0x1C)))) + 0x6C)), 0);

  return;
  block_8:
  *((s32 *) (((u8 *) arg0) + 0x38)) = 0;

  return;
}
#endif
