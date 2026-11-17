#include "common.h"

/* Motion binding (0x141280-0x1414C0): a set of up to 16 motions mapped onto a skeleton by bone name. */
typedef struct Skel { char pad[0x10]; s32 n; char pad2[0x24 - 0x14]; char *bones; } Skel;
typedef struct Pose { s32 pad0; s32 n; struct { s32 key; s32 pad; } e[1]; } Pose;
typedef struct Key { char pad[0xC]; struct { s16 t; s16 v; } k[1]; } Key;
typedef struct Track { char pad[0xC]; Key **keys; } Track;
typedef struct Mot { char pad[0x14]; Track *tracks; s32 n; char *bones; } Mot;
typedef struct MotSet {
    union { Skel **skel; Pose *pose; } u;
    Mot *mot[16];
    s16 map[16][256];
} MotSet;

extern void memset(void *, s32, s32);
extern s32 amMotion_MatchName(char *, char *);
extern s32 amMotion_FindKey4(Key *, f32);

/* Movies (Sofdec, MWSFD): one player; the code from 0x142490 on is the only code that names amSofdec.c. */
typedef struct MwPly MwPly;
typedef struct MwPlyVtbl {
    void *f[5];
    void (*destroy)(MwPly *);           /* 0x14 */
    void (*start_fname)(MwPly *, char *); /* 0x18 */
    void (*stop)(MwPly *);              /* 0x1C */
    s32 (*get_stat)(MwPly *);           /* 0x20 */
} MwPlyVtbl;
struct MwPly { MwPlyVtbl *vtbl; };

typedef struct SfdFrm { void *buf; } SfdFrm;

typedef struct Movie {
    MwPly *ply;
    void *work;
    void *buf;
    s32 unkC;
    s32 unk10;
    s8 flags;
    s8 own_buf;
    s32 file;      /* 0x18: AFS file (high 16 bits: partition, low: file), -1: by name */
    s32 loops;     /* 0x1C */
    s32 width;     /* 0x20 */
    s32 height;    /* 0x24 */
    char pad28[8];
    s64 unk30;
    SfdFrm frm;    /* 0x38 */
    char pad3C[0x84 - 0x3C];
    char fname[0x108 - 0x84];
} Movie;

typedef struct MovieParam {
    s32 unk0, unk4, unk8, unkC, unk10, unk14;
    void *buf;
    s32 unk1C;
    u16 unk20;
} MovieParam;

typedef struct SfdCprm {
    s32 unk0, unk4, unk8, unkC, unk10, unk14;
    void *work;
    s32 worksize;
    s32 unk20;
    char pad[0x30 - 0x24];
} SfdCprm;

typedef struct SfdFx { f32 fps; s32 unk4; s32 unk8; s32 unkC; char pad[0x10]; } SfdFx;

extern Movie gSofdecMovie[1];
extern s8 gSofdecFree[1];
extern s32 gSofdecFreeCount;
extern s8 D_004703F4;
extern s8 D_00470208;
extern char D_0045F570[];
extern void func_00181FD0(SfdFx *);
extern void func_00182330(void);
extern void amHeap_Free(void *);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void mwPlyGetCurFrm(MwPly *, SfdFrm *);
extern void mwPlyRelCurFrm(MwPly *);
extern void mwPlyStartAfs(MwPly *, s32, s32);
extern s32 mwPlyCalcWorkCprmSfd(SfdCprm *);
extern MwPly *func_00180290(SfdCprm *);
extern void func_0012F040(void *, void *, s32);
void amSofdec_DestroyAll(void);



void amMotSet_Init(MotSet *s, Skel **skel) {
    memset(s, 0, sizeof(MotSet));
    s->u.skel = skel;
}


void amMotSet_Bind(MotSet *s, s32 idx, Mot *m) {
    s16 *map;
    Skel *sk;
    s32 i;
    s32 j;
    s32 r;

    s->mot[idx] = m;
    map = s->map[idx];
    sk = *s->u.skel;
    for (i = 0; i < sk->n; i++) {
        r = 0;
        for (j = 0; j < m->n && r == 0; j++) {
            r = amMotion_MatchName(sk->bones + i * 32, m->bones + j * 32);
        }
        map[i] = r ? j - 1 : -1;
    }
}


void amMotSet_Apply(MotSet *s, s32 packed, f32 t) {
    s32 k;
    s32 idx;
    s16 *map;
    Pose *p;
    Mot *m;
    s32 i;
    s32 b;
    Key *key;

    k = packed & 0xFFFF;
    idx = (packed >> 16) - 1;
    map = s->map[idx];
    p = s->u.pose;
    m = s->mot[idx];
    for (i = 0; i < p->n; i++) {
        b = map[i];
        if (b >= 0) {
            key = m->tracks[k].keys[b];
            p->e[i].key = key->k[amMotion_FindKey4(key, t)].v;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_001414D0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_001415F0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_001416A0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141920);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141C30);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141C80);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141CF0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141E70);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142080);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142100);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142120);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142280);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142370);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142390);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_001423F0);

void amSofdec_Init(void) {
    SfdFx fx;
    s32 i;

    memset(&fx, 0, sizeof(SfdFx));
    if (D_004703F4 != 3) {
        fx.fps = 59.94f;
    } else {
        fx.fps = 50.0f;
    }
    fx.unk4 = 1;
    fx.unk8 = 1;
    fx.unkC = 0;
    func_00181FD0(&fx);
    for (i = 0; i < 1; i++) {
        gSofdecMovie[i].ply = 0;
        gSofdecFree[i] = i;
    }
    gSofdecFreeCount = 1;
}


void amSofdec_Exit(void) {
    amSofdec_DestroyAll();
    func_00182330();
}


void amSofdec_DestroyAll(void) {
    s32 i;
    Movie *m;

    for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
        if (m->ply) {
            m->ply->vtbl->stop(m->ply);
            m->ply->vtbl->destroy(m->ply);
            amHeap_Free(m->work);
            if (m->buf && m->own_buf) {
                amHeap_Free(m->buf);
            }
            m->ply = 0;
        }
        gSofdecFree[i] = i;
    }
    gSofdecFreeCount = 1;
}


void amSofdec_Update(void) {
    s32 i;
    Movie *m;

    for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
        if (m->ply) {
            if (m->buf) {
                mwPlyGetCurFrm(m->ply, &m->frm);
                if (m->frm.buf) {
                    func_0012F040(m->buf, m->frm.buf, (m->width * m->height * 4) >> 4);
                    mwPlyRelCurFrm(m->ply);
                    m->flags |= 2;
                }
            }
            if (m->ply->vtbl->get_stat(m->ply) == 3 && m->loops) {
                if (m->file == -1) {
                    m->ply->vtbl->start_fname(m->ply, m->fname);
                } else {
                    mwPlyStartAfs(m->ply, m->file >> 16, (u16)m->file);
                }
                if (m->loops != -1) {
                    m->loops--;
                }
            }
        }
    }
}


s32 amSofdec_Create(MovieParam *p) {
    Movie *m;
    s32 id;
    SfdCprm c;

    if (gSofdecFreeCount <= 0) return -1;
    id = gSofdecFree[--gSofdecFreeCount];
    m = &gSofdecMovie[id];
    memset(&c, 0, sizeof(SfdCprm));
    c.unk20 = p->unk0;
    c.unk0 = p->unk4;
    c.unk4 = p->unk8;
    c.unk8 = p->unkC;
    c.unkC = p->unk10;
    c.unk10 = p->unk14;
    c.unk14 = D_00470208;
    c.worksize = mwPlyCalcWorkCprmSfd(&c);
    c.work = amHeap_Alloc(c.worksize, 0, D_0045F570, 187);
    m->ply = func_00180290(&c);
    if (m->ply == 0) {
        amHeap_Free(c.work);
        gSofdecFree[gSofdecFreeCount] = id;
        gSofdecFreeCount++;
        return -2;
    }
    m->work = c.work;
    m->buf = p->buf;
    if ((s32)m->buf == -1) {
        m->buf = amHeap_Alloc(p->unkC * p->unk10 * 4, 0, D_0045F570, 200);
        m->own_buf = 1;
    } else {
        m->own_buf = 0;
    }
    m->unkC = p->unk1C;
    m->flags = 0;
    m->unk10 = p->unk20;
    m->unk30 = 0;
    m->fname[0] = 0;
    m->file = -1;
    return id;
}


void amSofdec_Destroy(s32 id) {
    Movie *m;

    if (id == -1) {
        amSofdec_DestroyAll();
        return;
    }
    m = &gSofdecMovie[id];
    if (m->ply) {
        m->ply->vtbl->stop(m->ply);
        m->ply->vtbl->destroy(m->ply);
        amHeap_Free(m->work);
        if (m->buf && m->own_buf) {
            amHeap_Free(m->buf);
        }
        m->ply = 0;
        gSofdecFree[gSofdecFreeCount] = id;
        gSofdecFreeCount++;
    }
}

