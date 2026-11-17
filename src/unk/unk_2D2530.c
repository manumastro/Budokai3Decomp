#include "common.h"

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct Model2D2530 {
    char pad0[0x30];
    char *f30;
} Model2D2530;

typedef struct Fn2D2530 {
    char pad0[0x1C];
    void (*f1C)(void);
} Fn2D2530;

typedef struct Obj2D2530 {
    char pad0[0xC];
    s32 fC;
    char pad10[0x3C];
    Model2D2530 *f4C;
    Model2D2530 *f50;
    char pad54[0x18];
    Model2D2530 *f6C;
    Model2D2530 *f70;
    char pad74[0x1C];
    Model2D2530 *f090;
    char pad94[0x8];
    Model2D2530 *f9C;
    char padA0[0x8];
    Model2D2530 *f0A8;
    Model2D2530 *fAC;
    Model2D2530 *fB0;
    Model2D2530 *fB4;
    Model2D2530 *fB8;
    Model2D2530 *fBC;
    Model2D2530 *fC0;
    char padC4[0x1A0];
    Model2D2530 *f264;
    Model2D2530 *f268;
    Model2D2530 *f26C;
    Model2D2530 *f270;
    Model2D2530 *f274;
    char pad278[0x10];
    Model2D2530 *f288;
    char pad28C[0x10];
    Model2D2530 *f29C;
    Model2D2530 *f2A0;
    char pad2A4[0x24];
    Model2D2530 *f2C8;
    char pad2CC[0x14];
    Model2D2530 *f2E0;
    char pad2E4[0x30];
    Model2D2530 *f314;
    char pad318[0x8];
    Fn2D2530 *f320;
    char pad324[0x20];
    void (*f344)(void);
    void (*f348)(void);
    char pad34C[0x14];
    void (*f360)(void);
    char pad364[0x4];
    s32 f368;
    void (*f36C)(void);
    char pad370[0x4];
    void (*f374)(void);
    char pad378[0x4];
    s32 f37C;
    char pad380[0x8];
    f32 f388;
    char pad38C[0xC];
    f32 f398;
    char pad39C[0x8];
    f32 f3A4;
    char pad3A8[0x8];
    Vec4 f3B0;
    Vec4 f3C0;
} Obj2D2530;

extern Obj2D2530 *D_00470934;
extern s8 D_004703F4;
extern u16 D_00492FCC[];
extern u16 D_00493084[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;

void func_002D8890(void);
void func_002D4A70(Vec4 *, Vec4 *);
void func_002DD180(void);
void func_002D7310(void);
void func_002DF930(void);
extern char D_004E05DC[];
extern char D_00456C80[];
extern f32 D_004E0618[];
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);

typedef struct Blob2D2530 {
    Vec4 v[8];
    s32 x;
    s32 y;
} Blob2D2530;
void func_002D4340(void);
void func_002D84C0(void);
void func_002D2E50(s32);
void func_002D58B0(void);
void func_002D5AE0(void);
void func_002D8920(void);
void func_0022C7D0(void *, s32, f32);
extern s32 D_00470160;
void func_00228430(s32);
void func_00228410(void);
void func_00227A30(Vec4 *);
void func_00145CC0(s32, s32);
void func_0022C060(Model2D2530 *, f32);
void func_0022CD00(Model2D2530 *);

static inline void VecCopy(void *d, void *s) {
    asm volatile("lqc2 $vf1, 0(%1)\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(s));
}

/* The draw of one model: the camera (eye) and the position (pos), both optional. */
static inline void DrawModel(Obj2D2530 *s, Model2D2530 *m, Vec4 *eye, Vec4 *pos) {
    s32 v;

    func_00228430(0);
    func_00228430(0);
    if (eye != 0) {
        func_00227A30(eye);
    }
    D_00470704 = v = s->fC;
    D_00470708 = 0;
    D_0047070C = 0;
    func_00145CC0(v, 0);
    D_00470238 = 0;
    func_0022C060(m, 1.0f);
    func_00228410();
    if (pos != 0) {
        VecCopy(m->f30 + 0x50, pos);
    }
    func_0022CD00(m);
    func_00228410();
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D2530);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D27E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D2AD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D2E50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3050);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D33B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D34E0);
void func_002D3650(void) {
    Vec4 v;
    Obj2D2530 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 45.0f * s->f37C;
    DrawModel(D_00470934, s->f314, &v, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3E50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D40A0);
void func_002D4260(void) {
    Vec4 v;
    Obj2D2530 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 40.0f * s->f37C;
    DrawModel(D_00470934, s->f288, &v, 0);
}
void func_002D4340(void) {
    Obj2D2530 *o = D_00470934;
    Vec4 v;
    Vec4 p;
    f32 f;

    p.x = 1.0f;
    p.y = 1.0f;
    p.z = 1.0f;
    p.w = 1.0f;
    p.w = o->f398 / 10.0f;
    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 40.0f * o->f37C;
    DrawModel(D_00470934, o->f288, &v, &p);
    if (D_004703F4 != 3) {
        f = 1.0f;
    } else {
        f = 1.2f;
    }
    o->f398 += f;
    if (o->f398 >= 10.0f) {
        o->f398 = 0.0f;
        o->f360 = func_002D4260;
    }
}
void func_002D44C0(void) {
    Obj2D2530 *o = D_00470934;
    f32 f;

    if (D_004703F4 != 3) {
        f = 1.0f;
    } else {
        f = 1.2f;
    }
    o->f398 += f;
    if (o->f398 >= 20.0f) {
        o->f398 = 0.0f;
        o->f360 = func_002D4340;
    }
}
void func_002D4530(Vec4 *p, Vec4 *q) {
    Obj2D2530 *o = D_00470934;
    f32 t;

    VecCopy(q, &o->f3B0);
    p->x = 0.0f;
    p->y = 0.0f;
    p->z = 0.0f;
    p->w = 1.0f;
    if (o->f398 >= 30.0f) {
        p->y = 167.0f;
        p->x = -52.0f;
        q->w = 0.0f;
    } else if (o->f398 >= 15.0f) {
        q->w = 0.0f;
        t = (o->f398 - 15.0f) / 15.0f;
        p->y = 167.0f * t;
        p->x = -52.0f * t;
    } else {
        q->w = 1.0f - o->f398 / 15.0f;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D4600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D47E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D4930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D4A70);
void func_002D4BC0(void) {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    Obj2D2530 *o;
    char *fl;

    fl = D_004E05DC;
    o = D_00470934;
    VecCopy(&a, &o->f3B0);
    VecCopy(&b, &o->f3C0);
    func_002D4530(&c, &a);
    b.w = a.w;
    DrawModel(D_00470934, o->f2C8, &c, &a);
    if (*(s16 *)(fl + 0x1C) == 0) {
        func_002D4A70(&a, &b);
    } else {
        func_002D4A70(&b, &a);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D4CF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5090);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5570);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5720);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D58B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5AE0);
void func_002D5D70(void) {
    Obj2D2530 *o = D_00470934;
    Obj2D2530 *s;
    Model2D2530 *m;

    func_002D58B0();
    s = D_00470934;
    m = s->f2A0;
    DrawModel(s, m, 0, 0);
    if (o->f374 != 0) {
        o->f374();
    }
}
void func_002D5E50(void) {
    Obj2D2530 *o = D_00470934;
    Obj2D2530 *s;
    Model2D2530 *m;

    func_002D5AE0();
    s = D_00470934;
    m = s->f29C;
    DrawModel(s, m, 0, 0);
    if (o->f374 != 0) {
        o->f374();
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5F30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D6160);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D6400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D66B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D6890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D6B10);
void func_002D6F40(void) {
    Obj2D2530 *s = D_00470934;
    Fn2D2530 *f;

    s->f3A4 = 0.0f;
    s->f344 = func_002DD180;
    s->f368 = 0;
    s->f360 = 0;
    func_0022C7D0(s->f264, 1, 0.0f);
    func_0022C7D0(s->fB4, 1, 0.0f);
    func_0022C7D0(s->fB8, 1, 0.0f);
    func_0022C7D0(s->fBC, 1, 0.0f);
    func_0022C7D0(s->fC0, 1, 0.0f);
    func_0022C7D0(s->f268, 1, 0.0f);
    func_0022C7D0(s->f26C, 1, 0.0f);
    func_0022C7D0(s->f270, 1, 0.0f);
    s->f348 = func_002D7310;
    func_0022C7D0(s->f4C, 1, 0.0f);
    func_0022C7D0(s->f50, 1, 0.0f);
    s->f3A4 = 25.0f;
    f = s->f320;
    f->f1C = (func_002DF930 == 0) ? 0 : func_002DF930;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7050);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D71D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7310);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7450);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D76E0);
void func_002D79C0(void) {
    Vec4 v;
    Obj2D2530 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 40.0f * s->f37C;
    DrawModel(D_00470934, s->f0A8, &v, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7AA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D7DC0);
void func_002D7FC0(void) {
    Vec4 v;
    Obj2D2530 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 40.0f * s->f37C;
    DrawModel(D_00470934, s->f090, &v, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D80A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D84C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D8720);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D8890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D8920);
void func_002D8AB0(void) {
    Obj2D2530 *o = D_00470934;

    func_002D84C0();
    func_002D2E50(0);
    if ((D_00492FCC[0] | D_00493084[0]) != 0) {
        o->f36C = func_002D8890;
    }
}
#if 0
// differs: the 136-byte block copy from D_00456C80 is a loop of 4 lq/sq pairs plus ld/sd in the original; mwcc emits a 32-bit or 64-bit copy loop
void func_002D8B00(void) {
    Obj2D2530 *s = D_00470934;
    Blob2D2530 b;
    f32 f;

    func_002D8890();
    if (D_004703F4 != 3) {
        f = 1.0f;
    } else {
        f = 1.2f;
    }
    s->f388 = s->f388 + f;
    if (s->f388 > 30.0f) {
        s->f388 = 0.0f;
        b = *(Blob2D2530 *)D_00456C80;
        amAdx_SetVolume(1, D_004E0618[0]);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, *(s32 *)&b | 0x20000, 0);
        func_002D2E50(0);
        s->f36C = func_002D8AB0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D8B00);
void func_002D8C00(void) {
    Obj2D2530 *s = D_00470934;

    if (D_00470160 == 1) {
        s->f3A4 = 25.0f;
    }
    func_0022C7D0(s->f6C, 1, 25.0f);
    func_0022C7D0(s->f70, 1, 0.0f);
    func_0022C7D0(s->f090, 1, 0.0f);
    func_0022C7D0(s->f9C, 1, 0.0f);
    func_0022C7D0(s->fAC, 1, 0.0f);
    if (D_00470160 == 1) {
        func_0022C7D0(s->fB0, 1, 0.0f);
    }
    func_0022C7D0(s->f274, 1, 0.0f);
    func_0022C7D0(s->f288, 1, 0.0f);
    func_0022C7D0(s->f2E0, 1, 0.0f);
    func_0022C7D0(s->f314, 1, 0.0f);
    s->f36C = func_002D8920;
}
