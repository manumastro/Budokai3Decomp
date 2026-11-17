#include "common.h"

typedef union ScrArg {
    s32 i;
    f32 f;
} ScrArg;

typedef struct ScrCmd {
    char pad0[0x2C];
    ScrArg *args;
} ScrCmd;

typedef struct ScrObj {
    char pad0[0x34];
    s32 f34;
    char pad38[4];
    f32 f3C;
    f32 f40;
    f32 f44;
    char pad48[4];
    u16 f4C[2];
    f32 f50;
    f32 f54;
    f32 f58;
    f32 f5C;
    char pad60[4];
    s16 f64;
} ScrObj;

typedef struct Sys70 {
    char pad0[0x70];
    s32 f70;
    char pad74[0x1C];
    s32 f90;
    s32 f94;
} Sys70;

typedef struct SysDF0 {
    char pad0[0xDF0];
    s16 fDF0;
} SysDF0;

extern ScrObj *D_0058D4D0[];
extern ScrObj *D_0058D4E8[];
extern ScrObj *D_0058D4EC[];
extern ScrObj *D_0058D4F0[];
extern ScrObj *D_0058D4F4[];
extern Sys70 *D_0046FDCC;
extern SysDF0 *D_0046FDFC;
extern void *D_00470000;

extern void memset(void *, s32, s32);
extern void func_0021C540(f32, f32, f32);
extern void func_0021C560(s32, f32, f32, f32);
extern void func_0021C5B0(s32);
extern void func_0021C5D0(s32);
extern s32 func_0021C360(void);
extern void func_00215500(s32);
void func_0025A3A0(s32, f32, f32);

typedef struct BtlPlayer {
    char pad0[0x1350];
    s32 f1350;
} BtlPlayer;

typedef struct BtlWork {
    char pad0[0x8934];
    BtlPlayer *players[2];
} BtlWork;

extern BtlWork *D_00470570;

typedef struct EffSrc {
    s32 f0;
    char pad4[4];
    BtlPlayer *f8;
    char padC[0x14];
    f32 f20;
} EffSrc;

typedef struct Eff {
    char pad0[8];
    void *f8;
    void *fC;
    char pad10[8];
    f32 f18;
    char pad1C[4];
    char f20[0x58];
} Eff;

typedef struct SubWork {
    s32 f0;
    void *f4;
} SubWork;

typedef struct ScrTask {
    char pad0[0x30];
    SubWork w;
} ScrTask;

typedef struct ResTbl {
    char pad0[0x14];
    void **f14;
} ResTbl;

typedef struct SysE60 {
    char pad0[0xE60];
    void *fE60;
    char padE64[4];
    ResTbl *fE68;
} SysE60;

extern char D_0046AF20[];
extern void *D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void func_00145CC0(void *, s32);
extern ScrTask *func_00144FC0(void *, void *, s32, s32, s32, char *);
extern void *func_0022D860(void *, f32);
extern void func_00125740(void *, void *, s32);
extern void func_0020D9F0(s32);
extern Eff *func_00215320(s16, s32);
extern void func_00211650(void);
extern void func_00210240(void);
extern void func_00212560(void);
extern void func_00259BB0(void);
extern void func_00259B70(void);
extern void func_00226030(s32, s32 *);
void func_0025AA20(s32);
void func_0025A7C0(s32, s32);
void func_0025A580(s32, s32);
void func_0025A130(s32, s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025A130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025A3A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025A580);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025A7C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025AA20);
s32 func_0025ABC0(void *ctx, ScrCmd *cmd) {
    s32 buf[2] __attribute__((aligned(16)));

    buf[0] = D_00470570->players[0]->f1350;
    buf[1] = cmd->args[0].i;
    if (buf[1] > 0) {
        func_00226030(0x31, buf);
    }
    return 1;
}
s32 func_0025AC20(void) {
    return 1;
}
s32 func_0025AC30(void) {
    return 1;
}
s32 func_0025AC40(void) {
    return 1;
}
s32 func_0025AC50(void) {
    return 1;
}
s32 func_0025AC60(void *ctx, ScrCmd *cmd) {
    if (cmd->args[0].i == 0) {
        func_0021C5B0(3);
    } else {
        func_0021C5D0(3);
    }
    return 1;
}
s32 func_0025ACA0(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0021C540(a[2].f, a[1].f, a[0].f);
    return 1;
}
s32 func_0025ACD0(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0021C560(a[3].i, a[2].i, a[1].i, a[0].i);
    return 1;
}
s32 func_0025AD10(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrObj *o = D_0058D4EC[0];
    s32 v = a[0].i;
    s32 idx = a[1].i;

    if (o != NULL && o->f4C[idx] == 0) {
        o->f4C[idx] = v;
    }
    return 1;
}
s32 func_0025AD50(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 x = a[0].i;
    s32 y = a[1].i;
    ScrObj *o;

    func_0025A7C0(D_00470570->players[0]->f1350, D_00470570->players[1]->f1350);
    o = D_0058D4EC[0];
    if (o != NULL) {
        o->f40 = x;
        o->f3C = y;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025ADE0);
/* Same code, but the argument pointer and the object swap $v1 / $a0. */
#if 0
s32 func_0025AE10(void *ctx, ScrCmd *cmd) {
    ScrObj *o;
    ScrArg *a;
    s32 buf[5];
    s32 *s;

    o = D_0058D4E8[0];
    a = cmd->args;

    buf[0] = a[4].i;
    buf[1] = a[3].i;
    buf[2] = a[2].i;
    buf[3] = a[1].i;
    buf[4] = a[0].i;
    if (o != NULL) {
        s = (s32 *)((char *)o + 0x30);
        func_00125740(&s[5], buf, sizeof(buf));
        s[5] &= 0xF;
        s[6] &= 0xF;
        s[7] &= 0xF;
        s[8] &= 0xF;
        s[9] &= 0xF;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025AE10);
s32 func_0025AEC0(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 x;
    s32 y;
    ScrObj *o;

    x = a[0].i;
    y = a[1].i;
    func_0025AA20(D_00470570->players[0]->f1350);
    o = D_0058D4E8[0];
    if (o != NULL) {
        o->f3C = y;
        o->f40 = x;
    }
    return 1;
}
s32 func_0025AF40(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;

    func_0025A3A0(a[2].i, a[1].f, a[0].f);
    return 1;
}
/* The loads match but the argument pointer and the object land in $v1 / $v0 instead of $v0 / $v1. */
#if 0
s32 func_0025AF70(void *ctx, ScrCmd *cmd) {
    ScrObj *o;
    ScrArg *a;
    f32 w;
    f32 y;
    f32 z;
    f32 x;

    a = cmd->args;
    o = D_0058D4F0[0];
    w = a[0].f;
    y = a[1].f;
    z = a[2].f;
    x = a[3].f;

    if (o != NULL) {
        o->f50 = x;
        o->f54 = y;
        o->f58 = z;
        o->f5C = w;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025AF70);
s32 func_0025AFB0(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    s32 x = a[0].i;
    s32 y = a[1].i;
    ScrObj *o;

    func_0025A580(D_00470570->players[0]->f1350, D_00470570->players[1]->f1350);
    o = D_0058D4F0[0];
    if (o != NULL) {
        o->f40 = y;
        o->f44 = x;
    }
    return 1;
}
s32 func_0025B040(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrObj *o = D_0058D4F4[0];
    s32 v = a[0].i;
    s32 idx = a[1].i;

    if (o != NULL && o->f4C[idx] == 0) {
        o->f4C[idx] = v;
    }
    return 1;
}
s32 func_0025B080(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrObj *o = D_0058D4F4[0];
    s32 v = a[0].i;

    if (o != NULL) {
        o->f3C = v;
    }
    return 1;
}
s32 func_0025B0B0(void *ctx, ScrCmd *cmd) {
    ScrArg *a = cmd->args;
    ScrObj *o = D_0058D4F4[0];
    s32 v0 = a[0].i;
    s32 v1 = a[1].i;

    if (o != NULL) {
        o->f40 = v1;
        o->f44 = v0;
        o->f34 = 4;
    }
    return 1;
}
s32 func_0025B100(void) {
    ScrObj *o = D_0058D4F4[0];

    if (o != NULL) {
        o->f64 = 1;
    }
    return 1;
}
s32 func_0025B120(void *ctx, ScrCmd *cmd) {
    s32 v;
    ScrObj *o;

    o = D_0058D4F4[0];
    v = cmd->args[0].i;
    func_0025A130(D_00470570->players[0]->f1350, D_00470570->players[1]->f1350);
    if (o != NULL) {
        o->f40 = v;
    }
    if (D_0058D4F4[0] != NULL) {
        D_0058D4F4[0]->f3C = 100.0f;
    }
    return 1;
}
s32 func_0025B1B0(void *ctx, s32 *out) {
    *out = D_0046FDFC->fDF0;
    return 1;
}
s32 func_0025B1D0(void *ctx, ScrCmd *cmd) {
    SysE60 *sys = (SysE60 *)D_0046FDFC;
    ScrTask *t;
    s32 idx = cmd->args[0].i;
    SubWork *w;
    void *v;
    s32 n;

    t = func_00144FC0(func_00259BB0, func_00259B70, 0x3A30, 0x1000, 0x2000000, D_0046AF20);
    if (t == NULL) {
        return 1;
    }
    D_00470704 = v = sys->fE60;
    D_0047070C = n = 0x4000000;
    D_00470708 = 0;
    func_00145CC0(v, n);
    D_00470238 = 0;
    w = &t->w;
    w->f0 = 0;
    w->f4 = func_0022D860(sys->fE68->f14[idx + 0x82], 0.0f);
    return 1;
}
f32 func_0025B290(void) {
    f32 r = 0.0f;
    ScrObj *o = D_0058D4D0[func_0021C360()];

    if (o != NULL) {
        r = o->f3C;
    }
    return r;
}
s32 func_0025B2E0(f32 v) {
    ScrObj *o = D_0058D4D0[func_0021C360()];

    if (o != NULL) {
        o->f3C = v;
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B340);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B4D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B6D0);
void func_0025B790(EffSrc *e) {
    s32 owner = e->f8->f1350;
    Eff *f;

    func_0020D9F0(e->f0);
    f = func_00215320(owner, 0x80);
    if (f == NULL) {
        return;
    }
    f->f8 = func_00211650;
    f->fC = NULL;
    f->f18 = e->f20;
    f = func_00215320(owner, 0x100);
    if (f == NULL) {
        return;
    }
    f->f8 = func_00210240;
    f->fC = func_00212560;
    f->f18 = e->f20;
    func_00125740(f->f20, e, 0x58);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B8F0);
void func_0025BA50(void) {
    D_0046FDCC->f70 = 0;
}
void func_0025BA60(void) {
    if (D_0046FDCC->f94 != 0) {
        func_00215500(0x100);
    }
}
void func_0025BA90(void) {
    if (D_0046FDCC->f90 != 0) {
        func_00215500(0x80);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025BAC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025BD40);
void func_0025BE20(void) {
    memset(D_00470000, 0, 0x10);
}
void func_0025BE30(void) {
    memset(D_00470000, 0, 0x10);
}
