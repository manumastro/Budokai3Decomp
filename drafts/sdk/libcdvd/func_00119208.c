/* Draft (not built): func_00119208 at 0x00119208, size 0x218, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00119208.c:82: parse error before `int'
 * Original: asm/nonmatchings/sdk/libcdvd/func_00119208.s */

s32 DI();                                           /* extern */
s32 EI(s32 *);                                  /* extern */
s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00118420();                            /* extern */
s32 func_00118CA8(s32);                         /* extern */
s32 scePrintf(s32 *);                       /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EDD90;
extern s32 D_003EDDAC;
extern s32 D_003EDDC0;
extern s32 D_003EDDD0;
extern s32 D_003EEF80;
extern s32 D_0045DD40;
extern s32 D_0045DD58;
extern s32 D_0045DD78;
extern s32 D_00478F50;
extern s32 D_00478F90;
extern s32 D_FFFFF;

s32 func_00119208(s32 arg0) {
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 temp_s0;
    s32 var_v0;

    if (D_003EDD90 > 0) {
        scePrintf(&D_0045DD40);
    }
    D_003EDDC0 = 1;
    if (DI() != 0) {
        EI(&D_003EDDC0);
    }
    func_00118420();
    var_v0 = 6;
    if (D_003EDDAC == PollSema(D_003EDDAC)) {
        if (func_00118CA8(1) == 0) {
            sceSifInitRpc(0);
            if (D_003EDDD0 < 0) {
loop_11:
                if (sceSifBindRpc(&D_00478F50, 0x8000059A, 0) < 0) {
                    var_v0_2 = &D_FFFFF;
                    if (D_003EDD90 > 0) {
                        scePrintf(&D_0045DD58);
                        var_v0_2 = (s32 *)0x100000;
                    }
                    do {

                    } while (var_v0_2 != (s32 *)-1);
                    goto loop_11;
                }
                var_v0_3 = &D_FFFFF;
                if (*(s32 *)((u8 *)(&D_00478F50) + 0x24) == 0) {
                    do {

                    } while (var_v0_3 != (s32 *)-1);
                    goto loop_11;
                }
                D_003EDDD0 = 0;
            }
            D_00478F90 = arg0;
            sceSifWriteBackDCache(&D_00478F90, 4);
            if (sceSifCallRpc(&D_00478F50, 0, 0, &D_00478F90, 0) >= 0) {
                if (D_003EDD90 > 0) {
                    scePrintf(&D_0045DD78);
                }
                temp_s0 = *((s32) &D_003EEF80 | 0x20000000);
                SignalSema(D_003EDDAC);
                var_v0 = temp_s0;
                /* Duplicate return node #29. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_25;
        }
block_25:
        SignalSema(D_003EDDAC);
        return ((arg0 ^ 8) == 0) int -1 : 6;
    }
    return var_v0;
}
