/* Draft (not built): func_0018A420 at 0x0018A420, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018A420.s */

s32 func_0016E120(s32, s32, s32);                   /* extern */

s32 func_0018A420(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg2 - arg3;
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    var_v0 = 0;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = temp_v1;
    if (temp_v1 > 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = arg3;
        *(s32 *)((u8 *)arg0 + 0x14) = 0;
        var_v0 = func_0016E120(arg1, temp_v1, arg3);
        *(s32 *)((u8 *)arg0 + 4) = var_v0;
    }
    return var_v0;
}
