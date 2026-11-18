#include "common.h"

s32 func_00159C80(s32, s32);                    /* extern */
s32 func_00159D58(s32, s32 *, void *);      /* extern */
s32 func_00159D68(s32, s32);                    /* extern */
s32 func_00159D78(s32, s32);                /* extern */
s32 func_00159D88(s32, s32);                    /* extern */
s32 func_00159E88(s32);                             /* extern */
s32 func_00159EA0(s32);                             /* extern */
s32 func_00159ED0(s32);                             /* extern */
s32 func_0015A058(s32);                         /* extern */
extern s32 adxt_trap_entry;

s32 func_00159CD0(s32);                         /* extern */

s32 func_00159CB8();                            /* extern */

s32 func_00159CA0(s32);                         /* extern */
extern s32 D_00461F68;

s32 func_00153028();                            /* extern */

s32 func_00159C78(s32);                             /* extern */
extern s32 D_00461F38;

s32 func_00159D48(s32);                         /* extern */

s32 func_00159C90(s32);                         /* extern */

s32 func_00159CE8(s32);                         /* extern */

s32 func_001540F8();                            /* extern */

s32 func_00158E30(s32);                         /* extern */

s32 func_00158AA8();                            /* extern */

s32 func_00158A90();                            /* extern */

extern s32 D_00461F08;

extern s32 D_00461EA8;

extern s32 D_00461E40;

extern s32 D_00461DE0;

extern s32 D_00461D80;

s32 func_0015F5F0();                            /* extern */

extern s32 D_00461D50;

extern s32 D_00461CB8;

extern s32 D_00461BC8;

extern s32 D_00411164;
extern s32 D_00411168;

s32 func_00159FD8(s32);                         /* extern */

extern s32 D_00461B98;

extern s32 D_00461B38;

s32 func_001589C0(s32);                         /* extern */
s16 func_00158A38(s32);                             /* extern */
extern s32 D_00461B08;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461AD8;

s16 ADXT_GetOutPan(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        ADXERR_CallErrFunc1(&D_00461AD8);
        return 0;
    }
    return *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x42);
}
void ADXT_SetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B08);
        return;
    }
    func_001589C0(*(s32 *)((u8 *)arg0 + 0xC));
    *(s16 *)((u8 *)arg0 + 0x46) = func_00158A38(*(s32 *)((u8 *)arg0 + 0xC));
}
s16 ADXT_GetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B38);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x46);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetOutVol);
s16 ADXT_GetOutVol(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B98);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x40);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F110);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F130);
void func_0015F150(u8 *arg0) {
    func_00159FD8(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F168);
void func_0015F1B0(s32 arg0) {
    D_00411164 = arg0;
    D_00411168 = arg0;
}
void ADXT_SetSvrFreq(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461BC8);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    D_00411168 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetReloadTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_ResetReloadTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetReloadSct);
s16 func_0015F388(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x3E);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_GetNumSctIbuf);
s32 ADXT_GetNumSmplObuf(s32 arg0, s32 arg1) {
    u32 temp_v0;
    u8 **temp_v0_2;

    if ((arg0 == 0) || (arg1 < 0)) {
        ADXERR_CallErrFunc1(&D_00461CB8);
        return -1;
    }
    temp_v0_2 = *(u8 ***)((u8 *)((arg1 * 4) + arg0) + 0x18);
    if (temp_v0_2 != NULL) {
        temp_v0 = (*(u32 (**)(u8 **, s32))((u8 *)(*temp_v0_2) + 0x24))(temp_v0_2, 1);
        return (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_GetIbufRemainTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_IsIbufSafety);
void func_0015F5B0(u8 *arg0, s8 arg1) {
    *(s8 *)((u8 *)arg0 + 0x6D) = arg1;
}
s32 ADXT_IsCompleted(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D50);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1) == 5;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F5F0);
void func_0015F6E0(void) {
    func_0015F5F0();
}
s16 ADXT_GetErrCode(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D80);
        return -1;
    }
    return *(s16 *)((u8 *)arg0 + 0x60);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_ClearErrCode);
s32 ADXT_GetLpCnt(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461DE0);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x4C);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetLpFlg);
s32 ADXT_GetInputSj(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461E40);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetWaitPlayStart);
s8 ADXT_IsReadyPlayStart(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461EA8);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 0x71);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_Pause);
s8 ADXT_GetStatPause(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F08);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 0x72);
}
void func_0015F9B8(void) {
    func_00158A90();
}
void func_0015F9D0(void) {
    func_00158AA8();
}
void func_0015F9E8(void) {

}
void func_0015F9F0(void) {

}
s32 func_0015F9F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0015FA00(u8 *arg0) {
    func_00158E30(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FA18(void) {

}
s32 func_0015FA20(void) {
    return 0;
}
void func_0015FA28(void) {

}
void func_0015FA30(void) {

}
void func_0015FA38(void) {

}
void func_0015FA40(void) {

}
void func_0015FA48(void) {
    func_001540F8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FA60);
s32 func_0015FB48(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x88);
}
void func_0015FB50(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x88) = arg1;
}
void func_0015FB58(u8 *arg0) {
    func_00159CE8(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FB70(u8 *arg0, s8 arg1) {
    s32 temp_v0;

    *(s8 *)((u8 *)arg0 + 0x98) = arg1;
    temp_v0 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v0 != 0) {
        func_00159C90(temp_v0);
    }
}
s8 func_0015FBA8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x98);
}
void func_0015FBB0(u8 *arg0) {
    func_00159D48(*(s32 *)((u8 *)arg0 + 4));
}
s32 ADXT_GetDecNumSmpl(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F38);
        return -1;
    }
    return func_00159C78(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FC00);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FC98);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FCD8);
void func_0015FE80(void) {
    func_00153028();
}
void ADXT_SetKeyString(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F68);
        return;
    }
    func_00159CA0(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FEC8(void) {
    func_00159CB8();
}
s32 func_0015FEE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xC);
}
void func_0015FEE8(u8 *arg0) {
    func_00159CD0(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_StartAfs);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_StartFname);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_00160098);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_001600B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_StartMemIdx);
void func_00160300(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s3 = func_00159E88(temp_s1);
    temp_s4 = func_00159EA0(temp_s1);
    temp_s0 = func_00159ED0(temp_s1);
    func_0015A058(temp_s1);
    temp_s0_2 = temp_s0 - temp_s3;
    func_00159D78(temp_s1, 0);
    *(s32 *)((u8 *)arg0 + 0x90) = temp_s0_2;
    func_00159D68(temp_s1, temp_s0_2);
    func_00159D88(temp_s1, temp_s4);
    func_00159C80(temp_s1, temp_s3);
    func_00159D58(temp_s1, &adxt_trap_entry, arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", adxt_trap_entry);
