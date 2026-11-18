/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libipu/ipuinit.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libipu,src/sce/libkernl */
#include "common.h"

/* libipu.a(ipuinit.o): the channel-4 control helper and sceIpuInit. */
#include <eekernel.h>

#include <eeregs.h>

#include <libipu.h>

#define setD4_CHCR setD4_CHCR_00109B60

/* ipuinit.o's own file static setD4_CHCR (libmpeg holds the global of the name, which
   libipu.o's functions call); sceIpuInit calls this one. */
void setD4_CHCR(int chcr);

typedef unsigned int u128_ipu __attribute__((mode(TI)));

 /* derived name */

/* The quantiser matrices sceIpuInit feeds to the IPU command FIFO: the four
   quadwords of the MPEG default INTRA matrix, then one quadword of 16 that
   is written four times to fill the flat NON-INTRA matrix.  The byte view
   carries the values, the quadword view the 16-byte alignment. */
extern union {  
    unsigned char b[80];
    volatile u128_ipu q[5];  
} ipuQuantMatrix __asm__("D_003EC590");

/* The sixteen-entry RGBA5551 colour table that follows it. */
extern union {  
    unsigned short c[16];
    u128_ipu q[2];
} ipuColorTable __asm__("D_003EC5E0");




void sceIpuInit(void)
{
    setD4_CHCR(1);
    *IPU_CTRL = 0x40000000;
    while (*IPU_CTRL < 0) {}
    *IPU_CMD = 0;
    while (*IPU_CTRL < 0) {}
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[0];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[1];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[2];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[3];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[4];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[4];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[4];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuQuantMatrix.q[4];
    *IPU_CMD = 0x50000000;
    while (*IPU_CTRL < 0) {}
    *IPU_CMD = 0x58000000;
    while (*IPU_CTRL < 0) {}
    *(volatile u128_ipu *)IPU_in_FIFO = ipuColorTable.q[0];
    *(volatile u128_ipu *)IPU_in_FIFO = ipuColorTable.q[1];
    *IPU_CMD = 0x60000000;
    while (*IPU_CTRL < 0) {}
    *IPU_CMD = 0x90000000;
    while (*IPU_CTRL < 0) {}
    *IPU_CTRL = 0x40000000;
    while (*IPU_CTRL < 0) {}
    *IPU_CMD = 0;
    while (*IPU_CTRL < 0) {}
}
INCLUDE_PAD(48);
