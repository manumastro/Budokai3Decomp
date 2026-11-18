/* Draft (not built): func_00180078 at 0x00180078, size 0x15C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00180078.s */

s32 func_00121930(s32, s64);                        /* extern */
s32 func_00121ED8(s32, s32);                        /* extern */
s32 func_00121F28(s32);                             /* extern */
s32 func_00121FE0(s32);                             /* extern */
s32 func_0018F9A0(s32, s32, s32);       /* extern */
s32 func_001996F0(s32, s32, s32);           /* extern */

void func_00180078(u8 *arg0, s32 arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x40);
    func_001996F0(temp_s2, 8, 0);
    func_001996F0(temp_s2, 1, 1);
    func_001996F0(temp_s2, 0, 0);
    func_001996F0(temp_s2, 0x17, 4);
    temp_v0 = func_00121930(func_00121F28(arg2 * arg3 * 0x3E8), 0xFF80 << 0x2E);
    temp_v0_2 = func_00121FE0(temp_v0);
    temp_s1 = (func_00121ED8(func_00121F28(temp_v0_2), temp_v0) > 0) ? (temp_v0_2 - 1) : temp_v0_2;
    func_001996F0(temp_s2, 0x2D, temp_s1);
    func_001996F0(temp_s2, 0x2C, temp_s1);
    func_001996F0(temp_s2, 0x2A, temp_s1);
    func_001996F0(temp_s2, 0xF, 2);
    func_001996F0(temp_s2, 0x33, 0);
    func_001996F0(temp_s2, 0xE, 0);
    func_001996F0(temp_s2, 0x1C, 0);
    func_0018F9A0(temp_s2, 5, 0);
}
