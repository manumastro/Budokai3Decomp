/* Draft (not built): func_00178780 at 0x00178780, size 0xA0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00178780.s */

s32 memset(s32, s32, s32, u32);             /* extern */
extern s32 D_00481490;

void func_00178780(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_s1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v1;
    u32 temp_v0;
    u32 var_a0;

    var_s0 = arg0;
    var_a2 = var_s0 * 8;
    temp_v0 = (var_s0 * 0x700) + 0x40;
    if (arg2 < temp_v0) {
        var_a0 = temp_v0;
        var_v1 = var_a2;
        do {
            var_a0 -= 0x700;
            var_v1 -= 8;
            var_s0 -= 1;
            var_a2 = var_v1;
        } while (arg2 < var_a0);
    }
    temp_s1 = (arg1 + 0x3F) & ~0x3F;
    memset(temp_s1, 0, (var_a2 - var_s0) << 8, arg2);
    *(s32 *)((u8 *)(&D_00481490) + 0x44) = temp_s1;
    *(s32 *)((u8 *)(&D_00481490) + 0x40) = var_s0;
}
