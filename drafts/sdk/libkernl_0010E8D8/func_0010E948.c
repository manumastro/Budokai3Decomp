/* Draft (not built): func_0010E948 at 0x0010E948, size 0x7C, segment sdk/libkernl_0010E8D8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_0010E8D8/func_0010E948.s */

s32 SignalSema(s32, s32 *, void *);         /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsIobSemaMK();                          /* extern */
extern s32 D_003EC6C8;
extern s32 D_00474940;

s32 func_0010E948(void) {
    s32 *var_a1;
    s32 temp_a0;
    s32 var_s0;
    u8 *temp_v1;

    var_s0 = 0;
    _sceFsIobSemaMK();
    WaitSema(D_003EC6C8);
    var_a1 = &D_00474940;
    temp_v1 = &D_00474940 + 0x200;
    if ((u32) &D_00474940 >= (u32) temp_v1) {
        goto block_3;
    }
loop_2:
    temp_a0 = *(s32 *)((u8 *)var_a1 + 4);
    var_a1 += 0x10;
    var_s0 = (temp_a0 != 0) ? (var_s0 + 1) : var_s0;
    if ((u32) var_a1 < (u32) temp_v1) {
        goto loop_2;
    }
block_3:
    SignalSema(D_003EC6C8, var_a1, temp_v1);
    return var_s0;
}
