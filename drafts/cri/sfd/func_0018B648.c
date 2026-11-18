/* Draft (not built): func_0018B648 at 0x0018B648, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018B648.s */

s32 func_0019C0D8(s32, s32, s32);               /* extern */

s32 func_0018B648(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_t0;

    temp_t0 = arg0 + 0x1280 + (arg1 * 0x74);
    if (*(s32 *)((u8 *)temp_t0 + 4) == 0) {
        return func_0019C0D8(*(s32 *)((u8 *)temp_t0 + 0x4C), 0xB, arg2);
    }
    return 0;
}
