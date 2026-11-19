#include "common.h"

extern s8 D_00413F80;

extern s32 D_00413E20;

extern s32 D_00413D18;

extern s32 D_00413D10;

s32 func_001693C0(void *, s32, s32, s32);       /* extern */

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00413D00;

s32 htCiGetFileSize();                          /* extern */

s32 func_00164D38(s32);                     /* extern */
s32 func_001650B0(s32);                             /* extern */
s32 func_001682B0(void *);                      /* extern */
s32 func_00168768();                            /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00413D14;
extern s32 D_00463AF8;

INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiGetFileSize);
s32 func_00164D38_x001681F0(s32) __asm__("func_00164D38");
s32 func_00164F18_x001681F0(s32, s32, s32) __asm__("func_00164F18");
s32 func_001681F0_x001681F0(s32 arg0) __asm__("func_001681F0");
s32 func_001681F0_x001681F0(s32 arg0)
{
  s32 temp_s0;
  s32 new_var;
  s32 temp_s0_2;
  s32 var_v0;
  func_00164D38_x001681F0(0x4700);
  temp_s0 = func_00164F18_x001681F0(arg0, 0, 0);
  func_00164D38_x001681F0(0x4701);
  var_v0 = 0;
  if (temp_s0 >= 0)
  {
    func_00164D38_x001681F0(0x4800);
    temp_s0_2 = func_00164F18_x001681F0(arg0, 0, 2);
    func_00164D38_x001681F0(0x4801);
    var_v0 = ((new_var = temp_s0_2) >= 0) ? (temp_s0_2) : (0);
  }
  return var_v0;
}
typedef void (*CvFsErrFn_x00168278)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00168278)(CvFsErrFn_x00168278 func, void *obj);
typedef int (*CvFsPathFn_x00168278)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00168278)(void);
typedef int (*CvFsOpenFn_x00168278)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00168278)(int fd);
typedef int (*CvFsFdIntFn_x00168278)(int fd);
typedef int (*CvFsSeekFn_x00168278)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00168278)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00168278)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00168278)(void);
typedef int (*CvFsLoadDirInfoFn_x00168278)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00168278)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00168278)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00168278 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00168278 entry_err_func;
    CvFsPathFn_x00168278 get_file_size;
    CvFsGetFreeSizeFn_x00168278 get_free_size;
    CvFsOpenFn_x00168278 open;
    CvFsFdFn_x00168278 close_x00168278;
    CvFsSeekFn_x00168278 seek;
    CvFsFdIntFn_x00168278 tell;
    CvFsXferFn_x00168278 req_rd;
    CvFsXferFn_x00168278 req_wr;
    CvFsFdFn_x00168278 stop_tr;
    CvFsFdIntFn_x00168278 get_stat;
    CvFsFdIntFn_x00168278 get_sct_len;
    CvFsSetSctLenFn_x00168278 set_sct_len;
    CvFsFdIntFn_x00168278 get_num_tr;
    CvFsPathFn_x00168278 change_dir;
    CvFsPathFn_x00168278 is_exist_file;
    CvFsGetNumFilesFn_x00168278 get_num_files;
    CvFsLoadDirInfoFn_x00168278 load_dir_info;
    CvFsFdIntFn_x00168278 get_max_byte_rate;
    CvFsPathFn_x00168278 make_dir;
    CvFsPathFn_x00168278 remove_dir;
    CvFsPathFn_x00168278 delete_file;
    CvFsGetFileSizeExFn_x00168278 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00168278 opt_fn2;
} CvFsVtbl_x00168278;
extern CvFsVtbl_x00168278 *addDevice_x00168278(char *devname, CvFsVtbl_x00168278 *(*get_if)(void)) __asm__("addDevice");
int close_x00168278(int fd) __asm__("close");
typedef struct SrdObj_x00168278 SrdObj_x00168278;
typedef struct HtCiFile_x00168278 {
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
    SrdObj_x00168278 *stm;
} HtCiFile_x00168278;
extern HtCiFile_x00168278 htci_files_x00168278[13] __asm__("D_00413960");
HtCiFile_x00168278 *func_00168278_x00168278(void) __asm__("func_00168278");
/* htci_alloc: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
HtCiFile_x00168278 *func_00168278_x00168278(void)
{
    HtCiFile_x00168278 *found = 0;
    int i;
    for (i = 0; i < 13; i++) {
        if (htci_files_x00168278[i].used == 0) {
            found = &htci_files_x00168278[i];
        }
    }
    return found;
}
s32 memset_x001682B0() __asm__("memset");
void func_001682B0_x001682B0(s32 arg0) __asm__("func_001682B0");
void func_001682B0_x001682B0(s32 arg0) {
    memset_x001682B0(arg0, 0, 0x30);
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiOpen);
void func_00168458(u8 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        if ((u8) *(u8 *)((u8 *)arg0 + 2) >= 2U) {
            func_00168768();
        }
        if (*(s8 *)((u8 *)arg0 + 1) == 0) {
            func_00164D38(0x5000);
            temp_s0 = func_001650B0(*(s32 *)((u8 *)arg0 + 0x18));
            func_00164D38(0x5001);
            if ((temp_s0 < 0) && (D_00413D14 == 0)) {
                scePrintf(&D_00463AF8);
            }
        }
        *(s8 *)((u8 *)arg0 + 0) = 0;
        func_001682B0(arg0);
    }
}
typedef void (*CvFsErrFn_x00168508)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00168508)(CvFsErrFn_x00168508 func, void *obj);
typedef int (*CvFsPathFn_x00168508)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00168508)(void);
typedef int (*CvFsOpenFn_x00168508)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00168508)(int fd);
typedef int (*CvFsFdIntFn_x00168508)(int fd);
typedef int (*CvFsSeekFn_x00168508)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00168508)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00168508)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00168508)(void);
typedef int (*CvFsLoadDirInfoFn_x00168508)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00168508)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00168508)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00168508 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00168508 entry_err_func;
    CvFsPathFn_x00168508 get_file_size;
    CvFsGetFreeSizeFn_x00168508 get_free_size;
    CvFsOpenFn_x00168508 open;
    CvFsFdFn_x00168508 close_x00168508;
    CvFsSeekFn_x00168508 seek;
    CvFsFdIntFn_x00168508 tell;
    CvFsXferFn_x00168508 req_rd;
    CvFsXferFn_x00168508 req_wr;
    CvFsFdFn_x00168508 stop_tr;
    CvFsFdIntFn_x00168508 get_stat;
    CvFsFdIntFn_x00168508 get_sct_len;
    CvFsSetSctLenFn_x00168508 set_sct_len;
    CvFsFdIntFn_x00168508 get_num_tr;
    CvFsPathFn_x00168508 change_dir;
    CvFsPathFn_x00168508 is_exist_file;
    CvFsGetNumFilesFn_x00168508 get_num_files;
    CvFsLoadDirInfoFn_x00168508 load_dir_info;
    CvFsFdIntFn_x00168508 get_max_byte_rate;
    CvFsPathFn_x00168508 make_dir;
    CvFsPathFn_x00168508 remove_dir;
    CvFsPathFn_x00168508 delete_file;
    CvFsGetFileSizeExFn_x00168508 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00168508 opt_fn2;
} CvFsVtbl_x00168508;
extern CvFsVtbl_x00168508 *addDevice_x00168508(char *devname, CvFsVtbl_x00168508 *(*get_if)(void)) __asm__("addDevice");
int close_x00168508(int fd) __asm__("close");
typedef struct SrdObj_x00168508 SrdObj_x00168508;
typedef struct HtCiFile_x00168508 {
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
    SrdObj_x00168508 *stm;
} HtCiFile_x00168508;
extern void htCiEntryErrFunc_x00168508(void (*callback)(void *context, const char *message, void *detail), void *context) __asm__("htCiEntryErrFunc");
extern void (*htci_err_func_x00168508)(void *context, const char *message, void *detail) __asm__("htci_err_func");
void htci_call_errfn_x00168508(void *detail, const char *message) __asm__("func_00167C90");
void htCiEntryErrFunc_x00168508(void (*callback)(void *context, const char *message, void *detail), void *context) __asm__("htCiEntryErrFunc");
extern char ext_str0_x00168508[] __asm__("D_00463B10");
int func_00168508_x00168508(HtCiFile_x00168508 *h, int offset, int origin) __asm__("func_00168508");
/* htCiSeek: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00168508_x00168508(HtCiFile_x00168508 *h, int offset, int origin)
{
    int position;
    if (h == 0) {
        htci_call_errfn_x00168508(h, ext_str0_x00168508);
        return 0;
    }
    if (origin == 0) {
        h->pos = offset;
    } else if (origin == 2) {
        h->pos = h->nsct + offset;
    } else if (origin == 1) {
        h->pos += offset;
    }
    position = h->pos;
    h->done = 0;
    if (position >= h->nsct) {
        position = h->nsct;
    }
    if (position < 0) {
        position = 0;
    }
    h->pos = position;
    return position;
}
s32 func_00167C90_x001685A0() __asm__("func_00167C90");
extern s32 D_00463B10_x001685A0 __asm__("D_00463B10");
s32 func_001685A0_x001685A0(u8 *arg0) __asm__("func_001685A0");
s32 func_001685A0_x001685A0(u8 *arg0) {
    if (arg0 == NULL) {
        func_00167C90_x001685A0(arg0, &D_00463B10_x001685A0);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x1C);
}
typedef void (*CvFsErrFn_x001685D8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001685D8)(CvFsErrFn_x001685D8 func, void *obj);
typedef int (*CvFsPathFn_x001685D8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001685D8)(void);
typedef int (*CvFsOpenFn_x001685D8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001685D8)(int fd);
typedef int (*CvFsFdIntFn_x001685D8)(int fd);
typedef int (*CvFsSeekFn_x001685D8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001685D8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001685D8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001685D8)(void);
typedef int (*CvFsLoadDirInfoFn_x001685D8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001685D8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001685D8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001685D8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001685D8 entry_err_func;
    CvFsPathFn_x001685D8 get_file_size;
    CvFsGetFreeSizeFn_x001685D8 get_free_size;
    CvFsOpenFn_x001685D8 open;
    CvFsFdFn_x001685D8 close_x001685D8;
    CvFsSeekFn_x001685D8 seek;
    CvFsFdIntFn_x001685D8 tell;
    CvFsXferFn_x001685D8 req_rd;
    CvFsXferFn_x001685D8 req_wr;
    CvFsFdFn_x001685D8 stop_tr;
    CvFsFdIntFn_x001685D8 get_stat;
    CvFsFdIntFn_x001685D8 get_sct_len;
    CvFsSetSctLenFn_x001685D8 set_sct_len;
    CvFsFdIntFn_x001685D8 get_num_tr;
    CvFsPathFn_x001685D8 change_dir;
    CvFsPathFn_x001685D8 is_exist_file;
    CvFsGetNumFilesFn_x001685D8 get_num_files;
    CvFsLoadDirInfoFn_x001685D8 load_dir_info;
    CvFsFdIntFn_x001685D8 get_max_byte_rate;
    CvFsPathFn_x001685D8 make_dir;
    CvFsPathFn_x001685D8 remove_dir;
    CvFsPathFn_x001685D8 delete_file;
    CvFsGetFileSizeExFn_x001685D8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001685D8 opt_fn2;
} CvFsVtbl_x001685D8;
extern CvFsVtbl_x001685D8 *addDevice_x001685D8(char *devname, CvFsVtbl_x001685D8 *(*get_if)(void)) __asm__("addDevice");
int close_x001685D8(int fd) __asm__("close");
typedef struct SrdObj_x001685D8 SrdObj_x001685D8;
SrdObj_x001685D8 *SRD_Create_x001685D8(void) __asm__("func_00163E60");
void SRD_Destroy_x001685D8(SrdObj_x001685D8 *srd) __asm__("func_00163EE8");
int SRD_ReqRdHst_x001685D8(SrdObj_x001685D8 *srd, int fd, long long sector, long long size, void *buf) __asm__("func_00164078");
void SRD_ExecServer_x001685D8(void) __asm__("func_001648B0");
void SRD_WaitForExecServer_x001685D8(void) __asm__("func_001649C0");
typedef struct HtCiFile_x001685D8 {
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
    SrdObj_x001685D8 *stm;
} HtCiFile_x001685D8;
extern void htCiEntryErrFunc_x001685D8(void (*callback)(void *context, const char *message, void *detail), void *context) __asm__("htCiEntryErrFunc");
extern void (*htci_err_func_x001685D8)(void *context, const char *message, void *detail) __asm__("htci_err_func");
extern int htci_open_mode_x001685D8 __asm__("D_00413D10");
void htci_call_errfn_x001685D8(void *detail, const char *message) __asm__("func_00167C90");
int htci_is_exec_hn_x001685D8(void) __asm__("func_00167CC0");
void htci_zero_padding_x001685D8(HtCiFile_x001685D8 *h, int nsct) __asm__("func_00167D78");
void htCiEntryErrFunc_x001685D8(void (*callback)(void *context, const char *message, void *detail), void *context) __asm__("htCiEntryErrFunc");
extern char ext_str0_x001685D8[] __asm__("D_00463B48");
extern char ext_str1_x001685D8[] __asm__("D_00463B28");
extern char ext_str2_x001685D8[] __asm__("D_00463B10");
int htCiReqRd_x001685D8(HtCiFile_x001685D8 *h, int nsct, char *buf) __asm__("htCiReqRd");
/* htCiReqRd_x001685D8: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int htCiReqRd_x001685D8(HtCiFile_x001685D8 *h, int nsct, char *buf)
{
    unsigned long nbyte;
    if (h == 0) {
        htci_call_errfn_x001685D8(h, ext_str2_x001685D8);
        return 0;
    }
    if (nsct < 0) {
        htci_call_errfn_x001685D8(h, ext_str1_x001685D8);
        return 0;
    }
    if (buf == 0) {
        htci_call_errfn_x001685D8(h, ext_str0_x001685D8);
        return 0;
    }
    if (htci_is_exec_hn_x001685D8() == 1) {
        return 0;
    }
    if (h->state == 2) {
        return 0;
    }
    if (nsct == 0) {
        h->state = 1;
        return 0;
    }
    h->stm = SRD_Create_x001685D8();
    if (h->stm == 0) {
        return 0;
    }
    h->buf = buf;
    h->req = (nsct < h->nsct - h->pos) ? nsct : h->nsct - h->pos;
    nbyte = nsct << 11;
    if (h->size < nbyte) {
        nbyte = h->size;
    }
    htci_zero_padding_x001685D8(h, h->req);
    if (SRD_ReqRdHst_x001685D8(h->stm, h->fd, h->pos, nbyte, buf) == 0) {
        return 0;
    }
    if (htci_open_mode_x001685D8 == 1) {
        SRD_WaitForExecServer_x001685D8();
        SRD_ExecServer_x001685D8();
        h->pos += h->req;
        SRD_Destroy_x001685D8(h->stm);
        h->stm = 0;
        h->state = 1;
        h->done = h->req;
    } else {
        h->state = 2;
        h->done = 0;
    }
    h->end_fg = 0;
    return h->req;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168768);
s32 func_00167C90_x00168870() __asm__("func_00167C90");
extern s32 D_00463B10_x00168870 __asm__("D_00463B10");
s8 func_00168870_x00168870(u8 *arg0) __asm__("func_00168870");
s8 func_00168870_x00168870(u8 *arg0) {
    if (arg0 == NULL) {
        func_00167C90_x00168870(arg0, &D_00463B10_x00168870);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 2);
}
s32 func_001688A8(void) {
    return 0x800;
}
extern char D_003CAC00_x001688B0[] __asm__("D_00463B10");
typedef unsigned char u_char_x001688B0;
typedef unsigned int u_int_x001688B0;
typedef char Sint8_x001688B0;
typedef signed int Sint32_x001688B0;
typedef char Char8_x001688B0;
typedef struct {
    u_char_x001688B0 trycount;
    u_char_x001688B0 spindlctrl;
    u_char_x001688B0 datapattern;
    u_char_x001688B0 pad;
} sceCdRMode_x001688B0;
typedef struct {
    u_int_x001688B0 lsn;
    u_int_x001688B0 size;
    char name[16];
    u_char_x001688B0 date[8];
    u_int_x001688B0 flag;
} sceCdlFILE_x001688B0;
extern int* sceCdCallback_x001688B0(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x001688B0;
typedef struct {
               Sint8_x001688B0 used;
               Sint8_x001688B0 unk1;
               Sint8_x001688B0 stat;
               Sint8_x001688B0 unk3;
               Sint32_x001688B0 unk4;
               Sint32_x001688B0 unk8;
               Sint32_x001688B0 unkC;
               Sint32_x001688B0 unk10;
               Sint32_x001688B0 unk14;
               void* unk18;
               SRD_x001688B0 srd;
               sceCdlFILE_x001688B0 unk20;
               sceCdRMode_x001688B0 cdrmode;
} DVG_CI_OBJ_x001688B0;
typedef DVG_CI_OBJ_x001688B0* DVG_CI_x001688B0;
extern Sint32_x001688B0 SVM_SetCbSvr_x001688B0(Sint32_x001688B0, Sint32_x001688B0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001688B0(Sint32_x001688B0, Sint32_x001688B0, Sint32_x001688B0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void D_001705C0_x001688B0(void (*func)(void*, const Char8_x001688B0*, void*), void* obj) __asm__("D_001705C0");
void func_00170400_x001688B0(void* obj, const Char8_x001688B0* msg) __asm__("func_00167C90");
extern void D_001705C0_x001688B0(void (*func)(void*, const Char8_x001688B0*, void*), void* obj) __asm__("D_001705C0");
Sint32_x001688B0 func_001688B0_x001688B0(DVG_CI_x001688B0 handl) __asm__("func_001688B0");
/* func_00170FB0: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/dvci/func_00170FB0.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
Sint32_x001688B0 func_001688B0_x001688B0(DVG_CI_x001688B0 handl) {
    if (handl == 0) {
        func_00170400_x001688B0(handl, D_003CAC00_x001688B0);
        return 0;
    }
    if (handl->stat == 1) {
        return *(Sint32_x001688B0 *)((Char8_x001688B0 *)handl + 0x28) << 11;
    }
    return 0;
}
void func_00168900(void) {
    htCiGetFileSize();
}
s64 func_00168918_x00168918(u8 *arg0) __asm__("func_00168918");
s64 func_00168918_x00168918(u8 *arg0)
{
  u64 temp_a1;
  u64 *new_var;
  u64 temp_v0;
  new_var = (u64 *) (((u8 *) arg0) - -8);
  ;
  temp_v0 = ((s64) (*((s32 *) (((u8 *) arg0) + 0x28)))) << 0xB;
  return ((s64) (((*new_var) < temp_v0) ? (*new_var) : (temp_v0))) >> 0x20;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168938);
s64 func_00168900_x00168968() __asm__("func_00168900");
s64 func_00168968_x00168968(void) __asm__("func_00168968");
s64 func_00168968_x00168968(void) {
    return func_00168900_x00168968() >> 0x20;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168988);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001689B8);
typedef unsigned int size_t_x00168A80;
typedef signed int Sint32_x00168A80;
typedef char Char8_x00168A80;
extern int* sceCdCallback_x00168A80(void (*func)(int)) __asm__("sceCdCallback");
size_t_x00168A80 strlen_x00168A80(const char* s) __asm__("func_00127BA0");
Sint32_x00168A80 func_00168A80_x00168A80(const Char8_x00168A80* str) __asm__("func_00168A80");
/* htci_is_inc_colon: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/htci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00168A80 func_00168A80_x00168A80(const Char8_x00168A80* str) {
    size_t_x00168A80 len;
    Sint32_x00168A80 i;
    len = strlen_x00168A80(str);
    if (len > 16) {
        len = 16;
    }
    for (i = 0; i < len; i++) {
        if (str[i] == ':') {
            return 1;
        }
    }
    return 0;
}
void *memset_x00168AF0(void *s, int c, unsigned int n) __asm__("memset");
int strcmp_x00168AF0(const char *s1, const char *s2) __asm__("func_00127940");
extern char ext_str0_x00168AF0[] __asm__("D_00463BA8");
int func_00168AF0_x00168AF0(const char *path) __asm__("func_00168AF0");
/* htci_is_host_path: from https://github.com/new-coke/rez-decomp (src/cri/htci_filelist.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00168AF0_x00168AF0(const char *path)
{
    char head[6];
    memset_x00168AF0(head, 0, 6);
    __builtin_memcpy(head, path, 4);
    head[5] = 0;
    return strcmp_x00168AF0(head, ext_str0_x00168AF0) == 0;
}
typedef unsigned int size_t_x00168B48;
typedef int s32_x00168B48;
typedef s32_x00168B48 strlen_t_x00168B48;
typedef signed int Sint32_x00168B48;
typedef char Char8_x00168B48;
extern int* sceCdCallback_x00168B48(void (*func)(int)) __asm__("sceCdCallback");
size_t_x00168B48 strlen_x00168B48(const char* s) __asm__("func_00127BA0");
char* strcpy_x00168B48(char* dest, const char* src) __asm__("func_00127A88");
char* strcat_x00168B48(char* dest, const char* src) __asm__("func_00127810");
extern Char8_x00168B48 htg_ci_root_dir_x00168B48[257] __asm__("D_00413D18");
extern Char8_x00168B48 htg_ci_head_name_x00168B48[33] __asm__("D_00413E20");
Sint32_x00168B48 htci_is_inc_colon_x00168B48(const Char8_x00168B48* str) __asm__("func_00168A80");
Sint32_x00168B48 htci_is_bgn_host_x00168B48(const Char8_x00168B48* str) __asm__("func_00168AF0");
extern Char8_x00168B48 D_0055D760_x00168B48[] __asm__("D_00463BB0");
Sint32_x00168B48 htci_is_inc_colon_x00168B48(const Char8_x00168B48* str) __attribute__((weak, section(".b3stub")));
Sint32_x00168B48 htci_is_inc_colon_x00168B48(const Char8_x00168B48* str) {}
Sint32_x00168B48 htci_is_bgn_host_x00168B48(const Char8_x00168B48* str) __attribute__((weak, section(".b3stub")));
Sint32_x00168B48 htci_is_bgn_host_x00168B48(const Char8_x00168B48* str) {}
void func_00168B48_x00168B48(const Char8_x00168B48* flist, Char8_x00168B48* fname) __asm__("func_00168B48");
/* htci_conv_fname: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/htci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00168B48_x00168B48(const Char8_x00168B48* flist, Char8_x00168B48* fname) {
    strlen_t_x00168B48 len;
    Sint32_x00168B48 i;
    Char8_x00168B48 root_dir_last_char;
    fname[0] = '\0';
    if (htci_is_inc_colon_x00168B48(flist) == 0) {
        strcpy_x00168B48(fname, htg_ci_head_name_x00168B48);
    }
    if (htci_is_bgn_host_x00168B48(fname) == 1) {
        strcat_x00168B48(fname, htg_ci_root_dir_x00168B48);
        root_dir_last_char = htg_ci_root_dir_x00168B48[strlen_x00168B48(htg_ci_root_dir_x00168B48) - 1];
        if ((root_dir_last_char != '\\') && (root_dir_last_char != '/') && (root_dir_last_char != '\0') &&
            (flist[0] != '\\') && (flist[0] != '/')) {
            strcat_x00168B48(fname, D_0055D760_x00168B48);
        }
    }
    strcat_x00168B48(fname, flist);
    len = strlen_x00168B48(fname);
    for (i = 0; i < len; i++) {
        if (fname[i] == '\\') {
            fname[i] = '/';
        }
    }
}
s8 func_00168C60_x00168C60(s8 arg0) __asm__("func_00168C60");
s8 func_00168C60_x00168C60(s8 arg0) {
    return ((arg0 ^ 0x5C) != 0) ? arg0 : 0x2F;
}
s32 func_00168C60_x00168C78(s8) __asm__("func_00168C60");
s32 func_00168C78_x00168C78(s8 arg0, s8 arg1) __asm__("func_00168C78");
s32 func_00168C78_x00168C78(s8 arg0, s8 arg1) {
    s32 temp_s0;

    temp_s0 = func_00168C60_x00168C78(arg0);
    return ((temp_s0 ^ func_00168C60_x00168C78(arg1)) != 0) ? -1 : 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168CD0);
typedef void (*CvFsErrFn_x00168D68)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00168D68)(CvFsErrFn_x00168D68 func, void *obj);
typedef int (*CvFsPathFn_x00168D68)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00168D68)(void);
typedef int (*CvFsOpenFn_x00168D68)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00168D68)(int fd);
typedef int (*CvFsFdIntFn_x00168D68)(int fd);
typedef int (*CvFsSeekFn_x00168D68)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00168D68)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00168D68)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00168D68)(void);
typedef int (*CvFsLoadDirInfoFn_x00168D68)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00168D68)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00168D68)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00168D68 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00168D68 entry_err_func;
    CvFsPathFn_x00168D68 get_file_size;
    CvFsGetFreeSizeFn_x00168D68 get_free_size;
    CvFsOpenFn_x00168D68 open;
    CvFsFdFn_x00168D68 close_x00168D68;
    CvFsSeekFn_x00168D68 seek;
    CvFsFdIntFn_x00168D68 tell;
    CvFsXferFn_x00168D68 req_rd;
    CvFsXferFn_x00168D68 req_wr;
    CvFsFdFn_x00168D68 stop_tr;
    CvFsFdIntFn_x00168D68 get_stat;
    CvFsFdIntFn_x00168D68 get_sct_len;
    CvFsSetSctLenFn_x00168D68 set_sct_len;
    CvFsFdIntFn_x00168D68 get_num_tr;
    CvFsPathFn_x00168D68 change_dir;
    CvFsPathFn_x00168D68 is_exist_file;
    CvFsGetNumFilesFn_x00168D68 get_num_files;
    CvFsLoadDirInfoFn_x00168D68 load_dir_info;
    CvFsFdIntFn_x00168D68 get_max_byte_rate;
    CvFsPathFn_x00168D68 make_dir;
    CvFsPathFn_x00168D68 remove_dir;
    CvFsPathFn_x00168D68 delete_file;
    CvFsGetFileSizeExFn_x00168D68 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00168D68 opt_fn2;
} CvFsVtbl_x00168D68;
extern CvFsVtbl_x00168D68 *addDevice_x00168D68(char *devname, CvFsVtbl_x00168D68 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x00168D68;
void *memcpy_x00168D68(void *, const void *, size_t_x00168D68) __asm__("func_00125740");
int close_x00168D68(int fd) __asm__("close");
typedef struct HtCiFileLoc_x00168D68 {
    int fd;
    int size;
} HtCiFileLoc_x00168D68;
typedef struct HtCiTable_x00168D68 {
    int files;
    unsigned int nfiles;
    int nent;
    int namelen;
} HtCiTable_x00168D68;
extern HtCiTable_x00168D68 htci_dir_table_x00168D68 __asm__("D_00413D00");
int func_00168D68_x00168D68(char *buf, char *list, int n, int nameLen) __asm__("func_00168D68");
/* htci_analysis_flist: from https://github.com/crashbashash/DW4_Decomp (src/cri/htci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00168D68_x00168D68(char *buf, char *list, int n, int nameLen)
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
        if (list[i] == '\\') {
            list[i] = '/';
        }
        if (list[i] == '\n' || list[i] == '\r' || list[i] == 0) {
            if (list[i + 1] == '\n' || list[i + 1] == '\r' || list[i + 1] == 0) {
                i++;
            }
            len = i - start;
            if (list[i - 1] == '\n' || list[i - 1] == '\r') {
                list[i - 1] = 0;
            }
            dst = buf + (n * sizeof(HtCiFileLoc_x00168D68) + count * (nameLen + 1));
            memcpy_x00168D68(dst, list + start, len);
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
    }
    if (htci_dir_table_x00168D68.files == 0) {
        htci_dir_table_x00168D68.files = (int)buf;
        htci_dir_table_x00168D68.nfiles = count;
        htci_dir_table_x00168D68.nent = n;
        htci_dir_table_x00168D68.namelen = nameLen;
    }
    return count;
}
typedef unsigned int size_t_x00168F08;
typedef char Sint8_x00168F08;
typedef signed int Sint32_x00168F08;
typedef signed long Sint64_x00168F08;
typedef char Char8_x00168F08;
extern int* sceCdCallback_x00168F08(void (*func)(int)) __asm__("sceCdCallback");
void SRD_SetHistory_x00168F08(Sint32_x00168F08 arg0) __asm__("func_00164D38");
Sint32_x00168F08 SRD_SceOpen_x00168F08(const Char8_x00168F08* filename, Sint32_x00168F08 flag) __asm__("func_00165048");
Sint32_x00168F08 SRD_SceClose_x00168F08(Sint32_x00168F08 fd) __asm__("func_001650B0");
Sint64_x00168F08 SRD_SceLseek_x00168F08(Sint32_x00168F08 fd, Sint64_x00168F08 offset, Sint32_x00168F08 whence) __asm__("func_00164F18");
Sint32_x00168F08 SRD_SceRead_x00168F08(Sint32_x00168F08 fd, void* buf, Sint32_x00168F08 nbyte) __asm__("func_00165108");
void* memset_x00168F08(void* s, int c, size_t_x00168F08 n) __asm__("memset");
void htci_conv_fname_x00168F08(const Char8_x00168F08* flist, Char8_x00168F08* fname) __asm__("func_00168B48");
Sint32_x00168F08 func_00168F08_x00168F08(const Char8_x00168F08* flist, Sint8_x00168F08* buf) __asm__("func_00168F08");
/* htci_load_flist: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/htci_sub.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00168F08 func_00168F08_x00168F08(const Char8_x00168F08* flist, Sint8_x00168F08* buf) {
    Char8_x00168F08 fname[256];
    Sint32_x00168F08 fd;
    Sint32_x00168F08 read_err;
    Sint32_x00168F08 offset_start;
    Sint64_x00168F08 offset_end;
    memset_x00168F08(fname, 0, sizeof(fname));
    htci_conv_fname_x00168F08(flist, fname);
    SRD_SetHistory_x00168F08(0x6000);
    fd = SRD_SceOpen_x00168F08(fname, 0x0001);
    SRD_SetHistory_x00168F08(0x6001);
    if (fd < 0) {
        return 0;
    }
    SRD_SetHistory_x00168F08(0x6100);
    offset_end = SRD_SceLseek_x00168F08(fd, 0, (2));
    SRD_SetHistory_x00168F08(0x6101);
    if (offset_end < 0) {
        return 0;
    }
    SRD_SetHistory_x00168F08(0x6200);
    offset_start = (Sint32_x00168F08)SRD_SceLseek_x00168F08(fd, 0, (0));
    SRD_SetHistory_x00168F08(0x6201);
    if (offset_start < 0) {
        return 0;
    }
    if (offset_end > 0x1000) {
        offset_end = 0x1000;
    }
    SRD_SetHistory_x00168F08(0x6300);
    read_err = SRD_SceRead_x00168F08(fd, buf, (Sint32_x00168F08)offset_end);
    SRD_SetHistory_x00168F08(0x6301);
    if (read_err < 0) {
        SRD_SetHistory_x00168F08(0x6500);
        SRD_SceClose_x00168F08(fd);
        SRD_SetHistory_x00168F08(0x6501);
        return 0;
    }
    SRD_SetHistory_x00168F08(0x6400);
    SRD_SceClose_x00168F08(fd);
    SRD_SetHistory_x00168F08(0x6401);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169068);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169258);
s32 func_00168CD0_x001693C0(s32, s32) __asm__("func_00168CD0");
extern s32 D_00413D00_x001693C0 __asm__("D_00413D00");
void func_001693C0_x001693C0(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3) __asm__("func_001693C0");
void func_001693C0_x001693C0(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3)
{
  s32 temp_v0;
  u8 *new_var2;
  s32 var_s0;
  u8 *var_s1;
  u8 *new_var;
  var_s0 = 0;
  if (arg3 > 0)
  {
    var_s1 = arg2;
    new_var = (u8 *) (&D_00413D00_x001693C0);
    loop_2:
    temp_v0 = ((*((s32 *) (new_var + 0xC))) * var_s0) + var_s0;

    var_s0 += 1;
    if (func_00168CD0_x001693C0(arg1, arg2 + (((*((s32 *) (new_var + 8))) * 8) + temp_v0)) == 0)
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
  *((s32 *) (new_var2 = ((u8 *) arg0) + 4)) = 0;

 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; } while (0);
}
void func_00169488(void) {
    memset(&D_00413D00, 0, 0x10);
}
void func_001694B0(s32 arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = 0;
    *(s32 *)((u8 *)arg1 + 4) = 0;
    if (*(s32 *)((u8 *)(&D_00413D00) + 0) != 0) {
        func_001693C0(arg1, arg0, *(s32 *)((u8 *)(&D_00413D00) + 0), *(s32 *)((u8 *)(&D_00413D00) + 4));
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiLoadDirInfo);
typedef struct {
    int fd;
    int size;
} HtciFile_x00169688;
void htci_cache_lookup_x00169688(const char *fname, HtciFile_x00169688 *file) __asm__("func_001694B0");
void htci_cache_lookup_x00169688(const char *fname, HtciFile_x00169688 *file) __asm__("func_001694B0");
int func_00169688_x00169688(const char *fname) __asm__("func_00169688");
/* htci_is_cached: from https://github.com/new-coke/rez-decomp (src/cri/htci_filelist.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00169688_x00169688(const char *fname)
{
    HtciFile_x00169688 file;
    htci_cache_lookup_x00169688(fname, &file);
    return file.size != 0;
}
void func_001696B0(s32 arg0) {
    if (arg0 != 0) {
        if (arg0 == 1) {
            D_00413D10 = arg0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        D_00413D10 = 0x8001;
        return;
    }
    D_00413D10 = 0x8001;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001696E0);
s32 *func_00169760(void) {
    return &D_00413D18;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169770);
s32 *func_001697D8(void) {
    return &D_00413E20;
}
s32 func_001697E8(void) {
    return D_00413D10;
}
void func_001697F8(s32 arg0) {
    D_00413D14 = arg0;
}
s32 func_00169808(void) {
    return D_00413D14;
}
s8 *func_00169818(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (D_00413F80 == 0) {
        var_a3 = &D_00413F80;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x20) {
            temp_v0 = (var_a1 * 0x238) + &D_00413F80;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
