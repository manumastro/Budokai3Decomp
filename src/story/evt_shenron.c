#include "common.h"

extern s32 D_0047097C;
extern s32 D_00470980;

extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F9C8[];
extern void memset(void *, s32, s32);
extern s8 D_00511450[];
extern s32 func_00305830(s32);
extern void amTask_Kill(void *);

void func_00306210(void) {
    s32 *s0;
    s32 t;
    D_0047097C = (s32)amHeap_Alloc(0x164, 0, D_0046F9C8, 0x34B);
    memset((void *)D_0047097C, 0, 0x164);
    s0 = (s32 *)D_0047097C;
    s0[0x8 / 4] = 0;
    s0[0x10 / 4] = 0;
    s0[0x14 / 4] = 0;
    s0[0x18 / 4] = 0;
    s0[0x1C / 4] = 0;
    s0[0x20 / 4] = 0;
    s0[0xC / 4] = func_00305830(D_00511450[0]);
    s0[0xD4 / 4] = 0;
    s0[0xD8 / 4] = 0;
    t = s0[0];
    if (t != 0) {
        amTask_Kill((void *)t);
        s0[0] = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003062B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003063B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306500);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306620);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003066F0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003067A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003068E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306AD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306BF0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306D60);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306F70);
void func_00307090(void) {
    D_0047097C = 0;
    D_00470980 = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003070A0);
extern void func_001F07D0(void);
extern void func_00306F70(void);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern char D_0046F9E8[];

void func_00307170(void) {
    s32 *s0;
    func_001F07D0();
    s0 = (s32 *)D_0047097C;
    *s0 = amTask_Create((void *)func_00306F70, 0, 0x3100, 0x4000, 2, D_0046F9E8);
}
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003071C0);
