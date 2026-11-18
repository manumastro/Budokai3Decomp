/* Draft (not built): func_001849F0 at 0x001849F0, size 0x74, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001849F0.s */

s32 func_00184A68();                                /* extern */
s32 func_00184AD8(s32);                             /* extern */
s32 func_00184B48(s32);                             /* extern */

void func_001849F0(s32 arg0, u8 *arg1) {
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = arg1 + 0x60;
    *(s32 *)((u8 *)arg1 + 0x60) = func_00184A68();
    temp_s0 = arg0 + 0x8C;
    *(s32 *)((u8 *)temp_s1 + 4) = func_00184AD8(arg0);
    *(s32 *)((u8 *)temp_s1 + 8) = (s32) *(s32 *)((u8 *)temp_s0 + 8);
    *(s32 *)((u8 *)temp_s1 + 0xC) = (s32) *(s32 *)((u8 *)temp_s0 + 0xC);
    *(s32 *)((u8 *)temp_s1 + 0x10) = (s32) *(s32 *)((u8 *)temp_s0 + 0x10);
    *(s32 *)((u8 *)temp_s1 + 0x14) = func_00184B48(*(s32 *)((u8 *)temp_s0 + 0x14));
    *(s32 *)((u8 *)temp_s1 + 0x18) = func_00184B48(*(s32 *)((u8 *)temp_s0 + 0x18));
}
