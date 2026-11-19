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
typedef unsigned char u_char_x001665A8;
typedef unsigned int u_int_x001665A8;
typedef char Sint8_x001665A8;
typedef signed int Sint32_x001665A8;
typedef char Char8_x001665A8;
typedef struct {
    u_char_x001665A8 trycount;
    u_char_x001665A8 spindlctrl;
    u_char_x001665A8 datapattern;
    u_char_x001665A8 pad;
} sceCdRMode_x001665A8;
typedef struct {
    u_int_x001665A8 lsn;
    u_int_x001665A8 size;
    char name[16];
    u_char_x001665A8 date[8];
    u_int_x001665A8 flag;
} sceCdlFILE_x001665A8;
extern int* sceCdCallback_x001665A8(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x001665A8(int mode) __asm__("func_00118C08");
typedef void* SRD_x001665A8;
typedef struct {
               Sint8_x001665A8 used;
               Sint8_x001665A8 unk1;
               Sint8_x001665A8 stat;
               Sint8_x001665A8 unk3;
               Sint32_x001665A8 unk4;
               Sint32_x001665A8 unk8;
               Sint32_x001665A8 unkC;
               Sint32_x001665A8 unk10;
               Sint32_x001665A8 unk14;
               void* unk18;
               SRD_x001665A8 srd;
               sceCdlFILE_x001665A8 unk20;
               sceCdRMode_x001665A8 cdrmode;
} DVG_CI_OBJ_x001665A8;
typedef DVG_CI_OBJ_x001665A8* DVG_CI_x001665A8;
void SRD_SetHistory_x001665A8(Sint32_x001665A8 arg0) __asm__("func_00164D38");
extern Sint32_x001665A8 dvg_ci_dbg_out_lv_x001665A8 __asm__("D_00413758");
void dvci_conv_fname_x001665A8(const Char8_x001665A8* fname, Char8_x001665A8* path) __asm__("func_00166DA0");
Sint32_x001665A8 dvci_get_fstate_x001665A8(const Char8_x001665A8* fname, sceCdlFILE_x001665A8* fp) __asm__("func_00167688");
extern Sint32_x001665A8 SVM_SetCbSvr_x001665A8(Sint32_x001665A8, Sint32_x001665A8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001665A8(Sint32_x001665A8, Sint32_x001665A8, Sint32_x001665A8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x001665A8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001665A8(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x001665A8(const char* fmt, ...) __asm__("scePrintf");
extern void dvCiEntryErrFunc_x001665A8(void (*func)(void*, const Char8_x001665A8*, void*), void* obj) __asm__("dvCiEntryErrFunc");
extern void (*dvg_ci_err_func_x001665A8)(void*, const Char8_x001665A8*, void*) __asm__("dvg_ci_err_func");
extern Char8_x001665A8 dvg_ci_fname_x001665A8[297] __asm__("D_00413610");
void dvci_call_errfn_x001665A8(void* obj, const Char8_x001665A8* msg) __asm__("func_00166150");
Sint32_x001665A8 dvCiCdSearchFile_x001665A8(sceCdlFILE_x001665A8* fp, const Char8_x001665A8* fname) __asm__("func_00166180");
void dvCiEntryErrFunc_x001665A8(void (*func)(void*, const Char8_x001665A8*, void*), void* obj) __asm__("dvCiEntryErrFunc");
DVG_CI_x001665A8 dvci_alloc_x001665A8() __asm__("func_00166550");
void dvci_free_x001665A8(DVG_CI_x001665A8 dvg_ci) __asm__("func_00166588");
void dvci_call_errfn_x001665A8(void* obj, const Char8_x001665A8* msg) __attribute__((weak, section(".b3stub")));
void dvci_call_errfn_x001665A8(void* obj, const Char8_x001665A8* msg) {}
Sint32_x001665A8 dvCiCdSearchFile_x001665A8(sceCdlFILE_x001665A8* fp, const Char8_x001665A8* fname) __attribute__((weak, section(".b3stub")));
Sint32_x001665A8 dvCiCdSearchFile_x001665A8(sceCdlFILE_x001665A8* fp, const Char8_x001665A8* fname) {}
void dvci_free_x001665A8(DVG_CI_x001665A8 dvg_ci) __attribute__((weak, section(".b3stub")));
void dvci_free_x001665A8(DVG_CI_x001665A8 dvg_ci) {}
DVG_CI_x001665A8 dvCiOpen_x001665A8(Char8_x001665A8* fname, void* arg1, Sint32_x001665A8 rw) __asm__("dvCiOpen");
/* dvCiOpen_x001665A8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
DVG_CI_x001665A8 dvCiOpen_x001665A8(Char8_x001665A8* fname, void* arg1, Sint32_x001665A8 rw) {
    DVG_CI_x001665A8 dvg_ci;
    Sint32_x001665A8 fstate;
    if (fname == 0) {
        dvci_call_errfn_x001665A8(fname, "E0092908:fname is null.(dvCiOpen_x001665A8)");
        return 0;
    }
    if (rw != 0) {
        dvci_call_errfn_x001665A8(0, "E0092909:rw is illigal.(dvCiOpen_x001665A8)");
        return 0;
    }
    dvg_ci = dvci_alloc_x001665A8();
    if (dvg_ci == 0) {
        dvci_call_errfn_x001665A8(0, "E0092910:not enough handle resource.(dvCiOpen_x001665A8)");
        return 0;
    }
    fstate = dvci_get_fstate_x001665A8(fname, &dvg_ci->unk20);
    if (dvg_ci->unk20.size == 0) {
        dvci_conv_fname_x001665A8(fname, dvg_ci_fname_x001665A8);
        if (dvg_ci_dbg_out_lv_x001665A8 != 2) {
            scePrintf_x001665A8("DVCI: File cache was not hit. \"%s\"\n", dvg_ci_fname_x001665A8);
        }
        SRD_SetHistory_x001665A8(0x8300);
        sceCdSync_x001665A8(0);
        SRD_SetHistory_x001665A8(0x8301);
        if (dvCiCdSearchFile_x001665A8(&dvg_ci->unk20, dvg_ci_fname_x001665A8) == 0) {
            dvci_call_errfn_x001665A8(0, "E0092911:sceCdSearchFile fail.(dvCiOpen_x001665A8)\0\0\0\0");
            dvci_free_x001665A8(dvg_ci);
            return 0;
        }
        dvg_ci->unk1 = 0;
    } else {
        dvg_ci->unk1 = 1;
    }
    dvg_ci->unk8 = (dvg_ci->unk20.size + 2048 - 1) / 2048;
    dvg_ci->used = 1;
    dvg_ci->unk4 = dvg_ci->unk20.size;
    dvg_ci->unkC = 0;
    dvg_ci->unk18 = 0;
    dvg_ci->unk10 = 0;
    dvg_ci->unk14 = 0;
    dvg_ci->stat = 0;
    dvg_ci->srd = 0;
    if (fstate == 1) {
        dvg_ci->unk8 = 0x7FFFFFFF;
    }
    return dvg_ci;
}
__asm__("# rebind dvCiOpen 0x001665A8");
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
s32 func_00166150_x00166B00() __asm__("func_00166150");
extern s32 D_00463608_x00166B00 __asm__("D_00463608");
s8 func_00166B00_x00166B00(u8 *arg0) __asm__("func_00166B00");
s8 func_00166B00_x00166B00(u8 *arg0) {
    if (arg0 == NULL) {
        func_00166150_x00166B00(arg0, &D_00463608_x00166B00);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 2);
}
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
volatile int func_00166C88_x00166C88(u8 *arg0) __asm__("func_00166C88");
volatile int func_00166C88_x00166C88(u8 *arg0)
{
  return ((s64) (((s64) (*((s32 *) (((u8 *) arg0) + 0x14)))) << 0xB)) >> 0x20;
}
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
s32 func_00166C88_x00166CD8() __asm__("func_00166C88");
s32 func_00166C98_x00166CD8() __asm__("func_00166C98");
s32 func_00166CB8_x00166CD8() __asm__("func_00166CB8");
s32 func_00166CC0_x00166CD8() __asm__("func_00166CC0");
s32 func_00166CD8_x00166CD8(s32 a0, s32 a1) __asm__("func_00166CD8");
s32 func_00166CD8_x00166CD8(s32 a0, s32 a1)
{
    s32 r = 0;

    if (a0 == 0) {
        return 0;
    }
    switch (a1) {
    case 0xC8:
        r = func_00166C88_x00166CD8();
        break;
    case 0xC9:
        r = func_00166C98_x00166CD8();
        break;
    case 0xCA:
    case 0xCC:
        r = func_00166CB8_x00166CD8();
        break;
    case 0xCB:
    case 0xCD:
        r = func_00166CC0_x00166CD8();
        break;
    case 0x12B:
        r = 1;
        break;
    }
    return r;
}
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
s32 strlen_x00166ED8(const char *) __asm__("strlen");
s32 func_00166E80_x00166ED8(s32, s32) __asm__("func_00166E80");
s32 func_00166ED8_x00166ED8(char *a, char *b) __asm__("func_00166ED8");
s32 func_00166ED8_x00166ED8(char *a, char *b)
{
    s32 n;
    s32 i;

    n = strlen_x00166ED8(a);
    if (n != strlen_x00166ED8(b)) {
        return -1;
    }
    for (i = 0; i < n; i++) {
        if (func_00166E80_x00166ED8(a[i], b[i]) != 0) {
            return -1;
        }
    }
    return 0;
}
typedef void (*CvFsErrFn_x00166F70)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00166F70)(CvFsErrFn_x00166F70 func, void *obj);
typedef int (*CvFsPathFn_x00166F70)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00166F70)(void);
typedef int (*CvFsOpenFn_x00166F70)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00166F70)(int fd);
typedef int (*CvFsFdIntFn_x00166F70)(int fd);
typedef int (*CvFsSeekFn_x00166F70)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00166F70)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00166F70)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00166F70)(void);
typedef int (*CvFsLoadDirInfoFn_x00166F70)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00166F70)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00166F70)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00166F70 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00166F70 entry_err_func;
    CvFsPathFn_x00166F70 get_file_size;
    CvFsGetFreeSizeFn_x00166F70 get_free_size;
    CvFsOpenFn_x00166F70 open;
    CvFsFdFn_x00166F70 close_x00166F70;
    CvFsSeekFn_x00166F70 seek;
    CvFsFdIntFn_x00166F70 tell;
    CvFsXferFn_x00166F70 req_rd;
    CvFsXferFn_x00166F70 req_wr;
    CvFsFdFn_x00166F70 stop_tr;
    CvFsFdIntFn_x00166F70 get_stat;
    CvFsFdIntFn_x00166F70 get_sct_len;
    CvFsSetSctLenFn_x00166F70 set_sct_len;
    CvFsFdIntFn_x00166F70 get_num_tr;
    CvFsPathFn_x00166F70 change_dir;
    CvFsPathFn_x00166F70 is_exist_file;
    CvFsGetNumFilesFn_x00166F70 get_num_files;
    CvFsLoadDirInfoFn_x00166F70 load_dir_info;
    CvFsFdIntFn_x00166F70 get_max_byte_rate;
    CvFsPathFn_x00166F70 make_dir;
    CvFsPathFn_x00166F70 remove_dir;
    CvFsPathFn_x00166F70 delete_file;
    CvFsGetFileSizeExFn_x00166F70 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00166F70 opt_fn2;
} CvFsVtbl_x00166F70;
extern CvFsVtbl_x00166F70 *addDevice_x00166F70(char *devname, CvFsVtbl_x00166F70 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x00166F70;
extern void qsort_x00166F70(void *, size_t_x00166F70, size_t_x00166F70, int (*)(const void *, const void *)) __asm__("qsort");
void *memcpy_x00166F70(void *, const void *, size_t_x00166F70) __asm__("func_00125740");
int close_x00166F70(int fd) __asm__("close");
typedef struct DvCiFileLoc_x00166F70 {
    unsigned int lsn;
    unsigned int size;
} DvCiFileLoc_x00166F70;
typedef struct DvCiTable_x00166F70 {
    int files;
    int nfiles;
    int nent;
    int namelen;
} DvCiTable_x00166F70;
extern DvCiTable_x00166F70 dvci_dir_table_x00166F70 __asm__("D_00413740");
void dvci_to_large_to_yen_x00166F70(char *path) __asm__("func_00166380");
void dvci_to_large_to_yen_x00166F70(char *path) __asm__("func_00166380");
void dvci_to_large_to_yen_x00166F70(char *path) __attribute__((weak, section(".b3stub")));
void dvci_to_large_to_yen_x00166F70(char *path) {}
int func_00166F70_x00166F70(char *buf, char *list, int listlen, int n, int nameLen) __asm__("func_00166F70");
/* dvci_analysis_flist: from https://github.com/crashbashash/DW4_Decomp (src/cri/dvci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00166F70_x00166F70(char *buf, char *list, int listlen, int n, int nameLen)
{
    int i;
    int start;
    int count;
    int len;
    char *dst;
    i = 0;
    count = 0;
    start = 0;
    while (list[i] != 0) {
        if (list[i] == '\n' || list[i] == 0) {
            if (list[i + 1] == '\n' || list[i + 1] == 0) {
                i++;
            }
            len = i - start;
            if (list[i - 1] == '\n' || list[i - 1] == '\r') {
                list[i - 1] = 0;
            }
            if (list[i - 2] == '\n' || list[i - 2] == '\r') {
                list[i - 2] = 0;
            }
            dst = buf + (n * sizeof(DvCiFileLoc_x00166F70) + count * (nameLen + 1));
            memcpy_x00166F70(dst, list + start, len);
            dvci_to_large_to_yen_x00166F70(dst);
            if (dst[len - 1] != 0) {
                dst[len] = 0;
            }
            start = i + 1;
            count++;
            if (count == n) {
                break;
            }
        }
        i++;
        if (i > listlen) {
            break;
        }
    }
    if (dvci_dir_table_x00166F70.files == 0) {
        dvci_dir_table_x00166F70.files = (int)buf;
        dvci_dir_table_x00166F70.nfiles = count;
        dvci_dir_table_x00166F70.nent = n;
        dvci_dir_table_x00166F70.namelen = nameLen;
    }
    return count;
}
typedef struct CdlFile_x00167108 {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} CdlFile_x00167108;
typedef struct CdRMode_x00167108 {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} CdRMode_x00167108;
typedef struct DrvName_x00167108 {
    char c[5];
} DrvName_x00167108;
extern char D_004544F0_x00167108[] __asm__("D_004636A0");
extern char D_003D9EE8_x00167108[] __asm__("D_00413868");
extern int func_003A9260_x00167108(const char *a, const char *b) __asm__("func_00127738");
extern int func_00334F90_x00167108(char *path, void *buf) __asm__("func_00168F08");
extern void *func_003A52F0_x00167108(void *dst, int c, int n) __asm__("memset");
extern void func_00333390_x00167108(char *path, char *out) __asm__("func_00166DA0");
extern void PushGlobalD8478History_331C78_x00167108(int code) __asm__("func_00164D38");
extern int func_00398DA0_x00167108(int mode) __asm__("func_00118C08");
extern int func_00332838_x00167108(CdlFile_x00167108 *file, char *name) __asm__("func_00166180");
extern int sceCdRead_x00167108(unsigned int lsn, unsigned int sectors, void *buf, CdRMode_x00167108 *mode) __asm__("func_00119640");
int func_00167108_x00167108(char *path, void *buf) __asm__("func_00167108");
/* func_003336F8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003336f8.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00167108_x00167108(char *path, void *buf)
{
    CdlFile_x00167108 file;
    CdRMode_x00167108 mode;
    char drv[5];
    *(DrvName_x00167108 *)drv = *(DrvName_x00167108 *)path;
    drv[4] = 0;
    if (func_003A9260_x00167108(drv, D_004544F0_x00167108) == 0)
        return func_00334F90_x00167108(path + 4, buf);
    func_003A52F0_x00167108(D_003D9EE8_x00167108, 0, 0x80);
    func_00333390_x00167108(path, D_003D9EE8_x00167108);
    PushGlobalD8478History_331C78_x00167108(0x9000);
    while (func_00398DA0_x00167108(1) == 1)
        ;
    PushGlobalD8478History_331C78_x00167108(0x9001);
    PushGlobalD8478History_331C78_x00167108(0x9100);
    if (func_00332838_x00167108(&file, D_003D9EE8_x00167108) == 0) {
        PushGlobalD8478History_331C78_x00167108(0x9101);
        return 0;
    }
    PushGlobalD8478History_331C78_x00167108(0x9102);
    mode.trycount = 0;
    mode.spindlctrl = 1;
    mode.datapattern = 0;
    mode.pad = 0;
    PushGlobalD8478History_331C78_x00167108(0x9200);
    if (sceCdRead_x00167108(file.lsn, 2, buf, &mode) == 0) {
        PushGlobalD8478History_331C78_x00167108(0x9201);
        return 0;
    }
    PushGlobalD8478History_331C78_x00167108(0x9202);
    PushGlobalD8478History_331C78_x00167108(0x9300);
    while (func_00398DA0_x00167108(1) == 1)
        ;
    PushGlobalD8478History_331C78_x00167108(0x9301);
    return 1;
}
typedef unsigned char u_char_x00167290;
typedef unsigned int u_int_x00167290;
typedef unsigned int u32_x00167290;
typedef u32_x00167290 uintptr_t_x00167290;
typedef char Sint8_x00167290;
typedef unsigned int Uint32_x00167290;
typedef signed int Sint32_x00167290;
typedef char Char8_x00167290;
typedef struct {
    u_int_x00167290 lsn;
    u_int_x00167290 size;
    char name[16];
    u_char_x00167290 date[8];
    u_int_x00167290 flag;
} sceCdlFILE_x00167290;
extern int* sceCdCallback_x00167290(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x00167290(int mode) __asm__("func_00118C08");
typedef struct {
    Uint32_x00167290 lsn;
    Uint32_x00167290 size;
} DVG_FLIST_SUB_x00167290;
typedef struct {
    uintptr_t_x00167290 unk0;
    Sint32_x00167290 unk4;
    Sint32_x00167290 unk8;
    Sint32_x00167290 unkC;
} DVG_FLIST_TBL_x00167290;
void SRD_SetHistory_x00167290(Sint32_x00167290 arg0) __asm__("func_00164D38");
Sint32_x00167290 dvCiCdSearchFile_x00167290(sceCdlFILE_x00167290* fp, const Char8_x00167290* fname) __asm__("func_00166180");
extern Sint32_x00167290 dvg_ci_dbg_out_lv_x00167290 __asm__("D_00413758");
void dvci_conv_fname_x00167290(const Char8_x00167290* fname, Char8_x00167290* path) __asm__("func_00166DA0");
extern int AddIntcHandler_x00167290(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00167290(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00167290(const char* fmt, ...) __asm__("scePrintf");
extern DVG_FLIST_TBL_x00167290 dvg_flist_tbl_x00167290 __asm__("D_00413740");
extern Sint32_x00167290 dvg_ci_dbg_out_lv_x00167290 __asm__("D_00413758");
extern Char8_x00167290 dvg_fpath_x00167290[128] __asm__("D_00413868");
void dvci_conv_fname_x00167290(const Char8_x00167290* fname, Char8_x00167290* path) __asm__("func_00166DA0");
extern char ext_str0_x00167290[] __asm__("D_004636F0");
extern char ext_str1_x00167290[] __asm__("D_004636D8");
extern char ext_str2_x00167290[] __asm__("D_004636C0");
extern char ext_str3_x00167290[] __asm__("D_004636A8");
Sint32_x00167290 func_00167290_x00167290(Sint8_x00167290* arg0, Sint32_x00167290 arg1) __asm__("func_00167290");
/* search_fstate: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00167290 func_00167290_x00167290(Sint8_x00167290* arg0, Sint32_x00167290 arg1) {
    sceCdlFILE_x00167290 fp;
    Sint32_x00167290 numf = 0;
    Sint32_x00167290 numf_not_found = 0;
    Sint32_x00167290 i;
    Char8_x00167290* fname;
    DVG_FLIST_SUB_x00167290* flist_sub = arg0;
    for (i = 0; i < arg1; i++) {
        fname = arg0 + ((dvg_flist_tbl_x00167290.unk8 * 8) + ((dvg_flist_tbl_x00167290.unkC + 1) * i));
        if (fname[0] == '\0') {
            continue;
        }
        dvci_conv_fname_x00167290(fname, dvg_fpath_x00167290);
        SRD_SetHistory_x00167290(0x9400);
        while (sceCdSync_x00167290(1) == 1) {
        }
        SRD_SetHistory_x00167290(0x9401);
        SRD_SetHistory_x00167290(0x9500);
        if (dvCiCdSearchFile_x00167290(&fp, dvg_fpath_x00167290) == 1) {
            numf += 1;
            SRD_SetHistory_x00167290(0x9501);
            flist_sub[i].lsn = fp.lsn;
            flist_sub[i].size = fp.size;
            if (dvg_ci_dbg_out_lv_x00167290 == 0) {
                scePrintf_x00167290(ext_str3_x00167290, fname);
            }
        } else {
            SRD_SetHistory_x00167290(0x9502);
            if (dvg_ci_dbg_out_lv_x00167290 == 0) {
                scePrintf_x00167290(ext_str2_x00167290, fname);
            }
            numf_not_found += 1;
        }
    }
    if (dvg_ci_dbg_out_lv_x00167290 == 0) {
        scePrintf_x00167290(ext_str1_x00167290, numf);
    }
    if (numf_not_found > 0 && dvg_ci_dbg_out_lv_x00167290 != 2) {
        scePrintf_x00167290(ext_str0_x00167290, '\n');
    }
    return numf;
}
s32 func_00166ED8_x00167468(s32, s32) __asm__("func_00166ED8");
extern s32 D_00413740_x00167468 __asm__("D_00413740");
void func_00167468_x00167468(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3) __asm__("func_00167468");
void func_00167468_x00167468(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3)
{
  s32 temp_v0;
  u8 *new_var;
  s32 var_s0;
  u8 *var_s1;
  var_s0 = 0;
  if (arg3 > 0)
  {
    var_s1 = arg2;
    new_var = (u8 *) (&D_00413740_x00167468);
    loop_2:
    temp_v0 = ((*((s32 *) (new_var + 0xC))) * var_s0) + var_s0;

    var_s0 += 1;
    if (func_00166ED8_x00167468(arg1, arg2 + (((*((s32 *) (new_var + 8))) * 8) + temp_v0)) == 0)
    {
      *((s32 *) (((u8 *) arg0) + 0)) = (s32) (*((s32 *) (((u8 *) var_s1) + 0)));
      *((s32 *) (((u8 *) arg0) + 4)) = (s32) (*((s32 *) (((u8 *) var_s1) + 4)));
      return;
    }
    var_s1 += 8;
    if (var_s0 >= arg3)
    {
      goto block_6;
    }
    goto loop_2;
  }
  block_6:
  *((s32 *) (((u8 *) arg0) + 4)) = 0;

 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; } while (0);
}
void func_00167530(void) {
    memset(&D_00413740, 0, 0x10);
}
unsigned int func_001C80F0_x00167558(const char *) __asm__("func_00127BA0");
int func_00167558_x00167558(char *name) __asm__("func_00167558");
/* func_0016FD58: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/dvci/func_0016FD58.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
int func_00167558_x00167558(char *name) {
    if (func_001C80F0_x00167558(name) != 17) {
        return 0;
    }
    return name[8] == '.';
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167598);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167688);
typedef unsigned int size_t_x00167778;
typedef unsigned int u32_x00167778;
typedef u32_x00167778 uintptr_t_x00167778;
typedef char Sint8_x00167778;
typedef unsigned int Uint32_x00167778;
typedef signed int Sint32_x00167778;
typedef char Char8_x00167778;
extern int* sceCdCallback_x00167778(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    uintptr_t_x00167778 unk0;
    Sint32_x00167778 unk4;
    Sint32_x00167778 unk8;
    Sint32_x00167778 unkC;
} DVG_FLIST_TBL_x00167778;
void dvci_call_errfn_x00167778(void* obj, const Char8_x00167778* msg) __asm__("func_00166150");
extern Sint32_x00167778 dvg_ci_dbg_out_lv_x00167778 __asm__("D_00413758");
extern int AddIntcHandler_x00167778(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00167778(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00167778(const char* fmt, ...) __asm__("scePrintf");
void* memset_x00167778(void* s, int c, size_t_x00167778 n) __asm__("memset");
extern DVG_FLIST_TBL_x00167778 dvg_flist_tbl_x00167778 __asm__("D_00413740");
extern Sint32_x00167778 dvg_ci_dbg_out_lv_x00167778 __asm__("D_00413758");
extern Sint8_x00167778 D_006BE100_x00167778[0x1000] __asm__("D_0047F040");
Sint32_x00167778 analysis_flist_003DC6A0_x00167778(Sint8_x00167778*, Sint8_x00167778*, Sint32_x00167778, Sint32_x00167778, Sint32_x00167778) __asm__("func_00166F70");
Sint32_x00167778 load_flist_x00167778(Char8_x00167778* flist, Sint8_x00167778* buf) __asm__("func_00167108");
Sint32_x00167778 search_fstate_x00167778(Sint8_x00167778* arg0, Sint32_x00167778 arg1) __asm__("func_00167290");
void dvci_init_flist_x00167778() __asm__("func_00167530");
extern Char8_x00167778 D_0055D340_x00167778[] __asm__("D_00463790");
extern Char8_x00167778 D_0055D370_x00167778[] __asm__("D_004637C0");
Sint32_x00167778 load_flist_x00167778(Char8_x00167778* flist, Sint8_x00167778* buf) __attribute__((weak, section(".b3stub")));
Sint32_x00167778 load_flist_x00167778(Char8_x00167778* flist, Sint8_x00167778* buf) {}
Sint32_x00167778 search_fstate_x00167778(Sint8_x00167778* arg0, Sint32_x00167778 arg1) __attribute__((weak, section(".b3stub")));
Sint32_x00167778 search_fstate_x00167778(Sint8_x00167778* arg0, Sint32_x00167778 arg1) {}
Sint32_x00167778 dvCiLoadDirInfo_x00167778(Char8_x00167778* flist, Sint8_x00167778* fcbuf, Sint32_x00167778 fcsize, Sint32_x00167778 maxflen) __asm__("dvCiLoadDirInfo");
/* dvCiLoadFcache: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00167778 dvCiLoadDirInfo_x00167778(Char8_x00167778* flist, Sint8_x00167778* fcbuf, Sint32_x00167778 fcsize, Sint32_x00167778 maxflen) {
    Uint32_x00167778 temp_lo;
    Sint32_x00167778 temp;
    memset_x00167778(D_006BE100_x00167778, 0, sizeof(D_006BE100_x00167778));
    if (dvg_flist_tbl_x00167778.unk0 != 0) {
        dvci_init_flist_x00167778();
    }
    if ((flist == 0) || (fcbuf == 0) || (fcsize == 0)) {
        dvci_init_flist_x00167778();
    }
    if (flist == 0) {
        return 0;
    }
    if (fcbuf == 0) {
        if (dvg_ci_dbg_out_lv_x00167778 == 0) {
            scePrintf_x00167778(D_0055D340_x00167778, fcbuf);
        }
        return 0;
    }
    if (fcsize == 0) {
        if (dvg_ci_dbg_out_lv_x00167778 == 0) {
            scePrintf_x00167778(D_0055D370_x00167778, fcsize);
        }
        return 0;
    }
    memset_x00167778(fcbuf, 0, fcsize);
    if (load_flist_x00167778(flist, D_006BE100_x00167778) == 0) {
        if (dvg_ci_dbg_out_lv_x00167778 == 0) {
            scePrintf_x00167778("DVCI: Can't read filelist file.(%s)\n", flist);
        }
        dvci_call_errfn_x00167778(0, "E0111501:can't read filelist.(dvCiLoadDirInfo_x00167778)\0\0\0\0\0\0\0\0");
        return 0;
    }
    temp_lo = (Uint32_x00167778)fcsize / (maxflen + 9);
    temp = analysis_flist_003DC6A0_x00167778(fcbuf, D_006BE100_x00167778, 0x1000, temp_lo, maxflen);
    return (((Uint32_x00167778)fcsize / (maxflen + 9)) * 8) + search_fstate_x00167778(fcbuf, temp) * (maxflen + 1);
}
__asm__("# rebind dvCiLoadDirInfo 0x00167778");
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167928);
typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    char pad_20[4];
} DvciFile_x00167A90;
void dvci_find_file_x00167A90(const char *fname, DvciFile_x00167A90 *file) __asm__("func_00167688");
void dvci_find_file_x00167A90(const char *fname, DvciFile_x00167A90 *file) __asm__("func_00167688");
int func_00167A90_x00167A90(const char *fname) __asm__("func_00167A90");
/* dvci_is_cached: from https://github.com/new-coke/rez-decomp (src/cri/dvci.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00167A90_x00167A90(const char *fname)
{
    DvciFile_x00167A90 file;
    dvci_find_file_x00167A90(fname, &file);
    return file.lsn != 0;
}
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
extern volatile int D_003D9F68_x00167C28 __asm__("D_004138E8");
extern int D_003D9F78_x00167C28 __asm__("D_004138F8");
extern void func_00335248_x00167C28(int a0) __asm__("func_001696E0");
extern void setDevName_x00167C28(int a0) __asm__("func_00169770");
int func_00167C28_x00167C28(void) __asm__("func_00167C28");
/* func_00333FA0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00333fa0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00167C28_x00167C28(void) {
    D_003D9F68_x00167C28;
    func_00335248_x00167C28(0);
    setDevName_x00167C28(0);
    return (int)&D_003D9F78_x00167C28;
}
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
extern s32 (*D_004138EC_x00167C90)(s32, s32, s32) __asm__("D_004138EC");
extern s32 D_004138F0_x00167C90 __asm__("D_004138F0");
void func_00167C90_x00167C90(s32 arg0, s32 arg1) __asm__("func_00167C90");
void func_00167C90_x00167C90(s32 arg0, s32 arg1) {
    if (D_004138EC_x00167C90 != NULL) {
        D_004138EC_x00167C90(D_004138F0_x00167C90, arg1, arg0);
    }
}
extern s32 D_00413960_x00167CC0 __asm__("D_00413960");
s32 func_00167CC0_x00167CC0(void) __asm__("func_00167CC0");
s32 func_00167CC0_x00167CC0(void)
{
  s32 i;
  s8 *p;

  i = 0;
  p = (s8 *) &D_00413960_x00167CC0;
  do
  {
    if (p[0] == 1)
    {
      if (p[2] == 2)
      {
        return 1;
      }
    }
    i++;
    p += 0x30;
  }
  while (i < 0xD);
  return 0;
}
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
typedef void (*CvFsErrFn_x00167D78)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00167D78)(CvFsErrFn_x00167D78 func, void *obj);
typedef int (*CvFsPathFn_x00167D78)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00167D78)(void);
typedef int (*CvFsOpenFn_x00167D78)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00167D78)(int fd);
typedef int (*CvFsFdIntFn_x00167D78)(int fd);
typedef int (*CvFsSeekFn_x00167D78)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00167D78)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00167D78)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00167D78)(void);
typedef int (*CvFsLoadDirInfoFn_x00167D78)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00167D78)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00167D78)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00167D78 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00167D78 entry_err_func;
    CvFsPathFn_x00167D78 get_file_size;
    CvFsGetFreeSizeFn_x00167D78 get_free_size;
    CvFsOpenFn_x00167D78 open;
    CvFsFdFn_x00167D78 close_x00167D78;
    CvFsSeekFn_x00167D78 seek;
    CvFsFdIntFn_x00167D78 tell;
    CvFsXferFn_x00167D78 req_rd;
    CvFsXferFn_x00167D78 req_wr;
    CvFsFdFn_x00167D78 stop_tr;
    CvFsFdIntFn_x00167D78 get_stat;
    CvFsFdIntFn_x00167D78 get_sct_len;
    CvFsSetSctLenFn_x00167D78 set_sct_len;
    CvFsFdIntFn_x00167D78 get_num_tr;
    CvFsPathFn_x00167D78 change_dir;
    CvFsPathFn_x00167D78 is_exist_file;
    CvFsGetNumFilesFn_x00167D78 get_num_files;
    CvFsLoadDirInfoFn_x00167D78 load_dir_info;
    CvFsFdIntFn_x00167D78 get_max_byte_rate;
    CvFsPathFn_x00167D78 make_dir;
    CvFsPathFn_x00167D78 remove_dir;
    CvFsPathFn_x00167D78 delete_file;
    CvFsGetFileSizeExFn_x00167D78 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00167D78 opt_fn2;
} CvFsVtbl_x00167D78;
extern CvFsVtbl_x00167D78 *addDevice_x00167D78(char *devname, CvFsVtbl_x00167D78 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x00167D78;
void *memset_x00167D78(void *, int, size_t_x00167D78) __asm__("memset");
int close_x00167D78(int fd) __asm__("close");
typedef struct SrdObj_x00167D78 SrdObj_x00167D78;
typedef struct HtCiFile_x00167D78 {
    signed char used;
    signed char cached;
    signed char state;
    signed char rsv;
    long long size;
    int nsct;
    int end_fg;
    int fd;
    int pos;
    char *buf;
    int req;
    int done;
    SrdObj_x00167D78 *stm;
} HtCiFile_x00167D78;
void func_00167D78_x00167D78(HtCiFile_x00167D78 *h, int nsct) __asm__("func_00167D78");
/* htci_zero_padding: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00167D78_x00167D78(HtCiFile_x00167D78 *h, int nsct)
{
    unsigned long long end;
    int n;
    end = ((unsigned long long)h->pos + h->req) << 11;
    if (h->size < end) {
        n = end - h->size;
        memset_x00167D78(h->buf + (h->req << 11) - n, 0, n);
    }
}
typedef void (*CvFsErrFn_x00167DD8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00167DD8)(CvFsErrFn_x00167DD8 func, void *obj);
typedef int (*CvFsPathFn_x00167DD8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00167DD8)(void);
typedef int (*CvFsOpenFn_x00167DD8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00167DD8)(int fd);
typedef int (*CvFsFdIntFn_x00167DD8)(int fd);
typedef int (*CvFsSeekFn_x00167DD8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00167DD8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00167DD8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00167DD8)(void);
typedef int (*CvFsLoadDirInfoFn_x00167DD8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00167DD8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00167DD8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00167DD8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00167DD8 entry_err_func;
    CvFsPathFn_x00167DD8 get_file_size;
    CvFsGetFreeSizeFn_x00167DD8 get_free_size;
    CvFsOpenFn_x00167DD8 open;
    CvFsFdFn_x00167DD8 close_x00167DD8;
    CvFsSeekFn_x00167DD8 seek;
    CvFsFdIntFn_x00167DD8 tell;
    CvFsXferFn_x00167DD8 req_rd;
    CvFsXferFn_x00167DD8 req_wr;
    CvFsFdFn_x00167DD8 stop_tr;
    CvFsFdIntFn_x00167DD8 get_stat;
    CvFsFdIntFn_x00167DD8 get_sct_len;
    CvFsSetSctLenFn_x00167DD8 set_sct_len;
    CvFsFdIntFn_x00167DD8 get_num_tr;
    CvFsPathFn_x00167DD8 change_dir;
    CvFsPathFn_x00167DD8 is_exist_file;
    CvFsGetNumFilesFn_x00167DD8 get_num_files;
    CvFsLoadDirInfoFn_x00167DD8 load_dir_info;
    CvFsFdIntFn_x00167DD8 get_max_byte_rate;
    CvFsPathFn_x00167DD8 make_dir;
    CvFsPathFn_x00167DD8 remove_dir;
    CvFsPathFn_x00167DD8 delete_file;
    CvFsGetFileSizeExFn_x00167DD8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00167DD8 opt_fn2;
} CvFsVtbl_x00167DD8;
extern CvFsVtbl_x00167DD8 *addDevice_x00167DD8(char *devname, CvFsVtbl_x00167DD8 *(*get_if)(void)) __asm__("addDevice");
void SVM_LockVar_x00167DD8(void) __asm__("func_0016FF70");
void SVM_UnlockVar_x00167DD8(void) __asm__("func_0016FFE8");
int close_x00167DD8(int fd) __asm__("close");
typedef struct SrdObj_x00167DD8 SrdObj_x00167DD8;
void SRD_Destroy_x00167DD8(SrdObj_x00167DD8 *srd) __asm__("func_00163EE8");
char SRD_GetStat_x00167DD8(SrdObj_x00167DD8 *srd) __asm__("func_00164128");
typedef struct HtCiFile_x00167DD8 {
    signed char used;
    signed char cached;
    signed char state;
    signed char rsv;
    long long size;
    int nsct;
    int end_fg;
    int fd;
    int pos;
    char *buf;
    int req;
    int done;
    SrdObj_x00167DD8 *stm;
} HtCiFile_x00167DD8;
void func_00167DD8_x00167DD8(HtCiFile_x00167DD8 *h) __asm__("func_00167DD8");
/* htCiExecHndl: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00167DD8_x00167DD8(HtCiFile_x00167DD8 *h)
{
    if (h->stm == 0)
        return;
    SVM_LockVar_x00167DD8();
    switch (SRD_GetStat_x00167DD8(h->stm)) {
    case 9:
        h->state = 3;
        SRD_Destroy_x00167DD8(h->stm);
        h->stm = 0;
        break;
    case 3:
        h->done = h->req;
        h->pos += h->req;
        h->state = 1;
        SRD_Destroy_x00167DD8(h->stm);
        h->stm = 0;
        break;
    case 0:
        h->state = 0;
        SRD_Destroy_x00167DD8(h->stm);
        h->stm = 0;
        break;
    case 1: case 2: case 4: case 5: case 6: case 7: case 8:
        break;
    }
    SVM_UnlockVar_x00167DD8();
}
__asm__("# rebind func_00167DD8 0x00167DD8");
s32 func_00167DD8_x00167EA0(s8 *) __asm__("func_00167DD8");
s32 func_00170A00_x00167EA0(s32 *) __asm__("func_00170A00");
extern s32 D_004138F4_x00167EA0 __asm__("D_004138F4");
extern s8 D_00413960_x00167EA0 __asm__("D_00413960");
void func_00167EA0_x00167EA0(void) __asm__("func_00167EA0");
void func_00167EA0_x00167EA0(void)
{
  s32 var_s1;
  s8 *var_s0;
  int new_var;
  if (func_00170A00_x00167EA0(&D_004138F4_x00167EA0) != 0)
  {
    new_var = 1;
    var_s0 = &D_00413960_x00167EA0;
    var_s1 = 0xC;
    do
    {
      if ((*var_s0) == new_var)
      {
        func_00167DD8_x00167EA0(var_s0);
      }
      var_s1 -= new_var;
      var_s0 += 0x30;
    }
    while (var_s1 >= 0);
    D_004138F4_x00167EA0 = 0;
  }
}
void func_00167F18(s32 arg0, s32 arg1) {
    D_004138EC = arg0;
    D_004138F0 = arg1;
}
typedef void (*CvFsErrFn_x00167F30)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00167F30)(CvFsErrFn_x00167F30 func, void *obj);
typedef int (*CvFsPathFn_x00167F30)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00167F30)(void);
typedef int (*CvFsOpenFn_x00167F30)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00167F30)(int fd);
typedef int (*CvFsFdIntFn_x00167F30)(int fd);
typedef int (*CvFsSeekFn_x00167F30)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00167F30)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00167F30)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00167F30)(void);
typedef int (*CvFsLoadDirInfoFn_x00167F30)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00167F30)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00167F30)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00167F30 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00167F30 entry_err_func;
    CvFsPathFn_x00167F30 get_file_size;
    CvFsGetFreeSizeFn_x00167F30 get_free_size;
    CvFsOpenFn_x00167F30 open;
    CvFsFdFn_x00167F30 close_x00167F30;
    CvFsSeekFn_x00167F30 seek;
    CvFsFdIntFn_x00167F30 tell;
    CvFsXferFn_x00167F30 req_rd;
    CvFsXferFn_x00167F30 req_wr;
    CvFsFdFn_x00167F30 stop_tr;
    CvFsFdIntFn_x00167F30 get_stat;
    CvFsFdIntFn_x00167F30 get_sct_len;
    CvFsSetSctLenFn_x00167F30 set_sct_len;
    CvFsFdIntFn_x00167F30 get_num_tr;
    CvFsPathFn_x00167F30 change_dir;
    CvFsPathFn_x00167F30 is_exist_file;
    CvFsGetNumFilesFn_x00167F30 get_num_files;
    CvFsLoadDirInfoFn_x00167F30 load_dir_info;
    CvFsFdIntFn_x00167F30 get_max_byte_rate;
    CvFsPathFn_x00167F30 make_dir;
    CvFsPathFn_x00167F30 remove_dir;
    CvFsPathFn_x00167F30 delete_file;
    CvFsGetFileSizeExFn_x00167F30 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00167F30 opt_fn2;
} CvFsVtbl_x00167F30;
extern CvFsVtbl_x00167F30 *addDevice_x00167F30(char *devname, CvFsVtbl_x00167F30 *(*get_if)(void)) __asm__("addDevice");
int close_x00167F30(int fd) __asm__("close");
void SRD_SetHistory_x00167F30(int value) __asm__("func_00164D38");
int SRD_SceOpen_x00167F30(const char *name, int flags) __asm__("func_00165048");
int SRD_SceClose_x00167F30(int fd) __asm__("func_001650B0");
typedef struct HtCiFileLoc_x00167F30 {
    int fd;
    int size;
} HtCiFileLoc_x00167F30;
extern char htci_path_x00167F30[304] __asm__("D_00413BD0");
void htci_conv_fname_x00167F30(const char *name, char *out) __asm__("func_00168B48");
void htci_get_finf_x00167F30(const char *name, HtCiFileLoc_x00167F30 *loc) __asm__("func_001694B0");
int func_00167F30_x00167F30(const char *name) __asm__("func_00167F30");
/* htCiIsExistFileOnHost: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00167F30_x00167F30(const char *name)
{
    HtCiFileLoc_x00167F30 loc;
    int fd;
    if (name == 0) {
        return 0;
    }
    htci_get_finf_x00167F30(name, &loc);
    if (loc.size == 0) {
        htci_conv_fname_x00167F30(name, htci_path_x00167F30);
        SRD_SetHistory_x00167F30(0x4200);
        fd = SRD_SceOpen_x00167F30(htci_path_x00167F30, 1);
        SRD_SetHistory_x00167F30(0x4201);
        if (fd < 0) {
            return 0;
        }
        SRD_SetHistory_x00167F30(0x4300);
        SRD_SceClose_x00167F30(fd);
        SRD_SetHistory_x00167F30(0x4301);
    }
    return 1;
}
extern long long func_00334310_x00167FD0(void) __asm__("htCiGetFileSize");
int func_00167FD0_x00167FD0(void) __asm__("func_00167FD0");
/* func_003342E8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0031f4e0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00167FD0_x00167FD0(void) {
    return func_00334310_x00167FD0();
}
