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
extern void func_001258F8(void *, s32, s32);
extern s32 D_0047079C;

typedef struct ScrProg {
    char pad0[0xC];
    s32 fC;
} ScrProg;

typedef struct ScrCtx {
    ScrProg *f0;
    char pad4[0xC];
    s32 f10;
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
    char pad0[0x8934];
    void *f8934[1];
} ScrWork;

extern ScrWork *D_00470570;
extern void func_0020F040(s32, s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025D740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025D810);
extern void func_0020DDD0(s32, ScrEffect *);

s32 func_0025D8D0(ScrCtx *ctx, ScrCmd *cmd) {
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
extern void func_0020DE30(void);

s32 func_0025D940(ScrCtx *ctx, ScrCmd *cmd) {
    if (D_0046FE4C->f916 != 0) {
        func_0020DE30();
        D_0046FE4C->f916 = 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025D980);
extern char D_0046B080[];
extern ScrTask *func_00144FC0(void *, s32, s32, s32, s32, char *);
void func_0025D980(ScrTask *);

s32 func_0025DA10(ScrCtx *ctx, ScrCmd *cmd) {
    s32 v = cmd->args[0].i;

    if (D_0046FE4C->f916 == 0) {
        func_00144FC0(func_0025D980, 0, 0x3900, 0x400, 0x800002, D_0046B080)->f30 = v;
    }
    return 1;
}
extern void func_0020E070(s32, ScrVec *);

s32 func_0025DA80(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.z;
    return 1;
}
s32 func_0025DAC0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.y;
    return 1;
}
s32 func_0025DB00(ScrCtx *ctx, ScrCmd *cmd) {
    ScrVec v;

    func_0020E070(cmd->args[0].i, &v);
    cmd->f40 = v.x;
    return 1;
}
extern void func_0020E120(s32, s32);

s32 func_0025DB40(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E120(a[1].i, a[0].i);
    return 1;
}
extern void func_0020E210(s32, s32);

/* The original loads a[1] before a[0] here (the other bindings load a[0] first); 2 of 10 differ. */
#if 0
s32 func_0025DB70(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 id = a[1].i;

    func_0020E210(id, a[0].i);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025DB70);
extern void func_0020E290(s32, ScrVec *, s32);

s32 func_0025DBA0(ScrCtx *ctx, ScrCmd *cmd) {
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
extern void func_0020E530(s32, ScrVec *, s32);

s32 func_0025DC00(ScrCtx *ctx, ScrCmd *cmd) {
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
extern void func_0020E620(s32, ScrVec *, s32);

s32 func_0025DC50(ScrCtx *ctx, ScrCmd *cmd) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025DCA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025DDD0);
extern void func_0020E7D0(s32, void *, s32);

s32 func_0025DED0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E7D0(a[2].i, D_00470570->f8934[a[1].i], a[0].i);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025DF20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E050);
extern void func_0020E8F0(s32, void *, s32);

s32 func_0025E150(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020E8F0(a[2].i, D_00470570->f8934[a[1].i], a[0].i);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E1A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E270);
extern void func_0020EB70(s32, ScrVec *);

s32 func_0025E350(ScrCtx *ctx, ScrCmd *cmd) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E3A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E470);
extern void func_0020EBF0(s32);

s32 func_0025E530(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EBF0(ctx->f28);
    return 0;
}
s32 func_0025E550(ScrCtx *ctx, ScrCmd *cmd) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E5A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E6A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E760);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E830);
extern void func_0020EC70(s32);

s32 func_0025E8F0(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EC70(ctx->f28);
    return 0;
}
s32 func_0025E910(ScrCtx *ctx, ScrCmd *cmd) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025E960);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025EA30);
extern void func_0020EDA0(s32);

s32 func_0025EAF0(ScrCtx *ctx, ScrCmd *cmd) {
    func_0020EDA0(ctx->f28);
    return 0;
}
s32 func_0025EB10(ScrCtx *ctx, ScrCmd *cmd) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025EB60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025EC60);
extern void func_00245A80(void *, s32);

s32 func_0025ED50(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245A80(D_00470570->f8934[0], cmd->args[0].i);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025ED90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025EE10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025EEE0);
extern s32 func_0020EE10(s32, s32);

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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F0C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F160);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F230);
extern s32 func_0020EF80(s32, s32);

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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F4B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025F580);
s32 func_0025F6C0(ScrCtx *ctx, ScrCmd *cmd) {
    if (cmd->args[0].i != 0) {
        D_0046FE4C->f91A = 1;
    } else {
        D_0046FE4C->f91A = 0;
    }
    return 1;
}
s32 func_0025F6F0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F040(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F090(s32, s32, s32);

s32 func_0025F720(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F090(a[2].i, a[1].i, a[0].i);
    return 1;
}
extern void func_0020F0E0(s32, s32);

s32 func_0025F750(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F0E0(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F130(s32, s32);

s32 func_0025F780(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F130(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F180(s32, s32);

s32 func_0025F7B0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F180(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F1D0(s32, f32);

s32 func_0025F7E0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F1D0(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F200(s32, f32);

s32 func_0025F810(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F200(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F230(s32, f32);

s32 func_0025F840(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F230(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F260(s32, f32);

s32 func_0025F870(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F260(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F290(s32, s32);

s32 func_0025F8A0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F290(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F300(s32, s32);

s32 func_0025F8D0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F300(a[1].i, a[0].i);
    return 1;
}
extern void func_0020F3B0(s32, f32);

s32 func_0025F900(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F3B0(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F3E0(s32, f32);

s32 func_0025F930(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F3E0(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F410(s32, f32);

s32 func_0025F960(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F410(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F440(s32, f32);

s32 func_0025F990(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F440(a[1].i, a[0].f);
    return 1;
}
extern void func_0020F470(s32, f32, f32, f32);

s32 func_0025F9C0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F470(a[3].i, a[2].f, a[1].f, a[0].f);
    return 1;
}
extern void func_0020F4A0(s32, f32, f32);

s32 func_0025F9F0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F4A0(a[2].i, a[1].f, a[0].f);
    return 1;
}
extern void func_00245BE0(void *);

s32 func_0025FA20(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245BE0(D_00470570->f8934[cmd->args[0].i]);
    return 1;
}
extern s32 func_00245C50(void *);

s32 func_0025FA60(ScrCtx *ctx, ScrCmd *cmd) {
    if (func_00245C50(D_00470570->f8934[ctx->f28])) {
        ctx->f10 = 0;
        return 1;
    }
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025FAC0);
extern void func_00245BF0(void *);

s32 func_0025FB40(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245BF0(D_00470570->f8934[cmd->args[0].i]);
    return 1;
}
extern void func_00245C00(void *);

s32 func_0025FB80(ScrCtx *ctx, ScrCmd *cmd) {
    func_00245C00(D_00470570->f8934[cmd->args[0].i]);
    return 1;
}
s32 func_0025FBC0(ScrCtx *ctx, ScrCmd *cmd) {
    cmd->f0 = func_00245C50(D_00470570->f8934[cmd->args[0].i]);
    return 1;
}
extern void func_00245CC0(void *, s32);

s32 func_0025FC10(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00245CC0(D_00470570->f8934[a[1].i], a[0].i);
    return 1;
}
extern void func_00245D30(void *, s32);

s32 func_0025FC50(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00245D30(D_00470570->f8934[a[1].i], a[0].i);
    return 1;
}
extern void func_0020F4D0(ScrBig *);

s32 func_0025FC90(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrBig s;
    void *obj = D_00470570->f8934[a[2].i];
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
extern void func_0020F5A0(ScrBig *);

s32 func_0025FCF0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrBig s;
    void *obj = D_00470570->f8934[a[2].i];
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025FD50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025FF00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_0025FFA0);
extern void func_00215990(s32);

s32 func_00260020(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_00215990(a[0].i);
    return 1;
}
extern void func_0020F700(s32);

s32 func_00260050(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F700(a[0].i);
    return 1;
}
extern void func_0020F870(s32);

s32 func_00260080(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020F870(a[0].i);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_002600B0);
extern ScrObj *func_0020A720(s32);

s32 func_00260160(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    f32 f = a[0].f;
    ScrObj *o = func_0020A720(a[1].i);

    o->f8 = f;
    o->f18 = f;
    return 1;
}
s32 func_002601A0(ScrCtx *ctx, ScrCmd *cmd) {
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
extern s32 func_0020A5F0(s32);
extern void func_0020A4D0(s32);

s32 func_00260210(ScrCtx *ctx, ScrCmd *cmd) {
    if (ctx->f0->fC != 3 && func_0020A5F0(ctx->f28)) {
        ctx->f10 = 0;
        return 1;
    }
    func_0020A4D0(ctx->f28);
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260270);
extern void func_0020A780(s32);
extern void func_0020A740(s32);

s32 func_00260320(ScrCtx *ctx, ScrCmd *cmd) {
    if (ctx->f0->fC != 3) {
        func_0020A780(ctx->f28);
        func_0020A740(ctx->f28);
    }
    return 0;
}
extern void func_0020A7F0(s32);

s32 func_00260370(ScrCtx *ctx, ScrCmd *cmd) {
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
extern void func_0020A7F0(s32);

s32 func_002603E0(ScrCtx *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0020A7F0(a[0].i);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_002604F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_002605C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260770);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_002607F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260940);
extern void func_00209530(s32);

s32 func_002609D0(ScrCtx *ctx, ScrCmd *cmd) {
    s32 *p = &D_0058EE50[cmd->args[0].i];

    if (*p != 0) {
        func_00209530(*p);
        *p = 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260A30);
s32 func_00260AC0(ScrCtx *ctx, ScrCmd *cmd) {
    D_0047079C = cmd->args[0].i;
    return 1;
}
extern void func_00209450(s32, s32);

s32 func_00260AE0(ScrCtx *ctx, ScrCmd *cmd) {
    func_00209450(0x10001, 1);
    return 1;
}
s32 func_00260B10(ScrCtx *ctx, ScrCmd *cmd) {
    D_0047079C = 0;
    func_001258F8(D_0058EE50, 0, 0x40);
    func_001258F8(D_0058EE90, 0, 0x40);
    func_001258F8(D_0058EED0, 0, 0x40);
    func_001258F8(D_0058EF10, 0, 0x40);
    return 1;
}

void func_00260B80(s32 a, s32 b, s32 c, s32 i) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25D740", func_00260BD0);
void func_00260C40(void) {
    D_0047079C = 0;
    func_001258F8(D_0058EE50, 0, 0x40);
    func_001258F8(D_0058EE90, 0, 0x40);
    func_001258F8(D_0058EED0, 0, 0x40);
    func_001258F8(D_0058EF10, 0, 0x40);
}
