/* Draft (not built): func_0018B970 at 0x0018B970, size 0xAC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018B970.c:22: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018B970.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *, s32, s32, s32);       /* extern */

s32 func_0018B970(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_s1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    func_0018D908(sp);
    temp_a3 = *(s32 *)((u8 *)temp_s0 + 0x1E8);
    var_s1 = 0;
    temp_a2 = temp_a3 + 0x1F;
    temp_a1 = temp_a3 < 0;
    if ((temp_a3 - *(s32 *)((u8 *)temp_s0 + 0x1EC)) < 0x20) {
        *(s32 *)((u8 *)temp_s0 + 0x1E0) = arg2;
        var_s1 = 1;
        *(s32 *)((u8 *)(((temp_a3 - (((s32) ((temp_a1 != 0) int temp_a2 : temp_a3) >> 5) << 5)) * 4) + temp_s0) + 0x1F0) = arg1;
        *(s32 *)((u8 *)temp_s0 + 0x1E8) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x1E8) + 1);
    }
    func_0018D920(sp, temp_a1, temp_a2, temp_a3);
    return var_s1;
}
