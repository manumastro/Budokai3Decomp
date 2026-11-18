/* Draft (not built): func_0019FA10 at 0x0019FA10, size 0x5C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019FA10.s */

s32 func_0019FA70(s32, s32);                    /* extern */

void func_0019FA10(s32 arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = ((s32) ((arg1 >> 0x1F) + arg1) >> 1) * 2;
    temp_s1 = temp_v0 >> 1;
    func_0019FA70(arg0 + 4, temp_v0);
    func_0019FA70(arg0 + 0x14, temp_s1);
    func_0019FA70(arg0 + 0x24, temp_s1);
}
