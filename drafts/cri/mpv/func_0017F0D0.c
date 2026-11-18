/* Draft (not built): func_0017F0D0 at 0x0017F0D0, size 0x100, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0017F0D0.c:25: parse error before ')' token
 * Original: asm/nonmatchings/cri/mpv/func_0017F0D0.s */

s32 MwsfdCrePrm(s32);                               /* extern */
s32 func_0017F080(void *, s32 *, s32 *);    /* extern */
extern s32 D_00425218;

void func_0017F0D0(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v1;
    u32 temp_v1;

    if (D_00425218 != 0) {
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x10);
    func_0017F080(sp, &sp4, &sp8);
    temp_v0 = MwsfdCrePrm(*(s32 *)((u8 *)arg0 + 0x24));
    temp_a3 = ((s32) ((sp0 < 0) int (sp0 + 0xF) : sp0) >> 4) * ((s32) ((sp4 < 0) int (sp4 + 0xF) : sp4) >> 4);
    temp_v1 = sp0 * sp4 * 9;
    *arg1 = ((s32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1) + 0x86910;
    var_v1 = temp_s1 * ((temp_a3 << 0xA) + 0x40);
    if (temp_v0 != 2) {
        var_v1 = temp_s1 * ((temp_a3 * 0x180) + 0x40);
    }
    *arg2 = var_v1;
}
