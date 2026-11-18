/* Draft (not built): func_00111E90 at 0x00111E90, size 0x2A8, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: e error: d_00111E90.c:116: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00111E90.s */

s32 CreateSema(s32 *, u32, void *, s32 *);  /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D8C8;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00111E90(u8 *arg0, s32 arg1, u8 *arg2, u32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 sp34;
    s32 *var_s6;
    s32 *var_s7;
    s32 var_s1;
    s32 temp_s0;
    s32 temp_s4;
    s32 var_a1;
    s32 var_a2;
    u32 temp_fp;
    u32 var_a1_2;
    u8 *temp_a0;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_fp = M2C_ERROR(/* Read from unset register $t1 */);
    sp34 = M2C_ERROR(/* Read from unset register $t0 */);
    _sceFsWaitS(0x17);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = *arg0;
    var_a1 = 0;
    *(u8 *)((u8 *)(&D_00473440) + 0xC) = temp_v0;
    if ((temp_v0 << 0x18) != 0) {
        var_a2 = arg3 < 0x401U;
loop_4:
        var_a1 += 1;
        if (var_a1 < 0x400) {
            temp_v1 = *(arg0 + var_a1);
            *(u8 *)((u8 *)(&D_00473440 + var_a1) + 0xC) = temp_v1;
            if ((temp_v1 << 0x18) == 0) {

            } else {
                goto loop_4;
            }
        }
    } else {
        var_a2 = arg3 < 0x401U;
    }
    if (var_a1 == 0x400) {
        *(s8 *)((u8 *)(&D_00473440) + 0x40B) = 0;
    }
    if ((var_a2 != 0) && (temp_fp < 0x401U)) {
        if (arg1 == 0x4601) {
            if (*(s32 *)((u8 *)arg2 + 4) != 0) {
                if (*(s32 *)((u8 *)arg2 + 0xC) == 0) {
                    goto block_18;
                }
                goto block_19;
            }
            func_0010EFF0();
            return 0;
        }
block_19:
        var_a1_2 = 0;
        if (arg3 != 0) {
            var_a2 = (s32) (&D_00473440 + 0x40C);
            var_s7 = (s32 *)0x470000;
            var_s6 = (s32 *)0x470000;
            do {
                temp_a0 = var_a2 + var_a1_2;
                temp_v1_2 = *(arg2 + var_a1_2);
                var_a1_2 += 1;
                *temp_a0 = temp_v1_2;
            } while (var_a1_2 < arg3);
        } else {
            var_s7 = &D_00474B40;
            var_s6 = &D_00474080;
        }
        *(u32 *)((u8 *)(&D_00473440) + 0x810) = arg3;
        sp24 = &D_0045D8C8;
        sp14 = 1;
        *(s32 *)((u8 *)(&D_00473440) + 0x80C) = arg1;
        sp18 = 0;
        temp_s4 = CreateSema(&sp10, var_a1_2, (u8 *) var_a2, &D_0045D8C8);
        *(u32 *)((u8 *)(&D_00473440) + 0x818) = temp_fp;
        *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
        *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
        *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s4;
        *(s32 *)((u8 *)(&D_00473440) + 0x814) = sp34;
        if (arg1 == 0x4601) {
            var_s1 = 0x1C;
            sceSifWriteBackDCache(*(s32 **)((u8 *)arg2 + 8), *(s32 *)((u8 *)arg2 + 4) * *(s32 *)((u8 *)arg2 + 0xC));
        } else {
            var_s1 = 0x17;
        }
        sceSifWriteBackDCache(&D_00473440, 0x81C);
        if (func_0010EA50(var_s7, var_s1, 0, &D_00473440, 0, 0) < 0) {
            DeleteSema(temp_s4);
            func_0010EFF0();
            return -0xB;
        }
        temp_s0 = *((s32) var_s6 | 0x20000000);
        func_0010EFF0();
        if (temp_s0 == 0) {
            DeleteSema(temp_s4);
            return -0xB;
        }
        WaitSema(temp_s4);
        DeleteSema(temp_s4);
        return sp30;
    }
block_18:
    func_0010EFF0();
    return -0x16;
}
