#include "common.h"

typedef unsigned __int128 u128;

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

/* The packet being built (a bump pointer) and its counters. */
extern u8 *gPacketPtr;
extern s32 gPacketQwc, D_00470294, D_00470298, D_0047029C;
extern s32 D_00470270;
extern u8 *D_0047027C;
extern f32 D_003F01E0[4];
extern u64 D_0047CA10[2];
extern u128 D_0047CA20;
extern Vec4 D_0047CA30;

/* Multiplies two quadwords in VU0 (inline assembly). */
#define VMUL(d, a, b) \
    __asm__ volatile ("lqc2 $vf1, 0(%2)\n\tlqc2 $vf2, 0(%1)\n\tvmul.xyzw $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" \
                      : : "r"(d), "r"(b), "r"(a))

/* The vertex blocks below transform a point by the matrix in vf20/vf21 (perspective divide, depth clamp) and
 * store the GS XYZ2 register data; the original's inline assembly, with C temporaries x, y, z. */

void func_00137440(u32 a0, s32 alpha) {
    u8 *p = gPacketPtr;
    *(u32 *)p = a0;
    *(u64 *)(p + 8) = 0x3D;
    p[0x17] = 0xFF - alpha;
    *(u64 *)(p + 0x18) = 0xA;
    gPacketPtr = p + 0x20;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}


void func_001374A0(Vec4 *v, f32 *uv) {
    u8 *p = gPacketPtr;

    ((f32 *)p)[0] = uv[0];
    ((f32 *)p)[1] = uv[1];
    *(u64 *)(p + 8) = 2;
    {
        u32 x, y, z;
        asm {
            lqc2 vf1, 0(v)
            lui z, 0
            ori z, z, 5
            sw z, 0x18(p)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0x1c(p)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x14(p)
            or x, x, y
            sw x, 0x10(p)
        }
    }
    gPacketPtr = p + 0x20;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}

void func_00137560(Vec4 *v, f32 *uv) {
    u8 *p = gPacketPtr;

    *(s16 *)(p + 0) = (s32)(16.0f * uv[0]);
    *(s16 *)(p + 2) = (s32)(16.0f * uv[1]);
    *(u64 *)(p + 8) = 3;
    {
        u32 x, y, z;
        asm {
            lqc2 vf1, 0(v)
            lui z, 0
            ori z, z, 5
            sw z, 0x18(p)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0x1c(p)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x14(p)
            or x, x, y
            sw x, 0x10(p)
        }
    }
    gPacketPtr = p + 0x20;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}

void func_00137650(Vec4 *v, Vec4 *c, f32 *uv) {
    u8 *p = gPacketPtr;

    if (c == 0) c = (Vec4 *)D_003F01E0;
    *(s16 *)(p + 0) = (s32)(16.0f * uv[0]);
    *(s16 *)(p + 2) = (s32)(16.0f * uv[1]);
    *(u64 *)(p + 8) = 3;
    VMUL(p + 0x10, c, &D_0047CA30);
    ((s8 *)p)[0x10] = *(f32 *)(p + 0x10);
    ((s8 *)p)[0x11] = *(f32 *)(p + 0x14);
    ((s8 *)p)[0x12] = *(f32 *)(p + 0x18);
    ((s8 *)p)[0x13] = *(f32 *)(p + 0x1c);
    *(f32 *)(p + 0x14) = 1.0f;
    *(u64 *)(p + 0x18) = 1;
    {
        u32 x, y, z;
        u8 *q = p + 0x20;
        asm {
            lqc2 vf1, 0(v)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(q)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(q)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(q)
            or x, x, y
            sw x, 0(q)
        }
    }
    gPacketPtr = p + 0x30;
    gPacketQwc += 3;
    D_00470294 += 3;
    D_00470298 += 3;
}

void func_001377E0(Vec4 *v, Vec4 *c) {
    u8 *p = gPacketPtr;

    if (c == 0) c = (Vec4 *)D_003F01E0;
    VMUL(p, c, &D_0047CA30);
    ((s8 *)p)[0x0] = *(f32 *)(p + 0x0);
    ((s8 *)p)[0x1] = *(f32 *)(p + 0x4);
    ((s8 *)p)[0x2] = *(f32 *)(p + 0x8);
    ((s8 *)p)[0x3] = *(f32 *)(p + 0xc);
    *(f32 *)(p + 0x4) = 1.0f;
    *(u64 *)(p + 0x8) = 1;
    {
        u32 x, y, z;
        u8 *q = p + 0x10;
        asm {
            lqc2 vf1, 0(v)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(q)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(q)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(q)
            or x, x, y
            sw x, 0(q)
        }
    }
    gPacketPtr = p + 0x20;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}

void func_00137920(Vec4 *va, Vec4 *c0, Vec4 *vb, Vec4 *c1) {
    u8 *p = gPacketPtr;

    if (c0 == 0) c0 = (Vec4 *)D_003F01E0;
    if (c1 == 0) c1 = (Vec4 *)D_003F01E0;
    VMUL(p, c0, &D_0047CA30);
    ((s8 *)p)[0x0] = *(f32 *)(p + 0x0);
    ((s8 *)p)[0x1] = *(f32 *)(p + 0x4);
    ((s8 *)p)[0x2] = *(f32 *)(p + 0x8);
    ((s8 *)p)[0x3] = *(f32 *)(p + 0xc);
    *(f32 *)(p + 0x4) = 1.0f;
    *(u64 *)(p + 0x8) = 1;
    {
        u32 x, y, z;
        u8 *q = p + 0x10;
        asm {
            lqc2 vf1, 0(va)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(q)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(q)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(q)
            or x, x, y
            sw x, 0(q)
        }
    }
    VMUL(p + 0x20, c1, &D_0047CA30);
    ((s8 *)p)[0x20] = *(f32 *)(p + 0x20);
    ((s8 *)p)[0x21] = *(f32 *)(p + 0x24);
    ((s8 *)p)[0x22] = *(f32 *)(p + 0x28);
    ((s8 *)p)[0x23] = *(f32 *)(p + 0x2c);
    *(f32 *)(p + 0x24) = 1.0f;
    *(u64 *)(p + 0x28) = 1;
    {
        u32 x, y, z;
        u8 *q = p + 0x30;
        asm {
            lqc2 vf1, 0(vb)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(q)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(q)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(q)
            or x, x, y
            sw x, 0(q)
        }
    }
    gPacketPtr = p + 0x40;
    gPacketQwc += 4;
    D_00470294 += 4;
    D_00470298 += 4;
}

void func_00137B60(Vec4 *v) {
    u8 *p = gPacketPtr;

    {
        u32 x, y, z;
        asm {
            lqc2 vf1, 0(v)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(p)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(p)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(p)
            or x, x, y
            sw x, 0(p)
        }
    }
    gPacketPtr = p + 0x10;
    gPacketQwc += 1;
    D_00470294 += 1;
    D_00470298 += 1;
}

void func_00137C10(Vec4 *va, Vec4 *vb) {
    u8 *p = gPacketPtr;

    {
        u32 x, y, z;
        asm {
            lqc2 vf1, 0(va)
            lui z, 0
            ori z, z, 5
            sw z, 0x8(p)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0xc(p)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x4(p)
            or x, x, y
            sw x, 0(p)
        }
    }
    {
        u32 x, y, z;
        asm {
            lqc2 vf1, 0(vb)
            lui z, 0
            ori z, z, 5
            sw z, 0x18(p)
            vdiv Q, vf0w, vf1z
            vaddx.z vf1, vf0, vf0x
            sw zero, 0x1c(p)
            vmulaw.xyzw ACC, vf21, vf0w
            vmadd.xyzw vf1, vf20, vf1
            vwaitq
            vmaddq.z vf1, vf20, Q
            vmaxw.z vf1, vf1, vf20w
            vminiw.z vf1, vf1, vf21w
            vaddy.x vf2, vf0, vf1y
            vaddz.x vf3, vf0, vf1z
            vftoi0.xyzw vf1, vf1
            vftoi0.xyzw vf2, vf2
            vftoi0.xyzw vf3, vf3
            qmfc2.ni x, vf1
            qmfc2.ni y, vf2
            qmfc2.ni z, vf3
            andi x, x, 0xFFFF
            andi y, y, 0xFFFF
            sll y, y, 16
            sw z, 0x14(p)
            or x, x, y
            sw x, 0x10(p)
        }
    }
    gPacketPtr = p + 0x20;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}

void amDraw_ClosePacket(s32 mode) {
    u8 *p = gPacketPtr;
    u64 v;
    u8 *q;
    if (mode == -1) mode = D_0047029C;
    else D_0047029C = mode;
    switch (D_00470270) {
    case 0:
        break;
    case 2:
        v = D_0047CA10[0] & ~7;
        if (mode) v |= 2;
        else v |= 1;
        goto common;
    case 6:
        v = D_0047CA10[0] & ~7;
        switch (mode) {
        case 1: v |= 4; break;
        case 2: v |= 5; break;
        case 0:
        default: v |= 3; break;
        }
    common:
        *(u64 *)p = v;
        *(u64 *)(p + 8) = 0;
        *(u128 *)(p + 0x10) = D_0047CA20;
        gPacketPtr = p + 0x20;
        gPacketQwc += 2;
        D_00470294 += 2;
        D_00470298 += 2;
        break;
    default:
        q = D_0047027C;
        q[0xE] = D_00470294;
        *(s32 *)(q + 0x14) = D_00470298;
        *(u32 *)p = 0;
        *(u32 *)(p + 4) = 0;
        *(u64 *)(p + 8) = (u64)0x6C01C000 << 32;
        *(u32 *)(p + 0x10) = mode;
        *(u32 *)(p + 0x14) = 0;
        *(u32 *)(p + 0x20) = 0x14000008;
        *(u32 *)(p + 0x24) = 0;
        *(u32 *)(p + 0x28) = 0;
        *(u32 *)(p + 0x2C) = 0;
        gPacketPtr = p + 0x30;
        gPacketQwc += 3;
        D_00470294 = 1;
        D_00470298 = 0;
        D_0047027C = p;
        break;
    }
}
