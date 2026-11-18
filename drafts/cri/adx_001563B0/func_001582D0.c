/* Draft (not built): func_001582D0 at 0x001582D0, size 0x1EC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001582D0.c:68: `sp18' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001582D0.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 GetThreadId(s32 *, s32);                    /* extern */
s32 ReferThreadStatus(s32, void *);             /* extern */
s32 func_00157238();                            /* extern */
s32 func_001572E0(s32, s32);                    /* extern */
s32 func_00157398();                            /* extern */
s32 func_00157420();                            /* extern */
s32 func_001574A8();                            /* extern */
s32 func_00157540(s32, s32);                    /* extern */
s32 func_00170588(s32, s32 *, s32); /* extern */
s32 func_00170660(s32 *, s32);          /* extern */
s32 func_00170678(s32 *, s32);          /* extern */
s32 func_00170968(s32);                         /* extern */
extern s32 D_00405CA0;
extern s32 D_00405CA4;
extern s32 D_00405CA8;
extern s32 D_00405CB0;
extern s32 D_00405D48;
extern s32 D_0040D5D8;
extern s32 func_00156998;
extern s32 func_00156A20;
extern s32 func_00156B68;
extern s32 func_00156B90;

void func_001582D0(u8 *arg0) {
    s32 *var_a0;
    s32 var_a1;

    if (D_00405CA4 == 0) {
        func_00170968(D_00405CA0);
        func_00170660(&func_00156998, 0);
        func_00170678(&func_00156A20, 0);
        if (arg0 != NULL) {
            var_a0 = &D_00405CB0;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x14) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x20) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
            var_a1 = *(s32 *)((u8 *)arg0 + 0x28);
            *(s32 *)((u8 *)(&D_00405CB0) + 0) = (s32) *(s32 *)((u8 *)arg0 + 0);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x28) = var_a1;
            *(s3232 *)((u8 *)(&D_00405CB0) + 4) = (s3232) *(s3232 *)((u8 *)arg0 + 4);
            *(s32 *)((u8 *)(&D_00405CB0) + 8) = (s32) *(s32 *)((u8 *)arg0 + 8);
            *(s32 *)((u8 *)(&D_00405CB0) + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x18) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x1C) = (s32) *(s32 *)((u8 *)arg0 + 0x1C);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x24) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x2C) = (s32) *(s32 *)((u8 *)arg0 + 0x2C);
        } else {
            var_a0 = (s32 *)8;
            var_a1 = 0xF;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x14) = 0x18;
            *(s32 *)((u8 *)(&D_00405CB0) + 0) = 1;
            *(s3232 *)((u8 *)(&D_00405CB0) + 4) = 8;
            *(s32 *)((u8 *)(&D_00405CB0) + 8) = 0xF;
            *(s32 *)((u8 *)(&D_00405CB0) + 0xC) = 0x10;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x10) = 0x12;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x18) = 0x19;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x1C) = 0x1A;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x2C) = 0;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x20) = 0;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x24) = 0;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x28) = 0;
        }
        D_00405D48 = GetThreadId(var_a0, var_a1);
        ReferThreadStatus(D_00405D48, sp);
        D_0040D5D8 = sp18;
        func_00157238();
        func_001572E0(*(s32 *)((u8 *)(&D_00405CB0) + 0x20), *(s32 *)((u8 *)(&D_00405CB0) + 0x24));
        func_00157398();
        func_00157420();
        func_001574A8();
        func_00157540(*(s32 *)((u8 *)(&D_00405CB0) + 0x28), *(s32 *)((u8 *)(&D_00405CB0) + 0x2C));
        ChangeThreadPriority(D_00405D48, *(s32 *)((u8 *)(&D_00405CB0) + 0x14));
        func_00170588(6, &func_00156B68, 0);
        func_00170588(7, &func_00156B90, 0);
        D_00405CA8 = 1;
    }
    D_00405CA4 += 1;
}
