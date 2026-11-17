#include "common.h"

typedef struct Scene2D8 {
    char pad0[0x354];
    void *f354;
    char pad358[4];
    void *f35C;
    char pad360[0x18];
    s32 f378;
    char pad37C[0x10];
    f32 f38C;
    char pad390[4];
    f32 f394;
    char pad398[0xC];
    f32 f3A4;
} Scene2D8;

extern s8 D_004703F4;
extern Scene2D8 *gOptionWork;
extern void func_002D92C0(void);
extern void func_002D96D0(void);

void func_002D9510(void) {
    Scene2D8 *s = gOptionWork;
    f32 a;

    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f394 += a;
    if (s->f394 > 60.0f) {
        s->f394 = 0.0f;
        s->f35C = func_002D92C0;
    }
}
void func_002D9580(void) {
    Scene2D8 *s = gOptionWork;
    f32 a;

    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f394 += a;
    if (s->f394 > 20.0f) {
        s->f394 = 0.0f;
        s->f35C = func_002D92C0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D95F0);
extern void func_002D9770(s32, f32);

void func_002D96B0(void) {
    func_002D9770(0, 1.0f);
}
void func_002D96D0(void) {
    Scene2D8 *s = gOptionWork;
    f32 a;

    func_002D9770(0, s->f38C / 15.0f);
    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f38C += a;
    if (s->f38C >= 15.0f) {
        s->f38C = 0.0f;
        s->f354 = func_002D96B0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9770);
void func_002D98C0(void) {
    Scene2D8 *s = gOptionWork;
    f32 a;

    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f38C += a;
    if (s->f38C >= 60.0f) {
        s->f38C = 0.0f;
        s->f354 = func_002D96D0;
    }
}
void func_002D9930(void) {
    Scene2D8 *s = gOptionWork;
    f32 a;

    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f38C += a;
    if (s->f38C >= 20.0f) {
        s->f38C = 0.0f;
        s->f354 = func_002D96D0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D99A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9A50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9C20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9CD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9DE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002D9F80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DA030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DA310);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DA3C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DAB30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DAE10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DB0E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DB3B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2D9510", func_002DB600);
