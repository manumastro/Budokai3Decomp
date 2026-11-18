/* Draft (not built): func_001B5E70 at 0x001B5E70, size 0x264, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 102 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E4, original 0x264
 * Original: asm/nonmatchings/battle/btl_main/func_001B5E70.s */

// src/battle/btl_main.c func_001B5E70 size diff=102/121
extern void func_0011F680(void);
void func_001B5E70(u8 *arg0) {
    s16 var_v0;
    s32 var_v0_2;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x21;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {
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
    func_0011F680();
    *(f32 *)((u8 *)arg0 + 0x17A4) = (f32) (65536.0f * (M2C_ERROR(/* Read from unset register $f0 */) / 6.2831855f));
    if (*(s16 *)((u8 *)arg0 + 0xCB4) != 0) {
        *(f32 *)((u8 *)arg0 + 0x17A4) = M2C_BITWISE(f32, ((M2C_BITWISE(s32, *(f32 *)((u8 *)arg0 + 0x17A4)) + 0x7FFF + 1) & 0xFFFF));
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(arg0, -1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_v0_2 = 0x86;
    if (*(s16 *)((u8 *)arg0 + 0xCB4) != 0) {

    } else {
        var_v0_2 = 0x90;
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = var_v0_2;
    func_001E3460(arg0);
    *(f32 *)((u8 *)arg0 + 0xCA4) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0xCA8) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    *(s8 *)((u8 *)arg0 + 0x1FFC) = 1;
    func_001A8770(2, NULL);
}
