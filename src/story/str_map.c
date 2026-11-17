#include "common.h"
#include "menu/menu.h"

extern s32 D_004708B4;
extern void *gStrTitle;

INCLUDE_ASM("asm/nonmatchings/story/str_map", func_00299CA0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A090);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A1C0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A250);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A4F0);
void func_0029A8E0(void) {
    D_004708B4 = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A8F0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029A9F0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AAC0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AC30);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029ACE0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AE00);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AE60);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029AEF0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B000);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B130);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B290);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029B550);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029BA80);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C110);
extern s32 func_0022BF80(s32);
extern void func_001F0810(s32, s32);

void func_0029C290(s32 *s0) {
    s32 *g = (s32 *)gStrTitle;
    if (func_0022BF80(g[0x78 / 4 + g[0xB0 / 4]]) == 0xFF) {
        func_001F0810(-1, 0);
        s0[0x1C / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C2E0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C680);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C730);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029C9B0);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CA40);
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CC20);
void func_0029CCB0(void) {
    gStrTitle = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_map", func_0029CCC0);
extern void func_0029CC20(Task *);
extern char D_0046EA28[];

void func_0029CDB0(void) {
    ((void **)gStrTitle)[4] = amTask_Create(func_0029CC20, NULL, 0x8000, 2, 0x10000, D_0046EA28);
}
