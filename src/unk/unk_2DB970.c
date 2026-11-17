#include "common.h"

typedef struct Scene2DB970 {
    char pad0[0x388];
    f32 f388;
} Scene2DB970;

extern s8 D_004703F4;
extern Scene2DB970 *D_00470934;
extern void func_002DD8A0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DB970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DBF20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DBFE0);
void func_002DCC50(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DCC60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DD180);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DD2B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DD510);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DD8A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DDAD0);
void func_002DDC30(void) {
    Scene2DB970 *s = D_00470934;
    f32 a;

    if (D_004703F4 != 3) {
        a = 1.0f;
    } else {
        a = 1.2f;
    }
    s->f388 += a;
    if (s->f388 > 35.0f) {
        s->f388 = 0.0f;
        func_002DD8A0();
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DDCA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DDD40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DDF00);
