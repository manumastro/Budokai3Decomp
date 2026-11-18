/* Draft (not built): func_001881A8 at 0x001881A8, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 19 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_001881A8.s */

s32 func_00127E88(void *, s32 *, s32);      /* extern */
extern s32 D_00467238;

s32 func_001881A8(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 var_v0;

    *arg2 = 0x120;
    var_v0 = 0;
    if ((arg1 >= 0x120) && (*(u8 *)((u8 *)arg0 + 0) == 0x80) && (*(u8 *)((u8 *)arg0 + 1) == 0)) {
        var_v0 = func_00127E88(arg0 + 0x11A, &D_00467238, 6) == 0;
    }
    return var_v0;
}
