#include "common.h"

extern s32 D_003EC410;

typedef unsigned long long u64_x00100250;
typedef struct { short interlace, mode, field; unsigned short version; int active; int handler; } GsState_x00100250;
extern GsState_x00100250 *sceGsGetGParam_1082a0_x00100250(void) __asm__("func_001003E0");
extern u64_x00100250 GsPutIMR_x00100250(u64_x00100250) __asm__("GsPutIMR.NON_MATCHING");
extern void DisableIntc_117080_x00100250(int) __asm__("func_0010AD40");
extern void RemoveIntcHandler_x00100250(int,int) __asm__("RemoveIntcHandler");
extern void SetGsCrt_x00100250(int,int,int) __asm__("SetGsCrt.NON_MATCHING");
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
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph", func_001003F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph", func_00100458);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph", func_001004F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph", sceGsDefDispEnv);
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
