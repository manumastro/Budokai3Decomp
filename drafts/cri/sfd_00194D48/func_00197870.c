/* Draft (not built): func_00197870 at 0x00197870, size 0x1EC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00197870.c:69: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197870.s */

s32 func_00178BA8(s32, s32 *, s32);     /* extern */
s32 func_00179018(s32, s32, u32);           /* extern */
s32 func_0018A1B8(s32, s32, s32 *);                 /* extern */
s32 func_0018C950(s32, s64, s64, s64);          /* extern */
s32 func_0018D638(s32);                         /* extern */
s32 func_00197A60(s32);                         /* extern */
s32 func_00197AC8(s32);                         /* extern */
s32 func_00197B20(s32);                         /* extern */
s32 func_00197C50(s32);                             /* extern */
s32 func_001988D0(s32);                         /* extern */
s32 func_00199E08(s32, s32);                    /* extern */
s32 func_0019BAD8(s32, s32, s32 *, s32);        /* extern */
extern s32 D_004268E0;

s32 func_00197870(s32 *arg0, s32 arg1) {
    s32 *var_v0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    s32 var_v1;
    s64 var_a1;
    s64 var_a2;
    s64 var_a3;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x3C);
    func_00179018(temp_s0, 0, (u32) *(u32 *)((u8 *)arg0 + 0x40) >> 2);
    temp_s1 = (temp_s0 + 0x1F) & ~0x1F;
    var_v1 = temp_s1;
    *(s32 *)((u8 *)arg0 + 4) = (s32) ((*(s32 *)((u8 *)arg0 + 4) + 0x1F) & ~0x1F);
    var_v0_2 = arg0;
    *(s32 *)((u8 *)temp_s1 + 0x4C) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x48) = 0;
    if ((s32) arg0 & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, ($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($v0) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v1) */);
            var_a1 = M2C_ERROR(/* unknown instruction: sdr $a1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($v1) */);
            var_a2 = M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($v1) */);
            var_a3 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($v1) */);
            var_v0_2 += 0x20;
            var_v1 += 0x20;
        } while (var_v0_2 != (arg0 + 0x40));
    } else {
        do {
            var_a1 = *(s64 *)((u8 *)var_v0_2 + 0);
            var_a2 = *(s64 *)((u8 *)var_v0_2 + 8);
            var_a3 = *(s64 *)((u8 *)var_v0_2 + 0x10);
            *(s64 *)((u8 *)var_v1 + 0) = var_a1;
            *(s64 *)((u8 *)var_v1 + 8) = var_a2;
            *(s64 *)((u8 *)var_v1 + 0x10) = var_a3;
            *(s64 *)((u8 *)var_v1 + 0x18) = (s64) *(s64 *)((u8 *)var_v0_2 + 0x18);
            var_v0_2 += 0x20;
            var_v1 += 0x20;
        } while (var_v0_2 != (arg0 + 0x40));
    }
    *var_v1 = (s32) *var_v0_2;
    *(s32 *)((u8 *)temp_s1 + 0x50) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x44) = 1;
    *(s32 *)((u8 *)temp_s1 + 0x54) = 0;
    func_0018C950(temp_s1 + 0x78, var_a1, var_a2, var_a3);
    func_00197A60(temp_s1 + 0x90C);
    func_00197AC8(temp_s1 + 0x94C);
    func_00197B20(temp_s1 + 0x31F8);
    func_0018D638(temp_s1 + 0x98C);
    func_00178BA8(temp_s1 + 0x9A0, &D_004268E0, 0x190);
    func_00178BA8(temp_s1 + 0xB30, &D_004268E0, 0x190);
    func_00199E08(temp_s1, temp_s1 + 0xCC0);
    if (func_0018A1B8(temp_s1, temp_s1 + 0x1280, arg0) != 0) {
        return 0;
    }
    func_0019BAD8(temp_s1, temp_s1 + 0x1BE0, arg0, arg1);
    func_001988D0(temp_s1 + 0x31E8);
    var_v0 = 0;
    if (func_00197C50(temp_s1) == 0) {
        *(s32 *)((u8 *)temp_s1 + 0x48) = 1;
        var_v0 = temp_s1;
        *(s32 *)((u8 *)temp_s1 + 0x4C) = 1;
    }
    return var_v0;
}
