/* Draft (not built): func_0022B900 at 0x0022B900, size 0x328, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); sion from 'int *' to 'float' mwccps2.exe Compiler: @ 807: func_0022A880(*(s32 *)((u8 *)var_v1 + 4), &spA0, -1, var_f12);
 * Original: asm/nonmatchings/battle/a2d/func_0022B900.s */

// src/battle/a2d.c func_0022B900 cerr diff=-1/0
extern s32 D_00470728;
void func_0022B900(u8 *arg0, u8 *arg1, f32 fparg0) {
    s32 sp40;
    s32 sp60;
    s32 sp80;
    s32 spA0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f12_4;
    f32 var_f20;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1_5;
    u8 *var_s1;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_3;
    u8 *var_v1_4;

    var_s1 = arg0;
    var_f20 = fparg0;
loop_4:
    if (*(u8 **)((u8 *)var_s1 + 0x18) == NULL) {

    } else {
        temp_f0 = (f32) *(s32 *)((u8 *)var_s1 + 0x1C);
        if (temp_f0 <= var_f20) {
            var_s1 = *(u8 **)((u8 *)var_s1 + 0x18);
            var_f20 -= temp_f0;
            goto loop_4;
        }
    }
    var_v1 = var_s1;
    var_f12 = var_f20;
loop_10:
    if (*(u8 **)((u8 *)var_v1 + 0x18) == NULL) {

    } else {
        temp_f0_2 = (f32) *(s32 *)((u8 *)var_v1 + 0x1C);
        if (temp_f0_2 <= var_f12) {
            var_v1 = *(u8 **)((u8 *)var_v1 + 0x18);
            var_f12 -= temp_f0_2;
            goto loop_10;
        }
    }
    func_0022A880(*(s32 *)((u8 *)var_v1 + 4), &spA0, -1, var_f12);
    var_f12_2 = var_f20;
    var_v1_2 = var_s1;
loop_16:
    if (*(u8 **)((u8 *)var_v1_2 + 0x18) == NULL) {

    } else {
        temp_f0_3 = (f32) *(s32 *)((u8 *)var_v1_2 + 0x1C);
        if (temp_f0_3 <= var_f12_2) {
            var_v1_2 = *(u8 **)((u8 *)var_v1_2 + 0x18);
            var_f12_2 -= temp_f0_3;
            goto loop_16;
        }
    }
    func_00229480(*(s32 *)((u8 *)var_v1_2 + 8), &sp80, -1, var_f12_2);
    var_f12_3 = var_f20;
    var_v1_3 = var_s1;
loop_22:
    if (*(u8 **)((u8 *)var_v1_3 + 0x18) == NULL) {

    } else {
        temp_f0_4 = (f32) *(s32 *)((u8 *)var_v1_3 + 0x1C);
        if (temp_f0_4 <= var_f12_3) {
            var_v1_3 = *(u8 **)((u8 *)var_v1_3 + 0x18);
            var_f12_3 -= temp_f0_4;
            goto loop_22;
        }
    }
    func_0022A0A0(*(s32 *)((u8 *)var_v1_3 + 4), &sp60, -1, var_f12_3);
    var_f12_4 = var_f20;
    var_v1_4 = var_s1;
loop_28:
    if (*(u8 **)((u8 *)var_v1_4 + 0x18) == NULL) {

    } else {
        temp_f0_5 = (f32) *(s32 *)((u8 *)var_v1_4 + 0x1C);
        if (temp_f0_5 <= var_f12_4) {
            var_v1_4 = *(u8 **)((u8 *)var_v1_4 + 0x18);
            var_f12_4 -= temp_f0_5;
            goto loop_28;
        }
    }
    func_00228FA0(*(s32 *)((u8 *)var_v1_4 + 8), &sp40, -1, var_f12_4);
    var_a1 = 0;
    var_a0 = 0;
    var_v1_5 = 0;
    if ((*(f32 *)((u8 *)var_s1 + 0x20) == 0.0f) && (*(f32 *)((u8 *)var_s1 + 0x28) == 0.0f)) {
        var_v1_5 = 1;
    }
    if ((var_v1_5 != 0) && (*(f32 *)((u8 *)var_s1 + 0x24) == 0.0f)) {
        var_a0 = 1;
    }
    if ((var_a0 != 0) && (*(f32 *)((u8 *)var_s1 + 0x2C) == 0.0f)) {
        var_a1 = 1;
    }
    if (var_a1 != 0) {
        temp_a0 = *(s32 *)((u8 *)var_s1 + 0xC);
        if (temp_a0 != 0) {
            func_00227B20(temp_a0, &sp60, &sp40, &spA0, var_f20);
        }
        return;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s32 *)((u8 *)arg1 + 4) = (s32) (*(s32 *)((u8 *)arg1 + 4) | 1);
    *(s32 *)((u8 *)arg1 + 4) = (s32) (*(s32 *)((u8 *)arg1 + 4) | (*(s32 *)((u8 *)var_s1 + 0) & 6));
    if ((*(s32 *)((u8 *)var_s1 + 0) & 0xFF00) && (D_00470728 != NULL)) {
        D_00470728(var_s1, arg1, &sp60, &sp40);
    }
    func_00226070(arg1, &sp60, &sp40, &spA0);
    temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0xC);
    if (temp_a0_2 != 0) {
        func_00227B20(temp_a0_2, &sp60, &sp40, &spA0, var_f20);
    }
}
