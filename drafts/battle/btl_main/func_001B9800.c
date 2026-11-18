/* Draft (not built): func_001B9800 at 0x001B9800, size 0x27C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 94 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x27C
 * Original: asm/nonmatchings/battle/btl_main/func_001B9800.s */

// src/battle/btl_main.c func_001B9800 size diff=94/156
s32 func_001E2070(void *);
void func_001B9800(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s16 var_v0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x14;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {
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
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s8 *)((u8 *)arg0 + 0x183C) + 0x9A);
    func_001E3460(arg0);
    if (*(s8 *)((u8 *)arg0 + 0x183C) == 5) {
        *(s32 *)((u8 *)arg0 + 0x17A4) = (s32) ((*(s32 *)((u8 *)arg0 + 0x17A4) + *(s32 *)((u8 *)arg0 + 0x17AC)) & 0xFFFF);
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0xD4);
    if (!(temp_f1 <= 0.5f)) {
        *(s8 *)((u8 *)arg0 + 0x183D) = 1;
    } else if (temp_f1 < 0.5f) {
        *(s8 *)((u8 *)arg0 + 0x183D) = 2;
    } else {
        *(s8 *)((u8 *)arg0 + 0x183D) = 0;
    }
    if ((*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) && (*(s16 *)((u8 *)arg0 + 0xCAE) == 0x14)) {
        *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
    }
    *(s32 *)((u8 *)arg0 + 0x1864) = 3;
    func_001E5040(arg0);
    *(s32 *)((u8 *)arg0 + 0x1830) = 0;
    *(f32 *)((u8 *)arg0 + 0x182C) = (f32) (*(f32 *)((u8 *)arg0 + 0x1828) / 3.0f);
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x654) - *(f32 *)((u8 *)arg0 + 0x1844);
    *(f32 *)((u8 *)arg0 + 0x1820) = temp_f0;
    *(f32 *)((u8 *)arg0 + 0x1824) = temp_f0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)arg0 + 0xCA4) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0xCA8) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2017) = 1;
    func_001E2070(arg0);
    func_001ABD30((void *)(arg0 + 0x1360));
}
