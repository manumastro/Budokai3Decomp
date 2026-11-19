/* Draft (not built): func_0029C110 at 0x0029C110, size 0x180, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x180
 * Original: asm/nonmatchings/story/str_map/func_0029C110.s */

// src/story/str_map.c func_0029C110 size diff=62/86
extern s32 func_0022BF80(s32);
s32 StrBg_SetPos(s32, s32, s32);
s32 StrBg_SetValue(s32, void *);
extern s16 D_00453F10;
extern s32 D_00454190;
extern s32 D_004DFB19;
extern void func_0029B130(void);
extern void func_0029BA80(void);
void func_0029C110(u8 *arg0) {
    s32 sp20;
    s16 sp44;
    s32 *var_v1;
    u8 var_v0;

    if (func_0022BF80(*(s32 *)((u8 *)gStrTitle + 0x90)) == 0xFF) {
        *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00454190) + 0);
        *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00454190) + 0x10);
        *(s128 *)((u8 *)(&sp20) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00454190) + 0x20);
        *(s64 *)((u8 *)(&sp20) + 0x30) = (s64) *(s64 *)((u8 *)(&D_00454190) + 0x30);
        if ((D_00453F10 != -1) && (*(&D_004DFB19 + D_00453F10) == 0)) {
            sp44 = 0x2A;
        } else {
            *(Task **)((u8 *)gStrTitle + 0x60) = amTask_Create((void (*)(Task *)) func_0029B130, NULL, 0x8014, 2, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
        }
        func_0028EE90(((u8 *)gStrTitle) + 0x10,((u8 *)gStrTitle) + 0x64,((u8 *)gStrTitle) + 0x68,((u8 *)gStrTitle) + 0x6C);
        StrBg_SetPos(*(s32 *)((u8 *)gStrTitle + 0x58), 0, 0);
        var_v0 = 0;
        if (D_00453F10 != -1) {
            var_v0 = *(&D_004DFB19 + D_00453F10);
        }
        if (var_v0 == 0) {
            StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58),((u8 *)gStrTitle) + 0xC0);
        } else {
            StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58), NULL);
        }
        var_v1 = (int *)(&func_0029BA80);
        *(s32 *)((u8 *)gStrTitle + 0xB4) = 0;
        *(s32 *)((u8 *)gStrTitle + 0xB8) = 0;
        if (&func_0029BA80 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
