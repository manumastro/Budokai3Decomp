#include "common.h"

s32 sceSifDmaStat(s32);                             /* extern */
s32 sceSifSetDma(s32 *, s32);               /* extern */
extern s32 D_00478C40;

struct sd_client_x00117C10 {
    int pad_0[9];
    int bound;                      
};
extern struct sd_client_x00117C10 D_01FE1EC0_x00117C10 __asm__("D_00478CC0");
extern int D_01EFE3D8_x00117C10 __asm__("D_003EDD40");
extern int D_01EFE3DC_x00117C10 __asm__("D_003EDD44");
extern void sceSifInitRpc_x00117C10(int) __asm__("sceSifInitRpc");
extern int sceSifBindRpc_x00117C10(void *, unsigned int, int) __asm__("sceSifBindRpc");
extern int scePrintf_x00117C10(const char *, ...) __asm__("scePrintf");
extern void FlushCache_x00117C10(int) __asm__("FlushCache");
extern char ext_str0_x00117C10[] __asm__("D_0045DB50");
int func_00117C10_x00117C10(void) __asm__("func_00117C10");
/* sceSdRemoteInit: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceSdRemoteInit.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117C10_x00117C10(void)
{
    int spin;

    sceSifInitRpc_x00117C10(0);
    do {
        if (sceSifBindRpc_x00117C10(&D_01FE1EC0_x00117C10, 0x80000701, 0) < 0) {
            scePrintf_x00117C10(ext_str0_x00117C10);
            return -1;
        }
        for (spin = 10000; spin != -1; spin--) {
        }
    } while (D_01FE1EC0_x00117C10.bound == 0);
    D_01EFE3D8_x00117C10 = 0;
    D_01EFE3DC_x00117C10 = 0;
    FlushCache_x00117C10(0);
    return 0;
}
s32 func_00117CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if ((arg3 == 0) || (*(s32 *)((u8 *)(&D_00478C40) + 0) = arg0, *(s32 *)((u8 *)(&D_00478C40) + 4) = arg1, *(s32 *)((u8 *)(&D_00478C40) + 8) = arg2, *(s32 *)((u8 *)(&D_00478C40) + 0xC) = 0, temp_v0 = sceSifSetDma(&D_00478C40, 1), (temp_v0 == 0))) {
        return -1;
    }
    if (arg3 == 1) {
        do {

        } while (sceSifDmaStat(temp_v0) >= 0);
    }
    return 0;
}
extern __inline__ void *GetGp_x00117D48(void) __asm__("GetGp");
static __inline__ void *GetGp_x00117D48(void)
{
        void *gp;
        __asm__ volatile (
                "move           %0, $28\n"
                : "=r"(gp)
                :
                : "memory"
        );
        return(gp);
}
typedef void (*sceSifEndFunc_x00117D48)(void *param);
extern sceSifEndFunc_x00117D48 sceSdEndFunc_x00117D48 __asm__("D_003EDD40");
extern void *sceSdEndGp_x00117D48 __asm__("D_003EDD44");
sceSifEndFunc_x00117D48 func_00117D48_x00117D48(sceSifEndFunc_x00117D48 func) __asm__("func_00117D48");
/* sceSdCallBack: from https://github.com/crashbashash/DW4_Decomp (src/sony/libsdr/sdr_main.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
sceSifEndFunc_x00117D48 func_00117D48_x00117D48(sceSifEndFunc_x00117D48 func)
{
    sceSifEndFunc_x00117D48 prev = sceSdEndFunc_x00117D48;

    sceSdEndFunc_x00117D48 = func;
    sceSdEndGp_x00117D48 = GetGp_x00117D48();
    return prev;
}
extern __inline__ void *GetGp_x00117D68(void) __asm__("GetGp");
static __inline__ void *GetGp_x00117D68(void)
{
        void *gp;
        __asm__ volatile (
                "move           %0, $28\n"
                : "=r"(gp)
                :
                : "memory"
        );
        return(gp);
}
extern __inline__ void *SetGp_x00117D68(void *newgp) __asm__("SetGp");
static __inline__ void *SetGp_x00117D68(void *newgp)
{
        void *oldgp;
        __asm__ volatile (
                "move           %0, $28\n"
                "move           $28, %1\n"
                : "=&r"(oldgp)
                : "r"(newgp)
                : "memory"
        );
        return(oldgp);
}
typedef void *(*sceSifRpcFunc_x00117D68)(unsigned int fno, void *data, int size);
typedef void (*sceSifEndFunc_x00117D68)(void *param);
struct _sif_serve_data_x00117D68;
struct _sif_queue_data_x00117D68;
typedef struct {
    void *paddr;  
    unsigned int pid;
    int tid;  
    unsigned int mode;
} sceSifRpcData_x00117D68;
typedef struct _sif_client_data_x00117D68 {
    sceSifRpcData_x00117D68 rpcd;
    unsigned int command;
    void *buff;
    void *gp;  
    sceSifEndFunc_x00117D68 func;
    void *para;
    struct _sif_serve_data_x00117D68 *serve;
} sceSifClientData_x00117D68;
typedef struct _sif_serve_data_x00117D68 {
    unsigned int command;
    sceSifRpcFunc_x00117D68 func;
    char *buff;
    int size;
    sceSifRpcFunc_x00117D68 cfunc;
    char *cbuff;
    int csize;
    sceSifClientData_x00117D68 *client;
    unsigned int paddr;  
    unsigned int fno;
    unsigned int receive;  
    int rsize;
    int rmode;
    unsigned int rid;
    void *link;  
    void *next;  
    struct _sif_queue_data_x00117D68 *base;
} sceSifServeData_x00117D68;
typedef struct _sif_queue_data_x00117D68 {
    int key;  
    int active;
    void *link;  
    sceSifServeData_x00117D68 *start;
    void *end;  
    struct _sif_queue_data_x00117D68 *next;
} sceSifQueueData_x00117D68;
int sceSifCallRpc_x00117D68(sceSifClientData_x00117D68 *client, unsigned int fno, unsigned int mode, void *send, int ssize, void *receive, int rsize, sceSifEndFunc_x00117D68 func, void *para) __asm__("sceSifCallRpc");
extern void *_sce_sdr_transIntr0Hdr_x00117D68 __asm__("D_003EDD58");
extern void *_sce_sdr_transIntr1Hdr_x00117D68 __asm__("D_003EDD5C");
extern void *_sce_sdr_spu2IntrHdr_x00117D68 __asm__("D_003EDD60");
extern void *_sce_sdr_transIntr0Arg_x00117D68 __asm__("D_003EDD64");
extern void *_sce_sdr_transIntr1Arg_x00117D68 __asm__("D_003EDD68");
extern void *_sce_sdr_spu2IntrArg_x00117D68 __asm__("D_003EDD6C");
extern void *_sce_sdr_transIntr0Gp_x00117D68 __asm__("D_003EDD70");
extern void *_sce_sdr_transIntr1Gp_x00117D68 __asm__("D_003EDD74");
extern void *_sce_sdr_spu2IntrGp_x00117D68 __asm__("D_003EDD78");
typedef char *ArgList_x00117D68;
typedef struct {
    unsigned short func;
    unsigned short entry;
    unsigned int value;
} SdBatch_x00117D68;
extern sceSifEndFunc_x00117D68 sceSdEndFunc_x00117D68 __asm__("D_003EDD40");
extern void *sceSdEndGp_x00117D68 __asm__("D_003EDD44");
static unsigned int sbuff_x00117D68[16] __attribute__((aligned(64)));
extern sceSifClientData_x00117D68 sceSd_gCd_x00117D68 __asm__("D_00478CC0");
int func_00117D68_x00117D68(int block, ...) __asm__("func_00117D68");
/* sceSdRemote: from https://github.com/crashbashash/DW4_Decomp (src/sony/libsdr/sdr_main.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117D68_x00117D68(int block, ...)
{
    int ret, i;
    unsigned int mode, command;
    ArgList_x00117D68 args;
    sceSifEndFunc_x00117D68 end = 0;
    int previous;
    void *gp = 0;

    ((args) = (ArgList_x00117D68)__builtin_next_arg( block) - (8 - __builtin_args_info(0)) * 8);
    mode = block;
    command = ((args) += 8, *( int *)((args) - 8));
    sbuff_x00117D68[0] = (int)sbuff_x00117D68;
    for (i = 1; i < 7; i++) {
        sbuff_x00117D68[i] = ((args) += 8, *( int *)((args) - 8));
    }
    if (mode == 0) {
        mode = 1;
        end = sceSdEndFunc_x00117D68;
    } else {
        mode = 0;
    }
    previous = 0;
    if (command == 0x8160) {
        if (sbuff_x00117D68[1] == 0) {
            previous = (int)_sce_sdr_transIntr0Hdr_x00117D68;
            _sce_sdr_transIntr0Hdr_x00117D68 = (void *)sbuff_x00117D68[2];
            _sce_sdr_transIntr0Arg_x00117D68 = (void *)sbuff_x00117D68[3];
            _sce_sdr_transIntr0Gp_x00117D68 = GetGp_x00117D68();
        } else {
            previous = (int)_sce_sdr_transIntr1Hdr_x00117D68;
            _sce_sdr_transIntr1Hdr_x00117D68 = (void *)sbuff_x00117D68[2];
            _sce_sdr_transIntr1Arg_x00117D68 = (void *)sbuff_x00117D68[3];
            _sce_sdr_transIntr1Gp_x00117D68 = GetGp_x00117D68();
        }
    } else if (command == 0x8170) {
        previous = (int)_sce_sdr_spu2IntrHdr_x00117D68;
        _sce_sdr_spu2IntrHdr_x00117D68 = (void *)sbuff_x00117D68[1];
        _sce_sdr_spu2IntrArg_x00117D68 = (void *)sbuff_x00117D68[2];
        _sce_sdr_spu2IntrGp_x00117D68 = GetGp_x00117D68();
    }
    ret = 0;
    if (command == 0x8130 || command == 0x81a0 || command == 0x81b0) {
        if (end != 0) gp = SetGp_x00117D68(sceSdEndGp_x00117D68);
        sceSifCallRpc_x00117D68(&sceSd_gCd_x00117D68, command | sbuff_x00117D68[1], mode, (void *)sbuff_x00117D68[2], 64, sbuff_x00117D68, 64,
                     end, (void *)sbuff_x00117D68[0]);
        if (end != 0) (void)SetGp_x00117D68(gp);
        ret = sbuff_x00117D68[0];
    } else if (command == 0x8140) {
        if (end != 0) gp = SetGp_x00117D68(sceSdEndGp_x00117D68);
        sceSifCallRpc_x00117D68(&sceSd_gCd_x00117D68, command | sbuff_x00117D68[1], mode, &sbuff_x00117D68[0], 64, (void *)sbuff_x00117D68[2],
                     64, end, (void *)sbuff_x00117D68[2]);
        if (end != 0) (void)SetGp_x00117D68(gp);
    } else if (command == 0x81c0 || command == 0x81d0) {
        SdBatch_x00117D68 *batch;
        unsigned int results;
        int resultsSize;

        batch = (SdBatch_x00117D68 *)sbuff_x00117D68[1];
        batch[0].entry = sbuff_x00117D68[2];
        if (command == 0x81d0) {
            batch[0].value = sbuff_x00117D68[5];
        }
        results = sbuff_x00117D68[3];
        resultsSize = sbuff_x00117D68[4];
        if (sbuff_x00117D68[3] == 0) {
            results = (unsigned int)&ret;
            resultsSize = 4;
        }
        if (end != 0) gp = SetGp_x00117D68(sceSdEndGp_x00117D68);
        sceSifCallRpc_x00117D68(&sceSd_gCd_x00117D68, command, mode, (void *)sbuff_x00117D68[1],
                     (int)(sizeof(SdBatch_x00117D68) * (sbuff_x00117D68[2] + 1)), (void *)results, resultsSize, end,
                     (void *)sbuff_x00117D68);
        if (end != 0) (void)SetGp_x00117D68(gp);
        if (sbuff_x00117D68[3] != 0) {
            ret = (int)*(unsigned int *)sbuff_x00117D68[3];
        }
    } else if (command >= 0x9000 && command <= 0x90f0) {
        if (end != 0) gp = SetGp_x00117D68(sceSdEndGp_x00117D68);
        sceSifCallRpc_x00117D68(&sceSd_gCd_x00117D68, command, mode, (void *)sbuff_x00117D68[1], (int)sbuff_x00117D68[2], &sbuff_x00117D68[0], 16,
                     end, &sbuff_x00117D68[0]);
        if (end != 0) (void)SetGp_x00117D68(gp);
        ret = sbuff_x00117D68[0];
    } else {
        if (end != 0) gp = SetGp_x00117D68(sceSdEndGp_x00117D68);
        sceSifCallRpc_x00117D68(&sceSd_gCd_x00117D68, command, mode, &sbuff_x00117D68[0], 64, &sbuff_x00117D68[0], 16, end, &sbuff_x00117D68[0]);
        if (end != 0) (void)SetGp_x00117D68(gp);
        ret = sbuff_x00117D68[0];
    }
    switch (command) {
    case 0x8160:
    case 0x8170:
        ret = previous;
        break;
    }
    return ret;
}
__asm__("# rebind func_00117D68 0x00117D68");
