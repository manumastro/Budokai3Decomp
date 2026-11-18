/* Draft (not built): func_0018F2C8 at 0x0018F2C8, size 0xC4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 22 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018F2C8.s */

s32 func_0017B0D0();
s32 func_0017B240();
s32 func_0018D650();
s32 func_0018F390();
s32 func_0018F468();
extern s32 func_0018F400;

void func_0018F2C8(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = arg0 + 0x1E44;
    *(s32 *)((u8 *)arg0 + 0x1C2C) = temp_s2;
    func_0018F390(temp_s2);
    temp_v0 = func_0017B240();
    if (temp_v0 == 0) {
        func_0018D650(arg0, 0xFF000D08, arg0);
        return;
    }
    if (func_0017B0D0(temp_v0, &func_0018F400, arg0) != 0) {
        func_0018F468(temp_v0);
        func_0018D650(arg0, 0xFF000D09);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x1E44) = temp_v0;
}
