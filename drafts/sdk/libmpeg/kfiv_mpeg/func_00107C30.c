/* Draft (not built): func_00107C30 at 0x00107C30, size 0x44, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107C30.s */

s32 func_00107348(s32, void *);                 /* extern */

void func_00107C30(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    u8 *temp_a3;

    temp_a3 = *(u8 **)((u8 *)arg0 + 0x40);
    temp_a1 = (arg1 & 0x0FFFFFFF) | 0x20000000;
    *(s32 *)((u8 *)temp_a3 + 0xF8) = arg2;
    *(s32 *)((u8 *)temp_a3 + 0xEC) = temp_a1;
    *(s32 *)((u8 *)temp_a3 + 0xF0) = 0;
    *(s32 *)((u8 *)temp_a3 + 0xC4) = 0;
    *(s32 *)((u8 *)temp_a3 + 0xF4) = 0;
    func_00107348(temp_a1, temp_a3);
}
