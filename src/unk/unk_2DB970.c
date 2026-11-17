#include "common.h"

typedef struct Scene2DB970 {
    char pad0[0x388];
    f32 f388;
} Scene2DB970;

extern s8 D_004703F4;
extern Scene2DB970 *gOptionWork;
extern void func_002DD8A0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DB970);
/* differs: the original keeps $s2 for the first argument and loads the float field after the join with the constant in $f2 (15 of 48 with relocations) */
#if 0
extern void func_001A36E0(s32, s32);
extern void func_001A3610(s32);
extern void amTask_Kill(void *);

void func_002DBF20(void *a0) {
    void *obj;
    s32 idx;
    u8 *gw;
    f32 f;
    f32 k;

    obj = a0;
    gw = (u8 *)gOptionWork;
    idx = *(s32 *)(gw + 0x330);
    if (*(s32 *)(gw + 0x334 + idx * 4) != -1) {
        func_001A36E0(idx, 0x80);
        if (D_004703F4 != 3) {
            k = 1.0f;
        } else {
            k = 1.2f;
        }
        f = *(f32 *)(gw + 0x32C) + k;
        if (f > 60.0f) {
            *(f32 *)(gw + 0x32C) = f;
            func_001A3610(idx);
            amTask_Kill(obj);
            *(s32 *)(gw + 0x328) = 0;
        }
    }
}
#endif
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
    Scene2DB970 *s = gOptionWork;
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
