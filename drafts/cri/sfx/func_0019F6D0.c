/* Draft (not built): func_0019F6D0 at 0x0019F6D0, size 0x40, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F6D0.s */

extern s32 D_00426C28;

void func_0019F6D0(s32 arg2) {
    *(s32 *)((u8 *)(&D_00426C28) + 8) = (s32) (*(s32 *)((u8 *)(&D_00426C28) + 8) + 1);
    if (*(s32 (**)(s32, s32, s32))((u8 *)(&D_00426C28) + 0) != NULL) {
        (*(s32 (**)(s32, s32, s32))((u8 *)(&D_00426C28) + 0))(*(s32 *)((u8 *)(&D_00426C28) + 4), arg2, *(s32 (**)(s32, s32, s32))((u8 *)(&D_00426C28) + 0));
    }
}
