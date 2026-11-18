/* Draft (not built): func_0029AAC0 at 0x0029AAC0, size 0x168, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *), void (*)(struct Task *), int, int, @ 203: *(u8 **)((u8 *)gStrMap + 0x2C) = amTask_Create(func_0029A1C0, 0, arg0, 2);
 * Original: asm/nonmatchings/story/str_map/func_0029AAC0.s */

// src/story/str_map.c func_0029AAC0 cerr diff=-1/0
extern void StrBg_FlushDraw(void);
extern void func_0029A1C0(void);
void func_0029AAC0(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_a0;

    var_s1 = 3;
    var_s0 = 0xC;
    *(s8 *)((u8 *)gStrMap + 0x1BC) = arg2;
    *(s32 *)((u8 *)gStrMap + 0x1C0) = arg0;
    *(s32 *)((u8 *)gStrMap + 0x1C4) = arg1;
    *(s8 *)((u8 *)gStrMap + 0x1BE) = 0;
    *(s8 *)((u8 *)gStrMap + 0x1BD) = 0;
    do {
        temp_a0 = *(u8 **)((u8 *)(gStrMap + var_s0) + 0x20);
        if (temp_a0 != NULL) {
            amTask_Kill((void *)(temp_a0));
            *(s32 *)((u8 *)(gStrMap + var_s0) + 0x20) = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xE);
    var_s0_2 = 1;
    var_s1_2 = 4;
    do {
        temp_a0_2 = *(s32 *)((u8 *)(gStrMap + var_s1_2) + 0x68);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)(gStrMap + var_s1_2) + 0x68) = 0;
        }
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 9);
    *(u8 **)((u8 *)gStrMap + 0x2C) = amTask_Create(func_0029A1C0, 0, arg0, 2);
    *(u8 **)((u8 *)gStrMap + 0x34) = amTask_Create(StrBg_FlushDraw, 0, arg0 + 5, 2);
    *(u8 **)((u8 *)gStrMap + 0x54) = amTask_Create(StrBg_FlushDraw, 0, arg0 + 0xD, 2);
}
