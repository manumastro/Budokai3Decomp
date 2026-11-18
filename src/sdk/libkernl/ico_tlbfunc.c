/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/tlbfunc.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a(tlbfunc.o) */
#include <eekernel.h>

#include <libkernl_internal.h>

/* tlbfunc.o's .data, in link order: the two handler globals (the TLB
   exception entry calls _kTLBRefillHandler, the debug exception entry calls
   _kDebugHandler by cause code), then the six kernel calls InitTLBFunctions
   installs, each a syscall number and its handler. */

#define _kTLBRefillHandler D_003ECA18
#define _kDebugHandler D_003ECA20
extern int _kTLBRefillHandler;

extern int _kDebugHandler[16];

static void setup(int x, int y);

void InitTLBFunctions(void);




void *SetTLBHandler(void *handler)
{
    _kTLBRefillHandler = (int)handler;
    SetVTLBRefillHandler(1, _kTLBException);
    SetVTLBRefillHandler(2, _kTLBException);
    SetVTLBRefillHandler(3, _kTLBException);
    return handler;
}


int SetDebugHandler(int cause, int handler)
{
    int old;
    int orig = cause;
    unsigned int err = 0xFFFFFFFF;
    if ((unsigned)(cause - 1) >= 13) {
        return (int)err;
    }
    old = _kDebugHandler[orig];
    _kDebugHandler[orig] = handler;
    if ((unsigned)(cause - 1) < 3) {
        SetVTLBRefillHandler(orig, (void *)_kDebugException);
    } else {
        SetVCommonHandler(orig, (void *)_kDebugException);
    }
    return old;
}
INCLUDE_PAD(4);
