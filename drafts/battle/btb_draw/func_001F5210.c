/* Draft (not built): func_001F5210 at 0x001F5210, size 0x330, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 122 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x294, original 0x330
 * Original: asm/nonmatchings/battle/btb_draw/func_001F5210.s */

// src/battle/btb_draw.c func_001F5210 size diff=122/165
s8 *func_001214F8(f32);
s32 func_00121988(s32, s32);
f32 func_001220B0(s32);
s32 func_00209950(s8 *, s32 *, s32);
extern s128 D_0044B570;
extern s128 D_0044B580;
extern s8 D_00469838;
extern void func_00146F30(void *);
extern void func_0011F620(void);
void func_001F5210(s32 unused_arg0, s8 *arg1, u8 *arg2, s32 arg3) {
    s32 spC8;
    s32 sp80;
    s32 sp90;
    f32 sp94;
    s128 spA0;
    s128 spB0;
    f32 spC0;
    f32 spC4;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    s8 *temp_v0_2;
    s8 *temp_v0_4;
    s8 *var_s1;
    s8 *var_s5;
    s8 *var_s6;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 *var_s0;
    u8 *var_s4;

    var_s5 = arg1;
    var_s4 = arg2;
    var_s3 = arg3;
    var_a1 = 4;
    var_s6 = (signed char *)(*D_0051CD0C);
    var_s2 = 7;
    if (arg3 & 4) {
        var_a1 = 0x104;
        var_s2 = 0x107;
    }
    var_s1 = NULL;
    temp_v0 = *D_0051CD20 << 7;
    var_s2 += temp_v0;
    temp_v0_2 = (signed char *)(func_001A50F0((char *)(var_s6), (s32)(var_a1 + temp_v0)));
    if (temp_v0_2 != NULL) {
        var_s1 = (signed char *)(func_00209540((char *)(temp_v0_2), 0x02000001, 0));
    }
    if (var_s1 != NULL) {
        temp_v0_3 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_00469838), 0, (void *)(func_001F1CE0), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
        var_s0 = temp_v0_3;
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) & 0x8000);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) | 0x8000);
        memset(var_s0 + 0x30, 0, 0x80);
        *(s8 **)((u8 *)var_s0 + 0x58) = var_s1;
        var_s0 += 0x30;
        *(s8 **)((u8 *)var_s0 + 0x24) = (signed char *)(func_001A50F0(*D_0051CD0C, 0x280));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        *(f32 *)((u8 *)var_s0 + 0x14) = (f32) (*(f32 *)((u8 *)var_s0 + 0x14) + 0.1f);
        *(f32 *)((u8 *)(&spC0) + 0) = *(f32 *)((u8 *)var_s4 + 0);
        *(f32 *)((u8 *)(&spC0) + 4) = (f32) *(f32 *)((u8 *)var_s4 + 4);
        *(f32 *)((u8 *)(&spC0) + 8) = (f32) *(f32 *)((u8 *)var_s4 + 8);
        *(f32 *)((u8 *)(&spC0) + 0xC) = (f32) *(f32 *)((u8 *)var_s4 + 0xC);
        spC4 = 0.0f;
        func_00146F30(&spC0);
        var_s1 = func_001214F8(spC8);
        func_001214F8(spC0);
        func_0011F620();
        *(f32 *)((u8 *)var_s0 + 0x20) = func_001220B0(func_00121988(M2C_ERROR(/* Read from unset register $v0 */), 0x60000000 | (0x3FF921FB << 0x20)));
        *(s32 *)((u8 *)var_s0 + 0) = (s32) (var_s3 & 2);
    }
    temp_v0_4 = (signed char *)(func_001A50F0((char *)(var_s6), (s32)(var_s2)));
    if (temp_v0_4 != NULL) {
        var_s1 = (signed char *)(func_00209540((char *)(temp_v0_4), 0x02000001, 0));
    } else {
        var_s1 = NULL;
    }
    if (var_s1 != NULL) {
        func_00209B50((char *)(var_s1), (char *)(var_s5), 0);
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
        func_00209950(var_s1, &sp80, 0);
        temp_v0_5 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_00469838), 0, (void *)(func_001F1F50), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
        var_s0 = temp_v0_5;
        *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x20) & ~0x800);
        *(s32 *)((u8 *)temp_v0_5 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x20) | 0x800);
        memset(var_s0 + 0x30, 0, 0x80);
        *(s8 **)((u8 *)var_s0 + 0x58) = var_s1;
        var_s0 += 0x30;
        *(s8 **)((u8 *)var_s0 + 0x24) = (signed char *)(func_001A50F0(*D_0051CD0C, 0x280));
        *(s32 *)((u8 *)var_s0 + 0) = (s32) (var_s3 & 2);
    }
}
