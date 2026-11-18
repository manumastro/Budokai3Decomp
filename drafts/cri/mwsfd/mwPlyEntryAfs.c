/* Draft (not built): mwPlyEntryAfs at 0x00186140, size 0xBC, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00186140.c:22: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyEntryAfs.s */

s32 func_00155E40(s32, s32, s32, void *);           /* extern */
s32 func_00155F98(s32, s32, s32);                   /* extern */
s32 func_00169A00(s32, s32, s32, s32);          /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32, s32);         /* extern */
extern s32 D_00466EF8;
extern s32 D_00466F28;

void mwPlyEntryAfs(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp4;
    s32 sp8;
    s32 temp_s1;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00466EF8, arg2);
        return;
    }
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (func_00155E40(arg1, arg2, *(s32 *)((u8 *)arg0 + 0x1B8), sp) == 0) {
        func_00169A00(temp_s1, func_00155F98(arg1, arg1, arg2), sp0, sp4);
        return;
    }
    func_001870E8(&D_00466F28, arg1, arg2);
}
