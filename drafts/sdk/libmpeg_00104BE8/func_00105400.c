/* Draft (not built): func_00105400 at 0x00105400, size 0xAC, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00105400.c:36: parse error before `)'
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00105400.s */

void func_00105400(u8 *arg0) {
    s128 *var_t6;
    s32 var_a3;
    s32 var_t3;
    s32 var_t4;

    var_t6 = *(s128 **)((u8 *)arg0 + 0);
    var_t4 = -1;
    M2C_ERROR(/* unknown instruction: mtsab $t5, 0x0 */);
    do {
        var_a3 = *(s32 *)((u8 *)arg0 + 8);
        var_t3 = -1;
loop_2:
        M2C_ERROR(/* unknown instruction: pcpyld $t0, $t1, $t0 */);
        M2C_ERROR(/* unknown instruction: qfsrv $t0, $t0, $t0 */);
        M2C_ERROR(/* unknown instruction: pextlb $t1, $zero, $t0 */);
        var_a3 -= 1;
        M2C_ERROR(/* unknown instruction: paddh $t2, $t1, $t0 */);
        M2C_ERROR(/* unknown instruction: pcgth $t1, $t2, $zero */);
        M2C_ERROR(/* unknown instruction: psrlh $t1, $t1, 0xf */);
        M2C_ERROR(/* unknown instruction: paddh $t2, $t2, $t1 */);
        *var_t6 = M2C_ERROR(/* unknown instruction: psrlh $t2, $t2, 0x1 */);
        var_t6 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
        if (var_a3 > 0) {
            goto loop_2;
        }
        var_a3 = *(s32 *)((u8 *)arg0 + 0xC);
        var_t3 = 0;
        if (var_t3 & var_a3) {
            goto loop_2;
        }
        var_t6 = *(s128 **)((u8 *)arg0 + 0) + 0x80;
        var_t4 = 0;
    } while (var_t4 != 0);
}
