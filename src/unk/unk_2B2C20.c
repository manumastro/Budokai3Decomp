#include "common.h"

/* One skill-edit record: 456 bytes per entry. */
typedef struct SklRec {
    char pad0[0x48];
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    char pad58[0x1C8 - 0x58];
} SklRec;

extern SklRec *gSklEdit;

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

INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B2C20);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B3C40);
void func_002B3D40(SklAct *s) {
    SklRec *r;

    r = &gSklEdit[s->f30];
    if (r->f54 == 5) {
        s->f1C = (func_002B3D90 == NULL) ? 0 : (s32)func_002B3D90;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B3D90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B47D0);
/* differs: about 14 of 40: the register roles now match; the fC update (2 -> 3, 0 -> 1) and the join branch are laid out
   differently (the original branches with beq to the store). Two-if and else-if forms tried. */
#if 0
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
            if (*(s32 *)(s0 + 0xC) == 2) {
                *(s32 *)(s0 + 0xC) = 3;
            }
            if (*(s32 *)(s0 + 0xC) == 0) {
                *(s32 *)(s0 + 0xC) = 1;
            }
            *(void **)(s1 + 0x1C) = (func_002B47D0 == NULL) ? NULL : (void *)func_002B47D0;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4950);
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
/* differs: gSklEdit is loaded after the `li -2` here; the original loads it first (register v1 / v0 swapped) */
#if 0
u16 func_002B4AD0(s32 a0) {
    return *(u16 *)((char *)gSklEdit + (a0 & -2) + 0x34);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4AD0);
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
extern void func_002B3C40(void);

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
