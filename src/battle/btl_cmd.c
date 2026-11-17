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
extern s32 func_001A51E0(MotTrack *, s32);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A51E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A5350);
s32 func_001A5490(MotFile *f, s32 track, f32 t) {
    MotTrack *tr = &f->tracks[track];
    s32 i;
    if ((f32)(tr->keys[tr->numKeys - 1].time - 1) <= t) {
        i = tr->numKeys - 1;
    } else {
        i = func_001A51E0(tr, -1);
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8D90);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A8E60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A90E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9230);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9460);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A99C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001A9AD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA450);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA5C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA860);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AA9D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAA60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AAEA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_cmd", func_001AB000);
