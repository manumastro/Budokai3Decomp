#include "common.h"
#include "menu/menu.h"

extern s32 D_0047099C;
extern char D_0046FC30[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 D_004701D8;

extern void func_0030EFF0(Task *);
extern char D_0046FC10[];
extern void Scene_SetReady(void);

void StaffRoll_Start(void) {
    Task *t = amTask_Create(func_0030EFF0, NULL, 0x3000, 8, 2, D_0046FC10);
    *(s16 *)((char *)t + 0x34) = 0;
    Scene_SetReady();
}
void func_0030F260(void) {
}
extern char D_004B4B40[];
extern void func_002A8A20(void *);

void func_0030F270(char *a0) {
    s16 idx = *(s16 *)(a0 + 0xC);
    char *b = *(char **)(a0 + 0x8);
    char *p1 = b + idx * 12;
    char *p2 = b + idx * 14;
    char *v0;
    char *s0;
    p1[0x258] = 0;
    p1[0x259] = 0;
    p1[0x25A] = 0;
    p1[0x25B] = 0;
    p1[0x25C] = 0;
    p1[0x25D] = 0;
    p1[0x25E] = 0;
    p1[0x25F] = 0;
    *(s32 *)(p1 + 0x260) = 0;
    *(s16 *)(p2 + 0x44) = 0;
    *(s16 *)(p2 + 0x46) = 0;
    *(s16 *)(p2 + 0x48) = 0;
    *(s16 *)(p2 + 0x4A) = 0;
    *(s16 *)(p2 + 0x4C) = 0;
    *(s16 *)(p2 + 0x4E) = 0;
    *(s16 *)(p2 + 0x50) = 0;
    idx = *(s16 *)(a0 + 0xC);
    v0 = D_004B4B40 + idx * 4624;
    v0[0x1327] = 0;
    v0[0x1328] = 0;
    v0[0x1329] = 0;
    v0[0x132A] = 0;
    v0[0x132B] = 0;
    v0[0x132C] = 0;
    v0[0x132D] = 0;
    v0[0x132E] = 0;
    s0 = v0 + 0x140;
    func_002A8A20(s0 + 0x11F0);
    *(s32 *)(s0 + 0x1200) = 0;
}
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern f32 gFrameDelta;
extern void func_0022C700();
extern void func_00133B50(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void amModel_SetCurrent(s32, s32);
void func_0030F350(s32 *a0) {
    s32 *s1;
    s32 *s0;
    s1 = (s32 *)a0[0x30 / 4];
    s0 = (s32 *)D_0047099C;
    A2d_FlushList(a0);
    func_00133B50(0, 0);
    {
        s32 v = s0[0xC / 4];
        D_00470704 = v;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x6000);
    }
    D_00470238 = 0;
    if (s1[0] != 0) {
        func_0022C060(s1[0], 1.0f);
        func_0022CD00(s1[0]);
    }
    if (s1[1] != 0) {
        func_0022C060(s1[1], 1.0f);
        func_0022CD00(s1[1]);
    }
    {
        f32 t = *(f32 *)&s1[0x10 / 4] - gFrameDelta;
        *(f32 *)&s1[0x10 / 4] = t;
        if (t <= 0.0f) {
            *((s8 *)s1 + 0xE) = 4;
        }
    }
}
#if 0
// func_0030F420: the timer block: the original keeps the parameter in s1 and loads it again after the call; the order of the first loads and the a0/v0 choice differ (46 of 82 differ); 3 forms tried
extern void func_0030F350(s32 *);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);

void func_0030F420(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s1 = a0;
    s32 *s2;
    f32 t;
    void *f;
    t = *(f32 *)&s0[0x10 / 4] - gFrameDelta;
    *(f32 *)&s0[0x10 / 4] = t;
    if (t <= 0.0f) {
        s0[0x10 / 4] = 0x41A00000;
        s2 = (s32 *)D_0047099C;
        D_00470704 = s2[0xC / 4];
        D_0047070C = 0x6000;
        D_00470708 = 0;
        func_00145CC0(s2[0xC / 4], 0x6000);
        D_00470238 = 0;
        if (s0[0] != 0) {
            func_0022D0E0(s0[0], 1);
        }
        s0[0] = func_0022D860(((s32 *)((s32 *)s2[0x8 / 4])[0x14 / 4])[0x14 / 4], 0.0f);
        f = (void *)func_0030F350;
        s1[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
    func_0022C700();
    s1 = (s32 *)D_0047099C;
    func_00133B50(0, 0);
    D_00470704 = s1[0xC / 4];
    D_0047070C = 0x6000;
    D_00470708 = 0;
    func_00145CC0(s1[0xC / 4], 0x6000);
    D_00470238 = 0;
    if (s0[0] != 0) {
        func_0022C060(s0[0], 1.0f);
        func_0022CD00(s0[0]);
    }
    if (s0[1] != 0) {
        func_0022C060(s0[1], 1.0f);
        func_0022CD00(s0[1]);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F420);
extern void func_0030F420(s32 *);
void func_0030F560(s32 *a0) {
    s32 *s1;
    s32 *s0;
    s1 = (s32 *)a0[0x30 / 4];
    s0 = (s32 *)D_0047099C;
    A2d_FlushList(a0);
    func_00133B50(0, 0);
    {
        s32 v = s0[0xC / 4];
        D_00470704 = v;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x6000);
    }
    D_00470238 = 0;
    if (s1[0] != 0) {
        func_0022C060(s1[0], 1.0f);
        func_0022CD00(s1[0]);
    }
    if (s1[1] != 0) {
        func_0022C060(s1[1], 1.0f);
        func_0022CD00(s1[1]);
    }
    {
        f32 t = *(f32 *)&s1[0x10 / 4] - gFrameDelta;
        *(f32 *)&s1[0x10 / 4] = t;
        if (t <= 0.0f) {
            void *f = func_0030F420;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F650);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F790);
extern void func_0030F270(char *);
extern void func_0030F790(void);
void func_0030F8D0(s32 *a0) {
    s32 *s1;
    s32 *s0;
    s1 = (s32 *)a0[0x30 / 4];
    s0 = (s32 *)D_0047099C;
    A2d_FlushList(a0);
    func_00133B50(0, 0);
    {
        s32 v = s0[0xC / 4];
        D_00470704 = v;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x6000);
    }
    D_00470238 = 0;
    if (s1[0] != 0) {
        func_0022C060(s1[0], 1.0f);
        func_0022CD00(s1[0]);
    }
    if (s1[1] != 0) {
        func_0022C060(s1[1], 1.0f);
        func_0022CD00(s1[1]);
    }
    {
        f32 t = *(f32 *)&s1[0x10 / 4] - gFrameDelta;
        *(f32 *)&s1[0x10 / 4] = t;
        if (t <= 0.0f) {
            void *f;
            func_0030F270((char *)s1);
            f = func_0030F790;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030F9C0);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030FB00);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_0030FF30);
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310080);
u8 func_003101D0(char *p) {
    return ((u8 *)(*(char **)(p + 0x30)))[0xE];
}
void DataErase_Clear(void) {
    D_0047099C = 0;
}
extern void amHeap_Free(void *);

void DataErase_Exit(void) {
    s8 *s0 = (s8 *)D_0047099C;
    s0[0x10] = s0[0x10] - 1;
    if (s0 != 0) {
        return;
    }
    if (*(s32 *)s0 != 0) {
        amCdFs_Close(*(s32 *)s0, 0);
    }
    if (*(s32 *)(s0 + 4) != 0) {
        amCdFs_Close(*(s32 *)(s0 + 4), 0);
    }
    if (*(s32 *)(s0 + 0xC) != 0) {
        amHeap_Free(*(void **)(s0 + 0xC));
    }
    if (*(s32 *)(s0 + 8) != 0) {
        amHeap_Free(*(void **)(s0 + 8));
    }
    amHeap_Free(s0);
    D_0047099C = 0;
}
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
extern char D_0046FC20[];
extern void memset(void *, s32, s32);
extern void func_00310080(Task *);

extern char D_0046FC20[];
extern void memset(void *, s32, s32);

Task *func_00310300(s32 a0, s32 a1) {
    char *s1;
    Task *s0;
    s0 = amTask_Create(func_00310080, NULL, 0x2B00, 8, 2, D_0046FC20);
    *(s32 *)((char *)s0 + 0x30) = (s32)(s1 = (char *)amHeap_Alloc(0x14, 0, D_0046FC30, 0x8A));
    memset(s1, 0, 0x14);
    *(s32 *)(s1 + 0x8) = a0;
    *(s16 *)(s1 + 0xC) = a1;
    s1[0xE] = 1;
    s1[0xF] = 1;
    return s0;
}
void func_003103B0(void) {
    s32 *s0;
    if (D_0047099C != 0) {
        *((s8 *)D_0047099C + 0x10) = *((s8 *)D_0047099C + 0x10) + 1;
    } else {
        D_0047099C = (s32)(s0 = (s32 *)amHeap_Alloc(0x14, 0, D_0046FC30, 0x63));
        s0[0] = amCdFs_ReadFileId(0x107D8, 0, 0);
        s0[1] = amCdFs_ReadFileId(0x107D9, 0, 0);
        s0[2] = 0;
        s0[3] = 0;
        *((s8 *)s0 + 0x10) = 1;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_dataerase", func_00310450);
s32 DataErase_IsReady(void) {
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
