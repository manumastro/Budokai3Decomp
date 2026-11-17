/* Compiler probe for Dimps' am* library (the Metrowerks code linked before CRI): eight of its functions written as
 * C, each compiled to the original bytes with 3.0b22 / 3.0b38 / 3.0b50 / 3.0b52 at -O1,p and with nothing else.
 * Run: .venv/bin/python scripts/mwmatch.py scripts/probe/am_probe.c func_0012C540=0x12C540 func_0012DC30=0x12DC30 \
 *          func_0012F230=0x12F230 func_0012F290=0x12F290 func_00133980=0x133980 func_0014A610=0x14A610 \
 *          func_0012FBB0=0x12FBB0 func_00142560=0x142560 \
 *          --flags="-O1,p -sdatathreshold 8" --flags="-O1 -sdatathreshold 8" --flags="-O2,p -sdatathreshold 8"
 * (docs/plan.md, "Compiler"). What tells the flags apart: func_0012F230 reads its global twice (-O2 and up share
 * the load); func_0012C540 has loops whose targets are aligned with a nop (only `,p` does that at -O1), and the
 * others are calls left unscheduled (-O3 and up fill the delay slots and make tail calls). The names and types are
 * placeholders. */

typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;

#define FIX(base, p) if (p) p = (void *)((u32)(base) + (u32)(p))

typedef struct { char pad[0xC]; void *p; char pad2[0x10]; } A20;
typedef struct { char pad[0xC]; void *p; } A10;
typedef struct { s32 pad0; s32 na; A20 *a; s32 nb; A10 *b; char pad[0xC]; } Item;
typedef struct { char pad[0xC]; s32 n; Item items[1]; } Group;
typedef struct { s32 pad0; void *p4; Group *p8; void *pC; } Part;
typedef struct { char pad[0x34]; Part *part; void *p38; void *p3C; void *p40; char pad44[4]; s16 idx; char pad4a[6]; } Ent;
typedef struct { char pad[0x10]; s32 n; Ent *ents; char pad18[4]; void *p1C; } Hdr;

void func_0012C540(Hdr *h) {
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

typedef struct { int a; int b; int c; int d; } Adx;
extern Adx *D_0047020C;
extern void ADXT_Pause(int, int);
void func_0012DC30(int i, int sw) { ADXT_Pause(D_0047020C[i].a, sw); }

extern int D_00470228;
int func_0012F230(int n) { int p = D_00470228; D_00470228 += (n + 15) & ~15; return p; }

extern void func_0012F190(void);
extern void func_00133780(int, int);
void func_0012F290(void) { func_0012F190(); func_00133780(2, 0); }

extern float D_003F01E0[4];
void func_00133980(float a, float b, float c, float d) { D_003F01E0[0]=a; D_003F01E0[1]=b; D_003F01E0[2]=c; D_003F01E0[3]=d; }

typedef struct { char pad[0x44]; int v; char pad2[0x5c-0x48]; } Scr;
extern Scr *D_004704D4;
void func_0014A610(int i, int v) { D_004704D4[i].v = v; }

extern void func_00140BF0(int);
extern int sceGsSyncPath(int, int);
void func_0012FBB0(void) { func_00140BF0(0); sceGsSyncPath(0, 0); }

extern void func_00142590(void);
extern void func_00182330(void);
void func_00142560(void) { func_00142590(); func_00182330(); }

