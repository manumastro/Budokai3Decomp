#include "common.h"

/* The screen set-up: interlace, frame and Z formats, sizes, frame and Z base pointers. */
typedef struct ScreenCfg {
    s8 interlace;
    s8 psm;
    s8 zpsm;
    s8 hasDisp;
    s16 w, h;
    s16 dw, dh;
    u32 fbp;
    u32 zbp;
} ScreenCfg;

extern void amDma_WaitQueue(s32);
extern s32 sceGsSyncPath(s32, s32);
extern s32 D_0047046C;
extern s32 D_00470470;
extern s8 D_0047044C;
extern u32 D_00470414;
extern u32 D_00470418;
extern char D_0045F4F0[]; /* "amDraw3d.c" */
extern u8 *amHeap_Alloc(s32, s32, char *, s32);
extern void FlushCache(s32);
extern void func_0012FBF0(u8 *, s32, s32, s32);
extern void func_0012FFC0(u8 *, s32, s32);
extern void amHeap_Free(u8 *);
extern void amDma_SendToSpr(s32, u8 *, s32, s32);
extern void amDma_SendFromSpr(u8 *, s32, s32, s32);
extern void func_00131560(s32, s32);
extern void func_001315C0(s32, s32);
extern void func_00131620(s32, s32);
extern u8 *amPkt_Alloc(s32);
extern s8 D_0047045C, D_00470408, D_004703F8;
extern u32 D_00470474, D_00470484, D_00470490;
extern s32 D_004703B0, D_004703AC;
extern void func_0012F2C0(void);
extern void amDraw3d_SetScreen(ScreenCfg *);
extern void func_00147650(void);
extern void amDraw3d_SetDefaultRegs(void);
extern u32 D_0047041C, D_00470428;
extern s8 D_00470454, D_004704A8;
extern ScreenCfg D_0047E870;
extern s8 D_00470404, D_00470450, D_00470460;
extern f32 D_0047040C, D_00470410, D_0047042C, D_00470430, D_00470434, D_00470438, D_00470468;
extern u32 D_00470478, D_00470494;
extern s32 D_0047048C, D_00470464, D_004703DC;
extern void amDma_Request(s32, s32, s32, s32, u32, s32, s32, s32);

typedef unsigned __int128 u128;

/* A quadword built from two doublewords (the original code makes these with pcpyld). */
#define PACK128(q, hi, lo) asm("pcpyld %0, %1, %2" : "=r"(q) : "r"(hi), "r"(lo))
#define PACK128_0(q, lo) asm("pcpyld %0, $0, %1" : "=r"(q) : "r"(lo))

/* A GIF A+D pair: the data (written as a doubleword or as two words) and the GS register. */
typedef struct AD {
    union {
        u64 d;
        struct { u32 lo, hi; } w;
        struct { u16 x, y; u32 z; } xyz;
        struct { u8 r, g, b, a; f32 q; } rgbaq;
    } u;
    u64 reg;
} AD;

typedef struct Pkt1303E0 {
    u128 hdr[4];
    AD ad[15];
} Pkt1303E0;

/* Texture setup: VIF codes, a GIF tag, then TEXFLUSH, TEX1, TEX0 and TEXA. */
typedef struct PktTex {
    u32 code[4];
    u128 gif;
    AD ad[4];
} PktTex;

typedef struct Pkt131200 {
    u128 dma;
    u128 gif;
    AD ad[14];
} Pkt131200;

void func_0012FBA0(void) {
}

void amDraw3d_Sync(void) {
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
}

INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_0012FBF0);
void func_0012FF50(void) {
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
    *(volatile u64 *)0x12001040 = 0;
    *(volatile u32 *)0x10003C00 &= ~0x800000;
    asm("sync");
    sceGsSyncPath(0, 0);
}

INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_0012FFC0);
void amDraw3d_Flip(ScreenCfg *cfg, f32 *col) {
    u32 frame;
    u32 zbuf;
    u32 xo;
    u32 yo;
    u32 sx;
    u32 sy;
    Pkt1303E0 *p;
    u128 q;

    func_0012F2C0();
    amDraw3d_SetScreen(cfg);
    func_00147650();
    FlushCache(0);
    if (cfg != 0 || D_00470408 == 0) {
        frame = D_00470474;
    } else {
        frame = D_004703B0 ? D_00470484 : D_00470474;
    }
    frame = frame | (((D_00470414 + 0x3F) >> 6) << 16) | (D_0047044C << 24);
    zbuf = D_00470490 | (D_0047045C << 24);
    xo = (0x800 - D_00470414 / 2) << 4;
    yo = (0x800 - D_00470418 / 2) << 4;
    if (D_004703F8 && D_004703AC) yo += 8;
    sx = (D_00470414 - 1) << 16;
    sy = (D_00470418 - 1) << 16;
    p = (Pkt1303E0 *)amPkt_Alloc(0x130);
    PACK128(q, (u64)0x50000001 << 32, (u64)0x11000000);
    p->hdr[0] = q;
    PACK128(q, (u64)0xE, ((u64)0x10000000 << 32) | 0x8000);
    p->hdr[1] = q;
    PACK128(q, (u64)0x50000010 << 32, (u64)0x13000000);
    p->hdr[2] = q;
    PACK128(q, (u64)0xE, ((u64)0x10034000 << 32) | 0x800F);
    p->hdr[3] = q;
    p->ad[0].u.w.lo = frame;
    p->ad[0].u.w.hi = 0;
    p->ad[0].reg = 0x4C;
    p->ad[1].u.w.lo = zbuf;
    p->ad[1].u.w.hi = 0;
    p->ad[1].reg = 0x4E;
    p->ad[2].u.w.lo = xo;
    p->ad[2].u.w.hi = yo;
    p->ad[2].reg = 0x18;
    p->ad[3].u.w.lo = sx;
    p->ad[3].u.w.hi = sy;
    p->ad[3].reg = 0x40;
    p->ad[4].u.w.lo = frame;
    p->ad[4].u.w.hi = 0;
    p->ad[4].reg = 0x4D;
    p->ad[5].u.w.lo = zbuf;
    p->ad[5].u.w.hi = 0;
    p->ad[5].reg = 0x4F;
    p->ad[6].u.w.lo = xo;
    p->ad[6].u.w.hi = yo;
    p->ad[6].reg = 0x19;
    p->ad[7].u.w.lo = sx;
    p->ad[7].u.w.hi = sy;
    p->ad[7].reg = 0x41;
    p->ad[8].u.d = 1;
    p->ad[8].reg = 0x1A;
    p->ad[9].u.d = 1;
    p->ad[9].reg = 0x46;
    p->ad[10].u.d = (D_0047044C & 2) != 0;
    p->ad[10].reg = 0x45;
    p->ad[11].u.w.lo = 0x30002;
    p->ad[11].reg = 0x47;
    p->ad[12].u.xyz.x = (0x800 - D_00470414 / 2) << 4;
    p->ad[12].u.xyz.y = (0x800 - D_00470418 / 2) << 4;
    p->ad[12].u.xyz.z = 0;
    p->ad[12].reg = 5;
    if (col) {
        p->ad[13].u.rgbaq.r = (u32)(255.0f * col[0]);
        p->ad[13].u.rgbaq.g = (u32)(255.0f * col[1]);
        p->ad[13].u.rgbaq.b = (u32)(255.0f * col[2]);
        p->ad[13].u.rgbaq.a = (u32)(128.0f * col[3]);
    } else {
        p->ad[13].u.w.lo = 0x80000000;
    }
    p->ad[13].u.rgbaq.q = 1.0f;
    p->ad[13].reg = 1;
    p->ad[14].u.xyz.x = (D_00470414 / 2 + 0x800) << 4;
    p->ad[14].u.xyz.y = (D_00470418 / 2 + 0x800) << 4;
    p->ad[14].u.xyz.z = 0;
    if (col) {
        p->ad[14].reg = 5;
    } else {
        p->ad[14].reg = 0xD;
    }
    amDma_Request(0, 1, 1, 0, 0, (u32)p & 0x0FFFFFFF, 0x13, 0);
    amDraw3d_SetDefaultRegs();
}

void amDraw3d_SetTexFrame(s32 ctx, s32 filt, s32 tfx, u64 *texa) {
    PktTex *p;
    u128 q;
    s32 tw;
    u32 v;
    s32 th;
    u32 tbp;

    p = (PktTex *)amPkt_Alloc(0x60);
    for (tw = -1, v = D_00470414; v != 0; tw++, v = (s32)v >> 1) {
    }
    if (D_00470414 != 1 << tw) tw++;
    for (th = -1, v = D_00470418; v != 0; th++, v = (s32)v >> 1) {
    }
    if (D_00470418 != 1 << th) th++;
    tbp = D_00470474;
    if (D_004704A8 && D_00470408 == 1) {
        tbp = D_004703B0 ? D_00470484 : D_00470474;
    }
    p->code[0] = 0;
    p->code[1] = 0x11000000;
    p->code[2] = 0x13000000;
    p->code[3] = 0x50000004;
    PACK128(q, (u64)0xE, ((u64)0x10000000 << 32) | 0x8003);
    p->gif = q;
    p->ad[0].reg = 0x3F;
    p->ad[1].u.d = (filt << 5) | 1 | (filt << 6);
    p->ad[1].reg = ctx + 0x14;
    p->ad[2].u.w.lo = (tbp << 5) | (((D_00470414 + 0x3F) >> 6) << 14) | (D_0047044C << 20) | (tw << 26) | ((th & 3) << 30);
    p->ad[2].u.w.hi = (tfx << 3) | ((th >> 2) | (texa ? 0 : 4));
    p->ad[2].reg = ctx + 6;
    if (texa) {
        p->ad[3].u.d = *texa;
    } else {
        p->ad[3].u.d = ((u64)0x80 << 32) | 0x80;
    }
    p->ad[3].reg = 0x3B;
}

void amDraw3d_SetTexZ(s32 ctx, s32 filt, s32 tfx, u64 *texa) {
    PktTex *p;
    u128 q;
    s32 tw;
    u32 v;
    s32 th;
    u32 tbp;

    p = (PktTex *)amPkt_Alloc(0x60);
    for (tw = -1, v = D_0047041C; v != 0; tw++, v = (s32)v >> 1) {
    }
    if (D_0047041C != 1 << tw) tw++;
    for (th = -1, v = D_00470428; v != 0; th++, v = (s32)v >> 1) {
    }
    if (D_00470428 != 1 << th) th++;
    tbp = D_00470484;
    if (D_00470408 == 1) {
        tbp = D_004703B0 ? D_00470474 : D_00470484;
    }
    p->code[0] = 0;
    p->code[1] = 0x11000000;
    p->code[2] = 0x13000000;
    p->code[3] = 0x50000004;
    PACK128(q, (u64)0xE, ((u64)0x10000000 << 32) | 0x8003);
    p->gif = q;
    p->ad[0].reg = 0x3F;
    p->ad[1].u.d = (filt << 5) | 1 | (filt << 6);
    p->ad[1].reg = ctx + 0x14;
    p->ad[2].u.w.lo = (tbp << 5) | (((D_0047041C + 0x3F) >> 6) << 14) | (D_00470454 << 20) | (tw << 26) | ((th & 3) << 30);
    p->ad[2].u.w.hi = (tfx << 3) | ((th >> 2) | (texa ? 0 : 4));
    p->ad[2].reg = ctx + 6;
    if (texa) {
        p->ad[3].u.d = *texa;
    } else {
        p->ad[3].u.d = ((u64)0x80 << 32) | 0x80;
    }
    p->ad[3].reg = 0x3B;
}

void amDraw3d_SetScreen(ScreenCfg *c) {
    s8 def;
    f32 t;

    if (c) {
        def = 0;
        c->interlace = 0;
    } else {
        def = 1;
        c = &D_0047E870;
    }
    D_004704A8 = def;
    D_004703F8 = c->interlace;
    D_00470404 = c->hasDisp;
    D_0047040C = c->w;
    D_00470410 = c->h;
    D_00470414 = D_0047040C;
    D_00470418 = D_004703F8 ? D_00470410 / 2.0f : D_00470410;
    if (c->hasDisp) {
        D_0047042C = c->dw;
        D_00470430 = c->dh;
    } else {
        D_0047042C = c->w;
        D_00470430 = c->h;
    }
    D_00470474 = c->fbp;
    D_00470478 = D_00470474 << 13;
    D_0047044C = c->psm;
    D_0047046C = D_00470414 * D_00470418;
    D_00470470 = D_0047046C;
    switch (D_0047044C) {
    case 0:
    case 1:
        D_00470450 = 4;
        D_00470470 <<= 2;
        break;
    case 2:
    case 10:
        D_00470450 = 2;
        D_00470470 <<= 1;
        break;
    }
    D_00470490 = c->zbp;
    D_00470494 = D_00470490 << 13;
    D_0047045C = c->zpsm;
    D_0047048C = D_00470414 * D_00470418;
    switch (D_0047045C) {
    case 0:
        D_00470460 = 4;
        D_00470464 = -1;
        D_00470468 = 16770000.0f;
        D_0047048C <<= 2;
        break;
    case 1:
        D_00470460 = 4;
        D_00470464 = 0xFFFFFF;
        D_00470468 = 16770000.0f;
        D_0047048C <<= 2;
        break;
    case 2:
    case 10:
        D_00470460 = 2;
        D_00470464 = 0xFFFF;
        D_00470468 = 65500.0f;
        D_0047048C <<= 1;
        break;
    }
    if (def) {
        if (D_004703DC & 1) {
            t = 3.0f * D_0047042C / 4.0f;
            D_00470434 = 3.0f * D_0047040C / (4.0f * D_0047042C);
        } else {
            t = 3.0f * D_0047042C / 4.0f;
            D_00470434 = D_0047040C / D_0047042C;
        }
        if (!D_004703F8) {
            D_00470438 = D_00470418 / t;
        } else {
            D_00470438 = 2.0f * D_00470418 / t;
        }
    } else if (c->hasDisp) {
        D_00470434 = D_0047040C / D_0047042C;
        D_00470438 = D_00470410 / D_00470430;
    } else {
        D_00470434 = 1.0f;
        D_00470438 = 1.0f;
    }
}

void amDraw3d_SetDefaultRegs(void) {
    Pkt131200 *p;
    u128 q;

    p = (Pkt131200 *)amPkt_Alloc(0x100);
    PACK128_0(q, (u64)0x6000000F);
    p->dma = q;
    PACK128(q, (u64)0xE, 0x1000000000008000 | 0xE);
    p->gif = q;
    p->ad[0].u.w.lo = (D_00470414 - 1) << 16;
    p->ad[0].u.w.hi = (D_00470418 - 1) << 16;
    p->ad[0].reg = 0x40;
    p->ad[1].u.w.lo = 0x44;
    p->ad[1].reg = 0x42;
    p->ad[2].u.d = 0;
    p->ad[2].reg = 0x4A;
    p->ad[3].u.w.lo = 0x50002;
    p->ad[3].reg = 0x47;
    p->ad[4].u.w.lo = (D_00470414 - 1) << 16;
    p->ad[4].u.w.hi = (D_00470418 - 1) << 16;
    p->ad[4].reg = 0x41;
    p->ad[5].u.w.lo = 0x44;
    p->ad[5].reg = 0x43;
    p->ad[6].u.d = 0;
    p->ad[6].reg = 0x4B;
    p->ad[7].u.w.lo = 0x50002;
    p->ad[7].reg = 0x48;
    p->ad[8].u.d = 0;
    p->ad[8].reg = 0x49;
    p->ad[9].u.d = ((u64)0x80 << 32) | 0x80;
    p->ad[9].reg = 0x3B;
    p->ad[10].u.d = 1;
    p->ad[10].reg = 0x1A;
    p->ad[11].u.d = 0x6071243571603524;
    p->ad[11].reg = 0x44;
    p->ad[12].u.d = (D_0047044C & 2) != 0;
    p->ad[12].reg = 0x45;
    p->ad[13].u.d = 0;
    p->ad[13].reg = 0x22;
    amDma_Request(0, 2, 1, 1, (u32)p & 0x0FFFFFFF, 0, 0, 0);
}

void amDraw3d_ScreenShot(void) {
    u8 *buf;
    u8 *p;
    s32 n;
    void (*fn)(s32, s32);
    s32 chunk;

    buf = amHeap_Alloc(D_0047046C * 4, 0, D_0045F4F0, 0x704);
    FlushCache(0);
    func_0012FBF0(buf, 0, 0, 1);
    p = buf;
    n = D_00470470;
    switch (D_0047044C) {
    case 0:
        fn = func_00131620;
        break;
    case 1:
        n = D_00470414 * D_00470418 * 3;
        fn = func_001315C0;
        break;
    case 2:
    case 10:
        fn = func_00131560;
        break;
    }
    chunk = 0x1E00;
    while (1) {
        amDma_SendToSpr(0, p, chunk >> 4, 1);
        fn(0, chunk);
        amDma_SendFromSpr(p, 0x2000, chunk >> 4, 1);
        p += chunk & ~15;
        n -= chunk;
        if (n <= 0) break;
        if (n < chunk) chunk = n;
    }
    func_0012FFC0(buf, 0, 0);
    amHeap_Free(buf);
}

INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_00131560);
INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_00131570);
INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_001315C0);
INCLUDE_ASM("asm/nonmatchings/sys/amDraw3d", func_00131620);
