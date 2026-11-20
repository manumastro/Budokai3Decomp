#include "common.h"

typedef struct Vec4f {
    f32 x, y, z, w;
} Vec4f __attribute__((aligned(16)));

typedef struct Model {
    char pad0[0x14];
    void **f14;
} Model;

typedef struct DispEnt {
    void *p;
    s32 f4;
    s16 f8;
} DispEnt;

typedef struct Disp {
    Model *f0;
    s32 f4;
    char pad8[0x14 - 0x8];
    void *f14[11];
    void *f40;
    DispEnt ent[13];
    char padE0[0x266 - 0xE0];
    s8 f266;
    s8 f267;
    s8 f268;
    char pad269[0x280 - 0x269];
    f32 f280;
    f32 f284;
} Disp;

extern Vec4f D_00453510;
extern Vec4f D_00453520;
extern Vec4f D_00453530;
extern u8 D_0046B841[];

extern void amModel_SetCurrent(s32, s32);
extern void func_00134690(s32, s32, Vec4f *, s32, s32, s32);
extern void func_00135F10(Vec4f *, Vec4f *);
extern void amDraw_FlushPacket(void);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern u8 D_0046B880[][3];
extern s32 func_0022BF80(void *);
extern u32 func_0012EAE0(s32);
extern void func_0022D0E0(void *, s32);
extern void *func_0022D860(void *, f32);
extern void func_0022C060(void *, f32);
extern void func_0022CD00(void *);

INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00284AA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00284CB0);
extern Vec4f D_00453570;
extern Vec4f D_00453580;
extern Vec4f D_00453590;
extern s32 amSofdec_Draw(s32);
extern void func_00135D40(void *, void *, void *);
extern f32 amMath_CosI(s32);
extern f32 amMath_SinI(s32);
extern void amVram_Apply(s32);

void func_00284F10(Disp *d) {
    Vec4f pos;
    Vec4f uv;
    Vec4f col;
    s32 a;
    s32 b;
    s32 i;
    s32 r;

    pos = D_00453570;
    uv = D_00453580;
    col = D_00453590;
    if (*(s32 *)(*(u8 **)((u8 *)d + 0x230) + 0x30) >= 0) {
        r = amSofdec_Draw(*(s32 *)(*(u8 **)((u8 *)d + 0x230) + 0x30));
        switch (r) {
        default:
            return;
        case 1:
        case 2:
            i = 0;
            do {
                func_00134690(1, 0x100C36, 0, -1, 0x44, 5);
                a = (f32)(i << 16) / 16.0f;
                b = (f32)((i + 1) << 16) / 16.0f;
                pos.x = 0.0f;
                pos.y = 0.0f;
                uv.x = 0.43554688f;
                uv.y = 0.43554688f;
                col.w = d->f284;
                func_00135D40(&pos, &col, &uv);
                pos.x = 160.0f * amMath_CosI(b);
                pos.y = 160.0f * amMath_SinI(b);
                uv.x = 0.43554688f + 0.2903645932674408f * amMath_CosI(b + 0x8000);
                uv.y = 0.43554688f + 0.2903645932674408f * amMath_SinI(b + 0x8000);
                col.w = 0.6f * d->f284;
                func_00135D40(&pos, &col, &uv);
                pos.x = 160.0f * amMath_CosI(a);
                pos.y = 160.0f * amMath_SinI(a);
                uv.x = 0.43554688f + 0.2903645932674408f * amMath_CosI(a + 0x8000);
                uv.y = 0.43554688f + 0.2903645932674408f * amMath_SinI(a + 0x8000);
                func_00135D40(&pos, &col, &uv);
                pos.x = 240.0f * amMath_CosI(b);
                pos.y = 240.0f * amMath_SinI(b);
                uv.x = 0.43554688f + 0.43554688f * amMath_CosI(b + 0x8000);
                uv.y = 0.43554688f + 0.43554688f * amMath_SinI(b + 0x8000);
                col.w = 0.0f;
                func_00135D40(&pos, &col, &uv);
                pos.x = 240.0f * amMath_CosI(a);
                pos.y = 240.0f * amMath_SinI(a);
                uv.x = 0.43554688f + 0.43554688f * amMath_CosI(a + 0x8000);
                uv.y = 0.43554688f + 0.43554688f * amMath_SinI(a + 0x8000);
                func_00135D40(&pos, &col, &uv);
                amDraw_FlushPacket();
                i++;
            } while ((f32)i < 16.0f);
            amVram_Apply(2);
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285330);
extern Vec4f D_00453540;
extern Vec4f D_00453550;
extern Vec4f D_00453560;
extern u8 D_0046B840[];

void func_00285530(Disp *d, s16 a1) {
    Vec4f pos;
    Vec4f uv;
    Vec4f col;
    s32 a;
    s32 b;
    s32 i;
    u8 *p;

    pos = D_00453540;
    uv = D_00453550;
    col = D_00453560;
    amModel_SetCurrent(d->f4, 0x7000);
    i = 0;
    p = &D_0046B840[a1 * 2];
    do {
        func_00134690(1, 0x100C36, 0, *p, 0x44, 5);
        a = (f32)(i << 16) / 16.0f;
        b = (f32)((i + 1) << 16) / 16.0f;
        pos.x = 0.0f;
        pos.y = 0.0f;
        uv.x = 0.2900390625f;
        uv.y = 0.2900390625f;
        col.w = d->f284;
        func_00135D40(&pos, &col, &uv);
        pos.x = 160.0f * amMath_CosI(b);
        pos.y = 160.0f * amMath_SinI(b);
        uv.x = 0.2900390625f + 0.193359375f * amMath_CosI(b + 0x8000);
        uv.y = 0.2900390625f + 0.193359375f * amMath_SinI(b + 0x8000);
        col.w = 0.6f * d->f284;
        func_00135D40(&pos, &col, &uv);
        pos.x = 160.0f * amMath_CosI(a);
        pos.y = 160.0f * amMath_SinI(a);
        uv.x = 0.2900390625f + 0.193359375f * amMath_CosI(a + 0x8000);
        uv.y = 0.2900390625f + 0.193359375f * amMath_SinI(a + 0x8000);
        func_00135D40(&pos, &col, &uv);
        pos.x = 240.0f * amMath_CosI(b);
        pos.y = 240.0f * amMath_SinI(b);
        uv.x = 0.2900390625f + 0.2900390625f * amMath_CosI(b + 0x8000);
        uv.y = 0.2900390625f + 0.2900390625f * amMath_SinI(b + 0x8000);
        col.w = 0.0f;
        func_00135D40(&pos, &col, &uv);
        pos.x = 240.0f * amMath_CosI(a);
        pos.y = 240.0f * amMath_SinI(a);
        uv.x = 0.2900390625f + 0.2900390625f * amMath_CosI(a + 0x8000);
        uv.y = 0.2900390625f + 0.2900390625f * amMath_SinI(a + 0x8000);
        func_00135D40(&pos, &col, &uv);
        amDraw_FlushPacket();
        i++;
    } while ((f32)i < 16.0f);
}
void func_00285950(Disp *o, s32 n) {
    Vec4f pos = D_00453510;
    Vec4f uv = D_00453520;
    Vec4f col = D_00453530;

    col.w = o->f284;
    amModel_SetCurrent(o->f4, 0x7000);
    func_00134690(1, 0x101924, &col, D_0046B841[(s16)n * 2], 0x44, 5);
    pos.x = 250.0f;
    pos.y = 250.0f;
    uv.x = 0.005859375f;
    uv.y = 0.005859375f;
    func_00135F10(&pos, &uv);
    pos.x = -250.0f;
    uv.x = 0.5859375f;
    func_00135F10(&pos, &uv);
    pos.x = 250.0f;
    pos.y = -250.0f;
    uv.x = 0.005859375f;
    uv.y = 0.5859375f;
    func_00135F10(&pos, &uv);
    pos.x = -250.0f;
    uv.x = 0.5859375f;
    func_00135F10(&pos, &uv);
    amDraw_FlushPacket();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285AA0);
void func_00285C10(Disp *o) {
    DispEnt *e;
    s32 i;

    if (o->f14[0] != NULL) {
        func_0022D0E0(o->f14[0], 1);
    }
    if (o->f14[1] != NULL) {
        func_0022D0E0(o->f14[1], 1);
    }
    if (o->f14[2] != NULL) {
        func_0022D0E0(o->f14[2], 1);
    }
    if (o->f14[3] != NULL) {
        func_0022D0E0(o->f14[3], 1);
    }
    if (o->f14[4] != NULL) {
        func_0022D0E0(o->f14[4], 1);
    }
    if (o->f14[5] != NULL) {
        func_0022D0E0(o->f14[5], 1);
    }
    if (o->f14[6] != NULL) {
        func_0022D0E0(o->f14[6], 1);
    }
    if (o->f14[7] != NULL) {
        func_0022D0E0(o->f14[7], 1);
    }
    if (o->f14[8] != NULL) {
        func_0022D0E0(o->f14[8], 1);
    }
    if (o->f14[9] != NULL) {
        func_0022D0E0(o->f14[9], 1);
    }
    if (o->f14[10] != NULL) {
        func_0022D0E0(o->f14[10], 1);
    }
    if (o->f40 != NULL) {
        func_0022D0E0(o->f40, 1);
    }
    for (i = 0; i < 13; i++) {
        e = &o->ent[i];
        if (e->p != NULL) {
            func_0022D0E0(e->p, 1);
            e->p = NULL;
        }
    }
}
void func_00285D90(Disp *o) {
    void *e = o->f40;
    s32 v;
    s32 w;

    D_00470704 = v = o->f4;
    D_0047070C = w = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(v, w);
    D_00470238 = 0;
    if (e != NULL) {
        if (func_0022BF80(e) == 0xFF) {
            o->f268++;
            if (o->f268 > 2) {
                o->f266 = 1;
                o->f280 = 60.0f * (f32)((func_0012EAE0(0x20) + 1) & 7);
                return;
            }
            if (o->f268 == 2) {
                o->f266 = 4;
            }
            if (o->f40 != NULL) {
                func_0022D0E0(o->f40, 1);
            }
            o->f40 = func_0022D860(o->f0->f14[D_0046B880[o->f267][o->f268]], 0.0f);
        }
        func_0022C060(e, 1.0f);
        func_0022CD00(e);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285EF0);
