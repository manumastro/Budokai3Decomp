#include "common.h"

/* Movies, continued (the same player table as amSofdec.c). */
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
extern void memset(void *, s32, s32);
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
extern void func_00127A88(char *, char *);

/* The sound driver on the IOP (AMSOUND), called through SIF RPC. */
typedef struct SifClient { char pad[0x24]; s32 serve; } SifClient;
extern SifClient gSoundRpc;
extern s32 D_0047E3E4[];
extern char D_0045F580[], D_0045F5A0[];
extern char D_0047E1C0[];
extern s32 gSoundState;
extern void *gSoundSendBuf;
extern s32 sceSifBindRpc(SifClient *, s32, s32);
extern s32 sceSifCallRpc(SifClient *, s32, s32, void *, s32, void *, s32, void *, void *);
extern void func_00126B00(char *, ...);
extern void func_00117C10(void);

extern s32 func_0010E3A8(SifClient *);
extern void func_00125740(void *, void *, s32);
extern s32 gSoundRecvBuf[];
extern s32 D_0047E3F0[], D_0047E3F4[], D_0047E3F8[], D_0047E3FC[];
extern s32 D_0047E410[], D_0047E414[], D_0047E418[], D_0047E41C[], D_0047E420[], D_0047E424[];
typedef struct Vec2 { float x, y; } Vec2;
extern Vec2 D_0047E428[];
extern s32 D_0047032C, D_00470330, D_00470334, D_00470338, D_00470324, D_00470348, D_0047034C;

typedef struct SndParam { s32 a, b, c, d; } SndParam;
typedef struct SndParam2 { s32 a, b, c, d, e, f; Vec2 v; } SndParam2;

extern s32 D_0047E400[], D_0047E404[], D_0047E408[], D_0047E40C[];

typedef struct SndReq22 { s32 a; s32 b; short c; short d; s32 e; s32 f; short g; short h; } SndReq22;


s32 amSofdec_StartFname(s32 id, char *fname, s32 loops) {
    Movie *m = &gSofdecMovie[id];
    if (m->ply == 0) return -1;
    m->ply->vtbl->start_fname(m->ply, fname);
    func_00127A88(m->fname, fname);
    m->file = -1;
    if (loops != -1) {
        m->loops = loops - 1;
    } else {
        m->loops = -1;
    }
    return 0;
}


s32 amSofdec_StartAfs(s32 id, s32 file, s32 loops) {
    Movie *m = &gSofdecMovie[id];
    if (m->ply == 0) return -1;
    mwPlyStartAfs(m->ply, file >> 16, file & 0xFFFF);
    m->fname[0] = 0;
    m->file = file;
    if (loops != -1) {
        m->loops = loops - 1;
    } else {
        m->loops = -1;
    }
    return 0;
}


void amSofdec_Stop(s32 id) {
    s32 i;
    Movie *m;
    if (id != -1) {
        m = &gSofdecMovie[id];
        if (m->ply) {
            m->ply->vtbl->stop(m->ply);
        }
    } else {
        for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
            if (m->ply) {
                m->ply->vtbl->stop(m->ply);
            }
        }
    }
}


s32 amSofdec_GetStat(s32 id) {
    Movie *m = &gSofdecMovie[id];
    if (m->ply == 0) return -1;
    return m->ply->vtbl->get_stat(m->ply);
}


s32 amSofdec_IsStopped(s32 id) {
    Movie *m;
    s32 i;
    s32 st;
    if (id != -1) {
        m = &gSofdecMovie[id];
        if (m->ply == 0) return 1;
        st = m->ply->vtbl->get_stat(m->ply);
        if (st != 0 && st != 3) return 0;
    } else {
        for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
            if (m->ply) {
                st = m->ply->vtbl->get_stat(m->ply);
                if (st != 0 && st != 3) return 0;
            }
        }
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_142AA0", amSofdec_Draw);

void amSound_Init(void) {
    if (sceSifBindRpc(&gSoundRpc, 0x11, 0) < 0) {
        func_00126B00(D_0045F580);
        while (1) {}
    }
    if (D_0047E3E4[0] == 0) {
        func_00126B00(D_0045F580);
        while (1) {}
    }
    if (sceSifCallRpc(&gSoundRpc, 1, 0, 0, 0, 0, 0, 0, 0) < 0) {
        func_00126B00(D_0045F5A0);
        while (1) {}
    }
    func_00117C10();
    gSoundState = 0;
    gSoundSendBuf = (void *)((u32)D_0047E1C0 | 0x20000000);
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_142AA0", func_001433F0);

s32 amSound_Command(void *data) {
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, data, 0x40);
    return -(sceSifCallRpc(&gSoundRpc, 3, 3, gSoundSendBuf, 0x40, 0, 0, 0, 0) < 0);
}


s32 amSound_LoadBank(SndParam *p) {
    if (gSoundState != 0) return -2;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, p, 0x10);
    if (sceSifCallRpc(&gSoundRpc, 4, 0, gSoundSendBuf, 0x10, gSoundRecvBuf, 0x10, 0, 0) < 0) return -1;
    if (gSoundRecvBuf[0] == -1) return -2;
    p->d = gSoundRecvBuf[0];
    D_0047E3F0[0] = p->a;
    D_0047E3F4[0] = p->b;
    D_0047E3F8[0] = p->c;
    D_0047E3FC[0] = p->d;
    gSoundState = 1;
    D_0047032C = 0;
    D_00470334 = p->c;
    D_00470338 = p->d;
    D_00470330 = p->b;
    D_00470324 = 0;
    return 0;
}


s32 amSound_LoadStream(SndParam2 *p) {
    s32 *r;
    if (gSoundState != 0) return -2;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, p, 0x10);
    if (sceSifCallRpc(&gSoundRpc, 0x17, 0, gSoundSendBuf, 0x10, gSoundRecvBuf, 0x10, 0, 0) < 0) return -1;
    if (gSoundRecvBuf[0] == -1) return -2;
    r = gSoundRecvBuf;
    p->f = r[0];
    D_00470348 = r[1];
    D_0047034C = r[2];
    D_0047E410[0] = p->a;
    D_0047E414[0] = p->b;
    D_0047E418[0] = p->c;
    D_0047E41C[0] = p->d;
    D_0047E420[0] = p->e;
    D_0047E424[0] = p->f;
    D_0047E428[0] = p->v;
    gSoundState = 3;
    D_0047032C = 0;
    D_00470334 = p->d;
    D_00470338 = p->f;
    D_00470330 = p->b;
    return 0;
}


s32 func_00143B50(s32 a, s32 b) {
    s32 *buf = gSoundSendBuf;
    if (b == a) return 0;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf[0] = b;
    buf[1] = a;
    return -(sceSifCallRpc(&gSoundRpc, 0x1B, 3, gSoundSendBuf, 0x10, 0, 0, 0, 0) < 0);
}


s32 amSound_LoadBank2(SndParam *p) {
    if (gSoundState != 0) return -2;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, p, 0x10);
    if (sceSifCallRpc(&gSoundRpc, 0x11, 0, gSoundSendBuf, 0x10, gSoundRecvBuf, 0x10, 0, 0) < 0) return -1;
    if (gSoundRecvBuf[0] == -1) return -2;
    p->d = gSoundRecvBuf[0];
    D_0047E400[0] = p->a;
    D_0047E404[0] = p->b;
    D_0047E408[0] = p->c;
    D_0047E40C[0] = p->d;
    gSoundState = 1;
    D_0047032C = 0;
    D_00470334 = p->c;
    D_00470338 = p->d;
    D_00470330 = p->b;
    D_00470324 = 1;
    return 0;
}


s32 func_00143D60(s32 a, s32 b, s32 c, s32 *out) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    if (sceSifCallRpc(&gSoundRpc, 7, out ? 0 : 3, gSoundSendBuf, 0x10, gSoundRecvBuf, 4, 0, 0) < 0) return -1;
    if (out) {
        if (gSoundRecvBuf[0] == -1) return -2;
        *out = gSoundRecvBuf[0];
    }
    return 0;
}


s32 func_00143E70(s32 a, s32 b, s32 c) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    return -(sceSifCallRpc(&gSoundRpc, 8, 3, gSoundSendBuf, 0x10, 0, 0, 0, 0) < 0);
}


s32 func_00143F20(s32 a, s32 b, float vol) {
    unsigned short v;
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    switch (b) {
    case 0:
        v = (u32)(127.0f * vol);
        break;
    }
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = v;
    if (sceSifCallRpc(&gSoundRpc, 9, 3, gSoundSendBuf, 0x10, 0, 0, 0, 0) < 0) return -1;
    return 0;
}


s32 func_00144050(s32 a, s32 b, s32 c, s32 d, float vol, float pan, float pitch) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    buf[3] = d;
    buf[4] = 127.0f * vol;
    buf[5] = (s32)(63.0f * pan) + 64;
    if (pitch <= 0.0f) {
        buf[6] = -1;
    } else {
        buf[6] = 4096.0f * pitch / 48000.0f;
    }
    if (sceSifCallRpc(&gSoundRpc, 0xF, 3, gSoundSendBuf, 0x20, 0, 0, 0, 0) < 0) return -1;
    return 0;
}


s32 func_001441F0(SndParam *p, float vol, float pan, float pitch) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = p->a;
    buf[1] = p->b;
    buf[2] = p->c;
    buf[3] = p->d;
    buf[4] = 127.0f * vol;
    buf[5] = (s32)(63.0f * pan) + 64;
    if (pitch <= 0.0f) {
        buf[6] = -1;
    } else {
        buf[6] = 4096.0f * pitch / 48000.0f;
    }
    if (sceSifCallRpc(&gSoundRpc, 0xF, 3, gSoundSendBuf, 0x20, 0, 0, 0, 0) < 0) return -1;
    return 0;
}


s32 func_00144370(s32 a, s32 b, s32 c, s32 d) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    buf[3] = d;
    buf[4] = 0;
    return -(sceSifCallRpc(&gSoundRpc, 0xF, 3, gSoundSendBuf, 0x20, 0, 0, 0, 0) < 0);
}


s32 func_00144430(SndParam *p) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = p->a;
    buf[1] = p->b;
    buf[2] = p->c;
    buf[3] = p->d;
    buf[4] = 0;
    return -(sceSifCallRpc(&gSoundRpc, 0xF, 3, gSoundSendBuf, 0x20, 0, 0, 0, 0) < 0);
}


s32 func_001444E0(SndParam *p, s32 e, float vol) {
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf[0] = p->a;
    buf[1] = p->b;
    buf[2] = p->c;
    buf[3] = p->d;
    buf[4] = e;
    buf[5] = 128.0f * vol;
    return -(sceSifCallRpc(&gSoundRpc, 0x23, 3, gSoundSendBuf, 0x20, 0, 0, 0, 0) < 0);
}


s32 func_001445C0(s32 x) {
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, &x, 4);
    return -(sceSifCallRpc(&gSoundRpc, 0x13, 3, gSoundSendBuf, 4, 0, 0, 0, 0) < 0);
}


s32 func_00144650(s32 x) {
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, &x, 4);
    return -(sceSifCallRpc(&gSoundRpc, 0x14, 3, gSoundSendBuf, 4, 0, 0, 0, 0) < 0);
}


s32 func_001446E0(s32 x) {
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, &x, 4);
    return -(sceSifCallRpc(&gSoundRpc, 0x1C, 3, gSoundSendBuf, 4, 0, 0, 0, 0) < 0);
}


s32 func_00144770(s32 mode, float vol) {
    unsigned short v;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    switch (mode) {
    case 0:
        v = (unsigned short)(u32)(16383.0f * vol) & 0x7FFF;
        v |= (unsigned short)((unsigned short)mode << 12);
        break;
    case 10:
        v = (unsigned short)(u32)(16383.0f * vol) & 0x7FFF;
        if (v > 0x7F) {
            v = 0x7F;
        } else if (v == 0) {
            v++;
        }
        v = (unsigned short)(~v + 1) & 0xFF;
        v |= (unsigned short)((unsigned short)mode << 12);
        break;
    case 8:
        v = (unsigned short)(u32)(16383.0f * vol) & 0x7FFF;
        if (v > 0x7F) {
            v = 0x7F;
        } else if (v == 0) {
            v++;
        }
        v |= (unsigned short)((unsigned short)mode << 12);
        break;
    }
    func_00125740(gSoundSendBuf, &v, 2);
    return -(sceSifCallRpc(&gSoundRpc, 0x1D, 3, gSoundSendBuf, 4, 0, 0, 0, 0) < 0);
}


s32 func_00144A40(s32 a, s32 b, float vol) {
    unsigned short v;
    s32 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    switch (b) {
    case 0:
        v = (u32)(256.0f * vol);
        break;
    }
    buf = gSoundSendBuf;
    buf[0] = a;
    buf[1] = b;
    buf[2] = v;
    if (sceSifCallRpc(&gSoundRpc, 0x1F, 3, gSoundSendBuf, 0x10, 0, 0, 0, 0) < 0) return -1;
    return 0;
}


s32 func_00144B70(s32 x) {
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    func_00125740(gSoundSendBuf, &x, 4);
    return -(sceSifCallRpc(&gSoundRpc, 0x21, 3, gSoundSendBuf, 4, 0, 0, 0, 0) < 0);
}


s32 func_00144C00(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    SndReq22 *buf;
    while (func_0010E3A8(&gSoundRpc) != 0) {}
    buf = gSoundSendBuf;
    buf->a = a;
    buf->b = b;
    buf->c = c;
    buf->d = d;
    buf->e = e;
    buf->f = f;
    buf->g = c;
    buf->h = d;
    return -(sceSifCallRpc(&gSoundRpc, 0x22, 3, gSoundSendBuf, 0x18, 0, 0, 0, 0) < 0);
}

