#include "common.h"

extern s32 D_00412A54;
extern s32 D_00412A58;

typedef unsigned int size_t_x00165AD0;
void *memset_x00165AD0(void *, int, size_t_x00165AD0) __asm__("memset");
typedef struct DtxObj_x00165AD0 DtxObj_x00165AD0;
typedef void (*DtxCbf_x00165AD0)(void *obj, void *buf, int size);
void ADXMSG_PrintErr_x00165AD0(const char *format, ...) __asm__("scePrintf");
void SyncDCache_x00165AD0(void *start, void *end) __asm__("func_0010AB58");
void InvalidDCache_x00165AD0(void *start, void *end) __asm__("func_0010AC98");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165AD0;
typedef struct DtxPeer_x00165AD0 {
    char pad0[60];
    int count;
} DtxPeer_x00165AD0;
struct DtxObj_x00165AD0 {
    signed char used;
    signed char state;
    signed char flag;
    char rsv;
    int server;
    int count;
    char *eewk;
    int size;
    DtxPeer_x00165AD0 *peer;
    int iopwk;
    int wklen;
    DtxCbf_x00165AD0 recv;
    void *recv_obj;
    DtxCbf_x00165AD0 send;
    void *send_obj;
    sceSifDmaData_x00165AD0 dma;
    unsigned int dmaid;
};
extern DtxObj_x00165AD0 dtx_clnt_x00165AD0[16] __asm__("D_00411E40");
extern char eewk_is_not_alignment_64_byte_x00165AD0[] __asm__("D_00463388");
extern char iopwk_is_not_alignment_32_byte_x00165AD0[] __asm__("D_004633A8");
extern char wklen_d_is_not_64_N_x00165AD0[] __asm__("D_004633C8");
extern char illeagal_ID_d_x00165AD0[] __asm__("D_004633E0");
extern char DTX_Create_can_t_create_DTX_of_server_x00165AD0[] __asm__("D_004633F8");
int dtx_create_rmt_x00165AD0(unsigned int id, char *eewk, int iopwk, int wklen) __asm__("func_00165940");
void dtx_def_rcvcbf_x00165AD0(void *obj, void *buf, int size) __asm__("func_00165A00");
void dtx_def_sndcbf_x00165AD0(void *obj, void *buf, int size) __asm__("func_00165A18");
DtxObj_x00165AD0 *DTX_Create_x00165AD0(unsigned int id, char *eewk, int iopwk, int wklen) __asm__("DTX_Create");
/* DTX_Create_x00165AD0: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
DtxObj_x00165AD0 *DTX_Create_x00165AD0(unsigned int id, char *eewk, int iopwk, int wklen)
{
    DtxObj_x00165AD0 *dtx;
    int size;
    if ((int)eewk & 63) {
        ADXMSG_PrintErr_x00165AD0(eewk_is_not_alignment_64_byte_x00165AD0);
        return 0;
    }
    if (iopwk & 31) {
        ADXMSG_PrintErr_x00165AD0(iopwk_is_not_alignment_32_byte_x00165AD0);
        return 0;
    }
    if (wklen & 63) {
        ADXMSG_PrintErr_x00165AD0(wklen_d_is_not_64_N_x00165AD0, wklen);
        return 0;
    }
    if (id >= 16) {
        ADXMSG_PrintErr_x00165AD0(illeagal_ID_d_x00165AD0, id);
        return 0;
    }
    dtx = &dtx_clnt_x00165AD0[id];
    if (dtx->used != 0) {
        return 0;
    }
    dtx->server = dtx_create_rmt_x00165AD0(id, eewk, iopwk, wklen);
    if (dtx->server == 0) {
        ADXMSG_PrintErr_x00165AD0(DTX_Create_can_t_create_DTX_of_server_x00165AD0);
        return 0;
    }
    size = wklen - 64;
    dtx->size = size;
    dtx->wklen = wklen;
    dtx->iopwk = iopwk;
    dtx->peer = (DtxPeer_x00165AD0 *)((int)(eewk + size) | 0x20000000);
    dtx->count = 0;
    dtx->eewk = eewk;
    dtx->state = 0;
    memset_x00165AD0(eewk, 0, size);
    SyncDCache_x00165AD0(dtx->eewk, dtx->eewk + dtx->size + 63);
    InvalidDCache_x00165AD0(dtx->eewk, dtx->eewk + dtx->size + 63);
    dtx->recv = dtx_def_rcvcbf_x00165AD0;
    dtx->send = dtx_def_sndcbf_x00165AD0;
    dtx->recv_obj = 0;
    dtx->send_obj = 0;
    dtx->flag = 1;
    dtx->used = 1;
    return dtx;
}
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
typedef struct DtxObj_x00165CF0 DtxObj_x00165CF0;
typedef void (*DtxCbf_x00165CF0)(void *obj, void *buf, int size);
extern int dtx_send_sw_x00165CF0 __asm__("D_00411E2C");
void SyncDCache_x00165CF0(void *start, void *end) __asm__("func_0010AB58");
void InvalidDCache_x00165CF0(void *start, void *end) __asm__("func_0010AC98");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165CF0;
unsigned int sceSifSetDma_x00165CF0(sceSifDmaData_x00165CF0 *sdd, int len) __asm__("sceSifSetDma");
typedef struct DtxPeer_x00165CF0 {
    char pad0[60];
    int count;
} DtxPeer_x00165CF0;
struct DtxObj_x00165CF0 {
    signed char used;
    signed char state;
    signed char flag;
    char rsv;
    int server;
    int count;
    char *eewk;
    int size;
    DtxPeer_x00165CF0 *peer;
    int iopwk;
    int wklen;
    DtxCbf_x00165CF0 recv;
    void *recv_obj;
    DtxCbf_x00165CF0 send;
    void *send_obj;
    sceSifDmaData_x00165CF0 dma;
    unsigned int dmaid;
};
extern int dtx_exechndl_cnt_x00165CF0 __asm__("D_00411E38");
void func_00165CF0_x00165CF0(DtxObj_x00165CF0 *dtx) __asm__("func_00165CF0");
/* DTX_ExecHndl: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00165CF0_x00165CF0(DtxObj_x00165CF0 *dtx)
{
    dtx_exechndl_cnt_x00165CF0++;
    if (dtx->state == 1) {
        if (dtx->count < dtx->peer->count) {
            InvalidDCache_x00165CF0(dtx->eewk, dtx->eewk + dtx->size - 1);
            dtx->recv(dtx->recv_obj, dtx->eewk, dtx->size);
            dtx->count = dtx->peer->count;
            dtx->state = 0;
        }
    }
    if (dtx->state == 0 && dtx->flag == 1) {
        if (dtx_send_sw_x00165CF0 == 1) {
            dtx->send(dtx->send_obj, dtx->eewk, dtx->size);
            dtx->count++;
            dtx->peer->count = dtx->count;
            SyncDCache_x00165CF0(dtx->eewk, dtx->eewk + dtx->size - 1);
            InvalidDCache_x00165CF0(dtx->eewk, dtx->eewk + dtx->size + 63);
            dtx->dma.data = (unsigned int)dtx->eewk & 0x0fffffff;
            dtx->dma.addr = dtx->iopwk;
            dtx->dma.size = dtx->wklen;
            dtx->dma.mode = 0;
            dtx->dmaid = sceSifSetDma_x00165CF0(&dtx->dma, 1);
            dtx->state = 1;
        }
    }
}
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
extern s32 (*D_00412A54_x00166150)(s32, s32, s32) __asm__("D_00412A54");
extern s32 D_00412A58_x00166150 __asm__("D_00412A58");
void func_00166150_x00166150(s32 arg0, s32 arg1) __asm__("func_00166150");
void func_00166150_x00166150(s32 arg0, s32 arg1) {
    if (D_00412A54_x00166150 != NULL) {
        D_00412A54_x00166150(D_00412A58_x00166150, arg1, arg0);
    }
}
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
typedef void (*CvFsErrFn_x001661D8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001661D8)(CvFsErrFn_x001661D8 func, void *obj);
typedef int (*CvFsPathFn_x001661D8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001661D8)(void);
typedef int (*CvFsOpenFn_x001661D8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001661D8)(int fd);
typedef int (*CvFsFdIntFn_x001661D8)(int fd);
typedef int (*CvFsSeekFn_x001661D8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001661D8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001661D8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001661D8)(void);
typedef int (*CvFsLoadDirInfoFn_x001661D8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001661D8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001661D8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001661D8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001661D8 entry_err_func;
    CvFsPathFn_x001661D8 get_file_size;
    CvFsGetFreeSizeFn_x001661D8 get_free_size;
    CvFsOpenFn_x001661D8 open;
    CvFsFdFn_x001661D8 close_x001661D8;
    CvFsSeekFn_x001661D8 seek;
    CvFsFdIntFn_x001661D8 tell;
    CvFsXferFn_x001661D8 req_rd;
    CvFsXferFn_x001661D8 req_wr;
    CvFsFdFn_x001661D8 stop_tr;
    CvFsFdIntFn_x001661D8 get_stat;
    CvFsFdIntFn_x001661D8 get_sct_len;
    CvFsSetSctLenFn_x001661D8 set_sct_len;
    CvFsFdIntFn_x001661D8 get_num_tr;
    CvFsPathFn_x001661D8 change_dir;
    CvFsPathFn_x001661D8 is_exist_file;
    CvFsGetNumFilesFn_x001661D8 get_num_files;
    CvFsLoadDirInfoFn_x001661D8 load_dir_info;
    CvFsFdIntFn_x001661D8 get_max_byte_rate;
    CvFsPathFn_x001661D8 make_dir;
    CvFsPathFn_x001661D8 remove_dir;
    CvFsPathFn_x001661D8 delete_file;
    CvFsGetFileSizeExFn_x001661D8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001661D8 opt_fn2;
} CvFsVtbl_x001661D8;
extern CvFsVtbl_x001661D8 *addDevice_x001661D8(char *devname, CvFsVtbl_x001661D8 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x001661D8;
extern void qsort_x001661D8(void *, size_t_x001661D8, size_t_x001661D8, int (*)(const void *, const void *)) __asm__("qsort");
int close_x001661D8(int fd) __asm__("close");
typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE_x001661D8;
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode_x001661D8;
typedef struct SrdObj_x001661D8 SrdObj_x001661D8;
typedef struct DvCiFile_x001661D8 {
    signed char used;
    signed char cached;
    signed char state;
    signed char instat;
    unsigned int size;
    int nsct;
    int pos;
    int req;
    int done;
    char *buf;
    SrdObj_x001661D8 *stm;
    sceCdlFILE_x001661D8 fp;
    sceCdRMode_x001661D8 rmode;
} DvCiFile_x001661D8;
extern DvCiFile_x001661D8 dvci_files_x001661D8[40] __asm__("D_00412AD0");
int func_001661D8_x001661D8(void) __asm__("func_001661D8");
/* dvci_is_exec_hn: from https://github.com/crashbashash/DW4_Decomp (src/cri/dvci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001661D8_x001661D8(void)
{
    int i;
    for (i = 0; i < 40; i++) {
        if (dvci_files_x001661D8[i].used == 1 && dvci_files_x001661D8[i].state == 2) {
            return 1;
        }
    }
    return 0;
}
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
