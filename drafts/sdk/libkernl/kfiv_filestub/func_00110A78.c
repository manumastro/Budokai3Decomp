/* Draft (not built): func_00110A78 at 0x00110A78, size 0x280, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: e error: d_00110A78.c:110: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00110A78.s */

s32 CreateSema(s32 *, s32);                     /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);  /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D7D8;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00110A78(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a3;
    u8 *temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;

    _sceFsWaitS(0xE);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = *arg0;
    var_a1 = 0;
    *(u8 *)((u8 *)(&D_00473440) + 0xC) = temp_v0;
    if ((temp_v0 << 0x18) != 0) {
        var_a3 = arg3 < 0x401;
        var_a1 = 1;
loop_4:
        if (var_a1 < 0x400) {
            temp_v1 = *(arg0 + var_a1);
            *(u8 *)((u8 *)(&D_00473440 + var_a1) + 0xC) = temp_v1;
            if ((temp_v1 << 0x18) != 0) {
                var_a1 += 1;
                goto loop_4;
            }
        }
    } else {
        var_a3 = arg3 < 0x401;
    }
    if (var_a1 == 0x400) {
        *(s8 *)((u8 *)(&D_00473440) + 0x40B) = 0;
    }
    if (arg1 != NULL) {
        temp_v0_2 = *arg1;
        var_a1_2 = 0;
        *(u8 *)((u8 *)(&D_00473440) + 0x40C) = temp_v0_2;
        if ((temp_v0_2 << 0x18) != 0) {
            var_a1_2 = 1;
loop_18:
            if (var_a1_2 < 0x400) {
                temp_v1_2 = *(arg1 + var_a1_2);
                *(&D_00473440 + 0x40C + var_a1_2) = temp_v1_2;
                if ((temp_v1_2 << 0x18) != 0) {
                    var_a1_2 += 1;
                    goto loop_18;
                }
            }
        }
        if (var_a1_2 == 0x400) {
            *(s8 *)((u8 *)(&D_00473440) + 0x80B) = 0;
        }
    } else {
        *(u8 *)((u8 *)(&D_00473440) + 0x40C) = 0U;
    }
    if (var_a3 == 0) {
        func_0010EFF0();
        return -7;
    }
    var_a1_3 = 0;
    if (arg3 > 0) {
        do {
            temp_a0 = &D_00473440 + 0x80C + var_a1_3;
            temp_v1_3 = *(arg2 + var_a1_3);
            var_a1_3 += 1;
            *temp_a0 = temp_v1_3;
        } while (var_a1_3 < arg3);
    }
    *(s32 *)((u8 *)(&D_00473440) + 0xC0C) = arg3;
    sp14 = 1;
    sp24 = &D_0045D7D8;
    sp18 = 0;
    temp_s1 = CreateSema(&sp10, var_a1_3);
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s1;
    sceSifWriteBackDCache(&D_00473440, 0xC10);
    if (func_0010EA50(&D_00474B40, 0xE, 0, &D_00473440, 0, 0) < 0) {
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
