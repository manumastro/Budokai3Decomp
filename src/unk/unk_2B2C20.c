#include "common.h"

/* One skill-edit record: 456 bytes per entry. */
typedef struct SklRec {
    char pad0[0x48];
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    char pad58[0x120 - 0x58];
    s32 f120;
    char pad124[4];
    s32 f128;
    char pad12C[0x1C8 - 0x12C];
} SklRec;

extern SklRec *gSklEdit;

/* A source block: a word, then seven floats. */
typedef struct SklSrc {
    s32 w0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
} SklSrc;

/* The body of a skill-edit record from its f48 pointer (offsets as the original reads them). */
typedef struct SklBody {
    char pad0[0xC];
    s32 fC;
    char pad10[4];
    s32 f14;
    char pad18[4];
    s32 f1C;
    s32 f20;
    char pad24[0xB8 - 0x24];
    s32 fB8;
    f32 fBC;
    f32 fC0;
    f32 fC4;
    f32 fC8;
    f32 fCC;
    f32 fD0;
    f32 fD4;
} SklBody;

extern s16 D_0046B560[];
extern u8 D_004E0660[];

/* A skill-edit actor, as far as these functions read it. */
typedef struct SklAct {
    char pad0[0x1C];
    s32 f1C;
    char pad20[0x10];
    s32 f30;
    s32 f34;
} SklAct;

extern s32 func_002D20D0(void *);
extern s32 func_00283BF0(void *);
extern void SklSheet_Free(void);
extern void func_002B3D90(void);

/* The skill-edit record from its f48 word on (offsets are from the f48 pointer, as the original code reads them). */
typedef struct SklEdTail {
    char pad0[0xE0];
    s32 fE0;
    char padE4[0x110 - 0xE4];
    s32 f110;
    char pad114[0x140 - 0x114];
    s32 f140;
    char pad144[0x170 - 0x144];
    s32 f170;
    char pad174[0x1A0 - 0x174];
    s32 f1A0;
} SklEdTail;

extern void func_00133780(s32, s32);
extern s32 amGs_SetReg32(s32, s32);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern void func_002B2400(void *);
extern void func_002B1FF0(void *);
extern void func_00228410(void);

void func_002B2C20(SklAct *s) {
    s32 s1;
    SklEdTail *p;

    func_00133780(0, 1);
    s1 = amGs_SetReg32(0, 0x30000);
    p = (SklEdTail *)&gSklEdit[s->f30].f48;
    func_00228430(0);
    func_002284D0(0);
    func_002B2400(p);
    p->fE0 += 1;
    p->f140 += 1;
    func_002B1FF0(p);
    p->f110 += 1;
    p->f170 += 1;
    p->f1A0 += 1;
    func_00228410();
    amGs_SetReg32(0, s1);
    func_00133780(0, 0);
}
void func_002B2D00(SklAct *s) {
    s32 *p;

    if (func_002D20D0(s) == 6) {
        p = &s->f30;
        s->f1C = s->f34 == 0 ? 0 : s->f34;
        p[1] = 0;
    }
}
void func_002B2D50(SklAct *s) {
    s32 *p;

    if (func_00283BF0(s) == 8) {
        p = &s->f30;
        s->f1C = s->f34 == 0 ? 0 : s->f34;
        p[1] = 0;
        SklSheet_Free();
    }
}
typedef struct SklRecW {
    char pad0[0x150];
    s32 f150;
    char pad154[4];
    s32 f158;
} SklRecW;

typedef struct SklTab {
    char pad0[0x1C];
    s32 *f1C;
} SklTab;

typedef struct SklTop {
    char pad0[0x10];
    SklTab *f10;
} SklTop;

extern s32 func_0022BC30(s32, f32);
extern f32 gFrameDelta;

void func_002B2DA0(SklAct *s) {
    SklRecW *r = (SklRecW *)&gSklEdit[s->f30];
    s32 *p = (s32 *)&((SklRec *)r)->f48;
    s32 res;

    res = func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f150], (f32)r->f158 * gFrameDelta);
    if (res == 0xFF) {
        p[3] = 5;
        s->f1C = (func_002B3D90 == NULL) ? 0 : (s32)func_002B3D90;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B2E40);
extern void func_002B2E40(void);

void func_002B3BA0(SklAct *s) {
    SklRecW *r = (SklRecW *)&gSklEdit[s->f30];
    s32 *p = (s32 *)&((SklRec *)r)->f48;
    s32 res;

    res = func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f150], (f32)r->f158 * gFrameDelta);
    if (res == 0xFF) {
        p[3] = 6;
        s->f1C = (func_002B2E40 == NULL) ? 0 : (s32)func_002B2E40;
    }
}
/* The record view from its f48 pointer: f54 and f5C of the record. */
typedef struct SklP48 {
    char pad0[0xC];
    s32 fC;
    char pad10[4];
    s32 f14;
} SklP48;

extern void amTask_Kill(void *);
void func_002B3D40(SklAct *s);

void func_002B3C40(SklAct *s) {
    SklRec *r;
    s32 *f30;
    SklP48 *p;
    s32 *q;
    s32 i;

    f30 = &s->f30;
    r = &gSklEdit[s->f30];
    p = (SklP48 *)&r->f48;
    if (func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f120], (f32)r->f128 * gFrameDelta) == 0xFF) {
        p->fC = 9;
        if (p->f14 != 0) {
            s->f1C = (func_002B3D40 == NULL) ? 0 : (s32)func_002B3D40;
        } else {
            q = (s32 *)((u8 *)gSklEdit + *f30 * 8 + 0x18);
            i = 0;
            do {
                amTask_Kill((void *)*q);
                *q = 0;
                i++;
                q++;
            } while (i < 2);
        }
    }
}
void func_002B3D40(SklAct *s) {
    SklRec *r;

    r = &gSklEdit[s->f30];
    if (r->f54 == 5) {
        s->f1C = (func_002B3D90 == NULL) ? 0 : (s32)func_002B3D90;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B3D90);
/* differs: 3 of 83 (the zeroing of the sum and the pointer setup are scheduled after the cnt > 0 test;
   the original keeps them before it: the same loop as func_002B4AF0 below, with the top check; declaration order
   (q, t1, i, cnt) and `0 < cnt` and `q[1] * 5` found by search). */
#if 0
void func_002B4680(SklAct *s) {
    SklRec *r;
    SklBody *p;
    s32 *q;
    s32 t1;
    s32 i;
    s32 cnt;

    r = &gSklEdit[s->f30];
    p = (SklBody *)&r->f48;
    if (func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f120], (f32)r->f128 * gFrameDelta) == 0xFF) {
        cnt = p->fB8;
        q = (s32 *)&p->fB8;
        t1 = 0;
        if (0 < cnt) {
            i = 0;
            for (;;) {
                if (i >= 8) {
                    break;
                }
                t1 += D_004E0660[(q[1] * 5) * 8 + 8] & 7;
                q++;
                i++;
                if (i >= cnt) {
                    break;
                }
            }
        }
        if (t1 < 7) {
            p->f20 = t1 + 1;
        } else {
            p->f20 = 7;
        }
        if (p->f14 != 0) {
            p->fC = 4;
            s->f1C = (func_002B3D40 == NULL) ? 0 : (s32)func_002B3D40;
        } else {
            p->fC = 5;
            s->f1C = (func_002B3D90 == NULL) ? 0 : (s32)func_002B3D90;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B47D0);
extern void func_002B47D0(void);
extern void amFile_Load(s32);

void func_002B4950(void *o) {
    u8 *s1 = (u8 *)o;
    u8 *s0;

    if (*(s32 *)((u8 *)gSklEdit + 0x2C) == 1) {
        s0 = (u8 *)gSklEdit + *(s32 *)(s1 + 0x30) * 456 + 0x48;
        if (*(s16 *)((u8 *)*(void **)s0 + 4) == 3) {
            amFile_Load(*(s32 *)(*(u8 **)gSklEdit + 0x54));
            *(s32 *)(s0 + 8) = *(s32 *)((u8 *)*(void **)s0 + 0x54);
            switch (*(s32 *)(s0 + 0xC)) {
            case 0:
                *(s32 *)(s0 + 0xC) = 1;
                break;
            case 2:
                *(s32 *)(s0 + 0xC) = 3;
                break;
            }
            *(void **)(s1 + 0x1C) = (func_002B47D0 == NULL) ? NULL : (void *)func_002B47D0;
        }
    }
}
typedef struct SklFile {
    char pad0[4];
    s16 f4;
    char pad6[0x54 - 6];
    void *f54;
} SklFile;

typedef struct SklHead {
    SklFile *f0;
    SklFile *f4;
    char pad8[8];
    void *f10;
    void *f14;
    char pad18[0x14];
    s32 f2C;
} SklHead;

extern void amFile_Load(s32);

void SklEdit_TaskLoad(void *a) {
    if (func_002D20D0(a) != 0) {
        if (((SklHead *)gSklEdit)->f4->f4 == 3) {
            ((SklHead *)gSklEdit)->f2C = 1;
            amFile_Load((s32)((SklHead *)gSklEdit)->f0->f54);
            ((SklHead *)gSklEdit)->f10 = ((SklHead *)gSklEdit)->f0->f54;
            amFile_Load((s32)((SklHead *)gSklEdit)->f4->f54);
            ((SklHead *)gSklEdit)->f14 = ((SklHead *)gSklEdit)->f4->f54;
            amTask_Kill(a);
        }
    }
}
/* differs: 1 instruction of 6: the final addu is `v1 + v0` here, the original is `v0 + v1` (operand order);
   the load of gSklEdit first matches with s32 p = (s32)gSklEdit. Variants tried (7): char *p, s32 p with
   a0 & -2 on either side, a separate q for the mask, and an offset-first sum (size mismatch). */
#if 0
u16 func_002B4AD0(s32 a0) {
    s32 p;
    p = (s32)gSklEdit;
    return *(u16 *)(p + (a0 & -2) + 0x34);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4AD0);

/* differs: 37 of 81: the loop (count in a3, sum in t1, pointer in t2 in the original) and the float copy order
   (the original loads f4..f10 into f3..f0 before the stores); declaration orders of the locals tried (24). */
#if 0
void func_002B4AF0(s32 a0, s32 a1, SklSrc *src) {
    SklRec *r;
    SklBody *b;
    s32 *q;
    s32 cnt;
    s32 t1;
    s32 i;

    a1 = D_0046B560[a1];
    if (a1 < 0) {
        return;
    }
    r = gSklEdit + (a0 >> 1);
    b = (SklBody *)&r->f48;
    if (b->f1C == a1) {
        return;
    }
    b->f1C = a1;
    memset((char *)b + 0x48, 0, 0x70);
    b->fB8 = src->w0;
    {
        f32 x0 = src->f4;
        f32 x1 = src->f8;
        f32 x2 = src->fC;
        f32 x3 = src->f10;

        b->fBC = x0;
        b->fC0 = x1;
        b->fC4 = x2;
        b->fC8 = x3;
    }
    {
        f32 y0 = src->f14;
        f32 y1 = src->f18;
        f32 y2 = src->f1C;

        b->fCC = y0;
        b->fD0 = y1;
        b->fD4 = y2;
    }
    t1 = 0;
    cnt = b->fB8;
    if (cnt > 0) {
        q = (s32 *)&b->fB8;
        i = 0;
        while (i < 8) {
            t1 += D_004E0660[((q[1] << 2) + q[1]) * 8 + 8] & 7;
            q++;
            i++;
            if (!(i < cnt)) {
                break;
            }
        }
    }
    if (t1 < 7) {
        b->f20 = t1 + 1;
    } else {
        b->f20 = 7;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4AF0);
void func_002B4C40(s32 a) {
    SklRec *r = gSklEdit + (a >> 1);
    s32 *p = &r->f48;

    if (r->f54 == 4) {
        p[3] = 5;
    }
}
s32 func_002B4C80(s32 a) {
    if (gSklEdit != NULL) {
        return (gSklEdit + (a >> 1))->f54;
    }
    return 9;
}
/* differs: 13 of 51 (the `if (0 < n)` join goes one instruction further in ours; the index, pointer and inner counter take other registers, 3 declaration orders tried) */
#if 0
void func_002B4CC0(s32 a0, void *dst) {
    s32 tmp[8];
    s32 j;
    s32 *a1;
    u8 *s0;
    s32 i;
    s32 k;

    k = a0 >> 1;
    s0 = (u8 *)gSklEdit + k * 456 + 0x48;
    func_00125740(tmp, s0 + 0xB8, 0x20);
    if (0 < tmp[0]) {
        a1 = tmp;
        for (i = 0; i < tmp[0]; i++) {
            for (j = 0; j < 7; j++) {
                if (*(s32 *)(s0 + 0x2C + j * 4) == a1[1]) {
                    a1[1] += 0x1000;
                }
            }
            a1++;
        }
    }
    func_00125740(dst, tmp, 0x20);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4CC0);
/* func_002B3C40 is defined above. */

void func_002B4D90(s32 a0) {
    void **q = (void **)((char *)gSklEdit + (a0 >> 1) * 8 + 0x18);
    SklRec *r = &gSklEdit[a0 >> 1];
    s32 *p = (s32 *)&r->f48;
    s32 v = ((s32 *)r)[0x58 / 4];
    void *t;

    switch (v) {
    case 0:
        p[54] = 0x16;
        p[56] = 0;
        break;
    case 1:
        p[54] = 0x14;
        p[56] = 0;
        break;
    case 2:
        p[54] = 0x16;
        p[56] = 0;
        break;
    }
    t = *q;
    *(s32 *)((char *)t + 0x1C) = (func_002B3C40 == NULL) ? 0 : (s32)func_002B3C40;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4E40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B5030);
