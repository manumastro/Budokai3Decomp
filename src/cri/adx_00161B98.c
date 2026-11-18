#include "common.h"

extern s32 D_0047ECD0;

extern s32 (*D_0041158C)(s32);
extern s32 D_00411590;

INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161B98);
typedef signed short Sint16_x00161C90;
typedef signed int Sint32_x00161C90;
extern int* sceCdCallback_x00161C90(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00161C90 unk0;
               Sint16_x00161C90 unk2;
               Sint16_x00161C90 unk4;
               Sint16_x00161C90 unk6;
} ADXPD_OBJ_SUB_x00161C90;
typedef struct {
               Sint32_x00161C90 used;
               Sint32_x00161C90 unk4;
               Sint32_x00161C90 mode;
               Sint32_x00161C90 stat;
               Sint32_x00161C90 num_blk;
               Sint32_x00161C90 unk14;
               Sint32_x00161C90 unk18;
               Sint32_x00161C90 unk1C;
               Sint32_x00161C90 unk20;
               Sint32_x00161C90 unk24;
               ADXPD_OBJ_SUB_x00161C90 unk28;
               Sint16_x00161C90 unk30;
               Sint16_x00161C90 unk32;
               Sint16_x00161C90 unk34;
               Sint16_x00161C90 unk36;
               Sint16_x00161C90 unk38;
               Sint16_x00161C90 unk3A;
} ADXPD_OBJ_x00161C90;
typedef ADXPD_OBJ_x00161C90* ADXPD_x00161C90;
void ADXPD_ExecHndl_x00161C90(ADXPD_x00161C90) __asm__("func_00161B98");
extern ADXPD_OBJ_x00161C90 adxpd_obj_x00161C90[16] __asm__("lbl_8017E5BC");
void ADXPD_ExecHndl_x00161C90(ADXPD_x00161C90 adxpd) __asm__("func_00161B98");
void func_00161C90_x00161C90() __asm__("func_00161C90");
/* ADXPD_ExecServer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_xpnd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00161C90_x00161C90() {
    ADXPD_x00161C90 adxpd;
    Sint32_x00161C90 i;
    for (i = 0; i < 16; i++) {
        adxpd = &adxpd_obj_x00161C90[i];
        if (adxpd->used == 1) {
            ADXPD_ExecHndl_x00161C90(adxpd);
        }
    }
}
void func_00161CF0(void) {
    if (D_0041158C != NULL) {
        D_0041158C(D_00411590);
    }
}
s32 func_00161CF0_x00161D20(s32 *, s32, s32) __asm__("func_00161CF0");
extern s32 D_00411590_x00161D20 __asm__("D_00411590");
void func_00161D20_x00161D20(s32 arg0) __asm__("func_00161D20");
void func_00161D20_x00161D20(s32 arg0) {
    func_00161CF0_x00161D20(&D_00411590_x00161D20, arg0, 0);
}
typedef int (*CvFsFn_x00161D48)();
typedef struct {
    CvFsFn_x00161D48 exec_server;
    CvFsFn_x00161D48 entry_err_func;
    CvFsFn_x00161D48 get_file_size;
    CvFsFn_x00161D48 get_free_size;
    CvFsFn_x00161D48 open;
    CvFsFn_x00161D48 close;
    CvFsFn_x00161D48 seek;
    CvFsFn_x00161D48 tell;
    CvFsFn_x00161D48 req_rd;
    CvFsFn_x00161D48 req_wr;
    CvFsFn_x00161D48 stop_tr;
    CvFsFn_x00161D48 get_stat;
    CvFsFn_x00161D48 get_sct_len;
    CvFsFn_x00161D48 set_sct_len;
    CvFsFn_x00161D48 get_num_tr;
    CvFsFn_x00161D48 change_dir;
    CvFsFn_x00161D48 is_exist_file;
    CvFsFn_x00161D48 get_num_files;
    CvFsFn_x00161D48 load_dir_info;
    CvFsFn_x00161D48 get_max_byte_rate;
    CvFsFn_x00161D48 make_dir;
    CvFsFn_x00161D48 remove_dir;
    CvFsFn_x00161D48 delete_file;
    CvFsFn_x00161D48 get_file_size_ex;
    CvFsFn_x00161D48 opt_fn1;
    CvFsFn_x00161D48 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00161D48;
typedef struct {
    CvFsDevIf_x00161D48 *dev;
    char name[12];
} CvFsDev_x00161D48;
typedef struct {
    CvFsDevIf_x00161D48 *dev;
    void *fd;
} CvFsHn_x00161D48;
extern char cvfs_def_dev_name_x00161D48[] __asm__("D_0047ECD0");
extern CvFsDev_x00161D48 cvfs_dev_tbl_x00161D48[32] __asm__("lbl_80187574");
extern CvFsHn_x00161D48 cvfs_hn_tbl_x00161D48[40] __asm__("D_0047E990");
extern int cvfs_init_count_x00161D48 __asm__("D_00411594");
extern char *volatile cvfs_ver_str_x00161D48 __asm__("D_00411588");
extern void cvFsAddDev_x00161D48(char *name, CvFsDevIf_x00161D48 *(*getif)(void)) __asm__("cvFsAddDev");
void *memset_x00161D48(void *s, int c, unsigned int n) __asm__("memset");
extern CvFsDevIf_x00161D48 *cvfs_add_device_x00161D48(char *name, CvFsDevIf_x00161D48 *(*getif)(void)) __asm__("cvfs_add_device");
void cvFsAddDev_x00161D48(char *name, CvFsDevIf_x00161D48 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00161D48 *cvfs_add_device_x00161D48(char *name, CvFsDevIf_x00161D48 *(*getif)(void)) __asm__("cvfs_add_device");
void func_00161D48_x00161D48(void) __asm__("func_00161D48");
/* cvfs_lib_init: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00161D48_x00161D48(void)
{
    char *ver;
    int i;
    ver = cvfs_ver_str_x00161D48;
    if (cvfs_init_count_x00161D48 == 0) {
        for (i = 0; i < 40; i++) {
            cvfs_hn_tbl_x00161D48[i].dev = 0;
            cvfs_hn_tbl_x00161D48[i].fd = 0;
        }
        for (i = 0; i < 32; i++)
            cvfs_dev_tbl_x00161D48[i].name[0] = 0;
        memset_x00161D48(cvfs_def_dev_name_x00161D48, 0, 9);
        cvfs_def_dev_name_x00161D48[0] = 0;
    }
    cvfs_init_count_x00161D48++;
}
typedef int (*CvFsFn_x00161E10)();
typedef struct {
    CvFsFn_x00161E10 exec_server;
    CvFsFn_x00161E10 entry_err_func;
    CvFsFn_x00161E10 get_file_size;
    CvFsFn_x00161E10 get_free_size;
    CvFsFn_x00161E10 open;
    CvFsFn_x00161E10 close;
    CvFsFn_x00161E10 seek;
    CvFsFn_x00161E10 tell;
    CvFsFn_x00161E10 req_rd;
    CvFsFn_x00161E10 req_wr;
    CvFsFn_x00161E10 stop_tr;
    CvFsFn_x00161E10 get_stat;
    CvFsFn_x00161E10 get_sct_len;
    CvFsFn_x00161E10 set_sct_len;
    CvFsFn_x00161E10 get_num_tr;
    CvFsFn_x00161E10 change_dir;
    CvFsFn_x00161E10 is_exist_file;
    CvFsFn_x00161E10 get_num_files;
    CvFsFn_x00161E10 load_dir_info;
    CvFsFn_x00161E10 get_max_byte_rate;
    CvFsFn_x00161E10 make_dir;
    CvFsFn_x00161E10 remove_dir;
    CvFsFn_x00161E10 delete_file;
    CvFsFn_x00161E10 get_file_size_ex;
    CvFsFn_x00161E10 opt_fn1;
    CvFsFn_x00161E10 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00161E10;
typedef struct {
    CvFsDevIf_x00161E10 *dev;
    char name[12];
} CvFsDev_x00161E10;
typedef struct {
    CvFsDevIf_x00161E10 *dev;
    void *fd;
} CvFsHn_x00161E10;
extern char cvfs_def_dev_name_x00161E10[] __asm__("D_0047ECD0");
extern CvFsDev_x00161E10 cvfs_dev_tbl_x00161E10[32] __asm__("lbl_80187574");
extern CvFsHn_x00161E10 cvfs_hn_tbl_x00161E10[40] __asm__("D_0047E990");
extern int cvfs_init_count_x00161E10 __asm__("D_00411594");
extern void cvFsAddDev_x00161E10(char *name, CvFsDevIf_x00161E10 *(*getif)(void)) __asm__("cvFsAddDev");
void *memset_x00161E10(void *s, int c, unsigned int n) __asm__("memset");
extern CvFsDevIf_x00161E10 *cvfs_add_device_x00161E10(char *name, CvFsDevIf_x00161E10 *(*getif)(void)) __asm__("cvfs_add_device");
void cvFsAddDev_x00161E10(char *name, CvFsDevIf_x00161E10 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00161E10 *cvfs_add_device_x00161E10(char *name, CvFsDevIf_x00161E10 *(*getif)(void)) __asm__("cvfs_add_device");
void func_00161E10_x00161E10(void) __asm__("func_00161E10");
/* cvfs_lib_finish: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00161E10_x00161E10(void)
{
    int i;
    if (--cvfs_init_count_x00161E10 == 0) {
        for (i = 0; i < 40; i++) {
            if (cvfs_hn_tbl_x00161E10[i].dev)
                cvfs_hn_tbl_x00161E10[i].dev->close(cvfs_hn_tbl_x00161E10[i].fd);
            cvfs_hn_tbl_x00161E10[i].dev = 0;
            cvfs_hn_tbl_x00161E10[i].fd = 0;
        }
        for (i = 0; i < 32; i++)
            cvfs_dev_tbl_x00161E10[i].name[0] = 0;
        memset_x00161E10(cvfs_def_dev_name_x00161E10, 0, 9);
        cvfs_def_dev_name_x00161E10[0] = 0;
    }
}
typedef int (*CvFsFn_x00161F18)();
typedef struct {
    CvFsFn_x00161F18 exec_server;
    CvFsFn_x00161F18 entry_err_func;
    CvFsFn_x00161F18 get_file_size;
    CvFsFn_x00161F18 get_free_size;
    CvFsFn_x00161F18 open;
    CvFsFn_x00161F18 close;
    CvFsFn_x00161F18 seek;
    CvFsFn_x00161F18 tell;
    CvFsFn_x00161F18 req_rd;
    CvFsFn_x00161F18 req_wr;
    CvFsFn_x00161F18 stop_tr;
    CvFsFn_x00161F18 get_stat;
    CvFsFn_x00161F18 get_sct_len;
    CvFsFn_x00161F18 set_sct_len;
    CvFsFn_x00161F18 get_num_tr;
    CvFsFn_x00161F18 change_dir;
    CvFsFn_x00161F18 is_exist_file;
    CvFsFn_x00161F18 get_num_files;
    CvFsFn_x00161F18 load_dir_info;
    CvFsFn_x00161F18 get_max_byte_rate;
    CvFsFn_x00161F18 make_dir;
    CvFsFn_x00161F18 remove_dir;
    CvFsFn_x00161F18 delete_file;
    CvFsFn_x00161F18 get_file_size_ex;
    CvFsFn_x00161F18 opt_fn1;
    CvFsFn_x00161F18 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00161F18;
extern char *volatile cvfs_ver_str_x00161F18 __asm__("D_00411588");
void cvfs_error_x00161F18(const char *msg) __asm__("func_00161D20");
extern CvFsDevIf_x00161F18 *cvfs_add_device_x00161F18(char *name, CvFsDevIf_x00161F18 *(*getif)(void)) __asm__("func_00161FA8");
void cvfs_call_error_cb_x00161F18(void *obj, const char *msg, int code) __asm__("func_00161CF0");
void cvfs_error_x00161F18(const char *msg) __asm__("func_00161D20");
CvFsDevIf_x00161F18 *cvfs_add_device_x00161F18(char *name, CvFsDevIf_x00161F18 *(*getif)(void)) __asm__("func_00161FA8");
extern char ext_str0_x00161F18[] __asm__("D_00462220");
extern char ext_str1_x00161F18[] __asm__("D_004621F8");
extern char ext_str2_x00161F18[] __asm__("D_004621D0");
void func_00161F18_x00161F18(char *name, CvFsDevIf_x00161F18 *(*getif)(void)) __asm__("func_00161F18");
/* cvFsAddDev: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00161F18_x00161F18(char *name, CvFsDevIf_x00161F18 *(*getif)(void))
{
    char *ver;
    CvFsDevIf_x00161F18 *dev;
    ver = cvfs_ver_str_x00161F18;
    if (name == 0) {
        cvfs_error_x00161F18(ext_str2_x00161F18);
        return;
    }
    if (getif == 0) {
        cvfs_error_x00161F18(ext_str1_x00161F18);
        return;
    }
    dev = cvfs_add_device_x00161F18(name, getif);
    if (dev == 0) {
        cvfs_error_x00161F18(ext_str0_x00161F18);
        return;
    }
    if (dev->entry_err_func)
        dev->entry_err_func(cvfs_call_error_cb_x00161F18, 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00161FA8);
typedef int (*CvFsFn_x00162080)();
typedef struct {
    CvFsFn_x00162080 exec_server;
    CvFsFn_x00162080 entry_err_func;
    CvFsFn_x00162080 get_file_size;
    CvFsFn_x00162080 get_free_size;
    CvFsFn_x00162080 open;
    CvFsFn_x00162080 close;
    CvFsFn_x00162080 seek;
    CvFsFn_x00162080 tell;
    CvFsFn_x00162080 req_rd;
    CvFsFn_x00162080 req_wr;
    CvFsFn_x00162080 stop_tr;
    CvFsFn_x00162080 get_stat;
    CvFsFn_x00162080 get_sct_len;
    CvFsFn_x00162080 set_sct_len;
    CvFsFn_x00162080 get_num_tr;
    CvFsFn_x00162080 change_dir;
    CvFsFn_x00162080 is_exist_file;
    CvFsFn_x00162080 get_num_files;
    CvFsFn_x00162080 load_dir_info;
    CvFsFn_x00162080 get_max_byte_rate;
    CvFsFn_x00162080 make_dir;
    CvFsFn_x00162080 remove_dir;
    CvFsFn_x00162080 delete_file;
    CvFsFn_x00162080 get_file_size_ex;
    CvFsFn_x00162080 opt_fn1;
    CvFsFn_x00162080 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162080;
typedef struct {
    CvFsDevIf_x00162080 *dev;
    char name[12];
} CvFsDev_x00162080;
extern CvFsDev_x00162080 cvfs_dev_tbl_x00162080[32] __asm__("lbl_80187574");
unsigned int strlen_x00162080(const char *s) __asm__("func_00127BA0");
int strncmp_x00162080(const char *s1, const char *s2, unsigned int n) __asm__("func_00127E88");
CvFsDevIf_x00162080 *func_00162080_x00162080(char *name) __asm__("func_00162080");
/* cvfs_find_device: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
CvFsDevIf_x00162080 *func_00162080_x00162080(char *name)
{
    int len;
    unsigned int i;
    len = strlen_x00162080(name);
    for (i = 0; i < 32; i++) {
        if (strncmp_x00162080(name, cvfs_dev_tbl_x00162080[i].name, len) == 0)
            return cvfs_dev_tbl_x00162080[i].dev;
    }
    return 0;
}
typedef unsigned int size_t_x00162118;
typedef signed int Sint32_x00162118;
typedef char Char8_x00162118;
extern int* sceCdCallback_x00162118(void (*func)(int)) __asm__("sceCdCallback");
size_t_x00162118 strlen_x00162118(const char* s) __asm__("func_00127BA0");
extern void (*cvfs_errfn_x00162118)(void*, const Char8_x00162118*) __asm__("cvfs_errfn");
void func_00162118_x00162118(Char8_x00162118* str) __asm__("func_00162118");
/* toUpperStr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00162118_x00162118(Char8_x00162118* str) {
    size_t_x00162118 len = strlen_x00162118(str);
    Sint32_x00162118 i;
    for (i = 0; i < len + 1; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}
typedef int (*CvFsFn_x00162178)();
typedef struct {
    CvFsFn_x00162178 exec_server;
    CvFsFn_x00162178 entry_err_func;
    CvFsFn_x00162178 get_file_size;
    CvFsFn_x00162178 get_free_size;
    CvFsFn_x00162178 open;
    CvFsFn_x00162178 close;
    CvFsFn_x00162178 seek;
    CvFsFn_x00162178 tell;
    CvFsFn_x00162178 req_rd;
    CvFsFn_x00162178 req_wr;
    CvFsFn_x00162178 stop_tr;
    CvFsFn_x00162178 get_stat;
    CvFsFn_x00162178 get_sct_len;
    CvFsFn_x00162178 set_sct_len;
    CvFsFn_x00162178 get_num_tr;
    CvFsFn_x00162178 change_dir;
    CvFsFn_x00162178 is_exist_file;
    CvFsFn_x00162178 get_num_files;
    CvFsFn_x00162178 load_dir_info;
    CvFsFn_x00162178 get_max_byte_rate;
    CvFsFn_x00162178 make_dir;
    CvFsFn_x00162178 remove_dir;
    CvFsFn_x00162178 delete_file;
    CvFsFn_x00162178 get_file_size_ex;
    CvFsFn_x00162178 opt_fn1;
    CvFsFn_x00162178 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162178;
typedef struct {
    CvFsDevIf_x00162178 *dev;
    char name[12];
} CvFsDev_x00162178;
extern CvFsDev_x00162178 cvfs_dev_tbl_x00162178[32] __asm__("lbl_80187574");
void cvfs_error_x00162178(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00162178(char *name, CvFsDevIf_x00162178 *(*getif)(void)) __asm__("cvFsAddDev");
unsigned int strlen_x00162178(const char *s) __asm__("func_00127BA0");
int strncmp_x00162178(const char *s1, const char *s2, unsigned int n) __asm__("func_00127E88");
extern CvFsDevIf_x00162178 *cvfs_add_device_x00162178(char *name, CvFsDevIf_x00162178 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00162178(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00162178(char *name, CvFsDevIf_x00162178 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00162178 *cvfs_add_device_x00162178(char *name, CvFsDevIf_x00162178 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00162178[] __asm__("D_00462248");
void func_00162178_x00162178(char *name) __asm__("func_00162178");
/* cvFsDelDev: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00162178_x00162178(char *name)
{
    int len;
    unsigned int i;
    if (name == 0) {
        cvfs_error_x00162178(ext_str0_x00162178);
        return;
    }
    len = strlen_x00162178(name);
    for (i = 0; i < 32; i++) {
        if (strncmp_x00162178(name, cvfs_dev_tbl_x00162178[i].name, len) == 0) {
            cvfs_dev_tbl_x00162178[i].name[0] = 0;
            return;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162250);
typedef int (*CvFsFn_x00162318)();
typedef struct {
    CvFsFn_x00162318 exec_server;
    CvFsFn_x00162318 entry_err_func;
    CvFsFn_x00162318 get_file_size;
    CvFsFn_x00162318 get_free_size;
    CvFsFn_x00162318 open;
    CvFsFn_x00162318 close;
    CvFsFn_x00162318 seek;
    CvFsFn_x00162318 tell;
    CvFsFn_x00162318 req_rd;
    CvFsFn_x00162318 req_wr;
    CvFsFn_x00162318 stop_tr;
    CvFsFn_x00162318 get_stat;
    CvFsFn_x00162318 get_sct_len;
    CvFsFn_x00162318 set_sct_len;
    CvFsFn_x00162318 get_num_tr;
    CvFsFn_x00162318 change_dir;
    CvFsFn_x00162318 is_exist_file;
    CvFsFn_x00162318 get_num_files;
    CvFsFn_x00162318 load_dir_info;
    CvFsFn_x00162318 get_max_byte_rate;
    CvFsFn_x00162318 make_dir;
    CvFsFn_x00162318 remove_dir;
    CvFsFn_x00162318 delete_file;
    CvFsFn_x00162318 get_file_size_ex;
    CvFsFn_x00162318 opt_fn1;
    CvFsFn_x00162318 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162318;
typedef struct {
    CvFsDevIf_x00162318 *dev;
    char name[12];
} CvFsDev_x00162318;
extern CvFsDev_x00162318 cvfs_dev_tbl_x00162318[32] __asm__("lbl_80187574");
int strncmp_x00162318(const char *s1, const char *s2, unsigned int n) __asm__("func_00127E88");
int func_00162318_x00162318(char *name, int len) __asm__("func_00162318");
/* cvfs_is_device_name: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00162318_x00162318(char *name, int len)
{
    int i;
    for (i = 0; i < 32; i++) {
        if (strncmp_x00162318(name, cvfs_dev_tbl_x00162318[i].name, len) == 0)
            return 1;
    }
    return 0;
}
s32 *func_00162398(void) {
    return &D_0047ECD0;
}
typedef int (*CvFsFn_x001623A8)();
typedef struct {
    CvFsFn_x001623A8 exec_server;
    CvFsFn_x001623A8 entry_err_func;
    CvFsFn_x001623A8 get_file_size;
    CvFsFn_x001623A8 get_free_size;
    CvFsFn_x001623A8 open;
    CvFsFn_x001623A8 close;
    CvFsFn_x001623A8 seek;
    CvFsFn_x001623A8 tell;
    CvFsFn_x001623A8 req_rd;
    CvFsFn_x001623A8 req_wr;
    CvFsFn_x001623A8 stop_tr;
    CvFsFn_x001623A8 get_stat;
    CvFsFn_x001623A8 get_sct_len;
    CvFsFn_x001623A8 set_sct_len;
    CvFsFn_x001623A8 get_num_tr;
    CvFsFn_x001623A8 change_dir;
    CvFsFn_x001623A8 is_exist_file;
    CvFsFn_x001623A8 get_num_files;
    CvFsFn_x001623A8 load_dir_info;
    CvFsFn_x001623A8 get_max_byte_rate;
    CvFsFn_x001623A8 make_dir;
    CvFsFn_x001623A8 remove_dir;
    CvFsFn_x001623A8 delete_file;
    CvFsFn_x001623A8 get_file_size_ex;
    CvFsFn_x001623A8 opt_fn1;
    CvFsFn_x001623A8 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x001623A8;
extern void cvFsAddDev_x001623A8(char *name, CvFsDevIf_x001623A8 *(*getif)(void)) __asm__("cvFsAddDev");
char *strcpy_x001623A8(char *dst, const char *src) __asm__("func_00127A88");
extern CvFsDevIf_x001623A8 *cvfs_add_device_x001623A8(char *name, CvFsDevIf_x001623A8 *(*getif)(void)) __asm__("cvfs_add_device");
CvFsDevIf_x001623A8 *cvfs_find_device_x001623A8(char *name) __asm__("func_00162080");
void cvfs_get_def_dev_x001623A8(char *dst) __asm__("func_00162738");
void cvfs_make_volume_path_x001623A8(char *dev, char *fname) __asm__("func_00163B08");
void cvFsAddDev_x001623A8(char *name, CvFsDevIf_x001623A8 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x001623A8 *cvfs_add_device_x001623A8(char *name, CvFsDevIf_x001623A8 *(*getif)(void)) __asm__("cvfs_add_device");
CvFsDevIf_x001623A8 *cvfs_find_device_x001623A8(char *name) __asm__("func_00162080");
void cvfs_get_def_dev_x001623A8(char *dst) __asm__("func_00162738");
void cvfs_make_volume_path_x001623A8(char *dev, char *fname) __asm__("func_00163B08");
CvFsDevIf_x001623A8 *func_001623A8_x001623A8(char *dev, char *fname, char *path) __asm__("func_001623A8");
/* cvfs_resolve_device: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
CvFsDevIf_x001623A8 *func_001623A8_x001623A8(char *dev, char *fname, char *path)
{
    CvFsDevIf_x001623A8 *devif;
    if (dev[0] == 0) {
        cvfs_get_def_dev_x001623A8(dev);
        if (dev[0] == 0)
            return 0;
    }
    cvfs_make_volume_path_x001623A8(dev, fname);
    devif = cvfs_find_device_x001623A8(dev);
    if (devif == 0) {
        cvfs_get_def_dev_x001623A8(dev);
        devif = cvfs_find_device_x001623A8(dev);
        if (devif == 0)
            return 0;
        strcpy_x001623A8(fname, path);
    }
    return devif;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162450);
typedef signed int Sint32_x00162578;
typedef char Char8_x00162578;
extern int* sceCdCallback_x00162578(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162578 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162578* device_name, void*, Sint32_x00162578);
               void (*Close)(void* fd);
               Sint32_x00162578 (*Seek)(void* fd, Sint32_x00162578 offset, Sint32_x00162578 whence);
               Sint32_x00162578 (*Tell)(void* fd);
               Sint32_x00162578 (*ReqRd)(void* fd, Sint32_x00162578 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162578 (*GetStat)(void* fd);
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
               Sint32_x00162578 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162578;
typedef struct {
    CVFSDevice_x00162578* device;
    void* fd;
} CVFSHandle_x00162578;
extern void (*cvfs_errfn_x00162578)(void*, const Char8_x00162578*) __asm__("cvfs_errfn");
extern CVFSHandle_x00162578 D_006BDA68_x00162578[40] __asm__("D_0047E990");
CVFSHandle_x00162578* func_00162578_x00162578() __asm__("func_00162578");
/* allocCvFsHn: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
CVFSHandle_x00162578* func_00162578_x00162578() {
    Sint32_x00162578 i;
    for (i = 0; i < 40; i++) {
        if (D_006BDA68_x00162578[i].fd == 0) {
            break;
        }
    }
    if (i == 40) {
        return 0;
    }
    return &D_006BDA68_x00162578[i];
}
void func_001625E0_x001625E0(u8 *arg0) __asm__("func_001625E0");
void func_001625E0_x001625E0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_001625F0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_00162738);
typedef signed int Sint32_x001627A0;
typedef char Char8_x001627A0;
extern int* sceCdCallback_x001627A0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x001627A0 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x001627A0* device_name, void*, Sint32_x001627A0);
               void (*Close)(void* fd);
               Sint32_x001627A0 (*Seek)(void* fd, Sint32_x001627A0 offset, Sint32_x001627A0 whence);
               Sint32_x001627A0 (*Tell)(void* fd);
               Sint32_x001627A0 (*ReqRd)(void* fd, Sint32_x001627A0 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x001627A0 (*GetStat)(void* fd);
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
               Sint32_x001627A0 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x001627A0;
typedef struct {
    CVFSDevice_x001627A0* device;
    void* fd;
} CVFSHandle_x001627A0;
extern void (*cvfs_errfn_x001627A0)(void*, const Char8_x001627A0*) __asm__("cvfs_errfn");
void releaseCvFsHn_x001627A0(CVFSHandle_x001627A0* handle) __asm__("func_001625E0");
void cvFsError_x001627A0(const Char8_x001627A0* msg) __asm__("func_00161D20");
void releaseCvFsHn_x001627A0(CVFSHandle_x001627A0* handle) __asm__("func_001625E0");
extern char ext_str0_x001627A0[] __asm__("D_00462398");
extern char ext_str1_x001627A0[] __asm__("D_00462378");
void func_001627A0_x001627A0(CVFSHandle_x001627A0* fs_handle) __asm__("func_001627A0");
/* cvFsClose: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001627A0_x001627A0(CVFSHandle_x001627A0* fs_handle) {
    if (fs_handle == 0) {
        cvFsError_x001627A0(ext_str1_x001627A0);
        return;
    }
    if (fs_handle->device->Close != 0) {
        fs_handle->device->Close(fs_handle->fd);
    } else {
        cvFsError_x001627A0(ext_str0_x001627A0);
        return;
    }
    releaseCvFsHn_x001627A0(fs_handle);
}
typedef signed int Sint32_x00162818;
typedef char Char8_x00162818;
extern int* sceCdCallback_x00162818(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162818 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162818* device_name, void*, Sint32_x00162818);
               void (*Close)(void* fd);
               Sint32_x00162818 (*Seek)(void* fd, Sint32_x00162818 offset, Sint32_x00162818 whence);
               Sint32_x00162818 (*Tell)(void* fd);
               Sint32_x00162818 (*ReqRd)(void* fd, Sint32_x00162818 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162818 (*GetStat)(void* fd);
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
               Sint32_x00162818 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162818;
typedef struct {
    CVFSDevice_x00162818* device;
    void* fd;
} CVFSHandle_x00162818;
extern void (*cvfs_errfn_x00162818)(void*, const Char8_x00162818*) __asm__("cvfs_errfn");
void cvFsError_x00162818(const Char8_x00162818* msg) __asm__("func_00161D20");
extern char ext_str0_x00162818[] __asm__("D_004623D0");
extern char ext_str1_x00162818[] __asm__("D_004623B0");
Sint32_x00162818 func_00162818_x00162818(CVFSHandle_x00162818* fs_handle) __asm__("func_00162818");
/* cvFsTell: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00162818 func_00162818_x00162818(CVFSHandle_x00162818* fs_handle) {
    Sint32_x00162818 offset;
    if (fs_handle == 0) {
        cvFsError_x00162818(ext_str1_x00162818);
        return 0;
    }
    if (fs_handle->device->Tell != 0) {
        offset = fs_handle->device->Tell(fs_handle->fd);
    } else {
        offset = 0;
        cvFsError_x00162818(ext_str0_x00162818);
    }
    return offset;
}
typedef signed int Sint32_x00162880;
typedef char Char8_x00162880;
extern int* sceCdCallback_x00162880(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00162880 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00162880* device_name, void*, Sint32_x00162880);
               void (*Close)(void* fd);
               Sint32_x00162880 (*Seek)(void* fd, Sint32_x00162880 offset, Sint32_x00162880 whence);
               Sint32_x00162880 (*Tell)(void* fd);
               Sint32_x00162880 (*ReqRd)(void* fd, Sint32_x00162880 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00162880 (*GetStat)(void* fd);
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
               Sint32_x00162880 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00162880;
typedef struct {
    CVFSDevice_x00162880* device;
    void* fd;
} CVFSHandle_x00162880;
extern void (*cvfs_errfn_x00162880)(void*, const Char8_x00162880*) __asm__("cvfs_errfn");
void cvFsError_x00162880(const Char8_x00162880* msg) __asm__("func_00161D20");
extern char ext_str0_x00162880[] __asm__("D_00462408");
extern char ext_str1_x00162880[] __asm__("D_004623E8");
Sint32_x00162880 func_00162880_x00162880(CVFSHandle_x00162880* fs_handle, Sint32_x00162880 offset, Sint32_x00162880 whence) __asm__("func_00162880");
/* cvFsSeek: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00162880 func_00162880_x00162880(CVFSHandle_x00162880* fs_handle, Sint32_x00162880 offset, Sint32_x00162880 whence) {
    Sint32_x00162880 ret;
    if (fs_handle == 0) {
        cvFsError_x00162880(ext_str1_x00162880);
        return 0;
    }
    if (fs_handle->device->Seek != 0) {
        ret = fs_handle->device->Seek(fs_handle->fd, offset, whence);
    } else {
        ret = 0;
        cvFsError_x00162880(ext_str0_x00162880);
    }
    return ret;
}
typedef signed int Sint32_x001628E8;
typedef char Char8_x001628E8;
extern int* sceCdCallback_x001628E8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x001628E8 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x001628E8* device_name, void*, Sint32_x001628E8);
               void (*Close)(void* fd);
               Sint32_x001628E8 (*Seek)(void* fd, Sint32_x001628E8 offset, Sint32_x001628E8 whence);
               Sint32_x001628E8 (*Tell)(void* fd);
               Sint32_x001628E8 (*ReqRd)(void* fd, Sint32_x001628E8 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x001628E8 (*GetStat)(void* fd);
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
               Sint32_x001628E8 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x001628E8;
typedef struct {
    CVFSDevice_x001628E8* device;
    void* fd;
} CVFSHandle_x001628E8;
extern void (*cvfs_errfn_x001628E8)(void*, const Char8_x001628E8*) __asm__("cvfs_errfn");
void cvFsError_x001628E8(const Char8_x001628E8* msg) __asm__("func_00161D20");
extern char ext_str0_x001628E8[] __asm__("D_00462440");
extern char ext_str1_x001628E8[] __asm__("D_00462420");
Sint32_x001628E8 func_001628E8_x001628E8(CVFSHandle_x001628E8* fs_handle, Sint32_x001628E8 len, void* buf) __asm__("func_001628E8");
/* cvFsReqRd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/cri_cvfs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001628E8 func_001628E8_x001628E8(CVFSHandle_x001628E8* fs_handle, Sint32_x001628E8 len, void* buf) {
    Sint32_x001628E8 ret;
    if (fs_handle == 0) {
        cvFsError_x001628E8(ext_str1_x001628E8);
        return 0;
    }
    if (fs_handle->device->ReqRd != 0) {
        ret = fs_handle->device->ReqRd(fs_handle->fd, len, buf);
    } else {
        ret = 0;
        cvFsError_x001628E8(ext_str0_x001628E8);
    }
    return ret;
}
typedef int (*CvFsFn_x00162950)();
typedef struct {
    CvFsFn_x00162950 exec_server;
    CvFsFn_x00162950 entry_err_func;
    CvFsFn_x00162950 get_file_size;
    CvFsFn_x00162950 get_free_size;
    CvFsFn_x00162950 open;
    CvFsFn_x00162950 close;
    CvFsFn_x00162950 seek;
    CvFsFn_x00162950 tell;
    CvFsFn_x00162950 req_rd;
    CvFsFn_x00162950 req_wr;
    CvFsFn_x00162950 stop_tr;
    CvFsFn_x00162950 get_stat;
    CvFsFn_x00162950 get_sct_len;
    CvFsFn_x00162950 set_sct_len;
    CvFsFn_x00162950 get_num_tr;
    CvFsFn_x00162950 change_dir;
    CvFsFn_x00162950 is_exist_file;
    CvFsFn_x00162950 get_num_files;
    CvFsFn_x00162950 load_dir_info;
    CvFsFn_x00162950 get_max_byte_rate;
    CvFsFn_x00162950 make_dir;
    CvFsFn_x00162950 remove_dir;
    CvFsFn_x00162950 delete_file;
    CvFsFn_x00162950 get_file_size_ex;
    CvFsFn_x00162950 opt_fn1;
    CvFsFn_x00162950 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x00162950;
typedef struct {
    CvFsDevIf_x00162950 *dev;
    void *fd;
} CvFsHn_x00162950;
void cvfs_error_x00162950(const char *msg) __asm__("func_00161D20");
extern void cvFsAddDev_x00162950(char *name, CvFsDevIf_x00162950 *(*getif)(void)) __asm__("cvFsAddDev");
extern CvFsDevIf_x00162950 *cvfs_add_device_x00162950(char *name, CvFsDevIf_x00162950 *(*getif)(void)) __asm__("cvfs_add_device");
void cvfs_error_x00162950(const char *msg) __asm__("func_00161D20");
void cvFsAddDev_x00162950(char *name, CvFsDevIf_x00162950 *(*getif)(void)) __asm__("cvFsAddDev");
CvFsDevIf_x00162950 *cvfs_add_device_x00162950(char *name, CvFsDevIf_x00162950 *(*getif)(void)) __asm__("cvfs_add_device");
extern char ext_str0_x00162950[] __asm__("D_00462478");
extern char ext_str1_x00162950[] __asm__("D_00462458");
int func_00162950_x00162950(CvFsHn_x00162950 *hn, int nsct, void *buf) __asm__("func_00162950");
/* cvFsReqWr: from https://github.com/new-coke/rez-decomp (src/cri/cvfs.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00162950_x00162950(CvFsHn_x00162950 *hn, int nsct, void *buf)
{
    int ret = 0;
    if (hn == 0) {
        cvfs_error_x00162950(ext_str1_x00162950);
        return 0;
    }
    if (hn->dev->req_wr)
        ret = hn->dev->req_wr(hn->fd, nsct, buf);
    else
        cvfs_error_x00162950(ext_str0_x00162950);
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00161B98", func_001629B8);
