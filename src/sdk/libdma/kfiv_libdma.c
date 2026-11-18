/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libdma/libdma.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libdma,src/sce/libkernl,src/sce/libvu0 */
#include "common.h"

/* libdma.a.  The archive's member boundaries in this build are not known,
 * so this file is the archive's whole run. */
#include <stdio.h>

#include <eeregs.h>

#include <libdma.h>

#include <libvu0_internal.h>

/* The member's .data in link order (0xAC): the globals dch and
 * sceDmaDebugMode, the build stamp, sceDmaReset's channel list and
 * sceDmaPutEnv's three D_CTRL code tables, then the global sceDmaCurrentEnv. */
/* The ten channel register blocks, VIF0 to toSPR. */
#define dch D_003EC450
#define resetChan D_0045CDA0
#define mfdCode D_0045CDC8
#define stsCode D_0045CDD8
#define stdCode D_0045CDE8
#define sceDmaCurrentEnv D_00470A00
extern DmaChan *dch[10];

 /* derived name */

/* Which channels sceDmaReset clears: all but the three SIF channels. */
extern int resetChan[10];

 /* derived name */

/* sceDmaPutEnv's lookups from the DmaEnv's first three bytes to the D_CTRL
 * MFD, STS and STD field codes. */
extern unsigned char mfdCode[16];

 /* derived name */

extern unsigned char stsCode[16];

 /* derived name */

extern unsigned char stdCode[16];

 /* derived name */

extern DmaEnv sceDmaCurrentEnv;

int sceDmaDebug(int mode);

/* 0x1000E060 is the DMAC stall address register (D_STADR). */
int sceDmaPutStallAddr(unsigned int addr);

void sceDmaSend(DmaChan *ch, unsigned int addr);

void sceDmaSendN(DmaChan *ch, unsigned int addr, int size);

void sceDmaSendI(DmaChan *ch, unsigned int addr, int size);

void sceDmaRecv(DmaChan *ch);

void sceDmaRecvN(DmaChan *ch, unsigned int addr, int size);

void sceDmaRecvI(DmaChan *ch, unsigned int addr, int size);

int sceDmaSync(DmaChan *ch, int mode, int n);

int sceDmaWatch(DmaChan *ch, unsigned int addr, int mode, int n);

int sceDmaPause(void *ch);

int sceDmaRestart(void *ch);




DmaChan *sceDmaGetChan(unsigned int id)
{
    if (id < 0xA) {
        return dch[id];
    }
    return 0;
}


int sceDmaReset(int mode)
{
    DmaEnv env;
    int old;
    int i;

    old = *D_CTRL & 1;
    for (i = 0; i < 10; i++) {
        if (resetChan[i] != 0) {
            int *ch = (int *)dch[i];
            ch[0x00 / 4] = 0;
            ch[0x30 / 4] = 0;
            ch[0x10 / 4] = 0;
            ch[0x50 / 4] = 0;
            ch[0x40 / 4] = 0;
            ch[0x80 / 4] = 0;
        }
    }
    *D_STAT = 0xFF1F;
    *(int *)D_STAT = *D_STAT & 0xFF1F0000;
    memclr(&env, 0x14);
    sceDmaPutEnv(&env);
    if (mode == 1) {
        *D_CTRL = *D_CTRL | 1;
    }
    return old;
}


int sceDmaPutEnv(DmaEnv *env)
{
    int ctrl = *D_CTRL;
    int pcr = *D_PCR;
    int sqwc = *D_SQWC;
    int rbor = *D_RBOR;
    int rbsr = *D_RBSR;

    if (env->mfd >= 10) {
        return -1;
    }
    if (env->sts >= 10) {
        return -2;
    }
    if (env->std >= 10) {
        return -3;
    }
    if (env->rcyc >= 7) {
        return -4;
    }
    ctrl = (ctrl & 0xFFFFFFCF) | (mfdCode[env->mfd] << 4);
    ctrl = (ctrl & 0xFFFFFF3F) | (stsCode[env->sts] << 6);
    ctrl = (ctrl & 0xFFFFFFF3) | (stdCode[env->std] << 2);
    if (env->rcyc != 0) {
        ctrl |= 2;
        ctrl = (ctrl & 0xFFFFFCFF) | ((env->rcyc - 1) << 8);
    } else {
        ctrl &= 0xFFFFFFFD;
    }
    pcr = (env->cde << 16) | env->cpc;
    sqwc = (env->tqwc << 16) | env->sqwc;
    rbor = (int)env->rbadr;
    rbsr = env->rbsize;
    *D_CTRL = ctrl;
    *D_PCR = pcr;
    *D_SQWC = sqwc;
    *D_RBOR = rbor;
    *D_RBSR = rbsr;
    sceDmaCurrentEnv = *env;
    return 0;
}


DmaEnv *sceDmaGetEnv(DmaEnv *env)
{
    *env = sceDmaCurrentEnv;
    return env;
}
