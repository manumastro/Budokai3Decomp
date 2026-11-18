/* Draft (not built): func_00157718 at 0x00157718, size 0x190, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00157718.c:53: `sp18' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00157718.s */

s32 ChangeThreadPriority(s32, s32);             /* extern */
s32 GetThreadId(s32 *);                         /* extern */
s32 ReferThreadStatus(s32, void *);             /* extern */
s32 func_00157238();                            /* extern */
s32 func_00157398();                            /* extern */
s32 func_00157420();                            /* extern */
s32 func_001574A8();                            /* extern */
s32 func_00170588(s32, s32 *, s32); /* extern */
s32 func_00170660(s32 *, s32);          /* extern */
s32 func_00170678(s32 *, s32);          /* extern */
s32 func_00170968(s32, s32);                    /* extern */
extern s32 D_00405CA0;
extern s32 D_00405CA4;
extern s32 D_00405CB0;
extern s32 D_00405CFC;
extern s32 D_00405D48;
extern s32 D_0040D5D8;
extern s32 D_0047E970;
extern s32 D_0047E978;
extern s32 func_00156998;
extern s32 func_00156A20;
extern s32 func_00156B68;

void func_00157718(u8 *arg0) {
    D_00405CFC = 0;
    if (D_00405CA4 == 0) {
        func_00170968(D_00405CA4, D_00405CA0);
        func_00170660(&func_00156998, 0);
        func_00170678(&func_00156A20, 0);
        *(s32 *)((u8 *)(&D_0047E970) + 4) = 0;
        *(s32 *)((u8 *)(&D_0047E970) + 0) = 0;
        *(s32 *)((u8 *)(&D_0047E978) + 4) = 0;
        *(s32 *)((u8 *)(&D_0047E978) + 0) = 0;
        if (arg0 == NULL) {
            *(s32 *)((u8 *)(&D_00405CB0) + 0x18) = 0x19;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x14) = 0x18;
            *(s32 *)((u8 *)(&D_00405CB0) + 0) = 1;
            *(s32 *)((u8 *)(&D_00405CB0) + 4) = 8;
            *(s32 *)((u8 *)(&D_00405CB0) + 0xC) = 0x10;
            *(s32 *)((u8 *)(&D_00405CB0) + 0x10) = 0x12;
        } else {
            *(s32 *)((u8 *)(&D_00405CB0) + 0x14) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
            *(s32 *)((u8 *)(&D_00405CB0) + 0) = (s32) *(s32 *)((u8 *)arg0 + 0);
            *(s32 *)((u8 *)(&D_00405CB0) + 4) = (s32) *(s32 *)((u8 *)arg0 + 4);
            *(s32 *)((u8 *)(&D_00405CB0) + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 8);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
            *(s32 *)((u8 *)(&D_00405CB0) + 0x18) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
        }
        D_00405D48 = GetThreadId(&D_00405CB0);
        ReferThreadStatus(D_00405D48, sp);
        D_0040D5D8 = sp18;
        func_00157238();
        func_00157398();
        func_00157420();
        func_001574A8();
        ChangeThreadPriority(D_00405D48, *(s32 *)((u8 *)(&D_00405CB0) + 0x14));
        func_00170588(6, &func_00156B68, 0);
    }
    D_00405CA4 += 1;
}
