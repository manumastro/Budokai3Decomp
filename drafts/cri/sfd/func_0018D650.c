/* Draft (not built): func_0018D650 at 0x0018D650, size 0x70, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D650.s */

s32 func_0018D6C0(s32 *);                   /* extern */
extern s32 D_00426A7C;

s32 func_0018D650(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        if (arg0 == NULL) {
            func_0018D6C0(&D_00426A7C);
        } else {
            func_0018D6C0(arg0 + 0x98C);
            temp_v0 = *(s32 *)((u8 *)arg0 + 0x48);
            if (temp_v0 > 0) {
                *(s32 *)((u8 *)arg0 + 0x48) = (s32) -temp_v0;
            }
        }
        var_v0 = arg1;
    }
    return var_v0;
}
