/* Draft (not built): func_00190A00 at 0x00190A00, size 0x164, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00190A00.c:38: warning: return makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_00190A00.s */

s32 func_0017B420(void *);                          /* extern */
s32 func_0017B4B8(s32, s32, s32);                   /* extern */
s32 memcpy(void *, s32, s32, s32);          /* extern */

u8 *func_00190A00(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;

    *arg2 = 0;
    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_v0 != 0) {
        var_s1 = func_0017B4B8(*(s32 *)((u8 *)arg0 + 8) + temp_v0, temp_v0, arg1);
        if (var_s1 == 0) {
            temp_s3_2 = *(s32 *)((u8 *)arg0 + 4);
            temp_s0 = *(s32 *)((u8 *)arg0 + 0xC);
            var_s4 = 0;
            temp_s3 = (temp_s3_2 >= 4) int 3 : temp_s3_2;
            temp_s0_2 = (temp_s0 >= 4) int 3 : temp_s0;
            memcpy(sp, (*(s32 *)((u8 *)arg0 + 0) + temp_s3_2) - temp_s3, temp_s3, 3);
            temp_s0_3 = (temp_s3 + temp_s0_2) - 3;
            memcpy(sp + temp_s3, *(s32 *)((u8 *)arg0 + 8), temp_s0_2);
            if (var_s1 < temp_s0_3) {
loop_9:
                temp_v0_2 = func_0017B420(sp + var_s4);
                if (temp_v0_2 & arg1) {
                    *arg2 = temp_v0_2;
                    return ((*(s32 *)((u8 *)arg0 + 0) + *(s32 *)((u8 *)arg0 + 4)) - temp_s3) + var_s4;
                }
                var_s4 += 1;
                if (var_s4 >= temp_s0_3) {
                    goto block_13;
                }
                goto loop_9;
            }
            goto block_13;
        }
        goto block_14;
    }
block_13:
    temp_v0_3 = *(s32 *)((u8 *)arg0 + 4);
    var_v0 = func_0017B4B8(*(s32 *)((u8 *)arg0 + 0) + temp_v0_3, temp_v0_3, arg1);
    var_s1 = var_v0;
    if (var_s1 != 0) {
block_14:
        *arg2 = func_0017B420((u8 *) var_s1);
        var_v0 = var_s1;
    }
    return (u8 *) var_v0;
}
