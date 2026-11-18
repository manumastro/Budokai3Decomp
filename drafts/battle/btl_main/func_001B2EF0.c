/* Draft (not built): func_001B2EF0 at 0x001B2EF0, size 0x1E4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x1E4
 * Original: asm/nonmatchings/battle/btl_main/func_001B2EF0.s */

// src/battle/btl_main.c func_001B2EF0 size diff=45/125
void func_001B2EF0(u8 *arg0) {
    s16 temp_v0;
    s16 var_v0;
    s16 var_v0_2;
    u8 *temp_v1;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x2E;
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
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x17A0);
    if (*(s16 *)((u8 *)temp_v1 + 0x1A) > 0) {
        var_v0 = *(s16 *)((u8 *)(((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) * 2) + temp_v1) + 0x18);
        goto block_32;
    }
    *(s32 *)((u8 *)arg0 + 0xB78) = (s32) *(s16 *)((u8 *)temp_v1 + 0x18);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        var_v0 = *(s32 *)((u8 *)arg0 + 0xB78) + 0x100;
block_32:
        *(s32 *)((u8 *)arg0 + 0xB78) = (s32) var_v0;
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) *(s32 *)((u8 *)arg0 + 0xB78);
    var_v0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 0x14) - 1;
    if (var_v0_2 > 0) {

    } else {
        var_v0_2 = 0;
    }
    *(s16 *)((u8 *)arg0 + 0xCB4) = var_v0_2;
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s32 *)((u8 *)arg0 + 0x1850) = 0;
}
