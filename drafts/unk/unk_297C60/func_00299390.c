/* Draft (not built): func_00299390 at 0x00299390, size 0x254, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x234, original 0x254
 * Original: asm/nonmatchings/unk/unk_297C60/func_00299390.s */

// src/unk/unk_297C60.c func_00299390 size diff=100/141
s32 StrBg_SetFlags(s32, s32, s32);
extern s32 D_00453EC0;
extern void *gStrMap;
extern void amFile_Load(void *);
extern void func_0028EE90();
void func_00299390(void) {
    s32 sp30;
    s32 temp_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s8 *var_v0;
    u8 *temp_v0;
    u8 *temp_v1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v1 = ((u8 *)gStrMap) + var_s0;
        temp_v0 = *(u8 **)((u8 *)temp_v1 + 0);
        if (temp_v0 != NULL) {
            *(s32 *)((u8 *)temp_v1 + 0x10) = (s32) *(s32 *)((u8 *)temp_v0 + 0x40);
            *(s32 *)((u8 *)(*(((u8 *)gStrMap) + var_s0)) + 0x40) = 0;
            amCdFs_Close((void *)(*(((u8 *)gStrMap) + var_s0)), 0);
            *(((u8 *)gStrMap) + var_s0) = 0;
            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(((u8 *)gStrMap) + var_s0) + 0x10)) + 0x50));
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    *(s32 *)((u8 *)gStrMap + 0x58) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x10)) + 0x50);
    *(s32 *)((u8 *)gStrMap + 0x60) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x14)) + 0x50);
    *(s32 *)((u8 *)gStrMap + 0x5C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x18)) + 0x50);
    *(s32 *)((u8 *)gStrMap + 0x64) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x1C)) + 0x50);
    *(s8 *)((u8 *)gStrMap + 0x1BD) = 1;
    *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00453EC0) + 0);
    *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453EC0) + 0x10);
    *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00453EC0) + 0x20);
    *(s128 *)((u8 *)(&sp30) + 0x30) = (s128) *(s128 *)((u8 *)(&D_00453EC0) + 0x30);
    *(s64 *)((u8 *)(&sp30) + 0x40) = (s64) *(s64 *)((u8 *)(&D_00453EC0) + 0x40);
    if (*(s8 *)((u8 *)gStrMap + 0x1BC) != -1) {
        *(s16 *)((u8 *)(&sp30) + 4) = 1;
    }
    var_v0 = (signed char *)(&sp30 + 8);
    var_a3 = 0;
    do {
        if (*(s8 *)((u8 *)gStrMap + 0x1BC) == var_a3) {
            *(s8 *)((u8 *)var_v0 + 0) = var_a3 + 6;
            *(s8 *)((u8 *)var_v0 + 1) = 1;
            *(s16 *)((u8 *)var_v0 + 2) = (s16) (var_a3 + 2);
            *(s16 *)((u8 *)var_v0 + 4) = (s16) (var_a3 + 0xA);
            *(s16 *)((u8 *)var_v0 + 6) = -1;
            var_v0 += 8;
        } else if (*(s8 *)((u8 *)D_005AA604 + 0x11E4) & (1 << var_a3)) {
            *(s8 *)((u8 *)var_v0 + 0) = var_a3 + 6;
            *(s8 *)((u8 *)var_v0 + 1) = 1;
            *(s16 *)((u8 *)var_v0 + 2) = (s16) (var_a3 + 2);
            *(s16 *)((u8 *)var_v0 + 4) = (s16) (var_a3 + 3);
            *(s16 *)((u8 *)var_v0 + 6) = -1;
            var_v0 += 8;
        }
        var_a3 += 1;
    } while (var_a3 < 7);
    *var_v0 = -1;
    func_0028EE90(((u8 *)gStrMap) + 0x20,((u8 *)gStrMap) + 0x58,((u8 *)gStrMap) + 0x60,((u8 *)gStrMap) + 0x68);
    var_s0 = 0;
    var_s1 = 0;
    do {
        temp_a0 = *(s32 *)((u8 *)(((u8 *)gStrMap) + var_s1) + 0x38);
        if ((temp_a0 != 0) && (*(s8 *)((u8 *)gStrMap + 0x1BC) != var_s0)) {
            StrBg_SetFlags(temp_a0, 1, *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x6C)) + 0x30) + 0x20);
        }
        var_s0 += 1;
        var_s1 += 4;
    } while (var_s0 < 7);
}
