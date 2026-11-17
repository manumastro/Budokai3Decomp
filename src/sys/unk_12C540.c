#include "common.h"

#define FIX(base, p) if (p) p = (void *)((u32)(base) + (u32)(p))

typedef struct { char pad[0xC]; void *p; char pad2[0x10]; } A20;
typedef struct { char pad[0xC]; void *p; } A10;
typedef struct { s32 pad0; s32 na; A20 *a; s32 nb; A10 *b; char pad[0xC]; } Item;
typedef struct { char pad[0xC]; s32 n; Item items[1]; } Group;
typedef struct { s32 pad0; void *p4; Group *p8; void *pC; } Part;
typedef struct { char pad[0x34]; Part *part; void *p38; void *p3C; void *p40; char pad44[4]; s16 idx; char pad4a[6]; } Ent;
typedef struct { char pad[0x10]; s32 n; Ent *ents; char pad18[4]; void *p1C; } ModelHdr;


void func_0012C540(ModelHdr *h) {
    Ent *e;
    s32 i;
    Item *it;
    s32 j;
    A20 *a;
    A10 *b;
    s32 k;

    if (h->n <= 0) return;
    if (h->ents == 0) return;
    h->ents = (Ent *)((u32)h + (u32)h->ents);
    e = h->ents;
    FIX(h, h->p1C);
    for (i = 0; i < h->n; i++) {
        e[i].idx = i;
        if (e[i].part) {
            e[i].part = (Part *)((u32)h + (u32)e[i].part);
            FIX(h, e[i].part->p4);
            if (e[i].part->p8) {
                e[i].part->p8 = (Group *)((u32)h + (u32)e[i].part->p8);
                for (it = e[i].part->p8->items, j = 0; j < e[i].part->p8->n; j++, it++) {
                    if (it->a) {
                        it->a = (A20 *)((u32)h + (u32)it->a);
                        for (a = it->a, k = 0; k < it->na; k++, a++) {
                            a->p = (void *)((u32)h + (u32)a->p);
                        }
                    } else {
                        it->a = (A20 *)&it->a;
                    }
                    if (it->b) {
                        it->b = (A10 *)((u32)h + (u32)it->b);
                        for (b = it->b, k = 0; k < it->nb; k++, b++) {
                            b->p = (void *)((u32)h + (u32)b->p);
                        }
                    } else {
                        it->b = (A10 *)&it->b;
                    }
                }
            }
            FIX(h, e[i].part->pC);
        }
        FIX(h, e[i].p38);
        FIX(h, e[i].p3C);
        FIX(h, e[i].p40);
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012C900);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012C910);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012CBA0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012CE00);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012CF50);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D1B0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D2E0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D4F0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D5A0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D650);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D790);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D900);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012D9F0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DA30);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DB00);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DC30);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DC60);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DD20);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12C540", func_0012DDD0);
