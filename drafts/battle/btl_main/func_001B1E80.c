/* Draft (not built): func_001B1E80 at 0x00468760, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 101 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2F4, original 0x2D4
 * Original: asm/nonmatchings/battle/btl_main/func_001B1E80.s */

// src/battle/btl_main.c func_001B1E80 size diff=101/189
extern void func_001C80E0(Fighter *f, s32 i);
extern void func_001C8050(Fighter *f, s32 i);
extern void *func_001CAAB0(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_001E1E80(void *);
void func_001B1E80(u8 *arg0) {
    s16 temp_v0;
    s16 temp_v1_2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_v0_6;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v1;
    u8 *var_s3;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x32;
    var_s3 = arg0;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)var_s3 + 0xCB0) = (s16) (*(s16 *)((u8 *)var_s3 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)var_s3 + 0xCB0) = 0;
    }
    temp_v0 = *(s16 *)((u8 *)var_s3 + 0xCAC);
    switch (temp_v0) {
    case 0:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 1U;
        break;
    case 1:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 2U;
        break;
    case 4:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 4U;
        break;
    case 5:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 8U;
        break;
    case 6:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 0x10U;
        break;
    case 7:
    case 8:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 0x20U;
        break;
    case 9:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 0x40U;
        break;
    case 11:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 0x80U;
        break;
    default:
        *(u16 *)((u8 *)var_s3 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)var_s3 + 0x2010) != 0) {
        *(u16 *)((u8 *)var_s3 + 0xCB2) = (u16) (*(u16 *)((u8 *)var_s3 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)var_s3 + 0x2011) != 0) {
        *(u16 *)((u8 *)var_s3 + 0xCB2) = (u16) (*(u16 *)((u8 *)var_s3 + 0xCB2) | 0x4000);
    }
    *(s32 *)((u8 *)var_s3 + 0xBA8) = func_001E1E80(var_s3);
    var_s0 = *(s32 *)((u8 *)var_s3 + 0xBA8);
    func_001C80E0((Fighter *)(var_s3), (s32)(var_s0));
    func_001C8050((Fighter *)(var_s3), (s32)(var_s0));
    var_s2 = *(s32 *)((u8 *)var_s3 + 0xBA8);
    var_s1 = var_s2 * 4;
    temp_v0_2 = var_s1 + var_s3;
    var_s0 = (s32) (temp_v0_2 + 0x1DB8);
    if (*(s32 *)((u8 *)temp_v0_2 + 0x1DB8) == 0) {
        temp_v0_3 = (unsigned char *)(*(s32 *)((u8 *)var_s3 + 0x1CF8) + (var_s2 * 0x14));
        temp_v0_4 = func_001CAAB0(*(s16 *)((u8 *)temp_v0_3 + 0xD6), *(s16 *)((u8 *)temp_v0_3 + 0xD8), *(s8 *)((u8 *)(var_s2 + var_s3) + 0x1D0C), *(s32 *)((u8 *)var_s3 + 0x1350), 0);
        if (temp_v0_4 != NULL) {
            *(s32 *)((u8 *)var_s3 + 0x1EF8) = (s32) *(s32 *)((u8 *)temp_v0_4 + 0x20);
            *(s32 *)var_s0 = (int)(temp_v0_4);
        }
    }
    temp_v0_5 = var_s3 + (var_s2 * 0x1C);
    var_s0 = (s32) (temp_v0_5 + 0x1DF8);
    if ((*(s32 *)((u8 *)temp_v0_5 + 0x1E10) == 0) && (*(s32 *)((u8 *)var_s0 + 0) == 0) && (*(s32 *)((u8 *)var_s0 + 0x14) == 0)) {
        temp_a0 = *(s32 *)(*(s32 *)((u8 *)var_s3 + 0x1CF8) + var_s1);
        if (temp_a0 != -1) {
            temp_v0_6 = amCdFs_ReadFileId(temp_a0, 0, 1);
            *(s32 *)((u8 *)var_s0 + 0x14) = temp_v0_6;
            *(s32 *)((u8 *)var_s3 + 0x1EF8) = temp_v0_6;
        }
    }
    temp_v1 = *(u8 **)((u8 *)var_s3 + 0x17A0);
    if (*(s16 *)((u8 *)temp_v1 + 0x1A) > 0) {
        var_v0 = *(s16 *)((u8 *)(((*(s8 *)((u8 *)var_s3 + 0x1FF9) != 0) * 2) + temp_v1) + 0x18);
    } else {
        var_v0 = *(s16 *)((u8 *)temp_v1 + 0x18);
    }
    *(s32 *)((u8 *)var_s3 + 0xB70) = (s32) var_v0;
    *(s32 *)((u8 *)var_s3 + 0xB70) = (s32) (*(s32 *)((u8 *)var_s3 + 0xB70) + *(s32 *)((u8 *)var_s3 + 0xBA8));
    *(s16 *)((u8 *)var_s3 + 0x1A58) = (s16) *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x17A0)) + 0x10);
    *(s16 *)((u8 *)var_s3 + 0x1A5A) = 0;
    *(s16 *)((u8 *)var_s3 + 0x1A5C) = 0;
    func_001E3460(var_s3);
    temp_v1_2 = *(s16 *)((u8 *)var_s3 + 0xCAE);
    if (temp_v1_2 != 5) {
        if (temp_v1_2 == 9) {
            goto block_41;
        }
    } else {
block_41:
        *(s32 *)((u8 *)var_s3 + 0x1770) = 0;
    }
    *(s32 *)((u8 *)var_s3 + 0xCB8) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2003) = 0;
    *(s8 *)((u8 *)var_s3 + 0x1FFD) = 0;
    *(s16 *)((u8 *)var_s3 + 0x181C) = 0;
    *(s8 *)((u8 *)var_s3 + 0x2004) = 0;
    *(s16 *)((u8 *)var_s3 + 0xCB4) = 0;
    func_001E1300((s32)(var_s3));
}
