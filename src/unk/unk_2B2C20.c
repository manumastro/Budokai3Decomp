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
extern void func_00283C20(void);
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
        func_00283C20();
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
extern f32 D_004703BC;

void func_002B2DA0(SklAct *s) {
    SklRecW *r = (SklRecW *)&gSklEdit[s->f30];
    s32 *p = (s32 *)&((SklRec *)r)->f48;
    s32 res;

    res = func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f150], (f32)r->f158 * D_004703BC);
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

    res = func_0022BC30(((s32 *)((SklTop *)gSklEdit)->f10->f1C)[r->f150], (f32)r->f158 * D_004703BC);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4A30);
/* differs: the load of gSklEdit comes first in the original, and the address is computed after it (3 of 6) */
#if 0
u16 func_002B4AD0(s32 a) {
    u8 *g = (u8 *)gSklEdit;
    s32 o = a & ~1;

    return *(u16 *)(g + o + 0x34);
}
#endif
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4CC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4D90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B4E40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2B2C20", func_002B5030);
