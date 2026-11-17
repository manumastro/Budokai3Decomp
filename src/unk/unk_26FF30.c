#include "common.h"

/* An actor of this file: its state at 0x1C is a task function (or NULL). */
typedef struct Ac26F {
    char pad0[0x1C];
    void *f1C;
} Ac26F;

extern s32 func_002D20D0(void *);
extern s32 func_00283BF0(void *);
extern void SklSheet_Free(void);
extern void func_00271AF0(void);
typedef struct Ac26FB {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    s32 f30;
    s32 f34;
} Ac26FB;

typedef struct G26FB {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x2C];
    s32 f4C;
} G26FB;

extern G26FB *D_004707FC;
extern f32 gFrameDelta;
extern f32 D_0047001C;
extern void func_00271580(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_0026FF30);
typedef struct G270 {
    char pad0[0x48];
    s32 f48;
    s32 f4C;
    s32 f50;
    char pad54[0x4];
    s32 f58;
    char pad5C[0x580];
    s32 f5DC[0x30];
} G270;

s32 func_00270020(void) {
    s32 t0 = 0;
    s32 a3 = 0;
    s32 *pf50 = &((G270 *)D_004707FC)->f50;
    s32 i = ((G270 *)D_004707FC)->f50 + 1;

    if (i < 0x30) {
        s32 *q = (s32 *)((u8 *)D_004707FC + i * 4);
        do {
            if (q[0x5DC / 4] >= 0) {
                t0 = ((s32 *)((u8 *)D_004707FC + 0x5DC))[i];
                a3 = i;
                break;
            }
            i++;
            q++;
        } while (i < 0x30);
    }
    if (t0 >= 0) {
        *pf50 = a3;
        if (((G270 *)D_004707FC)->f58 < t0 + 9) {
            ((G270 *)D_004707FC)->f4C = ((G270 *)D_004707FC)->f58 - 9;
            ((G270 *)D_004707FC)->f48 = t0 - ((G270 *)D_004707FC)->f4C;
        } else {
            ((G270 *)D_004707FC)->f4C = t0;
            ((G270 *)D_004707FC)->f48 = 0;
        }
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_002700E0);
typedef struct Ac270 {
    s32 f0;
    char pad4[3];
    u8 f7;
} Ac270;

typedef struct Ent270 {
    char pad0[0xB];
    u8 fB;
    char pad0C[0x1C];
} Ent270;

typedef struct G270C {
    char pad0[0x40];
    s32 f40;
    s32 f44;
    char pad48[0x1C];
    s32 *f64;
} G270C;

extern u8 D_004E0660[];
extern u8 D_0059CA9D[];

extern u8 D_004E0660[];
extern u8 D_0059CA9D[];

#if 0
void func_002702A0(Ac270 *a, s32 n) {
    Ent270 *e;
    G270C *g;
    s32 *tbl;
    s32 cnt = 0;
    s32 i;

    a->f0 = n;
    g = (G270C *)D_004707FC;
    e = (Ent270 *)(D_004E0660 + n * 40);
    if (g->f40 != 1) {
        return;
    }
    a->f7 = 0;
    if ((e->fB & 1) == 0) {
        a->f7 = a->f7 | 1;
        return;
    }
    tbl = g->f64;
    for (i = 0; i < 4; i++) {
        if (*tbl == n) {
            cnt++;
            break;
        }
        tbl++;
    }
    if (cnt > 0) {
        a->f7 = a->f7 | 4;
        return;
    }
    cnt = g->f44;
    if (*(u8 *)(D_0059CA9D + (1 - cnt) * 0xD680 + n) != 0) {
        a->f7 = a->f7 | 2;
    }
}
// differs: the early part matches (store, index math); the e and g locals get other registers (g in t1, D and the index temp swapped) for every declaration order and stride form tried
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_002702A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00270EC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00271080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_26FF30", func_00271580);
void func_002719D0(Ac26F *s) {
    if (func_002D20D0(s) == 6) {
        s->f1C = (func_00271AF0 == NULL) ? NULL : (void *)func_00271AF0;
    }
}
void func_00271A20(Ac26F *s) {
    if (func_00283BF0(s) == 8) {
        s->f1C = (func_00271AF0 == NULL) ? NULL : (void *)func_00271AF0;
        SklSheet_Free();
    }
}
void func_00271A70(Ac26F *s) {
    Ac26FB *o = (Ac26FB *)s;
    G26FB *g;
    G26FB *h;
    s32 *p;
    s32 n;
    f32 f;

    n = o->f30 + 1;
    o->f30 = n;
    f = (f32)(n + 1) * gFrameDelta;
    p = &o->f30;
    if (f >= D_0047001C) {
        g = D_004707FC;
        g->f4C = g->f4C + p[1];
        p[1] = 0;
        o->f1C = (func_00271AF0 == NULL) ? NULL : (void *)func_00271AF0;
        g = D_004707FC;
        h = (G26FB *)g->f1C;
        h->f1C = (func_00271580 == NULL) ? NULL : (void *)func_00271580;
    }
}
