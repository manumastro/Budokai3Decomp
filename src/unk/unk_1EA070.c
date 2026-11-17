#include "common.h"

typedef struct Ent {
    s32 f0;
    char pad4[0x20 - 0x4];
    s32 f20;
    char pad24[0x30 - 0x24];
    s32 f30;
    char pad34[0xCC - 0x34];
} Ent;

typedef struct Chr {
    char f0[0xCA6];
    u8 fCA6;
    char padCA7[0x2020 - 0xCA7];
} Chr;

typedef struct Work {
    char pad0[0x290];
    Ent ent[168];
    char pad8870[0x88D8 - 0x8870];
    s32 f88D8;
} Work;

typedef struct Work2 {
    char pad0[0x1B90];
    Chr chr[4];
} Work2;

typedef struct Obj {
    char pad0[0x35];
    s8 f35;
    char pad36[0x38 - 0x36];
    s32 f38;
    struct Obj *f3C;
} Obj;

typedef struct Obj2 {
    char pad0[0x154];
    s16 f154;
} Obj2;

typedef struct MemLayout {
    s32 a, b, c, d, e;
    s32 pad[10];
    s32 f;
} MemLayout;

extern void *D_00470570;
extern s32 D_004705D8;
extern Obj *D_004705DC;
extern Obj *D_004B42C0[];
extern Obj D_004B4B00[];

extern void func_0025C400(s32);
extern s32 *func_001FA360(s32);
extern s32 func_0025C670(s32, s32, s32);
extern s32 *func_001C7D70(s32);
extern void func_001258F8(void *, s32, s32);
extern void func_001437E0(void *);
extern void func_00144C00(s32, s32, s32, s32, s32, s32);
extern void func_001ABCC0(void *);
extern void func_00125740(void *, void *, s32);

void func_001EA070(void) {
}

s32 func_001EA080(Obj2 *o) {
    Work *w = D_00470570;
    Ent *e;
    s32 r;
    s32 i;

    func_0025C400(1);
    e = &w->ent[0];
    e->f30 = func_0025C670(*func_001FA360(o->f154), 0, 1);
    e->f0 = 1;
    e->f20 = 1;
    e = &w->ent[1];
    e->f30 = r = func_0025C670(0x1001F, 0, 1);
    e->f0 = 2;
    e->f20 = 2;
    for (i = 0; i < w->f88D8; i++) {
        e = &w->ent[i + 2];
        e->f30 = r = func_0025C670(*func_001C7D70(i) | 0x10000, 0, 1);
        e->f0 = i + 3;
        e->f20 = i + 3;
    }
    func_0025C400(0);
    return r;
}

void func_001EA1B0(void) {
    MemLayout buf;

    func_001258F8(&buf, 0, sizeof(MemLayout));
    buf.a = 0;
    buf.b = 0x2D000;
    buf.c = 0x55000;
    buf.d = 0xDC000;
    buf.e = 0x147800;
    buf.f = 0x2D000;
    func_001437E0(&buf);
    func_00144C00(3, 3, 0x50A, 0x50A, 0, 0);
}

Obj *func_001EA230(void) {
    return D_004705DC;
}

void func_001EA240(Obj *o) {
    Obj *p;

    if ((o->f38 & 1) && o->f35 >= 0 && o->f35 < 4) {
        ((Work2 *)D_00470570)->chr[o->f35].fCA6 = 0;
        func_001ABCC0(((Work2 *)D_00470570)->chr[o->f35].f0);
    }
    if (D_004705D8 < 32) {
        p = D_004B42C0[D_004705D8++];
        func_00125740(p, o, 0x40);
        p->f3C = D_004705DC;
        D_004705DC = p;
    }
}

void func_001EA300(void) {
    s32 i;

    D_004705DC = NULL;
    D_004705D8 = 0;
    for (i = 31; i >= 0; i--) {
        /* the pool starts 31 entries below D_004B4B00, which is the symbol the split gives */
        D_004B42C0[i] = &((Obj *)((u8 *)D_004B4B00 - 0x7C0))[i];
    }
}
