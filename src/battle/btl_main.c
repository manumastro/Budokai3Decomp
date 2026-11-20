#include "common.h"
#include "battle/battle.h"
#include "battle/stage.h"

/* The fighter's fields that battle.h does not name yet (offsets from the assembly of btl_main.c). */
#define FT_FIELD(ft, type, off) (*(type *)((u8 *)(ft) + (off)))
/* A 16-byte block; the aligned attribute makes Metrowerks copy it with lq / sq. */
typedef struct Copy16 {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16;
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E4E20(void *, s32);
extern void func_001E4FA0(void *f, s32 x);
extern void func_00146ED0(f32 *a, f32 *b, f32 scale);
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
extern void Scene_MarkDone(void);
extern void BtbBg_Restart(void);
extern void Btl_ClearScene(void);
extern void func_001E9D10();
extern void BtlSound_StartTrans(void);
extern s32 func_001E9ED0(void *);
extern void BtbDraw_InitState(void);
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
extern void Btl_UpdateLimitXY(s32, f32, f32);
extern char D_005116E0[];
extern void func_001CA460(s32, s32);
extern void func_001AC490(void *);
extern void Fade_SetRequest(s32, void *, s32);
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
void Btl_TaskStart(Fighter *f);
void Btl_OnExitFadeDone(void);
extern void (*D_00468460[])(void *);
extern s32 func_001C2B10(void *);
extern s32 func_001E94C0(void *);
typedef struct FighterCB2 {
    u8 unk0000[0xCB2];
    u16 unkCB2;
} FighterCB2;
extern void A2d_CallHandler(s32, s32 *);
extern void (*D_00468510[])(void *);
typedef struct FighterMain2 {
    u8 unk0000[0x1864];
    s32 unk1864;
    u8 unk1868[0x1FF9 - 0x1868];
    s8 unk1FF9;
} FighterMain2;
extern void (*D_004682EC[])(void);
extern void func_002A89D0(void);
extern s32 BtbBg_GetF30(s32);
extern void func_00237000(s32, void *);
extern s32 Btl_ClearTimerCb(void);
extern s32 Btl_RestartCb(void);
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
extern void func_001DD680();
extern void func_001D9900(void *, s32, s32);
extern void amHeap_Free(void *);
extern void (*D_00468530[])(void *);
extern void (*D_004685E4[])(void *);
extern void func_001D8320(void *);
extern void CharParts_Release(void *);

void func_001ABCC0(Fighter *f) {
    FT_FIELD(f, f32, 0x420) = 1000.0f;
    FT_FIELD(f, f32, 0x424) = 1000.0f;
    FT_FIELD(f, f32, 0x428) = 1000.0f;
}
void Fighter_ClearPlyScr(Fighter *f) {
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
static inline int inline_fn(int arg0)
{
  return arg0 ^ 0;
}
void func_001ABE10(void)
{
  int new_var;
  D_00495A40[0] = 0;
  D_00495A48[0] = 0;
  D_00495A42[0] = 4;
  D_00495A44[0] = 0x7530;
  D_00495A90[0] = 1;
  D_00495A46[0] = 0x7530;
  D_00495A4C[0] = 0;
  D_00495A4E[0] = 0;
  D_00495A92[0] = 5;
  D_00495A94[0] = 0x7530;
  new_var = 0x7530;
  D_00495A96[0] = 0x7530;
  D_00495A98[0] = 0;
  D_00495A9C[0] = 0;
  D_00495A9E[0] = 0;
  D_00495AD6[0] = 5;
  D_00495B1A[0] = 5;
  D_00495AD8[0] = inline_fn(new_var);
  D_00495ADA[0] = 0x7530;
  D_00495ADC[0] = 0;
  D_00495AE0[0] = 0;
  D_00495AE2[0] = 0;
  D_00495B18[0] = 0;
  D_00495AD4[0] = 2;
  D_00495B1C[0] = 0x7530;
  D_00495B1E[0] = 0x7530;
  D_00495B20[0] = 0;
  D_00495B24[0] = 0;
  D_00495B26[0] = 0;
}

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
    bw = gBattle;
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
#if 0
// differs: best of 120 declaration orders is 50 of 78 (identity 65). Hoisted count and shared pointer (bw+0x830) match the shape; remaining: bw and n swapped in registers, the counter and base swapped, and the tail of the inner test (bgez/bgtz order).
extern u8 D_00492FC0[];
s32 func_001AC110(void) {
    BattleWork *bw;
    s32 cnt;
    s32 i;
    s32 n1;
    s32 n2;
    u8 *p;
    u8 *q;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 base;
    cnt = 0;
    i = 0;
    bw = gBattle;
    n1 = BW_FIELD(bw, s32, 0x88D8);
    q = (u8 *)bw + 0x830;
    if (0 < n1) {
        p = q;
        do {
            if (FT_FIELD(p, s16, 0x13A4) > -1) {
                cnt++;
            }
            i++;
            p += 0x2020;
        } while (i < n1);
    }
    n2 = BW_FIELD(bw, s32, 0x88D8);
    t3 = 0;
    do {
        base = (t3 & 3) * 2;
        t2 = 0;
        do {
            t4 = (t2 & 1) | base;
            t5 = -1;
            if (0 < n2) {
                p = q;
                t1 = 0;
                do {
                    if (FT_FIELD(p, s16, 0x13A4) == t4) {
                        t5 = t1;
                        break;
                    }
                    t1++;
                    p += 0x2020;
                } while (t1 < n2);
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
extern u8 D_00492FC0[];
typedef struct BSlA { u8 pad[0x88D8]; s32 n; } BSlA;
void func_001AC240(void) {
    u8 *e;
    BSlA *bw;
    s32 i;
    u8 *p;
    s32 a;
    bw = (BSlA *)gBattle;
    i = 0;
    if (0 < bw->n) {
        p = (u8 *)bw;
        do {
            a = *(s16 *)(p + 0x1BD4);
            if (a > -1) {
                e = D_00492FC0 + a * 0xB8;
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
            p += 0x2020;
        } while (i < bw->n);
    }
}
void func_001AC330(void *p0) {
    s32 v;
    s32 off;
    u8 *f;
    u8 *t2;
    s32 i;
    s32 a2;
    s32 k;
    s32 j;
    u8 *g;
    u8 *p = p0;
    *(s32 *)(p + 0x14) += (s32)p;
    if (0 < *(s32 *)(p + 0x10)) {
        i = 0;
        k = 0;
        do {
            off = *(s32 *)(*(u8 **)(p + 0x14) + k);
            if (off != 0) {
                t2 = p + off;
                *(u8 **)(*(u8 **)(p + 0x14) + k) = t2;
                v = *(s32 *)(t2 + 0x2C);
                if (v != 0) {
                    *(s32 *)(t2 + 0x2C) = v + (s32)p;
                    if (0 < *(s32 *)(t2 + 0x28)) {
                        a2 = 0;
                        j = 0;
                        do {
                            f = *(u8 **)(t2 + 0x2C) + j;
                            g = f + 4;
                            if (*(s32 *)(f + 4) != 0) {
                                *(s32 *)g = (s32)p + *(s32 *)(f + 4);
                            }
                            a2++;
                            j += 8;
                        } while (a2 < *(s32 *)(t2 + 0x28));
                    }
                }
            }
            i++;
            k += 4;
        } while (i < *(s32 *)(p + 0x10));
    }
    if (*(s32 *)(p + 0x1C) != 0) {
        *(s32 *)(p + 0x1C) = *(s32 *)(p + 0x1C) + (s32)p;
    }
}
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
#if 0
// differs: 0x80 against 0x90 bytes: the inner loop and the count reload match; the pointer update is folded as (q + (cnt-1)*4) + 0x44 where the original computes q + 0x44 first, and the i++ is hoisted above it
void func_001AC400(void *pv) {
    u8 *p = (u8 *)pv;
    u8 *q;
    s32 i;
    s32 j;
    s32 *r;
    s32 cnt;
    *(s32 *)(p + 8) += (s32)p;
    q = *(u8 **)(p + 8);
    if (0 < *(s32 *)(p + 4)) {
        i = 0;
        do {
            cnt = *(s16 *)(q + 0xE);
            if (0 < cnt) {
                j = 0;
                r = (s32 *)q;
                do {
                    r[16] += (s32)p;
                    r++;
                    j++;
                } while (j < (cnt = *(s16 *)(q + 0xE)));
            }
            r = (s32 *)(q + 0x44);
            q = (u8 *)r + (cnt - 1) * 4;
            i++;
        } while (i < *(s32 *)(p + 4));
    }
}
#endif
#if 0
// r7k: best of 4 more tries is 8 of 33 words (pointer update folded as (t1+(cnt-1)*4)+0x44 whatever the form: struct BtlEnt, &e->rel[1], q local; first load order of p+4/p+8 also differs). Older note: // differs: size 0x80 against 0x90 with the do-while outer loop (the for-loop form has 34 instructions and an extra guard). The original has two nops after the outer bnez and a different pointer/counter assignment in the inner loop.
void func_001AC400(void *p0) {
    u8 *t1;
    s32 t0;
    s32 a1;
    s32 a3;
    u32 *a2;
    u8 *q;
    u8 *p = p0;
    *(s32 *)(p + 0x8) += (s32)p;
    t1 = *(u8 **)(p + 0x8);
    if (0 < *(s32 *)(p + 0x4)) {
        t0 = 0;
        do {
            a1 = *(s16 *)(t1 + 0xE);
            if (0 < a1) {
                a3 = 0;
                a2 = (u32 *)t1;
                do {
                    *(s32 *)((u8 *)a2 + 0x40) += (s32)p;
                    a3++;
                    a2++;
                } while (a3 < *(s16 *)(t1 + 0xE));
            }
            q = t1 + 0x44;
            t1 = q + (a1 - 1) * 4;
            t0++;
        } while (t0 < *(s32 *)(p + 0x4));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC400);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC490);
#if 0
// differs: size 0x134 against 0x150: the original's loops and the else branch have 7 more instructions (layout of the if/else-if around the two loops not found)
extern u8 *gScrMachines;
extern void AdxSlot_SetPausedAll(s32 a);
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
    bw = gBattle;
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
        AdxSlot_SetPausedAll(0);
        func_0029D860(0);
        func_002CF650(0);
    }
    BW_FIELD(bw, s8, 0x8975) = 0;
    func_002CFD70();
}
#endif
#if 0
// differs: size 0x124 against 0x150 (previous attempt 0x134). gBattle at the top and at the end matches; the gScrMachines loop is shorter (the original reloads the global each pass).
extern u8 *gScrMachines;
extern void AdxSlot_SetPausedAll(s32 a);
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
    bw = gBattle;
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
        AdxSlot_SetPausedAll(0);
        func_0029D860(0);
        func_002CF650(0);
    }
    BW_FIELD(gBattle, s8, 0x8975) = 0;
    func_002CFD70();
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC670);
extern u8 *gScrMachines;
extern u8 D_00492FC0[];
extern void func_00125740(void *d, void *s, s32 n);
extern void AdxSlot_SetPausedAll(s32 a);
extern void func_0029D860(s32 a);
extern void func_002CF650(s32 a);
extern void func_001A3610(s32 a);
extern void func_001D9C00(void *a);
extern void func_001E3200(void *a);
extern void RenderTex_Start(s32 a);
typedef struct BattleCount {
    u8 unk0000[0x88D8];
    s32 count;
} BattleCount;
#if 0
// differs: frame 96 against 80: five saved registers here (the original has four: the battle pointer, the copy-block pointer, the loop index and the fighter pointer); the copy block base is reloaded in the original
void func_001AC7C0(void) {
    BattleWork *bw;
    BattleWork *bw2;
    s32 i;
    u8 *s0;
    s32 id;
    bw = gBattle;
    if (BW_FIELD(bw, s16, 0x8944) != 0) {
        for (i = 0; i < 2; i++) {
            if (*(s32 *)(gScrMachines + i * 0x5C + 0xC) != 0) {
                *(s32 *)(gScrMachines + i * 0x5C + 0xC) = 3;
            }
        }
    }
    AdxSlot_SetPausedAll(1);
    if (0 < ((BattleCount *)bw)->count) {
        i = 0;
        s0 = (u8 *)bw;
        do {
            id = *(s16 *)(s0 + 0x1BD4);
            if (id > -1) {
                func_001A3610(id);
            }
            func_001D9C00(s0 + 0x830);
            func_001E3200(s0 + 0x830);
            i++;
            s0 += 0x2020;
        } while (i < ((BattleCount *)bw)->count);
    }
    if (BW_FIELD(bw, s8, 0x8AB4) == 0) {
        bw2 = gBattle;
        if (0 < ((BattleCount *)bw2)->count) {
            i = 0;
            s0 = (u8 *)bw2;
            do {
                id = *(s16 *)(s0 + 0x1BD4);
                if (id > -1) {
                    func_00125740(s0 + 0x272C, D_00492FC0 + id * 0xB8, 0xB8);
                }
                i++;
                s0 += 0x2020;
            } while (i < ((BattleCount *)bw2)->count);
        }
    }
    func_0029D860(1);
    func_002CF650(1);
    if (BW_FIELD(bw, s8, 0x8AB4) == 0) {
        BW_FIELD(bw, s8, 0x8975) = 1;
        RenderTex_Start(0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC7C0);
extern s32 func_002CC4A0(void);
extern void func_001D9480(void *);
typedef struct BattleCountView {
    u8 unk0000[0x88D8];
    s32 count;
} BattleCountView;
#if 0
// differs: 0xE8 against 0xF0 (the frame 96 against 80: the count address bw+0x88D8 is hoisted into a fifth saved register, the original recomputes lui/addu for each count read; a struct view for the count changes nothing)
s32 func_001AC990(void) {
    BattleWork *bw;
    u8 *first;
    u8 *p;
    s32 i;
    bw = gBattle;
    first = (u8 *)bw + 0x830;
    if (0 < ((BattleCountView *)bw)->count) {
        i = 0;
        p = first;
        do {
            func_001D9480(p);
            i++;
            p += 0x2020;
        } while (i < ((BattleCountView *)bw)->count);
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
#if 0
// differs: size 0xE8 against 0xF0. The original keeps the battle pointer in s1 and the base in s0 (four saved registers); the count address 0x88D8 is hoisted into a saved register here (a fifth one). Reading the count through gBattle at each use is 57 of 60.
s32 func_001AC990(void) {
    BattleWork *bw;
    s32 s3;
    u8 *s0;
    u8 *s2;
    bw = gBattle;
    s3 = 0;
    s0 = (u8 *)bw + 0x830;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        s2 = s0;
        do {
            func_001D9480(s2);
            s3++;
            s2 += 0x2020;
        } while (s3 < BW_FIELD(bw, s32, 0x88D8));
    }
    if (func_002CC4A0() == 4) {
        BW_FIELD(bw, s32, 0x88FC) = 5;
        BW_FIELD(bw, s32, 0x8900) = 0;
        BW_FIELD(bw, s32, 0x8904) = *(s16 *)(s0 + ((BW_FIELD(bw, s32, 0x8900) * 257) << 5) + 0x13A4);
        return 1;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AC990);
extern void func_001D9480(void *);
/* The battle work as a view: the fields at 0x88D8 and up read in place (no CSE of their addresses). */
typedef struct BattleView2 {
    u8 unk0000[0x88D8];
    s32 count;
    s32 unk88DC;
    s32 unk88E0;
    s32 unk88E4;
    s32 unk88E8;
    s32 unk88EC;
    f32 unk88F0;
    u8 unk88F4[0x88FC - 0x88F4];
    s32 unk88FC;
    s32 unk8900;
    s32 unk8904;
    u8 unk8908[0x8AB1 - 0x8908];
    s8 unk8AB1;
} BattleView2;
#if 0
// differs: 62 of 81: the loop counter and the fighter pointer swap saved registers (i in s3, p in s2 in the original), and the s8 test compiles as slt / beqz where the original has blez
s32 func_001ACA80(void) {
    BattleView2 *bw;
    u8 *base;
    u8 *p;
    s32 i;
    i = 0;
    bw = (BattleView2 *)gBattle;
    base = (u8 *)bw + 0x830;
    p = base;
    if (0 < bw->count) {
        do {
            func_001D9480(p);
            i++;
            p += 0x2020;
        } while (i < bw->count);
    }
    if (0 < bw->unk8AB1) {
        bw->unk88FC = 4;
        bw->unk8900 = bw->unk8AB1 - 1;
        bw->unk8904 = FT_FIELD(base + bw->unk8900 * 0x2020, s16, 0x13A4);
        FT_FIELD(base + (1 - bw->unk8900) * 0x2020, s32, 0x1AC4) = 0;
        bw->unk8AB1 = -bw->unk8AB1;
        return 1;
    }
    return 0;
}
#endif
#if 0
// differs: size 0x120 against 0x140. The post-loop block hoists the 0x8AB1 address into a register; reading every field through gBattle makes it longer (83 against 80). Same family as 1AC990.
extern void func_001D9480(void *);
s32 func_001ACA80(void) {
    BattleWork *bw;
    s32 s3;
    u8 *s0;
    u8 *s2;
    s32 a0;
    bw = gBattle;
    s3 = 0;
    s0 = (u8 *)bw + 0x830;
    if (0 < BW_FIELD(bw, s32, 0x88D8)) {
        s2 = s0;
        do {
            func_001D9480(s2);
            s3++;
            s2 += 0x2020;
        } while (s3 < BW_FIELD(bw, s32, 0x88D8));
    }
    if (0 < BW_FIELD(bw, s8, 0x8AB1)) {
        BW_FIELD(bw, s32, 0x88FC) = 4;
        BW_FIELD(bw, s32, 0x8900) = BW_FIELD(bw, s8, 0x8AB1) - 1;
        BW_FIELD(bw, s32, 0x8904) = *(s16 *)(s0 + ((BW_FIELD(bw, s32, 0x8900) * 257) << 5) + 0x13A4);
        a0 = 1 - BW_FIELD(bw, s32, 0x8900);
        *(s32 *)(s0 + ((a0 * 257) << 5) + 0x1AC4) = 0;
        BW_FIELD(bw, s8, 0x8AB1) = -BW_FIELD(bw, s8, 0x8AB1);
        return 1;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACA80);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001ACBC0);
void func_001ACFD0(void) {
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
}
void Btl_FadeOutToExit(void) {
    BattleWork *bw = gBattle;
    BW_FIELD(bw, s32, 0x88F8) = 8;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    func_001CA460(-1, 1);
    func_001AC490(D_005116E0);
    Fade_SetRequest(-1, Btl_OnExitFadeDone, 0);
}
extern s32 func_00225380(void);
extern void Btl_ResetScene(void);
extern void (*D_00468300[])(void);
void func_001AD0E0(void) {
    s32 v;
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
    v = func_00225380();
    switch (v) {
    case 4:
    case 0:
    case 1:
        Btl_ResetScene();
        break;
    case 3:
        D_00468300[0]();
        break;
    case 2:
        D_00470574 = 4;
        D_00468300[0]();
        break;
    }
}
void func_001AD210(void) {
    BattleWork *bw = gBattle;
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
        tmp[2] = 1;
        A2d_CallHandler(0, tmp);
        break;
    case 1:
    case 5:
        tmp[0] = -1;
        tmp[1] = -1;
        tmp[2] = 1;
        A2d_CallHandler(0, tmp);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD2E0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AD570);
extern void (*D_004682F8[])(void);
extern void (*D_00468300[])(void);
extern void Btl_ResetScene(void);
#if 0
// differs: 72 of 133: the battle pointer is taken into a2 (the original) where this puts it in a0, the dispatch on the state at 0x7E2 is laid out in another order (the case blocks follow the tests in the original)
void func_001ADB80(void) {
    BattleWork *bw;
    s32 v;
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
    bw = gBattle;
    if (BW_FIELD(bw, f32, 0x890C) < 180.0f) {
        return;
    }
    if (BW_FIELD(bw, s16, 0x8944) != 0) {
        return;
    }
    if (FT_FIELD(bw, s16, 0x14DC) == 0x1B) {
        return;
    }
    if (FT_FIELD(bw, s16, 0x34FC) == 0x1B) {
        return;
    }
    if (FT_FIELD(bw, s16, 0x14DC) == 0x1D && FT_FIELD(bw, s16, 0x34FC) == 0x1D) {
        return;
    }
    v = BW_FIELD(bw, s16, 0x7E2);
    switch (v) {
    case 4:
        D_00470574 = -1;
        D_00468300[0]();
        break;
    case 0:
        if (BW_FIELD(bw, s32, 0x8904) < 0) {
            if (BW_FIELD(bw, s32, 0x8900) >= 0) {
                D_00470574 = 1;
            } else {
                D_00470574 = 0;
            }
            if (BW_FIELD(bw, s16, 0x800) == 0) {
                D_00468300[0]();
            } else {
                D_004682F8[0]();
            }
        } else {
            D_00470574 = -1;
            D_00468300[0]();
        }
        break;
    case 6:
    case 3:
        Btl_ResetScene();
        break;
    default:
        D_004682F8[0]();
        break;
    }
}
#endif
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
    bx = (BWX *)gBattle;
    bx->f88F8 = 5;
    bx->f890C = 0;
    bx->f8910 = 0;
    *(Copy16 *)tA = *(Copy16 *)D_00431300;
    *(s64 *)((u8 *)tA + 16) = *(s64 *)(D_00431300 + 16);
    A2d_CallHandler(tA[bx->f88FC], 0);
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
extern void func_001A8770(s32 a, void *b);
extern void func_00219270(s32 a);
typedef struct AE5Flags {
    s32 flags;
    s32 pad;
    s16 e[4];
} AE5Flags;
#if 0
// differs: frame 0x150 against 0x160 and the flags block at sp+0x20 (original 0x80): local layout not found; the battle count read keeps its address in a2
void func_001AE5C0(void) {
    BattleWork *bw;
    s32 t20;
    u8 loc[0x50];
    AE5Flags fl;
    s32 i;
    s16 *p;
    bw = gBattle;
    BW_FIELD(bw, s32, 0x88F8) = 4;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    BW_FIELD(bw, s32, 0x8908) = 0;
    BW_FIELD(bw, s32, 0x8918) = 0;
    BW_FIELD(bw, s8, 0x8AAE) = 1;
    BW_FIELD(bw, s8, 0x8AAF) = 1;
    memset(loc, 0, 0x50);
    *(s32 *)(loc + 0x20) = 0;
    *(s32 *)(loc + 0x24) = 0;
    *(s32 *)(loc + 0x30) = 0;
    func_001A8770(1, loc);
    fl.flags = 0;
    if (0 < ((BattleCount *)bw)->count) {
        i = 0;
        p = (s16 *)((u8 *)&fl + 8);
        do {
            fl.flags = fl.flags | (1 << i);
            *p = 2;
            i++;
            p++;
        } while (i < ((BattleCount *)bw)->count);
    }
    func_001C8020(0, &fl);
    if (BW_FIELD(bw, s16, 0x7E2) != 4) {
        t20 = 1;
        A2d_CallHandler(0x27, &t20);
        A2d_CallHandler(0x14, 0);
        func_00218CD0(1, BW_FIELD(bw, s8, 0x8AB7));
    }
    func_00219270(BW_FIELD(bw, s16, 0x7E6));
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE5C0);
extern void (*D_004682F0[])(void);
extern s32 func_001C8020(s32, void *);
typedef struct AE720Loc {
    s32 flags;
    s32 pad;
    s16 e[4];
} AE720Loc;
#if 0
// differs: the battle count at 0x88D8 is kept as an address register (s0 + 0x10000 in a1) where the original recomputes lui/addu each pass; the first clamp branch lands 8 bytes earlier
void func_001AE720(void) {
    BattleWork *bw;
    AE720Loc loc;
    s32 i;
    bw = gBattle;
    if (BW_FIELD(bw, f32, 0x890C) > 0.0f) {
        loc.flags = 0;
        if (0 < ((BattleView2 *)bw)->count) {
            i = 0;
            do {
                loc.flags = loc.flags | (1 << i);
                loc.e[i] = 1;
                i++;
            } while (i < ((BattleView2 *)bw)->count);
        }
        func_001C8020(0, &loc);
    }
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
    if (BW_FIELD(bw, f32, 0x890C) >= 120.0f) {
        D_004682F0[0]();
    }
}
#endif
#if 0
// differs: size 0x160 against 0x170. The mask struct layout (u32 at sp+0x20, halfwords from sp+0x28) matches; the early bc1t target is two instructions off, and the loop uses an index where the original increments a pointer.
extern void func_001C8020(s32, void *);
extern void (*D_004682F0)(void);
typedef struct TimerMask {
    u32 mask;
    s16 pad[2];
    s16 arr[4];
} TimerMask;
void func_001AE720(void) {
    BattleWork *bw;
    s32 j;
    TimerMask m;
    bw = gBattle;
    if (BW_FIELD(bw, f32, 0x890C) > 0.0f) {
        m.mask = 0;
        if (0 < BW_FIELD(bw, s32, 0x88D8)) {
            j = 0;
            do {
                m.mask = m.mask | (1 << j);
                m.arr[j] = 1;
                j++;
            } while (j < BW_FIELD(bw, s32, 0x88D8));
        }
        func_001C8020(0, &m);
    }
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x890C) + BW_FIELD(gBattle, f32, 0x88F0);
    if (!(BW_FIELD(gBattle, f32, 0x890C) > 1e8f)) {
    } else {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
    if (BW_FIELD(bw, f32, 0x890C) >= 120.0f) {
        D_004682F0();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE720);
extern void func_001A8770(s32, void *);
extern void func_00219270(s32);
extern s32 func_00218CD0(s32, s32);
// the handler argument is a 16-byte array: it sits below buf in the frame
void func_001AE890(void) {
    u8 buf[0x50];
    s32 flag[4];
    BattleWork *bw;
    s32 old;
    bw = gBattle;
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
    flag[0] = 1;
    A2d_CallHandler(0x27, flag);
    A2d_CallHandler(0x13, 0);
    func_00219270(*(s16 *)((u8 *)bw + 0x7E6));
    BW_FIELD(bw, s8, 0x8AB7) = func_00218CD0(0, -1);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AE980);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AEBF0);
extern s32 func_001AC110(void);
void func_001AEDB0(void) {
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
    if (func_001AC110() != 0) {
        func_00237000(4, 0);
        func_00219650(0);
        {
            BattleWork *bw = gBattle;
            BW_FIELD(bw, f32, 0x8920) = 1.0f;
            BW_FIELD(bw, s32, 0x8924) = 0x3CCCCCCD;
        }
    }
}
void Btl_StartPhase1(void) {
    BattleWork *bw = gBattle;
    s32 tbl[6];
    BW_FIELD(bw, s32, 0x88F8) = 1;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    BW_FIELD(bw, s8, 0x14ED) = 1;
    BW_FIELD(bw, s8, 0x350D) = 1;
    tbl[0] = (s32)((u8 *)bw + 0x830);
    tbl[1] = (s32)((u8 *)bw + 0x2850);
    tbl[2] = BtbBg_GetF30(1);
    tbl[3] = 8;
    tbl[4] = (s32)Btl_ClearTimerCb;
    tbl[5] = (s32)Btl_RestartCb;
    func_00237000(4, tbl);
    if (BW_FIELD(bw, s16, 0x8948) < 0) {
        BW_FIELD(bw, s16, 0x8944) = 0;
        D_004682E8[0]();
    }
}
void Btl_StepTimer(void) {
    BW_FIELD(gBattle, f32, 0x8910) = BW_FIELD(gBattle, f32, 0x890C);
    BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0) + BW_FIELD(gBattle, f32, 0x890C);
    if (BW_FIELD(gBattle, f32, 0x890C) > 1e8f) {
        BW_FIELD(gBattle, f32, 0x8910) = 0.0f;
        BW_FIELD(gBattle, f32, 0x890C) = BW_FIELD(gBattle, f32, 0x88F0);
    }
}
extern s32 func_001B07C0(void);
extern s32 func_001B0700(void);
typedef struct MaskArrA {
    u32 mask;
    s16 pad[2];
    s16 arr[4];
} MaskArrA;
void func_001AF010(void) {
    BSlA *bw;
    s32 j;
    MaskArrA m;
    s32 st[6];
    s16 *q;
    bw = (BSlA *)gBattle;
    BW_FIELD(bw, s32, 0x88F8) = 0;
    BW_FIELD(bw, s32, 0x890C) = 0;
    BW_FIELD(bw, s32, 0x8910) = 0;
    m.mask = 0;
    if (0 < bw->n) {
        j = 0;
        q = (s16 *)&m;
        do {
            m.mask = m.mask | (1 << j);
            q[4] = 0;
            j++;
            q++;
        } while (j < bw->n);
    }
    st[0] = (s32)((u8 *)bw + 0x830);
    st[1] = (s32)((u8 *)bw + 0x2850);
    st[2] = BW_FIELD(bw, s32, 0x8AA0);
    st[3] = BW_FIELD(bw, s32, 0x7F4);
    st[4] = (s32)func_001B07C0;
    st[5] = (s32)func_001B0700;
    func_00237000(4, st);
    func_00219270(*(s16 *)((u8 *)bw + 0x7E6));
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF100);
void Btl_PopFileList(void) {
    u8 *g;
    s32 h;
    g = (u8 *)gBattle;
    h = *(s32 *)(g + 0x8AA4);
    if (h != 0) {
        *(s32 *)(g + 0x8AA4) = *(s32 *)(h + 0x40);
        *(s32 *)(g + 0x8AA0) = *(s32 *)(*(s32 *)(g + 0x8AA4) + 0x50);
        *(s32 *)(h + 0x40) = 0;
        amCdFs_Close((void *)h, 0);
    }
}
extern s32 func_001A50F0(s32, s32);
extern void amFile_Load(s32);
void Btl_LoadFileSet(void) {
    BattleWork *bw = gBattle;
    s32 *s0 = (s32 *)((u8 *)bw + 0x810);
    s32 k;
    s32 *s1 = *(s32 **)((u8 *)bw + 0x82C);
    if (s1 != 0) {
        s0[7] = *(s32 *)((u8 *)s1 + 0x40);
        s0[0] = *(s32 *)(*(s32 *)((u8 *)s1 + 0x40) + 0x50);
        amFile_Load(s0[0]);
        s1[16] = 0;
        amCdFs_Close(s1, 0);
        k = 0;
        s1 = s0;
        do {
            s1[1] = func_001A50F0(s0[0], k);
            amFile_Load(s1[1]);
            k++;
            s1++;
        } while (k < 2);
        s0[3] = func_001A50F0(s0[0], 2);
        amFile_Load(s0[3]);
        s0[5] = func_001A50F0(s0[0], 4);
        amFile_Load(s0[5]);
        s0[6] = func_001A50F0(s0[0], 5);
    }
}
s32 Btl_ReadCurFile(void *p) {
    s32 id = FT_FIELD(p, s32, 0x160);
    BattleWork *bw = gBattle;
    s32 r = 0;
    if (id != -1) {
        r = amCdFs_ReadFileId(id, 0, 1);
        BW_FIELD(bw, s32, 0x8AA4) = r;
    }
    return r;
}
/* differs: 0x44 bytes against 0x50: the original takes the address of D_0046FD84 into $a2 before the test and
   reloads the global through it for the call; the direct global read here is one instruction shorter. */
s32 Btl_ReadFighterFile(void) {
    s32 *pp = &D_0046FD84;
    BattleWork *bw = gBattle;
    u8 *s0 = (u8 *)bw + 0x810;
    s32 r = 0;
    if (D_0046FD84 != -1) {
        r = amCdFs_ReadFileId(*pp, 0, 1);
        FT_FIELD(s0, s32, 0x1C) = r;
    }
    return r;
}
extern s8 D_004B4B40[];
extern s32 (*D_00468240[])(void *);
extern void amTask_Kill(void *);
extern char D_00468390[];
void Btl_TaskInit(Fighter *f);
#if 0
// differs: 0x124 against 0x140. The original tests the seven values one by one with beq (0x19, 0x15, 0x14, 0x12, 0xF, 9, 3); both the global and a byte local get a sltiu range check for 0x14/0x15, and the frame is 80 against 64 (an extra saved register).
void func_001AF840(void *f) {
    s32 *q = (s32 *)((u8 *)f + 0x30);
    BattleWork *bw;
    s32 (**pf)(void *);
    s32 r;
    s8 mode = D_004B4B40[0];
    if (mode == 0x19 || mode == 0x15 || mode == 0x14 || mode == 0x12 ||
        mode == 0xF || mode == 0x9 || mode == 0x3) {
        *q = *q - 1;
        if (*q < 0) {
            func_001CA460(2, 0);
            bw = gBattle;
            pf = D_00468240;
            if (*pf != 0) {
                do {
                    r = (*pf)((u8 *)bw + 0x690);
                    if (r != 0) {
                        BW_FIELD(bw, s32, 0x8970) = r;
                    }
                    pf++;
                } while (*pf != 0);
            }
            amTask_Kill(f);
            amTask_Create((void (*)(void *))Btl_TaskInit, 0, 0x4000, 0x20, (s32)0x80000000, D_00468390);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF840);
void Btl_ToggleF8975(void) {
    s8 *p = (s8 *)((u8 *)gBattle + 0x8975);
    *p = 1 - *p;
}
#if 0
// differs: 24 of 67: the compiler keeps the fighter walk pointer and the battle pointer in the other saved registers (s1 / s4 swapped, the byte pointers s2 / s3 / s5 numbered differently) in every declaration order tried
extern void func_00219E70(void *, s32, s32);
extern void func_00219EA0(s32, s32, s32);
extern void func_001AFAB0(void *, s32);
extern void func_001A37D0(s32, s32);
extern void func_001A36E0(s32, s32);
/* The battle work as a view: the fighter count at 0x88D8 read in place (no CSE of the field address). */
typedef struct BattleView {
    u8 unk0000[0x88D8];
    s32 count;
} BattleView;
void func_001AF9A0(void) {
    u8 buf[4];
    BattleView *bw;
    u8 *fp;
    s32 i;
    s32 j;
    bw = (BattleView *)gBattle;
    i = 0;
    if (0 < bw->count) {
        fp = (u8 *)bw;
        do {
            if (FT_FIELD(fp, s16, 0x1BD4) > -1) {
                func_00219E70(buf, FT_FIELD(fp, s16, 0x1BD4), 0);
                j = FT_FIELD((u8 *)fp + 0x830, s16, 0x13A4);
                if (j == -1) {
                    j = 0;
                    do {
                        func_001AFAB0(buf, j);
                        j++;
                    } while (j < 2);
                } else {
                    func_001A37D0(j, buf[2]);
                    func_001A36E0(j, buf[3]);
                }
            }
            i++;
            fp += 0x2020;
        } while (i < bw->count);
    }
    func_00219EA0(0, -1, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AF9A0);
#define AFAB0_LEAF(x) do { func_001A37D0((x), p[2]); func_001A36E0((x), p[3]); } while (0)
void func_001AFAB0(u8 *p, s32 a) {
    s32 s3;
    s32 s2;
    s32 s1;
    s32 s0;
    s32 s5;
    if (a == -1) {
        s3 = 0;
        do {
            if (s3 == -1) {
                s2 = 0;
                do {
                    if (s2 == -1) {
                        s1 = 0;
                        do {
                            if (s1 == -1) {
                                s0 = 0;
                                do {
                                    if (s0 == -1) {
                                        s5 = 0;
                                        do {
                                            func_001AFAB0(p, s5);
                                            s5++;
                                        } while (s5 < 2);
                                    } else {
                                        AFAB0_LEAF(s0);
                                    }
                                    s0++;
                                } while (s0 < 2);
                            } else {
                                AFAB0_LEAF(s1);
                            }
                            s1++;
                        } while (s1 < 2);
                    } else {
                        AFAB0_LEAF(s2);
                    }
                    s2++;
                } while (s2 < 2);
            } else {
                AFAB0_LEAF(s3);
            }
            s3++;
        } while (s3 < 2);
    } else {
        AFAB0_LEAF(a);
    }
}
#undef AFAB0_LEAF
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
    bz = (BWZ *)gBattle;
    if (bz->f8975 != 1) {
        if (bz->f8920 > 0.0f && bz->f8920 <= 1.0f) {
            v = *(Vec4a *)D_004312F0;
            v.w = bz->f8920;
            func_00131700(&v);
            x = bz->f8920 - bz->f8924 * bz->f88F0;
            bz->f8920 = x;
            x = (x > 1.0f) ? 1.0f : ((x < 0.0f) ? 0.0f : x);
            bz->f8920 = x;
        }
    }
}
extern u8 D_004312E0[];
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern void func_0012F2C0(void);
void Btl_TaskPostDraw(void) {
    if (BW_FIELD(gBattle, s8, 0x8975) != 1) {
        if (BW_FIELD(gBattle, s32, 0x88F8) == 0) {
            Copy16 tmp;
            tmp = *(Copy16 *)D_004312E0;
            func_00133780(2, 1);
            func_00139620(0x900, &tmp, -1, 0x44, 0, 0.0f);
            func_00133780(2, 0);
        }
        func_0012F2C0();
    }
}
extern void func_0013AFA0(s32);
extern void func_001A87A0(void);
extern void amVram_Apply(s32);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(void *);
extern void func_00209E50(void *);
#if 0
// differs: frame 48 against 32: bw+0x60 is kept in s1 across the calls (the original recomputes addiu a0,s0,0x60 each time); the rest of the float logic is not checked yet
void func_001AFDF0(void) {
    BattleWork *bw;
    f32 x;
    bw = gBattle;
    func_0013AFA0(0);
    func_001A87A0();
    amVram_Apply(0);
    if (BW_FIELD(bw, s8, 0x8975) != 1) {
        func_00131F00(bw, 0.0f, 0.0f);
        func_00132DF0((u8 *)bw + 0x60);
        func_00209E50((u8 *)bw + 0x60);
        if (BW_FIELD(bw, s32, 0x88EC) == 0) {
            if (BW_FIELD(bw, s8, 0x8AB2) != 0) {
                x = BW_FIELD(bw, f32, 0x8930) + 0.07f * BW_FIELD(bw, f32, 0x88F0);
                if (x > 1.0f) {
                    x = 1.0f;
                }
                BW_FIELD(bw, f32, 0x8930) = x;
            } else {
                x = BW_FIELD(bw, f32, 0x8930) - 0.1f * BW_FIELD(bw, f32, 0x88F0);
                BW_FIELD(bw, f32, 0x8930) = x;
                if (x < 0.0f) {
                    BW_FIELD(bw, f32, 0x8930) = 0.0f;
                }
            }
            if (BW_FIELD(bw, s32, 0x8928) == 0x200800) {
                BW_FIELD(bw, f32, 0x892C) = 0.75f * (BW_FIELD(bw, f32, 0x8930) * BW_FIELD(bw, f32, 0x8930));
            } else {
                BW_FIELD(bw, f32, 0x892C) = BW_FIELD(bw, f32, 0x8930) * BW_FIELD(bw, f32, 0x8930);
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFDF0);
extern void (*D_00468310[])(void);
extern f32 D_0051D9A8[];
extern f32 D_0051D9AC[];
extern void func_0022DB40(f32);
extern void func_001E9930(void);
// differs: frame 48 against 32: the count and the loop index take saved registers (s1), the original keeps only the battle pointer; the first add has its operands in the other order
#if 0
// differs: 0x194 against 0x1C0 bytes (frame 48 against 32: the count and the loop index take saved registers, the original keeps only the battle pointer)
void func_001AFFA0(void) {
    BattleWork *bw;
    s32 i;
    s32 n;
    f32 m;
    u8 *fp;
    bw = gBattle;
    if (BW_FIELD(bw, s32, 0x88EC) == 0) {
        BW_FIELD(bw, f32, 0x8914) = BW_FIELD(bw, f32, 0x8914) + BW_FIELD(bw, f32, 0x88F0);
        if (BW_FIELD(bw, s8, 0x8AB2) == 0) {
            BW_FIELD(bw, f32, 0x8918) = BW_FIELD(bw, f32, 0x8918) + BW_FIELD(bw, f32, 0x88F0);
        }
    }
    D_00468310[BW_FIELD(bw, s32, 0x88F8)]();
    D_0051D9A8[0] = BW_FIELD(bw, f32, 0x88F4);
    D_0051D9AC[0] = BW_FIELD(bw, f32, 0x88F4) / 60.0f;
    func_0022DB40(BW_FIELD(bw, f32, 0x88F4));
    n = BW_FIELD(bw, s32, 0x88D8);
    m = BW_FIELD(bw, f32, 0x20D0);
    if (n >= 2) {
        fp = (u8 *)bw + 0x2020;
        i = 1;
        do {
            if (!(m < FT_FIELD(fp, f32, 0x20D0))) {
                m = FT_FIELD(fp, f32, 0x20D0);
            }
            i++;
            fp += 0x2020;
        } while (i < n);
    }
    BW_FIELD(bw, f32, 0x88F0) = m * BW_FIELD(bw, f32, 0x88F4);
    BW_FIELD(bw, s8, 0x8AB0) = 0;
    if (BW_FIELD(bw, s16, 0x7E2) == 3) {
        if (BW_FIELD(bw, s8, 0x8978) != BW_FIELD(bw, s8, 0x8AB5)) {
            BW_FIELD(bw, s8, 0x8AB5) = BW_FIELD(bw, s8, 0x8978);
            func_001E9930();
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001AFFA0);
extern void (*D_00468270[])(void *);
extern void (*D_004682B0[])(void);
extern void (*D_004682E0[])(void);
extern char D_004683A8[];
extern char D_004683B8[];
extern char D_004683D0[];
extern char D_004683E0[];
extern char D_004683F0[];
extern char D_00468400[];
extern void Fade_Request(s32, void *, s32);
extern void func_001482C0(s32);
extern void Btl_TaskPostDraw(void);
extern void func_001AFC50(void);
extern void func_001AFFA0(void);
extern void func_001AFDF0(void);
extern void func_001AF9A0(void);
extern void Btl_ToggleF8975(void);
#if 0
// differs: 32 of 133: the argument is kept in s1 only after its first read (the original copies a0 to s1 before reading 0x30; scheduling of the copy differs); the else branch re-reads the battle global per call
void func_001B0160(void *a0) {
    s32 *s1;
    s32 idx;
    void (**pp)(void);
    s1 = (s32 *)a0;
    idx = s1[12];
    if (D_00468270[idx] != 0) {
        D_00468270[idx](gBattle);
        s1[12] += 1;
    } else {
        s1[12] = 0;
        BW_FIELD(gBattle, s32, 0x8970) = 0;
        BW_FIELD(gBattle, s8, 0x8AAC) = 1;
        if (D_004682B0[0] != 0) {
            pp = D_004682B0;
            do {
                (*pp)();
                pp++;
            } while (*pp != 0);
        }
        Fade_Request(10, 0, 0);
        amTask_Create((void (*)(void *))func_001AFFA0, 0, 0x4100, 0x20, (s32)0x80000002, D_004683A8);
        amTask_Create((void (*)(void *))func_001AFDF0, 0, 0x3000, 0x20, (s32)0x80000004, D_004683B8);
        amTask_Create((void (*)(void *))Btl_TaskPostDraw, 0, 0x3F00, 0x20, (s32)0x80000004, D_004683D0);
        amTask_Create((void (*)(void *))func_001AFC50, 0, 0x3900, 0x20, (s32)0x80000004, D_004683E0);
        amTask_Create((void (*)(void *))func_001AF9A0, 0, 0x9F10, 0x20, (s32)0x80000002, D_004683F0);
        if (BW_FIELD(gBattle, s32, 0x88D8) >= 3) {
            amTask_Create((void (*)(void *))Btl_ToggleF8975, 0, 0x9FF0, 0x20, (s32)0x80000004, D_00468400);
        }
        D_004682E0[BW_FIELD(gBattle, s32, 0x88F8)]();
        func_001482C0(0);
        amTask_Kill(s1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0160);
void Btl_TaskLoadWait(Fighter *f) {
    s32 fn;
    if (func_001E9ED0(f) != 0) {
        func_0022DC00();
        BtbDraw_InitState();
        fn = (s32)func_001B0160;
        if (fn == 0) {
            fn = 0;
        }
        FT_FIELD(f, s32, 0x1C) = fn;
    }
}
void Btl_TaskStart(Fighter *f) {
    s32 fn;
    func_001E9D10(f);
    func_00219650(1);
    func_00219790(1);
    BtlSound_StartTrans();
    fn = (s32)Btl_TaskLoadWait;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void Btl_TaskInit(Fighter *f) {
    BattleWork *bw = gBattle;
    void *v = BW_FIELD(bw, void *, 0x8970);
    s32 fn;
    if (v == 0 || FT_FIELD(v, s16, 0x4) != 3) {
        return;
    }
    BW_FIELD(bw, s32, 0x8970) = 0;
    FT_FIELD(f, s32, 0x30) = 0;
    fn = (s32)Btl_TaskStart;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
void Btl_OnExitFadeDone(void) {
    Btl_ClearScene();
    func_001EF1E0(D_00470574);
    Scene_MarkDone();
}
// differs: 8 of 50. With p[0] and p[2] loaded before the call the stage, the loads and the copy of p into $s0 come in another order (the original loads stage, p[0], p[2], then copies p; the copy and the zero argument are placed earlier here).
extern char D_00430FC0[];
extern s32 D_0051CD20[];
extern f32 func_00200270(s32, f32, f32);
typedef struct F2Pair {
    f32 a, b;
} F2Pair;
f32 func_001B04D0(f32 *p)
{
  F2Pair *e;
  f32 t;
  s32 st;
  f32 p0;
  f32 p2;
  p0 = p[0];
  st = gBtbBg.stage;
  p2 = p[2];
  if ((p0 && p0) && p0)
  {
  }
  e = ((F2Pair *) (D_00430FC0 + (st * 16))) + D_0051CD20[0];
  t = p[1] - func_00200270(0, p0, p2);
  if (t < 0.0f)
  {
    t = 0.0f;
  }
  if (t > 125.0f)
  {
    t = 125.0f;
  }
  return e->a + (((125.0f - t) / 125.0f) * (e->b - e->a));
}

void Btl_AddFileLoaders(void) {
    amFile_AddLoader(D_00468420, func_001AC400);
    amFile_AddLoader(D_00468428, func_001AC330);
}
void Btl_UpdateLimitXY(s32 a0, f32 x, f32 y) {
    BattleWork *bw = gBattle;
    if (a0 == 0) {
        x = (BW_FIELD(bw, f32, 0x8920) > x) ? BW_FIELD(bw, f32, 0x8920) : x;
        y = (BW_FIELD(bw, f32, 0x8924) > y) ? BW_FIELD(bw, f32, 0x8924) : y;
    }
    BW_FIELD(bw, f32, 0x8920) = x;
    BW_FIELD(bw, f32, 0x8924) = y;
}
s32 Btl_RestartCb(void) {
    BattleWork *bw = gBattle;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s16, 0x8948) = -1;
    BW_FIELD(bw, s16, 0x8944) = 0;
    BtbBg_Restart();
    D_004682E8[0]();
    return 0;
}
s32 Btl_ClearTimerCb(void) {
    if (gBattle == 0) {
        return 0;
    }
    BW_FIELD(gBattle, s32, 0x8914) = 0;
    return 0;
}
s32 func_001B0700(void) {
    BattleWork *bw = gBattle;
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
    BattleWork *bw = gBattle;
    if (bw == 0) {
        return 0;
    }
    BW_FIELD(bw, s32, 0x8914) = 0;
    BW_FIELD(bw, s8, 0x8AAD) = 1;
    BW_FIELD(bw, s8, 0x8AAE) = 0;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0810);
extern void func_001E1300(s32 a);
extern void func_001DA4C0(void);
extern void func_001C81D0(Fighter *f, s32 i);
extern f32 func_00200270(s32, f32, f32);
extern void func_001C7D90(Fighter *f, s32 i, void *p);
#if 0
// differs: 57 of 129: the early returns and the epilogue are laid out differently (the original returns through a shared move v0 / b pair), and the 0x1FF8 test has a different block order
s32 func_001B0B10(s32 *a0) {
    BattleWork *bw;
    Fighter *fb;
    s32 i;
    bw = gBattle;
    if (bw == 0) {
        return 0;
    }
    if (*a0 != BW_FIELD(bw, s16, 0x8946)) {
        return 0;
    }
    {
        BW_FIELD(bw, s32, 0x8914) = 0;
        func_001E1300(0);
        BW_FIELD(bw, s8, 0x8AAD) = 1;
        BW_FIELD(bw, s8, 0x8AAE) = 0;
        BW_FIELD(bw, s8, 0x8AAF) = 0;
        BW_FIELD(bw, s16, 0x894C) = 0;
        BW_FIELD(bw, s16, 0x894E) = 0;
        BW_FIELD(bw, s16, 0x8950) = 0;
        BW_FIELD(bw, s16, 0x8952) = 0;
        func_00219650(0);
        func_00219790(0);
        __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"((u8 *)bw + 0x8960));
        BW_FIELD(bw, f32, 0x8964) = func_00200270(0, BW_FIELD(bw, f32, 0x8960), BW_FIELD(bw, f32, 0x8968));
        fb = BW_FIELD(bw, Fighter *, 0x8934);
        if (FT_FIELD(fb, s8, 0x1FF8) == -1) {
            BW_FIELD(bw, s16, 0x8950) = 1;
            FT_FIELD(fb, s8, 0x1FF8) = 2;
            ((void (*)(void *, s32))func_001DD680)(fb, 0);
        } else {
            func_001DA4C0();
        }
        for (i = 0; i < BW_FIELD(bw, s32, 0x88D8); i++) {
            fb = (Fighter *)((u8 *)bw + i * 0x2020);
            if (FT_FIELD(fb, s8, 0x2828) != -1) {
                FT_FIELD(fb, s8, 0x2828) = 0;
            }
            FT_FIELD(fb, s8, 0xCBE + 0x830) = 0;
            FT_FIELD(fb, s8, 0x183F + 0x830) = -1;
            func_001C81D0((Fighter *)((u8 *)fb + 0x830), -1);
        }
        func_001C7D90(BW_FIELD(bw, Fighter *, 0x8934), -1, BW_FIELD(bw, Fighter *, 0x8938));
        func_001C7D90(BW_FIELD(bw, Fighter *, 0x8938), -1, BW_FIELD(bw, Fighter *, 0x8934));
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B0B10);
s32 func_001B0D10(void) {
    if (gBattle == 0) {
        return -2;
    }
    if (BW_FIELD(gBattle, s8, 0x8AAC) != 0) {
        return BW_FIELD(gBattle, s32, 0x88F8);
    }
    return -1;
}
extern void (*D_004682E0[])(void);
extern void func_001AF100(s32);
extern void func_001AC240(void);
extern void func_001C8EE0(void);
extern void BtlCam_Restart(void);
extern void Lit_Start(void);
extern void func_0021C6E0(void);
extern void func_00215C10(void);
extern void func_001E9D80(void);
extern void func_00219880(void);
extern void func_001E9930(void);
extern void func_002CC520(void);
void Btl_ResetScene(void) {
    BattleWork *bw;
    func_00237000(3, 0);
    func_00237000(4, 0);
    func_001AF100(1);
    bw = gBattle;
    BW_FIELD(bw, s32, 0x8920) = 0x3F800000;
    BW_FIELD(bw, s32, 0x8924) = 0x3CCCCCCD;
    func_001AC240();
    func_001C8EE0();
    BtlCam_Restart();
    Lit_Start();
    BtbBg_Restart();
    func_0021C6E0();
    func_00215C10();
    func_001E9D80();
    func_00219880();
    func_001E9930();
    func_002CC520();
    D_004682E0[BW_FIELD(gBattle, s32, 0x88F8)]();
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
    gBattle = 0;
}
extern void func_001C8FE0(void);
extern void func_001A88B0(void);
extern void func_001E5960(void);
extern void func_001E9E20(void);
extern void Adx_KillStopCheck(void);
extern void func_00215B20(void);
extern void func_001E9940(void);
extern void func_002CC610(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_001C8E60(void);
extern void func_001A8840(void);
extern void func_001E5870(void);
extern void BtbBg_Clear(void);
extern void func_0021CCF0(void);
extern void func_001E9D70(void);
extern void func_00215AE0(void);
extern void func_001E9920(void);
extern void func_002CC4E0(void);
extern void amCdFs_ReleaseCache(void *handle);
void Btl_ClearScene(void) {
    s32 *q;
    u8 *g;
    if (gBattle != 0) {
        func_00237000(4, 0);
        func_001C8FE0();
        func_001A88B0();
        func_001E5960();
        BtbBg_KillTasks();
        func_0021CA20();
        func_001E9E20();
        Adx_KillStopCheck();
        func_00215B20();
        func_001E9940();
        func_002CC610();
        amTask_KillGroup(0x20, 0x80000000, 1);
        func_001C8E60();
        func_001A8840();
        func_001E5870();
        BtbBg_Clear();
        func_0021CCF0();
        func_001E9D70();
        func_00215AE0();
        func_001E9920();
        func_002CC4E0();
        q = (s32 *)((u8 *)gBattle + 0x810);
        if (*(s32 *)((u8 *)gBattle + 0x810) != 0) {
            amCdFs_ReleaseCache((void *)q[7]);
            q[7] = 0;
            q[0] = 0;
        } else {
            if (q[7] != 0) {
                amCdFs_Close((void *)q[7], 0);
                q[7] = 0;
            }
        }
        g = (u8 *)gBattle;
        if (*(s32 *)(g + 0x8AA0) != 0) {
            amCdFs_ReleaseCache((void *)*(s32 *)(g + 0x8AA4));
            *(s32 *)(g + 0x8AA4) = 0;
            *(s32 *)(g + 0x8AA0) = 0;
        } else {
            if (*(s32 *)(g + 0x8AA4) != 0) {
                amCdFs_Close((void *)*(s32 *)(g + 0x8AA4), 0);
                *(s32 *)(g + 0x8AA4) = 0;
            }
        }
        func_0029D8E0();
        func_001E9D10();
        func_00219650(1);
        func_00219790(1);
        amVram_Apply(2);
        memset(D_00495B70, 0, 0x8AC0);
        gBattle = 0;
        func_001482C0(1);
    }
}
void BtlIntWait_Start(void) {
    void *t = amTask_Create(func_001AF840, 0, 0x4000, 0x20, 0x80000000, D_00468410);
    FT_FIELD(t, s32, 0x30) = 5;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B10D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B13F0);
void Fighter_ResetSpeed1B18B0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B1900(Fighter *f) {
    s32 r;
    void *p;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                FT_FIELD(f, s8, 0x1FF9) = 0;
                FT_FIELD(f, s32, 0x1864) |= 8;
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
s32 func_001E2070(void *);
void func_001B1A10(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x33;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  new_var = (u8 *) arg0;
  ;
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x19;
  if ((*((s8 *) (((u8 *) arg0) + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x200F)) = 2;
  func_001E2070(arg0);
  func_001ABD30((struct Fighter *) (arg0 + 0x1360));
}

void Fighter_ResetSpeed1B1BB0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1C00);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B1E80);
void Fighter_ResetSpeed1B2160(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
// differs: the 0x1864 flag word: the original stores it directly, ours computes its address in the branch delay slot (CSE) before the store
void func_001B21B0(Fighter *f)
{
  s32 r;
  u8 *new_var;
  void *p;
  Fighter_ResetMotion(f, 0);
  new_var = (u8 *) f;
  if ((*((s32 *) (new_var + 0xC64))) != 0)
  {
    *((s32 *) (new_var + 0x1864)) = 1;
    if ((*((s8 *) (new_var + 0x1FF9))) != 0)
    {
      p = *((void **) (new_var + 0xBB4));
      if ((((*((f32 *) (new_var + 0x44))) - (*((f32 *) (((u8 *) p) + 0xC)))) - (*((f32 *) (new_var + 0x1844)))) <= 0.0f)
      {
        *((s8 *) (new_var + 0x1FF9)) = 0;
        *((s32 *) (new_var + 0x1864)) = (*((s32 *) (new_var + 0x1864))) | 8;
        *((f32 *) (new_var + 0xCA4)) = 0.0f;
        *((f32 *) (new_var + 0xCA8)) = 0.1f;
      }
    }
    if ((*((s16 *) (new_var + 0x13A4))) > (-1))
    {
      r = func_001C2B10(f);
    }
    else
    {
      r = func_001E94C0(f);
    }
    func_001E5040(f);
    if (r == 0)
    {
      *((s16 *) (new_var + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (new_var + 0xCB4)) = 0;
    }
    *((s8 *) (new_var + 0x2004)) = 1;
    *((s8 *) (new_var + 0x1FFB)) = 1;
    if (r != 0xF)
    {
      *((s16 *) (new_var + 0xCB6)) = 0;
    }
    *((s8 *) (new_var + 0x2006)) = 0;
    D_00468460[r](f);
    func_002CBFF0(1, f);
  }
}

void func_001B22F0(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x31;
  new_var = (u8 *) arg0;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (((u8 *) arg0) + 0x2011))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x2D0;
  if ((*((s8 *) (((u8 *) arg0) + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  *((s32 *) (((u8 *) arg0) + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + (*((s32 *) (new_var + 0xBA4))));
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (((u8 *) arg0) + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (((u8 *) arg0) + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2006)) = 1;
}

void Fighter_ResetSpeed1B2490(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
extern void func_001DDD50(void *);
#if 0
// differs: 60 of 74: the compiler folds the 0x1FF9 and 0x1864 field addresses into pointer registers (addiu a0 / v1) where the original stores with the offset, and the epilogue is 8 bytes shorter
void func_001B24E0(Fighter *f) {
    s32 v;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        func_001DDD50(f);
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterMain2 *)f)->unk1FF9 = 0;
                ((FighterMain2 *)f)->unk1864 = ((FighterMain2 *)f)->unk1864 | 8;
            }
        }
        func_001E5040(f);
        if (FT_FIELD(f, s16, 0x13A4) < 0) {
            v = func_001E94C0(f);
        } else {
            v = func_001C2B10(f);
        }
        if (v != 0) {
            FT_FIELD(f, s16, 0xCB4) = 0;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 1;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (v != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[v](f);
        func_002CBFF0(1, f);
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B24E0);
extern void func_001DE490();
extern void func_001D9960();
extern void func_001E9B00(s32, s32, s32, s32, f32, f32);
void func_001B2600(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x30;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x18;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s16 *) (new_var + 0xCB4)) = 0;
  func_001DE490(arg0);
  *((s8 *) (new_var + 0x2006)) = 1;
  func_001D9960(arg0, 0x21, 0);
  func_001E9B00(1, 0x26, 0, 0, 0.0f, 1.0f);
}
void func_001B27D0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2820);
void func_001B2AA0(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x2F;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = (*((s32 *) (new_var + 0xB78))) + 1;
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3F000000;
  *((s32 *) (new_var + 0xCA8)) = 0x3E4CCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2014)) = 1;
  if ((*((f32 *) (new_var + 0x1850))) >= 25.0f)
  {
    *((f32 *) (new_var + 0x1850)) = (*((f32 *) (new_var + 0x1850))) - 25.0f;
    *((s8 *) (new_var + 0x2014)) = (*((s8 *) (new_var + 0x2014))) + (s8) ((f32) (*((s16 *) (new_var + 0xCB4))) * ((*((f32 *) (new_var + 0x1850))) / 25.0f));
  }
  *((s16 *) (new_var + 0xCB4)) = 0;
  *((s16 *) (new_var + 0x1A5C)) = 0;
}
void func_001B2C80(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.1f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B2CD0);
void func_001B2EF0(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x2E;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  {
    u8 *p = *((u8 **) (new_var + 0x17A0));
    if ((*((s16 *) (p + 0x1A))) > 0)
    {
      *((s32 *) (new_var + 0xB78)) = ((s16 *) (p + 0x18))[(*((s8 *) (new_var + 0x1FF9))) != 0];
    }
    else
    {
      *((s32 *) (new_var + 0xB78)) = *((s16 *) (p + 0x18));
      if ((*((s8 *) (new_var + 0x1FF9))) != 0)
      {
        *((s32 *) (new_var + 0xB78)) = (s32) ((*((s32 *) (new_var + 0xB78))) + 0x100);
      }
    }
  }
  *((s32 *) (new_var + 0xB70)) = *((s32 *) (new_var + 0xB78));
  {
    s32 t = (*((s16 *) ((*((u8 **) (new_var + 0x17A0))) + 0x14))) - 1;
    *((s16 *) (new_var + 0xCB4)) = (t > 0) ? t : 0;
  }
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s32 *) (new_var + 0x1850)) = 0;
}
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
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E5040(void *);
extern s32 func_001E94C0(void *);
extern s32 func_001C2B10(void *);
extern void (*D_00468460[])(void *);
extern void func_002CBFF0(s32, void *);
void func_001B3190(u8 *arg0)
{
  u8 *new_var;
  s32 r;
  new_var = arg0;
  if ((*((f32 *) (new_var + 0xC60))) <= 10.0f)
  {
    *((u16 *) (new_var + 0xCB2)) = 1;
    if ((*((s8 *) (new_var + 0x2010))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
    }
    if ((*((s8 *) (new_var + 0x2011))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
    }
  }
  else
  {
    func_001ABD30((Fighter *) (new_var + 0x1360));
  }
  Fighter_ResetMotion(new_var, 0);
  if ((*((s32 *) (new_var + 0xC64))) != 0)
  {
    *((s32 *) (new_var + 0x1864)) = 1;
    if ((*((s8 *) (new_var + 0x1FF9))) != 0)
    {
      u8 *p = *((u8 **) (new_var + 0xBB4));
      if ((((*((f32 *) (new_var + 0x44))) - (*((f32 *) (p + 0xC)))) - (*((f32 *) (new_var + 0x1844)))) <= 0.0f)
      {
        *((s8 *) (new_var + 0x1FF9)) = 0;
        *((s32 *) (new_var + 0x1864)) = (*((s32 *) (new_var + 0x1864))) | 8;
        *((s32 *) (new_var + 0xCA4)) = 0x3F000000;
        *((s32 *) (new_var + 0xCA8)) = 0x3E4CCCCD;
      }
    }
    func_001E5040(new_var);
    if ((*((s16 *) (new_var + 0x13A4))) > -1)
    {
      r = func_001C2B10(new_var);
    }
    else
    {
      r = func_001E94C0(new_var);
    }
    if (r == 0)
    {
      *((s16 *) (new_var + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (new_var + 0xCB4)) = 0;
    }
    *((s8 *) (new_var + 0x2004)) = 1;
    *((s8 *) (new_var + 0x1FFB)) = 1;
    if (r != 0xF)
    {
      *((s16 *) (new_var + 0xCB6)) = 0;
    }
    *((s8 *) (new_var + 0x2006)) = 0;
    D_00468460[r](new_var);
    func_002CBFF0(1, new_var);
    func_001DD680(new_var, 0);
  }
}
s32 func_001D97D0(void *);
void func_001B3320(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x2C;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  new_var = (u8 *) arg0;
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x3B;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3E4CCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3E4CCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001D97D0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B34B0);
// differs: the constant 1 is loaded once where the original loads it again before the 0x2004 stores; also the 0x1864 store and reload get a hoisted `addiu` (the address of f+0x1864 is shared, a struct view makes no difference; same as 1B3190)
void func_001B3660(Fighter *f)
{
  void *p;
  FighterMain2 *new_var;
  Fighter_ResetMotion(f, 0);
  if ((*((f32 *) (((u8 *) f) + 0x18A8))) <= 0.0f)
  {
    ((FighterMain2 *) f)->unk1864 = 1;
    if (((FighterMain2 *) f)->unk1FF9 != 0)
    {
      p = *((void **) (((u8 *) f) + 0xBB4));
      new_var = (FighterMain2 *) f;
      if ((((*((f32 *) (((u8 *) f) + 0x44))) - (*((f32 *) (((u8 *) p) + 0xC)))) - (*((f32 *) (((u8 *) f) + 0x1844)))) <= 0.0f)
      {
        new_var->unk1FF9 = 0;
        new_var->unk1864 |= 8;
      }
    }
    *((s8 *) (((u8 *) f) + 0x2004)) = 1;
    *((s8 *) (((u8 *) f) + 0x1FFB)) = 1;
    *((s16 *) (((u8 *) f) + 0xCB6)) = 0;
    *((s8 *) (((u8 *) f) + 0x2006)) = 0;
    D_00468510[0](f);
    func_002CBFF0(1, f);
  }
}

INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3720);
void Fighter_ResetSpeed1B3960(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B39B0(Fighter *f) {
    Fighter_ResetMotion(f, 0);
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
extern void func_001E1460(void *, int);
s32 func_001E2070(void *);
extern void func_001D7CC0(void *, int);
void func_001B3A20(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x2A;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x38 : 0x39;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001E1460(arg0, 0);
  if ((*((s8 *) (new_var + 0x200F))) > 0)
  {
    *((s8 *) (new_var + 0x200F)) = 2;
  }
  func_001E2070(arg0);
  func_001D7CC0(arg0, 2);
}
void func_001B3BF0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
void func_001B3C40(Fighter *f) {
    Fighter_ResetMotion(f, 0);
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
extern void func_001D7CC0(void *, int);
extern void func_001E1460(void *, int);
void func_001B3CB0(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (new_var + 0xCAC)) = 0x29;
  if ((*((s16 *) (new_var + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x3C;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001E1460(arg0, 0);
  if ((*((s8 *) (new_var + 0x200F))) > 0)
  {
    *((s8 *) (new_var + 0x200F)) = 2;
  }
  func_001E2070(arg0);
  func_001D7CC0(arg0, 2);
}

void func_001B3E70(Fighter *f) {
    func_001E4E20(f, 0);
    FT_FIELD(f, f32, 0x17BC) = 1.0f;
}
extern void func_00218440(s32, void *);
extern void func_001E9B00(s32, s32, s32, s32, f32, f32);
extern void func_00146F10(void *, void *, f32);
extern void (*D_0046849C[])(void *);
typedef struct B3Loc {
    s32 v[3];
    s32 flag;
    s32 side;
    s32 pad[4];
} B3Loc;
void func_001B3EA0(Fighter *f) {
    B3Loc loc;
    Copy16 tmp;
    Fighter *o;
    o = f->other;
    if ((4.0f + FT_FIELD(o, f32, 0x1830)) < FT_FIELD(o, f32, 0x182C)) {
        if (FT_FIELD(o, s16, 0xCAC) == 0x14) {
            return;
        }
    }
    loc.side = FT_FIELD(f, s32, 0x1350);
    loc.flag = 1;
    func_00218440(0xD, loc.v);
    func_001E9B00(1, 0x53, 0, 0, 0.0f, 1.0f);
    if (FT_FIELD(f->other, s16, 0xCAC) == 0x14) {
        o = f->other;
        func_00146F10(&tmp, (u8 *)o + 0xD0, 3.0f * (BW_FIELD(gBattle, f32, 0x88F0) * FT_FIELD(o, f32, 0xC9C)));
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%2) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%1)" : : "r"((u8 *)f->other + 0x40), "r"((u8 *)f + 0x40), "r"(&tmp));
    }
    FT_FIELD(f, s8, 0xCBD) = 0;
    FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s16, 0xCB4);
    FT_FIELD(f, s16, 0xCB4) = 1;
    FT_FIELD(f, s8, 0x2004) = 1;
    FT_FIELD(f, s8, 0x1FFB) = 1;
    FT_FIELD(f, s8, 0x2006) = 0;
    D_0046849C[0](f);
    func_002CBFF0(1, f);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B3FE0);
void Fighter_ResetSpeedOne1B4280(Fighter *f) {
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
void func_001B4C60(Fighter *f) {
    s32 v;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, f32, 0xCB8) > 5.0f) {
        FT_FIELD(f, s16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 |= 0x4000;
        }
    }
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        FT_FIELD(f, s16, 0xCB4) = 1;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[0](f);
        func_002CBFF0(1, f);
    } else {
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            v = func_001C2B10(f);
        } else {
            v = func_001E94C0(f);
        }
        if ((u32)(v - 7) <= 1u || v == 5 || v == 6) {
            FT_FIELD(f, s16, 0xCB4) = 0;
            FT_FIELD(f, s8, 0x2004) = 1;
            FT_FIELD(f, s8, 0x1FFB) = 1;
            if (v != 0xF) {
                FT_FIELD(f, s16, 0xCB6) = 0;
            }
            FT_FIELD(f, s8, 0x2006) = 0;
            D_00468460[v](f);
            func_002CBFF0(1, f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B4DC0);
void Fighter_ResetSpeed1B5180(Fighter *f) {
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
    Fighter_ResetMotion(f, 0);
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
void func_001B5320(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x25;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  *((u16 *) (new_var + 0xCB2)) = 0;
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x29 : 0x2F;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E4820((func_001E3D60(*((s32 *) (new_var + 0x17AC)), 180.0f) != 0) ? -1.0f : 1.0f, new_var, 0);
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2004)) = 0;
  func_001DD680(new_var, 0);
  if (((*((s16 *) (new_var + 0xCAE))) != 0x12) || ((*((s8 *) (new_var + 0x1FFA))) != 1))
  {
    func_001D9900(new_var, 0x12, 1);
  }
}
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
    Fighter_ResetMotion(f, 0);
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
void func_001B5630(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x24;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  *((u16 *) (new_var + 0xCB2)) = 0;
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x28 : 0x2E;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E4820((func_001E3D60(*((s32 *) (new_var + 0x17AC)), 180.0f) != 0) ? -1.0f : 1.0f, new_var, 0);
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2004)) = 0;
  func_001DD680(new_var, 0);
  if (((*((s16 *) (new_var + 0xCAE))) != 0x12) || ((*((s8 *) (new_var + 0x1FFA))) != 1))
  {
    func_001D9900(new_var, 0x12, 1);
  }
}
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
    Fighter_ResetMotion(f, 0);
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
void func_001B5940(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x23;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x26 : 0x2C;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2004)) = 0;
  func_001DD680(arg0, 0);
  func_001D9900(arg0, 0x12, 1);
}
void func_001B5AF0(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
}
void func_001B5B30(Fighter *f) {
    Fighter_ResetMotion(f, 0);
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
extern void func_001E5040(void *);
void func_001B5BC0(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x22;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x27 : 0x2D;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  if ((*((s8 *) (new_var + 0x1FF9))) == 0)
  {
    *((s32 *) (new_var + 0x1864)) = 8;
    func_001E5040(arg0);
    *((s32 *) (new_var + 0xCA4)) = 0x3E99999A;
    *((s32 *) (new_var + 0xCA8)) = 0x3CA3D70A;
  }
  else
  {
    *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
    *((s32 *) (new_var + 0xCA8)) = 0;
  }
  *((s32 *) (new_var + 0xCA4)) = 0;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
}
void Fighter_ClearF17BC(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
extern void (*D_004684E8[])(void *);
s32 func_001E3100();
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E4E20(void *, s32);
void func_001B5DB0(Fighter *f) {
    Fighter_ResetMotion(f, 0);
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
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E5040(void *);
extern s32 func_001E94C0(void *);
extern s32 func_001C2B10(void *);
extern void (*D_00468460[])(void *);
extern void func_002CBFF0(s32, void *);
void func_001B6130(u8 *arg0)
{
  u8 *new_var;
  s32 r;
  new_var = arg0;
  if ((*((f32 *) (new_var + 0xC60))) <= 10.0f)
  {
    *((u16 *) (new_var + 0xCB2)) = 1;
    if ((*((s8 *) (new_var + 0x2010))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
    }
    if ((*((s8 *) (new_var + 0x2011))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
    }
  }
  else
  {
    func_001ABD30((Fighter *) (new_var + 0x1360));
  }
  Fighter_ResetMotion(new_var, 0);
  if ((*((s32 *) (new_var + 0xC64))) != 0)
  {
    *((s32 *) (new_var + 0x1864)) = 1;
    if ((*((s8 *) (new_var + 0x1FF9))) != 0)
    {
      u8 *p = *((u8 **) (new_var + 0xBB4));
      if ((((*((f32 *) (new_var + 0x44))) - (*((f32 *) (p + 0xC)))) - (*((f32 *) (new_var + 0x1844)))) <= 0.0f)
      {
        *((s8 *) (new_var + 0x1FF9)) = 0;
        *((s32 *) (new_var + 0x1864)) = (*((s32 *) (new_var + 0x1864))) | 8;
        *((f32 *) (new_var + 0xCA4)) = 0.0f;
        *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
      }
    }
    if ((*((s16 *) (new_var + 0x13A4))) > -1)
    {
      r = func_001C2B10(new_var);
    }
    else
    {
      r = func_001E94C0(new_var);
    }
    func_001E5040(new_var);
    if (r == 0)
    {
      *((s16 *) (new_var + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (new_var + 0xCB4)) = 0;
    }
    *((s8 *) (new_var + 0x2004)) = 1;
    *((s8 *) (new_var + 0x1FFB)) = 1;
    if (r != 0xF)
    {
      *((s16 *) (new_var + 0xCB6)) = 0;
    }
    *((s8 *) (new_var + 0x2006)) = 0;
    D_00468460[r](new_var);
    func_002CBFF0(1, new_var);
  }
}
void func_001B62D0(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x20;
  new_var = (u8 *) arg0;
  if ((*((s16 *) (new_var + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x15;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3E99999A;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001D9900(arg0, 0xB, 1);
}

void Fighter_ResetSpeed1B6470(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = 0.0f;
}
// differs: 23 of 101: the 0x1864 flag word is stored and read back in the same block, so its address is computed once into a0 / v1 (CSE); the original addresses each store with the offset (same as func_001B24E0)
void func_001B64C0(Fighter *f)
{
  FighterMain2 *new_var;
  s32 v;
  if ((*((f32 *) (((u8 *) f) + 0xC60))) <= 10.0f)
  {
    *((s16 *) (((u8 *) f) + 0xCB2)) = 1;
    if ((*((s8 *) (((u8 *) f) + 0x2010))) != 0)
    {
      ((FighterCB2 *) f)->unkCB2 |= 0x8000;
    }
    if ((*((s8 *) (((u8 *) f) + 0x2011))) != 0)
    {
      ((FighterCB2 *) f)->unkCB2 |= 0x4000;
    }
  }
  else
  {
    func_001ABD30((Fighter *) (((u8 *) f) + 0x1360));
  }
  Fighter_ResetMotion(f, 0);
  if ((*((s32 *) (((u8 *) f) + 0xC64))) != 0)
  {
    ((FighterMain2 *) f)->unk1864 = 1;
    new_var = (FighterMain2 *) f;
    if (new_var->unk1FF9 != 0)
    {
      if ((((*((f32 *) (((u8 *) f) + 0x44))) - (*((f32 *) (((u8 *) (*((void **) (((u8 *) f) + 0xBB4)))) + 0xC)))) - (*((f32 *) (((u8 *) f) + 0x1844)))) <= 0.0f)
      {
        new_var->unk1FF9 = 0;
        new_var->unk1864 |= 8;
        *((f32 *) (((u8 *) f) + 0xCA4)) = 0.0f;
        *((s32 *) (((u8 *) f) + 0xCA8)) = 0x3DCCCCCD;
      }
    }
    if ((*((s16 *) (((u8 *) f) + 0x13A4))) > (-1))
    {
      v = func_001C2B10(f);
    }
    else
    {
      v = func_001E94C0(f);
    }
    func_001E5040(f);
    if (v == 0)
    {
      *((s16 *) (((u8 *) f) + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (((u8 *) f) + 0xCB4)) = 0;
    }
    *((s8 *) (((u8 *) f) + 0x2004)) = 1;
    *((s8 *) (((u8 *) f) + 0x1FFB)) = 1;
    if (v != 0xF)
    {
      *((s16 *) (((u8 *) f) + 0xCB6)) = 0;
    }
    *((s8 *) (((u8 *) f) + 0x2006)) = 0;
    D_00468460[v](f);
    func_002CBFF0(1, f);
  }
}

void func_001B6660(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x1F;
  new_var = (u8 *) arg0;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (((u8 *) arg0) + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0x14;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (((u8 *) arg0) + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (((u8 *) arg0) + 0xCA8)) = 0x3E99999A;
  *((s32 *) (((u8 *) arg0) + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (((u8 *) arg0) + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001D9900(arg0, 0xA, 1);
}

void func_001B6800(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
void func_001B6820(Fighter *f) {
    Fighter_ResetMotion(f, 0);
}
/* A fighter as the state-start functions with a 12-way state switch read it. */
typedef struct FighterSt {
    u8 pad0[0xB70];
    s32 fB70;
    u8 padB74[0xCA4 - 0xB74];
    f32 fCA4;
    f32 fCA8;
    s16 fCAC;
    s16 fCAE;
    s16 fCB0;
    u16 fCB2;
    u8 padCB4[0xCB8 - 0xCB4];
    s32 fCB8;
    u8 padCBC[0x181C - 0xCBC];
    s16 f181C;
    u8 pad181E[0x183C - 0x181E];
    s8 f183C;
    u8 pad183D[0x1FFD - 0x183D];
    s8 f1FFD;
    u8 pad1FFE[0x2003 - 0x1FFE];
    s8 f2003;
    u8 pad2004[0x2010 - 0x2004];
    s8 f2010;
    s8 f2011;
} FighterSt;

void func_001B6830(FighterSt *f) {
    f->fCAE = f->fCAC;
    f->fCAC = 0x1E;
    if (f->fCAE == f->fCAC) {
        f->fCB0 = f->fCB0 + 1;
    } else {
        f->fCB0 = 0;
    }
    switch (f->fCAC) {
    case 0:
        f->fCB2 = 1;
        break;
    case 1:
        f->fCB2 = 2;
        break;
    case 4:
        f->fCB2 = 4;
        break;
    case 5:
        f->fCB2 = 8;
        break;
    case 6:
        f->fCB2 = 0x10;
        break;
    case 7:
    case 8:
        f->fCB2 = 0x20;
        break;
    case 9:
        f->fCB2 = 0x40;
        break;
    case 11:
        f->fCB2 = 0x80;
        break;
    default:
        f->fCB2 = 0;
        break;
    }
    if (f->f2010 != 0) {
        f->fCB2 |= 0x8000;
    }
    if (f->f2011 != 0) {
        f->fCB2 |= 0x4000;
    }
    f->fCB8 = 0;
    f->f2003 = 0;
    f->f1FFD = 1;
    f->f181C = 0;
}
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
    Fighter_ResetMotion(f, 0);
}
void func_001B6F10(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (new_var + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x1C & 0xFFu;
  if ((*((s16 *) (new_var + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (((u8 *) arg0) + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (((u8 *) arg0) + 0xB70)) = 0x100;
  func_001E3460(arg0);
  *((s32 *) (((u8 *) arg0) + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3BA3D70A;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (((u8 *) arg0) + 0x181C)) = 0;
  *((s8 *) (new_var + 0x1FFE)) = 0;
}

void func_001B7090(Fighter *f) {
    FT_FIELD(f, f32, 0x17BC) = 0.4f;
    func_001E4E20(f, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B70B0);
s32 func_001E2C50(void *);
s32 func_001E3100(void *, void *, void *, void *);
void func_001B7360(u8 *arg0)
{
  s16 temp_v0;
  s8 temp_t6;
  u8 *new_var;
  s8 temp_t7;
  s8 temp_t8;
  u8 *temp_a1;
  u8 *temp_a2;
  u8 *temp_a3;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x1B;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  new_var = (u8 *) arg0;
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  func_001ABD30((struct Fighter *) (arg0 + 0x1360));
  temp_t8 = *((s8 *) (new_var + 0xAD0));
  temp_t7 = *((s8 *) (new_var + 0xACE));
  temp_t6 = *((s8 *) (new_var + 0xACF));
  temp_a3 = arg0 + 0x9E0;
  temp_a2 = arg0 + 0xA10;
  temp_a1 = arg0 + 0xA40;
  *((s16 *) (new_var + 0xAE4)) = 0;
  *((s32 *) (new_var + 0xADC)) = 0xBF800000;
  *((s32 *) (new_var + 0xAD4)) = 0x3F800000;
  *((s32 *) (new_var + 0xAD8)) = 0;
  *((s8 *) (new_var + 0xACE)) = 0;
  *((s8 *) (new_var + 0xACF)) = 0;
  *((s8 *) (new_var + 0xAD0)) = 0;
  *((s8 *) (new_var + 0xAC8)) = 0;
  *((s32 *) (new_var + 0xAC0)) = 0;
  *((u8 **) (new_var + 0xAA0)) = (u8 *) (arg0 + 0x920);
  *((u8 **) (new_var + 0xAA4)) = (u8 *) (arg0 + 0x950);
  *((u8 **) (new_var + 0xAA8)) = (u8 *) (arg0 + 0x980);
  *((u8 **) (new_var + 0xAAC)) = (u8 *) (arg0 + 0x9B0);
  *((u8 **) (new_var + 0xAB0)) = temp_a3;
  *((u8 **) (new_var + 0xAB4)) = temp_a2;
  *((u8 **) (new_var + 0xAB8)) = temp_a1;
  *((u8 **) (new_var + 0xABC)) = (u8 *) (arg0 + 0xA70);
  *((s8 *) (new_var + 0xAC9)) = 0;
  *((s8 *) (new_var + 0xACA)) = 0;
  *((s8 *) (((u8 *) arg0) + 0xACB)) = 0;
  *((s8 *) (((u8 *) arg0) + 0xACC)) = 0;
  *((s8 *) (((u8 *) arg0) + 0xACD)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xB64)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xADC)) = 0x461C4000;
  *((s8 *) (((u8 *) arg0) + 0xAD0)) = temp_t8;
  *((s8 *) (((u8 *) arg0) + 0xACE)) = temp_t7;
  *((s8 *) (((u8 *) arg0) + 0xACF)) = temp_t6;
  func_001E3100(arg0, temp_a1, temp_a2, temp_a3);
  func_001D9C00(arg0);
  *((s32 *) (((u8 *) arg0) + 0xCB8)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x2003)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x1FFD)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x181C)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x1FFE)) = 1;
  *((s16 *) (((u8 *) arg0) + 0xCB4)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A30)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A32)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A34)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A36)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A38)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A3A)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1A3C)) = -1;
  func_001E2C50(arg0);
}

void func_001B75A0(Fighter *f) {
    func_001E4E20(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, f32, 0x17BC) = (FT_FIELD(f, f32, 0xCB8) < 3.0f) ? 0.4f : 0.0f;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7620);
extern void func_001E5040(void *);
extern void func_001C37F0(Fighter *f, void *p);
extern void func_00146ED0(f32 *a, f32 *b, f32 scale);
extern void func_001D9960();
void func_001B7A30(u8 *arg0)
{
  u8 *new_var;
  s32 s;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x1A;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  s = -1;
  if (s == -1)
    s = *((s16 *) (new_var + 0xCAC));
  switch (s)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0x1864)) = 1;
  func_001E5040(arg0);
  *((s32 *) (new_var + 0xB70)) = (*((s16 *) (new_var + 0x17FA))) + 0x70;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0xCBD)) = 0;
  *((s16 *) (new_var + 0xCB4)) = ((*((s16 *) (new_var + 0x17FA))) == 12) ? 1 : 0;
  func_001C37F0((Fighter *) arg0, new_var + 0xD0);
  __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vsub.xyz $vf1, $vf0, $vf1 ; sqc2 $vf1, 0x0(%0)" : : "r"(new_var + 0xD0) : "memory");
  func_00146ED0((f32 *) (new_var + 0xD0), (f32 *) (new_var + 0xD0), *((f32 *) (new_var + 0x1800)));
  func_001ABD30((Fighter *) (new_var + 0x1360));
  *((s32 *) (new_var + 0x1770)) = 0;
  *((s32 *) (new_var + 0x1774)) = 0;
  *((s32 *) (new_var + 0x1808)) = 0x42B40000;
  func_001D9960(arg0, 0x1D, 0);
}
void func_001B7C50(Fighter *f) {
    f32 v;
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
        FT_FIELD(f, f32, 0x17BC) = v;
    } else {
        FT_FIELD(f, s32, 0x17BC) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B7CF0);
extern void func_001E5040(void *);
extern void func_001C37F0(Fighter *f, void *p);
extern void func_00146ED0(f32 *a, f32 *b, f32 scale);
s32 func_001E3100();
extern void func_001D9C00(void *a);
s32 func_001E2070(void *);
void func_001B80D0(u8 *arg0)
{
  u8 *new_var;
  s32 s;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x19;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  s = -1;
  if (s == -1)
    s = *((s16 *) (new_var + 0xCAC));
  switch (s)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0x1864)) = 1;
  func_001E5040(arg0);
  *((s32 *) (new_var + 0xB70)) = (*((s16 *) (new_var + 0x17FA))) + 0x40;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0xCBD)) = 0;
  func_001C37F0((Fighter *) arg0, new_var + 0xD0);
  __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vsub.xyz $vf1, $vf0, $vf1 ; sqc2 $vf1, 0x0(%0)" : : "r"(new_var + 0xD0) : "memory");
  func_00146ED0((f32 *) (new_var + 0xD0), (f32 *) (new_var + 0xD0), *((f32 *) (new_var + 0x1800)));
  func_001E3100(arg0);
  func_001D9C00(arg0);
  if ((*((s8 *) (new_var + 0x2008))) == 0)
  {
    func_001E2070(arg0);
  }
  func_001ABD30((Fighter *) (new_var + 0x1360));
  *((s32 *) (new_var + 0x1770)) = 0;
  *((s32 *) (new_var + 0x1774)) = 0;
}
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
extern void Character_Release(void *p);
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
#define BTL_CHARA(i) ((Fighter *)((u8 *)gBattle + 0x830 + (i) * 0x2020))

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
    u8 pad1848[0x1864 - 0x1848];
    s32 unk1864;
    u8 pad1868[0x1FF9 - 0x1868];
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
    Fighter_ResetMotion(f, 0);
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
void func_001B8380(FighterSt *f) {
    f->fCAE = f->fCAC;
    f->fCAC = 0x18;
    if (f->fCAE == f->fCAC) {
        f->fCB0 = f->fCB0 + 1;
    } else {
        f->fCB0 = 0;
    }
    switch (f->fCAC) {
    case 0:
        f->fCB2 = 1;
        break;
    case 1:
        f->fCB2 = 2;
        break;
    case 4:
        f->fCB2 = 4;
        break;
    case 5:
        f->fCB2 = 8;
        break;
    case 6:
        f->fCB2 = 0x10;
        break;
    case 7:
    case 8:
        f->fCB2 = 0x20;
        break;
    case 9:
        f->fCB2 = 0x40;
        break;
    case 11:
        f->fCB2 = 0x80;
        break;
    default:
        f->fCB2 = 0;
        break;
    }
    if (f->f2010 != 0) {
        f->fCB2 |= 0x8000;
    }
    if (f->f2011 != 0) {
        f->fCB2 |= 0x4000;
    }
    f->fB70 = f->f183C + 0xAC;
    func_001E3460(f);
    f->fCA4 = 1.0f;
    f->fCA8 = 0.0f;
    f->fCB8 = 0;
    f->f2003 = 0;
    f->f1FFD = 0;
}
void func_001B84F0(Fighter *f) {
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
#if 0
// differs: size 0xEC against 0x100: the condition's loads and cvt.s.w are scheduled differently (the original tests the limit with lwc1 / cvt before the 182C loads, and its branch target is 8 bytes later)
extern void (*D_004684C0[])(void *);
extern void func_00146F10(void *, void *, f32);
void func_001B8500(Fighter *f) {
    Copy16 tmp;
    f32 s;
    f32 lim;
    s = BW_FIELD(gBattle, f32, 0x88F0) * FT_FIELD(f, f32, 0xC9C);
    Fighter_ResetMotion(f, 0);
    lim = (f32)FT_FIELD(f, s32, 0xC5C);
    if (FT_FIELD(f, s32, 0xC64) != 0 && FT_FIELD(f, f32, 0x182C) - FT_FIELD(f, f32, 0x1830) < lim) {
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_004684C0[0](f);
        func_002CBFF0(1, f);
    } else {
        func_00146F10(&tmp, (u8 *)f + 0xD0, s);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; lqc2 $vf2, 0x0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)" : : "r"((u8 *)f + 0x40), "r"(&tmp));
        func_001E4E20(f, 0);
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
        FT_FIELD(f, f32, 0x1830) = FT_FIELD(f, f32, 0x1830) + s;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B8500);
void func_001B8600(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  new_var = (u8 *) arg0;
  *((s16 *) (new_var + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (new_var + 0xCAC)) = 0x17;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (((u8 *) arg0) + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (((u8 *) arg0) + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (((u8 *) arg0) + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (((u8 *) arg0) + 0x2011))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s8 *) (new_var + 0x1FF9)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xB70)) = (s32) ((*((s8 *) (((u8 *) arg0) + 0x183C))) + 0xA6);
  func_001E3460(arg0);
  *((s32 *) (((u8 *) arg0) + 0xCA4)) = 0x3F800000;
  *((s32 *) (((u8 *) arg0) + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x181C)) = 0;
  func_001A8770(2, (void *) 0);
}

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
extern void func_001E5040(void *);
extern f32 func_00146E30(void *, void *);
s32 func_001E2070(void *);
void func_001B8E50(u8 *arg0)
{
  u8 *new_var;
  s32 s;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x16;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  s = -1;
  if (s == -1)
    s = *((s16 *) (new_var + 0xCAC));
  switch (s)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = (*((s8 *) (new_var + 0x183C))) + 0x9A;
  func_001E3460(arg0);
  *((s32 *) (new_var + 0x1864)) = 3;
  func_001E5040(arg0);
  *((f32 *) (new_var + 0x182C)) = 1.0f + (func_00146E30(new_var + 0x650, new_var + 0x100) / 3.0f);
  __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(new_var + 0xF0), "r"(new_var + 0x650) : "memory");
  *((f32 *) (new_var + 0xCA4)) = 1.0f;
  *((f32 *) (new_var + 0xCA8)) = 0.0f;
  *((f32 *) (new_var + 0xCB8)) = 0.0f;
  *((s8 *) (new_var + 0x1FFB)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s16 *) (new_var + 0xCB4)) = 0;
  *((s8 *) (new_var + 0xCBD)) = 0;
  func_001E2070(arg0);
  func_001ABD30((Fighter *) (new_var + 0x1360));
}
void func_001B9040(Fighter *f) {
    func_001E4E20(f, 0);
    FIGHTER_FIELD(f, s32, 0x17BC) = 0x3E800000;
}
void func_001B9070(Fighter *f) {
    s32 v;
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
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            v = func_001C2B10(f);
        } else {
            v = func_001E94C0(f);
        }
        FT_FIELD(f, s32, 0x1864) = 1;
        func_001E5040(f);
        if (v == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (v != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[v](f);
        func_002CBFF0(1, f);
    }
}
void func_001B91B0(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x15;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = *((s8 *) (new_var + 0x183C)) + 0xA0;
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2004)) = 0;
  func_001DD680(arg0, 0);
}
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
#if 0
// differs: size 0x17C against 0x1A0: the prologue saves s0 after s1 in the original (s0 = 0 in the jal delay slot) and the 6/7/8/11 test is a compare chain; 89 of 104 differ
void func_001B9B00(Fighter *f) {
    s32 v = 0;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, f32, 0xC60) <= 20.0f) {
        FT_FIELD(f, u16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 = ((FighterCB2 *)f)->unkCB2 | 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 = ((FighterCB2 *)f)->unkCB2 | 0x4000;
        }
    }
    FT_FIELD(f, s8, 0x1FFD) = 0;
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    if (v != 8) {
        if (v != 7) {
            if (v != 0xB) {
                if (v != 6) {
                    v = 0;
                }
            }
        }
    }
    if (FT_FIELD(f, s32, 0xC64) == 0 && v == 0) {
        return;
    }
    func_001D9BF0(f);
    FT_FIELD(f, s32, 0x1864) = 1;
    func_001E5040(f);
    if (v == 0) {
        FT_FIELD(f, s16, 0xCB4) = 1;
    } else {
        FT_FIELD(f, s16, 0xCB4) = 0;
    }
    FT_FIELD(f, s8, 0x2004) = 1;
    FT_FIELD(f, s8, 0x1FFB) = 1;
    if (v != 0xF) {
        FT_FIELD(f, s16, 0xCB6) = 0;
    }
    FT_FIELD(f, s8, 0x2006) = 0;
    D_00468460[v](f);
    func_002CBFF0(1, f);
    func_001ABD30((Fighter *)((u8 *)f + 0x1360));
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9B00);
void func_001B9CA0(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x13;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x25 : 0x2B;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x2004)) = 0;
  func_001ABD30((Fighter *) (new_var + 0x1360));
  if (BW_FIELD(gBattle, s16, 0x8944) == 0)
  {
    func_001DD680(arg0, 0);
  }
  *((s32 *) (new_var + 0x1808)) = 0;
}
extern s32 func_001E9290(Fighter *c);
#if 0
// differs: 98 of 132 differ: the first gBattle product block is scheduled differently (the original loads gBattle once per block with lui/addu at); the rest (sub-object counters, the abs table tests, the clamp) matches in shape; 2 forms of the first statement tried
void func_001B9E70(Fighter *f) {
    u8 *sub;
    s16 *t;
    s32 a;
    f32 x18 = FT_FIELD(f, f32, 0x18A4);
    f32 c9c = FT_FIELD(f, f32, 0xC9C);
    f32 w = gBattle->unk88F0 * c9c;
    FT_FIELD(f, f32, 0x18A4) = x18 - 3.0f * w;
    if (gBattle->unk8944 == 0 && gBattle->unk8AB2 == 0) {
        if (FT_FIELD(f, s16, 0x13A4) < 0) {
            FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - (f32)func_001E9290(f);
        } else {
            sub = (u8 *)f + 0x1360;
            if (FT_FIELD(sub, s32, 0x48) == 1) {
                FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.0f;
            }
            if (FT_FIELD(sub, s32, 0x4C) == 1) {
                FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.0f;
            }
            if (FT_FIELD(sub, s32, 0x50) == 1) {
                FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.0f;
            }
            if (FT_FIELD(sub, s32, 0x54) == 1) {
                FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.0f;
            }
            t = (s16 *)(sub + (FT_FIELD(sub, s32, 0x58) << 2) + 0x64);
            if (t[0] != 0) {
                a = t[1];
                if (a < 0) {
                    a = -a;
                }
                if (a == 1) {
                    FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.5f;
                }
            }
            t = (s16 *)(sub + (FT_FIELD(sub, s32, 0x5C) << 2) + 0x64);
            if (t[0] != 0) {
                a = t[1];
                if (a < 0) {
                    a = -a;
                }
                if (a == 1) {
                    FT_FIELD(f, f32, 0x18A4) = FT_FIELD(f, f32, 0x18A4) - 3.5f;
                }
            }
        }
    }
    if (FT_FIELD(f, f32, 0x18A4) < 0.0f) {
        FT_FIELD(f, f32, 0x18A4) = 0.0f;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001B9E70);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA070);
extern void func_00146F10(void *, void *, f32);
void func_001BA570(u8 *arg0)
{
  u8 *new_var;
  s32 s;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x12;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  s = -1;
  if (s == -1)
    s = *((s16 *) (new_var + 0xCAC));
  switch (s)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  {
    s32 t;
    if ((*((s16 *) (new_var + 0xCB4))) != 0)
    {
      t = 0x24;
    }
    else
    {
      t = 0x2A;
    }
    *((s32 *) (new_var + 0xB70)) = t;
  }
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(new_var);
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xCA4)) = 0x3A83126F;
    *((s32 *) (new_var + 0xCA8)) = 0x3AC49BA6;
    if ((*((s16 *) (new_var + 0xCAE))) == 0x10)
    {
      func_00146F10(new_var + 0xD0, new_var + 0xD0, 0.35f);
    }
    else
    {
      __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"(new_var + 0xD0) : "memory");
    }
    *((s8 *) (new_var + 0x1FFA)) = 1;
  }
  else
  {
    *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
    *((s32 *) (new_var + 0xCA8)) = 0;
    *((s8 *) (new_var + 0x1FFA)) = 0;
  }
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s32 *) (new_var + 0x18A4)) = 0x42F00000;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    if ((*((s8 *) (new_var + 0x2013))) == 1)
    {
      *((s8 *) (new_var + 0x2004)) = 0;
    }
  }
}
void func_001BA7B0(Fighter *f) {
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
    func_001E4E20(f, 0);
    FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BA7F0);
extern void func_001A8770(s32 a, void *b);
void func_001BAB10(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0x11;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s8 *) (new_var + 0x1FF9)) = 0;
  *((s32 *) (new_var + 0xB70)) = ((*((s16 *) (new_var + 0xCB4))) != 0) ? 0x83 : 0x8D;
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s8 *) (new_var + 0x1FFA)) = 1;
  if (((*((s16 *) (new_var + 0xCAE))) == 0x14) && ((*((s8 *) (new_var + 0x183E))) != 0))
  {
    *((s8 *) (new_var + 0x1FFA)) = -1;
  }
  *((s32 *) (new_var + 0xD4)) = 0;
  if ((*((s8 *) (new_var + 0x2013))) == 1)
  {
    *((s8 *) (new_var + 0x2004)) = 0;
  }
  func_001A8770(2, 0);
}
#if 0
// differs: 38 of 76 differ: float scheduling (the original loads the 2.5 and 5.0 constants and the field before the call-free arithmetic in a different order; the cvt.s.w and sub.s registers differ)
void func_001BACE0(Fighter *f) {
    s32 a3 = FT_FIELD(f, s32, 0xC54);
    void *e = FT_FIELD((u8 *)FT_FIELD(f, void *, 0xB88) + ((a3 >> 16) - 1) * 4, void *, 0x46C);
    u8 *b = FT_FIELD(e, u8 *, 0x14);
    f32 f1;
    f32 f2;

    f2 = (2.5f - FT_FIELD(f, f32, 0xD4)) / 5.0f - 0.2f;
    f1 = (f32)FT_FIELD(b + ((a3 & 0xFFFF) << 4), s32, 0x8);
    FT_FIELD(f, f32, 0xC58) = f1 * f2;
    if (FT_FIELD(f, f32, 0xC58) > f1) {
        FT_FIELD(f, f32, 0xC58) = f1 - 1.0f;
    }
    if (FT_FIELD(f, f32, 0xC58) < 0.0f) {
        FT_FIELD(f, f32, 0xC58) = 0.0f;
    }
    if (FT_FIELD(f, s16, 0xCB4) == 0 && FT_FIELD(f, f32, 0xCB8) <= 2.0f) {
        if (func_001E3D60(FT_FIELD(f, s32, 0x17AC), 180.0f) == 0) {
            FT_FIELD(f, s32, 0x17BC) = 0x3E99999A;
        } else {
            FT_FIELD(f, s32, 0x17BC) = 0xBE99999A;
        }
    } else {
        FT_FIELD(f, s32, 0x17BC) = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BACE0);
extern void (*D_004684A4[])(void *);
void func_001BAE10(Fighter *f) {
    f32 vec[4];
    f32 k;
    f32 t;
    void *s0;
    s32 v3;
    f32 c;
    c = -0.08f;
    k = gBattle->unk88F0 * FT_FIELD(f, f32, 0xC9C);
    t = FT_FIELD(f, f32, 0xD4) + (c * k);
    FT_FIELD(f, f32, 0xD4) = t;
    if (t < -2.5f) {
        FT_FIELD(f, f32, 0xD4) = -2.5f;
    }
    func_00146F10(vec, (u8 *)f + 0xD0, k);
    __asm__ volatile(
        "lqc2 $vf1, 0x0(%0)
"
        "lqc2 $vf2, 0x0(%1)
"
        "vadd.xyz $vf1, $vf1, $vf2
"
        "sqc2 $vf1, 0x0(%0)
"
        :
        : "r"((u8 *)f + 0x40), "r"(vec)
        : "memory");
    func_001E4E20(f, 0);
    func_001E4FA0(f, 1);
    s0 = FT_FIELD(f, void *, 0xBB4);
    if (FT_FIELD(f, f32, 0x654) <= FT_FIELD(f, f32, 0x1844) + 0.5f * FT_FIELD(s0, f32, 0xC)) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
        v3 = FT_FIELD(f, s16, 0x181E) & 1;
        FT_FIELD(f, s16, 0xCB4) = v3;
        FT_FIELD(f, s16, 0x181C) = 0;
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_004684A4[0](f);
        func_002CBFF0(1, f);
    }
    if (((FighterMain2 *)f)->unk1FF9 != 0) {
        if (FT_FIELD(f, s8, 0x1FF8) != -1) {
            if (!(FT_FIELD(f, f32, 0x64) < FT_FIELD(f, f32, 0x1844) + 2.0f * FT_FIELD(s0, f32, 0xC))) {
                if (FT_FIELD(f, f32, 0x64) <= FT_FIELD(f, f32, 0x1818)) {
                    if (FT_FIELD(f, f32, 0xD4) < 0.0f) {
                        v3 = FT_FIELD(f, s16, 0x181E) & 1;
                        FT_FIELD(f, s16, 0xCB4) = v3;
                        FT_FIELD(f, s16, 0x181C) = 0;
                        FT_FIELD(f, s8, 0x2004) = 1;
                        FT_FIELD(f, s8, 0x1FFB) = 1;
                        FT_FIELD(f, s16, 0xCB6) = 0;
                        FT_FIELD(f, s8, 0x2006) = 0;
                        D_004684A8[0](f);
                        func_002CBFF0(1, f);
                    }
                }
            }
        }
    }
}
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
void func_001BBFD0(Fighter *f) {
    f32 a;
    s32 v;

    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterV *)f)->unk1864 = 1;
        if (FT_FIELD(f, s8, 0x1FF9) != 0) {
            a = FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC);
            if (a - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterV *)f)->unk1FF9 = 0;
                v = FT_FIELD(f, s32, 0x1864);
                FT_FIELD(f, s32, 0x1864) = v | 8;
                FT_FIELD(f, f32, 0xCA4) = 0.0f;
                FT_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
            }
        }
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            v = func_001C2B10(f);
        } else {
            v = func_001E94C0(f);
        }
        func_001E5040(f);
        if (v == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (v != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        ((void (*)(Fighter *))D_00468460[v])(f);
        func_002CBFF0(1, f);
    }
}
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
void func_001BC270(Fighter *f) {
    s32 v;
    f32 t;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    if (FT_FIELD(f, u16, 0xCB2) & 1) {
        if (FT_FIELD(f, s32, 0xC64) != 0 || v == 1 || (FT_FIELD(f, f32, 0xCB8) < 6.0f && (v == 7 || v == 8))) {
            FT_FIELD(f, s32, 0x1864) = 1;
            if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
                if (t <= 0.0f) {
                    ((FighterMain2 *)f)->unk1FF9 = 0;
                    ((FighterMain2 *)f)->unk1864 = ((FighterMain2 *)f)->unk1864 | 8;
                }
            }
            func_001E5040(f);
            if (v == 0) {
                FT_FIELD(f, s16, 0xCB4) = 1;
            } else {
                FT_FIELD(f, s16, 0xCB4) = 0;
            }
            FT_FIELD(f, s8, 0x2004) = 1;
            FT_FIELD(f, s8, 0x1FFB) = 1;
            if (v != 0xF) {
                FT_FIELD(f, s16, 0xCB6) = 0;
            }
            FT_FIELD(f, s8, 0x2006) = 0;
            D_00468460[v](f);
            func_002CBFF0(1, f);
            func_001ABD30((Fighter *)((u8 *)f + 0x1360));
        }
    }
}
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
extern f32 func_001E52B0(s32);
extern void (*D_00468490)(void *);
#if 0
// differs: size 0x2C0 against 0x2C0 but the frame is 0x40 against 0x20: f goes to s2 and a s1 address copy (3252 field) is kept; the 0xB/0xC and the D_00468490 tail are not reached; 2 variants tried
void func_001BC7C0(Fighter *f) {
    s32 v;
    f32 t;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s16, 0xCB4) == 0) {
        if (FT_FIELD(f, s32, 0xC64) != 0) {
            FT_FIELD(f, s32, 0xB70) = 0xD;
            if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
            }
            func_001E3460(f);
            FT_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
            FT_FIELD(f, s32, 0xCA8) = 0x3E99999A;
            FT_FIELD(f, s16, 0xCB4) = 1;
        }
    }
    if (((FighterMain2 *)f)->unk1FF9 != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            ((FighterMain2 *)f)->unk1FF9 = 0;
            FT_FIELD(f, s32, 0xB70) = 0xD;
            func_001E3460(f);
            FT_FIELD(f, s32, 0x1864) = 8;
            func_001E5040(f);
            FT_FIELD(f, f32, 0xCA4) = 0.0f;
            FT_FIELD(f, s32, 0xCA8) = 0x3CA3D70A;
        }
    } else {
        if (FT_FIELD(f, s16, 0x13A4) >= 0) {
            if (!(func_001E52B0(0) < 15.0f)) {
                if (FT_FIELD(f, s16, (FT_FIELD(f, s32, 0x13C0) << 2) + 0x14C4) == -1) {
                    if (func_001E3D60(FT_FIELD(f, s32, 0x17AC), 180.0f) == 0) {
                        ((FighterMain2 *)f)->unk1FF9 = 1;
                        FT_FIELD(f, s32, 0xB70) = 0xD;
                        if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                            FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
                        }
                        func_001E3460(f);
                        FT_FIELD(f, s32, 0x1864) = 4;
                        func_001E5040(f);
                        FT_FIELD(f, f32, 0xCA4) = 0.0f;
                        FT_FIELD(f, s32, 0xCA8) = 0x3C23D70A;
                    }
                }
            }
        }
    }
    if (FT_FIELD(f, s16, 0x13A4) < 0) {
        v = func_001E94C0(f);
    } else {
        v = func_001C2B10(f);
    }
    if (FT_FIELD(f, s16, 0xCB4) == 1) {
        if (!(FT_FIELD(f, f32, 0xCB8) < 60.0f)) {
            if (v == 0xB) {
                v = 0xC;
            }
        }
    }
    if (v < 0) {
        return;
    }
    if (v == FT_FIELD(f, s16, 0xCAC)) {
        return;
    }
    FT_FIELD(f, s32, 0x1770) = 0;
    FT_FIELD(f, s16, 0xCB4) = 0;
    if (v == 7 || v == 8) {
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (v != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[v](f);
        func_002CBFF0(1, f);
    } else {
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        FT_FIELD(f, s16, 0xCB6) = 0;
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468490(f);
        func_002CBFF0(1, f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BC7C0);
s32 func_001E3240(void *);
void func_001BCA80(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  new_var = (u8 *) arg0;
  *((s16 *) (new_var + 0xCAE)) = (s16) (*((s16 *) (new_var + 0xCAC)));
  *((s16 *) (new_var + 0xCAC)) = 0xB;
  if ((*((s16 *) (new_var + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0xC;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F333333;
  *((s32 *) (new_var + 0xCA8)) = 0x3E99999A;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001E3240(arg0);
  func_001D9960((Fighter *) arg0, 0x20, 0);
}


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
void func_001BCCD0(Fighter *f) {
    s32 v;
    f32 t;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    if (FT_FIELD(f, u16, 0xCB2) & 1) {
        if (FT_FIELD(f, s32, 0xC64) != 0 || v == 1 || (FT_FIELD(f, f32, 0xCB8) <= 6.0f && (v == 7 || v == 8))) {
            FT_FIELD(f, s32, 0x1864) = 1;
            if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
                if (t <= 0.0f) {
                    ((FighterMain2 *)f)->unk1FF9 = 0;
                    ((FighterMain2 *)f)->unk1864 = ((FighterMain2 *)f)->unk1864 | 8;
                }
            }
            func_001E5040(f);
            if (v == 0) {
                FT_FIELD(f, s16, 0xCB4) = 1;
            } else {
                FT_FIELD(f, s16, 0xCB4) = 0;
            }
            FT_FIELD(f, s8, 0x2004) = 1;
            FT_FIELD(f, s8, 0x1FFB) = 1;
            if (v != 0xF) {
                FT_FIELD(f, s16, 0xCB6) = 0;
            }
            FT_FIELD(f, s8, 0x2006) = 0;
            D_00468460[v](f);
            func_002CBFF0(1, f);
            func_001ABD30((Fighter *)((u8 *)f + 0x1360));
        }
    }
}
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
void func_001BCF30(Fighter *f) {
    f32 k;
    f32 s;
    k = gBattle->unk88F0 * FT_FIELD(f, f32, 0xC9C);
    func_001C37F0(f, (void *)((u8 *)f + 0xD0));
    s = FT_FIELD(f, f32, 0xB64);
    if (0.0f == s) {
        s = 3.0f;
    }
    FT_FIELD(f, f32, 0xD0) = FT_FIELD(f, f32, 0xD0) * 0.4f;
    FT_FIELD(f, f32, 0xD8) = FT_FIELD(f, f32, 0xD8) * 0.4f;
    func_00146ED0((f32 *)((u8 *)f + 0xD0), (f32 *)((u8 *)f + 0xD0), s * k);
    __asm__ volatile(
        "lqc2 $vf1, 0x0(%0)\n"
        "lqc2 $vf2, 0x0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0x0(%0)\n"
        :
        : "r"((u8 *)f + 0x40), "r"((u8 *)f + 0xD0)
        : "memory");
    func_001E4FA0(f, -1);
    func_001E4E20(f, 0);
    if (((FighterMain2 *)f)->unk1FF9 == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BD020);
void func_001BD300(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 9;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (((u8 *) arg0) + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (((u8 *) arg0) + 0x2010))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (((u8 *) arg0) + 0x2011))) != 0)
  {
    *((u16 *) (((u8 *) arg0) + 0xCB2)) = (u16) ((*((u16 *) (((u8 *) arg0) + 0xCB2))) | 0x4000);
  }
  *((s32 *) (((u8 *) arg0) + 0xB70)) = 9;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F333333;
  *((s32 *) (new_var + 0xCA8)) = 0x3E99999A;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (((u8 *) arg0) + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
}

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
void func_001BD530(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 8;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 8;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s16 *) (new_var + 0xCB4)) = func_001E3D60(*((s32 *) (new_var + 0x17AC)), 120.0f) != 0;
}
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
void func_001BD760(Fighter *f) {
    s32 v;
    f32 t;
    if (FT_FIELD(f, f32, 0xC60) <= 10.0f) {
        FT_FIELD(f, u16, 0xCB2) = 1;
        if (FT_FIELD(f, s8, 0x2010) != 0) {
            ((FighterCB2 *)f)->unkCB2 = ((FighterCB2 *)f)->unkCB2 | 0x8000;
        }
        if (FT_FIELD(f, s8, 0x2011) != 0) {
            ((FighterCB2 *)f)->unkCB2 = ((FighterCB2 *)f)->unkCB2 | 0x4000;
        }
    } else {
        func_001ABD30((Fighter *)((u8 *)f + 0x1360));
    }
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) == 0) {
        return;
    }
    FT_FIELD(f, s32, 0x1864) = 1;
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            ((FighterMain2 *)f)->unk1FF9 = 0;
            ((FighterMain2 *)f)->unk1864 = ((FighterMain2 *)f)->unk1864 | 8;
            FT_FIELD(f, f32, 0xCA4) = 0.0f;
            FT_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
        }
    }
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    func_001E5040(f);
    if (v == 0) {
        FT_FIELD(f, s16, 0xCB4) = 1;
    } else {
        FT_FIELD(f, s16, 0xCB4) = 0;
    }
    FT_FIELD(f, s8, 0x2004) = 1;
    FT_FIELD(f, s8, 0x1FFB) = 1;
    if (v != 0xF) {
        FT_FIELD(f, s16, 0xCB6) = 0;
    }
    FT_FIELD(f, s8, 0x2006) = 0;
    D_00468460[v](f);
    func_002CBFF0(1, f);
}
void func_001BD900(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 7;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 7;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(new_var);
  *((s32 *) (new_var + 0xCA4)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCA8)) = 0x3DCCCCCD;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 1;
  *((s16 *) (new_var + 0x181C)) = 0;
  *((s16 *) (new_var + 0xCB4)) = func_001E3D60(*((s32 *) (new_var + 0x17AC)), 120.0f) != 0;
}
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
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E5040(void *);
extern s32 func_001E94C0(void *);
extern s32 func_001C2B10(void *);
extern void func_001E3200(void *);
extern void (*D_00468460[])(void *);
extern void func_002CBFF0(s32, void *);
void func_001BDB20(u8 *arg0)
{
  u8 *new_var;
  s32 r;
  f32 k;
  u8 *q;
  r = -1;
  new_var = arg0;
  k = BW_FIELD(gBattle, f32, 0x88F0) * (*((f32 *) (arg0 + 0xC9C)));
  if ((!((*((u16 *) (arg0 + 0xCB2))) & 0x80)) && ((*((f32 *) (new_var + 0xC60))) <= 10.0f))
  {
    *((u16 *) (new_var + 0xCB2)) = 1;
    if ((*((s8 *) (new_var + 0x2010))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
    }
    if ((*((s8 *) (new_var + 0x2011))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
    }
  }
  else
  {
    func_001ABD30((Fighter *) (new_var + 0x1360));
  }
  Fighter_ResetMotion(new_var, 0);
  if ((*((u16 *) (new_var + 0xCB2))) & 0x80)
  {
    if ((*((s16 *) (new_var + 0x13A4))) > -1)
    {
      r = func_001C2B10(new_var);
      q = new_var + 0x1360;
      if ((((s16 *) (q + 0x64))[(*((s32 *) (q + 0x58))) * 2] >= 0) || (!((*((f32 *) (new_var + 0xCB8))) < (15.0f * k))))
      {
        *((u16 *) (new_var + 0xCB2)) = 0x10;
        if ((*((s8 *) (new_var + 0x2010))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
        }
        if ((*((s8 *) (new_var + 0x2011))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
        }
        *((s8 *) (new_var + 0x1FFD)) = 1;
        func_001E3200(new_var);
      }
    }
    else
    {
      r = func_001E94C0(new_var);
      if ((r != 3) || (!((*((f32 *) (new_var + 0xCB8))) < (15.0f * k))))
      {
        *((u16 *) (new_var + 0xCB2)) = 0x10;
        if ((*((s8 *) (new_var + 0x2010))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
        }
        if ((*((s8 *) (new_var + 0x2011))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
        }
        *((s8 *) (new_var + 0x1FFD)) = 1;
        func_001E3200(new_var);
      }
    }
  }
  if (((*((s32 *) (new_var + 0xC64))) != 0) || (r == 11))
  {
    if (r < 0)
    {
      if ((*((s16 *) (new_var + 0x13A4))) > -1)
      {
        r = func_001C2B10(new_var);
      }
      else
      {
        r = func_001E94C0(new_var);
      }
      if (r == 11)
      {
        r = 3;
      }
    }
    *((s32 *) (new_var + 0x1864)) = 1;
    if ((*((s8 *) (new_var + 0x1FF9))) != 0)
    {
      u8 *p = *((u8 **) (new_var + 0xBB4));
      if ((((*((f32 *) (new_var + 0x44))) - (*((f32 *) (p + 0xC)))) - (*((f32 *) (new_var + 0x1844)))) <= 0.0f)
      {
        *((s8 *) (new_var + 0x1FF9)) = 0;
        *((s32 *) (new_var + 0x1864)) = (*((s32 *) (new_var + 0x1864))) | 8;
      }
    }
    func_001E5040(new_var);
    if (r == 0)
    {
      *((s16 *) (new_var + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (new_var + 0xCB4)) = 0;
    }
    *((s8 *) (new_var + 0x2004)) = 1;
    *((s8 *) (new_var + 0x1FFB)) = 1;
    if (r != 0xF)
    {
      *((s16 *) (new_var + 0xCB6)) = 0;
    }
    *((s8 *) (new_var + 0x2006)) = 0;
    D_00468460[r](new_var);
    func_002CBFF0(1, new_var);
  }
}
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
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E5040(void *);
extern s32 func_001E94C0(void *);
extern s32 func_001C2B10(void *);
extern void func_001E3200(void *);
extern void (*D_00468460[])(void *);
extern void func_002CBFF0(s32, void *);
void func_001BDF80(u8 *arg0)
{
  u8 *new_var;
  s32 r;
  f32 k;
  u8 *q;
  r = -1;
  new_var = arg0;
  k = BW_FIELD(gBattle, f32, 0x88F0) * (*((f32 *) (arg0 + 0xC9C)));
  if ((!((*((u16 *) (arg0 + 0xCB2))) & 0x40)) && ((*((f32 *) (new_var + 0xC60))) <= 10.0f))
  {
    *((u16 *) (new_var + 0xCB2)) = 1;
    if ((*((s8 *) (new_var + 0x2010))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
    }
    if ((*((s8 *) (new_var + 0x2011))) != 0)
    {
      *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
    }
  }
  else
  {
    func_001ABD30((Fighter *) (new_var + 0x1360));
  }
  Fighter_ResetMotion(new_var, 0);
  if ((*((u16 *) (new_var + 0xCB2))) & 0x40)
  {
    if ((*((s16 *) (new_var + 0x13A4))) > -1)
    {
      r = func_001C2B10(new_var);
      q = new_var + 0x1360;
      if ((((s16 *) (q + 0x64))[(*((s32 *) (q + 0x58))) * 2] <= 0) || (!((*((f32 *) (new_var + 0xCB8))) < (15.0f * k))))
      {
        *((u16 *) (new_var + 0xCB2)) = 8;
        if ((*((s8 *) (new_var + 0x2010))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
        }
        if ((*((s8 *) (new_var + 0x2011))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
        }
        *((s8 *) (new_var + 0x1FFD)) = 1;
      }
    }
    else
    {
      r = func_001E94C0(new_var);
      if ((r != 2) || (!((*((f32 *) (new_var + 0xCB8))) < (15.0f * k))))
      {
        *((u16 *) (new_var + 0xCB2)) = 8;
        if ((*((s8 *) (new_var + 0x2010))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
        }
        if ((*((s8 *) (new_var + 0x2011))) != 0)
        {
          *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
        }
        *((s8 *) (new_var + 0x1FFD)) = 1;
      }
    }
  }
  if (((*((s32 *) (new_var + 0xC64))) != 0) || (r == 9))
  {
    if (r < 0)
    {
      if ((*((s16 *) (new_var + 0x13A4))) > -1)
      {
        r = func_001C2B10(new_var);
      }
      else
      {
        r = func_001E94C0(new_var);
      }
      if (r == 9)
      {
        r = 2;
      }
    }
    *((s32 *) (new_var + 0x1864)) = 1;
    if ((*((s8 *) (new_var + 0x1FF9))) != 0)
    {
      u8 *p = *((u8 **) (new_var + 0xBB4));
      if ((((*((f32 *) (new_var + 0x44))) - (*((f32 *) (p + 0xC)))) - (*((f32 *) (new_var + 0x1844)))) <= 0.0f)
      {
        *((s8 *) (new_var + 0x1FF9)) = 0;
        *((s32 *) (new_var + 0x1864)) = (*((s32 *) (new_var + 0x1864))) | 8;
      }
    }
    func_001E5040(new_var);
    if (r == 0)
    {
      *((s16 *) (new_var + 0xCB4)) = 1;
    }
    else
    {
      *((s16 *) (new_var + 0xCB4)) = 0;
    }
    *((s8 *) (new_var + 0x2004)) = 1;
    *((s8 *) (new_var + 0x1FFB)) = 1;
    if (r != 0xF)
    {
      *((s16 *) (new_var + 0xCB6)) = 0;
    }
    *((s8 *) (new_var + 0x2006)) = 0;
    D_00468460[r](new_var);
    func_002CBFF0(1, new_var);
  }
}
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
void func_001BE3B0(Fighter *f) {
    f32 a;
    s32 v;

    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterV *)f)->unk1864 = 1;
        if (FT_FIELD(f, s8, 0x1FF9) != 0) {
            a = FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC);
            if (a - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                ((FighterV *)f)->unk1FF9 = 0;
                v = FT_FIELD(f, s32, 0x1864);
                FT_FIELD(f, s32, 0x1864) = v | 8;
                FT_FIELD(f, f32, 0xCA4) = 0.0f;
                FT_FIELD(f, s32, 0xCA8) = 0x3DCCCCCD;
            }
        }
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            v = func_001C2B10(f);
        } else {
            v = func_001E94C0(f);
        }
        func_001E5040(f);
        if (v == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (v != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        ((void (*)(Fighter *))D_00468460[v])(f);
        func_002CBFF0(1, f);
    }
}
void func_001BE4F0(u8 *arg0)
{
  u8 *new_var;
  s16 temp_v0;
  u8 *new_var2;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var2 = (u8 *) arg0;
  *((s16 *) (new_var2 + 0xCAC)) = 0xE;
  if ((*((s16 *) (new_var2 + 0xCAE))) == (*((s16 *) (new_var2 + 0xCAC))))
  {
    *((s16 *) (new_var2 + 0xCB0)) = (s16) ((*((s16 *) (new_var2 + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var2 + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var2 + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var2 + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var2 + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var2 + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var2 + 0xCB2)) = 8U;
      break;

    case 6:
 *((u16 *) (new_var2 + 0xCB2)) = 0x10U; do { } while (0);
      break;

    case 7:

    case 8:
      *((u16 *) (new_var2 + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var2 + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var2 + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var2 + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var2 + 0x2010))) != 0)
  {
    *((u16 *) (new_var2 + 0xCB2)) = (u16) ((*((u16 *) (new_var2 + 0xCB2))) | 0x8000);
  }
  new_var = arg0;
  if ((*((s8 *) (new_var2 + 0x2011))) != 0)
  {
    *((u16 *) (new_var2 + 0xCB2)) = (u16) ((*((u16 *) (new_var2 + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var2 + 0xB70)) = 0x11;
  if ((*((s8 *) (new_var2 + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var2 + 0xB70)) = (s32) ((*((s32 *) (new_var2 + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var2 + 0xCB8)) = 0;
  *((s8 *) (new_var2 + 0x2003)) = 0;
  *((s8 *) (((u8 *) new_var) + 0x1FFD)) = 1;
  *((s16 *) (new_var2 + 0x181C)) = 0;
  *((s8 *) (new_var2 + 0x2004)) = 0;
}

void func_001BE670(Fighter *f) {
    func_001E4E20(f, 0);
    if (FIGHTER_FIELD(f, s8, 0x1FF9) == 0) {
        FIGHTER_FIELD(f, f32, 0x44) = FIGHTER_FIELD(f, f32, 0x1844);
    }
    FIGHTER_FIELD(f, s32, 0x17BC) = 0;
}
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
#if 0
// differs: size 0x200 against 0x210: the fighter goes to s2 (the original keeps it in s1, frame 0x30 against 0x40); the gBattle product and the float loads are ordered differently; 3 declaration and argument variants tried
void func_001BE6C0(Fighter *f) {
    s32 v = -1;
    f32 t;
    f32 sel;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            FT_FIELD(f, s8, 0x1FF9) = 0;
            FT_FIELD(f, s32, 0xB70) = 0x10;
            func_001E3460(f);
            FT_FIELD(f, s32, 0x1864) = 8;
            func_001E5040(f);
            FT_FIELD(f, f32, 0xCA4) = 0.0f;
            FT_FIELD(f, s32, 0xCA8) = 0x3D75C28F;
        }
    }
    if (FT_FIELD(f, s16, 0xCB4) == 0) {
        if (FT_FIELD(f, s32, 0xC64) != 0) {
            FT_FIELD(f, s32, 0xB70) = 0x10;
            if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
            }
            func_001E3460(f);
            FT_FIELD(f, s16, 0xCB4) = 1;
        }
    } else {
        {
            f32 k = -15.0f * gBattle->unk88F0;
            func_001DFE60(f, 0, k * FT_FIELD(f, f32, 0xC9C));
        }
        if (FT_FIELD(f, f32, 0x1A40) <= 0.0f) {
            sel = FT_FIELD(f, f32, 0x17D0);
        } else {
            sel = FT_FIELD(f, f32, 0x17D4);
        }
        if (sel < FT_FIELD(f, f32, 0x17D4)) {
            if (FT_FIELD(f, s16, 0x13A4) > -1) {
                v = func_001C2B10(f);
            } else {
                v = func_001E94C0(f);
            }
        } else {
            v = 0xE;
        }
        if (v >= 0) {
            if (v != FT_FIELD(f, s16, 0xCAC)) {
                FT_FIELD(f, s16, 0xCB4) = 0;
                FT_FIELD(f, s32, 0x1774) = 0;
                FT_FIELD(f, s8, 0x2004) = 1;
                FT_FIELD(f, s8, 0x1FFB) = 1;
                if (v != 0xF) {
                    FT_FIELD(f, s16, 0xCB6) = 0;
                }
                FT_FIELD(f, s8, 0x2006) = 0;
                D_00468460[v](f);
                func_002CBFF0(1, f);
                func_001ABD30((Fighter *)((u8 *)f + 0x1360));
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BE6C0);
s32 PlySe_Start(void *);
void func_001BE8D0(u8 *arg0)
{
  s16 temp_v0;
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 4;
  new_var = (u8 *) arg0;
  if ((*((s16 *) (new_var + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) (new_var + 0xCAC));
  switch (temp_v0)
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s16 *) (new_var + 0xCB4)) = 0;
  *((s32 *) (new_var + 0xB70)) = 0xF;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) (new_var + 0xCA8)) = 0;
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 1;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  PlySe_Start(arg0);
}

void func_001BEA60(Fighter *f) {
    f32 vec[4];
    f32 k;
    f32 t;
    k = gBattle->unk88F0 * FT_FIELD(f, f32, 0xC9C);
    func_001C37F0(f, (void *)vec);
    t = FT_FIELD(f, f32, 0xB64);
    if (0.0f == t) {
        t = 0.1f;
    }
    vec[1] = vec[1] * 0.5f;
    func_00146ED0(vec, vec, t * k);
    __asm__ volatile(
        "lqc2 $vf1, 0x0(%0)
"
        "lqc2 $vf2, 0x0(%1)
"
        "vsub.xyz $vf1, $vf1, $vf2
"
        "sqc2 $vf1, 0x0(%0)
"
        :
        : "r"((u8 *)f + 0x40), "r"(vec)
        : "memory");
    func_001E4FA0(f, -1);
    func_001E4E20(f, 0);
    if (((FighterMain2 *)f)->unk1FF9 == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
}
void func_001BEB50(Fighter *f) {
    f32 a;
    s32 v;

    Fighter_ResetMotion(f, 0);
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
void func_001BED60(Fighter *f) {
    f32 vec[4];
    f32 k;
    f32 s;
    k = gBattle->unk88F0 * FT_FIELD(f, f32, 0xC9C);
    func_001C37F0(f, (void *)vec);
    s = FT_FIELD(f, f32, 0xB64);
    if (0.0f == s) {
        s = 0.4f;
    }
    vec[0] = vec[0] * 0.4f;
    vec[2] = vec[2] * 0.4f;
    func_00146ED0(vec, vec, s * k);
    __asm__ volatile(
        "lqc2 $vf1, 0x0(%0)\n"
        "lqc2 $vf2, 0x0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0x0(%0)\n"
        :
        : "r"((u8 *)f + 0x40), "r"(vec)
        : "memory");
    func_001E4FA0(f, -1);
    func_001E4E20(f, 0);
    if (((FighterMain2 *)f)->unk1FF9 == 0) {
        FT_FIELD(f, f32, 0x44) = FT_FIELD(f, f32, 0x1844);
    }
    FT_FIELD(f, s32, 0x17BC) = 0x3DCCCCCD;
}
#if 0
// differs: frame 0x40 against 0x20: the other fighter (0x1354) pointer is kept in s2 across the 3D60 call, the original re-reads it; 3 variants tried, 109 of 140 differ
void func_001BEE60(Fighter *f) {
    s32 v;
    f32 t;
    f32 dx;
    f32 dy;
    f32 dz;
    Fighter_ResetMotion(f, 0);
    if (((FighterMain2 *)f)->unk1FF9 != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            ((FighterMain2 *)f)->unk1FF9 = 0;
            FT_FIELD(f, s32, 0xB70) = 3;
            func_001E3460(f);
            FT_FIELD(f, s32, 0x1864) = 8;
            func_001E5040(f);
            FT_FIELD(f, f32, 0xCA4) = 0.0f;
            FT_FIELD(f, s32, 0xCA8) = 0x3CA3D70A;
        }
    } else {
        if (FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), s8, 0x1FF9) != 0) {
            t = (FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), f32, 0x44) - FT_FIELD(FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), void *, 0xBB4), f32, 0xC)) - FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), f32, 0x1844);
            if (!(t <= 0.0f)) {
                if (func_001E3D60(FT_FIELD(f, s32, 0x17AC), 180.0f) == 0) {
                    dx = FT_FIELD(f, f32, 0x64) - FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), f32, 0x64);
                    dz = FT_FIELD(f, f32, 0x60) - FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), f32, 0x60);
                    dy = FT_FIELD(f, f32, 0x68) - FT_FIELD(FT_FIELD(f, Fighter *, 0x1354), f32, 0x68);
                    if (!(dx * dx <= 4.0f)) {
                        if ((dz * dz + dy * dy) / (dx * dx) < 5.0f) {
                            ((FighterMain2 *)f)->unk1FF9 = 1;
                            FT_FIELD(f, s32, 0xB70) = 3;
                            if (FT_FIELD(f, s8, 0x1FF9) != 0) {
                                FT_FIELD(f, s32, 0xB70) = FT_FIELD(f, s32, 0xB70) + 0x100;
                            }
                            func_001E3460(f);
                            FT_FIELD(f, s32, 0x1864) = 4;
                            func_001E5040(f);
                            FT_FIELD(f, f32, 0xCA4) = 0.0f;
                            FT_FIELD(f, s32, 0xCA8) = 0x3C23D70A;
                        }
                    }
                }
            }
        }
    }
    if (FT_FIELD(f, s16, 0x13A4) > -1) {
        v = func_001C2B10(f);
    } else {
        v = func_001E94C0(f);
    }
    if (v >= 0) {
        if (v != FT_FIELD(f, s16, 0xCAC)) {
            FT_FIELD(f, s16, 0xCB4) = 0;
            FT_FIELD(f, s8, 0x2004) = 1;
            FT_FIELD(f, s8, 0x1FFB) = 1;
            if (v != 0xF) {
                FT_FIELD(f, s16, 0xCB6) = 0;
            }
            FT_FIELD(f, s8, 0x2006) = 0;
            D_00468460[v](f);
            func_002CBFF0(1, f);
        }
    }
}
#endif
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
void func_001BF230(Fighter *f) {
    s32 v;
    f32 t;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            ((FighterMain2 *)f)->unk1FF9 = 0;
            FT_FIELD(f, s32, 0xB70) = 2;
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
    D_00468460[v](f);
    func_002CBFF0(1, f);
}
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
void func_001BF450(Fighter *f) {
    s32 v;
    f32 t;
    FT_FIELD(f, s8, 0x2003) = 1;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s8, 0x1FF9) != 0) {
        t = (FT_FIELD(f, f32, 0x44) - FT_FIELD(FT_FIELD(f, void *, 0xBB4), f32, 0xC)) - FT_FIELD(f, f32, 0x1844);
        if (t <= 0.0f) {
            ((FighterMain2 *)f)->unk1FF9 = 0;
            FT_FIELD(f, s32, 0xB70) = 0;
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
    D_00468460[v](f);
    func_002CBFF0(1, f);
}
void func_001BF570(u8 *arg0)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 0xCAE)) = (s16) (*((s16 *) (((u8 *) arg0) + 0xCAC)));
  new_var = (u8 *) arg0;
  *((s16 *) (((u8 *) arg0) + 0xCAC)) = 0;
  if ((*((s16 *) (((u8 *) arg0) + 0xCAE))) == (*((s16 *) (new_var + 0xCAC))))
  {
    *((s16 *) (((u8 *) arg0) + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  switch (*((s16 *) (new_var + 0xCAC)))
  {
    case 0:
      *((u16 *) (new_var + 0xCB2)) = 1U;
      break;
    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;
    case 4:
      *((u16 *) (new_var + 0xCB2)) = 4U;
      break;
    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;
    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;
    case 7:
    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;
    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;
    case 11:
      *((u16 *) (new_var + 0xCB2)) = 0x80U;
      break;
    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;
  }
  if ((*((s8 *) (new_var + 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) (new_var + 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) (new_var + 0xB70)) = 0;
  if ((*((s8 *) (new_var + 0x1FF9))) != 0)
  {
    *((s32 *) (new_var + 0xB70)) = (s32) ((*((s32 *) (new_var + 0xB70))) + 0x100);
  }
  func_001E3460(arg0);
  if ((*((s16 *) (new_var + 0xCB4))) == 0)
  {
    *((s32 *) (new_var + 0xCA4)) = 0x3BA3D70A;
    *((s32 *) (new_var + 0xCA8)) = 0x3CF5C28F;
  }
  else
  {
    *((s32 *) (new_var + 0xCA4)) = 0x3BA3D70A;
    *((s32 *) (new_var + 0xCA8)) = 0x3C23D70A;
  }
  *((s32 *) (new_var + 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) (new_var + 0x1FFD)) = 0;
  *((s16 *) (new_var + 0x181C)) = 0;
  func_001DD680(arg0, 0);
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BF730);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001BFD60);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C0130);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C09A0);
s32 func_001C21C0(Fighter *f) {
    s16 *t;
    s32 idx;
    s32 sum;
    s32 n;
    s32 k;
    s32 k2;
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
    sum = (sum < 0) ? -sum : sum;
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
    v = (v < 0) ? -v : v;
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
    v = (v < 0) ? -v : v;
    sum += v;
    if (n < sum) {
        return 0;
    }
    return 1;
}
s32 func_001C2340(Fighter *f) {
    s16 *t;
    s32 last;
    s32 idx;
    s32 idx2;
    s32 b;
    s32 c;
    s32 f414;
    t = (s16 *)((u8 *)f + 0x64);
    if (FT_FIELD(f, s32, 0x50) <= 0) {
        return 0;
    }
    last = FT_FIELD(f, s32, 0x58);
    if (t[last * 2] != -1) {
        return 0;
    }
    b = t[last * 2 + 1];
    if (b > 0) {
        return 0;
    }
    f414 = FT_FIELD(f, s32, 0x414);
    if (b < -(f414 + 2)) {
        return 0;
    }
    b = (b < 0) ? -b : b;
    idx = (last - 1) & 0x1F;
    if (t[idx * 2] != 0) {
        return 0;
    }
    c = t[idx * 2 + 1];
    if (c > 0) {
        return 0;
    }
    if (c < -9) {
        return 0;
    }
    c = (c < 0) ? -c : c;
    b = b + c;
    idx2 = (idx - 1) & 0x1F;
    if (t[idx2 * 2] != -1) {
        return 0;
    }
    c = t[idx2 * 2 + 1];
    if (c > 0) {
        return 0;
    }
    if (c < -9) {
        return 0;
    }
    c = (c < 0) ? -c : c;
    b = b + c;
    if (f414 < b) {
        return 0;
    }
    return 1;
}
#if 0
// differs: size 0x1A8 against 0x1E0: the table bases are computed in another order (the 0x64 base is taken first, the original loads the index and the 0x41C word before it); ternary absolute values and the index-first order were tried, as in func_001C21C0 which matched
s32 func_001C24C0(Fighter *a0) {
    s32 idx;
    s16 *p2;
    s32 v0;
    s32 a1;
    s32 t8;
    s16 *p3;
    s32 a3;
    s32 a5;
    s32 a6;
    s16 *p4;
    u8 *b64;
    u8 *b164;

    idx = FT_FIELD(a0, s32, 0x60);
    b164 = (u8 *)a0 + 0x164;
    b64 = (u8 *)a0 + 0x64;
    p2 = (s16 *)(b164 + (idx << 2));
    v0 = p2[0];
    a1 = FT_FIELD(a0, s32, 0x41C);
    if (a1 != 0) {
        if (v0 == a1) {
            return 1;
        }
        FT_FIELD(a0, s32, 0x41C) = 0;
        return 0;
    }
    t8 = FT_FIELD(a0, s32, 0x58);
    p3 = (s16 *)(b64 + (t8 << 2));
    if (p3[0] != 0) {
        if (p3[0] != -1) {
            return 0;
        }
        a3 = p3[1];
        if (a3 < 14) {
            return 0;
        }
    } else {
        if (v0 == 0) {
            return 0;
        }
        a3 = p2[1];
        if (a3 < 14) {
            return 0;
        }
    }
    a3 = (a3 < 0) ? -a3 : a3;
    t8 = (t8 - 1) & 0x1F;
    p4 = (s16 *)(b64 + (t8 << 2));
    if (p4[0] != 0) {
        return 0;
    }
    a6 = p4[1];
    a5 = (a6 < 0) ? -a6 : a6;
    if (a5 >= 9) {
        return 0;
    }
    a6 = (a6 < 0) ? -a6 : a6;
    a3 = a3 + a6;
    t8 = (t8 - 1) & 0x1F;
    p4 = (s16 *)(b64 + (t8 << 2));
    if (p4[0] != -1) {
        return 0;
    }
    a5 = p4[1];
    a6 = (a5 < 0) ? -a5 : a5;
    if (a6 >= 9) {
        return 0;
    }
    a5 = (a5 < 0) ? -a5 : a5;
    a3 = a3 + a5;
    if (FT_FIELD(a0, s32, 0x410) < a3) {
        return 0;
    }
    FT_FIELD(a0, s32, 0x41C) = v0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C24C0);
/* A pair of 16-bit values of a 32-entry table (inferred from func_001C27E0). */
typedef struct TblPair {
    s16 a;
    s16 b;
} TblPair;

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
    sum = (sum < 0) ? -sum : sum;
    idx = (last - 1) & 0x1F;
    if (t[idx].a != 0) {
        return 0;
    }
    b = t[idx].b;
    b = (b < 0) ? -b : b;
    if (b >= 9) {
        return 0;
    }
    b = t[idx].b;
    b = (b < 0) ? -b : b;
    sum += b;
    idx2 = (idx - 1) & 0x1F;
    if (t[idx2].a != 1) {
        return 0;
    }
    b = t[idx2].b;
    b = (b < 0) ? -b : b;
    if (b >= 9) {
        return 0;
    }
    b = t[idx2].b;
    b = (b < 0) ? -b : b;
    sum += b;
    if (FIGHTER_FIELD(p, s32, 0x410) < sum) {
        return 0;
    }
    return 1;
}
// differs: the early returns jump past the final jump (the original's epilogue is two instructions later); the ternary form of the absolute values did not change it

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
extern s32 func_001AA9D0(s32);
extern s32 func_001E9250(void *);
extern f32 func_0025B290(s32);
extern void func_0025B2E0(s32, f32);
extern s32 func_001D99C0(void *, s32);
extern void func_001D98A0(void *, s32, s32);
extern s32 func_0012EAE0(s32);
/* The battle work area as far as func_001C3500 reads it: numFighters (0x88D8), a float (0x88F0), the fighter table (0x8934). */
typedef struct BattleView {
    u8 unk0000[0x88D8];
    s32 numFighters;
    u8 unk88DC[0x88F0 - 0x88DC];
    f32 f88F0;
    u8 unk88F4[0x8934 - 0x88F4];
    void *fighter[2];
} BattleView;
#if 0
// differs: 0x2E0 against 0x2F0 bytes: the fighter pointers and the sign/offset values end in other registers (// against //), the clamp loads 1.0 before the first branch in the original, and the sum of the two loads (0x1A36) is added in the other order
s32 func_001C3500(void) {
    BattleView *bw = (BattleView *)gBattle;
    s32 s3;
    s32 i;
    Fighter *f;
    void *f0p;
    void *f1p;
    s32 d;
    s32 e;
    s32 sg;
    s32 sg2;
    s32 t;
    f32 x;
    u8 *pp;
    i = 0;
    if (0 < bw->numFighters) {
        pp = (u8 *)bw;
        do {
            f = *(void **)(pp + 0x8934);
            if (FT_FIELD(f, s16, 0x13A4) > -1) {
                s3 = func_001AA9D0(FT_FIELD(f, s16, 0x13A4));
            } else {
                s3 = func_001E9250(f);
            }
            FT_FIELD(f, s16, 0x1A36) = (s16)s3 + FT_FIELD(f, s16, 0x1A36);
            x = func_0025B290(FT_FIELD(f, s32, 0x1350));
            if (s3 > 0) {
                x = x + 0.05f * bw->f88F0 * (f32)s3;
            } else {
                x = x - 0.01f * bw->f88F0;
            }
            if (x > 2.0f) {
                x = 2.0f;
            } else if (x < 1.0f) {
                x = 1.0f;
            }
            func_0025B2E0(((Fighter *)f)->unk1350, x);
            func_001D9900(f, 0xE, s3);
            func_001D98A0(f, 0xF, func_001D99C0(f, 0xE));
            i++;
            pp += 4;
        } while (i < bw->numFighters);
    }
    d = FT_FIELD(bw->fighter[0], s16, 0x1A38) - FT_FIELD(bw->fighter[1], s16, 0x1A38);
    if (d < 0x29) {
        if (d < -0x28) {
            sg = -1;
        } else {
            sg = 0;
        }
    } else {
        sg = 1;
    }
    sg2 = 1;
    e = FT_FIELD(bw->fighter[0], s16, 0x1A36) - FT_FIELD(bw->fighter[1], s16, 0x1A36);
    if (e < 9) {
        if (e < -8) {
            sg2 = -1;
        } else {
            sg2 = 0;
        }
    }
    t = sg2 + sg;
    if (t > 0) {
        FT_FIELD(bw->fighter[0], s16, 0x1A32) = 0;
        FT_FIELD(bw->fighter[1], s16, 0x1A32) = -t;
        return 0;
    }
    if (t < 0) {
        FT_FIELD(bw->fighter[0], s16, 0x1A32) = t;
        FT_FIELD(bw->fighter[1], s16, 0x1A32) = 0;
        return 1;
    }
    if (func_0012EAE0(0x20) & 1) {
        FT_FIELD(bw->fighter[0], s16, 0x1A32) = 0;
        FT_FIELD(bw->fighter[1], s16, 0x1A32) = -1;
    } else {
        FT_FIELD(bw->fighter[0], s16, 0x1A32) = -1;
        FT_FIELD(bw->fighter[1], s16, 0x1A32) = 0;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3500);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C37F0);
static inline s32 cvt_w_s_asm(f32 x) {
    f32 t;
    s32 r;
    __asm__ volatile("cvt.w.s %0, %1" : "=f"(t) : "f"(x));
    __asm__ volatile("mfc1 %0, %1" : "=r"(r) : "f"(t));
    return r;
}
extern s32 *func_0021C660(s32 a);
extern s32 func_001DF8F0(s32 a, s32 b);
extern s32 D_00495B60[];
#if 0
// differs: 126 of 145 differ: the inline cvt.w.s helper emits the same opcode (the first cvt matches), but the original keeps the call result in v0 for the stores and loads the 0.0 constant before the field loads; sub/out declaration orders tried
void func_001C3AF0(Fighter *f) {
    u8 *sub;
    u8 *o;
    u8 *q;
    f32 fl;
    s32 s1;
    s32 s0v;
    void *ptr;
    sub = (u8 *)f + 0x1360;
    o = (u8 *)func_0021C660(FT_FIELD(f, s32, 0x1350));
    FT_FIELD(o, s32, 0x4) = cvt_w_s_asm(FT_FIELD(f, f32, 0x17C4));
    FT_FIELD(o, s32, 0x8) = cvt_w_s_asm(FT_FIELD(f, f32, 0x17C0));
    FT_FIELD(o, s32, 0xC) = cvt_w_s_asm(FT_FIELD(f, f32, 0x17D4));
    if (FT_FIELD(f, f32, 0x1A40) <= 0.0f) {
        fl = FT_FIELD(f, f32, 0x17D0);
    } else {
        fl = FT_FIELD(f, f32, 0x17D4);
    }
    FT_FIELD(o, s32, 0x10) = cvt_w_s_asm(fl);
    if (FT_FIELD(FT_FIELD(f, void *, 0xBB0), s16, 0x0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
        fl = 0.0f;
    } else {
        fl = (f32)(FT_FIELD(FT_FIELD(f, u8 *, 0x1CF8) + FT_FIELD(f, s32, 0xBA4) * 20, s8, 0xDD) * 1000);
    }
    FT_FIELD(o, s32, 0x14) = cvt_w_s_asm(fl);
    FT_FIELD(o, s32, 0x18) = FT_FIELD(f, s32, 0x17EC);
    FT_FIELD(o, s16, 0x3E) = FT_FIELD(sub, s16, 0x44);
    FT_FIELD(o, s16, 0x40) = FT_FIELD(FT_FIELD(f, void *, 0x1CF4), s16, 0x1E) - FT_FIELD(f, s32, 0x1894);
    FT_FIELD(o, s16, 0x42) = D_00495B60[FT_FIELD(f, s32, 0x1350)];
    if (FT_FIELD(f, s32, 0x1A48) < 0) {
        FT_FIELD(o, s32, 0xE8) = 0;
    } else {
        FT_FIELD(o, s32, 0xE8) = 1;
        FT_FIELD(o, f32, 0xEC) = FT_FIELD(f, f32, 0x1A40);
        FT_FIELD(o, s32, 0xF0) = 0x44E10000;
    }
    s1 = FT_FIELD(sub, s32, 0x400);
    s0v = FT_FIELD(sub, s32, 0x3F8);
    memset(o + 0x46, 0, 0x40);
    memset(o + 0x86, 0, 0x40);
    if (s1 != s0v) {
        q = o;
        do {
            ptr = FT_FIELD(sub, void *, s1 * 16 + 0x204);
            if (ptr == 0) {
                FT_FIELD(q, s16, 0x46) = 0;
                FT_FIELD(q, s16, 0x86) = 0;
            } else {
                FT_FIELD(q, s16, 0x46) = FT_FIELD(ptr, s16, 0x0);
                FT_FIELD(q, s16, 0x86) = FT_FIELD(ptr, s16, 0x2);
            }
            s1 = (s1 + 1) & 0x1F;
            q += 2;
        } while (s1 != s0v);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C3AF0);
extern void func_001B0B10(void);
extern void func_001B0810(void);

s32 func_001C3D10(Fighter *f) {
    s32 buf[6];
    u8 *gb = (u8 *)gBattle;

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
extern void *func_001EA230();
extern f32 func_00146E60(void *a, void *b);
extern s32 func_001E35A0(void *, void *);
typedef s32 (*CollFunc)(s32, s32, s32);
typedef struct CollObj {
    u8 unk00[0x20];
    f32 f20;
    u8 unk24[0x4];
    CollFunc fn28;
    s32 arg2C;
    u8 unk30[0x5];
    s8 t35;
    s16 s36;
    s32 flags38;
    struct CollObj *next3C;
} CollObj;
void func_001C3E10(void) {
    CollObj *a;
    CollObj *b;
    s32 s2;
    s32 s1;
    s32 s0;
    s32 code;
    s32 arg2;
    s32 r;
    s32 fl;
    f32 d;
    f32 t;
    a = (CollObj *)func_001EA230();
    if (a == 0) {
        return;
    }
    do {
        fl = a->flags38;
        if (!(fl & 2) && !(fl & 0x40)) {
            b = a->next3C;
            if (b != 0) {
                do {
                    fl = b->flags38;
                    if (!(fl & 2) && !(fl & 0x40) && a->t35 != b->t35) {
                        d = func_00146E60(a, b);
                        t = a->f20 + b->f20;
                        if (d < t * t) {
                            s2 = a->s36;
                            s1 = b->s36;
                            s0 = func_001E35A0(a, b);
                            if (a->fn28 != 0) {
                                arg2 = (s16)s1;
                                code = 1;
                                if (s0 != 0) {
                                    code = 5;
                                    arg2 = a->arg2C;
                                } else {
                                    if ((s16)s1 < (s16)s2) {
                                        code = 2;
                                    } else if ((s16)s2 < (s16)s1) {
                                        code = 3;
                                    }
                                }
                                r = a->fn28(a->arg2C, code, arg2);
                                if (r) {
                                    a->flags38 = a->flags38 | 2;
                                }
                            }
                            if (b->fn28 != 0) {
                                arg2 = (s16)s2;
                                code = 1;
                                if (s0 != 0) {
                                    code = 5;
                                    arg2 = b->arg2C;
                                } else {
                                    if ((s16)s2 < (s16)s1) {
                                        code = 2;
                                    } else if ((s16)s1 < (s16)s2) {
                                        code = 3;
                                    }
                                }
                                r = b->fn28(b->arg2C, code, arg2);
                                if (r) {
                                    b->flags38 = b->flags38 | 2;
                                }
                            }
                        }
                    }
                    b = b->next3C;
                } while (b != 0);
            }
        }
        a = a->next3C;
    } while (a != 0);
}
extern s32 func_001DFA90(Fighter *c, s32 idx);
typedef struct CollEnt {
    u8 unk00[0x20];
    u8 *obj20;
    u8 unk24[0x8];
    struct CollEnt *next2C;
} CollEnt;
/* Fighter fields for direct displacement access (no address CSE across calls). */
typedef struct FighterF {
    u8 u0000[0x1350];
    s32 side1350;
    u8 *other1354;
    u8 u1358[0x1A58 - 0x1358];
    s16 v1A58;
    u8 u1A5A[0x2003 - 0x1A5A];
    s8 v2003;
    u8 u2004[0x200E - 0x2004];
    s8 v200E;
} FighterF;
// differs: 81 of 145 (frame and loop structure match; the declaration order of the locals changes nothing, 720 orders tried). Address-register CSE of the fighter fields is avoided with FighterF.
#if 0
void func_001C4000(Fighter *f) {
    FighterF *ff = (FighterF *)f;
    void *gb = gBattle;
    CollObj *p;
    CollEnt *s3;
    u8 *a;
    u8 *cur;
    s32 idx;
    f32 k;
    f32 dd;
    f32 t;

    p = (CollObj *)func_001EA230(f);
    a = (u8 *)f + 0x920;
    if (BW_FIELD(gb, s32, 0x88F8) == 4 || BW_FIELD(gb, s32, 0x88F8) == 5) {
        s3 = FT_FIELD(a, CollEnt *, 0x1A0);
        ff->v200E = -1;
        if (FT_FIELD(a, s8, 0x1AC) != 0 && s3 != 0 && p != 0) {
            idx = func_001DFA90(f, ff->v1A58);
            while (s3 != 0) {
                cur = (u8 *)s3->obj20 + 4;
                if ((FT_FIELD(cur, u16, 4) & 8) == 0) {
                    s3 = s3->next2C;
                    continue;
                }
                ff->v200E = FT_FIELD(cur, u16, 6);
                ff->v2003 = 1;
                func_001ABCC0((Fighter *)(ff->other1354 + 0x1360));
                if (FT_FIELD(cur, u8, 8) == 0) {
                    k = 2.0f;
                } else {
                    k = 0.1f * (f32)(u32)FT_FIELD(cur, u8, 8);
                }
                while (p != 0) {
                    if (FT_FIELD(p, s32, 0x24) == 2 && idx < 2) {
                        p = p->next3C;
                        continue;
                    }
                    if ((p->flags38 & 6) != 0) {
                        p = p->next3C;
                        continue;
                    }
                    if (p->t35 == ff->side1350) {
                        p = p->next3C;
                        continue;
                    }
                    dd = func_00146E60(s3, p);
                    t = k + p->f20;
                    if (dd <= t * t) {
                        func_001DFE60(f, 4, -((FT_FIELD(p, s32, 0x24) == 1) ? 250.0f : 1000.0f));
                        p->fn28(p->arg2C, 6, 0);
                        p->flags38 = p->flags38 | 2;
                    }
                    p = p->next3C;
                }
                s3 = s3->next2C;
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4000);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4250);
extern void *func_001EA230();
extern f32 func_00146E60(void *a, void *b);
extern void func_001C4250(void *f, void *s, s32 idx);
#if 0
// differs: 55 of 89: the saved registers (ours 6, the original 5): the battle pointer and the copy of the parameter take the registers of the loop pointer; the state value is read through the struct view as before
void func_001C4710(Fighter *a0) {
    f32 d;
    s32 s1;
    CollObj *s3;
    void *s0 = gBattle;
    s32 s2;
    Fighter *ob = a0;
    f32 t;
    s3 = (CollObj *)func_001EA230();
    if (BW_FIELD(s0, s32, 0x88F8) == 4 || BW_FIELD(s0, s32, 0x88F8) == 5) {
        if (BW_FIELD(s0, s8, 0x8AAE) != 0 && BW_FIELD(s0, s8, 0x8AAF) != 0) {
            while (s3 != 0) {
                if (!(s3->flags38 & 2) && s3->t35 != ob->unk1350 && s3->fn28 != 0) {
                    s2 = 0;
                    s1 = 0;
                    s0 = ob;
                    do {
                        if (*(f32 *)((u8 *)FT_FIELD(ob, void *, 0xBB4) + s1 + 0x18) > 0.0f) {
                            d = func_00146E60((u8 *)s0 + 0x650, s3);
                            t = s3->f20 + *(f32 *)((u8 *)FT_FIELD(ob, void *, 0xBB4) + s1 + 0x18);
                            if (d <= t * t) {
                                func_001C4250(ob, s3, s2);
                                return;
                            }
                        }
                        s2++;
                        s1 += 4;
                        s0 = (u8 *)s0 + 0x10;
                    } while (s2 < 0x16);
                }
                s3 = s3->next3C;
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4710);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4870);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C4C10);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C55D0);
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5870);
extern void func_001D83E0(void *f);
extern s8 D_004B4B59[];
/* Calls func_001D83E0 on p, then clears the flags of the opponent of p (0x1354). */
#define BTL_SLOT_TAIL(p)                                              \
    do {                                                              \
        func_001D83E0(p);                                             \
        FT_FIELD(FT_FIELD((p), void *, 0x1354), s8, 0xCBD) = 1;       \
        FT_FIELD(FT_FIELD((p), void *, 0x1354), s8, 0x1FF8) = 0;      \
    } while (0)
#if 0
// differs: 16 of 116 (size matches): the battle pointer is kept in  here (the original has it in , the state value in ); the state value is re-read in the byte test as in the original; the switch (case 0, 1, 2/5) gives the block order; the register of the base pointer does not follow the declaration order
void func_001C5D50(void) {
    void *bw = gBattle;
    s32 st;
    u8 *s0;
    s32 v;
    st = FT_FIELD(bw, s16, 0x7E2);
    s0 = (u8 *)bw + 0x830;
    switch (st) {
    case 0:
        if (FT_FIELD(s0, s8, 0x2015) != 0) {
            s0 = FT_FIELD(s0, u8 *, 0x1358);
        }
        BTL_SLOT_TAIL(s0);
        break;
    case 1:
        v = FT_FIELD(bw, s32, 0x8900);
        if (v < 0) {
            func_001D83E0(FT_FIELD(bw, void *, 0x88DC));
            func_001D83E0(FT_FIELD(gBattle, void *, 0x88E0));
        } else {
            BTL_SLOT_TAIL(s0 + (v * 257) * 32);
        }
        break;
    case 2:
    case 5:
        v = FT_FIELD(bw, s32, 0x8900);
        if (v < 0) {
            func_001D83E0(FT_FIELD(bw, void *, 0x88DC));
            func_001D83E0(FT_FIELD(gBattle, void *, 0x88E0));
        } else {
            if (FT_FIELD(bw, s32, 0x8904) >= 0 || (FT_FIELD(bw, s16, 0x7E2) == 5 && D_004B4B59[0] == 3)) {
                BTL_SLOT_TAIL(s0 + (v * 257) * 32);
            } else {
                void *p = FT_FIELD(s0 + (v * 257) * 32, void *, 0x1354);
                BTL_SLOT_TAIL(p);
            }
        }
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C5D50);
void func_001C5F20(void) {
    s32 one;
    BattleSlots *bw = (BattleSlots *)gBattle;
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
        one = 1;
        FIGHTER_FIELD(f, s16, 0xCB4) = one;
        FIGHTER_FIELD(f, s32, 0xCA4) = 0x3F800000;
        FIGHTER_FIELD(f, s32, 0xCA8) = 0;
        FIGHTER_FIELD(f, s32, 0x18D8) = one;
        func_001D9CA0(f, one);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
// differs: the battle pointer and the fighter pointers are kept in saved registers (frame 0x70 against 0x50, 83 of 85 differ) even with struct access
typedef struct BWY {
    u8 a[0x88D8];
    s32 n88D8;
    u8 b[0x8934 - 0x88DC];
    void *fighter[2];
} BWY;
extern void func_001D8710(void *a);
extern s32 func_001D89E0(void *f, s32 i);
#if 0
void func_001C5FE0(void *a0) {
    BWY *bx;
    s32 i;
    s32 s2v;
    s32 s3v;
    bx = (BWY *)gBattle;
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

    if (0 < ((BattleSlots *)gBattle)->numFighters) {
        i = 0;
        a3 = a0;
        do {
            if (*(s32 *)a0 & (1 << i)) {
                FIGHTER_FIELD(t1, s8, 0x1FF8) = a3[4];
            }
            i++;
            a3++;
            t1 = (Fighter *)((u8 *)t1 + 0x2020);
        } while (i < ((BattleSlots *)gBattle)->numFighters);
    }
}
extern void *BtbBg_GetStageModelF10(void);
extern void func_0029D6C0(void *);
extern void func_001FB750(void *, void *);
extern void func_001FB760(void *, void *);
extern void func_0013B0B0(void *);
extern void *func_001FB7E0(void *);
extern void func_0013B110(s32);
extern void func_001F9DF0(void);
#if 0
// differs: 0x190 against 0x1B0 bytes: one saved register short (the original keeps 8 s-registers: the outer counter in $s7; every permutation of the local declarations gave the 7-register frame, 98 of 135 differ at best)
void func_001C61A0(void) {
    void *bw = gBattle;
    u8 *obj = (u8 *)bw + 0x830;
    s32 outer;
    s32 inner;
    u8 *ft;
    u8 *s4;
    void *s2;
    f32 *pf;
    f32 v;
    if (BW_FIELD(bw, s8, 0x8975) != 1 && BW_FIELD(bw, f32, 0x8930) < 1.0f) {
        if (BW_FIELD(bw, s32, 0x88D8) < 3) {
            func_0029D6C0(BtbBg_GetStageModelF10());
            func_001FB750(bw, (u8 *)bw + 0x60);
            if (0 < BW_FIELD(bw, s32, 0x88D8)) {
                outer = 0;
                do {
                    func_0013B0B0(obj);
                    inner = 0;
                    ft = obj;
                    pf = (f32 *)((u8 *)bw + 0x8930);
                    do {
                        if (FT_FIELD(ft, s8, 0xCBC) == 0) {
                            s4 = ft + 0x650;
                            if (FT_FIELD(s4, s8, 0x66D) == 0 && FT_FIELD(s4, s8, 0x66E) == 0) {
                                s2 = func_001FB7E0(FT_FIELD(s4, void *, 0x530));
                                v = (1.0f - *pf) * func_001B04D0((f32 *)s4);
                                FT_FIELD(s2, f32, 0xEC) = v;
                                if (v > 0.0f) {
                                    func_001FB760(s2, (void *)func_001F9DF0);
                                }
                            }
                        }
                        ft += 0x680;
                        inner++;
                    } while (inner < 2);
                    func_0013B110(1);
                    outer++;
                    obj += 0x2020;
                } while (outer < BW_FIELD(bw, s32, 0x88D8));
            }
        }
        func_0012F2C0();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C61A0);
void func_001C6350(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
    Fighter *f = BTL_CHARA(0);
    s32 i;

    if (bw->unk8975 == 1) {
        return;
    }
    func_0029D860(bw->unk88EC);
    for (i = 0; i < bw->numFighters; i++) {
        func_001C5870(f);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
    func_0012F2C0();
}
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C63F0);
void func_001C6780(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
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
extern char D_00428C60[];
extern void func_001D7A70(void *c);
extern void func_001D79F0(void *c);
extern void func_001DF1F0(void *c);
extern void func_001C7130(void);
#if 0
// differs: 87 of 115 differ: the case chain is laid out as a switch (reversed case order tried) but the saved registers: the original keeps i in s1, the parameter in s0, the gBattle pointer in s3; ours moves them
void func_001C73B0(void *pp) {
    u8 *p;
    s32 i;
    u8 *bb;
    u8 *s2;
    u8 *v;
    s32 code;
    s32 k;
    p = (u8 *)pp;
    bb = (u8 *)gBattle;
    i = 0;
    do {
        code = FT_FIELD(p, s16, 0x20);
        s2 = bb + 0x830;
        v = p + 0x10;
        FT_FIELD(bb, s32, 0x252C) = code;
        FT_FIELD(bb, s32, 0x2530) = FT_FIELD(p, s16, 0x22);
        switch (code) {
        case 0x41:
        case 0x43:
        case 0x45:
        case 0x49:
            if (FT_FIELD(v, s16, 0x14) < 2) {
                FT_FIELD(v, s16, 0x14) = 1;
            }
            if (FT_FIELD(v, s16, 0x16) < 2) {
                FT_FIELD(v, s16, 0x16) = 1;
            }
            break;
        case 0x47:
            if (FT_FIELD(v, s16, 0x14) < 3) {
                FT_FIELD(v, s16, 0x14) = 2;
            }
            if (FT_FIELD(v, s16, 0x16) < 3) {
                FT_FIELD(v, s16, 0x16) = 2;
            }
            break;
        case 0x54:
            FT_FIELD(v, s16, 0x14) = 1;
            FT_FIELD(v, s16, 0x16) = 1;
            FT_FIELD(s2, s32, 0x1CFC) = 0x23;
            break;
        case 0x4E:
            FT_FIELD(v, s16, 0x14) = 2;
            FT_FIELD(v, s16, 0x16) = 2;
            FT_FIELD(s2, s32, 0x1CFC) = 0x23;
            break;
        case 0x4F:
            FT_FIELD(v, s16, 0x14) = 3;
            FT_FIELD(v, s16, 0x16) = 3;
            FT_FIELD(s2, s32, 0x1CFC) = 0x23;
            break;
        }
        FT_FIELD(s2, void *, 0x1CF4) = v;
        k = FT_FIELD(s2, s32, 0x1CFC);
        FT_FIELD(s2, void *, 0x1CF8) = (void *)(D_00428C60 + k * 0x174);
        func_001D7A70(s2);
        func_001D79F0(s2);
        func_001DF1F0(s2);
        i++;
        bb += 0x2020;
        p += 0x50;
    } while (i < 4);
    func_001C7130();
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C73B0);
void BtlChara_Reset(s32 i) {
    func_001DF500((u8 *)gBattle + 0x830 + i * 0x2020);
}
void Fighter_ClearFlags(Fighter *f, s32 bits) {
    *(u16 *)((u8 *)f + 0xCB2) &= (u16)~(bits & 0xFF00);
}
void Fighter_SetFlags(Fighter *f, s32 bits) {
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
s32 BtlChara_GetF2710(s32 i) {
    return *(s32 *)((u8 *)gBattle + i * 0x2020 + 0x2710);
}
s32 BtlChara_GetF270C(s32 i) {
    return *(s32 *)((u8 *)gBattle + i * 0x2020 + 0x270C);
}
void *func_001C7D70(s32 i) {
    return (u8 *)*(void **)((u8 *)gBattle + i * 0x2020 + 0x2528) + 0x24;
}
// differs: 170 diffs, frame 208 vs 128 (nine saved registers against seven): the motion-table reads (a2+0xB88) are hoisted out of the loop and the gBattle and record bases take address registers. Struct views, a local MotHold pointer and a split loop did not remove the extra registers.
#if 0
typedef struct MotHold {
    u8 u0[0xB88];
    u8 *mot;
} MotHold;
typedef struct BwV {
    u8 u0[0x814];
    s32 f814;
    s32 f818;
} BwV;
typedef struct FtV {
    u8 u0[0x1DB8];
    u8 *f1DB8;
    u8 u1[0x1E00 - 0x1DB8 - 4];
    s32 f1E00;
    s32 f1E04;
    s32 f1E08;
    u8 u2[0x1EF0 - 0x1E0C];
    s32 f1EF0;
} FtV;
typedef struct ObjV {
    u8 u0[0x46C];
    s32 a46C;
    s32 a470;
    s32 a474;
    s32 a478;
    s32 a47C;
    s32 a480;
    s32 a484;
    s32 a488;
    s32 a48C;
    s32 a490;
    s32 a494;
    s32 a498;
} ObjV;
typedef struct MotTab {
    u8 u0[0x478];
    s32 m478;
    s32 m47C;
    s32 m480;
    s32 m484;
} MotTab;
void func_001C7D90(Fighter *a0, s32 a1, void *a2) {
    u8 *gb;
    s32 i;
    s32 hi;
    u8 *obj;
    u8 *mo;
    u8 *rec;

    u8 *q;
    s32 mv;

    gb = (u8 *)gBattle;
    rec = (u8 *)a2;
    if (a1 < 0) {
        i = 0;
        hi = 8;
    } else {
        i = a1;
        hi = a1 + 1;
    }
    if (a2 != 0) {
        a0 = (Fighter *)((u8 *)a0 + i * 4);
        if (i < hi) {
            do {
                q = ((FtV *)a0)->f1DB8;
                if (q != 0) {
                    q = FT_FIELD(q, u8 *, 0);
                    if (q != 0) {
                        obj = FT_FIELD(q, u8 *, 0x4C);
                        if (obj != 0) {
                            ((ObjV *)obj)->a474 = 0;
                            ((ObjV *)obj)->a48C = 0;
                            ((ObjV *)obj)->a490 = 0;
                            ((ObjV *)obj)->a494 = 0;
                            ((ObjV *)obj)->a498 = 0;
                            mv = (s32)func_001F9A10();
                            if (mv != 0) {
                                amMotion_BindAnim(obj, 2, mv);
                            }
                            mv = ((MotTab *)((MotHold *)rec)->mot)->m478;
                            if (mv != 0) {
                                amMotion_BindAnim(obj, 8, mv);
                            }
                            mv = ((MotTab *)((MotHold *)rec)->mot)->m47C;
                            if (mv != 0) {
                                amMotion_BindAnim(obj, 9, mv);
                            }
                            mv = ((MotTab *)((MotHold *)rec)->mot)->m480;
                            if (mv != 0) {
                                amMotion_BindAnim(obj, 0xA, mv);
                            }
                            mv = ((MotTab *)((MotHold *)rec)->mot)->m484;
                            if (mv != 0) {
                                amMotion_BindAnim(obj, 0xB, mv);
                            }
                        }
                    }
                }
                i++;
                a0 = (Fighter *)((u8 *)a0 + 4);
            } while (i < hi);
        }
    } else {
        obj = (u8 *)a0 + i * 4;
        rec = (u8 *)a0 + i * 0x1C;
        while (i < hi) {
            q = FT_FIELD(obj, u8 *, 0x1DB8);
            if (q != 0) {
                q = FT_FIELD(q, u8 *, 0);
                if (q != 0) {
                    mo = FT_FIELD(q, u8 *, 0x4C);
                    if (mo != 0) {
                        ((ObjV *)mo)->a46C = 0;
                        ((ObjV *)mo)->a470 = 0;
                        ((ObjV *)mo)->a478 = 0;
                        ((ObjV *)mo)->a47C = 0;
                        ((ObjV *)mo)->a480 = 0;
                        ((ObjV *)mo)->a484 = 0;
                        ((ObjV *)mo)->a488 = 0;
                        amMotion_BindAnim(mo, 0, ((BwV *)gb)->f814);
                        amMotion_BindAnim(mo, 1, ((BwV *)gb)->f818);
                        amMotion_BindAnim(mo, 3, ((FtV *)a0)->f1E00);
                        amMotion_BindAnim(mo, 4, ((FtV *)a0)->f1E04);
                        amMotion_BindAnim(mo, 7, ((FtV *)a0)->f1E08);
                        if (((FtV *)rec)->f1E00 != 0) {
                            amMotion_BindAnim(mo, 5, ((FtV *)rec)->f1E00);
                        }
                        if (((FtV *)rec)->f1E04 != 0) {
                            amMotion_BindAnim(mo, 6, ((FtV *)rec)->f1E04);
                        }
                    }
                }
            }
            q = FT_FIELD(obj, u8 *, 0x1DB8);
            q = FT_FIELD(q, u8 *, 4);
            if (q != 0) {
                q = q + 0x20;
                BtlSlots_Clear(q, 0);
                BtlSlots_Set(q, 0, ((FtV *)a0)->f1EF0);
            }
            i++;
            obj += 4;
            rec += 0x1C;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C7D90);
typedef s32 (*JtblFnA)(void *);
extern JtblFnA jtbl_00468450[];
s32 func_001C8020(s32 idx, void *arg) {
    return jtbl_00468450[idx](arg);
}
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
// differs: the compiler keeps the field addresses in saved registers (frame 0xB0 against 0x50); the original re-reads the fields inside the loop
extern void func_001E7070(void *p, s32 a);
extern void func_001E8290(void *p);
extern void Character_Release(void *p);
#if 0
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
                    Character_Release((void *)FT_FIELD(w, s32, 0x1DB8));
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
void func_001C8210(u8 *arg0, s32 arg1) {
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v0 = (u8 *)(arg1 * 4) + (s32)arg0;
    temp_v1 = *(u8 **)((u8 *)temp_v0 + 0x1DB8);
    if (temp_v1 != NULL) {
        if ((s32)(*(s32 *)((u8 *)arg0 + 0xB7C)) == (s32)(temp_v1)) {
            func_001E7070(arg0 + 0x650, -1);
            func_001E8290(arg0 + 0x650);
        }
        if ((s32)(*(s32 *)((u8 *)arg0 + 0x11FC)) == (s32)(*(u8 **)((u8 *)temp_v0 + 0x1DB8))) {
            func_001E7070(arg0 + 0xCD0, -1);
            func_001E8290(arg0 + 0xCD0);
        }
        Character_Release(*(u8 **)((u8 *)temp_v0 + 0x1DB8));
        *(u8 **)((u8 *)temp_v0 + 0x1DB8) = NULL;
    }
    func_001C82C0((Fighter *)(arg0), (s32)(arg1));
}
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
#if 0
// differs: 86 of 87 differ: the compiler keeps six registers live (frame 0x80 against 0x40); the original keeps only f, the CdSlot pointer and the loop pointer
void func_001C8340(Fighter *f) {
    s32 i;
    s32 *s0;
    void *h;

    {
        CdSlot *a = (CdSlot *)((u8 *)f + 0x1ED8);
        if (a->unk00 != 0) {
            amCdFs_ReleaseCache(a->handle);
            a->handle = 0;
            a->unk00 = 0;
            a->unk04 = 0;
            a->unk08 = 0;
            a->unk0C = 0;
            a->unk10 = 0;
        } else {
            h = a->handle;
            if (h != 0) {
                a->handle = 0;
                amCdFs_Close(h, 0);
            }
        }
    }
    {
        CdSlot *b = (CdSlot *)((u8 *)f + 0x1EF0);
        if (b->unk00 != 0) {
            amCdFs_ReleaseCache(b->handle);
            b->handle = 0;
            b->unk00 = 0;
        } else {
            h = b->handle;
            if (h != 0) {
                b->handle = 0;
                amCdFs_Close(h, 0);
            }
        }
    }
    s0 = (s32 *)f;
    i = 0;
    do {
        if (s0[0x1DB8 / 4] != 0) {
            if (FT_FIELD(f, s32, 0xB7C) == s0[0x1DB8 / 4]) {
                func_001E7070((u8 *)f + 0x650, -1);
                func_001E8290((void *)((s32)f + 0x650));
            }
            if (FT_FIELD(f, s32, 0x11FC) == s0[0x1DB8 / 4]) {
                func_001E7070((u8 *)f + 0xCD0, -1);
                func_001E8290((void *)((s32)f + 0xCD0));
            }
            Character_Release((void *)s0[0x1DB8 / 4]);
            s0[0x1DB8 / 4] = 0;
        }
        func_001C82C0(f, i);
        i++;
        s0++;
    } while (i < 8);
}
#endif
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
extern void func_001C8500(Fighter *f, s32 i);
extern void func_001E53B0(Fighter *f, s32 i);
extern void func_001E5C10(void *p, Fighter *f, s32 i);
#if 0
// differs: 98 of 100 differ: the frame is 0x50 with four saved registers in the original (f, the slot pointer, the index, the walk pointer) and ours keeps f in s4 with five; the word-view of 0x1ED8 and the two-slot loads did not change the register layout
void func_001C8600(Fighter *f) {
    s32 *a;
    s32 *b;
    void *s2;
    void *p;
    s32 i;
    a = (s32 *)((u8 *)f + 0x1ED8);
    b = (s32 *)((u8 *)f + 0x1EF0);
    s2 = (void *)a[5];
    if (s2 != 0) {
        a[5] = (s32)FT_FIELD(s2, void *, 0x40);
        a[0] = FT_FIELD(FT_FIELD(s2, void *, 0x40), s32, 0x50);
        amFile_Load(a[0]);
        FT_FIELD(s2, s32, 0x40) = 0;
        amCdFs_Close(s2, 0);
        a[1] = func_001A50F0(a[0], 0);
        amFile_Load(a[1]);
        a[3] = func_001A50F0(a[0], 2);
        amFile_Load(a[3]);
        a[4] = func_001A50F0(a[0], 3);
    }
    s2 = (void *)b[1];
    if (s2 != 0) {
        b[1] = (s32)FT_FIELD(s2, void *, 0x40);
        b[0] = FT_FIELD(FT_FIELD(s2, void *, 0x40), s32, 0x50);
        amFile_Load(b[0]);
        FT_FIELD(s2, s32, 0x40) = 0;
        amCdFs_Close(s2, 0);
    }
    i = 0;
    do {
        func_001C8500(f, i);
        p = (void *)FT_FIELD(f, s32, 0x1DB8 + i * 4);
        if (p != 0) {
            if (FT_FIELD(p, s32, 0x24) == 0) {
                func_001CA8F0(p);
                func_001E53B0(f, i);
                func_001C7D90(f, i, (void *)0);
            }
        }
        i++;
    } while (i < 8);
    i = 0;
    do {
        func_001E5C10((u8 *)f + 0x650 + i * 0x680, f, i);
        i++;
    } while (i < 2);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8600);
#if 0
// differs: 51 of 59: the call-select (func_001CAA30(2) == 0 ? 0 : 2) is a movz in the original (li a0,2 in the delay slot, then movz a0,zero,v0): both the ternary and the if form give branches here; the slot tests are laid out in another order
// differs: the test on the slot is kept in a0 in the original (lw a0, bnez a0), the final max is a movz / slt pair; ours loads into v0 and the register numbers of f, i and the result differ
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
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8780);
#if 0
// differs: 82 of 83 differ: frame 0x60 against 0x50 and the registers of f, i and the slot pointer are permuted (the original keeps the slot pointer in s0 and the index in s3)
s32 func_001C8860(Fighter *f, s32 i) {
    s32 k = i << 2;
    s32 *slot = (s32 *)((u8 *)f + k + 0x1DB8);
    s32 s2 = 0;
    s32 r = 0;
    s32 *e;
    void *p;

    if (*slot == 0) {
        p = func_001CAAB0(FT_FIELD((u8 *)FT_FIELD(f, void *, 0x1CF8) + i * 20, s16, 0xD6),
                          FT_FIELD((u8 *)FT_FIELD(f, void *, 0x1CF8) + i * 20, s16, 0xD8),
                          FT_FIELD(f, s8, 0x1D0C + i), FT_FIELD(f, s32, 0x1350), 0);
        if (p == 0) {
            s2 = 0;
        } else {
            FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(p, s32, 0x20);
            *slot = (s32)p;
            s2 = FT_FIELD(f, s32, 0x1EF8);
        }
    }
    e = (s32 *)((u8 *)f + i * 28 + 0x1DF8);
    if (e[6] != 0) {
        r = 0;
    } else if (e[0] != 0 || e[5] != 0) {
        r = 0;
    } else {
        if (((s32 *)FT_FIELD(f, void *, 0x1CF8))[i] != -1) {
            r = amCdFs_ReadFileId(((s32 *)FT_FIELD(f, void *, 0x1CF8))[i], 0, 1);
            e[5] = r;
            FT_FIELD(f, s32, 0x1EF8) = r;
        }
    }
    if (r != 0) {
        return r;
    }
    return s2;
}
#endif
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
extern void *func_001CAAB0(s32, s32, s32, s32, s32);
#if 0
// differs: 177 of 190 (frame 112 against 96): the parameter is copied to a saved register first and the slot addresses are recomputed per access; the two index blocks (lh 0x16 and 0x14) and the 0x2A tail are structurally right
s32 func_001C8B50(Fighter *f, void *p) {
    void *t;
    void *r;
    void *e;
    s32 *tbl;
    s32 ix;
    t = FT_FIELD(f, void *, 0x1CF8);
    if (FT_FIELD(t, s32, 0x20) != -1) {
        FT_FIELD(f, s32, 0x1EEC) = amCdFs_ReadFileId(FT_FIELD(t, s32, 0x20), 0, 1);
        FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(f, s32, 0x1EEC);
    }
    tbl = (s32 *)((u8 *)t + 0x28);
    if (tbl[0] != -1) {
        FT_FIELD(f, s32, 0x1EF4) = amCdFs_ReadFileId(tbl[0] | 0x10000, 0, 1);
        FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(f, s32, 0x1EF4);
    }
    if (FT_FIELD(f, s32, 0x1E10) == 0 && FT_FIELD(f, s32, 0x1DF8) == 0 && FT_FIELD(f, s32, 0x1E0C) == 0 && FT_FIELD(t, s32, 0) != -1) {
        FT_FIELD(f, s32, 0x1E0C) = amCdFs_ReadFileId(FT_FIELD(t, s32, 0), 0, 1);
        FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(f, s32, 0x1E0C);
    }
    ix = FT_FIELD(p, s16, 0x16);
    if (FT_FIELD(f, s32, 0x1DB8 + ix * 4) == 0) {
        r = func_001CAAB0(FT_FIELD((u8 *)t + ix * 20, s16, 0xD6), FT_FIELD((u8 *)t + ix * 20, s16, 0xD8), FT_FIELD(f, s8, 0x1D0C + ix), FT_FIELD(f, s32, 0x1350), 0);
        if (r != 0) {
            FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(r, s32, 0x20);
            FT_FIELD(f, void *, 0x1DB8 + ix * 4) = r;
        }
    }
    e = (u8 *)f + ix * 28 + 0x1DF8;
    if (FT_FIELD(e, s32, 0x18) == 0 && FT_FIELD(e, s32, 0) == 0 && FT_FIELD(e, s32, 0x14) == 0 && ((s32 *)t)[ix] != -1) {
        FT_FIELD(e, s32, 0x14) = amCdFs_ReadFileId(((s32 *)t)[ix], 0, 1);
        FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(e, s32, 0x14);
    }
    ix = FT_FIELD(p, s16, 0x14);
    if (FT_FIELD(f, s32, 0x1DB8 + ix * 4) == 0) {
        r = func_001CAAB0(FT_FIELD((u8 *)t + ix * 20, s16, 0xD6), FT_FIELD((u8 *)t + ix * 20, s16, 0xD8), FT_FIELD(f, s8, 0x1D0C + ix), FT_FIELD(f, s32, 0x1350), 0);
        if (r != 0) {
            FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(r, s32, 0x20);
            FT_FIELD(f, void *, 0x1DB8 + ix * 4) = r;
        }
    }
    e = (u8 *)f + ix * 28 + 0x1DF8;
    if (FT_FIELD(e, s32, 0x18) == 0 && FT_FIELD(e, s32, 0) == 0 && FT_FIELD(e, s32, 0x14) == 0 && ((s32 *)t)[ix] != -1) {
        FT_FIELD(e, s32, 0x14) = amCdFs_ReadFileId(((s32 *)t)[ix], 0, 1);
        FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(e, s32, 0x14);
    }
    if (FT_FIELD(f, s32, 0x1CFC) == 0x2A) {
        if (FT_FIELD(f, s32, 0x1DBC) == 0) {
            r = func_001CAAB0(FT_FIELD(t, s16, 0xEA), FT_FIELD(t, s16, 0xEC), FT_FIELD(f, s8, 0x1D0D), FT_FIELD(f, s32, 0x1350), 0);
            if (r != 0) {
                FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(r, s32, 0x20);
                FT_FIELD(f, void *, 0x1DBC) = r;
            }
        }
        if (FT_FIELD(f, s32, 0x1E2C) == 0) {
            e = (u8 *)f + 0x1E14;
            if (FT_FIELD(e, s32, 0) == 0 && FT_FIELD(e, s32, 0x14) == 0 && FT_FIELD(t, s32, 0x4) != -1) {
                FT_FIELD(e, s32, 0x14) = amCdFs_ReadFileId(FT_FIELD(t, s32, 0x4), 0, 1);
                FT_FIELD(f, s32, 0x1EF8) = FT_FIELD(e, s32, 0x14);
            }
        }
    }
    return FT_FIELD(f, s32, 0x1EF8);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C8B50);
void func_001C8E50(void) {
}
void func_001C8E60(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
    Fighter *f;
    s32 i;

    f = (Fighter *)((u8 *)bw + 0x830);
    for (i = 0; i < bw->numFighters; i++) {
        func_001C8340(f);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
extern void func_001C90D0(void);
extern void func_001DA4C0(void);
extern void amTask_KillGroup(s32, s32, s32);

void func_001C8EE0(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
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
    func_001C90D0();
}
extern void func_001DA4C0(void);
extern void amTask_KillGroup(s32, s32, s32);

void func_001C8FE0(void) {
    BattleSlots *bw = (BattleSlots *)gBattle;
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
extern void func_001E4800(void *f);
extern void func_001E5230(void *f, s32 x);
extern void func_001E4F40(void *f);
extern void func_001D41F0(void *p);
extern void func_001D8CD0(void *f);
extern void func_001D96F0(void);
extern void func_001C7670(Fighter *f, s32 i);
extern void func_001C6860();
extern void func_001C63F0();
extern void func_001C61A0();
extern char D_00468F40[];
extern char D_00468F50[];
extern char D_00468F60[];
extern char D_00468F70[];
extern char D_00468F80[];
/* A small record on the stack, passed by address to func_00200270. */
typedef struct Loc90 {
    void *tmp;
    s32 zero;
    s16 m1;
    f32 fv;
} Loc90;
#if 0
// differs: 62 of 145 (frame and size match): the record fields are kept as address registers (addiu s0-s2,s5 from sp+112..124) where the original stores them straight to sp+0x60..0x6C and reuses  as the counter and then as an address; the loop counters end in other registers
void func_001C90D0(void) {
    Loc90 loc;
    s32 k;
    Fighter *base = BTL_CHARA(0);
    Fighter *f;
    s32 i = 0;
    f = base;
    if (0 < ((BattleSlots *)gBattle)->numFighters) {
        do {
            func_001C7670(f, 0);
            func_001C80E0(f, -1);
            func_001C8050(f, -1);
            i++;
            f = (Fighter *)((u8 *)f + 0x2020);
        } while (i < ((BattleSlots *)gBattle)->numFighters);
        k = 0;
        f = base;
        do {
            func_001E4820(1.0f, f, 1);
            func_001E4800(f);
            func_001E5230(f, 0);
            func_001E4FA0(f, -1);
            func_001E4F40(f);
            func_001D41F0(FT_FIELD(f, void *, 0xB84));
            func_001D8CD0(f);
            loc.tmp = f;
            loc.zero = 0;
            loc.m1 = -1;
            func_00200270((s32)&loc, FT_FIELD(f, f32, 0x650), FT_FIELD(f, f32, 0x658));
            FT_FIELD(f, f32, 0x1890) = 1.0f - loc.fv;
            k++;
            f = (Fighter *)((u8 *)f + 0x2020);
        } while (k < ((BattleSlots *)gBattle)->numFighters);
    }
    func_001D96F0();
    func_001DA4C0();
    amTask_Create((void (*)(void *))func_001C6860, 0, 0x5000, 0x20, 0x40000002, D_00468F40);
    amTask_Create((void (*)(void *))func_001C6780, 0, 0x5100, 0x20, 0x40000002, D_00468F50);
    amTask_Create((void (*)(void *))func_001C63F0, 0, 0x5300, 0x20, 0x40000002, D_00468F60);
    amTask_Create((void (*)(void *))func_001C6350, 0, 0x3500, 0x20, 0x40000004, D_00468F70);
    amTask_Create((void (*)(void *))func_001C61A0, 0, 0x3580, 0x20, 0x40000004, D_00468F80);
    amVram_Apply(2);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C90D0);
void func_001C9310(void) {
    Fighter *f;
    s32 i;

    f = (Fighter *)((u8 *)gBattle + 0x830);
    for (i = 0; i < ((BattleSlots *)gBattle)->numFighters; i++) {
        func_001C8600(f);
        FIGHTER_FIELD(f, s16, 0x13A6) = i;
        FIGHTER_FIELD(f, s16, 0x13A4) = FIGHTER_FIELD(FIGHTER_FIELD(f, void *, 0x1CF4), s16, 0x1A);
        f = (Fighter *)((u8 *)f + 0x2020);
    }
}
s32 func_001C9390(u8 *p) {
    BattleSlots *bw = (BattleSlots *)gBattle;
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
/* One 16-byte record of the table at D_00431340: a key, then three values. */
typedef struct BtlRec {
    s32 key;
    s32 a;
    s32 b;
    s32 c;
} BtlRec;
typedef struct Copy32 {
    Copy16 lo;
    Copy16 hi;
} __attribute__((aligned(16))) Copy32;
extern u8 D_00431340[];
/* differs: the table copy is a counted do/while with the counter in $t0 (the original: source $t0, counter $a2, destination $a3; 92 of 108 at best), and the (0x2B || 0x2A) test lays out its body inline instead of out of line after a `b` */
#if 0
void func_001C9440(void *a0) {
    s32 n;
    Copy32 buf[5];
    BtlRec *r;
    void *bw;
    s32 i;
    s32 cnt;
    {
        Copy32 *src = (Copy32 *)D_00431340;
        Copy32 *dst = (Copy32 *)buf;
        n = sizeof(buf) / sizeof(Copy32);
        do {
            *dst++ = *src++;
        } while (--n > 0);
    }
    r = (BtlRec *)buf;
    bw = gBattle;
    if (BW_FIELD(bw, s16, 0x7E2) != 0 && BW_FIELD(bw, s16, 0x7E2) != 2) {
        if (FT_FIELD(a0, s16, 0x10) == 0x2B || FT_FIELD(a0, s16, 0x10) == 0x2A) {
            if (FT_FIELD(a0, s16, 0x1E) == 1) {
                s32 n;
                FT_FIELD(a0, s16, 0x1E) = FT_FIELD(a0, s32, 0x24) / 1000;
                if (FT_FIELD(a0, s16, 0x1E) < 0) {
                    FT_FIELD(a0, s16, 0x1E) = 1;
                } else {
                    n = FT_FIELD(a0, s16, 0x1E) - 1;
                    FT_FIELD(a0, s32, 0x24) -= n * 1000;
                }
                FT_FIELD(a0, s32, 0x28) = 1000;
            }
        }
    }
    while (r->key != -1) {
        if (r->key == FT_FIELD(a0, s16, 0x10)) {
            cnt = FT_FIELD(a0, s16, 0x34);
            if (0 < cnt) {
                s16 *slot = (s16 *)((u8 *)a0 + 0x36);
                for (i = 0; i < cnt; i++) {
                    if (slot[i] == r->a) {
                        FT_FIELD(a0, s16, 0x34) = 1;
                        FT_FIELD(a0, s16, 0x36) = r->a;
                        FT_FIELD(a0, s16, 0x10) = r->b;
                        FT_FIELD(a0, s16, 0x14) = r->c;
                        FT_FIELD(a0, s16, 0x16) = r->c;
                        FT_FIELD(a0, s16, 0x38) = 0;
                        FT_FIELD(a0, s16, 0x3A) = 0;
                        FT_FIELD(a0, s16, 0x3C) = 0;
                        FT_FIELD(a0, s16, 0x3E) = 0;
                        FT_FIELD(a0, s16, 0x40) = 0;
                        FT_FIELD(a0, s16, 0x42) = 0;
                        return;
                    }
                }
            }
        }
        r++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btl_main", func_001C9440);
void func_001C95F0(Fighter *f, s32 i) {
    func_0029D270(*(void **)((u8 *)f + 0x4C), ((s16 *)f)[i]);
}
extern void amMotion_BuildMatrices(void *o);
extern void func_001D43F0(void *s);
extern s32 func_0029D540(void);
extern void func_001339B0(s32 a);
extern void DrawFlags_Apply(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_0029D4C0(void);
extern void amModel_SetCurrent(s32 a, s32 b);
extern void func_00133980(f32 a, f32 b, f32 c, f32 d);
extern s32 func_0029D8D0(void);
extern void func_0029D4B0(s32 a);
extern s32 func_0029D4A0(void);
// differs: 34 of 138 differ: the frame is 0x30 against 0x40 (the object pointer goes to s1 with the result of the second 0x29D4C0 in s2; the original keeps the object in s0 and the result in s1); 0x4C address CSE
void func_001C9610(void *p, s32 flag)
{
  u8 *new_var;
  s32 s1;
  new_var = (u8 *) p;
  if ((p != 0) && ((*((s32 *) (new_var + 0x4C))) != 0))
  {
    if (flag != 0)
    {
      amMotion_BuildMatrices(*((void **) (((u8 *) p) + 0x4C)));
    }
    if (p != 0)
    {
      func_001D43F0(*((void **) (((u8 *) p) + 0x58)));
      func_0013E2A0(*((s32 *) (((u8 *) p) + 0x4C)));
    }
    if (p != 0)
    {
      func_001339B0(func_0029D540());
      DrawFlags_Apply(0x13C00720, 0, 0, 0x10400200, 0);
      amModel_SetCurrent(*((s32 *) (((u8 *) p) + 0x5C)), *((s32 *) (((u8 *) p) + 0x60)));
      func_0013E170(*((s32 *) (((u8 *) p) + 0x4C)));
      func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
      DrawFlags_Apply(0, 0x13C00720, 0, 0, 0);
    }
    if (p != 0)
    {
      s1 = func_0029D4C0();
      DrawFlags_Apply(0x20000000, 0, 0, 0x20000000, 0);
      amGs_SetReg64(1, s1);
      amModel_SetCurrent(*((s32 *) (((u8 *) p) + 0x5C)), *((s32 *) (((u8 *) p) + 0x60)));
      func_0013E170(*((s32 *) (((u8 *) p) + 0x4C)));
      DrawFlags_Apply(0, 0x20000000, 0, 0, 0);
      amGs_SetReg64(1, 0x44);
    }
    if (p != 0)
    {
      if (func_0029D8D0() & 2)
      {
        if (func_0029D4C0() != 0x44)
        {
          s1 = func_0029D4C0();
          func_0029D4B0(0x44);
          func_001339B0(func_0029D4A0());
          DrawFlags_Apply(0x10000F20, 0, 0, 0x10000A00, 0);
          amModel_SetCurrent(*((s32 *) (((u8 *) p) + 0x5C)), *((s32 *) (((u8 *) p) + 0x60)));
          func_0013E170(*((s32 *) (((u8 *) p) + 0x4C)));
          func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
          DrawFlags_Apply(0, 0x10000F20, 0, 0, 0);
          func_0029D4B0(s1);
        }
      }
    }
  }
}

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
    CharParts_Release(p->unk58);
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
extern void *amObject_Create(void *, void *);
extern void *amMotion_CreateFromObj(void *, s32, void *);
extern void func_0029D1E0(void *, s32, void *, void *);
extern void func_001C9D90(void *, void *);
extern void func_001D4710(void *, void *, void *);
extern char D_00431454[];

#if 0
// differs: 91 of 96 differ: the frame has five saved registers against two (the addresses f+0x2, f+0x30 and f+0x5C are kept in saved registers across the calls)
void func_001C9910(Fighter *f) {
    void *s1;

    if (f == 0) {
        return;
    }
    if (FT_FIELD(f, s32, 0x74) != 0) {
        return;
    }
    s1 = FT_FIELD(f, void *, 0x6C);
    if (s1 != 0) {
        FT_FIELD(f, void *, 0x6C) = FT_FIELD(s1, void *, 0x40);
        FT_FIELD(f, void *, 0x64) = FT_FIELD(FT_FIELD(s1, void *, 0x40), void *, 0x50);
        amFile_Load(FT_FIELD(f, s32, 0x64));
        FT_FIELD(s1, s32, 0x40) = 0;
        amCdFs_Close(s1, 0);
        FT_FIELD(f, s32, 0x68) = func_001A50F0(FT_FIELD(f, s32, 0x64), 0);
        amFile_Load(FT_FIELD(f, s32, 0x68));
        FT_FIELD(f, s32, 0x5C) = func_001A50F0(FT_FIELD(f, s32, 0x64), 1);
        amFile_Load(FT_FIELD(f, s32, 0x5C));
    }
    if (FT_FIELD(f, s32, 0x68) != 0) {
        FT_FIELD(f, void *, 0x48) = amObject_Create(FT_FIELD(f, void *, 0x68), FT_FIELD(f, void *, 0x48));
        FT_FIELD(f, void *, 0x4C) = amMotion_CreateFromObj(FT_FIELD(f, void *, 0x48), 2, FT_FIELD(f, void *, 0x4C));
        FT_FIELD(FT_FIELD(f, void *, 0x4C), s32, 0x4AC) = FT_FIELD(f, s32, 0x50);
        FT_FIELD(FT_FIELD(f, void *, 0x4C), s32, 0x410) = FT_FIELD(FT_FIELD(f, void *, 0x4C), s32, 0x40C);
        FT_FIELD(f, s16, 0x0) = (s16)FT_FIELD(FT_FIELD(f, void *, 0x4C), s32, 0x40C);
        func_0029D1E0((u8 *)f + 2, 0x15, FT_FIELD(f, void *, 0x4C), D_00431454);
        if (FT_FIELD(f, s16, 0x26) < 0) {
            FT_FIELD(f, s16, 0x26) = FT_FIELD(f, s16, 0x6);
        }
        func_001C9D90((u8 *)f + 0x30, FT_FIELD(f, void *, 0x4C));
    }
    func_001D4710(FT_FIELD(f, void *, 0x58), FT_FIELD(f, void *, 0x4C), (u8 *)f + 0x5C);
    FT_FIELD(f, s32, 0x74) = 1;
    FT_FIELD(f, s32, 0x70) = 0;
}
#endif
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
