/* Draft (not built): func_00197F28 at 0x00197F28, size 0x200, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00197F28.c:86: too few arguments to function `func_00198128'
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197F28.s */

s32 func_00178BA8(s32 *, s32 *, s32); /* extern */
s32 func_0018A478(s32);                         /* extern */
s32 func_0018C968(s32);                         /* extern */
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018FA58(s32, s32 *, s32);         /* extern */
s32 func_0018FAE0(s32, s32 *, s32);         /* extern */
s32 func_00197870(s32 *, s32);                  /* extern */
s32 func_00197D08(s32);                             /* extern */
s32 func_00198128(s32, s32 *, s64, s64);        /* extern */
s32 func_00198198(s32, s32, s32);                   /* extern */
s32 func_00198218(s32);                         /* extern */

s32 func_00197F28(s32 arg0) {
    s32 sp50;
    s32 sp70;
    s32 sp200;
    s32 *var_a0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s5;
    s32 var_v0;
    s32 var_v1;
    s64 var_a2;
    s64 var_a3;

    var_a0 = sp;
    var_s5 = 0;
    var_v1 = arg0;
    if (arg0 & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, ($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
            var_a2 = M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($a0) */);
            var_a3 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($a0) */);
            var_v1 += 0x20;
            var_a0 += 0x20;
        } while (var_v1 != (arg0 + 0x40));
    } else {
        do {
            var_a2 = *(s64 *)((u8 *)var_v1 + 8);
            var_a3 = *(s64 *)((u8 *)var_v1 + 0x10);
            *(s64 *)((u8 *)var_a0 + 0) = (s64) *(s64 *)((u8 *)var_v1 + 0);
            *(s64 *)((u8 *)var_a0 + 8) = var_a2;
            *(s64 *)((u8 *)var_a0 + 0x10) = var_a3;
            *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
            var_v1 += 0x20;
            var_a0 += 0x20;
        } while (var_v1 != (arg0 + 0x40));
    }
    *var_a0 = *var_v1;
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x9C0);
    if (temp_s3 != 0) {
        func_00198128(arg0, &sp50, var_a2, var_a3);
        var_s5 = sp64;
    }
    func_0018C968(arg0 + 0x78);
    func_0018A478(arg0);
    temp_s2 = func_0018FA58(arg0, &sp200, 0x40);
    var_v0 = func_00197D08(arg0);
    if (var_v0 == 0) {
        func_00178BA8(&sp70, arg0 + 0xB30, 0x190);
        temp_v0 = func_00197870(sp, 0);
        if (temp_v0 == 0) {
            return func_0018D650(0, 0xFF000202);
        }
        func_00178BA8(temp_v0 + 0x9A0, &sp70, 0x190);
        func_00178BA8(temp_v0 + 0xB30, &sp70, 0x190);
        func_0018FAE0(temp_v0, &sp200, temp_s2);
        var_v0 = 0;
        if (temp_s3 != 0) {
            var_v0 = func_00198128(temp_v0, &sp50);
            if (var_v0 == 0) {
                var_v0 = func_00198198(temp_v0, var_s5, sp64);
                if (var_v0 == 0) {
                    func_00198218(temp_v0);
                    var_v0 = 0;
                }
            }
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
