/* Draft (not built): func_00203250 at 0x00203250, size 0x298, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x230, original 0x298
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00203250.s */

// src/unk/unk_1FB760.c func_00203250 size diff=111/140
s32 func_00141C80(s32 *, void *, f32);
extern f32 D_0051D9A8;
s32 func_00203250(u8 *arg0) {
    s32 sp60;
    s32 sp70;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;

    var_s3 = arg0;
    var_s2 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s1 = *(u8 **)((u8 *)arg0 + 0x3C);
    var_s0 = var_s3 + 0x44;
loop_20:
    if (var_s1 != var_s0) {
        *(f32 *)((u8 *)var_s1 + 8) = (f32) (*(f32 *)((u8 *)var_s1 + 8) + D_0051D9A8);
        *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) & ~1);
        temp_f1 = *(f32 *)((u8 *)var_s1 + 8);
        temp_f20 = *(f32 *)((u8 *)var_s2 + 0x50);
        temp_f21 = temp_f1 / temp_f20;
        if (temp_f1 <= 0.0f) {
            *(s32 *)((u8 *)var_s1 + 0xC) = (s32) (*(s32 *)((u8 *)var_s1 + 0xC) | 1);
        } else {
            func_00146F10((void *)(&sp70), (void *)(var_s1 + 0x20),(*(f32 *)(D_0051D9AC)));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if (!(temp_f20 < 0.0f) && !(*(f32 *)((u8 *)var_s1 + 8) < temp_f20)) {
                if (*(s32 *)((u8 *)var_s3 + 0x1C) != 0) {
                    func_00208530(var_s3, var_s1);
                }
                **(u8 ***)((u8 *)var_s1 + 4) = *(u8 **)((u8 *)var_s1 + 0);
                *(u8 ***)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 4) = (u8 **) *(u8 ***)((u8 *)var_s1 + 4);
                *(s32 *)((u8 *)var_s3 + 0x4C) = (s32) (*(s32 *)((u8 *)var_s3 + 0x4C) - 1);
                *(((u8 *)&D_00526440) + (D_0047066C * 4)) = (unsigned char)(var_s1);
                D_0047066C += 1;
                if (D_0047066C >= 0x800) {
                    D_0047066C = 0;
                }
            } else {
                if (*(s32 *)((u8 *)var_s2 + 8) & 4) {
                    func_00141C80(&sp60, var_s1 + 0x40, *(f32 *)((u8 *)var_s1 + 0x4C) * (*(f32 *)(D_0051D9AC)));
                    temp_a0 = var_s1 + 0x30;
                    func_00142080((u8 *)(temp_a0), (u8 *)(temp_a0), (u8 *)(&sp60));
                }
                if (*(s32 *)((u8 *)var_s2 + 8) & 8) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
                    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
                }
                if (*(s32 *)((u8 *)var_s2 + 8) & 0x10) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
                    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
                }
                if (*(s32 *)((u8 *)var_s2 + 8) & 0x20) {
                    *(f32 *)((u8 *)var_s1 + 0x70) = (f32) (*(f32 *)((u8 *)var_s1 + 0x70) + (*(f32 *)((u8 *)var_s2 + 0xB4) * (*(f32 *)(D_0051D9AC))));
                    *(f32 *)((u8 *)var_s1 + 0x74) = (f32) (*(f32 *)((u8 *)var_s1 + 0x74) + (*(f32 *)((u8 *)var_s2 + 0xB8) * (*(f32 *)(D_0051D9AC))));
                }
            }
        }
        var_s1 = *(u8 **)((u8 *)var_s1 + 0);
        goto loop_20;
    }
    return 0;
}
