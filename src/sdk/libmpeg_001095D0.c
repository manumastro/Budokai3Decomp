#include "common.h"

int DIntr_x001095D0(void) __asm__("DI");
int EIntr_x001095D0(void) __asm__("EI");
void func_001095D0_x001095D0(void) __asm__("func_001095D0");
/* _sceMpegStopIpuDma: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039a8e8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001095D0_x001095D0(void) {
    int oldstat;
    oldstat = DIntr_x001095D0();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 = 0;
    *(volatile unsigned int *)0x1000B400 = 0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFFU;
    if (oldstat != 0) EIntr_x001095D0();
    *(volatile unsigned int *)0x1000B020 = 0;
    *(volatile unsigned int *)0x1000B420 = 0;
    *(volatile unsigned int *)0x10002010 = 0x40000000;
}
int DIntr_x00109670(void) __asm__("DI");
int EIntr_x00109670(void) __asm__("EI");
typedef unsigned int u_int_x00109670;
extern char D_0045E610_x00109670[] __asm__("D_0045D360");
extern void _sceMpegError_x00109670(void *m, const char *msg) __asm__("func_00109738");
struct cbp_x00109670 { int reason; int pad[7]; };
extern int func_0039AB20_x00109670(void *p, struct cbp_x00109670 *q) __asm__("func_00107DE0");
void func_00109670_x00109670(void *m) __asm__("func_00109670");
/* _sceMpegErrorBdec: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039c2c8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00109670_x00109670(void *m)
{
    struct cbp_x00109670 cb;
    int oldstat;

    _sceMpegError_x00109670(m, D_0045E610_x00109670);
    cb.reason = 2;
    func_0039AB20_x00109670(*(void **)((char *)m + 0x868), &cb);
    *(volatile u_int_x00109670 *)0x10002010 = 0x40000000;
    cb.reason = 3;
    func_0039AB20_x00109670(*(void **)((char *)m + 0x868), &cb);
    oldstat = DIntr_x00109670();
    *(volatile u_int_x00109670 *)0x1000F590 = *(volatile u_int_x00109670 *)0x1000F520 | 0x10000;
    *(volatile u_int_x00109670 *)0x1000B000 = 0;
    *(volatile u_int_x00109670 *)0x1000F590 = *(volatile u_int_x00109670 *)0x1000F520 & 0xFFFEFFFF;
    if (oldstat)
        EIntr_x00109670();
    *(volatile u_int_x00109670 *)0x1000B020 = 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001095D0", func_00109738);
extern void func_003B1EE0_x00109790(void *buf, int size, int a, int b) __asm__("func_0010CE90");
extern void _sceMpegError_x00109790(int a0, void *buf) __asm__("func_00109738");
void func_00109790_x00109790(int a0, int a1, int a2) __asm__("func_00109790");
/* func_0039C3E8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0031edd0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00109790_x00109790(int a0, int a1, int a2)
{
    char buf[0x100];
    func_003B1EE0_x00109790(buf, 0x100, a1, a2);
    _sceMpegError_x00109790(a0, buf);
}
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
