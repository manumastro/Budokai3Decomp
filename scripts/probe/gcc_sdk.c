/* gcc probe, Sony's EE libraries (SDK 3.0): functions written from the assembly, compiled with every ee-gcc build
 * by scripts/gccmatch.py.
 *     .venv/bin/python scripts/gccmatch.py scripts/probe/gcc_sdk.c */

typedef unsigned int u_int;
typedef unsigned long u_long; /* 64 bits on the EE */

typedef struct {
    u_long NLOOP : 15;
    u_long EOP : 1;
    u_long pad16 : 16;
    u_long id : 14;
    u_long PRE : 1;
    u_long PRIM : 11;
    u_long FLG : 2;
    u_long NREG : 4;
    u_long REGS0 : 4, REGS1 : 4, REGS2 : 4, REGS3 : 4, REGS4 : 4, REGS5 : 4, REGS6 : 4, REGS7 : 4;
    u_long REGS8 : 4, REGS9 : 4, REGS10 : 4, REGS11 : 4, REGS12 : 4, REGS13 : 4, REGS14 : 4, REGS15 : 4;
} sceGifTag;

#define D2_CHCR ((volatile u_int *)0x1000A000)
#define D2_MADR ((volatile u_int *)0x1000A010)
#define D2_QWC ((volatile u_int *)0x1000A020)

extern char D_0045CBC8[]; /* "sceGsPutDrawEnv: DMA Ch.2 does not terminate\r\n" */
int func_0010CF48(const char *fmt, ...); /* scePrintf (libkernl) */

/* libgraph: sends a GIF packet (a drawing environment) through DMA channel 2. */
int sceGsPutDrawEnv(sceGifTag *giftag) {
    u_int i = 0;
    while (*D2_CHCR & 0x100) {
        if (i++ > 0x1000000) {
            func_0010CF48(D_0045CBC8);
            return -1;
        }
    }
    *D2_QWC = (int)(giftag->NLOOP & 0x7FFF) + 1;
    if (((u_int)giftag & 0x70000000) == 0x70000000) {
        *D2_MADR = ((u_int)giftag & 0x0FFFFFFF) | 0x80000000;
    } else {
        *D2_MADR = (u_int)giftag & 0x0FFFFFFF;
    }
    *D2_CHCR = 0x101;
    return 0;
}

#define D1_CHCR ((volatile u_int *)0x10009000)
#define D1_MADR ((volatile u_int *)0x10009010)
#define D1_QWC ((volatile u_int *)0x10009020)
#define D1_TADR ((volatile u_int *)0x10009030)
#define D2_TADR ((volatile u_int *)0x1000A030)
#define VIF1_STAT ((volatile u_int *)0x10003C00)
#define GIF_STAT ((volatile u_int *)0x10003020)

extern char D_0045CBF8[], D_0045CCD8[], D_0045CD08[], D_0045CD38[], D_0045CD60[]; /* "...does not terminate" */
extern char D_0045CC28[], D_0045CC38[], D_0045CC48[], D_0045CC58[];               /* "\t<D1_CHCR=%08x:" ... */
extern char D_0045CC68[], D_0045CC78[], D_0045CC88[], D_0045CC98[];               /* "\t<D2_CHCR=%08x:" ... */
extern char D_0045CCA8[], D_0045CCC0[];                                           /* VIF1_STAT, GIF_STAT */

/* libgraph: mode 0 waits (one shared time-out counter) until DMA channels 1 and 2, VIF1, VU1 and GIF are idle and
 * dumps the registers if one does not finish; any other mode returns a bit per busy unit. */
#define VU1_STAT(v) __asm__ volatile("cfc2 %0, $vi29" : "=r"(v))
/* Near miss: 45 of 197 differ with the 2.9-ee builds at -O2. The five waits and the status branch match; the
 * time-out paths do not: the original puts them in source order (D1 first, the last falling into one shared
 * scePrintf with the message in $a0), this form puts the D1 path last and loads the message through $v0. One
 * scePrintf per path with the register dump after each (for cross-jumping to merge) gives no merging at all. */
int sceGsSyncPath(int mode, unsigned short timeout) {
    u_int cnt = 0; u_int vu1; char *msg; int ret;
    if (mode == 0) {
        while (*D1_CHCR & 0x100) {
            if (cnt++ > 0x1000000) { msg = D_0045CBF8; goto error; }
        }
        while (*D2_CHCR & 0x100) {
            if (cnt++ > 0x1000000) { msg = D_0045CCD8; goto error; }
        }
        while (*VIF1_STAT & 0x1F000003) {
            if (cnt++ > 0x1000000) { msg = D_0045CD08; goto error; }
        }
        VU1_STAT(vu1);
        while (vu1 & 0x100) {
            if (cnt++ > 0x1000000) { msg = D_0045CD38; goto error; }
            VU1_STAT(vu1);
        }
        while (*GIF_STAT & 0xC00) {
            if (cnt++ > 0x1000000) { msg = D_0045CD60; goto error; }
        }
        return 0;
    error:
        func_0010CF48(msg);
        func_0010CF48(D_0045CC28, *D1_CHCR);
        func_0010CF48(D_0045CC38, *D1_TADR);
        func_0010CF48(D_0045CC48, *D1_MADR);
        func_0010CF48(D_0045CC58, *D1_QWC);
        func_0010CF48(D_0045CC68, *D2_CHCR);
        func_0010CF48(D_0045CC78, *D2_TADR);
        func_0010CF48(D_0045CC88, *D2_MADR);
        func_0010CF48(D_0045CC98, *D2_QWC);
        func_0010CF48(D_0045CCA8, *VIF1_STAT);
        func_0010CF48(D_0045CCC0, *GIF_STAT);
        return -1;
    }
    ret = 0;
    if (*D1_CHCR & 0x100) ret = 1;
    if (*D2_CHCR & 0x100) ret |= 2;
    if (*VIF1_STAT & 0x1F000003) ret |= 4;
    VU1_STAT(vu1);
    if (vu1 & 0x100) ret |= 8;
    if (*GIF_STAT & 0xC00) ret |= 0x10;
    return ret;
}
