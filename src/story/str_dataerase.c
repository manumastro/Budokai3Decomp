#include "common.h"
#include "menu/menu.h"

extern s32 D_0047099C;
extern s32 D_004701D8;

extern void func_0030EFF0(Task *);
extern char D_0046FC10[];
extern void func_001F07D0(void);

void func_0030F220(void) {
    Task *t = amTask_Create(func_0030EFF0, NULL, 0x3000, 8, 2, D_0046FC10);
    *(s16 *)((char *)t + 0x34) = 0;
    func_001F07D0();
}
void func_0030F260(void) {
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F270);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F350);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F420);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F560);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F650);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F790);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F8D0);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F9C0);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030FB00);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030FF30);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310080);
u8 func_003101D0(char *p) {
    return ((u8 *)(*(char **)(p + 0x30)))[0xE];
}
void func_003101E0(void) {
    D_0047099C = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_003101F0);
extern void func_0022D0E0(s32, s32);

void func_00310290(Task *t) {
    s32 *s0 = *(s32 **)((char *)t + 0x30);
    if (s0[0] != 0) {
        func_0022D0E0(s0[0], 1);
    }
    if (s0[1] != 0) {
        func_0022D0E0(s0[1], 1);
    }
    amHeap_Free(s0);
    amTask_Kill(t);
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310300);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_003103B0);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310450);
s32 func_003105A0(void) {
    return D_004701D8;
}
extern void func_00310450(Task *);
extern char D_0046FC40[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_004701D8;

void func_003105B0(void) {
    Task *t = amTask_Create(func_00310450, NULL, 0x2000, 8, 2, D_0046FC40);
    s32 *s0 = (s32 *)((char *)t + 0x30);
    s0[0] = amCdFs_ReadFileId(0xF65, 0, 0);
    s0[1] = amCdFs_ReadFileId(0xF66, 0, 0);
    s0[2] = amCdFs_ReadFileId(0xF67, 0, 0);
    *(s16 *)((char *)s0 + 0xC) = 0;
    D_004701D8 = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310640);
void func_003107C0(void) {
}
void func_003107D0(void) {
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_003107E0);
void func_00310900(void) {
}
