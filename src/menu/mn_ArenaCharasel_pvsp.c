#include "common.h"

extern s16 ArenaList_GetF0(void *);
extern void Help_TaskKill(s32);
extern s16 func_0027D3B0(s32, s32);
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_005C4126[];
extern s8 D_0058F66A[];
extern void func_00309000(u8 *);
extern s16 ArenaList_GetF2(void *);
extern u8 D_00492FCE[];
extern s16 D_005C4122[];
extern void func_0030D300(void *);
extern void func_00308BD0(u8 *);
extern void func_00308AF0(u8 *);
extern s8 func_0027DAA0(void *);
extern s16 func_0027DAE0(void *);
extern s16 func_0027DAD0(void *);
extern s8 func_0027DAB0(void *);
extern void func_0027DB20(void *);
extern s16 D_005C412A[];
extern void func_00308E40(u8 *);
extern void func_00308DA0(u8 *);

extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00308A90(u8 *a0) {
    u8 *s0;
    s0 = a0;
    A2d_FlushList();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00308AE0(void) {
}
void func_00308AF0(u8 *a0) {
    u8 *s1;
    u8 *s0;
    s32 s2;
    s32 v;

    s1 = a0;
    s0 = s1 + 0x30;
    if (ArenaList_GetF0(*(void **)(a0 + 0x34)) != 7) {
        return;
    }
    Help_TaskKill(*(s32 *)(s0 + 4));
    *(s32 *)(s0 + 4) = 0;
    s2 = D_005C4126[s0[0xD]];
    D_0058F66A[s0[0xD]] = s0[0xD];
    v = func_0027D3B0(s0[0xD], 0);
    v = func_0027E2D0(5, s0[0xF], s0[0x10], -1, s2 & 0xFF, v & 0xFF, 0, 3);
    *(s32 *)s0 = v;
    *(void **)(s1 + 0x1C) = ((void *)func_00309000 == 0) ? 0 : (void *)func_00309000;
}
extern s16 ArenaList_GetF0(void *);
extern void func_00308C40();

void func_00308BD0(u8 *a0)
{
  u8 *s0;
  u8 *s1;
  s32 t;
  s16 r;
  s0 = a0;
  s1 = a0 + 0x30;
  r = ArenaList_GetF0(*((void **) (a0 + 0x34)));
  if (r == 4)
  {
    t = *((s32 *) (s1 + 8));
    if (((!r) && (!r)) && (!r))
    {
    }
    *((u8 *) (((*((u8 *) (s1 + 0xD))) + t) + 0x11)) = 0;
    *((void **) (s0 + 0x1C)) = (((void *) func_00308C40) == 0) ? (0) : ((void *) func_00308C40);
  }
}

void func_00308C40(u8 *a0)
{
    s32 a2;
    s32 a1;
    u8 *s0;
    u8 *s1;
    u8 *_p4;
    s1 = a0;
    s0 = (s1 + 0x30);
    if ((ArenaList_GetF2(*((void **)((a0 + 0x34)))) == 1))
    {
        _p4 = ((u8 *)*((u32 *)((s0 + 8))));
        a2 = s0[0xD];
        *((u8 *)((((u8 *)(_p4 + 0x11)) + a2))) = 1;
        *((void **)((s1 + 0x1C))) = (((((void *)func_00308BD0) == 0)) ? 0 : ((void *)func_00308BD0));
        return;
    }
    if ((ArenaList_GetF0(*((void **)((s0 + 4)))) == 5))
    {
        return;
    }
    a1 = s0[0xD];
    if ((((*((u16 *)(((a1 * 184) + D_00492FCE))) & 0x300)) == 0))
    {
        return;
    }
    s0[0xE] = 0;
    *((s16 *)(((((u8 *)(D_005C4122)) + ((s32)((s0[0xD] * 2))))))) = 0;
    func_0030D300(*((void **)((s0 + 4))));
    *((void **)((s1 + 0x1C))) = (((0 == ((void *)func_00308AF0))) ? 0 : ((void *)func_00308AF0));
}
extern s16 ArenaList_GetF0(void *);

void func_00308D50(u8 *a0) {
    u8 *s0;
    void *f;
    s16 r;
    s0 = a0;
    r = ArenaList_GetF0(*(void **)(a0 + 0x34));
    if (r >= 4) {
        f = (void *)func_00308C40;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern s8 func_0027DAB0(void *);
extern void func_0027E120(void *);
extern s8 D_0058F66A[];
extern s32 ArenaRegCharList_Start(s32, s32, s32);
extern void func_00308D50();

void func_00308DA0(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s8 r;
    s1 = a0;
    s0 = a0 + 0x30;
    r = func_0027DAB0(*(void **)(a0 + 0x30));
    if (r >= 7) {
        func_0027E120(*(void **)s0);
        *(s32 *)s0 = 0;
        D_0058F66A[*(u8 *)(s0 + 0xD)] = -2;
        *(s32 *)(s0 + 0x4) = ArenaRegCharList_Start(*(u8 *)(s0 + 0x12), *(u8 *)(s0 + 0x11), *(u8 *)(s0 + 0x11));
        *(void **)(s1 + 0x1C) = ((void *)func_00308D50 == 0) ? 0 : (void *)func_00308D50;
    }
}
extern s8 func_0027DAB0(void *);
extern void func_00308EB0();

extern u8 *D_0047098C;
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00309680();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);
extern u8 *D_0047098C;
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00309680();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);
void func_00308E40(u8 *a0)
{
  u8 *s0;
  u8 *s1;
  s32 t;
  s16 r;
  s0 = a0;
  s1 = a0 + 0x30;
  r = func_0027DAB0(*((void **) (a0 + 0x30)));
  if (r == 4)
  {
    t = *((s32 *) (s1 + 8));
    if (((!r) && (!r)) && (!r))
    {
    }
    *((u8 *) (((*((u8 *) (s1 + 0xD))) + t) + 0x11)) = 0;
    *((void **) (s0 + 0x1C)) = (((void *) func_00308EB0) == 0) ? (0) : ((void *) func_00308EB0);
  }
}

void func_00308EB0(u8 *a0)
{
    u32 a1;
    u8 *s0;
    u8 *s1;
    s32 a2;
    u8 *_p4;
    s1 = a0;
    s0 = (s1 + 0x30);
    if ((func_0027DAA0(*((void **)((a0 + 0x30)))) == 1))
    {
        _p4 = ((u8 *)*((s32 *)((s0 + 8))));
        a2 = s0[0xD];
        *((u8 *)((((u8 *)(_p4 + 0x11)) + a2))) = 1;
        *((void **)((s1 + 0x1C))) = (((((void *)func_00308E40) == 0)) ? 0 : ((void *)func_00308E40));
        return;
    }
    D_005C4126[s0[0xD]] = func_0027DAE0(*((void **)s0));
    D_005C412A[s0[0xD]] = func_0027DAD0(*((void **)s0));
    if ((func_0027DAB0(*((void **)s0)) == 5))
    {
        return;
    }
    a1 = s0[0xD];
    if ((((*((u16 *)((D_00492FCE + (a1 * 184)))) & 0x300)) == 0))
    {
        return;
    }
    s0[0xE] = 1;
    D_005C4122[s0[0xD]] = 1;
    func_0027DB20(*((void **)s0));
    *((void **)((s1 + 0x1C))) = (((((void *)func_00308DA0) == 0)) ? 0 : ((void *)func_00308DA0));
}
extern s8 func_0027DAB0(void *);
extern void func_00308EB0();

void func_00309000(u8 *a0) {
    u8 *s0;
    s8 r;
    s0 = a0;
    r = func_0027DAB0(*(void **)(a0 + 0x30));
    if (r >= 4) {
        *(void **)(s0 + 0x1C) = ((void *)func_00308EB0 == 0) ? 0 : (void *)func_00308EB0;
    }
}
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_0022C060(void *, f32);
extern void func_0022CD00(void *);

void func_00309050(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 v;
    void *q;

    p[0] = *(void **)(s + 0x14);
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
extern f32 gFrameDelta;
extern u8 *D_0047098C;
extern u8 D_004B4B56[];
extern s16 D_005C9F04[];
extern void func_0028DF20(void);
extern void ArenaStageSel_Start(s32);
extern void func_002D1C50(void);

void func_003090F0(u8 *a0) {
    u8 *g;
    u8 *s = *(u8 **)(a0 + 0x30);
    u8 *v;
    void *q;
    s32 i;
    f32 t;

    g = D_0047098C;
    if (*(f32 *)(s + 0x1C) < 1.0f) {
        *(f32 *)(s + 0x1C) = *(f32 *)(s + 0x1C) + 0.05f * gFrameDelta;
    }
    if (*(f32 *)(s + 0x1C) > 1.0f) {
        *(f32 *)(s + 0x1C) = 1.0f;
    }
    if (*(f32 *)(s + 0x1C) < 1.0f) {
        void *p[1] = {0};
        s32 m;

        p[0] = *(void **)(s + 0x14);
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
        t = *(f32 *)(s + 0x1C);
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309250);
extern void func_00309250(void);
extern f32 gFrameDelta;

void func_003095A0(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x30);
    void *p[1] = {0};
    s32 i;
    s32 v;
    void *q;
    f32 f;

    p[0] = *(void **)(s + 0x14);
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
    f = *(f32 *)(s + 0x18) - gFrameDelta;
    *(f32 *)(s + 0x18) = f;
    if (f <= 0.0f) {
        *(void **)(a0 + 0x1C) = ((void *)func_00309250 == 0) ? 0 : (void *)func_00309250;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309680);
extern u8 *D_0047098C;

void ArenaCharaselPvsp_Clear(void) {
    D_0047098C = 0;
    func_0027E040();
    func_0030D180();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsp", func_00309B20);
extern char D_0046FAC0[];
extern char D_0046FAE0[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00309680();

// differs: same as func_00308980: task pointer kept in a variable, callback address lui/addiu
void func_00309CD0(void)
{
  u8 *t;
  u8 *m;
  u8 *s0;
  s0 = D_0047098C;
  *((void **) (s0 + 8)) = (t = amTask_Create(func_00309680, 0, 0x2000, 8, 2, D_0046FAC0));
  m = t + 0x30;
  *((s32 *) (t + 0x34)) = 0xA;
  s0 = m;
  *((void **) s0) = (m = amHeap_Alloc(32, 0, D_0046FAE0, 156));
  memset(m, 0, 32);
  Scene_SetReady();
}

extern u8 *D_0047098C;
extern char D_0046FAE0[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);

void ArenaCharaselPvsp_Load(void) {
    u8 *s0;
    s0 = D_0047098C = amHeap_Alloc(0x14, 0, D_0046FAE0, 0x72);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0x0) = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
    ArenaRegCharList_Load();
}
