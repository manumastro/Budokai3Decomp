/* Draft (not built): func_00196350 at 0x00196350, size 0x8C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196350.s */

s32 func_0018D650(s32, s32, s32);   /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001963E0(void *, s32, s32);    /* extern */

void func_00196350(u8 *arg0, s32 arg1) {
    s32 var_a2;
    s32 temp_a0;

    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000142, 1);
        return;
    }
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x50);
    var_a2 = (temp_a0 != 0) ? 2 : 1;
    if ((arg1 != 0) || (var_a2 = 0, (temp_a0 != 0))) {
        *(s32 *)((u8 *)arg0 + 0x50) = arg1;
        func_001963E0(arg0, var_a2, var_a2);
        *(s32 *)((u8 *)arg0 + 0x44) = 1;
    }
}
