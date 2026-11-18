/* Draft (not built): func_0018EE10 at 0x0018EE10, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018EE10.s */

s32 func_0018B730();

s32 func_0018EE10(s32 arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    temp_s2_2 = func_0018B730(*(s32 *)((u8 *)temp_s1 + 0x18));
    temp_s2 = temp_s2_2 | func_0018B730(arg0, *(s32 *)((u8 *)temp_s1 + 0x14));
    return temp_s2 | func_0018B730(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C));
}
