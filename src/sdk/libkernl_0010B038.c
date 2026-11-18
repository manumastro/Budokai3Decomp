#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", func_0010B038);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", iWakeupThread);
typedef struct DeferCmd_x0010B1C0 {
    unsigned char type;      
    unsigned char arg;       
} DeferCmd_x0010B1C0;
typedef struct DeferQueue_x0010B1C0 {
    int rd;                  
    int wr;                  
    DeferCmd_x0010B1C0 cmd[512];         
} DeferQueue_x0010B1C0;
struct DeferQueue_x0010B1C0;
int iSignalSema_x0010B1C0(int sema) __asm__("iSignalSema");
extern int libkernl_defer_sema_x0010B1C0 __asm__("D_00471040");
extern int libkernl_defer_tid_x0010B1C0 __asm__("D_003EC618");
extern DeferQueue_x0010B1C0 libkernl_defer_queue_x0010B1C0 __asm__("D_00471048");
int func_0010B1C0_x0010B1C0(int prio) __asm__("func_0010B1C0");
/* libkernl_defer_rotate_queue: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_patch.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010B1C0_x0010B1C0(int prio)
{
    int i;
    DeferQueue_x0010B1C0 *dq;

    if ((unsigned int)prio >= 128 || !libkernl_defer_tid_x0010B1C0)
        return -1;
    dq = &libkernl_defer_queue_x0010B1C0;
    i = dq->wr & 0x1ff;
    dq->wr = i + 1;
    dq->cmd[i].type = 1;
    dq->cmd[i].arg = prio;
    iSignalSema_x0010B1C0(libkernl_defer_sema_x0010B1C0);
    return prio;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", func_0010B240);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", func_0010B2D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", func_0010B3A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B038", func_0010B518);
