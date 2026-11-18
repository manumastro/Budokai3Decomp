/* Draft (not built): func_001151D0 at 0x001151D0, size 0x2A4, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 136 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001151D0.s */

s32 func_00114C10();
s32 func_00114F80();
s32 func_00115110();
void *func_00115198();
extern s32 D_003EDCC8;

s32 func_001151D0(s32 arg2) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a2;
    u32 temp_a1_2;
    u32 temp_s3;
    u32 temp_v0;
    u64 temp_s1_2;
    u8 *temp_s3_2;
    u8 *var_s0;

    if (*(s32 *)0x10001010 & 0x400) {
        var_s0 = *(u8 **)((u8 *)(&D_003EDCC8) + 0x18);
        if (var_s0 != NULL) {
loop_3:
            var_a2 = *(s32 *)0x10001000;
            temp_s1 = *(u8 *)0x10001010;
            temp_a1 = temp_s1 & 0x800;
            temp_s3 = (*(s64 *)((u8 *)var_s0 + 0x20) + *(s64 *)((u8 *)var_s0 + 0x10)) - *(s64 *)((u8 *)var_s0 + 0x18);
            if (temp_a1 != 0) {
                *(s64 *)((u8 *)(&D_003EDCC8) + 0) = (s64) (*(s64 *)((u8 *)(&D_003EDCC8) + 0) + 1);
                func_00114C10(temp_s1 & 0xFFFFFBFF, temp_a1, var_a2);
                var_a2 = *(u8 *)0x10001000;
            }
            temp_s1_2 = ((*(s64 *)((u8 *)(&D_003EDCC8) + 0) << 0x10) | ((u64) ((s64) var_a2 << 0x20) >> 0x20)) << ((temp_s1 & 3) * 4);
            if (temp_s1_2 >= temp_s3) {
                temp_s3_2 = func_00115198(var_s0);
                temp_a3 = (s32) var_s0 * 0x10;
                *(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) = (s32) (temp_a3 | *(s32 *)((u8 *)var_s0 + 8));
                temp_v0 = (*(u32 (**)(s32, s64, s32, s32))((u8 *)var_s0 + 0x28))(temp_a3 | *(s32 *)((u8 *)var_s0 + 8), *(s64 *)((u8 *)var_s0 + 0x20), (temp_s1_2 + *(s64 *)((u8 *)var_s0 + 0x18)) - *(s64 *)((u8 *)var_s0 + 0x10), *(s32 *)((u8 *)var_s0 + 0x30));
                if (temp_v0 == 0) {
                    *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) & 0xFFFFFFFD);
                } else if (temp_v0 == -1U) {
                    *(s32 *)((u8 *)var_s0 + 8) = 0;
                    *(s32 *)((u8 *)var_s0 + 0xC) = 0;
                    *(u8 **)((u8 *)var_s0 + 0) = (u8 *) *(u8 **)((u8 *)(&D_003EDCC8) + 0x14);
                    *(u8 **)((u8 *)(&D_003EDCC8) + 0x14) = var_s0;
                    *(s32 *)((u8 *)(&D_003EDCC8) + 0x10) = (s32) (*(s32 *)((u8 *)(&D_003EDCC8) + 0x10) - 1);
                } else {
                    temp_a1_2 = (temp_v0 <= 0x3998U) ? 0x3999U : temp_v0;
                    *(s64 *)((u8 *)var_s0 + 0x20) = (s64) (*(s64 *)((u8 *)var_s0 + 0x20) + temp_a1_2);
                    func_00115110(var_s0, temp_a1_2);
                }
                var_s0 = temp_s3_2;
                if (var_s0 == NULL) {

                } else {
                    goto loop_3;
                }
            }
        }
    }
    *(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) = -1;
    temp_s0 = *(u8 *)0x10001010;
    if (temp_s0 & 0x800) {
        *(s64 *)((u8 *)(&D_003EDCC8) + 0) = (s64) (*(s64 *)((u8 *)(&D_003EDCC8) + 0) + 1);
        func_00114C10(temp_s0 & 0xFFFFFBFF);
    }
    func_00114F80(((*(s64 *)((u8 *)(&D_003EDCC8) + 0) << 0x10) | ((u64) ((s64) *(u8 *)0x10001000 << 0x20) >> 0x20)) << ((temp_s0 & 3) * 4));
    temp_v1 = *(u8 *)0x10001010;
    if (temp_v1 & 0x800) {
        *(s64 *)((u8 *)(&D_003EDCC8) + 0) = (s64) (*(s64 *)((u8 *)(&D_003EDCC8) + 0) + 1);
        func_00114C10(temp_v1 & 0xFFFFFBFF);
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: ei */);
    return 0;
}
