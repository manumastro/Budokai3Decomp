/* Draft (not built): func_0025BD40 at 0x0025BD40, size 0xE0, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC4, original 0xE0
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025BD40.s */

// src/unk/unk_25A130.c func_0025BD40 size diff=25/49
s32 func_00127E88(void *, s32 *, s32);
void *func_0020B020(s32, s16, s16);
extern s32 D_0046AF70;
void func_0025BD40(u8 *arg0) {
    s32 saved_reg_s2;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_a1;
    u8 *temp_v0;
    u8 *var_s2;

    var_s2 = (unsigned char *)(saved_reg_s2);
    var_s0 = 0;
    temp_v0 = func_0020B020(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0x1350), *(s16 *)((u8 *)arg0 + 0x14), *(s16 *)((u8 *)arg0 + 0x16));
    if (func_00127E88(temp_v0, &D_0046AF70, 4) == 0) {
        var_s0 = *(s32 *)((u8 *)temp_v0 + 8);
        var_s2 = temp_v0 + *(s32 *)((u8 *)temp_v0 + 0xC);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    }
    var_s1 = 0;
loop_6:
    if (var_s1 < var_s0) {
        temp_a1 = var_s2 + (var_s1 * 0xB0);
        if (!(*(f32 *)((u8 *)temp_a1 + 0x68) <= 0.0f)) {
            func_0025BAC0(*(u8 **)((u8 *)arg0 + 0x10), temp_a1);
        }
        var_s1 += 1;
        goto loop_6;
    }
}
