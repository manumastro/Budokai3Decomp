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

extern void func_001258F8(void *, s32, s32);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B1D0);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_25A130", func_0025B790);
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
    func_001258F8(D_00470000, 0, 0x10);
}
void func_0025BE30(void) {
    func_001258F8(D_00470000, 0, 0x10);
}
