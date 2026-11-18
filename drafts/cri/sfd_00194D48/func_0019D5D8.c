/* Draft (not built): func_0019D5D8 at 0x0019D5D8, size 0xC8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D5D8.s */

s32 func_0019D708(s32, s32, s32);               /* extern */
s32 func_0019D770(s32);                             /* extern */
extern s32 D_00492A58;

s32 func_0019D5D8(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0;
    var_s2 = 0;
    temp_s1 = *(s32 *)((u8 *)(&D_00492A58) + 0);
    temp_s3 = *(s32 *)((u8 *)(&D_00492A58) + 8);
    if (*(s32 *)((u8 *)(&D_00492A58) + 4) < temp_s1) {
        var_s0 = 0;
        var_v0_2 = temp_s1 > 0;
loop_2:
        if (var_v0_2 != 0) {
            temp_v0 = var_s0 * 0x10;
            var_s0 += 1;
            var_s2 = temp_s3 + temp_v0;
            var_v0_2 = var_s0 < temp_s1;
            if (func_0019D770(var_s2) == 0) {
                goto loop_2;
            }
        }
        func_0019D708(var_s2, arg0, arg1);
        var_v0 = var_s2;
        *(s32 *)((u8 *)(&D_00492A58) + 4) = (s32) (*(s32 *)((u8 *)(&D_00492A58) + 4) + 1);
    }
    return var_v0;
}
