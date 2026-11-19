/* Draft (not built): func_00107180 at 0x00107180, size 0x100, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00107180.c:30: parse error before `)'
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00107180.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32);                       /* extern */
s32 FlushCache(s32, s32, s32, s32);         /* extern */

void func_00107180(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    s32 var_t3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_s0 = ((u32) (arg0 + 0x118F) >> 4) * 0x10;
    var_t3 = var_a1;
    var_t0 = var_a2;
    var_t2 = temp_s0;
    if (var_t0 > 0) {
        do {
            var_a3 = (var_t0 <= 0xFFF40) int var_t0 : 0xFFF40;
            var_a2 = var_a3 + 0xF;
            var_a1 = var_a2 > -1;
            var_t0 -= var_a3;
            *var_t2 = (s64) (((var_t3 & 0x0FFFFFFF) << 0x20) | (((var_t0 != 0) int 3 : 0) << 0x1C) | ((u64) ((s64) ((s32) ((var_a1 != 0) int var_a2 : (var_a3 + 0x1E)) >> 4) << 0x20) >> 0x20));
            M2C_SYNC();
            var_t3 += var_a3;
            var_t2 += 0x10;
        } while (var_t0 > 0);
    }
    FlushCache(0, var_a1, var_a2, var_a3);
    temp_v0 = DI();
    *(s32 *)0x1000B430 = temp_s0 & 0x0FFFFFFF;
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000B400 = 0x105;
    if (temp_v0 != 0) {
        EI(0x105, 0x1000B430);
    }
}
