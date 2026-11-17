#include "common.h"

/* The init block of the movie player: 0x24 bytes, built on the stack. */
typedef struct SofInit {
    s32 a0;
    s32 a4;
    s32 a8;
    s32 aC;
    s32 a10;
    s32 a14;
    s32 a18;
    void *a1C;
    s16 a20;
} SofInit;

typedef struct Ac2E4 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    void *f30;
} Ac2E4;

extern s32 D_0046FD5C;
extern void *amSofdec_Create(SofInit *);
extern void func_002E54A0(void);

typedef struct Obj2E4 {
    char pad0[4];
    s32 f4;
    s32 f8;
    char pad0C[8];
    s32 f14;
    s16 f18;
    char pad1A[6];
    s32 f20;
    s32 f24;
    s32 f28;
    f32 f2C;
    s32 f30;
    s32 f34;
    f32 f38;
    f32 f3C;
    char pad40[0x10];
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
} Obj2E4;

typedef struct Ctx2E4 {
    char pad0[0x28];
    void *f28;
} Ctx2E4;

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

extern f32 D_00470430;
extern f32 D_0047042C;
extern void *A2d_AllocObj(f32, s32);

void ArenaStageSel_CreateObj(Ctx2E4 *c) {
    Obj2E4 *o;

    o = A2d_AllocObj(0.0f, 0);
    c->f28 = o;
    c = (Ctx2E4 *)o;
    memset(c, 0, 0x60);
    o = (Obj2E4 *)c;
    o->f4 = 1;
    o->f14 = -1;
    o->f18 = -1;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2C = 1.0f;
    o->f34 = 0;
    o->f3C = D_00470430;
    o->f30 = 0;
    o->f38 = D_0047042C;
    o->f50 = 0;
    o->f54 = 0;
    o->f58 = 0;
    o->f5C = 0;
    o->f8 = 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E40D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E44A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E46A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4AC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4D60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5040);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5170);
extern s32 func_0022D670(s32, f32);
extern void func_0022D0E0(s32, s32);
/* differs: compiled 0x144 against 0x150: the original keeps one more value live across the calls (it saves s7 as well:
   step), ours keeps seven saved registers; the walking pointer variant (e260_c) gave 0x13C. */
#if 0
void func_002E5260(u8 *a0) {
    u8 *base;
    s32 step;
    s32 i;
    s32 n;
    s32 idx;
    s32 off;
    u8 *q;
    s32 v;

    base = a0;
    step = 0x10000 / a0[0xF3];
    for (i = 0; i < 13; i++) {
        q = base + 0x30 + i * 12;
        if (*(s32 *)q != 0) {
            func_0022D0E0(*(s32 *)q, 0);
            *(s32 *)q = 0;
        }
    }
    if (a0[0xF3] > 0) {
        n = 0;
        idx = 0;
        off = 0;
        q = base;
        while (n < a0[0xF3]) {
            v = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)base + 0x1C) + 0x130), 0.0f);
            *(s32 *)(q + 0x30) = v;
            *(s32 *)(q + 0x34) = off;
            *(s16 *)(q + 0x38) = *(s16 *)(base + 0xD6 + n * 2);
            if (*(s16 *)(q + 0x38) == *(s16 *)(base + 0xF0)) {
                idx = (s16)n;
            }
            n++;
            q += 12;
            off += step;
        }
    }
    a0[0xF2] = (u8)idx;
    *(s32 *)(base + 0xF8) = *(u16 *)(base + (s16)idx * 12 + 0x34);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5260);
extern void func_002E5260(u8 *);

void func_002E53B0(u8 *a0, s16 a1) {
    u8 *obj;
    s32 n;
    s32 i;
    u8 *p;
    obj = a0;
    *(s16 *)(obj + 0xD2) = a1;
    n = 0;
    *(s16 *)(obj + 0xD4) = a1;
    memset(obj + 0xD6, -1, 0x1A);
    i = 0;
    p = obj;
    for (; i < 0xD; i++) {
        if (*(u16 *)(obj + 0xD2) & (1 << i)) {
            *(s16 *)(p + 0xD6) = i;
            n++;
            p += 2;
        }
    }
    obj[0xF3] = n;
    *(s32 *)(obj + 0x104) = 0x10000 / (obj[0xF3] * 12);
    if (obj[0xF4] == 2) {
        func_002E5260(obj);
    }
}
extern void A2d_FlushList(void);

void ArenaStage_TaskEnd(void) {
    A2d_FlushList();
}
void ArenaStage_TaskStart(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E54A0);
void Sofdec_TaskMain(Ac2E4 *s) {
    SofInit in;

    in.a0 = 0;
    in.a4 = 1;
    in.a8 = 0x1C2000;
    in.aC = 0x400;
    in.a10 = 0x200;
    in.a14 = 3;
    in.a18 = -1;
    in.a1C = (void *)D_0046FD5C;
    in.a20 = 0x60;
    s->f30 = amSofdec_Create(&in);
    s->f1C = (func_002E54A0 == NULL) ? NULL : (void *)func_002E54A0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5690);
typedef struct Sub57 {
    char pad0[0xC];
    s32 f0C;
    char pad10[0xC0];
    u16 fD0;
} Sub57;

typedef struct Outer57 {
    char pad0[0x30];
    Sub57 *f30;
} Outer57;

void func_002E4D60(Sub57 *);
s16 func_002F4A80(s32);
void func_002F4A90(s32);
void func_0028DF20(void);
void ArenaStageSel_Exit(Outer57 *);
void Scene_Request(s32, s32);
void func_001F07E0(s32, s32);

void func_002E57A0(Outer57 *a) {
    Sub57 *s;

    s = a->f30;
    func_002E4D60(s);
    if (func_002F4A80(s->f0C) == 4) {
        func_002F4A90(s->f0C);
        s->f0C = 0;
        if (a->f30->fD0 & 0x80) {
            func_0028DF20();
        }
        ArenaStageSel_Exit(a);
        Scene_Request(0x19, 0);
        func_001F07E0(0xA, 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5B10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5C20);
