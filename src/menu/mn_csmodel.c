#include "common.h"
#include "menu/menu.h"
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern f32 D_004703BC;
extern void func_00145CC0(s32, s32);
extern void func_002B7690(void *);
extern void func_0022C700(void);
extern s8 D_004B4BEA[];
extern void func_002B7800();
extern void func_002B7930();
extern void func_002B89E0();
extern void func_002B91F0();
extern void func_002C0490();
extern void amCamera_Init(void *);
extern char D_0046ED20[];
extern char D_0046ED30[];

/* The character select model's work area (task data.work). */
typedef struct CsModelWork {
    char pad0[0xB0];
    s16 fB0;
    s16 fB2;
    s16 fB4;
    s16 fB6;
    s16 fB8;
    s16 fBA;
    s32 fBC;
    f32 fC0;
    char padC4[0x1C];
    f32 fE0;
    f32 fE4;
    f32 fE8;
} CsModelWork;

extern void *gPracMode;

INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B61E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B6C30);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B6DC0);
extern void func_002B6DC0(Task *);

/* Runs func_002B6DC0 unless fB6 is -1. */
void CsModel_CallIfSet(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    if (w->fB6 != -1) {
        func_002B6DC0(t);
    }
}
extern void func_0029E450(void *);
extern void amHeap_Free(void *);

void func_002B7180(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    if (*(void **)s0 != 0) {
        func_0029E450(*(void **)s0);
    }
    amHeap_Free(s0);
}
/* Sets the model's mode 4 (fB0) and clears fBC. */
void CsModel_SetMode(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fBC = 0;
    w->fB0 = 4;
}
/* Clears fBC and sets the scale fC0 to 2.0. */
void CsModel_SetScale(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fBC = 0;
    w->fC0 = 2.0f;
}
/* Moves the model's value fE0 towards target (fE4), by a step of (target - fE0) / div. */
void CsModel_Ease(Task *t, f32 target, f32 div) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fE4 = target;
    w->fE8 = (target - w->fE0) / div;
    w->fE0 = w->fE0 + w->fE8;
}
/* Moves the two slots fB4 / fB6 into fB8 / fBA, sets the new slots and the task's function. */
void CsModel_Shift(Task *t, s16 a, s16 b) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fB0 = 0;
    w->fB8 = w->fB4;
    w->fBA = w->fB6;
    w->fB4 = a;
    w->fB6 = b;
    TASK_SET_FUNC(t, CsModel_CallIfSet);
}
void *func_002B7270(s16 a0, s16 a1, s16 a2) {
    u8 *s0;
    u8 *v;

    s0 = (u8 *)amTask_Create(CsModel_CallIfSet, (void (*)(Task *))func_002B7180, 0x2A00, 8, 2, D_0046ED20);
    v = (u8 *)amHeap_Alloc(0xF0, 0, D_0046ED30, 0x4D);
    *(void **)(s0 + 0x30) = v;
    *(s32 *)v = 0;
    *(s16 *)(v + 0xB0) = 0;
    *(s16 *)(v + 0xB2) = a0;
    *(s16 *)(v + 0xB4) = a1;
    *(s16 *)(v + 0xB6) = a2;
    *(s16 *)(v + 0xB8) = -1;
    *(s16 *)(v + 0xBA) = -1;
    *(f32 *)(v + 0xE0) = 1.0f;
    *(f32 *)(v + 0xE4) = 1.0f;
    *(s32 *)(v + 0xE8) = 0;
    *(s32 *)(v + 0xBC) = 0;
    *(s32 *)(v + 0xC0) = 0;
    amCamera_Init(v + 0x10);
    return s0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7340);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7690);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7800);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7A60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7C40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7DC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7F00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8070);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8260);
void func_002B8410(u8 *task) {
    u8 *s0;
    u8 *a0;
    f32 f1;

    s0 = *(u8 **)(task + 0x30);
    a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    func_0022C700();
    f1 = *(f32 *)(s0 + 0x68) - D_004703BC;
    *(f32 *)(s0 + 0x68) = f1;
    if (f1 <= 0.0f) {
        *(u8 *)(s0 + 0x61) = 2;
        *(u8 *)(s0 + 0x5E) = 1;
        *(u8 *)(s0 + 0x5F) = 2;
        *(u32 *)(s0 + 0x68) = 0x41700000;
        func_002B7800(s0);
        func_002C0490(*(void **)(s0 + 0x54), (s16)(*(u8 *)(s0 + 0x5E) + 1));
        *(void **)(task + 0x1C) = ((void *)func_002B91F0 == 0) ? 0 : (void *)func_002B91F0;
    }
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_00145CC0(s32, s32);
extern void func_002B7690(void *);
extern void func_0022C700(void);

/* Starts a model effect with the practice mode's value and the fixed size 0x1000. */
void CsModel_Start(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    s32 v = ((s32 *)gPracMode)[3];
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(w);
    func_0022C700();
}
extern f32 D_004703BC;
extern void func_001F0830(s32, s32);
extern void func_001F0810(s32, s32);

void func_002B8540(u8 *a0) {
    u8 *s0;
    s32 v;
    s0 = *(u8 **)(a0 + 0x30);
    v = *(s32 *)((u8 *)gPracMode + 0xC);
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    func_0022C700();
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) - D_004703BC;
    if (*(f32 *)(s0 + 0x68) <= 0.0f) {
        func_001F0830(0x15, 0);
        func_001F0810(0xA, 0);
        *(void **)(a0 + 0x1C) = ((void *)CsModel_Start == 0) ? 0 : (void *)CsModel_Start;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B85F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B89E0);
void func_002B8B50(u8 *task) {
    u8 *s0;
    u8 *a0;
    f32 f1;

    s0 = *(u8 **)(task + 0x30);
    a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    func_0022C700();
    f1 = *(f32 *)(s0 + 0x68) - D_004703BC;
    *(f32 *)(s0 + 0x68) = f1;
    if (f1 <= 0.0f) {
        *(u8 *)(s0 + 0x5E) = 0;
        *(u8 *)(s0 + 0x5F) = D_004B4BEA[0];
        *(u32 *)(s0 + 0x68) = 0x420C0000;
        *(u8 *)(s0 + 0x5D) = 3;
        *(u8 *)(s0 + 0x61) = 7;
        func_002B7930(s0);
        *(void **)(task + 0x1C) = ((void *)func_002B89E0 == 0) ? 0 : (void *)func_002B89E0;
    }
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_00145CC0(s32, s32);
extern void func_002B7690(void *);
extern void func_0022C700(void);

/* Starts a model effect with the practice mode's value and the fixed size 0x1000. */
void CsModel_Start2(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    s32 v = ((s32 *)gPracMode)[3];
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(w);
    func_0022C700();
}
extern f32 D_004703BC;
extern u8 D_004B4B41[];
extern u8 D_004B4B59[];
extern void VsCharasel_Start(s32, s32);
extern void PracMode_Exit();

#if 0
// differs: the prologue matches; the if body differs in register use (the original keeps 4, 1 and 2 in v0/v1 and loads the byte twice, lbu then lb)
void func_002B8C70(u8 *a0) {
    u8 *s0;
    s32 v;
    s0 = *(u8 **)(a0 + 0x30);
    v = *(s32 *)((u8 *)gPracMode + 0xC);
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    func_0022C700();
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) - D_004703BC;
    if (*(f32 *)(s0 + 0x68) <= 0.0f) {
        D_004B4B41[0] = 4;
        D_004B4B59[0] = (*(u8 *)(s0 + 0x63) != 0) ? 2 : 1;
        VsCharasel_Start(1, *(s8 *)(s0 + 0x63));
        PracMode_Exit();
    }
}
#endif
#if 0
// differs: 21 of 44 differ: the value 1/2 select is a beqz branch in mine, the original uses movn; join padding differs too
void func_002B8C70(u8 *task) {
    u8 *s0;
    u8 *a0;
    s32 v0;
    s32 v1;
    u8 a1;
    f32 f1;

    s0 = *(u8 **)(task + 0x30);
    a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    func_00145CC0((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    func_0022C700();
    f1 = *(f32 *)(s0 + 0x68) - D_004703BC;
    if (f1 <= 0.0f) {
        *(f32 *)(s0 + 0x68) = f1;
        D_004B4B41[0] = 4;
        v1 = 1;
        a1 = *(u8 *)(s0 + 0x63);
        v0 = 2;
        if (a1 != 0) {
            v1 = v0;
        }
        D_004B4B59[0] = v1;
        VsCharasel_Start(1, *(s8 *)(s0 + 0x63));
        PracMode_Exit();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8C70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8D20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B91F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B92E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B93D0);
extern void *gPracMode;
extern s32 D_0047010C;

/* Turns practice mode off and sets D_0047010C to -1. */
void CsModel_ResetPrac(void) {
    gPracMode = 0;
    D_0047010C = -1;
}
