#include "common.h"

int func_00109AF8_x00109AF8(int mode, unsigned short timeout) __asm__("func_00109AF8");
/* sceIpuSync: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libipu/libipu.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00109AF8_x00109AF8(int mode, unsigned short timeout)
{
    int r = 0;
    switch (mode) {
    case 0:
        while (*((volatile int *)0x10002010) < 0) {}
        r = 0;
        break;
    case 1:
        r = (unsigned)*((volatile int *)0x10002010) >> 31;
        break;
    }
    return r;
}
int DI_x00109B60(void) __asm__("DI");
int EI_x00109B60(void) __asm__("EI");
void func_00109B60_x00109B60(unsigned int a0) __asm__("func_00109B60");
void func_00109B60_x00109B60(unsigned int a0)
{
    int oldstat;

    oldstat = DI_x00109B60();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B400 = a0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFFU;
    if (oldstat != 0) EI_x00109B60();
}
void setD4_CHCR_x00109BD8(int chcr) __asm__("func_00109B60");
typedef unsigned int u128_ipu_x00109BD8 __attribute__((mode(TI)));
extern union {  
    unsigned char b[80];
    volatile u128_ipu_x00109BD8 q[5];  
} ipuQuantMatrix_x00109BD8 __asm__("D_003EC590");
extern union {  
    unsigned short c[16];
    u128_ipu_x00109BD8 q[2];
} ipuColorTable_x00109BD8 __asm__("D_003EC5E0");
void func_00109BD8_x00109BD8(void) __asm__("func_00109BD8");
/* sceIpuInit: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libipu/ipuinit.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00109BD8_x00109BD8(void)
{
    setD4_CHCR_x00109BD8(1);
    *((volatile int *)0x10002010) = 0x40000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002000) = 0;
    while (*((volatile int *)0x10002010) < 0) {}
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[0];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[1];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[2];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[3];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[4];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[4];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[4];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuQuantMatrix_x00109BD8.q[4];
    *((volatile int *)0x10002000) = 0x50000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002000) = 0x58000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuColorTable_x00109BD8.q[0];
    *(volatile u128_ipu_x00109BD8 *)((volatile void *)0x10007010) = ipuColorTable_x00109BD8.q[1];
    *((volatile int *)0x10002000) = 0x60000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002000) = 0x90000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002010) = 0x40000000;
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002000) = 0;
    while (*((volatile int *)0x10002010) < 0) {}
}
INCLUDE_PAD(48);
