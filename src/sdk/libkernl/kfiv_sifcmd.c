/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libkernl/sifcmd.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libkernl */
#include "common.h"

/* libkernl.a(sifcmd.o) */

#include <eekernel.h>

#include <sifrpc.h>

#include <string.h>

#include <sifcmd.h>

#include <eeregs.h>

#include <libkernl_internal.h>

/* eekernel.h's spelling: FlushCache returns nothing. */

/* the two system commands sceSifInitCmd installs handlers for: the IOP moving
   its command buffer, and the IOP setting one of the software registers */
typedef struct { /* field names derived */
    SifCmdHeader header;
    int newaddr;        /* the IOP buffer address, the number iopbuf holds */
} SifCmdChangeAddrData;

 /* derived name */

typedef struct { /* field names derived */
    SifCmdHeader header;
    int rno;
    int value;
} SifCmdSRegData;

 /* derived name */

/* The 32-entry SIF command handler table, a
   handler function and the data pointer handed to it. */
typedef struct { /* field names derived */
    void (*fn)();
    void *data;
} SifCmdEntry;

 /* derived name */

/* The SIF command data record (fields 3/4 and 5/6
   are what sceSifSetSysCmdBuffer and sceSifSetCmdBuffer swap). */
typedef struct { /* field names derived */
    int sendbuf; /* the uncached alias of cmdSendBuf, its address OR 0x20000000 */
    int ackbuf;  /* the same for cmdAckBuf */
    int iopbuf;  /* the IOP's buffer address, read from and written to a SIF register */
    SifCmdEntry *systbl;
    int nsys;
    SifCmdEntry *usrtbl;
    int nusr;
    int *sreg;
} SifCmdData;

 /* derived name */

#define cmdDmacId D_00471994
#define cmdData D_00471998
#define cmdSreg D_00471B40
#define cmd_inited D_003EC628
extern int cmdDmacId;

 /* derived name */

extern SifCmdData cmdData;

 /* derived name */

extern int cmdSreg[32];

/* sifcmd.o's .data: set once sceSifInitCmd has run, cleared by sceSifExitCmd */
extern int cmd_inited;

 /* derived name */

void sceSifInitCmd(void);

/* The handler slot's address is worked as a byte offset into the table the
   id's sign selects, and cid itself then carries that table's address. */
void sceSifAddCmdHandler(int cid, void (*fn)(), void *data);

void sceSifRemoveCmdHandler(int cid);


 /* derived name */

void _set_sreg(void *pkt, void *data)
{
    SifCmdSRegData *sr = pkt;
    SifCmdData *cd = data;

    cd->sreg[sr->rno] = sr->value;
}


void _change_addr(void *pkt, void *data)
{
    SifCmdChangeAddrData *ca = pkt;
    SifCmdData *cd = data;

    cd->iopbuf = ca->newaddr;
}
 /* derived name */

int sceSifGetSreg(int reg)
{
    return cmdSreg[reg];
}


int sceSifSetSreg(int reg, int val)
{
    cmdSreg[reg] = val;
    return val;
}


void *sceSifGetDataTable(void)
{
    return &cmdData;
}
INCLUDE_PAD(4);
typedef struct { void (*func)(void *, void *); void *data; int pad; } SysH_x0010D0C0;
typedef struct { void *pkt; void *buf; int iop; SysH_x0010D0C0 *sys; int nsys; void *usr; int nusr; int *sregs; } CmdData_x0010D0C0;
typedef struct { int x0; int x4; int x8; int xC; void *x10; } CmdPkt_x0010D0C0;
extern int D_004861A8_x0010D0C0 __asm__("D_003EC628");
extern char D_004E2C80_x0010D0C0[] __asm__("D_004718C0");
extern char D_004E2D00_x0010D0C0[] __asm__("D_00471940");
extern CmdPkt_x0010D0C0 D_004E2D40_x0010D0C0 __asm__("D_00471980");
extern int D_004E2D54_x0010D0C0 __asm__("D_00471994");
extern CmdData_x0010D0C0 D_004E2D58_x0010D0C0 __asm__("D_00471998");
extern SysH_x0010D0C0 D_004E2D80_x0010D0C0[32] __asm__("D_004719C0");
extern int D_004E2F00_x0010D0C0[32] __asm__("D_00471B40");
extern int DIntr_x0010D0C0(void) __asm__("DI");
extern int EIntr_x0010D0C0(void) __asm__("EI");
extern void FlushCache_x0010D0C0(int) __asm__("FlushCache");
extern void sceSifSetDChain_x0010D0C0(void) __asm__("sceSifSetDChain");
extern int sceSifSetReg_x0010D0C0(unsigned int, unsigned int) __asm__("sceSifSetReg");
extern unsigned int sceSifGetReg_x0010D0C0(unsigned int) __asm__("sceSifGetReg");
extern int AddDmacHandler_x0010D0C0(int, void *, int) __asm__("AddDmacHandler");
extern int EnableDmac_x0010D0C0(int) __asm__("func_0010AE78");
extern int sceSifSendCmd_x0010D0C0(unsigned int, void *, int, void *, void *, int) __asm__("func_0010D5A8");
extern void _change_addr_x0010D0C0(void *, void *) __asm__("func_0010D068");
extern void _set_sreg_x0010D0C0(void *, void *) __asm__("func_0010D048");
extern int _sceSifCmdIntrHdlr_x0010D0C0(int) __asm__("func_0010D628");
void func_0010D0C0_x0010D0C0(void) __asm__("func_0010D0C0");
/* sceSifInitCmd: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10F460.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010D0C0_x0010D0C0(void)
{
    int i;
    unsigned int v;
    DIntr_x0010D0C0();
    if (D_004861A8_x0010D0C0) {
        EIntr_x0010D0C0();
        return;
    }
    D_004861A8_x0010D0C0 = 1;
    D_004E2D58_x0010D0C0.pkt = (void *)((unsigned int)D_004E2C80_x0010D0C0 | 0x20000000);
    D_004E2D58_x0010D0C0.buf = (void *)((unsigned int)D_004E2D00_x0010D0C0 | 0x20000000);
    D_004E2D58_x0010D0C0.iop = 0;
    D_004E2D58_x0010D0C0.sys = D_004E2D80_x0010D0C0;
    D_004E2D58_x0010D0C0.nsys = 32;
    D_004E2D58_x0010D0C0.usr = 0;
    D_004E2D58_x0010D0C0.nusr = 0;
    D_004E2D58_x0010D0C0.sregs = D_004E2F00_x0010D0C0;
    for (i = 0; i < 32; i++) {
        D_004E2D80_x0010D0C0[i].func = 0;
        D_004E2D80_x0010D0C0[i].data = 0;
    }
    for (i = 0; i < 32; i++)
        D_004E2F00_x0010D0C0[i] = 0;
    D_004E2D80_x0010D0C0[0].func = _change_addr_x0010D0C0;
    D_004E2D80_x0010D0C0[0].data = &D_004E2D58_x0010D0C0;
    D_004E2D80_x0010D0C0[1].func = _set_sreg_x0010D0C0;
    D_004E2D80_x0010D0C0[1].data = &D_004E2D58_x0010D0C0;
    EIntr_x0010D0C0();
    FlushCache_x0010D0C0(0);
    if ((*(volatile unsigned int *)(0x1000E010)) & 0x20)
        (*(volatile unsigned int *)(0x1000E010)) = 0x20;
    if (!((*(volatile unsigned int *)(0x1000C000)) & 0x100))
        sceSifSetDChain_x0010D0C0();
    D_004E2D54_x0010D0C0 = AddDmacHandler_x0010D0C0(5, _sceSifCmdIntrHdlr_x0010D0C0, 0);
    EnableDmac_x0010D0C0(5);
    v = sceSifGetReg_x0010D0C0(0x80000000);
    D_004E2D58_x0010D0C0.iop = v;
    if (v) {
        D_004E2D40_x0010D0C0.x10 = D_004E2C80_x0010D0C0;
        sceSifSendCmd_x0010D0C0(0x80000000, &D_004E2D40_x0010D0C0, 0x14, 0, 0, 0);
        return;
    }
    while (!(sceSifGetReg_x0010D0C0(4) & 0x20000))
        ;
    v = sceSifGetReg_x0010D0C0(2);
    D_004E2D58_x0010D0C0.iop = v;
    sceSifSetReg_x0010D0C0(0x80000000, v);
    sceSifSetReg_x0010D0C0(0x80000001, (unsigned int)&D_004E2D58_x0010D0C0);
    D_004E2D40_x0010D0C0.x10 = D_004E2C80_x0010D0C0;
    D_004E2D40_x0010D0C0.xC = 0;
    sceSifSendCmd_x0010D0C0(0x80000002, &D_004E2D40_x0010D0C0, 0x14, 0, 0, 0);
}


void sceSifExitCmd(void)
{
    DisableDmac(5);
    RemoveDmacHandler(5, cmdDmacId);
    cmd_inited = 0;
}


SifCmdEntry *sceSifSetCmdBuffer(SifCmdEntry *tbl, int n)
{
    SifCmdEntry *old = cmdData.usrtbl;
    cmdData.usrtbl = tbl;
    cmdData.nusr = n;
    return old;
}


SifCmdEntry *sceSifSetSysCmdBuffer(SifCmdEntry *tbl, int n)
{
    SifCmdEntry *old = cmdData.systbl;
    cmdData.systbl = tbl;
    cmdData.nsys = n;
    return old;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_sifcmd", func_0010D3A8);
typedef struct { int used; int unk4; int unk8; } Slot12_x0010D420;
extern Slot12_x0010D420* D_004E2D64_x0010D420 __asm__("D_004719A4");
extern Slot12_x0010D420* D_004E2D6C_x0010D420 __asm__("D_004719AC");
void func_0010D420_x0010D420(int handle) __asm__("func_0010D420");
/* sceSifRemoveCmdHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10F7C0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010D420_x0010D420(int handle)
{
    if (handle < 0)
        D_004E2D64_x0010D420[handle & 0x7FFFFFFF].used = 0;
    else
        D_004E2D6C_x0010D420[handle].used = 0;
}


int _sceSifSendCmd(int cid, int mode, void *pkt, int pktsize, void *src, void *dest, int size)
{
    sceSifDmaData dmat[2];
    SifCmdHeader *header;
    int count;

    if (pktsize < 16 || pktsize > 112) {
        return 0;
    }
    header = pkt;
    count = 0;
    if (size > 0) {
        header->dsize = size;
        dmat[0].src = (unsigned int)src;
        dmat[0].dest = (unsigned int)dest;
        dmat[0].size = size;
        header->dest = dest;
        dmat[0].u.attr = 0;
        count = 1;
        if (mode & 4) {
            sceSifWriteBackDCache(src, size);
        }
    } else {
        header->dsize = 0;
        header->dest = 0;
    }
    dmat[count].src = (unsigned int)pkt;
    dmat[count].dest = cmdData.iopbuf;
    dmat[count].size = pktsize;
    header->cid = cid;
    header->psize = pktsize;
    dmat[count].u.attr = 0x44;
    count++;
    sceSifWriteBackDCache(pkt, pktsize);
    if (mode & 1) {
        return isceSifSetDma(dmat, count);
    }
    return sceSifSetDma(dmat, count);
}


unsigned int sceSifSendCmd(int cid, void *pkt, int pktsize, void *src, void *dest, int size)
{
    return _sceSifSendCmd(cid, 0, pkt, pktsize, src, dest, size);
}


unsigned int isceSifSendCmd(int cid, void *pkt, int pktsize, void *src, void *dest, int size)
{
    return _sceSifSendCmd(cid, 1, pkt, pktsize, src, dest, size);
}
INCLUDE_PAD(4);
