/* Draft (not built): func_00188208 at 0x00188208, size 0x3C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00188208.s */

s32 func_00188208(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 var_v0;

    *arg2 = 0x12;
    var_v0 = 0;
    if ((arg1 >= 0x12) && (*(u8 *)((u8 *)arg0 + 0) == 0x80)) {
        var_v0 = *(u8 *)((u8 *)arg0 + 1) == 1;
    }
    return var_v0;
}
