/* Draft (not built): func_0017FED0 at 0x0017FED0, size 0xE8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 14 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_0017FED0.s */

s32 func_00182260(void *);                          /* extern */
s32 func_001870E8(s32 *, void *);           /* extern */
s32 func_0018FCC0(s32, s32, s32, s32);          /* extern */
extern s32 D_00465628;
extern s32 D_00465660;

void func_0017FED0(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    u8 *temp_a1;

    temp_a1 = *(u8 **)((u8 *)arg0 + 0x17C);
    if (temp_a1 == NULL) {
        goto block_2;
    }
    goto block_5;
block_2:
    func_001870E8(&D_00465628, temp_a1);
    return;
block_5:
    temp_s3 = *(s32 *)((u8 *)temp_a1 + 8);
    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C) + 4;
    temp_s1 = *(s32 *)((u8 *)temp_a1 + 0);
    if (*(s32 *)((u8 *)temp_a1 + 4) >= (temp_s2 * temp_s3)) {
        goto block_8;
    }
    func_001870E8(&D_00465660, temp_a1);
    return;
block_8:
    if (func_00182260(temp_a1) == 1) {
        goto block_10;
    }
    return;
block_10:
    func_0018FCC0(*(s32 *)((u8 *)arg0 + 0x40), temp_s1, temp_s2, temp_s3);
    return;
}
