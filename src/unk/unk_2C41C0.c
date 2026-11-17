#include "common.h"

/* A fighter's input history: a ring of 32 commands. */
typedef struct CmdHistEnt {
    s32 f0;
    s32 f4;
    s16 *f8;
    s32 fC;
} CmdHistEnt;

typedef struct CmdHist {
    char pad0[0x1FC];
    CmdHistEnt ent[32];
    s32 wr;
    s32 rd;
} CmdHist;

/* A fighter, as far as this file reads it. */
typedef struct TutChr {
    char pad0[0xBA4];
    s32 fBA4;
    char padBA8[0xCAC - 0xBA8];
    s16 fCAC;
    s16 fCAE;
    char padCB0[2];
    u8 fCB2;
    char padCB3[0xCB8 - 0xCB3];
    f32 fCB8;
    char padCBC[0x1350 - 0xCBC];
    s32 f1350;
    struct TutChr *f1354;
    char pad1358[8];
    CmdHist f1360;
} TutChr;

/* The training (tutorial) work: one lesson's state. */
typedef struct TutWork {
    TutChr *chr;
    char pad4[0x1C];
    s32 f20;
    s32 f24;
    char pad28[8];
    s8 f30;
    char pad31;
    s16 f32;
    char pad34[2];
    s8 f36;
    s8 f37;
    s8 f38;
    s8 f39;
    s8 f3A;
    s8 f3B;
    s8 f3C;
} TutWork;

/* A command event of the training: f2 entries in fC. */
typedef struct TutEvent {
    char pad0[2];
    s16 f2;
    char pad4[2];
    s8 f6;
    u8 f7;
    char pad8[4];
    s16 **fC;
} TutEvent;

typedef struct EffWork {
    char pad0[0x4D84];
    s16 f4D84;
    s16 f4D86;
    char pad4D88[8];
} EffWork;

typedef struct TutCmd {
    s16 v[12];
} TutCmd;

typedef struct TutCmd4 {
    s16 v[4];
} TutCmd4;

extern TutWork *D_0047091C;
extern char *D_00470570;

INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C41C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C4C90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C5EB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C5FC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C60B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C61A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C63C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6700);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6B60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6D40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6EF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7010);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C72E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7C50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7CE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8670);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C88A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8930);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8A80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8D30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C99E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9AF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9BC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9C40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9EF0);
extern EffWork *D_00470130;

void func_002CA230(s32 x) {
    EffWork *w = D_00470130;

    if (w->f4D84 > 0) {
        if (x == 0) {
            w->f4D86 |= 0x800;
        } else if (x == 1) {
            w->f4D86 |= 0x400;
        } else {
            w->f4D86 |= 0x8000;
        }
    }
}

void func_002CA290(s32 x) {
    EffWork *w = D_00470130;

    if (w->f4D84 > 0) {
        if (x == 0) {
            w->f4D86 |= 0x2000;
        } else if (x == 1) {
            w->f4D86 |= 0x1000;
        } else {
            w->f4D86 |= 0x8000;
        }
    }
}

typedef struct EffEnt {
    char pad0[0x30];
    f32 f30;
    char pad34[0x7C];
} EffEnt;

typedef struct EffFile {
    char pad0[8];
    s32 f8;
    s32 fC;
} EffFile;

typedef struct EffReq {
    char pad0[0x10];
    TutChr *f10;
    char pad14[0x14];
    s16 f28;
    s16 f2A;
    s16 f2C;
} EffReq;

extern EffFile *D_005BD154[];
extern char D_0046EF90[];
extern EffFile *func_0020B020(s32, s32, s32);
extern s32 func_00127E88(void *, char *, s32);
extern void func_002C5EB0(EffEnt *, EffReq *);
extern void func_002C9EF0(EffEnt *, EffReq *);

/* Differs only at the call to func_002C9EF0: the original does not set a0 there (func_002C5EB0 leaves a0
   alone; maybe the compiler knew that from the same file). */
#if 0
void func_002CA2F0(EffReq *r) {
    EffFile *f;
    EffEnt *e;
    s32 n = 0;
    s32 i;

    if (r->f2C & 0x2000) {
        f = D_005BD154[r->f2A];
    } else {
        f = func_0020B020(r->f10->f1350, r->f28, r->f2A);
    }
    if (func_00127E88(f, D_0046EF90, 4) == 0) {
        e = (EffEnt *)((char *)f + f->fC);
        n = f->f8;
    }
    for (i = 0; i < n; i++) {
        e = &e[i];
        func_002C5EB0(e, r);
        if (e->f30 > 0.0f) {
            func_002C9EF0(e, r);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002CA2F0);

extern void func_001258F8(void *, s32, s32);
extern s32 D_005BD270[];
extern s32 D_005BD26C[];
extern s32 D_005BD268[];
extern s32 D_005BD264[];
extern s32 D_005BD260[];

void func_002CA3F0(void) {
    func_001258F8(D_00470130, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

void func_002CA440(void) {
    func_001258F8(D_00470130, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

void func_002CA490(void) {
}

void func_002CA4A0(void) {
    func_001258F8(D_00470130, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

s32 func_002CA4F0(TutEvent *e) {
    TutWork *t = D_0047091C;
    TutChr *o;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 3) {
        return r;
    }
    {
        if (t->chr->f1350 == e->f6) {
            o = t->chr->f1354;
            if (o->fCAC != 0x31 || o->fCB8 > 20.0f) {
                if (e->f7 <= 0) {
                    for (i = 0; i < e->f2; i++) {
                        p = e->fC[i];
                        if (p[0] == 1 && p[1] == 3) {
                            r = i;
                            t->f20++;
                            break;
                        }
                    }
                }
            }
        }
    }
    return r;
}

s32 func_002CA5D0(TutChr *c) {
    TutWork *t = D_0047091C;
    s32 r = 0;

    switch (t->f20) {
    case 0:
        if (t->chr->f1354 == c) {
            t->f20++;
            r = 0x31;
        }
        break;
    case 1:
        if (t->chr == c) {
            t->f20++;
            r = 5;
        }
        break;
    case 2:
        if (t->chr == c && c->fCAE == 5) {
            t->f20++;
        }
        break;
    case 4:
        if (t->chr == c) {
            r = 0x31;
            t->f20++;
        }
        break;
    }
    return r;
}

s32 func_002CA690(TutEvent *e) {
    TutWork *t = D_0047091C;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 2) {
        return r;
    }
    if (t->chr->f1350 == e->f6) {
        if (e->f7 <= 0) {
            for (i = 0; i < e->f2; i++) {
                p = e->fC[i];
                if (p[0] == 0 && p[1] == 3) {
                    r = i;
                    t->f20++;
                    break;
                }
            }
        }
    }
    return r;
}

s32 func_002CA730(TutEvent *e) {
    TutWork *t = D_0047091C;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 2) {
        return r;
    }
    {
        if (t->chr->f1350 == e->f6) {
            if (e->f7 <= 0) {
                for (i = 0; i < e->f2; i++) {
                    p = e->fC[i];
                    if (p[0] == 2 && p[1] == 3) {
                        r = i;
                        t->f20++;
                        break;
                    }
                }
            }
        }
    }
    return r;
}

s32 func_002CA7D0(CmdHist *h, s16 *cmd) {
    s32 rd = h->rd;
    s32 wr = h->wr;
    s16 *e;

    while (rd != wr) {
        rd = (rd + 1) & 0x1F;
        e = h->ent[rd].f8;
        if (e == NULL) {
            break;
        }
        if (cmd[0] == -1 && cmd[1] == -1) {
            break;
        }
        if (cmd[0] == e[0] && cmd[1] == e[1]) {
            cmd += 2;
        } else {
            cmd = NULL;
            break;
        }
    }
    if (cmd != NULL && cmd[0] == 0 && cmd[1] == 0 && rd == wr) {
        return h->ent[rd].f4;
    }
    return 0;
}

s32 func_002CA8A0(void) {
    return D_0047091C->chr->fCAE == 0x31 ? 2 : 0;
}

s32 func_002CA8D0(void) {
    return D_0047091C->chr->fCAE == 0x30;
}

s32 func_002CA8F0(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;

    if (t->f3C) {
        *n = 1;
    }
    if (*n && *(s16 *)(D_00470570 + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CA950(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
    }
    if (t->f3B) {
        *n = 1;
    }
    if (*n && *(s16 *)(D_00470570 + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CA9C0(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
    }
    if (t->f3A) {
        *n = 1;
    }
    if (*n && t->f32 != -1) {
        return 1;
    }
    return 0;
}

s32 func_002CAA30(void) {
    return D_0047091C->chr->fCAE == 0x1B;
}

s32 func_002CAA50(void) {
    return D_0047091C->f39 != 0;
}

s32 func_002CAA60(void) {
    return D_0047091C->f38 != 0;
}

s32 func_002CAA70(void) {
    return D_0047091C->f37 != 0;
}

s32 func_002CAA80(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;

    if (t->f36) {
        *n = 1;
    }
    if (*n && *(s16 *)(D_00470570 + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CAAE0(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (t->f32 != -1 && c->fCAE == 0x28) {
        (*n)++;
    }
    return *n >= 1;
}

extern s32 func_001D99C0(TutChr *, s32);

s32 func_002CAB30(void) {
    return func_001D99C0(D_0047091C->chr->f1354, 9) >= 1;
}

s32 func_002CAB60(void) {
    return func_001D99C0(D_0047091C->chr->f1354, 9) > 0 ? 2 : 0;
}

s32 func_002CABA0(void) {
    return func_001D99C0(D_0047091C->chr, 8) >= 4;
}

s32 func_002CABD0(void) {
    return func_001D99C0(D_0047091C->chr->f1354, 8) >= 4 ? 2 : 0;
}

s32 func_002CAC10(void) {
    return func_001D99C0(D_0047091C->chr, 0x12) > 0;
}

s32 func_002CAC40(void) {
    return func_001D99C0(D_0047091C->chr->f1354, 0x12) > 0 ? 2 : 0;
}

s32 func_002CAC80(void) {
    TutWork *t = D_0047091C;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
        return 1;
    }
    return 0;
}

s32 func_002CACC0(void) {
    return D_0047091C->chr->fCAE == 0x1D;
}

extern TutCmd D_00456660;

s32 func_002CACE0(void) {
    TutCmd cmd = D_00456660;
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;

    if (c->fCB2 == 1 && func_002CA7D0(h, cmd.v)) {
        (*n)++;
    }
    return *n >= 1;
}

extern TutCmd4 D_00470140;

s32 func_002CAD70(void) {
    TutCmd4 cmd = D_00470140;
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;

    if (c->fCB2 == 1 && func_002CA7D0(h, cmd.v)) {
        (*n)++;
    }
    return *n >= 1;
}

s32 func_002CADF0(void) {
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;

    if (t->f32 == 0x1F || t->f32 == 0x20) {
        (*n)++;
    }
    if (*n >= 3) {
        return 1;
    }
    return 0;
}

extern TutCmd4 D_00470138;

s32 func_002CAE50(void) {
    TutCmd4 cmd = D_00470138;
    TutWork *t = D_0047091C;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;
    s32 r;

    if (c->fCB2 == 1) {
        r = func_002CA7D0(h, cmd.v);
        if (n[0] < r) {
            n[0] = r;
            n[1]++;
        }
    }
    return n[1] >= 3;
}

