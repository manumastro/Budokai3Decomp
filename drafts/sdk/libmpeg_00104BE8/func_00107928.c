/* Draft (not built): func_00107928 at 0x00107928, size 0x1C4, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00107928.c:56: warning: passing arg 4 makes integer from pointer without a cast
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00107928.s */

s32 func_00106AA8(void *);                          /* extern */
s32 func_00107500(void *, s32);                 /* extern */
s32 func_00108068(void *);                          /* extern */
s32 func_00108BB8(void *);                      /* extern */
s32 func_00108C78(void *, s32, s32);            /* extern */

s32 func_00107928(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 (*temp_a3)(u8 *, u8 *, s32, s32);
    s32 temp_gp;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s0;

    var_s3 = 0;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x40);
    *(s32 *)((u8 *)temp_s0 + 0x130) = 0;
    if ((arg2 == -1) || (arg1 < arg2)) {
        var_s3 = 1;
    }
    if (*(s32 *)((u8 *)temp_s0 + 8) == 0) {
        *(s32 *)((u8 *)arg0 + 8) = 0;
        *(s32 *)((u8 *)temp_s0 + 8) = 1;
    }
    if ((func_00107500(temp_s0, 0) != 0) && (var_s3 != 0)) {
        func_00108068(temp_s0);
    }
    var_v0 = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0x878) == 0) {
        *(s32 *)((u8 *)temp_s0 + 0x130) = 1;
        if (func_00106AA8(temp_s0) != 0) {
            var_v0 = -1;
            if (*(s32 *)((u8 *)temp_s0 + 0x184) == (((*(s32 *)((u8 *)temp_s0 + 0xE8) ^ 1) != 0) int 1 : 2)) {
                var_s4 = 0;
                if ((((func_00107500(temp_s0, 1) != 0) int 1 : 0) != 0) && (var_s3 != 0)) {
                    var_s4 = (func_00108068(temp_s0) != 0) int 1 : 0;
                }
                var_v0 = 0;
                if (*(s32 *)((u8 *)temp_s0 + 0x878) == 0) {
                    func_00108C78(temp_s0, *(s32 *)((u8 *)temp_s0 + 0x128), *(s32 *)((u8 *)temp_s0 + 4));
                    *(s32 *)((u8 *)temp_s0 + 0x130) = 0;
                    *(s32 *)((u8 *)arg0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x128) - *(s32 *)((u8 *)temp_s0 + 0xC0));
                    *(s32 *)((u8 *)temp_s0 + 0x128) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x128) + 1);
                    *(s32 *)((u8 *)temp_s0 + 4) = (s32) (*(s32 *)((u8 *)temp_s0 + 4) + 1);
                    if ((var_s3 == 0) && (sp0 = 1, (arg0 != NULL))) {
                        temp_a2 = *(u8 **)((u8 *)arg0 + 0x40);
                        var_v0 = var_s4;
                        if (temp_a2 != NULL) {
                            temp_a3 = *(s32 (**)(u8 *, u8 *, s32, s32))((u8 *)temp_a2 + 0x18);
                            if (temp_a3 != NULL) {
                                temp_gp = *(s32 *)((u8 *)temp_a2 + 0x20);
                                temp_a3(arg0, sp, *(s32 *)((u8 *)((sp0 * 0xC) + temp_a2) + 0x10), temp_a3);
                                goto block_23;
                            }
                        }
                    } else {
block_23:
                        var_v0 = var_s4;
                    }
                }
            }
        } else {
            func_00108BB8(arg0);
            *(s32 *)((u8 *)temp_s0 + 0) = 1;
            var_v0 = 0;
        }
    }
    return var_v0;
}
