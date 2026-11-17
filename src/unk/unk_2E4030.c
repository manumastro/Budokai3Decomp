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

INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4030);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E40D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E44A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E46A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4AC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E4D60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5040);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E53B0);
extern void func_0022C700(void);

void func_002E5480(void) {
    func_0022C700();
}
void func_002E5490(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E54A0);
void func_002E5600(Ac2E4 *s) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E57A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5B10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E4030", func_002E5C20);
