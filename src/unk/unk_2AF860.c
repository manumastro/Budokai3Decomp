#include "common.h"

extern void func_002AF650(void *, void *);
extern u8 D_005BCD20[];
extern void func_002A9930(s32, s32, void *, s32);
extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void amCdFs_SetHeap(s32);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern void func_002B0000(void);
extern void func_002A9C00(s32, s32, s32, void *, s32);
extern void func_002A9D30(s32, s32, void *, s32);
extern void func_002B0390(void);
extern void func_002A9EA0(s32, s32, void *, s32);
extern void func_0012F2C0(void);
extern void amDraw_ResetPackets(void);
extern f32 D_004708F8;
extern u8 D_004E0660[];
extern u8 D_004E0668[];
extern s32 func_002B0190(u8 *, u8 *);
extern void amCdFs_ReleaseCache(s32);

void func_002AF860(u8 *a, u8 *b) {
    f32 f = *(f32 *)(*(u8 **)(b + 0x2C) + 4);
    *(f32 *)(a + 0x30) = f;
    *(void **)(a + 0x10) = func_002AF650;
    func_002AF650(a, b);
}
#if 0
s32 func_002AF880(s32 **a, u8 *b) {
    u8 *p = *(u8 **)(b + 0x2C);
    u8 *e = D_005BCD20 + **a * 40 + *(s32 *)(p + 0xC) * 160;
    *(s32 *)(e + 0x18) = *(s32 *)(p + 8);
    *(s32 *)(e + 0x10) = *(s32 *)(p + 4);
    *(s32 *)(e + 0x14) = *(s32 *)(p + 0);
    return 1;
}
// differs: the table stores come in the order 0x18, 0x10, 0x14 with the loads of the fields between them; this build hoists all the field loads above the stores
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF880);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0000);
s32 func_002B0130(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0000;
    return 3;
}
s32 func_002B0190(u8 *a, u8 *b) {
    s32 r = 3;
    u8 *pa = *(u8 **)a;
    u8 *f = *(u8 **)(a + 0x1C);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1160);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1B10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1C60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1E90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1FF0);
