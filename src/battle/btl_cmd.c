#include "common.h"

#include "battle/battle.h"

/* The object the camera / screen commands of btl_cmd.c act on (inferred; field names are guesses). */
typedef struct BtlView {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ f32 unk024;
    /* 0x028 */ u8 unk028[0x48 - 0x28];
    /* 0x048 */ f32 color[4];
    /* 0x058 */ u8 unk058[0x88 - 0x58];
    /* 0x088 */ s32 table[16];
    /* 0x0C8 */ u8 unk0C8[0xF0 - 0xC8];
    /* 0x0F0 */ s32 unk0F0;
    /* 0x0F4 */ u8 unk0F4[0x110 - 0xF4];
    /* 0x110 */ s64 unk110;
} BtlView;

typedef struct BtlViewF {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ f32 unk88;
    /* 0x8C */ f32 unk8C;
} BtlViewF;

/* A file of motions as loaded: offsets turned into pointers by func_001A5160 (inferred). */
typedef struct MotEntry {
    /* 0x00 */ s32 data;
    /* 0x04 */ s32 unk04[3];
} MotEntry;

typedef struct MotKey {
    /* 0x00 */ s16 time;
    /* 0x02 */ s8 value;
    /* 0x03 */ s8 unk03;
} MotKey;

typedef struct MotTrack {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 numKeys;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ MotKey *keys;
} MotTrack;

typedef struct MotFile {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
    /* 0x14 */ MotEntry *entries;
    /* 0x18 */ MotTrack *tracks;
    /* 0x1C */ void *unk1C;
} MotFile;

typedef struct MotFile2 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 count;
    /* 0x18 */ MotTrack *tracks;
} MotFile2;

typedef struct BtlSlotRec {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ MotFile *file[16];
    /* 0x4C */ s8 unk4C;
    /* 0x4D */ s8 unk4D;
    /* 0x4E */ s8 unk4E;
    /* 0x4F */ s8 unk4F;
    /* 0x50 */ s32 unk50;
    /* 0x54 */ f32 unk54;
    /* 0x58 */ s32 unk58;
    /* 0x5C */ f32 unk5C;
} BtlSlotRec;

typedef struct BtlCmdPair {
    /* 0x00 */ s16 a;
    /* 0x02 */ s16 b;
} BtlCmdPair;

typedef struct BtlCmdObj {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 cur;
    /* 0x5C */ u8 unk5C[0x64 - 0x5C];
    /* 0x64 */ BtlCmdPair ent[16];
} BtlCmdObj;

extern s32 D_0047056C;
extern s32 func_001A9460(void *, s32, s32);


typedef struct BtlRank {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s16 idx;
    /* 0x46 */ u8 unk46[0x48 - 0x46];
    /* 0x48 */ s32 f48;
    /* 0x4C */ s32 f4C;
    /* 0x50 */ s32 f50;
    /* 0x54 */ s32 f54;
    /* 0x58 */ u8 unk58[0x42C - 0x58];
    /* 0x42C */ s16 cnt[4];
    /* 0x434 */ s16 hist[4];
    /* 0x43C */ s8 hpos;
    /* 0x43D */ s8 state;
} BtlRank;

extern u8 D_00493018[];
extern u8 D_0049301C[];
extern u8 D_00493020[];
extern u8 D_00493024[];
extern u8 D_00492FC0[];

typedef struct BtlSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 slot[1];
} BtlSlots;

extern f32 D_0046FD80;
extern f32 D_00470568;
extern s32 D_00495A00[16];
extern f32 D_00495700[16];
extern f32 D_00495740[16];
extern f32 D_00495780[16];
extern f32 D_004957C0[16];
extern f32 D_00495800[16][4];
extern f32 D_00495900[16][4];
extern void func_00125740(void *, void *, s32);
extern s32 func_001A51E0(MotTrack *, s32, f32);
extern void amTask_KillGroup(s32, s32, s32);
extern void *amTask_Create(void (*update)(void *), void *, s32, s32, s32, char *);
extern char D_004681D0[];
extern void func_001A8640(void);
void func_001A8300(void *);

#define BTLVIEW_TINT(name, row)                                    \
    void name(BtlView *v) {                                         \
        v->color[0] *= D_00495800[row][0];                          \
        v->color[1] *= D_00495800[row][1];                          \
        v->color[2] *= D_00495800[row][2];                          \
        v->color[3] *= D_00495800[row][3];                          \
        ((BtlViewF *)v)->unk88 = D_00495700[row];                   \
        ((BtlViewF *)v)->unk8C = D_00495740[row];                   \
    }

static inline MotEntry *Mot_GetEntry(MotFile *f, s32 i) {
    MotEntry *e = 0;
    if (i >= 0 && i < f->count) {
        e = &f->entries[i];
    }
    return e;
}

void func_001A4570(BtlView *v) {
    s32 i;
    s32 *s;
    s32 *d;
    s = D_00495A00;
    for (i = 0, d = v->table; i < 16; i++) {
        d[i] = s[i];
    }
    v->unk110 = 5;
}
void func_001A45E0(BtlView *v) {
    v->unk024 = D_0046FD80;
}
BTLVIEW_TINT(func_001A45F0, 13)
BTLVIEW_TINT(func_001A4660, 12)
BTLVIEW_TINT(func_001A46D0, 11)
BTLVIEW_TINT(func_001A4740, 10)
void func_001A47B0(BtlViewF *v) {
    v->unk88 = D_00495700[9];
    v->unk8C = D_00495740[9];
}
void func_001A47D0(BtlViewF *v) {
    v->unk88 = D_00495700[8];
    v->unk8C = D_00495740[8];
}
void func_001A47F0(BtlViewF *v) {
    v->unk88 = D_00495700[7];
    v->unk8C = D_00495740[7];
}
void func_001A4810(BtlViewF *v) {
    v->unk88 = D_00495700[6];
    v->unk8C = D_00495740[6];
}
void func_001A4830(BtlView *v) {
    v->unk0F0 = 0x54000;
    v->unk024 = D_00470568;
}
void func_001A4850(BtlView *v) {
    v->unk0F0 = 0x50000;
}
void func_001A4860(void) {
    func_00125740(D_00495700, D_00495780, 0x40);
    func_00125740(D_00495740, D_004957C0, 0x40);
    func_00125740(D_00495800, D_00495900, 0x100);
}
void func_001A48C0(void) {
    func_00125740(D_00495780, D_00495700, 0x40);
    func_00125740(D_004957C0, D_00495740, 0x40);
    func_00125740(D_00495900, D_00495800, 0x100);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A4920);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A4AF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A4CF0);
s32 func_001A50F0(u8 *f, s32 i) {
    s32 r = 0;
    u8 *e = NULL;

    if (i >= 0 && i < *(s32 *)(f + 0x10)) {
        e = *(u8 **)(f + 0x14);
        e += (i << 4);
    }
    if (e != NULL) {
        r = *(s32 *)e;
    }
    return r;
}
MotEntry *BtlCmd_GetMotEntry(MotFile *f, s32 i) {
    return Mot_GetEntry(f, i);
}
void func_001A5160(MotFile *f) {
    MotEntry *e;
    s32 i;
    f->entries = (MotEntry *)((u8 *)f + (s32)f->entries);
    f->tracks = (MotTrack *)((u8 *)f + (s32)f->tracks);
    if (f->unk1C != 0) {
        f->unk1C = (u8 *)f + (s32)f->unk1C;
    }
    e = f->entries;
    for (i = 0; i < f->count; i++) {
        if (e->data != 0) {
            e->data = (s32)((u8 *)f + e->data);
        }
        e++;
    }
}
// differs: 13 of 91 (round 7: param a1 reused as the index, no k local so a0->keys is re-read/hoisted, half > 1 gives slti at). Left: the then-parts of both search ifs are if-converted away (original keeps bc1f; nop; b end; nop blocks) and the second loop lays out the a1++ block after the break block; gotos/!-forms/else-forms all normalise to the same code.
#if 0
s32 func_001A51E0(MotTrack *a0, s32 a1, f32 t) {
    s32 half;

    if (t < 1.0f) {
        return 0;
    }
    if (a1 == -1) {
        a1 = a0->numKeys >> 1;
        half = (a0->numKeys + 1) >> 1;
        while (half > 1) {
            if ((f32)a0->keys[a1].time <= t) {
                a1 += half >> 1;
            } else {
                a1 -= half >> 1;
            }
            half = (half + 1) >> 1;
        }
        if ((f32)a0->keys[a1].time <= t) {
        } else {
            a1 -= 1;
        }
    } else {
        for (;;) {
                if ((f32)a0->keys[a1].time <= t) {
                if ((f32)a0->keys[a1 + 1].time <= t) {
                    a1 += 1;
                } else {
                    break;
                }
            } else {
                a1 -= 1;
            }
            if (a1 <= 0) {
                a1 = 0;
                break;
            }
            if (a1 >= a0->numKeys - 1) {
                a1 = a0->numKeys - 1;
                break;
            }
        }
    }
    return a1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A51E0);
extern void func_0013C1E0(void *, f32, f32);
extern void amMotion_Update(void *, s32);

// Matched: the table lookup is written with the index cast to a pointer first so the addu operands come out in the original order
void func_001A5350(u8 *a0, f32 f12) {
    s32 a1;
    s32 v1;
    u8 *s0;
    s32 a3;
    u8 *a2;
    u8 *pt;
    s32 hi;
    s32 i;
    s32 off;
    f32 f20;

    f20 = f12;
    a1 = *(s8 *)(a0 + 0x4F);
    s0 = *(u8 **)a0;
    v1 = *(s8 *)(a0 + 0x4D);
    if (a1 != *(s8 *)(a0 + 0x4E) || v1 != *(s8 *)(a0 + 0x4C)) {
        a3 = ((*(s32 *)(a0 + 4) + 1) << 16) | (a1 + v1 * 6);
        a2 = s0 + 0x41C;
        if (*(s32 *)(s0 + 0x41C) != a3) {
            if (0 < *(s32 *)(s0 + 0x418)) {
                i = 0;
                off = 0;
                do {
                    *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x30) = -1;
                    *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x34) = -1;
                    *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x38) = -1;
                    i++;
                    off += 0x40;
                } while (i < *(s32 *)(s0 + 0x418));
            }
            *(s32 *)(a2 + 0xC) = 0xBF800000;
        }
        *(s32 *)a2 = a3;
        hi = (a3 >> 16) - 1;
        pt = *(u8 **)(((u8 *)(hi << 2)) + (s32)s0 + 0x46C);
        pt = *(u8 **)(pt + 0x14);
        *(f32 *)(s0 + 0x424) = (f32)(*(s32 *)(((u8 *)((a3 & 0xFFFF) << 4)) + (s32)pt + 8) - 1);
        amMotion_Update(s0, 0);
    }
    func_0013C1E0(s0, 0.0f, f20);
}
s32 func_001A5490(MotFile *f, s32 track, f32 t) {
    MotTrack *tr = &f->tracks[track];
    s32 i;
    if ((f32)(tr->keys[tr->numKeys - 1].time - 1) <= t) {
        i = tr->numKeys - 1;
    } else {
        i = func_001A51E0(tr, -1, t);
    }
    return tr->keys[i].value;
}
void func_001A5510(BtlSlotRec *a0) {
    MotTrack *tr;
    MotKey *key;
    f32 f;
    s32 r;
    s32 a6;
    s32 a4;
    s32 w;
    s32 idx;

    f = a0->unk5C;
    w = a0->unk58;
    if (f != a0->unk54) {
        a0->unk54 = f;
        idx = (w >> 16) - 1;
        tr = &a0->file[idx]->tracks[w & 0xFFFF];
        if ((f32)(tr->keys[tr->numKeys - 1].time - 1) <= f) {
            r = tr->numKeys - 1;
        } else {
            r = func_001A51E0(tr, a0->unk50, f);
        }
        if (r != a0->unk50) {
            a0->unk50 = r;
            key = &tr->keys[r];
            a6 = key->unk03;
            a6 = (a6 < a0->unk08) ? a6 : a0->unk08 - 1;
            a4 = key->value;
            a0->unk4C = a0->unk4D;
            a0->unk4E = a0->unk4F;
            a0->unk4D = a6;
            a0->unk4F = a4;
        }
    }
}
void BtlSlots_Clear(BtlSlots *s, s32 i) {
    s->slot[i] = 0;
}
void BtlSlots_Set(BtlSlots *s, s32 i, s32 v) {
    s->slot[i] = v;
}

extern void memset(void *, s32, s32);
void func_001A5640(u8 *a0, u8 *a1, s32 a2) {
    s32 x;
    s32 *t;

    memset(a0, 0, 0x60);
    *(s8 *)(a0 + 0x4E) = -1;
    *(s8 *)(a0 + 0x4C) = -1;
    *(s32 *)(a0 + 0x50) = -1;
    *(s32 *)(a0 + 0x54) = 0xBF800000;
    *(s8 *)(a0 + 0x4D) = -1;
    *(s8 *)(a0 + 0x4F) = -1;
    *(s32 *)(a0 + 0x58) = -1;
    *(s32 *)(a0 + 0x5C) = 0xBF800000;
    *(u8 **)a0 = a1;
    if (a1 != NULL) {
        u8 *p;
        *(s32 *)(a0 + 4) = a2;
        p = *(u8 **)a0 + 0x46C;
        t = *(s32 **)(p + a2 * 4);
        *(s32 *)(a0 + 8) = (t != NULL ? t[4] : -1) / 6;
    }
}
void func_001A5700(MotFile2 *f) {
    s32 i;
    if (f->count > 0 && f->tracks != 0) {
        f->tracks = (MotTrack *)((u8 *)f + (s32)f->tracks);
        for (i = 0; i < f->count; i++) {
            f->tracks[i].keys = (MotKey *)((u8 *)f + (s32)f->tracks[i].keys);
        }
    }
}
extern u8 D_003F0800[];
extern void func_0012E100(void *, s32, s32, f32);
extern void func_0012E000(void *, void *);
extern void func_0013B0B0(void *);
extern void func_0013B620(s32);
extern void func_0013B110(s32);
void func_001A5770(void) {
    u8 *v1 = (u8 *)gBattle + 0xA0;
    u8 *s1 = v1 + 0xB0;
    u8 *s0 = v1 + 0x160;
    f32 f1 = *(f32 *)((u8 *)gBattle + 0x1DC);
    f32 f0 = *(f32 *)((u8 *)gBattle + 0x240);
    f32 t;
    f32 t2;
    s32 iv;

    if (!(f1 <= f0)) {
        if (*(s32 *)(s0 + 0x30) & 4) {
            *(f32 *)(v1 + 0x13C) = f1 - f0;
        } else {
            *(f32 *)(v1 + 0x13C) = f0;
        }
    }
    func_0012E100(s1, *(s32 *)(s0 + 0x34), *(s32 *)(s0 + 0x38), *(f32 *)(v1 + 0x13C));
    if (*(s32 *)(s0 + 0x30) & 8) {
        func_0013B0B0(D_003F0800);
        t = *(f32 *)(s0 + 0x4C) / 360.0f;
        t2 = 65536.0f * t;
        __asm__ volatile ("cvt.w.s %0, %1" : "=f"(t2) : "f"(t2));
        __asm__ volatile ("mfc1 %0, %1" : "=r"(iv) : "f"(t2));
        func_0013B620(iv);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddz.xyz $vf1, $vf30, $vf1z ; sqc2 $vf1, 0x0(%0)" : : "r"(s1));
        __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddz.xyz $vf1, $vf30, $vf1z ; sqc2 $vf1, 0x0(%0)" : : "r"(s1 + 0x10), "r"(s1 + 0x10));
        func_0013B110(1);
    }
    func_0012E000(s1, s0 + 0x10);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5880);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5B40);
void func_001A5EE0(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5EF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A6350);
void func_001A6730(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A6740);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A6AD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A6C70);
void func_001A6F90(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A6FA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A73F0);
extern u8 D_00468170[];
void func_001A80E0(void) {
    s32 i = 0;
    u8 *s1 = (u8 *)gBattle;
    u8 *s0 = s1 + 0xA0;
    u8 *a1;
    s32 idx;
    f32 sc;

    for (i = 0; i < *(s32 *)((u8 *)gBattle + 0x88D8); i++) {
        a1 = s1 + i * 257 * 32 + 0x830;
        if (*(s8 *)(s1 + i * 257 * 32 + 0x2835) == 0) {
            __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(a1 + 0xA0), "r"(s0 + (i << 4)));
            __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(a1 + 0xB0), "r"(s0 + (i << 4) + 0x40));
        }
    }
    idx = *(s32 *)(s0 + 0x184);
    if (idx >= 0 && idx < 5) {
        ((void (*)(void))(*(s32 *)(D_00468170 + idx * 4)))();
    }
    if (*(s32 *)(s1 + 0x88EC) == 0) {
        *(f32 *)(s0 + 0x138) = *(f32 *)(s0 + 0x138) + *(f32 *)(s0 + 0x130) * *(f32 *)(s1 + 0x88F0);
    }
}
extern void func_00146F10(void *, void *, f32);
extern f32 func_00146EB0(void *);
extern void amTask_Kill(void *);
void func_001A81F0(void *a0) {
    u8 *s1 = (u8 *)a0;
    u8 *s2;
    u8 *s0;
    f32 f20;
    f32 f0;
    s32 tmp[4] __attribute__((aligned(16)));

    s0 = (u8 *)gBattle + 0xA0;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        s2 = s1 + 0x30;
        func_00146F10(tmp, s2, *(f32 *)(s1 + 0x54) * *(f32 *)((u8 *)gBattle + 0x88F0));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)"
            : : "r"(s2 + 0x10), "r"(tmp));
        func_00146F10(s2 + 0x10, s2 + 0x10, *(f32 *)(s2 + 0x20));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)"
            : : "r"(s2), "r"(s2 + 0x10));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)"
            : : "r"(s0 + 0x1B0), "r"(s2));
        f20 = func_00146EB0(s2 + 0x10);
        f0 = func_00146EB0(s2);
        if (f20 <= 2.49999994e-05f && f0 <= 2.49999994e-05f) {
            amTask_Kill(s1);
        }
    }
}
extern u8 D_00468190[];
void func_001A8300(void *a0) {
    u8 *s3 = (u8 *)gBattle;
    u8 *s2 = s3 + 0xA0;
    u8 *s1;
    u8 *s0;
    s32 idx;

    func_001A80E0();
    if (*(u8 **)(s3 + 0x260) == s2 + 0xB0) {
        s1 = (u8 *)gBattle;
        s0 = s1 + 0xA0;
        if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
            idx = *(s32 *)(s0 + 0x184);
            ((void (*)(void))(*(s32 *)(D_00468190 + idx * 4)))();
            *(f32 *)(s0 + 0x13C) = *(f32 *)(s0 + 0x13C) + *(f32 *)(s0 + 0x130) * *(f32 *)(s1 + 0x88F0);
        }
    }
    *(u8 **)(s3 + 0x264) = *(u8 **)(s3 + 0x260);
    if (*(s32 *)(s3 + 0x88EC) == 0) {
        __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"(s2 + 0x1B0));
    }
}
void func_001A83D0(void) {
    amTask_KillGroup(0x20, 0x20000010, 1);
}
extern s32 func_001B0D10(void *);
extern void func_001A81F0(void *);
extern char D_004681C0[];
void func_001A83F0(void *a0) {
    u8 *s0 = (u8 *)a0;
    void *t;
    u8 *a2;

    if (func_001B0D10(a0) == 4) {
        t = amTask_Create(func_001A81F0, 0, 0x5501, 0x20, 0x20000010, D_004681C0);
        if (t != 0) {
            a2 = (u8 *)t + 0x30;
            __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"(a2));
            if (s0 != 0) {
                __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(s0), "r"(a2 + 0x10));
                *(f32 *)(a2 + 0x20) = *(f32 *)(s0 + 0x14);
                *(f32 *)(a2 + 0x24) = *(f32 *)(s0 + 0x10);
            } else {
                *(s32 *)(a2 + 0x10) = 0;
                *(s32 *)(a2 + 0x14) = 0x3FE66666;
                *(s32 *)(a2 + 0x18) = 0;
                *(s32 *)(a2 + 0x1C) = 0x3F800000;
                *(s32 *)(a2 + 0x20) = 0x3F4CCCCD;
                *(s32 *)(a2 + 0x24) = 0x3F19999A;
            }
        }
    }
}
// GIVEN UP: the parameter and the two saved pointers take other registers, and the branch order differs (4 forms tried)
#if 0
void func_001A84B0(u8 *a0) {
    u8 *s1 = a0;
    u8 *s0 = (u8 *)gBattle;
    u8 *s2 = s0 + 0xA0;
    s32 *v;

    if (*(s32 *)(s1 + 0x20) == 0) {
        *(f32 *)(s2 + 0x130) = 1.0f;
        if ((*(s32 *)(s1 + 0x30) & 1) != 0) {
            *(s32 *)(s2 + 0x138) = 0;
            *(s32 *)(s2 + 0x140) = 0;
        } else {
            if (*(u8 **)(s0 + 0x260) != s2 + 0xF0) {
                func_00125740(s2 + 0xF0, s2 + 0xB0, 0x40);
                *(f32 *)(s2 + 0x138) = 1.0f;
            }
            *(f32 *)(s2 + 0x140) = 1.0f;
        }
        *(u8 **)(s0 + 0x260) = s2 + 0xF0;
    } else if (*(s32 *)(s1 + 0x20) == 1) {
        if (*(s32 *)(s1 + 0x24) != 7) {
            if ((*(s32 *)(s1 + 0x30) & 2) != 0) {
                if (*(u8 **)(s0 + 0x260) != s2 + 0xB0) {
                    func_00125740(s2 + 0xB0, s2 + 0xF0, 0x40);
                }
                *(f32 *)(s2 + 0x13C) = 1.0f;
            } else {
                *(s32 *)(s2 + 0x13C) = 0;
            }
            *(f32 *)(s2 + 0x130) = 1.0f;
        } else {
            s32 *pp = *(s32 **)(s1 + 0x34);
            s32 *qq = *(s32 **)((u8 *)pp + 0x14);
            f32 fl;

            *(f32 *)(s2 + 0x13C) = *(f32 *)(s1 + 0x3C);
            *(f32 *)(s2 + 0x130) = *(f32 *)(s1 + 0x44);
            fl = (f32)*(s32 *)((u8 *)qq + (*(s32 *)(s1 + 0x38) << 4) + 8);
            *(f32 *)(s1 + 0x40) = fl - 1.0f;
        }
        *(u8 **)(s0 + 0x260) = s2 + 0xB0;
    }
    v = *(s32 **)(s0 + 0x260);
    v[12] = 0;
    v[14] = v[14] | 1;
    func_00125740(s2 + 0x160, s1, 0x50);
}
#endif
// GIVEN UP: 12 forms tried (declaration orders, != 7 swap, param without copy, inline offsets); best 31 of 95 instructions differ: ours gBattle=s0, entry=s1, param=s2 vs original param=s1, gBattle=s0, entry=s2 (param always lands in s2), plus the 7 test laid out inline where the original branches out to the block; size 0x174 vs 0x180
#if 0
extern void func_00125740(void *, void *, s32);
void func_001A84B0(u8 *a0x) {
    u8 *a0 = a0x;
    u8 *s0 = (u8 *)gBattle;
    u8 *s2 = s0 + 0xA0;
    u8 *p;
    u8 *tb;
    s32 ix;

    if (*(s32 *)(a0 + 0x20) == 0) {
        *(s32 *)(s2 + 0x130) = 0x3F800000;
        if (*(s32 *)(a0 + 0x30) & 1) {
            *(s32 *)(s2 + 0x138) = 0;
            *(s32 *)(s2 + 0x140) = 0;
        } else {
            if (*(u8 **)(s0 + 0x260) != s2 + 0xF0) {
                func_00125740(s2 + 0xF0, s2 + 0xB0, 0x40);
                *(s32 *)(s2 + 0x138) = 0x3F800000;
            }
            *(s32 *)(s2 + 0x140) = 0x3F800000;
        }
        *(u8 **)(s0 + 0x260) = s2 + 0xF0;
    } else if (*(s32 *)(a0 + 0x20) == 1) {
        if (*(s32 *)(a0 + 0x24) == 7) {
            *(f32 *)(s2 + 0x13C) = *(f32 *)(a0 + 0x3C);
            *(f32 *)(s2 + 0x130) = *(f32 *)(a0 + 0x44);
            tb = *(u8 **)(*(u8 **)(a0 + 0x34) + 0x14);
            ix = *(s32 *)(a0 + 0x38);
            *(f32 *)(a0 + 0x40) = (f32)*(s32 *)(tb + (ix << 4) + 8) - 1.0f;
        } else {
            if (*(s32 *)(a0 + 0x30) & 2) {
                if (*(u8 **)(s0 + 0x260) != s2 + 0xB0) {
                    func_00125740(s2 + 0xB0, s2 + 0xF0, 0x40);
                }
                *(s32 *)(s2 + 0x13C) = 0x3F800000;
            } else {
                *(s32 *)(s2 + 0x13C) = 0;
            }
            *(s32 *)(s2 + 0x130) = 0x3F800000;
        }
        *(u8 **)(s0 + 0x260) = s2 + 0xB0;
    }
    p = *(u8 **)(s0 + 0x260);
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x38) = *(s32 *)(p + 0x38) | 1;
    func_00125740(s2 + 0x160, a0, 0x50);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A84B0);
void func_001A8630(void) {
}
extern void func_00131B90(void *);
extern void amCamera_Init(void *);
extern void func_001A80E0(void);
extern u8 D_00468190[];
void func_001A8640(void) {
    u8 *s1 = (u8 *)gBattle;
    u8 *s0 = s1 + 0xA0;
    u8 *s3;
    u8 *s2;
    u8 *s1b;
    u8 *s0b;
    s32 idx;

    func_00131B90(gBattle);
    amCamera_Init(s0 + 0xF0);
    amCamera_Init(s0 + 0xB0);
    *(s32 *)(s0 + 0x130) = 0x3F800000;
    *(s32 *)(s0 + 0x134) = 0;
    *(s32 *)(s0 + 0x138) = 0;
    *(s32 *)(s0 + 0x13C) = 0;
    *(s32 *)(s0 + 0x140) = 0;
    *(s32 *)(s0 + 0x14C) = 0;
    *(u8 **)(s1 + 0x260) = s0 + 0xF0;
    memset(s0 + 0x160, 0, 0x50);
    *(s32 *)(s0 + 0x180) = 0;
    *(s32 *)(s0 + 0x184) = 0;
    *(s32 *)(s0 + 0x190) = 0;

    s3 = (u8 *)gBattle;
    s2 = s3 + 0xA0;
    func_001A80E0();
    if (*(u8 **)(s3 + 0x260) == s2 + 0xB0) {
        s1b = (u8 *)gBattle;
        s0b = s1b + 0xA0;
        if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
            idx = *(s32 *)(s0b + 0x184);
            ((void (*)(void))(*(s32 *)(D_00468190 + idx * 4)))();
            *(f32 *)(s0b + 0x13C) = *(f32 *)(s0b + 0x13C) + *(f32 *)(s0b + 0x130) * *(f32 *)(s1b + 0x88F0);
        }
    }
    *(u8 **)(s3 + 0x264) = *(u8 **)(s3 + 0x260);
    if (*(s32 *)(s3 + 0x88EC) == 0) {
        __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"(s2 + 0x1B0));
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8770);
void func_001A8830(void) {
}
void func_001A8840(void) {
}
void BtlCam_Restart(void) {
    amTask_KillGroup(0x20, 0x20000000, 1);
    amTask_Create(func_001A8300, 0, 0x5500, 0x20, 0x20000002, D_004681D0);
    func_001A8640();
}
void func_001A88B0(void) {
    amTask_KillGroup(0x20, 0x20000000, 1);
}
void BtlCam_Start(void) {
    amTask_Create(func_001A8300, 0, 0x5500, 0x20, 0x20000002, D_004681D0);
    func_001A8640();
}
void func_001A8910(void) {
}
s32 func_001A8920(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8930);
extern s32 func_001A8930(s32, void *, s32);
extern s32 func_001A8E60(s32, void *);

void func_001A8BD0(u8 *a0) {
    u8 *s6;
    s32 s5;
    s32 s4;
    s32 s3;
    s32 s2;
    s32 s1;
    s32 s7;
    s32 r;
    s32 a6;
    s32 p;
    f32 f;

    a6 = *(s8 *)(a0 + 0x6);
    s6 = (u8 *)gBattle + ((a6 * 257) << 5) + 0x830;
    s5 = 0;
    s7 = 0;
    if (0 < *(s16 *)a0) {
        s3 = 0;
        s2 = 0;
        s1 = 0;
        do {
            *(s16 *)(*(s32 *)(a0 + 0x10) + s3) = -1;
            r = func_001A8930(*(s32 *)(*(s32 *)(a0 + 0x8) + s2), s6, 0);
            *(s16 *)(*(s32 *)(a0 + 0x14) + s3) = (s16)r;
            if (func_001A8E60(*(s32 *)(*(s32 *)(a0 + 0x8) + s2), s6) != 0) {
                s4 = 0;
                if (*(u8 *)(a0 + 0x7) == 0) {
                    if (func_001A8D90((void *)*(s32 *)(*(s32 *)(a0 + 0x8) + s2), s6) != 0) {
                        s4 = 1;
                    }
                } else {
                    f = *(f32 *)(s6 + 0xC58);
                    p = *(s32 *)(*(s32 *)(a0 + 0x8) + s2);
                    if (f <= (f32)*(s16 *)(p + 0x6)) {
                        if (!(f < (f32)*(s16 *)(p + 0x4))) {
                            s4 = 1;
                        }
                    }
                }
                if (s4 != 0) {
                    *(s32 *)(*(s32 *)(a0 + 0xC) + s1) = *(s32 *)(*(s32 *)(a0 + 0x8) + s2);
                    s1 += 4;
                    *(s16 *)(*(s32 *)(a0 + 0x10) + s3) = (s16)s5;
                    s5++;
                }
            }
            s7++;
            s3 += 2;
            s2 += 4;
        } while (s7 < *(s16 *)a0);
    }
    *(s16 *)(a0 + 0x2) = (s16)s5;
}
s32 func_001A8D90(void *a0, void *a1) {
    u16 x = *(u16 *)((u8 *)a0 + 0xC);
    u16 y = *(u16 *)((u8 *)a1 + 0xCB2);
    u16 lo2 = y & 0xFF;
    u32 lo = x & 0xFF;
    u32 hi = x & 0xFF00;
    u16 hi2 = y & 0xFF00;
    s32 i;

    if (*(s8 *)((u8 *)a1 + 0x1FFD) != 0) {
        hi2 &= 0xBFFF;
    }
    if (hi2 & 0x4000) {
        if (!(hi & 0x4000)) {
            return 0;
        }
    } else if (hi != 0) {
        if (hi2) {
        } else {
            return 0;
        }
        hi2 >>= 8;
        hi >>= 8;
        for (i = 0; i < 8; i++) {
            if ((hi & 1) && !(hi2 & 1)) {
                return 0;
            }
            hi2 >>= 1;
            hi >>= 1;
        }
    }
    return (lo2 & lo) != 0;
}
extern s32 func_001DDD30(Fighter *);
extern s32 func_001DDD40(Fighter *);
extern s32 func_001E19B0(Fighter *);
extern s32 func_001E1B40(Fighter *);
extern s32 func_001E1CE0(Fighter *);
extern s32 func_001E1E80(Fighter *);
extern s32 func_001DF420();
extern s32 func_001DFE60(Fighter *, s32, f32);

// GIVEN UP: 0x270 vs 0x280 (16 bytes short). Early returns, the s4 load and the mode test match; the case bodies of the switch (1,2,4,400 in source order) are laid out differently: the 0x400 body is placed after the 0x4 body in the original and the join differs (3 layouts tried)
#if 0
s32 func_001A8E60(s32 a0, void *a1) {
    u8 *o = (u8 *)a0;
    u8 *c = (u8 *)a1;
    s32 flags = *(s32 *)(o + 0x8);
    s32 s0 = 1;

    if ((flags & 0x10) != 0) {
        s32 s4 = *(s16 *)(o + 0x14);
        if (s4 != func_001DDD40((Fighter *)c)) {
            return 0;
        }
    }
    if ((flags & 0x40) != 0) {
        if (func_001E1CE0((Fighter *)c) == 0) {
            return 0;
        }
    }
    if ((flags & 0x80) != 0) {
        if (func_001E1B40((Fighter *)c) == 0) {
            return 0;
        }
    }
    if ((flags & 0x100) != 0) {
        if (func_001E19B0((Fighter *)c) == 0) {
            return 0;
        }
    }
    if ((flags & 0x70000000) != 0 && *(s8 *)(c + 0x2015) != 0) {
        return 0;
    }
    if ((flags & 0x8) != 0) {
        if (gBattle != NULL && (*(s32 *)((u8 *)gBattle + 0x8AA8) & 0x200) != 0) {
            return 0;
        }
    }
    if ((flags & 0x800) != 0) {
        if ((*(s32 *)(c + 0x1360 + (*(s32 *)(c + 0x175C) << 4) + 0x1F8) & 0x4) == 0) {
            return 0;
        }
    }
    if ((flags & 0x1000) != 0) {
        s32 r = func_001DDD30((Fighter *)c);
        if ((*(s16 *)(o + 0x14) & ((1 << r) & 0xFF)) == 0) {
            return 0;
        }
    }
    switch (flags & 0x407) {
    case 0x1:
        s0 = func_001DFE60((Fighter *)c, 2, (f32)*(s16 *)(o + 0x12));
        break;
    case 0x2:
        s0 = func_001DF420((Fighter *)c, *(s16 *)(o + 0x10));
        break;
    case 0x4:
        s0 = func_001E1E80((Fighter *)c);
        break;
    case 0x400: {
        s32 v = 0;
        if (gBattle != NULL) {
            v = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x80;
        }
        if (v == 0) {
            s0 = (*(s8 *)(c + 0x2010) == 0);
        } else {
            s0 = 0;
        }
        break;
    }
    }
    return s0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8E60);
s32 func_001A90E0(BtlRank *a0, s16 a1) {
    s32 r = 0;
    s32 n;
    s16 k;
    s16 v;

    if (a0->state < 4) {
        return 0;
    }
    switch (a1) {
    case 0x100:
        k = a0->hpos;
        v = a0->hist[k];
        n = 0;
        do {
            v = (v + 1) & 3;
            k = (k + 1) & 3;
            if (a0->hist[k] != v) {
                break;
            }
            n++;
        } while (n < 3);
        if (n == 3) {
            r = 0x200;
        }
        break;
    case 0x200:
        k = a0->hpos;
        v = a0->hist[k];
        n = 0;
        do {
            v = (v + 3) & 3;
            k = (k + 3) & 3;
            if (a0->hist[k] != v) {
                break;
            }
            n++;
        } while (n < 3);
        if (n == 3) {
            r = 0x100;
        }
        break;
    }
    if (r != 0) {
        a0->state = 0;
    }
    return r;
}
// GIVEN UP: the switch chain and the case blocks are in the original order, but the pair block loads the
// first field into another register ($v1 for $a1) and the rest is 0x18 bytes longer (4 forms tried)
#if 0
static inline s32 BtlCmd_PairAt(u8 *a0, s32 op, s32 oq) {
    s16 p = *(s16 *)(a0 + op);
    if (p == 1 && *(s16 *)(a0 + oq) > 0 && *(s16 *)(a0 + oq) < 5) {
        return 1;
    }
    if (*(s16 *)(a0 + oq) == 1 && p > 0 && p < 5) {
        return 1;
    }
    return 0;
}

s32 func_001A9230(u8 *a0, s32 a1) {
    s16 k = (s16)a1;

    switch (k) {
    case 0x10:
        if (*(s16 *)(a0 + 0x42C) == 1) {
            return 1;
        }
        break;
    case 0x20:
        if (*(s16 *)(a0 + 0x42E) == 1) {
            return 1;
        }
        break;
    case 0x40:
        if (*(s16 *)(a0 + 0x432) == 1) {
            return 1;
        }
        break;
    case 0x80:
        if (*(s16 *)(a0 + 0x430) == 1) {
            return 1;
        }
        break;
    case 0x30:
        if (BtlCmd_PairAt(a0, 0x42C, 0x42E)) {
            return 1;
        }
        break;
    case 0x90:
        if (BtlCmd_PairAt(a0, 0x42C, 0x432)) {
            return 1;
        }
        break;
    case 0x60:
        if (BtlCmd_PairAt(a0, 0x430, 0x42E)) {
            return 1;
        }
        break;
    case 0xC0:
        if (BtlCmd_PairAt(a0, 0x430, 0x432)) {
            return 1;
        }
        break;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9230);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9460);
#if 0
/* differs: 49 of 69 instructions (the switch form of an earlier round: the op and entry registers differ). */
s32 func_001A99C0(BtlCmdObj *a0, BtlCmdPair *a1, s32 a2) {
    s32 r = 0;
    BtlCmdPair *e;

    if (a2 != 0 && a0->ent[a0->cur].b == 1) {
        r = 1;
    }
    switch (a1->a) {
    case 1:
        e = &a0->ent[a0->cur];
        if (e->a != 1) {
            return 0;
        }
        if (D_0047056C != 0 && e->b >= 13) {
            return 0;
        }
        break;
    case 2:
        e = &a0->ent[a0->cur];
        if (e->a != -1) {
            return 0;
        }
        if (D_0047056C != 0 && e->b >= 13) {
            return 0;
        }
        break;
    default:
        r = 0;
        break;
    }
    return func_001A9460(a0, a1->b, r);
}
#endif
/* differs: 8 of 67 instructions; the switch value and the entry pointer take $a3 and $a2 the other way round
 * (the original keeps the entry in $a2 and the case value in $a2 too, then the constant 1 in $a3). The
 * `> 12` tests give the original's slti $at form. Tried: switch value in a local, declaration orders. */
s32 func_001A99C0(u8 *a0, s16 *a1, s32 a2)
{
  s32 v;
  u8 *e;
  v = 0;
  if (a2 != 0)
  {
    e = (u8 *) (((*((s32 *) (a0 + 0x58))) << 2) + ((s32) a0));
    if ((*((s16 *) (e + 0x66))) == 1)
    {
      v = 1;
    }
  }
  if (v)
  {
    a2 = a1[0];
  }
  else
  {
    a2 = a1[0];
  }
  switch (a2)
  {
    case 1:
      e = (u8 *) (((*((s32 *) (a0 + 0x58))) << 2) + ((s32) a0));
      if ((*((s16 *) (e + 0x64))) != 1)
    {
      return 0;
    }
      if ((D_0047056C != 0) && ((*((s16 *) (e + 0x66))) > 12))
    {
      return 0;
    }
      break;

    case 2:
      e = (u8 *) (((*((s32 *) (a0 + 0x58))) << 2) + ((s32) a0));
      if ((*((s16 *) (e + 0x64))) != (-1))
    {
      return 0;
    }
      if ((D_0047056C != 0) && ((*((s16 *) (e + 0x66))) > 12))
    {
      return 0;
    }
      break;

    default:
      v = 0;
      break;

  }

  return func_001A9460(a0, a1[1], v);
}

INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9AD0);
void func_001AA450(BtlRank *a0) {
    s32 p;
    s32 j;
    s32 i;
    s32 x;

    for (p = 0; p < 2; p++) {
        for (j = 0; j < 4; j++) {
            if (p == 0) {
                x = *(s32 *)(D_00492FC0 + a0->idx * 184 + j * 4 + 0x38);
            } else {
                x = *(s32 *)(D_00492FC0 + a0->idx * 184 + j * 4 + 0x84);
            }
            if (x <= 0) {
                a0->cnt[j] = (x < a0->cnt[j]) ? a0->cnt[j] : x;
            } else {
                if (a0->cnt[j] <= 0) {
                    a0->cnt[j] = x;
                } else {
                    a0->cnt[j] = (a0->cnt[j] < x) ? a0->cnt[j] : x;
                }
            }
        }
    }
    for (i = 0; i < 4; i++) {
        if (a0->cnt[i] == 1) {
            if (i != a0->hist[a0->hpos]) {
                a0->hpos = (a0->hpos + 1) % 3;
                a0->hist[a0->hpos] = i;
                if (a0->state < 4) {
                    a0->state++;
                }
            }
        }
    }
}
extern u8 D_00492FF0[];

// GIVEN UP: the max/min folds are right, but the original keeps the entry address and the flag address in other
// registers, loads the index in each step and is 18 instructions longer (0x2A0 against 0x258; 4 forms tried)
#if 0
static inline void BtlCmd_Fold(s32 *cur, s32 v) {
    if (v > 0) {
        if (*cur > 0) {
            if (*cur < v) {
                *cur = v;
            }
        } else {
            *cur = v;
        }
    } else {
        if (v < *cur) {
            *cur = v;
        }
    }
}

void func_001AA5C0(u8 *a0) {
    s32 idx;
    s32 t0;
    s32 a3;
    s32 v;
    s32 flags;
    u8 *ent;

    idx = *(s16 *)(a0 + 0x44);
    if (idx >= 0) {
        *(s32 *)(a0 + 0x48) = 0x80000000;
        *(s32 *)(a0 + 0x4C) = 0x80000000;
        *(s32 *)(a0 + 0x50) = 0x80000000;
        *(s32 *)(a0 + 0x54) = 0x80000000;
        for (t0 = 0; t0 < 2; t0++) {
            for (a3 = 0; a3 < 8; a3++) {
                flags = *(s8 *)((u8 *)gBattle + idx * 8 + 0x88B0 + a3);
                ent = D_00492FC0 + *(s16 *)(a0 + 0x44) * 184;
                if (t0 == 0) {
                    v = *(s32 *)(ent + a3 * 4 + 0x48);
                } else {
                    v = *(s32 *)(ent + a3 * 4 + 0x94);
                }
                if ((flags & 1) != 0) {
                    BtlCmd_Fold((s32 *)(a0 + 0x48), v);
                }
                if ((flags & 2) != 0) {
                    BtlCmd_Fold((s32 *)(a0 + 0x4C), v);
                }
                if ((flags & 4) != 0) {
                    BtlCmd_Fold((s32 *)(a0 + 0x50), v);
                }
                if ((flags & 8) != 0) {
                    BtlCmd_Fold((s32 *)(a0 + 0x54), v);
                }
            }
        }
        ent = D_00492FF0 + idx * 184;
        v = *(s32 *)ent;
        BtlCmd_Fold((s32 *)(a0 + 0x50), v);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA5C0);
void func_001AA860(BtlRank *a0) {
    s32 x;

    if (a0->idx >= 0) {
        a0->f48 = 0x80000000;
        a0->f4C = 0x80000000;
        a0->f50 = 0x80000000;
        a0->f54 = 0x80000000;
        x = *(s32 *)(D_00493024 + a0->idx * 184);
        if (x <= 0) {
            a0->f48 = (x < a0->f48) ? a0->f48 : x;
        } else {
            a0->f48 = x;
        }
        x = *(s32 *)(D_00493018 + a0->idx * 184);
        if (x <= 0) {
            a0->f4C = (x < a0->f4C) ? a0->f4C : x;
        } else {
            a0->f4C = x;
        }
        x = *(s32 *)(D_00493020 + a0->idx * 184);
        if (x <= 0) {
            a0->f50 = (x < a0->f50) ? a0->f50 : x;
        } else {
            a0->f50 = x;
        }
        x = *(s32 *)(D_0049301C + a0->idx * 184);
        if (x <= 0) {
            a0->f54 = (x < a0->f54) ? a0->f54 : x;
        } else {
            a0->f54 = x;
        }
    }
}
typedef struct BtlU9 { u16 v[9]; } BtlU9;
extern BtlU9 D_00427440 __attribute__((aligned(16)));

// The 18-byte table is copied as an aligned(16) struct of 9 halfwords (lq + lh, sq + sh); n = 0 comes before the copy
// so that the table address lands in v1.
s32 func_001AA9D0(s32 a0) {
    BtlU9 buf __attribute__((aligned(16)));
    u16 *p;
    s32 mask;
    s32 n;

    n = 0;
    buf = D_00427440;
    if (buf.v[0] != 0) {
        mask = *(u16 *)(D_00492FC0 + a0 * 184 + 0xE) | *(u16 *)(D_00492FC0 + a0 * 184 + 0x6E);
        p = buf.v;
        do {
            if ((*p & mask) != 0) {
                n++;
            }
            p++;
        } while (*p != 0);
    }
    return n;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAA60);
// GIVEN UP: 0x14C against 0x160 (fdiff): the original sign-extends s1, s2 and s3 at the return and s1 again before its shift in the third loop; s16 locals for all three break the loops (90 of 94); s1-only s16 gives the loop extension but not the return (2 forms)
#if 0
s32 func_001AAEA0(BtlRank *a0, s32 a1) {
    s32 s3;
    s32 s2;
    s16 s1;
    s32 s0;

    s3 = 0;
    s2 = 0;
    s1 = 0;
    s0 = a1;
    func_001AA860(a0);
    func_001AA450(a0);
    s0 = (s16)s0;
    if ((s0 & 0xF) != 0) {
        s3 = 1;
        do {
            if (func_001A9460(a0, s3, 0) != 0) {
                break;
            }
            s3 = (s16)(s3 << 1);
        } while (s3 <= 8);
    }
    if ((s0 & 0xF0) != 0) {
        s2 = 0x10;
        do {
            if (func_001A9230(a0, s2) != 0) {
                break;
            }
            s2 = (s16)(s2 << 1);
        } while (s2 <= 0x80);
    }
    if ((s0 & 0x300) != 0) {
        s1 = 0x100;
        do {
            if (func_001A90E0(a0, s1) != 0) {
                break;
            }
            s1 = (s16)(s1 << 1);
        } while (s1 <= 0x200);
    }
    return (s16)(s0 & (s1 | s2 | s3));
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAEA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AB000);
