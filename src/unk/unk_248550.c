#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_248550", func_00248550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_248550", func_00248640);
INCLUDE_ASM("asm/nonmatchings/unk/unk_248550", func_00248910);
typedef struct PackFile {
    char pad0[8];
    s32 f8;
    s32 fC;
} PackFile;

typedef struct PackDir {
    char pad0[0xC];
    s32 fC;
    char pad10[0x10];
    PackFile *f20[1];
} PackDir;

typedef struct PackRefs {
    void *f0[2];
    s32 f8[2];
} PackRefs;

extern PackRefs *D_0046FE50;
extern char D_0046ADC8[];
extern void memset(void *, s32, s32);
extern s32 func_00127E88(void *, char *, s32);
extern PackDir *func_00246CA0(s32, s32);
extern void func_00209450(s32, s32);

void func_00248C60(void) {
    memset(D_0046FE50, 0, 0x10);
}
void func_00248C70(void) {
    memset(D_0046FE50, 0, 0x10);
}
void func_00248C80(void) {
    func_00209450(0x4000004, 1);
    func_00209450(0x4000008, 1);
}
void func_00248CC0(void) {
    s32 i;
    PackDir *d;
    PackFile *f;

    for (i = 0; i < 2; i++) {
        D_0046FE50->f0[i] = NULL;
        d = func_00246CA0(i, -1);
        f = d->f20[d->fC];
        if (func_00127E88(f, D_0046ADC8, 4) == 0) {
            D_0046FE50->f0[i] = (char *)f + f->fC;
            D_0046FE50->f8[i] = f->f8;
        }
    }
}
void func_00248D70(s32 i, s32 j) {
    PackDir *d;
    PackFile *f;

    D_0046FE50->f0[i] = NULL;
    d = func_00246CA0(i, j);
    f = d->f20[d->fC];
    if (func_00127E88(f, D_0046ADC8, 4) == 0) {
        D_0046FE50->f0[i] = (char *)f + f->fC;
        D_0046FE50->f8[i] = f->f8;
    }
}
