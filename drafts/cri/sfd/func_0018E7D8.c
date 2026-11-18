/* Draft (not built): func_0018E7D8 at 0x0018E7D8, size 0xA8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018E7D8.s */

s32 func_0018E880(void **, s32, s32);               /* extern */
extern s32 D_00426B08;

s32 func_0018E7D8(u8 **arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 (**)(s32))((u8 *)(*arg0) + 0x24))(0) >= arg2) {
        var_v0 = func_0018E880(arg0, arg1, arg2);
        temp_s0 = arg2 - var_v0;
        if (var_v0 != 0) {
            if ((temp_s0 > 0) && (func_0018E880(arg0, arg1 + var_v0, temp_s0) != temp_s0)) {
                D_00426B08 += 1;
            }
            var_v0 = 1;
        }
    }
    return var_v0;
}
