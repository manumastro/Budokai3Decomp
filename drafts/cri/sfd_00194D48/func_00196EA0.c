/* Draft (not built): func_00196EA0 at 0x00196EA0, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 21 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196EA0.s */

s32 func_001974D0(s32, void *);                     /* extern */

s32 func_00196EA0(s32 arg0) {
    s32 temp_a1_2;
    s32 var_v0;
    u8 *temp_a1;
    u8 *temp_a2;

    temp_a2 = arg0 + 0x9A0;
    var_v0 = 1;
    temp_a1 = arg0 + 0xCC0;
    if ((*(s32 *)((u8 *)temp_a2 + 0x38) != 0) && (*(s32 *)((u8 *)temp_a2 + 0x14) != 0) && (*(s32 *)((u8 *)temp_a1 + 0x2A4) == 0)) {
        temp_a1_2 = *(s32 *)((u8 *)temp_a2 + 0xB4);
        if (*(s32 *)((u8 *)temp_a1 + 0x2C0) < temp_a1_2) {
            var_v0 = func_001974D0(temp_a1_2, temp_a2) != 0;
        }
    }
    return var_v0;
}
