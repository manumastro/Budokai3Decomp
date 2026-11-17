#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272D30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272E20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002730B0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273210);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273330);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002735D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002737C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273AF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273E20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274120);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274A00);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274B40);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274C10);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274E70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00275050);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00275230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002759F0);
extern s32 amAdx_IsStopped(s32);
extern void func_0026D6A0(void);

void func_002763B0(u8 *a0) {
    u8 *s0;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D6A0();
        *(s32 *)(s0 + 0x1C) = 0;
    }
}
extern s32 amAdx_IsStopped(s32);
extern void func_0026D570(s32);
extern void Zenie_Open(s32);
extern void func_00276610(void);

void func_00276400(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D570(1);
        Zenie_Open(0);
        f = (void *)func_00276610;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276470);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276840);
extern s32 D_00470808;
extern void Zenie_Init(void);
extern void func_00283C10(void);

/* Clears D_00470808, then sets up the Zenie display. */
void Shop_InitZenie(void) {
    D_00470808 = 0;
    Zenie_Init();
    func_00283C10();
}
extern void *amTask_Create();
extern void func_00276840();
extern char D_0046B530[];

void func_00276A40(void) {
    u8 *s0;
    *(void **)((u8 *)D_00470808 + 0x20) = amTask_Create(func_00276840, 0, 0x3000, 0x200, 4, D_0046B530);
    s0 = *(u8 **)((u8 *)D_00470808 + 0x20) + 0x30;
    memset(s0, 0, 0x1C);
    *(s32 *)s0 = 0x3C;
}
extern void func_002C04B0();
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void Zenie_Release();

void func_00276AB0(void) {
    s32 i;
    s32 off;
    *(s32 *)(*(u8 **)((u8 *)D_00470808 + 0x24) + 0x34) = 0;
    func_002C04B0(*(void **)((u8 *)D_00470808 + 0x24));
    amTask_KillGroup(0x200, 4, 0);
    for (i = 0, off = 0; i < 4; i++, off += 4) {
        void *p = *(void **)((u8 *)D_00470808 + off);
        if (p != 0) {
            amCdFs_Close(p, 0);
        }
    }
    amHeap_Free((void *)D_00470808);
    D_00470808 = 0;
    Zenie_Release();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276B50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276CE0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276DC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277310);
