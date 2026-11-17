#include "common.h"

typedef struct Node {
    u16 f0;
    u8 f2;
    u8 f3;
    s32 id;
    char pad8[0x10];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct Out {
    u16 f0;
    u8 f2;
    u8 f3;
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

extern u32 D_0047067C;
extern s32 D_00470678;
extern Node *D_0058A8FC[];
extern Node D_0058A900[];
extern Node *D_0058AB20[];

INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_00219A80);
void func_00219BC0(Out *o, s32 id) {
    u32 cnt = D_0047067C;
    Node *n = D_0058A8FC[0];
    u32 sum = 0;
    u32 any = 0;

    if (cnt == 0) {
        o->f2 = 0;
        o->f3 = 0;
        return;
    }
    while (n != D_0058A900) {
        if (id == -1 || n->id == id || n->id == -1) {
            sum += n->f2;
            any |= n->f3;
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
    o->f2 = sum;
    o->f3 = any;
}
void func_00219C70(Out *o, s32 id) {
    Node *n = D_0058A8FC[0];
    u16 min = 0xFFFF;

    for (; n != D_0058A900; n = n->next) {
        if (id == -1 || n->id == id || n->id == -1) {
            if (n->f0 < min) {
                min = n->f0;
                o->f2 = n->f2;
                o->f3 = n->f3;
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
            if (a < n->f2) {
                a = n->f2;
            }
            if (b < n->f3) {
                b = n->f3;
            }
        }
    }
    o->f2 = a;
    o->f3 = b;
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_219A80", func_0021A390);
