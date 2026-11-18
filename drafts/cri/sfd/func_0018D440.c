/* Draft (not built): func_0018D440 at 0x0018D440, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D440.s */

s32 func_0018D4A8(s32);                             /* extern */
s32 func_0018D890(s32, s32 *);              /* extern */
s32 func_0018D8C0();                            /* extern */
s32 func_0018D8F8();                            /* extern */
extern s32 D_00426B04;
extern s32 D_004673D0;
extern s32 *D_0048E290;

s32 func_0018D440(s32 arg0) {
    s32 var_v0;

    D_0048E290 = &D_004673D0;
    D_00426B04 = 0x32B8;
    func_0018D890(0x32B8, &D_00426B04);
    var_v0 = func_0018D4A8(arg0);
    if (var_v0 == 0) {
        func_0018D8C0();
        func_0018D8F8();
        var_v0 = 0;
    }
    return var_v0;
}
