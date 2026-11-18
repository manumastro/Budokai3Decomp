/* Draft (not built): func_001B5320 at 0x001B5320, size 0x168, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'float' @ 2576: func_001E4820(arg0, 0, var_f12);
 * Original: asm/nonmatchings/battle/btl_main/func_001B5320.s */

// src/battle/btl_main.c func_001B5320 cerr diff=-1/0
void func_001B5320(u8 *arg0) {
    s32 var_f12;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x25;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) ? 0x2F : 0x29);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
        var_f12 = 0xBF800000;
    } else {
        var_f12 = 0x3F800000;
    }
    func_001E4820(arg0, 0, var_f12);
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    func_001DD680(arg0);
    if ((*(s16 *)((u8 *)arg0 + 0xCAE) != 0x12) || (*(s8 *)((u8 *)arg0 + 0x1FFA) != 1)) {
        func_001D9900(arg0, 0x12, 1);
    }
}
