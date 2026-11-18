/* Draft (not built): func_00196810 at 0x00196810, size 0x54, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196810.s */

s32 func_00196868(s32);                         /* extern */
s32 func_001976B8();                            /* extern */
extern s32 D_00426AE4;

void func_00196810(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &D_00426AE4;
    var_s1 = 7;
    do {
        temp_v0 = *var_s0;
        var_s0 += 4;
        if (temp_v0 != 0) {
            func_00196868(temp_v0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_001976B8();
}
