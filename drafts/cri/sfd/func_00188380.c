/* Draft (not built): func_00188380 at 0x00188380, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00188380.s */

extern s32 D_0048CFD0;

void func_00188380(u8 *arg0) {
    *(s32 *)((u8 *)(&D_0048CFD0) + 0) = (s32) *(s32 *)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)(&D_0048CFD0) + 8) = (s32) ((*(s32 *)((u8 *)arg0 + 8) + 0x1F) & ~0x1F);
    *(s32 *)((u8 *)(&D_0048CFD0) + 4) = (s32) *(s32 *)((u8 *)arg0 + 4);
    *(s32 *)((u8 *)(&D_0048CFD0) + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)(&D_0048CFD0) + 0x18) = (s32) ((*(s32 *)((u8 *)arg0 + 0x18) + 0x1F) & ~0x1F);
    *(s32 *)((u8 *)(&D_0048CFD0) + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)(&D_0048CFD0) + 0x14) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
}
