/* Draft (not built): func_00191200 at 0x00191200, size 0x44, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00191200.s */

s32 func_00191248(s32);                             /* extern */

s32 func_00191200(s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 < 5;
    var_v0 = 1;
    if (arg2 != 0x80) {
        if ((temp_a1 == 0) || (var_v0 = func_00191248(temp_a1), (var_v0 != 1))) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
