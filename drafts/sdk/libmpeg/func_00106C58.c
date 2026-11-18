/* Draft (not built): func_00106C58 at 0x00106C58, size 0x8C, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728();

void func_00106C58(u8 *arg0) {
    func_00104728((u8 *)3);
    if (func_00104728(arg0, 1) != 0) {
        func_00104728(arg0, 8);
        func_00104728(arg0, 8);
        *(s32 *)((u8 *)arg0 + 0x154) = func_00104728(arg0, 8);
    }
    *(s32 *)((u8 *)arg0 + 0x158) = func_00104728(arg0, 0xE);
    func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x15C) = func_00104728(arg0, 0xE);
}
