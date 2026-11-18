/* Draft (not built): func_00186C58 at 0x00186C58, size 0xB0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00186C58.s */

s32 func_001868E0(s32);                         /* extern */
s32 func_00186DB8();                            /* extern */
s32 func_00186DD8(void *);                          /* extern */
s32 func_0018DA30(s32, s32, void **, s32);  /* extern */

void func_00186C58(u8 *arg0) {
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s3;
    u8 **temp_s1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x294;
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x40);
    func_00186DB8();
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x14);
    temp_s1 = *(u8 ***)((u8 *)temp_s0 + 0xC);
    temp_s0_2 = *(s32 *)((u8 *)temp_s0 + 0x10);
    if (func_00186DD8(temp_s0) != 1) {
        return;
    }
    if (temp_s2 != 0) {
        func_001868E0(temp_s2);
    }
    (*(s32 (**)(u8 **))((u8 *)(*temp_s1) + 0x14))(temp_s1);
    func_0018DA30(temp_s3, temp_s0_2 + 0xC0, temp_s1, 0);
}
