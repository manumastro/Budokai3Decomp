#include "common.h"

/* The script interpreter of the am* library ("script.c" is the file name it passes to the debug allocator).
 * A script file (ScrHeader) holds byte code; each machine (ScrMachine, a table of them at gScrMachines) runs entry
 * points of one file as tasks (ScrTask, started by Scr_CreateTask), each with its own context (ScrCtx): 16
 * registers, a stack and work areas. The opcode handlers take (machine, context, pc): Scr_ReadInt /
 * Scr_ReadFloat read an int / float operand, Scr_IntOperand / Scr_FloatOperand the address of an int / float operand,
 * and Scr_Copy4 copies four bytes (operands are not aligned). */

typedef struct ScrCtx {
    s32 r[8];
    u8 *base;   /* 0x20: the code */
    u8 *x24;
    u8 *x28;
    s32 *sp;    /* 0x2C: the stack, growing down */
    u8 *x30;
    u8 *x34;
    u8 *x38;
    u8 *stack;  /* 0x3C: the bottom of the stack */
} ScrCtx;

typedef struct ScrHeader {
    char pad[0x14];
    s32 codeOffset; /* 0x14 */
    char pad18[8];
    s32 entry[1];   /* 0x20 */
} ScrHeader;

typedef struct Blk80 { u8 b[0x80]; } Blk80;

typedef struct ScrMachine {
    s32 id;
    ScrHeader *data; /* 0x04 */
    u8 *code;        /* 0x08 */
    s32 state;       /* 0x0C: 0 free, 1 allocated, 2 running, 4 (?) */
    s32 x10;         /* the tasks' priority */
    s32 x14;
    s32 x18;
    s32 n;           /* 0x1C: the number of contexts */
    s32 x20;         /* the number of contexts in use */
    u8 *x24;
    u8 *x28;
    u8 *x2C;
    u8 *x30;
    Blk80 *x34;      /* the contexts */
    s32 size38;
    s32 size3C;
    s32 size40;      /* the stack size */
    void (*cb44)(struct ScrMachine *, s32);
    void (*cb48)(struct ScrMachine *, s32);
    void (*cb4C)(struct ScrMachine *, s32);
    void (*cb50)(void *, void *);
    void (*cb54)();
    s8 *x58;         /* the free context slots */
} ScrMachine;

typedef struct ScrWork {
    ScrMachine *m;
    ScrCtx *ctx;
    s16 x8;
    s16 slot;
    s32 xC;
    s32 x10;
    s32 x14;
} ScrWork;

typedef struct ScrTask {
    char pad[0x30];
    ScrWork w;
} ScrTask;

/* A little-endian int read byte by byte (the operands are not aligned). */
#define RD32(p) ((p)[3] << 24 | ((p)[2] << 16 | ((p)[0] | (p)[1] << 8)))
#define STK_FULL(sys, ctx) ((u32)(ctx)->sp >= (u32)((ctx)->stack + (*(sys))->size40))
#define SCR_ALLOC(size) (dbg == 0 ? func_00124940(0x40, (size)) : amHeap_Alloc((size), 0, D_0045F700, 0x82))

extern s32 gScrMachineCount;
extern s32 gScrDebugAlloc;
extern u8 *gScrArea0;
extern s32 *gScrArea1;
extern s32 *gScrArea2;
extern s32 *gScrArea3;
extern Blk80 *gScrContexts;
extern ScrMachine *gScrMachines;
extern char D_0045F6F0[];
extern char D_0045F700[];

extern void *func_00124940(s32, s32);
extern void func_00124BC8(void *);
extern void *func_001258F8(void *, s32, u32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void amHeap_Free(void *);
extern ScrTask *amTask_Create(s32 (*)(), void (*)(ScrTask *), u32, u32, u32, char *);
extern void amTask_KillGroup(s32, s32, s32);
extern f32 func_0011EE78(f32);
extern f32 func_0011F220(f32);
extern f32 func_0011F4C0(f32);
extern f32 func_0011F5A8(f32);
extern f32 func_0011F650(f32);
extern f32 func_0011F668(f32);
extern f32 func_0011F680(f32, f32);
extern f32 func_0011F6B0(f32, f32);
extern f32 sqrtf(f32); /* an intrinsic: sqrt.s */

void Scr_Free(void);
extern s32 Scr_TaskMain();
void Scr_TaskExit(ScrTask *task);
void Scr_Copy4(s8 *dst, s8 *src);
extern s32 Scr_ReadInt(ScrCtx *, u8 **);
extern f32 Scr_ReadFloat(ScrCtx *, u8 **);
extern u8 *Scr_IntOperand(ScrCtx *, u8 **);
extern u8 *Scr_FloatOperand(ScrCtx *, u8 **);
ScrTask *Scr_CreateTask(ScrMachine *, u8 *, s32);

void Scr_Init(s32 count, s32 n, s32 size0, s32 size1, s32 size2, s32 size3, s32 dbg) {
    s32 i;
    ScrMachine *m;
    s32 j;
    s8 *p;

    Scr_Free();
    size0 = (size0 + 3) & ~3;
    size1 = (size1 + 3) & ~3;
    size2 = (size2 + 3) & ~3;
    size3 = (size3 + 3) & ~3;
    gScrMachines = SCR_ALLOC(count * sizeof(ScrMachine));
    for (i = 0, m = gScrMachines; i < count; i++, m++) {
        m->x58 = SCR_ALLOC(n);
    }
    gScrArea0 = SCR_ALLOC(size0);
    gScrArea1 = SCR_ALLOC(size1 * count);
    gScrArea2 = SCR_ALLOC(count * (size2 * n));
    gScrArea3 = SCR_ALLOC(count * (size3 * n));
    gScrContexts = SCR_ALLOC(count * (n * 0x80));
    size1 >>= 2;
    size2 >>= 2;
    size3 >>= 2;
    for (i = 0, m = gScrMachines; i < count; i++, m++) {
        m->id = i;
        m->data = 0;
        m->code = 0;
        m->state = 0;
        m->x10 = 0;
        m->x14 = 0;
        m->x18 = 1;
        m->n = n;
        m->x20 = 0;
        m->x24 = gScrArea0;
        m->x28 = (u8 *)(gScrArea1 + size1 * i);
        m->x2C = (u8 *)(gScrArea2 + i * (size2 * n));
        m->x30 = (u8 *)(gScrArea3 + i * (size3 * n));
        m->x34 = gScrContexts + n * i;
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
    gScrMachineCount = count;
    gScrDebugAlloc = dbg;
}

void Scr_KillAllTasks(void) {
    s32 i;
    ScrMachine *m;
    if (gScrMachineCount > 0) {
        for (i = 0, m = gScrMachines; i < gScrMachineCount; i++, m++) {
            if (m->state) amTask_KillGroup(m->x14, m->x18, 1);
        }
    }
}

void Scr_Free(void) {
    s32 i;
    ScrMachine *m;
    if (gScrMachineCount > 0) {
        for (i = 0, m = gScrMachines; i < gScrMachineCount; i++, m++) {
            if (m->state) amTask_KillGroup(m->x14, m->x18, 1);
        }
        if (gScrDebugAlloc == 0) {
            func_00124BC8(gScrArea0);
            func_00124BC8(gScrArea1);
            func_00124BC8(gScrArea2);
            func_00124BC8(gScrArea3);
            func_00124BC8(gScrContexts);
            for (i = 0, m = gScrMachines; i < gScrMachineCount; i++, m++) {
                func_00124BC8(m->x58);
            }
            func_00124BC8(gScrMachines);
        } else {
            amHeap_Free(gScrArea0);
            amHeap_Free(gScrArea1);
            amHeap_Free(gScrArea2);
            amHeap_Free(gScrArea3);
            amHeap_Free(gScrContexts);
            for (i = 0, m = gScrMachines; i < gScrMachineCount; i++, m++) {
                amHeap_Free(m->x58);
            }
            amHeap_Free(gScrMachines);
        }
        gScrMachineCount = 0;
        gScrDebugAlloc = 0;
    }
}

s32 Scr_Alloc(s32 a, s32 b, s32 c) {
    s32 i;
    for (i = 0; i < gScrMachineCount; i++) {
        if (gScrMachines[i].state == 0) {
            gScrMachines[i].state = 1;
            if (a < 0) a = (i << 8) + 0x8000;
            gScrMachines[i].x10 = a;
            gScrMachines[i].x14 = b;
            gScrMachines[i].x18 = c;
            return i;
        }
    }
    return -1;
}

void Scr_KillTasks(s32 i) {
    ScrMachine *m = &gScrMachines[i];
    if (m->state) amTask_KillGroup(m->x14, m->x18, 1);
}

void Scr_SetData(s32 i, ScrHeader *data) {
    ScrMachine *m = &gScrMachines[i];
    m->data = data;
    m->code = (u8 *)data + data->codeOffset;
}

void Scr_SetCallback44(s32 i, void *f) { gScrMachines[i].cb44 = f; }

void Scr_SetStartCallback(s32 i, void *f) { gScrMachines[i].cb48 = f; }

void Scr_SetEndCallback(s32 i, void *f) { gScrMachines[i].cb4C = f; }

void Scr_SetTaskStartCallback(s32 i, void *f) { gScrMachines[i].cb50 = f; }

void Scr_SetTaskEndCallback(s32 i, void *f) { gScrMachines[i].cb54 = f; }

void Scr_Start(s32 i, s32 entry) {
    ScrMachine *m = &gScrMachines[i];
    void (*cb)(void *, void *);
    ScrTask *r;
    void (*cb48)(ScrMachine *, s32);
    if (m->cb48) {
        cb48 = m->cb48;
        cb48(m, entry);
    }
    r = Scr_CreateTask(m, m->code + m->data->entry[entry], 0);
    cb = m->cb50;
    if (cb) cb(&r->w, 0);
    m->state = 2;
}

INCLUDE_ASM("asm/nonmatchings/sys/script", Scr_TaskMain);
void Scr_TaskExit(ScrTask *task) {
    ScrWork *w = &task->w;
    ScrMachine *m = w->m;
    void (*cb)() = w->m->cb54;
    void (*cb2)(ScrMachine *, s32);
    if (cb) cb();
    m->x58[--m->x20] = w->slot;
    if (m->state != 4 && m->x20 == 0) {
        if (m->cb4C) {
            cb2 = m->cb4C;
            cb2(m, 0);
        }
        m->state = 0;
    }
}

s32 ScrOp_Nop(void) { return 1; }

s32 ScrOp_MovI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    Scr_Copy4((s8 *)Scr_IntOperand(ctx, pc), (s8 *)&v);
    return 1;
}

s32 ScrOp_ClrI(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_IntOperand(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    return 1;
}

s32 ScrOp_MovF(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadFloat(ctx, pc);
    Scr_Copy4((s8 *)Scr_FloatOperand(ctx, pc), (s8 *)&v);
    return 1;
}

s32 ScrOp_ClrF(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_FloatOperand(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    return 1;
}

s32 ScrOp_OneF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)Scr_FloatOperand(ctx, pc);
    p[0] = 0; p[1] = 0; p[2] = 0x80; p[3] = 0x3F;
    return 1;
}

s32 ScrOp_ItoF(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadInt(ctx, pc);
    Scr_Copy4((s8 *)Scr_FloatOperand(ctx, pc), (s8 *)&v);
    return 1;
}

s32 ScrOp_FtoI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadFloat(ctx, pc);
    Scr_Copy4((s8 *)Scr_IntOperand(ctx, pc), (s8 *)&v);
    return 1;
}

s32 ScrOp_PushI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    s32 *p;
    p = ctx->sp;
    p--;
    ctx->sp--;
    *p = v;
    return 1;
}

s32 ScrOp_PushF(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadFloat(ctx, pc);
    f32 *p;
    p = (f32 *)ctx->sp;
    p--;
    ctx->sp--;
    *p = v;
    return 1;
}

s32 ScrOp_PopI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 *sp = ctx->sp;
    Scr_Copy4((s8 *)Scr_IntOperand(ctx, pc), (s8 *)sp);
    ctx->sp++;
    return 1;
}

s32 ScrOp_PopF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 *sp = ctx->sp;
    Scr_Copy4((s8 *)Scr_FloatOperand(ctx, pc), (s8 *)sp);
    ctx->sp++;
    return 1;
}

s32 ScrOp_IncI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)Scr_IntOperand(ctx, pc);
    s32 i;
    for (i = 0; i < 4; i++) {
        (*p)++;
        if (*p != 0) break;
        p++;
    }
    return 1;
}

s32 ScrOp_DecI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s8 *p = (s8 *)Scr_IntOperand(ctx, pc);
    s32 i;
    for (i = 0; i < 4; i++) {
        (*p)--;
        if (*p != 0xFF) break;
        p++;
    }
    return 1;
}

s32 ScrOp_AddI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    v += RD32(p);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_SubI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    v = RD32(p) - v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_MulI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    v *= RD32(p);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_DivI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    if (v != 0) v = RD32(p) / v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_ModI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    if (v != 0) v = RD32(p) % v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_NegI(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 v = -RD32(p);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_PowI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    v = func_0011F6B0(RD32(p), v);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_IncF(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_FloatOperand(ctx, pc);
    s32 t = RD32(p);
    f32 v = 1.0f + *(f32 *)&t;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_DecF(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_FloatOperand(ctx, pc);
    s32 t = RD32(p);
    f32 v = *(f32 *)&t - 1.0f;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_AddF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    v = v + *(f32 *)&t;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_SubF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    v = *(f32 *)&t - v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_MulF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    v = v * *(f32 *)&t;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_DivF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    if (v != 0.0f) v = *(f32 *)&t / v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_ModF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    if (v != 0.0f) v = (s32)*(f32 *)&t % (s32)v;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_NegF(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_FloatOperand(ctx, pc);
    s32 t = RD32(p);
    f32 v = -*(f32 *)&t;
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_PowF(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 t;
    f32 v;
    u8 *p;
    v = Scr_ReadFloat(ctx, pc);
    p = Scr_FloatOperand(ctx, pc);
    t = RD32(p);
    v = func_0011F6B0(*(f32 *)&t, v);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_SqrtF(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_FloatOperand(ctx, pc);
    s32 t = RD32(p);
    f32 v = sqrtf(*(f32 *)&t);
    Scr_Copy4((s8 *)p, (s8 *)&v);
    return 1;
}

s32 ScrOp_And(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t &= v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Or(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t |= v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Xor(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t ^= v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Not(s32 unused, ScrCtx *ctx, u8 **pc) {
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t = ~t;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Sin(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_FloatOperand(ctx, pc);
    f32 r = func_0011F4C0(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Cos(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_FloatOperand(ctx, pc);
    f32 r = func_0011F220(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Tan(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_FloatOperand(ctx, pc);
    f32 r = func_0011F5A8(6.2831855f * (f32)(v & 0xFFFF) / 65536.0f);
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Asin(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadFloat(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011F668(v) / 6.2831855f) & 0xFFFF;
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Acos(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadFloat(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011F650(v) / 6.2831855f) & 0xFFFF;
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Atan(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 v = Scr_ReadFloat(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 r = (s32)(65536.0f * func_0011EE78(v) / 6.2831855f) & 0xFFFF;
    Scr_Copy4((s8 *)p, (s8 *)&r);
    return 1;
}

s32 ScrOp_Atan2(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 a = Scr_ReadFloat(ctx, pc);
    ctx->r[0] = (s32)(65536.0f * func_0011F680(a, Scr_ReadFloat(ctx, pc)) / 6.2831855f) & 0xFFFF;
    return 1;
}

s32 ScrOp_GtI(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 a = Scr_ReadInt(ctx, pc);
    a = -(Scr_ReadInt(ctx, pc) < a);
    ctx->r[0] = a;
    return 1;
}

s32 ScrOp_TestI(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = -(Scr_ReadInt(ctx, pc) != 0);
    return 1;
}

s32 ScrOp_GtF(s32 unused, ScrCtx *ctx, u8 **pc) {
    f32 a = Scr_ReadFloat(ctx, pc);
    ctx->r[0] = -(Scr_ReadFloat(ctx, pc) < a);
    return 1;
}

s32 ScrOp_TestF(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = -(0.0f != Scr_ReadFloat(ctx, pc));
    return 1;
}

s32 ScrOp_Shl(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t <<= v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Shr(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t = (u32)t >> v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Sar(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
    s32 t = RD32(p);
    t >>= v;
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Rol(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 n = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
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
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Ror(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 n = Scr_ReadInt(ctx, pc);
    u8 *p = Scr_IntOperand(ctx, pc);
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
    Scr_Copy4((s8 *)p, (s8 *)&t);
    return 1;
}

s32 ScrOp_Jmp(s32 unused, ScrCtx *ctx, u8 **pc) {
    *pc = ctx->base + Scr_ReadInt(ctx, pc);
    return 1;
}

s32 ScrOp_JmpIf(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c != 0) *pc = ctx->base + v;
    return 1;
}

s32 ScrOp_JmpIfNot(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c == 0) *pc = ctx->base + v;
    return 1;
}

s32 ScrOp_Call(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    ctx->sp--;
    *ctx->sp = (s32)*pc;
    *pc = ctx->base + v;
    return 1;
}

s32 ScrOp_CallIf(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c != 0) {
        ctx->sp--;
        *ctx->sp = (s32)*pc;
        *pc = ctx->base + v;
    }
    return 1;
}

s32 ScrOp_CallIfNot(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c == 0) {
        ctx->sp--;
        *ctx->sp = (s32)*pc;
        *pc = ctx->base + v;
    }
    return 1;
}

s32 ScrOp_Ret(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if ((u32)ctx->sp >= (u32)(ctx->stack + (*sys)->size40)) return 2;
    *pc = (u8 *)*ctx->sp;
    ctx->sp++;
    return 1;
}

s32 ScrOp_RetTo(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    if (STK_FULL(sys, ctx)) return 2;
    *pc = (u8 *)v;
    ctx->sp++;
    return 1;
}

s32 ScrOp_RetIf(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if (Scr_ReadInt(ctx, pc) != 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)*ctx->sp;
        ctx->sp++;
    }
    return 1;
}

s32 ScrOp_RetToIf(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c != 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)v;
        ctx->sp++;
    }
    return 1;
}

s32 ScrOp_RetIfNot(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    if (Scr_ReadInt(ctx, pc) == 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)*ctx->sp;
        ctx->sp++;
    }
    return 1;
}

s32 ScrOp_RetToIfNot(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 c = Scr_ReadInt(ctx, pc);
    s32 v = Scr_ReadInt(ctx, pc);
    if (c == 0) {
        if (STK_FULL(sys, ctx)) return 2;
        *pc = (u8 *)v;
        ctx->sp++;
    }
    return 1;
}

s32 ScrOp_Sleep(s32 unused, ScrCtx *ctx, u8 **pc) {
    return (Scr_ReadInt(ctx, pc) << 8) + 7;
}

s32 ScrOp_SetX28(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->x28 = ctx->base + Scr_ReadInt(ctx, pc);
    return 1;
}

s32 ScrOp_Spawn(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc);
    s32 n = ctx->sp[1];
    ScrTask *r = Scr_CreateTask(*sys, ctx->base + v, n);
    void (*cb)(void *, void *) = (*sys)->cb50;
    if (cb) cb(&r->w, ctx);
    return 1;
}

s32 ScrOp_SpawnPrio(ScrMachine **sys, ScrCtx *ctx, u8 **pc) {
    s32 a = Scr_ReadInt(ctx, pc);
    ScrTask *r = Scr_CreateTask(*sys, ctx->base + a, Scr_ReadInt(ctx, pc));
    void (*cb)(void *, void *) = (*sys)->cb50;
    if (cb) cb(&r->w, ctx);
    return 1;
}

s32 ScrOp_End(void) { return 3; }

s32 ScrOp_Wait(s32 unused, ScrCtx *ctx, u8 **pc) {
    s32 v = Scr_ReadInt(ctx, pc) - 1;
    if (v < 0) v = 0;
    return (v << 8) + 3;
}

s32 ScrOp_Op2(void) { return 2; }

s32 ScrOp_Op4(void) { return 4; }

s32 ScrOp_Native(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = (s32)(ctx->base + Scr_ReadInt(ctx, pc));
    ctx->r[1] = ctx->sp[1];
    return 5;
}

s32 ScrOp_Native2(s32 unused, ScrCtx *ctx, u8 **pc) {
    ctx->r[0] = (s32)(ctx->base + Scr_ReadInt(ctx, pc));
    ctx->r[1] = Scr_ReadInt(ctx, pc);
    return 5;
}

s32 ScrOp_Op6(void) { return 6; }

void Scr_Copy4(s8 *dst, s8 *src) {
    dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
}

INCLUDE_ASM("asm/nonmatchings/sys/script", Scr_ReadInt);
INCLUDE_ASM("asm/nonmatchings/sys/script", Scr_ReadFloat);
INCLUDE_ASM("asm/nonmatchings/sys/script", Scr_IntOperand);
INCLUDE_ASM("asm/nonmatchings/sys/script", Scr_FloatOperand);
ScrTask *Scr_CreateTask(ScrMachine *m, u8 *pc, s32 prio) {
    ScrTask *task;
    s32 slot;
    ScrCtx *ctx;
    task = amTask_Create(Scr_TaskMain, Scr_TaskExit, m->x10 + prio, m->x14, m->x18, D_0045F6F0);
    task->w.m = m;
    slot = m->x58[m->x20++];
    task->w.slot = slot;
    ctx = (ScrCtx *)(m->x34 + slot);
    task->w.ctx = ctx;
    task->w.x8 = 0;
    task->w.xC = 0;
    task->w.x10 = 0;
    task->w.x14 = 0;
    func_001258F8(ctx, 0, 0x80);
    ctx->base = m->code;
    ctx->x30 = m->x24;
    ctx->x34 = m->x28;
    ctx->x38 = m->x2C + slot * m->size3C;
    ctx->stack = m->x30 + slot * m->size40;
    ctx->x24 = pc;
    ctx->x28 = pc;
    ctx->sp = (s32 *)(ctx->stack + m->size40);
    func_001258F8(ctx->x38, 0, m->size3C);
    return task;
}

/* Sys_Init (the start-up: IOP modules, then every subsystem): its three structures passed by value are
 * copied from initialized locals (the copies use the argument register as destination), which needs their
 * initializers, so data in C: left for when this file's data is migrated. */
INCLUDE_ASM("asm/nonmatchings/sys/script", Sys_Init);
INCLUDE_ASM("asm/nonmatchings/sys/script", main);
INCLUDE_ASM("asm/nonmatchings/sys/script", func_0014E580);
