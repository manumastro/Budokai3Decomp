/* Draft (not built): func_0018D0F0 at 0x0018D0F0, size 0x94, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018D0F0.s */

s32 func_0018D358();
extern s32 func_0019E298;
extern s32 func_0019E300;
extern s32 func_0019E380;
extern s32 func_0019E3E8;

void func_0018D0F0(s32 *arg0, s32 arg1, u8 *arg2) {
    if (arg1 != 0) {
        *(s32 *)((u8 *)arg2 + 0) = func_0018D358(&func_0019E298);
        *(s32 *)((u8 *)arg2 + 4) = func_0018D358(arg0, arg1, &func_0019E300);
        *(s32 *)((u8 *)arg2 + 8) = func_0018D358(arg0, arg1, &func_0019E380);
        *(s32 *)((u8 *)arg2 + 0xC) = func_0018D358(arg0, arg1, &func_0019E3E8);
    }
}
