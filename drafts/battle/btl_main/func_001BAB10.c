/* Draft (not built): func_001BAB10 at 0x001BAB10, size 0x1C4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D0, original 0x1C4
 * Original: asm/nonmatchings/battle/btl_main/func_001BAB10.s */

// src/battle/btl_main.c func_001BAB10 size diff=67/116
void func_001BAB10(u8 *arg0) {
    s16 temp_v0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x11;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    temp_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    switch (temp_v0) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
        break;
    case 4:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
        break;
    case 5:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
        break;
    case 6:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
        break;
    case 7:
    case 8:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
        break;
    case 9:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
        break;
    case 11:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
        break;
    default:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) ? 0x8D : 0x83);
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFA) = 1;
    if ((*(s16 *)((u8 *)arg0 + 0xCAE) == 0x14) && (*(s8 *)((u8 *)arg0 + 0x183E) != 0)) {
        *(s8 *)((u8 *)arg0 + 0x1FFA) = -1;
    }
    *(s32 *)((u8 *)arg0 + 0xD4) = 0;
    if (*(s8 *)((u8 *)arg0 + 0x2013) == 1) {
        *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    }
    func_001A8770(2, NULL);
}
