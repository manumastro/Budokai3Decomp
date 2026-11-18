/* Draft (not built): func_0010FC30 at 0x0010FC30, size 0x26C, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0010FC30.c:91: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010FC30.s */

s32 CreateSema(s32 *, s32);                 /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
void *get_iob();                                    /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EC638;
extern s32 D_003EC6BC;
extern s32 D_003EC6CC;
extern s32 D_0045D748;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474940;
extern s32 D_00474B40;

s32 func_0010FC30(s32 *arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 *var_s0;
    s32 *temp_a1;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a2;
    s32 var_s2;
    u8 *temp_s0;

    temp_s0 = get_iob();
    _sceFsWaitS(2);
    if ((D_003EC6BC == 0) || (temp_s0 == NULL) || (temp_s4 = *(s32 *)((u8 *)temp_s0 + 4), (temp_s4 == 0))) {
        func_0010EFF0();
        return -9;
    }
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = (s32) *(s32 *)((u8 *)temp_s0 + 0);
    *(s32 *)((u8 *)(&D_00473440) + 0x1C) = (s32) ((s32) (temp_s0 - &D_00474940) >> 4);
    sp14 = 1;
    sp24 = &D_0045D748;
    temp_s0_2 = temp_s4 & 0x8000;
    *(s32 **)((u8 *)(&D_00473440) + 0x10) = arg1;
    *(s32 *)((u8 *)(&D_00473440) + 0x14) = arg2;
    sp18 = 0;
    temp_s3 = CreateSema(&sp10, 1);
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s3;
    if (temp_s0_2 != 0) {
        WaitSema(D_003EC6CC);
        var_s2 = temp_s0_2;
        if (D_003EC638 == -1) {
            var_s0 = (s32 *)0x470000;
            D_003EC638 = *(s32 *)((u8 *)(&D_00473440) + 0);
            *(s32 *)((u8 *)(&D_00473440) + 0) = (s32) -*(s32 *)((u8 *)(&D_00473440) + 0);
        } else {
            var_s0 = &D_00474080;
            var_a2 = 1;
loop_9:
            if (var_a2 < 0x20) {
                temp_a1 = &(&D_003EC638)[var_a2];
                var_a2 += 1;
                if (*temp_a1 == -1) {
                    *temp_a1 = *(s32 *)((u8 *)(&D_00473440) + 0);
                    *(s32 *)((u8 *)(&D_00473440) + 0) = (s32) -*(s32 *)((u8 *)(&D_00473440) + 0);
                } else {
                    goto loop_9;
                }
            }
        }
        SignalSema(D_003EC6CC);
    } else {
        var_s0 = &D_00474080;
        var_s2 = 0;
    }
    if (!(temp_s4 & 0x20000000)) {
        sceSifWriteBackDCache(arg1, arg2);
    }
    sceSifWriteBackDCache(&D_00473440, 0x20);
    if (func_0010EA50(&D_00474B40, 2, 0, &D_00473440, 0, var_s2) < 0) {
        DeleteSema(temp_s3);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0_3 = *(0x20000000 | (s32) var_s0);
    func_0010EFF0();
    if (temp_s0_3 == 0) {
        DeleteSema(temp_s3);
        return -0xB;
    }
    if (var_s2 != 0) {
        DeleteSema(temp_s3);
        return 0;
    }
    WaitSema(temp_s3);
    DeleteSema(temp_s3);
    return sp30;
}
