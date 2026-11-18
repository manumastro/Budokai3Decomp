#include "common.h"

extern s32 D_004138EC;
extern s32 D_004138F0;

s32 func_00164D38(s32);                     /* extern */
s32 func_00164FD0(s32, s32, s32);               /* extern */

s32 func_00164E10();                            /* extern */

s32 func_00164DB8();                            /* extern */

s32 func_00164DA8();                            /* extern */

s32 func_00164D68();                            /* extern */

s32 func_00164E90();                            /* extern */

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00413740;

s32 func_00127810(s32, s8 *);                   /* extern */
s32 func_00127940(s32, s8 *);                       /* extern */
s32 func_00127A88(s32, s32 *);              /* extern */
s32 func_00166380(s32);                         /* extern */
s32 strlen(s32);                                    /* extern */
extern s32 D_00413760;
extern s8 D_00463690;
extern s8 D_00463698;

s32 func_00166BE0();                            /* extern */

extern u32 D_00412A5C;

extern s32 D_00413758;

s32 func_00166588(void *);                      /* extern */
s32 func_00166A00();                            /* extern */

typedef unsigned char u_char_x00166480;
typedef unsigned int u_int_x00166480;
typedef signed int Sint32_x00166480;
typedef char Char8_x00166480;
typedef struct {
    u_int_x00166480 lsn;
    u_int_x00166480 size;
    char name[16];
    u_char_x00166480 date[8];
    u_int_x00166480 flag;
} sceCdlFILE_x00166480;
extern int* sceCdCallback_x00166480(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x00166480(int mode) __asm__("func_00118C08");
void SRD_SetHistory_x00166480(Sint32_x00166480 arg0) __asm__("func_00164D38");
extern Sint32_x00166480 dvg_ci_dbg_out_lv_x00166480 __asm__("D_00413758");
void dvci_conv_fname_x00166480(const Char8_x00166480* fname, Char8_x00166480* path) __asm__("func_00166DA0");
Sint32_x00166480 dvci_get_fstate_x00166480(const Char8_x00166480* fname, sceCdlFILE_x00166480* fp) __asm__("func_00167688");
extern Sint32_x00166480 SVM_SetCbSvr_x00166480(Sint32_x00166480, Sint32_x00166480 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166480(Sint32_x00166480, Sint32_x00166480, Sint32_x00166480 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166480(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166480(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00166480(const char* fmt, ...) __asm__("scePrintf");
extern void dvCiEntryErrFunc_x00166480(void (*func)(void*, const Char8_x00166480*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x00166480)(void*, const Char8_x00166480*, void*) __asm__("dvg_ci_err_func");
extern Char8_x00166480 dvg_ci_fname_x00166480[297] __asm__("D_00413610");
void dvci_call_errfn_x00166480(void* obj, const Char8_x00166480* msg) __asm__("func_00166150");
Sint32_x00166480 dvCiCdSearchFile_x00166480(sceCdlFILE_x00166480* fp, const Char8_x00166480* fname) __asm__("func_00166180");
void dvCiEntryErrFunc_x00166480(void (*func)(void*, const Char8_x00166480*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern char ext_str0_x00166480[] __asm__("D_00463500");
extern char ext_str1_x00166480[] __asm__("D_004634D8");
extern char ext_str2_x00166480[] __asm__("D_004634A8");
Sint32_x00166480 dvCiGetFileSize_x00166480(const Char8_x00166480* fname) __asm__("dvCiGetFileSize");
/* dvCiGetFileSize_x00166480: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166480 dvCiGetFileSize_x00166480(const Char8_x00166480* fname) {
    sceCdlFILE_x00166480 fp;
    if (fname == 0) {
        dvci_call_errfn_x00166480(0, ext_str2_x00166480);
        return 0;
    }
    dvci_get_fstate_x00166480(fname, &fp);
    if (fp.size == 0) {
        dvci_conv_fname_x00166480(fname, dvg_ci_fname_x00166480);
        SRD_SetHistory_x00166480(0x8200);
        sceCdSync_x00166480(0);
        SRD_SetHistory_x00166480(0x8201);
        if (dvCiCdSearchFile_x00166480(&fp, dvg_ci_fname_x00166480) == 0) {
            if (dvg_ci_dbg_out_lv_x00166480 != 2) {
                scePrintf_x00166480(ext_str1_x00166480, dvg_ci_fname_x00166480);
            }
            dvci_call_errfn_x00166480(0, ext_str0_x00166480);
            return 0;
        }
    }
    return fp.size;
}
typedef unsigned char u_char_x00166550;
typedef unsigned int u_int_x00166550;
typedef char Sint8_x00166550;
typedef signed int Sint32_x00166550;
typedef char Char8_x00166550;
typedef struct {
    u_char_x00166550 trycount;
    u_char_x00166550 spindlctrl;
    u_char_x00166550 datapattern;
    u_char_x00166550 pad;
} sceCdRMode_x00166550;
typedef struct {
    u_int_x00166550 lsn;
    u_int_x00166550 size;
    char name[16];
    u_char_x00166550 date[8];
    u_int_x00166550 flag;
} sceCdlFILE_x00166550;
extern int* sceCdCallback_x00166550(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166550;
typedef struct {
               Sint8_x00166550 used;
               Sint8_x00166550 unk1;
               Sint8_x00166550 stat;
               Sint8_x00166550 unk3;
               Sint32_x00166550 unk4;
               Sint32_x00166550 unk8;
               Sint32_x00166550 unkC;
               Sint32_x00166550 unk10;
               Sint32_x00166550 unk14;
               void* unk18;
               SRD_x00166550 srd;
               sceCdlFILE_x00166550 unk20;
               sceCdRMode_x00166550 cdrmode;
} DVG_CI_OBJ_x00166550;
typedef DVG_CI_OBJ_x00166550* DVG_CI_x00166550;
extern Sint32_x00166550 SVM_SetCbSvr_x00166550(Sint32_x00166550, Sint32_x00166550 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166550(Sint32_x00166550, Sint32_x00166550, Sint32_x00166550 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166550(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166550(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void (*dvg_ci_err_func_x00166550)(void*, const Char8_x00166550*, void*) __asm__("dvg_ci_err_func");
extern DVG_CI_OBJ_x00166550 dvg_ci_obj_x00166550[40] __asm__("D_00412AD0");
DVG_CI_x00166550 func_00166550_x00166550() __asm__("func_00166550");
/* dvci_alloc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
DVG_CI_x00166550 func_00166550_x00166550() {
    DVG_CI_x00166550 dvg_ci = 0;
    Sint32_x00166550 i;
    for (i = 0; i < 40; i++) {
        if (dvg_ci_obj_x00166550[i].used == 0) {
            dvg_ci = &dvg_ci_obj_x00166550[i];
        }
    }
    return dvg_ci;
}
typedef unsigned char u_char_x00166588;
typedef unsigned int u_int_x00166588;
typedef unsigned int size_t_x00166588;
typedef char Sint8_x00166588;
typedef signed int Sint32_x00166588;
typedef char Char8_x00166588;
typedef struct {
    u_char_x00166588 trycount;
    u_char_x00166588 spindlctrl;
    u_char_x00166588 datapattern;
    u_char_x00166588 pad;
} sceCdRMode_x00166588;
typedef struct {
    u_int_x00166588 lsn;
    u_int_x00166588 size;
    char name[16];
    u_char_x00166588 date[8];
    u_int_x00166588 flag;
} sceCdlFILE_x00166588;
extern int* sceCdCallback_x00166588(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166588;
typedef struct {
               Sint8_x00166588 used;
               Sint8_x00166588 unk1;
               Sint8_x00166588 stat;
               Sint8_x00166588 unk3;
               Sint32_x00166588 unk4;
               Sint32_x00166588 unk8;
               Sint32_x00166588 unkC;
               Sint32_x00166588 unk10;
               Sint32_x00166588 unk14;
               void* unk18;
               SRD_x00166588 srd;
               sceCdlFILE_x00166588 unk20;
               sceCdRMode_x00166588 cdrmode;
} DVG_CI_OBJ_x00166588;
typedef DVG_CI_OBJ_x00166588* DVG_CI_x00166588;
extern Sint32_x00166588 SVM_SetCbSvr_x00166588(Sint32_x00166588, Sint32_x00166588 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166588(Sint32_x00166588, Sint32_x00166588, Sint32_x00166588 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166588(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166588(int, int (*)(int), int) __asm__("AddDmacHandler");
void* memset_x00166588(void* s, int c, size_t_x00166588 n) __asm__("memset");
extern void (*dvg_ci_err_func_x00166588)(void*, const Char8_x00166588*, void*) __asm__("dvg_ci_err_func");
void func_00166588_x00166588(DVG_CI_x00166588 dvg_ci) __asm__("func_00166588");
/* dvci_free: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00166588_x00166588(DVG_CI_x00166588 dvg_ci) {
    memset_x00166588(dvg_ci, 0, sizeof(DVG_CI_OBJ_x00166588));
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiOpen);
void func_00166730(u8 *arg0) {
    if (arg0 != NULL) {
        if ((u8) *(u8 *)((u8 *)arg0 + 2) >= 2U) {
            func_00166A00();
        }
        *(s8 *)((u8 *)arg0 + 0) = 0;
        func_00166588(arg0);
    }
}
typedef unsigned char u_char_x00166788;
typedef unsigned int u_int_x00166788;
typedef char Sint8_x00166788;
typedef signed int Sint32_x00166788;
typedef char Char8_x00166788;
typedef struct {
    u_char_x00166788 trycount;
    u_char_x00166788 spindlctrl;
    u_char_x00166788 datapattern;
    u_char_x00166788 pad;
} sceCdRMode_x00166788;
typedef struct {
    u_int_x00166788 lsn;
    u_int_x00166788 size;
    char name[16];
    u_char_x00166788 date[8];
    u_int_x00166788 flag;
} sceCdlFILE_x00166788;
extern int* sceCdCallback_x00166788(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166788;
typedef struct {
               Sint8_x00166788 used;
               Sint8_x00166788 unk1;
               Sint8_x00166788 stat;
               Sint8_x00166788 unk3;
               Sint32_x00166788 unk4;
               Sint32_x00166788 unk8;
               Sint32_x00166788 unkC;
               Sint32_x00166788 unk10;
               Sint32_x00166788 unk14;
               void* unk18;
               SRD_x00166788 srd;
               sceCdlFILE_x00166788 unk20;
               sceCdRMode_x00166788 cdrmode;
} DVG_CI_OBJ_x00166788;
typedef DVG_CI_OBJ_x00166788* DVG_CI_x00166788;
extern Sint32_x00166788 SVM_SetCbSvr_x00166788(Sint32_x00166788, Sint32_x00166788 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166788(Sint32_x00166788, Sint32_x00166788, Sint32_x00166788 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166788(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166788(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void dvCiEntryErrFunc_x00166788(void (*func)(void*, const Char8_x00166788*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x00166788)(void*, const Char8_x00166788*, void*) __asm__("dvg_ci_err_func");
void dvci_call_errfn_x00166788(void* obj, const Char8_x00166788* msg) __asm__("func_00166150");
void dvCiEntryErrFunc_x00166788(void (*func)(void*, const Char8_x00166788*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern char ext_str0_x00166788[] __asm__("D_00463608");
Sint32_x00166788 func_00166788_x00166788(DVG_CI_x00166788 handl, Sint32_x00166788 offset, Sint32_x00166788 whence) __asm__("func_00166788");
/* dvCiSeek: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166788 func_00166788_x00166788(DVG_CI_x00166788 handl, Sint32_x00166788 offset, Sint32_x00166788 whence) {
    if (handl == 0) {
        dvci_call_errfn_x00166788(handl, ext_str0_x00166788);
        return 0;
    }
    if (whence == 0) {
        handl->unkC = offset;
    } else if (whence == 2) {
        handl->unkC = handl->unk8 + offset;
    } else if (whence == 1) {
        handl->unkC += offset;
    }
    handl->unk14 = 0;
    handl->unkC = ((((((handl->unkC)) < ((handl->unk8)) ? ((handl->unkC)) : ((handl->unk8)))) < ((0)) ? ((0)) : ((((handl->unkC)) < ((handl->unk8)) ? ((handl->unkC)) : ((handl->unk8))))));
    return handl->unkC;
}
typedef unsigned char u_char_x00166820;
typedef unsigned int u_int_x00166820;
typedef char Sint8_x00166820;
typedef signed int Sint32_x00166820;
typedef char Char8_x00166820;
typedef struct {
    u_char_x00166820 trycount;
    u_char_x00166820 spindlctrl;
    u_char_x00166820 datapattern;
    u_char_x00166820 pad;
} sceCdRMode_x00166820;
typedef struct {
    u_int_x00166820 lsn;
    u_int_x00166820 size;
    char name[16];
    u_char_x00166820 date[8];
    u_int_x00166820 flag;
} sceCdlFILE_x00166820;
extern int* sceCdCallback_x00166820(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166820;
typedef struct {
               Sint8_x00166820 used;
               Sint8_x00166820 unk1;
               Sint8_x00166820 stat;
               Sint8_x00166820 unk3;
               Sint32_x00166820 unk4;
               Sint32_x00166820 unk8;
               Sint32_x00166820 unkC;
               Sint32_x00166820 unk10;
               Sint32_x00166820 unk14;
               void* unk18;
               SRD_x00166820 srd;
               sceCdlFILE_x00166820 unk20;
               sceCdRMode_x00166820 cdrmode;
} DVG_CI_OBJ_x00166820;
typedef DVG_CI_OBJ_x00166820* DVG_CI_x00166820;
extern Sint32_x00166820 SVM_SetCbSvr_x00166820(Sint32_x00166820, Sint32_x00166820 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166820(Sint32_x00166820, Sint32_x00166820, Sint32_x00166820 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166820(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166820(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void dvCiEntryErrFunc_x00166820(void (*func)(void*, const Char8_x00166820*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x00166820)(void*, const Char8_x00166820*, void*) __asm__("dvg_ci_err_func");
void dvci_call_errfn_x00166820(void* obj, const Char8_x00166820* msg) __asm__("func_00166150");
void dvCiEntryErrFunc_x00166820(void (*func)(void*, const Char8_x00166820*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern char ext_str0_x00166820[] __asm__("D_00463608");
Sint32_x00166820 func_00166820_x00166820(DVG_CI_x00166820 handl) __asm__("func_00166820");
/* dvCiTell: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166820 func_00166820_x00166820(DVG_CI_x00166820 handl) {
    if (handl == 0) {
        dvci_call_errfn_x00166820(handl, ext_str0_x00166820);
        return 0;
    }
    return handl->unkC;
}
typedef unsigned char u_char_x00166858;
typedef unsigned int u_int_x00166858;
typedef char Sint8_x00166858;
typedef signed int Sint32_x00166858;
typedef char Char8_x00166858;
typedef struct {
    u_char_x00166858 trycount;
    u_char_x00166858 spindlctrl;
    u_char_x00166858 datapattern;
    u_char_x00166858 pad;
} sceCdRMode_x00166858;
typedef struct {
    u_int_x00166858 lsn;
    u_int_x00166858 size;
    char name[16];
    u_char_x00166858 date[8];
    u_int_x00166858 flag;
} sceCdlFILE_x00166858;
extern int* sceCdCallback_x00166858(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x00166858(int mode) __asm__("func_00118C08");
typedef void* SRD_x00166858;
typedef struct {
               Sint8_x00166858 used;
               Sint8_x00166858 unk1;
               Sint8_x00166858 stat;
               Sint8_x00166858 unk3;
               Sint32_x00166858 unk4;
               Sint32_x00166858 unk8;
               Sint32_x00166858 unkC;
               Sint32_x00166858 unk10;
               Sint32_x00166858 unk14;
               void* unk18;
               SRD_x00166858 srd;
               sceCdlFILE_x00166858 unk20;
               sceCdRMode_x00166858 cdrmode;
} DVG_CI_OBJ_x00166858;
typedef DVG_CI_OBJ_x00166858* DVG_CI_x00166858;
SRD_x00166858 SRD_Create_x00166858() __asm__("func_00163E60");
void SRD_Destroy_x00166858(SRD_x00166858 srd) __asm__("func_00163EE8");
void SRD_ExecServer_x00166858() __asm__("func_001648B0");
void SRD_WaitForExecServer_x00166858() __asm__("func_001649C0");
void SRD_WaitComplete_x00166858(SRD_x00166858 srd) __asm__("func_00164258");
Sint32_x00166858 SRD_ReqRdDvd_x00166858(SRD_x00166858 srd, Sint32_x00166858, Sint32_x00166858, void*, sceCdRMode_x00166858*) __asm__("func_00163F88");
extern sceCdRMode_x00166858 dvg_ci_cdrmode_x00166858 __asm__("D_00413750");
extern Sint32_x00166858 dvg_ci_rdmode_x00166858 __asm__("D_00413754");
extern Sint32_x00166858 SVM_SetCbSvr_x00166858(Sint32_x00166858, Sint32_x00166858 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166858(Sint32_x00166858, Sint32_x00166858, Sint32_x00166858 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
void InvalidDCache_x00166858(void*, void*) __asm__("func_0010AC98");
extern int AddIntcHandler_x00166858(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166858(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void dvCiEntryErrFunc_x00166858(void (*func)(void*, const Char8_x00166858*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x00166858)(void*, const Char8_x00166858*, void*) __asm__("dvg_ci_err_func");
void dvci_call_errfn_x00166858(void* obj, const Char8_x00166858* msg) __asm__("func_00166150");
void dvCiEntryErrFunc_x00166858(void (*func)(void*, const Char8_x00166858*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern char ext_str0_x00166858[] __asm__("D_00463640");
extern char ext_str1_x00166858[] __asm__("D_00463620");
extern char ext_str2_x00166858[] __asm__("D_00463608");
Sint32_x00166858 dvCiReqRd_x00166858(DVG_CI_x00166858 handl, Sint32_x00166858 nsct, void* buf) __asm__("dvCiReqRd");
/* dvCiReqRd_x00166858: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166858 dvCiReqRd_x00166858(DVG_CI_x00166858 handl, Sint32_x00166858 nsct, void* buf) {
    if (handl == 0) {
        dvci_call_errfn_x00166858(handl, ext_str2_x00166858);
        return 0;
    }
    if (nsct < 0) {
        dvci_call_errfn_x00166858(handl, ext_str1_x00166858);
        return 0;
    }
    if (buf == 0) {
        dvci_call_errfn_x00166858(handl, ext_str0_x00166858);
        return 0;
    }
    if (handl->stat == 2) {
        return 0;
    }
    if (nsct == 0) {
        handl->stat = 1;
        return 0;
    }
    handl->srd = SRD_Create_x00166858();
    if (handl->srd == 0) {
        return 0;
    }
    handl->cdrmode.trycount = dvg_ci_cdrmode_x00166858.trycount;
    handl->cdrmode.spindlctrl = dvg_ci_cdrmode_x00166858.spindlctrl;
    handl->cdrmode.datapattern = dvg_ci_cdrmode_x00166858.datapattern;
    handl->unk18 = buf;
    handl->unk10 = ((nsct) < (handl->unk8 - handl->unkC) ? (nsct) : (handl->unk8 - handl->unkC));
    InvalidDCache_x00166858(buf, buf + (handl->unk10 << 11) - 1);
    if (SRD_ReqRdDvd_x00166858(handl->srd, handl->unk20.lsn + handl->unkC, handl->unk10, handl->unk18, &handl->cdrmode) == 0) {
        SRD_Destroy_x00166858(handl->srd);
        return 0;
    }
    if (dvg_ci_rdmode_x00166858 == 1) {
        sceCdSync_x00166858(0);
        SRD_WaitForExecServer_x00166858();
        SRD_ExecServer_x00166858();
        SRD_WaitComplete_x00166858(handl->srd);
        SRD_Destroy_x00166858(handl->srd);
        handl->srd = 0;
        handl->unk14 = nsct;
        handl->stat = 1;
        handl->unkC += handl->unk10;
    } else {
        handl->stat = 2;
    }
    return handl->unk10;
}
typedef unsigned char u_char_x00166A00;
typedef unsigned int u_int_x00166A00;
typedef char Sint8_x00166A00;
typedef signed int Sint32_x00166A00;
typedef char Char8_x00166A00;
typedef struct {
    u_char_x00166A00 trycount;
    u_char_x00166A00 spindlctrl;
    u_char_x00166A00 datapattern;
    u_char_x00166A00 pad;
} sceCdRMode_x00166A00;
typedef struct {
    u_int_x00166A00 lsn;
    u_int_x00166A00 size;
    char name[16];
    u_char_x00166A00 date[8];
    u_int_x00166A00 flag;
} sceCdlFILE_x00166A00;
extern int* sceCdCallback_x00166A00(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166A00;
typedef struct {
               Sint8_x00166A00 used;
               Sint8_x00166A00 unk1;
               Sint8_x00166A00 stat;
               Sint8_x00166A00 unk3;
               Sint32_x00166A00 unk4;
               Sint32_x00166A00 unk8;
               Sint32_x00166A00 unkC;
               Sint32_x00166A00 unk10;
               Sint32_x00166A00 unk14;
               void* unk18;
               SRD_x00166A00 srd;
               sceCdlFILE_x00166A00 unk20;
               sceCdRMode_x00166A00 cdrmode;
} DVG_CI_OBJ_x00166A00;
typedef DVG_CI_OBJ_x00166A00* DVG_CI_x00166A00;
void SRD_ExecServer_x00166A00() __asm__("func_001648B0");
void SRD_Break_x00166A00(SRD_x00166A00 srd) __asm__("func_00164388");
extern Sint32_x00166A00 dvg_ci_dbg_out_lv_x00166A00 __asm__("D_00413758");
extern Sint32_x00166A00 SVM_SetCbSvr_x00166A00(Sint32_x00166A00, Sint32_x00166A00 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166A00(Sint32_x00166A00, Sint32_x00166A00, Sint32_x00166A00 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166A00(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166A00(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00166A00(const char* fmt, ...) __asm__("scePrintf");
void dvCiExecServer_x00166A00() __asm__("func_001662F0");
extern void dvCiEntryErrFunc_x00166A00(void (*func)(void*, const Char8_x00166A00*, void*), void* obj) __asm__("dvCiEntryErrFunc");
Sint32_x00166A00 dvCiGetStat_x00166A00(DVG_CI_x00166A00 handl) __asm__("func_00166B00");
extern void (*dvg_ci_err_func_x00166A00)(void*, const Char8_x00166A00*, void*) __asm__("dvg_ci_err_func");
void dvci_call_errfn_x00166A00(void* obj, const Char8_x00166A00* msg) __asm__("func_00166150");
void dvCiExecServer_x00166A00() __asm__("func_001662F0");
void dvCiEntryErrFunc_x00166A00(void (*func)(void*, const Char8_x00166A00*, void*), void* obj) __asm__("dvCiEntryErrFunc");
Sint32_x00166A00 dvCiGetStat_x00166A00(DVG_CI_x00166A00 handl) __asm__("func_00166B00");
extern char ext_str0_x00166A00[] __asm__("D_00463668");
extern char ext_str1_x00166A00[] __asm__("D_00463608");
void func_00166A00_x00166A00(DVG_CI_x00166A00 handl) __asm__("func_00166A00");
/* dvCiStopTr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00166A00_x00166A00(DVG_CI_x00166A00 handl) {
    Sint32_x00166A00 var_s2 = 0;
    if (handl == 0) {
        dvci_call_errfn_x00166A00(handl, ext_str1_x00166A00);
        return;
    }
    if (handl->stat < 2U) {
        return;
    }
    if (handl->srd != 0) {
        SRD_Break_x00166A00(handl->srd);
    }
    while (1) {
        SRD_ExecServer_x00166A00();
        dvCiExecServer_x00166A00();
        dvCiGetStat_x00166A00(handl);
        if (handl->stat != 2) {
            break;
        }
        var_s2 += 1;
        if (var_s2 > 0x9FFFF) {
            if (dvg_ci_dbg_out_lv_x00166A00 != 2) {
                scePrintf_x00166A00(ext_str0_x00166A00);
            }
            break;
        }
    }
    handl->stat = 0;
    handl->unk14 = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166B00);
s32 func_00166B38(void) {
    return 0x800;
}
typedef unsigned char u_char_x00166B40;
typedef unsigned int u_int_x00166B40;
typedef char Sint8_x00166B40;
typedef signed int Sint32_x00166B40;
typedef char Char8_x00166B40;
typedef struct {
    u_char_x00166B40 trycount;
    u_char_x00166B40 spindlctrl;
    u_char_x00166B40 datapattern;
    u_char_x00166B40 pad;
} sceCdRMode_x00166B40;
typedef struct {
    u_int_x00166B40 lsn;
    u_int_x00166B40 size;
    char name[16];
    u_char_x00166B40 date[8];
    u_int_x00166B40 flag;
} sceCdlFILE_x00166B40;
extern int* sceCdCallback_x00166B40(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166B40;
typedef struct {
               Sint8_x00166B40 used;
               Sint8_x00166B40 unk1;
               Sint8_x00166B40 stat;
               Sint8_x00166B40 unk3;
               Sint32_x00166B40 unk4;
               Sint32_x00166B40 unk8;
               Sint32_x00166B40 unkC;
               Sint32_x00166B40 unk10;
               Sint32_x00166B40 unk14;
               void* unk18;
               SRD_x00166B40 srd;
               sceCdlFILE_x00166B40 unk20;
               sceCdRMode_x00166B40 cdrmode;
} DVG_CI_OBJ_x00166B40;
typedef DVG_CI_OBJ_x00166B40* DVG_CI_x00166B40;
extern Sint32_x00166B40 SVM_SetCbSvr_x00166B40(Sint32_x00166B40, Sint32_x00166B40 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166B40(Sint32_x00166B40, Sint32_x00166B40, Sint32_x00166B40 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166B40(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166B40(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void dvCiEntryErrFunc_x00166B40(void (*func)(void*, const Char8_x00166B40*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x00166B40)(void*, const Char8_x00166B40*, void*) __asm__("dvg_ci_err_func");
void dvci_call_errfn_x00166B40(void* obj, const Char8_x00166B40* msg) __asm__("func_00166150");
void dvCiEntryErrFunc_x00166B40(void (*func)(void*, const Char8_x00166B40*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern char ext_str0_x00166B40[] __asm__("D_00463608");
Sint32_x00166B40 func_00166B40_x00166B40(DVG_CI_x00166B40 handl) __asm__("func_00166B40");
/* dvCiGetNumTr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166B40 func_00166B40_x00166B40(DVG_CI_x00166B40 handl) {
    if (handl == 0) {
        dvci_call_errfn_x00166B40(handl, ext_str0_x00166B40);
        return 0;
    }
    if (handl->stat == 1) {
        return handl->unk14 << 11;
    }
    return 0;
}
void func_00166B90(s32 arg0) {
    D_00413758 = arg0;
}
s32 func_00166BA0(void) {
    return D_00413758;
}
void func_00166BB0(u32 arg0) {
    D_00412A5C = arg0;
    if (arg0 >= 2U) {
        D_00412A5C = 0;
    }
}
s32 func_00166BD0(void) {
    return D_00412A5C;
}
typedef unsigned char u_char_x00166BE0;
typedef unsigned int u_int_x00166BE0;
typedef signed int Sint32_x00166BE0;
typedef char Char8_x00166BE0;
typedef struct {
    u_int_x00166BE0 lsn;
    u_int_x00166BE0 size;
    char name[16];
    u_char_x00166BE0 date[8];
    u_int_x00166BE0 flag;
} sceCdlFILE_x00166BE0;
extern int* sceCdCallback_x00166BE0(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x00166BE0(int mode) __asm__("func_00118C08");
void SRD_SetHistory_x00166BE0(Sint32_x00166BE0 arg0) __asm__("func_00164D38");
extern Sint32_x00166BE0 dvg_ci_dbg_out_lv_x00166BE0 __asm__("D_00413758");
void dvci_conv_fname_x00166BE0(const Char8_x00166BE0* fname, Char8_x00166BE0* path) __asm__("func_00166DA0");
Sint32_x00166BE0 dvci_get_fstate_x00166BE0(const Char8_x00166BE0* fname, sceCdlFILE_x00166BE0* fp) __asm__("func_00167688");
extern Sint32_x00166BE0 SVM_SetCbSvr_x00166BE0(Sint32_x00166BE0, Sint32_x00166BE0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166BE0(Sint32_x00166BE0, Sint32_x00166BE0, Sint32_x00166BE0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166BE0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166BE0(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00166BE0(const char* fmt, ...) __asm__("scePrintf");
extern void (*dvg_ci_err_func_x00166BE0)(void*, const Char8_x00166BE0*, void*) __asm__("dvg_ci_err_func");
extern Char8_x00166BE0 dvg_ci_fname_x00166BE0[297] __asm__("D_00413610");
Sint32_x00166BE0 dvCiCdSearchFile_x00166BE0(sceCdlFILE_x00166BE0* fp, const Char8_x00166BE0* fname) __asm__("func_00166180");
extern char ext_str0_x00166BE0[] __asm__("D_004634D8");
Sint32_x00166BE0 func_00166BE0_x00166BE0(const Char8_x00166BE0* fname) __asm__("func_00166BE0");
/* dvci_getfilesize32: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166BE0 func_00166BE0_x00166BE0(const Char8_x00166BE0* fname) {
    sceCdlFILE_x00166BE0 fp;
    dvci_get_fstate_x00166BE0(fname, &fp);
    if (fp.size == 0) {
        dvci_conv_fname_x00166BE0(fname, dvg_ci_fname_x00166BE0);
        SRD_SetHistory_x00166BE0(0x8400);
        sceCdSync_x00166BE0(0);
        SRD_SetHistory_x00166BE0(0x8401);
        if (dvCiCdSearchFile_x00166BE0(&fp, dvg_ci_fname_x00166BE0) == 0) {
            if (dvg_ci_dbg_out_lv_x00166BE0 != 2) {
                scePrintf_x00166BE0(ext_str0_x00166BE0, dvg_ci_fname_x00166BE0);
            }
            return 0;
        }
    }
    return fp.size;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166C88);
typedef unsigned char u_char_x00166C98;
typedef unsigned int u_int_x00166C98;
typedef char Sint8_x00166C98;
typedef signed int Sint32_x00166C98;
typedef signed long Sint64_x00166C98;
typedef char Char8_x00166C98;
typedef struct {
    u_char_x00166C98 trycount;
    u_char_x00166C98 spindlctrl;
    u_char_x00166C98 datapattern;
    u_char_x00166C98 pad;
} sceCdRMode_x00166C98;
typedef struct {
    u_int_x00166C98 lsn;
    u_int_x00166C98 size;
    char name[16];
    u_char_x00166C98 date[8];
    u_int_x00166C98 flag;
} sceCdlFILE_x00166C98;
extern int* sceCdCallback_x00166C98(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x00166C98;
typedef struct {
               Sint8_x00166C98 used;
               Sint8_x00166C98 unk1;
               Sint8_x00166C98 stat;
               Sint8_x00166C98 unk3;
               Sint32_x00166C98 unk4;
               Sint32_x00166C98 unk8;
               Sint32_x00166C98 unkC;
               Sint32_x00166C98 unk10;
               Sint32_x00166C98 unk14;
               void* unk18;
               SRD_x00166C98 srd;
               sceCdlFILE_x00166C98 unk20;
               sceCdRMode_x00166C98 cdrmode;
} DVG_CI_OBJ_x00166C98;
typedef DVG_CI_OBJ_x00166C98* DVG_CI_x00166C98;
extern Sint32_x00166C98 SVM_SetCbSvr_x00166C98(Sint32_x00166C98, Sint32_x00166C98 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166C98(Sint32_x00166C98, Sint32_x00166C98, Sint32_x00166C98 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166C98(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166C98(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void (*dvg_ci_err_func_x00166C98)(void*, const Char8_x00166C98*, void*) __asm__("dvg_ci_err_func");
Sint32_x00166C98 func_00166C98_x00166C98(DVG_CI_x00166C98 handl) __asm__("func_00166C98");
/* dvci_getnumtr_lower: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166C98 func_00166C98_x00166C98(DVG_CI_x00166C98 handl) {
    Sint64_x00166C98 val = handl->unk14;
    val <<= 11;
    return val & 0xFFFFFFFF;
}
s32 func_00166CB8(void) {
    return 0;
}
void func_00166CC0(void) {
    func_00166BE0();
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166CD8);
void func_00166DA0(s8 *arg0, s32 arg1) {
    s8 temp_v1;

    func_00127A88(arg1, &D_00413760);
    temp_v1 = *arg0;
    if ((temp_v1 != 0x2F) && (temp_v1 != 0x5C)) {
        func_00127810(arg1, &D_00463690);
    }
    func_00127810(arg1, arg0);
    if (func_00127940((arg1 + strlen(arg1)) - 2, &D_00463698) != 0) {
        func_00127810(arg1, &D_00463698);
    }
    func_00166380(arg1);
}
s8 func_00166E48_x00166E48(s8 arg0) __asm__("func_00166E48");
s8 func_00166E48_x00166E48(s8 arg0) {
    s8 temp_v1;
    s8 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return ((temp_v1 ^ 0x5C) != 0) ? var_a0 : 0x2F;
}
s32 func_00166E48_x00166E80(s8) __asm__("func_00166E48");
s32 func_00166E80_x00166E80(s8 arg0, s8 arg1) __asm__("func_00166E80");
s32 func_00166E80_x00166E80(s8 arg0, s8 arg1) {
    s32 temp_s0;

    temp_s0 = func_00166E48_x00166E80(arg0);
    return ((temp_s0 ^ func_00166E48_x00166E80(arg1)) != 0) ? -1 : 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166ED8);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166F70);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167108);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167290);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167468);
void func_00167530(void) {
    memset(&D_00413740, 0, 0x10);
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167558);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167598);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167688);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiLoadDirInfo);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167928);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167A90);
typedef unsigned char u_char_x00167AB8;
typedef signed int Sint32_x00167AB8;
typedef struct {
    u_char_x00167AB8 trycount;
    u_char_x00167AB8 spindlctrl;
    u_char_x00167AB8 datapattern;
    u_char_x00167AB8 pad;
} sceCdRMode_x00167AB8;
extern int* sceCdCallback_x00167AB8(void (*func)(int)) __asm__("sceCdCallback");
extern sceCdRMode_x00167AB8 dvg_ci_cdrmode_x00167AB8 __asm__("D_00413750");
extern Sint32_x00167AB8 dvg_ci_rdmode_x00167AB8 __asm__("D_00413754");
extern int AddIntcHandler_x00167AB8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00167AB8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern sceCdRMode_x00167AB8 dvg_ci_cdrmode_x00167AB8 __asm__("D_00413750");
extern Sint32_x00167AB8 dvg_ci_rdmode_x00167AB8 __asm__("D_00413754");
void func_00167AB8_x00167AB8(Sint32_x00167AB8 trycount, Sint32_x00167AB8 spindlctrl, Sint32_x00167AB8 datapattern, Sint32_x00167AB8 rdmode) __asm__("func_00167AB8");
/* dvCiSetRdMode: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00167AB8_x00167AB8(Sint32_x00167AB8 trycount, Sint32_x00167AB8 spindlctrl, Sint32_x00167AB8 datapattern, Sint32_x00167AB8 rdmode) {
    dvg_ci_cdrmode_x00167AB8.trycount = trycount;
    dvg_ci_cdrmode_x00167AB8.spindlctrl = spindlctrl;
    dvg_ci_cdrmode_x00167AB8.datapattern = datapattern;
    dvg_ci_rdmode_x00167AB8 = rdmode;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167AD8);
s32 *func_00167BA0(void) {
    return &D_00413760;
}
void func_00167BB0(void) {
    func_00164E90();
}
void func_00167BC8(void) {
    func_00164D68();
}
void func_00167BE0(void) {
    func_00164DA8();
}
void func_00167BF8(void) {
    func_00164DB8();
}
void func_00167C10(void) {
    func_00164E10();
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167C28);
void func_00167C60_x00167C60(void) __asm__("func_00167C60");
void func_00167C60_x00167C60(void)
{
  s32 var_v0;
  int new_var;
  int new_var2;
  new_var2 = 0;
  var_v0 = 0x1FFF;
  new_var = 0x20;
  do
  {
    var_v0 -= new_var;
  }
  while (var_v0 >= new_var2);
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167C90);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167CC0);
s32 func_00167D10(u8 *arg0) {
    s32 temp_s0;
    s32 var_v0;

    func_00164D38(0x4000);
    temp_s0 = func_00164FD0(*(s32 *)((u8 *)arg0 + 0x18), 1, arg0 + 0x14);
    func_00164D38(0x4001);
    var_v0 = 0;
    if (temp_s0 >= 0) {
        var_v0 = *(s32 *)((u8 *)arg0 + 0x14) != 1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167D78);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167DD8);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167EA0);
void func_00167F18(s32 arg0, s32 arg1) {
    D_004138EC = arg0;
    D_004138F0 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167F30);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167FD0);
