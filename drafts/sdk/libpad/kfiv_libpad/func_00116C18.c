/* Draft (not built): func_00116C18 at 0x00116C18, size 0x158, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116C18.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010AD18(void *, s32);                 /* extern */
extern s32 D_00478990;

u8 *func_00116C18(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s1;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *var_v0;
    u8 *var_v1;

    temp_s3 = DI();
    temp_s0 = *((arg1 * 0x1C) + (arg0 * 0x70) + &D_00478990);
    func_0010AD18(temp_s0, temp_s0 + 0xFF);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x58) < *(s32 *)((u8 *)temp_s0 + 0xD8);
    if (arg2 != 0) {
        var_s1 = temp_v1 << 7;
        var_a2 = arg2;
        var_v1 = var_s1 + temp_s0;
        temp_v0 = var_v1 + 0x80;
        if (((s32) var_v1 | var_a2) & 7) {
            do {
                M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($v1) */);
                M2C_ERROR(/* unknown instruction: ldr $a0, ($v1) */);
                M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($v1) */);
                M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($v1) */);
                M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($v1) */);
                M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($v1) */);
                M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
                M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
                M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($a2) */);
                M2C_ERROR(/* unknown instruction: sdr $a0, ($a2) */);
                M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a2) */);
                M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a2) */);
                M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a2) */);
                M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a2) */);
                M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a2) */);
                M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a2) */);
                var_v1 += 0x20;
            } while (var_v1 != temp_v0);
        } else {
            do {
                *(s64 *)((u8 *)var_a2 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
                *(s64 *)((u8 *)var_a2 + 8) = (s64) *(s64 *)((u8 *)var_v1 + 8);
                *(s64 *)((u8 *)var_a2 + 0x10) = (s64) *(s64 *)((u8 *)var_v1 + 0x10);
                *(s64 *)((u8 *)var_a2 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
                var_v1 += 0x20;
                var_a2 += 0x20;
            } while (var_v1 != temp_v0);
        }
    } else {
        var_s1 = temp_v1 << 7;
    }
    var_v0 = temp_s0 + var_s1;
    if (temp_s3 == 1) {
        EI();
        var_v0 = temp_s0 + var_s1;
    }
    return var_v0;
}
