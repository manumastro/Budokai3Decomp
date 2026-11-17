#include "common.h"

typedef struct VramBuf {
    s8 mode;
    s8 mode2;
    s16 h2;
    s16 h4;
    s16 h6;
    s16 h8;
    s16 hA;
    s16 hC;
    s16 hE;
    s16 h10;
    s16 h12;
    s16 h14;
    s16 h16;
    s32 w18;
    s32 w1C;
    s32 w20;
    s32 w24;
    s32 w28;
    s32 pad2C[5];
} VramBuf;

extern u32 D_0046FD4C;
extern u32 D_0046FD50;
extern u32 D_0046FD54;
extern u32 D_0046FD58;
extern u32 D_0046FD5C;
extern u32 D_0046FD60;
extern u32 D_0046FD64;
extern u32 D_0046FD68;
extern u32 D_0046FD6C;
extern s32 D_00470380;
extern s32 D_00470384;
extern s32 D_00470388;
extern s32 D_0047038C;
extern void *D_0047039C;
extern void *D_004703A0;
extern u32 D_004703A4;
extern u32 D_004703A8;
extern s32 D_00470414;
extern s32 D_00470418;
extern s8 D_0047045C;
extern s8 D_00470460;
extern u32 D_00470470;
extern u32 D_00470494;
extern VramBuf D_0047E4C0[2];

extern void *func_00124940(s32, s32);
void func_001459B0(s32);

typedef struct VramArea {
    u32 count;
    u32 base;
    u32 size;
    u32 base2;
    u32 size2;
    void *list;
    u32 buf;
} VramArea;

void func_00145490(s32 base, s32 n1, s32 n2, u32 a3, u32 t0, s32 m1, s32 m2) {
    s32 sz;
    s32 i;
    VramBuf *p;

    if (D_00470380 == 0) {
        D_0047039C = func_00124940(0x40, n1 << 6);
        D_004703A0 = func_00124940(0x40, n2 << 6);
        switch (m1) {
        case 0:
            D_004703A4 = (u32)func_00124940(0x40, n1 * 720) | 0x30000000;
            break;
        case 2:
            D_004703A4 = (u32)func_00124940(0x40, n1 * 720);
            break;
        case 1:
            D_004703A4 = 0;
            break;
        }
        switch (m2) {
        case 0:
            D_004703A8 = (u32)func_00124940(0x40, n2 * 720) | 0x30000000;
            break;
        case 2:
            D_004703A8 = (u32)func_00124940(0x40, n2 * 720);
            break;
        case 1:
            D_004703A8 = 0;
            break;
        }
        D_0047E4C0[0].mode = m1;
        D_0047E4C0[0].mode2 = m1;
        D_0047E4C0[1].mode = m2;
        D_0047E4C0[1].mode2 = m2;
        D_00470384 = n1;
        D_00470388 = n2;
        D_00470380 = 1;
    }
    if (base <= 0) {
        D_0046FD54 = D_00470470 >> 8;
    } else {
        D_0046FD54 = base >> 8;
    }
    switch (D_0047045C) {
    case 0:
    case 1:
        sz = (D_00470418 + 31) & ~31;
        break;
    case 2:
    case 10:
        sz = (D_00470418 + 63) & ~63;
        break;
    }
    sz = D_00470460 * (D_00470414 * sz);
    D_0046FD5C = ((((D_00470494 + sz) >> 2) + 0x7FF) >> 11 << 13) >> 8;
    D_0046FD64 = D_0046FD5C;
    D_0046FD68 = a3;
    D_0046FD6C = t0;
    D_0046FD60 = D_0046FD5C + D_0046FD54;
    if (D_0046FD60 < 0x3FC0 - D_0046FD6C - D_0046FD68) {
        D_0046FD58 = 0x3FC0 - D_0046FD6C - D_0046FD68 - D_0046FD60;
        D_0047038C = -1;
    } else {
        D_0046FD54 = 0x3FC0 - D_0046FD6C - D_0046FD68 - D_0046FD5C;
        D_0046FD58 = 0;
        D_0046FD60 = D_0046FD5C;
        D_0047038C = 0;
    }
    D_0046FD4C = D_0046FD54;
    D_0046FD50 = D_0046FD58;
    p = D_0047E4C0;
    for (i = 0; i < 2; i++, p++) {
        p->h12 = 0;
        p->h14 = 0;
        p->h16 = 0;
        p->w1C = 0;
        p->w20 = 0;
        p->w18 = 0;
    }
    func_001459B0(2);
}

void func_00145860(s32 which, u32 a, u32 b) {
    if (which == 0) {
        if (a == -1) {
            D_0046FD5C = D_0046FD64;
        } else {
            D_0046FD5C = a;
        }
        if (b == -1) {
            D_0046FD54 = D_0046FD4C;
        } else {
            D_0046FD54 = b;
        }
    } else {
        if (a == -1) {
            D_0046FD60 = D_0046FD5C + D_0046FD54;
        } else {
            D_0046FD60 = a;
        }
        if (b == -1) {
            if (D_0046FD60 < 0x3FC0 - D_0046FD6C - D_0046FD68) {
                D_0046FD58 = 0x3FC0 - D_0046FD6C - D_0046FD68 - D_0046FD60;
                D_0047038C = -1;
            } else {
                D_0046FD54 = 0x3FC0 - D_0046FD6C - D_0046FD68 - D_0046FD5C;
                D_0046FD58 = 0;
                D_0046FD60 = D_0046FD5C;
                D_0047038C = 0;
            }
        } else {
            D_0046FD58 = b;
        }
    }
    func_001459B0(which);
}

void func_001459B0(s32 mask) {
    VramArea a[2] = {0};
    s32 i;
    VramBuf *p;
    VramArea *q;

    a[0].count = D_00470384;
    a[0].base = D_0046FD5C;
    a[0].size = D_0046FD54;
    a[0].base2 = 0x3FC0 - D_0046FD6C - D_0046FD68;
    a[0].size2 = D_0046FD68;
    a[0].list = D_0047039C;
    a[0].buf = D_004703A4;
    a[1].count = D_00470388;
    a[1].base = D_0046FD60;
    a[1].size = D_0046FD58;
    a[1].base2 = 0x3FC0 - D_0046FD6C;
    a[1].size2 = D_0046FD6C;
    a[1].list = D_004703A0;
    a[1].buf = D_004703A8;
    mask++;
    p = D_0047E4C0;
    for (i = 0; i < 2; i++, mask >>= 1, p++) {
        if (mask & 1) {
            q = &a[i];
            p->h2 = 0;
            p->h4 = q->count;
            p->h6 = q->base;
            p->h8 = q->size + q->base;
            p->hA = p->h6;
            p->hC = q->base2;
            p->hE = q->size2 + q->base2;
            p->h10 = p->hC;
            p->h12 = p->h14;
            p->h16 = p->h14;
            p->w24 = (s32)q->list;
            p->w28 = q->buf;
        }
    }
}
