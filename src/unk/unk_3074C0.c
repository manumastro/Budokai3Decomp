#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_3074C0", func_003074C0);
extern void amDraw_FlushPacket(void);
typedef struct TaskData_c3075B0 {
    void *work;
    s32 wait;
} TaskData_c3075B0;
typedef struct Task_c3075B0 {
    char name[16];
    s32 f10;
    s32 f14;
    s32 prio;
    void (*func_c3075B0)(struct Task_c3075B0 *);
    void (*func2)(struct Task_c3075B0 *);
    struct Task_c3075B0 *prev;
    struct Task_c3075B0 *next;
    s32 f2C;
    TaskData_c3075B0 data;
} Task_c3075B0;
typedef struct Vec4_c3075B0 {
    f32 x, y, z, w;
} Vec4_c3075B0 ;
typedef struct StrSelectModel_c3075B0 {
    char pad0[0x14];
    s32 *obj;
    char pad18[4];
    s32 *f1C;
} StrSelectModel_c3075B0;
typedef struct StrSelectWork_c3075B0 {
    StrSelectModel_c3075B0 * model;
    void * tex;
    s32 f8;
    Task_c3075B0 * task;
    s32 f10;
    u8 pad_0[0x2];
    u8 f58[7];
    u8 pad_1[0x3];
    s32 f20;
    s32 f24;
    u8 pad_2[0xC];
    f32 f44;
    f32 f48;
    f32 f4C;
    u8 pad_3[0x11];
    u8 f51;
    u8 f52;
    u8 pad_4[0x1];
    f32 f54;
    u8 pad_5[0x7];
    u8 f5F;
    u32 f60;
    u32 f64;
} StrSelectWork_c3075B0;
extern Vec4_c3075B0 D_00458F20;
extern Vec4_c3075B0 D_00458F30;
extern Vec4_c3075B0 D_00458F40;
extern void amDraw_FlushPacket(void);
extern f32 amMath_CosI(s32);
extern f32 amMath_SinI(s32);
extern void func_001363D0(s32, s32, Vec4_c3075B0 *, s32);
extern void func_00136870(s32, s32, Vec4_c3075B0 *, s32, s32, s32);
extern void func_00137B60(Vec4_c3075B0 *);

void func_003075B0(StrSelectWork_c3075B0 *w) {
    Vec4_c3075B0 pos;
    Vec4_c3075B0 pts[7];
    Vec4_c3075B0 c1;
    Vec4_c3075B0 c2;
    f32 r;
    s32 a;
    s32 i;
    Vec4_c3075B0 *q;
    Vec4_c3075B0 *p;
    s32 j;

    a = 0xC000;
    pos = D_00458F20;
    pos.x = w->f44;
    pos.y = w->f48;
    c1 = D_00458F30;
    c2 = D_00458F40;
    func_00136870(2, 0x900, &c1, -1, 0x44, 5);
    func_00137B60(&pos);
    q = pts;
    p = q;
    for (i = 0; i < 7; i++) {
        r = w->f4C * w->f58[i] / 20.0f;
        p->x = w->f44 + r * amMath_CosI(a);
        r = w->f4C * w->f58[i] / 20.0f;
        p->y = w->f48 + r * amMath_SinI(a);
        p->z = 1.0f;
        p->w = 1.0f;
        func_00137B60(p);
        a += 0x2492;
        p++;
    }
    func_00137B60(pts);
    amDraw_FlushPacket();
    func_001363D0(1, 0x100, &c2, 0x44);
    for (j = 0; j < 7; j++) {
        func_00137B60(q);
        q++;
    }
    func_00137B60(pts);
    amDraw_FlushPacket();
}
