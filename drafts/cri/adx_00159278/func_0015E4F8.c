/* Draft (not built): func_0015E4F8 at 0x0015E4F8, size 0xCC, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015E4F8.s */

s32 func_0015CB88(s32, s32, s32, s32);          /* extern */
s32 func_0015CC38(s32);                         /* extern */
s32 func_0015CCD8(s32, s32);                /* extern */
s32 func_0015CD48(s32);                         /* extern */
s32 func_0015CDD0(s32);                         /* extern */
s32 func_0015CE88(s32, s32, s32);       /* extern */
s32 func_0015CE98(s32, s32);                    /* extern */
s32 func_0015D4A8(s32, s32, s32);               /* extern */
s32 func_0015E408(void *, s32);                 /* extern */
extern s32 D_00411158;

void func_0015E4F8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0015D4A8(*(s32 *)((u8 *)arg0 + 8), *(s16 *)((u8 *)arg0 + 0x3E) << 0xB, *(s16 *)((u8 *)arg0 + 0x3C) << 0xB);
    func_0015CE98(*(s32 *)((u8 *)arg0 + 8), D_00411158);
    func_0015CE88(*(s32 *)((u8 *)arg0 + 8), 0, 0);
    func_0015CCD8(*(s32 *)((u8 *)arg0 + 8), 0);
    func_0015CDD0(*(s32 *)((u8 *)arg0 + 8));
    func_0015CC38(*(s32 *)((u8 *)arg0 + 8));
    func_0015CB88(*(s32 *)((u8 *)arg0 + 8), arg1, arg2, arg3);
    func_0015CD48(*(s32 *)((u8 *)arg0 + 8));
    func_0015E408(arg0, *(s32 *)((u8 *)arg0 + 0x10));
}
