/* Draft (not built): func_00110160 at 0x00110160, size 0x388, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: e error: d_00110160.c:138: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00110160.s */

s32 CreateSema(s32 *);                          /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 SignalSema(s32, s32 *);                     /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
void *get_iob();                                    /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);  /* extern */
extern s32 D_003EC638;
extern s32 D_003EC6B8;
extern s32 D_003EC6BC;
extern s32 D_003EC6CC;
extern s32 D_0045D778;
extern s32 *D_00473408;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_004740D0;
extern s32 D_00474B40;

s32 func_00110160(s32 arg1, s32 *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_v1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a0;
    u8 *temp_s0;
    u8 *var_a0_2;

    temp_s0 = get_iob();
    _sceFsWaitS(5);
    D_00473408 = arg2;
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    if (temp_s0 != NULL) {
        if (*(s32 *)((u8 *)temp_s0 + 4) != 0) {
            *(s32 *)((u8 *)(&D_00473440) + 0x414) = 0;
            *(s32 *)((u8 *)(&D_00473440) + 0x418) = 0;
            switch (arg1) {                         /* irregular */
            case 1:
                WaitSema(D_003EC6CC);
                var_a1 = &D_003EC638;
                var_a0 = 0;
                if (D_003EC638 == -1) {
                    var_v1 = &D_003EC638;
                    var_a1 = (s32 *)-1;
loop_17:
                    var_a0 += 1;
                    var_v1 += 4;
                    if (var_a0 < 0x20) {
                        if (*var_v1 == -1) {
                            goto loop_17;
                        }
                    }
                }
                if (var_a0 == 0x20) {
                    *D_00473408 = 0;
                } else {
                    *D_00473408 = 1;
                }
                SignalSema(D_003EC6CC, var_a1);
block_26:
                func_0010EFF0();
                return 0;
            case 2:
                *arg2 = *((s32) ((D_003EC6B8 * 0x440) + &D_004740D0) | 0x20000000);
                goto block_26;
            case 3:
                *arg2 = (s64) *((s32) ((D_003EC6B8 * 0x440) + &D_004740D0) | 0x20000000);
                goto block_26;
            default:
                *(s32 *)((u8 *)(&D_00473440) + 0x10) = arg1;
                *(s32 *)((u8 *)(&D_00473440) + 0xC) = *(s32 *)((u8 *)temp_s0 + 0);
                if (arg2 == NULL) {
                    *(s32 *)((u8 *)(&D_00473440) + 0x41C) = 0;
                } else {
                    var_a2 = arg2;
                    var_a0_2 = &D_00473440 + 0x14;
                    *(s32 *)((u8 *)(&D_00473440) + 0x41C) = 0x400;
                    if (((s32) var_a2 | (s32) var_a0_2) & 7) {
                        temp_v0 = var_a2 + 0x400;
                        do {
                            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a2) */);
                            M2C_ERROR(/* unknown instruction: ldr $a1, ($a2) */);
                            M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($a2) */);
                            M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($a2) */);
                            M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($a2) */);
                            M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($a2) */);
                            M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($a2) */);
                            M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($a2) */);
                            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a1, ($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
                            M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a0) */);
                            M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a0) */);
                            var_a2 += 0x20;
                        } while (var_a2 != temp_v0);
                    } else {
                        temp_v0_2 = var_a2 + 0x400;
                        do {
                            *(s64 *)((u8 *)var_a0_2 + 0) = (s64) *(s64 *)((u8 *)var_a2 + 0);
                            *(s64 *)((u8 *)var_a0_2 + 8) = (s64) *(s64 *)((u8 *)var_a2 + 8);
                            *(s64 *)((u8 *)var_a0_2 + 0x10) = (s64) *(s64 *)((u8 *)var_a2 + 0x10);
                            *(s64 *)((u8 *)var_a0_2 + 0x18) = (s64) *(s64 *)((u8 *)var_a2 + 0x18);
                            var_a2 += 0x20;
                            var_a0_2 += 0x20;
                        } while (var_a2 != temp_v0_2);
                    }
                }
                sp14 = 1;
                sp24 = &D_0045D778;
                sp18 = 0;
                temp_s1 = CreateSema(&sp10);
                *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
                *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
                *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s1;
                sceSifWriteBackDCache(&D_00473440, 0x420);
                if (func_0010EA50(&D_00474B40, 5, 0, &D_00473440, 0, 0) < 0) {
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
        } else {
            goto block_6;
        }
    } else {
block_6:
        func_0010EFF0();
        return -9;
    }
}
