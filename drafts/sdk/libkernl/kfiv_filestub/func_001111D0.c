/* Draft (not built): func_001111D0 at 0x001111D0, size 0x1B4, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_001111D0.c:64: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_001111D0.s */

s32 CreateSema(s32 *, s32 *);               /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D838;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_001111D0(u8 *arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s0;
    u8 temp_v0;
    u8 temp_v1;

    _sceFsWaitS(0xC);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = *arg0;
    var_s0 = 0;
    *(u8 *)((u8 *)(&D_00473440) + 0x10) = temp_v0;
    if (temp_v0 != 0) {
loop_4:
        var_s0 += 1;
        if (var_s0 < 0x400) {
            temp_v1 = *(arg0 + var_s0);
            *(u8 *)((u8 *)(&D_00473440 + var_s0) + 0x10) = temp_v1;
            if (temp_v1 == 0) {

            } else {
                goto loop_4;
            }
        }
    }
    if (var_s0 == 0x400) {
        *(s8 *)((u8 *)(&D_00473440) + 0x40F) = 0;
    }
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = arg1;
    sp14 = 1;
    sp24 = &D_0045D838;
    sp18 = 0;
    temp_s1 = CreateSema(&sp10, &D_0045D838);
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s1;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    if (func_0010EA50(&D_00474B40, 0xC, 0, &D_00473440, 0, 0) < 0) {
        DeleteSema(temp_s1);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    if (temp_s0 == 0) {
        DeleteSema(temp_s1);
        return -0xB;
    }
    WaitSema(temp_s1);
    DeleteSema(temp_s1);
    return sp30;
}
