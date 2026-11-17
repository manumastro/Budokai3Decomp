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

typedef struct Res2D2530 {
    char pad0[0x1C];
    char *f1C;
} Res2D2530;

typedef struct Obj2D2530 {
    char pad0[0x8];
    Res2D2530 *f8;
    s32 fC;
    char pad10[0x3C];
    Model2D2530 *f4C;
    Model2D2530 *f50;
    char pad54[0x18];
    Model2D2530 *f6C;
    Model2D2530 *f70;
    s32 f74;
    s32 f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    s32 f88;
    s32 f8C;
    Model2D2530 *f090;
    s32 f94;
    s32 f98;
    Model2D2530 *f9C;
    char padA0[0x8];
    Model2D2530 *f0A8;
    Model2D2530 *fAC;
    Model2D2530 *fB0;
    Model2D2530 *fB4;
    Model2D2530 *fB8;
    Model2D2530 *fBC;
    Model2D2530 *fC0;
    char padC4[0x18C];
    Model2D2530 *f250;
    Model2D2530 *f254;
    Model2D2530 *f258;
    char pad25C[0x8];
    Model2D2530 *f264;
    Model2D2530 *f268;
    Model2D2530 *f26C;
    Model2D2530 *f270;
    Model2D2530 *f274;
    Model2D2530 *f278;
    Model2D2530 *f27C;
    Model2D2530 *f280;
    char pad284[0x4];
    Model2D2530 *f288;
    char pad28C[0x10];
    Model2D2530 *f29C;
    Model2D2530 *f2A0;
    Model2D2530 *f2A4;
    Model2D2530 *f2A8;
    char pad2AC[0x1C];
    Model2D2530 *f2C8;
    char pad2CC[0x4];
    Model2D2530 *f2D0;
    Model2D2530 *f2D4;
    Model2D2530 *f2D8;
    Model2D2530 *f2DC;
    Model2D2530 *f2E0;
    s32 f2E4;
    s32 f2E8;
    s32 f2EC;
    s32 f2F0;
    s32 f2F4;
    s32 f2F8;
    s32 f2FC;
    s32 f300;
    s32 f304;
    s32 f308;
    s32 f30C;
    s32 f310;
    Model2D2530 *f314;
    Model2D2530 *f318;
    Model2D2530 *f31C;
    Fn2D2530 *f320;
    char pad324[0x20];
    void (*f344)(void);
    void (*f348)(void);
    char pad34C[0x14];
    void (*f360)(void);
    char pad364[0x4];
    s32 f368;
    void (*f36C)(void);
    s32 f370;
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
    s16 *f3D0;
    s16 *f3D4;
    s16 *f3D8;
    char pad3DC[0x10];
    s32 *f3EC;
    char pad3F0[0x8];
    s32 f3F8;
    char pad3FC[0x14];
    s32 f410;
    char pad414[0x4];
    s16 f418;
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
void func_002D47E0(Vec4 *, Vec4 *);
void func_002D7310(void);
void func_002DF930(void);
extern char D_004E05DC[];
extern char D_00456C80[];

/* The table of the draw (D_004E05DC): an index at 0x1C, two values at 0x24 and 0x28. */
typedef struct Tbl2D2530 {
    char pad0[0x1C];
    s16 f1C;
    char pad1E[0x6];
    s32 f24;
    s32 f28;
} Tbl2D2530;
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
extern f32 D_004E0614[];
void func_00143F20(s32, s32, f32);
void func_00143D60(s32, s32, s32, s32);

/* A cursor in [0, count-1] moved by the flags: 0x80 decrements, 0x20 increments; past an end it clamps (idx 0)
   or wraps (idx 1), and the callees run when the value changed. */
void func_002D3050(s32 flags, s8 *cur, s32 count, s32 idx) {
    s32 lo[2] = {0, count - 1};
    s32 hi[2] = {count - 1, 0};
    s32 old = *cur;

    if (flags & 0x80) {
        *cur = old - 1;
        if (*cur < 0) {
            *cur = lo[idx];
        }
    } else if (flags & 0x20) {
        *cur = old + 1;
        if (*cur >= count) {
            *cur = hi[idx];
        }
    }
    if (old != *cur) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 2, 0);
        }
    }
}
void func_002D3170(s32 flags, s16 *cur, s32 count, s32 idx) {
    s32 lo[2] = {0, count - 1};
    s32 hi[2] = {count - 1, 0};
    s32 old = *cur;

    if (flags & 0x80) {
        *cur = old - 1;
        if (*cur < 0) {
            *cur = lo[idx];
        }
    } else if (flags & 0x20) {
        *cur = old + 1;
        if (*cur >= count) {
            *cur = hi[idx];
        }
    }
    if (old != *cur) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 2, 0);
        }
    }
}
void func_002D3290(s32 flags, s32 *cur, s32 count, s32 idx) {
    s32 lo[2] = {0, count - 1};
    s32 hi[2] = {count - 1, 0};
    s32 old = *cur;

    if (flags & 0x80) {
        *cur = old - 1;
        if (*cur < 0) {
            *cur = lo[idx];
        }
    } else if (flags & 0x20) {
        *cur = old + 1;
        if (*cur >= count) {
            *cur = hi[idx];
        }
    }
    if (old != *cur) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 2, 0);
        }
    }
}
/* The same cursor with a minimum (min) and a count; flags 0x10 decrements, 0x40 increments. */
void func_002D33B0(s32 flags, s32 *cur, s32 min, s32 count, s32 idx) {
    s32 lo[2] = {min, count - 1};
    s32 hi[2] = {count - 1, min};
    s32 old = *cur;

    if (flags & 0x10) {
        *cur = old - 1;
        if (*cur < min) {
            *cur = lo[idx];
        }
    } else if (flags & 0x40) {
        *cur = old + 1;
        if (*cur >= count) {
            *cur = hi[idx];
        }
    }
    if (old != *cur) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 2, 0);
        }
    }
}
void func_002D34E0(void) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    if (s->f37C == 0) {
        if (*s->f3EC != s->f3F8 - 1) {
            DrawModel(D_00470934, s->f31C, 0, 0);
        }
        if (*s->f3EC != 0) {
            m = s->f318;
            DrawModel(D_00470934, m, 0, 0);
        }
    }
}
void func_002D3650(void) {
    Vec4 v;
    Obj2D2530 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 45.0f * s->f37C;
    DrawModel(D_00470934, s->f314, &v, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D3E50);
s32 func_0022D670(s32, f32);
void func_002D40A0(void) {
    Obj2D2530 *s = D_00470934;

    s->f2E0 = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0xE8), 0.0f);
    s->f314 = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0x33C), 0.0f);
    s->f318 = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0x1B8), 0.0f);
    s->f31C = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0x1BC), 0.0f);
    s->f2E4 = func_0022D670(*(s32 *)(s->f8->f1C + 0x188), 0.0f);
    s->f2E8 = func_0022D670(*(s32 *)(s->f8->f1C + 0x18C), 0.0f);
    s->f2EC = func_0022D670(*(s32 *)(s->f8->f1C + 0x190), 0.0f);
    s->f2F0 = func_0022D670(*(s32 *)(s->f8->f1C + 0x194), 0.0f);
    s->f2F4 = func_0022D670(*(s32 *)(s->f8->f1C + 0x1A0), 0.0f);
    s->f2F8 = func_0022D670(*(s32 *)(s->f8->f1C + 0x1A0), 0.0f);
    s->f2FC = func_0022D670(*(s32 *)(s->f8->f1C + 0x1B4), 0.0f);
    s->f300 = func_0022D670(*(s32 *)(s->f8->f1C + 0x1B4), 0.0f);
    s->f304 = func_0022D670(*(s32 *)(s->f8->f1C + 0x1B0), 0.0f);
    s->f308 = func_0022D670(*(s32 *)(s->f8->f1C + (0x6A - *s->f3EC) * 4), 0.0f);
    s->f30C = func_0022D670(*(s32 *)(s->f8->f1C + 0x198), 0.0f);
    s->f310 = func_0022D670(*(s32 *)(s->f8->f1C + 0x1A0), 0.0f);
}
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
void func_002D4600(Vec4 *a, Vec4 *b, Vec4 *c) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->f278, 0, a);
    DrawModel(D_00470934, s->f27C, 0, b);
    m = s->f280;
    DrawModel(D_00470934, m, 0, c);
}
void func_002D47E0(Vec4 *a, Vec4 *b) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->f2D8, 0, a);
    m = s->f2DC;
    DrawModel(D_00470934, m, 0, b);
}
void func_002D4930(void) {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    Obj2D2530 *o = D_00470934;

    VecCopy(&a, &o->f3B0);
    VecCopy(&b, &o->f3C0);
    func_002D4530(&c, &a);
    b.w = a.w;
    c.x = 0.0f;
    c.w = 1.0f;
    c.y = 0.0f;
    c.z = 0.0f;
    DrawModel(D_00470934, o->f2C8, &c, &a);
    if (o->f410 == 0) {
        func_002D47E0(&a, &b);
    } else {
        func_002D47E0(&b, &a);
    }
}
void func_002D4A70(Vec4 *a, Vec4 *b) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->f2D0, 0, a);
    m = s->f2D4;
    DrawModel(D_00470934, m, 0, b);
}
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
void func_002D4530(Vec4 *, Vec4 *);
#if 0
// differs: the two draws keep the object in another saved register (s1/s2 swapped; compiled size 0x1A0 with the draft, the original is 0x1B0): tried reload/cached object and declaration orders
void func_002D5570(void) {
    Obj2D2530 *s = D_00470934;
    Vec4 a;
    Vec4 b;
    Model2D2530 *m;

    func_002D4530(&a, &b);
    m = s->f2A4;
    DrawModel(D_00470934, m, &a, &b);
    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&a));
    a.y = 185.0f - 1.77f * (f32)(128 - s->f418);
    DrawModel(D_00470934, s->f2A8, &a, &b);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D2530", func_002D5570);
void func_002D5720(void) {
    Obj2D2530 *s = D_00470934;
    Vec4 v;
    Model2D2530 *m;

    DrawModel(s, s->f2A4, 0, 0);
    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 185.0f - 1.77f * (f32)(128 - s->f418);
    m = s->f2A8;
    DrawModel(D_00470934, m, &v, 0);
}
#if 0
// differs: the step factor (1.2f when D_004703F4 == 3) is laid out with a branch the source form did not reproduce; the rest of the draw matches up to there
void func_002D58B0(void) {
    Vec4 b;
    Vec4 a;
    Tbl2D2530 *e = (Tbl2D2530 *)D_004E05DC;
    Obj2D2530 *o = D_00470934;
    Obj2D2530 *s;
    Model2D2530 *m;
    f32 k = 1.0f;

    a.x = (f32)e->f24;
    a.y = (f32)e->f28;
    a.z = 0.0f;
    a.w = 1.0f;
    k = (D_004703F4 == 3) ? 1.2f : 1.0f;
    o->f398 = o->f398 + k;
    b.x = 1.0f;
    b.y = 1.0f;
    b.z = 1.0f;
    b.w = 1.0f;
    if (o->f398 >= 30.0f) {
        b.w = 0.0f;
        o->f370 = 0;
    } else {
        b.w = 1.0f - o->f398 / 30.0f;
    }
    s = D_00470934;
    m = *(Model2D2530 **)((char *)o + 0x28C + e->f1C * 4);
    DrawModel(s, m, 0, &b);
    s = D_00470934;
    m = *(Model2D2530 **)((char *)o + 0x294 + e->f1C * 4);
    DrawModel(s, m, &a, &b);
}
#endif
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
void func_002D66B0(Vec4 *a, Vec4 *b, Vec4 *c) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->f250, 0, a);
    DrawModel(D_00470934, s->f254, 0, b);
    m = s->f258;
    DrawModel(D_00470934, m, 0, c);
}
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
void func_002D71D0(void) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->fBC, 0, 0);
    m = s->fC0;
    DrawModel(D_00470934, m, 0, 0);
}
void func_002D7310(void) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    DrawModel(s, s->fB4, 0, 0);
    m = s->fB8;
    DrawModel(D_00470934, m, 0, 0);
}
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
void func_002DDF00(void);
void func_002DEFE0(void);
void func_002D7AA0(Vec4 *, Vec4 *);
void func_002DDF00(void);
void func_002DEFE0(void);
void func_002D7AA0(Vec4 *, Vec4 *);
void func_002D7BF0(void) {
    Obj2D2530 *s = D_00470934;
    Model2D2530 *m;

    if (s->f344 == func_002DDF00 || s->f344 == 0 || s->f344 == func_002DEFE0) {
        m = s->f9C;
        DrawModel(D_00470934, m, 0, &s->f3C0);
    } else {
        m = s->f9C;
        DrawModel(D_00470934, m, 0, &s->f3B0);
    }
    if (s->f360 == func_002D79C0) {
        if (s->f37C == 0) {
            func_002D7AA0(&s->f3B0, &s->f3C0);
        } else {
            func_002D7AA0(&s->f3C0, &s->f3B0);
        }
    } else {
        func_002D7AA0(&s->f3C0, &s->f3C0);
    }
}
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
s32 func_0022D670(s32, f32);
void func_002D8720(void) {
    Obj2D2530 *s = D_00470934;

    s->f70 = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0xD8), 0.0f);
    s->f090 = (Model2D2530 *)func_0022D670(*(s32 *)(s->f8->f1C + 0x324), 0.0f);
    s->f94 = func_0022D670(*(s32 *)(s->f8->f1C + 0x11C), 0.0f);
    s->f98 = func_0022D670(*(s32 *)(s->f8->f1C + 0x120), 0.0f);
    s->f74 = func_0022D670(*(s32 *)(s->f8->f1C + 0xFC), 0.0f);
    s->f78 = func_0022D670(*(s32 *)(s->f8->f1C + 0x100), 0.0f);
    s->f7C = func_0022D670(*(s32 *)(s->f8->f1C + 0x104), 0.0f);
    s->f80 = func_0022D670(*(s32 *)(s->f8->f1C + 0x108), 0.0f);
    s->f84 = func_0022D670(*(s32 *)(s->f8->f1C + (*s->f3D0 + 0x50) * 4), 0.0f);
    s->f88 = func_0022D670(*(s32 *)(s->f8->f1C + (*s->f3D4 + 0x5D) * 4), 0.0f);
    s->f8C = func_0022D670(*(s32 *)(s->f8->f1C + (*s->f3D8 + 0x58) * 4), 0.0f);
}
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
