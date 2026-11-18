/* Draft (not built): func_00199380 at 0x00199380, size 0x84, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199380.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00199610(void *, s32);             /* extern */

s32 func_00199380(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    u8 *temp_v1;

    var_v0 = func_0018D870();
    if (var_v0 != 0) {
        return func_0018D650(0, 0xFF00015A);
    }
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_v1 != NULL) {
        *(s32 *)((u8 *)temp_v1 + 0xDBC) = arg2;
        *(s32 *)((u8 *)temp_v1 + 0xDB8) = arg1;
        func_00199610(arg0, 0xFF00015A);
        var_v0 = 0;
    }
    return var_v0;
}
