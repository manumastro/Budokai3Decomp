#include "common.h"

#include "battle/character.h"

/* A mantle or cloth (char_cloth.c, char_mant.c): the cloth grid drawn by char_acsr.c. */
typedef struct ClothDraw {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ void *unk04;
} ClothDraw;

typedef struct Cloth {
    /* 0x00 */ void *grid;
    /* 0x04 */ u8 unk04[0x70 - 0x04];
    /* 0x70 */ ClothDraw *draw;
} Cloth;

extern void amHeap_Free(void *);
extern void func_001D15C0(void *);
extern void func_001D16F0(void *);
extern void amModel_SetCurrent(s32, void *);
extern void amGs_SetReg64(s32, s32);
extern s32 func_0029D4C0(void);
extern void func_0029D4B0(s32);
extern s32 func_0029D8D0(void);
extern s32 func_0029D4A0(void);
extern void func_001339B0(s32);
extern void func_00133920(s32, s32, s32, s32, s32);
extern void func_00133980(f32, f32, f32, f32);

static inline void Cloth_Draw(Cloth *c) {
    if (c != 0) {
        amGs_SetReg64(1, func_0029D4C0());
        amModel_SetCurrent(c->draw->unk00, c->draw->unk04);
        func_001D16F0(c->grid);
        amGs_SetReg64(1, 0x44);
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/char_cloth", func_001D1B80);
INCLUDE_ASM("asm/nonmatchings/battle/char_cloth", func_001D1ED0);
s32 func_001D2300(s32 w, s32 h, s32 n) {
    s32 a = (w - 1) * h + (h - 1) * w;
    s32 wh = (w * h) * 0x80;
    s32 b = (a + (w - 1) * (h - 1) * 2) * 0x10 + 0x80;
    return (n << 6) + (b + wh);
}
INCLUDE_ASM("asm/nonmatchings/battle/char_cloth", func_001D2340);
void func_001D2580(Cloth *c) {
    if (c != 0) {
        func_001D15C0(c->grid);
    }
}
void func_001D25B0(Cloth *c) {
    s32 old;
    if (c != 0) {
        Cloth_Draw(c);
        if (c != 0 && (func_0029D8D0() & 2) && func_0029D4C0() != 0x44) {
            old = func_0029D4C0();
            func_0029D4B0(0x44);
            func_001339B0(func_0029D4A0());
            func_00133920(0x10000F20, 0, 0, 0x10000A00, 0);
            Cloth_Draw(c);
            func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
            func_00133920(0, 0x10000F20, 0, 0, 0);
            func_0029D4B0(old);
        }
    }
}
void func_001D2710(Cloth *c) {
}
void CharCloth_Release(Cloth *c) {
    if (c != 0) {
        amHeap_Free(c);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_cloth", func_001D2750);
s32 func_001D2B30(Cloth *c) {
    return 1;
}
