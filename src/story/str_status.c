#include "common.h"
#include "menu/menu.h"
#include "menu/mn_TourMode.h"
#include "story/str_status.h"

extern char D_0046EE10[];
extern void (*D_0046EE30[])(void *);
extern void func_0028EB40(Task *, s32, void (*)(Task *), s32);
extern void func_002BD140(Task *);
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD140);
void func_002BD3A0(Task *t) {
    if (((s16 *)D_00470910->f4)[2] == 3) {
        if (D_00470910->f284 != 0) {
            func_0028EB40(t, 10, func_002BD140, 0);
        } else {
            func_002BD140(t);
        }
    }
}
typedef struct StrStatusCopy {
    u8 b00, b01, b02, b03, b04, b05, b06, b07, b08, b09, b0A, b0B;
    s32 w0C;
    s32 w10;
    char pad14[4];
    s32 w18;
    s32 w1C;
    s32 w20;
    s32 w24;
    s32 w28;
    s32 w2C;
    s32 w30;
} StrStatusCopy;

void func_002BD400(StrStatusCopy *out) {
    out->b00 = D_00470910->f288[0];
    out->b01 = D_00470910->f288[1];
    out->b02 = D_00470910->f288[2];
    out->b03 = D_00470910->f288[3];
    out->b04 = D_00470910->f288[4];
    out->w0C = D_00470910->f2D4;
    out->w10 = 0;
    out->b05 = D_00470910->f288[5];
    out->b06 = D_00470910->f288[6];
    out->b07 = D_00470910->f288[7];
    out->b08 = D_00470910->f288[8];
    out->b09 = D_00470910->f288[9];
    out->b0A = D_00470910->f288[10];
    out->b0B = D_00470910->f288[11];
    out->w18 = D_00470910->f2DC[0];
    out->w1C = D_00470910->f2DC[1];
    out->w20 = D_00470910->f2DC[2];
    out->w24 = D_00470910->f2DC[3];
    out->w28 = D_00470910->f2DC[4];
    out->w2C = D_00470910->f2DC[5];
    out->w30 = D_00470910->f2DC[6];
}
void StrStatus_ClearWork(void) {
    D_00470910 = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD510);
void func_002BD660(s32 a, s32 b) {
    D_00470910->f274 = a;
    D_00470910->f278 = b;
    D_00470910->f38 = amTask_Create(func_002BD3A0, NULL, a, 2, b, D_0046EE10);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD6B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDC50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDD10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDE80);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDF50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE0B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE320);
extern s32 *D_0046FE44;

// func_002BE4E0: the layout of the two branches differs (the clear block comes last in the original); not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE4E0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE530);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE710);
extern s32 *D_0047011C;

// func_002BE7C0 (sets or clears bit 0 of a word of D_0047011C by a flag): the if/else layout differs; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE7C0);
extern s32 *D_0047011C;
extern void func_002BDF50(void *, void *);

void func_002BE830(char *p) {
    *(s16 *)(p + 0x2A) = 6;
    *(s16 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x24) = 0x400010;
    func_002BDF50((char *)D_0047011C + (D_0047011C[0x1A8 / 4] << 2) + 0x160, p);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE870);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEA30);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEB50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BECB0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BED90);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEEE0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEF00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF000);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF310);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF3B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF520);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF610);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF850);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF970);

void func_002BFC00(s32 *p) {
    if (p[4] >= 0 && p[4] < 6) {
        D_0046EE30[p[4]](p);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFC50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFCF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFD90);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFE60);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFEE0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFFD0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0220);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C02C0);
// func_002C03B0: the function address test (?:) gets its branch in the other order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03B0);
extern void func_002C03B0(s32 *);

// func_002C03E0 (reads a file of an entry and loads it again): the function address goes to another register; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03E0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0470);
void func_002C0490(void *p, s16 v) {
    ((s32 *)p)[0xF] = v;
}
void *func_002C04A0(void) {
    return NULL;
}
void func_002C04B0(Task *p) {
    s32 *s0 = (s32 *)((char *)p + 0x30);
    if (s0[0] != 0) {
        amCdFs_Close(s0[0], 0);
    }
    if (s0[1] != 0) {
        amHeap_Free((void *)s0[1]);
    }
    amTask_Kill(p);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0510);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0630);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0750);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0860);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0FC0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1160);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1320);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C15E0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1720);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1860);
extern void func_0022C700(Task *);

void func_002C19F0(Task *task) {
    func_0022C700(task);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1A00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1AA0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1BC0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1CF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1E10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1F90);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2470);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2560);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C27B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C28A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C29A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2FF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3120);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3220);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C32C0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3A10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3B40);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3D20);
extern TourModeGlobal *gTourMode;

void StrStatus_ClearTourMode(void) {
    gTourMode = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3E40);
