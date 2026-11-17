#include "common.h"

/* A read request (0x64 bytes): reqs are queued in a doubly linked list, head gCdReqHead, tail gCdReqTail. */
typedef struct CdCache CdCache;

typedef struct CdReq {
    s8 type;
    s8 own;
    s8 heap;
    s8 pad3;
    s16 state;
    char name[0x3A];
    CdCache *cache;
    s32 id;
    s32 size;
    s32 sectors;
    s32 pos;
    void *buf;
    struct CdReq *next;
    struct CdReq *prev;
    s32 pad60;
} CdReq;

/* A file kept in memory (0x5C bytes). */
struct CdCache {
    s8 type;
    s8 own;
    char name[0x3A];
    s32 refs;
    s32 id;
    s32 size;
    s32 sectors;
    s32 pos;
    void *buf;
    s32 state;
    s32 pad58;
};

/* A directory (0x7C bytes). */
typedef struct CdDir {
    u32 flags;
    void *buf;
    char name[0x3A];
    char path[0x3A];
} CdDir;

typedef struct CdInit {
    char *name;
    s32 a;
    s32 b;
    s32 c;
} CdInit;

typedef struct CdInitDvd {
    char *name;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} CdInitDvd;

typedef struct CdStream {
    s32 a;
    s32 b;
    void *buf;
    s32 c;
} CdStream;

extern char D_0046AFB0[];
extern char D_0046AFC8[];
extern char D_0046AFD0[];
extern char D_0046AFF0[];
extern char D_0046B010[];
extern char D_0046B050[];
extern s32 D_00470750;
extern s32 D_00470754;
extern s32 D_00470758;
extern s32 D_0047075C;
extern s32 D_00470760;
extern s32 D_00470764;
extern CdReq *D_00470768;
extern CdReq **D_0047076C;
extern s32 D_00470770;
extern CdReq *gCdReqHead;
extern CdReq *gCdReqTail;
extern s32 D_0047077C;
extern CdCache *D_00470780;
extern CdCache **D_00470784;
extern s32 D_00470788;
extern s32 D_0047078C;
extern s32 D_00470790;
extern CdDir *D_00470794;
extern s32 D_00470798;
extern CdStream D_0058D540;
extern char D_0058D580[];
extern s32 D_0058EAF0[];
extern void *D_0058EBF0[];

extern s32 func_00126B00(char *, ...);
extern void func_001258F8(void *, s32, s32);
extern void func_0015DAE8(CdInit *);
extern void func_0015DC00(CdStream *);
extern void func_0015D720(CdInitDvd *);
extern void func_0015D850(CdStream *);
extern void *func_00124940(s32, s32);
extern void func_00156210(void);
extern void func_00128040(char *, char *, s32);
extern s32 func_00127E88(char *, char *, s32);
extern void amHeap_Free(void *);

CdReq *amCdFs_AllocReq(void);
void amCdFs_Start(void);
void amCdFs_Close(CdReq *, s32);
void amCdFs_Reset(s32);
CdCache *amCdFs_AllocCache(void);

extern void amCdFs_FreeCache(CdCache *);

extern s32 func_00118C08(s32);
extern s32 func_00119420(s32);
extern void func_00154710(s32, char *, s32, void *);
extern s32 func_00155118(char *, s32);
extern s32 func_00155290(s32, s32);
extern s32 ADXF_GetFsizeSct(s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001553A0(s32);
extern void ADXF_ReadNw(s32, s32, void *);
extern CdCache *amCdFs_FindCache(CdReq *);
extern void amCdFs_Unlink(CdReq *);

extern s32 func_00155FF8(s32);
extern s32 func_00119988(void);
extern s32 ADXF_GetStat(s32);
extern s32 func_00154B68(s32);
extern void ADXF_StopNw(s32);
extern CdReq *amCdFs_LoadDir(s32, char *, s32);

extern void func_00157FF0(void);

INCLUDE_ASM("asm/nonmatchings/sys/amCdFs", func_0025BE40);
INCLUDE_ASM("asm/nonmatchings/sys/amCdFs", func_0025BE50);

void amCdFs_Init(s32 a0, s32 a1, s32 mode, s32 stream, s32 nreq, s32 ncache, s32 ndir, s32 *sizes) {
    CdInit host;
    CdInitDvd cd;
    s32 i;

    D_00470760 = mode;
    if (mode & 1) {
        func_00126B00(D_0046AFB0);
        func_001258F8(&host, 0, 0x10);
        host.name = D_0046AFC8;
        host.a = 0;
        func_0015DAE8(&host);
        if (!(mode & 6)) {
            func_001258F8(&D_0058D540, 0, 0x10);
            D_0058D540.a = stream;
            D_0058D540.b = 0x80;
            D_0058D540.c = 0x6F5;
            D_0058D540.buf = D_0058D580;
            func_0015DC00(&D_0058D540);
        }
    }
    if (mode & 6) {
        if (mode & 4) {
            func_00126B00(D_0046AFD0);
        } else {
            func_00126B00(D_0046AFF0);
        }
        func_001258F8(&cd, 0, 0x14);
        cd.name = D_0046AFC8;
        cd.a = 0;
        func_0015D720(&cd);
        func_001258F8(&D_0058D540, 0, 0x10);
        D_0058D540.a = stream;
        D_0058D540.b = 0x80;
        D_0058D540.c = 0x1568;
        D_0058D540.buf = D_0058D580;
        func_0015D850(&D_0058D540);
    }
    if (nreq <= 0) nreq = 1;
    D_00470768 = func_00124940(0x40, nreq * sizeof(CdReq));
    D_0047076C = func_00124940(0x40, nreq * sizeof(CdReq *));
    D_00470764 = nreq;
    if (ncache <= 0) ncache = 1;
    D_00470780 = func_00124940(0x40, ncache * sizeof(CdCache));
    D_00470784 = func_00124940(0x40, ncache * sizeof(CdCache *));
    D_0047077C = ncache;
    if (ndir <= 0) ndir = 1;
    D_00470794 = func_00124940(0x40, ndir * sizeof(CdDir));
    D_00470790 = ndir;
    for (i = 0; i < ndir; i++) {
        D_00470794[i].flags = 0;
        if (sizes[i] <= 0) sizes[i] = 1;
        D_00470794[i].buf = func_00124940(0x40, ((sizes[i] + 1) * 2 + 0x11A) & ~3);
        D_00470794[i].name[0] = 0;
        D_00470794[i].path[0] = 0;
    }
    func_00156210();
    amCdFs_Reset(0);
    D_00470798 = 0;
    func_001258F8(D_0058EAF0, 0, 0x100);
    func_001258F8(D_0058EBF0, 0, 0x100);
}

void amCdFs_Reset(s32 dirs) {
    CdReq *r;
    CdReq **f;
    s32 i;
    CdCache *c;
    CdCache **g;

    r = D_00470768;
    f = D_0047076C;
    for (i = 0; i < D_00470764; i++) {
        r->type = 0;
        r->own = 1;
        r->name[0] = 0;
        r->cache = 0;
        r->buf = 0;
        r->state = 0;
        r->next = 0;
        r->prev = 0;
        *f = r;
        r++;
        f++;
    }
    c = D_00470780;
    g = D_00470784;
    for (i = 0; i < D_0047077C; i++) {
        c->type = 0;
        c->own = 1;
        c->name[0] = 0;
        c->refs = -1;
        c->buf = 0;
        c->state = 0;
        *g = c;
        c++;
        g++;
    }
    D_00470750 = 0;
    D_00470770 = 0;
    D_00470754 = 0;
    D_00470758 = 0;
    gCdReqHead = 0;
    gCdReqTail = 0;
    D_00470788 = 0;
    D_0047075C = 0;
    if (dirs) {
        for (i = 0; i < D_00470790; i++) {
            D_00470794[i].flags = 0;
            D_00470794[i].name[0] = 0;
            D_00470794[i].path[0] = 0;
        }
    }
}

void amCdFs_SetHeap(u8 heap) {
    D_0047075C = heap;
}

CdReq *amCdFs_LoadDir(s32 dir, char *name, s32 pos) {
    CdReq *r;

    r = amCdFs_AllocReq();
    if (r == 0) return (CdReq *)-1;
    r->type = 1;
    r->own = 0;
    func_00128040(r->name, name, 0x39);
    func_00128040(D_00470794[dir].path, name, 0x39);
    r->cache = 0;
    r->id = dir;
    r->pos = pos;
    r->sectors = 0;
    r->buf = 0;
    r->state = 0;
    if (D_00470754 == 0) {
        r->next = 0;
        if (gCdReqTail) {
            r->prev = gCdReqTail;
            gCdReqTail->next = r;
        } else {
            r->prev = 0;
            gCdReqHead = r;
        }
        gCdReqTail = r;
    } else {
        r->prev = 0;
        r->next = gCdReqHead;
        if (gCdReqHead) {
            gCdReqHead->prev = r;
        } else {
            gCdReqTail = r;
        }
        gCdReqHead = r;
    }
    amCdFs_Start();
    return r;
}

CdReq *amCdFs_ReadFile(char *name, void *buf, s32 keep) {
    CdReq *r;

    r = amCdFs_AllocReq();
    if (r == 0) return (CdReq *)-1;
    r->type = 0;
    r->own = buf == 0;
    r->heap = D_0047075C;
    r->state = 0;
    func_00128040(r->name, name, 0x39);
    r->cache = keep ? (CdCache *)-1 : 0;
    r->id = -1;
    r->pos = 0;
    r->sectors = 0;
    r->buf = buf;
    r->next = 0;
    if (gCdReqTail) {
        r->prev = gCdReqTail;
        gCdReqTail->next = r;
    } else {
        r->prev = 0;
        gCdReqHead = r;
    }
    gCdReqTail = r;
    amCdFs_Start();
    return r;
}

CdReq *amCdFs_ReadFileId(s32 id, void *buf, s32 keep) {
    CdReq *r;

    r = amCdFs_AllocReq();
    if (r == 0) return (CdReq *)-1;
    r->type = 0;
    r->own = buf == 0;
    r->heap = D_0047075C;
    r->state = 0;
    func_00128040(r->name, D_00470794[id >> 16].path, 0x39);
    r->cache = keep ? (CdCache *)-1 : 0;
    r->id = id;
    r->pos = 0;
    r->sectors = 0;
    r->buf = buf;
    r->next = 0;
    if (gCdReqTail) {
        r->prev = gCdReqTail;
        gCdReqTail->next = r;
    } else {
        r->prev = 0;
        gCdReqHead = r;
    }
    gCdReqTail = r;
    amCdFs_Start();
    return r;
}

void amCdFs_CloseAll(s32 arg) {
    CdReq *r;
    s32 i;

    r = D_00470768;
    for (i = 0; i < D_00470764; i++, r++) {
        if (r->name[0]) amCdFs_Close(r, arg);
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/amCdFs", amCdFs_Close);

void amCdFs_ReleaseCache(CdCache *c) {
    c->refs--;
    if (c->refs <= 0) amCdFs_FreeCache(c);
}

void amCdFs_Start(void) {
    CdReq *r;
    CdDir *d;
    CdCache *c;
    s32 n;

    r = gCdReqHead;
    if (D_00470758) return;
    if (r == 0) return;
    if (r->state) return;
    if (D_00470760 & 6) {
        if (func_00118C08(1) == 1) return;
        if (func_00119420(1) == 6) return;
    }
    switch (r->type) {
    case 1:
        d = &D_00470794[r->id];
        if (!(d->flags & 1) || func_00127E88(d->name, r->name, 0x39) != 0) {
            func_00154710(r->id, r->name, 0, d->buf);
            func_00128040(d->name, r->name, 0x39);
            d->flags &= ~1;
            d->flags |= 2;
            r->state = 2;
            return;
        }
        r->state = 3;
        amCdFs_Unlink(r);
        if (r->pos) amCdFs_Close(r, 0);
        amCdFs_Start();
        return;
    case 0:
        if (r->cache) {
            c = amCdFs_FindCache(r);
            if (c) {
                c->refs++;
                r->cache = c;
                r->own = 0;
                r->size = c->size;
                r->sectors = c->sectors;
                r->pos = c->pos;
                r->buf = c->buf;
                r->state = c->state;
                amCdFs_Unlink(r);
                amCdFs_Start();
                return;
            }
            c = amCdFs_AllocCache();
            r->cache = c;
            c->type = r->type;
            c->own = 0;
            func_00128040(c->name, r->name, 0x39);
            c->refs = 1;
            c->id = *(u16 *)&r->id;
            c->buf = r->buf;
            c->state = r->state;
        }
        if (r->id == -1) {
            D_0047078C = func_00155118(r->name, 0);
        } else {
            D_0047078C = func_00155290(r->id >> 16, *(u16 *)&r->id);
        }
        if (D_0047078C == 0) {
            if (r->cache) {
                amCdFs_ReleaseCache(r->cache);
                r->cache = (CdCache *)-1;
            }
            D_00470758 = 1;
            return;
        }
        r->sectors = ADXF_GetFsizeSct(D_0047078C);
        r->size = r->sectors << 11;
        if (r->buf == 0) {
            r->buf = amHeap_Alloc(r->sectors << 11, r->heap, D_0046B050, 0x358);
            if (r->buf == 0) {
                func_001553A0(D_0047078C);
                if (r->cache) {
                    amCdFs_ReleaseCache(r->cache);
                    r->cache = (CdCache *)-1;
                }
                return;
            }
        }
        n = r->sectors;
        if (n > 256) n = 256;
        ADXF_ReadNw(D_0047078C, n, r->buf);
        r->state = 2;
        c = r->cache;
        if (r->cache) {
            c->buf = r->buf;
            c->state = r->state;
        }
    }
}

void amCdFs_Update(void) {
    s32 h;
    CdReq *r;
    s32 i;
    s32 n;
    CdDir *d;
    CdCache *c;
    s32 v;
    s32 cnt;
    s32 j;

    r = gCdReqHead;
    n = D_00470798;
    for (i = 0; n > 0; i++) {
        h = D_0058EAF0[i];
        if (h) {
            n--;
            if (func_00155FF8(h) == 0) {
                func_001553A0(h);
                D_0058EAF0[i] = 0;
                if (D_0058EBF0[i]) {
                    amHeap_Free(D_0058EBF0[i]);
                    D_0058EBF0[i] = 0;
                }
                D_00470798--;
            }
        }
    }
    switch (D_00470758) {
    case 0:
        break;
    case 1:
        if (func_00119988() == 1) {
            D_00470758 = 2;
        }
        return;
    case 2:
        v = func_00119988();
        if (v != 1 && v != -1 && v != 32) {
            D_00470758 = 3;
        }
        return;
    case 3:
        if (func_00119988() == 1) {
            D_00470758 = 2;
            return;
        }
        if (func_00119420(1) != 2) return;
        D_00470758 = 0;
        d = D_00470794;
        for (i = 0; i < D_00470790; i++) {
            if (d->flags & 2) {
                D_00470754 = 1;
                d->flags &= ~1;
                amCdFs_LoadDir(i, d->name, 1);
                D_00470754 = 0;
            }
        }
        break;
    }
    if (r == 0) return;
    if (r->state == 0) {
        amCdFs_Start();
        return;
    }
    if (r->state < 4) {
        c = r->cache;
        switch (r->type) {
        case 0:
            r->state = ADXF_GetStat(D_0047078C);
            if (c) c->state = r->state;
            break;
        case 1:
            r->state = func_00154B68(r->id);
            break;
        }
        switch (r->state) {
        case 3:
            switch (r->type) {
            case 0:
                r->pos += 0x80000;
                if (r->pos >= r->size) {
                    func_001553A0(D_0047078C);
                    amCdFs_Unlink(r);
                    if (c) {
                        c->own = r->own;
                        r->own = 0;
                        c->size = r->size;
                        c->sectors = r->sectors;
                        c->pos = r->pos;
                    }
                    amCdFs_Start();
                    return;
                }
                v = r->size - r->pos;
                if (v > 0x80000) {
                    cnt = 0x100;
                } else {
                    cnt = (v + 0x7FF) >> 11;
                }
                ADXF_ReadNw(D_0047078C, cnt, (char *)r->buf + r->pos);
                r->state = 2;
                return;
            case 1:
                D_00470794[r->id].flags &= ~2;
                D_00470794[r->id].flags |= 1;
                amCdFs_Unlink(r);
                if (r->pos) amCdFs_Close(r, 0);
                amCdFs_Start();
                return;
            }
            break;
        case 1:
        case 2:
            break;
        case 4:
        default:
            if (r->type == 0) {
                ADXF_StopNw(D_0047078C);
                if (D_00470798 >= 64) {
                    func_00126B00(D_0046B010);
                    while (1) {
                    }
                }
                D_00470798++;
                for (j = 0;; j++) {
                    if (D_0058EAF0[j] == 0) {
                        D_0058EAF0[j] = D_0047078C;
                        if (r->own) {
                            D_0058EBF0[j] = r->buf;
                            r->buf = 0;
                        }
                        break;
                    }
                }
            }
            if ((s32)c > 0) {
                amCdFs_ReleaseCache(c);
                r->cache = (CdCache *)-1;
            }
            if (r->own && r->buf) {
                amHeap_Free(r->buf);
                r->buf = 0;
            }
            r->state = 0;
            D_00470758 = 1;
        }
    }
}

void amCdFs_Main(void) {
    func_00157FF0();
    amCdFs_Update();
}

CdReq *amCdFs_AllocReq(void) {
    if (D_00470770 >= D_00470764) return 0;
    return D_0047076C[D_00470770++];
}

void amCdFs_FreeReq(CdReq *r) {
    if (r->own && r->buf) {
        amHeap_Free(r->buf);
    }
    r->own = 1;
    r->name[0] = 0;
    r->cache = 0;
    r->sectors = 0;
    r->buf = 0;
    r->state = 0;
    r->prev = 0;
    r->next = 0;
    D_0047076C[--D_00470770] = r;
}

void amCdFs_Unlink(CdReq *r) {
    if (r->next) {
        r->next->prev = r->prev;
    } else {
        gCdReqTail = r->prev;
    }
    if (r->prev) {
        r->prev->next = r->next;
    } else {
        gCdReqHead = r->next;
    }
    r->prev = 0;
    r->next = 0;
}

CdCache *amCdFs_AllocCache(void) {
    if (D_00470788 >= D_0047077C) return 0;
    return D_00470784[D_00470788++];
}

void amCdFs_FreeCache(CdCache *c) {
    if (c->own && c->buf) {
        amHeap_Free(c->buf);
    }
    c->name[0] = 0;
    c->refs = -1;
    c->buf = 0;
    c->state = 0;
    D_00470784[--D_00470788] = c;
}

CdCache *amCdFs_FindCache(CdReq *r) {
    s32 i;
    s32 id;
    CdCache *c;

    id = *(u16 *)&r->id;
    i = 0;
    for (c = D_00470780; i < D_0047077C; i++, c++) {
        if (c->id == id && func_00127E88(c->name, r->name, 0x39) == 0) return c;
    }
    return 0;
}

s32 amCdFs_CheckDir(s32 dir, char *name) {
    CdDir *d = &D_00470794[dir];

    if (name == 0) name = d->path;
    if (func_00127E88(d->name, name, 0x39)) return -2;
    return -((d->flags & 2) != 0);
}
