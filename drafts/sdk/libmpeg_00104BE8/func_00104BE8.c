/* Draft (not built): func_00104BE8 at 0x00104BE8, size 0x17C, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00104BE8.s */

s32 DI(s32 *, s64, s32, s32);                       /* extern */
s32 EI(s32, s32, s32 *, s32);           /* extern */
extern s32 D_00470A40;

void func_00104BE8(u8 *arg0, s32 arg2, s32 arg3) {
    s32 *temp_a2;
    s32 *var_a0;
    s32 temp_a1;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_t2;
    s32 var_t3;
    s64 var_a1;
    u8 *var_s1;

    var_a2 = arg2;
    var_a3 = arg3;
    if (*(s32 *)((u8 *)arg0 + 0x87C) == 0) {
        temp_t8 = *(s32 *)((u8 *)arg0 + 0x820);
        var_a1 = 0x20000000;
        var_t2 = 0;
        var_a0 = (temp_t8 * 0x140) + arg0;
        temp_t4 = *(s32 *)((u8 *)var_a0 + 0x6CC);
        var_t3 = ((s32) &D_00470A40 & 0x0FFFFFFF) | 0x20000000;
        if (temp_t4 > 0) {
            var_s1 = arg0 + 0x5A0;
            do {
                var_a2 = 0x0FFFFFFF;
                var_a1 = (((var_t2 ^ (temp_t4 - 1)) == 0) ? 0 : 3) << 0x1C;
                temp_v0 = (var_t2 * 4) + (temp_t8 * 0x140);
                var_a3 = 0x30;
                var_a0 = arg0 + 0x5B8 + temp_v0;
                var_t2 += 1;
                *(s64 *)((u8 *)var_t3 + 0) = (s64) (((*(arg0 + 0x5A8 + temp_v0) & 0x0FFFFFFF) << 0x20) | 0x30000000 | 0x30);
                *(s64 *)((u8 *)var_t3 + 0x10) = (s64) (((*var_a0 & 0x0FFFFFFF) << 0x20) | var_a1 | 0x30);
            } while (var_t2 < temp_t4);
        } else {
            var_s1 = arg0 + 0x5A0;
        }
        temp_v0_2 = DI(var_a0, var_a1, var_a2, var_a3);
        M2C_SYNC();
        temp_a2 = (*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s1;
        temp_a1 = *temp_a2;
        *(s32 *)0x1000D480 = temp_a1;
        *(s32 **)0x1000D430 = &D_00470A40;
        *(s32 *)0x1000D420 = 0;
        *(s32 *)0x1000D400 = 0x105;
        if (temp_v0_2 != 0) {
            EI(0x1000D400, temp_a1, temp_a2, 0x1000D480);
        }
    }
}
