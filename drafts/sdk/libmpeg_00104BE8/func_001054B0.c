/* Draft (not built): func_001054B0 at 0x001054B0, size 0xDC, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ompile error: d_001054B0.c:43: parse error before `M2C_ERROR'
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_001054B0.s */

void func_001054B0(u8 *arg0) {
    s32 var_a3;
    s32 var_t3;
    u8 *var_t6;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_t6 = *(u8 **)((u8 *)arg0 + 0);
    var_a3 = *(s32 *)((u8 *)arg0 + 8);
    M2C_ERROR(/* unknown instruction: pnor $t9, $zero, $zero */);
    M2C_ERROR(/* unknown instruction: psrlh $t9, $t9, 0xf */);
    M2C_ERROR(/* unknown instruction: mtsab $t5, 0x0 */);
    M2C_ERROR(/* unknown instruction: qfsrv $t2, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlb $t0, $zero, $t2 */);
    var_t3 = -1;
    M2C_ERROR(/* unknown instruction: pextub $t1, $zero, $t2 */);
    if (var_a3 == 0) {
        goto block_2;
    }
loop_1:
    M2C_ERROR(/* unknown instruction: qfsrv $v0, $t7, $t2 */);
    M2C_ERROR(/* unknown instruction: pextlb $t2, $zero, $v0 */);
    var_a3 -= 1;
    M2C_ERROR(/* unknown instruction: pextub $t7, $zero, $v0 */);
    M2C_ERROR(/* unknown instruction: paddh $v0, $t0, $t2 */);
    M2C_ERROR(/* unknown instruction: paddh $v1, $t1, $t7 */);
    M2C_ERROR(/* unknown instruction: por $t0, $t2, $zero */);
    M2C_ERROR(/* unknown instruction: por $t1, $t7, $zero */);
    M2C_ERROR(/* unknown instruction: paddh $v0, $v0, $t9 */);
    M2C_ERROR(/* unknown instruction: paddh $v1, $v1, $t9 */);
    M2C_ERROR(/* unknown instruction: psrlh $v0, $v0, 0x1 */);
    M2C_ERROR(/* unknown instruction: psrlh $v1, $v1, 0x1 */);
    M2C_ERROR(/* unknown instruction: paddh $v0, $v0, $t2 */);
    M2C_ERROR(/* unknown instruction: paddh $v1, $v1, $t7 */);
    M2C_ERROR(/* unknown instruction: paddh $t2, $v0, $t9 */);
    M2C_ERROR(/* unknown instruction: pcgth $t2, $v1, $zero */);
    M2C_ERROR(/* unknown instruction: psrlh $t2, $t2, 0xf */);
    M2C_ERROR(/* unknown instruction: paddh $t2, $v1, $t2 */);
    *(s128 *)((u8 *)var_t6 + 0) = (s128) M2C_ERROR(/* unknown instruction: psrlh $v0, $t2, 0x1 */);
    *(s128 *)((u8 *)var_t6 + 0x10) = (s128) M2C_ERROR(/* unknown instruction: psrlh $v1, $t2, 0x1 */);
    var_t6 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
    if (var_a3 > 0) {
        goto loop_1;
    }
block_2:
    var_a3 = *(s32 *)((u8 *)arg0 + 0xC);
    var_t3 = 0;
    if (var_t3 & var_a3) {
        goto loop_1;
    }
    return;
}
