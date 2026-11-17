#include "common.h"

typedef struct Pair {
    u8 a;
    u8 b;
} Pair;

typedef struct Node {
    u16 f0;
    Pair p;
    s32 id;
    s32 f8;
    s32 fC;
    char pad10[8];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct Out {
    u16 f0;
    Pair p;
} Out;

typedef struct RelocEntry {
    char pad0[0xC];
    s32 fC;
} RelocEntry;

typedef struct RelocHdr {
    char pad0[0x10];
    s32 count;
    s32 entries;
    s32 f18;
} RelocHdr;

extern s32 D_0047067C;
extern s32 D_00470678;
extern Node *D_0058A8FC[];
extern Node D_0058A900[];
extern Node *D_0058AB20[];
extern Node D_0058A8E0[];
extern Node *D_0058A918[];
extern Node D_0058A920[];
extern s32 D_00470674;
extern void memset(void *, s32, s32);

typedef struct Chan {
    f32 f0;
    f32 f4;
    s32 f8;
    s32 fC;
    char pad10[4];
    s16 f14;
    s16 f16;
    f32 f18;
    s32 f1C;
} Chan;

typedef struct ChanWork {
    char pad0[0x5C4];
    Chan chans[6];
    s32 f684;
} ChanWork;

extern ChanWork *D_00470570;
extern f32 D_004E0610[];
extern f32 D_004E0614[];
extern void func_0012D5A0(s32, s32);

void func_00219A80(void) {
    ChanWork *w = D_00470570;
    Chan *c = w->chans;
    s32 flag;
    s32 i;

    for (i = 0; i < 5; i++, c++) {
        c->f8 = -1;
        c->fC = 0;
        c->f16 = -1;
        c->f0 = 1.0f;
        c->f18 = -1.0f;
        switch (i) {
        case 0:
        case 1:
            c->f4 = D_004E0610[0];
            flag = 0;
            c->f8 = i;
            c->f14 = 0x69;
            break;
        case 2:
        case 3:
        case 4:
            c->f4 = D_004E0614[0];
            flag = 1;
            c->f8 = -1;
            c->f14 = -1;
            c->f1C = 0;
            break;
        }
        func_0012D5A0(i, flag);
    }
    w->chans[5].f8 = -1;
    w->chans[5].fC = 0;
    w->chans[5].f14 = -1;
    w->chans[5].f16 = -1;
    w->chans[5].f0 = 1.0f;
    w->chans[5].f18 = -1.0f;
    w->chans[5].f4 = D_004E0614[0];
    w->chans[5].f8 = -1;
    w->chans[5].f1C = 0;
    w->f684 = -1;
}
void func_00219BC0(Out *o, s32 id) {
    s32 cnt = D_0047067C;
    Node *n = D_0058A8FC[0];
    u32 sum = 0;
    u32 any = 0;

    if (cnt == 0) {
        o->p.a = 0;
        o->p.b = 0;
        return;
    }
    while (n != D_0058A900) {
        if (id == -1 || n->id == id || n->id == -1) {
            sum += n->p.a;
            any |= n->p.b;
            n = n->next;
        }
    }
    sum /= cnt;
    if (sum > 0xFF) {
        sum = 0xFF;
    }
    if (any != 0) {
        any = 1;
    }
    o->p.a = sum;
    o->p.b = any;
}
void func_00219C70(Out *o, s32 id) {
    Node *n = D_0058A8FC[0];
    u16 min = 0xFFFF;

    for (; n != D_0058A900; n = n->next) {
        if (id == -1 || n->id == id || n->id == -1) {
            if (n->f0 < min) {
                min = n->f0;
                o->p.a = n->p.a;
                o->p.b = n->p.b;
            }
        }
    }
    o->f0 = min;
}
void func_00219CF0(Out *o, s32 id) {
    Node *n = D_0058A8FC[0];
    u8 a = 0;
    u8 b = 0;

    for (; n != D_0058A900; n = n->next) {
        if (id == -1 || n->id == id || n->id == -1) {
            if (a < n->p.a) {
                a = n->p.a;
            }
            if (b < n->p.b) {
                b = n->p.b;
            }
        }
    }
    o->p.a = a;
    o->p.b = b;
}
void func_00219D80(Node *n) {
    Node *prev;
    Node *next;

    if (D_0047067C != 0) {
        D_0047067C--;
        if (n->next == NULL || n->prev == NULL) {
            return;
        }
        D_0058AB20[D_00470678] = n;
        D_00470678 = (D_00470678 + 1) & 0xF;
        prev = n->prev;
        next = n->next;
        prev->next = next;
        next->prev = prev;
        n->next = NULL;
        n->prev = NULL;
    }
}
void func_00219E00(RelocHdr *h) {
    RelocEntry *e;
    s32 i;

    if (h->f18 != 0) {
        h->f18 = (s32)((char *)h + h->f18);
    }
    if (h->entries != 0) {
        h->entries = (s32)((char *)h + h->entries);
        e = (RelocEntry *)h->entries;
        for (i = 0; i < h->count; i++) {
            e[i].fC = (s32)((char *)h + e[i].fC);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_00219E70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_00219EA0);
void func_0021A030(Out *o, s32 id, s32 f8, s32 fC) {
    Node *n;
    Node *prev;

    if (D_0047067C >= 0x10) {
        n = NULL;
    } else {
        n = D_0058AB20[D_00470674];
        D_0047067C++;
        D_00470674 = (D_00470674 + 1) & 0xF;
        memset(n, 0, sizeof(Node));
        prev = D_0058A918[0];
        prev->next = n;
        n->next = D_0058A900;
        n->prev = prev;
        D_0058A918[0] = n;
    }
    if (n != NULL) {
        n->f0 = o->f0;
        n->p = o->p;
        n->id = id;
        n->f8 = f8;
        n->fC = fC;
    }
}
void func_0021A120(void) {
    s32 i;

    memset(D_0058A8E0, 0, sizeof(Node));
    memset(D_0058A900, 0, sizeof(Node));
    memset(D_0058A920, 0, sizeof(Node) * 16);
    memset(D_0058AB20, 0, sizeof(Node *) * 16);
    D_0058A8FC[0] = D_0058A900;
    D_0058A918[0] = D_0058A8E0;
    for (i = 15; i >= 0; i--) {
        D_0058AB20[i] = &D_0058A920[i];
    }
    D_00470674 = 0;
    D_00470678 = 0;
    D_0047067C = 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A390);
