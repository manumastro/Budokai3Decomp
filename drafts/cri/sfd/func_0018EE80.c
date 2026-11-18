/* Draft (not built): func_0018EE80 at 0x0018EE80, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018EE80.s */

s32 func_0018B710();

void func_0018EE80(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B710(*(s32 *)((u8 *)temp_s1 + 0x18), arg1);
    func_0018B710(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), arg1);
    func_0018B710(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), arg1);
}
