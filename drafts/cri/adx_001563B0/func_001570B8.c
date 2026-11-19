/* Draft (not built): func_001570B8 at 0x001570B8, size 0x50, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001570B8.c:9: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001570B8.s */

s32 iReferThreadStatus(void *);                 /* extern */
s32 iWakeupThread(s32, s32);                /* extern */

void func_001570B8(s32 arg0) {
    if (arg0 != 0) {
        iReferThreadStatus(sp);
        if ((sp0 == 4) || (sp0 == 0xC)) {
            iWakeupThread(arg0, 0xC);
        }
    }
}

/* Similar function already in C: func_0014E700 (src/cri/adx.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
void func_0014E700(s32 arg0) {
    if (arg0 != 0) {
        func_00152508();
        memset(arg0, 0, 0x30);
        func_00152520();
    }
}
#endif
