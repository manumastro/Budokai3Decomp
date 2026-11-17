#include "common.h"
#include "battle/battle.h"

extern s32 D_00470578;
extern s32 D_0047057C;
extern void *D_00470580[2];
typedef struct BtlMsg {
    s32 unk00[4];
    s32 side;
    s32 val;
    s16 val2;
    u8 unk1A[0x16];
} BtlMsg;

extern float sqrtf(float);

extern f32 func_00146E90(f32 *);
extern f32 func_00146E30(f32 *, f32 *);
extern f32 func_0011F680(f32, f32);
extern u32 func_0012EAE0(s32);
extern void srand(s32);
extern void func_001E2510(Fighter *);
extern void func_00243DE0(s32, void *);
extern s32 func_001DF420(Fighter *, s32, s32);
extern void func_001B05E0(s32, f32, f32);
extern void func_001DA4C0(void);
extern void func_001D8A50(Fighter *);
extern void func_001D8A90(Fighter *, s32, s32);
extern void amTask_Kill(void *);

extern s32 D_004B41F0[7];
extern char D_00469250[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void func_00219470(void *);
extern void func_001E73E0(void *, s32, s32);
extern void func_001D9EB0(void *, s32);
extern void func_001E9B00(void *, s32, s32, s32, f32, f32);

typedef struct Task {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 work[1];
} Task;

typedef struct CharFlash {
    /* 0x00 */ s32 side;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 from;
    /* 0x09 */ u8 to;
    /* 0x0A */ u8 flags;
    /* 0x0B */ u8 rand;
    /* 0x0C */ f32 time;
    /* 0x10 */ f32 length;
} CharFlash;

typedef struct ScriptOwner {
    /* 0x00 */ s32 *info;
} ScriptOwner;

typedef struct CharPair {
    s16 chara;
    s16 value;
} CharPair;

extern CharPair D_00469290[];
extern char D_004692C0[];
extern void *amTask_Create(void (*update)(Task *), void (*kill)(Task *), s32 prio, s32, s32, char *name);
extern void memset(void *, s32, s32);
extern void func_001A3610(s32);
extern void func_001E11E0(s32, void *);
extern void func_0021A030(void *, s32, s32, f32);
extern void func_00237000(s32, void *);
extern void func_001DD680(Fighter *);
extern void func_001D80A0(Fighter *, s32);
extern void func_001D9960(Fighter *, s32, s32);
extern void func_002378A0(s32);
extern void func_001C9F30(s32);
extern void func_001C9840(s32);
extern void amHeap_Free(void *);
extern s32 func_001C9A70(s32);
extern s32 func_001CA130(s32);
void func_001CAC70(Task *task);
void func_001CACB0(Task *task);

typedef struct CharColor {
    s32 id;
    s32 unk04;
    s32 unk08;
    f32 unk0C;
    s32 unk10;
} CharColor;

typedef struct CharColorArg {
    f32 unk00;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
} CharColorArg;

typedef struct CharTimer {
    s32 count;
    f32 length;
    void (*func)(void);
} CharTimer;

void *func_001CA3F0(s32 i, s32 size) {
    if (D_004B41F0[i] == 0) {
        return amHeap_Alloc(size, 0, D_00469250, 440);
    }
    return amHeap_Alloc(size, 1, D_00469250, 442);
}
void func_001CA460(s32 i, s32 v) {
    s32 end;
    if (i == -1) {
        i = 0;
        end = 7;
    } else {
        end = i + 1;
    }
    for (; i < end; i++) {
        D_004B41F0[i] = v;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CA4D0);
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CA780);
void func_001CA8A0(s32 *c) {
    if (c != 0) {
        func_002378A0(c[7]);
        func_001C9F30(c[1]);
        func_001C9840(c[0]);
        amHeap_Free(c);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CA8F0);
s32 func_001CAA30(s32 *c) {
    if (c == 0) {
        return 1;
    }
    if (c[8] == 0) {
        return 1;
    }
    if (func_001C9A70(c[0]) && func_001CA130(c[1])) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CAAB0);
#if 0
/* Does not match yet: 11 of 23 instructions differ. */
void func_001CAC10(Task *task) {
    CharColor *w = (CharColor *)task->work;
    CharColorArg v;
    if (D_00470570->unk88EC == 0) {
        f32 a = w->unk0C;
        s32 b = w->unk10;
        s32 c = w->unk04;
        s32 d = w->unk08;
        v.unk00 = a;
        v.unk04 = b;
        v.unk08 = c;
        v.unk0C = d;
        func_001E11E0(w->id, &v);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CAC10);
void func_001CAC70(Task *task) {
    CharFlash *w = (CharFlash *)task->work;
    func_001A3610(w->unk04);
    D_00470580[w->side] = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CACB0);
typedef struct CharAnim {
    void *obj;
    s32 id;
} CharAnim;

void func_001CAFB0(s32 *a) {
    CharAnim *s = (CharAnim *)&a[15];
    func_001E73E0(s->obj, s->id, 0);
}
void func_001CAFD0(s32 *a) {
    func_00219470((void *)a[15]);
}
void func_001CAFE0(s32 *a) {
    CharAnim *s = (CharAnim *)&a[15];
    func_001E9B00(s->obj, s->id, 0, 0, 0.0f, 1.0f);
}
void func_001CB010(s32 *a) {
    CharAnim *s = (CharAnim *)&a[15];
    func_001D9EB0(s->obj, s->id);
}
#if 0
/* Does not match yet: 10 of 32 instructions differ. */
void func_001CB020(Task *task) {
    CharTimer *w;
    BattleWork *bw = D_00470570;
    w = (CharTimer *)task->work;
    if (bw->unk88EC == 0) {
        w->count++;
        if (!((f32)w->count * bw->unk88F0 < w->length)) {
            w->func();
            amTask_Kill(task);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB020);
s32 func_001CB0A0(void *self, ScriptCtx *ctx) {
    f32 v1[4];
    f32 v0[4];
    f32 *a = (f32 *)ctx->args;
    f32 x0 = a[0];
    f32 y0 = a[1];
    f32 z0 = a[2];
    f32 x1 = a[3];
    f32 y1 = a[4];
    f32 z1 = a[5];
    v1[0] = z1;
    v1[3] = 1.0f;
    v1[1] = y1;
    v0[3] = 1.0f;
    v1[2] = x1;
    v0[0] = z0;
    v0[1] = y0;
    v0[2] = x0;
    ctx->fret = func_00146E30(v1, v0);
    return 1;
}
s32 func_001CB120(void *self, ScriptCtx *ctx) {
    f32 v[4];
    f32 *a = (f32 *)ctx->args;
    f32 x = a[0];
    f32 y = a[1];
    f32 z = a[2];
    v[0] = z;
    v[3] = 1.0f;
    v[1] = y;
    v[2] = x;
    ctx->fret = func_00146E90(v);
    return 1;
}
s32 func_001CB180(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    ctx->fret = 180.0f * func_0011F680(a[0], a[1]) / 3.1415927f;
    return 1;
}
s32 func_001CB1E0(void *self, ScriptCtx *ctx) {
    ctx->fret = (f32)func_0012EAE0(32) / 2147483648.0f;
    return 1;
}
s32 func_001CB250(void *self, ScriptCtx *ctx) {
    s32 n = ctx->args[0];
    s32 r;
    if (n > 0) {
        r = func_0012EAE0(32) % n;
    } else {
        r = 0;
    }
    ctx->ret = r;
    return 1;
}
s32 func_001CB2B0(void *self, ScriptCtx *ctx) {
    srand(ctx->args[90]);
    return 1;
}
#if 0
/* Does not match yet: 8 of 8 instructions differ. */
s32 func_001CB2E0(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    ctx->fret = sqrtf(a[0]);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB2E0);
s32 func_001CB300(void *self, ScriptCtx *ctx) {
    s32 on = ctx->args[0];
    Fighter *f = D_00470570->fighter[ctx->args[1]];
    func_001E2510(f);
    D_00470570->unk8952 = on ? f->unk1350 + 1 : 0;
    return 1;
}
s32 func_001CB380(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 x = a[0];
    s32 y = a[1];
    msg.side = D_00470570->fighter[a[2]]->unk1350;
    msg.val2 = x;
    msg.val = y;
    func_00243DE0(8, &msg);
    return 1;
}
s32 func_001CB3E0(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 y = a[0];
    msg.side = D_00470570->fighter[a[1]]->unk1350;
    msg.val = y;
    func_00243DE0(0, &msg);
    return 1;
}
s32 func_001CB440(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 y = a[0];
    msg.side = D_00470570->fighter[a[1]]->unk1350;
    msg.val = y;
    func_00243DE0(3, &msg);
    return 1;
}
s32 func_001CB4A0(ScriptCtx *ctx) {
    switch (D_00470578) {
    case 0:
        return 3;
    case 1:
        ctx->wait = 0;
        func_001DF420(D_00470570->fighter[0], D_0047057C, 0);
        return 1;
    }
    return 6;
}
s32 func_001CB510(ScriptCtx *ctx) {
    ctx->wait = func_001CB4A0;
    return 3;
}
s32 func_001CB530(void) {
    D_00470578 = 1;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB540);
#if 0
/* Does not match yet: 35 of 46 instructions differ. */
s32 func_001CB660(void *self, ScriptCtx *ctx) {
    CharPair *p = D_00469290;
    Fighter *f = D_00470570->fighter[0];
    ctx->ret = -1;
    while (p->chara != -1) {
        if (f->unk1CFC == p->chara && func_001DF420(f, p->value, 2)) {
            ctx->ret = p->value;
            return 1;
        }
        p++;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB660);
s32 func_001CB710(void) {
    func_001B05E0(1, 0.0f, 0.0f);
    return 1;
}
s32 func_001CB740(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    func_001B05E0(1, a[1], a[0]);
    return 1;
}
s32 func_001CB770(void) {
    BattleWork *w = D_00470570;
    w->unk8AB2 = 0;
    w->unk8AB3 = -1;
    return 1;
}
s32 func_001CB7A0(void) {
    BattleWork *w = D_00470570;
    w->unk8AB2 = 1;
    w->unk8AB3 = -1;
    w->unk891C = 0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB7E0);
s32 func_001CB870(void) {
    func_001DA4C0();
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB890);
#if 0
/* Does not match yet: 10 of 13 instructions differ. */
s32 func_001CB9B0(void *self, ScriptCtx *ctx) {
    D_00470570->fighter[ctx->args[1]]->unk1AD6 = ctx->args[0] ? 1 : 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB9B0);
s32 func_001CB9F0(void *self, ScriptCtx *ctx) {
    ctx->fret = D_00470570->fighter[ctx->args[0]]->unk1AD8;
    return 1;
}
s32 func_001CBA20(void *self, ScriptCtx *ctx) {
    ctx->ret = D_00470570->fighter[ctx->args[0]]->unk1ACE;
    return 1;
}
s32 func_001CBA50(void *self, ScriptCtx *ctx) {
    func_001D8A50(D_00470570->fighter[ctx->args[0]]);
    return 1;
}
s32 func_001CBA90(void *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    func_001D8A90(D_00470570->fighter[a[2]], a[1], a[0]);
    return 1;
}
s32 func_001CBAE0(ScriptOwner *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 a0 = a[0];
    s32 a1 = a[1];
    s32 a2 = a[2];
    s32 a3 = a[3];
    s32 a4 = a[4];
    s32 side = a[5];
    Fighter *f = D_00470570->fighter[side];
    void **slot;
    Task *t;
    CharFlash *w;
    if (f->unk13A4 <= -1) {
        return 1;
    }
    slot = &D_00470580[side];
    if (*slot != 0) {
        t = *slot;
    } else {
        t = amTask_Create(func_001CACB0, func_001CAC70, 0x5380, self->info[5], self->info[6], D_004692C0);
        *slot = t;
    }
    w = (CharFlash *)t->work;
    memset(w, 0, sizeof(CharFlash));
    w->side = side;
    w->unk04 = f->unk13A4;
    w->time = 0.0f;
    w->length = a2;
    w->from = a4;
    w->to = a3;
    w->flags = a1;
    w->rand = a0;
    return 1;
}
s32 func_001CBC20(ScriptOwner *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 a0 = a[0];
    s32 a1 = a[1];
    s32 a2 = a[2];
    s32 side = a[3];
    Fighter *f = D_00470570->fighter[side];
    void **slot;
    Task *t;
    CharFlash *w;
    if (-1 >= f->unk13A4) {
        return 1;
    }
    slot = &D_00470580[side];
    if (*slot != 0) {
        t = *slot;
    } else {
        t = amTask_Create(func_001CACB0, func_001CAC70, 0x5380, self->info[5], self->info[6], D_004692C0);
        *slot = t;
    }
    w = (CharFlash *)t->work;
    memset(w, 0, sizeof(CharFlash));
    w->side = side;
    w->unk04 = f->unk13A4;
    w->time = 0.0f;
    w->length = a0;
    w->from = a2;
    w->to = a1;
    return 1;
}
s32 func_001CBD40(void *self, ScriptCtx *ctx) {
    void *p = D_00470580[ctx->args[0]];
    if (p == 0) {
        return 1;
    }
    amTask_Kill(p);
    return 1;
}
