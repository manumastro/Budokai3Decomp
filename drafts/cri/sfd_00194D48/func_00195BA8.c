/* Draft (not built): func_00195BA8 at 0x00195BA8, size 0x80, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195BA8.s */

s32 func_001950E8(void *);                      /* extern */
s32 func_00195B08(void *, s32 *, s32);  /* extern */
extern s32 D_00467558;

s32 func_00195BA8(u8 *arg2) {
    s32 temp_v0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_v0 = *(s32 *)((u8 *)arg2 + 0x1C70);
    temp_s0 = temp_v0 + 0x1038;
    temp_s1 = temp_v0 + 0xFC8;
    func_001950E8(temp_s0);
    if ((*(s32 *)((u8 *)temp_s1 + 0x14) != 0) && (*(s32 *)((u8 *)temp_s0 + 0x10) == 0)) {
        *(s32 *)((u8 *)temp_s1 + 0x18) = 1;
        func_00195B08(temp_s0, &D_00467558, 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) *(s32 *)((u8 *)temp_s0 + 0x18);
        func_001950E8(temp_s0);
    }
    return 1;
}
