/* Draft (not built): func_0011AFE0 at 0x0011AFE0, size 0x1CC, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011AFE0.s */

s32 FlushCache(s32);                        /* extern */
s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00128040(void *, s8 *, s32, s32); /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479000;
extern s32 D_00479070;

s32 func_0011AFE0(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s32 var_v0;

    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    var_v0 = -0xC8;
    if (PollSema(D_003EF94C) >= 0) {
        if ((arg2 == NULL) || (*arg2 == 0)) {
            SignalSema(D_003EF94C);
            return -0xD2;
        }
        *(s32 *)((u8 *)(&D_00479070) + 0) = arg0;
        *(s32 *)((u8 *)(&D_00479070) + 4) = arg1;
        *(s32 *)((u8 *)(&D_00479070) + 8) = (s32) (M2C_ERROR(/* Read from unset register $t0 */) & 7);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, ($s6) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($s6) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($s6) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, ($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($t1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($s6) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x27($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x20($s6) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0x2f($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0x28($s6) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x27($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x20($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0x2f($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x28($t1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x37($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x30($s6) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x3f($s6) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x38($s6) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x37($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x30($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x3f($t1) */);
        *(s32 **)((u8 *)(&D_00479070) + 0x10) = &D_00479000;
        func_00128040(&D_00479070 + 0x14, arg2, 0x3FF, M2C_ERROR(/* unknown instruction: sdr $a3, 0x38($t1) */));
        *(s8 *)((u8 *)(&D_00479070) + 0x413) = 0;
        FlushCache(0);
        if (sceSifCallRpc(&D_00478FC0, 0xE, 1, &D_00479070, 0) != 0) {
            SignalSema(D_003EF94C);
            return -0x5B;
        }
        D_003EF948 = 0xE;
        var_v0 = 0;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
