/* Draft (not built): func_00104A38 at 0x00104A38, size 0xEC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ompile error: d_00104A38.c:40: parse error before `M2C_ERROR'
 * Original: asm/sdk/libmpeg.s */

void func_00104A38(u8 *arg0) {
    s32 var_v0;
    u8 *var_a0;

    var_a0 = arg0;
    var_v0 = 0x18;
    do {
        var_v0 -= 4;
        M2C_ERROR(/* unknown instruction: paddh $t0, $t0, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t0, $t0, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t0, $t0, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t1, $t1, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t1, $t1, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t1, $t1, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t2, $t2, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t2, $t2, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t2, $t2, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t3, $t3, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t3, $t3, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t3, $t3, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t4, $t4, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t4, $t4, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t4, $t4, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t5, $t5, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t5, $t5, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t5, $t5, $zero */);
        M2C_ERROR(/* unknown instruction: paddh $t6, $t6, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t6, $t6, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t6, $t6, $zero */);
        *(s128 *)((u8 *)var_a0 + 0) = (s128) M2C_ERROR(/* unknown instruction: ppacb $t1, $t1, $t0 */);
        M2C_ERROR(/* unknown instruction: paddh $t7, $t7, $t9 */);
        M2C_ERROR(/* unknown instruction: pminh $t7, $t7, $v1 */);
        M2C_ERROR(/* unknown instruction: pmaxh $t7, $t7, $zero */);
        *(s128 *)((u8 *)var_a0 + 0x10) = (s128) M2C_ERROR(/* unknown instruction: ppacb $t3, $t3, $t2 */);
        *(s128 *)((u8 *)var_a0 + 0x20) = (s128) M2C_ERROR(/* unknown instruction: ppacb $t5, $t5, $t4 */);
        *(s128 *)((u8 *)var_a0 + 0x30) = (s128) M2C_ERROR(/* unknown instruction: ppacb $t7, $t7, $t6 */);
        var_a0 += 0x40;
    } while (var_v0 != 0);
}
