#include "common.h"

typedef struct RenderRect {
    s32 f0;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fA;
    u32 fC;
    u32 f10;
} RenderRect;

extern RenderRect D_00456A60;
extern u32 D_00470494;
extern void func_001303E0(void *, s32);
extern u64 func_001308A0(s32, s32, s32, s32);
extern void func_00140D30(s32, s32, s32, s32, s32, u64, s32, s32);
extern s32 func_001339D0(s32, s32);
extern void func_00133780(s32, s32);

typedef struct LightEntry {
    f32 f0[4];
    char pad10[8];
    f32 f18;
    f32 f1C;
} LightEntry;

typedef struct LightTask {
    char pad0[0x30];
    s32 f30;
} LightTask;

typedef struct LightObj {
    char pad0[4];
    s32 f4;
} LightObj;

extern f32 D_0047040C;
extern f32 D_00470410;
extern f32 D_0047042C;
extern f32 D_00470430;
extern char D_005C2060[];
extern LightEntry D_005C2100[][16];
extern s32 D_00470928;
extern u32 D_00470924;
extern char D_00495800[][0x10];
extern f32 D_00495700[];
extern f32 D_00495740[];
extern char D_0046F260[];
extern void func_001258F8(void *, s32, s32);
extern void func_00125740(void *, void *, s32);
extern void func_00133B50(s32, s32);
extern LightTask *func_00144FC0(void (*)(LightTask *), s32, s32, s32, s32, char *);
extern void func_002CFA90(LightTask *);
extern void func_002CFEB0(LightObj *, s32, f32, LightEntry *);

void func_002CF8F0(void) {
    func_001258F8(D_005C2060, 0, 0xA0);
}
typedef struct Vec4 {
    f32 x, y, z, w;
} __attribute__((aligned(16))) Vec4;

typedef struct Vec4x2 {
    Vec4 a;
    Vec4 b;
} Vec4x2;

extern Vec4x2 D_00456AA0;
extern Vec4x2 D_00456AC0;
extern Vec4 D_00456AE0;
extern s32 D_004703DC;
extern void func_001484A0(s32);
extern void func_00136E80(s32, void *, s32, s64, s32);
extern void func_00137560(Vec4 *, Vec4 *);
extern void func_00137EE0(void);

void func_002CF910(void *tex, f32 w, f32 h) {
    Vec4x2 q;
    Vec4x2 t;
    Vec4 c;
    s32 flags;
    s32 n;
    s32 saved;

    q = D_00456AA0;
    flags = 0;
    n = 0;
    ((f32 *)&q)[4] = D_0047042C;
    ((f32 *)&q)[5] = D_00470430;
    t = D_00456AC0;
    c = D_00456AE0;
    if (tex == NULL) {
        tex = &c;
    } else {
        flags = 0x800;
        n = 0x44;
    }
    if (w == 0.0f) {
        w = D_0047040C;
    }
    if (h == 0.0f) {
        h = D_00470410;
    }
    t.b.x = 0.5f + w;
    saved = D_004703DC;
    t.b.z = 1.0f;
    t.b.w = 1.0f;
    t.b.y = 0.5f + h;
    if (saved & 7) {
        func_001484A0(1);
    }
    func_00136E80(flags | 0x40000126, tex, -1, n, 0);
    func_00137560(&q.a, &t.a);
    func_00137560(&q.b, &t.b);
    func_00137EE0();
    if (saved & 7) {
        func_001484A0(saved);
    }
}
extern RenderRect D_00456A80;
extern u32 D_0047041C;
extern u32 D_00470420;
extern u64 func_00130AE0(s32, s32, s32, s32);
extern void func_00145120(void *);

void func_002CFA90(LightTask *t) {
    RenderRect r;
    s32 old;
    u64 v;
    s32 *wait = &t->f30;

    if (*wait > 0) {
        (*wait)--;
        return;
    }
    r = D_00456A80;
    r.f4 = D_0047040C;
    r.f6 = D_00470410;
    r.f8 = D_0047042C;
    r.fA = D_00470430;
    r.fC = D_00470494 >> 13;
    r.f10 = D_00470494 >> 13;
    func_00133B50(0, 0);
    v = func_00130AE0(0, 0, 1, 0);
    func_001303E0(&r, 0);
    old = func_001339D0(2, 0x30000);
    func_00133780(2, 1);
    func_00140D30(0, 1, 1, 0, 0, v & 0xFFFFFFF, 6, 0);
    func_002CF910(NULL, D_0047041C, D_00470420);
    func_00133780(2, 0);
    func_001339D0(2, old);
    func_001303E0(NULL, 0);
    func_00145120(t);
}
void func_002CFC50(void) {
    RenderRect r = D_00456A60;
    s32 old;
    u64 v;

    r.f4 = D_0047040C;
    r.f6 = D_00470410;
    r.f8 = D_0047042C;
    r.fA = D_00470430;
    r.fC = D_00470494 >> 13;
    r.f10 = D_00470494 >> 13;
    func_001303E0(&r, 0);
    v = func_001308A0(0, 0, 1, 0);
    func_001303E0(0, 0);
    func_00140D30(0, 1, 1, 0, 0, v & 0xFFFFFFF, 6, 0);
    old = func_001339D0(2, 0x30000);
    func_00133780(2, 1);
    func_002CF910(0, 0.0f, 0.0f);
    func_001339D0(2, old);
}
void func_002CFD70(void) {
    func_00133B50(0, 0);
}
void func_002CFD80(s32 a) {
    func_00144FC0(func_002CFA90, 0, 0, 0, 0, D_0046F260)->f30 = a;
}
f32 func_002CFDD0(f32 a, f32 b) {
    return a + b;
}
void func_002CFDE0(LightEntry *e) {
    s32 i;

    if (e == NULL) {
        e = D_005C2100[D_00470928];
    }
    for (i = 0; i < 16; i++) {
        if ((D_00470924 >> i) & 1) {
            func_00125740(D_00495800[i], e[i].f0, 0x10);
            D_00495700[i] = e[i].f18;
            D_00495740[i] = e[i].f1C;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CF8F0", func_002CFEB0);
void func_002D0110(LightObj *o, LightEntry *e, f32 f) {
    s32 i;

    if (e == NULL) {
        e = D_005C2100[D_00470928];
    }
    for (i = 0; i < o->f4; i++) {
        if ((D_00470924 >> i) & 1) {
            func_002CFEB0(o, i, f, &e[i]);
        }
    }
}
extern LightEntry D_005C4100[];
extern f32 D_005C4118[];
extern f32 D_005C411C[];

/* func_002D01C0's body, also inlined in func_002D02B0. */
static inline void Light_CopyDefault(void) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if ((D_00470924 >> i) & 1) {
            func_00125740(&D_005C2100[D_00470928][i], D_005C4100, 0x20);
            func_00125740(D_00495800[i], D_005C4100, 0x10);
            D_00495700[i] = D_005C4118[0];
            D_00495740[i] = D_005C411C[0];
        }
    }
}
void func_002D01C0(void) {
    Light_CopyDefault();
}

extern f32 D_005C4104[];
extern f32 D_005C4108[];
extern f32 D_005C410C[];
extern char D_005C4110[];

void func_002D02B0(u32 mask) {
    s32 j;

    D_005C4100[0].f0[0] = 1.0f;
    D_00470924 = mask;
    D_005C4104[0] = 1.0f;
    D_005C4108[0] = 1.0f;
    D_00470928 = 0;
    D_005C410C[0] = 1.0f;
    func_001258F8(D_005C4110, 0, 0x10);
    for (j = 0; j < 16; j++) {
        D_00470928 = j;
        Light_CopyDefault();
    }
    D_00470928 = 0;
    Light_CopyDefault();
}
void func_002D04A0(s32 a) {
    D_00470928 = a;
}
