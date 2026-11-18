/* Draft (not built): func_0014E5D0 at 0x0014E5D0, size 0x12C, segment cri/adx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0014E5D0.c:42: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx/func_0014E5D0.s */

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
extern s8 D_00400B60;

u8 *func_0014E5D0(s8 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_t0;
    s8 *var_v1;
    u8 *temp_s0;
    u8 *var_a3;
    u8 *var_v0;

    var_s0 = 0;
    var_v1 = &D_00400B60;
    if (D_00400B60 != 0) {
loop_1:
        var_s0 += 1;
        var_v1 += 0x30;
        if (var_s0 < 0x10) {
            if (*var_v1 != 0) {
                goto loop_1;
            }
        }
    }
    var_v0 = NULL;
    if (var_s0 != 0x10) {
        func_00152508();
        var_t0 = 0;
        temp_s0 = (var_s0 * 0x30) + &D_00400B60;
        *(s8 *)((u8 *)temp_s0 + 2) = arg0;
        if (arg0 > 0) {
            var_a3 = temp_s0 + 4;
            do {
                temp_v1 = var_t0 * 4;
                var_t0 += 1;
                *(s32 *)((u8 *)var_a3 + 0x10) = 0;
                *(s32 *)((u8 *)var_a3 + 0) = (s32) *(temp_v1 + arg1);
                var_a3 += 4;
                *(temp_s0 + 0xC + temp_v1) = *(temp_v1 + arg2);
            } while (var_t0 < arg0);
        }
        *(s32 *)((u8 *)temp_s0 + 0x20) = 0xAC44;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = (s32) arg0;
        *(f32 *)((u8 *)temp_s0 + 0x28) = 0.099999994f;
        *(s8 *)((u8 *)temp_s0 + 0) = 1;
        *(s8 *)((u8 *)temp_s0 + 1) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
        *(f32 *)((u8 *)temp_s0 + 0x24) = 0.099999994f;
        func_00152520();
        var_v0 = temp_s0;
    }
    return var_v0;
}
