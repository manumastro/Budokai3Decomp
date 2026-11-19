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

typedef int (*CvFsFn_x00162A70)();
typedef struct {
    CvFsFn_x00162A70 exec_server;
    CvFsFn_x00162A70 entry_err_func;
    CvFsFn_x00162A70 get_file_size;
    CvFsFn_x00162A70 get_free_size;
    CvFsFn_x00162A70 open;
    CvFsFn_x00162A70 close;
    CvFsFn_x00162A70 seek;
    CvFsFn_x00162A70 tell;
    CvFsFn_x00162A70 req_rd;
    CvFsFn_x00162A70 req_wr;
    CvFsFn_x00162A70 stop_tr;
    CvFsFn_x00162A70 get_stat;
    CvFsFn_x00162A70 get_sct_len;
    CvFsFn_x00162A70 set_sct_len;
    CvFsFn_x00162A70 get_num_tr;
    CvFsFn_x00162A70 change_dir;
    CvFsFn_x00162A70 is_exist_file;
    CvFsFn_x00162A70 get_num_files;
    CvFsFn_x00162A70 load_dir_info;
    CvFsFn_x00162A70 get_max_byte_rate;
    CvFsFn_x00162A70 make_dir;
    CvFsFn_x00162A70 remove_dir;
    CvFsFn_x00162A70 delete_file;
    CvFsFn_x00162A70 get_file_size_ex;
    CvFsFn_x00162A70 opt_fn1;
    CvFsFn_x00162A70 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162A70;
typedef struct {
    CvFsDevIf_x00162A70 *dev;
    void *fd;
} CvFsHn_x00162A70;
void cvfs_error_x00162A70(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00162A70(char *name, CvFsDevIf_x00162A70 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00162A70 *cvfs_add_device_x00162A70(char *name, CvFsDevIf_x00162A70 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00162A70(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00162A70(char *name, CvFsDevIf_x00162A70 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00162A70 *cvfs_add_device_x00162A70(char *name, CvFsDevIf_x00162A70 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00162A70[] __asm__("D_004624F0");
extern char ext_str1_x00162A70[] __asm__("D_004624D0");
int func_00162A70_x00162A70(CvFsHn_x00162A70 *hn) __asm__("func_00162A70");
/* cvFsGetStat: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00162A70_x00162A70(CvFsHn_x00162A70 *hn)
{
    int ret = 3;
    if (hn == 0) {
        cvfs_error_x00162A70(ext_str1_x00162A70);
        return 3;
    }
    if (hn->dev->get_stat)
        ret = hn->dev->get_stat(hn->fd);
    else
        cvfs_error_x00162A70(ext_str0_x00162A70);
    return ret;
}
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
typedef int (*CvFsFn_x00162E08)();
typedef struct {
    CvFsFn_x00162E08 exec_server;
    CvFsFn_x00162E08 entry_err_func;
    CvFsFn_x00162E08 get_file_size;
    CvFsFn_x00162E08 get_free_size;
    CvFsFn_x00162E08 open;
    CvFsFn_x00162E08 close;
    CvFsFn_x00162E08 seek;
    CvFsFn_x00162E08 tell;
    CvFsFn_x00162E08 req_rd;
    CvFsFn_x00162E08 req_wr;
    CvFsFn_x00162E08 stop_tr;
    CvFsFn_x00162E08 get_stat;
    CvFsFn_x00162E08 get_sct_len;
    CvFsFn_x00162E08 set_sct_len;
    CvFsFn_x00162E08 get_num_tr;
    CvFsFn_x00162E08 change_dir;
    CvFsFn_x00162E08 is_exist_file;
    CvFsFn_x00162E08 get_num_files;
    CvFsFn_x00162E08 load_dir_info;
    CvFsFn_x00162E08 get_max_byte_rate;
    CvFsFn_x00162E08 make_dir;
    CvFsFn_x00162E08 remove_dir;
    CvFsFn_x00162E08 delete_file;
    CvFsFn_x00162E08 get_file_size_ex;
    CvFsFn_x00162E08 opt_fn1;
    CvFsFn_x00162E08 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162E08;
typedef struct {
    CvFsDevIf_x00162E08 *dev;
    void *fd;
} CvFsHn_x00162E08;
void cvfs_error_x00162E08(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00162E08(char *name, CvFsDevIf_x00162E08 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00162E08 *cvfs_add_device_x00162E08(char *name, CvFsDevIf_x00162E08 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00162E08(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00162E08(char *name, CvFsDevIf_x00162E08 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00162E08 *cvfs_add_device_x00162E08(char *name, CvFsDevIf_x00162E08 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00162E08[] __asm__("D_004626E0");
extern char ext_str1_x00162E08[] __asm__("D_004626C0");
int func_00162E08_x00162E08(CvFsHn_x00162E08 *hn) __asm__("func_00162E08");
/* cvFsGetSctLen: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00162E08_x00162E08(CvFsHn_x00162E08 *hn)
{
    int ret = 0;
    if (hn == 0) {
        cvfs_error_x00162E08(ext_str1_x00162E08);
        return 0;
    }
    if (hn->dev->get_sct_len)
        ret = hn->dev->get_sct_len(hn->fd);
    else
        cvfs_error_x00162E08(ext_str0_x00162E08);
    return ret;
}
s32 func_00161D20_x00162E70(s32 *) __asm__("func_00161D20");
extern s32 D_00462700_x00162E70 __asm__("D_00462700");
extern s32 D_00462720_x00162E70 __asm__("D_00462720");
void func_00162E70_x00162E70(u8 *arg0) __asm__("func_00162E70");
void func_00162E70_x00162E70(u8 *arg0) {
    s32 (*temp_v0)(s32);

    if (arg0 != NULL) {
        goto block_3;
    }
    func_00161D20_x00162E70(&D_00462700_x00162E70);
    return;
block_3:
    temp_v0 = *(s32 (**)(s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x34);
    if (temp_v0 != NULL) {
        goto block_5;
    }
    goto block_8;
block_5:
    temp_v0(*(s32 *)((u8 *)arg0 + 4));
    return;
block_8:
    func_00161D20_x00162E70(&D_00462720_x00162E70);
    return;
}
typedef int (*CvFsFn_x00162EC8)();
typedef struct {
    CvFsFn_x00162EC8 exec_server;
    CvFsFn_x00162EC8 entry_err_func;
    CvFsFn_x00162EC8 get_file_size;
    CvFsFn_x00162EC8 get_free_size;
    CvFsFn_x00162EC8 open;
    CvFsFn_x00162EC8 close;
    CvFsFn_x00162EC8 seek;
    CvFsFn_x00162EC8 tell;
    CvFsFn_x00162EC8 req_rd;
    CvFsFn_x00162EC8 req_wr;
    CvFsFn_x00162EC8 stop_tr;
    CvFsFn_x00162EC8 get_stat;
    CvFsFn_x00162EC8 get_sct_len;
    CvFsFn_x00162EC8 set_sct_len;
    CvFsFn_x00162EC8 get_num_tr;
    CvFsFn_x00162EC8 change_dir;
    CvFsFn_x00162EC8 is_exist_file;
    CvFsFn_x00162EC8 get_num_files;
    CvFsFn_x00162EC8 load_dir_info;
    CvFsFn_x00162EC8 get_max_byte_rate;
    CvFsFn_x00162EC8 make_dir;
    CvFsFn_x00162EC8 remove_dir;
    CvFsFn_x00162EC8 delete_file;
    CvFsFn_x00162EC8 get_file_size_ex;
    CvFsFn_x00162EC8 opt_fn1;
    CvFsFn_x00162EC8 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162EC8;
typedef struct {
    CvFsDevIf_x00162EC8 *dev;
    void *fd;
} CvFsHn_x00162EC8;
void cvfs_error_x00162EC8(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00162EC8(char *name, CvFsDevIf_x00162EC8 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00162EC8 *cvfs_add_device_x00162EC8(char *name, CvFsDevIf_x00162EC8 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00162EC8(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00162EC8(char *name, CvFsDevIf_x00162EC8 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00162EC8 *cvfs_add_device_x00162EC8(char *name, CvFsDevIf_x00162EC8 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00162EC8[] __asm__("D_00462760");
extern char ext_str1_x00162EC8[] __asm__("D_00462740");
int func_00162EC8_x00162EC8(CvFsHn_x00162EC8 *hn) __asm__("func_00162EC8");
/* cvFsGetNumTr: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00162EC8_x00162EC8(CvFsHn_x00162EC8 *hn)
{
    int ret = 0;
    if (hn == 0) {
        cvfs_error_x00162EC8(ext_str1_x00162EC8);
        return 0;
    }
    if (hn->dev->get_num_tr)
        ret = hn->dev->get_num_tr(hn->fd);
    else
        cvfs_error_x00162EC8(ext_str0_x00162EC8);
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00162F30);
typedef void (*CvFsErrFn_x00162FF0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00162FF0)(CvFsErrFn_x00162FF0 func, void *obj);
typedef int (*CvFsPathFn_x00162FF0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00162FF0)(void);
typedef int (*CvFsOpenFn_x00162FF0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00162FF0)(int fd);
typedef int (*CvFsFdIntFn_x00162FF0)(int fd);
typedef int (*CvFsSeekFn_x00162FF0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00162FF0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00162FF0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00162FF0)(void);
typedef int (*CvFsLoadDirInfoFn_x00162FF0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00162FF0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00162FF0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00162FF0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00162FF0 entry_err_func;
    CvFsPathFn_x00162FF0 get_file_size;
    CvFsGetFreeSizeFn_x00162FF0 get_free_size;
    CvFsOpenFn_x00162FF0 open;
    CvFsFdFn_x00162FF0 close;
    CvFsSeekFn_x00162FF0 seek;
    CvFsFdIntFn_x00162FF0 tell;
    CvFsXferFn_x00162FF0 req_rd;
    CvFsXferFn_x00162FF0 req_wr;
    CvFsFdFn_x00162FF0 stop_tr;
    CvFsFdIntFn_x00162FF0 get_stat;
    CvFsFdIntFn_x00162FF0 get_sct_len;
    CvFsSetSctLenFn_x00162FF0 set_sct_len;
    CvFsFdIntFn_x00162FF0 get_num_tr;
    CvFsPathFn_x00162FF0 change_dir;
    CvFsPathFn_x00162FF0 is_exist_file;
    CvFsGetNumFilesFn_x00162FF0 get_num_files;
    CvFsLoadDirInfoFn_x00162FF0 load_dir_info;
    CvFsFdIntFn_x00162FF0 get_max_byte_rate;
    CvFsPathFn_x00162FF0 make_dir;
    CvFsPathFn_x00162FF0 remove_dir;
    CvFsPathFn_x00162FF0 delete_file;
    CvFsGetFileSizeExFn_x00162FF0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00162FF0 opt_fn2;
} CvFsVtbl_x00162FF0;
void cvFsError_x00162FF0(const char *msg) __asm__("func_00161D20");
extern CvFsVtbl_x00162FF0 *addDevice_x00162FF0(char *devname, CvFsVtbl_x00162FF0 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00162FF0 *variousProc_x00162FF0(char *devname, char *fname, const char *path) __asm__("func_001623A8");
void getDevName_x00162FF0(char *devname, char *fname, const char *path) __asm__("func_001625F0");
extern char cvFsIsExistFile_1_illegal_file_name_x00162FF0[] __asm__("D_00462818");
extern char cvFsIsExistFile_3_device_not_found_x00162FF0[] __asm__("D_00462868");
extern char cvFsIsExistFile_4_vtbl_error_x00162FF0[] __asm__("D_00462890");
void cvFsError_x00162FF0(const char *msg) __asm__("func_00161D20");
CvFsVtbl_x00162FF0 *addDevice_x00162FF0(char *devname, CvFsVtbl_x00162FF0 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00162FF0 *variousProc_x00162FF0(char *devname, char *fname, const char *path) __asm__("func_001623A8");
void getDevName_x00162FF0(char *devname, char *fname, const char *path) __asm__("func_001625F0");
int func_00162FF0_x00162FF0(const char *path) __asm__("func_00162FF0");
/* cvFsIsExistFile: from https://github.com/crashbashash/DW4_Decomp (src/cri/cvfs.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00162FF0_x00162FF0(const char *path)
{
    char devname[304];
    char fname[304];
    CvFsVtbl_x00162FF0 *vtbl;
    getDevName_x00162FF0(devname, fname, path);
    if (fname[0] == 0) {
        cvFsError_x00162FF0(cvFsIsExistFile_1_illegal_file_name_x00162FF0);
        return 0;
    }
    vtbl = variousProc_x00162FF0(devname, fname, path);
    if (vtbl == 0) {
        cvFsError_x00162FF0(cvFsIsExistFile_3_device_not_found_x00162FF0);
    }
    if (vtbl->is_exist_file != 0) {
        return vtbl->is_exist_file(fname);
    }
    cvFsError_x00162FF0(cvFsIsExistFile_4_vtbl_error_x00162FF0);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163098);
typedef int (*CvFsFn_x001631A8)();
typedef struct {
    CvFsFn_x001631A8 exec_server;
    CvFsFn_x001631A8 entry_err_func;
    CvFsFn_x001631A8 get_file_size;
    CvFsFn_x001631A8 get_free_size;
    CvFsFn_x001631A8 open;
    CvFsFn_x001631A8 close;
    CvFsFn_x001631A8 seek;
    CvFsFn_x001631A8 tell;
    CvFsFn_x001631A8 req_rd;
    CvFsFn_x001631A8 req_wr;
    CvFsFn_x001631A8 stop_tr;
    CvFsFn_x001631A8 get_stat;
    CvFsFn_x001631A8 get_sct_len;
    CvFsFn_x001631A8 set_sct_len;
    CvFsFn_x001631A8 get_num_tr;
    CvFsFn_x001631A8 change_dir;
    CvFsFn_x001631A8 is_exist_file;
    CvFsFn_x001631A8 get_num_files;
    CvFsFn_x001631A8 load_dir_info;
    CvFsFn_x001631A8 get_max_byte_rate;
    CvFsFn_x001631A8 make_dir;
    CvFsFn_x001631A8 remove_dir;
    CvFsFn_x001631A8 delete_file;
    CvFsFn_x001631A8 get_file_size_ex;
    CvFsFn_x001631A8 opt_fn1;
    CvFsFn_x001631A8 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x001631A8;
void cvfs_error_x001631A8(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x001631A8(char *name, CvFsDevIf_x001631A8 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x001631A8 *cvfs_add_device_x001631A8(char *name, CvFsDevIf_x001631A8 *(*getif)(void)) __asm__("cvfs_add_device");
CvFsDevIf_x001631A8 *cvfs_find_device_x001631A8(char *name) __asm__("func_00162080");
void cvfs_split_path_x001631A8(char *dev, char *fname, const char *path) __asm__("func_001625F0");
void cvfs_get_def_dev_x001631A8(char *dst) __asm__("func_00162738");
void cvfs_make_volume_path_x001631A8(char *dev, char *fname) __asm__("func_00163B08");
void cvfs_error_x001631A8(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x001631A8(char *name, CvFsDevIf_x001631A8 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x001631A8 *cvfs_add_device_x001631A8(char *name, CvFsDevIf_x001631A8 *(*getif)(void)) __asm__("cvfs_add_device");
CvFsDevIf_x001631A8 *cvfs_find_device_x001631A8(char *name) __asm__("func_00162080");
void cvfs_split_path_x001631A8(char *dev, char *fname, const char *path) __asm__("func_001625F0");
void cvfs_get_def_dev_x001631A8(char *dst) __asm__("func_00162738");
void cvfs_make_volume_path_x001631A8(char *dev, char *fname) __asm__("func_00163B08");
extern char ext_str0_x001631A8[] __asm__("D_00462840");
int func_001631A8_x001631A8(const char *path, int inf, int n) __asm__("func_001631A8");
/* cvFsLoadDirInfo: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001631A8_x001631A8(const char *path, int inf, int n)
{
    int ret;
    CvFsDevIf_x001631A8 *dev;
    char dname[297];
    char fname[297];
    cvfs_split_path_x001631A8(dname, fname, path);
    ret = 0;
    if (dname[0] == 0) {
        cvfs_get_def_dev_x001631A8(dname);
        if (dname[0] == 0) {
            cvfs_error_x001631A8(ext_str0_x001631A8);
            return 0;
        }
    }
    cvfs_make_volume_path_x001631A8(dname, fname);
    dev = cvfs_find_device_x001631A8(dname);
    if (dev && dev->load_dir_info)
        ret = dev->load_dir_info(path, inf, n);
    return ret;
}
typedef int (*CvFsFn_x00163280)();
typedef struct {
    CvFsFn_x00163280 exec_server;
    CvFsFn_x00163280 entry_err_func;
    CvFsFn_x00163280 get_file_size;
    CvFsFn_x00163280 get_free_size;
    CvFsFn_x00163280 open;
    CvFsFn_x00163280 close;
    CvFsFn_x00163280 seek;
    CvFsFn_x00163280 tell;
    CvFsFn_x00163280 req_rd;
    CvFsFn_x00163280 req_wr;
    CvFsFn_x00163280 stop_tr;
    CvFsFn_x00163280 get_stat;
    CvFsFn_x00163280 get_sct_len;
    CvFsFn_x00163280 set_sct_len;
    CvFsFn_x00163280 get_num_tr;
    CvFsFn_x00163280 change_dir;
    CvFsFn_x00163280 is_exist_file;
    CvFsFn_x00163280 get_num_files;
    CvFsFn_x00163280 load_dir_info;
    CvFsFn_x00163280 get_max_byte_rate;
    CvFsFn_x00163280 make_dir;
    CvFsFn_x00163280 remove_dir;
    CvFsFn_x00163280 delete_file;
    CvFsFn_x00163280 get_file_size_ex;
    CvFsFn_x00163280 opt_fn1;
    CvFsFn_x00163280 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00163280;
typedef struct {
    CvFsDevIf_x00163280 *dev;
    void *fd;
} CvFsHn_x00163280;
void cvfs_error_x00163280(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00163280(char *name, CvFsDevIf_x00163280 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00163280 *cvfs_add_device_x00163280(char *name, CvFsDevIf_x00163280 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00163280(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00163280(char *name, CvFsDevIf_x00163280 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00163280 *cvfs_add_device_x00163280(char *name, CvFsDevIf_x00163280 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00163280[] __asm__("D_004628D8");
extern char ext_str1_x00163280[] __asm__("D_004628B0");
int func_00163280_x00163280(CvFsHn_x00163280 *hn) __asm__("func_00163280");
/* cvFsGetMaxByteRate: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00163280_x00163280(CvFsHn_x00163280 *hn)
{
    int ret;
    if (hn == 0) {
        cvfs_error_x00163280(ext_str1_x00163280);
        return 0;
    }
    if (hn->dev->get_max_byte_rate) {
        ret = hn->dev->get_max_byte_rate(hn->fd);
    } else {
        cvfs_error_x00163280(ext_str0_x00163280);
        ret = 0;
    }
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_001632D8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00162A70", func_00163458);
typedef int (*CvFsFn_x00163518)();
typedef struct {
    CvFsFn_x00163518 exec_server;
    CvFsFn_x00163518 entry_err_func;
    CvFsFn_x00163518 get_file_size;
    CvFsFn_x00163518 get_free_size;
    CvFsFn_x00163518 open;
    CvFsFn_x00163518 close;
    CvFsFn_x00163518 seek;
    CvFsFn_x00163518 tell;
    CvFsFn_x00163518 req_rd;
    CvFsFn_x00163518 req_wr;
    CvFsFn_x00163518 stop_tr;
    CvFsFn_x00163518 get_stat;
    CvFsFn_x00163518 get_sct_len;
    CvFsFn_x00163518 set_sct_len;
    CvFsFn_x00163518 get_num_tr;
    CvFsFn_x00163518 change_dir;
    CvFsFn_x00163518 is_exist_file;
    CvFsFn_x00163518 get_num_files;
    CvFsFn_x00163518 load_dir_info;
    CvFsFn_x00163518 get_max_byte_rate;
    CvFsFn_x00163518 make_dir;
    CvFsFn_x00163518 remove_dir;
    CvFsFn_x00163518 delete_file;
    CvFsFn_x00163518 get_file_size_ex;
    CvFsFn_x00163518 opt_fn1;
    CvFsFn_x00163518 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00163518;
typedef struct {
    CvFsDevIf_x00163518 *dev;
    char name[12];
} CvFsDev_x00163518;
typedef struct {
    CvFsDevIf_x00163518 *dev;
    void *fd;
} CvFsHn_x00163518;
extern CvFsDev_x00163518 cvfs_dev_tbl_x00163518[32] __asm__("lbl_80187574");
void cvfs_error_x00163518(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00163518(char *name, CvFsDevIf_x00163518 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00163518 *cvfs_add_device_x00163518(char *name, CvFsDevIf_x00163518 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00163518(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00163518(char *name, CvFsDevIf_x00163518 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00163518 *cvfs_add_device_x00163518(char *name, CvFsDevIf_x00163518 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00163518[] __asm__("D_00462AC0");
char *func_00163518_x00163518(CvFsHn_x00163518 *hn) __asm__("func_00163518");
/* cvFsGetDevName: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
char *func_00163518_x00163518(CvFsHn_x00163518 *hn)
{
    int i;
    if (hn == 0) {
        cvfs_error_x00163518(ext_str0_x00163518);
        return 0;
    }
    for (i = 0; i < 32; i++) {
        if (cvfs_dev_tbl_x00163518[i].dev == hn->dev)
            break;
    }
    return cvfs_dev_tbl_x00163518[i].name;
}
void func_001635A0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        D_0041158C = 0;
        D_00411590 = 0;
        return;
    }
    D_0041158C = arg0;
    D_00411590 = arg1;
}
typedef int (*CvFsFn_x001635C8)();
typedef struct {
    CvFsFn_x001635C8 exec_server;
    CvFsFn_x001635C8 entry_err_func;
    CvFsFn_x001635C8 get_file_size;
    CvFsFn_x001635C8 get_free_size;
    CvFsFn_x001635C8 open;
    CvFsFn_x001635C8 close;
    CvFsFn_x001635C8 seek;
    CvFsFn_x001635C8 tell;
    CvFsFn_x001635C8 req_rd;
    CvFsFn_x001635C8 req_wr;
    CvFsFn_x001635C8 stop_tr;
    CvFsFn_x001635C8 get_stat;
    CvFsFn_x001635C8 get_sct_len;
    CvFsFn_x001635C8 set_sct_len;
    CvFsFn_x001635C8 get_num_tr;
    CvFsFn_x001635C8 change_dir;
    CvFsFn_x001635C8 is_exist_file;
    CvFsFn_x001635C8 get_num_files;
    CvFsFn_x001635C8 load_dir_info;
    CvFsFn_x001635C8 get_max_byte_rate;
    CvFsFn_x001635C8 make_dir;
    CvFsFn_x001635C8 remove_dir;
    CvFsFn_x001635C8 delete_file;
    CvFsFn_x001635C8 get_file_size_ex;
    CvFsFn_x001635C8 opt_fn1;
    CvFsFn_x001635C8 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x001635C8;
typedef struct {
    CvFsDevIf_x001635C8 *dev;
    void *fd;
} CvFsHn_x001635C8;
void cvfs_error_x001635C8(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x001635C8(char *name, CvFsDevIf_x001635C8 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x001635C8 *cvfs_add_device_x001635C8(char *name, CvFsDevIf_x001635C8 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x001635C8(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x001635C8(char *name, CvFsDevIf_x001635C8 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x001635C8 *cvfs_add_device_x001635C8(char *name, CvFsDevIf_x001635C8 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x001635C8[] __asm__("D_00462B00");
extern char ext_str1_x001635C8[] __asm__("D_00462AE0");
int func_001635C8_x001635C8(CvFsHn_x001635C8 *hn, int cmd, int param, int extra) __asm__("func_001635C8");
/* cvFsOptFn1: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001635C8_x001635C8(CvFsHn_x001635C8 *hn, int cmd, int param, int extra)
{
    int ret = 0;
    if (hn == 0) {
        cvfs_error_x001635C8(ext_str1_x001635C8);
        return 0;
    }
    if (hn->dev->opt_fn1)
        ret = hn->dev->opt_fn1(hn->fd, cmd, param, extra);
    else
        cvfs_error_x001635C8(ext_str0_x001635C8);
    return ret;
}
typedef int (*CvFsFn_x00163630)();
typedef struct {
    CvFsFn_x00163630 exec_server;
    CvFsFn_x00163630 entry_err_func;
    CvFsFn_x00163630 get_file_size;
    CvFsFn_x00163630 get_free_size;
    CvFsFn_x00163630 open;
    CvFsFn_x00163630 close;
    CvFsFn_x00163630 seek;
    CvFsFn_x00163630 tell;
    CvFsFn_x00163630 req_rd;
    CvFsFn_x00163630 req_wr;
    CvFsFn_x00163630 stop_tr;
    CvFsFn_x00163630 get_stat;
    CvFsFn_x00163630 get_sct_len;
    CvFsFn_x00163630 set_sct_len;
    CvFsFn_x00163630 get_num_tr;
    CvFsFn_x00163630 change_dir;
    CvFsFn_x00163630 is_exist_file;
    CvFsFn_x00163630 get_num_files;
    CvFsFn_x00163630 load_dir_info;
    CvFsFn_x00163630 get_max_byte_rate;
    CvFsFn_x00163630 make_dir;
    CvFsFn_x00163630 remove_dir;
    CvFsFn_x00163630 delete_file;
    CvFsFn_x00163630 get_file_size_ex;
    CvFsFn_x00163630 opt_fn1;
    CvFsFn_x00163630 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00163630;
typedef struct {
    CvFsDevIf_x00163630 *dev;
    void *fd;
} CvFsHn_x00163630;
void cvfs_error_x00163630(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00163630(char *name, CvFsDevIf_x00163630 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00163630 *cvfs_add_device_x00163630(char *name, CvFsDevIf_x00163630 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00163630(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00163630(char *name, CvFsDevIf_x00163630 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00163630 *cvfs_add_device_x00163630(char *name, CvFsDevIf_x00163630 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00163630[] __asm__("D_00462B40");
extern char ext_str1_x00163630[] __asm__("D_00462B20");
int func_00163630_x00163630(CvFsHn_x00163630 *hn, int cmd, int param, int extra) __asm__("func_00163630");
/* cvFsOptFn2: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00163630_x00163630(CvFsHn_x00163630 *hn, int cmd, int param, int extra)
{
    int ret = 0;
    if (hn == 0) {
        cvfs_error_x00163630(ext_str1_x00163630);
        return 0;
    }
    if (hn->dev->opt_fn2)
        ret = hn->dev->opt_fn2(hn->fd, cmd, param, extra);
    else
        cvfs_error_x00163630(ext_str0_x00163630);
    return ret;
}
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
enum CvFsOptCode_x00163BC0 {
    CVFS_OPT_SET_CUR_VOLUME_x00163BC0 = 1,
    CVFS_OPT_ADD_VOLUME_x00163BC0 = 2,
    CVFS_OPT_DEL_VOLUME_x00163BC0 = 3,
    CVFS_OPT_GET_NUM_FILES_x00163BC0 = 4,
    CVFS_OPT_GET_VOLUME_INFO_x00163BC0 = 5,
    CVFS_OPT_SET_DEF_VOL_x00163BC0 = 6,
    CVFS_OPT_IS_FULL_PATH_x00163BC0 = 100,
    CVFS_OPT_NUM_TR64_HIGH_x00163BC0 = 200,
    CVFS_OPT_NUM_TR64_LOW_x00163BC0 = 201,
    CVFS_OPT_FILE_SIZE64_HIGH_x00163BC0 = 202,
    CVFS_OPT_FILE_SIZE64_LOW_x00163BC0 = 203,
    CVFS_OPT_FILE_SIZE_EX64_HIGH_x00163BC0 = 204,
    CVFS_OPT_FILE_SIZE_EX64_LOW_x00163BC0 = 205,
    CVFS_OPT_FSYS64_INFO_x00163BC0 = 299,
    CVFS_OPT_FILE_SIZE_BY_HNDL_x00163BC0 = 300
};
typedef void (*CvFsErrFn_x00163BC0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00163BC0)(CvFsErrFn_x00163BC0 func, void *obj);
typedef int (*CvFsPathFn_x00163BC0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00163BC0)(void);
typedef int (*CvFsOpenFn_x00163BC0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00163BC0)(int fd);
typedef int (*CvFsFdIntFn_x00163BC0)(int fd);
typedef int (*CvFsSeekFn_x00163BC0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00163BC0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00163BC0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00163BC0)(void);
typedef int (*CvFsLoadDirInfoFn_x00163BC0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00163BC0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00163BC0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00163BC0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00163BC0 entry_err_func;
    CvFsPathFn_x00163BC0 get_file_size;
    CvFsGetFreeSizeFn_x00163BC0 get_free_size;
    CvFsOpenFn_x00163BC0 open;
    CvFsFdFn_x00163BC0 close;
    CvFsSeekFn_x00163BC0 seek;
    CvFsFdIntFn_x00163BC0 tell;
    CvFsXferFn_x00163BC0 req_rd;
    CvFsXferFn_x00163BC0 req_wr;
    CvFsFdFn_x00163BC0 stop_tr;
    CvFsFdIntFn_x00163BC0 get_stat;
    CvFsFdIntFn_x00163BC0 get_sct_len;
    CvFsSetSctLenFn_x00163BC0 set_sct_len;
    CvFsFdIntFn_x00163BC0 get_num_tr;
    CvFsPathFn_x00163BC0 change_dir;
    CvFsPathFn_x00163BC0 is_exist_file;
    CvFsGetNumFilesFn_x00163BC0 get_num_files;
    CvFsLoadDirInfoFn_x00163BC0 load_dir_info;
    CvFsFdIntFn_x00163BC0 get_max_byte_rate;
    CvFsPathFn_x00163BC0 make_dir;
    CvFsPathFn_x00163BC0 remove_dir;
    CvFsPathFn_x00163BC0 delete_file;
    CvFsGetFileSizeExFn_x00163BC0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00163BC0 opt_fn2;
} CvFsVtbl_x00163BC0;
typedef struct CvFsHandle_x00163BC0 {
    CvFsVtbl_x00163BC0 *vtbl;
    int fd;
} CvFsHandle_x00163BC0;
void cvFsError_x00163BC0(const char *msg) __asm__("func_00161D20");
extern CvFsVtbl_x00163BC0 *addDevice_x00163BC0(char *devname, CvFsVtbl_x00163BC0 *(*get_if)(void)) __asm__("addDevice");
extern char cvFsGetNumTr64_1_handle_error_x00163BC0[] __asm__("D_00462E00");
void cvFsError_x00163BC0(const char *msg) __asm__("func_00161D20");
CvFsVtbl_x00163BC0 *addDevice_x00163BC0(char *devname, CvFsVtbl_x00163BC0 *(*get_if)(void)) __asm__("addDevice");
long long func_00163BC0_x00163BC0(CvFsHandle_x00163BC0 *hdl) __asm__("func_00163BC0");
/* cvFsGetNumTr64: from https://github.com/crashbashash/DW4_Decomp (src/cri/cvfs.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long long func_00163BC0_x00163BC0(CvFsHandle_x00163BC0 *hdl)
{
    long long ntr = 0;
    if (hdl == 0) {
        cvFsError_x00163BC0(cvFsGetNumTr64_1_handle_error_x00163BC0);
        return 0;
    }
    if (hdl->vtbl->opt_fn1 != 0) {
        ntr = ((long long)hdl->vtbl->opt_fn1(hdl->fd, CVFS_OPT_NUM_TR64_HIGH_x00163BC0, 0, 0) << 32)
            + (unsigned int)hdl->vtbl->opt_fn1(hdl->fd, CVFS_OPT_NUM_TR64_LOW_x00163BC0, 0, 0);
    }
    return ntr;
}
enum CvFsOptCode_x00163C58 {
    CVFS_OPT_SET_CUR_VOLUME_x00163C58 = 1,
    CVFS_OPT_ADD_VOLUME_x00163C58 = 2,
    CVFS_OPT_DEL_VOLUME_x00163C58 = 3,
    CVFS_OPT_GET_NUM_FILES_x00163C58 = 4,
    CVFS_OPT_GET_VOLUME_INFO_x00163C58 = 5,
    CVFS_OPT_SET_DEF_VOL_x00163C58 = 6,
    CVFS_OPT_IS_FULL_PATH_x00163C58 = 100,
    CVFS_OPT_NUM_TR64_HIGH_x00163C58 = 200,
    CVFS_OPT_NUM_TR64_LOW_x00163C58 = 201,
    CVFS_OPT_FILE_SIZE64_HIGH_x00163C58 = 202,
    CVFS_OPT_FILE_SIZE64_LOW_x00163C58 = 203,
    CVFS_OPT_FILE_SIZE_EX64_HIGH_x00163C58 = 204,
    CVFS_OPT_FILE_SIZE_EX64_LOW_x00163C58 = 205,
    CVFS_OPT_FSYS64_INFO_x00163C58 = 299,
    CVFS_OPT_FILE_SIZE_BY_HNDL_x00163C58 = 300
};
typedef void (*CvFsErrFn_x00163C58)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00163C58)(CvFsErrFn_x00163C58 func, void *obj);
typedef int (*CvFsPathFn_x00163C58)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00163C58)(void);
typedef int (*CvFsOpenFn_x00163C58)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00163C58)(int fd);
typedef int (*CvFsFdIntFn_x00163C58)(int fd);
typedef int (*CvFsSeekFn_x00163C58)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00163C58)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00163C58)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00163C58)(void);
typedef int (*CvFsLoadDirInfoFn_x00163C58)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00163C58)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00163C58)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00163C58 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00163C58 entry_err_func;
    CvFsPathFn_x00163C58 get_file_size;
    CvFsGetFreeSizeFn_x00163C58 get_free_size;
    CvFsOpenFn_x00163C58 open;
    CvFsFdFn_x00163C58 close;
    CvFsSeekFn_x00163C58 seek;
    CvFsFdIntFn_x00163C58 tell;
    CvFsXferFn_x00163C58 req_rd;
    CvFsXferFn_x00163C58 req_wr;
    CvFsFdFn_x00163C58 stop_tr;
    CvFsFdIntFn_x00163C58 get_stat;
    CvFsFdIntFn_x00163C58 get_sct_len;
    CvFsSetSctLenFn_x00163C58 set_sct_len;
    CvFsFdIntFn_x00163C58 get_num_tr;
    CvFsPathFn_x00163C58 change_dir;
    CvFsPathFn_x00163C58 is_exist_file;
    CvFsGetNumFilesFn_x00163C58 get_num_files;
    CvFsLoadDirInfoFn_x00163C58 load_dir_info;
    CvFsFdIntFn_x00163C58 get_max_byte_rate;
    CvFsPathFn_x00163C58 make_dir;
    CvFsPathFn_x00163C58 remove_dir;
    CvFsPathFn_x00163C58 delete_file;
    CvFsGetFileSizeExFn_x00163C58 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00163C58 opt_fn2;
} CvFsVtbl_x00163C58;
extern CvFsVtbl_x00163C58 *addDevice_x00163C58(char *devname, CvFsVtbl_x00163C58 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00163C58 *variousProc_x00163C58(char *devname, char *fname, const char *path) __asm__("func_001623A8");
void getDevName_x00163C58(char *devname, char *fname, const char *path) __asm__("func_001625F0");
CvFsVtbl_x00163C58 *addDevice_x00163C58(char *devname, CvFsVtbl_x00163C58 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00163C58 *variousProc_x00163C58(char *devname, char *fname, const char *path) __asm__("func_001623A8");
void getDevName_x00163C58(char *devname, char *fname, const char *path) __asm__("func_001625F0");
long long func_00163C58_x00163C58(const char *path) __asm__("func_00163C58");
/* cvFsGetFileSize64: from https://github.com/crashbashash/DW4_Decomp (src/cri/cvfs.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long long func_00163C58_x00163C58(const char *path)
{
    char devname[304];
    char fname[304];
    CvFsVtbl_x00163C58 *vtbl;
    long long size = 0;
    int high;
    getDevName_x00163C58(devname, fname, path);
    vtbl = variousProc_x00163C58(devname, fname, path);
    if (vtbl->opt_fn1 != 0) {
        high = vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE64_HIGH_x00163C58, fname, 0);
        size = ((long long)high << 32)
             + (unsigned int)vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE64_LOW_x00163C58, fname, 0);
    }
    return size;
}
enum CvFsOptCode_x00163D10 {
    CVFS_OPT_SET_CUR_VOLUME_x00163D10 = 1,
    CVFS_OPT_ADD_VOLUME_x00163D10 = 2,
    CVFS_OPT_DEL_VOLUME_x00163D10 = 3,
    CVFS_OPT_GET_NUM_FILES_x00163D10 = 4,
    CVFS_OPT_GET_VOLUME_INFO_x00163D10 = 5,
    CVFS_OPT_SET_DEF_VOL_x00163D10 = 6,
    CVFS_OPT_IS_FULL_PATH_x00163D10 = 100,
    CVFS_OPT_NUM_TR64_HIGH_x00163D10 = 200,
    CVFS_OPT_NUM_TR64_LOW_x00163D10 = 201,
    CVFS_OPT_FILE_SIZE64_HIGH_x00163D10 = 202,
    CVFS_OPT_FILE_SIZE64_LOW_x00163D10 = 203,
    CVFS_OPT_FILE_SIZE_EX64_HIGH_x00163D10 = 204,
    CVFS_OPT_FILE_SIZE_EX64_LOW_x00163D10 = 205,
    CVFS_OPT_FSYS64_INFO_x00163D10 = 299,
    CVFS_OPT_FILE_SIZE_BY_HNDL_x00163D10 = 300
};
typedef void (*CvFsErrFn_x00163D10)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00163D10)(CvFsErrFn_x00163D10 func, void *obj);
typedef int (*CvFsPathFn_x00163D10)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00163D10)(void);
typedef int (*CvFsOpenFn_x00163D10)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00163D10)(int fd);
typedef int (*CvFsFdIntFn_x00163D10)(int fd);
typedef int (*CvFsSeekFn_x00163D10)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00163D10)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00163D10)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00163D10)(void);
typedef int (*CvFsLoadDirInfoFn_x00163D10)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00163D10)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00163D10)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00163D10 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00163D10 entry_err_func;
    CvFsPathFn_x00163D10 get_file_size;
    CvFsGetFreeSizeFn_x00163D10 get_free_size;
    CvFsOpenFn_x00163D10 open;
    CvFsFdFn_x00163D10 close;
    CvFsSeekFn_x00163D10 seek;
    CvFsFdIntFn_x00163D10 tell;
    CvFsXferFn_x00163D10 req_rd;
    CvFsXferFn_x00163D10 req_wr;
    CvFsFdFn_x00163D10 stop_tr;
    CvFsFdIntFn_x00163D10 get_stat;
    CvFsFdIntFn_x00163D10 get_sct_len;
    CvFsSetSctLenFn_x00163D10 set_sct_len;
    CvFsFdIntFn_x00163D10 get_num_tr;
    CvFsPathFn_x00163D10 change_dir;
    CvFsPathFn_x00163D10 is_exist_file;
    CvFsGetNumFilesFn_x00163D10 get_num_files;
    CvFsLoadDirInfoFn_x00163D10 load_dir_info;
    CvFsFdIntFn_x00163D10 get_max_byte_rate;
    CvFsPathFn_x00163D10 make_dir;
    CvFsPathFn_x00163D10 remove_dir;
    CvFsPathFn_x00163D10 delete_file;
    CvFsGetFileSizeExFn_x00163D10 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00163D10 opt_fn2;
} CvFsVtbl_x00163D10;
extern CvFsVtbl_x00163D10 *addDevice_x00163D10(char *devname, CvFsVtbl_x00163D10 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00163D10 *getDevice_x00163D10(const char *devname) __asm__("func_00162080");
void getDevName_x00163D10(char *devname, char *fname, const char *path) __asm__("func_001625F0");
CvFsVtbl_x00163D10 *addDevice_x00163D10(char *devname, CvFsVtbl_x00163D10 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00163D10 *getDevice_x00163D10(const char *devname) __asm__("func_00162080");
void getDevName_x00163D10(char *devname, char *fname, const char *path) __asm__("func_001625F0");
long long func_00163D10_x00163D10(const char *path, int arg) __asm__("func_00163D10");
/* cvFsGetFileSizeEx64: from https://github.com/crashbashash/DW4_Decomp (src/cri/cvfs.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long long func_00163D10_x00163D10(const char *path, int arg)
{
    char devname[304];
    char fname[304];
    CvFsVtbl_x00163D10 *vtbl;
    long long size;
    int high;
    vtbl = getDevice_x00163D10(devname);
    if (vtbl == 0) {
        return 0;
    }
    getDevName_x00163D10(devname, fname, path);
    size = 0;
    if (vtbl->opt_fn1 != 0) {
        high = vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE_EX64_HIGH_x00163D10, fname, arg);
        size = ((long long)high << 32)
             + (unsigned int)vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE_EX64_LOW_x00163D10, fname, arg);
    }
    return size;
}
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
