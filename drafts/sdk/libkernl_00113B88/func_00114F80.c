/* Draft (not built): func_00114F80 at 0x00114F80, size 0x190, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00114F80.c:49: too few arguments to function `func_00114C10'
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114F80.s */

s32 func_00114C10(s32, s64, s32 *, s32 *); /* extern */
s32 func_00114C20(s64, s32, s32 *, s32 *); /* extern */
extern s32 D_003EDCC8;

void func_00114F80(s32 *arg0, s64 arg1) {
    s32 *var_a2;
    s32 temp_a1;
    s32 temp_s2;
    s32 var_s1;
    s64 var_a1;
    u64 temp_v0;
    u64 temp_v0_2;
    u64 var_s0;

    var_a1 = arg1;
    if (*(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) < 0) {
        temp_s2 = *(s32 *)0x10001010;
        if (*(u8 **)((u8 *)(&D_003EDCC8) + 0x18) != NULL) {
            var_a2 = *(s32 **)((u8 *)(*(u8 **)((u8 *)(&D_003EDCC8) + 0x18)) + 0);
            var_s0 = (*(s64 *)((u8 *)(*(u8 **)((u8 *)(&D_003EDCC8) + 0x18)) + 0x20) + *(s64 *)((u8 *)(*(u8 **)((u8 *)(&D_003EDCC8) + 0x18)) + 0x10)) - *(s64 *)((u8 *)(*(u8 **)((u8 *)(&D_003EDCC8) + 0x18)) + 0x18);
            if ((var_a2 != NULL) && (var_a1 = *(s64 *)((u8 *)var_a2 + 0x18), temp_v0 = (*(s64 *)((u8 *)var_a2 + 0x20) + *(s64 *)((u8 *)var_a2 + 0x10)) - var_a1, var_s1 = temp_s2 & 3, ((temp_v0 < (u32) (var_s0 + 0x7333)) != 0))) {
                var_s0 = temp_v0;
loop_9:
                var_a2 = *var_a2;
                if (var_a2 != NULL) {
                    var_a1 = *(s64 *)((u8 *)var_a2 + 0x18);
                    temp_v0_2 = (*(s64 *)((u8 *)var_a2 + 0x20) + *(s64 *)((u8 *)var_a2 + 0x10)) - var_a1;
                    if (temp_v0_2 < (u32) (var_s0 + 0x7333)) {
                        var_s0 = temp_v0_2;
                        goto loop_9;
                    }
                }
            } else {
                var_s1 = temp_s2 & 3;
            }
            if ((var_s0 - arg0) < 0x7333) {
                temp_a1 = var_s1 * 4;
                func_00114C20(*(s32 *)0x10001000 + ((s64) ((0x7333U >> temp_a1) << 0x20) >> 0x20), temp_a1, var_a2, arg0);
                func_00114C10(temp_s2 & 0xFFFFF7FF);
                return;
            }
            func_00114C10(temp_s2 & 0xFFFFF7FF, var_a1, var_a2, arg0);
            func_00114C20((s64) ((var_s0 >> (var_s1 * 4)) << 0x20) >> 0x20);
            return;
        }
        func_00114C20(0, (s32) *(u8 **)((u8 *)(&D_003EDCC8) + 0x18), arg0);
        func_00114C10(temp_s2 & 0xFFFFF7FF);
    }
}
