/* Draft (not built): func_0010B3A0 at 0x0010B3A0, size 0x178, segment sdk/libkernl_0010B038 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_0010B3A0.c:63: parse error before `)'
 * Original: asm/nonmatchings/sdk/libkernl_0010B038/func_0010B3A0.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 ReferThreadStatus(s32, void *);                 /* extern */
s32 StartThread(s32, s32);                          /* extern */
s32 func_0010AD30();                                /* extern */

s32 func_0010B3A0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    u8 *temp_v0_2;

    var_v0 = -1;
    if (func_0010AD30() == 0) {
        if (DI() != 0) {
            temp_v0 = ReferThreadStatus(arg0, sp);
            if (temp_v0 < 0) {
                EI();
                return temp_v0;
            }
            if (sp0 != 0x10) {
                EI();
                goto block_6;
            }
            temp_v0_2 = (sp8 + spC) - 0x2A0;
            *(s128 *)((u8 *)temp_v0_2 + 0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x10) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x20) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x30) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x40) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x50) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x60) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x70) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x80) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x90) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xA0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xB0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xC0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xD0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xE0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0xF0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x100) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x110) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x120) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x130) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x140) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x150) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x160) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x170) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x180) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x190) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x1A0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x1B0) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x200) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x210) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x220) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x230) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x240) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x250) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x260) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x270) = 0;
            *(s128 *)((u8 *)temp_v0_2 + 0x40) = (s64) (arg1 << 0);
            *(s32 *)((u8 *)temp_v0_2 + 0x1C0) = (s64) *(s32 *)((u8 *)temp_v0_2 + 0x1C0);
            *(s64 *)((u8 *)temp_v0_2 + 0x1C8) = 0;
            *(s32 *)((u8 *)temp_v0_2 + 0x1D0) = (s64) *(s32 *)((u8 *)temp_v0_2 + 0x1D0);
            *(s64 *)((u8 *)temp_v0_2 + 0x1D8) = 0;
            *(s32 *)((u8 *)temp_v0_2 + 0x1E0) = (s64) *(s32 *)((u8 *)temp_v0_2 + 0x1E0);
            *(s64 *)((u8 *)temp_v0_2 + 0x1E8) = 0;
            *(s32 *)((u8 *)temp_v0_2 + 0x1F0) = (s64) *(s32 *)((u8 *)temp_v0_2 + 0x1F0);
            *(s64 *)((u8 *)temp_v0_2 + 0x1F8) = 0;
            EI();
            var_v0 = StartThread(arg0, arg1);
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_v0;
        }
block_6:
        return -1;
    }
    return var_v0;
}
