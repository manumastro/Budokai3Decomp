#include "common.h"

extern s32 D_003EC410;

typedef unsigned long long u64_x00100250;
typedef struct { short interlace, mode, field; unsigned short version; int active; int handler; } GsState_x00100250;
extern GsState_x00100250 *sceGsGetGParam_1082a0_x00100250(void) __asm__("func_001003E0");
extern u64_x00100250 GsPutIMR_x00100250(u64_x00100250) __asm__("GsPutIMR");
extern void DisableIntc_117080_x00100250(int) __asm__("func_0010AD40");
extern void RemoveIntcHandler_x00100250(int,int) __asm__("RemoveIntcHandler");
extern void SetGsCrt_x00100250(int,int,int) __asm__("SetGsCrt");
void func_00100250_x00100250(short reset, short interlace, short mode, short field) __asm__("func_00100250");
/* sceGsResetGraph_108110: from https://github.com/Dorgengoa/RGDecomp (src/main/sdk/sceGsResetGraph_108110.c, CC0-1.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00100250_x00100250(short reset, short interlace, short mode, short field)
{
 GsState_x00100250 *p;
 switch(reset) {
 case 0:
  p=sceGsGetGParam_1082a0_x00100250();
  *(volatile u64_x00100250*)0x12001000=0x200;
  p->interlace=interlace;
  p->mode=mode;
  p->version=(*(volatile u64_x00100250*)0x12001000 >> 16)&255;
  GsPutIMR_x00100250(0xff00);
  p->field=field!=0;
  if(p->active) {
   DisableIntc_117080_x00100250(2);
   RemoveIntcHandler_x00100250(2,p->handler);
   p->active=0;p->handler=0;
  }
  SetGsCrt_x00100250(interlace&1,mode&255,field&1);
  break;
 case 1:
  *(volatile u64_x00100250*)0x12001000=0x100;
  break;
 case 5:
  p=sceGsGetGParam_1082a0_x00100250();
  p->interlace=interlace;
  p->mode=mode;
  p->field=field!=0;
  p->version=(*(volatile u64_x00100250*)0x12001000 >> 16)&255;
  SetGsCrt_x00100250(interlace&1,mode&255,field&1);
  break;
 }
}
s32 *sceGsGetGParam(void) {
    return &D_003EC410;
}
typedef unsigned int U128_03F0_x001003F0 __attribute__((mode(TI)));
extern U128_03F0_x001003F0 D_003EC420_x001003F0[2] __asm__("D_003EC420");
void func_001003F0_x001003F0(void) __asm__("func_001003F0");
void func_001003F0_x001003F0(void)
{
    register int vi __asm__("$4") = 0;

    *(volatile int *)0x10003C10 = 1;
    *(volatile int *)0x10003C20 = 2;
    __asm__ volatile(".set noreorder\n\tsync.l\n\tcfc2.ni %0, $vi28\n\tori %0, %0, 0x200\n\tctc2.ni %0, $vi28\n\tsync.p\n\t.set reorder" : "+r"(vi));
    *(volatile U128_03F0_x001003F0 *)0x10005000 = D_003EC420_x001003F0[0];
    *(volatile U128_03F0_x001003F0 *)0x10005000 = D_003EC420_x001003F0[1];
    *(volatile int *)0x10003000 = 1;
}
extern char D_0045DF50_x00100458[] __asm__("D_0045CB80");
extern int func_003B4220_x00100458(const char *path, int flag) __asm__("func_0010F5E8");
extern int func_003B4868_x00100458(int fd, void *buf, int nbyte) __asm__("func_0010FC30");
extern int func_003B44B0_x00100458(int fd) __asm__("func_0010F878");
extern int func_003A7C48_x00100458(const char *s) __asm__("func_001221D8");
int func_00100458_x00100458(void) __asm__("func_00100458");
/* checkModelVersion: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003964c0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00100458_x00100458(void)
{
    char buf[256];
    char *p;
    int fd;
    int i;

    fd = func_003B4220_x00100458(D_0045DF50_x00100458, 1);
    if (fd < 0) {
        return -1;
    }
    for (i = 0, p = buf; (unsigned int)i < 256; p++, i++) {
        func_003B4868_x00100458(fd, p, 1);
        if (*p == 0) {
            break;
        }
    }
    func_003B44B0_x00100458(fd);
    return func_003A7C48_x00100458(&buf[i - 9]) > 0x1315670;
}
SYSCALL_STUB(func_001004F8, 128);
typedef struct {
    short sceGsInterMode;
    short sceGsOutMode;
    short sceGsFFMode;
    short sceGsVersion;
} sceGsGParam_x00100508;
typedef struct {
    unsigned long pmode;
    unsigned long smode2;
    unsigned long dispfb;
    unsigned long display;
    unsigned long bgcolor;
} sceGsDispEnv_x00100508;
extern char D_002AB330_x00100508[] __asm__("D_0045CB90");
sceGsGParam_x00100508 *sceGsGetGParam_x00100508(void) __asm__("func_001003E0");
int checkModelVersion_x00100508(void) __asm__("func_00100458");
void func_00240C28_x00100508(int, int *, int *, int *, int *) __asm__("func_001004F8");
int func_00236960_x00100508(const char *, ...) __asm__("scePrintf");
void sceGsDefDispEnv_x00100508(sceGsDispEnv_x00100508 *disp, short psm, short w, short h, short dx, short dy) __asm__("sceGsDefDispEnv");
/* sceGsSetDefDispEnv: from https://github.com/Komasia/sly2-decomp (src/lib/sceGsSetDefDispEnv.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void sceGsDefDispEnv_x00100508(sceGsDispEnv_x00100508 *disp, short psm, short w, short h, short dx, short dy)
{
    sceGsGParam_x00100508 *gp = sceGsGetGParam_x00100508();
    int ox, oy, ow, oh;

    if (gp->sceGsOutMode != 2 && gp->sceGsOutMode != 3 && checkModelVersion_x00100508()) {
        func_00240C28_x00100508(gp->sceGsOutMode, &ox, &oy, &ow, &oh);
    } else {
        ox = oy = ow = oh = 0;
    }
    disp->pmode = 0x66;
    if (gp->sceGsInterMode != 0) {
        if (gp->sceGsFFMode)
            disp->smode2 = 3;
        else
            disp->smode2 = 1;
    } else
        disp->smode2 = 2;
    disp->dispfb = ((unsigned long)(psm & 0xF) << 15) | ((unsigned long)(((w + 63) >> 6) & 0x3F) << 9);
    if (gp->sceGsOutMode == 2) {
        if (gp->sceGsInterMode == 1) {
            int magh = (w + 0x9FF) / w;
            unsigned long yy = (unsigned long)((dy + oy + 0x32) & 0xFFF) << 12;
            long xo = (long)ox + 0x27CL;
            int mw = magh * w;
            int md = dx * magh;
            unsigned long mm = (unsigned long)(magh - 1) << 23;
            unsigned long ww = (unsigned long)(mw - 1) << 32;
            long xx = (xo + md) & 0xFFF;
            unsigned long d;

            if (gp->sceGsFFMode) {
                unsigned long mw2 = mm | ww;
                unsigned long xh = (unsigned long)xx | ((unsigned long)(h * 2 - 1) << 44);
                unsigned long t = mw2 | xh;
                d = t | yy;
            } else {
                unsigned long mw2 = mm | ww;
                unsigned long xh = (unsigned long)xx | ((unsigned long)(h - 1) << 44);
                unsigned long t = mw2 | xh;
                d = t | yy;
            }
            disp->display = d;
        } else {
            int magh = (w + 0x9FF) / w;
            unsigned long mm = (unsigned long)((w + 0x9FF) / w - 1) << 23;
            unsigned long ww = (unsigned long)(((w + 0x9FF) / w * w) - 1) << 32;
            unsigned long yy = (unsigned long)((dy + oy + 0x19) & 0xFFF) << 12;
            long xo = ox + 0x27CL;
            long xx = (xo + dx * magh) & 0xFFF;
            unsigned long mw = mm | ww;
            unsigned long xh = (unsigned long)xx | ((unsigned long)(h - 1) << 44);
            unsigned long t = mw | xh;
            disp->display = t | yy;
        }
    } else if (gp->sceGsOutMode == 3) {
        if (gp->sceGsInterMode == 1) {
            int magh = (w + 0x9FF) / w;
            unsigned long yy = (unsigned long)((dy + oy + 0x48) & 0xFFF) << 12;
            long xo = (long)ox + 0x290L;
            int mw = magh * w;
            int md = dx * magh;
            unsigned long mm = (unsigned long)(magh - 1) << 23;
            unsigned long ww = (unsigned long)(mw - 1) << 32;
            long xx = (xo + md) & 0xFFF;
            unsigned long d;

            if (gp->sceGsFFMode) {
                unsigned long mw2 = mm | ww;
                unsigned long xh = (unsigned long)xx | ((unsigned long)(h * 2 - 1) << 44);
                unsigned long t = mw2 | xh;
                d = t | yy;
            } else {
                unsigned long mw2 = mm | ww;
                unsigned long xh = (unsigned long)xx | ((unsigned long)(h - 1) << 44);
                unsigned long t = mw2 | xh;
                d = t | yy;
            }
            disp->display = d;
        } else {
            int magh = (w + 0x9FF) / w;
            unsigned long mm = (unsigned long)((w + 0x9FF) / w - 1) << 23;
            unsigned long ww = (unsigned long)(((w + 0x9FF) / w * w) - 1) << 32;
            unsigned long yy = (unsigned long)((dy + oy + 0x24) & 0xFFF) << 12;
            long xo = ox + 0x290L;
            long xx = (xo + dx * magh) & 0xFFF;
            unsigned long mw = mm | ww;
            unsigned long xh = (unsigned long)xx | ((unsigned long)(h - 1) << 44);
            unsigned long t = mw | xh;
            disp->display = t | yy;
        }
    } else if (gp->sceGsOutMode == 0x50) {
        long cx = (long)((0x2D0 - w) / 2 * 2) + ox;
        long xo = dx * 2 + 0xE8L;
        unsigned long hh = (unsigned long)(h - 1) << 44;
        unsigned long hw = hh | ((unsigned long)(w * 2 - 1) << 32);
        unsigned long xm = (unsigned long)((cx + xo) & 0xFFF) | ((unsigned long)1 << 23);
        unsigned long t = hw | xm;
        disp->display = t | ((unsigned long)((dy + oy + 0x23) & 0xFFF) << 12);
    } else {
        func_00236960_x00100508(D_002AB330_x00100508);
    }
    disp->bgcolor = 0;
}
typedef struct {
    short inter;    
    short omode;    
    short ffmd;     
    short version;  
    int intcUsed;   
    int handler;    
} sceGsGParam_x00100880;
sceGsGParam_x00100880 *sceGsGetGParam_x00100880(void) __asm__("func_001003E0");
void func_00100880_x00100880(void *disp) __asm__("func_00100880");
/* sceGsPutDispEnv: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libgraph/graph004.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00100880_x00100880(void *disp)
{
    long *s = (long *)disp;
    if (sceGsGetGParam_x00100880()->version == 1) {
        *((volatile long *)0x12000000) = s[0];
        *((volatile long *)0x12000070) = s[2];
        *((volatile long *)0x12000080) = s[3];
        *((volatile long *)0x120000C0) = s[4];
    } else {
        *((volatile long *)0x12000000) = s[0];
        *((volatile long *)0x12000020) = s[1];
        *((volatile long *)0x12000090) = s[2];
        *((volatile long *)0x120000A0) = s[3];
        *((volatile long *)0x120000E0) = s[4];
    }
}
