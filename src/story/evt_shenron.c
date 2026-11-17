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
extern s32 Scr_Alloc(s32, s32, s32);
extern void Scr_SetData(s32, s32);
extern void Scr_SetCallback44(s32, s32);
extern void Scr_SetStartCallback(s32, s32);
extern void Scr_SetEndCallback(s32, s32);
extern void Scr_SetTaskStartCallback(s32, s32);
extern void Scr_SetTaskEndCallback(s32, s32);
extern void func_00305CB0(void);
extern void func_00306500(void);
extern void func_00305AD0(void);
extern void TourMap_StopAdx(void *);
extern void func_00264140(s32, s32);
extern char D_00454680[];

void func_00306620(s32 *a0) {
    s32 *s0 = (s32 *)D_0047097C;
    void *f;
    s0[1] = Scr_Alloc(0x3000, 1, 1);
    if (s0[1] != -1) {
        Scr_SetData(s0[1], s0[0xD8 / 4]);
        Scr_SetCallback44(s0[1], (s32)D_00454680);
        Scr_SetStartCallback(s0[1], (s32)func_00305AD0);
        Scr_SetEndCallback(s0[1], (s32)TourMap_StopAdx);
        Scr_SetTaskStartCallback(s0[1], 0);
        Scr_SetTaskEndCallback(s0[1], 0);
    }
    func_00305CB0();
    f = func_00306500;
    a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    func_00264140(-1, 0);
}
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003066F0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003067A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003068E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306AD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306BF0);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306D60);
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_00306F70);
void Shenron_Clear(void) {
    D_0047097C = 0;
    D_00470980 = 0;
}
#if 0
// func_003070A0: the byte increment at D_004E6560+0x2AF19: the original adds the 0x30000 part in a separate lui/addu for the load and again for the store, and keeps D_004E6560 in a2; ours folds or reorders; 6 variants tried
extern s8 D_00511479[];
extern s8 D_004E066D[];
extern s8 D_004E6560[];
extern void func_00305910(void);
extern void Help_Exit(void);
extern void amHeap_Free(void *);

void func_003070A0(void) {
    char *base = (char *)D_004E6560;
    s32 *s0 = (s32 *)D_0047097C;
    s32 a1 = *(s32 *)((char *)s0 + 0x14 + s0[0x20 / 4] * 4);
    s32 b0 = (u8)D_00511479[a1];
    s32 b1 = (u8)D_004E066D[a1 * 40];
    if (b0 < b1) {
        char *p = base + a1;
        s32 v = ((u8 *)(p + 0x30000))[-0x50E7];
        ((u8 *)(p + 0x30000))[-0x50E7] = (u8)(v + 1);
    }
    func_00305910();
    if (s0[0] != 0) {
        amTask_Kill((void *)s0[0]);
        s0[0] = 0;
    }
    if (D_0047097C != 0) {
        amHeap_Free((void *)D_0047097C);
        D_0047097C = 0;
    }
    Help_Exit();
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003070A0);

extern void Scene_SetReady(void);
extern void func_00306F70(void);
extern s32 amTask_Create(void *, s32, s32, s32, s32, void *);
extern char D_0046F9E8[];

void Shenron_Start(void) {
    s32 *s0;
    Scene_SetReady();
    s0 = (s32 *)D_0047097C;
    *s0 = amTask_Create((void *)func_00306F70, 0, 0x3100, 0x4000, 2, D_0046F9E8);
}
#if 0
// func_003071C0: the copy loop: the original counts with v1 and keeps the source in a1 (lui a1 first); ours takes the other registers, unrolled or swapped; 8 variants tried
typedef struct Copy16Sh {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16Sh;
extern void func_00306140(void);
extern void Help_Load(void);
extern void func_00260C40(void);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_00458E70[];

void func_003071C0(void) {
    s32 ids[44];
    s32 *s0;
    s32 i;
    s32 k;
    Copy16Sh *dq;
    Copy16Sh *sq;
    func_00306210();
    func_00306140();
    Help_Load();
    func_00260C40();
    s0 = (s32 *)D_0047097C;
    dq = (Copy16Sh *)ids;
    sq = (Copy16Sh *)D_00458E70;
    i = 0xB;
    do {
        *dq = *sq;
        sq++;
        dq++;
        i--;
    } while (i > 0);
    for (k = 0; k < 0x2C; k++) {
        s0[0x24 / 4] = amCdFs_ReadFileId(ids[k], 0, 1);
        s0++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_shenron", func_003071C0);
