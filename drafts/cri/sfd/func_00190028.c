/* Draft (not built): func_00190028 at 0x00190028, size 0xAC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00190028.s */

s32 func_0018B710();
s32 func_0018B730();
s32 func_001900D8();
s32 func_00190268();

void func_00190028(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1C68;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730(temp_s2) != 1) && (func_0018B730(arg0, temp_s0) == 1) && (func_001900D8(arg0) != 0)) {
        func_0018B710(arg0, temp_s2, 1);
        func_00190268(arg0);
    }
}
