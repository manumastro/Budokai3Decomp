/* Draft (not built): func_0019FFF0 at 0x0019FFF0, size 0x114, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: rror: d_0019FFF0.c:25: too few arguments to function `sscanf'
 * Original: asm/nonmatchings/cri/sfx/func_0019FFF0.s */

s64 __muldi3(s64, s32);                             /* extern */
s32 func_001A0108(s32 *, s32 *, s32 *, s32 *); /* extern */
s32 sscanf(s32, s32 *, s64 *, s32 *);       /* extern */
extern s32 D_00467DA8;
extern s32 D_00467DB8;
extern s32 D_00467DC0;
extern s32 D_00467DC8;
extern s32 D_00467DD0;

void func_0019FFF0(s32 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 sp4;
    s64 sp8;
    s64 sp10;
    s32 sp18;
    s32 sp20;

    func_001A0108(&D_00467DB8, &D_00467DA8, sp);
    if (sp0 == 0) {
        *arg2 = 0;
        *arg3 = 0x7FFFFFFF;
        return;
    }
    sscanf(sp0, &D_00467DC0, &sp8);
    func_001A0108(arg0, &D_00467DC8, &D_00467DA8, sp);
    if (sp0 == 0) {
        *arg2 = 0x7FFFFFFF;
        return;
    }
    sscanf(sp0 + ((s64) (__muldi3(sp8, arg1) << 0x20) >> 0x20), &D_00467DD0, &sp10, &sp18);
    *arg2 = sp18;
    *arg3 = sp20;
}
