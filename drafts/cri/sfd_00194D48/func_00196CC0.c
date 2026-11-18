/* Draft (not built): func_00196CC0 at 0x00196CC0, size 0xC4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196CC0.s */

s32 func_00199818();
s32 func_001999E0();
s32 func_001A1758();

void func_00196CC0(s32 arg0) {
    s32 var_s0;
    u32 temp_a1_2;
    u32 temp_a1_3;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x9A0;
    temp_a1_2 = *(s32 *)((u8 *)temp_a1 + 0x18) == 1;
    temp_a1_3 = ((*(s32 *)((u8 *)temp_a1 + 0x14) ^ 1) == 0) ? (temp_a1_2 | 2) : temp_a1_2;
    var_s0 = 2;
    if (temp_a1_3 != 2) {
        if (temp_a1_3 >= 3U) {
            var_s0 = 3;
            if (temp_a1_3 == 3) {
                var_s0 = func_001999E0(0x19, 2, 1);
                if ((var_s0 == 0) && ((func_001A1758(arg0) != 0) || (func_001999E0(arg0, 0x48) == 0))) {
                    goto block_10;
                }
            }
        } else {
            var_s0 = 1;
            if (temp_a1_3 != 1) {
block_10:
                var_s0 = 3;
            }
        }
    }
    func_00199818(arg0, 0x19, var_s0);
}
