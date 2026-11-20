#include "common.h"

extern s32 D_003EDD0C;

typedef struct PadRpcBuf_x00117A70 {           
    int cmd;
    int port;
    int slot;
    int data;
    int param;
    int result;
    char pad_18[4];
    int vref_result;
    char pad_20[96];
} PadRpcBuf_x00117A70;
typedef struct RpcPkt_x00117A70 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00117A70 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00117A70;
struct RpcPkt_x00117A70;
extern int sceSifCallRpc_x00117A70(struct RpcPkt_x00117A70 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
typedef struct SifClient40_a_x00117A70 {       
    char pad_00[36];
    void *server;                    
} SifClient40_a_x00117A70;
extern SifClient40_a_x00117A70 libpad_clients_x00117A70[2] __asm__("D_00478940");
extern PadRpcBuf_x00117A70 libpad_rpc_buf_x00117A70 __asm__("D_00478B80");
int func_00117A70_x00117A70(int param) __asm__("func_00117A70");
/* libpad_rpc20: from https://github.com/new-coke/rez-decomp (src/sce/libpad.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117A70_x00117A70(int param)
{
    PadRpcBuf_x00117A70 *rpc;

    rpc = &libpad_rpc_buf_x00117A70;
    rpc->cmd = 20;
    rpc->port = param;
    if (sceSifCallRpc_x00117A70(libpad_clients_x00117A70, 1, 0, rpc, 128, rpc, 128, 0, 0) < 0)
        return 0;
    return rpc->slot;
}
extern u32 D_00478B80_x00117AD8[] __asm__("D_00478B80");
extern u8 D_00478940_x00117AD8[] __asm__("D_00478940");
extern void *D_003EDD08_x00117AD8 __asm__("D_003EDD08");
extern int D_00478C00_x00117AD8 __asm__("D_00478C00");
int DI_x00117AD8(void) __asm__("DI");
int EI_x00117AD8(void) __asm__("EI");
int sceSifCallRpc_x00117AD8(void *, unsigned int, unsigned int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
void *func_00117AD8_x00117AD8(void *cb) __asm__("func_00117AD8");
void *func_00117AD8_x00117AD8(void *cb)
{
    void *old;
    u32 *p;
    int intr;

    old = D_003EDD08_x00117AD8;
    if (cb == 0) {
        p = D_00478B80_x00117AD8;
        p[0] = 0x18;
        D_003EDD08_x00117AD8 = 0;
        p[1] = 0;
        while (sceSifCallRpc_x00117AD8(D_00478940_x00117AD8, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0);
        return old;
    }
    if (old == 0) {
        p = D_00478B80_x00117AD8;
        p[0] = 0x18;
        p[1] = 1;
        while (sceSifCallRpc_x00117AD8(D_00478940_x00117AD8, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0);
    }
    intr = DI_x00117AD8();
    __asm__ volatile("sw $28, %0" : "=m"(D_00478C00_x00117AD8));
    D_003EDD08_x00117AD8 = cb;
    if (intr == 1) {
        EI_x00117AD8();
    }
    return old;
}
s32 func_00117C00(s32 arg0) {
    D_003EDD0C = arg0;
    return 1;
}
