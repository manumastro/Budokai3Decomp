/* Draft (not built): func_00157108 at 0x00157108, size 0x50, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00157108.c:9: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157108.s */

s32 ReferThreadStatus(void *);                  /* extern */
s32 WakeupThread(s32, s32);                 /* extern */

void func_00157108(s32 arg0) {
    if (arg0 != 0) {
        ReferThreadStatus(sp);
        if ((sp0 == 4) || (sp0 == 0xC)) {
            WakeupThread(arg0, 0xC);
        }
    }
}
