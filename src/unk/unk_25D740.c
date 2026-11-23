#include "common.h"

typedef union ScrArg {
    s32 i;
    f32 f;
    void *p;
} ScrArg;

typedef struct ScrCmd {
    s32 f0;
    char pad4[0x28];
    ScrArg *args;
    char pad30[0x10];
    f32 f40;
} ScrCmd;

typedef struct ScrState {
    char pad0[0x916];
    s16 f916;
    char pad918[2];
    s16 f91A;
} ScrState;

typedef struct ScrObj {
    f32 f0;
    f32 f4;
    f32 f8;
    char padC[4];
    f32 f10;
    f32 f14;
    f32 f18;
} ScrObj;

typedef struct ScrChara {
    char pad0[0x1350];
    s32 f1350;
} ScrChara;

typedef struct ScrEntry {
    char pad0[0x94];
    s32 f94;
} ScrEntry;

typedef struct ScrTask {
    char pad0[0x30];
    s32 f30;
} ScrTask;

typedef struct ScrBig {
    char pad0[0x6C];
    void *f6C;
    char pad70[0x20];
    s16 f90;
    char pad92[8];
    s16 f9A;
    s16 f9C;
    char pad9E[8];
    s16 fA6;
    s16 fA8;
    char padAA[6];
} ScrBig;

typedef struct ScrVec {
    f32 x, y, z, w;
} ScrVec;

extern ScrState *D_0046FE4C;
extern s32 D_0058EE50[];
extern s32 D_0058EE90[];
extern s32 D_0058EED0[];
extern s32 D_0058EF10[];
extern void memset(void *, s32, s32);
extern void Obj_ResetF38(s32);
extern s32 D_0047079C;

typedef struct ScrProg {
    char pad0[0xC];
    s32 fC;
} ScrProg;

typedef struct ScrCtx {
    ScrProg *f0;
    char pad4[0xC];
    void *f10;
    void *f14;
    char pad18[0x10];
    s8 f28;
    char pad29;
    s8 f2A;
    s8 f2B;
} ScrCtx;

typedef struct ScrEffect {
    char pad0[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    char pad3C[0x2118 - 0x3C];
    f32 f2118;
    f32 f211C;
    char pad2120[0x10];
    f32 f2130;
    char pad2134[0xC];
} ScrEffect;

typedef struct ScrWork {
    char pad0[0x88EC];
    s32 f88EC;
    f32 f88F0;
    char pad88F4[0x8934 - 0x88F4];
    void *f8934[1];
} ScrWork;

typedef struct ScrSound {
    char pad0[0x38];
    s32 f38;
} ScrSound;

extern ScrWork *gBattle;
extern void func_0020F040(s32, s32);

typedef struct ScrFade {
    s32 id;
    f32 cur;
    f32 end;
} ScrFade;

typedef struct ScrFadeTask {
    char pad0[0x30];
    ScrFade fade;
} ScrFadeTask;

extern s8 D_004703F4;

static inline s32 Scr_IsPaused(void) {
    return gBattle != NULL ? gBattle->f88EC : 0;
}

static inline f32 Scr_GetSpeed(void) {
    return gBattle != NULL ? gBattle->f88F0 : (D_004703F4 != 3 ? 1.0f : 1.2f);
}

extern void func_0020DDD0(s32, ScrEffect *);
extern void func_0020DE30(void);
extern void func_0020DE40(s32);

/* A timed object: a counter at 0x2C against a limit at 0x30, a done flag at 0x10. */
typedef struct TimedEE10 {
    char pad0[0x10];
    s32 f10;
    char pad14[0x16];
    s8 f2A;
    char pad2B;
    f32 f2C;
    f32 f30;
} TimedEE10;
extern void amTask_Kill(ScrTask *);

/* A script object of this family: a pointer at 0x0 to a record with a counter at 0xC, a task function at 0x10, a byte at 0x28. */
typedef struct CountRec25 {
    char pad0[0xC];
    s32 fC;
} CountRec25;

typedef struct ObjF28 {
    CountRec25 *f0;
    char pad4[0xC];
    void *f10;
    char pad14[0x14];
    s8 f28;
} ObjF28;

/* A timed script object: a task function at 0x10, two bytes at 0x2A / 0x2B. */
typedef struct TimedF0C0 {
    char pad0[0x10];
    void *f10;
    char pad14[0x16];
    s8 f2A;
    s8 f2B;
} TimedF0C0;
extern char D_0046B080[];
extern char D_0046B060[];
extern char D_0046B120[];
typedef struct Obj30 {
    s32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
} Obj30;

extern void func_0025E5A0(void *);
/* The part of a task at 0x30 that these functions fill: a word, then two floats. */
typedef struct ScrPos30 {
    s32 f0;
    f32 f4;
    f32 f8;
} ScrPos30;
extern void func_0025D740(void *);
extern ScrTask *amTask_Create(void *, s32, s32, s32, s32, char *);
void Bscr_GetRenderTexture(ScrTask *);
extern void func_0020E070(s32, ScrVec *);
extern void func_0020E120(s32, s32);
extern void func_0020E210(s32, s32);
extern void func_0020E290(s32, ScrVec *, s32);
extern void func_0020E530(s32, ScrVec *, s32);
extern void func_0020E620(s32, ScrVec *, s32);
extern void func_0020E7D0(s32, void *, s32);
extern void func_0020E8F0(s32, void *, s32);
extern void func_0020EB70(s32, ScrVec *);
extern char D_0046B100[];
extern void func_0020EBF0(s32);
extern void func_0020EC70(s32);
extern void func_0020EDA0(s32);
extern void func_00245A80(void *, s32);
extern void func_002529B0(s32, void *, ScrVec *);
extern void func_00248910(s32, void *);
extern s32 func_0020EE10(s32, s32);
extern s32 func_0020EF80(s32, s32);
extern void func_0020F090(s32, s32, s32);
extern void func_0020F0E0(s32, s32);
extern void func_0020F130(s32, s32);
extern void func_0020F180(s32, s32);
extern void func_0020F1D0(s32, f32);
extern void func_0020F200(s32, f32);
extern void func_0020F230(s32, f32);
extern void func_0020F260(s32, f32);
extern void func_0020F290(s32, s32);
extern void func_0020F300(s32, s32);
extern void func_0020F3B0(s32, f32);
extern void func_0020F3E0(s32, f32);
extern void func_0020F410(s32, f32);
extern void func_0020F440(s32, f32);
extern void func_0020F470(s32, f32, f32, f32);
extern void func_0020F4A0(s32, f32, f32);
extern void func_00245BE0(void *);
extern s32 func_00245C50(void *);
extern void func_00245BF0(void *);
extern void func_00245C00(void *);
extern void func_00245CC0(void *, s32);
extern void func_00245D30(void *, s32);
extern void func_0020F4D0(ScrBig *);
extern void func_0020F5A0(ScrBig *);
extern ScrEntry *func_0020F6D0(s32);
extern s32 func_0020B020(s32, s32, s32);
extern s32 func_0020AD30(s32, s32, s32);

/* Four floats of a slot (16 bytes), in a table of slots inside a ScrObj. */
typedef struct Slot16 {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
} Slot16;

typedef struct PlyPart {
    char pad0[0x1350];
    s32 f1350;
} PlyPart;
extern s32 func_0020AE80(s32, s32, s32);
extern void func_00215990(s32);
extern void func_0020F700(s32);
extern void func_0020F870(s32);
extern ScrObj *func_0020A720(s32);
extern s32 func_0020A5F0(s32);
extern void func_0020A4D0(s32);
extern s32 func_0020A780(s32);
extern void func_0020A740(s32);
extern void func_0020A7F0(s32);
extern void func_00209A90(s32, ScrVec *);
extern void func_00209B50(s32, ScrVec *, s32);
extern void func_00208F70(ScrSound *);
extern s32 func_002096D0(s32, s32, s32);
extern void func_00209450(s32, s32);
extern s32 func_00209540(s32, s32, s32);

extern void func_0020EA70(s32);
extern char D_0046B0E0[];
void func_0025E1A0(ScrFadeTask *);
extern void func_0020F370(s32, f32, f32, f32, f32);
extern char D_0046B140[];
extern char D_0046B160[];

typedef struct Tk30 {
    s32 f0;
    f32 f4;
    f32 f8;
} Tk30;

void func_0025D740(void *o) {
    Tk30 *s0 = (Tk30 *)((char *)o + 0x30);

    if (Scr_IsPaused() == 0) {
        if (s0->f8 != -1.0f) {
            s0->f4 = s0->f4 + Scr_GetSpeed();
            if (s0->f4 >= s0->f8) {
                amTask_Kill(o);
            }
        }
    }
    func_0020DAE0(s0->f0);
}
s32 Bscr_CmdDrawPhotoPrio(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 s1 = a[2].i;
    s32 s0 = a[1].i;
    ScrTask *t = amTask_Create(func_0025D740, 0, a[0].i, 0x400, 0x800002, D_0046B060);
    ScrPos30 *e;

    t->f30 = s1;
    e = (ScrPos30 *)&t->f30;
    e->f4 = -Scr_GetSpeed();
    e->f8 = (f32)s0;
    return 1;
}

s32 Scr_CmdEffectSpawn(ScrCtx *ctx, ScrCmd *cmd) {
    ScrEffect e;
    s32 id = cmd->args[6].i;

    e.f2118 = cmd->args[5].f;
    e.f211C = cmd->args[4].f;
    e.f2130 = cmd->args[3].f;
    e.f30 = cmd->args[2].f;
    e.f34 = cmd->args[1].f;
    e.f38 = cmd->args[0].f;
    func_0020DDD0(id, &e);
    return 1;
}

s32 Scr_CmdFlushFlag916(ScrCtx *ctx, ScrCmd *cmd) {
    if (D_0046FE4C->f916 != 0) {
        func_0020DE30();
        D_0046FE4C->f916 = 0;
    }
    return 1;
}

void Bscr_GetRenderTexture(ScrTask *task) {
    s32 busy = gBattle != NULL ? gBattle->f88EC : 0;

    if (busy == 0) {
        switch (D_0046FE4C->f916) {
        case 0:
            func_0020DE40(task->f30);
            D_0046FE4C->f916 = 1;
            break;
        case 1:
            amTask_Kill(task);
            D_0046FE4C->f916 = 2;
            break;
        }
    }
}

s32 Bscr_CmdGetRenderTexture(ScrCtx *ctx, ScrCmd *cmd) {
    s32 v = cmd->args[0].i;

    if (D_0046FE4C->f916 == 0) {
        amTask_Create(Bscr_GetRenderTexture, 0, 0x3900, 0x400, 0x800002, D_0046B080)->f30 = v;
    }
    return 1;
}

s32 Scr_CmdGetVecZ(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.z;
    return 1;
}
s32 Scr_CmdGetVecY(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.y;
    return 1;
}
s32 Scr_CmdGetVecX(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.x;
    return 1;
}

s32 Scr_CmdCall20E120(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E120(a[1].i, a[0].i);
    return 1;
}

/* differs: 2 of 10: the original loads args[1] into $a0 before the call and args[0] into $a1 in its delay slot;
   here the two loads take the opposite registers (tried temps in both declaration orders and the plain call). */
s32 func_0025DB70(ScrCtx *ctx, ScrCmd *cmd)
{
  ScrArg *a = cmd->args;
  func_0020E210(a[1].i, (unsigned long long) a[0].i);
  return 1;
}


s32 Scr_CmdObjVecCall4C(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    s32 id = a[4].i;
    s32 n = a[3].i;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;

    v.x = x;
    v.y = y;
    v.z = z;
    v.w = 1.0f;
    v.z = 1.0f;
    func_0020E290(id, &v, n);
    return 1;
}

s32 Scr_CmdObjVecCall4B(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    s32 id = a[4].i;
    s32 n = a[3].i;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;

    v.x = x;
    v.w = 1.0f;
    v.y = y;
    v.z = z;
    func_0020E530(id, &v, n);
    return 1;
}

s32 Scr_CmdObjVecCall4(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    s32 id = a[4].i;
    s32 n = a[3].i;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;

    v.x = x;
    v.w = 1.0f;
    v.y = y;
    v.z = z;
    func_0020E620(id, &v, n);
    return 1;
}
extern void func_0020E730(s32, void *, s32);

void func_0025DCA0(void *task) {
    Obj30 *p = (Obj30 *)((u8 *)task + 0x30);
    u32 k;
    f32 d;
    s32 busy = gBattle != NULL ? gBattle->f88EC : 0;
    s32 base;
    u8 *row;

    if (busy != 0) {
        return;
    }
    if (p->f8 != -1.0f) {
        d = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
        p->f4 = p->f4 + d;
        if (!(p->f4 < p->f8)) {
            amTask_Kill(task);
        }
    }
    base = (s32)gBattle->f8934[p->f10];
    k = (p->f18 * 3) << 2;
    row = (u8 *)base + (k + p->f18) * 128 + 0x650;
    if (p->f18 == 1) {
        func_0020E730(p->f0, row, p->f14);
    } else {
        func_0020E7D0(p->f0, (void *)base, p->f14);
    }
}
extern void func_0025DCA0();
extern void func_0025DF20();

s32 func_0025DDD0(void *o, ScrCmd *cmd) {
    extern void *amTask_Create();
    extern char D_0046B0A0[];
    ScrArg *a = cmd->args;
    s32 s4 = a[5].i;
    s32 s3 = a[4].i;
    s32 s2 = a[3].i;
    s32 s1 = a[2].i;
    s32 s0 = a[0].i;
    u8 *p;
    f32 f;

    p = (u8 *)amTask_Create(func_0025DCA0, 0, a[1].i, 0x400, 0x800002, D_0046B0A0) + 0x30;
    *(s32 *)p = s4;
    f = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
    *(f32 *)(p + 4) = -f;
    *(f32 *)(p + 8) = (f32)s1;
    *(s32 *)(p + 0x10) = s3;
    *(s32 *)(p + 0x14) = s2;
    if (s0 != 1) {
        s0 = 0;
    }
    *(s32 *)(p + 0x18) = s0;
    return 1;
}

s32 Scr_CmdCall20E7D0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E7D0(a[2].i, gBattle->f8934[a[1].i], a[0].i);
    return 1;
}
/* differs: 1 of 76: the last addu of the index (f18 * 0x680 + ...) has its operands in the other order (addu v0,a3,v0; the original v0,v0,a3). */
#if 0
extern void func_0020E870(s32, void *, s32);
extern void func_0020E8F0(s32, void *, s32);

void func_0025DF20(void *task) {
    Obj30 *p = (Obj30 *)((u8 *)task + 0x30);
    f32 d;
    s32 busy = gBattle != NULL ? gBattle->f88EC : 0;
    s32 base;

    if (busy != 0) {
        return;
    }
    if (p->f8 != -1.0f) {
        d = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
        p->f4 = p->f4 + d;
        if (!(p->f4 < p->f8)) {
            amTask_Kill(task);
        }
    }
    base = (s32)gBattle->f8934[p->f10];
    if (p->f18 == 1) {
        func_0020E870(p->f0, (u8 *)base + (((p->f18 + ((p->f18 * 3) << 2)))) * 128 + 0x650, p->f14);
    } else {
        func_0020E8F0(p->f0, (void *)base, p->f14);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025DF20);
s32 func_0025E050(void *o, ScrCmd *cmd) {
    extern void *amTask_Create();
    extern char D_0046B0C0[];
    ScrArg *a = cmd->args;
    s32 s4 = a[5].i;
    s32 s3 = a[4].i;
    s32 s2 = a[3].i;
    s32 s1 = a[2].i;
    s32 s0 = a[0].i;
    u8 *p;
    f32 f;

    p = (u8 *)amTask_Create(func_0025DF20, 0, a[1].i, 0x400, 0x800002, D_0046B0C0) + 0x30;
    *(s32 *)p = s4;
    f = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
    *(f32 *)(p + 4) = -f;
    *(f32 *)(p + 8) = (f32)s1;
    *(s32 *)(p + 0x10) = s3;
    *(s32 *)(p + 0x14) = s2;
    if (s0 != 1) {
        s0 = 0;
    }
    *(s32 *)(p + 0x18) = s0;
    return 1;
}

s32 Scr_CmdCall20E8F0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E8F0(a[2].i, gBattle->f8934[a[1].i], a[0].i);
    return 1;
}

/* Same as Bscr_DrawMotionPrio but the original keeps gBattle in a1 and the flag in v1; 8 of 52 differ. */
void func_0025E1A0(ScrFadeTask *task)
{
    ScrFade *f = &task->fade;
    if (!Scr_IsPaused())
    {
        if ((f->end != -1.0f))
        {
            f->cur += Scr_GetSpeed();
            if (!((f->cur < f->end)))
            {
                amTask_Kill(((ScrTask *)task));
            }
        }
        func_0020EA70(f->id);
    }
}

s32 Bscr_CmdSetObjCamPos(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 id = a[6].i;
    s32 end = a[1].i;
    s32 pri = a[0].i;
    ScrFade *f;

    func_0020F370(id, a[5].f, a[4].f, a[3].f, a[2].f);
    f = &((ScrFadeTask *)amTask_Create(func_0025E1A0, 0, pri, 0x400, 0x800002, D_0046B0E0))->fade;
    f->id = id;
    f->cur = -Scr_GetSpeed();
    f->end = end;
    return 1;
}

s32 Scr_CmdObjVec3Call(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    s32 id = a[3].i;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;

    v.x = x;
    v.w = 1.0f;
    v.y = y;
    v.z = z;
    func_0020EB70(id, &v);
    return 1;
}
void Bscr_DrawMotionPrio(ScrFadeTask *task) {
    ScrFade *f = &task->fade;

    if (!Scr_IsPaused() && f->end != -1.0f) {
        f->cur += Scr_GetSpeed();
        if (!(f->cur < f->end)) {
            amTask_Kill((ScrTask *)task);
        }
    }
    func_0020EBF0(f->id);
}

s32 Bscr_CmdDrawMotionPrio(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 id = a[2].i;
    s32 end = a[1].i;
    ScrFade *f = &((ScrFadeTask *)amTask_Create(Bscr_DrawMotionPrio, 0, a[0].i, 0x400, 0x800002, D_0046B100))->fade;

    f->id = id;
    f->cur = -Scr_GetSpeed();
    f->end = end;
    return 1;
}

s32 func_0025E530(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EBF0(ctx->f28);
    return 0;
}
s32 Scr_CmdCtxWaitF14C(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 v = a[1].i;

    if (a[0].i != 0) {
        ctx->f14 = func_0025E530;
        ctx->f28 = v;
    } else if (ctx->f14 == func_0025E530) {
        ctx->f14 = NULL;
    }
    return 1;
}
extern void func_0020A740(s32);

void func_0025E5A0(void *task) {
    Obj30 *p = (Obj30 *)((u8 *)task + 0x30);
    f32 d;
    s32 busy = gBattle != NULL ? gBattle->f88EC : 0;

    if (busy == 0 && p->f8 != -1.0f) {
        d = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
        p->f4 = p->f4 + d;
        if (func_0020A780(p->f0) != 0 || !(p->f4 < p->f8)) {
            func_0020A7F0(p->f0);
            amTask_Kill(task);
        }
    }
    func_0020A740(p->f0);
}
s32 Bscr_CmdEffectLinePrio(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 s1 = a[2].i;
    s32 s0 = a[1].i;
    ScrTask *t = amTask_Create(func_0025E5A0, 0, a[0].i, 0x400, 0x800002, D_0046B120);
    ScrPos30 *e;

    t->f30 = s1;
    e = (ScrPos30 *)&t->f30;
    e->f4 = -Scr_GetSpeed();
    e->f8 = (f32)s0;
    return 1;
}
void Bscr_DrawEffectPrio(ScrFadeTask *task) {
    ScrFade *f = &task->fade;

    if (!Scr_IsPaused() && f->end != -1.0f) {
        f->cur += Scr_GetSpeed();
        if (!(f->cur < f->end)) {
            amTask_Kill((ScrTask *)task);
        }
    }
    func_0020EC70(f->id);
}

s32 Bscr_CmdDrawEffectPrio(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 id = a[2].i;
    s32 end = a[1].i;
    ScrFade *f = &((ScrFadeTask *)amTask_Create(Bscr_DrawEffectPrio, 0, a[0].i, 0x400, 0x800002, D_0046B140))->fade;

    f->id = id;
    f->cur = -Scr_GetSpeed();
    f->end = end;
    return 1;
}

s32 func_0025E8F0(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EC70(ctx->f28);
    return 0;
}
s32 Scr_CmdCtxWaitF14B(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 v = a[1].i;

    if (a[0].i != 0) {
        ctx->f14 = func_0025E8F0;
        ctx->f28 = v;
    } else if (ctx->f14 == func_0025E8F0) {
        ctx->f14 = NULL;
    }
    return 1;
}
void Bscr_DrawObjectPrio(ScrFadeTask *task) {
    ScrFade *f = &task->fade;

    if (!Scr_IsPaused() && f->end != -1.0f) {
        f->cur += Scr_GetSpeed();
        if (!(f->cur < f->end)) {
            amTask_Kill((ScrTask *)task);
        }
    }
    func_0020EDA0(f->id);
}

s32 Bscr_CmdDrawObjectPrio(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 id = a[2].i;
    s32 end = a[1].i;
    ScrFade *f = &((ScrFadeTask *)amTask_Create(Bscr_DrawObjectPrio, 0, a[0].i, 0x400, 0x800002, D_0046B160))->fade;

    f->id = id;
    f->cur = -Scr_GetSpeed();
    f->end = end;
    return 1;
}

s32 func_0025EAF0(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EDA0(ctx->f28);
    return 0;
}
s32 Scr_CmdCtxWaitF14(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 v = a[1].i;

    if (a[0].i != 0) {
        ctx->f14 = func_0025EAF0;
        ctx->f28 = v;
    } else if (ctx->f14 == func_0025EAF0) {
        ctx->f14 = NULL;
    }
    return 1;
}
extern void func_00246800(s32, f32, f32);

void func_0025EB60(void *task) {
    Obj30 *p = (Obj30 *)((u8 *)task + 0x30);
    f32 d;
    s32 busy = gBattle != NULL ? gBattle->f88EC : 0;

    if (busy == 0) {
        if (p->f8 != -1.0f) {
            d = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
            p->f4 = p->f4 + d;
            if (p->f4 >= p->f8) {
                amTask_Kill(task);
            }
        }
        if (!(p->f4 < p->fC)) {
            func_00246800(*(s32 *)((u8 *)gBattle + 0x8934), p->f4 - p->fC, p->f8 - p->fC);
        }
    }
}
extern void func_0025EB60();
extern void func_00246AB0(s32, void *);
extern s8 D_004703F4;

s32 func_0025EC60(void *o, ScrCmd *cmd) {
    extern void *amTask_Create();
    extern char D_0046B178[];
    ScrArg *a = cmd->args;
    s32 s2 = a[2].i;
    s32 s1 = a[1].i;
    s32 s0 = *(s32 *)((u8 *)gBattle + 0x8934);
    u8 *p;
    f32 f;

    p = (u8 *)amTask_Create(func_0025EB60, 0, a[0].i, 0x400, 0x800002, D_0046B178) + 0x30;
    f = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
    *(f32 *)(p + 4) = -f;
    *(f32 *)(p + 8) = (f32)s2;
    *(f32 *)(p + 0xC) = (f32)s1;
    func_00246AB0(s0, p);
    return 1;
}

s32 Scr_CmdObjCall245A80(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245A80(gBattle->f8934[0], cmd->args[0].i);
    return 1;
}

s32 Scr_CmdObjVecCall(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    s32 id = a[5].i;
    void *o = gBattle->f8934[a[4].i];
    s32 mode = a[3].i;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;

    if (mode == 1) {
        v.x = x;
        v.w = 1.0f;
        v.y = y;
        v.z = z;
        func_002529B0(id, o, &v);
    } else {
        func_00248910(id, o);
    }
    return 1;
}
s32 func_0025EE10(TimedEE10 *o) {
    f32 temp_f1;
    f32 var_f1;
    s32 var_v0;

    var_v0 = 0;
    if (gBattle != NULL) {
        var_v0 = gBattle->f88EC;
    }
    if (var_v0 == 0) {
        if (o->f30 != -1.0f) {
            if (gBattle != NULL) {
                var_f1 = gBattle->f88F0;
            } else {
                var_f1 = (D_004703F4 != 3) ? 1.0f : 1.2f;
            }
            temp_f1 = o->f2C + var_f1;
            o->f2C = temp_f1;
            if (!(temp_f1 < o->f30)) {
                o->f10 = 0;
                return 1;
            }
            goto block_11;
        }
block_11:
        func_0020EE10(o->f2A, 1);
        goto block_12;
    }
block_12:
    return 3;
}
extern s32 func_0025EE10(TimedEE10 *o);
s32 func_0025EEE0(TimedEE10 *o, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 v1 = a[1].i;
    s32 v0 = a[0].i;

    o->f2A = a[2].i;
    o->f2C = -Scr_GetSpeed();
    o->f30 = (f32)v0;
    o->f10 = (s32)func_0025EE10;
    func_0020F290(o->f2A, v1);
    func_0020F1D0(o->f2A, 0.0f);
    if (Scr_IsPaused() == 0) {
        if (o->f30 != -1.0f) {
            o->f2C = o->f2C + Scr_GetSpeed();
            if (o->f2C >= o->f30) {
                o->f10 = 0;
                return 1;
            }
        }
        func_0020EE10(o->f2A, 1);
    }
    return 3;
}

s32 func_0025F050(ScrCtx *ctx, ScrCmd *cmd) {
    if (func_0020EE10(ctx->f2A, 1)) {
        if (ctx->f2B > 0) {
            ctx->f2B--;
            if (ctx->f2B == 0) {
                ctx->f10 = 0;
                return 1;
            }
        }
    }
    return 3;
}
s32 Scr_CmdTimedSet0C0B(TimedF0C0 *o, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 x = a[1].i;
    s32 y = a[0].i;
    s32 z = a[2].i;

    o->f2A = z;
    o->f2B = y;
    o->f10 = (void *)func_0025F050;
    func_0020F290(o->f2A, x);
    func_0020F1D0(o->f2A, 0.0f);
    if (func_0020EE10(o->f2A, 1) != 0) {
        if (o->f2B > 0) {
            o->f2B = o->f2B - 1;
            if (o->f2B == 0) {
                o->f10 = NULL;
                return 1;
            }
        }
    }
    return 3;
}
typedef struct Obj4B0 {
    char pad0[0x10];
    void *f10;
    char pad14[0x16];
    s8 f2A;
    char pad2B;
    f32 f2C;
    f32 f30;
} Obj4B0;

s32 func_0025F160(Obj4B0 *o) {
    if (Scr_IsPaused() == 0) {
        if (o->f30 != -1.0f) {
            o->f2C = o->f2C + Scr_GetSpeed();
            if (o->f2C >= o->f30) {
                o->f10 = NULL;
                return 1;
            }
        }
        func_0020EF80(o->f2A, 1);
    }
    return 3;
}
extern void func_0020F300(s32, s32);
extern void func_0020F200(s32, f32);
s32 func_0025F230(Obj4B0 *o, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 v1 = a[1].i;
    s32 v0 = a[0].i;

    o->f2A = a[2].i;
    o->f2C = -Scr_GetSpeed();
    o->f30 = (f32)v0;
    o->f10 = (void *)func_0025F160;
    func_0020F300(o->f2A, v1);
    func_0020F200(o->f2A, 0.0f);
    if (Scr_IsPaused() == 0) {
        if (o->f30 != -1.0f) {
            o->f2C = o->f2C + Scr_GetSpeed();
            if (o->f2C >= o->f30) {
                o->f10 = NULL;
                return 1;
            }
        }
        func_0020EF80(o->f2A, 1);
    }
    return 3;
}

s32 func_0025F3A0(ScrCtx *ctx, ScrCmd *cmd) {
    if (func_0020EF80(ctx->f2A, 1)) {
        if (ctx->f2B > 0) {
            ctx->f2B--;
            if (ctx->f2B == 0) {
                ctx->f10 = 0;
                return 1;
            }
        }
    }
    return 3;
}
s32 Scr_CmdTimedSet0C0(TimedF0C0 *o, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 x = a[1].i;
    s32 y = a[0].i;
    s32 z = a[2].i;

    o->f2A = z;
    o->f2B = y;
    o->f10 = (void *)func_0025F3A0;
    func_0020F300(o->f2A, x);
    func_0020F200(o->f2A, 0.0f);
    if (func_0020EF80(o->f2A, 1) != 0) {
        if (o->f2B > 0) {
            o->f2B = o->f2B - 1;
            if (o->f2B == 0) {
                o->f10 = NULL;
                return 1;
            }
        }
    }
    return 3;
}
extern void func_0020EFB0(s32);

s32 func_0025F4B0(Obj4B0 *o) {
    if (Scr_IsPaused() == 0) {
        if (o->f30 != -1.0f) {
            o->f2C = o->f2C + Scr_GetSpeed();
            if (o->f2C >= o->f30) {
                o->f10 = NULL;
                return 1;
            }
        }
        func_0020EFB0(o->f2A);
    }
    return 3;
}
typedef struct Obj25F {
    char pad0[0x10];
    s32 f10;
    char pad14[0x16];
    s8 f2A;
    char pad2B;
    f32 f2C;
    f32 f30;
} Obj25F;

extern void func_0020EFB0(s32);

s32 func_0025F580(void *o, ScrCmd *cmd) {
    Obj25F *p = (Obj25F *)o;
    ScrArg *a = cmd->args;
    s32 n = a[0].i;
    s32 busy;
    f32 d;

    p->f2A = (s8)a[1].i;
    p->f2C = -((gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f));
    p->f30 = (f32)n;
    p->f10 = (s32)func_0025F4B0;
    busy = gBattle != NULL ? gBattle->f88EC : 0;
    if (busy == 0) {
        if (p->f30 != -1.0f) {
            d = (gBattle != NULL) ? gBattle->f88F0 : ((D_004703F4 != 3) ? 1.0f : 1.2f);
            p->f2C = p->f2C + d;
            if (!(p->f2C < p->f30)) {
                p->f10 = 0;
                return 1;
            }
        }
        func_0020EFB0(p->f2A);
    }
    return 3;
}
s32 Scr_CmdSetFlag916Mode(ScrCtx *ctx, ScrCmd *cmd) {
    if (cmd->args[0].i != 0) {
        D_0046FE4C->f91A = 1;
    } else {
        D_0046FE4C->f91A = 0;
    }
    return 1;
}
s32 Scr_CmdCall20F040(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F040(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F090(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F090(a[2].i, a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F0E0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F0E0(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F130(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F130(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F180(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F180(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F1D0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F1D0(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F200(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F200(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F230(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F230(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F260(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F260(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F290(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F290(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F300(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F300(a[1].i, a[0].i);
    return 1;
}

s32 Scr_CmdCall20F3B0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F3B0(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F3E0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F3E0(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F410(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F410(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F440(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F440(a[1].i, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F470(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F470(a[3].i, a[2].f, a[1].f, a[0].f);
    return 1;
}

s32 Scr_CmdCall20F4A0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F4A0(a[2].i, a[1].f, a[0].f);
    return 1;
}

s32 Scr_CmdObjCall245BE0(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245BE0(gBattle->f8934[cmd->args[0].i]);
    return 1;
}

s32 func_0025FA60(ScrCtx *ctx, ScrCmd *cmd) {
    if (func_00245C50(gBattle->f8934[ctx->f28])) {
        ctx->f10 = 0;
        return 1;
    }
    return 3;
}
s32 Scr_CmdObjWaitCheck(ScrCtx *ctx, ScrCmd *cmd) {
    ctx->f28 = cmd->args[0].i;
    ctx->f10 = func_0025FA60;
    if (func_00245C50(gBattle->f8934[ctx->f28])) {
        ctx->f10 = 0;
        return 1;
    }
    return 3;
}

s32 Scr_CmdObjCall245BF0(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245BF0(gBattle->f8934[cmd->args[0].i]);
    return 1;
}

s32 Scr_CmdObjCall245C00(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245C00(gBattle->f8934[cmd->args[0].i]);
    return 1;
}
s32 Scr_CmdObjGet245C50(ScrCtx *ctx, ScrCmd *cmd) {
    cmd->f0 = func_00245C50(gBattle->f8934[cmd->args[0].i]);
    return 1;
}

s32 Scr_CmdObjCall245CC0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00245CC0(gBattle->f8934[a[1].i], a[0].i);
    return 1;
}

s32 Scr_CmdObjCall245D30(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00245D30(gBattle->f8934[a[1].i], a[0].i);
    return 1;
}

s32 Scr_CmdObjBigCall2(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrBig s;
    void *obj = gBattle->f8934[a[2].i];
    s32 b = a[1].i;
    s32 c = a[0].i;
    s32 d = a[3].i;

    s.f90 = d;
    s.f6C = obj;
    s.f9C = b;
    s.fA8 = c;
    func_0020F4D0(&s);
    return 1;
}

s32 Scr_CmdObjBigCall(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrBig s;
    void *obj = gBattle->f8934[a[2].i];
    s32 b = a[1].i;
    s32 c = a[0].i;
    s32 d = a[3].i;

    s.f90 = d;
    s.f6C = obj;
    s.f9A = b;
    s.fA6 = c;
    func_0020F5A0(&s);
    return 1;
}
typedef struct ScrOb98 {
    char pad0[0x98];
    s32 f98;
    char pad9C[0x20E8 - 0x9C];
    s32 f20E8;
} ScrOb98;

/* differs: 31 of 108: the switch body matches (ascending case order, out-of-line bodies); the locals get the
   wrong saved registers (kind in $s1, a[1] in $s2; the original $s2 and $s1) for every declaration order, and the
   store p->f98 takes base $v0 (the original: base $s0 after a copy in the delay slot). Tried: r = p = ..., s16 kind. */
#if 0
s32 func_0025FD50(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrChara *c = (ScrChara *)gBattle->f8934[a[3].i];
    s32 s1 = a[1].i;
    s32 kind = a[2].i;
    s32 s0 = a[0].i;
    ScrOb98 *p;
    s32 r;
    s32 flags;

    func_0020F6D0(a[4].i);
    p = (ScrOb98 *)(r = func_0020B020(c->f1350, s1, s0));
    p->f98 = r;
    if (p->f98 != 0) {
        flags = c->f1350;
        switch ((s16)kind) {
        case 0x1:
            if (flags != 0) {
                flags = 0x4000020;
            } else {
                flags = 0x4000010;
            }
            break;
        case 0x2:
            if (flags != 0) {
                flags = 0x4000008;
            } else {
                flags = 0x4000004;
            }
            break;
        case 0x4:
            if (flags != 0) {
                flags = 0x400020;
            } else {
                flags = 0x400010;
            }
            break;
        case 0x8:
            flags = 0x400008;
            break;
        case 0x10:
            flags = 0x4000002;
            break;
        case 0x400:
            flags = 0x4000040;
            break;
        case 0x800:
            if (flags != 0) {
                flags = 0x4000100;
            } else {
                flags = 0x4000080;
            }
            break;
        default:
            flags = 0;
            break;
        }
        p->f20E8 = func_00209540(p->f98, flags, 0);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025FD50);
s32 Scr_CmdPlyPartSet(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 s1 = a[1].i;
    s32 s0 = a[0].i;
    PlyPart *p = (PlyPart *)gBattle->f8934[a[2].i];
    ScrEntry *r;

    r = func_0020F6D0(a[3].i);
    *(s32 *)((char *)r + 0x88) = func_0020B020(p->f1350, s1, s0);
    *(s32 *)((char *)r + 0x20E4) = func_0020AD30(p->f1350, s1, s0);
    return 1;
}

s32 Scr_CmdObjSetCall(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrChara *o = gBattle->f8934[a[2].i];
    s32 b = a[1].i;
    s32 c = a[0].i;
    ScrEntry *e = func_0020F6D0(a[3].i);

    e->f94 = func_0020AE80(o->f1350, b, c);
    return 1;
}

s32 Scr_CmdCall215990(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00215990(a[0].i);
    return 1;
}

s32 Scr_CmdCall20F700(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F700(a[0].i);
    return 1;
}

s32 Scr_CmdCall20F870(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F870(a[0].i);
    return 1;
}
/* differs: 2 of 44 (the load of a[5] and a[3] are swapped in the delay slot of the lookup call) */
s32 func_002600B0(ScrCtx *ctx, ScrCmd *cmd)
{
  ScrArg *a = cmd->args;
  s32 s1 = a[5].i;
  f32 f23 = a[3].f;
  s32 s0 = a[4].i;
  f32 f22 = a[2].f;
  f32 f21 = a[1].f;
  f32 f20 = a[0].f;
  ScrObj *o = func_0020A720(a[6].i);
  Slot16 *p;
  if (s0 & 1)
  {
    p = ((Slot16 *) (((char *) o) + 0x60)) + s1;
    p->f0 = f23;
    p->f4 = f22;
    p->f8 = f21;
    p->fC = f20;
  }
  if (s0 & 2)
  {
    p = ((Slot16 *) (((char *) o) + 0xA0)) + s1;
    p->f0 = f23;
    p->f4 = f22;
    p->f8 = f21;
    p->fC = f20;
  }
  return 1;
}


s32 Scr_CmdObjSetF8F18(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    f32 f = a[0].f;
    ScrObj *o = func_0020A720(a[1].i);

    o->f8 = f;
    o->f18 = f;
    return 1;
}
s32 Scr_CmdObjFloat4(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    f32 e;
    f32 b;
    f32 c;
    f32 d;
    ScrObj *o;

    e = a[3].f;
    b = a[2].f;
    c = a[1].f;
    d = a[0].f;
    o = func_0020A720(a[4].i);

    o->f0 = e;
    o->f4 = b;
    o->f10 = c;
    o->f14 = d;
    return 1;
}

s32 func_00260210(ScrCtx *ctx, ScrCmd *cmd) {
    if (ctx->f0->fC != 3 && func_0020A5F0(ctx->f28)) {
        ctx->f10 = 0;
        return 1;
    }
    func_0020A4D0(ctx->f28);
    return 3;
}
/* differs: the record call goes into the branch delay slot in the original (10 of 42) */
s32 func_00260270(u8 *arg0, u8 *arg1)
{
  u8 *new_var;
  f32 temp_f0;
  s32 temp_s1;
  s32 temp_s2;
  s32 new_var2;
  u8 *temp_v0;
  u8 *temp_v0_2;
  temp_v0 = *((u8 **) (((u8 *) arg1) + 0x2C));
  temp_s2 = *((s32 *) (((u8 *) temp_v0) + 4));
  new_var2 = *((s32 *) (((u8 *) temp_v0) + 0));
  temp_s1 = new_var2;
  temp_v0_2 = (unsigned char *) func_0020A720(temp_s2);
  *((s8 *) (((u8 *) arg0) + 0x28)) = (s8) temp_s2;
  temp_f0 = (f32) temp_s1;
  *((f32 *) (((u8 *) temp_v0_2) + 0xE0)) = temp_f0;
  new_var = (u8 *) arg0;
  *((f32 *) (((u8 *) temp_v0_2) + 0xE4)) = temp_f0;
  *((s32 **) (new_var + 0x10)) = (int *) (&func_00260210);
  if (((*((s32 *) (((u8 *) (*((u8 **) (new_var + 0)))) + 0xC))) != 3) && (func_0020A5F0(*((s8 *) (new_var + 0x28))) != 0))
  {
    *((s32 **) (new_var + 0x10)) = (void *) 0;
    return 1;
  }
  func_0020A4D0(*((s8 *) (new_var + 0x28)));
  return 3;
}


s32 func_00260320(ScrCtx *ctx, ScrCmd *cmd) {
    if (ctx->f0->fC != 3) {
        func_0020A780(ctx->f28);
        func_0020A740(ctx->f28);
    }
    return 0;
}

s32 Scr_CmdCtxWaitF14D(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    if (a[0].i != 0) {
        ctx->f28 = a[1].i;
        ctx->f14 = func_00260320;
    } else if (ctx->f14 == func_00260320) {
        func_0020A7F0(ctx->f28);
        ctx->f14 = NULL;
    }
    return 1;
}

s32 Scr_CmdCall20A7F0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020A7F0(a[0].i);
    return 1;
}
typedef struct Blk2604 {
    s32 f0;
    s32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    s32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    s32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    char pad40[0x10];
} __attribute__((aligned(16))) Blk2604;

extern void func_0020AA20(s32, Blk2604 *);

s32 func_00260410(void *o, ScrCmd *cmd) {
    ScrArg blk[17];
    ScrArg *a = cmd->args;
    s32 k = a[14].i;

    blk[4].f = a[13].f;
    blk[0].i = 1;
    blk[1].i = cmd->args[12].i;
    blk[2].f = cmd->args[11].f;
    blk[3].f = cmd->args[10].f;
    blk[5].f = cmd->args[9].f;
    blk[6].f = cmd->args[8].f;
    blk[8].f = cmd->args[7].f;
    blk[9].f = cmd->args[6].f;
    blk[10].f = cmd->args[5].f;
    blk[11].f = 1.0f;
    blk[12].f = cmd->args[4].f;
    blk[13].f = cmd->args[3].f;
    blk[14].f = cmd->args[2].f;
    blk[15].f = cmd->args[1].f;
    blk[16].f = cmd->args[0].f;
    blk[7].i = 0;
    func_0020AA20(k, (Blk2604 *)blk);
    return 1;
}

s32 func_002604F0(void *o, ScrCmd *cmd) {
    Blk2604 b;
    s32 arg;

    arg = *(s32 *)((char *)cmd->args + 0x34);
    b.f10 = *(f32 *)((char *)cmd->args + 0x30);
    b.f0 = 0;
    b.f4 = *(s32 *)((char *)cmd->args + 0x2C);
    b.f8 = *(f32 *)((char *)cmd->args + 0x28);
    b.fC = *(f32 *)((char *)cmd->args + 0x24);
    b.f14 = *(f32 *)((char *)cmd->args + 0x20);
    b.f18 = *(f32 *)((char *)cmd->args + 0x1C);
    b.f20 = *(f32 *)((char *)cmd->args + 0x18);
    b.f24 = *(f32 *)((char *)cmd->args + 0x14);
    b.f28 = *(f32 *)((char *)cmd->args + 0x10);
    b.f2C = 0x3F800000;
    b.f30 = *(f32 *)((char *)cmd->args + 0xC);
    b.f34 = *(f32 *)((char *)cmd->args + 0x8);
    b.f38 = *(f32 *)((char *)cmd->args + 0x4);
    b.f3C = *(f32 *)((char *)cmd->args + 0x0);
    b.f1C = 0;
    func_0020AA20(arg, &b);
    return 1;
}
extern void func_001414D0(void *, f32, f32, f32);
extern void func_00209850(s32, void *);
extern void func_00209950(s32, void *, s32);

s32 func_002605C0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;
    s32 h = D_0058EE50[a[3].i];

    if (D_0047079C != 0) {
        return 1;
    }
    if (h != 0) {
        func_001414D0(&v, 3.14159265f * (2.0f * x) / 360.0f, 3.14159265f * (2.0f * y) / 360.0f, 3.14159265f * (2.0f * z) / 360.0f);
        func_00209850(h, &v);
    }
    return 1;
}

s32 func_00260690(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;
    s32 h = D_0058EE50[a[3].i];

    if (D_0047079C != 0) {
        return 1;
    }
    if (h != 0) {
        func_001414D0(&v, 3.14159265f * (2.0f * x) / 360.0f, 3.14159265f * (2.0f * y) / 360.0f, 3.14159265f * (2.0f * z) / 360.0f);
        func_00209950(h, &v, 0);
    }
    return 1;
}

s32 Scr_CmdObjSetPos(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;
    s32 h = D_0058EE50[a[3].i];

    if (D_0047079C != 0) {
        return 1;
    }
    if (h != 0) {
        v.x = x;
        v.w = 1.0f;
        v.y = y;
        v.z = z;
        func_00209A90(h, &v);
    }
    return 1;
}

s32 func_002607F0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrVec v;
    f32 x = a[2].f;
    f32 y = a[1].f;
    f32 z = a[0].f;
    s32 h = D_0058EE50[a[3].i];

    if (D_0047079C != 0) {
        return 1;
    }
    if (h != 0) {
        v.x = x;
        v.y = y;
        v.z = z;
        v.w = 1.0f;
        func_00209B50(h, &v, 0);
    }
    return 1;
}
extern s32 D_00470238;
extern void func_00209D20(s32);
extern void amModel_SetCurrent();
extern void func_00208D60(s32);
extern void func_00208D70(s32);
extern void func_00209C50(void);

s32 func_00260870(void *o, ScrCmd *cmd) {
    s32 idx = cmd->args[0].i;
    s32 s1 = D_0058EE50[idx];

    if (D_0047079C != 0) {
        return 1;
    }
    if (s1 != 0) {
        func_00209D20(0);
        D_00470238 = 0;
        if (D_0058EE90[idx] != 0) {
            amModel_SetCurrent(D_0058EE90[idx], D_0058EF10[idx]);
        }
        if (D_0058EED0[idx] != 0) {
            func_00208D60(D_0058EED0[idx]);
        }
        func_00208D70(s1);
        func_00209C50();
    }
    return 1;
}

s32 Scr_CmdSoundStop(ScrCtx *ctx, ScrCmd *cmd) {
    ScrSound *h;
    s32 *p;

    p = &D_0058EE50[cmd->args[0].i];
    h = (ScrSound *)*p;

    if (D_0047079C != 0) {
        return 1;
    }
    if (h != NULL) {
        func_00208F70(h);
        if (h->f38 < 0) {
            Obj_ResetF38((s32)h);
            *p = 0;
        }
    }
    return 1;
}

s32 Scr_CmdSoundSlotRelease(ScrCtx *ctx, ScrCmd *cmd) {
    s32 *p = &D_0058EE50[cmd->args[0].i];

    if (*p != 0) {
        Obj_ResetF38(*p);
        *p = 0;
    }
    return 1;
}

s32 Scr_CmdSoundCreate(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 b = a[1].i;
    s32 c = a[0].i;
    s32 *p = &D_0058EE50[a[2].i];

    if (*p != 0) {
        Obj_ResetF38(*p);
        *p = 0;
    }
    *p = func_002096D0(c, 0x10001, b);
    return 1;
}
s32 func_00260AC0(ScrCtx *ctx, ScrCmd *cmd) {
    D_0047079C = cmd->args[0].i;
    return 1;
}

s32 func_00260AE0(ScrCtx *ctx, ScrCmd *cmd) {
    func_00209450(0x10001, 1);
    return 1;
}
s32 Scr_CmdSoundReset(ScrCtx *ctx, ScrCmd *cmd) {
    D_0047079C = 0;
    memset(D_0058EE50, 0, 0x40);
    memset(D_0058EE90, 0, 0x40);
    memset(D_0058EED0, 0, 0x40);
    memset(D_0058EF10, 0, 0x40);
    return 1;
}

void SoundSlot_SetParams(s32 a, s32 b, s32 c, s32 i) {
    if (a != 0) {
        D_0058EE90[i] = a;
    }
    if (b != 0) {
        D_0058EED0[i] = b;
    }
    if (c != 0) {
        D_0058EF10[i] = c;
    }
}

void SoundSlot_Create(s32 a, s32 i, s32 b) {
    s32 *p = &D_0058EE50[i];

    if (*p != 0) {
        Obj_ResetF38(*p);
        *p = 0;
    }
    *p = func_00209540(a, 0x10001, b);
}
void SoundSlot_ClearAll(void) {
    D_0047079C = 0;
    memset(D_0058EE50, 0, 0x40);
    memset(D_0058EE90, 0, 0x40);
    memset(D_0058EED0, 0, 0x40);
    memset(D_0058EF10, 0, 0x40);
}
