#include "common.h"

/* Camera: the view matrix and the projection onto the screen rectangle. */
typedef struct Rect { f32 x0, y0, x1, y1; } Rect;
typedef struct Cam { f32 m[4][4]; f32 view[4][4]; Rect clip; f32 ix; f32 iy; f32 sx; f32 sy; } Cam;
extern f32 D_0047042C;
extern f32 D_00470430;

INCLUDE_ASM("asm/nonmatchings/sys/unk_13FC20", func_0013FC20);

void amCamera_SetClip(Cam *c, Rect *r) {
    f32 w;
    f32 h;
    f32 cx;
    f32 cy;

    asm __volatile__("lqc2 vf1, 0x0(%0)\n lqc2 vf2, 0x10(%0)\n lqc2 vf3, 0x20(%0)\n lqc2 vf4, 0x30(%0)\n"
                     "sqc2 vf1, 0x0(%1)\n sqc2 vf2, 0x10(%1)\n sqc2 vf3, 0x20(%1)\n sqc2 vf4, 0x30(%1)\n"
                     : : "r"(c->view), "r"(c->m) : "memory");
    w = r->x1 - r->x0;
    h = r->y1 - r->y0;
    cx = 0.5f * (r->x1 + r->x0);
    cy = 0.5f * (r->y1 + r->y0);
    c->m[3][0] -= cx;
    c->m[3][1] -= cy;
    c->ix = D_0047042C / w;
    c->iy = D_00470430 / h;
    if (w != 0.0f) {
        w = (D_0047042C - 2.0f) / w;
    } else {
        w = 1.0f;
    }
    if (h != 0.0f) {
        h = (D_00470430 - 2.0f) / h;
    } else {
        h = 1.0f;
    }
    c->sx = D_0047042C;
    c->sy = D_00470430;
    c->m[0][0] *= w;
    c->m[1][0] *= w;
    c->m[2][0] *= w;
    c->m[3][0] *= w;
    c->m[0][1] *= h;
    c->m[1][1] *= h;
    c->m[2][1] *= h;
    c->m[3][1] *= h;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_13FC20", func_00140010);
INCLUDE_ASM("asm/nonmatchings/sys/unk_13FC20", func_00140420);
