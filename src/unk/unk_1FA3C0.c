#include "common.h"

typedef struct Fighter {
    char pad0[0x154];
    s16 f154;
} Fighter;

typedef struct ModelInfo {
    void *f0;
    char pad4[0x58];
} ModelInfo;

typedef struct PackEntry {
    char pad0[8];
    s32 count;
    s32 *offsets;
} PackEntry;

typedef struct PackHdr {
    char pad0[4];
    s32 count;
    s32 entries;
} PackHdr;

extern s32 gBtbBg[];
extern void *D_0051CCF4[];
extern void *D_0051CCF8[];
extern ModelInfo D_0044AE60[];
extern s32 D_00470638;
extern s32 D_00470640;
extern void memset(void *, s32, s32);
extern s32 func_00127E88(char *, char *, s32);
extern void amFile_Load(void *);
extern char *func_001A50F0(void *, s32);
extern void func_002D04B0(void *);
extern void func_001FA810(char *);
extern char D_00469948[];
extern char D_00469950[];
extern char D_00469958[];
extern char D_00469960[];
extern char D_00469968[];
extern char D_00469970[];
extern char D_00469978[];
extern char D_00469980[];
extern char D_00469988[];
extern char D_00469990[];

typedef struct Bundle {
    char pad0[0x10];
    s32 count;
} Bundle;

typedef struct Bone {
    char pad0[0x2C];
    s32 n2C;
    s32 n30;
    s32 f34;
    s32 child;
    s32 sibling;
    s32 f40;
    s32 f44;
    s32 *t48;
    s32 *t4C;
} Bone;

typedef struct MasEntry {
    char pad0[8];
    s32 f8;
} MasEntry;

typedef struct MasHdr {
    char tag[4];
    s32 count;
    s32 entries;
} MasHdr;
extern void *amCdFs_ReadFileId(void *, s32, s32);

void *func_001FA3C0(Fighter *f) {
    memset(gBtbBg, 0, 0xC0);
    D_0051CCF4[0] = amCdFs_ReadFileId(D_0044AE60[f->f154].f0, 0, 0);
    D_0051CCF8[0] = D_0051CCF4[0];
    gBtbBg[0] = f->f154;
    return D_0051CCF8[0];
}
void func_001FA460(Bundle *b) {
    s32 i;
    char *p;
    char *tag;

    amFile_Load(b);
    for (i = 0; i < b->count; i++) {
        p = func_001A50F0(b, i);
        tag = p + 1;
        if (p == NULL) {
            continue;
        }
        if (func_00127E88(tag, D_00469948, 3) == 0) {
            amFile_Load(p);
        } else if (func_00127E88(tag, D_00469950, 3) == 0) {
            amFile_Load(p);
        } else if (func_00127E88(tag, D_00469958, 3) == 0) {
            amFile_Load(p);
        } else if (func_00127E88(tag, D_00469960, 3) == 0) {
            amFile_Load(p);
        } else if (func_00127E88(tag, D_00469968, 3) == 0) {
            func_002D04B0(p);
        } else if (func_00127E88(tag, D_00469970, 3) == 0) {
            amFile_Load(p);
        }
    }
}
void func_001FA600(PackHdr *h) {
    s32 i;
    s32 j;
    s32 *p;
    PackEntry *e;

    h->entries = (s32)((char *)h + h->entries);
    for (i = 0, p = (s32 *)h->entries; i < h->count; i++, p++) {
        *p = (s32)((char *)h + *p);
        e = (PackEntry *)*p;
        e->offsets = (s32 *)((char *)h + (s32)e->offsets);
        for (j = 0; j < e->count; j++) {
            e->offsets[j] = (s32)((char *)h + e->offsets[j]);
        }
    }
}
void func_001FA6A0(Bone *b, char *base) {
    s32 i;

    if (b->f34 != 0) {
        b->f34 = (s32)(base + b->f34);
    }
    if (b->child != 0) {
        b->child = (s32)(base + b->child);
    }
    if (b->sibling != 0) {
        b->sibling = (s32)(base + b->sibling);
    }
    if (b->f40 != 0) {
        b->f40 = (s32)(base + b->f40);
    }
    if (b->f44 != 0) {
        b->f44 = (s32)(base + b->f44);
    }
    if (b->t48 != NULL) {
        b->t48 = (s32 *)(base + (s32)b->t48);
        for (i = 0; i < b->n2C; i++) {
            b->t48[i] = (s32)(base + b->t48[i]);
        }
    }
    if (b->t4C != NULL) {
        b->t4C = (s32 *)(base + (s32)b->t4C);
        for (i = 0; i < b->n30; i++) {
            b->t4C[i] = (s32)(base + b->t4C[i]);
        }
    }
    if (b->child != 0) {
        func_001FA6A0((Bone *)b->child, base);
    }
    if (b->sibling != 0) {
        func_001FA6A0((Bone *)b->sibling, base);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FA3C0", func_001FA810);
s32 func_001FB110(char *p) {
    s32 i;
    s32 *q;

    if (p[0] == '!') {
        return 0;
    }
    if (func_00127E88(p + 1, D_00469978, 3) == 0) {
        func_001FA810(p);
    } else if (func_00127E88(p + 1, D_00469980, 3) == 0) {
        MasHdr *h = (MasHdr *)p;

        h->entries = (s32)(p + h->entries);
        q = (s32 *)h->entries;
        for (i = 0; i < h->count; i++, q++) {
            *q = (s32)(p + *q);
            ((MasEntry *)*q)->f8 = (s32)(p + ((MasEntry *)*q)->f8);
        }
    } else if (func_00127E88(p + 1, D_00469988, 3) == 0) {
        func_001FA600((PackHdr *)p);
    } else if (func_00127E88(p + 1, D_00469990, 3) == 0) {
        func_001FA460((Bundle *)p);
    }
    p[0] = '!';
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FA3C0", func_001FB260);
typedef struct DrawCam {
    char pad0[0x40];
    char f40[0xA0];
    char fE0[0x18];
    u32 fF8;
} DrawCam;

extern void *D_00470644;
extern void *D_0047CAC0[];
extern char D_003F0800[];
extern char D_00495A00[];
extern s32 amGs_SetReg32(s32, s32);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern void amGs_SetReg64b(s32, s32);
extern void func_001339B0(void *);
extern void func_0013B0B0(void *);
extern void func_0013E4C0(void *, void *);
extern void amDma_Request(s32, s32, s32, s32, s32, u64, s32, s32);
extern void func_0013B110(s32);
extern void func_00133980(f32, f32, f32, f32);
s32 func_001FB260(void *);

void func_001FB3B0(DrawCam *c, void (*draw)(void)) {
    s32 saved;

    if (c == NULL || draw == NULL) {
        return;
    }
    saved = amGs_SetReg32(0, 0x5C00D);
    DrawFlags_Apply(0x1BC00F00, 0, 0, 0x18C00A00, 0);
    amGs_SetReg64b(0, 5);
    func_001339B0(c->fE0);
    D_00470644 = c->f40;
    D_0047CAC0[0] = func_001FB260;
    func_0013B0B0(D_003F0800);
    func_0013E4C0(D_00495A00, c->f40);
    amDma_Request(0, 1, 1, 0, 0, (u64)c->fF8 & 0xFFFFFFF, 6, 0);
    draw();
    func_0013B110(1);
    amGs_SetReg32(0, saved);
    DrawFlags_Apply(0, 0x1BC00F00, 0, 0, 0);
    func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
    D_0047CAC0[0] = NULL;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FA3C0", func_001FB500);
void func_001FB750(s32 a, s32 b) {
    D_00470638 = a;
    D_00470640 = b;
}
