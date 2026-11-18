/* Draft (not built): func_001908A8 at 0x001908A8, size 0x154, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001908A8.c:36: warning: return makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_001908A8.s */

s32 func_0017B420(void *);                          /* extern */
s32 func_0017B5B8(s32, s32, s32);                   /* extern */
s32 memcpy(void *, s32, s32, s32);              /* extern */

u8 *func_001908A8(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;

    *arg2 = 0;
    var_v0 = func_0017B5B8(*(s32 *)((u8 *)arg0 + 0), *(s32 *)((u8 *)arg0 + 4), arg1);
    var_s1 = var_v0;
    if (var_s1 == 0) {
        temp_a3 = *(s32 *)((u8 *)arg0 + 0xC);
        if (temp_a3 != 0) {
            temp_s3_2 = *(s32 *)((u8 *)arg0 + 4);
            temp_s3 = (temp_s3_2 >= 4) int 3 : temp_s3_2;
            temp_s0 = (temp_a3 < 4) int temp_a3 : 3;
            var_s4 = 0;
            memcpy(sp, (*(s32 *)((u8 *)arg0 + 0) + temp_s3_2) - temp_s3, temp_s3, temp_a3);
            temp_s0_2 = (temp_s3 + temp_s0) - 3;
            memcpy(sp + temp_s3, *(s32 *)((u8 *)arg0 + 8), temp_s0);
            if (var_s1 < temp_s0_2) {
loop_8:
                temp_v0 = func_0017B420(sp + var_s4);
                if (temp_v0 & arg1) {
                    *arg2 = temp_v0;
                    return ((*(s32 *)((u8 *)arg0 + 0) + *(s32 *)((u8 *)arg0 + 4)) - temp_s3) + var_s4;
                }
                var_s4 += 1;
                if (var_s4 >= temp_s0_2) {
                    goto block_12;
                }
                goto loop_8;
            }
block_12:
            var_v0 = func_0017B5B8(*(s32 *)((u8 *)arg0 + 8), *(s32 *)((u8 *)arg0 + 0xC), arg1);
            var_s1 = var_v0;
            if (var_s1 != 0) {
                goto block_13;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return (u8 *) var_v0;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return (u8 *) var_v0;
    }
block_13:
    *arg2 = func_0017B420((u8 *) var_s1);
    var_v0 = var_s1;
    return (u8 *) var_v0;
}
