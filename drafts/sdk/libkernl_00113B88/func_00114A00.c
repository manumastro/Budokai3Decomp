/* Draft (not built): func_00114A00 at 0x00114A00, size 0x4C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114A00.s */

s32 ExecOSD(s32, s32);                          /* extern */
s32 func_00114800(s32 *, s32, s32);         /* extern */
s32 func_00114918();                            /* extern */
extern s32 D_003ECA60;
extern s32 D_0045D9F0;

void func_00114A00(s32 arg0, s32 arg1) {
    func_00114800(&D_0045D9F0, arg0, arg1);
    func_00114918();
    ExecOSD(arg0, D_003ECA60 + 4);
}
