#include "common.h"

typedef struct _ee_sema_x0010E8D8 {
    int            count;         
    int            max_count;     
    int            init_count;    
    int            wait_threads;  
    unsigned int   attr;          
    unsigned int   option;        
} sceFsSemaParam_x0010E8D8;
extern int D_003FAEE8_x0010E8D8 __asm__("D_003EC6C8");
extern int D_003FAEEC_x0010E8D8 __asm__("D_003EC6CC");
extern unsigned char D_00460080_x0010E8D8 __asm__("D_0045D660");
extern unsigned char D_00460090_x0010E8D8 __asm__("D_0045D670");
extern int CreateSema_x0010E8D8(sceFsSemaParam_x0010E8D8 *sp) __asm__("CreateSema");
void _sceFsIobSemaMK_x0010E8D8(void) __asm__("_sceFsIobSemaMK");
/* func_003B3858: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b3858.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void _sceFsIobSemaMK_x0010E8D8(void)
{
    sceFsSemaParam_x0010E8D8 sp;

    if (D_003FAEE8_x0010E8D8 == -1) {
        sp.option = (unsigned int)&D_00460080_x0010E8D8;
        sp.init_count = 1;
        sp.max_count = 1;
        D_003FAEE8_x0010E8D8 = CreateSema_x0010E8D8(&sp);
        sp.option = (unsigned int)&D_00460090_x0010E8D8;
        D_003FAEEC_x0010E8D8 = CreateSema_x0010E8D8(&sp);
    }
}
typedef struct { int f0; int f4; int f8; int fC; } Iob_E948_x0010E948;
extern Iob_E948_x0010E948 D_00474940_x0010E948[32] __asm__("D_00474940");
extern int D_003EC6C8_x0010E948 __asm__("D_003EC6C8");
void _sceFsIobSemaMK_x0010E948(void) __asm__("_sceFsIobSemaMK");
int WaitSema_x0010E948(int) __asm__("WaitSema");
int SignalSema_x0010E948(int) __asm__("SignalSema");
int func_0010E948_x0010E948(void) __asm__("func_0010E948");
int func_0010E948_x0010E948(void)
{
    Iob_E948_x0010E948 *p;
    int n = 0;

    _sceFsIobSemaMK_x0010E948();
    WaitSema_x0010E948(D_003EC6C8_x0010E948);
    for (p = D_00474940_x0010E948; p < &D_00474940_x0010E948[32]; p++) {
        if (p->f4) {
            n++;
        }
    }
    SignalSema_x0010E948(D_003EC6C8_x0010E948);
    return n;
}
