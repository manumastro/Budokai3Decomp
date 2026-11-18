#include "common.h"

extern s32 D_00412A54;
extern s32 D_00412A58;

INCLUDE_ASM("asm/nonmatchings/cri/dtx", DTX_Create);
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_00165C68);
int func_00165CD0_x00165CD0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00165CD0");
int func_00165CD0_x00165CD0(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x20)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x24)) = arg2;
}
void func_00165CE0_x00165CE0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00165CE0");
void func_00165CE0_x00165CE0(u8 *arg0, s32 arg1, s32 arg2)
{
  if (1)
  {
  }
  *((s32 *) (((u8 *) arg0) + 0x28)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x2C)) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_00165CF0);
typedef signed int Sint32_x00165E50;
extern int* sceCdCallback_x00165E50(void (*func)(int)) __asm__("sceCdCallback");
extern Sint32_x00165E50 SVM_SetCbSvr_x00165E50(Sint32_x00165E50, Sint32_x00165E50 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00165E50(Sint32_x00165E50, Sint32_x00165E50, Sint32_x00165E50 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00165E50(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00165E50(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x00165E50(const char* fmt, ...) __asm__("scePrintf");
typedef struct _sif_rpc_data_x00165E50 {
    void* paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData_x00165E50;
typedef void (*sceSifEndFunc_x00165E50)(void*);
typedef struct _sif_client_data_x00165E50 {
    struct _sif_rpc_data_x00165E50 rpcd;
    unsigned int command;
    void* buff;
    void* gp;
    sceSifEndFunc_x00165E50 func;
    void* para;
    struct _sif_serve_data_x00165E50* serve;
} sceSifClientData_x00165E50;
typedef void* (*sceSifRpcFunc_x00165E50)(unsigned int, void*, int);
typedef struct _sif_serve_data_x00165E50 {
    unsigned int command;
    sceSifRpcFunc_x00165E50 func;
    void* buff;
    int size;
    sceSifRpcFunc_x00165E50 cfunc;
    void* cbuff;
    int csize;
    sceSifClientData_x00165E50* client;
    void* paddr;
    unsigned int fno;
    void* receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct _sif_serve_data_x00165E50* link;
    struct _sif_serve_data_x00165E50* next;
    struct _sif_queue_data_x00165E50* base;
} sceSifServeData_x00165E50;
typedef struct _sif_queue_data_x00165E50 {
    int key;
    int active;
    struct _sif_serve_data_x00165E50* link;
    struct _sif_serve_data_x00165E50* start;
    struct _sif_serve_data_x00165E50* end;
    struct _sif_queue_data_x00165E50* next;
} sceSifQueueData_x00165E50;
int sceSifBindRpc_x00165E50(sceSifClientData_x00165E50*, unsigned int, unsigned int) __asm__("sceSifBindRpc");
extern Sint32_x00165E50 dtx_rpc_id_x00165E50 __asm__("D_00411E24");
extern sceSifClientData_x00165E50 dtx_cd_x00165E50 __asm__("D_004126C0");
extern Sint32_x00165E50 dtx_init_cnt_x00165E50 __asm__("D_00411E3C");
extern Sint32_x00165E50 dtx_init_cnt_x00165E50 __asm__("D_00411E3C");
extern sceSifClientData_x00165E50 dtx_cd_x00165E50 __asm__("D_004126C0");
extern char ext_str0_x00165E50[] __asm__("D_00463420");
void func_00165E50_x00165E50() __asm__("func_00165E50");
/* DTX_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dtx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00165E50_x00165E50() {
    Sint32_x00165E50 x;
    Sint32_x00165E50 y;
    if (dtx_init_cnt_x00165E50 == 0) {
        while (1) {
            if (sceSifBindRpc_x00165E50(&dtx_cd_x00165E50, dtx_rpc_id_x00165E50, 0) < 0) {
                scePrintf_x00165E50(ext_str0_x00165E50);
                while (1) {}
            }
            if (dtx_cd_x00165E50.serve != 0) {
                break;
            }
            y = -1;
            x = 0xFFFF;
            while (x != y) {
                x -= 4;
            }
        }
    }
    dtx_init_cnt_x00165E50 += 1;
}
s32 func_00165C68_x00165F40(s8 *) __asm__("func_00165C68");
extern s32 D_00411E3C_x00165F40 __asm__("D_00411E3C");
extern s8 D_00411E40_x00165F40 __asm__("D_00411E40");
void func_00165F40_x00165F40(void) __asm__("func_00165F40");
void func_00165F40_x00165F40(void)
{
  s32 temp_v0;
  s32 var_s1;
  s8 *var_s0;
  short new_var;
  temp_v0 = D_00411E3C_x00165F40 - 1;
  D_00411E3C_x00165F40 = temp_v0;
  if (temp_v0 == 0)
  {
    new_var = 1;
    var_s0 = &D_00411E40_x00165F40;
    var_s1 = 0xF;
    do
    {
      if ((*var_s0) == new_var)
      {
        func_00165C68_x00165F40(var_s0);
      }
      var_s1 -= 1;
      var_s0 += 0x44;
    }
    while (var_s1 >= 0);
  }
}
typedef int s32_x00165FB8;
typedef s32_x00165FB8 intptr_t_x00165FB8;
typedef unsigned int Uint32_x00165FB8;
typedef signed int Sint32_x00165FB8;
extern int* sceCdCallback_x00165FB8(void (*func)(int)) __asm__("sceCdCallback");
void SVM_Lock_x00165FB8() __asm__("func_0016FF40");
void SVM_Unlock_x00165FB8() __asm__("func_0016FF58");
extern Sint32_x00165FB8 SVM_SetCbSvr_x00165FB8(Sint32_x00165FB8, Sint32_x00165FB8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00165FB8(Sint32_x00165FB8, Sint32_x00165FB8, Sint32_x00165FB8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00165FB8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00165FB8(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct _sif_rpc_data_x00165FB8 {
    void* paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData_x00165FB8;
typedef void (*sceSifEndFunc_x00165FB8)(void*);
typedef struct _sif_client_data_x00165FB8 {
    struct _sif_rpc_data_x00165FB8 rpcd;
    unsigned int command;
    void* buff;
    void* gp;
    sceSifEndFunc_x00165FB8 func;
    void* para;
    struct _sif_serve_data_x00165FB8* serve;
} sceSifClientData_x00165FB8;
typedef void* (*sceSifRpcFunc_x00165FB8)(unsigned int, void*, int);
typedef struct _sif_serve_data_x00165FB8 {
    unsigned int command;
    sceSifRpcFunc_x00165FB8 func;
    void* buff;
    int size;
    sceSifRpcFunc_x00165FB8 cfunc;
    void* cbuff;
    int csize;
    sceSifClientData_x00165FB8* client;
    void* paddr;
    unsigned int fno;
    void* receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct _sif_serve_data_x00165FB8* link;
    struct _sif_serve_data_x00165FB8* next;
    struct _sif_queue_data_x00165FB8* base;
} sceSifServeData_x00165FB8;
typedef struct _sif_queue_data_x00165FB8 {
    int key;
    int active;
    struct _sif_serve_data_x00165FB8* link;
    struct _sif_serve_data_x00165FB8* start;
    struct _sif_serve_data_x00165FB8* end;
    struct _sif_queue_data_x00165FB8* next;
} sceSifQueueData_x00165FB8;
int sceSifCallRpc_x00165FB8(sceSifClientData_x00165FB8*, unsigned int, unsigned int, void*, int, void*, int, sceSifEndFunc_x00165FB8, void*) __asm__("sceSifCallRpc");
extern intptr_t_x00165FB8 dtx_rpc_rcv_buf_x00165FB8[64] __asm__("D_0047EF40");
extern intptr_t_x00165FB8 dtx_rpc_snd_buf_x00165FB8[64] __asm__("D_0047EE40");
extern sceSifClientData_x00165FB8 dtx_cd_x00165FB8 __asm__("D_004126C0");
extern sceSifClientData_x00165FB8 dtx_cd_x00165FB8 __asm__("D_004126C0");
intptr_t_x00165FB8 func_00165FB8_x00165FB8(Uint32_x00165FB8 call_id, intptr_t_x00165FB8* snd_buf, Sint32_x00165FB8 snd_buf_len, intptr_t_x00165FB8* rcv_buf, Sint32_x00165FB8 rcv_buf_len) __asm__("func_00165FB8");
/* DTX_CallUrpc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dtx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
intptr_t_x00165FB8 func_00165FB8_x00165FB8(Uint32_x00165FB8 call_id, intptr_t_x00165FB8* snd_buf, Sint32_x00165FB8 snd_buf_len, intptr_t_x00165FB8* rcv_buf, Sint32_x00165FB8 rcv_buf_len) {
    Sint32_x00165FB8 i;
    SVM_Lock_x00165FB8();
    for (i = 0; i < snd_buf_len; i++) {
        dtx_rpc_snd_buf_x00165FB8[i] = snd_buf[i];
    }
    sceSifCallRpc_x00165FB8(&dtx_cd_x00165FB8,
                  call_id + 0x400,
                  0,
                  dtx_rpc_snd_buf_x00165FB8,
                  snd_buf_len * sizeof(intptr_t_x00165FB8),
                  dtx_rpc_rcv_buf_x00165FB8,
                  rcv_buf_len * sizeof(intptr_t_x00165FB8),
                  0,
                  0);
    for (i = 0; i < rcv_buf_len; i++) {
        rcv_buf[i] = dtx_rpc_rcv_buf_x00165FB8[i];
    }
    SVM_Unlock_x00165FB8();
    return dtx_rpc_rcv_buf_x00165FB8[0];
}
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_001660C0);
typedef signed int Sint32_x00166120;
typedef char Char8_x00166120;
extern int* sceCdCallback_x00166120(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x00166120 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x00166120* device_name, void*, Sint32_x00166120);
               void (*Close)(void* fd);
               Sint32_x00166120 (*Seek)(void* fd, Sint32_x00166120 offset, Sint32_x00166120 whence);
               Sint32_x00166120 (*Tell)(void* fd);
               Sint32_x00166120 (*ReqRd)(void* fd, Sint32_x00166120 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x00166120 (*GetStat)(void* fd);
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
               Sint32_x00166120 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x00166120;
void dvCiSetRootDir_x00166120(const Char8_x00166120* dir) __asm__("func_00167AD8");
extern Sint32_x00166120 SVM_SetCbSvr_x00166120(Sint32_x00166120, Sint32_x00166120 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166120(Sint32_x00166120, Sint32_x00166120, Sint32_x00166120 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166120(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166120(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Char8_x00166120* volatile dvg_ci_build_x00166120 __asm__("D_00412A50");
extern void (*dvg_ci_err_func_x00166120)(void*, const Char8_x00166120*, void*) __asm__("dvg_ci_err_func");
extern CVFSDevice_x00166120 dvg_ci_vtbl_x00166120 __asm__("D_00412A68");
CVFSDevice_x00166120* func_00166120_x00166120() __asm__("func_00166120");
/* dvCiGetInterface: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
CVFSDevice_x00166120* func_00166120_x00166120() {
    dvg_ci_build_x00166120;
    dvCiSetRootDir_x00166120(0);
    return &dvg_ci_vtbl_x00166120;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_00166150);
typedef unsigned char u_char_x00166180;
typedef unsigned int u_int_x00166180;
typedef signed int Sint32_x00166180;
typedef char Char8_x00166180;
typedef struct {
    u_int_x00166180 lsn;
    u_int_x00166180 size;
    char name[16];
    u_char_x00166180 date[8];
    u_int_x00166180 flag;
} sceCdlFILE_x00166180;
int sceCdLayerSearchFile_x00166180(sceCdlFILE_x00166180* fp, const char* name, int layer) __asm__("func_001186F8");
extern int* sceCdCallback_x00166180(void (*func)(int)) __asm__("sceCdCallback");
void SRD_SetHistory_x00166180(Sint32_x00166180 arg0) __asm__("func_00164D38");
extern Sint32_x00166180 SVM_SetCbSvr_x00166180(Sint32_x00166180, Sint32_x00166180 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166180(Sint32_x00166180, Sint32_x00166180, Sint32_x00166180 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166180(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166180(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void (*dvg_ci_err_func_x00166180)(void*, const Char8_x00166180*, void*) __asm__("dvg_ci_err_func");
extern Sint32_x00166180 dvg_ci_dvd_layer_x00166180 __asm__("D_00412A5C");
Sint32_x00166180 func_00166180_x00166180(sceCdlFILE_x00166180* fp, const Char8_x00166180* fname) __asm__("func_00166180");
/* dvCiCdSearchFile: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00166180 func_00166180_x00166180(sceCdlFILE_x00166180* fp, const Char8_x00166180* fname) {
    Sint32_x00166180 err;
    SRD_SetHistory_x00166180(0x8000);
    err = sceCdLayerSearchFile_x00166180(fp, fname, dvg_ci_dvd_layer_x00166180);
    SRD_SetHistory_x00166180(0x8001);
    return err;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_001661D8);
INCLUDE_ASM("asm/nonmatchings/cri/dtx", func_00166228);
typedef unsigned char u_char_x001662F0;
typedef unsigned int u_int_x001662F0;
typedef char Sint8_x001662F0;
typedef signed int Sint32_x001662F0;
typedef char Char8_x001662F0;
typedef struct {
    u_char_x001662F0 trycount;
    u_char_x001662F0 spindlctrl;
    u_char_x001662F0 datapattern;
    u_char_x001662F0 pad;
} sceCdRMode_x001662F0;
typedef struct {
    u_int_x001662F0 lsn;
    u_int_x001662F0 size;
    char name[16];
    u_char_x001662F0 date[8];
    u_int_x001662F0 flag;
} sceCdlFILE_x001662F0;
extern int* sceCdCallback_x001662F0(void (*func)(int)) __asm__("sceCdCallback");
typedef void* SRD_x001662F0;
typedef struct {
               Sint8_x001662F0 used;
               Sint8_x001662F0 unk1;
               Sint8_x001662F0 stat;
               Sint8_x001662F0 unk3;
               Sint32_x001662F0 unk4;
               Sint32_x001662F0 unk8;
               Sint32_x001662F0 unkC;
               Sint32_x001662F0 unk10;
               Sint32_x001662F0 unk14;
               void* unk18;
               SRD_x001662F0 srd;
               sceCdlFILE_x001662F0 unk20;
               sceCdRMode_x001662F0 cdrmode;
} DVG_CI_OBJ_x001662F0;
typedef DVG_CI_OBJ_x001662F0* DVG_CI_x001662F0;
extern Sint32_x001662F0 SVM_SetCbSvr_x001662F0(Sint32_x001662F0, Sint32_x001662F0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001662F0(Sint32_x001662F0, Sint32_x001662F0, Sint32_x001662F0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x001662F0 SVM_TestAndSet_x001662F0(Sint32_x001662F0* mem) __asm__("func_00170A00");
extern int AddIntcHandler_x001662F0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001662F0(int, int (*)(int), int) __asm__("AddDmacHandler");
void dvCiExecHndl_x001662F0(DVG_CI_x001662F0 dvg_ci) __asm__("func_00166228");
extern void (*dvg_ci_err_func_x001662F0)(void*, const Char8_x001662F0*, void*) __asm__("dvg_ci_err_func");
extern Sint32_x001662F0 dvci_execserver_enter_flg_x001662F0 __asm__("D_00412A60");
extern DVG_CI_OBJ_x001662F0 dvg_ci_obj_x001662F0[40] __asm__("D_00412AD0");
void dvCiExecHndl_x001662F0(DVG_CI_x001662F0 dvg_ci) __asm__("func_00166228");
void func_001662F0_x001662F0() __asm__("func_001662F0");
/* dvCiExecServer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001662F0_x001662F0() {
    DVG_CI_x001662F0 dvg_ci;
    Sint32_x001662F0 i;
    if (SVM_TestAndSet_x001662F0(&dvci_execserver_enter_flg_x001662F0) == 0) {
        return;
    }
    for (i = 0; i < 40; i++) {
        dvg_ci = &dvg_ci_obj_x001662F0[i];
        if (dvg_ci->used == 1) {
            dvCiExecHndl_x001662F0(dvg_ci);
        }
    }
    dvci_execserver_enter_flg_x001662F0 = 0;
}
void func_00166368(s32 arg0, s32 arg1) {
    D_00412A54 = arg0;
    D_00412A58 = arg1;
}
typedef unsigned int size_t_x00166380;
typedef signed int Sint32_x00166380;
typedef char Char8_x00166380;
extern int* sceCdCallback_x00166380(void (*func)(int)) __asm__("sceCdCallback");
extern Sint32_x00166380 SVM_SetCbSvr_x00166380(Sint32_x00166380, Sint32_x00166380 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00166380(Sint32_x00166380, Sint32_x00166380, Sint32_x00166380 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00166380(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00166380(int, int (*)(int), int) __asm__("AddDmacHandler");
size_t_x00166380 strlen_x00166380(const char* s) __asm__("func_00127BA0");
extern void (*dvg_ci_err_func_x00166380)(void*, const Char8_x00166380*, void*) __asm__("dvg_ci_err_func");
void func_00166380_x00166380(Char8_x00166380* path) __asm__("func_00166380");
/* dvci_to_large_to_yen: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00166380_x00166380(Char8_x00166380* path) {
    size_t_x00166380 len = strlen_x00166380(path);
    Sint32_x00166380 i;
    for (i = 0; i < len; i++) {
        if (path[i] == '/') {
            path[i] = '\\\\';
        }
        if (path[i] >= 'a' && path[i] <= 'z') {
            path[i] -= 'a' - 'A';
        }
    }
}
typedef unsigned char u_char_x001663F8;
typedef unsigned int u_int_x001663F8;
typedef signed int Sint32_x001663F8;
typedef char Char8_x001663F8;
typedef struct {
    u_int_x001663F8 lsn;
    u_int_x001663F8 size;
    char name[16];
    u_char_x001663F8 date[8];
    u_int_x001663F8 flag;
} sceCdlFILE_x001663F8;
extern int* sceCdCallback_x001663F8(void (*func)(int)) __asm__("sceCdCallback");
int sceCdSync_x001663F8(int mode) __asm__("func_00118C08");
void SRD_SetHistory_x001663F8(Sint32_x001663F8 arg0) __asm__("func_00164D38");
void dvci_conv_fname_x001663F8(const Char8_x001663F8* fname, Char8_x001663F8* path) __asm__("func_00166DA0");
Sint32_x001663F8 dvci_get_fstate_x001663F8(const Char8_x001663F8* fname, sceCdlFILE_x001663F8* fp) __asm__("func_00167688");
extern Sint32_x001663F8 SVM_SetCbSvr_x001663F8(Sint32_x001663F8, Sint32_x001663F8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001663F8(Sint32_x001663F8, Sint32_x001663F8, Sint32_x001663F8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x001663F8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001663F8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern void (*dvg_ci_err_func_x001663F8)(void*, const Char8_x001663F8*, void*) __asm__("dvg_ci_err_func");
extern Char8_x001663F8 dvg_ci_fname_x001663F8[297] __asm__("D_00413610");
Sint32_x001663F8 dvCiCdSearchFile_x001663F8(sceCdlFILE_x001663F8* fp, const Char8_x001663F8* fname) __asm__("func_00166180");
Sint32_x001663F8 func_001663F8_x001663F8(const Char8_x001663F8* fname) __asm__("func_001663F8");
/* dvCiIsExistFile: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dvci.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001663F8 func_001663F8_x001663F8(const Char8_x001663F8* fname) {
    sceCdlFILE_x001663F8 fp;
    Sint32_x001663F8 err;
    if (fname == 0) {
        return 0;
    }
    dvci_get_fstate_x001663F8(fname, &fp);
    if (fp.size == 0) {
        dvci_conv_fname_x001663F8(fname, dvg_ci_fname_x001663F8);
        SRD_SetHistory_x001663F8(0x8100);
        sceCdSync_x001663F8(0);
        SRD_SetHistory_x001663F8(0x8101);
        err = dvCiCdSearchFile_x001663F8(&fp, dvg_ci_fname_x001663F8);
        if (err == 0) {
            return 0;
        }
    }
    return 1;
}
