#include "common.h"

extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(void *, f32);
extern void func_0022CD00(void *);

void func_00309DE0(u8 *a0) {
    u8 *s0;
    s0 = a0;
    A2d_FlushList();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00309E30(void) {
}
extern u8 *D_00470990;
extern f32 gFrameDelta;
extern u8 D_004B4B56[];
extern s16 D_005C9F04[];
extern void func_0028DF20(void);
extern void ArenaStageSel_Start(s32);
extern void func_002D1C50(void);

void func_00309E40(u8 *a0) {
    u8 *g;
    u8 *s = *(u8 **)(a0 + 0x30);
    u8 *v;
    void *q;
    s32 i;
    f32 t;

    g = D_00470990;
    if (*(f32 *)(s + 0x20) < 1.0f) {
        *(f32 *)(s + 0x20) = *(f32 *)(s + 0x20) + 0.05f * gFrameDelta;
    }
    if (*(f32 *)(s + 0x20) > 1.0f) {
        *(f32 *)(s + 0x20) = 1.0f;
    }
    if (*(f32 *)(s + 0x20) < 1.0f) {
        void *p[1] = {0};
        s32 m;

        p[0] = *(void **)(s + 0x1C);
        D_00470704 = m = *(s32 *)(s + 0x4);
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(m, 0x2000);
        D_00470238 = 0;
        for (i = 0; i < 1; i++) {
            q = p[i];
            if (q != 0) {
                func_0022C060(q, 1.0f);
                func_0022CD00(q);
            }
        }
        v = *(u8 **)(g + 0x10);
        t = *(f32 *)(s + 0x20);
        *(s32 *)(v + 0x30) = 0;
        *(s32 *)(v + 0x34) = 0;
        *(s32 *)(v + 0x38) = 0;
        *(f32 *)(v + 0x3C) = t;
    } else {
        func_0028DF20();
        D_005C9F04[0] = -1;
        ArenaStageSel_Start(D_004B4B56[0]);
        func_002D1C50();
    }
}
extern s16 ArenaList_GetF0(void *);
extern void Help_TaskKill(void *);
extern s32 func_0027E2D0();
extern s8 func_0027DAB0(void *);
extern void func_0027E120(void *);
extern void *ArenaRegCharList_Start(s32, s32, s32);
extern u8 D_005C4128[];
extern u8 D_005C412C[];
extern s16 D_005C4124[];
extern void func_0030A120();

void func_00309FA0(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 m;
    void *q;

    p[0] = *(void **)(s + 0x1C);
    D_00470704 = m = *(s32 *)(s + 0x4);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x2000);
    D_00470238 = 0;
    for (i = 0; i < 1; i++) {
        q = p[i];
        if (q != 0) {
            func_0022C060(q, 1.0f);
            func_0022CD00(q);
        }
    }
    if (*(u8 *)(s + 0x1A) != 0) {
        if (ArenaList_GetF0(*(void **)(s + 0x14)) != 7) {
            return;
        }
        Help_TaskKill(*(void **)(s + 0x14));
        *(void **)(s + 0x14) = 0;
        *(s32 *)(s + 0xC) = func_0027E2D0(5, 7, 0, -1, D_005C4128[0], D_005C412C[0], 0, 3);
        *(u8 *)(s + 0x1A) = 0;
    } else {
        if (func_0027DAB0(*(void **)(s + 0xC)) < 7) {
            return;
        }
        func_0027E120(*(void **)(s + 0xC));
        *(void **)(s + 0xC) = 0;
        *(void **)(s + 0x14) = ArenaRegCharList_Start(5, 1, 0xFF);
        *(u8 *)(s + 0x1A) = 1;
    }
    D_005C4124[0] = *(u8 *)(s + 0x1A);
    *(void **)(a0 + 0x1C) = ((void *)func_0030A120 == 0) ? 0 : (void *)func_0030A120;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A120);
extern u8 D_005C4126[];
extern u8 D_005C412A[];
extern s16 D_005C4122[];
extern void func_0030A5E0();

void func_0030A3C0(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 m;
    void *q;

    p[0] = *(void **)(s + 0x1C);
    D_00470704 = m = *(s32 *)(s + 0x4);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x2000);
    D_00470238 = 0;
    for (i = 0; i < 1; i++) {
        q = p[i];
        if (q != 0) {
            func_0022C060(q, 1.0f);
            func_0022CD00(q);
        }
    }
    if (*(u8 *)(s + 0x19) != 0) {
        if (ArenaList_GetF0(*(void **)(s + 0x10)) != 7) {
            return;
        }
        Help_TaskKill(*(void **)(s + 0x10));
        *(void **)(s + 0x10) = 0;
        *(s32 *)(s + 0x8) = func_0027E2D0(5, 6, 0, -1, D_005C4126[0], D_005C412A[0], 0, 3);
        *(u8 *)(s + 0x19) = 0;
    } else {
        if (func_0027DAB0(*(void **)(s + 0x8)) < 7) {
            return;
        }
        func_0027E120(*(void **)(s + 0x8));
        *(void **)(s + 0x8) = 0;
        *(void **)(s + 0x10) = ArenaRegCharList_Start(5, 0, 0xFF);
        *(u8 *)(s + 0x19) = 1;
    }
    D_005C4122[0] = *(u8 *)(s + 0x19);
    *(void **)(a0 + 0x1C) = ((void *)func_0030A5E0 == 0) ? 0 : (void *)func_0030A5E0;
}
void func_0030A540(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 v;
    void *q;

    p[0] = *(void **)(s + 0x1C);
    D_00470704 = v = *(s32 *)(s + 0x4);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    for (i = 0; i < 1; i++) {
        q = p[i];
        if (q != 0) {
            func_0022C060(q, 1.0f);
            func_0022CD00(q);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030A5E0);
extern void func_0030A5E0();
extern f32 gFrameDelta;

void func_0030A950(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 v;
    void *q;
    f32 f;

    p[0] = *(void **)(s + 0x1C);
    D_00470704 = v = *(s32 *)(s + 0x4);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    for (i = 0; i < 1; i++) {
        q = p[i];
        if (q != 0) {
            func_0022C060(q, 1.0f);
            func_0022CD00(q);
        }
    }
    f = *(f32 *)(s + 0x24) - gFrameDelta;
    *(f32 *)(s + 0x24) = f;
    if (f <= 0.0f) {
        *(f32 *)(s + 0x24) = 180.0f;
        *(void **)(a0 + 0x1C) = ((void *)func_0030A5E0 == 0) ? 0 : (void *)func_0030A5E0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030AA40);
extern u8 *D_00470990;

void ArenaCharaselCvsc_Clear(void) {
    D_00470990 = 0;
    func_0027E040();
    func_0030D180();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_cvsc", func_0030AE90);
extern char D_0046FB40[];
extern char D_0046FB60[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_0030AA40();

// differs: same as func_00308980: task pointer kept in a variable, callback address lui/addiu
void func_0030B020(void)
{
  u8 *t;
  u8 *m;
  u8 *s0;
  s0 = D_00470990;
  *((void **) (s0 + 12)) = (t = amTask_Create(func_0030AA40, 0, 0x2000, 8, 2, D_0046FB40));
  m = t + 0x30;
  *((s32 *) (t + 0x34)) = 0xA;
  s0 = m;
  *((void **) s0) = (m = amHeap_Alloc(40, 0, D_0046FB60, 149));
  memset(m, 0, 40);
  Scene_SetReady();
}

extern char D_0046FB60[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);

void ArenaCharaselCvsc_Load(void) {
    u8 *s0;
    s0 = D_00470990 = amHeap_Alloc(0x14, 0, D_0046FB60, 0x6B);
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)s0 = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
    ArenaRegCharList_Load();
}
