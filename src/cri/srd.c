#include "common.h"

s32 func_00119820(s32);                             /* extern */
s32 func_001198F0();                                /* extern */
s32 func_00170A00(s32 *);                           /* extern */

s32 func_00170018(s32);                     /* extern */

s32 func_0016FFA0(s32);                     /* extern */

extern s32 D_0041160C;

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00411608;
extern s32 D_004630E8;

extern s8 D_0041159A;

extern s32 D_004115CC;

extern s8 D_00411599;

extern s32 D_004115D4;

s32 func_00164258(s32 *);                   /* extern */
extern s32 D_00411598;

s32 func_00118C08(s32);                     /* extern */
s32 func_00164D38(s32);                     /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00163EE8);
typedef unsigned char u_char_x00163F88;
typedef int s32_x00163F88;
typedef char Sint8_x00163F88;
typedef signed int Sint32_x00163F88;
typedef signed long Sint64_x00163F88;
void SVM_LockVar_x00163F88() __asm__("func_0016FF70");
void SVM_UnlockVar_x00163F88() __asm__("func_0016FFE8");
extern void SVM_SetCbBdr_x00163F88(Sint32_x00163F88 arg0, void (*arg1)(), Sint32_x00163F88 arg2) __asm__("SVM_SetCbBdr");
extern Sint32_x00163F88 SVM_SetCbSvr_x00163F88(Sint32_x00163F88, Sint32_x00163F88 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00163F88(Sint32_x00163F88, Sint32_x00163F88, Sint32_x00163F88 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00163F88(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00163F88(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct {
    u_char_x00163F88 trycount;
    u_char_x00163F88 spindlctrl;
    u_char_x00163F88 datapattern;
    u_char_x00163F88 pad;
} sceCdRMode_x00163F88;
extern int* sceCdCallback_x00163F88(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x00163F88(int mode) __asm__("func_00118C08");
typedef struct {
               Sint8_x00163F88 unk0;
               Sint8_x00163F88 unk1;
               Sint8_x00163F88 stat;
               Sint8_x00163F88 unk3;
               Sint32_x00163F88 unk4;
               Sint32_x00163F88 unk8;
               Sint32_x00163F88 unkC;
               void* unk10;
               sceCdRMode_x00163F88 unk14;
               void* unk18;
               Sint32_x00163F88 unk1C;
               Sint32_x00163F88 unk20;
               Sint32_x00163F88 unk24;
               Sint64_x00163F88 unk28;
               Sint32_x00163F88 fd;
               Sint32_x00163F88 unk34;
} SRD_OBJ_x00163F88;
typedef SRD_OBJ_x00163F88* SRD_x00163F88;
void SRD_SetHistory_x00163F88(Sint32_x00163F88 arg0) __asm__("func_00164D38");
void SRD_SetHistory_x00163F88(Sint32_x00163F88 arg0) __asm__("func_00164D38");
s32_x00163F88 func_00163F88_x00163F88(SRD_x00163F88 srd, s32_x00163F88 arg1, s32_x00163F88 arg2, void* arg3, sceCdRMode_x00163F88* arg4) __asm__("func_00163F88");
/* SRD_ReqRdDvd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
s32_x00163F88 func_00163F88_x00163F88(SRD_x00163F88 srd, s32_x00163F88 arg1, s32_x00163F88 arg2, void* arg3, sceCdRMode_x00163F88* arg4) {
    s32_x00163F88 err;
    s32_x00163F88 var_s4 = 0;
    SRD_SetHistory_x00163F88(0x1200);
    err = sceCdSync_x00163F88(1);
    SRD_SetHistory_x00163F88(0x1201);
    if (err == 1) {
        return 0;
    }
    SVM_LockVar_x00163F88();
    if ((srd->stat == 0) || (srd->stat == 3) || (srd->stat == 9)) {
        srd->unk1 = 1;
        srd->stat = 1;
        srd->unk8 = arg1;
        srd->unkC = arg2;
        srd->unk10 = arg3;
        srd->unk14 = *arg4;
        srd->unk4 = 0;
        var_s4 = 1;
    }
    SVM_UnlockVar_x00163F88();
    return var_s4;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164078);
s8 func_00164128(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 2);
}
typedef signed int Sint32_x00164130;
extern Sint32_x00164130 SVM_SetCbSvr_x00164130(Sint32_x00164130, Sint32_x00164130 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00164130(Sint32_x00164130, Sint32_x00164130, Sint32_x00164130 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00164130(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00164130(int, int (*)(int), int) __asm__("AddDmacHandler");
extern int* sceCdCallback_x00164130(void (*func)(int)) __asm__("sceCdCallback");
void func_00164130_x00164130() __asm__("func_00164130");
/* srd_wait: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00164130_x00164130() {
    Sint32_x00164130 i;
    for (i = 0; i < 0x4000; i++) {
    }
}
void func_00164160(void) {
    func_00164D38(0x1300);
    func_00118C08(0);
    func_00164D38(0x1301);
}
typedef unsigned char u_char_x00164188;
typedef char Sint8_x00164188;
typedef signed int Sint32_x00164188;
typedef signed long Sint64_x00164188;
extern void SVM_SetCbBdr_x00164188(Sint32_x00164188 arg0, void (*arg1)(), Sint32_x00164188 arg2) __asm__("SVM_SetCbBdr");
extern Sint32_x00164188 SVM_SetCbSvr_x00164188(Sint32_x00164188, Sint32_x00164188 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00164188(Sint32_x00164188, Sint32_x00164188, Sint32_x00164188 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00164188(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00164188(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00164188(const char* fmt, ...) __asm__("scePrintf");
typedef struct {
    u_char_x00164188 trycount;
    u_char_x00164188 spindlctrl;
    u_char_x00164188 datapattern;
    u_char_x00164188 pad;
} sceCdRMode_x00164188;
extern int* sceCdCallback_x00164188(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint8_x00164188 unk0;
               Sint8_x00164188 unk1;
               Sint8_x00164188 stat;
               Sint8_x00164188 unk3;
               Sint32_x00164188 unk4;
               Sint32_x00164188 unk8;
               Sint32_x00164188 unkC;
               void* unk10;
               sceCdRMode_x00164188 unk14;
               void* unk18;
               Sint32_x00164188 unk1C;
               Sint32_x00164188 unk20;
               Sint32_x00164188 unk24;
               Sint64_x00164188 unk28;
               Sint32_x00164188 fd;
               Sint32_x00164188 unk34;
} SRD_OBJ_x00164188;
typedef SRD_OBJ_x00164188* SRD_x00164188;
void SRD_SetHistory_x00164188(Sint32_x00164188 arg0) __asm__("func_00164D38");
Sint32_x00164188 SRD_SceIoctl_x00164188(Sint32_x00164188 fd, Sint32_x00164188 req, void* arg2) __asm__("func_00164FD0");
void srd_wait_x00164188() __asm__("func_00164130");
void SRD_SetHistory_x00164188(Sint32_x00164188 arg0) __asm__("func_00164D38");
Sint32_x00164188 SRD_SceIoctl_x00164188(Sint32_x00164188 fd, Sint32_x00164188 req, void* arg2) __asm__("func_00164FD0");
extern char ext_str0_x00164188[] __asm__("D_00462EE0");
void func_00164188_x00164188(SRD_x00164188 srd) __asm__("func_00164188");
/* srd_wait_hst: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00164188_x00164188(SRD_x00164188 srd) {
    Sint32_x00164188 sp = 1;
    Sint32_x00164188 stat;
    Sint32_x00164188 i;
    i = 0;
    while (1) {
        if (sp != 1) {
            break;
        }
        SRD_SetHistory_x00164188(0x1100);
        stat = SRD_SceIoctl_x00164188(srd->fd, 1, &sp);
        SRD_SetHistory_x00164188(0x1101);
        if (stat < 0) {
            srd->stat = 9;
            srd->unk34 = stat;
            return;
        }
        srd_wait_x00164188();
        i++;
        if (i > 0x9000) {
            scePrintf_x00164188(ext_str0_x00164188);
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164258);
void func_00164368(void) {
    func_00164258(&D_00411598);
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164388);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001643F0);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164500);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001646D0);
s32 func_001648A0(void) {
    return D_004115D4;
}
typedef unsigned char u_char_x001648B0;
typedef char Sint8_x001648B0;
typedef signed int Sint32_x001648B0;
typedef signed long Sint64_x001648B0;
void SVM_LockRsc_x001648B0() __asm__("func_0016FFA0");
void SVM_UnlockRsc_x001648B0() __asm__("func_00170018");
extern Sint32_x001648B0 SVM_SetCbSvr_x001648B0(Sint32_x001648B0, Sint32_x001648B0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001648B0(Sint32_x001648B0, Sint32_x001648B0, Sint32_x001648B0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x001648B0 SVM_TestAndSet_x001648B0(Sint32_x001648B0* mem) __asm__("func_00170A00");
extern int AddIntcHandler_x001648B0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001648B0(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct {
    u_char_x001648B0 trycount;
    u_char_x001648B0 spindlctrl;
    u_char_x001648B0 datapattern;
    u_char_x001648B0 pad;
} sceCdRMode_x001648B0;
extern int* sceCdCallback_x001648B0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint8_x001648B0 unk0;
               Sint8_x001648B0 unk1;
               Sint8_x001648B0 stat;
               Sint8_x001648B0 unk3;
               Sint32_x001648B0 unk4;
               Sint32_x001648B0 unk8;
               Sint32_x001648B0 unkC;
               void* unk10;
               sceCdRMode_x001648B0 unk14;
               void* unk18;
               Sint32_x001648B0 unk1C;
               Sint32_x001648B0 unk20;
               Sint32_x001648B0 unk24;
               Sint64_x001648B0 unk28;
               Sint32_x001648B0 fd;
               Sint32_x001648B0 unk34;
} SRD_OBJ_x001648B0;
typedef SRD_OBJ_x001648B0* SRD_x001648B0;
extern SRD_OBJ_x001648B0 srd_obj_x001648B0 __asm__("D_00411598");
extern Sint32_x001648B0 srd_enter_fg_x001648B0 __asm__("D_004115D4");
extern Sint32_x001648B0 srd_dvd_exec_locked_x001648B0 __asm__("D_004115D8");
extern Sint32_x001648B0 srd_hst_exec_locked_x001648B0 __asm__("D_004115DC");
void srd_exec_dvd_x001648B0(SRD_x001648B0 srd) __asm__("func_00164500");
void srd_exec_hst_x001648B0(SRD_x001648B0 srd) __asm__("func_001646D0");
void func_001648B0_x001648B0() __asm__("func_001648B0");
/* SRD_ExecServer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001648B0_x001648B0() {
    SRD_x001648B0 srd = &srd_obj_x001648B0;
    if (SVM_TestAndSet_x001648B0(&srd_enter_fg_x001648B0) == 0) {
        return;
    }
    switch (srd->unk1) {
    case 1:
        if (srd_dvd_exec_locked_x001648B0 == 1) {
            SVM_LockRsc_x001648B0();
        }
        srd_exec_dvd_x001648B0(srd);
        if (srd_dvd_exec_locked_x001648B0 == 1) {
            SVM_UnlockRsc_x001648B0();
        }
        break;
    }
    switch (srd->unk1) {
    case 2:
        if (srd_hst_exec_locked_x001648B0 == 1) {
            SVM_LockRsc_x001648B0();
        }
        srd_exec_hst_x001648B0(srd);
        if (srd_hst_exec_locked_x001648B0 == 1) {
            SVM_UnlockRsc_x001648B0();
        }
        break;
    }
    srd_enter_fg_x001648B0 = 0;
}
s8 func_001649A0(void) {
    return D_00411599;
}
s32 func_001649B0(void) {
    return D_004115CC;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001649C0);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A28);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A60);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A98);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164AD0);
void func_00164B08(void) {
    D_0041159A = 9;
}
s32 func_00164B18(void) {
    s32 temp_s0;

    func_00164D38(0x2300);
    temp_s0 = func_00118C08(1);
    func_00164D38(0x2301);
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164B58);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164BF8);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164C48);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D18);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D28);
typedef signed int Sint32_x00164D38;
extern Sint32_x00164D38 SVM_SetCbSvr_x00164D38(Sint32_x00164D38, Sint32_x00164D38 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00164D38(Sint32_x00164D38, Sint32_x00164D38, Sint32_x00164D38 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00164D38(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00164D38(int, int (*)(int), int) __asm__("AddDmacHandler");
extern int* sceCdCallback_x00164D38(void (*func)(int)) __asm__("sceCdCallback");
extern Sint32_x00164D38 volatile srd_history_pre_x00164D38 __asm__("D_00411600");
extern Sint32_x00164D38 volatile srd_history_x00164D38 __asm__("D_00411604");
void func_00164D38_x00164D38(Sint32_x00164D38 arg0) __asm__("func_00164D38");
/* SRD_SetHistory: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00164D38_x00164D38(Sint32_x00164D38 arg0) {
    srd_history_pre_x00164D38 = srd_history_x00164D38;
    srd_history_x00164D38 = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D58);
void func_00164D68(s32 arg0) {
    D_00411608 = arg0;
    if (arg0 == 1) {
        scePrintf(&D_004630E8);
    }
}
s32 func_00164DA8(void) {
    return D_00411608;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164DB8);
s32 func_00164E10(void) {
    return D_0041160C;
}
void func_00164E20(void) {
    if (D_0041160C == 1) {
        func_0016FFA0(1);
    }
}
void func_00164E58(void) {
    if (D_0041160C == 1) {
        func_00170018(1);
    }
}
s32 func_00164E90(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = func_00170A00(&D_004115D4);
    var_s1 = 0;
    if (var_v0 != 0) {
        func_00164D38(0x9600);
        temp_s0 = func_00119820(arg0);
        func_00164D38(0x9601);
        if (temp_s0 == 0) {
            var_s1 = func_001198F0();
        }
        D_004115D4 = 0;
        var_v0 = var_s1;
    }
    return var_v0;
}
typedef signed int Sint32_x00164F18;
typedef signed long Sint64_x00164F18;
extern Sint32_x00164F18 SVM_SetCbSvr_x00164F18(Sint32_x00164F18, Sint32_x00164F18 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00164F18(Sint32_x00164F18, Sint32_x00164F18, Sint32_x00164F18 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00164F18(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00164F18(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00164F18(const char* fmt, ...) __asm__("scePrintf");
extern int* sceCdCallback_x00164F18(void (*func)(int)) __asm__("sceCdCallback");
extern int sceLseek_x00164F18(int fd, int offset, int where) __asm__("func_0010F9F0");
extern long sceLseek64_x00164F18(int fd, long offset, int whence) __asm__("func_00111C50");
extern Sint32_x00164F18 srd_filesystem64_x00164F18 __asm__("D_00411608");
void srd_sw_lock_x00164F18() __asm__("func_00164E20");
void srd_sw_unlock_x00164F18() __asm__("func_00164E58");
extern char ext_str0_x00164F18[] __asm__("D_00463140");
extern char ext_str1_x00164F18[] __asm__("D_00463120");
Sint64_x00164F18 func_00164F18_x00164F18(Sint32_x00164F18 fd, Sint64_x00164F18 offset, Sint32_x00164F18 whence) __asm__("func_00164F18");
/* SRD_SceLseek: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_srd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint64_x00164F18 func_00164F18_x00164F18(Sint32_x00164F18 fd, Sint64_x00164F18 offset, Sint32_x00164F18 whence) {
    Sint64_x00164F18 ofst;
    srd_sw_lock_x00164F18();
    if (srd_filesystem64_x00164F18 == 1) {
        ofst = sceLseek64_x00164F18(fd, offset, whence);
        if (ofst < 0) {
            scePrintf_x00164F18(ext_str1_x00164F18, ofst);
        }
    } else {
        ofst = sceLseek_x00164F18(fd, (Sint32_x00164F18)offset, whence);
        if (ofst < 0) {
            scePrintf_x00164F18(ext_str0_x00164F18, ofst);
        }
    }
    srd_sw_unlock_x00164F18();
    return ofst;
}
s32 func_00110160_x00164FD0(s32, s32, s32) __asm__("func_00110160");
s32 func_00164E20_x00164FD0() __asm__("func_00164E20");
s32 func_00164E58_x00164FD0() __asm__("func_00164E58");
s32 scePrintf_x00164FD0(s32 *, s32) __asm__("scePrintf");
extern s32 D_00463160_x00164FD0 __asm__("D_00463160");
s32 func_00164FD0_x00164FD0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00164FD0");
s32 func_00164FD0_x00164FD0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    func_00164E20_x00164FD0();
    temp_v0 = func_00110160_x00164FD0(arg0, arg1, arg2);
    if (temp_v0 < 0) {
        scePrintf_x00164FD0(&D_00463160_x00164FD0, temp_v0);
    }
    func_00164E58_x00164FD0();
    return temp_v0;
}
s32 func_0010F5E8_x00165048(s32, s32) __asm__("func_0010F5E8");
s32 func_00164E20_x00165048() __asm__("func_00164E20");
s32 func_00164E58_x00165048() __asm__("func_00164E58");
s32 scePrintf_x00165048(s32 *, s32) __asm__("scePrintf");
extern s32 D_00463180_x00165048 __asm__("D_00463180");
s32 func_00165048_x00165048(s32 arg0, s32 arg1) __asm__("func_00165048");
s32 func_00165048_x00165048(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_00164E20_x00165048();
    temp_v0 = func_0010F5E8_x00165048(arg0, arg1);
    if (temp_v0 < 0) {
        scePrintf_x00165048(&D_00463180_x00165048, temp_v0);
    }
    func_00164E58_x00165048();
    return temp_v0;
}
s32 func_0010F878_x001650B0(s32) __asm__("func_0010F878");
s32 func_00164E20_x001650B0() __asm__("func_00164E20");
s32 func_00164E58_x001650B0() __asm__("func_00164E58");
s32 scePrintf_x001650B0(s32 *, s32) __asm__("scePrintf");
extern s32 D_004631A0_x001650B0 __asm__("D_004631A0");
s32 func_001650B0_x001650B0(s32 arg0) __asm__("func_001650B0");
s32 func_001650B0_x001650B0(s32 arg0) {
    s32 temp_v0;

    func_00164E20_x001650B0();
    temp_v0 = func_0010F878_x001650B0(arg0);
    if (temp_v0 < 0) {
        scePrintf_x001650B0(&D_004631A0_x001650B0, temp_v0);
    }
    func_00164E58_x001650B0();
    return temp_v0;
}
s32 func_0010FC30_x00165108(s32, s32, s32) __asm__("func_0010FC30");
s32 func_00164E20_x00165108() __asm__("func_00164E20");
s32 func_00164E58_x00165108() __asm__("func_00164E58");
s32 scePrintf_x00165108(s32 *, s32) __asm__("scePrintf");
extern s32 D_004631C0_x00165108 __asm__("D_004631C0");
s32 func_00165108_x00165108(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00165108");
s32 func_00165108_x00165108(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    func_00164E20_x00165108();
    temp_v0 = func_0010FC30_x00165108(arg0, arg1, arg2);
    if (temp_v0 < 0) {
        scePrintf_x00165108(&D_004631C0_x00165108, temp_v0);
    }
    func_00164E58_x00165108();
    return temp_v0;
}
