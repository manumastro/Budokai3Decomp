#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027AC90);

void func_0027B7D0(void) {
}

s32 func_0027A4C0(void *);
extern f32 gFrameDelta;
void func_0027B7E0(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_0027A4C0(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x54) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s8 *)((u8 *)temp_s0 + 0) = 7;
        *(void (**)())((u8 *)arg0 + 0x1C) = (func_0027B7D0 == NULL) ? NULL : func_0027B7D0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027B860);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027BDF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027C140);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027C2F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027CB20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027CF80);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D1D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D330);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D3B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027D820);
s32 CsModel_Ease(s32, f32, f32);
s32 func_00280D90(s32, f32, f32);
s32 func_002F9510(s32);
void func_0027DA00(u8 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_s0 + 0x60) = fparg0;
    temp_f1 = (fparg0 - *(f32 *)((u8 *)temp_s0 + 0x5C)) / fparg1;
    *(f32 *)((u8 *)temp_s0 + 0x64) = temp_f1;
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x5C) + temp_f1);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x28);
    if (temp_a0 != 0) {
        func_002F9510(temp_a0);
    }
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x2C);
    if (temp_a0_2 != 0) {
        func_00280D90(temp_a0_2, fparg0, fparg1);
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x30);
    if (temp_a0_3 != 0) {
        CsModel_Ease(temp_a0_3, fparg0, fparg1);
    }
}

s8 func_0027DAA0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 2);
}

s8 func_0027DAB0(u8 *arg0) {
    return **(s8 **)((u8 *)arg0 + 0x30);
}

void func_0027DAC0(u8 *arg0, s8 arg1) {
    **(s8 **)((u8 *)arg0 + 0x30) = arg1;
}

s8 func_0027DAD0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 5);
}

s8 func_0027DAE0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 4);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DAF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DB20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027DDC0);
extern void *D_00470810;
s32 func_0027E000(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)D_00470810 + 0)) + 4) == 3) && (*(s16 *)((u8 *)(*(u8 **)((u8 *)D_00470810 + 4)) + 4) == 3)) {
        var_v0 = 1;
    }
    return var_v0;
}

extern void CsSubArena_Init(void);
extern void CsSubStat_Init(void);
extern void DataErase_Clear(void);

extern void CsSubArena_Init(void);
extern void CsSubStat_Init(void);
extern void DataErase_Clear(void);
void func_0027E040(void) {
    D_00470810 = 0;
    CsSubStat_Init();
    CsSubArena_Init();
    DataErase_Clear();
}

extern void amHeap_Free(void *);
s32 amCdFs_Close(s32, s32);
extern void amHeap_Free(void *);
void func_0027E070(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;

    temp_s0 = D_00470810;
    *(s8 *)((u8 *)temp_s0 + 0x10) = (s8) (*(s8 *)((u8 *)temp_s0 + 0x10) - 1);
    if (*(s8 *)((u8 *)temp_s0 + 0x10) <= 0) {
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0);
        if (temp_a0 != 0) {
            amCdFs_Close(temp_a0, 0);
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 4);
        if (temp_a0_2 != 0) {
            amCdFs_Close(temp_a0_2, 0);
        }
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        amHeap_Free(temp_s0);
        D_00470810 = NULL;
    }
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E120);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027E2D0);
s32 amCdFs_ReadFileId(s32, s32, s32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern u8 D_0046B6D0[];

void func_0027E7E0(void)
{
    u8 *temp_s0;

    if (D_00470810 != NULL) {
        *(s8 *)((u8 *)D_00470810 + 0x10) = (s8)(*(s8 *)((u8 *)D_00470810 + 0x10) + 1);
        return;
    }
    temp_s0 = D_00470810 = amHeap_Alloc(0x14, 0, (s32 *)D_0046B6D0, 0x123);
    *(s32 *)(temp_s0 + 0x0) = amCdFs_ReadFileId(0x10820, 0, 0);
    *(s32 *)(temp_s0 + 0x4) = amCdFs_ReadFileId(0x10821, 0, 0);
    *(s32 *)(temp_s0 + 0x8) = 0;
    *(s32 *)(temp_s0 + 0xC) = 0;
    *(s8 *)(temp_s0 + 0x10) = 1;
}
s32 func_0022D0E0(s32, s32);
s32 func_0022D4B0(s32, s32);
void func_0027E880(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    temp_a0_12 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_12 != 0) {
        func_0022D4B0(temp_a0_12, 1);
    }
}

extern void memset(void *, s32, s32);
extern void *A2d_AllocObj(s32, f32);
extern f32 D_0047042C;
extern f32 D_00470430;
void func_0027E9C0(u8 *arg0) {
    u8 *temp_s0;

    *(u8 **)((u8 *)arg0 + 0x38) = temp_s0 = A2d_AllocObj(0, 0.0f);
    memset(temp_s0, 0, 0x60);
    *(s32 *)((u8 *)temp_s0 + 4) = 1;
    *(s32 *)((u8 *)temp_s0 + 0x14) = -1;
    *(s16 *)((u8 *)temp_s0 + 0x18) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x28) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x2C) = 0x3F800000;
    *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x3C) = D_00470430;
    *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
    *(f32 *)((u8 *)temp_s0 + 0x38) = D_0047042C;
    *(s32 *)((u8 *)temp_s0 + 0x50) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x54) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x58) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_s0 + 8) = 1;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027EA60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027EC10);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D860(s32, f32);
extern s32 gVsCharasel;

void func_0027EE70(u8 *a0) {
    u8 *g;
    s32 m;
    g = (u8 *)gVsCharasel;
    m = *(s32 *)(g + 0xC);
    D_00470704 = m;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x2000);
    D_00470238 = 0;
    if (*(s32 *)(a0 + 0x14) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x14), 1);
    }
    *(s32 *)(a0 + 0x14) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x20), 0.0f);
    if (*(s32 *)(a0 + 0x18) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x18), 1);
    }
    *(s32 *)(a0 + 0x18) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x2C), 0.0f);
    if (*(s32 *)(a0 + 0x1C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x1C), 1);
    }
    *(s32 *)(a0 + 0x1C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x38), 0.0f);
    if (*(s32 *)(a0 + 0x20) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x20), 1);
    }
    *(s32 *)(a0 + 0x20) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x68), 0.0f);
    if (*(s32 *)(a0 + 0x24) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x24), 1);
    }
    *(s32 *)(a0 + 0x24) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x14) + 0x4), 0.0f);
    if (*(s32 *)(a0 + 0x28) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x28), 1);
    }
    *(s32 *)(a0 + 0x28) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x44), 0.0f);
    if (*(s32 *)(a0 + 0x2C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x2C), 1);
    }
    *(s32 *)(a0 + 0x2C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x50), 0.0f);
    if (*(s32 *)(a0 + 0x30) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x30), 1);
    }
    *(s32 *)(a0 + 0x30) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x1C) + 0x5C), 0.0f);
    if (*(s32 *)(a0 + 0x34) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x34), 1);
    }
    *(s32 *)(a0 + 0x34) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)(g + 0x8) + 0x14) + 0x10), 0.0f);
}
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3();
extern void func_0027DB20(u8 *);
extern void VsMode_Load(void);
extern void PracMode_Load(void);
extern void func_0027F8B0(u8 *);

void func_0027F070(u8 *a0) {
    s32 i;
    u8 *s2;
    u8 *s4;
    u8 *s3;
    s8 r;
    u8 *s1;
    u16 pad;

    s1 = a0;
    s2 = *(u8 **)(a0 + 0x38);
    pad = D_00492FCE[0] | D_00493086[0];
    r = func_0027DAB0(*(u8 **)s2);
    if (r == 4 && (pad & 0x1000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        i = 0;
        s3 = s2;
        do {
            func_0027DB20(*(u8 **)s3);
            i++;
            s3 += 4;
        } while (i < 2);
        s4 = s1 + 0x30;
        s3 = *(u8 **)(s4 + 8);
        func_0027E9C0(s3);
        *(f32 *)(s3 + 0x40) = 60.0f;
        switch (*(s8 *)(s4 + 4)) {
        case 0:
            VsMode_Load();
            break;
        case 1:
            PracMode_Load();
            break;
        }
        *(void **)(s1 + 0x1C) = ((void *)func_0027F8B0 == 0) ? 0 : (void *)func_0027F8B0;
    }
    if (func_0027DAA0(*(u8 **)s2) == 1) {
        s1 = *(u8 **)(*(u8 **)(s2 + 4) + 0x30);
        if (s1[6] & 8) {
            s1[6] &= 0xF7;
            func_0027DAC0(*(u8 **)(s2 + 4), 4);
        }
        if (func_0027DAB0(*(u8 **)(s2 + 4)) == 4 && (pad & 0x1000)) {
            SoundRpc_SetVolume(0, 0, D_004E0614[0]);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            s1[6] |= 8;
            func_0027DAC0(*(u8 **)s2, 4);
        }
    }
}
extern u16 D_00493086[];
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3();
extern void func_0027DB20(u8 *);
extern void VsMode_Load(void);
extern void PracMode_Load(void);
extern void func_0027F8B0(u8 *);

void func_0027F290(u8 *a0) {
    s32 i;
    u8 *s2;
    u8 *s4;
    u8 *s3;
    s8 r;
    u8 *s1;
    u16 pad;

    s1 = a0;
    s2 = *(u8 **)(a0 + 0x38);
    r = func_0027DAB0(*(u8 **)(s2 + 4));
    pad = D_00493086[0];
    if (r == 4 && (pad & 0x1000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        i = 0;
        s3 = s2;
        do {
            func_0027DB20(*(u8 **)s3);
            i++;
            s3 += 4;
        } while (i < 2);
        s4 = s1 + 0x30;
        s3 = *(u8 **)(s4 + 8);
        func_0027E9C0(s3);
        *(f32 *)(s3 + 0x40) = 60.0f;
        switch (*(s8 *)(s4 + 4)) {
        case 0:
            VsMode_Load();
            break;
        case 1:
            PracMode_Load();
            break;
        }
        *(void **)(s1 + 0x1C) = ((void *)func_0027F8B0 == 0) ? 0 : (void *)func_0027F8B0;
    }
    if (func_0027DAA0(*(u8 **)(s2 + 4)) == 1) {
        s1 = *(u8 **)(*(u8 **)s2 + 0x30);
        if (s1[6] & 8) {
            s1[6] &= 0xF7;
            func_0027DAC0(*(u8 **)s2, 4);
        }
        if (func_0027DAB0(*(u8 **)s2) == 4 && (pad & 0x1000)) {
            SoundRpc_SetVolume(0, 0, D_004E0614[0]);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            s1[6] |= 8;
            func_0027DAC0(*(u8 **)(s2 + 4), 4);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F4A0);
extern u16 D_00492FCE[];
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3();
extern void func_0027DB20(u8 *);
extern void VsMode_Load(void);
extern void PracMode_Load(void);
extern void func_0027F8B0(u8 *);

void func_0027F680(u8 *a0) {
    s32 i;
    u8 *s2;
    u8 *s4;
    u8 *s3;
    s8 r;
    u8 *s1;
    u16 pad;

    s1 = a0;
    s2 = *(u8 **)(a0 + 0x38);
    r = func_0027DAB0(*(u8 **)s2);
    pad = D_00492FCE[0];
    if (r == 4 && (pad & 0x1000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        i = 0;
        s3 = s2;
        do {
            func_0027DB20(*(u8 **)s3);
            i++;
            s3 += 4;
        } while (i < 2);
        s4 = s1 + 0x30;
        s3 = *(u8 **)(s4 + 8);
        func_0027E9C0(s3);
        *(f32 *)(s3 + 0x40) = 60.0f;
        switch (*(s8 *)(s4 + 4)) {
        case 0:
            VsMode_Load();
            break;
        case 1:
            PracMode_Load();
            break;
        }
        *(void **)(s1 + 0x1C) = ((void *)func_0027F8B0 == 0) ? 0 : (void *)func_0027F8B0;
    }
    if (func_0027DAA0(*(u8 **)s2) == 1) {
        s1 = *(u8 **)(*(u8 **)(s2 + 4) + 0x30);
        if (s1[6] & 8) {
            s1[6] &= 0xF7;
            func_0027DAC0(*(u8 **)(s2 + 4), 4);
        }
        if (func_0027DAB0(*(u8 **)(s2 + 4)) == 4 && (pad & 0x1000)) {
            SoundRpc_SetVolume(0, 0, D_004E0614[0]);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            s1[6] |= 8;
            func_0027DAC0(*(u8 **)s2, 4);
        }
    }
}
extern void A2d_FlushList(void);
extern void amCamera_Init(void *);
extern void amCdFs_ReleaseCache(void *);
extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
extern void func_002A9EA0(void);
extern void amFile_Load(void *);
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void amSound_LoadBank();
extern void amMotion_Create(void *);
#include "battle/script.h"
extern void amAdx_Pause(s32, s32);

extern void A2d_FlushList(void);
extern void func_002A9AE0(s32, s32, s32, s32);
extern void func_002A9C00(s32, s32, s32, s32, s32);
extern void func_002A9EA0(void);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);
extern void func_00144A40(s32, s32, f32);
extern void func_00144770(s32, f32);
extern void SoundRpc_SendWord(s32);
extern void func_001445C0(s32);
extern void SoundRpc_SendWord2(s32);
extern void func_00144050(s32, s32, s32, s32, f32, f32, f32);
extern void func_00143E70(s32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern void memset(void *, s32, s32);
extern void func_002B0A40(s32);
extern void func_00298E10(s32);
extern void func_00298E00(s32);
extern void *amMotion_CreateFromObj(s32, s32, s32);

extern void amMotion_BindAnim(s32, s32, s32);

extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
extern void amCamera_Init(void *);
extern s32 amSound_LoadBank2(void *, void *);

extern void amMotSet_Apply(void *, f32, s32);
void func_0027F890(void) {
    A2d_FlushList();
}


void func_0027F8A0(void) {
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F8B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027F9F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FAE0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FCA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FE10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_0027FEB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_002800F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_charasel", func_002802E0);
extern s32 D_00470030;
extern s32 D_00470034;
extern s32 gVsCharasel;
void func_00280470(void) {
    func_0027D820(1);
    gVsCharasel = 0;
    D_00470030 = -1;
    D_00470034 = -1;
    func_0027E040();
}

extern void amTask_Kill(void *);
extern void func_0028DF20(void);
void func_002804A0(void) {
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_s0 = gVsCharasel;
    temp_v0 = *(u8 **)((u8 *)temp_s0 + 0x14);
    if (temp_v0 != NULL) {
        temp_s1 = *(u8 **)((u8 *)temp_v0 + 0x38);
        func_0027E880(temp_s1);
        amHeap_Free(temp_s1);
        amTask_Kill(*(u8 **)((u8 *)temp_s0 + 0x14));
    }
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x10);
    if (temp_a0 != NULL) {
        amTask_Kill(temp_a0);
    }
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0x18);
    if (temp_a0_2 != NULL) {
        amTask_Kill(temp_a0_2);
    }
    temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 8);
    if (temp_a0_3 != NULL) {
        amHeap_Free(temp_a0_3);
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s0 + 0xC);
    if (temp_a0_4 != NULL) {
        amHeap_Free(temp_a0_4);
    }
    temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0);
    if (temp_a0_5 != 0) {
        amCdFs_Close(temp_a0_5, 0);
    }
    temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 4);
    if (temp_a0_6 != 0) {
        amCdFs_Close(temp_a0_6, 0);
    }
    amHeap_Free((u8 *) temp_s0);
    gVsCharasel = 0;
    func_0027E070();
    func_0027E070();
    func_0028DF20();
}

