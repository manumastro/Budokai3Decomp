/* Draft (not built): func_0017DE90 at 0x0017DE90, size 0x104, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017DE90.s */

s32 func_001221D8(s32);                             /* extern */
s32 func_00127E88(s32, s32 *, s32);         /* extern */
s32 func_0017B420(s32);                             /* extern */
extern s32 D_00465380;
extern s32 D_00465388;

s32 func_0017DE90(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s2;

    temp_s3 = arg2 - 4;
    var_s2 = 0;
    temp_s4 = arg1 + 4;
    if (temp_s3 > 0) {
        var_s0 = temp_s4;
loop_2:
        var_s2 += 1;
        if (func_00127E88(var_s0, &D_00465380, 7) == 0) {
            *(s32 *)((u8 *)arg0 + 0x394) = (s32) ((func_001221D8(var_s0 + 0x10) != 0) ? 3 : 0);
        }
        if (func_00127E88(var_s0, &D_00465388, 7) == 0) {
            *(s32 *)((u8 *)arg0 + 0x35C) = func_001221D8(var_s0 + 0x10);
            *(s32 *)((u8 *)arg0 + 0x360) = func_001221D8(var_s0 + 0x18);
            *(s32 *)((u8 *)arg0 + 0x364) = func_001221D8(var_s0 + 0x20);
        }
        if (func_0017B420(var_s0) == 0) {
            var_s0 = temp_s4 + var_s2;
            if (var_s2 < temp_s3) {
                goto loop_2;
            }
        }
    }
    return 0;
}
