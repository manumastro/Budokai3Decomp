/* Draft (not built): func_0016F938 at 0x0016F938, size 0x90, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sj/func_0016F938.s */

s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */

void func_0016F938(s32 *arg1) {
    s32 *var_s0;
    s32 var_s1;
    u8 **temp_a0;

    var_s0 = arg1;
    if (var_s0 == NULL) {
loop_1:
        goto loop_1;
    }
    var_s1 = *var_s0;
    func_0016DAD8();
    if (var_s1 > 0) {
        do {
            if (*(s8 *)((u8 *)var_s0 + 0x10) == 0) {
                temp_a0 = *(u8 ***)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x14)) + 4);
                (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_a0) + 0x20))(temp_a0, 1, var_s0 + 0x18);
            }
            var_s1 -= 1;
            var_s0 += 0x10;
        } while (var_s1 != 0);
    }
    func_0016DAF0();
}
