#include "common.h"

/* An actor of this file: its task function at 0x1C. */
typedef struct Ac98D {
    char pad0[0x1C];
    void *f1C;
} Ac98D;

void func_002BB650(Ac98D *s);

extern s16 func_002F5480(void);
extern void func_002F55E0(void);

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
    char padC4[0xC8 - 0xC4];
    void *fC8;
    char padCC[0x148 - 0xCC];
    void *f148;
    char pad14C[0x158 - 0x14C];
    s32 f158;
    char pad15C[0x1BC - 0x15C];
    void *f1BC;
    void *f1C0;
    char pad1C4[0x1CC - 0x1C4];
    void *f1CC;
    char pad1D0[0x1D4 - 0x1D0];
    void *f1D4;
    void *f1D8;
    void *f1DC;
    char pad1E0[0x274 - 0x1E0];
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
extern void func_002BC7E0(void);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_00228410(void);
extern void func_0022C560(s32);
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
/* differs: 2 of 85 real (the float operand registers f0/f1 of the sum and the addu operand order; 9 of 85 incl. the gp relocations) */
#if 0
void func_002BAFA0(void) {
    f32 pos[4];
    f32 *pp;
    s32 s4;
    s32 i;
    s32 k;
    s32 off1;
    s32 off2;
    s32 vo;
    s32 a0v;

    a0v = gStrStatus->f158;
    D_00470704 = a0v;
    D_0047070C = 0x600000;
    D_00470708 = 0;
    amModel_SetCurrent(a0v, 0x600000);
    D_00470238 = 0;
    s4 = (s32)gStrStatus->f1BC;
    func_0022C060(1.0f, s4);
    pos[2] = 0.0f;
    pos[3] = 1.0f;
    for (i = 0, off1 = 0, vo = 0, pp = &pos[1]; i < 7; i++, off1 += 4, vo += 16) {
        for (k = *(s32 *)((char *)gStrStatus + off1 + 0x2B8), off2 = k * 4; k < *(s32 *)((char *)gStrStatus + off1 + 0x29C); k++, off2 += 4) {
            char *pa = *(char **)((char *)gStrStatus + 0x14C);
            char *pb = *(char **)(pa + 0x1C);
            char *pc = *(char **)(pb + off2 + 0xB0);
            char *pd = *(char **)(pc + 4);
            f32 *pe = *(f32 **)(pd + 0x1C);
            pos[0] = pe[0];
            *pp = *(f32 *)((char *)gStrStatus + vo + 0x394) + pe[1];
            func_00228430(0);
            func_00227A30((u8 *)pos);
            func_0022C060(0.0f, s4);
            func_0022C560(s4);
            func_00228410();
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BAFA0);
void func_002BB100(void) {
    V16 tmp = D_00455EC0;

    func_00139620(0x900, &tmp, -1, 0x44, 0, 600.0f);
}
#if 0
// differs: 27 of 82 instructions: the original reads gStrStatus->0x288 for the index base and again for the call argument before the 0x158 table load; the load order did not follow the source orders tried (5); the lqc2/sqc2 copy and the two func_00137560 calls are right
extern void func_00136E80(s32, void *, s32, s32, s32);
extern void func_00137560(void *, void *);
extern void amDraw_FlushPacket(void);

/* A 16-byte vector of floats (one quadword). */
typedef struct F16_2BB150 {
    f32 v[4];
} __attribute__((aligned(16))) F16_2BB150;

void func_002BB150(void) {
    F16_2BB150 p;
    F16_2BB150 q;
    u8 *a;
    u8 *t2;
    u8 *tb;
    u8 *e;
    s32 idx;
    f32 x;
    f32 y;


    a = *(u8 **)((u8 *)gStrStatus + 0x14C);
    a = *(u8 **)(a + 0x1C);
    a = *(u8 **)(a + 0x1A8);
    a = *(u8 **)(a + 4);
    a = *(u8 **)(a + 0x1C);
    __asm__ volatile("lqc2 $vf1, 0x0(%1)\n\tsqc2 $vf1, 0x0(%0)" : : "r"(&p), "r"(a) : "memory");
    idx = *(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B;
    t2 = *(u8 **)((u8 *)gStrStatus + 0x158);
    idx = idx - *(s32 *)(t2 + 0x18);
    tb = t2 + *(s32 *)(t2 + 0x14);
    e = t2 + *(s32 *)(tb + idx * 4);
    x = (f32)*(s16 *)(e + 0x10);
    y = (f32)*(s16 *)(e + 0x12);
    func_00136E80(0x40000C24, 0, *(s32 *)((u8 *)gStrStatus + 0x288) + 0x1B, 0x44, 5);
    q.v[2] = 1.0f;
    q.v[3] = 1.0f;
    q.v[0] = 0.0f;
    q.v[1] = 0.0f;
    p.v[1] = p.v[1] - 0.5f * y;
    p.v[0] = p.v[0] - x;
    p.v[2] = p.v[2] - 10.0f;
    func_00137560(&p, &q);
    q.v[0] = x;
    q.v[1] = y;
    p.v[0] = p.v[0] + x;
    p.v[1] = p.v[1] + y;
    func_00137560(&p, &q);
    amDraw_FlushPacket();
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB2A0);
/* A 28-byte entry of the table D_00455920 (seven floats). */
typedef struct Pv28 {
    f32 f0, f4, f8, fC, f10, f14, f18;
} Pv28;
extern Pv28 D_00455920[];
extern f32 gFrameDelta;
extern f32 D_0046FD80;
extern u8 D_003F0800[];
extern void func_0029DD30(void *, f32);
extern void func_002BF850(void *);
extern void func_0029D6C0(void *);
extern void func_0013B0B0(void *);
extern void func_00131B90(void *);
extern void func_00131D00(void *, f32, f32, s32);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(void *);
extern void func_0013BBD0(f32, f32, f32);
extern void func_00133D10(s32);
extern void func_0029D8B0(s32, s32);
extern void func_0029DB00(f32, void *);
extern void func_002BF610(void);
extern void func_0013B110(s32);
extern void func_002BF520(void);

#if 0
void func_002BB490(void) {
    V16 buf[6];
    f32 vec[4];
    Pv28 *s0;
    s32 one;
    f32 t18, t10, t14;

    func_0029DD30(*(void **)((u8 *)gStrStatus + 0x25C), gFrameDelta);
    func_002BF850(gStrStatus);
    s0 = &D_00455920[*(s32 *)((u8 *)gStrStatus + 0x28C)];
    t14 = s0->f14;
    t18 = s0->f18;
    t10 = s0->f10;
    vec[0] = t10;
    one = 0x3F800000;
    *(s32 *)&vec[3] = one;
    vec[1] = t14;
    vec[2] = t18;
    func_0029D6C0(vec);
    D_0046FD80 = s0->fC;
    func_0013B0B0(D_003F0800);
    func_00131B90(&buf);
    func_00131D00(&buf, s0->f0, s0->f4, 0);
    func_00131F00(&buf, 0.0f, 0.0f);
    func_00132DF0(0);
    if (*(s32 *)((u8 *)gStrStatus + 0x28C) != 0x22 || *(s32 *)((u8 *)gStrStatus + 0x294) != 0) {
        func_0013BBD0(0.0f, 0.0f, s0->f8);
    } else {
        func_0013BBD0(0.0f, 0.0f, -32.0f);
    }
    func_00133D10(0);
    func_0029D8B0(-1, 4);
    func_0029DB00(1.0f, *(void **)((u8 *)gStrStatus + 0x25C));
    func_002BF610();
    func_0013B110(1);
    func_002BF520();
}
#endif
// differs: 2 of ~88 instructions: the vector copy takes f1/f2 swapped (0x18 and 0x14 floats), every
// decl/load order tried (36); the tail loads gStrStatus into $v1 here, $v0 in the original.
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB490);
void func_002BB5F0(Ac98D *s) {
    if (func_002F5480() == 4) {
        func_002F55E0();
        s->f1C = (func_002BB650 == NULL) ? NULL : (void *)func_002BB650;
    }
}
extern void OutputPass_Start(void *src, u16 prio);
extern void Fade_SetRequest(s32, void *, s32);
extern s8 D_004B4B41[];
extern s8 D_004B4B63[];

#if 0
void func_002BB650(Ac98D *s) {
    u8 blk[0x28];
    s32 flags;
    s32 idx;
    void *fp;

    if (D_004B4B41[0] == 6) {
        if (*(s32 *)((u8 *)gStrStatus + 0x280) == 0) {
            goto store;
        }
    }
    idx = D_004B4B63[0];
    flags = *(u16 *)(D_00492FCE + idx * 184);
    if (flags & 1) {
        s64 bits = 0x200LL;
        if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
            bits |= 0x0020000000000000LL;
        } else {
            bits |= 0x0010000000000000LL;
        }
        Help_Open(bits, (u8)(1 << idx));
        goto store;
    }
    if (flags & 0x5000) {
        SoundRpc_SetVolume(D_004E0614[0], 0, 0);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        Fade_SetRequest(0xA, func_002B9C10, 0);
        s->f1C = 0;
        goto store;
    }
    if (!(flags & 8)) {
        if (*(s32 *)((u8 *)gStrStatus + 0x400) <= 0) {
            goto store;
        }
    }
    *(s32 *)((u8 *)gStrStatus + 0x400) = 0;
    SoundRpc_SetVolume(D_004E0614[0], 0, 0);
    if (D_004E0614[0] > 0.0f) {
        SoundRpc_Send3(0, 0, 0, 0);
    }
    blk[1] = (u8)*(s32 *)((u8 *)gStrStatus + 0x288);
    blk[2] = (u8)*(s32 *)((u8 *)gStrStatus + 0x298);
    blk[3] = (u8)*(s32 *)((u8 *)gStrStatus + 0x29C);
    blk[4] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2A0);
    blk[5] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2A4);
    blk[6] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2A8);
    blk[7] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2AC);
    blk[8] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2B0);
    blk[9] = (u8)*(s32 *)((u8 *)gStrStatus + 0x2B4);
    *(u16 *)&blk[0xA] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2DC);
    *(u16 *)&blk[0xC] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2E0);
    *(u16 *)&blk[0xE] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2E4);
    *(u16 *)&blk[0x10] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2E8);
    *(u16 *)&blk[0x12] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2EC);
    *(u16 *)&blk[0x14] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2F0);
    *(u16 *)&blk[0x16] = (u16)*(s32 *)((u8 *)gStrStatus + 0x2F4);
    OutputPass_Start(blk, 0xC000);
store:
    fp = (void *)func_002BB5F0;
    if (fp == 0) {
        fp = 0;
    }
    s->f1C = fp;
}
#endif
// differs: 11 of 145 instructions (relocations aside): the final `s->f1C = fp` keeps
// `move $v1,$zero` in the fallthrough of the bnez in the original; five spellings of the null test tried.
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B98D0", func_002BB650);

extern V16 D_00455E50;
extern s32 D_005116E8[];
extern s32 D_0051144C[];
void func_002BB890(Ac98D *s) {
    V16 tmp;
    W98D *w;
    s32 idx;
    u16 flags;

    if (func_0022BF80(gStrStatus->f1D8) == 0xFF) {
        idx = D_004B4B63[0];
        flags = *(u16 *)(D_00492FCE + idx * 184);
        if (flags & 1) {
            Help_Open(0x0020000000000000LL, (u8)(1 << idx));
        } else if (flags & 0x5000) {
            SoundRpc_SetVolume(D_004E0614[0], 0, 0);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            D_0051144C[0] |= 1 << D_005116E8[0];
            tmp = D_00455E50;
            w = gStrStatus;
            func_0028EE90((char *)w + 0x38, (char *)w + 0x14C, (char *)w + 0x158, (char *)w + 0x168, &tmp, w->f274, w->f278, 0x600000);
            if (gStrStatus->f1DC != NULL) {
                func_0022D0E0(gStrStatus->f1DC, 1);
                gStrStatus->f1DC = NULL;
            }
            if (gStrStatus->fC8 != NULL) {
                amTask_Kill(gStrStatus->fC8);
                gStrStatus->fC8 = NULL;
            }
            amTask_Kill(gStrStatus->f148);
            gStrStatus->f148 = NULL;
            s->f1C = (func_002BB650 == NULL) ? NULL : (void *)func_002BB650;
        }
    }
}
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
