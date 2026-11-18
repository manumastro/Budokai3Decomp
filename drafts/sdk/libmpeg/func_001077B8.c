/* Draft (not built): func_001077B8 at 0x001077B8, size 0x170, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_001077B8.c:40: warning: passing arg 4 makes integer from pointer without a cast
 * Original: asm/sdk/libmpeg.s */

s32 func_00107500(void *, s32);                 /* extern */
s32 func_00108068(void *);                          /* extern */
s32 func_00108C78(void *, s32, s32);            /* extern */

s32 func_001077B8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 (*temp_a3)(u8 *, u8 *, s32, s32);
    s32 temp_gp;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_a2;
    u8 *temp_s1;

    var_s0 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x40);
    if ((arg2 == -1) || (arg1 < arg2)) {
        if (*(s32 *)((u8 *)temp_s1 + 8) == 0) {
            *(s32 *)((u8 *)arg0 + 8) = 0;
            *(s32 *)((u8 *)temp_s1 + 8) = 1;
        }
        var_v1 = 0;
        if (func_00107500(temp_s1, 0) != 0) {
            var_v1 = func_00108068(temp_s1) != 0;
        }
        var_s3 = var_v1;
    } else {
        var_s3 = func_00107500(temp_s1, 0);
        sp0 = 1;
        if (arg0 != NULL) {
            temp_a2 = *(u8 **)((u8 *)arg0 + 0x40);
            var_s0 = 1;
            if (temp_a2 != NULL) {
                temp_a3 = *(s32 (**)(u8 *, u8 *, s32, s32))((u8 *)temp_a2 + 0x18);
                if (temp_a3 != NULL) {
                    temp_gp = *(s32 *)((u8 *)temp_a2 + 0x20);
                    temp_a3(arg0, sp, *(s32 *)((u8 *)((sp0 * 0xC) + temp_a2) + 0x10), temp_a3);
                    goto block_11;
                }
            }
        } else {
block_11:
            var_s0 = 1;
        }
    }
    var_v0 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x878) == 0) {
        func_00108C78(temp_s1, *(s32 *)((u8 *)temp_s1 + 0x128), *(s32 *)((u8 *)temp_s1 + 4));
        if ((*(s32 *)((u8 *)temp_s1 + 0x184) != 3) && (var_s0 == 0)) {
            *(s32 *)((u8 *)temp_s1 + 0x130) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x130) == 0);
        }
        *(s32 *)((u8 *)arg0 + 8) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x128) - *(s32 *)((u8 *)temp_s1 + 0xC0));
        var_v0 = var_s3;
        if (*(s32 *)((u8 *)temp_s1 + 0x130) == 0) {
            *(s32 *)((u8 *)temp_s1 + 0x128) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x128) + 1);
            *(s32 *)((u8 *)temp_s1 + 4) = (s32) (*(s32 *)((u8 *)temp_s1 + 4) + 1);
            var_v0 = var_s3;
        }
    }
    return var_v0;
}
