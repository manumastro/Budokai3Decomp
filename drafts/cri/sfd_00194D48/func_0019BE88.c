/* Draft (not built): func_0019BE88 at 0x0019BE88, size 0x9C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BE88.s */

s32 func_0019BF48();
s32 func_0019C008();

void func_0019BE88(s32 arg0, u8 *arg1) {
    func_0019C008(2, 3);
    func_0019BF48(arg0, 3, 4);
    if (*(s32 *)((u8 *)arg1 + 0x14) != 0) {
        func_0019C008(arg0, 4, 5);
        func_0019BF48(arg0, 5, 6);
        func_0019C008(arg0, 6, 7);
        return;
    }
    func_0019C008(arg0, 4, 7);
}
