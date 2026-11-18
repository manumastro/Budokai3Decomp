/* Draft (not built): func_0018FE00 at 0x0018FE00, size 0xDC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FE00.s */

s32 func_0017E368(s32, s32 *);              /* extern */
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018FEE0();                                /* extern */
s32 func_001957C8();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00426B10;
extern s32 D_0048E948;
extern s32 D_00492988;
extern s32 D_004929B0;
extern s32 D_004929B8;

s32 func_0018FE00(void) {
    s32 temp_v0;

    func_001957C8();
    if (func_0018FEE0() != 0) {
loop_1:
        goto loop_1;
    }
    temp_v0 = func_0017E368(8, &D_0048E948);
    if (temp_v0 != 0) {
        return func_0018D650(0, ((temp_v0 ^ 0xFF03FF05) != 0) ? 0xFF000F01 : 0xFF000F13);
    }
    memset(&D_00492988, 0, 0x24);
    memset(&D_004929B0, 0, 8);
    memset(&D_004929B8, 0, 0x40);
    D_00426B10 = 0;
    return 0;
}
