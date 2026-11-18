/* Draft (not built): func_001848D0 at 0x001848D0, size 0xB4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001848D0.c:21: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001848D0.s */

s32 func_001815F0(s32, s32, s32, void *);       /* extern */
s32 func_00184998(void *, s32, s32, s32);       /* extern */

void func_001848D0(u8 *arg0, u8 *arg1) {
    s32 temp_s1;
    s32 temp_t1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_t1 = *(s32 *)((u8 *)arg0 + 8);
    *(s32 *)((u8 *)arg1 + 0x44) = temp_t1;
    *(s32 *)((u8 *)arg1 + 0x48) = temp_s1;
    if (*(s32 *)((u8 *)arg0 + 4) != 3) {
        func_00184998(arg1 + 4, *(s32 *)((u8 *)arg0 + 0), temp_t1, temp_s1);
        return;
    }
    func_001815F0(*(s32 *)((u8 *)arg0 + 0), temp_t1, temp_s1, sp);
    func_00184998(arg1 + 4, sp0, spC, temp_s1);
    func_00184998(arg1 + 0x14, sp4, sp10, temp_s1);
    func_00184998(arg1 + 0x24, sp8, sp14, temp_s1);
}
