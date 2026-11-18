/* Draft (not built): func_00194C28 at 0x00194C28, size 0x4C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00194C28.s */

s32 func_00194C28(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != (((*(s32 *)((u8 *)arg0 + 8) * 0x10) + *(s32 *)((u8 *)arg0 + 4) + 0x10) & 0x0FFFFFFF)) {
        temp_v0 = arg1 - *(s32 *)((u8 *)arg0 + 0);
        var_v0 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    }
    return var_v0;
}
