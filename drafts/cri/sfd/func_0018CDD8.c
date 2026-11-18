/* Draft (not built): func_0018CDD8 at 0x0018CDD8, size 0x158, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018CDD8.c:29: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018CDD8.s */

s32 func_0018CF30(s32, void *);                 /* extern */
s32 func_0018CFC0(s32, void *);                 /* extern */
s32 func_0018D078(s32, s32, s32);           /* extern */
s32 func_0018D0F0(s32, s32, void *);            /* extern */
s32 func_0018D188(s32, s32, void *);            /* extern */
s32 func_0019D7F0(void *);                          /* extern */
s32 func_0019DBD8(s32, s32 *, s32 *);               /* extern */
s32 func_0019E020(s32, s32 *);                      /* extern */

void func_0018CDD8(s32 arg0, u8 *arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = (func_0019D7F0(sp) == 0) int 0 : sp0;
    sp0 = temp_v1;
    if (temp_v1 != 0) {
        if (func_0019DBD8(arg0, &sp4, &sp8) == 0) {
            sp4 = 0;
            sp8 = 0;
        }
        *(s32 *)((u8 *)arg1 + 4) = sp4;
        *(s32 *)((u8 *)arg1 + 8) = sp8;
        temp_v1_2 = (func_0019E020(arg0, &spC) == 0) int 0 : spC;
        spC = temp_v1_2;
        if (((sp4 * 0x64) + sp8) < 0x6E) {
            spC = -temp_v1_2;
        }
        *(s32 *)((u8 *)arg1 + 0xC) = spC;
        func_0018CF30(arg0, arg1);
        func_0018CFC0(arg0, arg1 + 0x20);
        *(s32 *)((u8 *)arg1 + 0x3C) = func_0018D078(arg0, 0xBD, 0xBD);
        *(s32 *)((u8 *)arg1 + 0x40) = func_0018D078(arg0, 0xBF, 0xBF);
        *(s32 *)((u8 *)arg1 + 0x44) = func_0018D078(arg0, 0xC0, 0xDF);
        *(s32 *)((u8 *)arg1 + 0x48) = func_0018D078(arg0, 0xE0, 0xEF);
        func_0018D0F0(arg0, *(s32 *)((u8 *)arg1 + 0x44), arg1 + 0x4C);
        func_0018D188(arg0, *(s32 *)((u8 *)arg1 + 0x48), arg1 + 0x5C);
        *(s32 *)((u8 *)arg1 + 0) = 1;
    }
}
