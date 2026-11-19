/* Draft (not built): func_00248E00 at 0x00248E00, size 0x300, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 150 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x300
 * Original: asm/nonmatchings/battle/skill_cmd/func_00248E00.s */

// src/battle/skill_cmd.c func_00248E00 size diff=150/102
extern u32 func_0012EAE0(s32);
extern void func_00146F30(s32 *);
s32 func_001214F8(f32);
s32 func_00121988(s32, s32);
f32 func_001220B0(s32);
s32 func_001414D0(s32, s16, f32, f32, f32);
f32 func_00146E90(f32 *);
extern s128 D_004502E0;
extern void func_0011F620(void);
void func_00248E00(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 sp78;
    s128 sp50;
    f32 sp60;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 var_f3;
    f32 var_f3_2;
    s16 temp_a1;
    s16 temp_a1_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_v0;
    s32 temp_v0_2;

    sp50 = D_004502E0;
    if (*(s16 *)((u8 *)arg3 + 0xE0) == 1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_v0 = func_0012EAE0(0x20);
        if (temp_v0 >= 0) {
            var_f3 = (f32) temp_v0;
        } else {
            var_f3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        sp60 += 30.0f * (0.5f - (var_f3 / 4294967296.0f));
        temp_v0_2 = func_0012EAE0(0x20);
        if (temp_v0_2 >= 0) {
            var_f3_2 = (f32) temp_v0_2;
        } else {
            var_f3_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        sp68 += 30.0f * (0.5f - (var_f3_2 / 4294967296.0f));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        temp_f20 = sp74;
        sp74 = 0.0f;
        temp_f21 = func_00146E90(&sp70);
        temp_s1 = func_001214F8(temp_f20);
        func_001214F8(temp_f21);
        func_0011F620();
        temp_f20_2 = func_001220B0(M2C_ERROR(/* Read from unset register $v0 */) ^ M2C_ERROR(/* unknown instruction: pcpyld $v1, $zero, $v1 */));
        func_00146F30((s32 *)(&sp70));
        temp_s1_2 = func_001214F8(sp78);
        func_001214F8(sp70);
        func_0011F620();
        temp_a1 = *(s16 *)((u8 *)arg2 + 0x17A4);
        func_001414D0(arg0, temp_a1, temp_f20_2, (3.1415927f * (f32) temp_a1) / 32768.0f, func_001220B0(func_00121988(M2C_ERROR(/* Read from unset register $v0 */), 0x60000000 | (0x3FF921FB << 0x20))));
        return;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_f20_3 = sp74;
    sp74 = 0.0f;
    temp_f21_2 = func_00146E90(&sp70);
    temp_s1_3 = func_001214F8(temp_f20_3);
    func_001214F8(temp_f21_2);
    func_0011F620();
    temp_a1_2 = *(s16 *)((u8 *)arg2 + 0x17A4);
    func_001414D0(arg0, temp_a1_2, func_001220B0(M2C_ERROR(/* Read from unset register $v0 */) ^ M2C_ERROR(/* unknown instruction: pcpyld $v1, $zero, $v1 */)), (3.1415927f * (f32) temp_a1_2) / 32768.0f, 0.0f);
}
