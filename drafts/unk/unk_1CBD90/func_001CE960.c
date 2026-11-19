/* Draft (not built): func_001CE960 at 0x001CE960, size 0x3B4, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 168 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2DC, original 0x3B4
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CE960.s */

// src/unk/unk_1CBD90.c func_001CE960 size diff=168/183
s32 func_0013B500(s32);
s32 func_001DCC80(void *);
extern void func_0013B160(void *);
extern char D_003F0800[];
extern void func_0013B620(void *);
s32 func_001CE960(s32 unused_arg0, u8 *arg1) {
    s32 saved_reg_s1;
    s16 var_s1;
    s16 var_s1_2;
    s16 var_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s2;
    s16 phi_s1;

    var_s1 = saved_reg_s1;
    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    var_s4 = *(s32 *)((u8 *)temp_v0 + 0);
    var_s3 = *(s32 *)((u8 *)temp_v0 + 4);
    var_s0 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_v0 + 8) * 4) + gBattle) + 0x8934);
    var_s2 = var_s0 + 0x650;
    phi_s1 = saved_reg_s1;
    if (var_s3 & 0x40) {
        var_s2 += 0x680;
    }
    *(s32 *)((u8 *)var_s0 + 0x1864) = 0;
    if (var_s3 & 2) {
        *(s32 *)((u8 *)var_s0 + 0x1864) = (s32) (*(s32 *)((u8 *)var_s0 + 0x1864) | 1);
    }
    if (var_s3 & 4) {
        *(s32 *)((u8 *)var_s0 + 0x1864) = (s32) (*(s32 *)((u8 *)var_s0 + 0x1864) | 2);
    }
    if (*(s32 *)((u8 *)var_s0 + 0x1864) != 0) {
        func_001E5040(var_s0);
    }
    if (var_s3 & 1) {
        *(s32 *)((u8 *)var_s2 + 0x654) = 0x3C23D70A;
        *(s32 *)((u8 *)var_s2 + 0x658) = 0x3DCCCCCD;
    } else {
        *(s32 *)((u8 *)var_s2 + 0x654) = 0x3F800000;
        *(s32 *)((u8 *)var_s2 + 0x658) = 0;
        if (!(var_s3 & 0x40)) {
            func_001DCC80(var_s0);
        }
    }
    var_v0 = 1;
    if (var_s3 & 8) {

    } else {
        var_v0 = 0;
    }
    *(s16 *)((u8 *)var_s2 + 0x666) = var_v0;
    if (!(var_s3 & 0x40)) {
        var_s1_2 = 1;
        phi_s1 = 1;
        if (var_s3 & 0x10) {
            *(s32 *)((u8 *)var_s0 + 0xD0) = 0;
            *(s32 *)((u8 *)var_s0 + 0xD4) = 0;
            var_s1_2 = 2;
            *(f32 *)((u8 *)var_s0 + 0xD8) = (f32) (*(f32 *)(D_004B4238));
            *(s32 *)((u8 *)var_s0 + 0xDC) = 0x3F800000;
            func_0013B160(D_003F0800);
            func_0013B620(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1354)) + 0x17A4));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            phi_s1 = 2;
        }
        if (var_s3 & 0x20) {
            var_s1_2 = 3;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_v1 = ((s32)(D_004B4230)) & 0xF0000;
            phi_s1 = 3;
            switch (temp_v1) {                      /* irregular */
            case 0x0:
                if (!(var_s3 & 0x01000000)) {
                    *(f32 *)((u8 *)var_s0 + 0x104) = (f32) (*(f32 *)((u8 *)var_s0 + 0x104) + func_00200270(0, *(f32 *)((u8 *)var_s0 + 0x100), *(f32 *)((u8 *)var_s0 + 0x108)));
                }
                break;
            case 0x10000:
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                break;
            case 0x20000:
                func_0013B160(D_003F0800);
                func_0013B620(*(u8 **)((u8 *)var_s0 + 0x17A4));
                func_0013B500(*(s32 *)((u8 *)var_s0 + 0x17A8));
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
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                break;
            case 0x30000:
                func_0013B160(D_003F0800);
                func_0013B620(*(u8 **)((u8 *)var_s0 + 0x17A4));
                func_0013B500(*(s32 *)((u8 *)var_s0 + 0x17A8));
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
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                break;
            }
            *(f32 *)((u8 *)var_s0 + 0x182C) = (f32) (*(f32 *)(D_004B4234));
        }
    }
    *(s32 *)((u8 *)var_s2 + 0x520) = var_s4;
    if (var_s3 & 0x80000000) {
        *(s32 *)((u8 *)var_s2 + 0x520) = (s32) (*(s32 *)((u8 *)var_s2 + 0x520) | 0x10000);
    }
    *(s16 *)((u8 *)var_s2 + 0x664) = phi_s1;
    if (var_s3 & 0x40) {
        var_a1 = 0x2D;
    } else {
        var_a1 = 0xF;
    }
    func_001C75D0(var_s0, var_a1);
    if (var_s3 & 0x80) {
        *(f32 *)((u8 *)var_s2 + 0x608) = (f32) (*(f32 *)(D_004B423C));
    }
    return 1;
}
