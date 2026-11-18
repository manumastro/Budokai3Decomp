/* Draft (not built): func_0018CFC0 at 0x0018CFC0, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018CFC0.s */

s32 func_0018D320();
extern s32 func_0019DF00;
extern s32 func_0019DF48;
extern s32 func_0019DF90;
extern s32 func_0019DFD8;
extern s32 func_0019E088;
extern s32 func_0019E0D0;
extern s32 func_0019E118;

void func_0018CFC0(s32 *arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = func_0018D320(&func_0019DF00);
    *(s32 *)((u8 *)arg1 + 4) = func_0018D320(arg0, &func_0019DF48);
    *(s32 *)((u8 *)arg1 + 8) = func_0018D320(arg0, &func_0019DF90);
    *(s32 *)((u8 *)arg1 + 0xC) = func_0018D320(arg0, &func_0019DFD8);
    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320(arg0, &func_0019E088);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320(arg0, &func_0019E0D0);
    *(s32 *)((u8 *)arg1 + 0x18) = func_0018D320(arg0, &func_0019E118);
}
