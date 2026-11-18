/* Draft (not built): func_0016F828 at 0x0016F828, size 0x110, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016F828.c:25: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sj/func_0016F828.s */

s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */
extern s32 D_00422798;

void func_0016F828(s32 *arg1) {
    s32 *var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 **temp_a0;
    u8 *var_s0;

    var_s2 = 0;
    var_s3 = 0;
    func_0016DAD8();
    var_s1 = &D_00422798;
loop_1:
    if (*(s8 *)((u8 *)var_s1 + 0) == 1) {
        var_s0 = (var_s2 * 0x10) + (arg1 + 0x10);
loop_5:
        if (var_s2 != 0x80) {
            temp_a0 = *(u8 ***)((u8 *)var_s1 + 4);
            (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_a0) + 0x18))(temp_a0, *(s32 *)((u8 *)var_s1 + 0xC), 0x7FFFFFFF, sp);
            if (sp4 != 0) {
                *(s8 *)((u8 *)var_s0 + 0) = 0;
                var_s2 += 1;
                *(u8 *)((u8 *)var_s0 + 1) = (u8) *(s32 *)((u8 *)var_s1 + 0xC);
                *(s32 *)((u8 *)var_s0 + 4) = (s32) *(s32 *)((u8 *)var_s1 + 0x10);
                M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($sp) */);
                M2C_ERROR(/* unknown instruction: ldr $v1, ($sp) */);
                M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s0) */);
                M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s0) */);
                *(u16 *)((u8 *)var_s0 + 2) = (u16) *(u16 *)((u8 *)var_s1 + 2);
                var_s0 += 0x10;
                goto loop_5;
            }
            goto block_9;
        }
    } else {
block_9:
        var_s3 += 1;
        var_s1 += 0x14;
        if (var_s3 < 0x20) {
            goto loop_1;
        }
    }
    func_0016DAF0();
    *arg1 = var_s2;
}
