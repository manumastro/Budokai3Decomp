/* Draft (not built): func_002FEBD0 at 0x002FEBD0, size 0x190, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x118, original 0x190
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FEBD0.s */

// src/unk/unk_2FAFF0.c func_002FEBD0 size diff=50/70
s32 func_00136870(s32, s32, s128 *, s32, f32);
s32 func_00137B60(f32 *);
extern s128 D_00458BF0;
extern void amDraw_FlushPacket(void);
void func_002FEBD0(f32 fparg0, f32 fparg1, f32 fparg2) {
    s128 sp20;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 temp_f0;
    f32 var_f12;
    f32 var_f20;

    var_f12 = fparg0;
    var_f20 = fparg1;
    if (fparg2 < -5.0f) {
        goto block_3;
    }
    if (fparg2 <= 605.0f) {
        goto block_4;
    }
block_3:
    return;
block_4:
    temp_f0 = var_f20;
    if (var_f12 <= var_f20) {
        goto block_6;
    }
    var_f20 = var_f12;
    var_f12 = temp_f0;
block_6:
    if (var_f20 < -5.0f) {
        goto block_8;
    }
    if (var_f12 <= 805.0f) {
        goto block_9;
    }
block_8:
    return;
block_9:
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    sp34 = fparg2 - 2.5f;
    sp30 = var_f12 - 2.5f;
    sp20 = D_00458BF0;
    sp2C = *(f32 *)((u8 *)(*(s32 *)((u8 *)gTourMap + 0x40) + 0x30) + 4);
    func_00136870(1, 0x910, &sp20, -1, var_f12);
    func_00137B60(&sp30);
    sp34 += 5.0f;
    func_00137B60(&sp30);
    sp30 = 2.5f + var_f20;
    sp34 -= 5.0f;
    func_00137B60(&sp30);
    sp34 += 5.0f;
    func_00137B60(&sp30);
    amDraw_FlushPacket();
    return;
}
