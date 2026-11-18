/* Draft (not built): func_00113238 at 0x00113238, size 0x224, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00113238.s */

s32 func_00112A60();                                /* extern */
s32 func_00112B60();                                /* extern */
s32 func_00128040(s32 *, s32, s32);     /* extern */
s32 memcpy(void *, s32, s32);                   /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_00474E00;
extern s32 D_00474E08;
extern s32 D_00475000;

s32 func_00113238(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 *var_a1;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_v0;
    u8 *var_a0;

    var_v0 = 0xFFFF0000;
    if (func_00112A60() >= 0) {
        if (func_00112B60() == 0) {
            func_00128040(&D_00474E08, arg0, 0xFC);
            temp_v0 = &D_00474E08 - 8;
            *(s8 *)((u8 *)temp_v0 + 0x103) = 0;
            if (arg2 != 0) {
                if (arg1 >= 0xFD) {
                    var_a0 = &D_00474E08 + 0xFC;
                    var_v1 = arg2;
                    if ((arg2 | (s32) var_a0) & 7) {
                        var_a1 = (s32 *)0x470000;
                        do {
                            M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($v1) */);
                            M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($v1) */);
                            M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($v1) */);
                            M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a0) */);
                            var_v1 += 0x20;
                            var_a0 += 0x20;
                        } while (var_v1 != (arg2 + 0xE0));
                    } else {
                        var_a1 = &D_00475000;
                        do {
                            *(s64 *)((u8 *)var_a0 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
                            *(s64 *)((u8 *)var_a0 + 8) = (s64) *(s64 *)((u8 *)var_v1 + 8);
                            *(s64 *)((u8 *)var_a0 + 0x10) = (s64) *(s64 *)((u8 *)var_v1 + 0x10);
                            *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
                            var_v1 += 0x20;
                            var_a0 += 0x20;
                        } while (var_v1 != (arg2 + 0xE0));
                    }
                    M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($v1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
                    *(s32 *)((u8 *)var_a0 + 0x18) = M2C_UNALIGNED32(*(s32 *)((u8 *)var_v1 + 0x18));
                    *(s32 *)((u8 *)(&D_00474E00) + 0) = 0xFC;
                } else {
                    memcpy(&D_00474E08 + 0xFC, arg2, arg1);
                    *(s32 *)((u8 *)(&D_00474E08) + -8) = arg1;
                    goto block_16;
                }
            } else {
                *(s8 *)((u8 *)temp_v0 + 0x104) = 0;
                *(s32 *)((u8 *)(&D_00474E08) + -8) = 0;
block_16:
                var_a1 = &D_00475000;
            }
            if (sceSifCallRpc(var_a1, M2C_ERROR(/* Read from unset register $t0 */), 0, &D_00474E00, 0) >= 0) {
                var_v0 = *(s32 *)((u8 *)(&D_00474E00) + 0);
                *arg3 = *(s32 *)((u8 *)(&D_00474E00) + 4);
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return var_v0;
            }
            return 0xFFFEFFFF;
        }
        return 0xFFFEFFFC;
    }
    return var_v0;
}
