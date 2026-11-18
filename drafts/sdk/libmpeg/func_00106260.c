/* Draft (not built): func_00106260 at 0x00106260, size 0xA0, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728();
s32 func_00106898();

void func_00106260(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0xFC) = 0;
    *(s32 *)((u8 *)arg0 + 0x864) = 1;
    *(s32 *)((u8 *)arg0 + 0x85C) = (s32) (*(s32 *)((u8 *)arg0 + 0x860) + 1);
    func_00104728((u8 *)1);
    func_00104728(arg0, 5);
    func_00104728(arg0, 6);
    func_00104728(arg0, 1);
    func_00104728(arg0, 6);
    func_00104728(arg0, 6);
    *(s32 *)((u8 *)arg0 + 0x1B4) = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x1B8) = func_00104728(arg0, 1);
    func_00106898(arg0);
}
