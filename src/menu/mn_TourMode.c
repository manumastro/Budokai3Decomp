#include "common.h"
#include "menu/mn_TourMode.h"

typedef struct TourModeWork {
    char pad0[0x9C];
    void *f9C;
    char padA0[4];
    Task *fA4;
    char padA8[3];
    u8 fAB;
    u8 fAC;
    s8 fAD;
    char padAE;
    u8 fAF;
    char padB0[0xCC - 0xB0];
    u8 fCC;
    char padCD[0xD0 - 0xCD];
} TourModeWork;

extern u8 D_00470918;
extern u8 D_00470120;
extern s8 D_004B4BE4[];
extern char D_0046EF30[];
extern char D_0046EF40[];
extern char D_0046EF50[];
extern void func_002C3D20(Task *);
extern void VsCharaselEd_TaskMain(Task *);
extern void memset(void *, s32, s32);
extern void *func_002C0630(s32, s32, s32);
extern void func_001F07D0(void);
extern void func_0028DF20(void);
extern void func_0028DFC0(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0027E7E0(void);

void TourMode_Start(void) {
    TourModeGlobal *g = gTourMode;
    Task *t;
    TourModeWork *w;

    g->task = t = amTask_Create(func_002C3D20, 0, 0x1001, 8, 2, D_0046EF30);
    t->data.work = w = amHeap_Alloc(0xD0, 0, D_0046EF40, 0xD9);
    memset(w, 0, 0xD0);
    w->f9C = func_002C0630(0x10814, 0x2000, 0);
    w->fA4 = amTask_Create(VsCharaselEd_TaskMain, 0, 0x3FFF, 8, 2, D_0046EF50);
    w->fAF = 0;
    w->fAD = D_004B4BE4[0];
    w->fAB = D_00470918;
    w->fAC = D_00470120 - 1;
    w->fCC = 0;
    func_001F07D0();
    func_0028DF20();
    func_0028DFC0(6, 0, 0, 0, 0, 0, 0, 0, 0x1F);
    func_0027E7E0();
}
