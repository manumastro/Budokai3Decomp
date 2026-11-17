#include "common.h"

/* One sprite of the debug text, as written into the GS packet (UV, XYZ, colour; two corners). */
typedef struct Spr {
    s32 u0, v0, p08, p0C;
    s32 x0, y0, p18, z0;
    s32 u1, v1, p28, p2C;
    u32 rgba;
    s32 p34;
    s32 q;
    s32 p3C;
    s32 x1, y1, z1, p4C;
} Spr;

extern u32 D_00470414;
extern u32 D_00470418;
/* the debug text screen: 28 rows of 64 characters, and a colour for each */
extern s8 D_0047A5C0[];
extern u32 D_0047ACC0[];
extern Spr D_00340390[];
extern u16 D_00340380[];
extern u16 D_003402E0[];
extern void func_00140D30(s32, s32, s32, s32, void *, s32, s32, s32);

INCLUDE_ASM("asm/nonmatchings/sys/unk_12EC10", func_0012EC10);
void func_0012ECB0(void) {
    f32 sx;
    f32 sy;
    s32 x;
    s32 y;
    s32 n;
    u32 *col;
    s8 *c;
    Spr *p;
    s32 ox;
    s32 oy;
    s8 ch;
    s32 u;
    s32 v;
    s32 px;
    s32 py;

    sx = 16.0f * D_00470414 / 64.0f;
    sy = 16.0f * D_00470418 / 28.0f;
    c = D_0047A5C0;
    col = D_0047ACC0;
    p = (Spr *)((u32)D_00340390 | 0x20000000);
    n = 0;
    ox = (0x800 - D_00470414 / 2) << 4;
    oy = (0x800 - D_00470418 / 2) << 4;
    for (y = 0; y < 28; y++) {
        for (x = 0; x < 64; col++, x++) {
            ch = *c++;
            if (ch) {
                u = (ch & 0xF) << 7;
                v = (ch & 0xF0) << 3;
                px = ox + (s32)(x * sx);
                py = oy + (s32)(y * sy);
                p->u0 = u;
                p->v0 = v;
                p->x0 = px;
                p->y0 = py;
                p->z0 = 0x8000;
                p->u1 = u + 0x80;
                p->v1 = v + 0x80;
                p->rgba = *col;
                p->q = 1;
                p->x1 = px + sx;
                p->y1 = py + sy;
                p->z1 = -1;
                p->p4C = 0;
                p++;
                n++;
            }
        }
    }
    if (n) {
        p = (Spr *)((u32)D_00340380 | 0x20000000);
        ((u16 *)p)[0] = n | 0x8000;
        n = n * 5 + 10;
        p = (Spr *)((u32)D_003402E0 | 0x20000000);
        ((u16 *)p)[0] = n + 1;
        ((u16 *)p)[6] = n;
        func_00140D30(0, 1, 1, 1, D_003402E0, 0, 0, 0);
    }
}

