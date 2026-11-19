/* Draft (not built): func_0029F180 at 0x0029F180, size 0x1D0, segment battle/char_disp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A8, original 0x1D0
 * Original: asm/nonmatchings/battle/char_disp/func_0029F180.s */

// src/battle/char_disp.c func_0029F180 size diff=71/106
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern void func_00228430(s32);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_00228410();
extern void func_0022CD00(s32);
extern char D_004B4B40[];
void func_0029F180(u8 *arg0, u8 *arg1) {
    u8 sp80;
    f32 sp84;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 var_s2;
    s8 temp_s0;
    u8 *temp_s6;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x18);
    temp_s6 = D_004708CC;
    if (temp_a0 == 2) {
        goto block_3;
    }
    if (temp_a0 == 1) {
        goto block_3;
    }
    if (temp_a0 == 0) {
        goto block_14;
    }
block_3:
    temp_s0 = *(s8 *)((u8 *)D_004B4B40 + 0x23);
    var_s2 = *(s32 *)((u8 *)D_004708CC + 0x20);
    temp_s1 = *(s32 *)((u8 *)D_004708CC + 0x28);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp84 += (f32) (*(s32 *)((u8 *)D_004708CC + 0x24) * var_s2);
    if (*(s32 *)((u8 *)arg0 + 4) < 0) {
        goto block_5;
    }
    func_00228430(0);
    func_00227A30(&sp80);
    temp_s5 = *(s32 *)((u8 *)arg1 + 0x20);
    temp_a1 = *(s32 *)((u8 *)arg1 + 0x1C);
    temp_a0_2 = *(s32 *)((u8 *)arg1 + 0x18);
    D_00470704 = temp_a0_2;
    D_0047070C = temp_a1;
    D_00470708 = temp_s5;
    amModel_SetCurrent(temp_a0_2, temp_a1);
    D_00470238 = temp_s5;
    func_0022C060(1.0f, *(s32 *)((u8 *)arg1 + 0x10));
    func_00228410();
    func_0022CD00(*(s32 *)((u8 *)arg1 + 0x10));
block_5:
    if (*(s32 *)((u8 *)arg0 + 0) < 0) {
        goto block_14;
    }
    func_00228430(0);
    func_00227A30(&sp80);
    temp_s5_2 = *(s32 *)((u8 *)arg1 + 0x20);
    temp_a1_2 = *(s32 *)((u8 *)arg1 + 0x1C);
    temp_a0_3 = *(s32 *)((u8 *)arg1 + 0x18);
    D_00470704 = temp_a0_3;
    D_0047070C = temp_a1_2;
    D_00470708 = temp_s5_2;
    amModel_SetCurrent(temp_a0_3, temp_a1_2);
    D_00470238 = temp_s5_2;
    func_0022C060(1.0f, *(s32 *)((u8 *)arg0 + 0x1C));
    func_00228410();
    func_0022CD00(*(s32 *)((u8 *)arg0 + 0x1C));
    temp_a0_4 = *(s32 *)((u8 *)temp_s6 + 0x40);
    if (!(temp_s0 & 0x10 & temp_a0_4)) {
        goto block_10;
    }
    var_s2 -= 1;
    if (var_s2 >= 0) {
        goto block_13;
    }
    var_s2 = temp_s1 - 1;
    goto block_13;
block_10:
    if (!(temp_s0 & 0x40 & temp_a0_4)) {
        goto block_13;
    }
    var_s2 += 1;
    if (var_s2 < temp_s1) {
        goto block_13;
    }
    var_s2 = 0;
block_13:
    *(s32 *)((u8 *)D_004708CC + 0x20) = var_s2;
block_14:
    return;
}
