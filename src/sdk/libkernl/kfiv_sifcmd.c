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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_sifcmd", func_0010D0C0);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_sifcmd", func_0010D420);


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
