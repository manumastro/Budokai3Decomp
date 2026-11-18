/* Draft (not built): func_0017C8A8 at 0x0017C8A8, size 0x1F0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017C8A8.c:60: warning: passing arg 2 of `func_0017DBD8' from incompatible pointer type
 * Original: asm/nonmatchings/cri/mpv/func_0017C8A8.s */

s32 func_0017C2E0(void *, s32);                     /* extern */
u32 func_0017CA98(void **);                         /* extern */
s32 func_0017CBA8(void *, s32 *);                   /* extern */
s32 func_0017CC50(void *, void **);             /* extern */
s32 func_0017D308(void *, void **);             /* extern */
s32 func_0017D578(void *, void **);             /* extern */
s32 func_0017DB18(void *, void **, s32);    /* extern */
s32 func_0017DBD8(void *, void **, s32);    /* extern */
s32 func_0017E198(void *, s32, void **);        /* extern */
s32 func_0017EB90();                                /* extern */
s32 func_0017EC60(void *, void **);                 /* extern */

s32 func_0017C8A8(u8 *arg0, u8 **arg1) {
    s32 sp10;
    s32 sp14;
    s32 var_s2;
    s32 temp_v0;
    u32 temp_v0_2;

    if (func_0017EB90() != 0) {
        return func_0017C2E0(NULL, 0xFF03020C);
    }
    *(s32 *)((u8 *)arg0 + 0x3F0) = 0;
    (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, sp);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
    sp10 = sp0;
    sp14 = sp4;
    var_s2 = 0;
    if (func_0017CBA8(arg0, &sp10) == 2) {
        return func_0017EC60(arg0, arg1);
    }
loop_22:
    temp_v0 = func_0017E198(arg0, -1, arg1);
    if (temp_v0 != 0) {
        return func_0017C2E0(arg0, temp_v0);
    }
    temp_v0_2 = func_0017CA98(arg1);
    if ((temp_v0_2 == 0) || (temp_v0_2 & 3)) {
        return 0;
    }
    switch (temp_v0_2) {                            /* irregular */
    case 0x40:
        var_s2 = 0x40;
        func_0017CC50(arg0, arg1);
        break;
    case 0x8:
        var_s2 = 8;
        func_0017D308(arg0, arg1);
        break;
    case 0x4:
        var_s2 = 4;
        func_0017D578(arg0, arg1);
        break;
    case 0x10:
        func_0017DB18(arg0, arg1, var_s2);
        break;
    case 0x20:
        func_0017DBD8(arg0, arg1, var_s2);
        break;
    }
    goto loop_22;
}
