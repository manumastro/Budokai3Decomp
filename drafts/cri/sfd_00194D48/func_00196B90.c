/* Draft (not built): func_00196B90 at 0x00196B90, size 0xA8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196B90.s */

s32 func_0018AF98();
s32 func_0018AFB8();
s32 func_00198C00();

void func_00196B90(s32 arg0) {
    s32 var_a2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x9A0;
    if ((*(s32 *)((u8 *)temp_s0 + 0x14) == 1) && (func_0018AFB8(1) == 0) && (func_0018AF98(arg0, 1) == 0)) {
        *(s32 *)((u8 *)temp_s0 + 0x14) = 0;
    }
    var_a2 = *(s32 *)((u8 *)temp_s0 + 0x18);
    if (var_a2 == 1) {
        if (func_0018AFB8(arg0, 2, var_a2) != 0) {
            var_a2 = *(s32 *)((u8 *)temp_s0 + 0x18);
        } else if (func_0018AF98(arg0, 2) != 0) {
            var_a2 = *(s32 *)((u8 *)temp_s0 + 0x18);
        } else {
            *(s32 *)((u8 *)temp_s0 + 0x18) = 0;
            var_a2 = 0;
        }
    }
    func_00198C00(arg0, *(s32 *)((u8 *)temp_s0 + 0x14), var_a2);
}
