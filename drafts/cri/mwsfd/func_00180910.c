/* Draft (not built): func_00180910 at 0x00180910, size 0x1A4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00180910.c:43: `sp58' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00180910.s */

s32 func_00180AB8(s8 *);                            /* extern */
s32 func_00180B08(void *);                      /* extern */
s32 func_00181A20(s32, s32, void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_0018BC30(s32, s32, s8 *);              /* extern */
s32 memset(void *, s32, s32);           /* extern */
extern s32 D_00465988;
extern s32 D_004659B0;

void func_00180910(s32 arg0, s32 arg1, u8 *arg2) {
    s8 sp30;

    if ((arg0 == 0) || (arg2 == NULL)) {
        func_001870E8(&D_00465988);
        return;
    }
    if (arg1 > 0) {
        memset(sp, 0, 0x24);
        func_0018BC30(arg0, arg1, &sp30);
        if ((sp30 == 0) || (sp31 == 0)) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
            M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($sp) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($sp) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($sp) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($sp) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x1f($sp) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x18($sp) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s2) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($s2) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s2) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s2) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0x17($s2) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x10($s2) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x1f($s2) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0x18($s2) */);
            *(s32 *)((u8 *)arg2 + 0x20) = sp20;
            *(s32 *)((u8 *)arg2 + 0) = 0;
            return;
        }
        func_00181A20(arg0, arg1, sp, sp50, func_00180AB8(&sp30), sp44, sp48, sp50, sp5C, (s32) sp58);
        func_00180B08(sp);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x17($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x10($sp) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x1f($sp) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x18($sp) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x17($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x10($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x1f($s2) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x18($s2) */);
        *(s32 *)((u8 *)arg2 + 0x20) = sp20;
        return;
    }
    func_001870E8(&D_004659B0);
}
