/* Draft (not built): func_0010B038 at 0x0010B038, size 0xEC, segment sdk/libkernl_0010B038 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010B038.c:32: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_0010B038/func_0010B038.s */

s32 ChangeThreadPriority(s32, s32);         /* extern */
s32 CreateSema(s32 *);                          /* extern */
s32 CreateThread(void *, s32 *, s32, s32 *, s32 *, s32, s32 *, s32, s32 *); /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 GetThreadId();                                  /* extern */
s32 func_0010B3A0(s32, s32 *);              /* extern */
extern s32 D_003EC618;
extern s32 D_0045D3B8;
extern s32 D_00470C40;
extern s32 D_00471040;
extern s32 D_00471048;
extern s32 D_00477CF0;
extern s32 topThread;

s32 func_0010B038(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 *sp44;
    s32 temp_v0;
    s32 temp_v0_2;

    if (D_003EC618 <= 0) {
        sp34 = 0xFF;
        sp38 = 0;
        sp44 = &D_0045D3B8;
        temp_v0 = CreateSema(&sp30);
        D_00471040 = temp_v0;
        if (temp_v0 >= 0) {
            temp_v0_2 = CreateThread(sp, &D_00477CF0, 0x400, &topThread, &D_00470C40, 0x400, &D_00477CF0, 0, &D_0045D3B8);
            D_003EC618 = temp_v0_2;
            if (temp_v0_2 < 0) {
                DeleteSema(D_00471040);
                goto block_4;
            }
            *(s32 *)((u8 *)(&D_00471048) + 0) = 0;
            *(s32 *)((u8 *)(&D_00471048) + 4) = 0;
            func_0010B3A0(temp_v0_2, &D_00471048);
            ChangeThreadPriority(GetThreadId(), 1);
            return D_003EC618;
        }
    }
block_4:
    return -1;
}
