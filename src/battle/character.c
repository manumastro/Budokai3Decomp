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
extern void Sp_CallHandler(s32, void *);
extern s32 func_001DF420(Fighter *, s32, s32);
extern void Btl_UpdateLimitXY(s32, f32, f32);
extern void func_001DA4C0(void);
extern void func_001D8A50(Fighter *);
extern void PlyScr_Start(Fighter *, s32, s32);
extern void amTask_Kill(void *);

extern s32 D_004B41F0[7];
extern char D_00469250[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void AdxSlot_Pause(void *);
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
extern void func_001DD680(Fighter *, s32);
extern void func_001D80A0(Fighter *, s32);
extern void func_001D9960(Fighter *, s32, s32);
extern void CharLight_Release(s32);
extern void CharBody_Release(s32);
extern void func_001C9840(s32);
extern void amHeap_Free(void *);
extern s32 func_001C9A70(s32);
extern s32 func_001CA130(s32);
void ScrVib_TaskKill(Task *task);
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

void *Character_CreateWork(s32 i, s32 size) {
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
void Character_Release(s32 *c) {
    if (c != 0) {
        CharLight_Release(c[7]);
        CharBody_Release(c[1]);
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
    if (gBattle->unk88EC == 0) {
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
void ScrVib_TaskKill(Task *task) {
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
void Character_PauseVoice(s32 *a) {
    AdxSlot_Pause((void *)a[15]);
}
void func_001CAFE0(s32 *a) {
    CharAnim *s = (CharAnim *)&a[15];
    func_001E9B00(s->obj, s->id, 0, 0, 0.0f, 1.0f);
}
void func_001CB010(s32 *a) {
    CharAnim *s = (CharAnim *)&a[15];
    func_001D9EB0(s->obj, s->id);
}
void func_001CB020(Task *task) {
    BattleWork *bw = gBattle;
    CharTimer *w = (CharTimer *)task->work;
    if (bw->unk88EC == 0) {
        w->count++;
        if (!((f32)w->count * bw->unk88F0 < w->length)) {
            ((void (*)(Task *, BattleWork *, CharTimer *))w->func)(task, bw, w);
            amTask_Kill(task);
        }
    }
}

s32 Scr_CmdVecPairCall146E30(void *self, ScriptCtx *ctx) {
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
s32 Scr_CmdVecCall146E90(void *self, ScriptCtx *ctx) {
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
s32 Scr_CmdAngleDeg(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    ctx->fret = 180.0f * func_0011F680(a[0], a[1]) / 3.1415927f;
    return 1;
}
s32 Scr_CmdRandom(void *self, ScriptCtx *ctx) {
    ctx->fret = (f32)func_0012EAE0(32) / 2147483648.0f;
    return 1;
}
s32 Scr_CmdRandomBelow(void *self, ScriptCtx *ctx) {
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
s32 Scr_CmdSeedRand(void *self, ScriptCtx *ctx) {
    srand(ctx->args[90]);
    return 1;
}
s32 Scr_CmdSqrt(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    f32 v = a[0];

    __asm__ volatile("sqrt.s %0, %0" : "+f"(v));
    ctx->fret = v;
    return 1;
}
s32 Scr_CmdSetFighter8952(void *self, ScriptCtx *ctx) {
    s32 on = ctx->args[0];
    Fighter *f = gBattle->fighter[ctx->args[1]];
    func_001E2510(f);
    gBattle->unk8952 = on ? f->unk1350 + 1 : 0;
    return 1;
}
s32 Scr_CmdSpCall8(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 x = a[0];
    s32 y = a[1];
    msg.side = gBattle->fighter[a[2]]->unk1350;
    msg.val2 = x;
    msg.val = y;
    Sp_CallHandler(8, &msg);
    return 1;
}
s32 Scr_CmdSpCall0(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 y = a[0];
    msg.side = gBattle->fighter[a[1]]->unk1350;
    msg.val = y;
    Sp_CallHandler(0, &msg);
    return 1;
}
s32 Scr_CmdSpCall3(void *self, ScriptCtx *ctx) {
    BtlMsg msg;
    s32 *a = ctx->args;
    s32 y = a[0];
    msg.side = gBattle->fighter[a[1]]->unk1350;
    msg.val = y;
    Sp_CallHandler(3, &msg);
    return 1;
}
s32 func_001CB4A0(ScriptCtx *ctx) {
    switch (D_00470578) {
    case 0:
        return 3;
    case 1:
        ctx->wait = 0;
        func_001DF420(gBattle->fighter[0], D_0047057C, 0);
        return 1;
    }
    return 6;
}
s32 Scr_CmdSetWaitCb1CB4A0(ScriptCtx *ctx) {
    ctx->wait = func_001CB4A0;
    return 3;
}
s32 Scr_CmdSetGlobalFlag470578(void) {
    D_00470578 = 1;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB540);
s32 func_001CB660(void *self, ScriptCtx *ctx) {
    Fighter *f = gBattle->fighter[0];
    CharPair *p = (CharPair *)D_00469290;
    ctx->ret = -1;
    while (p->chara != -1) {
        if (f->unk1CFC == p->chara && func_001DF420(f, p->value, 2)) {
            ctx->ret = p->value;
            break;
        }
        p++;
    }
    return 1;
}
s32 Scr_CmdResetLimitXY(void) {
    Btl_UpdateLimitXY(1, 0.0f, 0.0f);
    return 1;
}
s32 Scr_CmdUpdateLimitXY(void *self, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    Btl_UpdateLimitXY(1, a[1], a[0]);
    return 1;
}
s32 Scr_CmdResetBattle8AB2(void) {
    BattleWork *w = gBattle;
    w->unk8AB2 = 0;
    w->unk8AB3 = -1;
    return 1;
}
s32 Scr_CmdSetBattle8AB2(void) {
    BattleWork *w = gBattle;
    w->unk8AB2 = 1;
    w->unk8AB3 = -1;
    w->unk891C = 0;
    return 1;
}
s32 func_001CB7E0(void *self, ScriptCtx *ctx) {
    s32 *a = (s32 *)ctx->args;
    u8 *f = ((u8 **)((u8 *)gBattle + 0x8934))[a[0]];

    *(s8 *)((u8 *)gBattle + 0x8AB1) = *(s32 *)(*(u8 **)(f + 0x1354) + 0x1350) + 1;
    *(s8 *)(f + 0x1FF8) = -1;
    *(s32 *)(*(u8 **)(f + 0x1354) + 0x1AC4) = 0;
    func_001DD680((Fighter *)f, 0);
    func_001D80A0(*(Fighter **)(f + 0x1354), 9);
    func_001D9960(*(Fighter **)(f + 0x1354), 0x1C, 1);
    return 1;
}
s32 Scr_CmdCall1DA4C0(void) {
    func_001DA4C0();
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB890);
/* differs: 8 of 13: the original's `addu $a0,$a1,$a0` takes the scaled index first and the global base second, and it
   reads args[0] before the address is summed; here the base comes first. Tried: `gBattle + 0x8934 + i*4`, the array
   form `((u8 **)((char *)gBattle + 0x8934))[i]`, and index/value locals (the last two put the index first but
   schedule sltu before the addu). Round 5: also the store as (s16)(a[0] != 0), !!a[0], and p declared before the store;
   all 8 of 13: the original loads args[1] first and computes args[0] != 0 only at the store. */
#if 0
s32 func_001CB9B0(void *self, ScriptCtx *ctx) {
    s32 *a = (s32 *)ctx->args;
    s32 i = a[1];
    s32 n = (a[0] != 0);
    u8 *p = ((u8 **)((u8 *)gBattle + 0x8934))[i];

    *(s16 *)(p + 0x1AD6) = n;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/character", func_001CB9B0);
s32 Scr_CmdFighter1AD8(void *self, ScriptCtx *ctx) {
    ctx->fret = gBattle->fighter[ctx->args[0]]->unk1AD8;
    return 1;
}
s32 Scr_CmdFighter1ACE(void *self, ScriptCtx *ctx) {
    ctx->ret = gBattle->fighter[ctx->args[0]]->unk1ACE;
    return 1;
}
s32 Scr_CmdFighterCall1D8A50(void *self, ScriptCtx *ctx) {
    func_001D8A50(gBattle->fighter[ctx->args[0]]);
    return 1;
}
s32 Character_CmdPlyScr(void *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    PlyScr_Start(gBattle->fighter[a[2]], a[1], a[0]);
    return 1;
}
s32 ScrVib_CmdCtrl(ScriptOwner *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 a0 = a[0];
    s32 a1 = a[1];
    s32 a2 = a[2];
    s32 a3 = a[3];
    s32 a4 = a[4];
    s32 side = a[5];
    Fighter *f = gBattle->fighter[side];
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
        t = amTask_Create(func_001CACB0, ScrVib_TaskKill, 0x5380, self->info[5], self->info[6], D_004692C0);
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
s32 ScrVib_CmdFlash(ScriptOwner *self, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 a0 = a[0];
    s32 a1 = a[1];
    s32 a2 = a[2];
    s32 side = a[3];
    Fighter *f = gBattle->fighter[side];
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
        t = amTask_Create(func_001CACB0, ScrVib_TaskKill, 0x5380, self->info[5], self->info[6], D_004692C0);
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
s32 Scr_CmdKillTaskSlot(void *self, ScriptCtx *ctx) {
    void *p = D_00470580[ctx->args[0]];
    if (p == 0) {
        return 1;
    }
    amTask_Kill(p);
    return 1;
}
