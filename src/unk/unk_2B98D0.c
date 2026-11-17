#include "common.h"

/* An actor of this file: its task function at 0x1C. */
typedef struct Ac98D {
    char pad0[0x1C];
    void *f1C;
} Ac98D;

extern s16 func_002F5480(void);
extern void func_002F55E0(void);
extern void func_002BB650(void);

/* A 16-byte vector (one quadword). */
typedef struct V16 {
    s32 v[4];
} __attribute__((aligned(16))) V16;

extern V16 D_00455EC0;
extern V16 D_00455E00;
extern V16 D_00455DC0;
extern void func_0028EE90();
extern void func_002BBCB0(void);
extern void StrBg_SetPos(void *, f32, f32);

/* The work of this file: two handles (0xA8, 0x1C0) and the state the functions reset. */
typedef struct W98D {
    char pad0[0x9C];
    void *f9C;
    char pad0A0[0xA8 - 0xA0];
    void *fA8;
    char padAC[0xB0 - 0xAC];
    void *fB0;
    char padB4[0xBC - 0xB4];
    void *fBC;
    void *fC0;
    char padC4[0x1BC - 0xC4];
    void *f1BC;
    void *f1C0;
    char pad1C4[0x1CC - 0x1C4];
    void *f1CC;
    char pad1D0[0x1D4 - 0x1D0];
    void *f1D4;
    char pad1D8[0x274 - 0x1D8];
    s32 f274;
    s32 f278;
    s32 f27C;
    char pad280[0x404 - 0x280];
    s32 f404;
    s32 f408;
    s32 f40C;
} W98D;

extern W98D *gStrStatus;
extern s32 func_0022BF80(void *);
extern void func_0022D0E0(void *, s32);
extern void amTask_Kill(void *);
extern void func_002BC250(void);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern V16 D_00455D90;
extern s8 D_004B4B63[];
extern u8 D_00492FCE[];
extern void Help_Open(s64, s32);
extern void StrStatus_Dispatch(s32 *);
extern void func_002BCAE0(void);
extern void func_002BAFA0(void *);
extern void func_002BC7E0(void);
extern void func_002BC090(void);
extern V16 D_00456000;
extern char D_0046EE00[];
extern void *func_0022D670(f32, s32);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern V16 D_00455DD0;
extern V16 D_00455DF0;
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(f32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);

/* A 24-byte constant (one quadword and one doubleword). */
typedef struct T24 {
    s32 v[4];
    s32 w[2];
} T24;
extern V16 D_00455DA0;

INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B98D0);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *handle);

void func_002B9C10(void) {
    s32 i;
    s32 off;
    s32 o;
    s32 j;

    for (i = 0, off = 0; i < 0x45; i++, off += 4) {
        if (*(void **)((char *)gStrStatus + off + 0x38) != NULL) {
            amTask_Kill(*(void **)((char *)gStrStatus + off + 0x38));
            *(void **)((char *)gStrStatus + off + 0x38) = NULL;
        }
    }
    for (j = 0, o = 0; j < 7; j++, o += 4) {
        if (*(void **)((char *)gStrStatus + o) != NULL) {
            amCdFs_Close(*(void **)((char *)gStrStatus + o), 0);
            *(void **)((char *)gStrStatus + o) = NULL;
        }
        if (*(void **)((char *)gStrStatus + o + 0x1C) != NULL) {
            amCdFs_ReleaseCache(*(void **)((char *)gStrStatus + o + 0x1C));
            *(void **)((char *)gStrStatus + o + 0x1C) = NULL;
        }
    }
    for (off = 0, i = 0; off < 0x3C; off++, i += 4) {
        if (*(void **)((char *)gStrStatus + i + 0x168) != NULL) {
            func_0022D0E0(*(void **)((char *)gStrStatus + i + 0x168), 1);
            *(void **)((char *)gStrStatus + i + 0x168) = NULL;
        }
    }
    gStrStatus->f27C = 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002B9D30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BA610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAC80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAFA0);
void func_002BB100(void) {
    V16 tmp = D_00455EC0;

    func_00139620(0x900, &tmp, -1, 0x44, 0, 600.0f);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB490);
void func_002BB5F0(Ac98D *s) {
    if (func_002F5480() == 4) {
        func_002F55E0();
        s->f1C = (func_002BB650 == NULL) ? NULL : (void *)func_002BB650;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB650);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BBA30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BBCB0);
void func_002BC000(Ac98D *s) {
    V16 tmp = D_00455E00;
    W98D *w;

    if (func_0022BF80(gStrStatus->f1C0) == 0xFF) {
        w = gStrStatus;
        func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
        gStrStatus->f40C = 0;
        s->f1C = (func_002BBCB0 == NULL) ? NULL : (void *)func_002BBCB0;
    }
}
/* differs: the handle reset and the task store are scheduled in the other order (9 of 36) */
#if 0
void func_002BC090(Ac98D *s) {
    W98D *w;
    void *t;

    if (func_0022BF80(gStrStatus->f1C0) == 0xFF) {
        if (gStrStatus->f1C0 != NULL) {
            func_0022D0E0(gStrStatus->f1C0, 1);
            gStrStatus->f1C0 = NULL;
        }
        if (gStrStatus->fA8 != NULL) {
            amTask_Kill(gStrStatus->fA8);
        }
        w = gStrStatus;
        t = (func_002BC250 == NULL) ? NULL : (void *)func_002BC250;
        w->fA8 = NULL;
        s->f1C = t;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC090);
void func_002BC120(Ac98D *s) {
    V16 tmp = D_00455DF0;
    W98D *w;
    s32 idx;
    u16 flags;

    if (func_0022BF80(gStrStatus->f1C0) == 0xFF) {
        idx = D_004B4B63[0];
        flags = *(u16 *)(D_00492FCE + idx * 184);
        if (flags & 1) {
            Help_Open(0x0010000000000000LL, (u8)(1 << idx));
        } else if (flags & 0x5000) {
            w = gStrStatus;
            func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
            SoundRpc_SetVolume(D_004E0614[0], 0, 0);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            s->f1C = (func_002BC090 == NULL) ? NULL : (void *)func_002BC090;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC250);
/* differs: the 24-byte copy from D_00456000 is scheduled with the spill of the doubleword (53 of 82) */
#if 0
void func_002BC7E0(Ac98D *s) {
    V16 tmp[2];
    W98D *w;
    void *p1;
    void *p2;

    if (func_0022BF80(gStrStatus->f1C0) == 0xFF) {
        if (gStrStatus->f1C0 != NULL) {
            func_0022D0E0(gStrStatus->f1C0, 1);
            gStrStatus->f1C0 = NULL;
        }
        if (gStrStatus->fA8 != NULL) {
            amTask_Kill(gStrStatus->fA8);
            gStrStatus->fA8 = NULL;
        }
        gStrStatus->f408 = 0;
        tmp[0] = D_00456000;
        *(s64 *)&tmp[1] = *(s64 *)((char *)&D_00456000 + 16);
        ((s16 *)tmp)[2] = (s16)(gStrStatus->f408 + 0x25);
        ((s16 *)tmp)[6] = (s16)((gStrStatus->f408 + 8) | 0x8000);
        w = gStrStatus;
        func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, tmp, w->f274, w->f278, 0x600000);
        p1 = *(void **)((char *)gStrStatus + 0x14C);
        p2 = *(void **)((char *)p1 + 0x1C);
        gStrStatus->f1BC = func_0022D670(0.0f, *(s32 *)((char *)p2 + 0x100));
        w = gStrStatus;
        gStrStatus->f9C = amTask_Create((void (*)(void *))func_002BAFA0, 0, w->f274 + 0x19, 2, w->f278, D_0046EE00);
        s->f1C = (func_002BC250 == NULL) ? NULL : (void *)func_002BC250;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BC7E0);
void func_002BC920(Ac98D *s) {
    V16 tmp = D_00455DD0;
    W98D *w;
    s32 idx;
    u16 flags;

    idx = D_004B4B63[0];
    flags = *(u16 *)(D_00492FCE + idx * 184);
    if (flags & 1) {
        Help_Open(0x0020000000000000LL, (u8)(1 << idx));
    } else if (flags & 0x5000) {
        SoundRpc_SetVolume(D_004E0614[0], 0, 0);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        w = gStrStatus;
        func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
        s->f1C = (func_002BC7E0 == NULL) ? NULL : (void *)func_002BC7E0;
    }
}
void func_002BCA30(Ac98D *s) {
    V16 tmp = D_00455DC0;
    W98D *w;

    if (func_0022BF80(gStrStatus->f1CC) == 0xFF) {
        w = gStrStatus;
        func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
        StrBg_SetPos(gStrStatus->fBC, (f32)gStrStatus->f404, 0.0f);
        s->f1C = (func_002BC920 == NULL) ? NULL : (void *)func_002BC920;
    }
}
/* differs: the 24-byte copy from D_00455DA0 (lq and ld loaded first, the destination address in $a0; 6 of 64) */
#if 0
void func_002BCAE0(Ac98D *s) {
    V16 tmp[2];
    s32 req[12];
    W98D *w;
    V16 *src = (V16 *)&D_00455DA0;
    V16 a = *src;
    s64 b = *(s64 *)((char *)src + 16);

    tmp[0] = a;
    *(s64 *)&tmp[1] = b;

    if (func_0022BF80(gStrStatus->f1D4) == 0xFF) {
        amTask_Kill(gStrStatus->fB0);
        gStrStatus->fB0 = NULL;
        if (gStrStatus->f1D4 != NULL) {
            func_0022D0E0(gStrStatus->f1D4, 1);
            gStrStatus->f1D4 = NULL;
        }
        if (gStrStatus->fC0 != NULL) {
            amTask_Kill(gStrStatus->fC0);
            gStrStatus->fC0 = NULL;
        }
        req[5] = 1;
        req[4] = 3;
        StrStatus_Dispatch(req);
        w = gStrStatus;
        func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
        s->f1C = (func_002BCA30 == NULL) ? NULL : (void *)func_002BCA30;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCAE0);
void func_002BCBE0(Ac98D *s) {
    V16 tmp = D_00455D90;
    W98D *w;
    s32 idx;
    u16 flags;

    if (func_0022BF80(gStrStatus->f1D4) == 0xFF) {
        idx = D_004B4B63[0];
        flags = *(u16 *)(D_00492FCE + idx * 184);
        if (flags & 1) {
            Help_Open(0x0020000000000000LL, (u8)(1 << idx));
        } else if (flags & 0x5000) {
            w = gStrStatus;
            func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
            s->f1C = (func_002BCAE0 == NULL) ? NULL : (void *)func_002BCAE0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BCCD0);
