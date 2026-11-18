/* Draft (not built): func_00118F20 at 0x00118F20, size 0x2E8, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00118F20.c:112: parse error before `return'
 * Original: asm/nonmatchings/sdk/libcdvd/func_00118F20.s */

s32 func_00118420(s32, s32, s32);               /* extern */
s32 func_00118508();                            /* extern */
s32 func_00118680();                            /* extern */
s32 func_00118CA8(s32);                         /* extern */
s32 scePrintf(s32 *, s32, s32);             /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EDD90;
extern s32 D_003EDDA0;
extern s32 D_003EDDA4;
extern s32 D_003EDDA8;
extern s32 D_003EDDAC;
extern s32 D_003EDDB8;
extern s32 D_003EDDBC;
extern s32 D_003EDDC4;
extern s32 D_003EDDC8;
extern s32 D_003EDDCC;
extern s32 D_003EDDD0;
extern s32 D_003EDDD4;
extern s32 D_003EDDD8;
extern s32 D_003EDDDC;
extern s32 D_003EEF80;
extern s32 D_0045DD10;
extern s32 D_0045DD30;
extern s32 D_00478F28;
extern s32 D_00478F80;
extern s32 D_FFFFF;

s32 func_00118F20(s32 arg0) {
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00118CA8(1) == 0) {
        sceSifInitRpc(0);
        D_003EDDA4 = 1;
        D_003EDDC8 = -1;
        D_003EDDCC = -1;
        D_003EDDBC = -1;
        D_003EDDD4 = -1;
        D_003EDDD0 = -1;
        D_003EDDB8 = 0;
        D_003EDDDC += 1;
        D_003EDDD8 = -1;
loop_2:
        temp_v0 = sceSifBindRpc(&D_00478F28, 0x80000592, 0);
        if (temp_v0 < 0) {
            if (D_003EDD90 > 0) {
                scePrintf(&D_0045DD10, temp_v0, D_003EDDDC);
            }
            var_v0_2 = &D_FFFFF;
            do {

            } while (var_v0_2 != (s32 *)-1);
            goto loop_2;
        }
        if (*(s32 *)((u8 *)(&D_00478F28) + 0x24) == 0) {
            var_v0_3 = &D_FFFFF;
            do {

            } while (var_v0_3 != (s32 *)-1);
            goto loop_2;
        }
        D_00478F80 = arg0;
        D_003EDDD8 = 0;
        sceSifWriteBackDCache(&D_00478F80, 4);
        if (sceSifCallRpc(&D_00478F28, 0, 0, &D_00478F80, 0) < 0) {
            D_003EDDA4 = 0;
            return 0;
        }
        var_a2 = *((s32) (&D_003EEF80 + 0xC) | 0x20000000);
        temp_a1 = *((s32) (&D_003EEF80 + 4) | 0x20000000);
        var_s0 = 1;
        temp_a0 = *((s32) (&D_003EEF80 + 8) | 0x20000000);
        if (var_a2 != 0xFF) {
            var_a2 = -1;
            if (var_a2 == 0xFE) {
                D_003EDD90 = 1;
            } else if ((((s32) ((temp_a1 > -1) int temp_a1 : (temp_a1 + 0xFF)) >> 8) < 2) || (((s32) ((temp_a0 > -1) int temp_a0 : (temp_a0 + 0xFF)) >> 8) < 2)) {
                var_s0 = 2;
            }
        }
        D_003EDDA4 = 0;
        if ((arg0 >= 0) && (arg0 >= 2) && (arg0 == 5)) {
            if (D_003EDD90 > 0) {
                scePrintf(&D_0045DD30, temp_a1, var_a2);
            }
            func_00118508();
            D_003EDDA8 = -1;
            D_003EDDAC = -1;
            D_003EDDA0 = -1;
            D_003EDDC4 = 0;
        } else {
            func_00118420(temp_a0, temp_a1, var_a2);
            func_00118680();
            D_003EDDC4 = 1;
        }
        var_v0 = var_s0;
        /* Duplicate return node #31. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
