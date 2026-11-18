/* Draft (not built): func_0018C128 at 0x0018C128, size 0x104, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018C128.c:38: warning: assignment makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_0018C128.s */

void *func_0018C230(s32, s32, s32);             /* extern */
s32 func_0018C298(void *, s32);                     /* extern */
s32 func_0018C318(s32, s32, void *);                /* extern */
s32 func_0018C5B8(s32, s32, void *);                /* extern */

void func_0018C128(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_v0;

    var_s3 = arg1;
    var_s4 = arg0;
    temp_s6 = var_s4 + var_s3;
    temp_s7 = *(s32 *)((u8 *)arg2 + 0x10);
loop_3:
    if (var_s3 > 0) {
        temp_v0 = func_0018C230(var_s4, var_s3, 0x40000);
        if (temp_v0 != NULL) {
            if ((u32) ((*(u8 *)((u8 *)temp_v0 + 3) + 0x40) & 0xFF) < 0x20U) {
                temp_v0_2 = func_0018C298(temp_v0, temp_s6 - temp_v0);
                temp_v0_3 = temp_s6 - temp_v0_2;
                temp_s0 = (temp_v0_3 < temp_s7) int temp_v0_3 : temp_s7;
                if (func_0018C318(temp_v0_2, temp_s0, arg2) != 0) {

                } else if (func_0018C5B8(temp_v0_2, temp_s0, arg2) == 0) {
                    goto block_2;
                }
            } else {
block_2:
                temp_v0_4 = (temp_v0 - var_s4) + 1;
                var_s3 -= temp_v0_4;
                var_s4 += temp_v0_4;
                goto loop_3;
            }
        }
    }
}
