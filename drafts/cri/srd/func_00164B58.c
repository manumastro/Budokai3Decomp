/* Draft (not built): func_00164B58 at 0x00164B58, size 0x9C, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00164B58.c:18: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/srd/func_00164B58.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_00164FD0(s32, s32, void *);            /* extern */
s32 func_0016FF40(s32);                     /* extern */
s32 func_0016FF58();                            /* extern */
extern s32 D_00411598;

s32 func_00164B58(void) {
    if (*(s8 *)((u8 *)(&D_00411598) + 2) == 2) {
        func_0016FF40(2);
        func_00164D38(0x2400);
        if (func_00164FD0(*(s32 *)((u8 *)(&D_00411598) + 0x30), 1, sp) < 0) {
            func_00164D38(0x2401);
            goto block_6;
        }
        func_00164D38(0x2402);
        if (sp0 != 0) {
            func_0016FF58();
            return 1;
        }
block_6:
        func_0016FF58();
        goto block_7;
    }
block_7:
    return 0;
}
