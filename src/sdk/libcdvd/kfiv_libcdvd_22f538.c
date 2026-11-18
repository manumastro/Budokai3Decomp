/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/libcdvd_22f538.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libcdvd,src/sce/libkernl */
#include "common.h"

/* KFIV: not in ICO. libcdvd.a: sceCdBreak and sceCdReadClock (derived names), the two
 * members-worth of code at 0x0022f538 between cdvd015 and cdvd047. This
 * build's archive has no sceCdStatus here (ICO's libcdvd_267388 has one). */
#include <eekernel.h>

#include <stdio.h>

#include <sifrpc.h>

#include <libcdvd_internal.h>

#include <libcdvd.h>

/* the real-time clock as sceCdReadClock returns it, the fields in BCD */
typedef struct sceCdCLOCK {
    unsigned char stat;
    unsigned char second;
    unsigned char minute;
    unsigned char hour;
    unsigned char pad;
    unsigned char day;
    unsigned char month;
    unsigned char year;
} sceCdCLOCK;

int sceCdReadClock(sceCdCLOCK *clock);




int sceCdBreak(void)
{
    int *p;
    int v;
    if (_sceCd_scmd_prechk(0x1E) == 0) {
        return 0;
    }
    p = _sceCd_scmdrdata;
    sceCdCbfunc_num = 8;
    if (sceSifCallRpc(&_sceCd_cd_scmd, 0x16, 0, 0, 0, p, 4, 0, 0) < 0) {
        SignalSema(*(volatile int *)&_sceCd_scmd_semid);
        sceCdCbfunc_num = 0;
        return 0;
    }
    sceCdCbfunc_num = 0;
    v = *(int *)((int)p | 0x20000000);
    SignalSema(*(volatile int *)&_sceCd_scmd_semid);
    return v;
}
