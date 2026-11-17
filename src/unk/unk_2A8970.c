#include "common.h"

typedef struct EvtWork {
    char pad0[0x8];
    s32 f8;
    s32 fC;
    s32 f10;
    char pad14[0x124 - 0x14];
    s32 f124;
    void *f128;
    s32 f12C;
} EvtWork;

typedef struct Blk16 {
    char b[16];
} Blk16;

extern EvtWork *gEvtWork;
extern s8 D_004708D4;
extern s32 D_004708D8;
extern s32 D_004700A0;
extern s32 D_004700A4;
extern s32 D_004700A8;
extern s32 D_004700AC;
extern u32 D_004E6560[];
extern Blk16 D_005AB8D0[];
extern s8 D_005ABA60[];
extern char D_0046EAF8[];
extern char D_0046EB00[];
extern char D_0046EAA8[];

extern void amFile_AddLoader(char *, void (*)(void));
extern void func_002A5B00(void);
extern void func_0029A9F0(void);
extern void func_002A7160(void);
extern void *amTask_Create(void (*)(void), s32, s32, s32, s32, char *);
extern void func_002A92B0(s32);
extern void func_002A11E0(void);
extern void memset(void *, s32, s32);

void func_002A8970(void) {
}
void func_002A8980(void) {
}
void func_002A8990(void) {
    amFile_AddLoader(D_0046EAF8, func_002A8980);
    amFile_AddLoader(D_0046EB00, func_002A8970);
}
void func_002A89D0(void) {
    EvtWork *w = gEvtWork;

    if (w->f8 != 0) {
        func_002A5B00();
    }
    if (w->f124 >= 0) {
        func_0029A9F0();
    }
}
void func_002A8A20(s16 *p) {
    s32 i;

    for (i = 0; i < 7; i++) {
        if (p[i] > 0) {
            p[i] &= 0xFFF;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2A8970", func_002A8A60);
u32 func_002A8C50(s32 n) {
    s32 s = (n % 16) * 2;

    return (D_004E6560[n / 16] & (3 << s)) >> s;
}
s32 func_002A8CA0(s32 n) {
    if (n < 22) {
        return n;
    }
    if (n < 26) {
        return n + 5;
    }
    return n + 6;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2A8970", func_002A8CE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2A8970", func_002A8E40);
void Ball_Start(void) {
    EvtWork *w = gEvtWork;

    if (w != NULL) {
        w->fC |= 1;
        if (w->f124 >= 0) {
            w->f128 = amTask_Create(func_002A7160, 0, 0x8000, 0x4000, 0, D_0046EAA8);
            w->f12C = 0;
        }
    }
}
s32 func_002A8F70(void) {
    s32 r = 0;

    if (gEvtWork->f10 == 1) {
        r = 1;
    }
    return r;
}
s32 func_002A8F90(void) {
    if (gEvtWork != NULL && gEvtWork->f8 != 0) {
        return 1;
    }
    return 0;
}
void func_002A8FC0(void) {
    s32 i;

    gEvtWork = NULL;
    for (i = 0; i < 2; i++) {
        func_002A92B0(i);
    }
    func_002A11E0();
    D_004708D4 = 0;
    D_004700A0 = -1;
    D_004700A4 = -1;
    D_004700A8 = -1;
    D_004700AC = -1;
    D_004708D8 = 0;
    for (i = 0; i < 25; i++) {
        memset(&D_005AB8D0[i], 0, 16);
        D_005ABA60[i] = 0;
    }
}
