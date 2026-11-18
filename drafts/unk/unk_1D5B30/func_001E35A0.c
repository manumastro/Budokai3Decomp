/* Draft (not built): func_001E35A0 at 0x001E35A0, size 0x35C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal implicit conversion from 'long' to 'struct PtrCount' mwccps2.exe Compiler: @ 3400: func_002470B0(-1, (s64) sp78);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E35A0.s */

// src/unk/unk_1D5B30.c func_001E35A0 cerr diff=-1/0
s32 func_00247060(void *, f32);
s32 func_00247080(s32 *);
extern void AdxSlot_SetVolume(void *, float);
s32 func_001E35A0(s32 arg0, s32 arg1) {
    s32 sp50;
    s32 sp60;
    u8 *sp78;
    s32 sp7C;
    f32 temp_f20;
    f32 var_f12;
    f32 var_f3;
    s32 var_v0;
    s64 temp_v1;
    s8 temp_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    temp_v0 = *(s8 *)((u8 *)temp_s0 + 0x8AB9);
    if (temp_v0 == 0) {
        return 0;
    }
    temp_v1 = (s64) ((s64) temp_v0 << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 1:
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0xCB4) = 2;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8938)) + 0xCB4) = 2;
        sp7C = 3;
        sp78 = *(u8 **)((u8 *)temp_s0 + 0x8934);
        func_002470B0(-1, (s64) sp78);
        sp78 = *(u8 **)((u8 *)temp_s0 + 0x8938);
        func_002470B0(-1, (s64) sp78);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00247080(&sp60);
        sp50 = -1;
        A2d_CallHandler(0x2F, &sp50);
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1A36) = 0;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1A38) = 0;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1A34) = 0;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8938)) + 0x1A36) = 0;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8938)) + 0x1A38) = 0;
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8938)) + 0x1A34) = 0;
        func_001E9B00(1, 0x24, 0, 0, 0, 0x3F800000);
        AdxSlot_Suspend(temp_s0 + ((*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1350) + 3) << 5) + 0x5C4, 0x6A, 0, -1);
        *(s8 *)((u8 *)temp_s0 + 0x8AB9) = 2;
        /* fallthrough */
    case 2:
        var_v0 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1A38) - *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8938)) + 0x1A38);
        if (var_v0 >= 0x65) {
            var_v0 = 0x64;
        } else if (var_v0 < -0x64) {
            var_v0 = -0x64;
        }
        temp_f20 = (f32) (var_v0 + 0x64) / 200.0f;
        func_00247060(*(u8 **)((u8 *)temp_s0 + 0x8934), temp_f20);
        func_00247060(*(u8 **)((u8 *)temp_s0 + 0x8938), 1.0f - temp_f20);
        var_f3 = temp_f20 - 0.5f;
        if (var_f3 < 0.0f) {
            var_f3 = -var_f3;
        }
        var_f12 = 0.2f + (2.0f * var_f3);
        if (var_f12 < 1.0f) {

        } else {
            var_f12 = 1.0f;
        }
        AdxSlot_SetVolume(temp_s0 + ((*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x8934)) + 0x1350) + 3) << 5) + 0x5C4, 0.7f + (0.3f * var_f12));
        break;
    }
    return 1;
}
