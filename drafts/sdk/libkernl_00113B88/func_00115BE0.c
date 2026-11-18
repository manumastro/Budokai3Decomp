/* Draft (not built): func_00115BE0 at 0x00115BE0, size 0xF4, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00115BE0.c:25: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115BE0.s */

s32 func_00114F80(s32);                         /* extern */
s32 func_00115110(s32);                         /* extern */
s32 func_00115198(s32);                         /* extern */
s32 func_00115478();                                /* extern */
extern s32 D_003EDCC8;

s32 func_00115BE0(u32 arg0, s64 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    temp_s0 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == *(s32 *)((u8 *)temp_s0 + 8)) {
            if (*(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) != arg0) {
                if (*(s32 *)((u8 *)temp_s0 + 0xC) & 2) {
                    func_00115198(temp_s0);
                }
                *(s32 *)((u8 *)temp_s0 + 0x28) = arg2;
                if (arg2 == 0) {
                    *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) & 0xFFFFFFFD);
                } else {
                    *(s64 *)((u8 *)temp_s0 + 0x20) = arg1;
                    *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) | 2);
                    *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) saved_reg_gp;
                    *(s32 *)((u8 *)temp_s0 + 0x30) = arg3;
                    if (*(s32 *)((u8 *)temp_s0 + 0xC) & 1) {
                        func_00115110(temp_s0);
                    }
                }
                func_00114F80(func_00115478());
                return 0;
            }
            return 0x80000010;
        }
        goto block_4;
    }
block_4:
    return 0x80008002;
}
