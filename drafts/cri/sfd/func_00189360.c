/* Draft (not built): func_00189360 at 0x00189360, size 0x1B8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00189360.c:68: too few arguments to function `func_001999E0'
 * Original: asm/nonmatchings/cri/sfd/func_00189360.s */

s32 func_0018D650(s32, void *);                 /* extern */
s64 func_001999E0(s32, s32, void *, s64);       /* extern */
s32 func_0019C1A8(s32);                         /* extern */
s32 func_0019C2C8(s32, s64);                    /* extern */
s32 func_0019C2D0(s32, void *);                 /* extern */
s32 func_0019C2E8(s32, s64 *);                  /* extern */
s32 func_0019C300(s32, s64 *);                  /* extern */
s32 func_0019C318(s32, s64 *);                  /* extern */
s32 func_0019C330(s32, s64);                    /* extern */
s32 func_001A1498(s64);                         /* extern */
extern s32 D_0048CFD0;
extern s32 func_001886A8;

s32 func_00189360(s32 arg0, u8 *arg1) {
    s64 sp10;
    s64 sp18;
    s64 sp20;
    s64 sp28;
    s64 sp30;
    s64 sp38;
    s32 temp_s0;

    if ((*(s32 *)((u8 *)(&D_0048CFD0) + 8) == 0) || (*(s32 *)((u8 *)(&D_0048CFD0) + 0x18) == 0)) {
        return func_0018D650(0xFF000C06, arg1);
    }
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($t0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($t0) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0xf($t0) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, 0x8($t0) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x17($t0) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x10($t0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x1f($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x18($a3) */);
    *(s32 *)((u8 *)arg1 + 0x20) = (s32) *(s32 *)((u8 *)(&D_0048CFD0) + 0x18);
    *(s32 *)((u8 *)arg1 + 0x28) = 1;
    *(s32 **)((u8 *)arg1 + 0x3C) = &func_001886A8;
    temp_s0 = arg0 + 0xFA0;
    *(s32 *)((u8 *)arg1 + 0x44) = -1;
    *(s32 *)((u8 *)arg1 + 0x4C) = 0;
    *(s32 *)((u8 *)arg1 + 0) = 0;
    *(s32 *)((u8 *)arg1 + 4) = 0;
    *(s32 *)((u8 *)arg1 + 0x24) = -1;
    *(s32 *)((u8 *)arg1 + 0x2C) = 0;
    *(s32 *)((u8 *)arg1 + 0x30) = 0;
    *(s32 *)((u8 *)arg1 + 0x34) = 0;
    *(s32 *)((u8 *)arg1 + 0x38) = 0;
    *(s32 *)((u8 *)arg1 + 0x40) = 0;
    *(s32 *)((u8 *)arg1 + 0x48) = 0;
    sp10 = func_001999E0(arg0, 0x40, (u8 *) func_001999E0(0x3F, -1, arg1), 0xF4240);
    sp18 = 0xF4240;
    sp20 = func_001999E0(arg0, 0x41);
    sp28 = 0xF4240;
    sp30 = func_001999E0(arg0, 0x42);
    sp38 = 0xF4240;
    func_0019C1A8(temp_s0);
    func_0019C2C8(temp_s0, func_001999E0(arg0, 0x48));
    func_0019C2D0(temp_s0, sp);
    func_0019C2E8(temp_s0, &sp10);
    func_0019C300(temp_s0, &sp20);
    func_0019C318(temp_s0, &sp30);
    func_0019C330(temp_s0, func_001999E0(arg0, 0x3E));
    func_001A1498(func_001999E0(arg0, 0x3D));
    return 0;
}
