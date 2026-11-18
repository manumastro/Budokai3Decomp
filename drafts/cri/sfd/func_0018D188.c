/* Draft (not built): func_0018D188 at 0x0018D188, size 0x198, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018D188.c:30: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018D188.s */

s32 func_0018D358(s32 *, s32, s32 *);       /* extern */
s32 func_0019D950(s32 *, s32, void *);          /* extern */
s32 func_0019E528(s32 *, s32, s32, s32);        /* extern */
extern s32 func_0019E450;
extern s32 func_0019E4B8;
extern s32 func_0019E5D0;
extern s32 func_0019E640;
extern s32 func_0019E6A8;
extern s32 func_0019E710;
extern s32 func_0019E780;
extern s32 func_0019E7F0;
extern s32 func_0019E858;
extern s32 func_0019E8D0;

void func_0018D188(s32 *arg0, s32 arg1, u8 *arg2) {
    s32 sp0;
    s32 temp_s5;
    s32 temp_v1;

    temp_s5 = arg1 & 0xFF;
    *(s32 *)((u8 *)arg2 + 0) = func_0018D358(&func_0019E450);
    *(s32 *)((u8 *)arg2 + 4) = func_0018D358(arg0, arg1, &func_0019E4B8);
    if (func_0019E528(arg0, temp_s5, arg2 + 8, arg2 + 0xC) == 0) {
        *(s32 *)((u8 *)arg2 + 8) = -1;
        *(s32 *)((u8 *)arg2 + 0xC) = -1;
    }
    *(s32 *)((u8 *)arg2 + 0x10) = func_0018D358(arg0, arg1, &func_0019E5D0);
    temp_v1 = (func_0019D950(arg0, temp_s5, sp) == 0) int 0 : sp0;
    sp0 = temp_v1;
    *(s32 *)((u8 *)arg2 + 0x14) = (s32) (temp_v1 != 0);
    if (temp_v1 != 0) {
        *(s32 *)((u8 *)arg2 + 0x18) = func_0018D358(arg0, arg1, &func_0019E640);
        *(s32 *)((u8 *)arg2 + 0x1C) = func_0018D358(arg0, arg1, &func_0019E6A8);
        *(s32 *)((u8 *)arg2 + 0x20) = func_0018D358(arg0, arg1, &func_0019E710);
        *(s32 *)((u8 *)arg2 + 0x24) = func_0018D358(arg0, arg1, &func_0019E780);
        *(s32 *)((u8 *)arg2 + 0x28) = func_0018D358(arg0, arg1, &func_0019E7F0);
        *(s32 *)((u8 *)arg2 + 0x2C) = func_0018D358(arg0, arg1, &func_0019E858);
        *(s32 *)((u8 *)arg2 + 0x30) = func_0018D358(arg0, arg1, &func_0019E8D0);
    }
}
