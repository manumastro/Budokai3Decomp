/* Draft (not built): func_00199E08 at 0x00199E08, size 0x208, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199E08.s */

s32 func_0019A010();
s32 func_0019A058();
s32 func_0019AE00();
extern s32 func_0019A848;
extern s32 func_0019A890;
extern s32 func_0019A8F0;
extern s32 func_0019A910;

void func_00199E08(s32 *arg0, u8 *arg1) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    func_0019AE00(&func_0019A848, NULL);
    func_0019AE00(arg0, &func_0019A890, 1);
    func_0019AE00(arg0, NULL, 2);
    func_0019AE00(arg0, &func_0019A8F0, 3);
    func_0019AE00(arg0, NULL, 4);
    func_0019AE00(arg0, &func_0019A910, 5);
    *(s32 *)((u8 *)arg1 + 0x18) = 0;
    func_0019A058(arg1 + 0x1C);
    func_0019A010(arg1 + 0xC0, 0);
    func_0019A010(arg1 + 0x3C, 0x7FFFFFFF);
    func_0019A010(arg1 + 0x68, -1);
    func_0019A010(arg1 + 0x94, -1);
    func_0019A010(arg1 + 0xEC, -1);
    func_0019A010(arg1 + 0x118, 0x7FFFFFFF);
    *(s32 *)((u8 *)arg1 + 0x144) = 0;
    *(s32 *)((u8 *)arg1 + 0x148) = 0;
    *(s32 *)((u8 *)arg1 + 0x154) = 0;
    var_v1 = 0x1F;
    *(s32 *)((u8 *)arg1 + 0x158) = 0;
    *(s32 *)((u8 *)arg1 + 0x15C) = 0;
    *(s32 *)((u8 *)arg1 + 0x150) = -1;
    *(s32 *)((u8 *)arg1 + 0x14C) = -1;
    var_v0 = arg1 + 0x1DC;
    do {
        var_v1 -= 1;
        *var_v0 = 0;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    *(s32 *)((u8 *)arg1 + 0x1E4) = 0;
    *(s32 *)((u8 *)arg1 + 0x1E8) = 0;
    var_v1_2 = 0x1F;
    *(s32 *)((u8 *)arg1 + 0x1EC) = 0;
    *(s32 *)((u8 *)arg1 + 0x1E0) = 1;
    var_v0_2 = arg1 + 0x26C;
    do {
        var_v1_2 -= 1;
        *var_v0_2 = 0;
        var_v0_2 -= 4;
    } while (var_v1_2 >= 0);
    *(s32 *)((u8 *)arg1 + 0x29C) = 0;
    *(s32 *)((u8 *)arg1 + 0x2C0) = -1;
    *(s32 *)((u8 *)arg1 + 0x2CC) = -5;
    *(s32 *)((u8 *)arg1 + 0x294) = 0x7FFFFFFF;
    *(s32 *)((u8 *)arg1 + 0x2D0) = 0;
    *(s32 *)((u8 *)arg1 + 0x2A0) = 0x3E8;
    *(s32 *)((u8 *)arg1 + 0x2D4) = 1;
    *(s32 *)((u8 *)arg1 + 0x2B0) = 0x64;
    *(f32 *)((u8 *)arg1 + 0x2BC) = -1.0f;
    *(s32 *)((u8 *)arg1 + 0x2C4) = (s32) *(s32 *)((u8 *)arg1 + 0x29C);
    *(s32 *)((u8 *)arg1 + 0x2DC) = 0;
    *(s32 *)((u8 *)arg1 + 0x2D8) = -1;
    *(s32 *)((u8 *)arg1 + 0x270) = -5;
    *(s32 *)((u8 *)arg1 + 0x274) = 1;
    *(s32 *)((u8 *)arg1 + 0x278) = -5;
    *(s32 *)((u8 *)arg1 + 0x27C) = 1;
    *(s32 *)((u8 *)arg1 + 0x280) = -1;
    *(s32 *)((u8 *)arg1 + 0x284) = 1;
    *(s32 *)((u8 *)arg1 + 0x288) = -5;
    *(s32 *)((u8 *)arg1 + 0x28C) = 0x7FFFFFFF;
    *(s32 *)((u8 *)arg1 + 0x290) = 0;
    *(s32 *)((u8 *)arg1 + 0x298) = 0;
    *(s32 *)((u8 *)arg1 + 0x2A4) = 0;
    *(s32 *)((u8 *)arg1 + 0x2A8) = 0;
    *(s32 *)((u8 *)arg1 + 0x2AC) = 1;
    *(f32 *)((u8 *)arg1 + 0x2B4) = -1.0f;
    *(s32 *)((u8 *)arg1 + 0x2B8) = 0;
    *(s32 *)((u8 *)arg1 + 0x2C8) = 0;
}
