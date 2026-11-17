#include "common.h"

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct Model2D8 {
    char pad0[0x30];
    char *f30;
} Model2D8;

typedef struct Scene2D8 {
    char pad0[0xC];
    s32 fC;
    char pad10[0x20];
    Model2D8 *f30;
    char pad34[0x38];
    Model2D8 *f6C;
    char pad70[0x2D4];
    void *f344;
    char pad348[0x14];
    void *f35C;
    char pad360[0x18];
    s32 f378;
    char pad37C[0x18];
    f32 f394;
    char pad398[0xC];
    f32 f3A4;
    char pad3A8[8];
    Vec4 f3B0;
    Vec4 f3C0;
} Scene2D8;

extern Scene2D8 *D_00470934;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void func_00228430(s32);
extern void func_00227A30(Vec4 *);
extern void func_00145CC0(s32, s32);
extern void func_0022C060(Model2D8 *, f32);
extern void func_00228410(void);
extern void func_0022CD00(Model2D8 *);

static inline void VecCopy(void *d, void *s) {
    asm volatile("lqc2 $vf1, 0(%1)\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(s));
}

static inline void DrawModel(Model2D8 *m, Vec4 *eye, Vec4 *pos) {
    Scene2D8 *s = D_00470934;
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

extern void func_002DDF00();
extern void func_002DEFE0();
extern void func_002DDCA0();
extern void func_002DD180();
extern void func_002DCC50();
extern void func_002DE250();

void func_002D8D00(void) {
    Vec4 v;
    Scene2D8 *s = D_00470934;
    void *f;

    if (s->f378 == 5) {
        return;
    }
    f = s->f344;
    if (f == NULL) {
        return;
    }
    if (f == func_002DDF00 || f == func_002DEFE0) {
        VecCopy(&v, &s->f3C0);
        v.w = 1.0f;
        DrawModel(s->f6C, 0, &v);
    } else if (f == func_002DDCA0 || f == func_002DD180) {
        VecCopy(&v, &s->f3C0);
        v.w = 1.0f - s->f3A4 / 25.0f;
        if (v.w <= 0.0f) {
            return;
        }
        DrawModel(s->f6C, 0, &v);
    } else if (f == func_002DCC50) {
        VecCopy(&v, &s->f3C0);
        v.w = (s->f3A4 - 60.0f) / 25.0f;
        if (v.w >= 1.0f) {
            v.w = 1.0f;
        }
        if (v.w < 0.0f) {
            return;
        }
        DrawModel(s->f6C, 0, &v);
    } else if (f == func_002DE250) {
        VecCopy(&v, &s->f3C0);
        v.w = (s->f3A4 - 25.0f) / 10.0f;
        if (v.w >= 1.0f) {
            v.w = 1.0f;
        }
        if (v.w < 0.0f) {
            return;
        }
        DrawModel(s->f6C, 0, &v);
    } else {
        DrawModel(s->f6C, 0, &s->f3B0);
    }
}

void func_002D91C0(void) {
}

void func_002D91D0(void) {
    Vec4 v;
    Scene2D8 *s = D_00470934;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y += (f32)(s->f378 * 40);
    DrawModel(s->f30, &v, 0);
}
extern s32 D_00470164;
extern s8 D_004703F4;

void func_002D92C0(void) {
    Vec4 v;
    Vec4 c;
    Scene2D8 *s = D_00470934;
    f32 a;

    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y += (f32)(s->f378 * 40);
    if (D_00470164 == 1) {
        c.x = 1.0f;
        c.y = 1.0f;
        c.z = 1.0f;
        c.w = 1.0f;
        c.w = s->f394 / 10.0f;
        if (c.w > 0.3f) {
            c.w = 0.3f;
        }
        DrawModel(s->f30, &v, &c);
    } else {
        DrawModel(s->f30, &v, 0);
    }
    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f394 += a;
    if (s->f394 > 10.0f) {
        s->f394 = 0.0f;
        s->f35C = func_002D91D0;
    }
}
