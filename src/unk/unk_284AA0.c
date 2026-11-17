#include "common.h"

typedef struct Vec4f {
    f32 x, y, z, w;
} Vec4f __attribute__((aligned(16)));

typedef struct Model {
    char pad0[0x14];
    void **f14;
} Model;

typedef struct Disp {
    Model *f0;
    s32 f4;
    char pad8[0x40 - 0x8];
    void *f40;
    char pad44[0x266 - 0x44];
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

extern void func_00145CC0(s32, s32);
extern void func_00134690(s32, s32, Vec4f *, s32, s32, s32);
extern void func_00135F10(Vec4f *, Vec4f *);
extern void func_00137EE0(void);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00284F10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285330);
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285530);
void func_00285950(Disp *o, s32 n) {
    Vec4f pos = D_00453510;
    Vec4f uv = D_00453520;
    Vec4f col = D_00453530;

    col.w = o->f284;
    func_00145CC0(o->f4, 0x7000);
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
    func_00137EE0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285AA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_284AA0", func_00285C10);
void func_00285D90(Disp *o) {
    void *e = o->f40;
    s32 v;
    s32 w;

    D_00470704 = v = o->f4;
    D_0047070C = w = 0x7000;
    D_00470708 = 0;
    func_00145CC0(v, w);
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
