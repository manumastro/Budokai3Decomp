/* Draft (not built): func_00104D68 at 0x00104D68, size 0x74, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ompile error: d_00104D68.c:19: parse error before `M2C_ERROR'
 * Original: asm/sdk/libmpeg.s */

void func_00104D68(u8 *arg0) {
    s32 var_a3;
    s32 var_t7;
    u8 *var_t6;

    var_t6 = *(u8 **)((u8 *)arg0 + 0);
    var_a3 = *(s32 *)((u8 *)arg0 + 8);
    M2C_ERROR(/* unknown instruction: mtsab $t0, 0x0 */);
    var_t7 = -1;
    do {
loop_1:
        var_a3 -= 1;
        M2C_ERROR(/* unknown instruction: qfsrv $t2, $t1, $t0 */);
        *(s128 *)((u8 *)var_t6 + 0) = (s128) M2C_ERROR(/* unknown instruction: pextlb $t0, $zero, $t2 */);
        *(s128 *)((u8 *)var_t6 + 0x10) = (s128) M2C_ERROR(/* unknown instruction: pextub $t1, $zero, $t2 */);
        var_t6 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
        if (var_a3 > 0) {
            goto loop_1;
        }
        var_a3 = *(s32 *)((u8 *)arg0 + 0xC);
        var_t7 = 0;
    } while (var_t7 & var_a3);
}
