/* Draft (not built): func_00153038 at 0x00153038, size 0x170, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00153038.c:69: parse error before ')' token
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00153038.s */

extern s32 D_00460EC8;
extern s32 D_004612C8;

s32 func_00153038(u16 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f1;
    f32 var_f5;
    s16 temp_a0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_t1;
    s32 var_v0;
    u16 *var_t0;
    u16 var_v1;
    u8 temp_v0;
    u8 *var_a2;

    var_a2 = arg2;
    var_t1 = 0;
    var_t0 = arg0;
    var_f0 = 0.000015258789f;
    temp_f8 = (f32) ((s32) (M2C_ERROR(/* Read from unset register $t1 */) << 0x10) >> 0xC) * 0.000015258789f;
    var_f5 = (f32) (*(s16 *)((u8 *)arg3 + 2) << 0x10);
    var_f1 = (f32) (*(s16 *)((u8 *)arg3 + 0) << 0x10);
    temp_f7 = (f32) ((s32) (M2C_ERROR(/* Read from unset register $t0 */) << 0x10) >> 0xC) * 0.000015258789f;
    if (arg1 > 0) {
        var_v1 = *var_t0;
loop_2:
        temp_a0 = *(u8 *)((u8 *)var_t0 + 1) | ((var_v1 << 8) & ~0xFF);
        var_v0 = var_t1;
        if (!(temp_a0 & 0x8000)) {
            var_a0 = 0x1E;
            var_t0 += 2;
            temp_f6 = (f32) ((temp_a0 & 0x1FFF) + 1);
            do {
                temp_v0 = *var_t0;
                var_t0 += 1;
                temp_v0_2 = temp_v0 * 4;
                var_a0 -= 2;
                temp_f2 = (temp_f7 * var_f1) + (temp_f8 * var_f5);
                temp_f1 = temp_f2 + (*(temp_v0_2 + &D_00460EC8) * temp_f6);
                temp_f0 = temp_f7 * temp_f1;
                var_f5 = temp_f1;
                var_f0 = temp_f0 + (temp_f8 * var_f1);
                *(s16 *)((u8 *)var_a2 + 0) = (s16) (M2C_BITWISE(s32, temp_f2) >> 0x10);
                var_f1 = var_f0 + (*(temp_v0_2 + &D_004612C8) * temp_f6);
                *(s16 *)((u8 *)var_a2 + 2) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
                var_a2 = var_a2 + 2 + 2;
            } while (var_a0 >= 0);
            var_t1 += 1;
            if (var_t1 < arg1) {
                var_v1 = *var_t0;
                goto loop_2;
            }
            goto block_8;
        }
    } else {
block_8:
        var_v0 = arg1;
        *(s16 *)((u8 *)arg3 + 0) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
        *(s16 *)((u8 *)arg3 + 2) = (s16) (M2C_BITWISE(s32, var_f0) >> 0x10);
    }
    return var_v0;
}
