#include "common.h"

extern s32 D_00411E30;

s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */

extern s32 D_00411614;

typedef struct SfdSj_x00165180 SfdSj_x00165180;
typedef struct SfdSjChunk_x00165180 {
    char *data;
    int len;
} SfdSjChunk_x00165180;
typedef struct SfdSjVtbl_x00165180 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00165180 *sj);
    int (*getUuid)(SfdSj_x00165180 *sj);
    void (*reset)(SfdSj_x00165180 *sj);
    void (*getChunk)(SfdSj_x00165180 *sj, int id, int n, SfdSjChunk_x00165180 *ck);
    void (*ungetChunk)(SfdSj_x00165180 *sj, int id, SfdSjChunk_x00165180 *ck);
    void (*putChunk)(SfdSj_x00165180 *sj, int id, SfdSjChunk_x00165180 *ck);
    int (*getNumData)(SfdSj_x00165180 *sj, int id);
} SfdSjVtbl_x00165180;
struct SfdSj_x00165180 {
    SfdSjVtbl_x00165180 *vtbl;
};
void SJ_SplitChunk_x00165180(SfdSjChunk_x00165180 *ck, int nbyte, SfdSjChunk_x00165180 *head, SfdSjChunk_x00165180 *rest) __asm__("func_0016F050");
typedef struct DtrObj_x00165180 DtrObj_x00165180;
void ADXMSG_PrintErr_x00165180(const char *format, ...) __asm__("scePrintf");
void SyncDCache_x00165180(void *start, void *end) __asm__("func_0010AB58");
struct stat_x00165180;
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165180;
unsigned int sceSifSetDma_x00165180(sceSifDmaData_x00165180 *sdd, int len) __asm__("sceSifSetDma");
struct DtrObj_x00165180 {
    signed char used;
    signed char stat_x00165180;
    signed char transfer;
    char rsv;
    SfdSj_x00165180 *sjs;
    SfdSj_x00165180 *sjd;
    SfdSjChunk_x00165180 cks;
    SfdSjChunk_x00165180 ckd;
    sceSifDmaData_x00165180 dma;
    unsigned int dmaid;
    int srclin;
    int dstlin;
    int unit;
    int total;
};
extern char ext_str0_x00165180[] __asm__("D_004632D8");
extern char ext_str1_x00165180[] __asm__("D_00463258");
extern char ext_str2_x00165180[] __asm__("D_004632B0");
extern char ext_str3_x00165180[] __asm__("D_00463258");
extern char ext_str4_x00165180[] __asm__("D_00463288");
extern char ext_str5_x00165180[] __asm__("D_00463258");
extern char ext_str6_x00165180[] __asm__("D_00463230");
extern char ext_str7_x00165180[] __asm__("D_00463210");
void DTR_ExecHndl_x00165180(DtrObj_x00165180 *dtr) __asm__("DTR_ExecHndl");
/* DTR_ExecHndl_x00165180: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void DTR_ExecHndl_x00165180(DtrObj_x00165180 *dtr)
{
    SfdSjChunk_x00165180 cks;
    SfdSjChunk_x00165180 cks2;
    SfdSjChunk_x00165180 ckd;
    SfdSjChunk_x00165180 ckd2;
    int n;
    if (dtr->stat_x00165180 != 1) {
        return;
    }
    if (dtr->transfer == 1) {
        dtr->sjs->vtbl->putChunk(dtr->sjs, 0, &dtr->cks);
        dtr->cks.data = 0;
        dtr->cks.len = 0;
        dtr->sjd->vtbl->putChunk(dtr->sjd, 1, &dtr->ckd);
        dtr->ckd.data = 0;
        dtr->ckd.len = 0;
        dtr->total += dtr->cks.len;
        dtr->transfer = 0;
        if (dtr->cks.len != 0) {
            ADXMSG_PrintErr_x00165180(ext_str7_x00165180);
            for (;;) {
            }
        }
    }
    if (dtr->transfer != 0) {
        return;
    }
    dtr->sjs->vtbl->getChunk(dtr->sjs, 1, 0x7fffffff, &cks);
    dtr->sjd->vtbl->getChunk(dtr->sjd, 0, 0x7fffffff, &ckd);
    n = cks.len < ckd.len ? cks.len : ckd.len;
    n = n / dtr->unit * dtr->unit;
    SJ_SplitChunk_x00165180(&cks, n, &cks, &cks2);
    dtr->sjs->vtbl->ungetChunk(dtr->sjs, 1, &cks2);
    SJ_SplitChunk_x00165180(&ckd, n, &ckd, &ckd2);
    dtr->sjd->vtbl->ungetChunk(dtr->sjd, 0, &ckd2);
    if (n <= 0) {
        return;
    }
    if (cks.len & 63) {
        ADXMSG_PrintErr_x00165180(ext_str6_x00165180);
        ADXMSG_PrintErr_x00165180(ext_str5_x00165180, cks.data, ckd.data, cks.len);
        for (;;) {
        }
    }
    if ((int)cks.data & 63) {
        ADXMSG_PrintErr_x00165180(ext_str4_x00165180);
        ADXMSG_PrintErr_x00165180(ext_str3_x00165180, cks.data, ckd.data, cks.len);
        for (;;) {
        }
    }
    if ((int)ckd.data & 63) {
        ADXMSG_PrintErr_x00165180(ext_str2_x00165180);
        ADXMSG_PrintErr_x00165180(ext_str1_x00165180, cks.data, ckd.data, cks.len);
        for (;;) {
        }
    }
    SyncDCache_x00165180(cks.data, cks.data + cks.len - 1);
    dtr->dma.data = (unsigned int)cks.data & 0x0fffffff;
    dtr->dma.addr = (unsigned int)ckd.data;
    dtr->dma.size = cks.len;
    dtr->dma.mode = 0;
    dtr->dmaid = sceSifSetDma_x00165180(&dtr->dma, 1);
    if (dtr->dmaid == 0) {
        ADXMSG_PrintErr_x00165180(ext_str0_x00165180);
        dtr->sjs->vtbl->ungetChunk(dtr->sjs, 1, &cks);
        dtr->sjd->vtbl->ungetChunk(dtr->sjd, 0, &ckd);
        return;
    }
    dtr->cks = cks;
    dtr->ckd = ckd;
    dtr->transfer = 1;
}
s8 func_001654F0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
typedef struct SfdSj_x001654F8 SfdSj_x001654F8;
typedef struct SfdSjChunk_x001654F8 {
    char *data;
    int len;
} SfdSjChunk_x001654F8;
typedef struct SfdSjVtbl_x001654F8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001654F8 *sj);
    int (*getUuid)(SfdSj_x001654F8 *sj);
    void (*reset)(SfdSj_x001654F8 *sj);
    void (*getChunk)(SfdSj_x001654F8 *sj, int id, int n, SfdSjChunk_x001654F8 *ck);
    void (*ungetChunk)(SfdSj_x001654F8 *sj, int id, SfdSjChunk_x001654F8 *ck);
    void (*putChunk)(SfdSj_x001654F8 *sj, int id, SfdSjChunk_x001654F8 *ck);
    int (*getNumData)(SfdSj_x001654F8 *sj, int id);
} SfdSjVtbl_x001654F8;
struct SfdSj_x001654F8 {
    SfdSjVtbl_x001654F8 *vtbl;
};
typedef struct DtrObj_x001654F8 DtrObj_x001654F8;
void DTX_ExecServer_x001654F8(void) __asm__("func_001660C0");
struct stat_x001654F8;
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x001654F8;
int sceSifDmaStat_x001654F8(unsigned int id) __asm__("sceSifDmaStat");
struct DtrObj_x001654F8 {
    signed char used;
    signed char stat_x001654F8;
    signed char transfer;
    char rsv;
    SfdSj_x001654F8 *sjs;
    SfdSj_x001654F8 *sjd;
    SfdSjChunk_x001654F8 cks;
    SfdSjChunk_x001654F8 ckd;
    sceSifDmaData_x001654F8 dma;
    unsigned int dmaid;
    int srclin;
    int dstlin;
    int unit;
    int total;
};
extern DtrObj_x001654F8 dtr_obj_x001654F8[32] __asm__("D_00411618");
void DTR_ExecHndl_x001654F8(DtrObj_x001654F8 *dtr) __asm__("DTR_ExecHndl");
void func_001654F8_x001654F8(void) __asm__("func_001654F8");
/* DTR_ExecServer: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001654F8_x001654F8(void)
{
    int i;
    for (i = 0; i < 32; i++) {
        if (dtr_obj_x001654F8[i].stat_x001654F8 == 1 && dtr_obj_x001654F8[i].transfer == 1) {
            if (sceSifDmaStat_x001654F8(dtr_obj_x001654F8[i].dmaid) >= 0) {
                return;
            }
        }
    }
    for (i = 0; i < 32; i++) {
        if (dtr_obj_x001654F8[i].used == 1) {
            DTR_ExecHndl_x001654F8(&dtr_obj_x001654F8[i]);
        }
    }
    DTX_ExecServer_x001654F8();
}
s32 memset_x001655B8() __asm__("memset");
s32 scePrintf_x001655B8() __asm__("scePrintf");
extern s32 D_00411614_x001655B8 __asm__("D_00411614");
extern s32 D_00411618_x001655B8 __asm__("D_00411618");
extern s32 D_00463300_x001655B8 __asm__("D_00463300");
extern s32 D_00463318_x001655B8 __asm__("D_00463318");
void DTR_Init_x001655B8(void) __asm__("DTR_Init");
void DTR_Init_x001655B8(void)
{
  scePrintf_x001655B8(&D_00463300_x001655B8, D_00411614_x001655B8);
  if (D_00411614_x001655B8 == 0) {
    memset_x001655B8(&D_00411618_x001655B8, 0, 0x800);
  }
  D_00411614_x001655B8 = D_00411614_x001655B8 + 1;
  scePrintf_x001655B8(&D_00463318_x001655B8);
}
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
typedef struct DtxObj_x00165810 DtxObj_x00165810;
typedef void (*DtxCbf_x00165810)(void *obj, void *buf, int size);
DtxObj_x00165810 *DTX_Create_x00165810(unsigned int id, char *eewk, int iopwk, int wklen) __asm__("DTX_Create");
void DTX_Destroy_x00165810(DtxObj_x00165810 *dtx) __asm__("func_00165C68");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165810;
typedef struct DtxPeer_x00165810 {
    char pad0[60];
    int count;
} DtxPeer_x00165810;
struct DtxObj_x00165810 {
    signed char used;
    signed char state;
    signed char flag;
    char rsv;
    int server;
    int count;
    char *eewk;
    int size;
    DtxPeer_x00165810 *peer;
    int iopwk;
    int wklen;
    DtxCbf_x00165810 recv;
    void *recv_obj;
    DtxCbf_x00165810 send;
    void *send_obj;
    sceSifDmaData_x00165810 dma;
    unsigned int dmaid;
};
extern void (*dtx_urpc_fn_x00165810[64])(int object, int *data, unsigned int words) __asm__("D_00412850");
extern int dtx_urpc_obj_x00165810[64] __asm__("D_00412950");
DtxObj_x00165810 *DTX_Create_x00165810(unsigned int id, char *eewk, int iopwk, int wklen) __asm__("DTX_Create");
void DTX_Destroy_x00165810(DtxObj_x00165810 *dtx) __asm__("func_00165C68");
void *func_00165810_x00165810(unsigned int command, void *buf, int size) __asm__("func_00165810");
/* dtx_rpc_func: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void *func_00165810_x00165810(unsigned int command, void *buf, int size)
{
    int *data = buf;
    switch (command) {
    case 0:
    case 1:
        break;
    case 2:
        data[0] = (int)DTX_Create_x00165810(data[0], (char *)data[1], data[2], data[3]);
        break;
    case 3:
        DTX_Destroy_x00165810((DtxObj_x00165810 *)data[0]);
        break;
    default:
        if (command - 0x400 < 64 && dtx_urpc_fn_x00165810[command - 0x400] != 0) {
            dtx_urpc_fn_x00165810[command - 0x400](dtx_urpc_obj_x00165810[command - 0x400], data, (unsigned int)size / 4);
        }
        break;
    }
    return data;
}
__asm__("# rebind func_00165810 0x00165810");
extern int AddIntcHandler_x001658C0(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
int GetThreadId_x001658C0(void) __asm__("GetThreadId");
typedef void *(*sceSifRpcFunc_x001658C0)(unsigned int fno, void *data, int size);
typedef void (*sceSifEndFunc_x001658C0)(void *param);
struct _sif_serve_data_x001658C0;
struct _sif_queue_data_x001658C0;
typedef struct {
    void *paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData_x001658C0;
typedef struct _sif_client_data_x001658C0 {
    sceSifRpcData_x001658C0 rpcd;
    unsigned int command;
    void *buff;
    void *gp;
    sceSifEndFunc_x001658C0 func;
    void *para;
    struct _sif_serve_data_x001658C0 *serve;
} sceSifClientData_x001658C0;
typedef struct _sif_serve_data_x001658C0 {
    unsigned int command;
    sceSifRpcFunc_x001658C0 func;
    char *buff;
    int size;
    sceSifRpcFunc_x001658C0 cfunc;
    char *cbuff;
    int csize;
    sceSifClientData_x001658C0 *client;
    unsigned int paddr;
    unsigned int fno;
    unsigned int receive;
    int rsize;
    int rmode;
    unsigned int rid;
    void *link;
    void *next;
    struct _sif_queue_data_x001658C0 *base;
} sceSifServeData_x001658C0;
typedef struct _sif_queue_data_x001658C0 {
    int key;
    int active;
    void *link;
    sceSifServeData_x001658C0 *start;
    void *end;
    struct _sif_queue_data_x001658C0 *next;
} sceSifQueueData_x001658C0;
void sceSifSetRpcQueue_x001658C0(sceSifQueueData_x001658C0 *queue, int key) __asm__("func_0010E3E8");
void sceSifRegisterRpc_x001658C0(sceSifServeData_x001658C0 *serve, unsigned int command, sceSifRpcFunc_x001658C0 func, void *buff, sceSifRpcFunc_x001658C0 cfunc, void *cbuff, sceSifQueueData_x001658C0 *queue) __asm__("func_0010E480");
void sceSifRpcLoop_x001658C0(sceSifQueueData_x001658C0 *queue) __asm__("func_0010E898");
extern volatile int dtx_proc_init_flag_x001658C0 __asm__("D_00411E28");
extern int dtx_rpc_id_x001658C0 __asm__("D_00411E24");
extern sceSifServeData_x001658C0 dtx_sd_x001658C0 __asm__("D_004126E8");
extern sceSifQueueData_x001658C0 dtx_qd_x001658C0 __asm__("D_00412730");
extern char dtx_svrbuf_x001658C0[] __asm__("D_00412750");
void *dtx_rpc_func_x001658C0(unsigned int command, void *buf, int size) __asm__("func_00165810");
int func_001658C0_x001658C0(void) __asm__("func_001658C0");
/* dtx_svr_proc: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001658C0_x001658C0(void)
{
    sceSifSetRpcQueue_x001658C0(&dtx_qd_x001658C0, GetThreadId_x001658C0());
    sceSifRegisterRpc_x001658C0(&dtx_sd_x001658C0, dtx_rpc_id_x001658C0, dtx_rpc_func_x001658C0, dtx_svrbuf_x001658C0, 0, 0, &dtx_qd_x001658C0);
    dtx_proc_init_flag_x001658C0 = 1;
    sceSifRpcLoop_x001658C0(&dtx_qd_x001658C0);
    return 0;
}
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
s32 sprintf_x00165A18() __asm__("sprintf");
extern s32 D_00411E34_x00165A18 __asm__("D_00411E34");
extern s32 D_00463370_x00165A18 __asm__("D_00463370");
void func_00165A18_x00165A18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) __asm__("func_00165A18");
void func_00165A18_x00165A18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
  s32 var_a1;
  s32 var_a3;
  s8 *temp_v1;
  var_a3 = arg3;
  var_a1 = 0;
  if (arg2 > 0)
  {
    do
    {
      var_a3 = -0x56;
      temp_v1 = arg1 + var_a1;
      var_a1 += 1;
      *temp_v1 = -0x56;
    }
    while (var_a1 < arg2);
  }
  temp_v1 = &D_00463370_x00165A18;
  sprintf_x00165A18(arg1, temp_v1, D_00411E34_x00165A18, var_a3, arg4, arg5, arg6, arg7);
  D_00411E34_x00165A18 += 1;
}
typedef struct DtxObj_x00165A88 DtxObj_x00165A88;
typedef void (*DtxCbf_x00165A88)(void *obj, void *buf, int size);
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00165A88;
typedef struct DtxPeer_x00165A88 {
    char pad0[60];
    int count;
} DtxPeer_x00165A88;
struct DtxObj_x00165A88 {
    signed char used;
    signed char state;
    signed char flag;
    char rsv;
    int server;
    int count;
    char *eewk;
    int size;
    DtxPeer_x00165A88 *peer;
    int iopwk;
    int wklen;
    DtxCbf_x00165A88 recv;
    void *recv_obj;
    DtxCbf_x00165A88 send;
    void *send_obj;
    sceSifDmaData_x00165A88 dma;
    unsigned int dmaid;
};
extern DtxObj_x00165A88 dtx_clnt_x00165A88[16] __asm__("D_00411E40");
DtxObj_x00165A88 *func_00165A88_x00165A88(unsigned int id) __asm__("func_00165A88");
/* DTX_Open: from https://github.com/crashbashash/DW4_Decomp (src/cri/dtx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
DtxObj_x00165A88 *func_00165A88_x00165A88(unsigned int id)
{
    if (id >= 16) {
        return 0;
    }
    return &dtx_clnt_x00165A88[id];
}
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
