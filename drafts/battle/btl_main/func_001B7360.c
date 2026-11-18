/* Draft (not built): func_001B7360 at 0x00468B20, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 143 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B7360.s */

// src/battle/btl_main.c func_001B7360 diff diff=143/143
s32 func_001E2C50(void *);
s32 func_001E3100(void *, void *, void *, void *);
void func_001B7360(u8 *arg0) {
    s16 temp_v0;
    s8 temp_t6;
    s8 temp_t7;
    s8 temp_t8;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x1B;
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
    func_001ABD30((void *)(arg0 + 0x1360));
    temp_t8 = *(s8 *)((u8 *)arg0 + 0xAD0);
    temp_t7 = *(s8 *)((u8 *)arg0 + 0xACE);
    temp_t6 = *(s8 *)((u8 *)arg0 + 0xACF);
    temp_a3 = arg0 + 0x9E0;
    temp_a2 = arg0 + 0xA10;
    temp_a1 = arg0 + 0xA40;
    *(s16 *)((u8 *)arg0 + 0xAE4) = 0;
    *(s32 *)((u8 *)arg0 + 0xADC) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0xAD4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xAD8) = 0;
    *(s8 *)((u8 *)arg0 + 0xACE) = 0;
    *(s8 *)((u8 *)arg0 + 0xACF) = 0;
    *(s8 *)((u8 *)arg0 + 0xAD0) = 0;
    *(s8 *)((u8 *)arg0 + 0xAC8) = 0;
    *(s32 *)((u8 *)arg0 + 0xAC0) = 0;
    *(u8 **)((u8 *)arg0 + 0xAA0) = (u8 *) (arg0 + 0x920);
    *(u8 **)((u8 *)arg0 + 0xAA4) = (u8 *) (arg0 + 0x950);
    *(u8 **)((u8 *)arg0 + 0xAA8) = (u8 *) (arg0 + 0x980);
    *(u8 **)((u8 *)arg0 + 0xAAC) = (u8 *) (arg0 + 0x9B0);
    *(u8 **)((u8 *)arg0 + 0xAB0) = temp_a3;
    *(u8 **)((u8 *)arg0 + 0xAB4) = temp_a2;
    *(u8 **)((u8 *)arg0 + 0xAB8) = temp_a1;
    *(u8 **)((u8 *)arg0 + 0xABC) = (u8 *) (arg0 + 0xA70);
    *(s8 *)((u8 *)arg0 + 0xAC9) = 0;
    *(s8 *)((u8 *)arg0 + 0xACA) = 0;
    *(s8 *)((u8 *)arg0 + 0xACB) = 0;
    *(s8 *)((u8 *)arg0 + 0xACC) = 0;
    *(s8 *)((u8 *)arg0 + 0xACD) = 0;
    *(s32 *)((u8 *)arg0 + 0xB64) = 0;
    *(s32 *)((u8 *)arg0 + 0xADC) = 0x461C4000;
    *(s8 *)((u8 *)arg0 + 0xAD0) = temp_t8;
    *(s8 *)((u8 *)arg0 + 0xACE) = temp_t7;
    *(s8 *)((u8 *)arg0 + 0xACF) = temp_t6;
    func_001E3100(arg0, temp_a1, temp_a2, temp_a3);
    func_001D9C00(arg0);
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFE) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A30) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A32) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A34) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A36) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A38) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A3A) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A3C) = -1;
    func_001E2C50(arg0);
}
