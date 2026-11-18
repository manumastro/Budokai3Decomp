/* Draft (not built): func_00189FA0 at 0x00189FA0, size 0x40, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189FA0.s */

s32 func_00189FE0(s32);                         /* extern */
s32 func_001999E0(s32);                         /* extern */

s32 func_00189FA0(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = func_001999E0(6);
    temp_v1 = arg0 + 0x3194;
    if (var_v0 != 0) {
        *(s32 *)((u8 *)arg0 + 0x1DC4) = temp_v1;
        func_00189FE0(temp_v1);
        var_v0 = 0;
    }
    return var_v0;
}
