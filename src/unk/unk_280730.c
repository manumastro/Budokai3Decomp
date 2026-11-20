#include "common.h"

/* An actor of this file: its state, a task function at 0x1C, and timers. */
typedef struct Ac280 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x1C];
    s8 f3C;
    char pad3D;
    u16 f3E;
    s16 f40;
    f32 f44;
    s32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
} Ac280;

typedef struct Sub280 {
    char pad0[0xC];
    s8 fC;
    char padD[3];
    s16 f10;
    char padE[2];
    f32 f14;
} Sub280;

typedef struct Sub2C60 {
    char pad0[2];
    s8 f2;
    s8 f3;
    char pad4[8];
    f32 fC;
} Sub2C60;

typedef struct Wrap280 {
    char pad0[0x30];
    Sub2C60 *f30;
} Wrap280;

extern f32 gFrameDelta;
extern void func_002811D0(void *);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void func_0022D4B0(s32, s32);

void func_002807E0(Ac280 *o);
extern void func_00280730(void *);
void func_00280C70(Ac280 *o);
extern s32 D_004532F0[][2];
extern void func_00280AB0(void);

/* differs: the C matches the body (only the gp-relative load of gFrameDelta is a relocation line), but the link then moves
   the gp offset of a data load in mn_VsCharasel.c (VsCharasel_Start: ninja red). Not understood yet; try a different
   gFrameDelta access (e.g. through a local copy) before dropping the idea. */
#if 0
typedef struct F280 {
    char pad0[8];
    void *f8;
    char pad0C[0x10];
    f32 f1C;
    f32 f20;
    f32 f24;
} F280;

typedef struct T280 {
    char pad0[0x50];
    f32 f50;
    f32 f54;
    f32 f58;
} T280;

extern f32 gFrameDelta;
extern void func_0022CF70(void *);

void func_00280730(F280 *o) {
    T280 *t;

    t = o->f8;
    if (o->f24 != 0.0f) {
        o->f1C = o->f1C + o->f24 * gFrameDelta;
        if (o->f24 > 0.0f) {
            if (o->f1C > o->f20) {
                o->f1C = o->f20;
                o->f24 = 0.0f;
            }
        } else {
            if (o->f1C < o->f20) {
                o->f1C = o->f20;
                o->f24 = 0.0f;
            }
        }
    }
    t->f50 = o->f1C;
    t->f54 = o->f1C;
    t->f58 = o->f1C;
    func_0022CF70(o->f8);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280730);
void func_002807D0(void) {
}
void func_002807E0(Ac280 *o) {
    Sub280 *q = (Sub280 *)((u8 *)o + 0x30);
    u8 *a1;
    f32 r;
    f32 hi;
    f32 lo;
    f32 t;

    a1 = *(u8 **)((u8 *)o + 0x38);
    o->f44 = o->f44 + gFrameDelta;
    if (!(o->f44 <= 14.0f)) {
        q->f14 = 14.0f;
    }
    t = q->f14;
    if (*(u16 *)((u8 *)q + 0xE) & 1) {
        lo = 560.0f;
        hi = 840.0f;
    } else {
        lo = 48.0f;
        hi = -240.0f;
    }
    r = t / 14.0f;
    *(f32 *)(a1 + 0x20) = lo + r * (hi - lo);
    *(f32 *)(a1 + 0x5C) = 1.0f - r;
    func_00280730(q);
    if (!(q->f14 < 14.0f)) {
        o->f1C = (func_002807D0 == NULL) ? NULL : (void *)func_002807D0;
    }
}
typedef struct Q808 {
    char pad0[8];
    u8 *f8;
    char padC[2];
    u16 fE;
    char pad10[8];
    f32 f18;
} Q808;

void func_002808E0(void *o) {
    Q808 *q = (Q808 *)((u8 *)o + 0x30);
    f32 r = 0.0f;
    f32 t;
    u32 v;

    if (q->fE & 2) {
        if (q->f18 < 16.0f) {
            t = q->f18 + gFrameDelta;
            q->f18 = t;
            if (t < 4.0f) {
                r = t / 4.0f;
            } else {
                r = (16.0f - t) / 12.0f;
            }
        }
        q->f8[0x1C] = 0xFF;
        q->f8[0x1D] = 0xFF;
        q->f8[0x1E] = 0xFF;
        v = (u32)(255.0f * r);
        q->f8[0x1F] = (u8)v;
    } else {
        q->f8[0x1C] = 0;
        q->f8[0x1D] = 0;
        q->f8[0x1E] = 0;
        q->f8[0x1F] = 0;
    }
    func_00280730(q);
}
typedef struct Sub5C280 {
    char pad0[0x5C];
    f32 f5C;
} Sub5C280;

extern f32 gFrameDelta;
extern void func_00280730(void *);
extern void func_002808E0(void *);

void func_00280A00(Ac280 *o) {
    Sub5C280 *v;
    f32 f;
    char *p;

    p = (char *)o + 0x30;
    v = *(Sub5C280 **)((char *)o + 0x38);
    f = o->f44 + gFrameDelta;
    o->f44 = f;
    if (f > 14.0f) {
        *(f32 *)(p + 0x14) = 14.0f;
    }
    v->f5C = (f32)(*(f32 *)(p + 0x14)) / 14.0f;
    func_00280730(p);
    if (!(*(f32 *)(p + 0x14) < 14.0f)) {
        o->f1C = (func_002808E0 == NULL) ? NULL : (void *)func_002808E0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280AB0);
void func_00280C70(Ac280 *o) {
    u16 s2;
    char *p;

    if (o->f40 != -1) {
        s2 = o->f3E & 1;
        p = (char *)o + 0x30;
        if (*(void **)p != NULL) {
            amCdFs_Close(*(void **)p, 0);
        }
        *(s32 *)p = amCdFs_ReadFileId(D_004532F0[*(s16 *)(p + 0x10)][s2], 0, 0);
        o->f1C = (func_00280AB0 == NULL) ? NULL : (void *)func_00280AB0;
    }
}
void func_00280D20(Wrap280 *w) {
    void **p = (void **)&w->f30;

    if (p[0] != NULL) {
        amCdFs_Close(p[0], 0);
    }
    if (p[1] != NULL) {
        amHeap_Free(p[1]);
    }
    if (p[2] != NULL) {
        func_0022D4B0((s32)p[2], 1);
    }
}
void func_00280D90(Ac280 *o, f32 a, f32 d) {
    o->f50 = a;
    o->f54 = (a - o->f4C) / d;
    o->f4C = o->f4C + o->f54;
}
void func_00280DC0(Ac280 *o) {
    o->f3C = 3;
    o->f44 = 0.0f;
    o->f1C = (func_002807E0 == NULL) ? NULL : (void *)func_002807E0;
}
/* differs: the original loads the float 0.0 into $f0 at the top (mtc1 $zero) and stores it with swc1; ours stores integer zero */
#if 0
void func_00280DF0(Ac280 *o, s16 a) {
    Sub280 *q;

    o->f48 = 0;
    o->f3E |= 2;
    if (o->f40 != a) {
        q = (Sub280 *)((u8 *)o + 0x30);
        q->fC = 0;
        q->f10 = a;
        q->f14 = 0.0f;
        o->f1C = (func_00280C70 == NULL) ? NULL : (void *)func_00280C70;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280DF0);
void func_00280E40(Ac280 *o, s16 a) {
    o->f3C = 0;
    o->f40 = a;
    o->f44 = 0.0f;
    o->f3E &= ~2;
    o->f1C = (func_00280C70 == NULL) ? NULL : (void *)func_00280C70;
}
typedef struct Sub30_280 {
    char pad0[8];
    void *f8;
    u8 fC;
    char padD[1];
    s16 fE;
    s16 f10;
    s32 f14;
    s32 f18;
    f32 f1C;
    f32 f20;
    s32 f24;
} Sub30_280;

extern void *amTask_Create();
extern void *A2d_AllocObj(s32, f32);
extern char D_0046B740[];

void *func_00280E70(s16 a0, s16 a1) {
    void *t;
    Sub30_280 *p;

    t = amTask_Create(func_00280C70, func_00280D20, 0x2900, 8, 2, D_0046B740);
    *(s32 *)((char *)t + 0x30) = 0;
    *(s32 *)((char *)t + 0x34) = 0;
    p = (Sub30_280 *)((char *)t + 0x30);
    p->f8 = A2d_AllocObj(0, 0.0f);
    p->fC = 0;
    p->fE = a0;
    p->f10 = a1;
    p->f14 = 0;
    p->f18 = 0;
    p->f1C = 1.0f;
    p->f20 = 1.0f;
    p->f24 = 0;
    return t;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00280F20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_002811D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281A40);
void CsSubStat_CloseStep(Wrap280 *w) {
    Sub2C60 *o = w->f30;
    f32 d;

    func_002811D0(o);
    d = o->fC - gFrameDelta;
    o->fC = d;
    if (d <= 0.0f) {
        o->f2 = 5;
        o->f3 = 0;
    }
}
void func_00281CC0(Wrap280 *w) {
    Sub2C60 *o = w->f30;
    f32 d;

    func_002811D0(o);
    d = o->fC - gFrameDelta;
    o->fC = d;
    if (d <= 0.0f) {
        o->f2 = 5;
        o->f3 = 1;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_280730", func_00281E40);
typedef struct Pair282 {
    s16 v[2];
} Pair282;

extern u8 *gCsSubStat;
extern Pair282 D_00470038;
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void *func_0022D860(void *, f32);
void func_00281E40();

void func_00282620(Wrap280 *w) {
    u8 *o = (u8 *)w->f30;
    u8 *g;
    Pair282 t;
    s16 k;
    s32 a0;
    f32 d;

    func_002811D0(o);
    d = *(f32 *)(o + 0xC) - gFrameDelta;
    *(f32 *)(o + 0xC) = d;
    if (d <= 0.0f) {
        o[2] = 2;
        o[8] = 2;
        g = gCsSubStat;
        t = D_00470038;
        k = *(s8 *)(o + 4);
        a0 = *(s32 *)(g + 0xC);
        D_00470704 = a0;
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent(a0, 0x6000);
        D_00470238 = 0;
        *(void **)(o + 0x38) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(g + 8) + 0x14) + t.v[k] * 4), 0.0f);
        *(void **)((u8 *)w + 0x1C) = ((void *)func_00281E40 == 0) ? 0 : (void *)func_00281E40;
    }
}
