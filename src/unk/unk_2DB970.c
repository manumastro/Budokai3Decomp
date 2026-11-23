#include "common.h"

typedef struct Scene2DB970 {
    char pad0[0x388];
    f32 f388;
} Scene2DB970;

extern s8 D_004703F4;
extern Scene2DB970 *gOptionWork;
extern void func_002DD8A0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2DB970", func_002DB970);
extern void func_001A36E0(s32, s32);
extern void func_001A3610(s32);
extern void amTask_Kill(void *);

void func_002DBF20(u8 *arg0) {
    f32 var_f2;
    f32 temp_f1;
    s32 temp_s1;
    u8 *temp_s0;
    temp_s0 = (unsigned char *)gOptionWork;
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x330);
    if (*(s32 *)((u8 *)((u8 *)(temp_s1 * 4) + (s32)temp_s0) + 0x334) != -1) {
        func_001A36E0(temp_s1, 0x80);
        if (D_004703F4 != 3) {
            var_f2 = 1.0f;
        } else {
            var_f2 = 1.2f;
        }
        *(f32 *)((u8 *)temp_s0 + 0x32C) += var_f2;
        temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x32C);
        if (!(temp_f1 <= 60.0f)) {
            func_001A3610(temp_s1);
            amTask_Kill(arg0);
            *(s32 *)((u8 *)temp_s0 + 0x328) = 0;
        }
    }
}
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
