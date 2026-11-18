/* Draft (not built): func_0014FFA0 at 0x0014FFA0, size 0x180, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_0014FFA0.s */

s32 func_00161A88(s32);                             /* extern */

void func_0014FFA0(u8 *arg0) {
    s16 *temp_a0;
    s16 *temp_t2;
    s16 *temp_v1_3;
    s16 *var_a1;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t1;
    s32 temp_t3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v1;
    u8 *temp_v0_2;
    u8 temp_v0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *var_a2;

    temp_s1 = arg0 + 0x48;
    var_v1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x48);
    if (var_v1 == 1) {
        if (func_00161A88(*(s32 *)((u8 *)arg0 + 8)) != 0) {
            var_v1 = *(s32 *)((u8 *)arg0 + 4);
        } else {
            (*(s32 (**)(s32, u8 *, u8 *, u8 *))((u8 *)arg0 + 0x78))(*(s32 *)((u8 *)arg0 + 0x7C), arg0 + 0x68, arg0 + 0x6C, arg0 + 0x70);
            temp_t1 = *(s32 *)((u8 *)temp_s1 + 0x20);
            temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x24);
            temp_t0 = *(s32 *)((u8 *)temp_s1 + 0x18) - temp_t1;
            temp_a1 = *(s32 *)((u8 *)temp_s1 + 4);
            temp_t0_2 = (temp_v1 < temp_t0) ? temp_v1 : temp_t0;
            temp_t3 = *(s32 *)((u8 *)temp_s1 + 0x14);
            temp_t0_3 = (temp_a1 < temp_t0_2) ? temp_a1 : temp_t0_2;
            temp_t2 = temp_t3 + (temp_t1 * 2);
            if (*(s8 *)((u8 *)arg0 + 0xE) == 2) {
                var_a3 = 0;
                if (temp_t0_3 > 0) {
                    var_a2 = temp_s2;
                    do {
                        temp_v1_2 = var_a3 * 2;
                        temp_a0 = temp_v1_2 + temp_t2;
                        temp_v1_3 = temp_v1_2 + (temp_t3 + ((*(s32 *)((u8 *)temp_s1 + 0x1C) + temp_t1) * 2));
                        var_a3 += 1;
                        *temp_a0 = *(u8 *)((u8 *)var_a2 + 0) << 8;
                        temp_v0 = *(u8 *)((u8 *)var_a2 + 1);
                        var_a2 += 2;
                        *temp_v1_3 = temp_v0 << 8;
                    } while (var_a3 < temp_t0_3);
                }
            } else {
                var_a3_2 = 0;
                if (temp_t0_3 > 0) {
                    var_a1 = temp_t2;
                    do {
                        temp_v0_2 = temp_s2 + var_a3_2;
                        var_a3_2 += 1;
                        *var_a1 = *temp_v0_2 << 8;
                        var_a1 += 2;
                    } while (var_a3_2 < temp_t0_3);
                }
            }
            var_v1 = 2;
            *(s32 *)((u8 *)arg0 + 4) = 2;
            *(s32 *)((u8 *)arg0 + 0x90) = temp_t0_3;
            *(s32 *)((u8 *)arg0 + 0x94) = (s32) (temp_t0_3 * (s8) (u8) *(s8 *)((u8 *)arg0 + 0xE));
        }
    }
    if (var_v1 == 2) {
        (*(s32 (**)(s32, s32, s32))((u8 *)arg0 + 0x80))(*(s32 *)((u8 *)arg0 + 0x84), *(s32 *)((u8 *)arg0 + 0x94), *(s32 *)((u8 *)arg0 + 0x90));
        *(s32 *)((u8 *)arg0 + 4) = 3;
    }
}
