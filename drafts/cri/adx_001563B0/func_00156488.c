/* Draft (not built): func_00156488 at 0x00156488, size 0x1FC, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00156488.c:38: `sp24' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00156488.s */

s32 func_0015BE08();                            /* extern */
s32 func_0015BE38();                            /* extern */
s32 func_0015BE68(s32, void *, void **);        /* extern */
s32 func_0015C038(s32);                         /* extern */
s32 func_0015C0A8(s32);                         /* extern */
s32 func_0015C1D0(s32);                         /* extern */
s32 func_0015C418(s32, s32, s32, s32);          /* extern */
s32 func_0015C770();                            /* extern */
void **func_0016DBE0(s32 *, s32);           /* extern */
void **func_0016E120(s32 *, s32, s32);  /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */
extern s32 D_00405858;
extern s32 D_00405C58;

void func_00156488(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 **sp0;
    u8 **sp4;
    s32 sp10;
    s32 sp20;
    s32 temp_v0;
    u8 **temp_s0;
    u8 **temp_s5;

    func_0015BE08();
    temp_s5 = func_0016E120(&D_00405858, 0x400, 0);
    sp0 = func_0016DBE0(&D_00405C58, 0x20);
    temp_s0 = *(u8 ***)((u8 *)arg0 + 0x14);
    sp4 = func_0016DBE0(&D_00405C58 + 0x20, 0x20);
    temp_v0 = func_0015BE68(2, sp, temp_s5);
    func_0015C418(temp_v0, arg1, arg2, arg3);
    func_0015C0A8(temp_v0);
    func_0015C770();
    (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s5) + 0x18))(temp_s5, 1, 0x400, &sp10);
    if (sp14 != 0) {
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s0) + 0x18))(temp_s0, 0, sp14, &sp20);
        if (sp24 < sp14) {
loop_8:
            goto loop_8;
        }
        memcpy(sp20, sp10, sp14);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s5) + 0x20))(temp_s5, 0, &sp10);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x20))(temp_s0, 1, &sp20);
        func_0015C1D0(temp_v0);
        func_0015C038(temp_v0);
        (*(s32 (**)(u8 **))((u8 *)(*temp_s5) + 0xC))(temp_s5);
        (*(s32 (**)(u8 **))((u8 *)(*sp4) + 0xC))(sp4);
        (*(s32 (**)(u8 **))((u8 *)(*sp0) + 0xC))(sp0);
        func_0015BE38();
        return;
    }
loop_4:
    goto loop_4;
}
