/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/glue.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libc,sce/libc/sys,sce/libkernl */
#include "common.h"

/* libkernl.a(glue.o) */
#include <eeregs.h>

#include <eekernel.h>

#include <errno.h>

#include <signal.h>

#include <sys/stat.h>

#include <unistd.h>

#include <libkernl_internal.h>

/* glue.o's .data: whether the tty is open (write and read open it on first
   use), then sbrk's current break, which starts at the end of the program's
   bss (the linker's _end).  Neither has a global symbol, so both are
   statics. */
/* The link's end of .bss, which no header declares */
extern char _end[];

#define Exit Exit_001149D8

#define tty_opened D_003EC610
extern int tty_opened;

 /* derived name */

void sceResetttyinit(void);

long long VSync2(void);

int close(int fd);

int ioctl(void);

long lseek(int fd, long offset, int whence);

int stat(void);

int unlink(void);




int write(int fd, const void *buf, int size)
{
    if (fd - 1 < 2U) {
        if (tty_opened == 0) {
            if (sceTtyInit() == 0) {
                return -1;
            }
            tty_opened = 1;
        }
        return sceTtyWrite(buf, size);
    }
    return -1;
}


int read(int fd, void *buf, int size)
{
    if (fd == 0) {
        if (tty_opened == 0) {
            if (sceTtyInit() == 0) {
                return -1;
            }
            tty_opened = 1;
        }
        return sceTtyRead(buf, size);
    }
    return -1;
}


int open(void)
{
    *(int *)__errno() = 5;
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_glue", close);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_glue", func_0010A950);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_glue", lseek);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_glue", sbrk);


int isatty(int fd)
{
    return 1;
}


int fstat(int fd, struct stat *st)
{
    st->st_blksize = 0;
    st->st_mode = S_IFCHR;
    return 0;
}


int getpid(void)
{
    return 1;
}


int kill(int pid, int sig)
{
    if (pid == 1) {
        Exit(sig);
    }
    return 0;
}
