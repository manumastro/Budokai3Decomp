/* Draft (not built): func_0016E470 at 0x0016E470, size 0x158, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016E470.c:56: too few arguments to function `func_0016DAF0'
 * Original: asm/nonmatchings/cri/sj/func_0016E470.s */

s32 func_0016DAD8(s32, s32);                    /* extern */
s32 func_0016DAF0(s32);                         /* extern */
s32 memcpy(s32, s32, s32, s32);                 /* extern */

void func_0016E470(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 (*temp_v0)(s32, s32);
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_v1;

    temp_a3 = *(s32 *)((u8 *)arg2 + 4);
    if ((temp_a3 > 0) && (temp_a1 = *(s32 *)((u8 *)arg2 + 0), (temp_a1 != 0))) {
        if (arg1 == 1) {
            temp_t0 = *(s32 *)((u8 *)arg0 + 0x1C);
            temp_a2 = *(s32 *)((u8 *)arg0 + 0x24);
            var_v1 = temp_a1 - temp_t0;
            if (var_v1 < temp_a2) {
                temp_a2_2 = temp_a2 - var_v1;
                memcpy(temp_t0 + (*(s32 *)((u8 *)arg0 + 0x20) + var_v1), temp_a1, (temp_a3 < temp_a2_2) int temp_a3 : temp_a2_2, temp_a3);
                var_v1 = *(s32 *)((u8 *)arg2 + 0) - *(s32 *)((u8 *)arg0 + 0x1C);
            }
            temp_v1 = var_v1 + *(s32 *)((u8 *)arg2 + 4);
            temp_a2_3 = temp_v1 - *(s32 *)((u8 *)arg0 + 0x20);
            if (*(s32 *)((u8 *)arg0 + 0x20) < temp_v1) {
                temp_a2_4 = (*(s32 *)((u8 *)arg2 + 4) < temp_a2_3) int *(s32 *)((u8 *)arg2 + 4) : temp_a2_3;
                memcpy(*(s32 *)((u8 *)arg0 + 0x1C), *(s32 *)((u8 *)arg0 + 0x1C) + (temp_v1 - temp_a2_4), temp_a2_4, *(s32 *)((u8 *)arg2 + 4));
            }
            func_0016DAD8();
            *(s32 *)((u8 *)arg0 + 0xC) = (s32) (*(s32 *)((u8 *)arg0 + 0xC) + *(s32 *)((u8 *)arg2 + 4));
            temp_a0 = *(s32 *)((u8 *)arg0 + 0x34) + *(s32 *)((u8 *)arg2 + 4);
            *(s32 *)((u8 *)arg0 + 0x34) = temp_a0;
            func_0016DAF0(temp_a0);
            return;
        }
        if (arg1 == 0) {
            func_0016DAD8(temp_a1, temp_a3);
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) + *(s32 *)((u8 *)arg2 + 4));
            temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x2C) + *(s32 *)((u8 *)arg2 + 4);
            *(s32 *)((u8 *)arg0 + 0x2C) = temp_a0_2;
            func_0016DAF0(temp_a0_2);
            return;
        }
        func_0016DAD8(temp_a1, temp_a3);
        *(s32 *)((u8 *)arg2 + 4) = 0;
        *(s32 *)((u8 *)arg2 + 0) = 0;
        func_0016DAF0();
        temp_v0 = *(s32 (**)(s32, s32))((u8 *)arg0 + 0x38);
        if (temp_v0 != NULL) {
            temp_v0(*(s32 *)((u8 *)arg0 + 0x3C), -3);
        }
    }
}
