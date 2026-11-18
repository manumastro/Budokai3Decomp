/* Draft (not built): func_00110CF8 at 0x00110CF8, size 0x12C, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00110CF8.c:42: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00110CF8.s */

s32 CreateSema(s32 *);                          /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D7F0;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00110CF8(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0;
    s32 temp_v0;

    _sceFsWaitS(0xF);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = arg0;
    sp14 = 1;
    sp24 = &D_0045D7F0;
    sp18 = 0;
    temp_v0 = CreateSema(&sp10);
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_v0;
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    if (func_0010EA50(&D_00474B40, 0xF, 0, &D_00473440, 0, 0) < 0) {
        DeleteSema(temp_v0);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    if (temp_s0 == 0) {
        DeleteSema(temp_v0);
        return -0xB;
    }
    WaitSema(temp_v0);
    DeleteSema(temp_v0);
    return sp30;
}
