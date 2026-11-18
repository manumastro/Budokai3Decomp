/* Draft (not built): func_00116860 at 0x00116860, size 0x114, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00116860.c:31: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116860.s */

s32 func_0010AB58(s32 *, void *, s32, s32);     /* extern */
s32 scePrintf(s32 *);                       /* extern */
s32 sceSifDmaStat(s32, void *);                     /* extern */
s32 sceSifSetDma(void *, s32, s32 *, s32, s32, s32); /* extern */
extern s32 D_003EDD04;
extern s32 D_0045DA70;
extern s32 D_00478990;

s32 func_00116860(s32 arg0, s32 arg1) {
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    u8 *temp_a1;

    temp_a1 = &D_00478990 + ((arg1 * 0x1C) + (arg0 * 0x70));
    temp_a0 = *(s32 *)((u8 *)temp_a1 + 0xC);
    temp_s1 = *(s32 **)((u8 *)temp_a1 + 4);
    if ((temp_a0 == 0) || (sceSifDmaStat(temp_a0, temp_a1) < 0)) {
        temp_a3 = arg1 * 0x1C;
        temp_a2 = *temp_s1 + 1;
        temp_s2 = temp_a3 + (arg0 * 0x70);
        *temp_s1 = temp_a2;
        temp_s0 = *(s32 *)((u8 *)(&D_00478990 + temp_s2) + 8) + ((temp_a2 & 1) << 5);
        func_0010AB58(temp_s1, temp_s1 + 0x1F, temp_a2, temp_a3);
        temp_v0 = sceSifSetDma(sp, 1, temp_s1, temp_s0, 0x20, 0);
        if (temp_v0 == 0) {
            goto block_4;
        }
        *(s32 *)((u8 *)(&D_00478990 + temp_s2) + 0xC) = temp_v0;
        return 1;
    }
block_4:
    if (D_003EDD04 != 0) {
        scePrintf(&D_0045DA70);
    }
    return 0;
}
