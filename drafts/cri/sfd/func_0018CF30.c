/* Draft (not built): func_0018CF30 at 0x0018CF30, size 0x8C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018CF30.s */

s32 func_0018D320();
extern s32 func_0019DCF8;
extern s32 func_0019DD40;
extern s32 func_0019DD88;
extern s32 func_0019DDD0;

void func_0018CF30(s32 *arg0, u8 *arg1) {
    s32 temp_v0;

    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320(&func_0019DCF8);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320(arg0, &func_0019DD40);
    temp_v0 = func_0018D320(arg0, &func_0019DD88);
    *(s32 *)((u8 *)arg1 + 0x18) = temp_v0;
    if (temp_v0 == -1) {
        *(s32 *)((u8 *)arg1 + 0x18) = 2;
    }
    *(s32 *)((u8 *)arg1 + 0x1C) = func_0018D320(arg0, &func_0019DDD0);
}
