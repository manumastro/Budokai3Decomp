/* Draft (not built): func_00217F70 at 0x00217F70, size 0x230, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 4480: *(&D_00469C70 + (temp_s1 * 4))(&sp30, temp_a1, &sp80);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00217F70.s */

// src/unk/unk_20A4D0.c func_00217F70 cerr diff=-1/0
extern void (*D_00469C70[])(void *, void *);
s32 func_0013B460(s16, f32);
s32 func_0013B580(s16, f32);
extern char D_003F0800[];
s32 func_00217F70(u8 *arg1) {
    s32 sp30;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s32 sp70;
    s32 *sp80;
    f32 *sp84;
    s128 temp_a1;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_s1;
    u8 *temp_s0;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s1 = *(s32 *)((u8 *)temp_v1 + 8);
    temp_s0 = *(u8 **)((u8 *)(*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0x10) * 4) + gBattle) + 0x8934) + (*(s32 *)((u8 *)temp_v1 + 0xC) * 0x680)) + 0xBB8);
    if (*(s32 *)((u8 *)temp_v1 + 0) != -1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        func_00146F30(&sp60);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B0B0((void *)(D_003F0800));
        temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x17A4);
        func_0013B580(temp_a0, (3.1415927f * (f32) temp_a0) / 32768.0f);
        temp_a0_2 = *(s16 *)((u8 *)temp_s0 + 0x17A8);
        func_0013B460(temp_a0_2, (3.1415927f * (f32) temp_a0_2) / 32768.0f);
        sp68 = 1.0f;
        sp60 = 0.0f;
        sp6C = 1.0f;
        sp64 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_0013B110(1);
    }
    memset(&sp80, 0, 0x2C);
    sp80 = &sp70;
    sp84 = &sp60;
    temp_a1 = *(s128 *)((u8 *)(&sp80) + 0);
    *(s128 *)((u8 *)(&sp30) + 0) = temp_a1;
    *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&sp80) + 0x10);
    *(s64 *)((u8 *)(&sp30) + 0x20) = (s64) *(s64 *)((u8 *)(&sp80) + 0x20);
    *(f32 *)((u8 *)(&sp30) + 0x28) = (f32) *(f32 *)((u8 *)(&sp80) + 0x28);
    if ((temp_s1 >= 0) && (temp_s1 < 0x11)) {
        *(&D_00469C70 + (temp_s1 * 4))(&sp30, temp_a1, &sp80);
    }
    return 1;
}
