/* Draft (not built): func_00119420 at 0x00119420, size 0x220, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00119420.c:89: parse error before `int'
 * Original: asm/nonmatchings/sdk/libcdvd/func_00119420.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00118420();                            /* extern */
s32 func_00119208(s32);                             /* extern */
s32 scePrintf(s32 *);                       /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EDD90;
extern s32 D_003EDDB0;
extern s32 D_003EDDC0;
extern s32 D_003EDDD0;
extern s32 D_003EF800;
extern s32 D_0045DD58;
extern s32 D_0045DD78;
extern s32 D_0045DD90;
extern s32 D_00478F50;
extern s32 D_00478F90;
extern s32 D_FFFFF;

s32 func_00119420(s32 arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;

    if (D_003EDD90 > 0) {
        scePrintf(&D_0045DD90);
    }
    func_00118420();
    var_a0 = arg0 ^ 8;
    if (D_003EDDB0 == PollSema(D_003EDDB0)) {
        sceSifInitRpc(0);
        var_s1 = 0;
        if (D_003EDDD0 < 0) {
loop_9:
            if (sceSifBindRpc(&D_00478F50, 0x8000059C, 0) < 0) {
                var_v1 = &D_FFFFF;
                if (D_003EDD90 > 0) {
                    scePrintf(&D_0045DD58);
                    var_v1 = (s32 *)0x100000;
                }
                do {

                } while (var_v1 != (s32 *)-1);
                goto loop_9;
            }
            if (*(s32 *)((u8 *)(&D_00478F50) + 0x24) != 0) {
                D_003EDDD0 = 0;
                goto block_20;
            }
            if (var_s1 < 0x11) {
                var_v1_2 = &D_FFFFF;
                do {

                } while (var_v1_2 != (s32 *)-1);
                var_s1 += 1;
                goto loop_9;
            }
            SignalSema(D_003EDDB0);
            return func_00119208(arg0);
        }
block_20:
        D_003EDDC0 = 0;
        if (DI() != 0) {
            EI();
        }
        D_00478F90 = arg0;
        sceSifWriteBackDCache(&D_00478F90, 4);
        if (sceSifCallRpc(&D_00478F50, 0, 0, &D_00478F90, 0) >= 0) {
            if (D_003EDD90 > 0) {
                scePrintf(&D_0045DD78);
            }
            temp_s0 = *((s32) &D_003EF800 | 0x20000000);
            SignalSema(D_003EDDB0);
            return temp_s0;
        }
        SignalSema(D_003EDDB0);
        var_a0 = arg0 ^ 8;
        goto block_26;
    }
block_26:
    return (var_a0 == 0) int -1 : 6;
}
