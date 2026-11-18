/* Draft (not built): func_0010EA50 at 0x0010EA50, size 0xEC, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010EA50.s */

s32 func_0010B2D8(s32);                         /* extern */
u32 sceSifCallRpc(s32, s32, s32, s32, s32);         /* extern */

u32 func_0010EA50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg_sp0, s32 arg_sp8) {
    s32 sp10;
    s32 sp14;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s0;

    var_s2 = 0;
    var_s1 = 1;
    sp10 = arg0;
    sp14 = arg1;
loop_1:
    temp_s0 = sceSifCallRpc(sp10, sp14, arg2, arg3, arg_sp0) >> 0x1F;
    if ((temp_s0 != 0) && (arg_sp8 == 0)) {
        func_0010B2D8(var_s1 * 0x3E8);
        if (var_s1 < 0x7F) {
            var_s1 *= 2;
        }
        var_s2 += 1;
        if (var_s2 < 0x65) {
            goto loop_1;
        }
    }
    return temp_s0;
}
