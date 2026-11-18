/* Draft (not built): func_0018EA38 at 0x0018EA38, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018EA38.s */

s32 func_0018B750();
s32 func_00195E20();

void func_0018EA38(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B750(*(s32 *)((u8 *)temp_s1 + 0x18), 1);
    func_0018B750(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), 1);
    func_0018B750(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), 1);
    func_00195E20(arg0, arg1);
}
