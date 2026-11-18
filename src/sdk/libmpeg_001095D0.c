#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_001095D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_00109670);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_00109738);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_00109790);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_001097D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_00109848);
typedef struct {  
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001098C0;
void setD3_CHCR_x001098C0(int chcr) __asm__("func_001097D0");
void setD4_CHCR_x001098C0(int chcr) __asm__("func_00109848");
void func_001098C0_x001098C0(sceIpuDmaEnv_x001098C0 *env) __asm__("func_001098C0");
/* sceIpuStopDMA: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libipu/libipu.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001098C0_x001098C0(sceIpuDmaEnv_x001098C0 *env)
{
    setD4_CHCR_x001098C0(1);
    env->d4madr = *((volatile int *)0x1000B410);
    env->d4tadr = *((volatile int *)0x1000B430);
    env->d4qwc = *((volatile int *)0x1000B420);
    env->d4chcr = *((volatile int *)0x1000B400);
    while (*((volatile int *)0x10002010) & 0xF0) {}
    setD3_CHCR_x001098C0(0);
    env->d3madr = *((volatile int *)0x1000B010);
    env->d3qwc = *((volatile int *)0x1000B020);
    env->d3chcr = *((volatile int *)0x1000B000);
    env->ipubp = *((volatile int *)0x10002020);
    env->ipuctrl = *((volatile int *)0x10002010);
}
typedef struct {  
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001099A8;
void setD3_CHCR_x001099A8(int chcr) __asm__("func_001097D0");
void setD4_CHCR_x001099A8(int chcr) __asm__("func_00109848");
void func_001099A8_x001099A8(sceIpuDmaEnv_x001099A8 *env) __asm__("func_001099A8");
/* sceIpuRestartDMA: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libipu/libipu.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001099A8_x001099A8(sceIpuDmaEnv_x001099A8 *env)
{
    unsigned int bp = env->ipubp;
    int cmd = bp & 0x7F;
    int n = ((bp >> 16) & 3) + ((bp >> 8) & 0xF);
    int madr = env->d4madr - (n << 4);
    int qwc = env->d4qwc + n;

    if (env->d3madr != 0 && env->d3qwc != 0) {
        *((volatile int *)0x1000B010) = env->d3madr;
        *((volatile int *)0x1000B020) = env->d3qwc;
        setD3_CHCR_x001099A8(env->d3chcr | 0x100);
    }
    while (*((volatile int *)0x10002010) < 0) {}
    *((volatile int *)0x10002000) = cmd;
    while (*((volatile int *)0x10002010) < 0) {}
    if (madr != 0 && qwc != 0) {
        *((volatile int *)0x1000B410) = madr;
        *((volatile int *)0x1000B430) = env->d4tadr;
        *((volatile int *)0x1000B420) = qwc;
        setD4_CHCR_x001099A8(env->d4chcr | 0x100);
    }
}
