#include "common.h"
#include "menu/menu.h"
extern void *func_0022D670(void *, f32);
extern void *func_0022D860(void *, f32);
extern void func_0022D0E0(void *, s32);
extern f32 D_004E0618[];
extern s32 amAdx_PlayAfs();
extern void amAdx_SetVolume(void *, f32);
extern void amAdx_Pause();
extern void func_002B8D20();
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern f32 gFrameDelta;
extern void amModel_SetCurrent(s32, s32);
extern void func_002B7690(void *);
extern void A2d_FlushList(void);
extern s8 D_004B4BEA[];
extern void func_002B7800();
extern void func_002B7930();
extern void func_002B89E0();
extern void func_002B91F0();
extern void Obj_SetF3C();
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
void func_002B7800(u8 *s4) {
    u8 *s3;
    s32 s1;
    u8 *s0;
    s32 s2;
    s32 a0;

    s3 = (u8 *)gPracMode;
    a0 = *(s32 *)(s3 + 0xC);
    D_00470704 = a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(a0, 0x1000);
    D_00470238 = 0;
    s1 = 0;
    s0 = s4;
    do {
        if (*(void **)(s0 + 0x10) != 0) {
            func_0022D0E0(*(void **)(s0 + 0x10), 1);
            *(void **)(s0 + 0x10) = 0;
        }
        s1++;
        s0 += 4;
    } while (s1 < 0xC);
    s2 = 0;
    s1 = 0;
    s0 = s4;
    do {
        *(void **)(s0 + 0x10) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x1C) + s1 + 0x4C), 0.0f);
        s2++;
        s1 += 4;
        s0 += 4;
    } while (s2 < 2);
    if (*(void **)(s4 + 0x48) != 0) {
        func_0022D0E0(*(void **)(s4 + 0x48), 1);
    }
    *(void **)(s4 + 0x48) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x14) + 0xC), 0.0f);
    if (*(void **)(s4 + 0x4C) != 0) {
        func_0022D0E0(*(void **)(s4 + 0x4C), 1);
    }
    *(void **)(s4 + 0x4C) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x14) + 0x1C), 0.0f);
}
void func_002B7930(u8 *s4) {
    u8 *s3;
    s32 s2;
    u8 *s1;
    s32 s0;
    s32 a0;

    s3 = (u8 *)gPracMode;
    a0 = *(s32 *)(s3 + 0xC);
    D_00470704 = a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(a0, 0x1000);
    D_00470238 = 0;
    if (0 < s4[0x5F]) {
        s2 = 0;
        s1 = s4;
        s0 = 0;
        do {
            if (*(void **)(s1 + 0x10) != 0) {
                func_0022D0E0(*(void **)(s1 + 0x10), 1);
            }
            *(void **)(s1 + 0x10) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x1C) + s0 + 0x64), 0.0f);
            s2++;
            s0 += 4;
            s1 += 4;
        } while (s2 < s4[0x5F]);
    }
    if (*(void **)(s4 + 0x48) != 0) {
        func_0022D0E0(*(void **)(s4 + 0x48), 1);
    }
    *(void **)(s4 + 0x48) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x14) + 0x8), 0.0f);
    if (*(void **)(s4 + 0x4C) != 0) {
        func_0022D0E0(*(void **)(s4 + 0x4C), 1);
    }
    *(void **)(s4 + 0x4C) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s3 + 0x8) + 0x14) + 0x20), 0.0f);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7A60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7C40);
void func_002B7DC0(u8 *s0) {
    s32 s2;
    u8 *s1;

    if (*(void **)s0 != 0) {
        func_0022D0E0(*(void **)s0, 1);
    }
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x4) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x4), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 2);
    if (*(void **)(s0 + 0xC) != 0) {
        func_0022D0E0(*(void **)(s0 + 0xC), 1);
    }
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x10) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x10), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 0xC);
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x40) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x40), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 2);
    if (*(void **)(s0 + 0x48) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x48), 1);
    }
    if (*(void **)(s0 + 0x4C) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x4C), 1);
    }
    if (*(void **)(s0 + 0x50) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x50), 1);
    }
}
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
    amModel_SetCurrent((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    f1 = *(f32 *)(s0 + 0x68) - gFrameDelta;
    *(f32 *)(s0 + 0x68) = f1;
    if (f1 <= 0.0f) {
        *(u8 *)(s0 + 0x61) = 2;
        *(u8 *)(s0 + 0x5E) = 1;
        *(u8 *)(s0 + 0x5F) = 2;
        *(u32 *)(s0 + 0x68) = 0x41700000;
        func_002B7800(s0);
        Obj_SetF3C(*(void **)(s0 + 0x54), (s16)(*(u8 *)(s0 + 0x5E) + 1));
        *(void **)(task + 0x1C) = ((void *)func_002B91F0 == 0) ? 0 : (void *)func_002B91F0;
    }
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_002B7690(void *);
extern void A2d_FlushList(void);

/* Starts a model effect with the practice mode's value and the fixed size 0x1000. */
void CsModel_Start(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    s32 v = ((s32 *)gPracMode)[3];
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(w);
    A2d_FlushList();
}
extern f32 gFrameDelta;
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);

void func_002B8540(u8 *a0) {
    u8 *s0;
    s32 v;
    s0 = *(u8 **)(a0 + 0x30);
    v = *(s32 *)((u8 *)gPracMode + 0xC);
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) - gFrameDelta;
    if (*(f32 *)(s0 + 0x68) <= 0.0f) {
        Scene_Request(0x15, 0);
        Scene_FadeTo(0xA, 0);
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
    amModel_SetCurrent((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    f1 = *(f32 *)(s0 + 0x68) - gFrameDelta;
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
extern void amModel_SetCurrent(s32, s32);
extern void func_002B7690(void *);
extern void A2d_FlushList(void);

/* Starts a model effect with the practice mode's value and the fixed size 0x1000. */
void CsModel_Start2(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    s32 v = ((s32 *)gPracMode)[3];
    D_00470704 = v;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(w);
    A2d_FlushList();
}
extern f32 gFrameDelta;
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
    amModel_SetCurrent(v, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) - gFrameDelta;
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
    amModel_SetCurrent((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s0);
    A2d_FlushList();
    f1 = *(f32 *)(s0 + 0x68) - gFrameDelta;
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
void func_002B91F0(u8 *task) {
    u8 *s1;
    u8 *s0;
    u8 *a0;
    f32 f1;

    s1 = *(u8 **)(task + 0x30);
    s0 = task;
    a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s1);
    A2d_FlushList();
    f1 = *(f32 *)(s1 + 0x68) - gFrameDelta;
    *(f32 *)(s1 + 0x68) = f1;
    if (f1 <= 0.0f) {
        *(u8 *)(s1 + 0x5D) = 2;
        *(u8 *)(s1 + 0x61) = 3;
        Obj_SetF3C(*(void **)(s1 + 0x54), 0);
        *(s32 *)(s1 + 0x58) = amAdx_PlayAfs(1, 0x21114, 0);
        amAdx_SetVolume(*(void **)(s1 + 0x58), D_004E0618[0]);
        amAdx_Pause(*(void **)(s1 + 0x58), 0);
        *(u8 *)(s1 + 0x5C) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_002B8D20 == 0) ? 0 : (void *)func_002B8D20;
    }
}
void func_002B92E0(u8 *task) {
    u8 *s1;
    u8 *s0;
    u8 *a0;
    f32 f1;

    s1 = *(u8 **)(task + 0x30);
    s0 = task;
    a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)a0, 0x1000);
    D_00470238 = 0;
    func_002B7690(s1);
    A2d_FlushList();
    f1 = *(f32 *)(s1 + 0x68) - gFrameDelta;
    *(f32 *)(s1 + 0x68) = f1;
    if (f1 <= 0.0f) {
        *(u8 *)(s1 + 0x5D) = 2;
        *(u8 *)(s1 + 0x61) = 3;
        Obj_SetF3C(*(void **)(s1 + 0x54), 0);
        *(s32 *)(s1 + 0x58) = amAdx_PlayAfs(1, 0x21114, 0);
        amAdx_SetVolume(*(void **)(s1 + 0x58), D_004E0618[0]);
        amAdx_Pause(*(void **)(s1 + 0x58), 0);
        *(u8 *)(s1 + 0x5C) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_002B8D20 == 0) ? 0 : (void *)func_002B8D20;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B93D0);
extern void *gPracMode;
extern s32 D_0047010C;

/* Turns practice mode off and sets D_0047010C to -1. */
void CsModel_ResetPrac(void) {
    gPracMode = 0;
    D_0047010C = -1;
}
