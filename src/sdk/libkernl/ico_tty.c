/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/tty.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a(tty.o) */
#include <eekernel.h>

#include <libkernl_internal.h>

/* the receive queue: a 16-byte header (the ring's size, the bytes queued,
   the read and write pointers) and the ring */
typedef struct { /* field names derived */
    int size;
    int count;
    char *rp;
    char *wp;
    char buf[256];
} TtyQueue;

 /* derived name */

/* the tty socket record sceTtyInit hands DECI2 for sceTtyHandler.  The four
   header words are volatile: the handler writes them from interrupt level
   while sceTtyWrite and sceTtyInit poll them.  The buffer and queue pointers
   below them are plain.  The names are ours. */
typedef struct {       /* field names derived */
    volatile int s;    /* 0x00 the DECI2 socket */
    volatile int wlen; /* 0x04 bytes left to send */
    volatile int rlen; /* 0x08 bytes received into rbuf */
    volatile int busy; /* 0x0C set while a send is outstanding */
    char *wbuf;        /* 0x10 */
    char *rbuf;        /* 0x14 */
    TtyQueue *q;       /* 0x18 the receive queue */
} TtyRec;

              /* derived name */

/* tty.o's .bss, in link order: the receive queue QueueInit sets up (a
   16-byte header and a 256-byte ring), the DECI2 socket record, then the send
   and receive packets (320 bytes each, 64-aligned for the DECI2 transfer). */
#define tty_queue D_00471480
extern TtyQueue tty_queue;

int sceTtyWrite(const char *buf, int len);

int sceTtyRead(void *buf, int size);

int sceTtyInit(void);

extern char D_0045D3E8[];
extern char D_0045D410[];
extern char D_0045D428[];
extern char D_0045D440[];

 /* derived name */

void *QueueInit(int size)
{
    tty_queue.size = size;
    tty_queue.count = 0;
    tty_queue.wp = tty_queue.buf;
    tty_queue.rp = tty_queue.buf;
    return &tty_queue;
}


void QueuePeekWriteDone(TtyQueue *q)
{
    int count = q->count + 1;
    char *wp = q->wp + 1;
    int cap = q->size;
    q->count = count;
    cap += 0x10;
    {
        char *end = (char *)q + cap;
        q->wp = wp;
        if (wp == end) {
            q->wp = q->buf;
        }
    }
}


void QueuePeekReadDone(TtyQueue *q)
{
    q->count--;
    q->rp++;
    if (q->rp == (char *)q + (q->size + 0x10)) {
        q->rp = q->buf;
    }
}


void sceTtyHandler(int event, int param, void *opt)
{
    TtyRec *tty = opt;
    int n;
    int i;
    char *hdr;

    switch (event) {
    case 1:
    case 2:
        if (param != 0) {
            if (320 < (unsigned int)(tty->rlen + param)) {
                kprintf(D_0045D3E8);
            }
            i = sceDeci2ExRecv(tty->s, tty->rbuf + tty->rlen, (unsigned short)param);
            if (i < 0) {
                kprintf(D_0045D410);
            }
            tty->rlen = tty->rlen + i;
            return;
        }
        hdr = tty->rbuf;
        for (i = 12; i < *(unsigned short *)hdr; i++) {
            *tty->q->wp = tty->rbuf[i];
            QueuePeekWriteDone(tty->q);
        }
        tty->rlen = 0;
        return;

    case 3:
        n = sceDeci2ExSend(tty->s, tty->wbuf, (unsigned short)tty->wlen);
        if (n < 0) {
            kprintf(D_0045D428, n);
            break;
        }
        tty->wbuf = tty->wbuf + n;
        tty->wlen = tty->wlen - n;
        return;

    case 4:
        if (tty->wlen != 0) {
            kprintf(D_0045D440, tty->wlen);
        }
        break;

    default:
        return;
    }
    tty->busy = 0;
}
INCLUDE_PAD(4);
