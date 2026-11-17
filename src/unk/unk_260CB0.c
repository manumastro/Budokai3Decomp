#include "common.h"


INCLUDE_ASM("asm/nonmatchings/unk/unk_260CB0", func_00260CB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_260CB0", func_00261790);
typedef struct FadeColor {
    f32 r, g, b, a;
} __attribute__((aligned(16))) FadeColor;

typedef struct FadeVec {
    f32 x, y, z, w;
} FadeVec;

typedef struct FadeTask {
    char pad0[0x1C];
    void *func;
} FadeTask;

#define SET_FUNC(t, f) \
    do { \
        FadeTask *t_ = (t); \
        t_->func = ((f) == NULL) ? NULL : (f); \
    } while (0)

extern FadeColor D_00452E00;
extern FadeColor D_00452B60;
extern s32 amGs_SetReg32(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, FadeColor *, s32, s32, s32, f32);

void Fade_DrawOverlay(f32 a) {
    FadeColor c = D_00452E00;
    s32 old;

    c.a = a;
    old = amGs_SetReg32(0, 0x30000);
    func_00139620(0x900, &c, -1, 0x44, 0, 0.0f);
    amGs_SetReg32(0, old);
}

/* Not matching yet: 1 of 38 instructions differs, the beqz target of the zero-fill loop is one instruction too far
   (the loop body and the call are right). Tried: while/for/do-while forms, store before/after the if, counter and
   pointer declaration order. */
#if 0
void func_002621F0(f32 a) {
    FadeColor c;
    s32 old;
    u8 *p = (u8 *)&c;
    s32 n = 0x10;

    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
        c.a = a;
    }
    old = amGs_SetReg32(0, 0x30000);
    func_00133780(0, 1);
    func_00139620(0x900, &c, -1, 0x44, 0, 0.0f);
    amGs_SetReg32(0, old);
    func_00133780(0, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_260CB0", func_002621F0);
void func_00262290(s32);
INCLUDE_ASM("asm/nonmatchings/unk/unk_260CB0", func_00262290);
extern s32 D_00470758;
extern f32 D_0047042C;
extern f32 D_00470430;
extern void func_00136E80(s32, FadeColor *, s32, s32, s32);
extern void func_00137B60(FadeVec *);
extern void amDraw_FlushPacket(void);

/* Not matching yet: the original keeps a separate branch to the end for case 0 and for the default. */
#if 0
void func_00263CF0(void) {
    FadeVec v;
    FadeColor c = D_00452B60;

    switch (D_00470758) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        func_00136E80(0x900, &c, -1, 0x44, 0);
        v.x = 0.0f;
        v.y = 0.0f;
        v.w = 1.0f;
        v.z = 0.0f;
        func_00137B60(&v);
        v.x = D_0047042C;
        v.y = D_00470430;
        func_00137B60(&v);
        amDraw_FlushPacket();
        break;
    default:
        break;
    }
}
#endif
void func_00263CF0(void);
INCLUDE_ASM("asm/nonmatchings/unk/unk_260CB0", func_00263CF0);

extern FadeTask *D_004707A0;
extern s32 gFadeMode;
extern f32 D_004707A8;
extern f32 D_004707AC;
extern s32 D_004707B0;
extern void (*gFadeDone)(void);
extern void (*gFadeCb)(f32);
extern s32 gCdReqHead;
extern f32 gFrameDelta;
extern void (*D_00452AF0[])(f32);

static inline void FadeUpdate(void) {
    if (gFadeMode == 0) {
        if (gFadeCb != NULL) {
            gFadeCb(D_004707A8);
        }
    } else {
        D_00452AF0[gFadeMode](D_004707A8);
    }
    if (D_004707A8 == 1.0f) {
        if (gCdReqHead != 0) {
            D_004707B0++;
            if (D_004707B0 >= 20) {
                func_00262290(D_004707B0 - 20);
            }
        } else {
            D_004707B0 = 0;
        }
    } else {
        D_004707B0 = 0;
    }
}

void func_00263DC0(void) {
    FadeUpdate();
}

void Fade_TaskEmpty(void);

void func_00263E90(FadeTask *t) {
    D_004707A8 -= D_004707AC;
    if (D_004707A8 <= 0.0f) {
        D_004707A8 = 0.0f;
        SET_FUNC(t, Fade_TaskEmpty);
        if (gFadeDone != NULL) {
            gFadeDone();
        }
        gFadeDone = NULL;
    }
    FadeUpdate();
}

extern void amAdx_Stop(s32);
extern void func_00144770(s32, f32);

void func_00263FB0(FadeTask *t) {
    f32 prev = D_004707A8;

    D_004707A8 = prev + D_004707AC;
    if (!(D_004707A8 < 1.0f)) {
        if (prev < 1.0f && gFadeMode != 0) {
            amAdx_Stop(-1);
        }
        D_004707A8 = 1.0f;
        SET_FUNC(t, func_00263DC0);
        if (gFadeDone != NULL) {
            gFadeDone();
        }
        gFadeDone = NULL;
    }
    FadeUpdate();
    if (gFadeMode != 0) {
        func_00144770(0, 1.0f - D_004707A8);
    }
}

void Fade_TaskEmpty(void) {
}

extern s32 rand(void);

void func_00264140(s32 mode, void (*cb)(f32)) {
    if (mode == 11) {
        mode = (rand() & 7) + 1;
    }
    if (mode != -1) {
        gFadeMode = mode;
    }
    gFadeDone = NULL;
    if (cb != NULL) {
        gFadeCb = cb;
    }
    D_004707A8 = 0.0f;
    SET_FUNC(D_004707A0, func_00263E90);
    if (gFadeMode != 0) {
        func_00144770(0, 1.0f);
    }
}

void func_002641D0(s32 mode, void (*cb)(f32)) {
    if (mode == 11) {
        mode = (rand() & 7) + 1;
    }
    if (mode != -1) {
        gFadeMode = mode;
    }
    gFadeDone = NULL;
    if (cb != NULL) {
        gFadeCb = cb;
    }
    D_004707A8 = 1.0f;
    SET_FUNC(D_004707A0, func_00263FB0);
    if (gFadeMode != 0) {
        func_00144770(0, 0.0f);
    }
}

void Fade_Request(s32 mode, void (*done)(void), void (*cb)(f32)) {
    if (mode == 11) {
        mode = (rand() & 7) + 1;
    }
    if (mode != -1) {
        gFadeMode = mode;
    }
    gFadeDone = done;
    if (cb != NULL) {
        gFadeCb = cb;
    }
    SET_FUNC(D_004707A0, func_00263E90);
    if (gFadeMode != 0) {
        func_00144770(0, 1.0f);
    }
}

void Fade_SetRequest(s32 mode, void (*done)(void), void (*cb)(f32)) {
    if (mode == 11) {
        mode = (rand() & 7) + 1;
    }
    if (mode != -1) {
        gFadeMode = mode;
    }
    gFadeDone = done;
    if (cb != NULL) {
        gFadeCb = cb;
    }
    SET_FUNC(D_004707A0, func_00263FB0);
}

void func_00264380(f32 speed) {
    D_004707AC = speed;
}

void func_00264390(void) {
    gFadeMode = 10;
    D_004707A8 = 0.0f;
    gFadeDone = NULL;
    gFadeCb = NULL;
    D_004707B0 = 0;
    D_004707AC = 0.01f * gFrameDelta;
    if (D_004707A0 != NULL) {
        SET_FUNC(D_004707A0, Fade_TaskEmpty);
    }
}

extern char D_0046B370[];
extern char D_0046B380[];
extern FadeTask *amTask_Create(void *, s32, s32, s32, s32, char *);

void Fade_Start(void) {
    gFadeMode = 10;
    D_004707A8 = 0.0f;
    gFadeDone = NULL;
    gFadeCb = NULL;
    D_004707B0 = 0;
    D_004707AC = 0.01f * gFrameDelta;
    D_004707A0 = amTask_Create(Fade_TaskEmpty, 0, 0xFF00, 0, 1, D_0046B370);
    amTask_Create(func_00263CF0, 0, 0xFF10, 0, 1, D_0046B380);
}
