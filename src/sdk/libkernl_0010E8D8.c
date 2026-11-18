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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010E8D8", func_0010E948);
