/* Draft (not built): func_002FED60 at 0x002FED60, size 0x170, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x12C, original 0x170
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FED60.s */

// src/unk/unk_2FAFF0.c func_002FED60 size diff=61/75
s32 func_00136870(s32, s32, s128 *, s32, f32);
s32 func_00137B60(f32 *);
extern s128 D_00458BE0;
extern void amDraw_FlushPacket(void);
void func_002FED60(f32 fparg0, f32 fparg1, f32 fparg2) {
    s128 sp20;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 temp_f0;
    f32 var_f13;
    f32 var_f20;

    var_f13 = fparg1;
    var_f20 = fparg2;
    if (!(fparg0 < -5.0f)) {
        if (!(fparg0 <= 805.0f)) {

        } else {
            temp_f0 = var_f20;
            if (!(var_f13 <= var_f20)) {
                var_f20 = var_f13;
                var_f13 = temp_f0;
            }
            if ((var_f20 < -5.0f) || !(var_f13 <= 605.0f)) {
                return;
            }
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            sp34 = var_f13;
            sp30 = fparg0 - 2.5f;
            sp20 = D_00458BE0;
            sp2C = *(f32 *)((u8 *)(*(s32 *)((u8 *)gTourMap + 0x40) + 0x30) + 4);
            func_00136870(1, 0x910, &sp20, -1, var_f13);
            func_00137B60(&sp30);
            sp30 += 5.0f;
            func_00137B60(&sp30);
            sp34 = var_f20;
            sp30 -= 5.0f;
            func_00137B60(&sp30);
            sp30 += 5.0f;
            func_00137B60(&sp30);
            amDraw_FlushPacket();
        }
    }
}
