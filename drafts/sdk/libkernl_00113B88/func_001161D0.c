/* Draft (not built): func_001161D0 at 0x001161D0, size 0xA8, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001161D0.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_001156A0(s32);                         /* extern */
extern s32 D_00478700;

s32 func_001161D0(u32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    temp_s1 = (arg0 >> 8) * 0x10;
    temp_s2 = DI();
    if (((s32) arg0 < 0) || ((arg0 ^ *(s32 *)((u8 *)temp_s1 + 4)) & 0xFF)) {
        if (temp_s2 != 0) {
            EI();
        }
        return 0x80008002;
    }
    func_001156A0(*(s32 *)((u8 *)temp_s1 + 4));
    temp_v0 = D_00478700;
    D_00478700 = temp_s1;
    *(s32 *)((u8 *)temp_s1 + 0) = temp_v0;
    *(s32 *)((u8 *)temp_s1 + 4) = 0;
    if (temp_s2 != 0) {
        EI();
    }
    return 0;
}
