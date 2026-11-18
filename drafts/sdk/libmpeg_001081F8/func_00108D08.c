/* Draft (not built): func_00108D08 at 0x00108D08, size 0x1C0, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00108D08.c:51: warning: comparison is always false due to limited range of data type
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_00108D08.s */

s32 AddDmacHandler2(s32, s32 *, s32, s32 *); /* extern */
s32 DI();                                           /* extern */
s32 DisableDmac(s32);                       /* extern */
s32 EI(s32, s32);                       /* extern */
s32 RemoveDmacHandler(s32, s32);            /* extern */
s32 func_00107DE0(s32, void *, s32, s32);   /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
s32 func_0010AE78(s32);                     /* extern */
extern s32 D_0045D348;
extern s32 func_001093A0;

void func_00108D08(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 temp_s2;
    s32 temp_v0;

    sp28 = arg2;
    sp2C = (arg1 + 0xFFC00) & 0x0FFFFFFF;
    sp24 = 0;
    sp20 = 0;
    sp30 = (arg2 / 1023) + 1;
    do {

    } while (*(s32 *)0x10002010 < 0);
    temp_s2 = AddDmacHandler2(3, &func_001093A0, 0, &sp20);
    *(s32 *)0x1000E010 = 8;
    func_0010AE78(3);
    temp_v0 = DI();
    *(s32 *)0x1000B010 = arg1 & 0x0FFFFFFF;
    *(s32 *)0x1000B020 = 0xFFC0;
    *(s32 *)0x1000B000 = 0x100;
    if (temp_v0 != 0) {
        EI(0x1000B000, 0x1000B020);
    }
    *(s32 *)0x10002000 = 0x700003FF;
    func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 4, 4);
    do {

    } while (sp20 < sp30);
    if (sp24 != 0) {
        func_00109738(arg0, &D_0045D348);
    }
    do {

    } while (*(u8 *)0x10002010 < 0);
    DisableDmac(3);
    RemoveDmacHandler(3, temp_s2);
}
