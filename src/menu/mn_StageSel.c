#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002861B0);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);

void func_00286650(u8 *a0) {
    s32 m;
    m = *(s32 *)(a0 + 0x4);
    D_00470704 = m;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x7000);
    D_00470238 = 0;
    if (*(s32 *)(a0 + 0x14) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x14), 1);
    }
    *(s32 *)(a0 + 0x14) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x8), 0.0f);
    if (*(s32 *)(a0 + 0x1C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x1C), 1);
    }
    *(s32 *)(a0 + 0x1C) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x38), 0.0f);
    if (*(s32 *)(a0 + 0x20) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x20), 1);
    }
    *(s32 *)(a0 + 0x20) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x8), 0.0f);
    if (*(s32 *)(a0 + 0x24) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x24), 1);
    }
    *(s32 *)(a0 + 0x24) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x14), 0.0f);
    if (*(s32 *)(a0 + 0x2C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x2C), 1);
    }
    *(s32 *)(a0 + 0x2C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x3C), 0.0f);
    if (*(s32 *)(a0 + 0x30) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x30), 1);
    }
    *(s32 *)(a0 + 0x30) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x48), 0.0f);
    if (*(s32 *)(a0 + 0x34) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x34), 1);
    }
    *(s32 *)(a0 + 0x34) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x54), 0.0f);
    if (*(s32 *)(a0 + 0x38) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x38), 1);
    }
    *(s32 *)(a0 + 0x38) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x60), 0.0f);
    if (*(s32 *)(a0 + 0x3C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x3C), 1);
    }
    *(s32 *)(a0 + 0x3C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x6C), 0.0f);
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);

void func_00286840(u8 *a0) {
    s32 m;
    m = *(s32 *)(a0 + 0x4);
    D_00470704 = m;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x7000);
    D_00470238 = 0;
    if (*(s32 *)(a0 + 0x14) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x14), 1);
    }
    *(s32 *)(a0 + 0x14) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x8), 0.0f);
    if (*(s32 *)(a0 + 0x1C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x1C), 1);
    }
    *(s32 *)(a0 + 0x1C) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x3C), 0.0f);
    if (*(s32 *)(a0 + 0x20) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x20), 1);
    }
    *(s32 *)(a0 + 0x20) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x8), 0.0f);
    if (*(s32 *)(a0 + 0x24) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x24), 1);
    }
    *(s32 *)(a0 + 0x24) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x14), 0.0f);
    if (*(s32 *)(a0 + 0x2C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x2C), 1);
    }
    *(s32 *)(a0 + 0x2C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x3C), 0.0f);
    if (*(s32 *)(a0 + 0x30) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x30), 1);
    }
    *(s32 *)(a0 + 0x30) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x48), 0.0f);
    if (*(s32 *)(a0 + 0x34) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x34), 1);
    }
    *(s32 *)(a0 + 0x34) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x54), 0.0f);
    if (*(s32 *)(a0 + 0x38) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x38), 1);
    }
    *(s32 *)(a0 + 0x38) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x60), 0.0f);
    if (*(s32 *)(a0 + 0x3C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x3C), 1);
    }
    *(s32 *)(a0 + 0x3C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x1C) + 0x70), 0.0f);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286A30);
typedef struct SsEnt {
    s32 p;
    s32 f4;
    s16 f8;
} SsEnt;

typedef struct SsWork {
    u8 *f0;
    char pad4[0x40];
    SsEnt ent[13];
    char padE0[0x242 - 0xE0];
    s16 f242[13];
    s16 f25C;
    char pad25E[2];
    s8 f260;
    u8 f261;
    char pad262[0x26C - 0x262];
    s32 f26C;
} SsWork;

void func_00286C50(SsWork *w) {
    s32 i;
    s16 sel;
    SsEnt *f;
    SsEnt *e;
    s32 step;
    s32 a;

    sel = 0;
    step = 0x10000 / w->f261;
    for (i = 0; i < 13; i++) {
        e = &w->ent[i];
        if (e->p != 0) {
            func_0022D0E0(e->p, 1);
            e->p = 0;
        }
    }
    for (a = 0; a < w->f261; a++) {
        f = &w->ent[a];
        f->p = func_0022D670(*(s32 *)(*(u8 **)(w->f0 + 0x1C) + 0x30), 0.0f);
        f->f4 = a * step;
        f->f8 = w->f242[a];
        if (f->f8 == w->f25C) {
            sel = a;
        }
    }
    w->f260 = sel;
    w->f26C = *(u16 *)&w->ent[sel].f4;
}
void func_00286DA0(u8 *a0, s16 a1) {
    u8 *obj;
    s32 n;
    s32 i;
    u8 *p;
    obj = a0;
    *(s16 *)(obj + 0x23E) = a1;
    n = 0;
    *(s16 *)(obj + 0x240) = a1;
    memset(obj + 0x242, -1, 0x1A);
    i = 0;
    p = obj;
    for (; i < 0xD; i++) {
        if (*(u16 *)(obj + 0x23E) & (1 << i)) {
            *(s16 *)(p + 0x242) = i;
            n++;
            p += 2;
        }
    }
    obj[0x261] = n;
    *(s32 *)(obj + 0x278) = 0x10000 / (obj[0x261] * 12);
    if (obj[0x262] == 2) {
        func_00286C50((void *)obj);
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286E70);
extern void *amSofdec_Create(void *);
extern void func_00286E70(void);
typedef signed short s16_c286FD0;
typedef signed int s32_c286FD0;
typedef struct SofInit_c286FD0 {
    s32_c286FD0 a0;
    s32_c286FD0 a4;
    s32_c286FD0 a8;
    s32_c286FD0 aC;
    s32_c286FD0 a10;
    s32_c286FD0 a14;
    s32_c286FD0 a18;
    void *a1C;
    s16_c286FD0 a20;
} SofInit_c286FD0;
typedef struct Ac2E4_c286FD0 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    void *f30;
} Ac2E4_c286FD0;
typedef struct SofPlay_c286FD0 {
    s16_c286FD0 cur;
    s16_c286FD0 prev;
} SofPlay_c286FD0;
typedef struct SofTask_c286FD0 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    SofPlay_c286FD0 p;
} SofTask_c286FD0;
extern s32_c286FD0 D_0046FD5C;

void func_00286FD0(Ac2E4_c286FD0 *s) {
    SofInit_c286FD0 in;

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
    s->f1C = (func_00286E70 == NULL) ? NULL : (void *)func_00286E70;
}

extern f32 gFrameDelta;
void func_00287060(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002861B0(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x28C) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x28C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s8 *)((u8 *)temp_s0 + 0x262) = 5;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    }
}

s32 func_00284AA0(s32);
s32 func_00285EF0(s32);
void func_002870D0(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x30);
    func_00284AA0(temp_s0);
    func_002861B0(temp_s0);
    func_00285EF0(temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287110);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002872A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002878B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287A70);
void func_00287C30(u8 *arg0, s32 arg1) {
    u8 *temp_a2;
    if (arg0 != NULL) {
        temp_a2 = *(u8 **)((u8 *)arg0 + 0x30);
        *(u16 *)((u8 *)temp_a2 + 0x240) |= arg1;
    }
}

s32 amCdFs_Close(s32, s32);
s32 amSofdec_Destroy(s32);
s32 func_00285C10(void *);
extern void *D_0047082C;
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void amNode_Free(void *);
extern void Help_Exit();
void func_00287C60(void) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    u8 *var_s2;
    s32 temp_a0_9;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *var_s1;
    u8 *temp_a0_5;
    u8 *temp_a0_7;
    u8 *temp_a0_6;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *temp_a0_4;
    s32 temp_a0_8;
    u8 *var_s3;

    var_s2 = D_0047082C;
    var_s0 = *(u8 **)((u8 *)var_s2 + 0x14);
    if (var_s0 != NULL) {
        var_s1 = *(u8 **)(0x30 + (u8 *)var_s0);
        func_00285C10(var_s1);
        temp_a0 = *(u8 **)((u8 *)var_s1 + 0);
        if (temp_a0 != NULL) {
            amHeap_Free(temp_a0);
        }
        temp_a0_2 = *(u8 **)((u8 *)var_s1 + 4);
        if (temp_a0_2 != NULL) {
            amHeap_Free(temp_a0_2);
        }
        temp_a0_3 = *(u8 **)(((u8 *)((u8 *)var_s1) + (s32)(8)));
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = *(u8 **)((u8 *)var_s1 + 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        temp_a0_5 = *(u8 **)((u8 *)var_s1 + 0x10);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        temp_a0_6 = *(u8 **)((u8 *)var_s1 + 0xE0);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
        temp_a0_7 = *(u8 **)((u8 *)var_s1 + 0xE4);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        var_s4 = 0;
        var_s3 = var_s1;
        do {
            amNode_Free(*(u8 **)((s8 *)var_s3 + 0x170));
            var_s4 += 1;
            var_s3 += 0x30;
        } while (var_s4 < 4);
        temp_v0 = *(u8 **)((u8 *)var_s1 + 0x230);
        if (temp_v0 != NULL) {
            temp_a0_8 = *(s32 *)((u8 *)temp_v0 + 0x30);
            var_s3 = temp_v0 + 0x30;
            if (temp_a0_8 >= 0) {
                amSofdec_Destroy(temp_a0_8);
            }
            *(s32 *)((u8 *)temp_v0 + 0x30) = -1;
            *(s16 *)((u8 *)var_s3 + 4) = -1;
            *(s16 *)((u8 *)var_s3 + 6) = -1;
            amTask_Kill(*(u8 **)(((u8 *)(0x230) + (s32)((u8 *)var_s1))));
        }
        amHeap_Free(var_s1);
        amTask_Kill(var_s0);
    }
    temp_a0_9 = *(s32 *)((u8 *)var_s2 + 8);
    if (temp_a0_9 != 0) {
        amCdFs_Close(temp_a0_9, 0);
    }
    temp_a0_10 = *(s32 *)((u8 *)var_s2 + 0xC);
    if (temp_a0_10 != 0) {
        amCdFs_Close(temp_a0_10, 0);
    }
    temp_a0_11 = *(s32 *)((u8 *)var_s2 + 0x10);
    if (temp_a0_11 != 0) {
        amCdFs_Close(temp_a0_11, 0);
    }
    temp_a0_12 = *(s32 *)((u8 *)var_s2 + 0);
    if (temp_a0_12 != 0) {
        amCdFs_Close(temp_a0_12, 0);
    }
    temp_a0_13 = *(s32 *)((u8 *)var_s2 + 4);
    if (temp_a0_13 != 0) {
        amCdFs_Close(temp_a0_13, 0);
    }
    amHeap_Free(var_s2);
    D_0047082C = NULL;
    Help_Exit();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287E60);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_0046B8D8[4];

void func_00288000(void) {
    u8 *temp_v0;

    temp_v0 = D_0047082C = amHeap_Alloc(0x18, 0, &D_0046B8D8[0], 0xF6);
    *(s32 *)((u8 *)temp_v0 + 8) = amCdFs_ReadFileId(0xF53, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0xC) = amCdFs_ReadFileId(0xF54, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0x10) = amCdFs_ReadFileId(0xF52, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0) = amCdFs_ReadFileId(0x10830, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 4) = amCdFs_ReadFileId(0x10831, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0x14) = 0;
}
