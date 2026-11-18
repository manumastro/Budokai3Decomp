/* Draft (not built): func_001249A8 at 0x001249A8, size 0x1C8, segment sdk/libc_001246A0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ror: d_001249A8.c:60: too few arguments to function `_free_r'
 * Original: asm/nonmatchings/sdk/libc_001246A0/func_001249A8.s */

s32 __malloc_lock(s32);                         /* extern */
s32 __malloc_unlock(s32);                       /* extern */
s32 __umoddi3(void *, u64);                         /* extern */
s32 _free_r(s32, void *, void *, void *);       /* extern */
void *_malloc_r(s32, s32);                          /* extern */

u8 *func_001249A8(s32 arg0, u64 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    u32 temp_a1;
    u32 temp_v0;
    u32 var_s3;
    u64 temp_s0;
    u64 var_a0;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a3_2;
    u8 *var_s2;
    u8 *var_v0;

    if (arg1 < 0x11U) {
        return _malloc_r(arg2);
    }
    temp_a1 = arg2 + 0x13;
    temp_s0 = (arg1 < 0x10U) int 0x10U : arg1;
    if (temp_a1 >= 0x1FU) {
        var_s3 = temp_a1 & ~0xF;
    } else {
        var_s3 = 0x10;
    }
    var_v0 = _malloc_r(arg0, var_s3 + temp_s0 + 0x10);
    if (var_v0 != NULL) {
        var_s2 = var_v0 - 8;
        __malloc_lock(arg0);
        if (__umoddi3(var_v0, (u64) (temp_s0 << 0x20) >> 0x20) != 0) {
            temp_a3 = ((s32) ((var_v0 + temp_s0) - 1) & -(s32) temp_s0) - 8;
            temp_a3_2 = (((temp_a3 - var_s2) < 0x10) * temp_s0) + temp_a3;
            temp_t0 = temp_a3_2 - var_s2;
            temp_a2 = (*(s32 *)((u8 *)var_s2 + 4) & ~3) - temp_t0;
            temp_a2_2 = temp_a3_2 + temp_a2;
            *(s32 *)((u8 *)temp_a3_2 + 4) = (s32) (temp_a2 | 1);
            *(s32 *)((u8 *)temp_a2_2 + 4) = (s32) (*(s32 *)((u8 *)temp_a2_2 + 4) | 1);
            *(s32 *)((u8 *)var_s2 + 4) = (s32) ((*(s32 *)((u8 *)var_s2 + 4) & 1) | temp_t0);
            var_s2 = temp_a3_2;
            _free_r(arg0, var_v0, temp_a2_2, temp_a3_2);
        }
        temp_v0 = *(s32 *)((u8 *)var_s2 + 4) & ~3;
        if (temp_v0 >= var_s3) {
            var_a0 = (u64) ((temp_v0 - var_s3) << 0x20) >> 0x20;
        } else {
            var_a0 = 0 - ((u64) ((var_s3 - temp_v0) << 0x20) >> 0x20);
        }
        if ((s32) var_a0 >= 0x10) {
            temp_a2_3 = var_s2 + var_s3;
            *(s32 *)((u8 *)temp_a2_3 + 4) = (s32) ((s64) ((var_a0 | 1) << 0x20) >> 0x20);
            *(s32 *)((u8 *)var_s2 + 4) = (s32) ((*(s32 *)((u8 *)var_s2 + 4) & 1) | var_s3);
            _free_r(arg0, temp_a2_3 + 8, temp_a2_3);
        }
        __malloc_unlock(arg0);
        var_v0 = var_s2 + 8;
    }
    return var_v0;
}
