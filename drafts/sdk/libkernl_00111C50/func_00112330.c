/* Draft (not built): func_00112330 at 0x00112330, size 0x1E0, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00112330.c:72: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00112330.s */

s32 CreateSema(s32 *);                          /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
s32 sceSifWriteBackDCache(s32, u32, s32);       /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D8F8;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00112330(u8 *arg0, s32 arg1, u32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a2;
    u32 temp_s0;
    u8 temp_v0;
    u8 temp_v1;

    _sceFsWaitS(0x11);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = *arg0;
    var_a1 = 0;
    *(u8 *)((u8 *)(&D_00473440) + 0x14) = temp_v0;
    if ((temp_v0 << 0x18) != 0) {
        var_a2 = arg2 < 0x400U;
        var_a1 = 1;
loop_4:
        if (var_a1 < 0x400) {
            temp_v1 = *(arg0 + var_a1);
            *(u8 *)((u8 *)(&D_00473440 + var_a1) + 0x14) = temp_v1;
            if ((temp_v1 << 0x18) != 0) {
                var_a1 += 1;
                goto loop_4;
            }
        }
    } else {
        var_a2 = arg2 < 0x400U;
    }
    if (var_a1 == 0x400) {
        *(s8 *)((u8 *)(&D_00473440) + 0x413) = 0;
    }
    temp_s0 = (var_a2 == 0) int 0x3FFU : arg2;
    *(s32 *)((u8 *)(&D_00473440) + 0x10) = arg1;
    *(u32 *)((u8 *)(&D_00473440) + 0xC) = temp_s0;
    sceSifWriteBackDCache(arg1, temp_s0, var_a2);
    sp14 = 1;
    sp24 = &D_0045D8F8;
    sp18 = 0;
    temp_s1 = CreateSema(&sp10);
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s1;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    if (func_0010EA50(&D_00474B40, 0x19, 0, &D_00473440, 0, 0) < 0) {
        DeleteSema(temp_s1);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0_2 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    if (temp_s0_2 == 0) {
        DeleteSema(temp_s1);
        return -0xB;
    }
    WaitSema(temp_s1);
    DeleteSema(temp_s1);
    return sp30;
}
