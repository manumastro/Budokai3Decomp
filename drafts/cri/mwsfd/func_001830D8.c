/* Draft (not built): func_001830D8 at 0x001830D8, size 0x78, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001830D8.c:13: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001830D8.s */

s32 func_00155E40(s32, s32, s32, void *);           /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004660F0;

void func_001830D8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp4;
    s32 sp8;

    if (func_00155E40(arg1, arg2, *(s32 *)((u8 *)arg0 + 0x1B8), sp) == 0) {
        *(s32 *)((u8 *)arg0 + 0x1C0) = 1;
        *(s32 *)((u8 *)arg0 + 0x1C4) = sp0;
        *(s32 *)((u8 *)arg0 + 0x1C8) = sp4;
        *(s32 *)((u8 *)arg0 + 0x1CC) = sp8;
        return;
    }
    func_001870E8(&D_004660F0);
}
