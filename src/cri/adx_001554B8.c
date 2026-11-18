#include "common.h"

s32 func_00169D08();                            /* extern */

s32 func_0015F5F0();                            /* extern */
extern s32 D_00404C14;

extern s32 D_00404C0C;

s32 func_00156048();                            /* extern */

s32 func_00162AD8();                            /* extern */

extern s32 D_00460BB0;

extern s32 D_00402950;

extern s32 D_00460B38;

extern s32 D_00460B08;

extern s32 D_00460AD8;

s32 ADXF_GetFsizeSct();                             /* extern */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00460A80;

s32 ADXF_ReadSj32();                            /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_001554B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_ReadSj32);
void func_00155648(void) {
    ADXF_ReadSj32();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_ReadNw32);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_ReadNw);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_Stop);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_StopNw);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_001559E8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155AB0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_Seek);
s32 ADXF_Tell(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460A80);
        return -3;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_GetFsizeSct);
s32 func_00155CD0(void) {
    return ADXF_GetFsizeSct() << 0xB;
}
s32 ADXF_GetNumReqSct(u8 *arg0, s32 *arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460AD8);
        *arg1 = 0;
        return -3;
    }
    *arg1 = *(s32 *)((u8 *)arg0 + 0x18);
    return *(s32 *)((u8 *)arg0 + 0x1C);
}
s32 ADXF_GetNumReadSct(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460B08);
        return -3;
    }
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s8 ADXF_GetStat(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460B38);
        return -3;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155DA0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155E18);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155E40);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155F98);
void func_00155FB0(s32 arg0) {
    D_00402950 = arg0;
}
void ADXF_SetReqRdSct(u8 *arg0, s32 arg1) {
    if (*(s8 *)((u8 *)arg0 + 1) == 2) {
        ADXERR_CallErrFunc1(&D_00460BB0);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155FF8);
void func_00156030(void) {
    func_00162AD8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156048);
void func_001560E8(void) {
    func_00156048();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156100);
void func_00156118(s32 arg0) {
    D_00404C0C = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156128);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156140);
void func_00156158(void) {
    D_00404C14 += 1;
    func_0015F5F0();
}
s32 func_00156180(void) {
    func_00169D08();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_001561A0);
s32 func_001561D0(void) {
    func_0015F5F0();
    return 0;
}
s32 func_001561F0(void) {
    func_00156048();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", fn_80008FB0);
