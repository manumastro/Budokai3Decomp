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
#if 0
/* Does not match yet: 3 of 16 instructions differ. */
s32 func_001A50F0(MotFile *f, s32 i) {
    s32 r = 0;
    MotEntry *e = Mot_GetEntry(f, i);
    if (e != 0) {
        r = e->data;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A50F0);
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
void func_001A5620(BtlSlots *s, s32 i) {
    s->slot[i] = 0;
}
void func_001A5630(BtlSlots *s, s32 i, s32 v) {
    s->slot[i] = v;
}

// GIVEN UP: the index and the base pointer take the other two registers (sll into a0, lw into v1 in the original)
#if 0
void func_001A5640(BtlSlotRec *s, s32 a1, s32 a2) {
    s32 *e;
    s32 v;
    s32 off;

    memset(s, 0, 0x60);
    v = -1;
    s->unk4E = v;
    s->unk4C = v;
    s->unk50 = v;
    s->unk54 = -1.0f;
    s->unk4D = v;
    s->unk4F = v;
    s->unk58 = v;
    s->unk5C = -1.0f;
    s->unk00 = a1;
    if (a1 != 0) {
        s->unk04 = a2;
        off = a2 * 4;
        e = *(s32 **)((u8 *)s->unk00 + 0x46C + off);
        v = (e != 0) ? e[4] : v;
        s->unk08 = v / 6;
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
    u8 *s0 = (u8 *)D_00470570;
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
void func_001A8850(void) {
    amTask_KillGroup(0x20, 0x20000000, 1);
    amTask_Create(func_001A8300, 0, 0x5500, 0x20, 0x20000002, D_004681D0);
    func_001A8640();
}
void func_001A88B0(void) {
    amTask_KillGroup(0x20, 0x20000000, 1);
}
void func_001A88C0(void) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA9D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAA60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAEA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AB000);
