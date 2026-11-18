/* Draft (not built): func_0017ED20 at 0x0017ED20, size 0x140, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0017ED20.c:56: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_0017ED20.s */

s32 func_00172D30(s32, void *);                 /* extern */
s32 func_00172D58(s32, s32 *);                  /* extern */
s32 func_00172D80(s32, s32 *, s32 *, s32 *); /* extern */
s32 func_00172DA8(s32, s32 *, s32 *);           /* extern */

void func_0017ED20(u8 *arg0) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    u8 *var_a0;
    u8 *var_v1;

    func_00172D30(*(s32 *)((u8 *)arg0 + 0x3B0), sp);
    func_00172D58(*(s32 *)((u8 *)arg0 + 0x3B0), &sp80);
    func_00172D80(*(s32 *)((u8 *)arg0 + 0x3B0), &sp84, &sp88, &sp8C);
    func_00172DA8(*(s32 *)((u8 *)arg0 + 0x3B0), &sp90, &sp94);
    var_v1 = arg0 + 0x1D0;
    var_a0 = sp;
    if ((s32) var_v1 & 7) {
        do {
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, ($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $t0, 0x1f($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $t0, 0x18($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $t0, 0x1f($v1) */);
            M2C_ERROR(/* unknown instruction: sdr $t0, 0x18($v1) */);
            var_a0 += 0x20;
        } while (var_a0 != &sp80);
    } else {
        do {
            *(s64 *)((u8 *)var_v1 + 0) = (s64) *(s64 *)((u8 *)var_a0 + 0);
            *(s64 *)((u8 *)var_v1 + 8) = (s64) *(s64 *)((u8 *)var_a0 + 8);
            *(s64 *)((u8 *)var_v1 + 0x10) = (s64) *(s64 *)((u8 *)var_a0 + 0x10);
            *(s64 *)((u8 *)var_v1 + 0x18) = (s64) *(s64 *)((u8 *)var_a0 + 0x18);
            var_a0 += 0x20;
            var_v1 += 0x20;
        } while (var_a0 != &sp80);
    }
    *(s32 *)((u8 *)arg0 + 0x2A8) = sp80;
    *(s32 *)((u8 *)arg0 + 0x2B8) = sp94;
    *(s32 *)((u8 *)arg0 + 0x2AC) = (s32) ((s32) ((sp84 < 0) int (sp84 + 0x7FF) : sp84) >> 0xB);
    *(s32 *)((u8 *)arg0 + 0x2BC) = sp88;
    *(s32 *)((u8 *)arg0 + 0x2B4) = sp90;
}
