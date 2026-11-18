/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libpad/libpad.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libkernl,src/sce/libpad */
#include "common.h"

/* libpad.a.  The archive's member boundaries in this build are not known,
 * so this file is the archive's whole run. */
#include <sifrpc.h>

#include <sifcmd.h>

#include <libpad.h>

#include <stdio.h>

#include <eekernel.h>

#include <string.h>

#define PAD_DEBUG 0 /* derived name */

struct S12 { /* field names derived */
    char b[12];
};

/* The per-port, per-slot state record (0x1C bytes, padSlot[2][4]).  The
 * pointer fields are typed by what scePadPortOpen stores in them: the EE pad
 * DMA area the caller passes, this slot's command buffer (read back as an int
 * pointer by scePadSetActDirect), and the IOP-side buffer address the open
 * RPC returns, with the command buffer's type.  scePadInit clears the two
 * words at 0x14 and 0x18, which nothing else in the run reads. */
typedef struct {   /* field names derived */
    void *dmaArea; /* 0x00 */
    int *cmdBuf;   /* 0x04 */
    int *iopBuf;   /* 0x08 */
    int dmaId;     /* 0x0C, the sceSifSetDma id _send_to_iop polls */
    int opened;    /* 0x10 */
    int pad14;     /* 0x14 */
    int pad18;     /* 0x18 */
} PadSlot;

#define printf scePrintf

 /* derived name */

#define padInited D_003EDD00
#define padDebug D_003EDD04
#define padClient D_00478940
#define padSlot D_00478990
#define padRpcBuf D_00478B80
extern int padInited;

 /* derived name */

extern int padDebug;

 /* derived name */

/* the member's .bss: the two RPC clients (padman's two servers), the slot
   records, each slot's 64-byte command buffer and the RPC buffer */
extern sceSifRpcClientData padClient[2];

 /* derived name */

extern PadSlot padSlot[2][4];

 /* derived name */

extern int padRpcBuf[32];

 /* derived name */

/* The IOP send helper, libpad.o's first function (its first string is the
   member's first .rodata entry). */
void _send_to_iop(int port, int slot);

int scePadInit2(int a0);

int scePadEnd(void);

int scePadPortOpen(int port, int slot, void *addr);

int scePadGetDmaStr(int port, int slot);

int scePadGetFrameCount(int port, int slot);

int scePadRead(int port, int slot, void *data);

int scePadGetState(int port, int slot);

 /* derived name */

void scePadStateIntToStr(unsigned int state, char *str);

int scePadSetReqState(int port, int slot, int state);

int scePadGetReqState(int port, int slot);

 /* derived name */

void scePadReqIntToStr(unsigned int state, char *str);

/* the pad DMA buffer scePadGetDmaStr hands back, laid out from the offsets
   this TU's members use: the input data scePadRead copies out (scePadPortOpen
   fills its first 32 bytes with 0xFF), the actuator and combination tables of
   four-byte records, the mode table scePadInfoMode indexes, the frame count
   and data size, the levels of information the pad has answered with, and the
   state bytes scePadGetState and scePadSetReqState use.  A byte nothing reads
   is padding. */
typedef struct {               /* field names derived */
    unsigned char data[32];    /* 0x00 */
    unsigned char pad20[16];   /* 0x20 */
    unsigned char act[4][4];   /* 0x30 */
    unsigned char comb[4][4];  /* 0x40 */
    unsigned short modeTbl[4]; /* 0x50 */
    int frame;                 /* 0x58 */
    unsigned char pad5C[4];    /* 0x5C */
    int size;                  /* 0x60 */
    unsigned char infoLevel;   /* 0x64, 2 or more once the act and comb tables are filled */
    unsigned char modeId;      /* 0x65, the pad's id, 0xF3 for none */
    unsigned char maskLevel;   /* 0x66, 2 or more once the button mask is filled */
    unsigned char pad67;       /* 0x67 */
    unsigned char nmode;       /* 0x68 */
    unsigned char curMode;     /* 0x69 */
    unsigned char nact;        /* 0x6A */
    unsigned char ncomb;       /* 0x6B */
    unsigned char pad6C[4];    /* 0x6C */
    unsigned char state;       /* 0x70 */
    unsigned char reqState;    /* 0x71 */
    unsigned char infoValid;   /* 0x72, 1 when the pad's information is valid */
} PadDmaStr;

                   /* derived name */

int scePadInfoAct(int port, int slot, int act, int term);

int scePadInfoComb(int port, int slot, int comb, int term);

int scePadInfoMode(int port, int slot, int term, int index);

int scePadSetActDirect(int port, int slot, unsigned char *act);

int scePadGetButtonMask(int port, int slot);

int scePadSetButtonInfo(int port, int slot, int mask);

int scePadSetVrefParam(int port, int slot, void *param);

int scePadGetSlotMax(int port);

int scePadSetWarningLevel(int level);

extern char D_0045DA20[];
extern char D_0045DA48[];



int scePadInit(int a0)
{
    int ver;
    int major;
    int i;

    padInited = 1;
    while (1) {
        sceSifBindRpc(&padClient[0], 0x80000100, 0);
        if (padClient[0].serve != 0) {
            break;
        }
        for (i = 0x10000; i != -1; i--) {}
    }
    while (1) {
        sceSifBindRpc(&padClient[1], 0x80000101, 0);
        if (padClient[1].serve != 0) {
            break;
        }
        for (i = 0x10000; i != -1; i--) {}
    }
    ver = scePadGetModVersion();
    major = ver >> 8;
    if (major != 4) {
        if (padDebug != 0) {
            printf(D_0045DA20);
            printf(D_0045DA48, 4, 0, major, ver & 0xFF);
        }
        return 0;
    }
    return scePadInit2(a0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116690);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadInit2);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_001167D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116860);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116978);


int scePadPortClose(int port, int slot)
{
    int ret;

    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    padRpcBuf[0] = 0xE;
    padRpcBuf[1] = port;
    padRpcBuf[2] = slot;
    padRpcBuf[4] = 1;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    padSlot[port][slot].opened = 0;
    return padRpcBuf[3];
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116C18);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116D70);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116DC8);
typedef struct PadData_x00116E40 {
    unsigned char data[0x50];            
    unsigned short modeTable[4];         
    int frame;                           
    int unk5C;
    int length;                          
    unsigned char modeConfig;            
    unsigned char modeCurId;             
    unsigned char model;                 
    unsigned char unk67;
    unsigned char nrOfModes;             
    unsigned char modeCurOffs;           
    unsigned char unk6A[6];
    unsigned char state;                 
    unsigned char reqState;              
    unsigned char ok;                    
    unsigned char unk73[0xD];
} PadData_x00116E40;
typedef struct PadCmd_x00116E40 {
    int count;                           
    int unk04;
    int len;                             
    unsigned char data[0x14];            
} PadCmd_x00116E40;
typedef struct {
    PadData_x00116E40 *buf;                        
    PadCmd_x00116E40 *cmd;                         
    unsigned int iopCmd;                 
    int dmaid;                           
    int open;                            
    int unk14;
    int unk18;
} PadInfoT_x00116E40;
extern PadInfoT_x00116E40 D_0077C110_x00116E40[2][4] __asm__("D_00478990");
PadData_x00116E40 *func_00397BC8_x00116E40(int port, int slot, PadData_x00116E40 *buf) __asm__("func_00116C18");
int func_00116E40_x00116E40(int port, int slot) __asm__("func_00116E40");
/* scePadGetState: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00397d98.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00116E40_x00116E40(int port, int slot)
{
    PadData_x00116E40 buf;

    if (D_0077C110_x00116E40[port][slot].open == 0)
        return 0x63;
    func_00397BC8_x00116E40(port, slot, &buf);
    if (buf.state == 6) {
        if (buf.reqState == 2)
            return 5;
    }
    return buf.state;
}
char *strcpy_x00116EB8(char *dst, const char *src) __asm__("func_00127A88");
extern char *libpad_state_names_x00116EB8[] __asm__("D_003EDD10");
extern const char libpad_empty_str_x00116EB8[] __asm__("D_0045DB18");
void func_00116EB8_x00116EB8(unsigned int state, char *str) __asm__("func_00116EB8");
/* scePadStateIntToStr: from https://github.com/new-coke/rez-decomp (src/sce/libpad.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00116EB8_x00116EB8(unsigned int state, char *str)
{
    if (state < 8)
        strcpy_x00116EB8(str, libpad_state_names_x00116EB8[state]);
    else
        str[0] = libpad_empty_str_x00116EB8[0];
}
int DIntr_x00116EF0(void) __asm__("DI");
int EIntr_x00116EF0(void) __asm__("EI");
typedef struct PadData_x00116EF0 {
    unsigned char data[0x50];            
    unsigned short modeTable[4];         
    int frame;                           
    int unk5C;
    int length;                          
    unsigned char modeConfig;            
    unsigned char modeCurId;             
    unsigned char model;                 
    unsigned char unk67;
    unsigned char nrOfModes;             
    unsigned char modeCurOffs;           
    unsigned char unk6A[6];
    unsigned char state;                 
    unsigned char reqState;              
    unsigned char ok;                    
    unsigned char unk73[0xD];
} PadData_x00116EF0;
typedef struct PadCmd_x00116EF0 {
    int count;                           
    int unk04;
    int len;                             
    unsigned char data[0x14];            
} PadCmd_x00116EF0;
typedef struct {
    PadData_x00116EF0 *buf;                        
    PadCmd_x00116EF0 *cmd;                         
    unsigned int iopCmd;                 
    int dmaid;                           
    int open;                            
    int unk14;
    int unk18;
} PadInfoT_x00116EF0;
extern PadInfoT_x00116EF0 D_0077C110_x00116EF0[2][4] __asm__("D_00478990");
PadData_x00116EF0 *func_00397BC8_x00116EF0(int port, int slot, PadData_x00116EF0 *buf) __asm__("func_00116C18");
extern void SyncDCache_x00116EF0(void *start, void *end) __asm__("func_0010AB58");
int scePadSetReqState_x00116EF0(int port, int slot, int state) __asm__("scePadSetReqState");
/* scePadSetReqState_x00116EF0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00397e18.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int scePadSetReqState_x00116EF0(int port, int slot, int state)
{
    int oldstat;
    PadData_x00116EF0 *p;

    if (D_0077C110_x00116EF0[port][slot].open == 0)
        return 0;
    oldstat = DIntr_x00116EF0();
    p = func_00397BC8_x00116EF0(port, slot, 0);
    p->reqState = state;
    SyncDCache_x00116EF0(p, &p->unk73[sizeof(p->unk73) - 1]);  
    if (oldstat == 1)
        EIntr_x00116EF0();
    return 1;
}
typedef struct PadData_x00116FA8 {
    unsigned char data[0x50];            
    unsigned short modeTable[4];         
    int frame;                           
    int unk5C;
    int length;                          
    unsigned char modeConfig;            
    unsigned char modeCurId;             
    unsigned char model;                 
    unsigned char unk67;
    unsigned char nrOfModes;             
    unsigned char modeCurOffs;           
    unsigned char unk6A[6];
    unsigned char state;                 
    unsigned char reqState;              
    unsigned char ok;                    
    unsigned char unk73[0xD];
} PadData_x00116FA8;
typedef struct PadCmd_x00116FA8 {
    int count;                           
    int unk04;
    int len;                             
    unsigned char data[0x14];            
} PadCmd_x00116FA8;
typedef struct {
    PadData_x00116FA8 *buf;                        
    PadCmd_x00116FA8 *cmd;                         
    unsigned int iopCmd;                 
    int dmaid;                           
    int open;                            
    int unk14;
    int unk18;
} PadInfoT_x00116FA8;
extern PadInfoT_x00116FA8 D_0077C110_x00116FA8[2][4] __asm__("D_00478990");
PadData_x00116FA8 *func_00397BC8_x00116FA8(int port, int slot, PadData_x00116FA8 *buf) __asm__("func_00116C18");
int func_00116FA8_x00116FA8(int port, int slot) __asm__("func_00116FA8");
/* scePadGetReqState: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00397ed0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00116FA8_x00116FA8(int port, int slot)
{
    PadData_x00116FA8 *p;

    if (D_0077C110_x00116FA8[port][slot].open == 0)
        return 0;
    p = func_00397BC8_x00116FA8(port, slot, 0);
    return p->reqState;
}
char *strcpy_x00117000(char *dst, const char *src) __asm__("func_00127A88");
extern const char libpad_empty_str_x00117000[] __asm__("D_0045DB18");
extern char *libpad_req_state_names_x00117000[] __asm__("D_003EDD30");
void func_00117000_x00117000(unsigned int state, char *str) __asm__("func_00117000");
/* scePadReqIntToStr: from https://github.com/new-coke/rez-decomp (src/sce/libpad.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00117000_x00117000(unsigned int state, char *str)
{
    if (state < 4)
        strcpy_x00117000(str, libpad_req_state_names_x00117000[state]);
    else
        str[0] = libpad_empty_str_x00117000[0];
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117038);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117150);
typedef struct PadData_x00117268 {
    unsigned char data[0x50];            
    unsigned short modeTable[4];         
    int frame;                           
    int unk5C;
    int length;                          
    unsigned char modeConfig;            
    unsigned char modeCurId;             
    unsigned char model;                 
    unsigned char unk67;
    unsigned char nrOfModes;             
    unsigned char modeCurOffs;           
    unsigned char unk6A[6];
    unsigned char state;                 
    unsigned char reqState;              
    unsigned char ok;                    
    unsigned char unk73[0xD];
} PadData_x00117268;
typedef struct PadCmd_x00117268 {
    int count;                           
    int unk04;
    int len;                             
    unsigned char data[0x14];            
} PadCmd_x00117268;
typedef struct {
    PadData_x00117268 *buf;                        
    PadCmd_x00117268 *cmd;                         
    unsigned int iopCmd;                 
    int dmaid;                           
    int open;                            
    int unk14;
    int unk18;
} PadInfoT_x00117268;
extern PadInfoT_x00117268 D_0077C110_x00117268[2][4] __asm__("D_00478990");
PadData_x00117268 *func_00397BC8_x00117268(int port, int slot, PadData_x00117268 *buf) __asm__("func_00116C18");
int func_00117268_x00117268(int port, int slot, int term, int offs) __asm__("func_00117268");
/* scePadInfoMode: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00397f38.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117268_x00117268(int port, int slot, int term, int offs)
{
    PadData_x00117268 fr;

    if (D_0077C110_x00117268[port][slot].open == 0)
        return 0;
    func_00397BC8_x00117268(port, slot, &fr);
    if (fr.ok != 1)
        return 0;
    if (fr.reqState == 2)
        return 0;
    switch (term) {
    case 1:
        if (fr.modeCurId == 0xF3)
            return 0;
        return fr.modeCurId >> 4;
    case 2:
        if (fr.modeConfig == 1)
            return 0;
        return fr.modeTable[fr.modeCurOffs];
    case 3:
        if (fr.modeConfig == 1)
            return 0;
        return fr.modeCurOffs;
    case 4:
        if (fr.modeConfig == 1)
            return 0;
        if (offs == -1)
            return fr.nrOfModes;
        if (offs >= fr.nrOfModes)
            return 0;
        return fr.modeTable[offs];
    }
    return 0;
}


int scePadSetMainMode(int port, int slot, int mode, int option)
{
    int *s0 = padRpcBuf;
    void *local = 0;
    int ret;
    int s;
    padRpcBuf[0] = 6;
    s0[1] = port;
    s0[2] = slot;
    s0[3] = mode;
    s0[4] = option;
    ret = sceSifCallRpc(&padClient[0], 1, 0, s0, 0x80, s0, 0x80, 0, local);
    if (ret < 0) {
        return 0;
    }
    s = s0[5];
    if (s == 1) {
        scePadSetReqState(port, slot, 2);
        s = s0[5];
    }
    return s;
}
INCLUDE_PAD(4);
typedef struct PadData_x00117458 {
    unsigned char data[0x50];            
    unsigned short modeTable[4];         
    int frame;                           
    int unk5C;
    int length;                          
    unsigned char modeConfig;            
    unsigned char modeCurId;             
    unsigned char model;                 
    unsigned char unk67;
    unsigned char nrOfModes;             
    unsigned char modeCurOffs;           
    unsigned char unk6A[6];
    unsigned char state;                 
    unsigned char reqState;              
    unsigned char ok;                    
    unsigned char unk73[0xD];
} PadData_x00117458;
typedef struct PadCmd_x00117458 {
    int count;                           
    int unk04;
    int len;                             
    unsigned char data[0x14];            
} PadCmd_x00117458;
typedef struct {
    PadData_x00117458 *buf;                        
    PadCmd_x00117458 *cmd;                         
    unsigned int iopCmd;                 
    int dmaid;                           
    int open;                            
    int unk14;
    int unk18;
} PadInfoT_x00117458;
extern PadInfoT_x00117458 D_0077C110_x00117458[2][4] __asm__("D_00478990");
PadData_x00117458 *func_00397BC8_x00117458(int port, int slot, PadData_x00117458 *buf) __asm__("func_00116C18");
int func_003978C8_x00117458(int port, int slot) __asm__("func_00116860");
int func_00117458_x00117458(int port, int slot, const unsigned char *data) __asm__("func_00117458");
/* scePadSetActDirect: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00398128.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117458_x00117458(int port, int slot, const unsigned char *data)
{
    PadData_x00117458 buf;
    PadCmd_x00117458 *p;
    int i;
    int ret;

    func_00397BC8_x00117458(port, slot, &buf);
    if (buf.ok != 1)
        return 0;
    p = D_0077C110_x00117458[port][slot].cmd;
    for (i = 0; i < 6; i++)
        p->data[i] = data[i];
    p->unk04 = 1;
    p->len = 6;
    ret = 1;
    if (func_003978C8_x00117458(port, slot) != 1)
        ret = 0;
    return ret;
}


int scePadSetActAlign(int port, int slot, char *act)
{
    int *buf = padRpcBuf;
    int i;
    int val;
    int ret;
    char *dst;
    padRpcBuf[0] = 8;
    buf[1] = port;
    buf[2] = slot;
    dst = (char *)buf + 0xC;
    for (i = 0; i < 6; i++) {
        dst[i] = act[i];
    }
    ret = sceSifCallRpc(&padClient[0], 1, 0, buf, 0x80, buf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    val = buf[5];
    if (val == 1) {
        scePadSetReqState(port, slot, 2);
        val = buf[5];
    }
    return val;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadGetButtonMask);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadSetButtonInfo);


int scePadInfoPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadGetButtonMask(port, slot) == 0x3FFFF;
}


int scePadEnterPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadSetButtonInfo(port, slot, 0xFFF);
}


int scePadExitPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadSetButtonInfo(port, slot, 0);
}
INCLUDE_PAD(4);
typedef struct PadRpcBuf_x00117868 {           
    int cmd;
    int port;
    int slot;
    int data;
    int param;
    int result;
    char pad_18[4];
    int vref_result;
    char pad_20[96];
} PadRpcBuf_x00117868;
typedef struct RpcPkt_x00117868 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x00117868 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x00117868;
int scePadSetReqState_x00117868(int port, int slot, int state) __asm__("func_00116EF0");
struct RpcPkt_x00117868;
extern int sceSifCallRpc_x00117868(struct RpcPkt_x00117868 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
typedef struct SifClient40_a_x00117868 {       
    char pad_00[36];
    void *server;                    
} SifClient40_a_x00117868;
typedef struct {
    unsigned char b[12];
} PadVrefParam_x00117868;
extern SifClient40_a_x00117868 libpad_clients_x00117868[2] __asm__("D_00478940");
extern PadRpcBuf_x00117868 libpad_rpc_buf_x00117868 __asm__("D_00478B80");
int scePadSetReqState_x00117868(int port, int slot, int state) __asm__("func_00116EF0");
int func_00117868_x00117868(int port, int slot, PadVrefParam_x00117868 *data) __asm__("func_00117868");
/* scePadSetVrefParam: from https://github.com/new-coke/rez-decomp (src/sce/libpad.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00117868_x00117868(int port, int slot, PadVrefParam_x00117868 *data)
{
    PadRpcBuf_x00117868 *rpc;

    rpc = &libpad_rpc_buf_x00117868;
    rpc->cmd = 11;
    rpc->port = port;
    rpc->slot = slot;
    *(PadVrefParam_x00117868 *)&rpc->data = *data;
    if (sceSifCallRpc_x00117868(libpad_clients_x00117868, 1, 0, rpc, 128, rpc, 128, 0, 0) < 0)
        return 0;
    if (rpc->vref_result == 1) {
        scePadSetReqState_x00117868(port, slot, 2);
    }
    return rpc->vref_result;
}


int scePadGetPortMax(void)
{
    int ret;
    padRpcBuf[0] = 0xC;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    return padRpcBuf[3];
}
INCLUDE_PAD(4);
typedef struct PadRpcBuf_x001179A0 {           
    int cmd;
    int port;
    int slot;
    int data;
    int param;
    int result;
    char pad_18[4];
    int vref_result;
    char pad_20[96];
} PadRpcBuf_x001179A0;
typedef struct RpcPkt_x001179A0 {
    void *cur_pkt;               
    int cur_pkt_id;
    int sema;                
    char pad_0c[4];
    unsigned int rid;        
    void *pkt_addr;               
    int pkt_id;                 
    struct RpcPkt_x001179A0 *client;      
    void *cmd;               
    void *server;               
    void *buff;               
    void *cbuff;               
    void *rmode;               
    char pad_34[12];
} RpcPkt_x001179A0;
struct RpcPkt_x001179A0;
extern int sceSifCallRpc_x001179A0(struct RpcPkt_x001179A0 *cd, unsigned int fno, unsigned int mode, void *send, int ssize,
                 void *receive, int rsize, void (*end_func)(void *), void *end_param) __asm__("sceSifCallRpc");
typedef struct SifClient40_a_x001179A0 {       
    char pad_00[36];
    void *server;                    
} SifClient40_a_x001179A0;
extern SifClient40_a_x001179A0 libpad_clients_x001179A0[2] __asm__("D_00478940");
extern PadRpcBuf_x001179A0 libpad_rpc_buf_x001179A0 __asm__("D_00478B80");
int func_001179A0_x001179A0(int port) __asm__("func_001179A0");
/* scePadGetSlotMax: from https://github.com/new-coke/rez-decomp (src/sce/libpad.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001179A0_x001179A0(int port)
{
    PadRpcBuf_x001179A0 *rpc;

    rpc = &libpad_rpc_buf_x001179A0;
    rpc->cmd = 13;
    rpc->port = port;
    if (sceSifCallRpc_x001179A0(libpad_clients_x001179A0, 1, 0, rpc, 128, rpc, 128, 0, 0) < 0)
        return 0;
    return rpc->data;
}


int scePadGetModVersion(void)
{
    int ret;
    padRpcBuf[0] = 0x12;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    return padRpcBuf[3];
}
INCLUDE_PAD(4);
