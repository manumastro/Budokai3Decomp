/* Draft (not built): func_001B4DC0 at 0x00468970, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 139 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x360, original 0x3B8
 * Original: asm/nonmatchings/battle/btl_main/func_001B4DC0.s */

// src/battle/btl_main.c func_001B4DC0 size diff=139/216
extern void func_001D9960(Fighter *f, s32 a, s32 b);
extern s32 func_0012EAE0(s32);
void func_001B4DC0(u8 *arg0) {
    s32 sp44;
    s32 sp20;
    s32 sp30;
    f32 sp34;
    s32 sp40;
    s16 var_v0;
    s64 temp_v1;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x26;
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
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        sp34 += *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_v1 = (s64) ((s64) *(s16 *)((u8 *)arg0 + 0xCB4) << 0x30) >> 0x30;
    if (temp_v1 != 2) {
        if (temp_v1 != 1) {
            if (temp_v1 != 0) {

            } else if (!(sp44 <= 0.5f)) {
                *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((func_0012EAE0(0x20) % 5U) + 0xB8);
            } else if (sp44 < -0.5f) {
                *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((func_0012EAE0(0x20) % 5U) + 0xC2);
            } else {
                *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((func_0012EAE0(0x20) % 5U) + 0xBD);
            }
        } else {
            *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((func_0012EAE0(0x20) % 5U) + 0xC7);
        }
    } else {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((func_0012EAE0(0x20) % 5U) + 0xCC);
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0x1864) = 1;
    func_001E5040(arg0);
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == 0x26) {
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3E4CCCCD;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
    } else {
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    }
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
    Btl_UpdateLimitXY(0, 0x3F4CCCCD, 0x3DA3D70A);
    sp20 = *(s32 *)((u8 *)arg0 + 0x1350);
    A2d_CallHandler(0xC, &sp20);
    func_001DD680(arg0);
    func_001D9900(arg0, 8, 1);
    func_001D9960((Fighter *)(arg0), 0x1E, 0);
}
