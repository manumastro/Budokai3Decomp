/* Draft (not built): func_0018D4A8 at 0x0018D4A8, size 0xC0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D4A8.s */

s32 func_00178BA8(s32 *, s32 *, s32); /* extern */
s32 func_00179018(s32 *, s32, s32); /* extern */
s32 func_0018A1A8(void *);                      /* extern */
s32 func_0018D568(s32 *);                   /* extern */
s32 func_0018D620(void *);                      /* extern */
s32 func_00199DF0(void *, s32);                 /* extern */
s32 func_0019B9A8(s32 *, s32);              /* extern */
extern s32 D_004268E0;
extern s32 D_00426AA0;
extern s32 D_00467570;

void func_0018D4A8(u8 *arg0) {
    s32 *var_s0;
    s32 var_v0;

    func_00179018(&D_004268E0, 0, 0x89);
    func_00178BA8(&D_004268E0, &D_00467570, 0x190);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x197($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x190($s0) */);
    *(s32 *)((u8 *)(&D_004268E0) + 0x198) = 0;
    func_0018D620(&D_004268E0 + 0x19C);
    func_00199DF0(&D_004268E0 + 0x1B0, *(s32 *)((u8 *)arg0 + 4));
    func_0018A1A8(&D_004268E0 + 0x1BC);
    func_0018D568(&D_004268E0);
    var_v0 = 7;
    var_s0 = &D_004268E0 + 0x220;
    do {
        var_v0 -= 1;
        *var_s0 = 0;
        var_s0 -= 4;
    } while (var_v0 >= 0);
    func_0019B9A8(&D_00426AA0, *(s32 *)((u8 *)arg0 + 0));
}
