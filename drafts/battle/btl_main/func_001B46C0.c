/* Draft (not built): func_001B46C0 at 0x00468940, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); gal implicit conversion from 'unsigned char *' to 'float' @ 2840: func_001E4820(arg0, 0, (s32)((f32)(s32)(0x3F800000)));
 * Original: asm/nonmatchings/battle/btl_main/func_001B46C0.s */

// src/battle/btl_main.c func_001B46C0 cerr diff=-1/0
extern void func_001D9960(Fighter *f, s32 a, s32 b);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern void func_001E4F40(void *f);
s32 func_0013B190(s32);
s32 func_0013B580(f32);
s16 func_001D7E10(void *);
s32 func_001E1850(void *, s32);
s32 func_001FED00(s32 *, s32 *, s32 *);
extern s32 D_00431420;
extern s128 D_00431440;
extern void func_0013B160(void *);
extern char D_003F0800[];
void func_001B46C0(u8 *arg0) {
    u8 sp[0x400];
    f32 sp50;
    s32 sp60;
    s32 sp90;
    s32 spB0;
    s32 spC0;
    f32 spC4;
    s32 spD0;
    s32 spE0;
    f32 spE4;
    s32 spF0;
    s32 spFC;
    s32 sp100;
    s16 var_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s8 var_v0_2;
    s8 var_v0_3;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x27;
    var_s2 = 0;
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
    *(s16 *)((u8 *)arg0 + 0xCB4) = func_001D7E10(arg0);
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        sp100 = *(s32 *)((u8 *)arg0 + 0x1350);
        spFC = 0;
        func_00218440(0xE, &spF0);
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        func_001E5040(arg0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        spC4 = 0.0f;
        func_00146ED0((f32 *)(&spC0), (f32 *)(&spC0), *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0x10) + *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xBB4)) + 0x10));
        var_s1 = 0;
        *(s128 *)((u8 *)(&sp90) + 0) = (s128) *(s128 *)((u8 *)(&D_00431420) + 0);
        *(s64 *)((u8 *)(&sp90) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00431420) + 0x10);
        *(f32 *)((u8 *)(&sp90) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00431420) + 0x18);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        var_s0 = 0;
        spE4 = *(f32 *)((u8 *)arg0 + 0x654);
loop_34:
        if (var_s0 >= 7) {

        } else {
            func_0013B160(D_003F0800);
            func_0013B580((3.1415927f * (2.0f * *(f32 *)((u8 *)((var_s1 * 4) + sp) + 0x90))) / 360.0f);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            if (func_001FED00(&sp60, &spE0, &spD0) != 0) {
                var_s0 += 1;
                var_s1 += 1;
                goto loop_34;
            }
        }
        if (var_s1 < 7) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = (s8) *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FF9);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_001E4E20(arg0, 0);
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
                *(s32 *)((u8 *)arg0 + 0x1864) = 8;
                func_001E5040(arg0);
            }
        }
        func_001E4FA0(arg0, -1);
        func_001E4F40(arg0);
    } else {
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        func_001E5040(arg0);
        sp50 = (s128) D_00431440;
        func_0013B0B0(arg0);
        func_0013B190(0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B110(1);
        if (sp50 < 0.0f) {
            var_s2 = 1;
        }
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (var_s2 + 0xEC);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    func_001E4820(arg0, 0, (s32)((f32)(s32)(0x3F800000)));
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    var_v0_2 = 0;
    if (*(s16 *)((u8 *)arg0 + 0xCB4) != 0) {

    } else {
        var_v0_2 = 1;
    }
    *(s8 *)((u8 *)arg0 + 0xCBD) = var_v0_2;
    if (*(s16 *)((u8 *)arg0 + 0xCB4) != 0) {
        var_v0_3 = 1;
    } else {
        var_v0_3 = 0;
    }
    *(s8 *)((u8 *)arg0 + 0x2004) = var_v0_3;
    if (func_001E1850(arg0, *(s32 *)((u8 *)arg0 + 0xBA4)) == 1) {
        *(f32 *)((u8 *)arg0 + 0x1A44) = (f32) (*(f32 *)((u8 *)arg0 + 0x1A44) * 1.25f);
    }
    func_001E3100(arg0);
    func_001D9C00(arg0);
    Btl_UpdateLimitXY(0, 0x3F4CCCCD, 0x3DA3D70A);
    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
    *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x200C) = 1;
    func_001DD680(arg0);
    func_001D9900(arg0, 9, 1);
    func_001D9960((Fighter *)(arg0), 0x1F, 0);
}
