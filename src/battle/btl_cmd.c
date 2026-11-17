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
    /* 0x0C */ u8 unk0C[0x4C - 0x0C];
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
MotEntry *func_001A5130(MotFile *f, s32 i) {
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
// GIVEN UP: the search is laid out with a shared exit and different registers for the index and the keys (4 declaration orders tried); func_001A5490 now passes its float to it
#if 0
s32 func_001A51E0(MotTrack *a0, s32 a1, f32 t) {
    MotKey *k;
    s32 half;
    s32 i;

    if (t < 1.0f) {
        return 0;
    }
    if (a1 == -1) {
        k = a0->keys;
        i = a0->numKeys >> 1;
        half = (a0->numKeys + 1) >> 1;
        while (half >= 2) {
            if ((f32)k[i].time <= t) {
                i += half >> 1;
            } else {
                i -= half >> 1;
            }
            half = (half + 1) >> 1;
        }
        if (!((f32)k[i].time <= t)) {
            i -= 1;
        }
        return i;
    }
    k = a0->keys;
    i = a1;
    for (;;) {
        if ((f32)k[i].time <= t) {
            if ((f32)k[i + 1].time <= t) {
                i += 1;
            } else {
                return i;
            }
        } else {
            i -= 1;
        }
        if (i <= 0) {
            return 0;
        }
        if (i >= a0->numKeys - 1) {
            return a0->numKeys - 1;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A51E0);
extern void func_0013C1E0(void *, f32, f32);
extern void amMotion_Update(void *, s32);

// GIVEN UP: 8 of 77 instructions differ: the original computes the table index (the high half minus one) before the
// low half of the value, and the register choice follows (4 orders tried)
#if 0
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
        pt = *(u8 **)(s0 + 0x46C + (hi << 2));
        *(f32 *)(s0 + 0x424) = (f32)(*(s32 *)(*(u8 **)(pt + 0x14) + ((a3 & 0xFFFF) << 4) + 8) - 1);
        amMotion_Update(s0, 0);
    }
    func_0013C1E0(s0, 0.0f, f20);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5350);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5510);
void BtlSlots_Clear(BtlSlots *s, s32 i) {
    s->slot[i] = 0;
}
void BtlSlots_Set(BtlSlots *s, s32 i, s32 v) {
    s->slot[i] = v;
}

// GIVEN UP: x / 6 and the stores match; the 0x5C store is moved into the delay slot of the `a1 != 0` test (the original keeps it before the branch)
#if 0
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
    if (a1 != NULL) {
        x = -1;
        *(u8 **)a0 = a1;
        *(s32 *)(a0 + 4) = a2;
        t = *(s32 **)(*(u8 **)a0 + a2 * 4 + 0x46C);
        if (t != NULL) {
            x = t[4];
        }
        *(s32 *)(a0 + 8) = x / 6;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5640);
void func_001A5700(MotFile2 *f) {
    s32 i;
    if (f->count > 0 && f->tracks != 0) {
        f->tracks = (MotTrack *)((u8 *)f + (s32)f->tracks);
        for (i = 0; i < f->count; i++) {
            f->tracks[i].keys = (MotKey *)((u8 *)f + (s32)f->tracks[i].keys);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5770);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A80E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A81F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8300);
void func_001A83D0(void) {
    amTask_KillGroup(0x20, 0x20000010, 1);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A83F0);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A84B0);
void func_001A8630(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8640);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8BD0);
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
// GIVEN UP: the switch and its blocks match in order, but the registers of the op and the entry differ and the returns are laid out differently
#if 0
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A99C0);
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
                flags = *(s8 *)((u8 *)D_00470570 + idx * 8 + 0x88B0 + a3);
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
extern u8 D_00427440[];

typedef struct BtlCopy16 {
    s32 a, b, c, d;
} __attribute__((aligned(16))) BtlCopy16;

typedef struct BtlCopy18 {
    BtlCopy16 a;
    s16 b;
} __attribute__((aligned(16))) BtlCopy18;

// GIVEN UP: the 18-byte copy is lq + lh from one base register and sq + sh (the copy is 32 bytes in C: lq + lq);
// the struct and pointer forms of the copy did not give the original's order (4 forms tried)
#if 0
s32 func_001AA9D0(s32 a0) {
    BtlCopy18 buf;
    u16 *p;
    s32 mask;
    s32 n;
    u8 *src;

    src = D_00427440;
    buf.a = *(BtlCopy16 *)src;
    buf.b = *(s16 *)(src + 0x10);
    n = 0;
    if (*(u16 *)&buf != 0) {
        mask = *(u16 *)(D_00492FC0 + a0 * 184 + 0xE) | *(u16 *)(D_00492FC0 + a0 * 184 + 0x6E);
        p = (u16 *)&buf;
        do {
            if ((*p & mask) != 0) {
                n++;
            }
            p++;
        } while (*p != 0);
    }
    return n;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA9D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAA60);
// GIVEN UP: 0x160 against 0x14C: the loop variable of the third loop is kept as s16 (extended before the shift) and its call passes it without the extension (5 forms tried)
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
