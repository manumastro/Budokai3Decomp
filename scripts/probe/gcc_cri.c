/* gcc probe, CRI ADX and Sofdec: library functions written as C, compiled with every ee-gcc build by scripts/gccmatch.py.
 *     .venv/bin/python scripts/gccmatch.py scripts/probe/gcc_cri.c
 * Strings are the originals, declared extern (no data in C). */

typedef struct ADXT {
    signed char used;
    signed char stat;
    short unk2;
    void *sjd;
} ADXT;

extern char D_004619B8[]; /* "E02080819 ADXT_GetSfreq: parameter error" */
void func_00154120(char *msg);  /* ADXERR_CallErrFunc1 (T3's name) */
int func_00159DB0(void *sjd);   /* ADXSJD_GetSfreq */

/* The same function as Tenkaichi 3's adxt_GetSfreq (src/cri/adxt.c there), which matches with ee-gcc 2.96 -G0. */
int ADXT_GetSfreq(ADXT *adxt) {
    if (adxt == 0) {
        func_00154120(D_004619B8);
        return -1;
    }
    if (adxt->stat >= 2) {
        return func_00159DB0(adxt->sjd);
    }
    return 0;
}

/* ADXF (ADX file system): the handle's fields used here. */
typedef struct ADXF_OBJ {
    signed char used;
    signed char stat; /* 2: reading */
    short unk2;
    int unk4;
    int unk8;
    int fsize;        /* 0x0C: file size in sectors */
    int unk10;
    int ofst;         /* 0x14: read position in sectors */
} ADXF_OBJ, *ADXF;

extern char D_00460558[], D_00460590[]; /* "E9040801:partition ID is range outside.(adxf_ChkPrmPt)", ... */

/* ADXF: checks a partition ID and its info pointer. Compiled at -O3, 2.96 inlines this function into a caller later
 * in the same file (func_001548B0 calls it with jal in the original): one sign that ADXF was built at -O2. */
int adxf_ChkPrmPt(unsigned int ptid, void *ptinfo) {
    if (ptid >= 0x100) {
        func_00154120(D_00460558);
        return -3;
    }
    if (ptinfo == 0) {
        func_00154120(D_00460590);
        return -3;
    }
    return 0;
}

extern char D_00460A30[], D_00460A58[]; /* "E... ADXF_Seek: parameter error" (handle, type) */
void func_00154548(int fn, int stage, ...); /* ADXF call trace (enter 0, leave 1) */
void ADXF_Stop(ADXF adxf);

int ADXF_Seek(ADXF adxf, int pos, int type) {
    func_00154548(6, 0, adxf, pos, type);
    if (adxf == 0) {
        func_00154120(D_00460A30);
        return -3;
    }
    if (adxf->stat == 2)
        ADXF_Stop(adxf);
    if (type == 0) {
        adxf->ofst = pos;
    } else if (type == 1) {
        adxf->ofst = adxf->ofst + pos;
    } else if (type == 2) {
        adxf->ofst = adxf->fsize + pos;
    } else {
        func_00154120(D_00460A58);
        return -3;
    }
    if (adxf->ofst < 0)
        adxf->ofst = 0;
    else if (adxf->ofst > adxf->fsize)
        adxf->ofst = adxf->fsize;
    func_00154548(6, 1, adxf, pos, type);
    return adxf->ofst;
}

/* MWSFD (Sofdec): the player handle's fields used here. */
typedef struct MWPLY_OBJ {
    char pad0[0xC];
    int unkC;
    char pad10[0x30];
    void *sfd;        /* 0x40: the SFD handle */
    char pad44[0x32];
    signed char pause; /* 0x76 */
    char pad77[0x294 - 0x77];
    char x294[4];
} MWPLY_OBJ, *MWPLY;

extern char D_00466038[], D_00466060[], D_00466088[], D_00466090[];
int func_00183B38(MWPLY ply);
void func_001870E8(const char *fmt, ...);
int func_001822A8(void);
int func_00199940(void *sfd, int id, int *out);
void func_00187E18(MWPLY ply);
int func_00196350(void *sfd, int sw);
void func_00182420(int err);
void func_00186A10(void *p, int sw);

/* Near miss: 4 of 71 differ with 2.96 -O2 (v0 / v1 swapped around the ON / OFF argument); the rest matches. */
void mwSfdPause(MWPLY ply, int sw) {
    void *sfd;
    int v;
    if (func_00183B38(ply) == 0) {
        func_001870E8(D_00466038);
        return;
    }
    sfd = ply->sfd;
    if (ply->pause == 0 && sw == 0)
        return;
    if (func_001822A8() == 1 && ply->unkC == 1) {
        if (func_00199940(sfd, 6, &v) == 0) {
            if (v == 1)
                func_00187E18(ply);
        } else {
            func_00187E18(ply);
        }
    }
    if (func_00196350(sfd, sw) != 0) {
        func_00182420(-0x136);
        func_001870E8(D_00466060, sw == 1 ? D_00466088 : D_00466090);
    }
    func_00186A10(ply->x294, sw);
    ply->pause = sw;
}

extern char D_00466400[], D_00466430[];

/* Sofdec: the play mode the SFD handle is set to (0 to 2), -1 with a message for anything else. */
int mwPlyGetSyncMode(MWPLY ply) {
    int v;
    int mode;
    if (func_00183B38(ply) == 0) {
        func_001870E8(D_00466400);
        return -1;
    }
    func_00199940(ply->sfd, 0xF, &v);
    switch (v) {
    case 0:
        mode = 0;
        break;
    case 1:
        mode = 1;
        break;
    case 2:
        mode = 2;
        break;
    default:
        func_001870E8(D_00466430);
        mode = -1;
        break;
    }
    return mode;
}
