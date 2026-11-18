/* Draft (not built): func_00105000 at 0x00105000, size 0xAC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ompile error: d_00105000.c:32: parse error before `M2C_ERROR'
 * Original: asm/sdk/libmpeg.s */

void func_00105000(u8 *arg0) {
    s32 var_a3;
    s32 var_t3;
    u8 *var_t6;

    var_t6 = *(u8 **)((u8 *)arg0 + 0);
    var_a3 = *(s32 *)((u8 *)arg0 + 8);
    M2C_ERROR(/* unknown instruction: pnor $t9, $zero, $zero */);
    M2C_ERROR(/* unknown instruction: psrlh $t9, $t9, 0xf */);
    var_t3 = -1;
    do {
loop_1:
        M2C_ERROR(/* unknown instruction: mtsab $t5, 0x0 */);
        M2C_ERROR(/* unknown instruction: qfsrv $v0, $t7, $t2 */);
        M2C_ERROR(/* unknown instruction: qfsrv $v1, $t2, $t7 */);
        M2C_ERROR(/* unknown instruction: pextlb $t2, $zero, $v0 */);
        var_a3 -= 1;
        M2C_ERROR(/* unknown instruction: pextub $t7, $zero, $v0 */);
        M2C_ERROR(/* unknown instruction: mtsab $t8, 0x0 */);
        M2C_ERROR(/* unknown instruction: qfsrv $v1, $v1, $v0 */);
        M2C_ERROR(/* unknown instruction: pextlb $v0, $zero, $v1 */);
        M2C_ERROR(/* unknown instruction: pextub $v1, $zero, $v1 */);
        M2C_ERROR(/* unknown instruction: paddh $t2, $t2, $v0 */);
        M2C_ERROR(/* unknown instruction: paddh $t7, $t7, $v1 */);
        M2C_ERROR(/* unknown instruction: paddh $v0, $t2, $t9 */);
        M2C_ERROR(/* unknown instruction: paddh $v1, $t7, $t9 */);
        *(s128 *)((u8 *)var_t6 + 0) = (s128) M2C_ERROR(/* unknown instruction: psrlh $v0, $v0, 0x1 */);
        *(s128 *)((u8 *)var_t6 + 0x10) = (s128) M2C_ERROR(/* unknown instruction: psrlh $v1, $v1, 0x1 */);
        var_t6 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
        if (var_a3 > 0) {
            goto loop_1;
        }
        var_a3 = *(s32 *)((u8 *)arg0 + 0xC);
        var_t3 = 0;
    } while (var_t3 & var_a3);
}
