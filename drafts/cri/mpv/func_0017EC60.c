/* Draft (not built): func_0017EC60 at 0x0017EC60, size 0xC0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017EC60.s */

s32 func_00172A88();                                /* extern */
s32 func_00172C90(s32, s32, s32, s32);          /* extern */
s32 func_00172CB8(s32, s32, s32);               /* extern */
s32 func_00172CE0(s32, s32, void *);        /* extern */
s32 func_00172D08(s32, s32);                    /* extern */
s32 func_0017ED20(void *);                      /* extern */

s32 func_0017EC60(u8 *arg0, s32 arg1) {
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_a3;
    s32 var_a2;
    s32 var_s2;

    var_s2 = 0;
    if (func_00172A88() != 0) {
        var_s0 = arg0 + 0x3B8;
        var_a2 = *(s32 *)((u8 *)arg0 + 0x3B8);
loop_2:
        temp_a1 = var_s2;
        temp_a3 = *(s32 *)((u8 *)var_s0 + 4);
        var_s2 += 1;
        var_s0 += 0xC;
        func_00172C90(*(s32 *)((u8 *)arg0 + 0x3B0), temp_a1, var_a2, temp_a3);
        if (var_s2 < 4) {
            var_a2 = *var_s0;
            goto loop_2;
        }
        func_00172CB8(*(s32 *)((u8 *)arg0 + 0x3B0), *(s32 *)((u8 *)arg0 + 0x3E8), *(s32 *)((u8 *)arg0 + 0x3EC));
        func_00172D08(*(s32 *)((u8 *)arg0 + 0x3B0), arg1);
        func_00172CE0(*(s32 *)((u8 *)arg0 + 0x3B0), 0, arg0 + 0x3F0);
        func_0017ED20(arg0);
        return 0;
    }
    return -1;
}
