/* Draft (not built): func_00105260 at 0x00105260, size 0xFC, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00105260.c:55: parse error before `)'
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00105260.s */

void func_00105260(u8 *arg0) {
    s128 *var_t6;
    s32 var_a3;
    s32 var_t3;
    s32 var_t3_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_t6 = *(s128 **)((u8 *)arg0 + 0);
    M2C_ERROR(/* unknown instruction: pnor $t9, $zero, $zero */);
    M2C_ERROR(/* unknown instruction: psrlh $t9, $t9, 0xf */);
    M2C_ERROR(/* unknown instruction: psllh $t9, $t9, 0x1 */);
    var_t3 = 1;
loop_1:
    var_a3 = *(s32 *)((u8 *)arg0 + 8);
    M2C_ERROR(/* unknown instruction: pcpyld $t0, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: mtsab $t5, 0x0 */);
    M2C_ERROR(/* unknown instruction: qfsrv $t0, $t0, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlb $t1, $zero, $t0 */);
    var_t3_2 = var_t3 | 0x8000;
    M2C_ERROR(/* unknown instruction: mtsab $t8, 0x0 */);
    M2C_ERROR(/* unknown instruction: qfsrv $t2, $zero, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlb $t0, $zero, $t2 */);
    M2C_ERROR(/* unknown instruction: paddh $t7, $t1, $t0 */);
    if (var_a3 == 0) {
        goto block_3;
    }
loop_2:
    M2C_ERROR(/* unknown instruction: pcpyld $t0, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: mtsab $t5, 0x0 */);
    M2C_ERROR(/* unknown instruction: qfsrv $t0, $t0, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlb $t1, $zero, $t0 */);
    var_a3 -= 1;
    M2C_ERROR(/* unknown instruction: mtsab $t8, 0x0 */);
    M2C_ERROR(/* unknown instruction: qfsrv $t2, $zero, $t0 */);
    M2C_ERROR(/* unknown instruction: pextlb $t0, $zero, $t2 */);
    M2C_ERROR(/* unknown instruction: paddh $t2, $t1, $t0 */);
    M2C_ERROR(/* unknown instruction: paddh $t1, $t2, $t7 */);
    M2C_ERROR(/* unknown instruction: por $t7, $t2, $zero */);
    M2C_ERROR(/* unknown instruction: paddh $t2, $t1, $t9 */);
    *var_t6 = M2C_ERROR(/* unknown instruction: psrlh $t2, $t2, 0x2 */);
    var_t6 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
    if (var_a3 > 0) {
        goto loop_2;
    }
block_3:
    var_a3 = *(s32 *)((u8 *)arg0 + 0xC);
    var_t3_2 &= 0x7FFF;
    if (M2C_ERROR(/* unknown instruction: psrah $t2, $t3, 0xf */) & var_a3) {
        goto loop_2;
    }
    var_t6 = *(s128 **)((u8 *)arg0 + 0) + 0x80;
    var_t3 = var_t3_2 & 0xFFFE;
    if (var_t3_2 & 1) {
        goto loop_1;
    }
    return;
}
