/* Draft (not built): func_00103238 at 0x00103238, size 0x240, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 func_00103018(void *, s32);                 /* extern */
s32 func_00103478(void *, s32);                     /* extern */
s32 func_00104938(void *);                      /* extern */
s32 func_00107E58(s32);                         /* extern */
s32 func_001095D0();                            /* extern */
s32 func_00109670(void *, s32);                 /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
extern s32 D_0045CE98;

s32 func_00103238(u8 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 temp_a0;
    u32 temp_s0_3;

    *(s32 *)((u8 *)arg0 + 0x820) = 0;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x13C) * *(s32 *)((u8 *)arg0 + 0x140);
    *(s32 *)((u8 *)arg0 + 0x824) = 0;
    temp_s0_2 = ((*(s32 *)((u8 *)arg0 + 0x184) ^ 3) != 0) ? (temp_s0 >> 1) : temp_s0;
    do {
loop_2:
        var_s5 = func_00103478(arg0, temp_s0_2);
        if (var_s5 == 1) {
            goto loop_2;
        }
    } while (var_s5 == 3);
    var_s6 = 1;
    func_00104938(arg0);
    func_00104938(arg0);
    if (*(s32 *)0x1000B020 != 0) {
        if (!(*(s32 *)0x10002010 & 0x4000)) {
loop_7:
            if ((*(s32 *)0x1000B420 == 0) && !(*(s32 *)0x1000B400 & 0x100)) {
                func_00107E58(*(s32 *)((u8 *)arg0 + 0x868));
            }
            if (*(s32 *)((u8 *)arg0 + 0x878) == 0) {
                if (*(u8 *)0x1000B020 != 0) {
                    if (*(u8 *)0x10002010 & 0x4000) {
                        goto block_13;
                    }
                    goto loop_7;
                }
                goto block_14;
            }
            func_001095D0();
            var_v0_2 = 0;
        } else {
            goto block_14;
        }
    } else {
block_13:
block_14:
        temp_a1 = *(s32 *)0x10002020;
        temp_a0 = *(s64 *)0x10002030;
        *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0 << 0x20) >> 0x20);
        if (temp_a0 < 0) {
            temp_v1 = temp_a1 & 0x1F;
            if (temp_v1 != 0) {
                var_v0_3 = 0x20 - temp_v1;
            } else {
                var_v0_3 = 0;
            }
        } else {
            var_v0_3 = 0x20;
        }
        *(s32 *)((u8 *)arg0 + 0x84C) = var_v0_3;
        if (*(u8 *)0x10002010 & 0x4000) {
            var_s6 = 0;
            func_00109670(arg0, temp_a1);
        }
        var_v0_2 = var_s6;
    }
    if (var_v0_2 == 0) {
        var_v0 = 4;
        if (*(s32 *)((u8 *)arg0 + 0x878) == 0) {
            var_s5 = 2;
            goto block_26;
        }
    } else {
block_26:
        temp_s0_3 = var_s5 - 1;
        do {

        } while (((u32) *(u32 *)0x1000D400 >> 8) & 1);
        var_v0_4 = temp_s0_3 < 2U;
        if (var_s5 == 0) {
            func_00103018(arg0, *(s32 *)((u8 *)arg0 + 0x820) == 0);
            var_v0_4 = temp_s0_3 < 2U;
        }
        if (var_v0_4 != 0) {
            func_00109738(arg0, &D_0045CE98);
        }
        var_v0 = var_s5 == 0;
    }
    return var_v0;
}
