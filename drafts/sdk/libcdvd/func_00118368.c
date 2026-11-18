/* Draft (not built): func_00118368 at 0x00118368, size 0xB8, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00118368.c:48: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libcdvd/func_00118368.s */

s32 func_00118158(u8 *, u8 *, s32, s32);        /* extern */

void func_00118368(s32 arg0) {
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_a1;
    u8 temp_v1;
    u8 temp_v1_3;

    var_a0 = arg0;
    var_a1 = (u8 *)0x20000000;
    temp_a3 = var_a0 | 0x20000000;
    temp_v0 = *(s32 *)((u8 *)temp_a3 + 0);
    var_a2 = 0;
    if ((temp_v0 > 0) && (temp_t1 = *(s32 *)((u8 *)temp_a3 + 8), (temp_v0 > 0))) {
        var_v0 = temp_a3;
        do {
            var_a1 = (temp_t1 | 0x20000000) + var_a2;
            temp_v1 = *var_v0;
            var_a0 = temp_t1 + var_a2;
            var_a2 += 1;
            *var_a1 = temp_v1;
            *var_a0 = temp_v1;
            var_v0 = temp_a3 + var_a2;
        } while (var_a2 < *(s32 *)((u8 *)temp_a3 + 0));
    }
    temp_v1_2 = *(s32 *)((u8 *)temp_a3 + 4);
    if (temp_v1_2 > 0) {
        temp_t1_2 = *(s32 *)((u8 *)temp_a3 + 0xC);
        var_a2 = 0;
        if (temp_v1_2 > 0) {
            var_v0_2 = temp_a3;
            do {
                var_a1 = (temp_t1_2 | 0x20000000) + var_a2;
                temp_v1_3 = *var_v0_2;
                var_a0 = temp_t1_2 + var_a2;
                var_a2 += 1;
                *var_a1 = temp_v1_3;
                *var_a0 = temp_v1_3;
                var_v0_2 = temp_a3 + var_a2;
            } while (var_a2 < *(s32 *)((u8 *)temp_a3 + 4));
        }
    }
    func_00118158((u8 *) var_a0, var_a1, var_a2, temp_a3);
}
