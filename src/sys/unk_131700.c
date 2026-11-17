#include "common.h"

typedef unsigned __int128 u128;

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

typedef struct Vec2 {
    f32 x, y;
} Vec2;

/* 0x60 bytes, filled from the template at D_003F01F0; the fields are not understood yet. */
typedef struct Screen {
    Vec4 v0;
    f32 f10, f14, f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C, f40, f44;
    Vec2 v48;
    f32 f50, f54;
    Vec2 v58;
} Screen;

typedef struct Q4 {
    u128 q[4];
} Q4;

extern u64 func_00121288(f32);
extern void func_00140D30(u32, u32, u32, u32, u32, u32, u32, u32);

extern Screen D_003F01F0;
extern s8 D_00470404;
extern u32 D_00470414, D_00470418;
extern f32 D_0047040C, D_00470410, D_0047042C, D_00470430;
extern f32 D_00470434, D_00470438, D_00470468;
extern u32 D_004703DC;
extern u64 *D_00470228;
extern s32 D_00470268;
extern u8 D_0047026C[4];
extern Q4 D_0047C950, D_0047C990, D_0047C9D0;
extern s32 D_00459250[4], D_00459260[4], D_00459270[4], D_00459280[4];
extern Vec4 D_00459310[4];

INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00131700);
void func_00131B90(Screen *s) {
    Screen l = D_003F01F0;
    l.v0.x = 2047.0f / D_00470434;
    l.v0.y = 2047.0f / D_00470438;
    l.v0.w = D_00470468;
    l.f10 = D_00470434;
    l.f14 = D_00470438;
    l.f2C = D_00470468;
    s->v0 = l.v0;
    s->f10 = l.f10;
    s->f14 = l.f14;
    s->f18 = l.f18;
    s->f1C = l.f1C;
    s->f20 = l.f20;
    s->f24 = l.f24;
    s->f28 = l.f28;
    s->f2C = l.f2C;
    s->f30 = l.f30;
    s->f34 = l.f34;
    s->f38 = l.f38;
    s->f3C = l.f3C;
    s->f40 = l.f40;
    s->f44 = l.f44;
    s->v48 = l.v48;
    s->f50 = l.f50;
    s->f54 = l.f54;
    s->v58 = l.v58;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00131D00);
INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00131F00);
INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00132610);
INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00132D20);
INCLUDE_ASM("asm/nonmatchings/sys/unk_131700", func_00132DF0);
void func_00132F60(f32 *r, s32 raw) {
    f32 x, y, z, w;
    u64 v;
    u64 *p;
    f32 h;

    if (r == 0) {
        v = ((u64)D_00470414 - 1) << 16 | ((u64)D_00470418 - 1) << 48;
    } else {
        x = r[0];
        y = r[1];
        z = r[2];
        w = r[3];
        if (raw == 0) {
            if (D_00470404) {
                x *= (f32)D_00470414 / D_0047042C;
                y *= (f32)D_00470418 / D_00470430;
                z *= (f32)D_00470414 / D_0047042C;
                w *= (f32)D_00470418 / D_00470430;
            } else {
                x *= (f32)D_00470414 / D_0047040C;
                y *= (f32)D_00470418 / D_00470410;
                z *= (f32)D_00470414 / D_0047040C;
                w *= (f32)D_00470418 / D_00470410;
            }
            if (D_004703DC & 2) {
                h = 0.5f * (f32)D_00470414;
                x = h + 3.0f * (x - h) / 4.0f;
                z = h + 3.0f * (z - h) / 4.0f;
            }
        }
        v = func_00121288(x) << 0 | (func_00121288(z) - 1) << 16 | func_00121288(y) << 32 | (func_00121288(w) - 1) << 48;
    }
    p = D_00470228;
    p[0] = 0x11000000 | ((u64)0x13000000 << 32);
    p[1] = (u64)0x50000003 << 32;
    p[2] = 0x8002 | ((u64)0x10000000 << 32);
    p[3] = 0xE;
    p[4] = v;
    p[5] = 0x40;
    p[6] = v;
    p[7] = 0x41;
    func_00140D30(0, 1, 1, 0, 0, (u32)p & 0x0FFFFFFF, 4, 0);
    p += 8;
    D_00470228 = p;
}

void func_00133420(s32 mode) {
    f32 zero[4] = {0};
    s32 i;

    D_00470268 = mode;
    switch (mode) {
    case 0:
        *(Q4 *)D_00459250 = D_0047C950;
        break;
    case 1:
        *(Q4 *)D_00459250 = D_0047C990;
        *(Q4 *)D_00459310 = D_0047C9D0;
        for (i = 0; i < 4; i++) {
            if (D_0047026C[i] == 0) {
                D_00459250[i] = 0;
                D_00459260[i] = 0;
                D_00459270[i] = 0;
                D_00459280[i] = 0;
                D_00459310[i].x = zero[0];
                D_00459310[i].y = zero[1];
                D_00459310[i].z = zero[2];
                D_00459310[i].w = zero[3];
            }
        }
        break;
    case 2:
        break;
    }
}
