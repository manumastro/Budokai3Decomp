/* Draft (not built): func_00188578 at 0x00188578, size 0x78, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00188578.c:15: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00188578.s */

s32 func_00189008(void *, s32 *);                   /* extern */
s32 func_00189050(void *, s32);                 /* extern */

void func_00188578(u8 *arg0, s32 *arg1) {
    s32 sp4;
    s32 sp8;
    u8 *temp_s1;

    *arg1 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    if (func_00189008(sp, &sp4) == 0) {
        *arg1 = sp4;
        (*(s32 (**)(u8 *, s32, s32, s32 *))((u8 *)temp_s1 + 0x3C))(arg0, sp0, sp4, &sp8);
        func_00189050(arg0, sp8);
    }
}
