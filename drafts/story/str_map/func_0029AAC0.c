/* Draft (not built): func_0029AAC0 at 0x0029AAC0, size 0x168, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_map/func_0029AAC0.s */

// src/story/str_map.c func_0029AAC0 diff diff=57/90
extern void StrBg_FlushDraw(void);
extern void func_0029A1C0(void);
void func_0029AAC0(s32 arg0, s32 arg1, s8 arg2) {
    Task *temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = 3;
    var_s0 = 0xC;
    *(s8 *)((u8 *)gStrMap + 0x1BC) = arg2;
    *(s32 *)((u8 *)gStrMap + 0x1C0) = var_s3;
    *(s32 *)((u8 *)gStrMap + 0x1C4) = var_s2;
    *(s8 *)((u8 *)gStrMap + 0x1BE) = 0;
    *(s8 *)((u8 *)gStrMap + 0x1BD) = 0;
    do {
        temp_a0 = *(Task **)((u8 *)(gStrMap + var_s0) + 0x20);
        if (temp_a0 != NULL) {
            amTask_Kill(temp_a0);
            *(s32 *)((u8 *)(gStrMap + var_s0) + 0x20) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xE);
    var_s0 = 1;
    var_s1 = 4;
    do {
        temp_a0_2 = *(s32 *)((u8 *)(gStrMap + var_s1) + 0x68);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)(gStrMap + var_s1) + 0x68) = 0;
        }
        var_s0 += 1;
        var_s1 += 4;
    } while (var_s0 < 9);
    *(Task **)((u8 *)gStrMap + 0x2C) = amTask_Create((void (*)(Task *)) func_0029A1C0, NULL, var_s3, 2, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
    *(Task **)((u8 *)gStrMap + 0x34) = amTask_Create((void (*)(Task *)) StrBg_FlushDraw, NULL, var_s3 + 5, 2, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
    *(Task **)((u8 *)gStrMap + 0x54) = amTask_Create((void (*)(Task *)) StrBg_FlushDraw, NULL, var_s3 + 0xD, 2, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */));
}
