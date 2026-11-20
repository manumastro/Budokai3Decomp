#include "common.h"

extern s32 gEssTrade;
extern void func_00277310(void);
extern void func_002794D0(void);
extern s32 func_002D20D0(void);
extern s32 func_00283BF0(void);
extern void StrStatus_Exit(void *);
extern void Smsg_Exit(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void SklSheet_Free(void);

extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_0026D570(s32);
void func_00279D30(u8 *a0);
extern void amModel_SetCurrent();
extern void *D_00470704;
extern s32 D_00470238, D_00470708, D_0047070C;
extern f32 gFrameDelta;
extern void func_00228410(void);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0026D530(s32, s32);
extern void amAdx_Pause(s32, s32);

static inline void EssT_SetAnim(u8 *p, s32 v) {
    *(s32 *)p = v;
    *(s32 *)(p + 8) = 0;
}

void func_002778D0(u8 *arg0) {
    u8 *temp_a0;
    u8 *temp_s1;

    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x160) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x160) + 1);
    temp_a0 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401400;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s1 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x14) + *(s32 *)((u8 *)gEssTrade + 0x158) * 4), 1, (f32)*(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    if (D_00492FCE[0] | D_00493086[0]) {
        EssT_SetAnim((u8 *)gEssTrade + 0x98, 1);
        EssT_SetAnim((u8 *)gEssTrade + 0xF8, 6);
        EssT_SetAnim((u8 *)gEssTrade + 0x128, 7);
        EssT_SetAnim((u8 *)gEssTrade + 0xC8, 9);
        *(s32 *)((u8 *)gEssTrade + 0xD8) = -1;
        func_0026D530(2, -1);
        amAdx_Pause(1, 1);
        func_0026D570(0);
        *(void **)(arg0 + 0x1C) = ((void *)func_00279D30 == 0) ? 0 : (void *)func_00279D30;
    }
}
extern s32 gEssTrade;
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00277310();
extern void amModel_SetCurrent();
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
extern u8 D_00453288[];
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void func_002778D0(u8 *);
extern void func_00228410(void);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0026D530(s32, s32);

void func_00277A90(u8 *arg0) {
    s32 *var_v1;
    s32 temp_s1_3;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x160) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x160) + 1);
    temp_a0 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401400;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s1 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x14) + *(s32 *)((u8 *)gEssTrade + 0x158) * 4), 1, (f32)*(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    if (func_0022BC30(*(s32 *)(*(s32 *)((u8 *)*(u8 **)((u8 *)gEssTrade + 0x28) + 0x1C) + *(s32 *)((u8 *)gEssTrade + 0xC8) * 4), (f32)*(s32 *)((u8 *)gEssTrade + 0xD0) * gFrameDelta) == 0xFF) {
        temp_s1_2 = (unsigned char *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s1_2 + 0x10) = (s32)((EssMain_GetFlag() & 0xFF) + 6);
        func_0026D530(2, 6);
        temp_s1_3 = *(s32 *)(D_00453288 + (s32)((EssMain_GetFlag() & 0xFF) * 4));
        amAdx_SetVolume(1, *(f32 *)D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s1_3 | 0x20000, 0);
        var_v1 = (int *)&func_002778D0;
        if (&func_002778D0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00277C80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002782D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278490);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278980);
extern void func_0026D8A0(void);
void func_00279D30(u8 *a0);

void func_00278B00(u8 *arg0) {
    u8 *temp_a0;
    u8 *temp_s1;

    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32)(*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x160) = (s32)(*(s32 *)((u8 *)gEssTrade + 0x160) + 1);
    temp_a0 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401400;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s1 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s1 + 0x14) + *(s32 *)((u8 *)gEssTrade + 0x158) * 4), 1, (f32)*(s32 *)((u8 *)gEssTrade + 0x160) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
    if (func_002D20D0() == 6) {
        EssT_SetAnim((u8 *)gEssTrade + 0x98, 1);
        EssT_SetAnim((u8 *)gEssTrade + 0xF8, 6);
        EssT_SetAnim((u8 *)gEssTrade + 0x128, 7);
        EssT_SetAnim((u8 *)gEssTrade + 0xC8, 9);
        *(s32 *)((u8 *)gEssTrade + 0xD8) = -1;
        func_0026D530(2, -1);
        func_0026D8A0();
        *(void **)(arg0 + 0x1C) = ((void *)func_00279D30 == 0) ? 0 : (void *)func_00279D30;
    }
}

void func_00278CA0(u8 *a0) {
    u8 *s0;

    s0 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
    if (func_002D20D0() == 6) {
        *(void **)(s0 + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
    }
}
extern s32 gEssTrade;
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00277310();
extern void func_00277010();

void func_00278D40(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    s3 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) = *(s32 *)((u8 *)gEssTrade + 0xA0) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) = *(s32 *)((u8 *)gEssTrade + 0x100) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) = *(s32 *)((u8 *)gEssTrade + 0x130) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) = *(s32 *)((u8 *)gEssTrade + 0x190) + 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) = *(s32 *)((u8 *)gEssTrade + 0xD0) + 1;
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x1C0) = *(s32 *)((u8 *)gEssTrade + 0x1C0) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x220) = *(s32 *)((u8 *)gEssTrade + 0x220) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x250) = *(s32 *)((u8 *)gEssTrade + 0x250) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x1F0) = *(s32 *)((u8 *)gEssTrade + 0x1F0) + 1;
    func_00277010();
    s0 = -1;
    s2 = *(u8 **)((u8 *)gEssTrade + 0x28);
    s1 = (u8 *)gEssTrade + 0x1B8;
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x54), (f32)*(s32 *)((u8 *)gEssTrade + 0x1C0) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x60), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x6C), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    if (s0 == 0xFF) {
        (*(void (**)(void *))(s3 + 0x48))(s3);
    }
}
extern s32 gEssTrade;
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00277310();
extern void func_00277010();
extern void func_00279010();

void func_00278EA0(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s3 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) = *(s32 *)((u8 *)gEssTrade + 0xA0) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) = *(s32 *)((u8 *)gEssTrade + 0x100) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) = *(s32 *)((u8 *)gEssTrade + 0x130) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) = *(s32 *)((u8 *)gEssTrade + 0x190) + 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) = *(s32 *)((u8 *)gEssTrade + 0xD0) + 1;
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x1C0) = *(s32 *)((u8 *)gEssTrade + 0x1C0) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x220) = *(s32 *)((u8 *)gEssTrade + 0x220) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x250) = *(s32 *)((u8 *)gEssTrade + 0x250) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x1F0) = *(s32 *)((u8 *)gEssTrade + 0x1F0) + 1;
    func_00277010();
    s0 = -1;
    s2 = *(u8 **)((u8 *)gEssTrade + 0x28);
    s1 = (u8 *)gEssTrade + 0x1B8;
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x4C), (f32)*(s32 *)((u8 *)gEssTrade + 0x1C0) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x5C), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x68), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    if (s0 == 0xFF) {
        fp = (void *)func_00279010;
        *(void **)(s3 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279010);
void func_002793C0(u8 *a0) {
    u8 *s0;

    s0 = a0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
    if (func_00283BF0() == 8) {
        *(void **)(s0 + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
        SklSheet_Free();
    }
}

/* Adds one to the five counters of the trade block gEssTrade, then runs func_00277310. */
void Trade_CountFrame(void) {
    *(s32 *)((u8 *)gEssTrade + 0xA0) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) += 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) += 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) += 1;
    func_00277310();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002794D0);
extern s32 amAdx_IsStopped(s32);
extern void func_0026D8A0(void);

void EssTrade_TaskWaitVoice(u8 *a0) {
    u8 *s0;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D8A0();
        *(s32 *)(s0 + 0x1C) = 0;
    }
}
extern s32 amAdx_IsStopped(s32);
extern void func_0026D570(s32);
extern void func_00279E60(void);

void func_00279CD0(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D570(1);
        f = (void *)func_00279E60;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern f32 gFrameDelta;
extern s32 gEssTrade;
extern s32 func_0022BC30(s32, f32);
extern void func_00277310();
extern s32 EssMain_GetFlag();
extern void EssTrade_TaskWaitVoice();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void func_0026D8A0();
extern f32 D_004E0618[];

void func_00279D30(u8 *a0) {
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s2 = a0;
    s1 = a0 + 0x30;
    s0 = -1;
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(*(u8 **)((u8 *)gEssTrade + 0x28) + 0x1C) + 0x4), (f32)*(s32 *)((u8 *)gEssTrade + 0xA0) * gFrameDelta);
    *(s32 *)((u8 *)gEssTrade + 0xA0) = *(s32 *)((u8 *)gEssTrade + 0xA0) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x100) = *(s32 *)((u8 *)gEssTrade + 0x100) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x130) = *(s32 *)((u8 *)gEssTrade + 0x130) + 1;
    *(s32 *)((u8 *)gEssTrade + 0x190) = *(s32 *)((u8 *)gEssTrade + 0x190) + 1;
    *(s32 *)((u8 *)gEssTrade + 0xD0) = *(s32 *)((u8 *)gEssTrade + 0xD0) + 1;
    func_00277310();
    if (s0 == 0xFF) {
        if (EssMain_GetFlag() != 0) {
            *(s32 *)s1 = 0;
            fp = (void *)EssTrade_TaskWaitVoice;
            *(void **)(s2 + 0x1C) = (fp == 0) ? 0 : fp;
            amAdx_SetVolume(1, D_004E0618[0]);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210D8, 0);
        } else {
            func_0026D8A0();
            *(s32 *)(s2 + 0x1C) = 0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279E60);
extern void amFile_Load(s32);
extern void func_0026D610();
extern void *func_002C0510(s32, s32, s32);
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
extern void func_0026D570(s32);

void func_00279FD0(u8 *a0) {
    u8 *s3;
    u8 *s2;
    s32 i;
    s32 off;

    s3 = a0;
    s2 = a0 + 0x30;
    if (*(s16 *)(*(u8 **)((u8 *)gEssTrade + 0xC) + 0x4) == 3) {
        i = 0;
        off = 0;
        do {
            *(s32 *)((u8 *)gEssTrade + off + 0x10) = *(s32 *)(*(u8 **)((u8 *)gEssTrade + off) + 0x40);
            *(s32 *)(*(u8 **)((u8 *)gEssTrade + off) + 0x40) = 0;
            amCdFs_Close(*(void **)((u8 *)gEssTrade + off), 0);
            *(s32 *)((u8 *)gEssTrade + off) = 0;
            amFile_Load(*(s32 *)(*(u8 **)((u8 *)gEssTrade + off + 0x10) + 0x50));
            func_0026D610(*(void **)((u8 *)gEssTrade + off + 0x10));
            i++;
            off += 4;
        } while (i < 4);
        *(s32 *)((u8 *)gEssTrade + 0x28) = *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x10) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x2C) = *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x14) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x30) = *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x18) + 0x50);
        *(s32 *)((u8 *)gEssTrade + 0x34) = *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x1C) + 0x50);
        *(void **)((u8 *)gEssTrade + 0x24) = func_002C0510(*(s32 *)((u8 *)gEssTrade + 0x34), 0x3010, 0);
        *(s16 *)(*(u8 **)((u8 *)gEssTrade + 0x24) + 0x3A) = 3;
        if (EssMain_GetFlag()) {
            *(s32 *)s2 = 0;
            *(void **)(s3 + 0x1C) = ((void *)func_00279CD0 == 0) ? 0 : (void *)func_00279CD0;
            amAdx_SetVolume(1, D_004E0618[0]);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210BB, 0);
        } else {
            func_0026D570(1);
            *(void **)(s3 + 0x1C) = ((void *)func_00279E60 == 0) ? 0 : (void *)func_00279E60;
        }
    }
}
extern s32 gEssTrade;
extern void SklSheet_Clear(void);
extern void func_002D2360(void);

/* Clears gEssTrade, then runs the two steps at 0x283C10 and 0x2D2360. */
void Trade_Start(void) {
    gEssTrade = 0;
    SklSheet_Clear();
    func_002D2360();
}
extern void func_002794D0(void);
extern s32 func_002D20D0(void);

void func_0027A1C0(s32 a0, s32 a1) {
    s32 *t;
    s32 *q;
    s32 cnt;
    s32 i;
    u8 *g;

    cnt = 0;
    i = 0;
    t = (s32 *)((u8 *)gEssTrade + (*(s32 *)((u8 *)gEssTrade + 0x50) << 5) + 0x58);
    q = t;
    do {
        if (q[2] > 0) {
            cnt++;
        }
        i++;
        q++;
    } while (i < 4);
    if (t[1] < cnt) {
        t[1] = cnt;
        t[0] = cnt;
        if (t[0] > 3) {
            t[0] = 3;
        }
    }
    t[6] = a0;
    t[7] = a1;
    g = *(u8 **)((u8 *)gEssTrade + 0x20);
    *(void **)(g + 0x1C) = ((void *)func_002794D0 == 0) ? 0 : (void *)func_002794D0;
}
extern void *amTask_Create();
extern void func_00279FD0();
extern char D_0046B540[];

void EssTrade_Start(void) {
    u8 *s0;
    *(void **)((u8 *)gEssTrade + 0x20) = amTask_Create(func_00279FD0, 0, 0x3000, 0x200, 0x10, D_0046B540);
    s0 = *(u8 **)((u8 *)gEssTrade + 0x20) + 0x30;
    memset(s0, 0, 0x1C);
    *(s32 *)s0 = 0x3C;
}
void EssTrade_Exit(void) {
    s32 s1;
    s32 s0;

    *(s32 *)(*(u8 **)((u8 *)gEssTrade + 0x24) + 0x34) = 0;
    StrStatus_Exit(*(void **)((u8 *)gEssTrade + 0x24));
    Smsg_Exit();
    amTask_KillGroup(0x200, 0x10, 0);
    s1 = 0;
    s0 = 0;
    do {
        if (*(void **)((u8 *)gEssTrade + s0) != 0) {
            amCdFs_Close(*(void **)((u8 *)gEssTrade + s0), 0);
        }
        s1++;
        s0 += 4;
    } while (s1 < 4);
    amHeap_Free((void *)gEssTrade);
    gEssTrade = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A370);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A4C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027AAE0);
