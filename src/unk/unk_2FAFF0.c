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
    char pad0[0x8];
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
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
    char pad48[0x4];
    s32 f4C;
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

typedef struct Pv28 {
    f32 f0, f4, f8, fC, f10, f14, f18;
} Pv28;

typedef struct V16_2FAFF0 {
    s32 v[4];
} __attribute__((aligned(16))) V16_2FAFF0;

extern s16 D_0046B5B0[];
extern Pv28 D_00455920[];
extern f32 D_0046FD80;
extern u8 D_003F0800[];

extern void func_0013B0B0(void *);
extern void func_00131B90(void *);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(s32);
extern void func_00133D10(s32);
extern void func_0029D6C0(void *);
extern void func_0029D740(void *);
extern void func_0029D8B0(s32, s32);
extern void func_0013BC00(f32, f32, f32);
extern void func_0029DB00(void *, f32);
extern void func_0013B110(s32);
extern void func_00133B50(s32, s32);

void func_002FAFF0(Task2FAFF0 *t) {
    V16_2FAFF0 buf[6];

    if (!t) {
        return;
    }
    func_0013B0B0(D_003F0800);
    func_00131B90(buf);
    func_00131F00(buf, 0.0f, 0.0f);
    func_00132DF0(0);
    func_00133D10(0);
    {
        Pv28 *s1 = &D_00455920[D_0046B5B0[*(s32 *)(*(char **)t + 0xC)]];
        Vec4_2FAFF0 vec = {0};
        Vec4_2FAFF0 v2;

        vec.x = s1->f10;
        vec.y = s1->f14;
        vec.z = s1->f18;
        func_0029D6C0(&vec);
        v2.x = 0.0f;
        v2.y = 0.0f;
        v2.z = 1.0f;
        v2.w = 1.0f;
        func_0029D740(&v2);
        D_0046FD80 = s1->fC;
        func_0029D8B0(-1, 4);
        func_0013BC00(0.0f, 0.0f, D_00455920[D_0046B5B0[*(s32 *)(*(char **)t + 0xC)]].f8);
        func_0029DB00(t, 1.0f);
        func_0013B110(1);
        func_00133B50(0, 0);
    }
}
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
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern s32 D_004DFAE8[];
extern void Zenie_SetTarget(s32);
extern void Zenie_SetStep(s32);
typedef struct SubN2FAFF0 {
    char pad0[0x8];
    s32 f8;
} SubN2FAFF0;

void func_002FBE20(Task2FAFF0 *t) {
    SubN2FAFF0 *s = (SubN2FAFF0 *)((char *)t + 0x30);
    SaveWork2FAFF0 *w;
    Anim2FAFF0 *a;

    *(s32 *)&t->f38 = *(s32 *)&t->f38 + 1;
    w = gTourMap;
    a = (Anim2FAFF0 *)(w->f40 + 0x30);
    w->f294 = w->f294 + 1;
    Zenie_Update();
    func_00208F70(a->f8);
    if (((D_00492FCE[0] | D_00493086[0]) & 0x4008) != 0 || (f32)s->f8 * gFrameDelta > 120.0f) {
        a->f0 = a->f0 + 1;
        s->f8 = 0;
        Zenie_SetTarget((u32)D_004DFAE8[0] + gTourMap->f58);
        Zenie_SetStep(gTourMap->f58 / 100);
        t->f1C = (func_002FBD90 == 0) ? 0 : func_002FBD90;
    }
}
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
extern void Zenie_SetValue(s32, s32);
extern s32 D_004DFAE8[];
extern void Zenie_Open(s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern u8 D_004E0618[];
extern void func_002FB170(Task2FAFF0 *);
extern void func_002FB4C0(Task2FAFF0 *);
extern void func_002FBFD0(Task2FAFF0 *);
void func_002FC510(Task2FAFF0 *t) {
    Task2FAFF0 *q = (Task2FAFF0 *)gTourMap->f40;
    s32 *p;

    q->f30 = q->f30 + 1;
    p = &q->f30;
    if ((f32)q->f30 * gFrameDelta <= 120.0f) {
        return;
    }
    Zenie_SetValue(D_004DFAE8[0], D_004DFAE8[0]);
    Zenie_Open(0);
    *p = 0;
    t->f1C = (func_002FBFD0 == 0) ? 0 : func_002FBFD0;
    if (gTourMap->f4C != 0) {
        q = (Task2FAFF0 *)gTourMap->f40;
        q->f1C = (func_002FB4C0 == 0) ? 0 : func_002FB4C0;
    } else {
        q = (Task2FAFF0 *)gTourMap->f40;
        q->f1C = (func_002FB170 == 0) ? 0 : func_002FB170;
    }
    if (gTourMap->f4C == 2) {
        amAdx_SetVolume(0, *(f32 *)D_004E0618);
        amAdx_Pause(0, 0);
        amAdx_PlayAfs(0, 0x211B2, 0);
    } else {
        amAdx_SetVolume(0, *(f32 *)D_004E0618);
        amAdx_Pause(0, 0);
        amAdx_PlayAfs(0, 0x211B1, 0);
    }
}
extern s32 func_0029E7F0(u8 *);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern void func_0029DD30(s32, f32);
extern s32 func_00209540(s32, s32, s32);
extern void func_00209A90(s32, s32 *);
extern s32 D_00458C60[];
extern void func_002FACA0();
void func_002FC660(Task2FAFF0 *t) {
    s32 i;
    s32 e;
    Anim2FAFF0 *a;

    for (i = 0; i < 9; i++) {
        e = ((s32 *)gTourMap)[i];
        if (e != 0 && *(s16 *)(e + 4) != 3) {
            return;
        }
    }
    if (Zenie_GetState() != 1) {
        return;
    }
    if (*(s32 *)((char *)gTourMap + 0x74) != 0) {
        if (func_0029E7F0((u8 *)*(s32 *)((char *)gTourMap + 0x74)) == 0) {
            return;
        }
        func_0029E610(*(s32 *)((char *)gTourMap + 0x74));
        func_0029E120(*(s32 *)((char *)gTourMap + 0x74),
                      *(s32 *)(*(s32 *)*(s32 *)((char *)gTourMap + 0x74) + 0xC), 1, 1.0f, 0.0f);
        func_0029DD30(*(s32 *)((char *)gTourMap + 0x74), 1.0f);
    }
    *(s32 *)((char *)gTourMap + 0x34) = *(s32 *)(*(s32 *)((char *)gTourMap + 0x8) + 0x54);
    amFile_Load(*(s32 *)((char *)gTourMap + 0x34));
    *(s32 *)((char *)gTourMap + 0x28) = *(s32 *)(*(s32 *)((char *)gTourMap + 0xC) + 0x54);
    amFile_Load(*(s32 *)((char *)gTourMap + 0x28));
    *(s32 *)((char *)gTourMap + 0x2C) = *(s32 *)(*(s32 *)((char *)gTourMap + 0x10) + 0x54);
    amFile_Load(*(s32 *)((char *)gTourMap + 0x2C));
    *(s32 *)((char *)gTourMap + 0x38) = *(s32 *)(*(s32 *)((char *)gTourMap + 0x14) + 0x54);
    amFile_Load(*(s32 *)((char *)gTourMap + 0x38));
    a = (Anim2FAFF0 *)(gTourMap->f40 + 0x30);
    a->f8 = func_00209540(*(s32 *)((char *)gTourMap + 0x38), 0, 0);
    func_00209A90(a->f8, D_00458C60);
    t->f1C = (func_002FC510 == 0) ? 0 : func_002FC510;
    func_002FACA0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FC800);
typedef struct Tbl32_2FAFF0 {
    s32 a[8];
} __attribute__((aligned(16))) Tbl32_2FAFF0;
void func_002FC9F0(void) {
    PairTbl2FAFF0 p;
    Slot2FAFF0 *sl;
    s32 i = 0;

    *(Tbl32_2FAFF0 *)&p = *(Tbl32_2FAFF0 *)&D_00458C20;
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FCAF0);
#if 0
// differs: 52 of 76 (same size); the loops are laid out differently and the registers differ; 30 declaration orders tried
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
s32 func_002FCF60(void) {
    s32 n = D_005D0082;
    s32 t3 = 1 << n;
    s32 t2 = 1;
    s32 t0 = 0;
    s32 i;
    char *p;
    char *t1 = 0;

    if (t3 > 0) {
        p = (char *)gTourMap;
        for (i = 0; i < t3; i++, p += 0x14) {
            if (*(s16 *)(p + 0x2F6) >= 0) {
                if (*(s8 *)(p + 0x2F0) == 1 || *(s8 *)(p + 0x2F0) == 2) {
                    t2 = 0;
                    break;
                }
            }
        }
    }
    if (t3 > 0) {
        p = (char *)gTourMap;
        for (i = 0; i < t3; i++, p += 0x14) {
            if (*(s16 *)(p + 0x2F6) >= 0) {
                if (t0 < *(s8 *)(p + 0x2F3)) {
                    t0 = *(s8 *)(p + 0x2F3);
                    t1 = p + 0x2EC;
                }
            }
        }
    }
    if (t2 != 0) {
        if (t0 == n - 1) {
            *(char **)((char *)gTourMap + 0x70) = t1;
            return 1;
        }
        return 0;
    }
    if (t0 == n) {
        *(char **)((char *)gTourMap + 0x70) = t1;
        return 2;
    }
    if (D_005D0080 == -1 && D_005D0081 == -1) {
        return 4;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FCF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FD090);
#if 0
extern s8 D_005D0082[];
extern s8 D_004B4B58[];
extern u32 func_0012EAE0(s32);

// differs: 128-131 of 160 instructions (fdiff counts relocations too): the loops and the rand branch match in shape, the saved registers do not (entry pointer in s4, s0 in the original); 24 orders of the four saved ints x 2 pointer places tried
void func_002FD560(void) {
    s8 *s0;
    s32 s4, s3, s2, s1, a0, a1, a2, v1;
    s8 *e;
    u8 *gt;

    if (0 < (1 << D_005D0082[0])) {
        s1 = 0;
        s2 = 0;
        do {
            gt = (u8 *)gTourMap;
            e = (s8 *)(gt + s2);
            s0 = (s8 *)((u8 *)e + 0x2EC);
            if (*(s16 *)(e + 0x2F6) != -1) {
                goto nxt;
            }
            a0 = s0[4];
            if (a0 != 1) {
                goto nxt;
            }
            a0 = s0[7];
            if (a0 != D_004B4B58[0]) {
                goto nxt;
            }
            if (((s1 >> a0) & 1) == 0) {
                goto bclear;
            }
            a2 = 1 << a0;
            a1 = (s1 - a2) >> a0;
            s4 = a1 << a0;
            a2 = s4 + a2;
            if (s4 < a2) {
                s3 = s4;
                e = (s8 *)(gt + s4 * 20);
                for (; s3 < a2; s3++, e += 0x14) {
                    if (e[0x2F3] == a0) {
                        if (!(func_0012EAE0(0x20) & 1)) {
                            v1 = s3 * 20;
                            e = (s8 *)((u8 *)gTourMap + v1);
                            e[0x2F3]++;
                            s0[4] = 5;
                        } else {
                            *((u8 *)gTourMap + s3 * 20 + 0x2F0) = 5;
                            s0[7]++;
                        }
                        goto chk;
                    }
                }
            }
            goto chk;
        bclear:
            a2 = 1 << a0;
            a1 = (s1 + a2) >> a0;
            s4 = a1 << a0;
            a2 = s4 + a2;
            if (s4 < a2) {
                s3 = s4;
                e = (s8 *)(gt + s4 * 20);
                for (; s3 < a2; s3++, e += 0x14) {
                    if (e[0x2F3] == a0) {
                        if (!(func_0012EAE0(0x20) & 1)) {
                            v1 = s3 * 20;
                            e = (s8 *)((u8 *)gTourMap + v1);
                            e[0x2F3]++;
                            s0[4] = 5;
                        } else {
                            *((u8 *)gTourMap + s3 * 20 + 0x2F0) = 5;
                            s0[7]++;
                        }
                        goto chk;
                    }
                }
            }
        chk:
            a0 = s0[7];
            if (s3 == s4 + (1 << a0)) {
                s0[7] = a0 + 1;
            }
        nxt:
            s1++;
            s2 += 0x14;
        } while (s1 < (1 << D_005D0082[0]));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2FAFF0", func_002FD560);

#if 0
// differs: 122 of 138 instructions (register choice and the placement of the return-5 exit; 4 layouts tried)
extern s8 D_005D0080[];
extern s8 D_005D0081[];
extern s8 D_005D0082[];
extern s8 D_004B4B58[];

s32 func_002FD7E0(s32 a0) {
    s32 ret;
    s32 t5, t4, t3, t2, t6, t8, a2, a3, v0, m;
    u8 *t1;
    u8 *a1;
    u8 *gt;

    if (a0 != 0) {
        D_005D0081[0] = -1;
        D_005D0080[0] = -1;
    }
    t2 = D_005CA030[0];
    if (!(0 < t2)) {
        goto five;
    }
    {
        t6 = 0;
        t5 = D_005D0082[0];
        gt = (u8 *)gTourMap;
        t8 = 1;
        t3 = t8 << t5;
        t4 = D_004B4B58[0];
        a3 = 2;
        do {
            if (0 < t3) {
                t1 = gt;
                for (a2 = 0; a2 < t3; a2++, t1 += 0x14) {
                    if (*(s16 *)(t1 + 0x2F6) != t6) {
                        continue;
                    }
                    a1 = t1 + 0x2EC;
                    v0 = a1[4];
                    if (v0 != t8 && v0 != a3) {
                        continue;
                    }
                    v0 = a1[7];
                    if (v0 == t5) {
                        goto five;
                    }
                    if (v0 != t4) {
                        continue;
                    }
                    a3 = (a2 >> v0) & 1;
                    if (a3 != 0) {
                        m = t8 << v0;
                        a3 = (a2 - m) >> v0;
                        t3 = a3 << v0;
                        a3 = t3 + m;
                        if (t3 < a3) {
                            t1 = gt + t3 * 20;
                            for (t2 = t3; t2 < t3 + (t8 << v0); t2++, t1 += 0x14) {
                                if (t1[0x2F3] == v0 && a0 != 0) {
                                    D_005D0080[0] = t2;
                                    D_005D0081[0] = a2;
                                }
                                v0 = a1[7];
                            }
                        }
                    } else {
                        m = t8 << v0;
                        a3 = (a2 + m) >> v0;
                        t3 = a3 << v0;
                        a3 = t3 + m;
                        if (t3 < a3) {
                            t2 = t3;
                            t1 = gt + t3 * 20;
                            for (; t2 < t3 + (t8 << v0); t2++, t1 += 0x14) {
                                if (t1[0x2F3] == v0 && a0 != 0) {
                                    D_005D0080[0] = a2;
                                    D_005D0081[0] = t2;
                                }
                                v0 = a1[7];
                            }
                        }
                    }
                    goto tail;
                }
            }
            t6++;
        } while (t6 < t2);
    }
    goto five;
tail:
    ret = 3;
    if (a0 != 0) {
        if (D_005D0080[0] == -1 && D_005D0081[0] == -1) {
            *(s32 *)(gt + 0x70) = (s32)a1;
            ret = 4;
        }
    }
    goto out;
five:
    ret = 5;
out:
    return ret;
}
#endif
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
#if 0
// differs: 0x158 vs 0x170 (6 instructions short): the original sends its early exits to shared out-of-line `b epilogue` blocks placed before the body; direct returns, nested else-returns (75 of 96 differ) and goto all branch straight to the epilogue. The gTourMap value is stored at k.w (0x2C), not k.z. Twin 2FEBD0 has the same exits
extern u8 D_00458BE0[];
extern s32 func_00136870(s32, s32, void *, s32, s32, s32, f32);
extern void func_00137B60(void *);
extern void amDraw_FlushPacket(void);

typedef struct Vq2FED60 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} __attribute__((aligned(16))) Vq2FED60;

void func_002FED60(f32 a, f32 b, f32 c) {
    Vq2FED60 p;
    Vq2FED60 k;
    f32 t;

    if (a >= -5.0f) {
        if (a <= 805.0f) {
            if (b > c) {
                t = c;
                c = b;
                b = t;
            }
            if (c >= -5.0f) {
                if (b <= 605.0f) {
                    __asm__ volatile("sqc2 $vf0, 0x0(%0)" : : "r"(&p) : "memory");
                    p.x = a - 2.5f;
                    p.y = b;
                    k = *(Vq2FED60 *)D_00458BE0;
                    k.z = *(f32 *)((u8 *)gTourMap->f40 + 0x34);
                    func_00136870(1, 0x910, &k, -1, 0x44, 0, a);
                    func_00137B60(&p);
                    p.x = p.x + 5.0f;
                    func_00137B60(&p);
                    p.y = c;
                    p.x = p.x - 5.0f;
                    func_00137B60(&p);
                    p.x = p.x + 5.0f;
                    func_00137B60(&p);
                    amDraw_FlushPacket();
                }
            }
        }
    }
}
#endif
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
void func_003004B0(Task2FAFF0 *t) {
    Sub2FAFF0 *s = (Sub2FAFF0 *)((char *)t + 0x30);
    Ent2FAFF0 *e = s->f18;
    f32 *p;

    e->f10 = e->f10 - s->f10;
    e = s->f18;
    p = &e->f10;
    if (*p < t->f3C) {
        *p = t->f3C;
        s->f10 = 5.0f * gFrameDelta;
        s->f14 = 1;
        if (s->f18->fC > s->f8) {
            s->f14 = -s->f14;
            s->f10 = -s->f10;
        }
        t->f1C = (TourMap_TaskSlide == 0) ? 0 : TourMap_TaskSlide;
    }
}
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
// differs: 0x178 bytes against 0x180 with an aligned copy for the flag table; the original has no saved registers (the loop counter lives in t7) and ends with a call to func_002FC9F0 (adding that call made it worse)
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
#if 0
// differs: 41 of 84 (VU0 operands and the stack slots: the original takes the local vectors in other registers; 6 declaration orders and 6 operand orders tried)
typedef struct Q16_2FAFF0 {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Q16_2FAFF0;
extern s32 D_00458B80[];
extern s32 D_00458B90[];
extern f32 func_00146E90(Vec4_2FAFF0 *);
extern void func_00146ED0(Vec4_2FAFF0 *, Vec4_2FAFF0 *);
#define F32AT(b, o) (*(f32 *)((char *)(b) + (o)))
void func_00300B60(Task2FAFF0 *t) {
    Vec4_2FAFF0 vA;
    Vec4_2FAFF0 vB;
    Vec4_2FAFF0 vC;
    char *s0;
    s32 i;

    s0 = (char *)t + 0x30;
    *(Q16_2FAFF0 *)&vA = *(Q16_2FAFF0 *)D_00458B80;
    vA.x = F32AT(s0, 0);
    vA.y = F32AT(s0, 4);
    vA.z = F32AT(s0, 8);
    *(Q16_2FAFF0 *)&vB = *(Q16_2FAFF0 *)D_00458B90;
    vB.x = F32AT(s0, 0xC);
    vB.y = F32AT(s0, 0x10);
    vB.z = F32AT(s0, 0x14);
    asm volatile("lqc2 $vf1, 0(%0)
	lqc2 $vf2, 0(%1)
	vsub.xyz $vf1, $vf1, $vf2
	sqc2 $vf1, 0(%2)" : : "r"(&vB), "r"(&vA), "r"(&vC) : "memory");
    if (func_00146E90(&vC) <= gTourMap->f50 * F32AT(s0, 0x18)) {
        F32AT(s0, 0) = F32AT(s0, 0xC);
        F32AT(s0, 4) = F32AT(s0, 0x10);
        F32AT(s0, 8) = F32AT(s0, 0x14);
    } else {
        func_00146ED0(&vC, &vC);
        F32AT(gTourMap->f44, 0x30) = F32AT(gTourMap->f44, 0x30) + vC.x;
        F32AT(gTourMap->f44, 0x34) = F32AT(gTourMap->f44, 0x34) + vC.y;
        F32AT(gTourMap->f44, 0x38) = F32AT(gTourMap->f44, 0x38) + vC.z;
        for (i = 0; i < 4; i++) {
            func_002FFD20(i);
        }
    }
}
#endif
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
