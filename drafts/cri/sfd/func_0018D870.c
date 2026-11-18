/* Draft (not built): func_0018D870 at 0x0018D870, size 0x20, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D870.s */

extern void *D_004268D8;

s32 func_0018D870(u8 *arg0) {
    s32 var_v0;

    D_004268D8 = arg0;
    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = (*(s32 *)((u8 *)arg0 + 0x48) != 0) ? 0 : -1;
    }
    return var_v0;
}
