/* Draft (not built): func_00104DE0 at 0x00104DE0, size 0x94, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_00104DE0.c:31: parse error before `)'
 * Original: asm/sdk/libmpeg.s */

void func_00104DE0(u8 *arg0) {
    s128 *var_a1;
    s32 var_t7;
    s32 var_t8;
    s32 var_t9;

    var_a1 = *(s128 **)((u8 *)arg0 + 0);
    M2C_ERROR(/* unknown instruction: mtsab $t4, 0x0 */);
    var_t8 = -1;
    do {
        var_t7 = *(s32 *)((u8 *)arg0 + 8);
        var_t9 = -1;
loop_2:
        M2C_ERROR(/* unknown instruction: pcpyld $t0, $t1, $t0 */);
        M2C_ERROR(/* unknown instruction: qfsrv $t1, $t0, $t0 */);
        *var_a1 = M2C_ERROR(/* unknown instruction: pextlb $t0, $zero, $t1 */);
        var_t7 -= 1;
        var_a1 += *(s32 *)((u8 *)arg0 + 0x10) * 2;
        if (var_t7 > 0) {
            goto loop_2;
        }
        var_t7 = *(s32 *)((u8 *)arg0 + 0xC);
        var_t9 = 0;
        if (var_t9 & var_t7) {
            goto loop_2;
        }
        var_a1 = *(s128 **)((u8 *)arg0 + 0) + 0x80;
        var_t8 = 0;
    } while (var_t8 != 0);
}
