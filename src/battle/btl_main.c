#include "common.h"
#include "battle/battle.h"
#include "battle/stage.h"

/* The fighter's fields that battle.h does not name yet (offsets from the assembly of btl_main.c). */
#define FT_FIELD(ft, type, off) (*(type *)((u8 *)(ft) + (off)))
/* A 16-byte block; the aligned attribute makes Metrowerks copy it with lq / sq. */
typedef struct Copy16 {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16;
extern void func_001E3430(void *, s32);
extern void func_001E4E20(void *, s32);
extern void func_001E7BE0(void *, s32);
extern void func_001E3BB0(void *);
extern void func_001E7F00(void *);
extern s32 D_00470574;
extern char D_00468410[];
extern char D_00468420[];
extern char D_00468428[];
extern void (*D_004682E8[])(void);
extern s32 D_0046FD84;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_001EF1E0(s32);
extern void func_001F0820(void);
extern void func_001F9E10(void);
extern void func_001B0EC0(void);
extern void func_001E9D10(void *);
extern void func_001E9EE0(void);
extern s32 func_001E9ED0(void *);
extern void func_001EF100(void);
extern void func_0022DC00(void);
extern void (*D_004684A8[])(void *);
extern void func_002CBFF0(s32, void *);
extern void func_001E5040(void *);
extern void func_001C8E50(void);
extern void func_001A8830(void);
extern void func_001E5860(void);
extern void func_001F9E00(void);
extern void func_0021C6A0(void);
extern void func_00215AA0(void);
extern void func_001E9D60(void);
extern void func_00219870(void);
extern void func_001E9910(void);
extern void func_002CC4C0(void);
extern char D_00495B70[];
extern void func_001B05E0(s32, f32, f32);
extern char D_005116E0[];
extern void func_001CA460(s32, s32);
extern void func_001AC490(void *);
extern void func_00264300(s32, void *, s32);
extern void (*D_0046850C[])(void *);
extern void func_001D9BF0(void *);
extern void memset(void *, s32, s32);
extern void func_00219650(s32);
extern void func_00219790(s32);
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create(void (*update)(void *), void *, s32, s32, s32, char *);
extern void amFile_AddLoader(void *, void *);
void func_001AC330(void *);
void func_001AC400(void *);
void func_001AF840(void *);
void func_001B0160(void *);
void func_001B03E0(Fighter *f);
void func_001B04A0(void);
extern void (*D_00468460[])(void *);
extern s32 func_001C2B10(void *);
extern s32 func_001E94C0(void *);
typedef struct FighterCB2 {
    u8 unk0000[0xCB2];
    u16 unkCB2;
} FighterCB2;
extern void func_00226030(s32, s32 *);
extern void (*D_00468510[])(void *);
typedef struct FighterMain2 {
    u8 unk0000[0x1864];
    s32 unk1864;
    u8 unk1868[0x1FF9 - 0x1868];
    s8 unk1FF9;
} FighterMain2;
extern void (*D_004682EC[])(void);
extern void func_002A89D0(void);
extern s32 func_001F9A00(s32);
extern void func_00237000(s32, void *);
extern s32 func_001B06D0(void);
extern s32 func_001B0660(void);
extern s16 D_00495A40[];
extern s16 D_00495A42[];
extern s16 D_00495A44[];
extern s16 D_00495A46[];
extern s32 D_00495A48[];
extern s16 D_00495A4C[];
extern s16 D_00495A4E[];
extern s16 D_00495A90[];
extern s16 D_00495A92[];
extern s16 D_00495A94[];
extern s16 D_00495A96[];
extern s32 D_00495A98[];
extern s16 D_00495A9C[];
extern s16 D_00495A9E[];
extern s16 D_00495AD4[];
extern s16 D_00495AD6[];
extern s16 D_00495AD8[];
extern s16 D_00495ADA[];
extern s32 D_00495ADC[];
extern s16 D_00495AE0[];
extern s16 D_00495AE2[];
extern s16 D_00495B18[];
extern s16 D_00495B1A[];
extern s16 D_00495B1C[];
extern s16 D_00495B1E[];
extern s32 D_00495B20[];
extern s16 D_00495B24[];
extern s16 D_00495B26[];
extern s32 func_001E3D60(s32, f32);
extern void func_001E4820(f32, void *, s32);
extern void func_001E3460(void *);
extern void func_001DD680(void *);
extern void func_001D9900(void *, s32, s32);
extern void amHeap_Free(void *);
extern void (*D_00468530[])(void *);
extern void (*D_004685E4[])(void *);
extern void func_001D8320(void *);
extern void func_001D4620(void *);

void func_001ABCC0(Fighter *f) {
    FT_FIELD(f, f32, 0x420) = 1000.0f;
    FT_FIELD(f, f32, 0x424) = 1000.0f;
    FT_FIELD(f, f32, 0x428) = 1000.0f;
}
void func_001ABCE0(Fighter *f) {
    FT_FIELD(f, s16, 0x42C) = 0;
    FT_FIELD(f, s16, 0x42E) = 0;
    FT_FIELD(f, s16, 0x430) = 0;
    FT_FIELD(f, s16, 0x432) = 0;
    memset((u8 *)f + 0x434, 0, 8);
    FT_FIELD(f, s8, 0x43C) = 0;
    FT_FIELD(f, s8, 0x43D) = 0;
}
void func_001ABD30(Fighter *f) {
    void *o = FT_FIELD(f, void *, 0x1E4);
    FT_FIELD(f, s32, 0x1E8) = (o != 0) ? FT_FIELD(o, s32, 0x8) : 0;
    FT_FIELD(f, s32, 0x1EC) = 0;
    FT_FIELD(f, s32, 0x1F0) = 0;
    FT_FIELD(f, s32, 0x1F4) = 0;
    FT_FIELD(f, s32, 0x3FC) = 0;
    FT_FIELD(f, s32, 0x400) = 0;
    FT_FIELD(f, s32, 0x3F8) = 1;
    FT_FIELD(f, s32, 0x40C) = 0;
    memset((u8 *)f + 0x1F8, 0, 0x200);
}
void func_001ABD80(Fighter *f) {
    void *o = FT_FIELD(f, void *, 0x1E4);
    FT_FIELD(f, s32, 0x1E8) = (o != 0) ? FT_FIELD(o, s32, 0x8) : 0;
    FT_FIELD(f, s32, 0x1EC) = 0;
    FT_FIELD(f, s32, 0x1F0) = 0;
    FT_FIELD(f, s32, 0x1F4) = 0;
    FT_FIELD(f, s32, 0x3FC) = 0;
    FT_FIELD(f, s32, 0x400) = 0;
    FT_FIELD(f, s32, 0x3F8) = 1;
    FT_FIELD(f, s32, 0x40C) = 0;
    memset((u8 *)f + 0x1F8, 0, 0x200);
    FT_FIELD(f, f32, 0x420) = 1000.0f;
    FT_FIELD(f, f32, 0x424) = 1000.0f;
    FT_FIELD(f, f32, 0x428) = 1000.0f;
    FT_FIELD(f, s32, 0x410) = 0;
    FT_FIELD(f, s32, 0x414) = 0;
    FT_FIELD(f, s32, 0x418) = 0;
    FT_FIELD(f, s32, 0x41C) = 0;
}
#if 0
// differs: the constants are loaded into registers at the top (4, 0x7530, 5) where the original keeps them; register assignment not reproduced
void func_001ABE10(void) {
    D_00495A40[0] = 0;
    D_00495A48[0] = 0;
    D_00495A42[0] = 4;
    D_00495A44[0] = 0x7530;
    D_00495A90[0] = 1;
    D_00495A46[0] = 0x7530;
    D_00495AD4[0] = 2;
    D_00495A4C[0] = 0;
    D_00495A4E[0] = 0;
    D_00495A92[0] = 5;
    D_00495A94[0] = 0x7530;
    D_00495A96[0] = 0x7530;
    D_00495A98[0] = 0;
    D_00495A9C[0] = 0;
    D_00495A9E[0] = 0;
    D_00495AD6[0] = 5;
    D_00495B1A[0] = 5;
    D_00495AD8[0] = 0x7530;
    D_00495ADA[0] = 0x7530;
    D_00495ADC[0] = 0;
    D_00495AE0[0] = 0;
    D_00495AE2[0] = 0;
    D_00495B18[0] = 0;
    D_00495B1C[0] = 0x7530;
    D_00495B1E[0] = 0x7530;
    D_00495B20[0] = 0;
    D_00495B24[0] = 0;
    D_00495B26[0] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ABE10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ABF10);
#if 0
// differs: leaf loop nest: the original keeps the counters in temporaries (no frame) and the compiler's register numbering differs (71 of 80 differ across declaration orders)
extern u8 D_00492FC0[];
s32 func_001AC110(void) {
    BattleWork *bw;
    s32 cnt;
    s32 i;
    s32 n;
    u8 *p;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 base;
    cnt = 0;
    i = 0;
    bw = D_00470570;
    n = BW_FIELD(bw, s32, 0x88D8);
    if (0 < n) {
        p = (u8 *)bw + 0x830;
        do {
            if (FT_FIELD(p, s16, 0x13A4) > -1) {
                cnt++;
            }
            i++;
            p += 0x2020;
        } while (i < n);
    }
    t3 = 0;
    do {
        base = (t3 & 3) * 2;
        t2 = 0;
        do {
            t4 = (t2 & 1) | base;
            t5 = -1;
            n = BW_FIELD(bw, s32, 0x88D8);
            if (0 < n) {
                p = (u8 *)bw + 0x830;
                t1 = 0;
                do {
                    if (FT_FIELD(p, s16, 0x13A4) == t4) {
                        t5 = t1;
                        break;
                    }
                    t1++;
                    p += 0x2020;
                } while (t1 < n);
            }
            if (t5 > -1 || cnt <= 0) {
                if ((*(u16 *)(D_00492FC0 + t4 * 0xB8 + 0xE) & 8) != 0) {
                    return 1;
                }
            }
            t2++;
        } while (t2 < 2);
        t3++;
    } while (t3 < 4);
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC110);
#if 0
// differs: the fighter-table walk keeps its registers differently (the gBattle pointer and the entry pointer in other saved registers: 36 of 57 instructions differ)
extern u8 D_00492FC0[];
void func_001AC240(void) {
    u8 *c;
    s32 i;
    BattleWork *g;
    u8 *e;
    s32 id;
    g = D_00470570;
    if (0 < BW_FIELD(g, s32, 0x88D8)) {
        i = 0;
        c = (u8 *)g;
        do {
            id = *(s16 *)(c + 0x1BD4);
            if (id > -1) {
                e = D_00492FC0 + id * 0xB8;
                *(s16 *)(e + 0xC) = 0;
                *(s16 *)(e + 0xE) = 0;
                *(s16 *)(e + 0x10) = 0;
                *(s16 *)(e + 0x12) = 0;
                *(s16 *)(e + 0x6C) = 0;
                *(s16 *)(e + 0x6E) = 0;
                *(s16 *)(e + 0x70) = 0;
                *(s16 *)(e + 0x72) = 0;
                memset(e + 0x28, 0, 0x40);
                memset(e + 0x74, 0, 0x40);
            }
            i++;
            c += 0x2020;
        } while (i < BW_FIELD(g, s32, 0x88D8));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC240);
#if 0
// differs: pointer-relocation loop: the table base is read through the address of the field (t0 = p+0x14) and the loop index keeps the other registers (52 of 54 differ)
void func_001AC330(void *p) {
    s32 i;
    s32 k;
    u8 *e;
    s32 j;
    s32 m;
    s32 *t;
    s32 *u;
    FT_FIELD(p, s32, 0x14) = FT_FIELD(p, s32, 0x14) + (s32)p;
    if (FT_FIELD(p, s32, 0x10) > 0) {
        i = 0;
        k = 0;
        do {
            t = (s32 *)(FT_FIELD(p, u8 *, 0x14) + k);
            if (*t != 0) {
                e = (u8 *)p + *t;
                *t = (s32)e;
                if (FT_FIELD(e, s32, 0x2C) != 0) {
                    FT_FIELD(e, s32, 0x2C) = FT_FIELD(e, s32, 0x2C) + (s32)p;
                    if (FT_FIELD(e, s32, 0x28) > 0) {
                        j = 0;
                        m = 0;
                        do {
                            u = (s32 *)(FT_FIELD(e, u8 *, 0x2C) + m);
                            if (u[1] != 0) {
                                u[1] = u[1] + (s32)p;
                            }
                            j++;
                            m += 8;
                        } while (j < FT_FIELD(e, s32, 0x28));
                    }
                }
            }
            i++;
            k += 4;
        } while (i < FT_FIELD(p, s32, 0x10));
    }
    if (FT_FIELD(p, s32, 0x1C) != 0) {
        FT_FIELD(p, s32, 0x1C) = FT_FIELD(p, s32, 0x1C) + (s32)p;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC330);
#if 0
// differs: a leaf loop over a table of entries; Metrowerks keeps a frame here (sq s0-s2), the original none
void func_001AC400(void *vp) {
    u8 *p = vp;
    s32 i;
    u8 *t;
    FT_FIELD(p, s32, 0x8) += (s32)p;
    t = FT_FIELD(p, u8 *, 0x8);
    for (i = 0; i < FT_FIELD(p, s32, 0x4); i++) {
        s32 j;
        s32 cnt = FT_FIELD(t, s16, 0xE);
        for (j = 0; j < cnt; j++) {
            FT_FIELD(t, s32, 0x40 + j * 4) += (s32)p;
        }
        t = t + 0x40 + cnt * 4;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC400);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC490);
#if 0
// differs: size 0x134 against 0x150: the original's loops and the else branch have 7 more instructions (layout of the if/else-if around the two loops not found)
extern u8 *gScrMachines;
extern void func_002195B0(s32 a);
extern void func_0029D860(s32 a);
extern void func_002CF650(s32 a);
extern void func_002CFD70(void);
extern void func_00125740(void *d, void *s, s32 n);
extern u8 D_00492FC0[];
void func_001AC670(void *a0) {
    BattleWork *bw;
    u8 *e;
    s32 i;
    u8 *s0;
    s32 id;
    bw = D_00470570;
    if (a0 != 0) {
        if (BW_FIELD(bw, s16, 0x8944) != 0) {
            for (i = 0; i < 2; i++) {
                e = gScrMachines + i * 0x5C;
                if (*(s32 *)(e + 0xC) != 0) {
                    *(s32 *)(e + 0xC) = 2;
                }
            }
        } else if (BW_FIELD(bw, s8, 0x8AB4) == 0) {
            if (0 < BW_FIELD(bw, s32, 0x88D8)) {
                i = 0;
                s0 = (u8 *)bw;
                do {
                    id = *(s16 *)(s0 + 0x1BD4);
                    if (id > -1) {
                        func_00125740(D_00492FC0 + id * 0xB8, s0 + 0x272C, 0xB8);
                    }
                    i++;
                    s0 += 0x2020;
                } while (i < BW_FIELD(bw, s32, 0x88D8));
            }
        }
        func_002195B0(0);
        func_0029D860(0);
        func_002CF650(0);
    }
    BW_FIELD(bw, s8, 0x8975) = 0;
    func_002CFD70();
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC670);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC7C0);
#if 0
// differs: size 0xE8 against 0xF0 and the loop's registers differ (first-fighter pointer kept in another saved register)
extern s32 func_002CC4A0(void);
extern void func_001D9480(void *);
s32 func_001AC990(void) {
    u8 *first;
    BattleWork *bw;
    u8 *p;
    s32 i;
    bw = D_00470570;
    first = (u8 *)bw + 0x830;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        i = 0;
        p = first;
        do {
            func_001D9480(p);
            i++;
            p += 0x2020;
        } while (i < BW_FIELD(bw, s32, 0x88D8));
    }
    if (func_002CC4A0() == 4) {
        BW_FIELD(bw, s32, 0x88FC) = 5;
        BW_FIELD(bw, s32, 0x8900) = 0;
        BW_FIELD(bw, s32, 0x8904) = FT_FIELD(first + BW_FIELD(bw, s32, 0x8900) * 0x2020, s16, 0x13A4);
        return 1;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC990);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACA80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACBC0);
void func_001ACFD0(void) {
    BW_FIELD(D_00470570, f32, 0x8910) = BW_FIELD(D_00470570, f32, 0x890C);
    BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0) + BW_FIELD(D_00470570, f32, 0x890C);
    if (BW_FIELD(D_00470570, f32, 0x890C) > 1e8f) {
        BW_FIELD(D_00470570, f32, 0x8910) = 0.0f;
        BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0);
    }
}
void func_001AD070(void) {
    BattleWork *bw = D_00470570;
    BW_FIELD(bw, s32, 0x88F8) = 8;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    func_001CA460(-1, 1);
    func_001AC490(D_005116E0);
    func_00264300(-1, func_001B04A0, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD0E0);
#if 0
// differs: 8 of 49 instructions differ: register assignment of the constants 7 and 5 (the original keeps 7 in a0 and 5 in v1)
void func_001AD210(void) {
    BattleWork *bw = D_00470570;
    s32 tmp[3];
    s32 x;
    Fighter *ft;
    BW_FIELD(bw, s32, 0x88F8) = 7;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    x = BW_FIELD(bw, s16, 0x7E2);
    switch (x) {
    case 0:
        ft = bw->fighter[1];
        tmp[0] = ft->unk1350;
        tmp[1] = ft->unk13A4;
        tmp[2] = 5;
        func_00226030(0, tmp);
        break;
    case 1:
    case 5:
        tmp[0] = -1;
        tmp[1] = -1;
        tmp[2] = 1;
        func_00226030(0, tmp);
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD210);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD2E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADB80);
#if 0
// differs: the battle counter at 0x88F8 is written by a struct access (frame now matches); the tail branch layout (slti at / bnez) differs, 8 bytes short
extern u8 D_00431300[];
extern u8 D_00431320[];
extern void func_00218E50(void);
extern s32 func_00218CD0(s32 a, s32 b);
typedef struct BWX {
    u8 a[0x88F8];
    s32 f88F8;
    s32 f88FC;
    s32 f8900;
    u8 b[8];
    s32 f890C;
    s32 f8910;
} BWX;
void func_001ADD90(void) {
    BWX *bx;
    s32 tA[6];
    s32 tB[6];
    s32 a1;
    u8 *f;
    s32 id;
    u8 *fp;
    bx = (BWX *)D_00470570;
    bx->f88F8 = 5;
    bx->f890C = 0;
    bx->f8910 = 0;
    *(Copy16 *)tA = *(Copy16 *)D_00431300;
    *(s64 *)((u8 *)tA + 16) = *(s64 *)(D_00431300 + 16);
    func_00226030(tA[bx->f88FC], 0);
    *(Copy16 *)tB = *(Copy16 *)D_00431320;
    *(s64 *)((u8 *)tB + 16) = *(s64 *)(D_00431320 + 16);
    if (tB[bx->f88FC] >= 0) {
        a1 = 0;
        if (bx->f8900 >= 0) {
            f = (u8 *)bx + bx->f8900 * 0x2020;
            id = *(s16 *)(f + 0x1BD4);
            fp = FT_FIELD(f, u8 *, 0x1B84);
            if (id >= 0) {
                if (*(s16 *)(fp + 0x13A4) < 0) {
                    a1 = 1;
                }
            } else {
                if (*(s16 *)(fp + 0x13A4) >= 0) {
                    a1 = 2;
                }
            }
        }
        func_00218CD0(tB[bx->f88FC], a1);
        if (bx->f88FC == 5) {
            func_00218E50();
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADD90);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ADEE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE5C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE720);
#if 0
// differs: the local buffer and the flag sit at other stack offsets (flag at 0x30 and buffer at 0x40 in the original; 7 of 59 instructions differ; the local order is not the cause)
extern void func_001A8770(s32, void *);
extern void func_001C8020(s32, s32);
extern void func_00226030(s32, s32 *);
extern void func_00219270(s32);
extern s32 func_00218CD0(s32, s32);
void func_001AE890(void) {
    u8 buf[0x50];
    s32 flag;
    BattleWork *bw;
    s32 old;
    bw = D_00470570;
    old = BW_FIELD(bw, s32, 0x88F8);
    BW_FIELD(bw, s32, 0x88F8) = 3;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    BW_FIELD(bw, s8, 0x8AAE) = 1;
    BW_FIELD(bw, s8, 0x8AAF) = 1;
    memset(buf, 0, 0x50);
    *(s32 *)(buf + 0x30) = 1;
    *(s32 *)(buf + 0x20) = 0;
    *(s32 *)(buf + 0x24) = 0;
    func_001A8770(1, buf);
    if (old != 0) {
        func_001C8020(2, 0);
    }
    flag = 1;
    func_00226030(0x27, &flag);
    func_00226030(0x13, 0);
    func_00219270(*(s16 *)((u8 *)bw + 0x7E6));
    BW_FIELD(bw, s8, 0x8AB7) = func_00218CD0(0, -1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE890);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE980);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AEBF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AEDB0);
void func_001AEEB0(void) {
    BattleWork *bw = D_00470570;
    s32 tbl[6];
    BW_FIELD(bw, s32, 0x88F8) = 1;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    BW_FIELD(bw, s8, 0x14ED) = 1;
    BW_FIELD(bw, s8, 0x350D) = 1;
    tbl[0] = (s32)((u8 *)bw + 0x830);
    tbl[1] = (s32)((u8 *)bw + 0x2850);
    tbl[2] = func_001F9A00(1);
    tbl[3] = 8;
    tbl[4] = (s32)func_001B06D0;
    tbl[5] = (s32)func_001B0660;
    func_00237000(4, tbl);
    if (BW_FIELD(bw, s16, 0x8948) < 0) {
        BW_FIELD(bw, s16, 0x8944) = 0;
        D_004682E8[0]();
    }
}
void func_001AEF70(void) {
    BW_FIELD(D_00470570, f32, 0x8910) = BW_FIELD(D_00470570, f32, 0x890C);
    BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0) + BW_FIELD(D_00470570, f32, 0x890C);
    if (BW_FIELD(D_00470570, f32, 0x890C) > 1e8f) {
        BW_FIELD(D_00470570, f32, 0x8910) = 0.0f;
        BW_FIELD(D_00470570, f32, 0x890C) = BW_FIELD(D_00470570, f32, 0x88F0);
    }
}
#if 0
// differs: stack layout and loop body differ: 0x98 bytes against 0xF0, the table and the bit mask sit at other offsets
extern void func_00219270(s32);
extern void func_00237000(s32, void *);
extern s32 func_001B07C0(void);
extern s32 func_001B0700(void);
void func_001AF010(void) {
    BattleWork *bw;
    s32 mask;
    s16 arr[4];
    void *tb[6];
    s32 i;
    bw = D_00470570;
    BW_FIELD(bw, s32, 0x88F8) = 0;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    mask = 0;
    i = 0;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        do {
            mask = mask | (1 << i);
            arr[i] = 0;
            i++;
        } while (i < BW_FIELD(bw, s32, 0x88D8));
    }
    tb[0] = (u8 *)bw + 0x830;
    tb[1] = (u8 *)bw + 0x2850;
    tb[2] = BW_FIELD(bw, void *, 0x8AA0);
    tb[3] = BW_FIELD(bw, void *, 0x7F4);
    tb[4] = func_001B07C0;
    tb[5] = func_001B0700;
    func_00237000(4, tb);
    func_00219270(*(s16 *)((u8 *)bw + 0x7E6));
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF010);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF100);
#if 0
// differs: the first load of the global field is folded as li/addu, the original as lui 0x1 and a -0x755C displacement
void func_001AF650(void) {
    BattleWork *bw = D_00470570;
    void *f;
    f = BW_FIELD(bw, void *, 0x8AA4);
    if (f != 0) {
        BW_FIELD(bw, void *, 0x8AA4) = FT_FIELD(f, void *, 0x40);
        BW_FIELD(bw, s32, 0x8AA0) = FT_FIELD(BW_FIELD(D_00470570, void *, 0x8AA4), s32, 0x50);
        FT_FIELD(f, s32, 0x40) = 0;
        amCdFs_Close(f, 0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF650);
#if 0
// differs: the slot stores are folded into the battle base (2092(v1)) where the original stores through the slot pointer; the object and walker take other saved registers (50 of 56 differ)
extern void amFile_Load(s32 h);
extern s32 func_001A50F0(s32 a, s32 b);
void func_001AF6C0(void) {
    BattleWork *bw;
    s32 *s0;
    s32 *w;
    s32 *obj;
    s32 i;
    bw = D_00470570;
    obj = (s32 *)BW_FIELD(bw, s32, 0x82C);
    if (obj != 0) {
        s0 = (s32 *)((u8 *)bw + 0x810);
        s0[7] = FT_FIELD(obj, s32, 0x40);
        s0[0] = FT_FIELD(FT_FIELD(obj, void *, 0x40), s32, 0x50);
        amFile_Load(s0[0]);
        amCdFs_Close(obj, 0);
        FT_FIELD(obj, s32, 0x40) = 0;
        i = 0;
        w = s0;
        do {
            w[1] = func_001A50F0(s0[0], i);
            amFile_Load(w[1]);
            i++;
            w++;
        } while (i < 2);
        s0[3] = func_001A50F0(s0[0], 2);
        amFile_Load(s0[3]);
        s0[5] = func_001A50F0(s0[0], 4);
        amFile_Load(s0[5]);
        s0[6] = func_001A50F0(s0[0], 5);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF6C0);
#if 0
// differs: the original keeps the global in s0 across the call and zeroes v0 before the branch; not reproduced
void func_001AF7A0(void *p) {
    BattleWork *bw;
    s32 id = FT_FIELD(p, s32, 0x160);
    s32 r = 0;
    bw = D_00470570;
    if (id != -1) {
        r = amCdFs_ReadFileId(id, 0, 1);
        BW_FIELD(bw, s32, 0x8AA4) = r;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF7A0);
#if 0
// differs: the original reads the global through its address (a2) and has one more instruction; not reproduced
void func_001AF7F0(void) {
    s32 *p = &D_0046FD84;
    BattleWork *bw = D_00470570;
    u8 *s0 = (u8 *)bw + 0x810;
    s32 r = 0;
    if (D_0046FD84 != -1) {
        r = amCdFs_ReadFileId(*p, 0, 1);
        FT_FIELD(s0, s32, 0x1C) = r;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF7F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF840);
void func_001AF980(void) {
    s8 *p = (s8 *)((u8 *)D_00470570 + 0x8975);
    *p = 1 - *p;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF9A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFAB0);
#if 0
// differs: 7 of 66 instructions differ, all in the clamp: the original jumps over the second clamp's store with a b (one instruction more); the struct access to the battle fields matches the frame
typedef struct Vec4a {
    f32 x, y, z, w;
} __attribute__((aligned(16))) Vec4a;
typedef struct BWZ {
    u8 a[0x88F0];
    f32 f88F0;
    u8 b[0x8920 - 0x88F4];
    f32 f8920;
    f32 f8924;
    u8 c[0x8975 - 0x8928];
    s8 f8975;
} BWZ;
extern u8 D_004312F0[];
extern void func_00131700(void *v);
void func_001AFC50(void) {
    BWZ *bz;
    Vec4a v;
    f32 x;
    bz = (BWZ *)D_00470570;
    if (bz->f8975 != 1) {
        if (bz->f8920 > 0.0f && bz->f8920 <= 1.0f) {
            v = *(Vec4a *)D_004312F0;
            v.w = bz->f8920;
            func_00131700(&v);
            x = bz->f8920 - bz->f8924 * bz->f88F0;
            bz->f8920 = x;
            if (x > 1.0f) {
                x = 1.0f;
            } else if (x < 0.0f) {
                x = 0.0f;
            }
            bz->f8920 = x;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFC50);
extern u8 D_004312E0[];
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern void func_0012F2C0(void);
void func_001AFD60(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1) {
        if (BW_FIELD(D_00470570, s32, 0x88F8) == 0) {
            Copy16 tmp;
            tmp = *(Copy16 *)D_004312E0;
            func_00133780(2, 1);
            func_00139620(0x900, &tmp, -1, 0x44, 0, 0.0f);
            func_00133780(2, 0);
        }
        func_0012F2C0();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFDF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFFA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0160);
void func_001B0380(Fighter *f) {
    s32 fn;
    if (func_001E9ED0(f) != 0) {
        func_0022DC00();
        func_001EF100();
        fn = (s32)func_001B0160;
        if (fn == 0) {
            fn = 0;
        }
        FT_FIELD(f, s32, 0x1C) = fn;
    }
}
void func_001B03E0(Fighter *f) {
    s32 fn;
    func_001E9D10(f);
    func_00219650(1);
    func_00219790(1);
    func_001E9EE0();
    fn = (s32)func_001B0380;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void func_001B0440(Fighter *f) {
    BattleWork *bw = D_00470570;
    void *v = BW_FIELD(bw, void *, 0x8970);
    s32 fn;
    if (v == 0 || FT_FIELD(v, s16, 0x4) != 3) {
        return;
    }
    BW_FIELD(bw, s32, 0x8970) = 0;
    FT_FIELD(f, s32, 0x30) = 0;
    fn = (s32)func_001B03E0;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void func_001B04A0(void) {
    func_001B0EC0();
    func_001EF1E0(D_00470574);
    func_001F0820();
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B04D0);
void func_001B05A0(void) {
    amFile_AddLoader(D_00468420, func_001AC400);
    amFile_AddLoader(D_00468428, func_001AC330);
}
void func_001B05E0(s32 a0, f32 x, f32 y) {
    BattleWork *bw = D_00470570;
    if (a0 == 0) {
        x = (BW_FIELD(bw, f32, 0x8920) > x) ? BW_FIELD(bw, f32, 0x8920) : x;
        y = (BW_FIELD(bw, f32, 0x8924) > y) ? BW_FIELD(bw, f32, 0x8924) : y;
    }
    BW_FIELD(bw, f32, 0x8920) = x;
    BW_FIELD(bw, f32, 0x8924) = y;
}
s32 func_001B0660(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s16, 0x8948) = -1;
    BW_FIELD(bw, s16, 0x8944) = 0;
    func_001F9E10();
    D_004682E8[0]();
    return 0;
}
s32 func_001B06D0(void) {
    if (D_00470570 == 0) {
        return 0;
    }
    BW_FIELD(D_00470570, s32, 0x8914) = 0;
    return 0;
}
s32 func_001B0700(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    func_002A89D0();
    BW_FIELD(bw, s8, 0x8AAD) = 0;
    BW_FIELD(bw, s8, 0x8AAE) = 1;
    BW_FIELD(bw, s16, 0x8948) = -1;
    BW_FIELD(bw, s16, 0x8944) = 0;
    switch (BW_FIELD(bw, s16, 0x7E2)) {
    case 0:
        D_004682EC[0]();
        break;
    case 5:
        D_004682EC[0]();
        break;
    }
    return 0;
}
s32 func_001B07C0(void) {
    BattleWork *bw = D_00470570;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s32, 0x8914) = 0;
    BW_FIELD(bw, s8, 0x8AAD) = 1;
    BW_FIELD(bw, s8, 0x8AAE) = 0;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0810);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0B10);
s32 func_001B0D10(void) {
    if (D_00470570 == 0) {
        return -2;
    }
    if (BW_FIELD(D_00470570, s8, 0x8AAC) != 0) {
        return BW_FIELD(D_00470570, s32, 0x88F8);
    }
    return -1;
}
extern void (*D_004682E0[])(void);
extern void func_001AF100(s32);
extern void func_001AC240(void);
extern void func_001C8EE0(void);
extern void func_001A8850(void);
extern void func_001E58D0(void);
extern void func_0021C6E0(void);
extern void func_00215C10(void);
extern void func_001E9D80(void);
extern void func_00219880(void);
extern void func_001E9930(void);
extern void func_002CC520(void);
void func_001B0D60(void) {
    BattleWork *bw;
    func_00237000(3, 0);
    func_00237000(4, 0);
    func_001AF100(1);
    bw = D_00470570;
    BW_FIELD(bw, s32, 0x8920) = 0x3F800000;
    BW_FIELD(bw, s32, 0x8924) = 0x3CCCCCCD;
    func_001AC240();
    func_001C8EE0();
    func_001A8850();
    func_001E58D0();
    func_001F9E10();
    func_0021C6E0();
    func_00215C10();
    func_001E9D80();
    func_00219880();
    func_001E9930();
    func_002CC520();
    D_004682E0[BW_FIELD(D_00470570, s32, 0x88F8)]();
}
void func_001B0E40(void) {
    func_001C8E50();
    func_001A8830();
    func_001E5860();
    func_001F9E00();
    func_0021C6A0();
    func_00215AA0();
    func_001E9D60();
    func_00219870();
    func_001E9910();
    func_002CC4C0();
    memset(D_00495B70, 0, 0x8AC0);
    D_00470570 = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0EC0);
void func_001B1090(void) {
    void *t = amTask_Create(func_001AF840, 0, 0x4000, 0x20, 0x80000000, D_00468410);
    FT_FIELD(t, s32, 0x30) = 5;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B10D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B13F0);
void func_001B18B0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
#if 0
// differs: the flag word 0x1864 is kept in an address register across the 0x1FF9 branch (CSE); the original stores it directly
void func_001B1900(Fighter *f) {
    s32 r;
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterMain2 *)f)->unk1FF9 = 0;
                ((FighterMain2 *)f)->unk1864 |= 8;
            }
        }
        func_001E5040(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1900);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1A10);
void func_001B1BB0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1C00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1E80);
void func_001B2160(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
#if 0
// differs: the 0x1864 flag word: the original stores it directly, ours computes its address in the branch delay slot (CSE) before the store
void func_001B21B0(Fighter *f) {
    s32 r;
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        FT_FIELD(f, s32, 0x1864) = 1;
        if (FT_FIELD(f, s8, 0x1FF9) != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                FT_FIELD(f, s8, 0x1FF9) = 0;
                FT_FIELD(f, s32, 0x1864) = FT_FIELD(f, s32, 0x1864) | 8;
                FT_FIELD(f, f32, 0xCA4) = 0.0f;
                FT_FIELD(f, f32, 0xCA8) = 0.1f;
            }
        }
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B21B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B22F0);
void func_001B2490(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B24E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2600);
void func_001B27D0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2820);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2AA0);
void func_001B2C80(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2CD0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2EF0);
void func_001B30E0(void) {
}
void func_001B30F0(void *p) {
    func_001E7BE0((u8 *)p + 0xCD0, 0);
}
void func_001B3100(Fighter *f) {
    void *s = (u8 *)f + 0xCD0;
    FT_FIELD(f, s16, 0x132C) = 0x2D;
    func_001E7F00(s);
    FT_FIELD(s, f32, 0x654) = 1.0f;
    FT_FIELD(s, s32, 0x658) = 0;
    FT_FIELD(s, s32, 0x668) = 0;
}
void func_001B3140(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3190);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3320);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B34B0);
#if 0
// differs: the constant 1 is loaded once where the original loads it again before the 0x2004 stores
void func_001B3660(Fighter *f) {
    void *p;
    func_001E3430(f, 0);
    if (FT_FIELD(f, f32, 0x18A8) <= 0.0f) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterMain2 *)f)->unk1FF9 = 0;
                ((FighterMain2 *)f)->unk1864 |= 8;
            }
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468510[0](f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3660);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3720);
void func_001B3960(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B39B0(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        FT_FIELD(f, s16, 0xCB4) = 0;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_0046850C[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3A20);
void func_001B3BF0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B3C40(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        FT_FIELD(f, s16, 0xCB4) = 0;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_0046850C[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3CB0);
void func_001B3E70(Fighter *f) {
    func_001E4E20(f, 0);
    FT_FIELD(f, f32, 0x17BC) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3EA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3FE0);
void func_001B4280(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B42D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B46C0);
void func_001B4C10(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.5f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B4C60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B4DC0);
void func_001B5180(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B51D0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#if 0
// differs: frame and copies of the parameter: the original keeps the fighter in s0 and folds the 0xCAC/0xCAE field addresses; not reproduced
void func_001B5320(Fighter *f) {
    s32 ret;
    FT_FIELD(f, s16, 0xCAE) = FT_FIELD(f, s16, 0xCAC);
    FT_FIELD(f, s16, 0xCAC) = 0x25;
    if (FT_FIELD(f, s16, 0xCAE) == FT_FIELD(f, s16, 0xCAC)) {
        FT_FIELD(f, s16, 0xCB0) = FT_FIELD(f, s16, 0xCB0) + 1;
    } else {
        FT_FIELD(f, s16, 0xCB0) = 0;
    }
    FT_FIELD(f, s16, 0xCB2) = 0;
    if (FT_FIELD(f, s8, 0x2010) != 0) {
        ((FighterCB2 *)f)->unkCB2 |= 0x8000;
    }
    if (FT_FIELD(f, s8, 0x2011) != 0) {
        ((FighterCB2 *)f)->unkCB2 |= 0x4000;
    }
    FT_FIELD(f, s32, 0xB70) = (FT_FIELD(f, s16, 0xCB4) == 0) ? 0x2F : 0x29;
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
    }
    ret = func_001E3D60(FT_FIELD(f, s32, 0x17AC), 180.0f);
    if (ret == 0) {
        func_001E4820(1.0f, f, 0);
    } else {
        func_001E4820(-1.0f, f, 0);
    }
    func_001E3460(f);
    FT_FIELD(f, f32, 0xCA4) = 0.1f;
    FT_FIELD(f, f32, 0xCA8) = 0.1f;
    FT_FIELD(f, s32, 0xCB8) = 0;
    FT_FIELD(f, s8, 0x2003) = 0;
    FT_FIELD(f, s8, 0x1FFD) = 1;
    FT_FIELD(f, s16, 0x181C) = 0;
    func_001DD680(f);
    FT_FIELD(f, s8, 0x2004) = 0;
    if (FT_FIELD(f, s16, 0xCAE) != 0x12 || FT_FIELD(f, s8, 0x1FFA) != 1) {
        func_001D9900(f, 0x12, 1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5320);
void func_001B5490(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B54E0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5630);
void func_001B57A0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.25f;
}
void func_001B57F0(Fighter *f) {
    s32 r;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001D9BF0(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5940);
void func_001B5AF0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
}
void func_001B5B30(Fighter *f) {
    func_001E3430(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        FT_FIELD(f, s16, 0xCB4) = !(FT_FIELD(f, s16, 0xCB4) != 0);
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_004684A8[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5BC0);
void func_001B5DA0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
extern void (*D_004684E8[])(void *);
extern void func_002CBFF0(s32, void *);
extern void func_001E3430(void *, s32);
extern void func_001E4E20(void *, s32);
void func_001B5DB0(Fighter *f) {
    func_001E3430(f, 0);
    func_001E4E20(f, 0);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"((u8 *)f + 0x40), "r"((u8 *)f + 0x100));
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        f32 t = FT_FIELD(f, f32, 0x44) + FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC) - FT_FIELD(f, f32, 0x1844);
        FT_FIELD(f, s8, 0x1FF9) = 1;
        if (t <= 25.0f) {
            FT_FIELD(f, s8, 0x1FF9) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_004684E8[0](f);
        func_002CBFF0(1, f);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B5E70);
void func_001B60E0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B62D0);
void func_001B6470(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B64C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6660);
void func_001B6800(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
void func_001B6820(Fighter *f) {
    func_001E3430(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6830);
void func_001B6960(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6980);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6C50);
void func_001B6EC0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
void func_001B6EE0(Fighter *f) {
    func_001E3BB0(f);
    func_001E3430(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B6F10);
void func_001B7090(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B70B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7360);
void func_001B75A0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = (FT_FIELD(f, f32, 0xCB8) < 3.0f) ? 0.4f : 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7620);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7A30);
#if 0
// differs: the else store (0.0) is laid out as a branch target; the original is 16 bytes longer, layout not reproduced
void func_001B7C50(Fighter *f) {
    f32 v = 0.0f;
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    if (FT_FIELD(f, f32, 0xCB8) < 3.0f) {
        if (FT_FIELD(f, s16, 0xCB4) != 0) {
            v = -0.4f;
        } else {
            v = 0.4f;
        }
    }
    FT_FIELD(f, f32, 0x17BC) = v;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7C50);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7CF0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B80D0);
#include "battle/battle.h"
#include "battle/character.h"

/* Fighter fields that battle.h does not name yet: read and written at the given offset (inferred). */
#define FIGHTER_FIELD(f, T, off) (*(T *)((u8 *)(f) + (off)))

extern void func_001BD760(Fighter *f);
extern void func_0029D270(void *a, s32 b);
extern void func_001DF500(void *f);
extern void func_001C80E0(Fighter *f, s32 i);
extern void func_001C8050(Fighter *f, s32 i);
extern void func_001C82C0(Fighter *f, s32 i);
extern void func_001C0130(Fighter *f, s32 a);
extern void func_001E7070(void *p, s32 a);
extern void func_001E8290(void *p);
extern void func_001CA8A0(void *p);
extern s32 func_001C8B50(Fighter *f, void *p);
extern void func_001D9CA0();
extern void *func_001CAAB0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_001CAA30(s32 a);
extern void *D_00428AB0[];
extern void func_001D9960(Fighter *f, s32 a, s32 b);
extern void func_001C73B0(void *p);
extern void func_001C8340(Fighter *f);
extern void func_001C8600(Fighter *f);
extern void amCdFs_ReleaseCache(void *handle);
extern void amCdFs_Close(void *handle, s32 mode);

/* The `BTL_CHARA(i)` fighter slot: slot i of the array at gBattle + 0x830 (stride 0x2020). */
#define BTL_CHARA(i) ((Fighter *)((u8 *)D_00470570 + 0x830 + (i) * 0x2020))

/* The battle's work area up to the number of fighters at 0x88D8 (inferred from the fighter loops below). */
typedef struct BattleSlots {
    u8 unk0000[0x88D8];
    s32 numFighters;
    u8 unk88DC[0x88EC - 0x88DC];
    s32 unk88EC;
    u8 unk88F0[0x8975 - 0x88F0];
    s8 unk8975;
} BattleSlots;

/* A 20-byte entry of a fighter's table at 0x1D14 (inferred from func_001C8A50). */
typedef struct Slot20 {
    s16 unk00;
    s16 unk02;
    s16 unk04;
    s8 unk06;
    u8 unk07[9];
    void *unk10;
} Slot20;

/* A load slot of a fighter (28 bytes; fields inferred from func_001C82C0). */
typedef struct CdSlot {
    s32 unk00;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    void *handle;
    s32 unk18;
} CdSlot;

/* Fighter fields by name, for the functions whose offsets the compiler folds only through a struct (inferred). */
typedef struct FighterV {
    u8 pad0044[0x44];
    f32 unk44;
    u8 pad0B70[0xB28];
    s32 unkB70;
    u8 pad0CAC[0x138];
    s16 unkCAC;
    s16 unkCAE;
    s16 unkCB0;
    u16 unkCB2;
    s16 unkCB4;
    s16 unkCB6;
    f32 unkCB8;
    u8 pad17AC[0xAF0];
    s32 unk17AC;
    u8 pad1844[0x94];
    f32 unk1844;
    u8 pad1FF9[0x7B1];
    s8 unk1FF9;
    u8 pad1FFB[0x1];
    s8 unk1FFB;
    u8 pad1FFD[0x1];
    s8 unk1FFD;
    u8 pad2004[0x6];
    s8 unk2004;
    u8 pad2006[0x1];
    s8 unk2006;
    u8 pad2010[0x9];
    s8 unk2010;
    s8 unk2011;
} FighterV;

extern void func_001C37F0(Fighter *f, void *p);
extern void func_001C5870(Fighter *f);
extern void func_0029D860(s32 a);
extern void func_0012F2C0(void);
extern s32 func_001E3D60(s32 a, f32 b);
extern void func_001C8500(Fighter *f, s32 i);
extern void func_001CA8F0(void *p);
extern void func_001E53B0(Fighter *f, s32 i);
extern void func_001C7D90(Fighter *f, s32 i, void *p);
extern s32 func_001D4850(void *s);

void func_001B82E0(void) {
}
void func_001B82F0(Fighter *f) {
    func_001E3430(f, 0);
    if (FIGHTER_FIELD(f, s32, 0xC64) != 0) {
        FIGHTER_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        FIGHTER_FIELD(f, s8, 0x2004) = 1;
        FIGHTER_FIELD(f, s8, 0x1FFB) = 1;
        FIGHTER_FIELD(f, s16, 0xCB6) = 0;
        FIGHTER_FIELD(f, s8, 0x2006) = 0;
        ((void (*)(Fighter *))D_004684A8[0])(f);
        func_002CBFF0(1, f);
    }
    func_001E4E20(f, 0);
    FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8380);
void func_001B84F0(Fighter *f) {
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8600);
void func_001B8780(Fighter *f) {
    if (FIGHTER_FIELD(f, f32, 0xCB8) <= 2.0f) {
        if (func_001E3D60(FIGHTER_FIELD(f, s32, 0x17AC), 180.0f) != 0) {
            FIGHTER_FIELD(f, f32, 0x17BC) = -0.3f;
        } else {
            FIGHTER_FIELD(f, f32, 0x17BC) = 0.3f;
        }
    } else {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B87F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8E50);
void func_001B9040(Fighter *f) {
    func_001E4E20(f, 0);
    FIGHTER_FIELD(f, s32, 0x17BC) = 0x3E800000;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9070);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B91B0);
void func_001B9330(Fighter *f) {
    if (FIGHTER_FIELD(f, f32, 0xCB8) <= 2.0f) {
        if (func_001E3D60(FIGHTER_FIELD(f, s32, 0x17AC), 180.0f) != 0) {
            FIGHTER_FIELD(f, f32, 0x17BC) = -0.3f;
        } else {
            FIGHTER_FIELD(f, f32, 0x17BC) = 0.3f;
        }
    } else {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B93A0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9800);
void func_001B9A80(Fighter *f) {
    f32 t;

    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    t = FIGHTER_FIELD(f, f32, 0xCB8) * 0.01f;
    FIGHTER_FIELD(f, f32, 0x17BC) = (0.2f < t) ? 0.2f : t;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9B00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9CA0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9E70);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA070);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA570);
void func_001BA7B0(Fighter *f) {
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    func_001E4E20(f, 0);
    FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA7F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAB10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BACE0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAE10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BAFF0);
void func_001BB2C0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BB310);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BBC60);
void func_001BBF50(Fighter *f) {
    f32 t;

    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    t = FIGHTER_FIELD(f, f32, 0xCB8) * 0.015f;
    FIGHTER_FIELD(f, f32, 0x17BC) = (0.2f < t) ? 0.2f : t;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BBFD0);
void func_001BC110(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 0xD;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 1;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = (f32)fv->unk17AC > 3.1415927f ? 0x13 : 0x12;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3CA3D70A;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
}
void func_001BC220(Fighter *f) {
    FIGHTER_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC270);
void func_001BC3F0(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 12;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 1;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 14;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
    FIGHTER_FIELD(f, s8, 0xCBD) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC4D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC7C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCA80);

void func_001BCC30(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    FIGHTER_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
    if (!(fv->unkCB8 < 4.0f)) {
        fv->unkCB2 = 1;
        if (fv->unk2010 != 0) {
            fv->unkCB2 |= 0x8000;
        }
        if (fv->unk2011 != 0) {
            fv->unkCB2 |= 0x4000;
        }
    }
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCCD0);
void func_001BCE50(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 0xA;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 0x40;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 11;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BCF30);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD020);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD300);
void func_001BD490(Fighter *f) {
    f32 t;

    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    if (FIGHTER_FIELD(f, s16, 0xCB4) != 0) {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    } else {
        t = FIGHTER_FIELD(f, f32, 0xCB8) * 0.1f;
        if (1.0f < t) {
            t = 1.0f;
        }
        FIGHTER_FIELD(f, f32, 0x17BC) = t;
    }
}
void func_001BD520(Fighter *f) {
    func_001BD760(f);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD530);
void func_001BD6D0(Fighter *f) {
    f32 t;

    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    if (FIGHTER_FIELD(f, s16, 0xCB4) != 0) {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    } else {
        t = FIGHTER_FIELD(f, f32, 0xCB8) * 0.1f;
        if (1.0f < t) {
            t = 1.0f;
        }
        FIGHTER_FIELD(f, f32, 0x17BC) = t;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD760);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD900);
void func_001BDAA0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    if (FIGHTER_FIELD(f, s16, 0xCB4) == 0 && FIGHTER_FIELD(f, f32, 0xCB8) < 4.0f) {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0x3E4CCCCD;
    } else {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDB20);
void func_001BDE30(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 6;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 0x80;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 6;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
    func_001D9960(f, 0x20, 0);
}
void func_001BDF20(Fighter *f) {
    func_001C37F0(f, (u8 *)f + 0xD0);
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    if (FIGHTER_FIELD(f, s16, 0xCB4) == 0) {
        FIGHTER_FIELD(f, s32, 0x17BC) = 0x3E4CCCCD;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BDF80);
void func_001BE280(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 5;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 0x40;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 5;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
}
void func_001BE360(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE3B0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE4F0);
void func_001BE670(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE6C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE8D0);
#if 0
// differs: the VU0 subtraction matches but the vector's address is computed before the 0.5 scale and moved into a1 (one instruction order), and the if before the store has an alignment nop the original lacks (size 0xE0 against 0xF0)
extern void func_001C37F0(Fighter *f, void *p);
extern void func_00146ED0(f32 s, void *v);
extern void func_001E4FA0(Fighter *f, s32 a);
void func_001BEA60(Fighter *f) {
    f32 v[4];
    f32 t;
    f32 s;
    s = BW_FIELD(D_00470570, f32, 0x88F0) * FT_FIELD(f, f32, 0xC9C);
    func_001C37F0(f, v);
    t = FT_FIELD(f, f32, 0xB64);
    if (t == 0.0f) {
        t = 0.1f;
    }
    v[1] = v[1] * 0.5f;
    func_00146ED0(t * s, v);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)" : : "r"((u8 *)f + 0x40), "r"(v));
    func_001E4FA0(f, -1);
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEA60);
void func_001BEB50(Fighter *f) {
    f32 a;
    s32 v;

    func_001E3430(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        a = FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC);
        if (a - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
            ((FighterV *)f)->unk1FF9 = 0;
            FT_FIELD(f, s32, 0xB70) = 4;
            func_001E3460(f);
            FT_FIELD(f, s32, 0x1864) = 8;
            func_001E5040(f);
            FT_FIELD(f, s32, 0xCA4) = 0;
            FT_FIELD(f, s32, 0xCA8) = 0x3CA3D70A;
        }
    }
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    if (v < 0) {
        return;
    }
    if (v == FT_FIELD(f, s16, 0xCAC)) {
        return;
    }
    FT_FIELD(f, s16, 0xCB4) = 0;
    FT_FIELD(f, s8, 0x2004) = 1;
    FT_FIELD(f, s8, 0x1FFB) = 1;
    if (v != 0xF) {
        FT_FIELD(f, s16, 0xCB6) = 0;
    }
    FT_FIELD(f, s8, 0x2006) = 0;
    ((void (*)(Fighter *))D_00468460[v])(f);
    func_002CBFF0(1, f);
}
void func_001BEC70(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 3;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 1;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 4;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
    func_001D9960(f, 0x20, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BED60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BEE60);
void func_001BF090(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 2;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 1;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = 3;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
}
void func_001BF170(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    if (!(fv->unkCB8 < 4.0f)) {
        fv->unkCB2 = 2;
        if (fv->unk2010 != 0) {
            fv->unkCB2 |= 0x8000;
        }
        if (fv->unk2011 != 0) {
            fv->unkCB2 |= 0x4000;
        }
        fv->unk1FFD = 1;
    }
    func_001E4E20(f, 0);
    if (fv->unk1FF9 == 0) {
        fv->unk44 = fv->unk1844;
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0x3E99999A;
    if ((fv->unkCB2 & 0x2) != 0) {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF230);
void func_001BF350(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    FIGHTER_FIELD(f, s16, 0xCAE) = FIGHTER_FIELD(f, s16, 0xCAC);
    FIGHTER_FIELD(f, s16, 0xCAC) = 1;
    if (FIGHTER_FIELD(f, s16, 0xCAE) == FIGHTER_FIELD(f, s16, 0xCAC)) {
        FIGHTER_FIELD(f, s16, 0xCB0) = FIGHTER_FIELD(f, s16, 0xCB0) + 1;
    } else {
        FIGHTER_FIELD(f, s16, 0xCB0) = 0;
    }
    fv->unkB70 = 2;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3E4CCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3E4CCCCD;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
    FIGHTER_FIELD(f, s16, 0xCB4) = 0;
}
void func_001BF400(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF450);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF570);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF730);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BFD60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C0130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C09A0);
#if 0
// differs: sibling of func_001C2340 (same table walk); the final epilogue layout differs: the original jumps every failed test to the shared jr, the compiler keeps a separate exit
s32 func_001C21C0(Fighter *f) {
    s16 *t;
    s32 n;
    s32 idx;
    s32 k;
    s32 k2;
    s32 sum;
    s32 v;
    t = (s16 *)((u8 *)f + 0x164);
    n = FT_FIELD(f, s32, 0x50);
    if (n <= 0) {
        return 0;
    }
    idx = FT_FIELD(f, s32, 0x60);
    if (t[idx * 2] != 1) {
        return 0;
    }
    sum = t[idx * 2 + 1];
    if (sum > 0) {
        return 0;
    }
    if (sum < -14) {
        return 0;
    }
    if (sum < 0) {
        sum = -sum;
    }
    k = (idx - 1) & 0x1F;
    if (t[k * 2] != 0) {
        return 0;
    }
    v = t[k * 2 + 1];
    if (v > 0) {
        return 0;
    }
    if (v < -9) {
        return 0;
    }
    if (v < 0) {
        v = -v;
    }
    k2 = (k - 1) & 0x1F;
    sum += v;
    if (t[k2 * 2] != 1) {
        return 0;
    }
    v = t[k2 * 2 + 1];
    if (v > 0) {
        return 0;
    }
    if (v < -9) {
        return 0;
    }
    if (v < 0) {
        v = -v;
    }
    sum += v;
    if (n < sum) {
        return 0;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C21C0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C2340);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C24C0);
/* A pair of 16-bit values of a 32-entry table (inferred from func_001C27E0). */
typedef struct TblPair {
    s16 a;
    s16 b;
} TblPair;

#if 0
s32 func_001C26A0(void *p) {
    TblPair *t = (TblPair *)((u8 *)p + 0x64);
    s32 last;
    s32 idx;
    s32 idx2;
    s32 sum;
    s32 b;

    last = FIGHTER_FIELD(p, s32, 0x58);
    if (t[last].a != 1) {
        return 0;
    }
    sum = t[last].b;
    if (sum < 14) {
        return 0;
    }
    if (sum < 0) {
        sum = -sum;
    }
    idx = (last - 1) & 0x1F;
    if (t[idx].a != 0) {
        return 0;
    }
    b = t[idx].b;
    if (b < 0) {
        b = -b;
    }
    if (b >= 9) {
        return 0;
    }
    b = t[idx].b;
    if (b < 0) {
        b = -b;
    }
    sum += b;
    idx2 = (idx - 1) & 0x1F;
    if (t[idx2].a != 1) {
        return 0;
    }
    b = t[idx2].b;
    if (b < 0) {
        b = -b;
    }
    if (b >= 9) {
        return 0;
    }
    b = t[idx2].b;
    if (b < 0) {
        b = -b;
    }
    sum += b;
    if (FIGHTER_FIELD(p, s32, 0x410) < sum) {
        return 0;
    }
    return 1;
}
#endif
// differs: the early returns jump past the final jump (the original's epilogue is two instructions later); the ternary form of the absolute values did not change it
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C26A0);

s32 func_001C27E0(void *p) {
    TblPair *t = (TblPair *)((u8 *)p + 0x64);
    s32 last;
    s32 idx;
    s32 idx2;
    s32 v;

    if (FIGHTER_FIELD(p, s32, 0x50) > 0) {
        return 0;
    }
    last = FIGHTER_FIELD(p, s32, 0x58);
    if (t[last].a != -1) {
        return 0;
    }
    if (t[last].b != 1) {
        return 0;
    }
    idx = (last - 1) & 0x1F;
    if (t[idx].a != 0) {
        return 0;
    }
    v = t[idx].b;
    if (v < 0) {
        v = -v;
    }
    if (v >= 9) {
        return 0;
    }
    idx2 = (idx - 1) & 0x1F;
    if (t[idx2].a != -1) {
        return 0;
    }
    v = t[idx2].b;
    if (v < 0) {
        v = -v;
    }
    if (v >= 9) {
        return 0;
    }
    return 1;
}

s32 func_001C28F0(void *p) {
    TblPair *t = (TblPair *)((u8 *)p + 0x64);
    s32 last;
    s32 idx;
    s32 idx2;
    s32 v;

    if (FIGHTER_FIELD(p, s32, 0x50) > 0) {
        return 0;
    }
    last = FIGHTER_FIELD(p, s32, 0x58);
    if (t[last].a != 1) {
        return 0;
    }
    if (t[last].b != 1) {
        return 0;
    }
    idx = (last - 1) & 0x1F;
    if (t[idx].a != 0) {
        return 0;
    }
    v = t[idx].b;
    if (v < 0) {
        v = -v;
    }
    if (v >= 9) {
        return 0;
    }
    idx2 = (idx - 1) & 0x1F;
    if (t[idx2].a != 1) {
        return 0;
    }
    v = t[idx2].b;
    if (v < 0) {
        v = -v;
    }
    if (v >= 9) {
        return 0;
    }
    return 1;
}
s32 func_001C2A00(Fighter *f) {
    u8 *q;
    s32 flag;
    s16 *e;
    s32 v;
    q = (u8 *)f + 0x1360;
    e = (s16 *)(q + 0x64);
    flag = !(FT_FIELD(f, s32, 0x1CF0) >= 0);
    if (FT_FIELD(q, s32, 0x48) >= 0) {
        return 0;
    }
    if (FT_FIELD(q, s32, 0x4C) >= 0) {
        return 0;
    }
    if (flag != 0 && FT_FIELD(q, s32, 0x54) >= 0) {
        return 0;
    }
    v = FT_FIELD(q, s32, 0x50);
    if (v == 0) {
        return 0;
    }
    if (v < -5) {
        return 0;
    }
    if (v > 10) {
        return 0;
    }
    e = (s16 *)((u8 *)e + FT_FIELD(q, s32, 0x58) * 4);
    if (e[0] != 1) {
        return 0;
    }
    v = e[1];
    if (v < 0) {
        v = -v;
    }
    if (v > 15) {
        return 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C2B10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3120);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C37F0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3AF0);
extern void func_001B0B10(void);
extern void func_001B0810(void);

s32 func_001C3D10(Fighter *f) {
    s32 buf[6];
    u8 *gb = (u8 *)D_00470570;

    if (f->unk1AC4 > 0) {
        if (FT_FIELD(gb, s16, 0x8944) == 0) {
            if (!(FT_FIELD(f, f32, 0x189C) <= 120.0f)) {
                if (FT_FIELD(gb, s8, 0x8AB2) == 0) {
                    if (FT_FIELD(f, s32, 0x1350) != FT_FIELD(gb, s32, 0x8900)) {
                        buf[0] = (s32)f;
                        buf[1] = FT_FIELD(f, s32, 0x1354);
                        buf[2] = FT_FIELD(f, s32, 0x1AC0);
                        buf[3] = FT_FIELD(f, s32, 0x1AC4);
                        buf[4] = (s32)func_001B0B10;
                        buf[5] = (s32)func_001B0810;
                        func_00237000(4, buf);
                        if (FT_FIELD(gb, s16, 0x8948) >= 0) {
                            f->unk1AC4 = 0;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3E10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4000);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4250);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4710);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4870);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4C10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C55D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5870);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5D50);
#if 0
void func_001C5F20(void) {
    BattleSlots *bw = (BattleSlots *)D_00470570;
    Fighter *f;
    s32 i;

    f = (Fighter *)((u8 *)bw + 0x830);
    for (i = 0; i < bw->numFighters; i++) {
        FIGHTER_FIELD(f, s8, 0x2004) = 1;
        FIGHTER_FIELD(f, s8, 0x1FFB) = 1;
        FIGHTER_FIELD(f, s16, 0xCB6) = 0;
        FIGHTER_FIELD(f, s8, 0x2006) = 0;
        ((void (*)(Fighter *))D_00468460[0])(f);
        func_002CBFF0(1, f);
        FIGHTER_FIELD(f, s8, 0xCBD) = 0;
        FIGHTER_FIELD(f, s16, 0xCB4) = 1;
        FIGHTER_FIELD(f, s32, 0xCA4) = 0x3F800000;
        FIGHTER_FIELD(f, s32, 0xCA8) = 0;
        FIGHTER_FIELD(f, s32, 0x18D8) = 1;
        func_001D9CA0(f);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
#endif
// differs: the constant 1 is kept in another register (v1 for a1 in the original): the store order matches, the register does not
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5F20);
#if 0
// differs: the battle pointer and the fighter pointers are kept in saved registers (frame 0x70 against 0x50, 83 of 85 differ) even with struct access
typedef struct BWY {
    u8 a[0x88D8];
    s32 n88D8;
    u8 b[0x8934 - 0x88DC];
    void *fighter[2];
} BWY;
extern void func_001D8710(void *a);
extern s32 func_001D89E0(void *f, s32 i);
void func_001C5FE0(void *a0) {
    BWY *bx;
    s32 i;
    s32 s2v;
    s32 s3v;
    bx = (BWY *)D_00470570;
    if (a0 != 0) {
        func_001D8710(a0);
    } else {
        if (bx->n88D8 < 3) {
            s3v = 0;
            s2v = 0;
            for (i = 0; i < 2; i++) {
                if (func_001D89E0((u8 *)bx + 0x830, i) != 0) {
                    s3v = i;
                }
                if (func_001D89E0((u8 *)bx + 0x2850, i) != 0) {
                    s2v = i;
                }
            }
            if (s3v < s2v) {
                bx->fighter[0] = (u8 *)bx + 0x2850;
            } else {
                bx->fighter[0] = (u8 *)bx + 0x830;
            }
            if (s3v < s2v) {
                bx->fighter[1] = (u8 *)bx + 0x830;
            } else {
                bx->fighter[1] = (u8 *)bx + 0x2850;
            }
        } else if (0 < bx->n88D8) {
            i = 0;
            do {
                ((s32 *)bx->fighter)[i] = (s32)((u8 *)bx + 0x830 + i * 0x2020);
                i++;
            } while (i < bx->n88D8);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5FE0);
void func_001C6120(void *a0) {
    Fighter *t1 = BTL_CHARA(0);
    s32 i;
    s16 *a3;

    if (0 < ((BattleSlots *)D_00470570)->numFighters) {
        i = 0;
        a3 = a0;
        do {
            if (*(s32 *)a0 & (1 << i)) {
                FIGHTER_FIELD(t1, s8, 0x1FF8) = a3[4];
            }
            i++;
            a3++;
            t1 = (Fighter *)((u8 *)t1 + 0x2020);
        } while (i < ((BattleSlots *)D_00470570)->numFighters);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C61A0);
#if 0
void func_001C6350(void) {
    s32 i;
    Fighter *f;
    BattleSlots *bw = (BattleSlots *)D_00470570;

    if (bw->unk8975 == 1) {
        return;
    }
    func_0029D860(bw->unk88EC);
    f = BTL_CHARA(0);
    for (i = 0; i < bw->numFighters; i++) {
        func_001C5870(f);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
    func_0012F2C0();
}
#endif
// differs: the compiler keeps the table base in s0 and the fighter pointer in s2; the original keeps the base in s1, the fighter in s0 and the index in s2
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6350);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C63F0);
void func_001C6780(void) {
    BattleSlots *bw = (BattleSlots *)D_00470570;
    Fighter *f;
    s32 i;
    u8 *s0;

    if (bw->unk88EC != 0) {
        return;
    }
    if (0 < bw->numFighters) {
        i = 0;
        s0 = (u8 *)bw;
        do {
            f = *(Fighter **)(s0 + 0x88DC);
            func_001D8320(f);
            D_00468530[FT_FIELD(f, s16, 0xCAC)](f);
            if (FT_FIELD(f, s8, 0x133C) == 0) {
                D_004685E4[0](f);
            }
            i++;
            s0 += 4;
        } while (i < bw->numFighters);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C6860);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C73B0);
void func_001C7570(s32 i) {
    func_001DF500((u8 *)D_00470570 + 0x830 + i * 0x2020);
}
void func_001C7590(Fighter *f, s32 bits) {
    *(u16 *)((u8 *)f + 0xCB2) &= (u16)~(bits & 0xFF00);
}
void func_001C75B0(Fighter *f, s32 bits) {
    *(u16 *)((u8 *)f + 0xCB2) |= (u16)(bits & 0xFF00);
}
void func_001C75D0(Fighter *f, s32 mode) {
    switch (mode) {
    case 0x14:
        func_001C0130(f, 0);
        return;
    case 0:
    case 1:
        FT_FIELD(f, s16, 0xCB4) = 0;
        break;
    }
    FT_FIELD(f, s8, 0x2004) = 1;
    FT_FIELD(f, s8, 0x1FFB) = 1;
    if (mode != 0xF) {
        FT_FIELD(f, s16, 0xCB6) = 0;
    }
    FT_FIELD(f, s8, 0x2006) = 0;
    ((void (*)(Fighter *))D_00468460[mode])(f);
    func_002CBFF0(1, f);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7670);
s32 func_001C7D30(s32 i) {
    return *(s32 *)((u8 *)D_00470570 + i * 0x2020 + 0x2710);
}
s32 func_001C7D50(s32 i) {
    return *(s32 *)((u8 *)D_00470570 + i * 0x2020 + 0x270C);
}
void *func_001C7D70(s32 i) {
    return (u8 *)*(void **)((u8 *)D_00470570 + i * 0x2020 + 0x2528) + 0x24;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D90);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8020);
/* Fighter view for func_001C8050: the slot pointer at 0x1CF4 (a table entry with two s16 at 0x14 and 0x16). */
typedef struct FighterSlotView {
    u8 unk0000[0xBA4];
    s32 unkBA4;
    u8 unkBA8[0x1CF4 - 0xBA8];
    void *unk1CF4;
    u8 unk1CF8[0x1CFC - 0x1CF8];
    s32 unk1CFC;
} FighterSlotView;

void func_001C8050(Fighter *f, s32 i) {
    FighterSlotView *fv = (FighterSlotView *)f;
    s32 k = 1;
    void *p;

    if (fv->unk1CFC != 0x2A) {
        k = 1;
        do {
            if (k != fv->unkBA4) {
                p = fv->unk1CF4;
                if (k != FT_FIELD(p, s16, 0x14) && k != FT_FIELD(p, s16, 0x16) && k != i) {
                    func_001C82C0(f, k);
                }
            }
            k++;
        } while (k < 8);
    }
}
#if 0
// differs: the compiler keeps the field addresses in saved registers (frame 0xB0 against 0x50); the original re-reads the fields inside the loop
extern void func_001E7070(void *p, s32 a);
extern void func_001E8290(void *p);
extern void func_001CA8A0(void *p);
void func_001C80E0(Fighter *f, s32 a1) {
    u8 *w;
    s32 i;
    if (FT_FIELD(f, s32, 0x1CFC) != 0x2A) {
        i = 0;
        w = (u8 *)f;
        do {
            if (i != FT_FIELD(f, s32, 0xBA4) && i != FT_FIELD(FT_FIELD(f, void *, 0x1CF4), s16, 0x14) &&
                i != FT_FIELD(FT_FIELD(f, void *, 0x1CF4), s16, 0x16) && i != a1) {
                if (FT_FIELD(w, s32, 0x1DB8) != 0) {
                    if (FT_FIELD(f, s32, 0xB7C) == FT_FIELD(w, s32, 0x1DB8)) {
                        func_001E7070((u8 *)f + 0x650, -1);
                        func_001E8290((u8 *)f + 0x650);
                    }
                    if (FT_FIELD(f, s32, 0x11FC) == FT_FIELD(w, s32, 0x1DB8)) {
                        func_001E7070((u8 *)f + 0xCD0, -1);
                        func_001E8290((u8 *)f + 0xCD0);
                    }
                    func_001CA8A0((void *)FT_FIELD(w, s32, 0x1DB8));
                    FT_FIELD(w, s32, 0x1DB8) = 0;
                }
            }
            i++;
            w += 4;
        } while (i < 8);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C80E0);
void func_001C81D0(Fighter *f, s32 i) {
    func_001C80E0(f, i);
    func_001C8050(f, i);
}
#if 0
void func_001C8210(Fighter *f, s32 i) {
    s32 *slot;

    slot = (s32 *)((u8 *)f + 0x1DB8) + i;
    if (*slot != 0) {
        if (FT_FIELD(f, s32, 0xB7C) == *slot) {
            func_001E7070((u8 *)f + 0x650, -1);
            func_001E8290((u8 *)f + 0x650);
        }
        if (FT_FIELD(f, s32, 0x11FC) == *slot) {
            func_001E7070((u8 *)f + 0xCD0, -1);
            func_001E8290((u8 *)f + 0xCD0);
        }
        func_001CA8A0((void *)*slot);
        *slot = 0;
    }
    func_001C82C0(f, i);
}
#endif
// differs: the slot address and the field 0x650 address are shared between the two calls (the compiler keeps f+0x650 in a saved register); the original recomputes it per call; frame 0x50 against 0x40, register order differs
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8210);
void func_001C82C0(Fighter *f, s32 i) {
    CdSlot *s = (CdSlot *)((u8 *)f + 0x1DF8 + i * 28);

    s->unk18 = 0;
    if (s->unk00 != 0) {
        amCdFs_ReleaseCache(s->handle);
        s->handle = 0;
        s->unk00 = 0;
        s->unk04 = 0;
        s->unk08 = 0;
        s->unk0C = 0;
        s->unk10 = 0;
    } else if (s->handle != 0) {
        amCdFs_Close(s->handle, 0);
        s->handle = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8340);
void func_001C8480(Fighter *f, s32 i) {
    void *p;

    func_001C8500(f, i);
    p = ((void **)((u8 *)f + 0x1DB8))[i];
    if (p != 0 && FIGHTER_FIELD(p, s32, 0x24) == 0) {
        func_001CA8F0(p);
        func_001E53B0(f, i);
        func_001C7D90(f, i, 0);
    }
}
void func_001C8500(Fighter *f, s32 i) {
    s32 *s1;
    s32 *e = (s32 *)((u8 *)f + i * 28 + 0x1DF8);
    s32 k;
    s32 *s2;

    if (e[6] != 0) {
        return;
    }
    s1 = (s32 *)e[5];
    if (s1 == 0) {
        return;
    }
    e[5] = s1[16];
    e[0] = ((s32 *)s1[16])[20];
    amFile_Load(e[0]);
    e[1] = func_001A50F0(e[0], 0);
    if (e[1] != 0) {
        amFile_Load(e[1]);
    }
    k = 0;
    s2 = e;
    for (; k < 3; k++) {
        s2[2] = func_001A50F0(e[0], k + 1);
        if (s2[2] != 0) {
            amFile_Load(s2[2]);
        }
        s2++;
    }
    FT_FIELD(s1, s32, 0x40) = 0;
    amCdFs_Close(s1, 0);
    e[6] = 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8600);
#if 0
s32 func_001C8780(Fighter *f, s32 i) {
    s32 a0;
    s32 r;
    s32 *s;

    if (*(s32 *)((u8 *)f + (i << 2) + 0x1DB8) != 0) {
        a0 = (func_001CAA30(2) == 0) ? 0 : 2;
    } else {
        a0 = 1;
    }
    if (a0 == 0) {
        return 0;
    }
    s = (s32 *)((u8 *)f + i * 28 + 0x1DF8);
    if (s[0] != 0) {
        r = 1;
    } else if (s[5] == 0) {
        r = 1;
    } else if (FT_FIELD(s[5], s16, 0x4) == 3) {
        r = 2;
    } else {
        r = 0;
    }
    if (r == 0) {
        return 0;
    }
    if (r < a0) {
        return a0;
    }
    return r;
}
#endif
// differs: the test on the slot is kept in a0 in the original (lw a0, bnez a0), the final max is a movz / slt pair; ours loads into v0 and the register numbers of f, i and the result differ
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8780);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8860);
s32 func_001C89A0(Fighter *f, s32 i) {
    u8 *base = (u8 *)f + i * 28;
    s32 *s0 = (s32 *)(base + 0x1DF8);
    s32 *tbl;
    s32 r = 0;

    if (FT_FIELD(base, s32, 0x1E10) != 0) {
        return 0;
    }
    if (s0[0] != 0 || s0[5] != 0) {
        return 0;
    }
    tbl = (s32 *)FT_FIELD(f, void *, 0x1CF8);
    if (tbl[i] != -1) {
        r = amCdFs_ReadFileId(tbl[i], 0, 1);
        s0[5] = r;
        FT_FIELD(f, s32, 0x1EF8) = r;
    }
    return r;
}
s32 func_001C8A50(Fighter *f, s32 i, s32 a2, s32 a3, s32 t0) {
    void **slot;
    Slot20 *sl;
    void *v;

    slot = (void **)((u8 *)f + 0x1DB8) + i;
    if (*slot != 0) {
        return 0;
    }
    sl = (Slot20 *)((u8 *)f + 0x1D14 + i * 20);
    sl->unk00 = 0;
    sl->unk02 = a2;
    sl->unk04 = a3;
    sl->unk06 = 7;
    sl->unk10 = D_00428AB0[D_00447440[a2].costume[a3].unk0];
    v = func_001CAAB0(a2, a3, t0, FIGHTER_FIELD(f, s32, 0x1350), 0);
    if (v != 0) {
        FIGHTER_FIELD(f, s32, 0x1EF8) = ((s32 *)v)[8];
        *slot = v;
        FIGHTER_FIELD(f, u16, 0x1DB4) = FIGHTER_FIELD(f, u16, 0x1DB4) | (u16)(1 << i);
        return FIGHTER_FIELD(f, s32, 0x1EF8);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8B50);
void func_001C8E50(void) {
}
void func_001C8E60(void) {
    BattleSlots *bw = (BattleSlots *)D_00470570;
    Fighter *f;
    s32 i;

    f = (Fighter *)((u8 *)bw + 0x830);
    for (i = 0; i < bw->numFighters; i++) {
        func_001C8340(f);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
#if 0
// differs: same loop shape as func_001C8FE0; the registers now match, but the function is 16 bytes short (0xF0 against 0x100): the battle count is re-read through its address in each loop
extern void func_001C8050(Fighter *f, s32 i);
extern void func_001D9CA0();
extern void func_001DA4C0(void);
extern void func_001C90D0(void);
extern void amTask_KillGroup(s32, s32, s32);
void func_001C8EE0(void) {
    Fighter *first;
    BattleWork *bw;
    Fighter *p;
    s32 i;
    s32 j;
    bw = D_00470570;
    first = (Fighter *)((u8 *)bw + 0x830);
    i = 0;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        p = first;
        do {
            func_001C80E0(p, -1);
            func_001C8050(p, -1);
            i++;
            p = (Fighter *)((u8 *)p + 0x2020);
        } while (i < BW_FIELD(bw, s32, 0x88D8));
    }
    func_001DA4C0();
    j = 0;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        do {
            func_001D9CA0(first);
            j++;
            first = (Fighter *)((u8 *)first + 0x2020);
        } while (j < BW_FIELD(bw, s32, 0x88D8));
    }
    amTask_KillGroup(0x20, 0x40000000, 1);
    func_001C90D0();
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8EE0);
extern void func_001DA4C0(void);
extern void amTask_KillGroup(s32, s32, s32);

void func_001C8FE0(void) {
    BattleSlots *bw = (BattleSlots *)D_00470570;
    Fighter *f0 = (Fighter *)((u8 *)bw + 0x830);
    s32 i = 0;
    Fighter *f;
    s32 j;

    if (0 < bw->numFighters) {
        f = f0;
        do {
            func_001C80E0(f, -1);
            func_001C8050(f, -1);
            i++;
            f = (Fighter *)((u8 *)f + 0x2020);
        } while (i < bw->numFighters);
    }
    func_001DA4C0();
    if (0 < bw->numFighters) {
        j = 0;
        do {
            func_001D9CA0(f0, 1);
            j++;
            f0 = (Fighter *)((u8 *)f0 + 0x2020);
        } while (j < bw->numFighters);
    }
    amTask_KillGroup(0x20, 0x40000000, 1);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C90D0);
void func_001C9310(void) {
    Fighter *f;
    s32 i;

    f = (Fighter *)((u8 *)D_00470570 + 0x830);
    for (i = 0; i < ((BattleSlots *)D_00470570)->numFighters; i++) {
        func_001C8600(f);
        FIGHTER_FIELD(f, s16, 0x13A6) = i;
        FIGHTER_FIELD(f, s16, 0x13A4) = FIGHTER_FIELD(FIGHTER_FIELD(f, void *, 0x1CF4), s16, 0x1A);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
s32 func_001C9390(u8 *p) {
    BattleSlots *bw = (BattleSlots *)D_00470570;
    Fighter *f = (Fighter *)((u8 *)bw + 0x830);
    s32 r = 0;
    s32 i;
    s32 v;

    func_001C73B0(p);
    for (i = 0; i < 4; i++) {
        if (i < bw->numFighters) {
            FT_FIELD(f, s32, 0x1350) = i;
            v = func_001C8B50(f, p + 0x10);
            if (v != 0) {
                r = v;
            }
        } else {
            FT_FIELD(f, s32, 0x1350) = -1;
        }
        f = (Fighter *)((u8 *)f + 0x2020);
        p += 0x50;
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9440);
void func_001C95F0(Fighter *f, s32 i) {
    func_0029D270(*(void **)((u8 *)f + 0x4C), ((s16 *)f)[i]);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9610);
/* A node of a linked list of loaded files (fields inferred from func_001C9840; offsets as the code uses them). */
typedef struct CdNode {
    u8 unk00[0x08];
    struct CdNode *unk08;
    u8 unk0C[0x54 - 0x0C];
    struct CdNode *unk54;
    void *unk58;
    u8 unk5C[0x64 - 0x5C];
    s32 unk64;
    u8 unk68[0x6C - 0x68];
    void *unk6C;
    u8 unk70[0x7C - 0x70];
    s32 unk7C;
    struct CdNode *unk80;
    struct CdNode *unk84;
} CdNode;

void func_001C9840(CdNode *p) {
    s32 v;
    CdNode *q;
    CdNode **link;

    if (p == 0) {
        return;
    }
    v = p->unk7C - 1;
    p->unk7C = v;
    if (v > 0) {
        return;
    }
    func_001D4620(p->unk58);
    if (p->unk64 != 0) {
        amCdFs_ReleaseCache(p->unk6C);
    } else if (p->unk6C != 0) {
        amCdFs_Close(p->unk6C, 0);
    }
    if (p->unk80 != 0) {
        p->unk80->unk84 = p->unk84;
    }
    if (p->unk84 != 0) {
        p->unk84->unk80 = p->unk80;
    }
    q = p->unk54;
    link = &q->unk08;
    if (p == *link) {
        *link = p->unk84;
    }
    amHeap_Free(p);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9910);
s32 func_001C9A70(void *p) {
    void *q;

    if (p == 0 || FT_FIELD(p, void *, 0x74) != 0) {
        return 1;
    }
    q = FT_FIELD(p, void *, 0x70);
    if (q != 0 && FT_FIELD(q, s16, 0x4) != 3) {
        return 0;
    }
    if (func_001D4850(FT_FIELD(p, void *, 0x58)) == 0) {
        return 0;
    }
    return 1;
}
