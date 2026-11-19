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
typedef signed char Sint8_x00164078;
typedef char Char8_x00164078;
typedef int Sint32_x00164078;
typedef unsigned int Uint32_x00164078;
typedef unsigned long long Uint64_x00164078;
typedef Sint32_x00164078 Bool_x00164078;
typedef unsigned char u_char_x00164078;
typedef struct {
    u_char_x00164078 trycount;
    u_char_x00164078 spindlctrl;
    u_char_x00164078 datapattern;
    u_char_x00164078 pad;
} sceCdRMode_x00164078;
typedef struct srd_obj_x00164078 {
    Sint8_x00164078 used;
    Sint8_x00164078 devtype;
    Sint8_x00164078 stat;
    Char8_x00164078 rsv;
    Sint32_x00164078 break_flg;
    Uint32_x00164078 d_lsn;
    Uint32_x00164078 d_sct;
    void *d_buf;
    sceCdRMode_x00164078 d_mode;
    void *h_buf;
    Uint64_x00164078 h_byte;
    Uint64_x00164078 h_skpos;
    int h_fd;
    int err_code;
} SRD_OBJ_x00164078, *SRD_x00164078;
extern int Forward33B568_33B688_x00164078(void) __asm__("func_0016FF70");
extern int Forward33B5C8_33B6B8_x00164078(void) __asm__("func_0016FFE8");
Bool_x00164078 func_00164078_x00164078(SRD_x00164078 srd, int h_fd, Sint32_x00164078 h_skpos, Uint64_x00164078 h_byte, void *h_buf) __asm__("func_00164078");
/* SRD_ReqRdHst: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331200.c, MIT); ee-gcc 2.96 -O2 -G0 */
Bool_x00164078 func_00164078_x00164078(SRD_x00164078 srd, int h_fd, Sint32_x00164078 h_skpos, Uint64_x00164078 h_byte, void *h_buf)
{
    Bool_x00164078 ret;
    ret = 0;
    Forward33B568_33B688_x00164078();
    if (srd->stat == 0 || srd->stat == 3 || srd->stat == 9) {
        srd->devtype = 2;
        srd->stat = 1;
        srd->h_fd = h_fd;
        srd->h_buf = h_buf;
        srd->h_byte = h_byte;
        srd->h_skpos = h_skpos;
        srd->break_flg = 0;
        ret = 1;
    }
    Forward33B5C8_33B6B8_x00164078();
    return ret;
}
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
struct stat_x00164258;
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode_x00164258;
void SVM_Lock_x00164258(void) __asm__("func_0016FF40");
void SVM_Unlock_x00164258(void) __asm__("func_0016FF58");
typedef struct SrdObj_x00164258 SrdObj_x00164258;
struct SrdObj_x00164258 {
    signed char used;
    signed char devtype;
    signed char stat_x00164258;
    signed char mode;
    int abort_request;
    int lsn;
    int sectors;
    void *buf;
    sceCdRMode_x00164258 rmode;
    void *host_buf;
    int pad1c;
    long long host_size;
    long long host_sector;
    int fd;
    int error;
};
extern SrdObj_x00164258 srd_obj_x00164258 __asm__("D_00411598");
extern int srd_enter_fg_x00164258 __asm__("D_004115D4");
extern volatile int srd_debug_rded_cnt_x00164258 __asm__("D_004115F4");
void srd_wait_x00164258(void) __asm__("func_00164130");
void srd_wait_dvd_x00164258(SrdObj_x00164258 *srd) __asm__("func_00164160");
void srd_wait_hst_x00164258(SrdObj_x00164258 *f) __asm__("func_00164188");
void func_00164258_x00164258(SrdObj_x00164258 *h) __asm__("func_00164258");
/* SRD_WaitComplete: from https://github.com/crashbashash/DW4_Decomp (src/cri/srd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00164258_x00164258(SrdObj_x00164258 *h)
{
    short i;
    int stat_x00164258;
    SrdObj_x00164258 *srd;
    for (i = 0; i < 1000; i++) {
        SVM_Lock_x00164258();
        if (srd_enter_fg_x00164258 == 1) {
            SVM_Unlock_x00164258();
            srd_wait_x00164258();
            continue;
        }
        srd_enter_fg_x00164258 = 1;
        SVM_Unlock_x00164258();
        break;
    }
    stat_x00164258 = h->stat_x00164258;
    if (stat_x00164258 == 2) {
        srd = &srd_obj_x00164258;
        if (srd->devtype == 1) {
            srd_wait_dvd_x00164258(h);
        }
        if (srd->devtype == stat_x00164258) {
            srd_wait_hst_x00164258(h);
        }
        if (h->stat_x00164258 != 9) {
            h->stat_x00164258 = 3;
            srd_debug_rded_cnt_x00164258++;
        }
    }
    srd_enter_fg_x00164258 = 0;
}
void func_00164368(void) {
    func_00164258(&D_00411598);
}
s32 func_0016FF70_x00164388() __asm__("func_0016FF70");
s32 func_0016FFE8_x00164388() __asm__("func_0016FFE8");
s32 scePrintf_x00164388(s32 *) __asm__("scePrintf");
extern s32 D_00462F00_x00164388 __asm__("D_00462F00");
extern s32 D_00462F20_x00164388 __asm__("D_00462F20");
void func_00164388_x00164388(u8 *arg0) __asm__("func_00164388");
void func_00164388_x00164388(u8 *arg0)
{
  func_0016FF70_x00164388();
  if (arg0 == ((void *) 0))
  {
    scePrintf_x00164388(&D_00462F00_x00164388);
  }
  else
    if (!((*((s32 *) (((u8 *) arg0) + 4))) != 1))
  {
    scePrintf_x00164388(&D_00462F20_x00164388);
  }
  else
  {
    *((s32 *) (((u8 *) arg0) + 4)) = 1;
  }
  func_0016FFE8_x00164388();
}
void scePrintf_x001643F0(const char *format, ...) __asm__("scePrintf");
struct stat_x001643F0;
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode_x001643F0;
int sceCdGetError_x001643F0(void) __asm__("func_001198F0");
void SVM_LockDev_x001643F0(void) __asm__("func_0016FFA0");
void SVM_UnlockDev_x001643F0(void) __asm__("func_00170018");
typedef struct SrdObj_x001643F0 SrdObj_x001643F0;
void SRD_SetHistory_x001643F0(int value) __asm__("func_00164D38");
struct SrdObj_x001643F0 {
    signed char used;
    signed char devtype;
    signed char stat_x001643F0;
    signed char mode;
    int abort_request;
    int lsn;
    int sectors;
    void *buf;
    sceCdRMode_x001643F0 rmode;
    void *host_buf;
    int pad1c;
    long long host_size;
    long long host_sector;
    int fd;
    int error;
};
extern volatile int srd_geterror_locked_x001643F0 __asm__("D_004115E0");
extern volatile int srd_geterror_call_x001643F0 __asm__("D_004115E4");
extern volatile int srd_debug_geterror_x001643F0 __asm__("D_004115EC");
void SRD_SetHistory_x001643F0(int value) __asm__("func_00164D38");
extern char ext_str0_x001643F0[] __asm__("D_00462F38");
int func_001643F0_x001643F0(SrdObj_x001643F0 *h) __asm__("func_001643F0");
/* srd_check_dvd_error: from https://github.com/crashbashash/DW4_Decomp (src/cri/srd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001643F0_x001643F0(SrdObj_x001643F0 *h)
{
    int err;
    if (srd_geterror_call_x001643F0 == 0) {
        return 0;
    }
    if (h->stat_x001643F0 != 2) {
        return 0;
    }
    srd_debug_geterror_x001643F0 = 1;
    if (srd_geterror_locked_x001643F0 == 1) {
        SVM_LockDev_x001643F0();
        SRD_SetHistory_x001643F0(0x1400);
        err = sceCdGetError_x001643F0();
        SRD_SetHistory_x001643F0(0x1401);
        SVM_UnlockDev_x001643F0();
    } else {
        SRD_SetHistory_x001643F0(0x1500);
        err = sceCdGetError_x001643F0();
        SRD_SetHistory_x001643F0(0x1501);
    }
    srd_debug_geterror_x001643F0 = 0;
    if (err != 0 && err != -1) {
        if (err != 32) {
            h->error = err;
            scePrintf_x001643F0(ext_str0_x001643F0, err);
            return 1;
        }
    }
    return 0;
}
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
typedef unsigned int u32_x001649C0;
typedef signed int s32_x001649C0;
extern s32_x001649C0 D_00731C3C_x001649C0 __asm__("D_004115D4");
extern volatile u32_x001649C0 D_00731C50_x001649C0 __asm__("D_004115E8");
extern const char D_0075ABC8_x001649C0[] __asm__("D_00462FE8");
extern void func_004244c8_x001649C0(const char *, ...) __asm__("scePrintf");
void func_001649C0_x001649C0(void) __asm__("func_001649C0");
/* func_004e42a0: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/libadxe/cri_srd_control.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_001649C0_x001649C0(void) {
    D_00731C50_x001649C0 = 0;
    while (D_00731C3C_x001649C0 == 1) {
        if (++D_00731C50_x001649C0 > 0x19640000u) {
            func_004244c8_x001649C0(D_0075ABC8_x001649C0);
            break;
        }
    }
}
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
typedef unsigned char u8_x00164B58;
typedef signed char s8_x00164B58;
typedef signed int s32_x00164B58;
extern void func_004e4618_x00164B58(s32_x00164B58) __asm__("func_00164D38");
extern s8_x00164B58 D_00731C00_x00164B58[] __asm__("D_00411598");
extern void func_004f0608_x00164B58(void) __asm__("func_0016FF40");
extern void func_004f0620_x00164B58(void) __asm__("func_0016FF58");
extern s32_x00164B58 func_004e48b0_x00164B58(s32_x00164B58, s32_x00164B58, s32_x00164B58 *) __asm__("func_00164FD0");
typedef struct {
    s8_x00164B58 used, devtype, stat, pad;
    u8_x00164B58 rest[0x2c];
    s32_x00164B58 fd;
} SRD_x00164B58;
s32_x00164B58 func_00164B58_x00164B58(void) __asm__("func_00164B58");
/* func_004e4438: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/libadxe/cri_srd_control.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
s32_x00164B58 func_00164B58_x00164B58(void) {
    s32_x00164B58 done;
    SRD_x00164B58 *srd = (SRD_x00164B58 *)D_00731C00_x00164B58;
    if (srd->stat == 2) {
        func_004f0608_x00164B58();
        func_004e4618_x00164B58(0x2400);
        if (func_004e48b0_x00164B58(srd->fd, 1, &done) < 0) {
            func_004e4618_x00164B58(0x2401);
        } else {
            func_004e4618_x00164B58(0x2402);
            if (done) {
                func_004f0620_x00164B58();
                return 1;
            }
        }
        func_004f0620_x00164B58();
    }
    return 0;
}
s32 func_00164B18_x00164BF8(s8) __asm__("func_00164B18");
s32 func_00164B58_x00164BF8(s8) __asm__("func_00164B58");
extern s8 D_00411599_x00164BF8 __asm__("D_00411599");
s32 func_00164BF8_x00164BF8(void) __asm__("func_00164BF8");
s32 func_00164BF8_x00164BF8(void)
{
  s8 x;
  x = D_00411599_x00164BF8;
  if (x == 1)
  {
    __asm__ __volatile__ ("" : "+r" (x));
    return func_00164B18_x00164BF8(x) * 2;
  }
  if (x != 2)
  {
    return 0;
  }
  __asm__ __volatile__ ("" : "+r" (x));
  return func_00164B58_x00164BF8(x);
}
typedef unsigned char u8_x00164C48;
typedef signed char s8_x00164C48;
typedef signed int s32_x00164C48;
extern s32_x00164C48 D_00731C3C_x00164C48 __asm__("D_004115D4");
extern volatile s32_x00164C48 D_00731C54_x00164C48 __asm__("D_004115EC");
extern const char D_0075ABF8_x00164C48[] __asm__("D_00463018");
extern const char D_0075AC08_x00164C48[] __asm__("D_00463028");
extern const char D_0075AC28_x00164C48[] __asm__("D_00463048");
extern const char D_0075AC48_x00164C48[] __asm__("D_00463068");
extern const char D_0075AC68_x00164C48[] __asm__("D_00463088");
extern const char D_0075AC88_x00164C48[] __asm__("D_004630A8");
extern const char D_0075ACA8_x00164C48[] __asm__("D_004630C8");
extern void func_004244c8_x00164C48(const char *, ...) __asm__("scePrintf");
extern s8_x00164C48 D_00731C00_x00164C48[] __asm__("D_00411598");
typedef struct {
    s8_x00164C48 used, devtype, stat, pad;
    u8_x00164C48 rest[0x2c];
    s32_x00164C48 fd;
} SRD_x00164C48;
s32_x00164C48 func_004e44d8_x00164C48(void) __asm__("func_00164BF8");
s32_x00164C48 func_00164C48_x00164C48(void) __asm__("func_00164C48");
/* func_004e4528: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/libadxe/cri_srd_control.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
s32_x00164C48 func_00164C48_x00164C48(void) {
    SRD_x00164C48 *srd;
    const char *fmt;
    func_004244c8_x00164C48(D_0075ABF8_x00164C48);
    func_004244c8_x00164C48(D_0075AC08_x00164C48, D_00731C3C_x00164C48);
    func_004244c8_x00164C48(D_0075AC28_x00164C48, D_00731C54_x00164C48);
    fmt = D_0075AC48_x00164C48;
    srd = (SRD_x00164C48 *)D_00731C00_x00164C48;
    func_004244c8_x00164C48(fmt, srd->stat);
    if (srd->devtype == 1) func_004244c8_x00164C48(D_0075AC68_x00164C48);
    if (srd->devtype == 2) func_004244c8_x00164C48(D_0075AC88_x00164C48);
    func_004244c8_x00164C48(D_0075ACA8_x00164C48, func_004e44d8_x00164C48());
    return 0;
}
extern volatile s32 D_004115F4_x00164D18 __asm__("D_004115F4");
s32 func_00164D18_x00164D18(void) __asm__("func_00164D18");
s32 func_00164D18_x00164D18(void) {
    return D_004115F4_x00164D18;
}
extern volatile s32 D_004115F0_x00164D28 __asm__("D_004115F0");
s32 func_00164D28_x00164D28(void) __asm__("func_00164D28");
s32 func_00164D28_x00164D28(void) {
    return D_004115F0_x00164D28;
}
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
extern volatile s32 D_00411604_x00164D58 __asm__("D_00411604");
s32 func_00164D58_x00164D58(void) __asm__("func_00164D58");
s32 func_00164D58_x00164D58(void) {
    return D_00411604_x00164D58;
}
void func_00164D68(s32 arg0) {
    D_00411608 = arg0;
    if (arg0 == 1) {
        scePrintf(&D_004630E8);
    }
}
s32 func_00164DA8(void) {
    return D_00411608;
}
extern volatile int D_003D8454_x00164DB8 __asm__("D_004115DC");
extern int D_003D8484_x00164DB8 __asm__("D_0041160C");
extern char D_004540B8_x00164DB8[] __asm__("D_00463108");
extern void func_003B1F28_x00164DB8(char *a0) __asm__("scePrintf");
void func_00164DB8_x00164DB8(int a0) __asm__("func_00164DB8");
/* func_00331CE0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00164DB8_x00164DB8(int a0) {
    D_003D8454_x00164DB8 = (char)a0;
    D_003D8484_x00164DB8 = D_003D8454_x00164DB8;
    if (a0 == 1) {
        func_003B1F28_x00164DB8(D_004540B8_x00164DB8);
    }
}
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
