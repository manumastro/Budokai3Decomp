#include "common.h"

extern void func_002AF650(void *, void *);
extern u8 D_005BCD20[];
extern void func_002A9930(s32, s32, void *, s32);
extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void amCdFs_SetHeap(s32);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern s32 func_002B0000(u8 *, s32 *);
extern void func_002A9C00(s32, s32, s32, void *, s32);
extern void func_002A9D30(s32, s32, void *, s32);
extern s32 func_002B0390(u8 *, s32 *);
extern void func_002A9EA0(s32, s32, void *, s32);
extern void func_0012F2C0(void);
extern void amDraw_ResetPackets(void);
extern f32 D_004708F8;
extern u8 D_004E0660[];
extern u8 D_004E0668[];
extern void func_002B0190(void);
extern void amCdFs_ReleaseCache(s32);

void func_002AF860(u8 *a, u8 *b) {
    f32 f = *(f32 *)(*(u8 **)(b + 0x2C) + 4);
    *(f32 *)(a + 0x30) = f;
    *(void **)(a + 0x10) = func_002AF650;
    func_002AF650(a, b);
}
s32 func_002AF880(s32 **a, u8 *b) {
    u8 *p = *(u8 **)(b + 0x2C);
    u8 *e = D_005BCD20 + **a * 160 + *(s32 *)(p + 0xC) * 40;
    s32 v8 = *(s32 *)(p + 8);
    s32 v4 = *(s32 *)(p + 4);
    s32 v0 = *(s32 *)(p + 0);
    *(s32 *)(e + 0x18) = v8;
    *(s32 *)(e + 0x10) = v4;
    *(s32 *)(e + 0x14) = v0;
    return 1;
}
#if 0
s32 func_002AF8E0(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *f;
    u8 *pa;
    u8 *e;
    u8 *g;
    s32 s1;
    u8 *pp;
    f = *(u8 **)(a + 0x1C);
    pa = *(u8 **)a;
    pp = *(u8 **)(b + 0x2C);
    r = 3;
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        g = *(u8 **)(f + 0x40);
        s1 = *(s32 *)(g + 0x50);
        e = D_005BCD20 + *(s32 *)pa * 160 + *(s32 *)(pp + 4) * 40;
        if (*(s32 *)e != 0) {
            amCdFs_ReleaseCache(*(s32 *)e);
            *(s32 *)e = 0;
        }
        *(u8 **)e = g;
        *(s32 *)(e + 8) = s1;
        *(u8 **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
// differs: the register roles of the object, the field pointer and the table entry differ (the original keeps the object in s3); the layout is otherwise the one of func_002AFB20
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF8E0);
extern s32 func_002AF8E0(u8 *, u8 *);
#if 0
s32 func_002AF9E0(u8 *s3, u8 *s0) {
    u8 *s2;
    s32 s1;
    u8 *q;
    u8 *s4;
    s32 a1;
    s32 a0;
    *(s32 *)s0 = *(s32 *)(*(u8 **)(s0 + 0x2C) + 4);
    *(s32 *)(s3 + 0x18) = 0;
    *(s32 *)(s3 + 0x1C) = amCdFs_ReadFile(*(s32 *)(s0 + 0x20) + *(s32 *)(*(u8 **)(s0 + 0x2C)), 0, 1);
    *(void **)(s3 + 0x10) = (void *)func_002AF8E0;
    a0 = *(s32 *)(*(u8 **)(s0 + 0x2C) + 4);
    s2 = *(u8 **)(s3 + 0x1C);
    if (*(s16 *)(s2 + 4) != 3) {
        return 3;
    }
    *(s32 *)(s3 + 0x10) = 0;
    a1 = **(s32 **)s3;
    q = *(u8 **)(s2 + 0x40);
    s4 = D_005BCD20 + a1 * 160 + a0 * 40;
    s1 = *(s32 *)(q + 0x50);
    if (*(s32 *)s4 != 0) {
        amCdFs_ReleaseCache(*(s32 *)s4);
        *(s32 *)s4 = 0;
    }
    *(u8 **)s4 = q;
    *(s32 *)(s4 + 8) = s1;
    *(s32 *)(s2 + 0x40) = 0;
    amCdFs_Close(s2, 0);
    if (*(s32 *)(s3 + 0x18) != 0) {
        amCdFs_Close(*(void **)(s3 + 0x18), 0);
    }
    *(s32 *)(s3 + 0x18) = 0;
    *(s32 *)(s3 + 0x1C) = 0;
    return 1;
}
// differs: 17 of 78 instructions differ: same shape as func_002B0390 (load/unload pair): the register of the table index and of the file-size field (a1 in the original, a0 here) and the order of the loads in the beq delay slot differ; declaration orders tried (two swaps).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF9E0);
s32 func_002AFB20(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *f = *(u8 **)(a + 0x1C);
    u8 *pa = *(u8 **)a;
    s32 m = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        func_002A9930(*(s32 *)pa, m, *(void **)(f + 0x40), *(s32 *)(*(u8 **)(f + 0x40) + 0x50));
        *(void **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
s32 func_002AFBC0(u8 *a, u8 *b) {
    s32 r;
    u8 *f;
    u8 *pa;
    s32 m;
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002AFB20;
    f = *(u8 **)(a + 0x1C);
    pa = *(u8 **)a;
    m = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    r = 3;
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        func_002A9930(*(s32 *)pa, m, *(void **)(f + 0x40), *(s32 *)(*(u8 **)(f + 0x40) + 0x50));
        *(void **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
void func_002AFCA0(u8 *a, u8 *b) {
    *(s32 *)a = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFCE0);
s32 func_002AFD80(u8 *a, u8 *b) {
    s32 s1;
    s32 s0;
    u8 *p = *(u8 **)(b + 0x2C);
    s1 = *(s32 *)(p + 8);
    s0 = *(s32 *)(p + 4);
    amCdFs_SetHeap(0);
    *(s32 *)b = s1;
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + s0, 0, 1);
    *(void **)(a + 0x10) = func_002AFCE0;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFE00);
s32 func_002AFFA0(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002AFE00;
    return 3;
}
extern u8 D_005BC180[];
extern s32 amFile_Load(u8 *);
extern void amCamera_Init(void *);
#if 0
s32 func_002B0000(u8 *s, s32 *a1) {
    u8 *s1 = *(u8 **)(s + 0x1C);
    s32 a2;
    u8 *s0;
    u8 *s3;
    s32 s4;
    a2 = *(s32 *)s;
    if (*(s16 *)(s1 + 4) != 3) {
        return 3;
    }
    *(s32 *)(s + 0x10) = 0;
    a2 = *(s32 *)a2;
    s0 = *(u8 **)(s1 + 0x40);
    s3 = D_005BC180 + a2 * 352 + *a1 * 176;
    s4 = *(s32 *)(s0 + 0x50);
    if (*(s32 *)s3 != 0) {
        amCdFs_ReleaseCache(*(s32 *)s3);
    }
    *(u8 **)s3 = s0;
    *(s32 *)(s3 + 4) = s4;
    amFile_Load(*(u8 **)(s3 + 4));
    amCamera_Init(s3 + 0x20);
    *(s32 *)(s3 + 8) = 0;
    *(s32 *)(s3 + 0xC) = 0;
    *(f32 *)(s3 + 0x10) = D_004708F8;
    *(s32 *)(s3 + 0x14) = 0;
    *(s32 *)(s1 + 0x40) = 0;
    amCdFs_Close(s1, 0);
    if (*(s32 *)(s + 0x18) != 0) {
        amCdFs_Close(*(void **)(s + 0x18), 0);
    }
    *(s32 *)(s + 0x18) = 0;
    *(s32 *)(s + 0x1C) = 0;
    amCdFs_SetHeap(0);
    return 1;
}
// differs: 22 of 74 instructions differ: the same pattern as func_002B0390 (copy of the object pointer to s2 placed early here; the original copies it in the beq delay slot and loads *s into a2 first). Two placements of the pointer load tried.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0000);
s32 func_002B0130(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0000;
    return 3;
}
#if 0
s32 func_002B0190(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *f = *(u8 **)(a + 0x1C);
    u8 *pa = *(u8 **)a;
    u8 *q = *(u8 **)(b + 0x2C);
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        func_002A9C00(*(s32 *)pa, *(s32 *)b, *(s32 *)q, *(void **)(f + 0x40), *(s32 *)(*(u8 **)(f + 0x40) + 0x50));
        *(void **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
// differs: the argument loads come in another order (the pointer is kept in a3 and read after the store to 0x10); here the loads are hoisted above the branch
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0190);
s32 func_002B0230(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 8);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0190;
    return 3;
}
s32 func_002B0290(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *pa = *(u8 **)a;
    u8 *f = *(u8 **)(a + 0x1C);
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        func_002A9D30(*(s32 *)pa, *(s32 *)b, *(void **)(f + 0x40), *(s32 *)(*(u8 **)(f + 0x40) + 0x50));
        *(void **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
s32 func_002B0330(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0290;
    return 3;
}
extern u8 D_005ABA80[];
#if 0
s32 func_002B0390(u8 *s, s32 *a1) {
    u8 *s1 = *(u8 **)(s + 0x1C);
    s32 a2;
    u8 *s0;
    s32 s4;
    u8 *s3;
    a2 = *(s32 *)s;
    if (*(s16 *)(s1 + 4) != 3) {
        return 3;
    }
    *(s32 *)(s + 0x10) = 0;
    a2 = *(s32 *)a2;
    s0 = *(u8 **)(s1 + 0x40);
    s3 = D_005ABA80 + a2 * 33664 + *a1 * 8416;
    s4 = *(s32 *)(s0 + 0x50);
    if (*(s32 *)(s3 + 8) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(s3 + 8));
    }
    *(u8 **)(s3 + 8) = s0;
    *(s32 *)(s3 + 0x24) = s4;
    *(s32 *)(s1 + 0x40) = 0;
    amCdFs_Close(s1, 0);
    if (*(s32 *)(s + 0x18) != 0) {
        amCdFs_Close(*(void **)(s + 0x18), 0);
    }
    *(s32 *)(s + 0x18) = 0;
    *(s32 *)(s + 0x1C) = 0;
    return 1;
}
// differs: 11 of 64 instructions differ: the original loads *s into a2 at the top (lw a2,0(a0) before the lh test) and keeps the pointer in a2; the compiler keeps it in a0 (loaded in the delay slot of the beq) and reloads with lw a2,0(a0). Tried the declaration order (all 120 permutations give a size mismatch in the first version; the pointer-load placements gave 11 of 64).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0390);
s32 func_002B0490(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0390;
    return 3;
}
s32 func_002B04F0(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *pa = *(u8 **)a;
    u8 *f = *(u8 **)(a + 0x1C);
    switch (*(s16 *)(f + 4)) {
    case 3:
        *(s32 *)(a + 0x10) = 0;
        func_002A9EA0(*(s32 *)pa, *(s32 *)b, *(void **)(f + 0x40), *(s32 *)(*(u8 **)(f + 0x40) + 0x50));
        *(void **)(f + 0x40) = NULL;
        amCdFs_Close(f, 0);
        if (*(void **)(a + 0x18) != NULL) {
            amCdFs_Close(*(void **)(a + 0x18), 0);
        }
        *(s32 *)(a + 0x18) = 0;
        *(s32 *)(a + 0x1C) = 0;
        r = 1;
        break;
    }
    return r;
}
s32 func_002B0590(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B04F0;
    return 3;
}
s32 func_002B05F0(void) {
    func_0012F2C0();
    return 0;
}
s32 func_002B0610(u8 *a) {
    *(void **)(a + 0x14) = func_002B05F0;
    return 1;
}
s32 func_002B0630(void) {
    amDraw_ResetPackets();
    return 1;
}
s32 func_002B0650(u8 *a) {
    s32 v = *(s32 *)(a + 0x24);
    s32 r;
    if (v <= 0) {
        *(s32 *)(a + 0x10) = 0;
        r = 1;
    } else {
        *(s32 *)(a + 0x24) = v - 1;
        r = 3;
    }
    return r;
}
s32 func_002B0680(void) {
    return 1;
}
s32 func_002B0690(void) {
    return 1;
}
f32 func_002B06A0(void) {
    return D_004708F8;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B06B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0BF0);
extern u8 *gSklEdit;
#if 0
s32 func_002B0CA0(u8 *s, s32 n) {
    s32 *A = (s32 *)(s + 0xB8);
    s32 s0 = A[n + 1];
    s32 *s4 = &A[n + 1];
    s32 i;
    s32 j;
    s32 ok = 0;
    s32 v;
    s32 a;
    for (i = 0; i < 7; i++) {
        v = *(s32 *)(s + 0x2C + i * 4);
        if (v <= 0) {
            ok = 1;
            break;
        }
        if (v == s0) {
            ok = 0;
            break;
        }
    }
    if (!ok) {
        *(s32 *)(gSklEdit + 0x30) = 4;
        return 0;
    }
    for (j = 0; j < 7; j++) {
        if (j == n) {
            continue;
        }
        a = A[j + 1];
        if (a > 0) {
            u8 *e = D_004E0660 + a * 40;
            if (*(u16 *)(e + 0x10) == s0 || *(u16 *)(e + 0x12) == s0) {
                if (func_002B0CA0(s, j) == 0) {
                    return 0;
                }
            }
        }
    }
    *s4 = -1;
    A[0] = A[0] - 1;
    return 1;
}
// differs: 82 of 90 instructions differ: a recursive table walk; the original keeps the loop with the counter in a0 and a pointer in v1 (lw v0,44(v1)), with the flags in a0/v0; the compiler reorders the first loop and the early exits. Not retried.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1160);
#if 0
s32 func_002B1590(u8 *s) {
    s32 *arr = (s32 *)(s + 0xB8);
    s32 a2 = arr[0];
    s32 a3 = *(s32 *)(s + 0x20);
    s32 t0 = 0;
    s32 t4 = 0;
    s32 t2;
    s32 j;
    if (a2 == 0) {
        return 0;
    }
    if (a2 > 0) {
        do {
            t0 += *(u8 *)(D_004E0660 + arr[t4 + 1] * 40 + 8) & 7;
            if (t0 == a3) {
                break;
            }
            t4++;
        } while (t4 < a2);
    }
    if (t0 >= 7) {
        return 0;
    }
    if (t4 < a2 - 1) {
        t2 = 0;
        if (a2 > 0) {
            for (j = 0; j < a2; j++) {
                if (t4 + 1 < j) {
                    break;
                }
                t2 += *(u8 *)(D_004E0660 + arr[j + 1] * 40 + 8) & 7;
            }
        }
        *(s32 *)(s + 0x20) = t2;
        return 1;
    }
    *(s32 *)(s + 0x20) = t0 + 1;
    return 1;
}
// differs: 0x118 against 0x120 bytes (2 instructions short): the first loop (the byte count of the entries until the total reaches the stored value) and the second loop (the byte sum over the first entries) are right; the loop shapes (pointer walk, do-while, a guard) tried: 0x108 to 0x118.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1590);
#if 0
s32 func_002B16B0(u8 *a) {
    s32 *cnt = (s32 *)(a + 0xB8);
    s32 n = cnt[0];
    s32 v0;
    s32 sum;
    s32 t0;
    s32 *p;
    if (n == 0) {
        return 0;
    }
    sum = 0;
    v0 = 0;
    if (n > 0) {
        t0 = *(s32 *)(a + 0x20);
        p = cnt;
        do {
            sum += D_004E0660[p[1] * 40 + 8] & 7;
            if (sum == t0) {
                break;
            }
            v0++;
            p++;
        } while (v0 < n);
    }
    if (v0 > 0) {
        if (v0 == n) {
            *(s32 *)(a + 0x20) -= 1;
        } else {
            *(s32 *)(a + 0x20) -= D_004E0668[cnt[v0 + 1] * 40] & 7;
        }
    }
    return v0;
}
// differs: a loop over an index list with a 40-byte table; the sum and the element pointer take other registers here (n in t2 against a3 in the original), and the early return for n == 0 is laid out differently
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B16B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1780);
extern u8 *gSklEdit;
extern u8 D_004E0688[];
#if 0
void func_002B1B10(u8 *s, s32 a1) {
    u8 *e = D_004E0688;
    s32 res = 0;
    s32 count = 0;
    s32 a3;
    s32 idx;
    u64 mask;
    u8 *p1;
    u8 *bp;
    if (a1 > 0) {
        *(s32 *)(s + 0x24) = (D_004E0660 + 0xA)[a1 * 40] & 3;
    }
    bp = *(u8 **)(gSklEdit + 0x44) + 1;
    idx = *(s32 *)(s + 0x24);
    mask = (u64)1 << *(s32 *)(s + 0x1C);
    p1 = s + idx * 28 + 0x48;
    a3 = 1;
    do {
        if (a3 == a1) {
            res = count;
        }
        if ((*(u64 *)e & mask) != 0 && (e[0xA] & 3) == idx && (e[8] & 7) != 0 && *bp > 0) {
            count++;
        }
        a3++;
        e += 0x28;
        bp++;
    } while (a3 < 0x253);
    *(s16 *)(p1 + 0x1A) = count;
    if (count < 9) {
        *(s32 *)p1 = 0;
        *(s32 *)(p1 + 4) = res;
    } else {
        if (res - *(s32 *)p1 < 9) {
            *(s32 *)(p1 + 4) = res - *(s32 *)p1;
        } else if (res + 9 < count) {
            *(s32 *)p1 = res;
            *(s32 *)(p1 + 4) = 0;
        } else {
            *(s32 *)p1 = count - 9;
            *(s32 *)(p1 + 4) = *(s32 *)p1 - res;
        }
    }
}
// differs: size 0x140 against 0x150 (4 instructions short): the original starts with the skill-table pointer (lui t2 D_004E0688) before the a1 test and reads the byte table through a pointer that starts at gSklEdit+0x45; the if-store block is laid out differently. Tried the table offset folded into the base, the pointer loop and two declaration orders.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1B10);
extern void func_002B1D70(u8 *);
extern void func_002B1B10(u8 *, s32);
#if 0
s32 func_002B1C60(u8 *s) {
    s32 *q = (s32 *)(s + (*(s32 *)(s + 0x24)) * 28 + 0x48);
    s16 *hp = (s16 *)((u8 *)q + 0x1A);
    s32 s0 = q[1] + q[0];
    s32 H = *hp;
    if (s0 + 9 < H) {
        if (s0 + 0x12 < H) {
            q[0] = q[0] + 9;
        } else {
            q[0] = H - 9;
            q[1] = 9 - (q[0] - s0);
        }
    } else if (*hp < 9) {
        q[0] = 0;
        q[1] = hp[0] - 1;
    } else {
        q[0] = H - 9;
        q[1] = 8;
    }
    func_002B1D70(s);
    func_002B1B10(s, *(s16 *)((u8 *)q + q[1] * 2 + 8));
    return s0 != q[0] + q[1];
}
// differs: 8 of 65 instructions differ: the original keeps the halfword field pointer (s1+0x1A) in $a1 from the first compare (delay slot of its beqz); with a pointer declared early or used only in the H<9 arm the compiler folds it into lh 0x1A(s1). Tried 3 variants.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1C60);
#if 0
void func_002B1D70(u8 *s) {
    s32 idx = *(s32 *)(s + 0x24);
    u64 mask = (u64)1 << *(s32 *)(s + 0x1C);
    u8 *p = s + idx * 28 + 0x48;
    s16 *t3 = (s16 *)(p + 8);
    u8 *a3 = D_004E0688;
    u8 *bp = *(u8 **)(gSklEdit + 0x44) + 1;
    s32 a1 = 0;
    s32 v1 = 0;
    s32 j;
    for (j = 1; j < 0x253; j++) {
        if ((*(u64 *)a3 & mask) != 0 && (a3[0xA] & 3) == idx && (a3[8] & 7) != 0 && *bp != 0) {
            if (a1 >= *(s32 *)p) {
                if (v1 < 9) {
                    *t3 = (s16)j;
                }
                t3++;
                v1++;
            } else {
                a1++;
            }
        }
        a3 += 0x28;
        bp++;
    }
    *(s16 *)(p + 0x1A) = (s16)(*(s32 *)p + v1);
    if (v1 < 9) {
        do {
            *t3 = -1;
            t3++;
            v1++;
        } while (v1 < 9);
    }
}
// differs: 0x110 against 0x120 bytes (4 instructions short): the same skill-table loop as func_002B1B10; the counters sit in the other registers (the original reuses a1 for the store count and adds j+1 in the store arm). Declaration orders and the signed byte test tried.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1D70);
extern u8 *D_004706CC;
void func_002B1E90(u8 *d, u8 *b, s32 idx, s32 flags) {
    s32 off;
    u8 *e;
    f32 X;
    f32 Y;
    off = *(s32 *)((*(s32 *)(b + 0x14) + (s32)b) + (idx - *(s32 *)(b + 0x18)) * 4);
    e = b + off;
    X = (f32)*(s16 *)(e + 0x10);
    Y = (f32)*(s16 *)(e + 0x12);
    if (flags & 1) {
        *(s32 *)(d + 0x34) = 0;
        *(f32 *)(d + 0x3C) = Y * *(f32 *)(D_004706CC + 0x3C);
    } else if (flags & 2) {
        *(f32 *)(d + 0x34) = -Y * *(f32 *)(D_004706CC + 0x3C);
        *(s32 *)(d + 0x3C) = 0;
    } else {
        *(f32 *)(d + 0x34) = (-Y / 2.0f) * *(f32 *)(D_004706CC + 0x3C);
        *(f32 *)(d + 0x3C) = (Y / 2.0f) * *(f32 *)(D_004706CC + 0x3C);
    }
    if (flags & 8) {
        *(s32 *)(d + 0x30) = 0;
        *(f32 *)(d + 0x38) = X * *(f32 *)(D_004706CC + 0x38);
    } else if (flags & 0x10) {
        *(f32 *)(d + 0x30) = -X * *(f32 *)(D_004706CC + 0x38);
        *(s32 *)(d + 0x38) = 0;
    } else {
        *(f32 *)(d + 0x30) = (-X / 2.0f) * *(f32 *)(D_004706CC + 0x38);
        *(f32 *)(d + 0x38) = (X / 2.0f) * *(f32 *)(D_004706CC + 0x38);
    }
    *(s32 *)(d + 0x40) = 0;
    *(s32 *)(d + 0x44) = 0;
    *(f32 *)(d + 0x48) = X;
    *(f32 *)(d + 0x4C) = Y;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1FF0);
