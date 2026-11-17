#include "common.h"

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4 __attribute__((aligned(16)));

typedef struct Eff {
    char pad0[0x10];
    Vec4 f10;
    char pad20[0x40 - 0x20];
    Vec4 f40[1];
    s16 f50;
    s16 f52;
    s16 f54;
    s16 f56;
    s16 f58;
    char pad5A[0x6C - 0x5A];
    void *f6C;
    char pad70[0x74 - 0x70];
    s32 f74;
    char pad78[0x8C - 0x78];
    s32 f8C;
    s16 f90;
    char pad92[0x94 - 0x92];
    s16 f94;
    s16 f96;
    s16 f98;
    char pad9A[0xA0 - 0x9A];
    s16 fA0;
    s16 fA2;
    s16 fA4;
    char padA6[0xB0 - 0xA6];
} Eff;
typedef struct Light {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    s32 f24;
    s32 f28;
    s32 pad2C;
} Light;

typedef struct LightWork {
    Light e[2];
    s32 f60;
    char pad64[0x6C - 0x64];
    s16 f6C;
    char pad6E[0x80 - 0x6E];
} LightWork;

typedef struct Owner {
    char pad0[0x1350];
    s32 f1350;
} Owner;

typedef struct Task {
    Vec4 *f0;
    Vec4 *f4;
    Owner *f8;
    s32 fC;
    s32 f10;
    s16 f14;
    s16 f16;
} Task;

typedef struct Req {
    char pad0[0x30];
    Owner *f30;
    s32 f34;
    s32 f38;
    char pad3C[0x48 - 0x3C];
    Light *f48;
    char pad4C[0x52 - 0x4C];
    s16 f52;
    s16 f54;
    s16 f56;
    s16 f58;
    char pad5A[0x60 - 0x5A];
} Req;

typedef struct Mat8 {
    f32 v[8];
} Mat8;

extern LightWork *D_0046FDF8;
extern void (*jtbl_0046A414[])(Task *);
extern void (*D_0046A3E0[])(Mat8 *);

extern void memset(void *, s32, s32);
extern void func_0020D780(void *);
extern void func_0021AA50(Req *);
extern Vec4 D_0044F6E0;
extern void func_00146F30(Vec4 *);
extern void func_00141C30(void *, Vec4 *, Vec4 *);
extern s16 func_0020F690(void);
extern void func_00214DD0(Eff *);
extern void func_00214F80(s32, Eff *);

void func_0021AB30(void) {
}

void func_0021AB40(void) {
}

void func_0021AB50(void) {
}

/* func_0021AB60 is four functions (0x21AB60, 0x21AB80, 0x21ABA0, 0x21ABC0: the split saw no call to the last
   three, which are reached through the table at 0x46A3E0) */
INCLUDE_ASM("asm/nonmatchings/unk/unk_21AB30", func_0021AB60);
void func_0021ACC0(Task *t) {
    Vec4 v;
    Eff e;

    v = D_0044F6E0;
    memset(&e, 0, sizeof(Eff));
    e.f54 = 0;
    e.f50 = 0x10;
    e.f52 = 7;
    e.f56 = 1;
    /* a VU0 quadword copy (an inline-assembly macro in the original, as Sony's libvu0 has) */
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(t->f0), "r"(&e.f10));
    func_00146F30(t->f4);
    func_00141C30(e.f40, &v, t->f4);
    e.f8C = 2;
    e.f94 = 6;
    e.fA2 = 3;
    e.f96 = 6;
    e.fA4 = 0xB;
    e.f98 = 6;
    e.f58 = 0;
    e.fA0 = 0;
    e.f74 |= 0x10;
    e.f90 = func_0020F690();
    e.f6C = t->f8;
    func_00214DD0(&e);
    func_00214F80(e.f52, &e);
}


void func_0021ADB0(Task *t) {
    char buf[16];

    func_0020D780(buf);
    t->f16 = 2;
    t->f14 = 0;
    jtbl_0046A414[0](t);
    t->f4 = (Vec4 *)buf;
    t->f16 = 1;
    t->f14 = 0;
}

void func_0021AE10(Task *t) {
    Req r;

    D_0046FDF8->f6C++;
    memset(&r, 0, sizeof(Req));
    r.f34 = t->fC;
    r.f30 = t->f8;
    r.f48 = &D_0046FDF8->e[t->f8->f1350];
    r.f38 = t->f10;
    r.f52 = 1;
    r.f56 = 8;
    r.f54 = 0;
    r.f58 = D_0046FDF8->f60;
    func_0021AA50(&r);
    D_0046FDF8->f60++;
    if (D_0046FDF8->f60 >= 16) {
        D_0046FDF8->f60 = 0;
    }
}

void func_0021AEE0(Task *t) {
    Req r;

    memset(&r, 0, sizeof(Req));
    r.f34 = t->fC;
    r.f30 = t->f8;
    r.f48 = &D_0046FDF8->e[t->f8->f1350];
    r.f38 = t->f10;
    r.f56 = 8;
    r.f54 = 0;
    if (r.f52 == 1) {
        r.f58 = D_0046FDF8->f60;
    }
    func_0021AA50(&r);
    if (r.f52 == 1) {
        D_0046FDF8->f6C++;
        D_0046FDF8->f60++;
        if (D_0046FDF8->f60 >= 16) {
            D_0046FDF8->f60 = 0;
        }
    }
}

void func_0021AFE0(s32 idx, Mat8 *m) {
    Mat8 local;

    local = *m;
    if (idx >= 0 && idx < 11) {
        D_0046A3E0[idx](&local);
    }
}

void func_0021B070(void) {
    memset(D_0046FDF8, 0, sizeof(LightWork));
}

void Ar_InitLights(void) {
    Light *l;

    memset(D_0046FDF8, 0, sizeof(LightWork));
    l = &D_0046FDF8->e[0];
    l->f10 = 10.0f;
    l->f14 = 7.0f;
    l->f18 = 2.0f;
    l->f1C = 0.7f;
    l->f20 = 0.0f;
    l->f0 = 1.0f;
    l->f4 = 1.0f;
    l->f8 = 0.5f;
    l->fC = 1.0f;
    l->f24 = 3;
    l->f28 = 0;
    l = &D_0046FDF8->e[1];
    l->f10 = 10.0f;
    l->f14 = 7.0f;
    l->f18 = 2.0f;
    l->f1C = 0.7f;
    l->f20 = 0.0f;
    l->f0 = 1.0f;
    l->f4 = 1.0f;
    l->f8 = 0.5f;
    l->fC = 1.0f;
    l->f24 = 3;
    l->f28 = 0;
}
