/* Draft (not built): func_0019A120 at 0x0019A120, size 0x3C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A120.s */

s32 func_0019A120(u8 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 var_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x288);
    temp_v0 = temp_a1 + *(s32 *)((u8 *)arg0 + 0x28C);
    temp_a1_2 = temp_a1 + *(s32 *)((u8 *)arg0 + 0x290);
    var_v1 = temp_v0;
    if (arg1 >= temp_v0) {
        var_v1 = (arg1 < temp_a1_2) ? temp_a1_2 : 0x7FFFFFFF;
    }
    return var_v1;
}
