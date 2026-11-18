/* Draft (not built): func_0011A3C0 at 0x0011A3C0, size 0xB0, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0011A3C0.c:39: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libmc/func_0011A3C0.s */

s32 iSignalSema(s32, s32, u8 *, u8 *);          /* extern */

void func_0011A3C0(s32 arg0, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u8 temp_v1;
    u8 temp_v1_3;

    var_a2 = arg2;
    var_a3 = arg3;
    temp_a0 = arg0 | 0x20000000;
    temp_v0 = *(s32 *)((u8 *)temp_a0 + 0);
    var_a1 = 0;
    if ((temp_v0 != 0) && (var_a2 = *(s32 *)((u8 *)temp_a0 + 8), var_a3 = var_a2 | 0x20000000, (temp_v0 > 0))) {
        do {
            temp_v1 = *(temp_a0 + var_a1);
            var_a1 += 1;
            *var_a2 = temp_v1;
            *var_a3 = temp_v1;
            var_a2 += 1;
        } while (var_a1 < *(s32 *)((u8 *)temp_a0 + 0));
    }
    temp_v1_2 = *(s32 *)((u8 *)temp_a0 + 4);
    if (temp_v1_2 != 0) {
        var_a2 = *(s32 *)((u8 *)temp_a0 + 0xC);
        var_a1 = 0;
        var_a3 = var_a2 | 0x20000000;
        if (temp_v1_2 > 0) {
            do {
                temp_v1_3 = *(temp_a0 + var_a1);
                var_a1 += 1;
                *var_a2 = temp_v1_3;
                *var_a3 = temp_v1_3;
                var_a2 += 1;
            } while (var_a1 < *(s32 *)((u8 *)temp_a0 + 4));
        }
    }
    iSignalSema(temp_a0, var_a1, (u8 *) var_a2, (u8 *) var_a3);
}
