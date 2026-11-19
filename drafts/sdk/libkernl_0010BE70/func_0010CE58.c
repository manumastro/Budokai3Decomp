/* Draft (not built): func_0010CE58 at 0x0010CE58, size 0x38, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: pile error: d_0010CE58.c:7: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/func_0010CE58.s */

s32 func_0010C048(s32 *, void *, s32, s32, s32); /* extern */
extern s32 func_0010CD60;

void func_0010CE58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0010C048(&func_0010CD60, sp, arg1, arg2, arg0);
}

/* Similar function already in C: sceDeci2ExReqSend (src/sdk/libkernl/ico_deci2.c), similarity 0.62.
 * It is the template below (not built). */
#if 0
void sceDeci2ExReqSend(int s, signed char a1)
{
    int args[4];
    args[0] = s;
    args[1] = a1;
    Deci2Call(-7, args);
}
#endif
