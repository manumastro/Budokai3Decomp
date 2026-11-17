#include "common.h"

extern u8 D_005C4140[];
extern void memset(void *, s32, s32);
extern void amTask_Kill(void *);
extern s32 D_005C9F10[];
extern s32 D_005C9F18[];
extern s32 D_005C9F68[];
extern s32 D_005C9F6C[];
extern s32 D_005C9F60[];
extern s32 D_005C9F64[];
extern s32 D_004573C0[];

/* A current-state record (f10 a float), and a table row of 16-byte entries (fC a float). */
typedef struct Cur99 {
    char pad0[0x10];
    f32 f10;
} Cur99;

typedef struct Ent99 {
    char pad0[0xC];
    f32 fC;
    char pad10[4];
} Ent99;
extern void func_0022D0E0(s32, s32);
extern s32 D_005C9F1C[];
extern void func_0022C7D0(s32, s32, f32);
extern s32 D_005C9F14[];

INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8540);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8720);
typedef struct Rec12 {
    s8 b[8];
    s32 w;
} Rec12;

typedef struct Work87 {
    char pad0[0x258];
    Rec12 arr[16];
} Work87;

void func_002E87C0(Work87 *a, s16 i) {
    Rec12 *s = &a->arr[i];
    Rec12 *d = (Rec12 *)((u8 *)a + 0xB64);

    d->b[0] = s->b[0];
    d->b[1] = s->b[1];
    d->b[2] = s->b[2];
    d->b[3] = s->b[3];
    d->b[4] = s->b[4];
    d->b[5] = s->b[5];
    d->b[6] = s->b[6];
    d->b[7] = s->b[7];
    d->w = s->w;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8830);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8B40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8C80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8DB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8F00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8F90);

void func_002E92E0(void) {
    memset(D_005C4140, 0, 0x5DD0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E94C0);

void func_002E95C0(char *o) {
    void **t = (void **)(o + 0x30);
    if (*t != NULL) {
        amTask_Kill(*t);
    }
    *t = NULL;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9600);
void func_002E9770(void) {
    if (D_005C9F10[0] != 0) {
        amTask_Kill((void *)D_005C9F10[0]);
    }
    if (D_005C9F68[0] != 0) {
        func_0022D0E0(D_005C9F68[0], 1);
    }
    if (D_005C9F6C[0] != 0) {
        func_0022D0E0(D_005C9F6C[0], 1);
    }
    memset(D_005C9F10, 0, 0x6C);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E97E0);

void func_002E98E0(void) {
    memset(D_005C9F10, 0, 0x6C);
}
/* differs: the original reads the index global into $a1 before the table base (its return-1 branch lands on the epilogue 8 bytes earlier) */
#if 0
s32 func_002E9900(void) {
    Cur99 *p = (Cur99 *)D_005C9F6C[0];
    Ent99 *e;
    s32 *row;
    s32 idx;
    f32 a;

    if (p == NULL) {
        return 1;
    }
    idx = D_005C9F60[0];
    a = p->f10;
    row = &D_004573C0[idx];
    e = (Ent99 *)*row + D_005C9F64[0];
    return (a < e->fC) ? 0 : 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9B10);

void func_002E9B90(s32 a) {
    D_005C9F18[0] = a;
}

void func_002E9BA0(s32 a) {
    s32 v;

    D_005C9F1C[0] = a;
    if (a == 0) {
        v = D_005C9F68[0];
        if (v != 0) {
            func_0022C7D0(v, 1, 0.0f);
        }
    }
}

void func_002E9BE0(s32 a) {
    D_005C9F14[0] = a;
}
