/* Draft (not built): func_0016F290 at 0x0016F290, size 0xD0, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sj/func_0016F290.s */

u32 func_00127E88(u32, s32, s32);               /* extern */
s32 func_0016F148(s32);                             /* extern */
s32 func_0016F258(u32, void *, s32);        /* extern */

u32 func_0016F290(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 temp_s1;
    u32 temp_s4;
    u32 temp_v0;
    u32 var_s0;
    u32 var_v0;

    *(s32 *)((u8 *)arg3 + 0) = 0;
    *(s32 *)((u8 *)arg3 + 4) = 0;
    temp_v0 = *(u32 *)((u8 *)arg0 + 0);
    var_s0 = temp_v0;
    temp_s4 = temp_v0 + *(s32 *)((u8 *)arg0 + 4);
    goto loop_4;
block_1:
    if (arg2 == 0) {
        goto block_3;
    }
    var_v0 = func_00127E88(var_s0, arg2, 7);
    if (var_v0 == 0) {
        goto block_8;
    }
block_3:
    var_s0 = var_s0 + func_0016F148(var_s0 + 8) + 0x10;
loop_4:
    temp_s1 = var_s0 < temp_s4;
    if (temp_s1 == 0) {
        goto block_7;
    }
    if (func_00127E88(var_s0, arg1, 7) != 0) {
        goto block_1;
    }
    func_0016F258(var_s0, arg3, 7);
block_7:
    var_v0 = (temp_s1 != 0) ? var_s0 : 0U;
block_8:
    return var_v0;
}
