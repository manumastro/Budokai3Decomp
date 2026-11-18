/* Draft (not built): func_00114C30 at 0x00114C30, size 0x154, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114C30.s */

s32 AddIntcHandler2(s32, s32 *, s32, s32); /* extern */
s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010ADA8(s32);                     /* extern */
s32 func_00114C00(s32);                     /* extern */
s32 func_00114C10(s32);                         /* extern */
s32 func_00114C20(s32);                     /* extern */
s32 func_00115F00();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_003EDCC8;
extern s32 D_00476300;
extern s32 func_001151D0;

s32 func_00114C30(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0_2;
    s32 var_v0;
    u8 **var_s0;
    u8 *var_v1;

    if (*(s32 *)((u8 *)(&D_003EDCC8) + 8) >= 0) {
        return 0x80008001;
    }
    *(s64 *)((u8 *)(&D_003EDCC8) + 0) = 0;
    *(s32 *)((u8 *)(&D_003EDCC8) + 0x10) = 0;
    memset(&D_00476300, 0, 0x2000);
    *(s32 **)((u8 *)(&D_003EDCC8) + 0x14) = &D_00476300;
    var_v1 = &D_00476300 + 0x2000;
    var_v0 = 0x7F;
    var_s0 = &D_00476300 + 0x1FC0;
    do {
        *var_s0 = var_v1;
        var_v0 -= 1;
        var_s0 -= 0x40;
        var_v1 -= 0x40;
    } while (var_v0 >= 0);
    *(s32 *)((u8 *)(&D_00476300) + 0x1FC0) = 0;
    func_00115F00();
    temp_v0 = AddIntcHandler2(0xB, &func_001151D0, 0, 0);
    if (temp_v0 >= 0) {
        *(s32 *)((u8 *)(&D_003EDCC8) + 8) = temp_v0;
        temp_s1 = DI();
        var_s0_2 = (*(s32 *)0x10001010 & 0xFFFFFFFC) | arg0 | 0x300;
        if (!(var_s0_2 & 0x80)) {
            var_s0_2 |= 0xC80;
            func_00114C00(0);
            func_00114C20(0xFFFF);
        }
        func_00114C10(var_s0_2);
        func_0010ADA8(0xB);
        if (temp_s1 != 0) {
            EI();
        }
        return 0;
    }
    return 0x80009021;
}
