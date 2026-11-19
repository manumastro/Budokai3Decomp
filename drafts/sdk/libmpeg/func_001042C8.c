/* Draft (not built): func_001042C8 at 0x001042C8, size 0x178, segment sdk/libmpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg/func_001042C8.s */

s64 func_001045A8(void *);                          /* extern */
s32 func_00104810(void *, s32, s64);            /* extern */
s32 func_00104938(void *);                      /* extern */
s32 func_00104970(void *, s32);             /* extern */
s32 func_00109790(void *, s32 *, s16);      /* extern */
extern s32 D_0045CF28;

s32 func_001042C8(u8 *arg0) {
    s16 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_a2;

    var_s2 = 0;
loop_1:
    func_00104938(arg0);
    *(s32 *)0x10002000 = 0x30000000;
    *(s32 *)((u8 *)arg0 + 0x82C) = 0x30000000;
    *(s32 *)((u8 *)arg0 + 0x828) = 0;
    temp_a2 = func_001045A8(arg0);
    temp_a0 = *(s64 *)0x10002030;
    *(s32 *)((u8 *)arg0 + 0x848) = (s32) ((s64) (temp_a0 << 0x20) >> 0x20);
    if (temp_a0 < 0) {
        *(s32 *)((u8 *)arg0 + 0x84C) = (s32) ((0x20 - (*(s32 *)0x10002020 & 0x1F)) & 0x1F);
    } else {
        *(s32 *)((u8 *)arg0 + 0x84C) = 0x20;
    }
    temp_v0 = temp_a2 & 0xFFFF;
    *(s32 *)((u8 *)arg0 + 0x12C) = (s32) (((s64) (temp_a2 << 0x20) >> 0x20) == 0);
    if (temp_v0 != 0x22) {
        if ((u32) temp_v0 < 0x23U) {
            if (temp_v0 != 0) {
                var_s2 += temp_v0;
                goto block_18;
            }
            temp_v1 = func_00104810(arg0, 0xB, temp_a2);
            if (*(s32 *)((u8 *)arg0 + 0x858) != 0) {
                if (temp_v1 == 0xF) {
                    func_00104970(arg0, 0xB);
                    goto block_15;
                }
                goto block_17;
            }
block_17:
            func_00109790(arg0, &D_0045CF28, temp_v0);
            *(s32 *)((u8 *)arg0 + 0x12C) = 1;
            return 1;
        }
        if (temp_v0 != 0x23) {
            var_s2 += temp_v0;
block_18:
            var_v0 = 0;
        } else {
            var_v0 = 1;
            var_s2 += 0x21;
        }
        goto block_19;
    }
block_15:
    var_v0 = 1;
block_19:
    if (var_v0 == 0) {
        return var_s2;
    }
    goto loop_1;
}
