#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F57E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F66E0);
void func_002F69E0(u8 *arg0, u8 *arg1) {
    *(u8 *)((u8 *)arg0 + 0) = (u8) ((*(s16 *)((u8 *)arg1 + 0x20) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0) = (u8) (*(u8 *)((u8 *)arg0 + 0) | (((s16) *(s16 *)((u8 *)arg1 + 0x22) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 1) = (u8) ((*(s16 *)((u8 *)arg1 + 0x22) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 1) = (u8) (*(u8 *)((u8 *)arg0 + 1) | (((s16) *(s16 *)((u8 *)arg1 + 0x24) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 2) = (u8) ((*(s16 *)((u8 *)arg1 + 0x24) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 2) = (u8) (*(u8 *)((u8 *)arg0 + 2) | (*(s16 *)((u8 *)arg1 + 0x26) & 0x3F));
    *(u8 *)((u8 *)arg0 + 3) = (u8) ((*(s16 *)((u8 *)arg1 + 0x28) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 3) = (u8) (*(u8 *)((u8 *)arg0 + 3) | (((s16) *(s16 *)((u8 *)arg1 + 0x2A) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 4) = (u8) ((*(s16 *)((u8 *)arg1 + 0x2A) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 4) = (u8) (*(u8 *)((u8 *)arg0 + 4) | (((s16) *(s16 *)((u8 *)arg1 + 0x2C) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 5) = (u8) ((*(s16 *)((u8 *)arg1 + 0x2C) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 5) = (u8) (*(u8 *)((u8 *)arg0 + 5) | (*(s16 *)((u8 *)arg1 + 0x2E) & 0x3F));
    *(u8 *)((u8 *)arg0 + 6) = (u8) ((*(s16 *)((u8 *)arg1 + 0x30) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 6) = (u8) (*(u8 *)((u8 *)arg0 + 6) | (((s16) *(s16 *)((u8 *)arg1 + 0x32) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 7) = (u8) ((*(s16 *)((u8 *)arg1 + 0x32) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 7) = (u8) (*(u8 *)((u8 *)arg0 + 7) | (((s16) *(s16 *)((u8 *)arg1 + 0x34) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 8) = (u8) ((*(s16 *)((u8 *)arg1 + 0x34) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 8) = (u8) (*(u8 *)((u8 *)arg0 + 8) | (*(s16 *)((u8 *)arg1 + 0x36) & 0x3F));
    *(u8 *)((u8 *)arg0 + 9) = (u8) ((*(s16 *)((u8 *)arg1 + 0x38) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 9) = (u8) (*(u8 *)((u8 *)arg0 + 9) | (((s16) *(s16 *)((u8 *)arg1 + 0x3A) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0xA) = (u8) ((*(s16 *)((u8 *)arg1 + 0x3A) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0xA) = (u8) (*(u8 *)((u8 *)arg0 + 0xA) | (((s16) *(s16 *)((u8 *)arg1 + 0x3C) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0xB) = (u8) ((*(s16 *)((u8 *)arg1 + 0x3C) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0xB) = (u8) (*(u8 *)((u8 *)arg0 + 0xB) | (*(s16 *)((u8 *)arg1 + 0x3E) & 0x3F));
    *(u8 *)((u8 *)arg0 + 0xC) = (u8) ((*(s16 *)((u8 *)arg1 + 0x40) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0xC) = (u8) (*(u8 *)((u8 *)arg0 + 0xC) | (((s16) *(s16 *)((u8 *)arg1 + 0x42) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0xD) = (u8) ((*(s16 *)((u8 *)arg1 + 0x42) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0xD) = (u8) (*(u8 *)((u8 *)arg0 + 0xD) | (((s16) *(s16 *)((u8 *)arg1 + 0x44) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0xE) = (u8) ((*(s16 *)((u8 *)arg1 + 0x44) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0xE) = (u8) (*(u8 *)((u8 *)arg0 + 0xE) | (*(s16 *)((u8 *)arg1 + 0x46) & 0x3F));
    *(u8 *)((u8 *)arg0 + 0xF) = (u8) ((*(s16 *)((u8 *)arg1 + 0x48) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0xF) = (u8) (*(u8 *)((u8 *)arg0 + 0xF) | (((s16) *(s16 *)((u8 *)arg1 + 0x4A) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0x10) = (u8) ((*(s16 *)((u8 *)arg1 + 0x4A) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0x10) = (u8) (*(u8 *)((u8 *)arg0 + 0x10) | (((s16) *(s16 *)((u8 *)arg1 + 0x4C) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0x11) = (u8) ((*(s16 *)((u8 *)arg1 + 0x4C) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0x11) = (u8) (*(u8 *)((u8 *)arg0 + 0x11) | (*(s16 *)((u8 *)arg1 + 0x4E) & 0x3F));
    *(u8 *)((u8 *)arg0 + 0x12) = (u8) ((*(s16 *)((u8 *)arg1 + 0x50) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0x12) = (u8) (*(u8 *)((u8 *)arg0 + 0x12) | (((s16) *(s16 *)((u8 *)arg1 + 0x52) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0x13) = (u8) ((*(s16 *)((u8 *)arg1 + 0x52) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0x13) = (u8) (*(u8 *)((u8 *)arg0 + 0x13) | (((s16) *(s16 *)((u8 *)arg1 + 0x54) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0x14) = (u8) ((*(s16 *)((u8 *)arg1 + 0x54) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0x14) = (u8) (*(u8 *)((u8 *)arg0 + 0x14) | (*(s16 *)((u8 *)arg1 + 0x56) & 0x3F));
    *(u8 *)((u8 *)arg0 + 0x15) = (u8) ((*(s16 *)((u8 *)arg1 + 0x58) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0x15) = (u8) (*(u8 *)((u8 *)arg0 + 0x15) | (((s16) *(s16 *)((u8 *)arg1 + 0x5A) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0x16) = (u8) ((*(s16 *)((u8 *)arg1 + 0x5A) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0x16) = (u8) (*(u8 *)((u8 *)arg0 + 0x16) | (((s16) *(s16 *)((u8 *)arg1 + 0x5C) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0x17) = (u8) ((*(s16 *)((u8 *)arg1 + 0x5C) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0x17) = (u8) (*(u8 *)((u8 *)arg0 + 0x17) | (*(s16 *)((u8 *)arg1 + 0x5E) & 0x3F));
    *(u8 *)((u8 *)arg0 + 0x18) = (u8) ((*(s16 *)((u8 *)arg1 + 0x60) * 4) & 0xFC);
    *(u8 *)((u8 *)arg0 + 0x18) = (u8) (*(u8 *)((u8 *)arg0 + 0x18) | (((s16) *(s16 *)((u8 *)arg1 + 0x62) >> 4) & 3));
    *(u8 *)((u8 *)arg0 + 0x19) = (u8) ((*(s16 *)((u8 *)arg1 + 0x62) * 0x10) & 0xF0);
    *(u8 *)((u8 *)arg0 + 0x19) = (u8) (*(u8 *)((u8 *)arg0 + 0x19) | (((s16) *(s16 *)((u8 *)arg1 + 0x64) >> 2) & 0xF));
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8) ((*(s16 *)((u8 *)arg1 + 0x64) << 6) & 0xC0);
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8) (*(u8 *)((u8 *)arg0 + 0x1A) | (*(s16 *)((u8 *)arg1 + 0x66) & 0x3F));
}
extern void func_002F66E0(u8 *);
extern void func_002F57E0(s32, u8 *);

void func_002F6E00(s32 arg0) {
    u8 sp20[0x20];
    func_002F69E0(sp20, (u8 *)arg0);
    func_002F66E0(sp20);
    func_002F57E0(arg0, sp20);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F6E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F72A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F75A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8340);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F84A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F85D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8710);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8860);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8A40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8C60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8DE0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F8EB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F9060);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void func_001DD680();
extern void func_001DA4C0(void);
extern void func_001D9960();
extern void *D_00470580[2];
extern void *amTask_Create();
extern void func_00237000(int, void *);
extern void func_001D80A0(void *, int);
#include "battle/battle.h"
typedef struct Task {
     u8 unk00[0x30];
     u8 work[1];
} Task;
extern s32 D_00470578;
extern s32 D_0047057C;
extern void *D_00470580[2];
extern u32 func_0012EAE0(s32);
extern void srand(s32);
extern void func_001E2510(Fighter *);
extern void Sp_CallHandler(s32, void *);
extern s32 func_001DF420(Fighter *, s32, s32);
extern void Btl_UpdateLimitXY(s32, f32, f32);
extern void func_001DA4C0(void);
extern void func_001D8A50(Fighter *);
extern void PlyScr_Start(Fighter *, s32, s32);
extern void amTask_Kill(void *);
extern s32 D_004B41F0[7];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void func_002F8A40(void *);
extern void func_001E73E0(void *, s32, s32);
extern void func_001D9EB0(void *, s32);
extern void func_001E9B00(void *, s32, s32, s32, f32, f32);
extern void *amTask_Create(void (*update)(Task *), void (*kill)(Task *), s32 prio, s32, s32, char *name);
extern void memset(void *, s32, s32);
extern void func_001A3610(s32);
extern void func_001E11E0(s32, void *);
extern void func_0021A030(void *, s32, s32, f32);
extern void func_00237000(s32, void *);
extern void func_001DD680(Fighter *, s32);
extern void func_001D9960(Fighter *, s32, s32);
extern void CharLight_Release(s32);
extern void CharBody_Release(s32);
extern void func_001C9840(s32);
extern void amHeap_Free(void *);
extern s32 func_001C9A70(s32);
extern s32 func_001CA130(s32);
void ScrVib_TaskKill(Task *task);
void func_001CACB0(Task *task);

void func_002F91B0(s32 *a) {
    func_002F8A40((void *)a[12]);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F91C0);
s32 func_002F92C0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x34);
}
extern void func_002F8DE0(void *);

void func_002F92D0(s32 *a) {
    func_002F8DE0((void *)a[12]);
}
s8 func_002F92E0(u8 *arg0) {
    return *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xA);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F92F0);
void func_002F9500(u8 *arg0, f32 fparg0, f32 fparg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_v1 + 0x18) = fparg0;
    *(f32 *)((u8 *)temp_v1 + 0x1C) = fparg1;
}
void func_002F9510(u8 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_v1 + 0x28) = fparg0;
    temp_f1 = (fparg0 - *(f32 *)((u8 *)temp_v1 + 0x24)) / fparg1;
    *(f32 *)((u8 *)temp_v1 + 0x2C) = temp_f1;
    *(f32 *)((u8 *)temp_v1 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x24) + temp_f1);
}
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
void func_002F9540(s8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *temp_s3;
    u8 *temp_s2;
    int var_s1;
    u8 *var_s0;

    var_s1 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s0 = temp_s3;
    do {
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0x3C);
        temp_s2 = var_s0 + 0x38;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            *(s32 *)(4 + (u8 *)temp_s2) = 0;
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s2 + 8);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)(((s32)(8) + (s32)((u8 *)temp_s2))) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0x27);
    amHeap_Free(temp_s3);
    amTask_Kill(arg0);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F95E0);
extern void amHeap_Free(void *);
extern void func_0012F2C0(void);
extern void amCamera_Init(void *);
extern void amCdFs_ReleaseCache(void *);
extern void func_002A9930(void);
extern void func_002A9EA0(void);
extern void amFile_Load(void *);
extern void amDraw_ResetPackets(void);
extern void func_002AF650(void *, void *);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern void Help_Exit();
extern void Obj_ResetF38(void *);
extern u8 *D_004706CC;
extern void amCdFs_Close(void *, s32);
extern u8 D_005BCD20[];
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void amCdFs_SetHeap(u8);
extern s32 func_002B0000(u8 *, s32 *);
extern void func_002A9C00(s32, s32, s32, void *, s32);
extern void func_002A9D30(s32, s32, void *, s32);
extern s32 func_002B0390(u8 *, s32 *);
extern f32 D_004708F8;
extern u8 D_004E0660[];
extern u8 D_004E0668[];
extern s32 func_002B0190(u8 *, u8 *);
extern s32 func_002AF8E0(u8 *, u8 *);
extern u8 D_005BC180[];
extern u8 D_005ABA80[];
extern u8 *gSklEdit;
extern u8 D_004E0688[];
extern void func_002B1D70(u8 *);
extern void func_002B1B10(u8 *, s32);
extern u8 *D_00470820;
void func_002F9710(u8 *d, u8 *b, s32 idx, s32 flags) {
    s32 off;
    u8 *e;
    f32 X;
    f32 Y;
    off = *(s32 *)((*(s32 *)(b + 0x14) + (s32)b) + (idx - *(s32 *)(b + 0x18)) * 4);
    e = b + off;
    X = (f32)*(s16 *)(e + 0x10);
    Y = (f32)*(s16 *)(e + 0x12);
    if (flags & 1) {
        *(s32 *)(d + 0x34) = 0;
        *(f32 *)(d + 0x3C) = Y * *(f32 *)(D_004706CC + 0x3C);
    } else if (flags & 2) {
        *(f32 *)(d + 0x34) = -Y * *(f32 *)(D_004706CC + 0x3C);
        *(s32 *)(d + 0x3C) = 0;
    } else {
        *(f32 *)(d + 0x34) = (-Y / 2.0f) * *(f32 *)(D_004706CC + 0x3C);
        *(f32 *)(d + 0x3C) = (Y / 2.0f) * *(f32 *)(D_004706CC + 0x3C);
    }
    if (flags & 8) {
        *(s32 *)(d + 0x30) = 0;
        *(f32 *)(d + 0x38) = X * *(f32 *)(D_004706CC + 0x38);
    } else if (flags & 0x10) {
        *(f32 *)(d + 0x30) = -X * *(f32 *)(D_004706CC + 0x38);
        *(s32 *)(d + 0x38) = 0;
    } else {
        *(f32 *)(d + 0x30) = (-X / 2.0f) * *(f32 *)(D_004706CC + 0x38);
        *(f32 *)(d + 0x38) = (X / 2.0f) * *(f32 *)(D_004706CC + 0x38);
    }
    *(s32 *)(d + 0x40) = 0;
    *(s32 *)(d + 0x44) = 0;
    *(f32 *)(d + 0x48) = X;
    *(f32 *)(d + 0x4C) = Y;
}

s32 amAdx_IsStopped(s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
extern f32 D_004E0618[4];
extern void *gTourMap;
extern void amAdx_Pause();

void func_002F9870(u8 *arg0)
{
    s32 temp_s1;
    u8 *temp_s0;
    s32 _arg2;
    temp_s0 = (arg0 + 0x30);
    if ((*((s32 *)((((u8 *)arg0) + 0x34))) != 0))
    {
        if ((amAdx_IsStopped(1) & 5))
        {
            *((s16 *)((((u8 *)gTourMap) + 0x5E))) = ((u16)((*((s16 *)((((u8 *)gTourMap) + 0x5E))) + 1)));
            amTask_Kill(arg0);
        }
    }
    else
        if ((*((s16 *)((((u8 *)gTourMap) + 0x5E))) == *((s32 *)((((u8 *)temp_s0) + 8)))))
        {
            temp_s1 = *((s32 *)((((s32)((u8 *)arg0)) + ((s32)0x30))));
            amAdx_SetVolume(1, D_004E0618[0]);
            amAdx_Pause(1, 0);
            _arg2 = (temp_s1 | 0x20000);
            amAdx_PlayAfs(1, _arg2, 0);
            *((s32 *)((((u8 *)temp_s0) + 4))) = 1;
        }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002F9930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002FAB70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_CharSelChip", func_002FACA0);
