/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libkernl/sifrpc.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libkernl */
#include "common.h"

/* libkernl.a(sifrpc.o) */

#include <eekernel.h>

#include <sifrpc.h>

#include <string.h>

#include <sifcmd.h>

#include <libkernl_internal.h>

#define DIntr DI
#define EIntr EI

/* sifrpc.o's .data: set once sceSifInitRpc has run, cleared by sceSifExitRpc */
#define rpc_inited D_003EC630
#define rpc_data D_004733C0
extern int rpc_inited;

 /* derived name */

/* The words every RPC packet carries after the command header. */
typedef struct {         /* field names derived */
    SifCmdHeader header; /* 0x00 */
    int recId;           /* 0x10, the slot index << 16 | 5; bit 0 marks the slot taken */
    void *pktAddr;       /* 0x14, the packet's own address on the sending side */
    int rpcId;           /* 0x18 */
} SifRpcPktHeader;

       /* derived name */

/* a 64-byte packet slot: the header, then the command's own words (the
   records below) */
typedef struct { /* field names derived */
    SifRpcPktHeader rpch;
    char body[36];
} SifRpcPkt;

 /* derived name */

/* the bind request */
typedef struct { /* field names derived */
    SifRpcPktHeader rpch;
    void *client;     /* 0x1C */
    unsigned int sid; /* 0x20 */
} SifRpcBindPkt;

      /* derived name */

/* the request for data from the other side */
typedef struct { /* field names derived */
    SifRpcPktHeader rpch;
    void *receive;    /* 0x1C, the requester's receive record */
    void *src;        /* 0x20 */
    void *dest;       /* 0x24 */
    int size;         /* 0x28 */
} SifRpcOtherDataPkt;

 /* derived name */

/* the answer that finishes a request: cid is the request's command, and a
   bind answer carries the server's record and buffers */
typedef struct { /* field names derived */
    SifRpcPktHeader rpch;
    void *client;        /* 0x1C */
    unsigned int cid;    /* 0x20 */
    unsigned int server; /* 0x24 */
    unsigned int buff;   /* 0x28 */
    unsigned int cbuff;  /* 0x2C */
} SifRpcRendPkt;

         /* derived name */

/* sifrpc.o's RPC state record.  Field names follow the public SDK naming of
   this record; the packet table is a void *, the two byte tables unsigned
   char *. */
typedef struct { /* field names derived */
    int pid;
    void *pkt_table;
    int pkt_table_len;
    int unused1;
    int unused2;
    unsigned char *rdata_table;
    int rdata_table_len;
    unsigned char *client_table;
    int client_table_len;
    int rdata_table_idx;
    sceSifQueueData *active_queue;
} SifRpcData;

 /* derived name */

extern SifRpcData rpc_data;

 /* derived name */

void sceSifInitRpc(int mode);

void _request_end(void *pkt, void *data);

/* The answer to an IOP's request for EE data is built word by word: the
   ROM orders the copies of the request's words and the stores of the
   answer's as one integer alias set, which typed packet records do not
   reproduce. */
void _request_rdata(void *pkt, void *data);

int sceSifGetOtherData(sceSifReceiveData *rd, void *src, void *dest, int size, int mode);

/* the bind answer is built word by word, as _request_rdata's is, and the
   server record's buffer words are read the same way */
void _request_bind(void *pkt, void *data);

int sceSifBindRpc(sceSifRpcClientData *cd, unsigned int sid, int mode);

int sceSifCallRpc(sceSifRpcClientData *cd, unsigned int rpc_number, unsigned int mode,
                  void *sendbuf, int ssize, void *recvbuf, int rsize, sceSifEndFunc end_func,
                  void *end_param);




void sceSifExitRpc(void)
{
    sceSifExitCmd();
    rpc_inited = 0;
}


void *_sceRpcGetPacket(SifRpcData *rd)
{
    SifRpcPkt *p;
    int i;
    int sid;

    DIntr();
    p = rd->pkt_table;
    for (i = 0; i < rd->pkt_table_len; i++) {
        if ((p->rpch.recId & 1) == 0) {
            p->rpch.recId = (i << 16) | 5;
            ++rd->pid;
            if (rd->pid == 1) {
                ++rd->pid;
                sid = 1;
            } else {
                sid = rd->pid;
            }
            p->rpch.pktAddr = p;
            p->rpch.rpcId = sid;
            EIntr();
            return p;
        }
        p++;
    }
    EIntr();
    return 0;
}


void _sceRpcFreePacket(void *pkt)
{
    SifRpcPkt *p = pkt;
    p->rpch.rpcId = 0;
    p->rpch.recId &= 0xFFFFFFFE;
}


void *_sceRpcGetFPacket(SifRpcData *rd)
{
    int rem = rd->rdata_table_idx % rd->rdata_table_len;
    void *ret = rd->rdata_table + rem * 64;
    rd->rdata_table_idx = rem + 1;
    return ret;
}


void *_sceRpcGetFPacket2(SifRpcData *rd, int rid)
{
    if (rid < 0) {
        goto err;
    }
    if (rid < rd->client_table_len) {
        goto elem;
    }
err:
    return _sceRpcGetFPacket(rd);
elem:
    return rd->client_table + rid * 64;
}
typedef struct {
    unsigned int psize : 8;  
    unsigned int dsize : 24;  
    unsigned int dest;  
    int cid;
    unsigned int opt;
} sceSifCmdHdr_x0010DB20;
typedef void *(*sceSifRpcFunc_x0010DB20)(unsigned int fno, void *data, int size);
typedef void (*sceSifEndFunc_x0010DB20)(void *param);
struct _sif_serve_data_x0010DB20;
struct _sif_queue_data_x0010DB20;
typedef struct {
    void *paddr;  
    unsigned int pid;
    int tid;  
    unsigned int mode;
} sceSifRpcData_x0010DB20;
typedef struct _sif_client_data_x0010DB20 {
    sceSifRpcData_x0010DB20 rpcd;
    unsigned int command;
    void *buff;
    void *gp;  
    sceSifEndFunc_x0010DB20 func;
    void *para;
    struct _sif_serve_data_x0010DB20 *serve;
} sceSifClientData_x0010DB20;
typedef struct _sif_serve_data_x0010DB20 {
    unsigned int command;
    sceSifRpcFunc_x0010DB20 func;
    char *buff;
    int size;
    sceSifRpcFunc_x0010DB20 cfunc;
    char *cbuff;
    int csize;
    sceSifClientData_x0010DB20 *client;
    unsigned int paddr;  
    unsigned int fno;
    unsigned int receive;  
    int rsize;
    int rmode;
    unsigned int rid;
    void *link;  
    void *next;  
    struct _sif_queue_data_x0010DB20 *base;
} sceSifServeData_x0010DB20;
typedef struct _sif_queue_data_x0010DB20 {
    int key;  
    int active;
    void *link;  
    sceSifServeData_x0010DB20 *start;
    void *end;  
    struct _sif_queue_data_x0010DB20 *next;
} sceSifQueueData_x0010DB20;
typedef struct {
    sceSifCmdHdr_x0010DB20 hdr;
    unsigned int rec_id;  
    void *pkt_addr;
    unsigned int rpc_id;
} sceSifRpcPktHeader_x0010DB20;
typedef struct {
    sceSifCmdHdr_x0010DB20 hdr;
    unsigned int rec_id;
    unsigned int pkt_addr;  
    unsigned int rpc_id;
    unsigned int client;  
    unsigned int cid;
    union {
        struct {
            sceSifServeData_x0010DB20 *serve;
            void *buff;
        } bind;
        struct {
            unsigned int src;
            unsigned int dest;
            int size;
        } rdata;
    } req;
    char pad[64 - 48];
} sceSifRpcRendPkt_x0010DB20;
typedef struct {
    unsigned int pid;  
    void *pkt_table;
    int pkt_table_len;
    int unused1;
    int unused2;
    sceSifRpcRendPkt_x0010DB20 *rdata_table;
    int rdata_table_len;
    sceSifRpcRendPkt_x0010DB20 *client_table;
    int client_table_len;
    int rdata_table_idx;
    sceSifQueueData_x0010DB20 *active_queue;
} sceSifRpcState_x0010DB20;
int iSignalSema_x0010DB20(int sema) __asm__("iSignalSema");
extern int AddIntcHandler_x0010DB20(int cause, int (*handler)(int cause), int next) __asm__("AddIntcHandler");
extern __inline__ void *SetGp_x0010DB20(void *newgp) __asm__("SetGp");
static __inline__ void *SetGp_x0010DB20(void *newgp)
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
void _sceRpcFreePacket_x0010DB20(sceSifRpcPktHeader_x0010DB20 *packet) __asm__("func_0010DA90");
void _sceRpcFreePacket_x0010DB20(sceSifRpcPktHeader_x0010DB20 *packet) __attribute__((weak, section(".b3stub")));
void _sceRpcFreePacket_x0010DB20(sceSifRpcPktHeader_x0010DB20 *packet) {}
void func_0010DB20_x0010DB20(sceSifRpcRendPkt_x0010DB20 *rend, sceSifRpcState_x0010DB20 *state) __asm__("func_0010DB20");
/* _request_end: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/sifrpc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010DB20_x0010DB20(sceSifRpcRendPkt_x0010DB20 *rend, sceSifRpcState_x0010DB20 *state)
{
    sceSifClientData_x0010DB20 *client;
    void *gp;

    switch (rend->cid) {
    case 0x8000000a:
        client = (sceSifClientData_x0010DB20 *)rend->client;
        if (client->func) {
            gp = SetGp_x0010DB20(client->gp);
            client->func(client->para);
            SetGp_x0010DB20(gp);
        }
        break;
    case 0x80000009:
        client = (sceSifClientData_x0010DB20 *)rend->client;
        client->serve = rend->req.bind.serve;
        client->buff = rend->req.bind.buff;
        break;
    case 0x8000000b:  
        break;
    }
    client = (sceSifClientData_x0010DB20 *)rend->client;
    if (client->rpcd.tid >= 0) {
        iSignalSema_x0010DB20(client->rpcd.tid);
    }
    _sceRpcFreePacket_x0010DB20(client->rpcd.paddr);
    client->rpcd.paddr = 0;
}
__asm__("# rebind func_0010DB20 0x0010DB20");
typedef struct _sif_rpc_rpkt_x0010DBF0 {
    unsigned char  pad00[0x24];
    void          *src;       
    void          *dst;       
    int            size;      
} sceSifRpcRpkt_x0010DBF0;
extern int isceSifSendCmd_x0010DBF0(unsigned int fno, void *pkt, int pktsize, void *src, void *dst, int size) __asm__("func_0010D5E8");
extern int isceSifSendCmd_x0010DBF0(unsigned int fno, void *pkt, int pktsize, void *src, void *dst, int size) __asm__("func_0010D5E8");
unsigned int func_0010DBF0_x0010DBF0(int id, int t, int c, sceSifRpcRpkt_x0010DBF0 *p) __asm__("func_0010DBF0");
/* func_003B2CD0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2cd0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_0010DBF0_x0010DBF0(int id, int t, int c, sceSifRpcRpkt_x0010DBF0 *p)
{
    return isceSifSendCmd_x0010DBF0(0x80000008, p, 64, p->src, p->dst, p->size) ? 0 : 0x800;
}
typedef struct sceSifRpcState_x0010DC30 {
    int pid;                             
    void *pktTable;                      
    int pktTableLen;                     
    int unk0C;
    int unk10;
    void *rdataTable;                    
    int rdataTableLen;                   
    void *clientTable;                   
    int clientTableLen;                  
    int rdataTableIdx;                   
    void *activeQueue;                   
} sceSifRpcState_x0010DC30;
void *func_003B2B90_x0010DC30(sceSifRpcState_x0010DC30 *s) __asm__("func_0010DAB0");
typedef struct _sif_rpc_pkt_x0010DC30 {
    unsigned char  pad00[0x10];
    unsigned int   mode;      
    void          *rbuff;     
    unsigned char  pad18[0x4];
    void          *client;    
    void          *paddr;     
    void          *receive;   
    void          *rsize;     
    void          *w2c;       
} sceSifRpcPkt_x0010DC30;
extern void *_sceRpcGetFPacket2_x0010DC30(void *q, int i) __asm__("func_0010DAE0");
extern int isceSifSendCmd_x0010DC30(unsigned int fno, void *pkt, int pktsize, void *src, void *dst, void *size) __asm__("func_0010D5E8");
extern void func_003B7898_x0010DC30(int usec, void *handler, void *arg) __asm__("func_001160E0");
extern unsigned int func_003B2CD0_x0010DC30(int id, int t, int c, void *rd) __asm__("func_0010DBF0");
void func_0010DC30_x0010DC30(void *packet, void *q) __asm__("func_0010DC30");
/* func_003B2D10: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2d10.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010DC30_x0010DC30(void *packet, void *q)
{
    sceSifRpcPkt_x0010DC30 *rq = packet;
    sceSifRpcPkt_x0010DC30 *p;
    unsigned int mode;
    void *rbuff;
    void *client;

    mode = rq->mode;
    if (mode & 4) {
        p = _sceRpcGetFPacket2_x0010DC30(q, mode >> 16);
    } else {
        p = func_003B2B90_x0010DC30(q);
    }
    rbuff  = rq->rbuff;
    client = rq->client;
    p->rbuff   = rbuff;
    p->client  = client;
    p->paddr   = (void *)0x8000000C;
    p->receive = rq->paddr;
    p->rsize   = rq->receive;
    p->w2c     = rq->rsize;
    if (isceSifSendCmd_x0010DC30(0x80000008, p, 64, rq->paddr, rq->receive, rq->rsize) == 0) {
        func_003B7898_x0010DC30(0x800, (void *)func_003B2CD0_x0010DC30, p);
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_sifrpc", func_0010DD00);


void *_search_svdata(unsigned int sid, SifRpcData *rd)
{
    sceSifQueueData *q;
    sceSifServeData *s;
    for (q = rd->active_queue; q != 0; q = q->next) {
        for (s = q->link; s != 0; s = s->link) {
            if (s->command == sid) {
                return s;
            }
        }
    }
    return 0;
}
INCLUDE_PAD(4);
extern int isceSifSendCmd_x0010DEB8(unsigned int fno, void *pkt, int pktsize, void *src, void *dst, int size) __asm__("func_0010D5E8");
extern int isceSifSendCmd_x0010DEB8(unsigned int fno, void *pkt, int pktsize, void *src, void *dst, int size) __asm__("func_0010D5E8");
unsigned int func_0010DEB8_x0010DEB8(int id, int t, int c, void *rd) __asm__("func_0010DEB8");
/* func_003B2E38: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2cd0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_0010DEB8_x0010DEB8(int id, int t, int c, void *rd)
{
    return isceSifSendCmd_x0010DEB8(0x80000008, rd, 64, 0, 0, 0) ? 0 : 0x800;
}
typedef struct sceSifRpcState_x0010DEF8 {
    int pid;                             
    void *pktTable;                      
    int pktTableLen;                     
    int unk0C;
    int unk10;
    void *rdataTable;                    
    int rdataTableLen;                   
    void *clientTable;                   
    int clientTableLen;                  
    int rdataTableIdx;                   
    void *activeQueue;                   
} sceSifRpcState_x0010DEF8;
void *func_003B2B90_x0010DEF8(sceSifRpcState_x0010DEF8 *s) __asm__("func_0010DAB0");
void *func_003B2DE8_x0010DEF8(int key, char *a1) __asm__("func_0010DE68");
extern void func_003B2E38_x0010DEF8(void *p) __asm__("func_0010DEB8");
extern void func_003B7898_x0010DEF8(int a, void (*f)(void *), void *p) __asm__("func_001160E0");
typedef struct {
    int pad00[2];
    int f08;               
} sceSifServeHdr_x0010DEF8;
typedef struct {
    int   pad00[5];
    int   f14;             
    int   pad18;
    int   f1C;             
    int   f20;             
    int   f24;             
    int   f28;             
} sceSifRpcPkt_x0010DEF8;
extern int isceSifSendCmd_x0010DEF8(unsigned int fid, void *pkt, int size, void *src, void *dest, int len) __asm__("func_0010D5E8");
void func_0010DEF8_x0010DEF8(void *packet, void *q) __asm__("func_0010DEF8");
/* _request_bind: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2e78.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010DEF8_x0010DEF8(void *packet, void *q)
{
    sceSifRpcPkt_x0010DEF8 *cd = packet;
    sceSifRpcPkt_x0010DEF8 *p;
    sceSifServeHdr_x0010DEF8 *sd;

    p = func_003B2B90_x0010DEF8(q);
    {
        int t1 = cd->f14;
        int t2 = cd->f1C;
        p->f14 = t1;
        p->f1C = t2;
    }
    p->f20 = 0x80000009;
    sd = func_003B2DE8_x0010DEF8(cd->f20, q);
    if (sd == 0) {
        p->f24 = 0;
        p->f28 = 0;
    } else {
        p->f24 = (int)sd;
        p->f28 = sd->f08;
    }
    if (isceSifSendCmd_x0010DEF8(0x80000008, p, 0x40, 0, 0, 0) == 0) {
        func_003B7898_x0010DEF8(0x800, func_003B2E38_x0010DEF8, p);
    }
}
typedef struct {
    int unk0;
    int unk4;
    int unk8;
    unsigned char pad_C[0x4];
    int unk10;
    unsigned char pad_14[0x10];
    int unk24;
} SifClient_x0010DFC8;
typedef struct {
    unsigned char pad_0[0x14];
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
} SifRequest_x0010DFC8;
extern int D_01FE58C0_x0010DFC8[] __asm__("D_004733C0");
extern char SIF_BIND_SEMA_NAME_x0010DFC8[] __asm__("D_0045D638");
extern int CreateSema_x0010DFC8(int *) __asm__("CreateSema");
extern int DeleteSema_x0010DFC8(int) __asm__("DeleteSema");
extern int WaitSema_x0010DFC8(int) __asm__("WaitSema");
extern int func_1ED3F50_x0010DFC8(int *) __asm__("func_0010D9E8");
extern int func_1ED3FF8_x0010DFC8(SifRequest_x0010DFC8 *) __asm__("func_0010DA90");
extern int sceSifSendCmd_x0010DFC8(int, SifRequest_x0010DFC8 *, int, int, int, int) __asm__("func_0010D5A8");
int sceSifBindRpc_x0010DFC8(SifClient_x0010DFC8 *client, int fno, int mode) __asm__("sceSifBindRpc");
/* sceSifBindRpc_x0010DFC8: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceSifBindRpc_x0010DFC8.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int sceSifBindRpc_x0010DFC8(SifClient_x0010DFC8 *client, int fno, int mode) {
    int sema_param[6];
    SifRequest_x0010DFC8 *request;
    int sema;
    int sent;

    client->unk10 = 0;
    client->unk24 = 0;
    request = (SifRequest_x0010DFC8 *)func_1ED3F50_x0010DFC8(D_01FE58C0_x0010DFC8);
    if (request == 0) {
        return -1;
    }
    client->unk4 = request->unk18;
    client->unk0 = (int)request;
    request->unk20 = fno;
    request->unk14 = (int)request;
    request->unk1C = (int)client;
    if (!(mode & 1)) {
        sema_param[1] = 1;
        sema_param[2] = 0;
        sema_param[5] = (int)SIF_BIND_SEMA_NAME_x0010DFC8;
        sema = CreateSema_x0010DFC8(sema_param);
        client->unk8 = sema;
        if (sema < 0) {
            func_1ED3FF8_x0010DFC8(request);
            return -3;
        }
        sent = sceSifSendCmd_x0010DFC8(0x80000009, request, 0x40, 0, 0, 0);
        if (sent == 0) {
            func_1ED3FF8_x0010DFC8(request);
            DeleteSema_x0010DFC8(client->unk8);
            return -2;
        }
        WaitSema_x0010DFC8(client->unk8);
        DeleteSema_x0010DFC8(client->unk8);
        return 0;
    } else {
        client->unk8 = -1;
        sent = sceSifSendCmd_x0010DFC8(0x80000009, request, 0x40, 0, 0, 0);
        if (sent != 0) {
            return 0;
        }
        func_1ED3FF8_x0010DFC8(request);
        return -2;
    }
}


/* The call request is queued on its server word by word: the ROM orders
   every load and store here (the packet's words, the server record's
   request words, the queue's start and end) as one integer alias set. */
void _request_call(void *pkt, void *data)
{
    int *req = pkt;
    int *sd = (int *)req[13];
    int *q = (int *)sd[16];
    int *start = (int *)q[3];
    if (start == 0) {
        q[3] = (int)sd;
    } else {
        ((int *)q[4])[15] = (int)sd;
    }
    q[4] = (int)sd;
    {
        int paddr = req[5], client = req[7];
        sd[8] = paddr;
        sd[7] = client;
    }
    sd[9] = req[8];
    sd[3] = req[9];
    sd[10] = req[10];
    sd[11] = req[11];
    sd[12] = req[12];
    sd[13] = req[4];
    if (q[0] < 0) {
        return;
    }
    if (q[1] != 0) {
        return;
    }
    iWakeupThread(q[0]);
}
INCLUDE_PAD(4);
extern __inline__ void *GetGp_x0010E1A8(void) __asm__("GetGp");
static __inline__ void *GetGp_x0010E1A8(void)
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
typedef unsigned int u_int_x0010E1A8;
typedef struct _sif_rpc_pkt_x0010E1A8 {
    unsigned char  pad00[0x14];
    u_int_x0010E1A8          self;      
    u_int_x0010E1A8          pid;       
    u_int_x0010E1A8          client;    
    u_int_x0010E1A8          fno;       
    int            ssize;     
    u_int_x0010E1A8          recv;      
    int            rsize;     
    int            rmode;     
    int            server;    
    unsigned char  pad38[0x8];
} sceSifRpcPkt_x0010E1A8;
typedef struct _sif_client_data_x0010E1A8 {
    sceSifRpcPkt_x0010E1A8  *paddr;     
    u_int_x0010E1A8          pid;       
    int            sema;      
    int            pad0C;     
    u_int_x0010E1A8          command;   
    u_int_x0010E1A8          buff;      
    u_int_x0010E1A8          gp;        
    void         (*efunc)(void *);  
    void          *epara;     
    int            server;    
} sceSifClientData_x0010E1A8;
struct SemaParam_x0010E1A8 {
    int            count;         
    int            max_count;     
    int            init_count;    
    int            wait_threads;  
    u_int_x0010E1A8          attr;          
    u_int_x0010E1A8          option;        
};
extern unsigned char D_0077FF40_x0010E1A8 __asm__("D_004733C0");
extern unsigned char D_00460070_x0010E1A8 __asm__("D_0045D648");
extern sceSifRpcPkt_x0010E1A8 *func_003B2AC8_x0010E1A8(void *rd) __asm__("func_0010D9E8");
extern void func_003B2B70_x0010E1A8(sceSifRpcPkt_x0010E1A8 *p) __asm__("func_0010DA90");
extern void func_003B2850_x0010E1A8(void *p, int size) __asm__("func_0010D770");
extern int sceSifSendCmd_x0010E1A8(u_int_x0010E1A8 fno, void *pkt, int pktsize, void *src, void *dst, int size) __asm__("func_0010D5A8");
extern int CreateSema_x0010E1A8(struct SemaParam_x0010E1A8 *sp) __asm__("CreateSema");
extern int DeleteSema_x0010E1A8(int id) __asm__("DeleteSema");
extern int WaitSema_x0010E1A8(int id) __asm__("WaitSema");
int sceSifCallRpc_x0010E1A8(sceSifClientData_x0010E1A8 *cd, u_int_x0010E1A8 fno, u_int_x0010E1A8 mode, void *send, int ssize,
                  void *recv, int rsize, void (*efunc)(void *), void *epara) __asm__("sceSifCallRpc");
/* func_003B3128: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b3128.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int sceSifCallRpc_x0010E1A8(sceSifClientData_x0010E1A8 *cd, u_int_x0010E1A8 fno, u_int_x0010E1A8 mode, void *send, int ssize,
                  void *recv, int rsize, void (*efunc)(void *), void *epara)
{
    sceSifRpcPkt_x0010E1A8 *p;
    struct SemaParam_x0010E1A8 sp;
    int srv;

    p = func_003B2AC8_x0010E1A8(&D_0077FF40_x0010E1A8);
    if (p == 0)
        return -1;
    cd->epara = epara;
    cd->pid = p->pid;
    cd->paddr = p;
    cd->efunc = efunc;
    cd->gp = (u_int_x0010E1A8)GetGp_x0010E1A8();
    p->fno = fno;
    p->ssize = ssize;
    p->recv = (u_int_x0010E1A8)recv;
    p->rsize = rsize;
    p->self = (u_int_x0010E1A8)p;
    srv = cd->server;
    p->client = (u_int_x0010E1A8)cd;
    p->server = srv;
    if ((mode & 2) == 0) {
        if (send == recv) {
            func_003B2850_x0010E1A8(send, (ssize < rsize) ? rsize : ssize);
        } else {
            if (ssize > 0)
                func_003B2850_x0010E1A8(send, ssize);
            if (rsize > 0)
                func_003B2850_x0010E1A8(recv, rsize);
        }
    }
    if (mode & 1) {
        if (efunc == 0) {
            p->rmode = 0;
        } else {
            p->rmode = 1;
        }
        cd->sema = -1;
        if (sceSifSendCmd_x0010E1A8(0x8000000A, p, 64, send, (void *)cd->buff, ssize) != 0)
            return 0;
        func_003B2B70_x0010E1A8(p);
        return -2;
    } else {
        sp.init_count = 0;
        sp.option = (u_int_x0010E1A8)&D_00460070_x0010E1A8;
        sp.max_count = 1;
        cd->sema = CreateSema_x0010E1A8(&sp);
        if (cd->sema < 0) {
            func_003B2B70_x0010E1A8(p);
            return -3;
        }
        p->rmode = 1;
        if (sceSifSendCmd_x0010E1A8(0x8000000A, p, 64, send, (void *)cd->buff, ssize) == 0) {
            DeleteSema_x0010E1A8(cd->sema);
            func_003B2B70_x0010E1A8(p);
            return -2;
        }
        WaitSema_x0010E1A8(cd->sema);
        DeleteSema_x0010E1A8(cd->sema);
        return 0;
    }
}


int sceSifCheckStatRpc(sceSifRpcClientData *cd)
{
    SifRpcPkt *p = cd->pkt;
    if (p == 0)
        goto ret0;
    if (cd->pid != p->rpch.rpcId)
        goto ret0;
    if (p->rpch.recId & 1)
        goto ret1;
ret0:
    return 0;
ret1:
    return 1;
}


void sceSifSetRpcQueue(sceSifQueueData *qd, int key)
{
    sceSifQueueData *q;

    DIntr();
    qd->key = key;
    qd->active = 0;
    qd->link = 0;
    qd->start = 0;
    qd->end = 0;
    qd->next = 0;
    if (rpc_data.active_queue == 0) {
        rpc_data.active_queue = qd;
    } else {
        for (q = rpc_data.active_queue; q->next != 0; q = q->next) {
            ;
        }
        q->next = qd;
    }
    EIntr();
}


void sceSifRegisterRpc(sceSifServeData *sd, unsigned int sid, sceSifRpcFunc func, void *buff,
                       sceSifRpcFunc cfunc, void *cbuff, sceSifQueueData *qd)
{
    sceSifServeData *q;

    DIntr();
    sd->next = 0;
    sd->link = 0;
    sd->command = sid;
    sd->func = func;
    sd->buff = buff;
    sd->cfunc = cfunc;
    sd->cbuff = cbuff;
    sd->base = qd;
    if (qd->link == 0) {
        qd->link = sd;
    } else {
        for (q = qd->link; q->link != 0; q = q->link) {
            ;
        }
        q->link = sd;
    }
    EIntr();
}


sceSifServeData *sceSifRemoveRpc(sceSifServeData *sd, sceSifQueueData *qd)
{
    sceSifServeData *q;
    DIntr();
    q = qd->link;
    if (q == sd) {
        qd->link = sd->link;
    } else {
        while (q != 0) {
            if (q->link == sd) {
                q->link = sd->link;
                break;
            }
            q = q->link;
        }
    }
    EIntr();
    return q;
}


sceSifQueueData *sceSifRemoveRpcQueue(sceSifQueueData *qd)
{
    sceSifQueueData *q;
    DIntr();
    q = rpc_data.active_queue;
    if (q == qd) {
        rpc_data.active_queue = qd->next;
    } else {
        while (q != 0) {
            if (q->next == qd) {
                q->next = qd->next;
                break;
            }
            q = q->next;
        }
    }
    EIntr();
    return q;
}


sceSifServeData *sceSifGetNextRequest(sceSifQueueData *qd)
{
    sceSifServeData *p;
    sceSifServeData *v;
    DIntr();
    p = qd->start;
    if (p == 0) {
        qd->active = 0;
        goto after;
    }
    v = p->next;
    qd->active = 1;
    qd->start = v;
after:
    EIntr();
    return p;
}


void sceSifExecRequest(sceSifServeData *sd)
{
    int size = 0;
    void *rec;
    SifRpcRendPkt *pkt;
    int i;
    sceSifDmaData dmat[2];
    int j;
    int r;

    rec = sd->func(sd->fno, sd->buff, sd->size);
    if (rec != 0) {
        size = sd->rsize;
    }
    if (sd->size > 0) {
        sceSifWriteBackDCache(sd->buff, sd->size);
    }
    if (size > 0) {
        sceSifWriteBackDCache(rec, size);
    }
    DIntr();
    if (sd->rid & 4) {
        pkt = _sceRpcGetFPacket2(&rpc_data, sd->rid >> 16);
    } else {
        pkt = _sceRpcGetFPacket(&rpc_data);
    }
    EIntr();
    pkt->cid = 0x8000000A;
    pkt->client = sd->client;
    if (sd->rmode != 0) {
        while (sceSifSendCmd(0x80000008, pkt, 0x40, rec, sd->receive, size) == 0) {
            ;
        }
        return;
    }
    pkt->rpch.rpcId = 0;
    i = 0;
    pkt->rpch.recId = 0;
    if (size > 0) {
        dmat[0].src = (unsigned int)rec;
        dmat[0].dest = (unsigned int)sd->receive;
        dmat[0].size = size;
        dmat[0].u.attr = 0;
        i = 1;
    }
    dmat[i].src = (unsigned int)pkt;
    dmat[i].dest = (unsigned int)sd->paddr;
    dmat[i].size = 0x40;
    dmat[i].u.attr = 0;
    i++;
    do {
        r = sceSifSetDma(dmat, i);
        if (r != 0) {
            break;
        }
        for (j = 0x100000; j != -1; j--) {
            ;
        }
    } while (r == 0);
}


void sceSifRpcLoop(sceSifQueueData *qd)
{
    sceSifServeData *item;
    for (;;) {
        while ((item = sceSifGetNextRequest(qd)) != 0) {
            sceSifExecRequest(item);
        }
        SleepThread();
    }
}
