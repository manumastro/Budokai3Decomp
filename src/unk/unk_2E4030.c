#include "common.h"

/* The init block of the movie player: 0x24 bytes, built on the stack. */
typedef struct SofInit {
    s32 a0;
    s32 a4;
    s32 a8;
    s32 aC;
    s32 a10;
    s32 a14;
    s32 a18;
    void *a1C;
    s16 a20;
} SofInit;

typedef struct Ac2E4 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    void *f30;
} Ac2E4;

extern s32 D_0046FD5C;
extern void *amSofdec_Create(SofInit *);
/* The movie task: the player handle, the wanted and the played movie index. */
typedef struct SofPlay {
    s32 h;
    s16 cur;
    s16 prev;
} SofPlay;

typedef struct SofTask {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    SofPlay p;
} SofTask;

/* The movie file ids (D_00456DD0), copied to the stack. */
typedef struct SofIds {
    s32 f0[12];
    f32 f30;
} SofIds __attribute__((aligned(16)));

extern SofIds D_00456DD0;
extern s32 amSofdec_GetStat(s32);
extern void amSofdec_StartAfs(s32, s32, s32);
extern void amSofdec_Destroy(s32);
extern void func_002E54A0(SofTask *);
extern void Sofdec_TaskMain(struct Ac2E4 *);

typedef struct Obj2E4 {
    char pad0[4];
    s32 f4;
    s32 f8;
    char pad0C[8];
    s32 f14;
    s16 f18;
    char pad1A[6];
    s32 f20;
    s32 f24;
    s32 f28;
    f32 f2C;
    s32 f30;
    s32 f34;
    f32 f38;
    f32 f3C;
    char pad40[0x10];
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
} Obj2E4;

typedef struct Ctx2E4 {
    char pad0[0x28];
    void *f28;
} Ctx2E4;

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

void ArenaStageSel_CreateObj(Ctx2E4 *c) {
    Obj2E4 *o;

    o = A2d_AllocObj(0.0f, 0);
    c->f28 = o;
    c = (Ctx2E4 *)o;
    memset(c, 0, 0x60);
    o = (Obj2E4 *)c;
    o->f4 = 1;
    o->f14 = -1;
    o->f18 = -1;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2C = 1.0f;
    o->f34 = 0;
    o->f3C = D_00470430;
    o->f30 = 0;
    o->f38 = D_0047042C;
    o->f50 = 0;
    o->f54 = 0;
    o->f58 = 0;
    o->f5C = 0;
    o->f8 = 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E40D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E44A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E46A0);
typedef struct Vec4a {
    f32 x, y, z, w;
} __attribute__((aligned(16))) Vec4a;

extern Vec4a D_00456E20;
extern Vec4a D_00456E30;
extern Vec4a D_00456E40;
extern void amModel_SetCurrent(s32, s32);
extern void func_00134690(s32, s32, void *, s32, s32, s32);
extern void func_00135F10(Vec4a *, Vec4a *);
extern void amDraw_FlushPacket(void);

void func_002E4AC0(u8 *a0) {
    Vec4a p50;
    Vec4a q40;
    Vec4a r30;

    p50 = D_00456E20;
    q40 = D_00456E30;
    r30 = D_00456E40;
    amModel_SetCurrent(*(s32 *)(a0 + 4), 0x7000);
    func_00134690(1, 0x101924, &r30, 0x19, 0x44, 5);
    *(s32 *)&p50.x = 0x437A0000;
    *(s32 *)&p50.y = 0x437A0000;
    *(s32 *)&q40.x = 0x3BC00000;
    *(s32 *)&q40.y = 0x3BC00000;
    func_00135F10(&p50, &q40);
    *(s32 *)&p50.x = 0xC37A0000;
    *(s32 *)&q40.x = 0x3F1C8000;
    func_00135F10(&p50, &q40);
    *(s32 *)&p50.x = 0x437A0000;
    *(s32 *)&p50.y = 0xC37A0000;
    *(s32 *)&q40.x = 0x3BC00000;
    *(s32 *)&q40.y = 0x3F1C8000;
    func_00135F10(&p50, &q40);
    *(s32 *)&p50.x = 0xC37A0000;
    *(s32 *)&q40.x = 0x3F1C8000;
    func_00135F10(&p50, &q40);
    amDraw_FlushPacket();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4D60);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern u8 D_0046F4B8[];
extern s32 func_0022D670(s32, f32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void amModel_SetCurrent(s32, s32);
extern f32 gFrameDelta;
extern void func_002E5C20();
extern void func_002E5260(u8 *);
void func_002E5040(u8 *a0) {
    s32 f4;

    f4 = *(s32 *)(a0 + 4);
    D_00470704 = f4;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(f4, 0x7000);
    D_00470238 = 0;
    if (*(s32 *)(a0 + 0x10) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x10), 0);
    }
    *(s32 *)(a0 + 0x10) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x0), 0.0f);
    if (*(s32 *)(a0 + 0x18) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x18), 0);
    }
    *(s32 *)(a0 + 0x18) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x4), 0.0f);
    if (*(s32 *)(a0 + 0x14) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x14), 0);
    }
    *(s32 *)(a0 + 0x14) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x14), 0.0f);
    if (*(s32 *)(a0 + 0x1C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x1C), 0);
    }
    *(s32 *)(a0 + 0x1C) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x20), 0.0f);
    if (*(s32 *)(a0 + 0x24) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x24), 0);
    }
    *(s32 *)(a0 + 0x24) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x28), 0.0f);
}
void func_002E5170(u8 *a0) {
    s32 f4;

    f4 = *(s32 *)(a0 + 4);
    D_00470704 = f4;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(f4, 0x7000);
    D_00470238 = 0;
    *(s32 *)(a0 + 0x10) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0xC), 0.0f);
    *(s32 *)(a0 + 0x14) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x10), 0.0f);
    *(s32 *)(a0 + 0x18) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x8), 0.0f);
    *(s32 *)(a0 + 0x1C) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x18), 0.0f);
    *(s32 *)(a0 + 0x20) = func_0022D670(((s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C)))[D_0046F4B8[*(s16 *)(a0 + 0xF0)]], 0.0f);
    *(s32 *)(a0 + 0x24) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x24), 0.0f);
    func_002E5260(a0);
}
/* differs: compiled 0x144 against 0x150: the original keeps one more value live across the calls (it saves s7 as well:
   step), ours keeps seven saved registers; the walking pointer variant (e260_c) gave 0x13C. */
#if 0
void func_002E5260(u8 *a0) {
    u8 *base;
    s32 step;
    s32 i;
    s32 n;
    s32 idx;
    s32 off;
    u8 *q;
    s32 v;

    base = a0;
    step = 0x10000 / a0[0xF3];
    for (i = 0; i < 13; i++) {
        q = base + 0x30 + i * 12;
        if (*(s32 *)q != 0) {
            func_0022D0E0(*(s32 *)q, 0);
            *(s32 *)q = 0;
        }
    }
    if (a0[0xF3] > 0) {
        n = 0;
        idx = 0;
        off = 0;
        q = base;
        while (n < a0[0xF3]) {
            v = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)base + 0x1C) + 0x130), 0.0f);
            *(s32 *)(q + 0x30) = v;
            *(s32 *)(q + 0x34) = off;
            *(s16 *)(q + 0x38) = *(s16 *)(base + 0xD6 + n * 2);
            if (*(s16 *)(q + 0x38) == *(s16 *)(base + 0xF0)) {
                idx = (s16)n;
            }
            n++;
            q += 12;
            off += step;
        }
    }
    a0[0xF2] = (u8)idx;
    *(s32 *)(base + 0xF8) = *(u16 *)(base + (s16)idx * 12 + 0x34);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5260);
extern void func_002E5260(u8 *);

void func_002E53B0(u8 *a0, s16 a1) {
    u8 *obj;
    s32 n;
    s32 i;
    u8 *p;
    obj = a0;
    *(s16 *)(obj + 0xD2) = a1;
    n = 0;
    *(s16 *)(obj + 0xD4) = a1;
    memset(obj + 0xD6, -1, 0x1A);
    i = 0;
    p = obj;
    for (; i < 0xD; i++) {
        if (*(u16 *)(obj + 0xD2) & (1 << i)) {
            *(s16 *)(p + 0xD6) = i;
            n++;
            p += 2;
        }
    }
    obj[0xF3] = n;
    *(s32 *)(obj + 0x104) = 0x10000 / (obj[0xF3] * 12);
    if (obj[0xF4] == 2) {
        func_002E5260(obj);
    }
}
extern void A2d_FlushList(void);

void ArenaStage_TaskEnd(void) {
    A2d_FlushList();
}
void ArenaStage_TaskStart(void) {
}
void func_002E54A0(SofTask *s) {
    SofIds ids = D_00456DD0;
    SofPlay *p = &s->p;
    s32 v;
    s32 st;

    if (p->h >= 0) {
        st = amSofdec_GetStat(p->h);
        /* FAKEMATCH: the original has the trapping addi v1,v0,1 (stat + 1) that the compiler never emits; it is an asm
         * statement here and the cases are shifted by one. */
        asm { addi v, st, 1 }
        switch (v) {
        case 1:
        case 4:
            if (p->cur >= 0) {
                amSofdec_StartAfs(p->h, ids.f0[p->cur], -1);
            }
            p->prev = p->cur;
            break;
        case 3:
            if (p->cur >= 0 && p->cur == p->prev) {
                break;
            }
            if (p->h >= 0) {
                amSofdec_Destroy(p->h);
            }
            p->h = -1;
            s->f1C = (Sofdec_TaskMain == NULL) ? NULL : (void *)Sofdec_TaskMain;
            break;
        case 2:
            break;
        case 5:
        case 0:
            if (p->h >= 0) {
                amSofdec_Destroy(p->h);
            }
            p->h = -1;
            s->f1C = (Sofdec_TaskMain == NULL) ? NULL : (void *)Sofdec_TaskMain;
            break;
        }
    }
}
void Sofdec_TaskMain(Ac2E4 *s) {
    SofInit in;

    in.a0 = 0;
    in.a4 = 1;
    in.a8 = 0x1C2000;
    in.aC = 0x400;
    in.a10 = 0x200;
    in.a14 = 3;
    in.a18 = -1;
    in.a1C = (void *)D_0046FD5C;
    in.a20 = 0x60;
    s->f30 = amSofdec_Create(&in);
    s->f1C = (func_002E54A0 == NULL) ? NULL : (void *)func_002E54A0;
}
typedef struct Sub57 {
    char pad0[0xC];
    s32 f0C;
    char pad10[0xC0];
    u16 fD0;
} Sub57;

typedef struct Outer57 {
    char pad0[0x30];
    Sub57 *f30;
} Outer57;

void func_002E4D60(Sub57 *);
s16 func_002F4A80(s32);
void func_002F4A90(s32);
void func_0028DF20(void);
void ArenaStageSel_Exit(Outer57 *);
void Scene_Request(s32, s32);
void func_001F07E0(s32, s32);

typedef struct Dat2E5 {
    char pad0[0x28];
    void *f28;
    f32 f2C;
    char pad30[0xA0];
    u16 fD0;
    char padD2[0x3A];
    f32 f10C;
} Dat2E5;

typedef struct Own2E5 {
    char pad0[0x30];
    Dat2E5 *f30;
} Own2E5;

extern f32 gFrameDelta;
extern s16 D_005C9F04[];
extern s16 D_005C4138[];
extern void amAdx_Stop(s32);
extern void func_0022D4B0(s32, s32);
extern void func_0022CF70(s32);
extern void func_002D1CC0(void);
extern void ArenaCharasel_Load(void);
extern void func_0028DF20(void);

void func_002E5690(Own2E5 *a0) {
    Dat2E5 *s0 = a0->f30;

    s0->f10C = s0->f10C - gFrameDelta;
    if (s0->f10C >= 0.0f) {
        s0->f2C = 1.0f - s0->f10C / 60.0f;
        func_002E4D60((Sub57 *)s0);
        *(f32 *)((u8 *)s0->f28 + 0x5C) = s0->f2C;
        func_0022CF70((s32)s0->f28);
    } else {
        amAdx_Stop(1);
        if (s0->f28 != NULL) {
            func_0022D4B0((s32)s0->f28, 0);
            s0->f28 = NULL;
        }
        D_005C9F04[0] = -1;
        if (s0->fD0 & 0x80) {
            func_0028DF20();
        }
        D_005C4138[0] = 1;
        ArenaStageSel_Exit((Outer57 *)a0);
        ArenaCharasel_Load();
        func_002D1CC0();
    }
}
void func_002E57A0(Outer57 *a) {
    Sub57 *s;

    s = a->f30;
    func_002E4D60(s);
    if (func_002F4A80(s->f0C) == 4) {
        func_002F4A90(s->f0C);
        s->f0C = 0;
        if (a->f30->fD0 & 0x80) {
            func_0028DF20();
        }
        ArenaStageSel_Exit(a);
        Scene_Request(0x19, 0);
        func_001F07E0(0xA, 0);
    }
}
/* differs: compiled 0x134 against 0x140. The original keeps the outer pointer in s1 (a0 is moved to s1 first) and the f30 pointer in s0; ours is the other way round whatever the declaration order (tried 4 orders, with and without initialisers). The 0x20 stack copy of D_00456DB0 is lq+ld+lwc1+lh in the original (30 bytes); ours copies 2 x lq (a packed 30-byte struct and char arrays gave the same code). */
#if 0
typedef struct Par2E5 {
    s16 e[12];
    f32 f18;
    s16 s1C;
} Par2E5;

extern Par2E5 D_00456DB0;
extern s16 D_00453490[];
extern s16 D_005C9ED4[];
extern s8 D_004B4B5B[];
extern s32 D_005C9EE0[];
extern s32 IpSysWnd_Start();

void func_002E5840(Outer57 *a0) {
    Dat2E5 *s0;
    f32 f;
    Par2E5 loc;
    s32 ret;

    s0 = (Dat2E5 *)a0->f30;
    func_002E4D60((Sub57 *)s0);
    f = s0->f10C - gFrameDelta;
    s0->f10C = f;
    if (f <= 0.0f) {
        if (D_005C9F04[0] >= 1000) {
            loc = D_00456DB0;
            D_005C9ED4[0] = D_00453490[loc.e[(s16)(D_005C9F04[0] - 1000)] * 2];
            ret = IpSysWnd_Start(7, loc.s1C);
            D_004B4B5B[0] = ret;
            a0->f30->f0C = ret;
            *(void **)((u8 *)a0 + 0x1C) = (func_002E57A0 == NULL) ? NULL : (void *)func_002E57A0;
        } else {
            D_005C9EE0[0] = -1;
            if (a0->f30->fD0 & 0x80) {
                func_0028DF20();
            }
            ArenaStageSel_Exit(a0);
            Scene_Request(0x19, 0);
            func_001F07E0(0xA, 0);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5980);
/* differs: 0xFC against 0x110 bytes: the only mismatch is the tail: the original stores func_002E5C20 through a register (lui/addiu, bnez over a zero, then sw at 0x1C); the one-line store here is a plain sw of the constant. Tried: ?: with NULL (35 of 67 differ). */
#if 0
void func_002E5B10(u8 *a0) {
    u8 *s0;
    f32 f;

    s0 = *(u8 **)(a0 + 0x30);
    *(s32 *)(s0 + 0xF8) = *(s32 *)(s0 + 0xF8) + *(s32 *)(s0 + 0x100);
    func_002E4D60((Sub57 *)s0);
    f = *(f32 *)(s0 + 0x108) - gFrameDelta;
    *(f32 *)(s0 + 0x108) = f;
    if (f <= 0.0f) {
        *(s16 *)(*(u8 **)(s0 + 0x114) + 0x34) = *(s16 *)(s0 + 0xF0);
        *(u8 *)(s0 + 0xCE) = 0;
        D_00470704 = *(s32 *)(s0 + 4);
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(*(s32 *)(s0 + 4), 0x7000);
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            func_0022D0E0(*(s32 *)(s0 + 0x20), 0);
        }
        *(s32 *)(s0 + 0x20) = func_0022D670(((s32 *)(*(u8 **)(*(u8 **)s0 + 0x1C)))[D_0046F4B8[*(s16 *)(s0 + 0xF0)]], 0.0f);
        *(u8 *)(s0 + 0xF4) = 2;
        *(s32 *)(s0 + 0xF8) = *(s32 *)(s0 + 0xFC);
        *(void **)(a0 + 0x1C) = (void *)func_002E5C20;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5B10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5C20);
