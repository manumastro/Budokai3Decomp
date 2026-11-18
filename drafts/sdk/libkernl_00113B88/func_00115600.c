/* Draft (not built): func_00115600 at 0x00115600, size 0xA0, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 27 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115600.s */

s32 func_00115198(s32);                         /* extern */
extern s32 D_003EDCC8;

s32 func_00115600(u32 arg0) {
    s32 temp_s0;

    temp_s0 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == *(s32 *)((u8 *)temp_s0 + 8)) {
            if (*(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) != arg0) {
                if (*(s32 *)((u8 *)temp_s0 + 0xC) & 2) {
                    func_00115198(temp_s0);
                }
                *(s32 *)((u8 *)temp_s0 + 8) = 0;
                *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
                *(s32 *)((u8 *)temp_s0 + 0) = (s32) *(s32 *)((u8 *)(&D_003EDCC8) + 0x14);
                *(s32 *)((u8 *)(&D_003EDCC8) + 0x14) = temp_s0;
                *(s32 *)((u8 *)(&D_003EDCC8) + 0x10) = (s32) (*(s32 *)((u8 *)(&D_003EDCC8) + 0x10) - 1);
                return 0;
            }
            return 0x80000010;
        }
        goto block_4;
    }
block_4:
    return 0x80008002;
}
