/* Draft (not built): mwPlySfdInit at 0x00182470, size 0xA4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00182470.c:28: too few arguments to function `func_00182420'
 * Original: asm/nonmatchings/cri/mwsfd/mwPlySfdInit.s */

s32 func_00182420(s32, s32 *);              /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_0018D430(s32 *, s32, s32);         /* extern */
s32 func_0018D440(void *);                          /* extern */
s32 func_0018D700(s32, s32 *, s32);     /* extern */
extern s32 D_00465D48;
extern s32 D_00465D50;
extern s32 func_00182538;

s32 mwPlySfdInit(s32 arg0) {
    s32 var_v0;

    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($t0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($t0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, ($sp) */);
    if (func_0018D430(&D_00465D48, 0x32B8, arg0) != 1) {
        func_001870E8(&D_00465D50);
        return -1;
    }
    if (func_0018D440(sp) != 0) {
        return func_00182420(-0x12D, &func_00182538);
    }
    var_v0 = func_0018D700(0, &func_00182538, 0);
    if (var_v0 != 0) {
        var_v0 = func_00182420(-0x12F);
    }
    return var_v0;
}
