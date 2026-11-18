/* Draft (not built): func_00196AB0 at 0x00196AB0, size 0xB0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196AB0.s */

s32 func_001999E0();
s32 func_0019C140();
s32 func_0019C170();

s32 func_00196AB0(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 1;
    if (func_001999E0(5) != 0) {
        temp_s2 = func_0019C140(arg0, 6);
        var_s2 = temp_s2 | func_0019C170(arg0, 6);
    }
    var_s1 = 1;
    if (func_001999E0(arg0, 6) != 0) {
        temp_s1 = func_0019C140(arg0, 7);
        var_s1 = temp_s1 | func_0019C170(arg0, 7);
    }
    var_v0 = 0;
    if (var_s2 != 0) {
        var_v0 = 1;
        if (var_s1 == 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
