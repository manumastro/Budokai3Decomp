/* Draft (not built): func_0018B8F0 at 0x0018B8F0, size 0x7C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018B8F0.c:20: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018B8F0.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *, s32, s32, s32);       /* extern */

void func_0018B8F0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    func_0018D908(sp);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x15C) + 1;
    temp_a3 = temp_v1 + 0x1F;
    temp_a2 = temp_v1 < 0;
    temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x158) + arg1;
    *(s32 *)((u8 *)temp_s0 + 0x158) = temp_a1;
    *(s32 *)((u8 *)(((temp_v1 - (((s32) ((temp_a2 != 0) int temp_a3 : temp_v1) >> 5) << 5)) * 4) + temp_s0) + 0x160) = temp_a1;
    *(s32 *)((u8 *)temp_s0 + 0x15C) = temp_v1;
    func_0018D920(sp, temp_a1, temp_a2, temp_a3);
}
