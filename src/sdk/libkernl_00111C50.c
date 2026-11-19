#include "common.h"

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_003EC6E0;
extern s32 D_00475028;

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00111C50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00111E90);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112138);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112330);
typedef struct sceSifClientData_x00112510 {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData_x00112510;
extern sceSifClientData_x00112510 cd_x00112510 __asm__("D_00474C40");
extern int sceSifBindRpc_x00112510(sceSifClientData_x00112510 *client, unsigned int request, unsigned int mode) __asm__("sceSifBindRpc");
extern int _bind_x00112510 __asm__("D_003EC6D8");
int func_00112510_x00112510(void) __asm__("func_00112510");
/* sceSifInitIopHeap: from https://github.com/denzi-gh/crashwoc-decomp-ps2 (src/sdk/sce/iopheap.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00112510_x00112510(void) {
    int wait;

    while (1) {
        if (sceSifBindRpc_x00112510(&cd_x00112510, 0x80000003, 0) < 0) {
            return -1;
        }
        if (cd_x00112510.server != 0) {
            _bind_x00112510 = 0;
            break;
        }
        wait = 0x100000;
        while (wait--) {
        }
    }
    return 0;
}
typedef unsigned char u8_x00112598;
typedef signed int s32_x00112598;
typedef unsigned int u32_x00112598;
typedef u32_x00112598 addr_t_x00112598;
extern s32_x00112598 sceSifCallRpc_x00112598(void *client, s32_x00112598 function, s32_x00112598 mode, void *send, s32_x00112598 sendBytes, void *receive, s32_x00112598 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x00112598 iopHeapStatus_x00112598 __asm__("D_003EC6D8");
extern u8_x00112598 iopHeapRpcClient_x00112598[0x40] __asm__("D_00474C40");
extern s32_x00112598 iopHeapResult_x00112598 __asm__("D_00474C80");
extern addr_t_x00112598 iopHeapArgs_x00112598[16] __asm__("D_00474CC0");
extern s32_x00112598 sceSifCallRpc_x00112598(void *client, s32_x00112598 function, s32_x00112598 mode, void *send, s32_x00112598 sendBytes, void *receive, s32_x00112598 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
s32_x00112598 func_00112598_x00112598(s32_x00112598 size) __asm__("func_00112598");
/* sceSifAllocIopHeap: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00112598 func_00112598_x00112598(s32_x00112598 size)
{
    if (iopHeapStatus_x00112598 < 0) {
        return 0;
    }
    iopHeapArgs_x00112598[0] = size;
    if (sceSifCallRpc_x00112598(iopHeapRpcClient_x00112598, 1, 0, iopHeapArgs_x00112598, 4,
                      &iopHeapResult_x00112598, 4, ((void *)0), ((void *)0)) >= 0) {
        return iopHeapResult_x00112598;
    }
    return 0;
}
typedef struct RpcPkt_x00112608 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00112608 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00112608;
struct RpcPkt_x00112608;
extern int sceSifCallRpc_x00112608(struct RpcPkt_x00112608 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern int sif_iopheap_inited_x00112608 __asm__("D_003EC6D8");
extern RpcPkt_x00112608 sif_iopheap_client_x00112608 __asm__("D_00474C40");
extern int sif_iopheap_sbuf_x00112608[] __asm__("D_00474CC0");
extern int sif_iopheap_rbuf_x00112608[] __asm__("D_00474C80");
int func_00112608_x00112608(int type, int size, int addr) __asm__("func_00112608");
/* sceSifAllocSysMemory: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_iopheap.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00112608_x00112608(int type, int size, int addr)
{
    if (sif_iopheap_inited_x00112608 < 0)
        return 0;
    sif_iopheap_sbuf_x00112608[0] = size;
    sif_iopheap_sbuf_x00112608[1] = type;
    sif_iopheap_sbuf_x00112608[2] = addr;
    if (sceSifCallRpc_x00112608(&sif_iopheap_client_x00112608, 4, 0, sif_iopheap_sbuf_x00112608, 12, sif_iopheap_rbuf_x00112608, 4, 0, 0) < 0)
        return 0;
    return sif_iopheap_rbuf_x00112608[0];
}
typedef unsigned char u8_x00112688;
typedef signed int s32_x00112688;
typedef unsigned int u32_x00112688;
typedef u32_x00112688 addr_t_x00112688;
extern s32_x00112688 sceSifCallRpc_x00112688(void *client, s32_x00112688 function, s32_x00112688 mode, void *send, s32_x00112688 sendBytes, void *receive, s32_x00112688 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x00112688 iopHeapStatus_x00112688 __asm__("D_003EC6D8");
extern u8_x00112688 iopHeapRpcClient_x00112688[0x40] __asm__("D_00474C40");
extern s32_x00112688 iopHeapResult_x00112688 __asm__("D_00474C80");
extern addr_t_x00112688 iopHeapArgs_x00112688[16] __asm__("D_00474CC0");
extern s32_x00112688 sceSifCallRpc_x00112688(void *client, s32_x00112688 function, s32_x00112688 mode, void *send, s32_x00112688 sendBytes, void *receive, s32_x00112688 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
s32_x00112688 func_00112688_x00112688(void *address) __asm__("func_00112688");
/* sceSifFreeSysMemory: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00112688 func_00112688_x00112688(void *address)
{
    if (iopHeapStatus_x00112688 < 0) {
        return 0;
    }
    iopHeapArgs_x00112688[0] = ((u32_x00112688)(address));
    if (sceSifCallRpc_x00112688(iopHeapRpcClient_x00112688, 2, 0, iopHeapArgs_x00112688, 4,
                      &iopHeapResult_x00112688, 4, ((void *)0), ((void *)0)) >= 0) {
        return iopHeapResult_x00112688;
    }
    return -1;
}
s32 func_00112688_x00112700() __asm__("func_00112688");
s32 func_00112700_x00112700(s32 arg0) __asm__("func_00112700");
s32 func_00112700_x00112700(s32 arg0) {
    return func_00112688_x00112700(arg0);
}
typedef struct RpcPkt_x00112720 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00112720 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00112720;
struct RpcPkt_x00112720;
extern int sceSifCallRpc_x00112720(struct RpcPkt_x00112720 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
typedef struct HeapPathArg_x00112720 {
    int addr;                
    char name[252];          
} HeapPathArg_x00112720;
extern int sif_iopheap_inited_x00112720 __asm__("D_003EC6D8");
extern RpcPkt_x00112720 sif_iopheap_client_x00112720 __asm__("D_00474C40");
extern int sif_iopheap_rbuf_x00112720[] __asm__("D_00474C80");
extern HeapPathArg_x00112720 sif_iopheap_path_arg_x00112720 __asm__("D_00474D00");
int func_00112720_x00112720(const char *name, int addr) __asm__("func_00112720");
/* sceSifLoadIopHeap: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_iopheap.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00112720_x00112720(const char *name, int addr)
{
    int i;

    if (sif_iopheap_inited_x00112720 < 0)
        return 0;
    for (i = 0; i < 252; i++) {
        if (!(sif_iopheap_path_arg_x00112720.name[i] = name[i]))
            break;
    }
    if (i == 252) {
        i = 251;
        sif_iopheap_path_arg_x00112720.name[251] = 0;
    }
    sif_iopheap_path_arg_x00112720.addr = addr;
    sif_iopheap_path_arg_x00112720.name[251] = 0;
    if (sceSifCallRpc_x00112720(&sif_iopheap_client_x00112720, 3, 0, &sif_iopheap_path_arg_x00112720, i + 5, sif_iopheap_rbuf_x00112720, 4, 0, 0) < 0)
        return -1;
    return sif_iopheap_rbuf_x00112720[0];
}
typedef unsigned char u8_x00112810;
typedef signed int s32_x00112810;
typedef unsigned int u32_x00112810;
extern s32_x00112810 sceSifCallRpc_x00112810(void *client, s32_x00112810 function, s32_x00112810 mode, void *send, s32_x00112810 sendBytes, void *receive, s32_x00112810 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x00112810 iopHeapStatus_x00112810 __asm__("D_003EC6D8");
extern u8_x00112810 iopHeapRpcClient_x00112810[0x40] __asm__("D_00474C40");
extern s32_x00112810 iopHeapResult_x00112810 __asm__("D_00474C80");
extern s32_x00112810 sceSifCallRpc_x00112810(void *client, s32_x00112810 function, s32_x00112810 mode, void *send, s32_x00112810 sendBytes, void *receive, s32_x00112810 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
u32_x00112810 func_00112810_x00112810(void) __asm__("func_00112810");
/* sceSifQueryMemSize: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x00112810 func_00112810_x00112810(void)
{
    if (iopHeapStatus_x00112810 < 0) {
        return 0;
    }
    if (sceSifCallRpc_x00112810(iopHeapRpcClient_x00112810, 5, 0, ((void *)0), 0,
                      &iopHeapResult_x00112810, 4, ((void *)0), ((void *)0)) < 0) {
        return 0xFFFFFFFF;
    }
    return iopHeapResult_x00112810;
}
typedef unsigned char u8_x00112880;
typedef signed int s32_x00112880;
typedef unsigned int u32_x00112880;
extern s32_x00112880 sceSifCallRpc_x00112880(void *client, s32_x00112880 function, s32_x00112880 mode, void *send, s32_x00112880 sendBytes, void *receive, s32_x00112880 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x00112880 iopHeapStatus_x00112880 __asm__("D_003EC6D8");
extern u8_x00112880 iopHeapRpcClient_x00112880[0x40] __asm__("D_00474C40");
extern s32_x00112880 iopHeapResult_x00112880 __asm__("D_00474C80");
extern s32_x00112880 sceSifCallRpc_x00112880(void *client, s32_x00112880 function, s32_x00112880 mode, void *send, s32_x00112880 sendBytes, void *receive, s32_x00112880 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
u32_x00112880 func_00112880_x00112880(void) __asm__("func_00112880");
/* sceSifQueryMaxFreeMemSize: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x00112880 func_00112880_x00112880(void)
{
    if (iopHeapStatus_x00112880 < 0) {
        return 0;
    }
    if (sceSifCallRpc_x00112880(iopHeapRpcClient_x00112880, 6, 0, ((void *)0), 0,
                      &iopHeapResult_x00112880, 4, ((void *)0), ((void *)0)) < 0) {
        return 0xFFFFFFFF;
    }
    return iopHeapResult_x00112880;
}
typedef unsigned char u8_x001128F0;
typedef signed int s32_x001128F0;
typedef unsigned int u32_x001128F0;
extern s32_x001128F0 sceSifCallRpc_x001128F0(void *client, s32_x001128F0 function, s32_x001128F0 mode, void *send, s32_x001128F0 sendBytes, void *receive, s32_x001128F0 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x001128F0 iopHeapStatus_x001128F0 __asm__("D_003EC6D8");
extern u8_x001128F0 iopHeapRpcClient_x001128F0[0x40] __asm__("D_00474C40");
extern s32_x001128F0 iopHeapResult_x001128F0 __asm__("D_00474C80");
extern s32_x001128F0 sceSifCallRpc_x001128F0(void *client, s32_x001128F0 function, s32_x001128F0 mode, void *send, s32_x001128F0 sendBytes, void *receive, s32_x001128F0 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
u32_x001128F0 func_001128F0_x001128F0(void) __asm__("func_001128F0");
/* sceSifQueryTotalFreeMemSize: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x001128F0 func_001128F0_x001128F0(void)
{
    if (iopHeapStatus_x001128F0 < 0) {
        return 0;
    }
    if (sceSifCallRpc_x001128F0(iopHeapRpcClient_x001128F0, 7, 0, ((void *)0), 0,
                      &iopHeapResult_x001128F0, 4, ((void *)0), ((void *)0)) < 0) {
        return 0xFFFFFFFF;
    }
    return iopHeapResult_x001128F0;
}
typedef unsigned char u8_x00112960;
typedef signed int s32_x00112960;
typedef unsigned int u32_x00112960;
typedef u32_x00112960 addr_t_x00112960;
extern s32_x00112960 sceSifCallRpc_x00112960(void *client, s32_x00112960 function, s32_x00112960 mode, void *send, s32_x00112960 sendBytes, void *receive, s32_x00112960 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x00112960 iopHeapStatus_x00112960 __asm__("D_003EC6D8");
extern u8_x00112960 iopHeapRpcClient_x00112960[0x40] __asm__("D_00474C40");
extern s32_x00112960 iopHeapResult_x00112960 __asm__("D_00474C80");
extern addr_t_x00112960 iopHeapArgs_x00112960[16] __asm__("D_00474CC0");
extern s32_x00112960 sceSifCallRpc_x00112960(void *client, s32_x00112960 function, s32_x00112960 mode, void *send, s32_x00112960 sendBytes, void *receive, s32_x00112960 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
u32_x00112960 func_00112960_x00112960(u32_x00112960 block) __asm__("func_00112960");
/* sceSifQueryBlockTopAddress: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x00112960 func_00112960_x00112960(u32_x00112960 block)
{
    if (iopHeapStatus_x00112960 < 0) {
        return 0;
    }
    iopHeapArgs_x00112960[0] = block;
    if (sceSifCallRpc_x00112960(iopHeapRpcClient_x00112960, 8, 0, iopHeapArgs_x00112960, 4,
                      &iopHeapResult_x00112960, 4, ((void *)0), ((void *)0)) < 0) {
        return 0xFFFFFFFF;
    }
    return iopHeapResult_x00112960;
}
typedef unsigned char u8_x001129E0;
typedef signed int s32_x001129E0;
typedef unsigned int u32_x001129E0;
typedef u32_x001129E0 addr_t_x001129E0;
extern s32_x001129E0 sceSifCallRpc_x001129E0(void *client, s32_x001129E0 function, s32_x001129E0 mode, void *send, s32_x001129E0 sendBytes, void *receive, s32_x001129E0 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
extern s32_x001129E0 iopHeapStatus_x001129E0 __asm__("D_003EC6D8");
extern u8_x001129E0 iopHeapRpcClient_x001129E0[0x40] __asm__("D_00474C40");
extern s32_x001129E0 iopHeapResult_x001129E0 __asm__("D_00474C80");
extern addr_t_x001129E0 iopHeapArgs_x001129E0[16] __asm__("D_00474CC0");
extern s32_x001129E0 sceSifCallRpc_x001129E0(void *client, s32_x001129E0 function, s32_x001129E0 mode, void *send, s32_x001129E0 sendBytes, void *receive, s32_x001129E0 receiveBytes, void *endFunction, void *endParameter) __asm__("sceSifCallRpc");
u32_x001129E0 func_001129E0_x001129E0(u32_x001129E0 block) __asm__("func_001129E0");
/* sceSifQueryBlockSize: from https://github.com/Megami-Decomps/dds-decomp (src/dds1/sdk/libkernl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
u32_x001129E0 func_001129E0_x001129E0(u32_x001129E0 block)
{
    if (iopHeapStatus_x001129E0 < 0) {
        return 0;
    }
    iopHeapArgs_x001129E0[0] = block;
    if (sceSifCallRpc_x001129E0(iopHeapRpcClient_x001129E0, 9, 0, iopHeapArgs_x001129E0, 4,
                      &iopHeapResult_x001129E0, 4, ((void *)0), ((void *)0)) < 0) {
        return 0xFFFFFFFF;
    }
    return iopHeapResult_x001129E0;
}
typedef struct RpcPkt_x00112A60 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00112A60 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00112A60;
typedef struct Bytes4_x00112A60 {
    char b[4];
} Bytes4_x00112A60;
typedef struct LoadArg_x00112A60 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x00112A60;
struct RpcPkt_x00112A60;
int sceSifBindRpc_x00112A60(struct RpcPkt_x00112A60 *cd, unsigned int rpc_number, unsigned int mode) __asm__("sceSifBindRpc");
extern int sceSifCallRpc_x00112A60(struct RpcPkt_x00112A60 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern int sif_loadfile_inited_x00112A60 __asm__("D_003EC6E0");
extern RpcPkt_x00112A60 sif_loadfile_client_x00112A60 __asm__("D_00475000");
extern char sif_loadfile_peer_ver_x00112A60[] __asm__("D_00475028");
extern LoadArg_x00112A60 sif_loadfile_arg_x00112A60 __asm__("D_00474E00");
int func_00112A60_x00112A60(void) __asm__("func_00112A60");
/* sif_loadfile_init: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00112A60_x00112A60(void)
{
    int i;

    if (sif_loadfile_inited_x00112A60 < 0) {
        for (;;) {
            if (sceSifBindRpc_x00112A60(&sif_loadfile_client_x00112A60, 0x80000006, 0) < 0)
                return -1;
            if (sif_loadfile_client_x00112A60.server) {
                sif_loadfile_inited_x00112A60 = 0;
                if (sceSifCallRpc_x00112A60(&sif_loadfile_client_x00112A60, 255, 0, 0, 0, ((char *)&sif_loadfile_arg_x00112A60), 4, 0, 0) < 0)  
                    return 0xfffeffff;
                *(Bytes4_x00112A60 *)sif_loadfile_peer_ver_x00112A60 = *(Bytes4_x00112A60 *)((char *)&sif_loadfile_arg_x00112A60);  
                return 0;
            }
            i = 0x100000;
            while (i--)
                ;
        }
    }
    return 0;
}
s32 memcmp_x00112B60(s32 *, s32 *, s32) __asm__("memcmp");
extern s32 D_003EC60C_x00112B60 __asm__("D_003EC60C");
extern s32 *D_003EC6E4_x00112B60 __asm__("D_003EC6E4");
extern s32 D_00475028_x00112B60 __asm__("D_00475028");
s32 func_00112B60_x00112B60(void) __asm__("func_00112B60");
s32 func_00112B60_x00112B60(void)
{
  s32 var_s2;
  s32 *new_var;
  var_s2 = 0;
  new_var = &D_003EC60C_x00112B60;
  if ((memcmp_x00112B60(&D_00475028_x00112B60, new_var, 4) != 0) && (memcmp_x00112B60(&D_00475028_x00112B60, D_003EC6E4_x00112B60, 4) != 0))
  {
    var_s2 = memcmp_x00112B60(new_var, D_003EC6E4_x00112B60, 4) != 0;
  }
  return var_s2;
}
s32 func_00112BF0(void) {
    D_003EC6E0 = -1;
    memset(&D_00475028, 0, 4);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112C28);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00112E30);
typedef struct RpcPkt_x00113038 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00113038 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00113038;
typedef struct LoadArg_x00113038 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x00113038;
struct RpcPkt_x00113038;
extern int sceSifCallRpc_x00113038(struct RpcPkt_x00113038 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x00113038 sif_loadfile_client_x00113038 __asm__("D_00475000");
extern LoadArg_x00113038 sif_loadfile_arg_x00113038 __asm__("D_00474E00");
int sif_loadfile_init_x00113038(void) __asm__("func_00112A60");
int sif_loadfile_version_mismatch_x00113038(void) __asm__("func_00112B60");
int func_00113038_x00113038(int id) __asm__("func_00113038");
/* sceSifUnloadModule: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113038_x00113038(int id)
{
    if (sif_loadfile_init_x00113038() < 0)
        return 0xffff0000;
    if (sif_loadfile_version_mismatch_x00113038())
        return 0xfffefffc;
    sif_loadfile_arg_x00113038.id = id;
    if (sceSifCallRpc_x00113038(&sif_loadfile_client_x00113038, 8, 0, &sif_loadfile_arg_x00113038, 4, &sif_loadfile_arg_x00113038, 4, 0, 0) < 0)
        return 0xfffeffff;
    return sif_loadfile_arg_x00113038.id;
}
typedef struct RpcPkt_x001130C8 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x001130C8 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x001130C8;
typedef struct LoadArg_x001130C8 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x001130C8;
char *strncpy_x001130C8(char *dst, const char *src, unsigned int n) __asm__("func_00128040");
struct RpcPkt_x001130C8;
extern int sceSifCallRpc_x001130C8(struct RpcPkt_x001130C8 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x001130C8 sif_loadfile_client_x001130C8 __asm__("D_00475000");
extern LoadArg_x001130C8 sif_loadfile_arg_x001130C8 __asm__("D_00474E00");
int sif_loadfile_init_x001130C8(void) __asm__("func_00112A60");
int sif_loadfile_version_mismatch_x001130C8(void) __asm__("func_00112B60");
int func_001130C8_x001130C8(const char *name) __asm__("func_001130C8");
/* sceSifSearchModuleByName: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001130C8_x001130C8(const char *name)
{
    if (sif_loadfile_init_x001130C8() < 0)
        return 0xffff0000;
    if (sif_loadfile_version_mismatch_x001130C8())
        return 0xfffefffc;
    strncpy_x001130C8(sif_loadfile_arg_x001130C8.path, name, 252);
    sif_loadfile_arg_x001130C8.path[251] = 0;
    if (sceSifCallRpc_x001130C8(&sif_loadfile_client_x001130C8, 9, 0, &sif_loadfile_arg_x001130C8, 512, &sif_loadfile_arg_x001130C8, 4, 0, 0) < 0)
        return 0xfffeffff;
    return sif_loadfile_arg_x001130C8.id;
}
typedef struct RpcPkt_x00113168 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00113168 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00113168;
typedef struct LoadArg_x00113168 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x00113168;
struct RpcPkt_x00113168;
extern int sceSifCallRpc_x00113168(struct RpcPkt_x00113168 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x00113168 sif_loadfile_client_x00113168 __asm__("D_00475000");
extern LoadArg_x00113168 sif_loadfile_arg_x00113168 __asm__("D_00474E00");
int sif_loadfile_init_x00113168(void) __asm__("func_00112A60");
int sif_loadfile_version_mismatch_x00113168(void) __asm__("func_00112B60");
int func_00113168_x00113168(int id) __asm__("func_00113168");
/* sceSifSearchModuleByAddress: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113168_x00113168(int id)
{
    if (sif_loadfile_init_x00113168() < 0)
        return 0xffff0000;
    if (sif_loadfile_version_mismatch_x00113168())
        return 0xfffefffc;
    sif_loadfile_arg_x00113168.id = id;
    if (sceSifCallRpc_x00113168(&sif_loadfile_client_x00113168, 10, 0, &sif_loadfile_arg_x00113168, 4, &sif_loadfile_arg_x00113168, 4, 0, 0) < 0)
        return 0xfffeffff;
    return sif_loadfile_arg_x00113168.id;
}
int _sceSifLoadModuleBuffer_x001131F8(void *addr, int arglen, int args, void *ret) __asm__("func_00112C28");
int _sceSifLoadModuleBuffer_x001131F8(void *addr, int arglen, int args, void *ret) __asm__("func_00112C28");
void func_001131F8_x001131F8(void *addr, int arglen, int args) __asm__("func_001131F8");
/* sceSifLoadModuleBuffer: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001131F8_x001131F8(void *addr, int arglen, int args)
{
    int local[4];
    _sceSifLoadModuleBuffer_x001131F8(addr, arglen, args, &local);
}
s32 func_00112C28_x00113218() __asm__("func_00112C28");
s32 func_00113218_x00113218(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_00113218");
s32 func_00113218_x00113218(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_00112C28_x00113218(arg0, arg1, arg2, arg3);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_00113238);
int _sceSifLoadModule_x00113460(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int _sceSifLoadModule_x00113460(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int func_00113460_x00113460(void *name, int arglen, int args) __asm__("func_00113460");
/* sceSifLoadModule: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113460_x00113460(void *name, int arglen, int args)
{
    int local;
    return _sceSifLoadModule_x00113460(name, arglen, args, (int)&local, 0);
}
int _sceSifLoadModule_x00113480(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int _sceSifLoadModule_x00113480(void *name, int arglen, int args, int ret, int rpcno) __asm__("func_00113238");
int func_00113480_x00113480(void *name, int arglen, int args, int ret) __asm__("func_00113480");
/* sceSifLoadStartModule: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113480_x00113480(void *name, int arglen, int args, int ret)
{
    return _sceSifLoadModule_x00113480(name, arglen, args, ret, 0);
}
typedef struct RpcPkt_x001134A0 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x001134A0 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x001134A0;
typedef struct LoadArg_x001134A0 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x001134A0;
char *strncpy_x001134A0(char *dst, const char *src, unsigned int n) __asm__("func_00128040");
struct RpcPkt_x001134A0;
extern int sceSifCallRpc_x001134A0(struct RpcPkt_x001134A0 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x001134A0 sif_loadfile_client_x001134A0 __asm__("D_00475000");
extern LoadArg_x001134A0 sif_loadfile_arg_x001134A0 __asm__("D_00474E00");
int sif_loadfile_init_x001134A0(void) __asm__("func_00112A60");
int sif_loadfile_version_mismatch_x001134A0(void) __asm__("func_00112B60");
int func_001134A0_x001134A0(const char *name1, const char *name2, int *out, int fno) __asm__("func_001134A0");
/* sif_loadfile_call_2str: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001134A0_x001134A0(const char *name1, const char *name2, int *out, int fno)
{
    if (sif_loadfile_init_x001134A0() < 0)
        return 0xffff0000;
    if (sif_loadfile_version_mismatch_x001134A0())
        return 0xfffefffc;
    strncpy_x001134A0(sif_loadfile_arg_x001134A0.path, name1, 252);
    sif_loadfile_arg_x001134A0.path[251] = 0;
    strncpy_x001134A0(sif_loadfile_arg_x001134A0.args, name2, 252);
    sif_loadfile_arg_x001134A0.args[251] = 0;
    if (sceSifCallRpc_x001134A0(&sif_loadfile_client_x001134A0, fno, 0, &sif_loadfile_arg_x001134A0, 512, &sif_loadfile_arg_x001134A0, 16, 0, 0) < 0)
        return 0xfffeffff;
    if (!sif_loadfile_arg_x001134A0.id)
        return 0xfffefffd;
    out[0] = sif_loadfile_arg_x001134A0.id;
    out[1] = sif_loadfile_arg_x001134A0.len;
    return 0;
}
int _sceSifLoadElfPart_x001135A8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int _sceSifLoadElfPart_x001135A8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int func_001135A8_x001135A8(void *name, int sec, int out) __asm__("func_001135A8");
/* sceSifLoadElfPart: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001135A8_x001135A8(void *name, int sec, int out)
{
    return _sceSifLoadElfPart_x001135A8(name, sec, out, 1);
}
int _sceSifLoadElfPart_x001135C8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
int _sceSifLoadElfPart_x001135C8(void *name, int sec, int out, int rpcno) __asm__("func_001134A0");
extern char ext_str0_x001135C8[] __asm__("D_0045D918");
int func_001135C8_x001135C8(void *name, int out) __asm__("func_001135C8");
/* sceSifLoadElf: from https://github.com/nathanialf/ico-pc (sce/libkernl/eeloadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001135C8_x001135C8(void *name, int out)
{
    return _sceSifLoadElfPart_x001135C8(name, (int)ext_str0_x001135C8, out, 1);
}
typedef struct RpcPkt_x001135F0 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x001135F0 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x001135F0;
typedef struct LoadArg_x001135F0 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x001135F0;
typedef struct IopMemArg_x001135F0 {
    int addr;                
    unsigned int width;      
    int value;               
} IopMemArg_x001135F0;
struct RpcPkt_x001135F0;
extern int sceSifCallRpc_x001135F0(struct RpcPkt_x001135F0 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x001135F0 sif_loadfile_client_x001135F0 __asm__("D_00475000");
extern LoadArg_x001135F0 sif_loadfile_arg_x001135F0 __asm__("D_00474E00");
int sif_loadfile_init_x001135F0(void) __asm__("func_00112A60");
int func_001135F0_x001135F0(int addr, void *dst, unsigned int width) __asm__("func_001135F0");
/* sif_loadfile_peek: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001135F0_x001135F0(int addr, void *dst, unsigned int width)
{
    if (sif_loadfile_init_x001135F0() < 0)
        return 0xffff0000;
    if (width >= 3)
        return 0xfffefffe;
    (*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0).addr = addr;  
    (*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0).width = width;  
    if (sceSifCallRpc_x001135F0(&sif_loadfile_client_x001135F0, 3, 0, &(*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0), 32, &(*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0), 32, 0, 0) < 0)  
        return 0xfffeffff;
    if (width == 0)
        *(unsigned char *)dst = *(unsigned char *)&(*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0).addr;  
    else if (width == 1)
        *(unsigned short *)dst = *(unsigned short *)&(*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0).addr;  
    else if (width == 2)
        *(int *)dst = (*(IopMemArg_x001135F0 *)&sif_loadfile_arg_x001135F0).addr;  
    else
        return 0xfffefffe;
    return 0;
}
typedef struct RpcPkt_x001136E0 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x001136E0 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x001136E0;
typedef struct LoadArg_x001136E0 {
    int id;                  
    int len;                 
    char path[252];          
    char args[252];          
} LoadArg_x001136E0;
typedef struct IopMemArg_x001136E0 {
    int addr;                
    unsigned int width;      
    int value;               
} IopMemArg_x001136E0;
struct RpcPkt_x001136E0;
extern int sceSifCallRpc_x001136E0(struct RpcPkt_x001136E0 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
extern RpcPkt_x001136E0 sif_loadfile_client_x001136E0 __asm__("D_00475000");
extern LoadArg_x001136E0 sif_loadfile_arg_x001136E0 __asm__("D_00474E00");
int sif_loadfile_init_x001136E0(void) __asm__("func_00112A60");
int func_001136E0_x001136E0(int addr, void *src, unsigned int width) __asm__("func_001136E0");
/* sif_loadfile_poke: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_loadfile.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001136E0_x001136E0(int addr, void *src, unsigned int width)
{
    IopMemArg_x001136E0 *arg;

    if (sif_loadfile_init_x001136E0() < 0)
        return 0xffff0000;
    arg = &(*(IopMemArg_x001136E0 *)&sif_loadfile_arg_x001136E0);  
    (*(IopMemArg_x001136E0 *)&sif_loadfile_arg_x001136E0).addr = addr;  
    arg->width = width;
    if (width == 0)
        *(unsigned char *)&arg->value = *(unsigned char *)src;
    else if (width == 1)
        *(unsigned short *)&arg->value = *(unsigned short *)src;
    else if (width == 2)
        arg->value = *(int *)src;
    else
        return 0xfffefffe;
    if (sceSifCallRpc_x001136E0(&sif_loadfile_client_x001136E0, 2, 0, &(*(IopMemArg_x001136E0 *)&sif_loadfile_arg_x001136E0), 32, &(*(IopMemArg_x001136E0 *)&sif_loadfile_arg_x001136E0), 16, 0, 0) < 0)  
        return 0xfffeffff;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00111C50", func_001137C0);
unsigned int sceSifGetReg_x00113918(unsigned int reg) __asm__("sceSifGetReg");
int func_00113918_x00113918(void) __asm__("func_00113918");
/* sceSifIsAliveIop: from https://github.com/nathanialf/ico-pc (sce/libkernl/iopreset.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113918_x00113918(void)
{
    int t = sceSifGetReg_x00113918(4) & 0x10000;
    return t != 0;
}
extern int SifGetReg_x00113940(int reg) __asm__("sceSifGetReg");
extern void Obj0000_Set_D_003FAE30_Field_10_Zero_x00113940(void) __asm__("func_0010A6E0");
extern void func_003B79C0_x00113940(int a0, int a1) __asm__("func_001164A8");
int func_00113940_x00113940(void) __asm__("func_00113940");
/* func_003B6240: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039c390.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113940_x00113940(void) {
    if (SifGetReg_x00113940(4) & 0x40000) {
        Obj0000_Set_D_003FAE30_Field_10_Zero_x00113940();
        func_003B79C0_x00113940(1, 1);
        func_003B79C0_x00113940(0, 1);
        return 1;
    }
    return 0;
}
int printf_x00113990(const char *fmt, ...) __asm__("scePrintf");
void sceSifInitRpc_x00113990(int mode) __asm__("sceSifInitRpc");
void sceSifExitRpc_x00113990(void) __asm__("func_0010D9C0");
int sceSifResetIop_x00113990(char *arg, int mode) __asm__("func_001137C0");
int sceSifResetIop_x00113990(char *arg, int mode) __asm__("func_001137C0");
extern char ext_str0_x00113990[] __asm__("D_0045D930");
extern char ext_str1_x00113990[] __asm__("D_0045D920");
int func_00113990_x00113990(const char *arg) __asm__("func_00113990");
/* sceSifRebootIop: from https://github.com/nathanialf/ico-pc (sce/libkernl/iopreset.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00113990_x00113990(const char *arg)
{
    char buf[80];
    char *s = ext_str1_x00113990;
    char *d;
    char *p;

    for (p = (char *)arg; *p != 0; p++) {}
     
    if ((unsigned int)(p + 11 - (char *)arg) > 80) {
        printf_x00113990(ext_str0_x00113990, arg);
        return 0;
    }
    sceSifInitRpc_x00113990(0);
    sceSifExitRpc_x00113990();
    d = buf;
    while (*s != 0) {
        *d++ = *s++;
    }
    while (*arg != 0) {
        *d++ = *arg++;
    }
    *d = 0;
    return sceSifResetIop_x00113990(buf, 0);
}
