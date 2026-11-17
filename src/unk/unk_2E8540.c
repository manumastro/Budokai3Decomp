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
typedef struct Quad87 {
    s32 v[4];
} __attribute__((aligned(16))) Quad87;

typedef struct Entry87 {
    Quad87 a;
    Quad87 b;
} Entry87;

typedef struct Blk87 {
    char pad0[0x152];
    s16 f152;
    char pad154[0x15C - 0x154];
    s32 f15C;
    s32 f160;
} Blk87;

extern Entry87 D_00457120[];
extern u8 D_005C9D80[];
extern s16 D_004E05E0[];
extern void func_00125740(void *, void *, s32);

/* differs: 10 of 38 (the 32-byte copy loop: the original keeps the counter in $a0 and the source in $a2; the body after it matches) */
#if 0
void func_002E8720(void) {
    Entry87 tmp[12];
    Entry87 *s = D_00457120;
    s32 n = 12;
    Entry87 *d = tmp;
    s32 x;
    Blk87 *b;

    do {
        d->a = s->a;
        n--;
        d->b = s->b;
        s++;
        d++;
    } while (n > 0);
    b = (Blk87 *)D_005C9D80;
    func_00125740(b, tmp, 0x180);
    b->f152 = 5;
    x = D_004E05E0[0];
    b->f15C = (x > 0) ? ((x << 4) - x) << 2 : -1;
    b->f160 = -1;
}
#endif
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
void func_002E8830(u8 *s1, s32 a1, s32 a2, u8 *s0) {
    if (*(s16 *)s1 != 0) {
        if (*(s8 *)(s1 + 2) == (s16)a1) {
            if (*(s8 *)(s1 + 3) == (s16)a2) {
                if (*(s64 *)(s1 + 0x10) == *(s64 *)(s0 + 0x30)) {
                    if (*(s64 *)(s1 + 0x18) == *(s64 *)(s0 + 0x38)) {
                        if (*(s64 *)(s1 + 0x20) == *(s64 *)(s0 + 0x40)) {
                            if (*(s64 *)(s1 + 0x28) == *(s64 *)(s0 + 0x48)) {
                                if (*(s32 *)(s1 + 0x30) == *(s32 *)(s0 + 0x50)) {
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *(s16 *)s1 = 1;
    *(s8 *)(s1 + 2) = 6;
    *(s8 *)(s1 + 3) = (s8)a2;
    *(Quad87 *)(s1 + 0x10) = *(Quad87 *)(s0 + 0x30);
    *(Quad87 *)(s1 + 0x20) = *(Quad87 *)(s0 + 0x40);
    *(s32 *)(s1 + 0x30) = *(s32 *)(s0 + 0x50);
    *(s64 *)(s1 + 0x38) = *(s64 *)(s1 + 0x38) | *(s64 *)(s0 + 0x90);
    *(u16 *)(s1 + 0x40) = *(u16 *)(s1 + 0x40) | *(u16 *)(s0 + 0xA4);
    *(u16 *)(s1 + 0x42) = 0;
    func_00125740(s1 + 0x42, s0 + 0xAB6, 0x216);
    func_00125740(s1 + 0x258, s0 + 0x6D8, 0x1C8);
    func_00125740(s1 + 0x446, s0 + 0xD41D, 0x260);
    func_00125740(s1 + 0x6A6, s0 + 0x226, 0x4B0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8B40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8C80);
/* differs: size 0x13C of 0x150 (the last compare is a beq to the body with a `b` to the end in the original; the loop
   registers are permuted) */
#if 0
extern u8 D_004B4B40[];
void func_002E8DB0(u8 *s5) {
    u8 *s4 = D_004B4B40;
    u8 *s0;
    u8 *s1;
    u8 *s3;
    s32 s2;

    if (*(s16 *)s5 != 0) {
        if (*(s64 *)(s5 + 0x10) == *(s64 *)(s4 + 0x80)) {
            if (*(s64 *)(s5 + 0x18) == *(s64 *)(s4 + 0x88)) {
                if (*(s64 *)(s5 + 0x20) == *(s64 *)(s4 + 0x90)) {
                    if (*(s64 *)(s5 + 0x28) == *(s64 *)(s4 + 0x98)) {
                        if (*(s32 *)(s5 + 0x30) == *(s32 *)(s4 + 0xA0)) {
                            *(s16 *)(s5 + 0x42) = 0;
                            for (s2 = 0, s0 = s5, s1 = s4; s2 < 0x26; s2++, s0 += 0xE, s1 += 0x1210) {
                                func_00125740(s1 + 0x1330, s0 + 0x44, 14);
                            }
                            for (s2 = 0, s0 = s5, s1 = s4; s2 < 0x26; s2++, s0 += 0xC, s1 += 0x1210) {
                                s3 = s1 + 0x140;
                                *(s8 *)(s1 + 0x1327) = *(s8 *)(s0 + 0x258);
                                func_00125740(s3 + 0x11E8, s0 + 0x259, 7);
                                *(s32 *)(s3 + 0x1200) = *(s32 *)(s0 + 0x260);
                            }
                            func_00125740(s4 + 0x2AFD9, s5 + 0x446, 0x260);
                        }
                    }
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8DB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8F00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E8F90);

void func_002E92E0(void) {
    memset(D_005C4140, 0, 0x5DD0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9300);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 gBtlSys;
extern void *gBattle;
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C430(s32, f32);
extern void func_0022C560(s32);
extern void func_002E9300(void);
void func_002E94C0(void) {
    char *sys = (char *)gBtlSys;

    if (*(s8 *)((char *)gBattle + 0x8975) == 1) {
        return;
    }
    if (D_005C9F14[0] != 0) {
        if (D_005C9F18[0] != 0 || D_005C9F1C[0] != 0) {
            s32 e = *(s32 *)(sys + 0xE64);

            D_00470704 = e;
            D_0047070C = 0x4001000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4001000);
            D_00470238 = 0;
            func_0022C430(*(s32 *)(*(s32 *)(*(s32 *)(sys + 0xE6C) + 0x1C)), 0.0f);
        }
        if (D_005C9F18[0] != 0) {
            func_002E9300();
        }
        if (D_005C9F1C[0] != 0 && D_005C9F68[0] != 0) {
            func_0022C560(D_005C9F68[0]);
        }
        if (D_005C9F6C[0] != 0) {
            func_0022C560(D_005C9F6C[0]);
        }
    }
}

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
extern s32 D_005C9F70[];
extern s32 D_005C9F74[];
extern s32 D_005C9F78[];
extern char D_0046F5D0[];
extern char D_0046F5E0[];
extern void *amTask_Create(void *, void *, s32, s32, s32, char *);
extern s32 func_0022D860(s32, f32);
extern void func_002E9600(void);
void func_002E97E0(void) {
    char *sys = (char *)gBtlSys;
    s32 *t;
    s32 e;

    D_005C9F10[0] = (s32)amTask_Create((void *)func_002E9600, (void *)func_002E95C0, 0x5410, 0x1000, 0x2000000, D_0046F5D0);
    t = (s32 *)(D_005C9F10[0] + 0x30);
    *t = (s32)amTask_Create((void *)func_002E94C0, 0, 0x3A40, 0x1000, 0x2000008, D_0046F5E0);
    e = *(s32 *)(sys + 0xE64);
    D_00470704 = e;
    D_0047070C = 0x4001000;
    D_00470708 = 0;
    amModel_SetCurrent(e, 0x4001000);
    D_00470238 = 0;
    D_005C9F68[0] = func_0022D860(*(s32 *)(*(s32 *)(*(s32 *)(sys + 0xE6C) + 0x14)), 0.0f);
    D_005C9F14[0] = 1;
    D_005C9F74[0] = 0x43960000;
    D_005C9F78[0] = 0x43D00000;
    D_005C9F70[0] = 10;
}

void func_002E98E0(void) {
    memset(D_005C9F10, 0, 0x6C);
}
/* differs: 1 of 26: r = 1 then r = 0 on a < fC gives the right result, but the join after the `move` is a bare branch
   target to the jr; the original's bc1f lands on a nop before the jr. The else form and the direct returns give xori. */
#if 0
s32 func_002E9900(void) {
    Cur99 *p = (Cur99 *)D_005C9F6C[0];
    Ent99 *e;
    s32 *row;
    s32 idx;
    s32 r;
    f32 a;

    if (p == NULL) {
        return 1;
    }
    idx = D_005C9F60[0];
    a = p->f10;
    row = &D_004573C0[idx];
    e = (Ent99 *)(*row + D_005C9F64[0] * 16);
    r = 1;
    if (a < e->fC) {
        r = 0;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9900);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E8540", func_002E9970);
void func_002E9B10(s16 *a, s16 *b) {
    s32 i = 0;
    s32 r;

    do {
        r = func_002537E0(a[i], b[i]);
        D_005C9F10[i + 4] = r;
        if (r == -1) {
            break;
        }
        i++;
    } while (i < 16);
}

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
