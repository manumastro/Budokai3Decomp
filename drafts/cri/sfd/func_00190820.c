/* Draft (not built): func_00190820 at 0x00190820, size 0x88, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00190820.s */

s32 func_0018AF78(s32);                             /* extern */
s32 func_0018B790(void *, s32);                     /* extern */
s32 func_0018D650(void *, s32);                 /* extern */

s32 func_00190820(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C78);
    temp_s1 = func_0018AF78(temp_s2);
    if ((temp_s1 - func_0018B790(arg0, temp_s2)) < *(s32 *)((u8 *)arg0 + 0x28)) {
        return func_0018D650(arg0, 0xFF000F1C);
    }
    return 0;
}
