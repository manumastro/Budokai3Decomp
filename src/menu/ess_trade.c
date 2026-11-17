#include "common.h"

extern s32 gEssTrade;
extern void func_00277310(void);
extern void func_002794D0(void);
extern s32 func_002D20D0(void);
extern s32 func_00283BF0(void);
extern void StrStatus_Exit(void *);
extern void Smsg_Exit(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void func_00283C20(void);

INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002778D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00277A90);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00277C80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002782D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278490);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278980);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278B00);

void func_00278CA0(u8 *a0) {
    u8 *s0;

    s0 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
    if (func_002D20D0() == 6) {
        *(void **)(s0 + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278D40);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278EA0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279010);
void func_002793C0(u8 *a0) {
    u8 *s0;

    s0 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
    if (func_00283BF0() == 8) {
        *(void **)(s0 + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
        func_00283C20();
    }
}

/* Adds one to the five counters of the trade block gEssTrade, then runs func_00277310. */
void Trade_CountFrame(void) {
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002794D0);
extern s32 amAdx_IsStopped(s32);
extern void func_0026D8A0(void);

void EssTrade_TaskWaitVoice(u8 *a0) {
    u8 *s0;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D8A0();
        *(s32 *)(s0 + 0x1C) = 0;
    }
}
extern s32 amAdx_IsStopped(s32);
extern void func_0026D570(s32);
extern void func_00279E60(void);

void func_00279CD0(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D570(1);
        f = (void *)func_00279E60;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279D30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279E60);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279FD0);
extern s32 gEssTrade;
extern void SklSheet_Clear(void);
extern void func_002D2360(void);

/* Clears gEssTrade, then runs the two steps at 0x283C10 and 0x2D2360. */
void Trade_Start(void) {
    gEssTrade = 0;
    SklSheet_Clear();
    func_002D2360();
}
extern void func_002794D0(void);
extern s32 func_002D20D0(void);

void func_0027A1C0(s32 a0, s32 a1) {
    s32 *t;
    s32 *q;
    s32 cnt;
    s32 i;
    u8 *g;

    cnt = 0;
    i = 0;
    t = (s32 *)((u8 *)gEssTrade + (*(s32 *)((u8 *)gEssTrade + 0x50) << 5) + 0x58);
    q = t;
    do {
        if (q[2] > 0) {
            cnt++;
        }
        i++;
        q++;
    } while (i < 4);
    if (t[1] < cnt) {
        t[1] = cnt;
        t[0] = cnt;
        if (t[0] > 3) {
            t[0] = 3;
        }
    }
    t[6] = a0;
    t[7] = a1;
    g = *(u8 **)((u8 *)gEssTrade + 0x20);
    *(void **)(g + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
}
extern void *amTask_Create();
extern void func_00279FD0();
extern char D_0046B540[];

void EssTrade_Start(void) {
    u8 *s0;
    *(void **)((u8 *)gEssTrade + 0x20) = amTask_Create(func_00279FD0, 0, 0x3000, 0x200, 0x10, D_0046B540);
    s0 = *(u8 **)((u8 *)gEssTrade + 0x20) + 0x30;
    memset(s0, 0, 0x1C);
    *(s32 *)s0 = 0x3C;
}
void EssTrade_Exit(void) {
    s32 s1;
    s32 s0;

    *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x24) + 0x34) = 0;
    StrStatus_Exit(*(void **)((u8 *)gEssTrade + 0x24));
    Smsg_Exit();
    amTask_KillGroup(0x200, 0x10, 0);
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gEssTrade + s0) != 0) {
            amCdFs_Close(*(void **)((u8 *)gEssTrade + s0), 0);
        }
        s1++;
        s0 += 4;
    } while (s1 < 4);
    amHeap_Free((void *)gEssTrade);
    gEssTrade = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A370);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A4C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027AAE0);
