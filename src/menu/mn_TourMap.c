#include "common.h"

extern s32 gTourMap;
extern void *amFile_Load();
extern void amAdx_Stop(s32);
extern void func_001F07D0(void);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void func_00304970(void);
extern void Zenie_Release(void);
extern void func_00209530(void *);
extern void amCdFs_Close(void *, s32);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_0029E450(void *);
extern void func_00305130(f32 *, f32 *, s32, s32, s32);
extern void amHeap_Free(void *);

INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304970);
void TourMap_TaskMain(u8 *a0) {
    s32 a2;
    s32 *a1;
    u8 *s0;

    a1 = (s32 *)gTourMap;
    s0 = a0;
    a2 = 0;
    do {
        if (*a1 != 0) {
            if (*(s16 *)((u8 *)*a1 + 4) != 3) {
                return;
            }
        }
        a2++;
        a1++;
    } while (a2 < 9);
    *(s32 *)((u8 *)gTourMap + 0x30) = *(s32 *)(*(u8 **)gTourMap + 0x54);
    amFile_Load(*(void **)((u8 *)gTourMap + 0x30));
    *(s32 *)((u8 *)gTourMap + 0x24) = *(s32 *)(*(u8 **)((u8 *)gTourMap + 4) + 0x54);
    amFile_Load(*(void **)((u8 *)gTourMap + 0x24));
    func_001F07D0();
    func_00144B70(-1);
    func_00144650(0);
    amAdx_Stop(-1);
    *(s32 *)(s0 + 0x30) = 0;
    *(void **)(s0 + 0x1C) = ((void *)func_00304970 == 0) ? 0 : (void *)func_00304970;
}
extern u8 D_005CA030[];
extern u8 D_004B4B57[];
extern u8 D_004B4B58[];
extern u8 D_005D0082[];
extern void func_00125740(void *, s32, s32);
extern s32 D_0047097C;
extern void amCdFs_Close(void *, s32);
extern void *amFile_Load();

void func_00304DC0(s32 a0, s32 a1) {
    memset(D_005CA030, 0, 0x6060);
    func_00125740(D_005CA030, a0, 0x5DD0);
    D_004B4B57[0] = a1;
    D_004B4B58[0] = 0;
    if (a1 < 3) {
        D_005D0082[0] = a1 + 3;
    } else {
        D_005D0082[0] = 5;
    }
}
extern u8 D_005CA030[];
extern s32 gTourMap;

void TourMap_Clear(void) {
    gTourMap = 0;
    memset(D_005CA030, 0, 0x6060);
}
void TourMap_Exit(void) {
    s32 s1;
    s32 s0;

    Zenie_Release();
    if (*(s32 *)(*(u8 **)((u8 *)gTourMap + 0x40) + 0x38) != 0) {
        func_00209530(*(void **)(*(u8 **)((u8 *)gTourMap + 0x40) + 0x38));
    }
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gTourMap + s0) != 0) {
            amCdFs_Close(*(void **)((u8 *)gTourMap + s0), 0);
        }
        s1++;
        s0 += 4;
    } while (s1 < 9);
    amTask_KillGroup(0x200, 0x2000, 0);
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gTourMap + s0 + 0x74) != 0) {
            func_0029E450(*(void **)((u8 *)gTourMap + s0 + 0x74));
            *(s32 *)((u8 *)gTourMap + s0 + 0x74) = 0;
        }
        s1++;
        s0 += 4;
    } while (s1 < 2);
    amHeap_Free((void *)gTourMap);
    gTourMap = 0;
}
extern void *amTask_Create();
extern void TourMap_TaskMain();
extern char D_0046F9A0[];

void TourMap_Start(void) {
    *(void **)((u8 *)gTourMap + 0x3C) = amTask_Create(TourMap_TaskMain, 0, 0x3000, 0x200, 0x2000, D_0046F9A0);
    memset(*(u8 **)((u8 *)gTourMap + 0x3C) + 0x30, 0, 0xC);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304FB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305130);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_003053D0);
#if 0
// differs: the local float arrays are stored in another order (the zero store and the 320.0f register differ) and the branch layout of the two ranges is not reproduced
void func_00305590(void) {
    f32 b[4];
    f32 a[4];
    f32 f;

    b[0] = 320.0f;
    b[2] = 0.0f;
    b[1] = 400.0f;
    b[3] = 1.0f;
    a[0] = 1.0f;
    a[1] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    f = *(f32 *)((u8 *)D_0047097C + 8);
    if (1100.0f < f) {
        if (f < 1300.0f) {
            func_00305130(b, a, *(s32 *)((u8 *)D_0047097C + 0x15C), 0, 0x800000);
            return;
        }
    }
    if (f <= 1400.0f) {
        if (f < 1500.0f) {
            func_00305130(b, a, *(s32 *)((u8 *)D_0047097C + 0x15C), 1, 0x800000);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305590);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305680);
s32 func_00305830(s32 a0) {
    switch (a0) {
    case 0:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 7:
        return 4;
    case 0xA:
        return 5;
    case 0xB:
        return 6;
    case 0xC:
        return 7;
    case 0xD:
        return 8;
    case 0x11:
        return 9;
    case 0x22:
        return 10;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305910);
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);
extern void func_001F07D0(void);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void func_00304970(void);

extern void func_002A9080(void *);

void TourMap_StopAdx(u8 *a0) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
    func_002A9080(*(void **)a0);
}
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);

void func_00305AD0(void) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
}
extern void *D_00470980;
extern void amHeap_Free(void *);
void func_00305B60(u8 *a0) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
    if (D_00470980 != 0) {
        amHeap_Free(D_00470980);
        D_00470980 = 0;
    }
    func_002A9080(*(void **)a0);
}
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);

void func_00305C20(void) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305CB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305E90);
#if 0
// differs: the second loop's counter and pointer take the registers of the first loop (s0/s1 swapped), the same variable cannot be reused in C
void func_00306060(void) {
    s32 i;
    u8 *s2;
    u8 *s0;
    u8 *s1;
    u8 *p;

    s2 = (u8 *)D_0047097C;
    i = 0;
    s0 = s2;
    do {
        p = *(u8 **)(s0 + 0x24);
        *(s32 *)(s0 + 0x24) = *(s32 *)(p + 0x40);
        *(s32 *)(p + 0x40) = 0;
        amCdFs_Close(p, 0);
        i++;
        s0 += 4;
    } while (i < 0x2C);
    *(s32 *)(s2 + 0xD4) = *(s32 *)(*(u8 **)(s2 + 0x24) + 0x50);
    *(s32 *)(s2 + 0xD8) = *(s32 *)(*(u8 **)(s2 + 0x28) + 0x50);
    *(s32 *)(s2 + 0xF4) = *(s32 *)(*(u8 **)(s2 + 0x44) + 0x50);
    i = 0;
    s1 = s2;
    do {
        *(s32 *)(s1 + 0x150) = *(s32 *)(*(u8 **)(s1 + 0xA8) + 0x50);
        amFile_Load(*(void **)(s1 + 0x150), 0);
        i++;
        s1 += 4;
    } while (i < 2);
    *(s32 *)(s2 + 0x158) = *(s32 *)(*(u8 **)(s2 + 0xB0) + 0x50);
    amFile_Load(*(void **)(s2 + 0x158), 0);
    *(s32 *)(s2 + 0x15C) = *(s32 *)(*(u8 **)(s2 + 0xB4) + 0x50);
    *(s32 *)(s2 + 0x160) = *(s32 *)(*(u8 **)(s2 + 0xB8) + 0x50);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306060);
#if 0
// differs: 13 of 52: the byte test, the list append and the tail store match in shape; the register roles of the three tables and the copy pointer differ (the original takes the first table base into  and the list pointer into )
extern s32 D_00458DE0[];
extern s32 D_00458DE8[];
extern u8 D_004E6560[];
extern u8 D_004E0660[];

void func_00306140(void) {
    u8 *p;
    u8 *q;
    s32 k;
    s32 t4;
    s32 i;
    s32 j;
    s32 w;
    p = (u8 *)D_0047097C;
    k = 0;
    i = 0;
    j = 0;
    q = p;
    do {
        w = *(s32 *)(p + 0xC);
        t4 = *(s32 *)((u8 *)D_00458DE0 + w * 12 + j);
        if (D_004E6560[t4 + 0x2AF19] < D_004E0660[t4 * 40 + 0xD]) {
            *(s32 *)(q + 0x14) = t4;
            k++;
            q += 4;
        }
        i++;
        j += 4;
    } while (i < 2);
    w = *(s32 *)(p + 0xC);
    *(s32 *)(p + 0x14 + k * 4) = D_00458DE8[w * 3];
    k++;
    *(s32 *)(p + 0x10) = k;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306140);
