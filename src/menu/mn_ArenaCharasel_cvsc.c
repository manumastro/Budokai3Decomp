#include "common.h"

extern void func_0022C700(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00309DE0(u8 *a0) {
    u8 *s0;
    s0 = a0;
    func_0022C700();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00309E30(void) {
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_00309E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_00309FA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A120);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A3C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A540);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A5E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A950);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030AA40);
extern u8 *D_00470990;

void func_0030AE60(void) {
    D_00470990 = 0;
    func_0027E040();
    func_0030D180();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030AE90);
extern char D_0046FB40[];
extern char D_0046FB60[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001F07D0();
extern void func_0030AA40();

#if 0
// differs: same as func_00308980: task pointer kept in a variable, callback address lui/addiu
void func_0030B020(void) {
    u8 *t;
    u8 *m;
    u8 *s0;
    s0 = D_00470990;
    *(void **)(s0 + 12) = t = amTask_Create(func_0030AA40, 0, 0x2000, 8, 2, D_0046FB40);
    *(s32 *)(t + 0x34) = 0xA;
    s0 = t + 0x30;
    *(void **)s0 = m = amHeap_Alloc(40, 0, D_0046FB60, 149);
    memset(m, 0, 40);
    func_001F07D0();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030B020);
extern char D_0046FB60[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);

void func_0030B0B0(void) {
    u8 *s0;
    s0 = D_00470990 = amHeap_Alloc(0x14, 0, D_0046FB60, 0x6B);
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)s0 = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
    ArenaRegCharList_Load();
}
