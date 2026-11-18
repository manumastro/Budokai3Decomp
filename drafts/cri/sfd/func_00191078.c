/* Draft (not built): func_00191078 at 0x00191078, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00191078.c:27: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_00191078.s */

s32 func_0017EE78(s32, s32, s32);                   /* extern */
s32 func_0018BA20(void *, s32 *);                   /* extern */
extern s32 D_004671E8;

s32 func_00191078(u8 *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 *temp_s1;

    temp_s1 = arg0 + 0xCC0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0xC) != &D_004671E8) {
        sp0 = 0;
        sp4 = 0xAC44;
        goto block_6;
    }
    if (func_0018BA20(sp, &sp4) == 0) {
        return -1;
    }
block_6:
    temp_v0_2 = *(s32 *)((u8 *)temp_s1 + 0x1E4) + sp0;
    *(s32 *)((u8 *)temp_s1 + 0x1E4) = temp_v0_2;
    temp_v0 = func_0017EE78(temp_v0_2, *(s32 *)((u8 *)arg0 + 0xD24), sp4) - *(s32 *)((u8 *)temp_s1 + 0x158);
    return (temp_v0 < 0) int 0 : temp_v0;
}
