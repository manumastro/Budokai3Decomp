/* Draft (not built): func_001B93A0 at 0x001B93A0, size 0x460, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp44' @ 3337: *(f32 *)((u8 *)arg0 + 0x1810) = (f32) (3.0f * sp44);
 * Original: asm/nonmatchings/battle/btl_main/func_001B93A0.s */

// src/battle/btl_main.c func_001B93A0 cerr diff=-1/0
extern void (*D_004684A4[])(void *);
extern f32 func_001E52B0(s32);
extern void func_001E4DA0(void *);
void func_001B93A0(u8 *arg0) {
    s32 sp40;
    s32 *temp_a0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f22;
    f32 var_f3;
    s16 temp_a0;
    u8 *temp_a1;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    var_f22 = *(f32 *)((u8 *)arg0 + 0x1830) / *(f32 *)((u8 *)arg0 + 0x182C);
    temp_f20 = *(f32 *)((u8 *)temp_s0 + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (var_f22 < 1.0f) {

    } else {
        var_f22 = 1.0f;
    }
    temp_f21 = *(f32 *)((u8 *)arg0 + 0x182C) - *(f32 *)((u8 *)arg0 + 0x1830);
    Fighter_ResetMotion(arg0, 0);
    *(f32 *)((u8 *)arg0 + 0x1824) = (f32) (*(f32 *)((u8 *)arg0 + 0x1820) * (1.0f - (var_f22 * var_f22)));
    func_00146F10(&sp40, arg0 + 0xD0, 1.0f * temp_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(arg0, -1);
    func_001E4E20(arg0, 0);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x1844);
    var_f3 = *(f32 *)((u8 *)arg0 + 0x1824) + temp_f1;
    if (*(s8 *)((u8 *)arg0 + 0x183D) != 1) {
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x44);
        if ((temp_f2 - temp_f1) <= 15.0f) {
            if (temp_f2 < var_f3) {
                var_f3 = temp_f2;
            }
            *(f32 *)((u8 *)arg0 + 0x44) = var_f3;
        }
    }
    *(f32 *)((u8 *)arg0 + 0x1830) = (f32) (*(f32 *)((u8 *)arg0 + 0x1830) + temp_f20);
    if (*(s32 *)((u8 *)temp_s0 + 0x88F8) == 4) {
        temp_a1 = *(u8 **)((u8 *)arg0 + 0x1354);
        temp_a0 = *(s16 *)((u8 *)temp_a1 + 0xCAC);
        if (temp_a0 != 0x28) {
            if (temp_a0 == 0xF) {
                if (*(s8 *)((u8 *)temp_a1 + 0x2019) == 0) {
                    goto block_13;
                }
            } else {
                goto block_13;
            }
        }
    } else {
block_13:
        temp_f1_2 = 2.0f + *(f32 *)((u8 *)arg0 + 0x1844);
        if ((*(f32 *)((u8 *)arg0 + 0x44) <= temp_f1_2) || (*(f32 *)((u8 *)arg0 + 0x674) <= temp_f1_2)) {
            *(f32 *)((u8 *)arg0 + 0x44) = (f32) *(f32 *)((u8 *)arg0 + 0x1844);
            if (*(s8 *)((u8 *)arg0 + 0x183C) == 5) {
                func_001E4DA0(arg0);
                if (!(*(f32 *)((u8 *)arg0 + 0x124) < 0.0f)) {
                    *(s8 *)((u8 *)arg0 + 0x183C) = 0;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                } else {
                    *(s8 *)((u8 *)arg0 + 0x183C) = 1;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                    *(s32 *)((u8 *)arg0 + 0x17A4) = (s32) ((*(s32 *)((u8 *)arg0 + 0x17A4) + 0x7FFF + 1) & 0xFFFF);
                }
            }
            if (!(var_f22 < 0.6f)) {
                temp_a0_2 = (s32 *)(arg0 + 0xD0);
                func_00146F10(temp_a0_2, temp_a0_2, 0.75f);
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_004684A4[0](arg0);
                func_002CBFF0(1, arg0);
            } else {
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_004684BC(arg0);
                func_002CBFF0(1, arg0);
            }
        }
        if (temp_f21 < 0.5f) {
            if ((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 15.0f) {
                goto block_27;
            }
            goto block_30;
        }
block_27:
        if ((*(s16 *)((u8 *)temp_s0 + 0x8944) == 0) && !(func_001E52B0(0) < 150.0f)) {
block_30:
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
            if (*(s8 *)((u8 *)arg0 + 0x183C) == 5) {
                func_001E4DA0(arg0);
                if (!(*(f32 *)((u8 *)arg0 + 0x124) <= 0.0f)) {
                    *(s8 *)((u8 *)arg0 + 0x183C) = 0;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                } else {
                    *(s8 *)((u8 *)arg0 + 0x183C) = 1;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                    *(s32 *)((u8 *)arg0 + 0x17A4) = (s32) ((*(s32 *)((u8 *)arg0 + 0x17A4) + 0x7FFF + 1) & 0xFFFF);
                }
            }
            if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 0) {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                *(s16 *)((u8 *)arg0 + 0x181E) = 0;
                *(f32 *)((u8 *)arg0 + 0x1814) = (f32) (0.03f * (*(f32 *)((u8 *)arg0 + 0x1828) * var_f22));
                *(f32 *)((u8 *)arg0 + 0x1810) = (f32) (3.0f * sp44);
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_004684A0(arg0);
                func_002CBFF0(1, arg0);
                return;
            }
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684B4(arg0);
            func_002CBFF0(1, arg0);
        }
    }
}
