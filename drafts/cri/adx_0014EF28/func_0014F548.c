/* Draft (not built): func_0014F548 at 0x0014F548, size 0x198, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0014F548.c:67: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_0014F548.s */

s32 func_00161A88(s32);                             /* extern */

void func_0014F548(u8 *arg0) {
    s16 *temp_a0_2;
    s16 *temp_a1_2;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v1;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *var_a3;

    temp_s1 = arg0 + 0x48;
    var_v1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x48);
    if (var_v1 == 1) {
        if (func_00161A88(*(s32 *)((u8 *)arg0 + 8)) != 0) {
            var_v1 = *(s32 *)((u8 *)arg0 + 4);
        } else {
            (*(s32 (**)(s32, u8 *, u8 *, u8 *))((u8 *)arg0 + 0x78))(*(s32 *)((u8 *)arg0 + 0x7C), arg0 + 0x68, arg0 + 0x6C, arg0 + 0x70);
            temp_a3 = *(s32 *)((u8 *)temp_s1 + 0x20);
            temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x24);
            temp_t1 = *(s32 *)((u8 *)temp_s1 + 0x18) - temp_a3;
            temp_a1 = *(s32 *)((u8 *)temp_s1 + 4);
            temp_t1_2 = (temp_v1 < temp_t1) int temp_v1 : temp_t1;
            temp_t3 = *(s32 *)((u8 *)temp_s1 + 0x14);
            temp_t1_3 = (temp_a1 < temp_t1_2) int temp_a1 : temp_t1_2;
            temp_t2 = temp_t3 + (temp_a3 * 2);
            if (*(s8 *)((u8 *)arg0 + 0xE) == 2) {
                var_t0 = 0;
                if (temp_t1_3 > 0) {
                    var_a3 = temp_s2;
                    do {
                        temp_v0 = *(u16 *)((u8 *)var_a3 + 0);
                        temp_a0 = var_t0 * 2;
                        temp_a1_2 = temp_a0 + temp_t2;
                        temp_a0_2 = temp_a0 + (temp_t3 + ((*(s32 *)((u8 *)temp_s1 + 0x1C) + temp_a3) * 2));
                        var_t0 += 1;
                        *temp_a1_2 = (temp_v0 >> 8) | (temp_v0 << 8);
                        temp_v0_2 = *(u16 *)((u8 *)var_a3 + 2);
                        var_a3 += 4;
                        *temp_a0_2 = (temp_v0_2 >> 8) | (temp_v0_2 << 8);
                    } while (var_t0 < temp_t1_3);
                }
            } else {
                var_t0_2 = 0;
                if (temp_t1_3 > 0) {
                    do {
                        temp_a0_3 = var_t0_2 * 2;
                        var_t0_2 += 1;
                        temp_v0_3 = *(temp_a0_3 + temp_s2);
                        *(temp_a0_3 + temp_t2) = (temp_v0_3 >> 8) | (temp_v0_3 << 8);
                    } while (var_t0_2 < temp_t1_3);
                }
            }
            var_v1 = 2;
            *(s32 *)((u8 *)arg0 + 4) = 2;
            *(s32 *)((u8 *)arg0 + 0x90) = temp_t1_3;
            *(s32 *)((u8 *)arg0 + 0x94) = (s32) (temp_t1_3 * (s8) (u8) *(s8 *)((u8 *)arg0 + 0xE) * 2);
        }
    }
    if (var_v1 == 2) {
        (*(s32 (**)(s32, s32, s32))((u8 *)arg0 + 0x80))(*(s32 *)((u8 *)arg0 + 0x84), *(s32 *)((u8 *)arg0 + 0x94), *(s32 *)((u8 *)arg0 + 0x90));
        *(s32 *)((u8 *)arg0 + 4) = 3;
    }
}
