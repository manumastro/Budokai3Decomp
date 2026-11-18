#include "common.h"

extern s32 D_00411E30;

s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */

extern s32 D_00411614;

INCLUDE_ASM("asm/nonmatchings/cri/dtr", DTR_ExecHndl);
s8 func_001654F0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_001654F8);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", DTR_Init);
void func_00165620(void) {
    D_00411614 -= 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165638);
void func_00165728(s8 *arg0) {
    func_0016DAD8();
    *arg0 = 0;
    func_0016DAF0();
}
void func_00165750(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s8 *)((u8 *)arg0 + 1) = 1;
}
typedef unsigned char Uint8_x00165760;
typedef char Sint8_x00165760;
typedef unsigned short Uint16_x00165760;
typedef unsigned int Uint32_x00165760;
typedef signed int Sint32_x00165760;
typedef struct _UUID_x00165760 {
    Uint32_x00165760 Data1;
    Uint16_x00165760 Data2;
    Uint16_x00165760 Data3;
    Uint8_x00165760 Data4[8];
} UUID_x00165760;
typedef struct {
        Sint8_x00165760 *data;
        Sint32_x00165760 len;
} SJCK_x00165760;
typedef struct {
        struct _sj_vtbl_x00165760 *vtbl;
} SJ_OBJ_x00165760;
typedef SJ_OBJ_x00165760 *SJ_x00165760;
typedef struct _sj_vtbl_x00165760 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00165760 sj);
        UUID_x00165760 *(*GetUuid)(SJ_x00165760 sj);
        void (*Reset)(SJ_x00165760 sj);
        void (*GetChunk)(SJ_x00165760 sj, Sint32_x00165760 id, Sint32_x00165760 nbyte, SJCK_x00165760 *ck);
        void (*UngetChunk)(SJ_x00165760 sj, Sint32_x00165760 id, SJCK_x00165760 *ck);
        void (*PutChunk)(SJ_x00165760 sj, Sint32_x00165760 id, SJCK_x00165760 *ck);
        Sint32_x00165760 (*GetNumData)(SJ_x00165760 sj, Sint32_x00165760 id);
        Sint32_x00165760 (*IsGetChunk)(SJ_x00165760 sj, Sint32_x00165760 id, Sint32_x00165760 nbyte, Sint32_x00165760 *rbyte);
        void (*EntryErrFunc)(SJ_x00165760 sj,
                                        void (*func)(void *obj, Sint32_x00165760 ecode), void *obj);
} SJ_IF_x00165760;
extern int* sceCdCallback_x00165760(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00165760(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165760;
extern int sceSifDmaStat_x00165760(unsigned int id) __asm__("sceSifDmaStat");
typedef struct {
               Sint8_x00165760 unk0;
               Sint8_x00165760 unk1;
               Sint8_x00165760 unk2;
               SJ_x00165760 unk4;
               SJ_x00165760 unk8;
               SJCK_x00165760 unkC;
               SJCK_x00165760 unk14;
               sceSifDmaData_x00165760 dma_data;
               Sint32_x00165760 unk2C;
               Sint32_x00165760 unk30;
               Sint32_x00165760 unk34;
               Sint32_x00165760 unk38;
               Sint32_x00165760 unk3C;
} DTR_OBJ_x00165760;
typedef DTR_OBJ_x00165760* DTR_x00165760;
extern int AddIntcHandler_x00165760(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00165760(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_00165760_x00165760(DTR_x00165760 dtr) __asm__("func_00165760");
/* DTR_Stop: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dtr.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00165760_x00165760(DTR_x00165760 dtr) {
    dtr->unk1 = 0;
    if (dtr->unk2 != 1) {
        return;
    }
    while (sceSifDmaStat_x00165760(dtr->unk2C) >= 0) {
    }
    (*(dtr->unk4)->vtbl->PutChunk)(dtr->unk4, 0, &dtr->unkC);
    dtr->unkC.data = 0;
    dtr->unkC.len = 0;
    (*(dtr->unk8)->vtbl->PutChunk)(dtr->unk8, 1, &dtr->unk14);
    dtr->unk14.data = 0;
    dtr->unk2 = 0;
    dtr->unk14.len = 0;
    dtr->unk3C += dtr->unkC.len;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165810);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_001658C0);
typedef int s32_x00165940;
typedef s32_x00165940 intptr_t_x00165940;
typedef signed int Sint32_x00165940;
extern int* sceCdCallback_x00165940(void (*func)(int)) __asm__("sceCdCallback");
extern Sint32_x00165940 SVM_SetCbSvr_x00165940(Sint32_x00165940, Sint32_x00165940 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00165940(Sint32_x00165940, Sint32_x00165940, Sint32_x00165940 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x00165940(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00165940(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct _sif_rpc_data_x00165940 {
    void* paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData_x00165940;
typedef void (*sceSifEndFunc_x00165940)(void*);
typedef struct _sif_client_data_x00165940 {
    struct _sif_rpc_data_x00165940 rpcd;
    unsigned int command;
    void* buff;
    void* gp;
    sceSifEndFunc_x00165940 func;
    void* para;
    struct _sif_serve_data_x00165940* serve;
} sceSifClientData_x00165940;
typedef void* (*sceSifRpcFunc_x00165940)(unsigned int, void*, int);
typedef struct _sif_serve_data_x00165940 {
    unsigned int command;
    sceSifRpcFunc_x00165940 func;
    void* buff;
    int size;
    sceSifRpcFunc_x00165940 cfunc;
    void* cbuff;
    int csize;
    sceSifClientData_x00165940* client;
    void* paddr;
    unsigned int fno;
    void* receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct _sif_serve_data_x00165940* link;
    struct _sif_serve_data_x00165940* next;
    struct _sif_queue_data_x00165940* base;
} sceSifServeData_x00165940;
typedef struct _sif_queue_data_x00165940 {
    int key;
    int active;
    struct _sif_serve_data_x00165940* link;
    struct _sif_serve_data_x00165940* start;
    struct _sif_serve_data_x00165940* end;
    struct _sif_queue_data_x00165940* next;
} sceSifQueueData_x00165940;
int sceSifCallRpc_x00165940(sceSifClientData_x00165940*, unsigned int, unsigned int, void*, int, void*, int, sceSifEndFunc_x00165940, void*) __asm__("sceSifCallRpc");
extern intptr_t_x00165940 dtx_rpc_rcv_buf_x00165940[64] __asm__("D_0047EF40");
extern intptr_t_x00165940 dtx_rpc_snd_buf_x00165940[64] __asm__("D_0047EE40");
extern sceSifClientData_x00165940 dtx_cd_x00165940 __asm__("D_004126C0");
extern sceSifClientData_x00165940 dtx_cd_x00165940 __asm__("D_004126C0");
void* func_00165940_x00165940(Sint32_x00165940 id, void* eewk, void* iopwk, Sint32_x00165940 wklen) __asm__("func_00165940");
/* dtx_create_rmt: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dtx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void* func_00165940_x00165940(Sint32_x00165940 id, void* eewk, void* iopwk, Sint32_x00165940 wklen) {
    dtx_rpc_snd_buf_x00165940[0] = id;
    dtx_rpc_snd_buf_x00165940[1] = eewk;
    dtx_rpc_snd_buf_x00165940[2] = iopwk;
    dtx_rpc_snd_buf_x00165940[3] = wklen;
    sceSifCallRpc_x00165940(&dtx_cd_x00165940, 2, 0, dtx_rpc_snd_buf_x00165940, 4 * sizeof(intptr_t_x00165940), dtx_rpc_rcv_buf_x00165940, 1 * sizeof(intptr_t_x00165940), 0, 0);
    return (void*)dtx_rpc_rcv_buf_x00165940[0];
}
typedef int s32_x001659B0;
typedef s32_x001659B0 intptr_t_x001659B0;
typedef signed int Sint32_x001659B0;
extern int* sceCdCallback_x001659B0(void (*func)(int)) __asm__("sceCdCallback");
extern Sint32_x001659B0 SVM_SetCbSvr_x001659B0(Sint32_x001659B0, Sint32_x001659B0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001659B0(Sint32_x001659B0, Sint32_x001659B0, Sint32_x001659B0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x001659B0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001659B0(int, int (*)(int), int) __asm__("AddDmacHandler");
typedef struct _sif_rpc_data_x001659B0 {
    void* paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData_x001659B0;
typedef void (*sceSifEndFunc_x001659B0)(void*);
typedef struct _sif_client_data_x001659B0 {
    struct _sif_rpc_data_x001659B0 rpcd;
    unsigned int command;
    void* buff;
    void* gp;
    sceSifEndFunc_x001659B0 func;
    void* para;
    struct _sif_serve_data_x001659B0* serve;
} sceSifClientData_x001659B0;
typedef void* (*sceSifRpcFunc_x001659B0)(unsigned int, void*, int);
typedef struct _sif_serve_data_x001659B0 {
    unsigned int command;
    sceSifRpcFunc_x001659B0 func;
    void* buff;
    int size;
    sceSifRpcFunc_x001659B0 cfunc;
    void* cbuff;
    int csize;
    sceSifClientData_x001659B0* client;
    void* paddr;
    unsigned int fno;
    void* receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct _sif_serve_data_x001659B0* link;
    struct _sif_serve_data_x001659B0* next;
    struct _sif_queue_data_x001659B0* base;
} sceSifServeData_x001659B0;
typedef struct _sif_queue_data_x001659B0 {
    int key;
    int active;
    struct _sif_serve_data_x001659B0* link;
    struct _sif_serve_data_x001659B0* start;
    struct _sif_serve_data_x001659B0* end;
    struct _sif_queue_data_x001659B0* next;
} sceSifQueueData_x001659B0;
int sceSifCallRpc_x001659B0(sceSifClientData_x001659B0*, unsigned int, unsigned int, void*, int, void*, int, sceSifEndFunc_x001659B0, void*) __asm__("sceSifCallRpc");
extern intptr_t_x001659B0 dtx_rpc_rcv_buf_x001659B0[64] __asm__("D_0047EF40");
extern intptr_t_x001659B0 dtx_rpc_snd_buf_x001659B0[64] __asm__("D_0047EE40");
extern sceSifClientData_x001659B0 dtx_cd_x001659B0 __asm__("D_004126C0");
extern sceSifClientData_x001659B0 dtx_cd_x001659B0 __asm__("D_004126C0");
void func_001659B0_x001659B0(void* arg0) __asm__("func_001659B0");
/* dtx_destroy_rmt: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/dtx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001659B0_x001659B0(void* arg0) {
    dtx_rpc_snd_buf_x001659B0[0] = arg0;
    sceSifCallRpc_x001659B0(&dtx_cd_x001659B0, 3, 0, dtx_rpc_snd_buf_x001659B0, 1 * sizeof(intptr_t_x001659B0), dtx_rpc_rcv_buf_x001659B0, 0, 0, 0);
}
void func_00165A00(void) {
    D_00411E30 += 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165A18);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165A88);
void func_00165AB8_x00165AB8(u8 *arg0) __asm__("func_00165AB8");
void func_00165AB8_x00165AB8(u8 *arg0)
{
  u8 *new_var;
  int new_var2;
  *((s32 *) (((u8 *) arg0) + 0x2C)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0x20)) = (new_var2 = 0); *((s32 *) (((u8 *) arg0) + 0x24)) = 0; } while (0);
  new_var = arg0;
  *((s32 *) (((u8 *) new_var) + 0x28)) = 0;
}
