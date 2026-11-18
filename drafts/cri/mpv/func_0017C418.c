/* Draft (not built): func_0017C418 at 0x0017C418, size 0xAC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mpv/func_0017C418.s */

s32 func_0017B5B8();
s32 func_0017C2E0();
s32 func_0017EB90();

void func_0017C418(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 var_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;

    if (func_0017EB90() != 0) {
        func_0017C2E0(0, 0xFF03020A, 0xCC);
        return;
    }
    temp_s1 = *(s32 *)((u8 *)arg1 + 4);
    temp_s0 = *(s32 *)((u8 *)arg1 + 0);
    temp_v0 = func_0017B5B8(temp_s0, temp_s1, 0xCC);
    var_a1 = 0xFF030305;
    if (temp_v0 == 0) {
        *arg2 = temp_s1;
    } else {
        *arg2 = temp_v0 - temp_s0;
        var_a1 = 0;
    }
    func_0017C2E0(arg0, var_a1);
}
