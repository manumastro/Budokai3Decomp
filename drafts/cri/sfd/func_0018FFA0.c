/* Draft (not built): func_0018FFA0 at 0x0018FFA0, size 0x70, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FFA0.s */

s32 func_0018D3F8(s32);                             /* extern */
s32 func_0018F9A0(s32, s32, s32);       /* extern */
s32 func_001999E0(s32);                         /* extern */

void func_0018FFA0(s32 arg0) {
    s32 var_a2;
    s32 temp_v0;

    if (func_001999E0(0x1C) != 0) {
        temp_v0 = func_0018D3F8(arg0);
        var_a2 = 1;
        if ((temp_v0 == 0) || (var_a2 = 0, (temp_v0 > 0)) || (temp_v0 != -1)) {
            func_0018F9A0(arg0, 5, var_a2);
        }
    }
}
