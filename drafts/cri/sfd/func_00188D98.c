/* Draft (not built): func_00188D98 at 0x00188D98, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00188D98.s */

s32 func_00188E40();
s32 func_0018B710();
s32 func_0018B730();

void func_00188D98(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1CAC;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730(temp_s2) != 1) && (func_0018B730(arg0, temp_s0) == 1) && (func_00188E40(arg0) != 0)) {
        func_0018B710(arg0, temp_s2, 1);
    }
}
