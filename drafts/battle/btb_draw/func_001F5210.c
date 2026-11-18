/* Draft (not built): func_001F5210 at 0x001F5210, size 0x330, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ps2.exe Compiler: 6413: temp_v0_2 = (char *)func_001A50F0(temp_s6, var_a1 + temp_v0); @ 6412: temp_v0 = D_0051CD20 << 7;
 * Original: asm/nonmatchings/battle/btb_draw/func_001F5210.s */

// src/battle/btb_draw.c func_001F5210 cerr diff=-1/0
s32 func_001214F8(f32);
s32 func_00121988(s32, s32);
f32 func_001220B0(s32);
s32 func_00209950(s32, s32 *, s32);
extern s128 D_0044B570;
extern s128 D_0044B580;
extern s32 D_00469838;
extern void func_00146F30(void *);
extern void func_0011F620(void);
void func_001F5210(s32 arg1, u8 *arg2, s32 arg3) {
    s32 sp80;
    s32 sp90;
    f32 sp94;
    s128 spA0;
    s128 spB0;
    f32 spC0;
    f32 spC4;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s8 *temp_s6;
    u8 *temp_s0;
    u8 *temp_v0_3;
    u8 *temp_v0_5;

    var_a1 = 4;
    temp_s6 = (s8 *)(*D_0051CD0C);
    var_s2 = 7;
    if (arg3 & 4) {
        var_a1 = 0x104;
        var_s2 = 0x107;
    }
    var_s1 = 0;
    temp_v0 = D_0051CD20 << 7;
    temp_v0_2 = (char *)func_001A50F0(temp_s6, var_a1 + temp_v0);
    if (temp_v0_2 != 0) {
        var_s1 = func_00209540((s32)((char *)((s32)((char *)((s32)((char *)(temp_v0_2)))))), 0x02000001, 0);
    }
    if (var_s1 != 0) {
        temp_v0_3 = (char *)func_001F5FD0(0x85000000, &D_00469838, 0, func_001F1CE0);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) & 0x8000);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) | 0x8000);
        memset(temp_v0_3 + 0x30, 0, 0x80);
        *(s32 *)((u8 *)temp_v0_3 + 0x58) = var_s1;
        temp_s0 = temp_v0_3 + 0x30;
        *(s32 *)((u8 *)temp_s0 + 0x24) = func_001A50F0((char *)((s32)((char *)((s32)((char *)((s32)(*D_0051CD0C)))))), 0x280);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x14) + 0.1f);
        *(f32 *)((u8 *)(&spC0) + 0) = *(f32 *)((u8 *)arg2 + 0);
        *(f32 *)((u8 *)(&spC0) + 4) = (f32) *(f32 *)((u8 *)arg2 + 4);
        *(f32 *)((u8 *)(&spC0) + 8) = (f32) *(f32 *)((u8 *)arg2 + 8);
        *(f32 *)((u8 *)(&spC0) + 0xC) = (f32) *(f32 *)((u8 *)arg2 + 0xC);
        spC4 = 0.0f;
        func_00146F30(&spC0);
        temp_s1 = func_001214F8(spC8);
        func_001214F8(spC0);
        func_0011F620();
        *(f32 *)((u8 *)temp_s0 + 0x20) = func_001220B0(func_00121988(M2C_ERROR(/* Read from unset register $v0 */), 0x60000000 | (0x3FF921FB << 0x20)));
        *(s32 *)((u8 *)temp_v0_3 + 0x30) = (s32) (arg3 & 2);
    }
    temp_v0_4 = (char *)func_001A50F0(temp_s6, var_s2 + temp_v0);
    if (temp_v0_4 != 0) {
        var_s1_2 = func_00209540((s32)((char *)((s32)((char *)((s32)((char *)(temp_v0_4)))))), 0x02000001, 0);
    } else {
        var_s1_2 = 0;
    }
    if (var_s1_2 != 0) {
        func_00209B50(var_s1_2, arg1, 0);
        spB0 = D_0044B570;
        spA0 = D_0044B580;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        sp94 = 0.0f;
        func_00146F30(&sp90);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp90);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        func_00141C30(&sp80, &spA0, &sp90);
        func_00209950(var_s1_2, &sp80, 0);
        temp_v0_5 = (char *)func_001F5FD0(0x85000000, &D_00469838, 0, func_001F1F50);
        temp_a3 = *(s32 *)((u8 *)temp_v0_5 + 0x20);
        *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (temp_a3 & ~0x800);
        *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x20) | 0x800);
        memset(temp_v0_5 + 0x30, 0, 0x80);
        *(s32 *)((u8 *)temp_v0_5 + 0x58) = var_s1_2;
        *(s32 *)((u8 *)(temp_v0_5 + 0x30) + 0x24) = func_001A50F0((char *)((s32)((char *)((s32)((char *)((s32)(*D_0051CD0C)))))), 0x280);
        *(s32 *)((u8 *)temp_v0_5 + 0x30) = (s32) (arg3 & 2);
    }
}
