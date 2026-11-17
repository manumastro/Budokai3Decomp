#include "common.h"

typedef struct MainMenuSub {
    void *res[4];   /* 0x00: freed with func_0013AC90 */
    char pad10[0x90 - 0x10];
    void *f90;
} MainMenuSub;

typedef struct MainMenuTask {
    char pad0[0x10];
    struct MainMenuTask2 *f10;
} MainMenuTask;

typedef struct MainMenuTask2 {
    char pad0[0x30];
    MainMenuSub *sub;
} MainMenuTask2;

typedef struct MainMenuArg {
    char pad0[0x30];
    void *f30;
} MainMenuArg;

extern void func_00267090(void *);
extern void func_00266EC0(MainMenuSub *);
extern void func_002C04B0(void *);
extern void func_0013AC90(void *);
extern void func_00145120(void *);
extern void func_002B5EF0(void);
extern MainMenuTask *D_004707D8;

typedef struct MainMenuInit {
    s32 f0;
    s32 f4;
    void *f8;
    s32 fC;
    s32 f10;
    s32 f14[12];
    s32 f44[18];
    void *f8C;
} MainMenuInit;

extern s16 D_004E05F8[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void *D_0047CAA0[];
extern s32 D_00495718[];
extern s32 D_00495758[];
extern void func_0022DB30(s32);
extern void func_00145CC0(s32, s32);
extern void *func_0013DF40(void *, s32);
extern void func_001A4CF0();
extern void func_001EF100(void);
extern u8 D_004B4B62[];

void func_00267300(MainMenuInit *a) {
    s32 v;
    s32 w;
    s32 i;

    if (D_004E05F8[0] != 0) {
        func_0022DB30(1);
    } else {
        func_0022DB30(0);
    }
    D_00470704 = v = a->f4;
    D_0047070C = w = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, w);
    D_00470238 = 0;
    a->f10 = 0;
    for (i = 0; i < 12; i++) {
        a->f14[i] = 0;
    }
    a->f44[0] = 0;
    a->f44[1] = 0;
    a->f44[2] = 0;
    a->f44[3] = 0;
    a->f44[4] = 0;
    a->f44[5] = 0;
    a->f44[6] = 0;
    a->f44[7] = 0;
    a->f44[8] = 0;
    a->f44[9] = 0;
    a->f44[10] = 0;
    a->f44[11] = 0;
    a->f44[12] = 0;
    a->f44[13] = 0;
    a->f44[14] = 0;
    a->f44[15] = 0;
    a->f44[16] = 0;
    a->f44[17] = 0;
    a->f8C = func_0013DF40(a->f8, 0);
    D_0047CAA0[0] = func_001A4CF0;
    D_00495718[0] = 0;
    D_00495758[0] = 0;
    func_001EF100();
}
void func_00267420(MainMenuArg *a) {
    func_00267090(a->f30);
}
void func_00267430(MainMenuArg *a) {
    func_00267090(a->f30);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", func_00267440);
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", func_00267910);
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", func_002679F0);
void func_00267BA0(void) {
    D_004707D8 = NULL;
    D_004B4B62[0] = 0;
}
void func_00267BB0(void) {
    MainMenuTask *w = D_004707D8;
    MainMenuSub *sub = w->f10->sub;
    if (w->f10 != NULL) {
        func_00266EC0(sub);
        func_002C04B0(sub->f90);
        func_0013AC90(sub->res[0]);
        func_0013AC90(sub->res[1]);
        func_0013AC90(sub->res[2]);
        func_0013AC90(sub->res[3]);
        func_0013AC90(sub);
        func_00145120(w->f10);
    }
    func_0013AC90(w);
    D_004707D8 = NULL;
    func_002B5EF0();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", func_00267C40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", func_00267D60);
