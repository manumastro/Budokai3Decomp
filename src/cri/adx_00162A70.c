#include "common.h"

extern s32 D_00462E20;

s32 func_00162080();                                /* extern */

s32 func_00127A88(s32 *, s32);              /* extern */
s32 func_00162398();                                /* extern */
s32 func_00163AB8(s32);                             /* extern */
s32 sprintf(s32, s32 *, s32, s32 *);    /* extern */
extern s32 D_00462DF8;
extern s32 D_0047ECE0;

extern s32 D_0041158C;
extern s32 D_00411590;

s32 func_00161D20(s32 *);                   /* extern */
extern s32 D_00462648;

INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162A70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162AD8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162B98);
s32 func_00162C68(u8 *arg0) {
    s32 (*temp_v0)(s32, s32, s32, s32);
    s32 var_v1;

    if (arg0 == NULL) {
        func_00161D20(&D_00462648);
        return -1;
    }
    temp_v0 = *(s32 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60);
    var_v1 = 0x7FFFFFFF;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(*(s32 *)((u8 *)arg0 + 4), 0x12C, 0, 0);
    }
    return var_v1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162CC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162E08);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162E70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162EC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162F30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162FF0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163098);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001631A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163280);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001632D8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163458);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163518);
void func_001635A0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        D_0041158C = 0;
        D_00411590 = 0;
        return;
    }
    D_0041158C = arg0;
    D_00411590 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001635C8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163630);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163698);
s32 func_00163758(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163760);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163868);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163928);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001639F8);
typedef signed int Sint32_x00163AB8;
typedef char Char8_x00163AB8;
extern int* sceCdCallback_x00163AB8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00163AB8 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00163AB8* device_name, void*, Sint32_x00163AB8);
               void (*Close)(void* fd);
               Sint32_x00163AB8 (*Seek)(void* fd, Sint32_x00163AB8 offset, Sint32_x00163AB8 whence);
               Sint32_x00163AB8 (*Tell)(void* fd);
               Sint32_x00163AB8 (*ReqRd)(void* fd, Sint32_x00163AB8 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00163AB8 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x00163AB8 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00163AB8;
extern void (*cvfs_errfn_x00163AB8)(void*, const Char8_x00163AB8*) __asm__("cvfs_errfn");
CVFSDevice_x00163AB8* getDevice_x00163AB8(const Char8_x00163AB8* name) __asm__("func_00162080");
CVFSDevice_x00163AB8* getDevice_x00163AB8(const Char8_x00163AB8* name) __asm__("func_00162080");
Sint32_x00163AB8 func_00163AB8_x00163AB8(Char8_x00163AB8* device_name) __asm__("func_00163AB8");
/* isNeedDevName: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00163AB8 func_00163AB8_x00163AB8(Char8_x00163AB8* device_name) {
    CVFSDevice_x00163AB8* device = getDevice_x00163AB8(device_name);
    Sint32_x00163AB8 ret;
    if (device == 0) {
        return 0;
    }
    if (device->OptFn1 != 0) {
        ret = device->OptFn1(0, 0x64, 0, 0);
    } else {
        return 0;
    }
    return ret;
}
void func_00163B08(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 == 0) {
        var_s0 = func_00162398();
    }
    if (func_00163AB8(var_s0) == 1) {
        func_00127A88(&D_0047ECE0, arg1);
        sprintf(arg1, &D_00462DF8, var_s0, &D_0047ECE0);
    }
}
s32 func_00163BA0(void) {
    return func_00162080() != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163BC0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163C58);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163D10);
s32 func_00163DD0(u8 *arg0) {
    s32 (*temp_v0)(s32, s32, s32, s32);
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        func_00161D20(&D_00462E20);
        return 0;
    }
    temp_v0 = *(s32 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60);
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(*(s32 *)((u8 *)arg0 + 4), 0x12B, 0, 0);
    }
    return var_v1;
}
typedef unsigned char u_char_x00163E30;
typedef unsigned int size_t_x00163E30;
typedef char Sint8_x00163E30;
typedef signed int Sint32_x00163E30;
typedef signed long Sint64_x00163E30;
typedef char Char8_x00163E30;
extern Sint32_x00163E30 SVM_SetCbSvr_x00163E30(Sint32_x00163E30, Sint32_x00163E30 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00163E30(Sint32_x00163E30, Sint32_x00163E30, Sint32_x00163E30 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00163E30(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00163E30(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct {
    u_char_x00163E30 trycount;
    u_char_x00163E30 spindlctrl;
    u_char_x00163E30 datapattern;
    u_char_x00163E30 pad;
} sceCdRMode_x00163E30;
extern int* sceCdCallback_x00163E30(void (*func)(int)) __asm__("sceCdCallback");
void* memset_x00163E30(void* s, int c, size_t_x00163E30 n) __asm__("memset");
typedef struct {
               Sint8_x00163E30 unk0;
               Sint8_x00163E30 unk1;
               Sint8_x00163E30 stat;
               Sint8_x00163E30 unk3;
               Sint32_x00163E30 unk4;
               Sint32_x00163E30 unk8;
               Sint32_x00163E30 unkC;
               void* unk10;
               sceCdRMode_x00163E30 unk14;
               void* unk18;
               Sint32_x00163E30 unk1C;
               Sint32_x00163E30 unk20;
               Sint32_x00163E30 unk24;
               Sint64_x00163E30 unk28;
               Sint32_x00163E30 fd;
               Sint32_x00163E30 unk34;
} SRD_OBJ_x00163E30;
extern SRD_OBJ_x00163E30 srd_obj_x00163E30 __asm__("D_00411598");
extern Char8_x00163E30* volatile srd_build_x00163E30 __asm__("D_004115D0");
void func_00163E30_x00163E30() __asm__("func_00163E30");
/* srd_reset_obj: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00163E30_x00163E30() {
    srd_build_x00163E30;
    memset_x00163E30(&srd_obj_x00163E30, 0, sizeof(srd_obj_x00163E30));
}
typedef unsigned char u_char_x00163E60;
typedef char Sint8_x00163E60;
typedef signed int Sint32_x00163E60;
typedef signed long Sint64_x00163E60;
void SVM_LockVar_x00163E60() __asm__("func_0016FF70");
void SVM_UnlockVar_x00163E60() __asm__("func_0016FFE8");
extern Sint32_x00163E60 SVM_SetCbSvr_x00163E60(Sint32_x00163E60, Sint32_x00163E60 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00163E60(Sint32_x00163E60, Sint32_x00163E60, Sint32_x00163E60 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00163E60(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00163E60(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct {
    u_char_x00163E60 trycount;
    u_char_x00163E60 spindlctrl;
    u_char_x00163E60 datapattern;
    u_char_x00163E60 pad;
} sceCdRMode_x00163E60;
extern int* sceCdCallback_x00163E60(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint8_x00163E60 unk0;
               Sint8_x00163E60 unk1;
               Sint8_x00163E60 stat;
               Sint8_x00163E60 unk3;
               Sint32_x00163E60 unk4;
               Sint32_x00163E60 unk8;
               Sint32_x00163E60 unkC;
               void* unk10;
               sceCdRMode_x00163E60 unk14;
               void* unk18;
               Sint32_x00163E60 unk1C;
               Sint32_x00163E60 unk20;
               Sint32_x00163E60 unk24;
               Sint64_x00163E60 unk28;
               Sint32_x00163E60 fd;
               Sint32_x00163E60 unk34;
} SRD_OBJ_x00163E60;
typedef SRD_OBJ_x00163E60* SRD_x00163E60;
extern SRD_OBJ_x00163E60 srd_obj_x00163E60 __asm__("D_00411598");
extern Sint32_x00163E60 volatile srd_create_cnt_x00163E60 __asm__("D_004115F8");
void srd_reset_obj_x00163E60() __asm__("func_00163E30");
SRD_x00163E60 func_00163E60_x00163E60() __asm__("func_00163E60");
/* SRD_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
SRD_x00163E60 func_00163E60_x00163E60() {
    SRD_x00163E60 srd = 0;
    SVM_LockVar_x00163E60();
    if (srd_obj_x00163E60.unk0 == 0) {
        srd_reset_obj_x00163E60();
        srd_obj_x00163E60.unk0 = 1;
        srd_obj_x00163E60.stat = 0;
        srd_obj_x00163E60.unk3 = -1;
        srd_obj_x00163E60.unk4 = 0;
        srd_create_cnt_x00163E60 += 1;
        srd = &srd_obj_x00163E60;
    }
    SVM_UnlockVar_x00163E60();
    return srd;
}
