/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/thread.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a(thread.o) */
#include <eekernel.h>

#include <libkernl_internal.h>

/* An EE syscall leaf (`addiu $3,$zero,NUM; syscall 0`) issued inline, for
   the calls that act on its result.  The syscall returns in $2. */
#define SYSCALL_INLINE(num, dst)                                                                   \
    {                                                                                              \
        register int __sc_ret __asm__("$2");                                                       \
        __asm__ __volatile__("addiu $3, $0, " #num "\n\tsyscall 0"                                 \
                             : "=r"(__sc_ret)                                                      \
                             :                                                                     \
                             : "$3", "memory");                                                    \
        (dst) = __sc_ret;                                                                          \
    }

typedef struct { /* field names derived */
    unsigned char code;
    unsigned char id;
} KernEvent;

 /* derived name */

typedef struct { /* field names derived */
    int ridx;
    int widx;
    KernEvent ent[512];
} KernEventRing;

 /* derived name */

#define kernEventSema D_00471040
extern int kernEventSema;

 /* derived name */

/* The link's small-data base, which no header declares */
extern char _gp[];

int InitThread(void);

int iWakeupThread(int id);

int iRotateThreadReadyQueue(int id);

int iSuspendThread(int id);

extern char D_0045D390[];

 /* derived name */

void topThread(void *arg)
{
    KernEventRing *ring = (KernEventRing *)arg;
    int i;

    while (1) {
        WaitSema(kernEventSema);
        i = ring->ridx & 0x1FF;
        ring->ridx = i + 1;
        switch (ring->ent[i].code) {
        case 0:
            WakeupThread(ring->ent[i].id);
            break;
        case 1:
            RotateThreadReadyQueue(ring->ent[i].id);
            break;
        case 2:
            SuspendThread(ring->ent[i].id);
            break;
        default:
            kprintf(D_0045D390);
            break;
        }
    }
}
