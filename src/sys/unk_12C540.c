#include "common.h"

#define FIX(base, p) if (p) p = (void *)((u32)(base) + (u32)(p))

typedef struct { char pad[0xC]; void *p; char pad2[0x10]; } A20;
typedef struct { char pad[0xC]; void *p; } A10;
typedef struct { s32 pad0; s32 na; A20 *a; s32 nb; A10 *b; char pad[0xC]; } Item;
typedef struct { char pad[0xC]; s32 n; Item items[1]; } Group;
typedef struct { s32 pad0; void *p4; Group *p8; void *pC; } Part;
typedef struct { char pad[0x34]; Part *part; void *p38; void *p3C; void *p40; char pad44[4]; s16 idx; char pad4a[6]; } Ent;
typedef struct { char pad[0x10]; s32 n; Ent *ents; char pad18[4]; void *p1C; } ModelHdr;
#define FIXR(base, p) if (p) p = (void *)((u32)(p) + (u32)(base))

typedef struct { s32 type; s32 pad[2]; void *p; } Ent10;
typedef struct { void *a; void *b; } P8;
typedef struct { void *a; void *b; void *c; } P12;
typedef struct { void *a; void *b; void *c; void *d; } P16;
typedef struct { char pad[0x10]; s32 n; Ent10 *ents; s32 m; void *p1C; } Hdr2;

typedef struct Node { struct Node *next; void *a; void *b; } Node;
typedef struct { s32 type; s32 pad; Node *list; s32 pad2; } Slot;
typedef struct { s32 pad[2]; void *p8; Slot *slots; } Sub;
typedef struct { s32 pad; Sub *subs; void *p8; void *pC; void *p10; s32 pad2[3]; } Grp;
typedef struct { char pad[0x10]; s32 n; Grp *grps; s32 nfiles; u8 **files; s32 nsub; void *p24; } Hdr3;

extern s32 amFile_Load(u8 *);

typedef struct { s16 nch; u16 sfreq; } StmCfg;
typedef struct { void *adxt; s32 stat; f32 vol; s32 padC; } Stm;
extern f32 D_00470200;
extern s8 D_00470204;
extern s32 D_0047021C;
extern Stm *gAdxStream;
extern s8 *D_00470214;
extern s8 *D_00470218;
extern void **D_00470210;
extern void *func_00124940(s32, s32);
extern void *ADXT_Create(s32, void *, s32);
extern void ADXT_Stop(void *);
extern void ADXT_SetOutVol(void *, s32);
extern s32 ADXT_GetStat(void *);
extern void ADXT_StartFname(void *, char *);
extern void ADXT_StartAfs(void *, s32, s32);
extern s32 amAdx_FindFree(void);
extern void amAdx_Touch(s32);
extern s32 amCdFs_CheckDir(s32, s32);
extern f32 func_0011F698(f32);
extern void ADXT_Pause(void *, s32);


void amFile_Relocate(ModelHdr *h) {
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
void func_0012C900(void) {
}

void func_0012C910(Hdr2 *h) {
    s32 i;
    P8 *p;
    P12 *q;
    s32 j;

    if (h->n <= 0) return;
    if (h->ents == 0) return;
    h->ents = (Ent10 *)((u32)h + (u32)h->ents);
    FIX(h, h->p1C);
    for (i = 0; i < h->n; i++) {
        if (h->ents[i].p) {
            h->ents[i].p = (void *)((u32)h + (u32)h->ents[i].p);
            switch (h->ents[i].type) {
            case 9:
                p = h->ents[i].p;
                for (j = 0; j < h->m; j++) {
                    FIX(h, p[j].a);
                    FIX(h, p[j].b);
                }
                break;
            case 0x19:
                q = h->ents[i].p;
                for (j = 0; j < h->m; j++) {
                    FIX(h, q[j].a);
                    FIX(h, q[j].b);
                    FIX(h, q[j].c);
                }
                break;
            }
        }
    }
}

void func_0012CBA0(Hdr3 *h) {
    s32 i;
    u8 **f;
    Grp *g;
    Sub *s;
    s32 j;
    Slot *sl;
    Node *nd;
    s32 k;

    if (h->files) {
        h->files = (u8 **)((u32)h + (u32)h->files);
        for (f = h->files, i = 0; i < h->nfiles; i++, f++) {
            *f = (u8 *)((u32)h + (u32)*f);
            amFile_Load(*f);
        }
    }
    if (h->grps) {
        h->grps = (Grp *)((u32)h + (u32)h->grps);
        for (g = h->grps, i = 0; i < h->n; i++, g++) {
            if (g->subs) {
                g->subs = (Sub *)((u32)h + (u32)g->subs);
                for (s = g->subs, j = 0; j < h->nsub; j++, s++) {
                    FIX(h, s->p8);
                    if (s->slots) {
                        s->slots = (Slot *)((u32)h + (u32)s->slots);
                        for (sl = s->slots, k = 0; k < 5; k++, sl++) {
                            if (sl->list) {
                                sl->list = (Node *)((u32)h + (u32)sl->list);
                                nd = sl->list;
                                if (sl->type == 4) {
                                    while (nd) {
                                        FIX(h, nd->a);
                                        FIX(h, nd->b);
                                        FIX(h, nd->next);
                                        nd = nd->next;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            FIX(h, g->p8);
            FIX(h, g->pC);
            FIX(h, g->p10);
        }
    }
    FIX(h, h->p24);
}

void func_0012CE00(Hdr2 *h) {
    s32 i;
    P16 *p;

    if (h->n <= 0) return;
    if (h->ents == 0) return;
    h->ents = (Ent10 *)((u32)h + (u32)h->ents);
    FIX(h, h->p1C);
    for (i = 0; i < h->n; i++) {
        if (h->ents[i].p) {
            h->ents[i].p = (void *)((u32)h + (u32)h->ents[i].p);
            p = h->ents[i].p;
            switch (h->ents[i].type) {
            case 0x1D:
                FIX(h, p->d);
            case 0xD:
                FIX(h, p->a);
                FIX(h, p->b);
                FIX(h, p->c);
                break;
            }
        }
    }
}

void func_0012CF50(Hdr2 *h) {
    s32 i;
    P16 *a;
    P16 *b;
    P16 *c;
    P16 *d;

    if (h->n <= 0) return;
    if (h->ents == 0) return;
    h->ents = (Ent10 *)((u32)h + (u32)h->ents);
    FIX(h, h->p1C);
    for (i = 0; i < h->n; i++) {
        if (h->ents[i].p) {
            h->ents[i].p = (void *)((u32)h + (u32)h->ents[i].p);
            a = h->ents[i].p;
            b = h->ents[i].p;
            c = h->ents[i].p;
            d = h->ents[i].p;
            switch (h->ents[i].type) {
            case 10:
                FIXR(h, a->a);
                FIXR(h, a->b);
                break;
            case 9:
                if (c->a) c->a = (void *)((u32)c->a + (u32)h);
                if (d->c) c->b = (void *)((u32)c->b + (u32)h);
                break;
            case 0x29:
                if (c->a) b->a = (void *)((u32)b->a + (u32)h);
                if (d->c) b->b = (void *)((u32)b->b + (u32)h);
                FIXR(h, b->c);
                break;
            case 0x4B:
                if (c->a) d->a = (void *)((u32)d->a + (u32)h);
                FIXR(h, d->b);
                FIXR(h, d->c);
                FIXR(h, d->d);
                break;
            }
        }
    }
}

void func_0012D1B0(Hdr2 *h) {
    s32 i;
    s32 j;

    if (h->n <= 0) return;
    if (h->ents == 0) return;
    h->ents = (Ent10 *)((u32)h + (u32)h->ents);
    if (h->p1C) h->p1C = (void *)((u32)h + (u32)h->p1C);
    for (i = 0; i < h->n; i++) {
        if (h->ents[i].p) {
            h->ents[i].p = (void *)((u32)h + (u32)h->ents[i].p);
            for (j = 0; j < h->m; j++) {
                if (((void **)h->ents[i].p)[j]) ((void **)h->ents[i].p)[j] = (void *)((u32)h + (u32)((void **)h->ents[i].p)[j]);
            }
        }
    }
}

void amAdx_Init(s32 n, s32 nstm, StmCfg *cfg) {
    s32 i;
    s32 size;
    Stm *s;

    D_00470200 = 1.0f;
    D_00470204 = n;
    D_0047021C = n;
    gAdxStream = func_00124940(0x40, n * 16);
    D_00470214 = func_00124940(0x40, n);
    D_00470218 = func_00124940(0x40, n);
    D_00470210 = func_00124940(0x40, n * 4);
    for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
        /* the ADX work size for one stream (input buffer rounded to 2 KB, output buffers), plus 64 */
        size = (u32)(cfg[i].nch * 0x40C0 + ((((nstm + 1) * ((cfg[i].sfreq / 1000) * (cfg[i].nch * 25000) / 44) + 0x800) / 0x800) * 0x800 + 0x24)) + 0x40;
        D_00470210[i] = func_00124940(0x40, size);
        s->adxt = ADXT_Create(cfg[i].nch, D_00470210[i], size);
        s->stat = 0;
        s->vol = 1.0f;
        s->padC = 0;
        D_00470214[i] = i;
        D_00470218[i] = 1;
    }
}

void amAdx_Reset(void) {
    s32 i;
    Stm *s;

    D_00470200 = 1.0f;
    D_0047021C = D_00470204;
    for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
        ADXT_Stop(s->adxt);
        s->stat = 0;
        s->vol = 1.0f;
        s->padC = 0;
        ADXT_SetOutVol(s->adxt, 0);
        D_00470214[i] = i;
        D_00470218[i] = 1;
    }
}

void amAdx_Enable(s32 ch, s32 on) {
    if (on != D_00470218[ch]) {
        if (on) {
            D_00470214[D_0047021C] = ch;
            D_0047021C++;
            D_00470218[ch] = on;
        } else {
            amAdx_Touch(ch);
            D_00470218[ch] = on;
            D_0047021C--;
        }
    }
}

s32 amAdx_PlayFile(s32 ch, char *fname, s32 mode) {
    Stm *s;

    if (ch == -1) {
        ch = amAdx_FindFree();
        if (ch == -1) {
            ch = mode;
            if (ch == -1) return -1;
            if (ch == -3) {
                if (D_0047021C == 0) return -1;
                ch = D_00470214[0];
            }
        }
        s = &gAdxStream[ch];
    } else {
        s = &gAdxStream[ch];
        s->stat = ADXT_GetStat(s->adxt);
        if (s->stat != 0 && s->stat != 5 && mode == -1) return -1;
    }
    ADXT_StartFname(s->adxt, fname);
    amAdx_Touch(ch);
    return ch;
}

s32 amAdx_PlayAfs(s32 ch, s32 id, s32 mode) {
    Stm *s;

    if (ch == -1) {
        ch = amAdx_FindFree();
        if (ch == -1) {
            ch = mode;
            if (ch == -1) return -1;
            if (ch == -3) {
                if (D_0047021C == 0) return -1;
                ch = D_00470214[0];
            }
        }
        s = &gAdxStream[ch];
    } else {
        s = &gAdxStream[ch];
        s->stat = ADXT_GetStat(s->adxt);
        if (s->stat != 0 && s->stat != 5 && mode == -1) return -1;
    }
    if (amCdFs_CheckDir(id >> 16, 0) < 0) return -2;
    ADXT_StartAfs(s->adxt, id >> 16, id & 0xFFFF);
    amAdx_Touch(ch);
    return ch;
}

void amAdx_Stop(s32 ch) {
    s32 i;
    Stm *s;

    if (ch != -1) {
        s = &gAdxStream[ch];
        s->stat = ADXT_GetStat(s->adxt);
        if (s->stat != 0 && s->stat != 5) ADXT_Stop(s->adxt);
        s->stat = 0;
    } else {
        for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
            s->stat = ADXT_GetStat(s->adxt);
            if (s->stat != 0 && s->stat != 5) ADXT_Stop(s->adxt);
            s->stat = 0;
        }
    }
}

s32 amAdx_GetStat(s32 ch) {
    Stm *s;

    s = &gAdxStream[ch];
    s->stat = ADXT_GetStat(s->adxt);
    return s->stat;
}

s32 amAdx_IsStopped(s32 ch) {
    s32 i;
    Stm *s;
    s32 st;

    if (ch != -1) {
        s = &gAdxStream[ch];
        s->stat = st = ADXT_GetStat(s->adxt);
        if (st != 0 && st != 5) return 0;
    } else {
        for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
            s->stat = st = ADXT_GetStat(s->adxt);
        if (st != 0 && st != 5) return 0;
        }
    }
    return 1;
}

void amAdx_SetVolume(s32 ch, f32 vol) {
    s32 db;
    s32 i;
    Stm *s;
    f32 v;

    v = D_00470200 * vol;
    if (v <= 0.0001f) {
        db = -999;
    } else {
        db = 200.0f * func_0011F698(v);
    }
    if (ch != -1) {
        s = &gAdxStream[ch];
        if (db != s->padC) {
            ADXT_SetOutVol(s->adxt, db);
            s->padC = db;
        }
        s->vol = vol;
    } else {
        for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
            if (db != s->padC) {
                ADXT_SetOutVol(s->adxt, db);
                s->padC = db;
            }
            s->vol = vol;
        }
    }
}

void amAdx_Pause(s32 ch, s32 sw) {
    ADXT_Pause(gAdxStream[ch].adxt, sw);
}

s32 amAdx_IsPlaying(s32 ch) {
    s32 i;
    Stm *s;
    s32 st;

    if (ch != -1) {
        s = &gAdxStream[ch];
        s->stat = st = ADXT_GetStat(s->adxt);
        if (st != 3) return 0;
    } else {
        for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
            s->stat = st = ADXT_GetStat(s->adxt);
        if (st != 3) return 0;
        }
    }
    return 1;
}

s32 amAdx_FindFree(void) {
    s32 i;
    Stm *s;

    for (i = 0, s = gAdxStream; i < D_00470204; i++, s++) {
        if (D_00470218[i]) {
            s->stat = ADXT_GetStat(s->adxt);
            if (s->stat == 0 || s->stat == 5) return i;
        }
    }
    return -1;
}

void amAdx_Touch(s32 ch) {
    s32 i;

    if (D_00470218[ch] == 0) return;
    if (ch == D_00470214[D_0047021C - 1]) return;
    for (i = 0; ch != D_00470214[i]; i++) {
    }
    for (; i < D_0047021C - 1; i++) {
        D_00470214[i] = D_00470214[i + 1];
    }
    D_00470214[D_0047021C - 1] = ch;
}

