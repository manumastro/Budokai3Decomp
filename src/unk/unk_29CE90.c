#include "common.h"

/* Built with automatic inlining, eight levels deep: func_0029D080 inlines itself, the init inlines the setters. */
#pragma auto_inline on
#pragma inline_depth(8)

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct LightNode {
    char pad0[0x10];
    Vec4 f10;
    char pad20[0x20];
    struct LightNode *f40;
    char pad44[4];
    s16 f48;
} LightNode;

extern void func_00142100(LightNode *, Vec4 *);

typedef struct LightModel {
    char pad0[4];
    s32 f4;
} LightModel;

extern s16 amMotion_FindBone(s32, s32);

void func_0029D270(void *a, s32 b, void *c);

extern Vec4 D_004542C0;
extern Vec4 D_004542B0;
extern Vec4 D_004542A0;
extern Vec4 D_00454290;
extern Vec4 D_00454280;
extern s64 D_00470090;
extern f32 D_004708C8;
extern LightNode *D_004708C4;
extern f32 D_00470088;
extern u32 D_004708C0;
extern f32 D_0046FD80;
extern s8 D_004703F4;
extern void func_00146F30(Vec4 *);

static inline void VecSub(Vec4 *d, Vec4 *a, Vec4 *b) {
    asm volatile("lqc2 $vf1, 0(%1)\n\tlqc2 $vf2, 0(%2)\n\tvsub.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(a), "r"(b));
}

static inline void VecCopy(void *d, void *s) {
    asm volatile("lqc2 $vf1, 0(%1)\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(s));
}

void func_0029D4D0(Vec4 *v);

void func_0029D080(LightNode *n);
void func_0029D1E0(s16 *out, s32 n, LightModel *m, s32 *ids);
void func_0029D260(void *a, s32 b);
void func_0029D390(Vec4 *c);
Vec4 *func_0029D4A0(void);
void func_0029D4B0(s64 x);
s64 func_0029D4C0(void);
void func_0029D4D0(Vec4 *v);
Vec4 *func_0029D540(void);
void func_0029D660(Vec4 *v);
Vec4 *func_0029D690(void);
void func_0029D6A0(f32 x);
f32 func_0029D6B0(void);
void func_0029D6C0(Vec4 *v);
Vec4 *func_0029D730(void);
void func_0029D740(Vec4 *v);
Vec4 *func_0029D7E0(void);
LightNode *func_0029D7F0(void);
void func_0029D800(f32 x);
f32 func_0029D850(void);
void func_0029D860(s32 on);
s32 func_0029D8A0(void);
void func_0029D8B0(u32 mask, u32 bits);
u32 func_0029D8D0(void);
void func_0029D8E0(void);

void func_0029D8E0(void);
u32 func_0029D8D0(void);
void func_0029D8B0(u32 mask, u32 bits);
s32 func_0029D8A0(void);
void func_0029D860(s32 on);
f32 func_0029D850(void);
void func_0029D800(f32 x);
LightNode *func_0029D7F0(void);
Vec4 *func_0029D7E0(void);
void func_0029D740(Vec4 *v);
Vec4 *func_0029D730(void);
void func_0029D6C0(Vec4 *v);
f32 func_0029D6B0(void);
void func_0029D6A0(f32 x);
Vec4 *func_0029D690(void);
void func_0029D660(Vec4 *v);
Vec4 *func_0029D540(void);
void func_0029D4D0(Vec4 *v);
s64 func_0029D4C0(void);
void func_0029D4B0(s64 x);
Vec4 *func_0029D4A0(void);
void func_0029D390(Vec4 *c);
void func_0029D260(void *a, s32 b);
void func_0029D1E0(s16 *out, s32 n, LightModel *m, s32 *ids);
void func_0029D080(LightNode *n);

INCLUDE_ASM("asm/nonmatchings/unk/unk_29CE90", func_0029CE90);

INCLUDE_ASM("asm/nonmatchings/unk/unk_29CE90", func_0029D060);

void func_0029D080(LightNode *n) {
    if (n->f40 != NULL) {
        func_0029D080(n->f40);
    }
    func_00142100(n, &n->f10);
}

void func_0029D1E0(s16 *out, s32 n, LightModel *m, s32 *ids) {
    s32 i;

    for (i = 0; i < n; i++) {
        out[i] = amMotion_FindBone(m->f4, ids[i]);
    }
}

void func_0029D260(void *a, s32 b) {
    func_0029D270(a, b, 0);
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_29CE90", func_0029D270);

INCLUDE_ASM("asm/nonmatchings/unk/unk_29CE90", func_0029D310);

static inline void SetLightB(Vec4 *v) {
    if (v != 0) {
        D_004542B0.x = v->x;
        D_004542B0.y = v->y;
        D_004542B0.z = v->z;
        D_004542B0.w = v->w;
    } else {
        D_004542B0.x = 0.0f;
        D_004542B0.y = 0.0f;
        D_004542B0.z = 0.0f;
        D_004542B0.w = 1.0f;
    }
}

void func_0029D390(Vec4 *c) {
    Vec4 t;

    if (c != 0) {
        D_004542C0.x = c->x;
        D_004542C0.y = c->y;
        D_004542C0.z = c->z;
        D_004542C0.w = c->w;
        t.x = c->x * c->w;
        t.y = c->y * c->w;
        t.z = c->z * c->w;
        t.w = 1.0f;
        c = &t;
    } else {
        D_004542C0.x = 1.0f;
        D_004542C0.y = 1.0f;
        D_004542C0.z = 1.0f;
        D_004542C0.w = 1.0f;
    }
    SetLightB(c);
}

Vec4 *func_0029D4A0(void) {
    return &D_004542C0;
}

void func_0029D4B0(s64 x) {
    D_00470090 = x;
}

s64 func_0029D4C0(void) {
    return D_00470090;
}

void func_0029D4D0(Vec4 *v) {
    SetLightB(v);
}

Vec4 *func_0029D540(void) {
    return &D_004542B0;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_29CE90", func_0029D550);

void func_0029D660(Vec4 *v) {
    if (v != 0) {
        VecCopy(&D_004542A0, v);
    } else {
        asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&D_004542A0));
    }
}

Vec4 *func_0029D690(void) {
    return &D_004542A0;
}

void func_0029D6A0(f32 x) {
    D_004708C8 = x;
}

f32 func_0029D6B0(void) {
    return D_004708C8;
}

void func_0029D6C0(Vec4 *v) {
    if (v != 0) {
        VecCopy(&D_00454290, v);
        func_00146F30(&D_00454290);
    } else {
        D_00454290.x = 0.0f;
        D_00454290.y = -1.0f;
        D_00454290.z = 0.0f;
        D_00454290.w = 1.0f;
    }
}

Vec4 *func_0029D730(void) {
    return &D_00454290;
}

void func_0029D740(Vec4 *v) {
    LightNode *n;

    if (v != 0) {
        VecCopy(&D_00454280, v);
        func_00146F30(&D_00454280);
    } else if ((n = D_004708C4) != NULL) {
        VecSub(&D_00454280, &n->f10, (Vec4 *)n);
        func_00146F30(&D_00454280);
    } else {
        D_00454280.x = 0.0f;
        D_00454280.y = 0.0f;
        D_00454280.z = -1.0f;
        D_00454280.w = 1.0f;
    }
}

Vec4 *func_0029D7E0(void) {
    return &D_00454280;
}

LightNode *func_0029D7F0(void) {
    return D_004708C4;
}

void func_0029D800(f32 x) {
    if (x < 0.0f) {
        x = (D_004703F4 != 3) ? 1.0f : 1.2f;
    }
    D_00470088 = x;
}

f32 func_0029D850(void) {
    return D_00470088;
}

static inline void SetFlags(u32 mask, u32 bits) {
    D_004708C0 &= mask;
    D_004708C0 |= bits;
}

void func_0029D860(s32 on) {
    if (on) {
        SetFlags(-1, 1);
    } else {
        SetFlags(~1, 0);
    }
}

s32 func_0029D8A0(void) {
    return (D_004708C0 & 1) != 0;
}

void func_0029D8B0(u32 mask, u32 bits) {
    SetFlags(mask, bits);
}

u32 func_0029D8D0(void) {
    return D_004708C0;
}

void func_0029D8E0(void) {
    D_004708C0 = 0;
    func_0029D860(0);
    func_0029D800(-1.0f);
    D_004708C4 = NULL;
    func_0029D740(0);
    func_0029D6C0(0);
    func_0029D6A0(0.01f);
    func_0029D660(0);
    D_0046FD80 = 0.1f;
    func_0029D4D0(0);
    func_0029D4B0(0x42);
    func_0029D390(0);
}
