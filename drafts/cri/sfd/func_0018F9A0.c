/* Draft (not built): func_0018F9A0 at 0x0018F9A0, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 23 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018F9A0.s */

s32 func_0017E9E8(s32, s32, s32);                   /* extern */
s32 func_0018D650(void *, s32);             /* extern */
s32 func_0018D870();                                /* extern */

void func_0018F9A0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        goto block_5;
    }
    if (func_0018D870() == 0) {
        goto block_4;
    }
    func_0018D650(NULL, 0xFF000181);
    return;
block_4:
    var_v1 = **(s32 **)((u8 *)arg0 + 0x1C70);
block_5:
    if (func_0017E9E8(var_v1, arg1, ((arg1 ^ 5) != 0) ? arg2 : 0) == 0) {
        goto block_8;
    }
    func_0018D650(arg0, 0xFF000F12);
    return;
block_8:
    return;
}
