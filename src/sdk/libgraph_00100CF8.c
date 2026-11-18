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
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph_00100CF8", sceGsSyncPath);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph_00100CF8", func_00101190);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph_00100CF8", func_00101230);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph_00100CF8", func_001012B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libgraph_00100CF8", func_00101498);
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
