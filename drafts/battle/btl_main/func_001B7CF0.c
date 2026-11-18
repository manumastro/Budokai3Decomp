/* Draft (not built): func_001B7CF0 at 0x00468BB0, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 3062: *(&D_00468460 + (var_s0 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001B7CF0.s */

// src/battle/btl_main.c func_001B7CF0 cerr diff=-1/0
extern void func_0011F4C0(void);
void func_001B7CF0(u8 *arg0) {
    s32 sp40;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    s16 var_a0;
    s32 temp_s0;
    s32 var_s0;
    s32 var_v1;

    var_f0 = 0.0f;
    temp_f1 = 1.0f - (*(f32 *)((u8 *)arg0 + 0xCB8) / *(f32 *)((u8 *)arg0 + 0x180C));
    temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (!(temp_f1 >= 0.0f)) {

    } else {
        var_f0 = temp_f1;
    }
    if (!(var_f0 <= 0.0f)) {
        func_0011F4C0();
        var_f0 = M2C_ERROR(/* Read from unset register $f0 */) * M2C_ERROR(/* Read from unset register $f0 */);
    }
    func_00146F10(&sp40, arg0 + 0xD0, var_f0 * temp_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    Fighter_ResetMotion(arg0, 0);
    if (*(f32 *)((u8 *)arg0 + 0xCB8) < 10.0f) {
        func_0011F4C0();
        *(f32 *)((u8 *)arg0 + 0xC58) = (f32) (10.0f * M2C_ERROR(/* Read from unset register $f0 */));
        *(f32 *)((u8 *)arg0 + 0xC60) = (f32) ((f32) *(s32 *)((u8 *)arg0 + 0xC5C) - *(f32 *)((u8 *)arg0 + 0xC58));
    }
    var_a0 = 0;
    if (*(f32 *)((u8 *)arg0 + 0xC60) <= 15.0f) {
        if (0 == -1) {
            var_a0 = *(s16 *)((u8 *)arg0 + 0xCAC);
        }
        switch (var_a0) {
        case 0:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
            break;
        case 1:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
            break;
        case 4:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
            break;
        case 5:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
            break;
        case 6:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
            break;
        case 7:
        case 8:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
            break;
        case 9:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
            break;
        case 11:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
            break;
        default:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
            break;
        }
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
    }
    if ((*(s32 *)((u8 *)arg0 + 0xC64) != 0) || !(*(f32 *)((u8 *)arg0 + 0xCB8) < *(f32 *)((u8 *)arg0 + 0x1804))) {
        var_v1 = 1;
        temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10);
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if (!(temp_s0 & 3) && (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0)) {
            if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {

            } else {
                var_v1 = 0;
            }
            if (var_v1 != 0) {
                *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
                *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
            }
        }
        func_001E5040(arg0);
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        func_001DD680(arg0);
        if (temp_s0 & 1) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            var_s0 = 0x12;
            func_001ABD30((void *)(arg0 + 0x1360));
        } else if (temp_s0 & 2) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            var_s0 = 0x12;
            func_001ABD30((void *)(arg0 + 0x1360));
        } else {
            if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                var_s0 = func_001C2B10(arg0);
            } else {
                var_s0 = func_001E94C0(arg0);
            }
            if (var_s0 == 0) {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            } else {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            }
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_s0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        *(&D_00468460 + (var_s0 * 4))(arg0);
        func_002CBFF0(1, arg0);
    }
}
