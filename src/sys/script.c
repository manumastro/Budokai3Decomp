#include "common.h"

/* The script interpreter of the am* library. */

typedef struct ScrCtx {
    s32 r[8];
    u8 *base;   /* 0x20 */
    s32 x24;
    u8 *x28;
    s32 *sp;    /* 0x2C */
    s32 x30;
    s32 x34;
    s32 x38;
    u8 *stack;  /* 0x3C */
} ScrCtx;


extern s32 func_0014D3C0(ScrCtx *, u8 **);
extern f32 func_0014D570(ScrCtx *, u8 **);
extern u8 *func_0014D750(ScrCtx *, u8 **);
extern u8 *func_0014D910(ScrCtx *, u8 **);
void func_0014D390(s8 *dst, s8 *src);

#define RD32(p) ((p)[3] << 24 | ((p)[2] << 16 | ((p)[0] | (p)[1] << 8)))

typedef struct Blk80 { u8 b[0x80]; } Blk80;
typedef struct ScrHeader {
    char pad[0x14];
    s32 codeOffset; /* 0x14 */
    char pad18[8];
    s32 entry[1];   /* 0x20 */
} ScrHeader;
typedef struct ScrMachine {
    s32 id;
    ScrHeader *data; /* 0x04 */
    u8 *code;       /* 0x08 */
    s32 state;      /* 0x0C */
    s32 x10;
    s32 x14;
    s32 x18;
    s32 n;          /* 0x1C */
    s32 x20;
    u8 *x24;
    s32 *x28;
    s32 *x2C;
    s32 *x30;
    Blk80 *x34;
    s32 size38;
    s32 size3C;
    s32 size40;
    void (*cb44)(struct ScrMachine *, s32);
    void (*cb48)(struct ScrMachine *, s32);
    void (*cb4C)(struct ScrMachine *, s32);
    void (*cb50)(void *, void *);
    void (*cb54)(struct ScrMachine *, s32);
    u8 *x58;
} ScrMachine;

extern s32 D_004704B8;
extern s32 D_004704BC;
extern u8 *D_004704C0;
extern s32 *D_004704C4;
extern s32 *D_004704C8;
extern s32 *D_004704CC;
extern Blk80 *D_004704D0;
extern ScrMachine *D_004704D4;
extern char D_0045F700[];
extern void *func_00124940(s32, s32);
extern void *func_0013AAB0(s32, s32, char *, s32);
extern void func_00124BC8(void *);
extern void func_0013AC90(void *);
extern void func_00145180(s32, s32, s32);

extern f32 func_0011F6B0(f32, f32);
extern f32 func_0011F4C0(f32);
extern f32 func_0011F220(f32);
extern f32 func_0011F5A8(f32);
extern f32 func_0011F668(f32);
extern f32 func_0011F650(f32);
extern f32 func_0011EE78(f32);
extern f32 func_0011F680(f32, f32);
extern f32 sqrtf(f32);
extern u8 *func_0014DAD0(ScrMachine *, u8 *, s32);
#define STK_FULL(sys, ctx) ((u32)(ctx)->sp >= (u32)((ctx)->stack + (*(sys))->size40))
void func_0014A2C0(void);
#define SCR_ALLOC(size) (dbg == 0 ? func_00124940(0x40, (size)) : func_0013AAB0((size), 0, D_0045F700, 0x82))

void func_00149E50(s32 count, s32 n, s32 size0, s32 size1, s32 size2, s32 size3, s32 dbg) {
    s32 i;
    ScrMachine *m;
    s32 j;
    u8 *p;

    func_0014A2C0();
    size0 = (size0 + 3) & ~3;
    size1 = (size1 + 3) & ~3;
    size2 = (size2 + 3) & ~3;
    size3 = (size3 + 3) & ~3;
    D_004704D4 = SCR_ALLOC(count * sizeof(ScrMachine));
    for (i = 0, m = D_004704D4; i < count; i++, m++) {
        m->x58 = SCR_ALLOC(n);
    }
    D_004704C0 = SCR_ALLOC(size0);
    D_004704C4 = SCR_ALLOC(size1 * count);
    D_004704C8 = SCR_ALLOC(count * (size2 * n));
    D_004704CC = SCR_ALLOC(count * (size3 * n));
    D_004704D0 = SCR_ALLOC(count * (n * 0x80));
    size1 >>= 2;
    size2 >>= 2;
    size3 >>= 2;
    for (i = 0, m = D_004704D4; i < count; i++, m++) {
        m->id = i;
        m->data = 0;
        m->code = 0;
        m->state = 0;
        m->x10 = 0;
        m->x14 = 0;
        m->x18 = 1;
        m->n = n;
        m->x20 = 0;
        m->x24 = D_004704C0;
        m->x28 = D_004704C4 + size1 * i;
        m->x2C = D_004704C8 + i * (size2 * n);
        m->x30 = D_004704CC + i * (size3 * n);
        m->x34 = D_004704D0 + n * i;
        m->size38 = size1 * 4;
        m->size3C = size2 * 4;
        m->size40 = size3 * 4;
        m->cb44 = 0;
        m->cb48 = 0;
        m->cb4C = 0;
        m->cb50 = 0;
        m->cb54 = 0;
        for (j = 0, p = m->x58; j < n; j++, p++) {
            *p = j;
        }
    }
    D_004704B8 = count;
    D_004704BC = dbg;
}

void func_0014A240(void) {
    s32 i;
    ScrMachine *m;
    if (D_004704B8 > 0) {
        for (i = 0, m = D_004704D4; i < D_004704B8; i++, m++) {
            if (m->state) func_00145180(m->x14, m->x18, 1);
        }
    }
}

void func_0014A2C0(void) {
    s32 i;
    ScrMachine *m;
    if (D_004704B8 > 0) {
        for (i = 0, m = D_004704D4; i < D_004704B8; i++, m++) {
            if (m->state) func_00145180(m->x14, m->x18, 1);
        }
        if (D_004704BC == 0) {
            func_00124BC8(D_004704C0);
            func_00124BC8(D_004704C4);
            func_00124BC8(D_004704C8);
            func_00124BC8(D_004704CC);
            func_00124BC8(D_004704D0);
            for (i = 0, m = D_004704D4; i < D_004704B8; i++, m++) {
                func_00124BC8(m->x58);
            }
            func_00124BC8(D_004704D4);
        } else {
            func_0013AC90(D_004704C0);
            func_0013AC90(D_004704C4);
            func_0013AC90(D_004704C8);
            func_0013AC90(D_004704CC);
            func_0013AC90(D_004704D0);
            for (i = 0, m = D_004704D4; i < D_004704B8; i++, m++) {
                func_0013AC90(m->x58);
            }
            func_0013AC90(D_004704D4);
        }
        D_004704B8 = 0;
        D_004704BC = 0;
    }
}

s32 func_0014A470(s32 a, s32 b, s32 c) {
    s32 i;
    for (i = 0; i < D_004704B8; i++) {
        if (D_004704D4[i].state == 0) {
            D_004704D4[i].state = 1;
            if (a < 0) a = (i << 8) + 0x8000;
            D_004704D4[i].x10 = a;
            D_004704D4[i].x14 = b;
            D_004704D4[i].x18 = c;
            return i;
        }
    }
    return -1;
}

void func_0014A570(s32 i) {
    ScrMachine *m = &D_004704D4[i];
    if (m->state) func_00145180(m->x14, m->x18, 1);
}

void func_0014A5D0(s32 i, ScrHeader *data) {
    ScrMachine *m = &D_004704D4[i];
    m->data = data;
    m->code = (u8 *)data + data->codeOffset;
}

void func_0014A610(s32 i, void *f) { D_004704D4[i].cb44 = f; }

void func_0014A640(s32 i, void *f) { D_004704D4[i].cb48 = f; }

void func_0014A670(s32 i, void *f) { D_004704D4[i].cb4C = f; }

void func_0014A6A0(s32 i, void *f) { D_004704D4[i].cb50 = f; }

void func_0014A6D0(s32 i, void *f) { D_004704D4[i].cb54 = f; }

INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014A700);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014A7C0);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014AAA0);
s32 func_0014AB50(void) { return 1; }

s32 func_0014AB60(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    func_0014D390((s8 *)func_0014D750(ctx, pc), (s8 *)&v);
    return 1;
}

s32 func_0014ABD0(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D750(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    return 1;
}

s32 func_0014AC10(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = func_0014D570(ctx, pc);
    func_0014D390((s8 *)func_0014D910(ctx, pc), (s8 *)&v);
    return 1;
}

s32 func_0014AC80(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D910(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    return 1;
}

s32 func_0014ACC0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)func_0014D910(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0x80; p[3] = 0x3F;
    return 1;
}

s32 func_0014AD10(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = func_0014D3C0(ctx, pc);
    func_0014D390((s8 *)func_0014D910(ctx, pc), (s8 *)&v);
    return 1;
}

s32 func_0014AD90(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D570(ctx, pc);
    func_0014D390((s8 *)func_0014D750(ctx, pc), (s8 *)&v);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014AE10);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014AE60);
s32 func_0014AEB0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 *sp = ctx->sp;
    func_0014D390((s8 *)func_0014D750(ctx, pc), (s8 *)sp);
    ctx->sp++;
    return 1;
}

s32 func_0014AF10(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 *sp = ctx->sp;
    func_0014D390((s8 *)func_0014D910(ctx, pc), (s8 *)sp);
    ctx->sp++;
    return 1;
}

s32 func_0014AF70(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)func_0014D750(ctx, pc);
    s32 i;
    for (i = 0; i < 4; i++) {
        (*p)++;
        if (*p != 0) break;
        p++;
    }
    return 1;
}

s32 func_0014AFE0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)func_0014D750(ctx, pc);
    s32 i;
    for (i = 0; i < 4; i++) {
        (*p)--;
        if (*p != 0xFF) break;
        p++;
    }
    return 1;
}

s32 func_0014B060(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    v += RD32(p);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B100(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    v = RD32(p) - v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B1A0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    v *= RD32(p);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B240(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    if (v != 0) v = RD32(p) / v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B300(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    if (v != 0) v = RD32(p) % v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B3C0(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D750(ctx, pc);
    s32 v = -RD32(p);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B430(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    v = func_0011F6B0(RD32(p), v);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B4F0(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D910(ctx, pc);
    s32 t = RD32(p);
    f32 v = 1.0f + *(f32 *)&t;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B570(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D910(ctx, pc);
    s32 t = RD32(p);
    f32 v = *(f32 *)&t - 1.0f;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B5F0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    v = v + *(f32 *)&t;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B6A0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    v = *(f32 *)&t - v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B750(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    v = v * *(f32 *)&t;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B800(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    if (v != 0.0f) v = *(f32 *)&t / v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B8C0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    if (v != 0.0f) v = (s32)*(f32 *)&t % (s32)v;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014B9B0(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D910(ctx, pc);
    s32 t = RD32(p);
    f32 v = -*(f32 *)&t;
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014BA30(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = func_0014D570(ctx, pc);
    p = func_0014D910(ctx, pc);
    t = RD32(p);
    v = func_0011F6B0(*(f32 *)&t, v);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014BAE0(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D910(ctx, pc);
    s32 t = RD32(p);
    f32 v = sqrtf(*(f32 *)&t);
    func_0014D390((s8 *)p, (s8 *)&v);
    return 1;
}

s32 func_0014BB60(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t &= v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014BC10(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t |= v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014BCC0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t ^= v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014BD70(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t = ~t;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014BDF0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D910(ctx, pc);
    f32 r = func_0011F4C0(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014BEB0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D910(ctx, pc);
    f32 r = func_0011F220(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014BF70(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D910(ctx, pc);
    f32 r = func_0011F5A8(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014C030(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = func_0014D570(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011F668(v) / 6.2831855f) & 0xFFFF;
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014C0F0(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = func_0014D570(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011F650(v) / 6.2831855f) & 0xFFFF;
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014C1B0(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = func_0014D570(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011EE78(v) / 6.2831855f) & 0xFFFF;
    func_0014D390((s8 *)p, (s8 *)&r);
    return 1;
}

s32 func_0014C270(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 a = func_0014D570(ctx, pc);
    ctx->r[0] = (s32)(65536.0f * func_0011F680(a, func_0014D570(ctx, pc)) / 6.2831855f) & 0xFFFF;
    return 1;
}

s32 func_0014C320(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 a = func_0014D3C0(ctx, pc);
    a = -(func_0014D3C0(ctx, pc) < a);
    ctx->r[0] = a;
    return 1;
}

s32 func_0014C390(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = -(func_0014D3C0(ctx, pc) != 0);
    return 1;
}

s32 func_0014C3E0(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 a = func_0014D570(ctx, pc);
    ctx->r[0] = -(func_0014D570(ctx, pc) < a);
    return 1;
}

s32 func_0014C460(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = -(0.0f != func_0014D570(ctx, pc));
    return 1;
}

s32 func_0014C4C0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t <<= v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014C570(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t = (u32)t >> v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014C620(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    t >>= v;
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014C6D0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 n = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    if (n > 0) {
        while (n > 0) {
            if (t & 0x80000000) {
                t <<= 1;
                t |= 1;
            } else {
                t <<= 1;
            }
            n--;
        }
    } else {
        while (n < 0) {
            if (t & 1) {
                t >>= 1;
                t |= 0x80000000;
            } else {
                t >>= 1;
                t &= 0x7FFFFFFF;
            }
            n++;
        }
    }
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014C850(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 n = func_0014D3C0(ctx, pc);
    u8 *p = func_0014D750(ctx, pc);
    s32 t = RD32(p);
    if (n > 0) {
        while (n > 0) {
            if (t & 1) {
                t >>= 1;
                t |= 0x80000000;
            } else {
                t >>= 1;
                t &= 0x7FFFFFFF;
            }
            n--;
        }
    } else {
        while (n < 0) {
            if (t & 0x80000000) {
                t <<= 1;
                t |= 1;
            } else {
                t <<= 1;
            }
            n++;
        }
    }
    func_0014D390((s8 *)p, (s8 *)&t);
    return 1;
}

s32 func_0014C9D0(s32 unused, ScrCtx *ctx, u8 **pc) {
    *pc = ctx->base + func_0014D3C0(ctx, pc);
    return 1;
}

s32 func_0014CA20(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c != 0) *pc = ctx->base + v;
    return 1;
}

s32 func_0014CAA0(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c == 0) *pc = ctx->base + v;
    return 1;
}

s32 func_0014CB20(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    ctx->sp--;
    *ctx->sp = (s32)*pc;
    *pc = ctx->base + v;
    return 1;
}

s32 func_0014CB90(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c != 0) {
        ctx->sp--;
        *ctx->sp = (s32)*pc;
        *pc = ctx->base + v;
    }
    return 1;
}

s32 func_0014CC20(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c == 0) {
        ctx->sp--;
        *ctx->sp = (s32)*pc;
        *pc = ctx->base + v;
    }
    return 1;
}

s32 func_0014CCB0(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if ((u32)ctx->sp >= (u32)(ctx->stack + (*sys)->size40)) return 2;
    *pc = (u8 *)*ctx->sp;
    ctx->sp++;
    return 1;
}

s32 func_0014CD10(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    if (STK_FULL(sys, ctx)) return 2;
    *pc = (u8 *)v;
    ctx->sp++;
    return 1;
}

s32 func_0014CDB0(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if (func_0014D3C0(ctx, pc) != 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)*ctx->sp;
        ctx->sp++;
    }
    return 1;
}

s32 func_0014CE60(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c != 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)v;
        ctx->sp++;
    }
    return 1;
}

s32 func_0014CF20(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if (func_0014D3C0(ctx, pc) == 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)*ctx->sp;
        ctx->sp++;
    }
    return 1;
}

s32 func_0014CFD0(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 c = func_0014D3C0(ctx, pc);
    s32 v = func_0014D3C0(ctx, pc);
    if (c == 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)v;
        ctx->sp++;
    }
    return 1;
}

s32 func_0014D090(s32 unused, ScrCtx *ctx, u8 **pc) {
    return (func_0014D3C0(ctx, pc) << 8) + 7;
}

s32 func_0014D0C0(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->x28 = ctx->base + func_0014D3C0(ctx, pc);
    return 1;
}

s32 func_0014D110(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc);
    s32 n = ctx->sp[1];
    u8 *r = func_0014DAD0(*sys, ctx->base + v, n);
    void (*cb)(void *, void *) = (*sys)->cb50;
    if (cb) cb(r + 0x30, ctx);
    return 1;
}

s32 func_0014D1A0(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 a = func_0014D3C0(ctx, pc);
    u8 *r = func_0014DAD0(*sys, ctx->base + a, func_0014D3C0(ctx, pc));
    void (*cb)(void *, void *) = (*sys)->cb50;
    if (cb) cb(r + 0x30, ctx);
    return 1;
}

s32 func_0014D250(void) { return 3; }

s32 func_0014D260(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = func_0014D3C0(ctx, pc) - 1;
    if (v < 0) v = 0;
    return (v << 8) + 3;
}

s32 func_0014D2A0(void) { return 2; }

s32 func_0014D2B0(void) { return 4; }

s32 func_0014D2C0(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = (s32)(ctx->base + func_0014D3C0(ctx, pc));
    ctx->r[1] = ctx->sp[1];
    return 5;
}

s32 func_0014D310(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = (s32)(ctx->base + func_0014D3C0(ctx, pc));
    ctx->r[1] = func_0014D3C0(ctx, pc);
    return 5;
}

s32 func_0014D380(void) { return 6; }

void func_0014D390(s8 *dst, s8 *src) {
    dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
}

INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014D3C0);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014D570);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014D750);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014D910);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014DAD0);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014DC10);
INCLUDE_ASM("asm/nonmatchings/sys/script", main);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014E580);
