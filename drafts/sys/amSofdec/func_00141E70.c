/* Draft (not built): func_00141E70 at 0x00141E70, size 0x208, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 125 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2BC, original 0x208
 * Original: asm/nonmatchings/sys/amSofdec/func_00141E70.s */

// src/sys/amSofdec.c func_00141E70 size diff=125/175
void func_00141E70(u8 *arg0, s32 *arg1, s32 arg_sp0) {
    s32 *var_a1;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f17;
    f32 temp_f17_2;
    f32 temp_f18;
    f32 temp_f5;
    f32 var_f17;
    f32 var_f17_2;
    f32 var_f17_3;
    f32 var_f2;
    s32 var_v0;

    var_a1 = arg1;
    if (var_a1 == NULL) {
        var_a1 = &arg_sp0;
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($sp) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($sp) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($sp) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($sp) */);
    }
    temp_f0 = *(f32 *)((u8 *)var_a1 + 0);
    temp_f5 = *(f32 *)((u8 *)var_a1 + 0x14);
    temp_f10 = *(f32 *)((u8 *)var_a1 + 0x28);
    temp_f17 = temp_f0 + temp_f5 + temp_f10;
    if (temp_f17 > 0.0f) {
        temp_f17_2 = temp_f17 + 1.0f;
        M2C_ERROR(/* unknown instruction: c1 0x110444 */);
        *(f32 *)((u8 *)arg0 + 0xC) = (f32) (temp_f17_2 * 0.5f);
        temp_f18 = 0.5f / temp_f17_2;
        *(f32 *)((u8 *)arg0 + 0) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x18) - *(f32 *)((u8 *)var_a1 + 0x24)) * temp_f18);
        *(f32 *)((u8 *)arg0 + 4) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x20) - *(f32 *)((u8 *)var_a1 + 8)) * temp_f18);
        *(f32 *)((u8 *)arg0 + 8) = (f32) ((*(f32 *)((u8 *)var_a1 + 4) - *(f32 *)((u8 *)var_a1 + 0x10)) * temp_f18);
        return;
    }
    var_v0 = 1;
    var_f2 = temp_f5;
    if (!(temp_f0 < temp_f5)) {
        var_v0 = 0;
        var_f2 = temp_f0;
    }
    if (var_f2 < temp_f10) {
        var_f17 = ((1.0f + temp_f10) - temp_f0) - temp_f5;
        M2C_ERROR(/* unknown instruction: c1 0x110444 */);
        *(f32 *)((u8 *)arg0 + 8) = (f32) (var_f17 * 0.5f);
        if (var_f17 != 0.0f) {
            var_f17 = 0.5f / var_f17;
        }
        *(f32 *)((u8 *)arg0 + 0xC) = (f32) ((*(f32 *)((u8 *)var_a1 + 4) - *(f32 *)((u8 *)var_a1 + 0x10)) * var_f17);
        *(f32 *)((u8 *)arg0 + 0) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x20) + *(f32 *)((u8 *)var_a1 + 8)) * var_f17);
        *(f32 *)((u8 *)arg0 + 4) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x24) + *(f32 *)((u8 *)var_a1 + 0x18)) * var_f17);
        return;
    }
    if (var_v0 == 0) {
        var_f17_2 = ((1.0f + temp_f0) - temp_f5) - temp_f10;
        M2C_ERROR(/* unknown instruction: c1 0x110444 */);
        *(f32 *)((u8 *)arg0 + 0) = (f32) (var_f17_2 * 0.5f);
        if (var_f17_2 != 0.0f) {
            var_f17_2 = 0.5f / var_f17_2;
        }
        *(f32 *)((u8 *)arg0 + 0xC) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x18) - *(f32 *)((u8 *)var_a1 + 0x24)) * var_f17_2);
        *(f32 *)((u8 *)arg0 + 4) = (f32) ((*(f32 *)((u8 *)var_a1 + 4) + *(f32 *)((u8 *)var_a1 + 0x10)) * var_f17_2);
        *(f32 *)((u8 *)arg0 + 8) = (f32) ((*(f32 *)((u8 *)var_a1 + 8) + *(f32 *)((u8 *)var_a1 + 0x20)) * var_f17_2);
        return;
    }
    var_f17_3 = ((1.0f + temp_f5) - temp_f10) - temp_f0;
    M2C_ERROR(/* unknown instruction: c1 0x110444 */);
    *(f32 *)((u8 *)arg0 + 4) = (f32) (var_f17_3 * 0.5f);
    if (var_f17_3 != 0.0f) {
        var_f17_3 = 0.5f / var_f17_3;
    }
    *(f32 *)((u8 *)arg0 + 0xC) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x20) - *(f32 *)((u8 *)var_a1 + 8)) * var_f17_3);
    *(f32 *)((u8 *)arg0 + 8) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x18) + *(f32 *)((u8 *)var_a1 + 0x24)) * var_f17_3);
    *(f32 *)((u8 *)arg0 + 0) = (f32) ((*(f32 *)((u8 *)var_a1 + 0x10) + *(f32 *)((u8 *)var_a1 + 4)) * var_f17_3);
}
