#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_0029FE20);
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0060);
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A02B0);
extern u8 *D_004708CC;
extern u8 *D_004708CC;
void func_002A0700(s32 arg0, s32 arg1, u8 *arg2) {
    u8 *temp_v1;

    temp_v1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x4C) + (arg0 * 4)) + (arg1 * 0x2C));
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) *(f32 *)((u8 *)arg2 + 0);
    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) *(f32 *)((u8 *)arg2 + 4);
    *(f32 *)((u8 *)temp_v1 + 0xC) = (f32) *(f32 *)((u8 *)arg2 + 8);
    *(s32 *)((u8 *)temp_v1 + 0x14) = 0;
    *(s32 *)((u8 *)temp_v1 + 0x18) = 0;
}

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0750);
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A07A0);
void func_002A07D0(s32 arg0, s32 arg1, f32 fparg0) {
    u8 *temp_a0;

    temp_a0 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x4C) + (arg0 * 4)) + (arg1 * 0x2C));
    if (*(s32 *)((u8 *)temp_a0 + 4) >= 0) {
        *(f32 *)((u8 *)temp_a0 + 0x20) = fparg0;
    }
    if (*(s32 *)((u8 *)temp_a0 + 0) >= 0) {
        *(f32 *)((u8 *)temp_a0 + 0x20) = fparg0;
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0830);
void func_002A09A0(s32 arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(s32 *)((u8 *)D_004708CC + 0x58) + (arg0 * 0x30)) + 0x14) = arg1;
}

extern void func_0022E0B0(void *);
void func_002A09C0(u8 *arg0) {
    if ((u32)*(u32 *)((u8 *)arg0 + 0x14) <= (u32)arg0) {
        func_0022E0B0(arg0);
    }
}

void func_002A09F0(s32 arg0, s32 arg1, u8 *arg2) {
    u8 *temp_v1;
    temp_v1 = (unsigned char *)(*(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x48) + arg0 * 4) + (arg1 << 5));
    *(f32 *)((u8 *)temp_v1 + 4) = (f32)*(f32 *)((u8 *)arg2 + 0);
    *(f32 *)((u8 *)temp_v1 + 0xC) = (f32)*(f32 *)((u8 *)arg2 + 4);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32)*(f32 *)((u8 *)arg2 + 8);
    *(s32 *)((u8 *)temp_v1 + 0x10) = 0;
    *(s32 *)((u8 *)temp_v1 + 0x14) = 0;
}

void func_002A0A30(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)(*(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x48) + arg0 * 4) + (arg1 << 5)) = arg2;
}

void func_002A0A60(s32 arg0, s32 arg1) {
    s32 var_t0;
    u8 *base;
    s32 var_a1;
    u8 *temp_v1;

    base = D_004708CC;
    *(s32 *)(*(s32 *)(base + 0x54) + arg0 * 4) = arg1;
    var_t0 = 0;
    if (0 < *(s32 *)(base + 0)) {
        var_a1 = 0;
        do {
            var_t0 += 1;
            temp_v1 = (unsigned char *)(*(u8 **)(*(s32 *)(base + 0x48) + var_a1) + (arg0 << 5));
            *(s32 *)((u8 *)temp_v1 + 0x18) = 0;
            *(s32 *)((u8 *)temp_v1 + 0x1C) = 0;
            var_a1 += 4;
        } while (var_t0 < *(s32 *)(base + 0));
    }
}
void func_002A0AD0(s32 arg0, s32 arg1, u8 *arg2) {
    u8 *temp_v1;

    temp_v1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + (arg0 * 4)) + (arg1 * 0xE0));
    *(f32 *)((u8 *)temp_v1 + 4) = (f32) *(f32 *)((u8 *)arg2 + 0);
    *(f32 *)((u8 *)temp_v1 + 0xC) = (f32) *(f32 *)((u8 *)arg2 + 4);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) *(f32 *)((u8 *)arg2 + 8);
    *(s32 *)((u8 *)temp_v1 + 0x10) = 0;
    *(s32 *)((u8 *)temp_v1 + 0x14) = 0;
}

void func_002A0B20(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p;
    p = *(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4) + arg1 * 0xE0 + arg2 * 0x50 + 0x80;
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(arg3), "r"(p) : "memory");
}

void func_002A0B70(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p;
    p = *(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4) + arg1 * 0xE0 + arg2 * 0x50 + 0x70;
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(arg3), "r"(p) : "memory");
}

void func_002A0BC0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p;
    p = *(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4) + arg1 * 0xE0 + arg2 * 0x50 + 0x60;
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(arg3), "r"(p) : "memory");
}

void func_002A0C10(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p;
    p = *(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4) + arg1 * 0xE0 + arg2 * 0x50 + 0x50;
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(arg3), "r"(p) : "memory");
}

void func_002A0C60(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u8 *p;
    p = *(u8 **)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4) + arg1 * 0xE0 + arg2 * 0x50 + 0x40;
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(arg3), "r"(p) : "memory");
}

void func_002A0CB0(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)((u8 *)(arg1 * 0xE0) + (s32)*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + arg0 * 4)) + 0x30) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0CE0);
void func_002A0D20(s32 arg0, s32 arg1, s32 arg2) {
    *(s32 *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + (arg0 * 4)) + (arg1 * 0xE0)) = arg2;
}

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0D50);
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A0D70);
s32 func_002A1020(s32 arg0) {
    if (D_004708CC != NULL) {
        goto block_3;
    }
    return 0;
block_3:
    return arg0 >= *(s32 *)((u8 *)D_004708CC + 0x30);
}

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A1050);
INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A10F0);
void func_002A11C0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_v1;

    temp_v1 = (unsigned char *)(*(s32 *)((u8 *)D_004708CC + 0x50) + (arg0 * 8));
    *(s32 *)((u8 *)temp_v1 + 0) = arg1;
    *(s32 *)((u8 *)temp_v1 + 4) = arg2;
}

extern void amHeap_Free(void *);
extern void amCdFs_ReleaseCache(void *);
extern void Help_Exit();
extern void Obj_ResetF38(void *);
extern u8 *D_004708CC;
extern void Help_Exit();
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void Obj_ResetF38(void *);
extern void amHeap_Free(void *);
void func_002A11E0(void) {
    D_004708CC = 0;
}

INCLUDE_ASM("asm/nonmatchings/sys/cnv_sys", func_002A11F0);
void func_002A12E0(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x28) = arg0;
}

void func_002A12F0(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x24) = arg0;
}

void func_002A1300(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x20) = arg0;
}

s32 func_002A1310(void) {
    return *(s32 *)((u8 *)D_004708CC + 0x20);
}

void func_002A1320(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x1C) = arg0;
}

typedef signed short s16_c2A1330;
typedef signed int s32_c2A1330;
typedef struct TaskData_c2A1330 {
    void *work;
    s32_c2A1330 wait;
} TaskData_c2A1330;
typedef struct Task_c2A1330 {
    char name[16];
    s32_c2A1330 f10;
    s32_c2A1330 f14;
    s32_c2A1330 prio;
    struct Task_c2A1330 *prev;
    struct Task_c2A1330 *next;
    s32_c2A1330 f2C;
    TaskData_c2A1330 data;
} Task_c2A1330;
typedef struct ZenieFile_c2A1330 {
    s32_c2A1330 f0;
    s16_c2A1330 state;
    char pad6[0x54 - 0x6];
    void *data;
} ZenieFile_c2A1330;
typedef struct ZenieModel_c2A1330 {
    char pad0[0x14];
    s32_c2A1330 *f14;
    char pad18[4];
    s32_c2A1330 *f1C;
} ZenieModel_c2A1330;
typedef struct ZenieAnim_c2A1330 {
    s32_c2A1330 id;
    s32_c2A1330 f4;
    s32_c2A1330 frame;
    s32_c2A1330 done;
    char pad10[0x30 - 0x10];
} ZenieAnim_c2A1330;
typedef struct ZenieWork_c2A1330 {
    s32_c2A1330 f0;
    s32_c2A1330 state;
    s32_c2A1330 type;
    s32_c2A1330 cur;
    s32_c2A1330 target;
    s32_c2A1330 start;
    s32_c2A1330 f18;
    s32_c2A1330 step;
    ZenieFile_c2A1330 *file[2];
    void *f28[2];
    ZenieModel_c2A1330 *model[2];
    Task_c2A1330 *task;
    s32_c2A1330 f3C;
    s32_c2A1330 timer;
    s32_c2A1330 flags;
    ZenieAnim_c2A1330 anim[2];
    s32_c2A1330 fA8;
} ZenieWork_c2A1330;
void func_002A1330(s32_c2A1330 a0) {
    (*(ZenieWork_c2A1330 * *)&D_004708CC)->f18 = a0;
}


s32 func_002A1340(void) {
    return *(s32 *)((u8 *)D_004708CC + 0x18);
}

void func_002A1350(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x14) = arg0;
}

s32 func_002A1360(s32 arg0) {
    return arg0 == *(s32 *)((u8 *)D_004708CC + 0x14);
}

s32 func_002A1380(void) {
    return *(s32 *)((u8 *)D_004708CC + 0xC);
}

s32 func_002A1390(void) {
    return *(s32 *)((u8 *)D_004708CC + 4);
}

s32 func_002A13A0(void) {
    return *(s32 *)D_004708CC;
}

s32 func_002A13B0(void) {
    return *(s32 *)((u8 *)D_004708CC + 0x30);
}

extern void amAdx_Stop();
extern void amAdx_Stop();
void func_002A13C0(s32 arg0) {
    s32 var_s0;

    var_s0 = 1;
    *(s32 *)((u8 *)D_004708CC + 0x30) = arg0;
    do {
        amAdx_Stop(var_s0);
        var_s0 += 1;
    } while (var_s0 < 4);
}

void func_002A1410(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x2C) = arg0;
}

void func_002A1420(s32 arg0) {
    *(s32 *)((u8 *)D_004708CC + 0x10) = arg0;
}

void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(void *, s32, s32);
extern s32 D_0046EA58[];
void func_002A1430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_s0;

    D_004708CC = amHeap_Alloc(0x60, 0, D_0046EA58, 0x99);
    memset(D_004708CC, 0, 0x60);
    temp_s0 = D_004708CC;
    *(s32 *)((u8 *)temp_s0 + 0) = arg0;
    *(s32 *)((u8 *)temp_s0 + 4) = arg1;
    *(s32 *)((u8 *)temp_s0 + 8) = arg2;
    *(s32 *)((u8 *)temp_s0 + 0xC) = arg3;
    *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0) <= 0) {
        *(s32 *)((u8 *)temp_s0 + 0) = 1;
    }
    func_002A02B0();
    func_002A0060();
    func_0029FE20();
    *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x38) = 0x3F800000;
    *(s32 *)((u8 *)temp_s0 + 0x1C) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x20) = -1;
    *(s32 *)((u8 *)temp_s0 + 0x40) = -1;
}
