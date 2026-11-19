#include "common.h"

int printf_x00100CF8(const char *fmt, ...) __asm__("scePrintf");
extern char ext_str0_x00100CF8[] __asm__("D_0045CBC8");
int sceGsPutDrawEnv_x00100CF8(void *pkt) __asm__("sceGsPutDrawEnv");
/* sceGsPutDrawEnv_x00100CF8: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libgraph/graph008.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int sceGsPutDrawEnv_x00100CF8(void *pkt)
{
    unsigned int count;
    int qwc;

    count = 0;
    while (*((volatile int *)0x1000A000) & 0x100) {
        if (count++ > 0x1000000) {
            printf_x00100CF8(ext_str0_x00100CF8);
            return -1;
        }
    }
    qwc = *(long long *)pkt & 0x7FFF;
    *((volatile int *)0x1000A020) = qwc + 1;
    if (((unsigned int)pkt & 0x70000000) == 0x70000000)
        *((volatile int *)0x1000A010) = ((unsigned int)pkt & 0xFFFFFFF) | 0x80000000;
    else
        *((volatile int *)0x1000A010) = (unsigned int)pkt & 0xFFFFFFF;
    *((volatile int *)0x1000A000) = 0x101;
    return 0;
}
typedef struct {
    short inter;    
    short omode;    
    short ffmd;     
    short version;  
    int intcUsed;   
    int handler_x00100DE0;    
} sceGsGParam_x00100DE0;
sceGsGParam_x00100DE0 *sceGsGetGParam_x00100DE0(void) __asm__("func_001003E0");
extern int AddIntcHandler(int cause, int (*handler_x00100DE0)(int cause), int next) __asm__("handler");
extern int AddDmacHandler(int channel, int (*handler_x00100DE0)(int channel), int next) __asm__("handler");
extern int SetAlarm(unsigned short time, void (*handler_x00100DE0)(int id, unsigned short time, void *arg),
             void *arg) __asm__("handler");
void VSync_x00100DE0(void) __asm__("func_0010A6F0");
long long VSync2_x00100DE0(void) __asm__("func_0010A780");
int func_00100DE0_x00100DE0(int mode) __asm__("func_00100DE0");
/* sceGsSyncV: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libgraph/graph011.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00100DE0_x00100DE0(int mode)
{
    sceGsGParam_x00100DE0 *gp = sceGsGetGParam_x00100DE0();
    long c;

    if (gp->intcUsed == 0) {
        VSync_x00100DE0();
        if (gp->inter != 1) {
            return 1;
        }
        return (int)((*((volatile unsigned long *)0x12001000) >> 13) & 1);
    }
    c = VSync2_x00100DE0();
    c = (c >> 13) & 1;
    if (gp->inter != 1) {
        return 1;
    }
    return (int)c;
}
typedef unsigned short u16_x00100E78;
typedef signed int s32_x00100E78;
typedef unsigned int u32_x00100E78;
extern void scePrintf_x00100E78(const char *fmt, ...) __asm__("scePrintf");
extern void scePrintf_x00100E78(const char *fmt, ...) __asm__("scePrintf");
extern const char sceGsSyncPathDma1Msg_x00100E78[] __asm__("D_0045CBF8");
extern const char sceGsDumpD1ChcrFmt_x00100E78[] __asm__("D_0045CC28");
extern const char sceGsDumpD1TadrFmt_x00100E78[] __asm__("D_0045CC38");
extern const char sceGsDumpD1MadrFmt_x00100E78[] __asm__("D_0045CC48");
extern const char sceGsDumpD1QwcFmt_x00100E78[] __asm__("D_0045CC58");
extern const char sceGsDumpD2ChcrFmt_x00100E78[] __asm__("D_0045CC68");
extern const char sceGsDumpD2TadrFmt_x00100E78[] __asm__("D_0045CC78");
extern const char sceGsDumpD2MadrFmt_x00100E78[] __asm__("D_0045CC88");
extern const char sceGsDumpD2QwcFmt_x00100E78[] __asm__("D_0045CC98");
extern const char sceGsDumpVif1StatFmt_x00100E78[] __asm__("D_0045CCA8");
extern const char sceGsDumpGifStatFmt_x00100E78[] __asm__("D_0045CCC0");
extern const char sceGsSyncPathDma2Msg_x00100E78[] __asm__("D_0045CCD8");
extern const char sceGsSyncPathVif1Msg_x00100E78[] __asm__("D_0045CD08");
extern const char sceGsSyncPathVu1Msg_x00100E78[] __asm__("D_0045CD38");
extern const char sceGsSyncPathGifMsg_x00100E78[] __asm__("D_0045CD60");
extern const char sceGsSyncPathDma1Msg_x00100E78[48] __asm__("D_0045CBF8");
extern const char sceGsDumpD1ChcrFmt_x00100E78[16] __asm__("D_0045CC28");
extern const char sceGsDumpD1TadrFmt_x00100E78[16] __asm__("D_0045CC38");
extern const char sceGsDumpD1MadrFmt_x00100E78[16] __asm__("D_0045CC48");
extern const char sceGsDumpD1QwcFmt_x00100E78[16] __asm__("D_0045CC58");
extern const char sceGsDumpD2ChcrFmt_x00100E78[16] __asm__("D_0045CC68");
extern const char sceGsDumpD2TadrFmt_x00100E78[16] __asm__("D_0045CC78");
extern const char sceGsDumpD2MadrFmt_x00100E78[16] __asm__("D_0045CC88");
extern const char sceGsDumpD2QwcFmt_x00100E78[16] __asm__("D_0045CC98");
extern const char sceGsDumpVif1StatFmt_x00100E78[24] __asm__("D_0045CCA8");
extern const char sceGsDumpGifStatFmt_x00100E78[24] __asm__("D_0045CCC0");
extern const char sceGsSyncPathDma2Msg_x00100E78[48] __asm__("D_0045CCD8");
extern const char sceGsSyncPathVif1Msg_x00100E78[48] __asm__("D_0045CD08");
extern const char sceGsSyncPathVu1Msg_x00100E78[40] __asm__("D_0045CD38");
extern const char sceGsSyncPathGifMsg_x00100E78[48] __asm__("D_0045CD60");
s32_x00100E78 sceGsSyncPath_x00100E78(s32_x00100E78 mode, u16_x00100E78 timeout) __asm__("sceGsSyncPath");
/* sceGsSyncPath_x00100E78: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libgraph.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x00100E78 sceGsSyncPath_x00100E78(s32_x00100E78 mode, u16_x00100E78 timeout)
{
    u32_x00100E78 stat;
    u32_x00100E78 i = 0;

    if (mode == 0) {
        while ((*(volatile u32_x00100E78 *)0x10009000) & 0x100) {
            if (i++ > 0x1000000) {
                scePrintf_x00100E78(sceGsSyncPathDma1Msg_x00100E78);
                scePrintf_x00100E78(sceGsDumpD1ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009000));                scePrintf_x00100E78(sceGsDumpD1TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009030));                scePrintf_x00100E78(sceGsDumpD1MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009010));                scePrintf_x00100E78(sceGsDumpD1QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009020));                scePrintf_x00100E78(sceGsDumpD2ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A000));                scePrintf_x00100E78(sceGsDumpD2TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A030));                scePrintf_x00100E78(sceGsDumpD2MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A010));                scePrintf_x00100E78(sceGsDumpD2QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A020));                scePrintf_x00100E78(sceGsDumpVif1StatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003C00));                scePrintf_x00100E78(sceGsDumpGifStatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003020));
                return -1;
            }
        }
        while ((*(volatile u32_x00100E78 *)0x1000A000) & 0x100) {
            if (i++ > 0x1000000) {
                scePrintf_x00100E78(sceGsSyncPathDma2Msg_x00100E78);
                scePrintf_x00100E78(sceGsDumpD1ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009000));                scePrintf_x00100E78(sceGsDumpD1TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009030));                scePrintf_x00100E78(sceGsDumpD1MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009010));                scePrintf_x00100E78(sceGsDumpD1QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009020));                scePrintf_x00100E78(sceGsDumpD2ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A000));                scePrintf_x00100E78(sceGsDumpD2TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A030));                scePrintf_x00100E78(sceGsDumpD2MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A010));                scePrintf_x00100E78(sceGsDumpD2QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A020));                scePrintf_x00100E78(sceGsDumpVif1StatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003C00));                scePrintf_x00100E78(sceGsDumpGifStatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003020));
                return -1;
            }
        }
        while ((*(volatile u32_x00100E78 *)0x10003C00) & 0x1F000003) {
            if (i++ > 0x1000000) {
                scePrintf_x00100E78(sceGsSyncPathVif1Msg_x00100E78);
                scePrintf_x00100E78(sceGsDumpD1ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009000));                scePrintf_x00100E78(sceGsDumpD1TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009030));                scePrintf_x00100E78(sceGsDumpD1MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009010));                scePrintf_x00100E78(sceGsDumpD1QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009020));                scePrintf_x00100E78(sceGsDumpD2ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A000));                scePrintf_x00100E78(sceGsDumpD2TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A030));                scePrintf_x00100E78(sceGsDumpD2MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A010));                scePrintf_x00100E78(sceGsDumpD2QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A020));                scePrintf_x00100E78(sceGsDumpVif1StatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003C00));                scePrintf_x00100E78(sceGsDumpGifStatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003020));
                return -1;
            }
        }
        __asm__ volatile (     ".set noreorder\n\tcfc2.ni %0, $vi29\n\t.set reorder" : "=r" (stat));
        while (stat & 0x100) {
            if (i++ > 0x1000000) {
                scePrintf_x00100E78(sceGsSyncPathVu1Msg_x00100E78);
                scePrintf_x00100E78(sceGsDumpD1ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009000));                scePrintf_x00100E78(sceGsDumpD1TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009030));                scePrintf_x00100E78(sceGsDumpD1MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009010));                scePrintf_x00100E78(sceGsDumpD1QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009020));                scePrintf_x00100E78(sceGsDumpD2ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A000));                scePrintf_x00100E78(sceGsDumpD2TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A030));                scePrintf_x00100E78(sceGsDumpD2MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A010));                scePrintf_x00100E78(sceGsDumpD2QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A020));                scePrintf_x00100E78(sceGsDumpVif1StatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003C00));                scePrintf_x00100E78(sceGsDumpGifStatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003020));
                return -1;
            }
            __asm__ volatile (     ".set noreorder\n\tcfc2.ni %0, $vi29\n\t.set reorder" : "=r" (stat));
        }
        while ((*(volatile u32_x00100E78 *)0x10003020) & 0xC00) {
            if (i++ > 0x1000000) {
                scePrintf_x00100E78(sceGsSyncPathGifMsg_x00100E78);
                scePrintf_x00100E78(sceGsDumpD1ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009000));                scePrintf_x00100E78(sceGsDumpD1TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009030));                scePrintf_x00100E78(sceGsDumpD1MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009010));                scePrintf_x00100E78(sceGsDumpD1QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10009020));                scePrintf_x00100E78(sceGsDumpD2ChcrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A000));                scePrintf_x00100E78(sceGsDumpD2TadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A030));                scePrintf_x00100E78(sceGsDumpD2MadrFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A010));                scePrintf_x00100E78(sceGsDumpD2QwcFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x1000A020));                scePrintf_x00100E78(sceGsDumpVif1StatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003C00));                scePrintf_x00100E78(sceGsDumpGifStatFmt_x00100E78, *(volatile u32_x00100E78 *)( 0x10003020));
                return -1;
            }
        }
        return 0;
    } else {
        s32_x00100E78 result = 0;


        if ((*(volatile u32_x00100E78 *)0x10009000) & 0x100) {
            result |= 1;
        }
        if ((*(volatile u32_x00100E78 *)0x1000A000) & 0x100) {
            result |= 2;
        }
        if ((*(volatile u32_x00100E78 *)0x10003C00) & 0x1F000003) {
            result |= 4;
        }
        __asm__ volatile (     ".set noreorder\n\tcfc2.ni %0, $vi29\n\t.set reorder" : "=r" (stat));
        if (stat & 0x100) {
            result |= 8;
        }
        if ((*(volatile u32_x00100E78 *)0x10003020) & 0xC00) {
            result |= 16;
        }
        return result;
    }
}
s32 AddIntcHandler_x00101190(s32, s32, s32) __asm__("AddIntcHandler");
s32 RemoveIntcHandler_x00101190(s32, s32) __asm__("RemoveIntcHandler");
s32 func_0010AD40_x00101190(s32) __asm__("func_0010AD40");
s32 func_0010ADA8_x00101190(s32) __asm__("func_0010ADA8");
void *sceGsGetGParam_x00101190() __asm__("sceGsGetGParam");
s32 func_00101190_x00101190(s32 arg0) __asm__("func_00101190");
s32 func_00101190_x00101190(s32 arg0)
{
  s32 temp_s2;
  u8 *temp_s0;
  s32 new_var;
  temp_s0 = sceGsGetGParam_x00101190();
  temp_s2 = *((s32 *) (((u8 *) temp_s0) + 8));
  if ((new_var = arg0) == 0)
  {
    func_0010AD40_x00101190(2);
    RemoveIntcHandler_x00101190(2, *((s32 *) (((u8 *) temp_s0) + 0xC)));
    *((s32 *) (((u8 *) temp_s0) + 8)) = (*((s32 *) (((u8 *) temp_s0) + 0xC)) = 0);
  }
  else
  {
    if (temp_s2 != 0)
    {
      func_0010AD40_x00101190(2);
      RemoveIntcHandler_x00101190(2, *((s32 *) (((u8 *) temp_s0) + 0xC)));
    }
    *((s32 *) (((u8 *) temp_s0) + 8)) = new_var;
    *((s32 *) (((u8 *) temp_s0) + 0xC)) = AddIntcHandler_x00101190(2, arg0, -1);
    func_0010ADA8_x00101190(2);
  }
  return temp_s2;
}
typedef struct { unsigned long SCAX0 : 11; unsigned long pad11 : 5; unsigned long SCAX1 : 11; unsigned long pad27 : 5; unsigned long SCAY0 : 11; unsigned long pad43 : 5; unsigned long SCAY1 : 11; unsigned long pad59 : 5; } Scissor_r3_x00101230;
typedef struct { u8 pad[0x20]; unsigned long xyoffset; u8 pad2[8]; Scissor_r3_x00101230 scissor; } DrawEnv_r3_x00101230;
void func_00101230_x00101230(DrawEnv_r3_x00101230 *draw, short cx, short cy, short half) __asm__("func_00101230");
void func_00101230_x00101230(DrawEnv_r3_x00101230 *draw, short cx, short cy, short half)
{
    long y = ((long)cy - (long)((draw->scissor.SCAY1 + 1) >> 1)) << 4;
    long x = ((long)cx - (long)((draw->scissor.SCAX1 + 1) >> 1)) << 4;

    if (half) {
        draw->xyoffset = (unsigned long)x | ((unsigned long)(y + 8) << 32);
    } else {
        draw->xyoffset = (unsigned long)x | ((unsigned long)y << 32);
    }
}
typedef unsigned long u_long_x001012B8;
typedef struct {
    u_long_x001012B8 AC : 1;
    u_long_x001012B8 pad01 : 63;
} sceGsPrmodecont_x001012B8;
typedef struct {
    u_long_x001012B8 CLAMP : 1;
    u_long_x001012B8 pad01 : 63;
} sceGsColclamp_x001012B8;
typedef struct {
    u_long_x001012B8 DTHE : 1;
    u_long_x001012B8 pad01 : 63;
} sceGsDthe_x001012B8;
typedef struct {
    u_long_x001012B8 frame2;
    long frame2addr;
    u_long_x001012B8 zbuf2;
    long zbuf2addr;
    u_long_x001012B8 xyoffset2;
    long xyoffset2addr;
    u_long_x001012B8 scissor2;
    long scissor2addr;
    sceGsPrmodecont_x001012B8 prmodecont;
    long prmodecontaddr;
    sceGsColclamp_x001012B8 colclamp;
    long colclampaddr;
    sceGsDthe_x001012B8 dthe;
    long dtheaddr;
    u_long_x001012B8 test2;
    long test2addr;
} sceGsDrawEnv2_x001012B8;
short sceGszbufaddr_x001012B8(short psm, short w, short h) __asm__("func_00100940");
int func_001012B8_x001012B8(sceGsDrawEnv2_x001012B8 *draw, short psm, short w, short h, short ztest, short zpsm) __asm__("func_001012B8");
/* sceGsSetDefDrawEnv2: from https://github.com/denzi-gh/crashwoc-decomp-ps2 (src/sdk/sce/graphdev_142.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001012B8_x001012B8(sceGsDrawEnv2_x001012B8 *draw, short psm, short w, short h, short ztest, short zpsm)
{
    draw->frame2addr = 0x4d;
    draw->frame2 = ((u_long_x001012B8)(0) | ((u_long_x001012B8)( (w >> 6) & 0x3f) << 16) | ((u_long_x001012B8)( psm & 0xf) << 24) | ((u_long_x001012B8)( 0) << 32));
    draw->zbuf2addr = 0x4f;
    if (ztest == 0) {
        draw->zbuf2 = ((u_long_x001012B8)(sceGszbufaddr_x001012B8(psm, w, h)) | ((u_long_x001012B8)( zpsm & 0xf) << 24) | ((u_long_x001012B8)( 1) << 32));
    } else {
        draw->zbuf2 = ((u_long_x001012B8)(sceGszbufaddr_x001012B8(psm, w, h)) | ((u_long_x001012B8)( zpsm & 0xf) << 24) | ((u_long_x001012B8)( 0) << 32));
    }
    draw->xyoffset2addr = 0x19;
    draw->xyoffset2 = ((u_long_x001012B8)((2048L - (w >> 1)) << 4) | ((u_long_x001012B8)(
                                          (2048L - (h >> 1)) << 4) << 32));
    draw->scissor2addr = 0x41;
    draw->scissor2 = ((u_long_x001012B8)(0) | ((u_long_x001012B8)( w - 1) << 16) | ((u_long_x001012B8)( 0) << 32) | ((u_long_x001012B8)( h - 1) << 48));
    draw->prmodecontaddr = 0x1a;
    draw->prmodecont.AC = 1;
    draw->colclampaddr = 0x46;
    draw->colclamp.CLAMP = 1;
    draw->dtheaddr = 0x45;
    if (psm & 2) {
        draw->dthe.DTHE = 1;
    } else {
        draw->dthe.DTHE = 0;
    }
    draw->test2addr = 0x48;
    if (ztest) {
        draw->test2 = ((u_long_x001012B8)(0) | ((u_long_x001012B8)( 0) << 1) | ((u_long_x001012B8)( 0) << 4) |     ((u_long_x001012B8)( 0) << 12) | ((u_long_x001012B8)( 0) << 14) | ((u_long_x001012B8)( 0) << 15) |     ((u_long_x001012B8)( 1) << 16) | ((u_long_x001012B8)( ztest & 3) << 17));
    } else {
        draw->test2 = ((u_long_x001012B8)(0) | ((u_long_x001012B8)( 0) << 1) | ((u_long_x001012B8)( 0) << 4) |     ((u_long_x001012B8)( 0) << 12) | ((u_long_x001012B8)( 0) << 14) | ((u_long_x001012B8)( 0) << 15) |     ((u_long_x001012B8)( 1) << 16) | ((u_long_x001012B8)( 1) << 17));
    }
    __asm__ volatile ("sync");
    return sizeof(sceGsDrawEnv2_x001012B8) / 16;
}
typedef struct { unsigned long SCAX0 : 11; unsigned long pad11 : 5; unsigned long SCAX1 : 11; unsigned long pad27 : 5; unsigned long SCAY0 : 11; unsigned long pad43 : 5; unsigned long SCAY1 : 11; unsigned long pad59 : 5; } Scissor_r3_x00101498;
typedef struct { u8 pad[0x20]; unsigned long xyoffset; u8 pad2[8]; Scissor_r3_x00101498 scissor; } DrawEnv_r3_x00101498;
void func_00101498_x00101498(DrawEnv_r3_x00101498 *draw, short cx, short cy, short half) __asm__("func_00101498");
void func_00101498_x00101498(DrawEnv_r3_x00101498 *draw, short cx, short cy, short half)
{
    long y = ((long)cy - (long)((draw->scissor.SCAY1 + 1) >> 1)) << 4;
    long x = ((long)cx - (long)((draw->scissor.SCAX1 + 1) >> 1)) << 4;

    if (half) {
        draw->xyoffset = (unsigned long)x | ((unsigned long)(y + 8) << 32);
    } else {
        draw->xyoffset = (unsigned long)x | ((unsigned long)y << 32);
    }
}
typedef int u_int128_x00101520 __attribute__((mode(TI)));
typedef struct {     
    short inter;     
    short omode;     
    short ffmd;      
    short version;   
    long long intc;  
} GParam_x00101520;
typedef struct {
    unsigned long long FBP : 9;
    unsigned long long FBW : 6;
    unsigned long long PSM : 5;
    unsigned long long pad20 : 12;
    unsigned long long DBX : 11;
    unsigned long long DBY : 11;
    unsigned long long pad54 : 10;
} sceGsDispFb_x00101520;
typedef struct {
    unsigned long long FBP : 9;
    unsigned long long FBW : 6;
    unsigned long long PSM : 6;
    unsigned long long pad21 : 11;
    unsigned long long FBMSK : 32;
} sceGsFrame_x00101520;
typedef struct {
    unsigned long long NLOOP : 15;
    unsigned long long EOP : 1;
    unsigned long long pad16 : 16;
    unsigned long long id : 14;
    unsigned long long PRE : 1;
    unsigned long long PRIM : 11;
    unsigned long long FLG : 2;
    unsigned long long NREG : 4;
    unsigned long long REGS0 : 4;
    unsigned long long REGS1 : 60;
} sceGifTag_x00101520;
typedef struct {
    long long pmode;     
    long long smode2;    
    sceGsDispFb_x00101520 dispfb;  
    long long display;   
    long long bgcolor;   
} sceGsDispEnv_x00101520;
typedef struct {
    sceGsFrame_x00101520 frame;      
    long long frame_addr;  
    char rest[0x70];       
} sceGsDrawEnv_x00101520;
typedef struct {
    char c[0x60];
} sceGsClear_x00101520;
typedef struct {
    sceGsDispEnv_x00101520 disp0;     
    sceGsDispEnv_x00101520 disp1;     
    sceGifTag_x00101520 giftag0;      
    sceGsDrawEnv_x00101520 draw0;     
    sceGsDrawEnv_x00101520 draw0c2;   
    sceGsClear_x00101520 clear0;      
    sceGifTag_x00101520 giftag1;      
    sceGsDrawEnv_x00101520 draw1;     
    sceGsDrawEnv_x00101520 draw1c2;   
    sceGsClear_x00101520 clear1;      
} sceGsDBuffDc_x00101520;
extern GParam_x00101520 *sceGsGetGParam_x00101520(void) __asm__("func_001003E0");
extern short sceGszbufaddr_x00101520(short psm, short width, short height) __asm__("func_00100940");
extern void sceGsSetDefDispEnv_x00101520(sceGsDispEnv_x00101520 *disp, short psm, short w, short h, short dx, short dy) __asm__("sceGsDefDispEnv");
extern int sceGsSetDefDrawEnv_x00101520(sceGsDrawEnv_x00101520 *env, short psm, short w, short h, short ztst, short zpsm) __asm__("func_00100A08");
extern int sceGsSetDefDrawEnv2_x00101520(sceGsDrawEnv_x00101520 *env, short psm, short w, short h, short ztst, short zpsm) __asm__("func_001012B8");
extern int sceGsSetDefClear_x00101520(sceGsClear_x00101520 *cl, short ztst, short x, short y, short w, short h, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned int z) __asm__("func_00100BF0");
void func_00101520_x00101520(sceGsDBuffDc_x00101520 *db, short psm, short w, short h, short ztst, short zpsm,
                       short flag) __asm__("func_00101520");
/* sceGsSetDefDBuffDc: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libgraph/graph023.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101520_x00101520(sceGsDBuffDc_x00101520 *db, short psm, short w, short h, short ztst, short zpsm,
                       short flag)
{
    GParam_x00101520 *gp = sceGsGetGParam_x00101520();
    int zb;
    short fbp;

    sceGsSetDefDispEnv_x00101520(&db->disp0, psm, w, h, 0, 0);
    sceGsSetDefDispEnv_x00101520(&db->disp1, psm, w, h, 0, 0);
    sceGsSetDefDrawEnv_x00101520(&db->draw0, psm, w, h, ztst, zpsm);
    sceGsSetDefDrawEnv2_x00101520(&db->draw0c2, psm, w, h, ztst, zpsm);
    sceGsSetDefDrawEnv_x00101520(&db->draw1, psm, w, h, ztst, zpsm);
    sceGsSetDefDrawEnv2_x00101520(&db->draw1c2, psm, w, h, ztst, zpsm);
    if (flag) {
        sceGsSetDefClear_x00101520(&db->clear0, ztst, 0x800 - (w >> 1), 0x800 - (h >> 1), w, h, 0, 0, 0, 0,
                         0);
        sceGsSetDefClear_x00101520(&db->clear1, ztst, 0x800 - (w >> 1), 0x800 - (h >> 1), w, h, 0, 0, 0, 0,
                         0);
    }

    *(u_int128_x00101520 *)&db->giftag0 = 0;
    *(u_int128_x00101520 *)&db->giftag1 = 0;
    db->giftag0.NLOOP = flag ? 0x16 : 0x10;
    db->giftag0.EOP = 1;
    db->giftag0.NREG = 1;
    db->giftag0.REGS0 = 0xE;
    db->giftag1.NLOOP = flag ? 0x16 : 0x10;
    db->giftag1.EOP = 1;
    db->giftag1.NREG = 1;
    db->giftag1.REGS0 = 0xE;

    zb = sceGszbufaddr_x00101520(psm, w, h);
    if ((gp->inter == 1 && gp->ffmd == 1) || gp->inter == 0) {
        fbp = zb >> 1;
        db->disp1.dispfb.FBP = fbp;
        db->draw0.frame.FBP = zb >> 1;
        db->draw0c2.frame.FBP = zb >> 1;
    }
}
void sceGsPutDispEnv_x00101808(void *disp) __asm__("func_00100880");
int sceGsPutDrawEnv_x00101808(void *pkt) __asm__("sceGsPutDrawEnv");
int func_00101808_x00101808(void *db, int id) __asm__("func_00101808");
/* sceGsSwapDBuffDc: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libgraph/graph024.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00101808_x00101808(void *db, int id)
{
    int s0 = id & 1;
    int ret;
    sceGsPutDispEnv_x00101808((char *)db + s0 * 0x28);
    if (s0)
        ret = sceGsPutDrawEnv_x00101808((char *)db + 0x1C0);
    else
        ret = sceGsPutDrawEnv_x00101808((char *)db + 0x50);
    return ret;
}
