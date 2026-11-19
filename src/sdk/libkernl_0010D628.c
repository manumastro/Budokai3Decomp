#include "common.h"

typedef struct {
    unsigned int psize : 8;  
    unsigned int dsize : 24;  
    unsigned int dest;  
    int cid;
    unsigned int opt;
} sceSifCmdHdr_x0010D628;
typedef void (*sceSifCmdHandler_x0010D628)(void *packet, void *harg);
typedef struct {
    sceSifCmdHandler_x0010D628 func;
    void *data;
    void *gp;
} sceSifCmdData_x0010D628;
typedef struct {
    void *pktbuf;
    void *unused;
    void *iopbuf;
    sceSifCmdData_x0010D628 *sysTable;
    int sysCount;
    sceSifCmdData_x0010D628 *userTable;
    int userCount;
    unsigned int *sregs;
} sceSifCmdState_x0010D628;
extern __inline__ void *SetGp_x0010D628(void *newgp) __asm__("SetGp");
static __inline__ void *SetGp_x0010D628(void *newgp)
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
extern sceSifCmdState_x0010D628 _data_table_x0010D628 __asm__("D_00471998");
int isceSifSetDChain_x0010D628(void) __asm__("isceSifSetDChain");
typedef int quadword_x0010D628 __attribute__((mode(TI)));
int func_0010D628_x0010D628(int channel) __asm__("func_0010D628");
/* _sceSifCmdIntrHdlr: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/sifcmd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010D628_x0010D628(int channel)
{
    quadword_x0010D628 packet[112 / sizeof(quadword_x0010D628)];
    sceSifCmdState_x0010D628 *state = &_data_table_x0010D628;
    volatile sceSifCmdHdr_x0010D628 *hdr = _data_table_x0010D628.pktbuf;
    quadword_x0010D628 *src;
    sceSifCmdHandler_x0010D628 func;
     
    int n, i;

    if ((n = hdr->psize) == 0) {
        return 0;
    }
    n = (n + 15) / 16;
    hdr->psize = 0;
    src = (quadword_x0010D628 *)hdr;
    for (i = 0; i < n; i++) {
        packet[i] = *src++;
    }
    isceSifSetDChain_x0010D628();
    hdr = (sceSifCmdHdr_x0010D628 *)packet;
    if (hdr->cid & 0x80000000) {
        n = hdr->cid & ~0x80000000;
        if (n < state->sysCount && (func = state->sysTable[n].func)) {
            void *gp = SetGp_x0010D628(state->sysTable[n].gp);

            func(packet, state->sysTable[n].data);
            SetGp_x0010D628(gp);
        }
    } else {
        n = hdr->cid;
        if (n < state->userCount && (func = state->userTable[n].func)) {
            void *gp = SetGp_x0010D628(state->userTable[n].gp);

            func(packet, state->userTable[n].data);
            SetGp_x0010D628(gp);
        }
    }
    __asm__("sync.l; ei");
    return 0;
}
__asm__("# noswap func_0010D628");
void sceSifWriteBackDCache_x0010D770(void *ptr, int size) __asm__("sceSifWriteBackDCache");
/* sceSifWriteBackDCache_x0010D770: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/sifcmd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void sceSifWriteBackDCache_x0010D770(void *ptr, int size)
{
    __asm__(
        ".set noreorder\n"
        "lui     $25, 0xffff\n"
        "ori     $25, $25, 0xffc0\n"
        "blez    $5, 9f\n"
        "addu    $10, $4, $5\n"
        "and     $8, $4, $25\n"
        "addiu   $10, $10, -1\n"
        "and     $9, $10, $25\n"
        "subu    $10, $9, $8\n"
        "srl     $11, $10, 6\n"
        "addiu   $11, $11, 1\n"
        "andi    $9, $11, 7\n"
        "beqz    $9, 2f\n"
        "srl     $10, $11, 3\n"
        "1:  sync\n"
        "cache   0x18, 0($8)\n"
        "sync\n"
        "nop\n"
        "addiu   $9, $9, -1\n"
        "bgtz    $9, 1b\n"
        "addiu   $8, $8, 64\n"
        "2:  beqz    $10, 9f\n"
        "3:  addiu   $10, $10, -1\n"
        "sync\n"
        "cache   0x18, 0($8)\n"
        "sync\n"
        "cache   0x18, 64($8)\n"
        "sync\n"
        "cache   0x18, 128($8)\n"
        "sync\n"
        "cache   0x18, 192($8)\n"
        "sync\n"
        "cache   0x18, 256($8)\n"
        "sync\n"
        "cache   0x18, 320($8)\n"
        "sync\n"
        "cache   0x18, 384($8)\n"
        "sync\n"
        "cache   0x18, 448($8)\n"
        "sync\n"
        "bgtz    $10, 3b\n"
        "addiu   $8, $8, 512\n"
        "9:  jr      $31\n"
        "nop\n"
    );
}
__asm__("# noswap sceSifWriteBackDCache");
typedef struct {
    unsigned int psize : 8;  
    unsigned int dsize : 24;  
    unsigned int dest;  
    int cid;
    unsigned int opt;
} sceSifCmdHdr_x0010D820;
typedef void (*sceSifCmdHandler_x0010D820)(void *packet, void *harg);
typedef void *(*sceSifRpcFunc_x0010D820)(unsigned int fno, void *data, int size);
typedef void (*sceSifEndFunc_x0010D820)(void *param);
struct _sif_serve_data_x0010D820;
struct _sif_queue_data_x0010D820;
typedef struct {
    void *paddr;  
    unsigned int pid;
    int tid;  
    unsigned int mode;
} sceSifRpcData_x0010D820;
typedef struct _sif_client_data_x0010D820 {
    sceSifRpcData_x0010D820 rpcd;
    unsigned int command;
    void *buff;
    void *gp;  
    sceSifEndFunc_x0010D820 func;
    void *para;
    struct _sif_serve_data_x0010D820 *serve;
} sceSifClientData_x0010D820;
typedef struct {
    sceSifRpcData_x0010D820 rpcd;
    void *src;
    void *dest;
    int size;
} sceSifReceiveData_x0010D820;
typedef struct _sif_serve_data_x0010D820 {
    unsigned int command;
    sceSifRpcFunc_x0010D820 func;
    char *buff;
    int size;
    sceSifRpcFunc_x0010D820 cfunc;
    char *cbuff;
    int csize;
    sceSifClientData_x0010D820 *client;
    unsigned int paddr;  
    unsigned int fno;
    unsigned int receive;  
    int rsize;
    int rmode;
    unsigned int rid;
    void *link;  
    void *next;  
    struct _sif_queue_data_x0010D820 *base;
} sceSifServeData_x0010D820;
typedef struct _sif_queue_data_x0010D820 {
    int key;  
    int active;
    void *link;  
    sceSifServeData_x0010D820 *start;
    void *end;  
    struct _sif_queue_data_x0010D820 *next;
} sceSifQueueData_x0010D820;
typedef struct {
    sceSifCmdHdr_x0010D820 hdr;
    unsigned int rec_id;  
    void *pkt_addr;
    unsigned int rpc_id;
} sceSifRpcPktHeader_x0010D820;
typedef struct {
    sceSifClientData_x0010D820 *client;
    unsigned int sid;
} sceSifRpcBindReq_x0010D820;
typedef struct {
    void *client;
    unsigned int fno;
    int ssize;
    unsigned int receive;  
    int rsize;
    int rmode;
    sceSifServeData_x0010D820 *serve;
} sceSifRpcCallReq_x0010D820;
typedef struct {
    sceSifReceiveData_x0010D820 *recv;
    unsigned int src;  
    unsigned int dest;  
    int size;
} sceSifRpcOtherDataReq_x0010D820;
typedef struct {
    sceSifRpcPktHeader_x0010D820 rpch;
    sceSifRpcBindReq_x0010D820 req;
} sceSifRpcBindPkt_x0010D820;
typedef struct {
    sceSifRpcPktHeader_x0010D820 rpch;
    sceSifRpcCallReq_x0010D820 req;
} sceSifRpcCallPkt_x0010D820;
typedef struct {
    sceSifRpcPktHeader_x0010D820 rpch;
    sceSifRpcOtherDataReq_x0010D820 req;
} sceSifRpcOtherDataPkt_x0010D820;
typedef struct {
    sceSifCmdHdr_x0010D820 hdr;
    unsigned int rec_id;
    unsigned int pkt_addr;  
    unsigned int rpc_id;
    unsigned int client;  
    unsigned int cid;
    union {
        struct {
            sceSifServeData_x0010D820 *serve;
            void *buff;
        } bind;
        struct {
            unsigned int src;
            unsigned int dest;
            int size;
        } rdata;
    } req;
    char pad[64 - 48];
} sceSifRpcRendPkt_x0010D820;
typedef struct {
    unsigned int pid;  
    void *pkt_table;
    int pkt_table_len;
    int unused1;
    int unused2;
    sceSifRpcRendPkt_x0010D820 *rdata_table;
    int rdata_table_len;
    sceSifRpcRendPkt_x0010D820 *client_table;
    int client_table_len;
    int rdata_table_idx;
    sceSifQueueData_x0010D820 *active_queue;
} sceSifRpcState_x0010D820;
void sceSifInitCmd_x0010D820(void) __asm__("func_0010D0C0");
unsigned int sceSifGetSreg_x0010D820(int reg) __asm__("func_0011A458");
void sceSifAddCmdHandler_x0010D820(unsigned int cid, sceSifCmdHandler_x0010D820 func, void *data) __asm__("func_0010D3A8");
unsigned int sceSifSendCmd_x0010D820(unsigned int cid, void *packet, int size, void *src, void *dest, int len) __asm__("func_0010D5A8");
unsigned int sceSifGetReg_x0010D820(unsigned int reg) __asm__("sceSifGetReg");
int sceSifSetReg_x0010D820(unsigned int reg, unsigned int value) __asm__("sceSifSetReg");
extern int AddIntcHandler_x0010D820(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
int DIntr_x0010D820(void) __asm__("DI");
int EIntr_x0010D820(void) __asm__("EI");
typedef struct {
    sceSifRpcPktHeader_x0010D820 rpch;
    union {
        sceSifRpcBindReq_x0010D820 bind;
        sceSifRpcCallReq_x0010D820 call;
        sceSifRpcOtherDataReq_x0010D820 rdata;
        char body[64 - sizeof(sceSifRpcPktHeader_x0010D820)];
    } req;
} sceSifRpcPacket_x0010D820;
extern int _sceSifInitCheck_x0010D820 __asm__("D_0012FC08");
extern sceSifRpcPacket_x0010D820 _packet_buffer_x0010D820[32] __asm__("D_00155000");
extern sceSifRpcRendPkt_x0010D820 _free_buffer_x0010D820[32] __asm__("D_00155800");
extern sceSifRpcRendPkt_x0010D820 _free_buffer2_x0010D820[32] __asm__("D_00156000");
extern sceSifRpcState_x0010D820 _data_table_x0010D820 __asm__("D_004733C0");
void _request_end_x0010D820(sceSifRpcRendPkt_x0010D820 *rend, sceSifRpcState_x0010D820 *state) __asm__("func_0010DB20");
void _request_bind_x0010D820(sceSifRpcBindPkt_x0010D820 *bind, sceSifRpcState_x0010D820 *state) __asm__("func_0010DEF8");
void _request_call_x0010D820(sceSifRpcCallPkt_x0010D820 *call) __asm__("func_0010E118");
void _request_rdata_x0010D820(sceSifRpcOtherDataPkt_x0010D820 *request, sceSifRpcState_x0010D820 *state) __asm__("func_0010DC30");
void _request_end_x0010D820(sceSifRpcRendPkt_x0010D820 *rend, sceSifRpcState_x0010D820 *state) __asm__("func_0010DB20");
void _request_rdata_x0010D820(sceSifRpcOtherDataPkt_x0010D820 *request, sceSifRpcState_x0010D820 *state) __asm__("func_0010DC30");
void _request_bind_x0010D820(sceSifRpcBindPkt_x0010D820 *bind, sceSifRpcState_x0010D820 *state) __asm__("func_0010DEF8");
void _request_call_x0010D820(sceSifRpcCallPkt_x0010D820 *call) __asm__("func_0010E118");
void sceSifInitRpc_x0010D820(unsigned int mode) __asm__("sceSifInitRpc");
/* sceSifInitRpc_x0010D820: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/sifrpc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void sceSifInitRpc_x0010D820(unsigned int mode)
{
    sceSifCmdHdr_x0010D820 *packet;

    DIntr_x0010D820();
    if (_sceSifInitCheck_x0010D820) {
        EIntr_x0010D820();
        return;
    }
    _sceSifInitCheck_x0010D820 = 1;
    EIntr_x0010D820();
    sceSifInitCmd_x0010D820();
    DIntr_x0010D820();
    _data_table_x0010D820.pkt_table = ((void *)((unsigned int)(_packet_buffer_x0010D820) | 0x20000000));
    _data_table_x0010D820.pkt_table_len = 32;
    _data_table_x0010D820.unused1 = 0;
    _data_table_x0010D820.unused2 = 0;
    _data_table_x0010D820.rdata_table = ((void *)((unsigned int)(_free_buffer_x0010D820) | 0x20000000));
    _data_table_x0010D820.rdata_table_len = 32;
    _data_table_x0010D820.client_table = ((void *)((unsigned int)(_free_buffer2_x0010D820) | 0x20000000));
    _data_table_x0010D820.client_table_len = 32;
    _data_table_x0010D820.rdata_table_idx = 0;
    _data_table_x0010D820.pid = 1;
    sceSifAddCmdHandler_x0010D820(0x80000008, (sceSifCmdHandler_x0010D820)_request_end_x0010D820, &_data_table_x0010D820);
    sceSifAddCmdHandler_x0010D820(0x80000009, (sceSifCmdHandler_x0010D820)_request_bind_x0010D820, &_data_table_x0010D820);
    sceSifAddCmdHandler_x0010D820(0x8000000a, (sceSifCmdHandler_x0010D820)_request_call_x0010D820, &_data_table_x0010D820);
    sceSifAddCmdHandler_x0010D820(0x8000000c, (sceSifCmdHandler_x0010D820)_request_rdata_x0010D820, &_data_table_x0010D820);
    EIntr_x0010D820();
    if (sceSifGetReg_x0010D820(0x80000002)) {
        return;
    }
    packet = (sceSifCmdHdr_x0010D820 *)&_packet_buffer_x0010D820[1];
    packet->opt = 1;
    sceSifSendCmd_x0010D820(0x80000002, packet, sizeof(sceSifCmdHdr_x0010D820), 0, 0, 0);
    while (!sceSifGetSreg_x0010D820(0)) {
    }
    sceSifSetReg_x0010D820(0x80000002, 1);
}
__asm__("# noswap sceSifInitRpc");
