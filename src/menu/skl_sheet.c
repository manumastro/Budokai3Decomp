#include "common.h"

extern u8 *D_004706CC;

extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void func_0012F2C0(void);
extern void amCamera_Init(void *);
extern void func_002A9930(void);
extern void func_002A9EA0(void);
extern void amFile_Load(void *);
extern void amDraw_ResetPackets(void);
extern void func_002AF650(void *, void *);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern void func_002AF650(void *, void *);
extern u8 D_005BCD20[];

extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void amCdFs_SetHeap(u8);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern s32 func_002B0000(u8 *, s32 *);
extern void func_002A9C00(s32, s32, s32, void *, s32);
extern void func_002A9D30(s32, s32, void *, s32);
extern s32 func_002B0390(u8 *, s32 *);

extern void func_0012F2C0(void);
extern void amDraw_ResetPackets(void);
extern f32 D_004708F8;
extern u8 D_004E0660[];
extern u8 D_004E0668[];
extern s32 func_002B0190(u8 *, u8 *);

extern s32 func_002AF8E0(u8 *, u8 *);
extern u8 D_005BC180[];

extern void amCamera_Init(void *);
extern u8 D_005ABA80[];
extern u8 *gSklEdit;
extern u8 D_004E0688[];
extern void func_002B1D70(u8 *);
extern void func_002B1B10(u8 *, s32);
void func_00282CB0(u8 *d, u8 *b, s32 idx, s32 flags) {
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

INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00282E10);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_002832E0);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283710);
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283A00);
extern u8 *D_00470820;

void SklSheet_SetIndex(s16 a0) {
    *(s32 *)(D_00470820 + 0x48) = 2;
    *(s16 *)(D_00470820 + 0x60) = a0;
}
extern u8 *D_00470820;

s32 func_00283BF0(void) {
    s32 r;
    if (D_00470820 != 0) {
        r = *(s32 *)(D_00470820 + 0x48);
    } else {
        r = 8;
    }
    return r;
}
extern u8 *D_00470820;

void SklSheet_Clear(void) {
    D_00470820 = 0;
}
extern u8 *D_00470820;
extern void Help_Exit();
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void Obj_ResetF38(void *);
extern void amHeap_Free(void *);

void SklSheet_Free(void) {
    s32 i;
    s32 off;
    if (D_00470820 != 0) {
        Help_Exit();
        amTask_Kill(*(void **)(D_00470820 + 0x28));
        if (*(void **)(D_00470820 + 0x2C) != 0) {
            amTask_Kill(*(void **)(D_00470820 + 0x2C));
            if (*(void **)(D_00470820 + 0x44) != 0) {
                Obj_ResetF38(*(void **)(D_00470820 + 0x44));
            }
        }
        for (i = 0, off = 0; i < 5; i++, off += 4) {
            if (*(void **)(D_00470820 + off) != 0) {
                amCdFs_Close(*(void **)(D_00470820 + off), 0);
            }
            if (*(void **)(D_00470820 + off + 0x14) != 0) {
                amCdFs_ReleaseCache(*(void **)(D_00470820 + off + 0x14));
            }
        }
        amHeap_Free(D_00470820);
        D_00470820 = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/skl_sheet", func_00283D00);
