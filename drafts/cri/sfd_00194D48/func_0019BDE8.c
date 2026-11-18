/* Draft (not built): func_0019BDE8 at 0x0019BDE8, size 0x9C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BDE8.s */

s32 func_0019BF48();
s32 func_0019C008();

void func_0019BDE8(s32 arg0, u8 *arg1) {
    func_0019C008(1, 2);
    func_0019BF48(arg0, 2, 3);
    if (*(s32 *)((u8 *)arg1 + 0x10) != 0) {
        func_0019C008(arg0, 3, 4);
        func_0019BF48(arg0, 4, 5);
        func_0019C008(arg0, 5, 6);
        return;
    }
    func_0019C008(arg0, 3, 6);
}
