#include "common.h"

/* A task's work: its function (f1C), a position (f3C), a speed (f40) and the entity it moves (f48). */
typedef struct Ent2FAFF0 {
    s32 f0;
    s8 f4;
    char pad5[0x7];
    f32 fC;
    f32 f10;
} Ent2FAFF0;

/* The part of a task at 0x30 that the task functions use. */
typedef struct Sub2FAFF0 {
    char pad0[0xC];
    f32 fC;
    char pad10[0x8];
    Ent2FAFF0 *f18;
} Sub2FAFF0;

typedef struct Task2FAFF0 {
    char pad0[0x1C];
    void (*f1C)(struct Task2FAFF0 *);
    char pad20[0x10];
    s32 f30;
    s32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    s32 f44;
    Ent2FAFF0 *f48;
} Task2FAFF0;

/* An animation's state, at 0x30 of the work of gTourMap->f40. */
typedef struct Anim2FAFF0 {
    s32 f0;
    f32 f4;
    s32 f8;
} Anim2FAFF0;

typedef struct Sys2FAFF0 {
    char pad0[0x18];
    s32 f18;
    char pad1C[0x50];
    s32 f6C;
    char pad70[0x14];
    s32 f84;
    char pad88[0x21C];
    s32 f2A4;
    s32 f2A8;
    char pad2AC[0x64];
    s32 f310;
    s32 f314;
    s32 f318;
} Sys2FAFF0;

typedef struct SysB2FAFF0 {
    char pad0[0x1C];
    Sys2FAFF0 *f1C;
} SysB2FAFF0;

/* A counter at 0x10C of the save work: the value (f8) is at 0x114. */
typedef struct Cnt2FAFF0 {
    char pad0[0x8];
    s32 f8;
    char padC[0x4];
} Cnt2FAFF0;

typedef struct SaveWork2FAFF0 {
    char pad0[0x30];
    SysB2FAFF0 *f30;
    char pad34[0xC];
    char *f40;
    struct Pos3_2FAFF0 *f44;
    char pad48[0x8];
    f32 f50;
    char pad54[0x4];
    s32 f58;
    char pad5C[0xB0];
    Cnt2FAFF0 f10C;
    char pad11C[0x178];
    s32 f294;
} SaveWork2FAFF0;

extern SaveWork2FAFF0 *gTourMap;
extern s32 func_0022BC30(s32, f32);
extern f32 gFrameDelta;
extern s32 Save_GetState(void);
extern s32 Zenie_GetState(void);
extern void Zenie_Update(void);
extern void func_00208F70(s32);
extern void func_002FBAE0(struct Task2FAFF0 *);
extern void func_002FBE20(struct Task2FAFF0 *);
extern void Save_Exit(void);
extern void Scene_FadeTo(s32, s32);

extern void amTask_Kill(void *);
typedef struct Vec4_2FAFF0 {
    f32 x, y, z, w;
} Vec4_2FAFF0;

/* A position: x, y, z at 0x30, 0x34, 0x38 of the object at gTourMap->f44. */
typedef struct Pos3_2FAFF0 {
    char pad0[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
} Pos3_2FAFF0;

extern s8 D_005CA030[];
extern s8 D_004B4B63[];
extern u16 D_00492FCC[];
extern u16 D_00493084[];
extern u32 D_00458BA0[];
extern void func_00146F30(void *);
extern void func_00146F10(f32, void *);

/* A pair of values (a table of D_00458C20, copied to the stack) and a slot of the work (stride 0x30). */
typedef struct Pair2FAFF0 {
    s32 a;
    s32 b;
} Pair2FAFF0;

typedef struct PairTbl2FAFF0 {
    Pair2FAFF0 v[4];
} PairTbl2FAFF0;

typedef struct Slot2FAFF0 {
    s32 f0;
    char pad4[0x4];
    s32 f8;
    char padC[0x24];
} Slot2FAFF0;

extern PairTbl2FAFF0 D_00458C20;
extern s32 func_002FFD20(s32);
void TourMap_TaskSlide(struct Task2FAFF0 *);
void TourMap_TaskSlideF10(Task2FAFF0 *t);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FAFF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FB170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FB4C0);
void TourMap_TaskSaveWait(Task2FAFF0 *t) {
    gTourMap->f294 = gTourMap->f294 + 1;
    if (Save_GetState() > 2) {
        Save_Exit();
        Scene_FadeTo(-1, 0);
        t->f1C = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FBAE0);
void func_002FBD90(Task2FAFF0 *t) {
    SaveWork2FAFF0 *w = gTourMap;
    Anim2FAFF0 *a;

    a = (Anim2FAFF0 *)(w->f40 + 0x30);
    w->f294 = w->f294 + 1;
    Zenie_Update();
    func_00208F70(a->f8);
    if (Zenie_GetState() == 4) {
        a->f0 = a->f0 + 1;
        t->f1C = (func_002FBAE0 == 0) ? 0 : func_002FBAE0;
    }
}
#if 0
// differs: compiled 0x114 bytes, original 0x120; the original keeps the task in s2 and t+0x30 in s1, the compiler folds t+0x30 into t (a struct view or a char pointer did not change it)
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern s32 D_004DFAE8[];
extern void Zenie_SetTarget(s32);
extern void Zenie_SetStep(s32);
void func_002FBE20(Task2FAFF0 *t) {
    SaveWork2FAFF0 *w;
    Anim2FAFF0 *a;

    *(s32 *)&t->f38 = *(s32 *)&t->f38 + 1;
    w = gTourMap;
    w->f294 = w->f294 + 1;
    a = (Anim2FAFF0 *)(gTourMap->f40 + 0x30);
    Zenie_Update();
    func_00208F70(a->f8);
    if (((D_00492FCE[0] | D_00493086[0]) & 0x4008) == 0) {
        if ((f32)*(s32 *)&t->f38 * gFrameDelta <= 120.0f) {
            return;
        }
    }
    a->f0 = a->f0 + 1;
    *(s32 *)&t->f38 = 0;
    Zenie_SetTarget(D_004DFAE8[0] + gTourMap->f58);
    Zenie_SetStep(gTourMap->f58 / 100);
    t->f1C = (func_002FBD90 == 0) ? 0 : func_002FBD90;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FBE20);
void func_002FBF40(Task2FAFF0 *t) {
    SaveWork2FAFF0 *w = gTourMap;
    Anim2FAFF0 *a;

    a = (Anim2FAFF0 *)(w->f40 + 0x30);
    w->f294 = w->f294 + 1;
    Zenie_Update();
    func_00208F70(a->f8);
    if (Zenie_GetState() == 4) {
        a->f0 = a->f0 + 1;
        t->f1C = (func_002FBE20 == 0) ? 0 : func_002FBE20;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FBFD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FC510);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FC660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FC800);
#if 0
// differs: the 32-byte table copy to the stack is lq/sq in the original; mwcc copies a struct with lwc1/swc1
void func_002FC9F0(void) {
    PairTbl2FAFF0 p;
    Slot2FAFF0 *sl;
    s32 i = 0;

    p = *(PairTbl2FAFF0 *)&D_00458C20;
    sl = (Slot2FAFF0 *)((char *)gTourMap + 0x19C);
    do {
        if (sl->f0 == p.v[i].a) {
            if (func_002FFD20(i) != 0) {
                sl->f0 = p.v[i].b;
                if (sl->f8 < 11) {
                    sl->f8 = 10 - sl->f8;
                } else {
                    sl->f8 = 0;
                }
            }
        } else {
            if (func_002FFD20(i) == 0) {
                sl->f0 = p.v[i].a;
                if (sl->f8 < 11) {
                    sl->f8 = 10 - sl->f8;
                } else {
                    sl->f8 = 0;
                }
            }
        }
        i++;
        sl++;
    } while (i < 4);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FC9F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FCAF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FCF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FD090);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FD560);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FD7E0);
extern u32 func_0012EAE0(s32);
extern s16 D_0046B5B0[];
s16 func_002FD9F0(u64 mask) {
    u64 bits = mask;
    s32 cnt = 0;
    s32 r;
    s32 k;

    if (mask != 0) {
        do {
            if (mask & 1) {
                cnt++;
            }
            mask >>= 1;
        } while (mask != 0);
    }
    if (cnt == 0) {
        return 0;
    }
    r = (s32)(func_0012EAE0(32) % (u32)cnt);
    k = 0;
    if (0 <= r) {
        do {
            if (!(bits & ((u64)1 << k))) {
                r++;
            }
            k++;
        } while (r >= k);
    }
    return D_0046B5B0[r];
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FDAC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FDF70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FE1B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FE5A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FE7A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FEBD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FED60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FEED0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FF610);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FFD20);
void func_00300330(Task2FAFF0 *t) {
    SysB2FAFF0 *b = gTourMap->f30;
    s32 r = -1;
    Cnt2FAFF0 *c = &gTourMap->f10C;

    r = r & func_0022BC30(b->f1C->f6C, (f32)c->f8 * gFrameDelta);
    r = r & func_0022BC30(b->f1C->f18, (f32)c->f8 * gFrameDelta);
    r = r & func_0022BC30(b->f1C->f84, (f32)c->f8 * gFrameDelta);
    if (r == 0xFF) {
        amTask_Kill(t);
    }
    c->f8 = c->f8 + 1;
}
void func_00300400(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);
    Ent2FAFF0 *e = t->f48;
    s32 r = -1;

    r = r & func_0022BC30(gTourMap->f30->f1C->f2A8, 0.5f * ((f32)e->f0 * gFrameDelta));
    if (r == 0xFF) {
        s->f18->f4 = 4;
        s->f18->f0 = 0;
        amTask_Kill(t);
    }
    s->f18->f0 = s->f18->f0 + 1;
}
#if 0
// differs: the object pointer a0+0x30 is computed before the first field load in the original; mwcc computes it at its first use
void func_003004B0(Task2FAFF0 *t) {
    Ent2FAFF0 *e = t->f48;
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);

    e->f10 = e->f10 - t->f40;
    e = t->f48;
    if (e->f10 < t->f3C) {
        e->f10 = t->f3C;
        t->f40 = 5.0f * gFrameDelta;
        t->f44 = 1;
        if (e->fC > s->f18->fC) {
            t->f44 = -t->f44;
            t->f40 = -t->f40;
        }
        t->f1C = (TourMap_TaskSlide == 0) ? 0 : TourMap_TaskSlide;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_003004B0);
void TourMap_TaskSlide(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);
    f32 v;
    f32 k;

    t->f48->fC = t->f48->fC + t->f40;
    v = t->f38;
    k = (f32)t->f44;
    if (t->f48->fC * k > v * k) {
        t->f48->fC = v;
        s->f18->f4 = 1;
        amTask_Kill(t);
    }
}
void TourMap_TaskWaitEntity(Task2FAFF0 *t) {
    Ent2FAFF0 *e = t->f48;
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);

    if (e->f4 == 1) {
        s->fC = e->f10 - 50.0f;
        s->f18->f4 = 2;
        t->f1C = (TourMap_TaskSlideF10 == 0) ? 0 : TourMap_TaskSlideF10;
    }
}
void TourMap_TaskSlideF10(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);

    t->f48->f10 = t->f48->f10 + t->f40;
    if (t->f48->f10 < t->f3C) {
        t->f48->f10 = t->f3C;
        s->f18->f4 = 1;
        amTask_Kill(t);
    }
}
void func_00300670(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);
    s32 r = -1;
    SysB2FAFF0 *b = gTourMap->f30;
    Ent2FAFF0 *e = t->f48;

    r = r & func_0022BC30(b->f1C->f310, (f32)e->f0 * gFrameDelta);
    r = r & func_0022BC30(b->f1C->f314, (f32)s->f18->f0 * gFrameDelta);
    r = r & func_0022BC30(b->f1C->f318, (f32)s->f18->f0 * gFrameDelta);
    if (r == 0xFF) {
        s->f18->f4 = 1;
        s->f18->f0 = 0;
        amTask_Kill(t);
    }
    s->f18->f0 = s->f18->f0 + 1;
}
void func_00300760(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);
    Ent2FAFF0 *e = t->f48;
    s32 r = -1;

    r = r & func_0022BC30(gTourMap->f30->f1C->f2A4, (f32)e->f0 * gFrameDelta);
    if (r == 0xFF) {
        s->f18->f4 = 1;
        s->f18->f0 = 0;
        amTask_Kill(t);
    }
    s->f18->f0 = s->f18->f0 + 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_00300800);
#if 0
// differs: not compiling yet: the flag table copy (lq/sq) is in inline asm; the position update and the loop are not compared against the original
void func_003009E0(void) {
    Vec4_2FAFF0 v;
    s32 i;
    u16 flags;

    asm volatile("lq $v1, 0(%1)\n\tsq $v1, 0(%0)" : : "r"(&v), "r"(D_00458BA0) : "$3");
    if (D_005CA030[0] == 1) {
        flags = *(u16 *)((char *)D_00492FCC + 184 * D_004B4B63[0]);
    } else {
        flags = D_00492FCC[0] | D_00493084[0];
    }
    if (flags & 0x80) {
        v.x = -1.0f;
    }
    if (flags & 0x20) {
        v.x = 1.0f;
    }
    if (flags & 0x10) {
        v.y = -1.0f;
    }
    if (flags & 0x40) {
        v.y = 1.0f;
    }
    func_00146F30(&v);
    func_00146F10(gTourMap->f50, &v);
    gTourMap->f44->f30 = gTourMap->f44->f30 + v.x;
    gTourMap->f44->f34 = gTourMap->f44->f34 + v.y;
    gTourMap->f44->f38 = gTourMap->f44->f38 + v.z;
    for (i = 0; i < 4; i++) {
        func_002FFD20(i);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_003009E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_00300B60);
void func_00300CA0(Task2FAFF0 *t) {
    Anim2FAFF0 *a;
    s32 *c = &t->f30;
    f32 f1;
    f32 f0;

    a = (Anim2FAFF0 *)(gTourMap->f40 + 0x30);
    f1 = (f32)t->f30 * gFrameDelta;
    f0 = (f32)t->f34;
    if (f1 > f0) {
        a->f4 = 1.0f;
        amTask_Kill(t);
    } else {
        a->f4 = f1 / f0;
    }
    *c = *c + 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_00300D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_00300F70);
