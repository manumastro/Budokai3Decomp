/* gcc probe, the C library (newlib, as in Sony's SDK): functions written after newlib's source, compiled with every
 * ee-gcc build by scripts/gccmatch.py.
 *     .venv/bin/python scripts/gccmatch.py scripts/probe/gcc_libc.c */

struct _reent {
    int _errno;
    char pad[0xA4];
    unsigned long long _rand_next; /* 0xA8: _new._reent._rand_next */
};
extern struct _reent *D_003EFC48; /* _impure_ptr */
extern int D_005D0090;            /* errno */
int func_0010A8A8(int fd, void *buf, unsigned int cnt); /* read (libkernl's file stubs) */

/* srand (stdlib/rand.c) */
void func_00126B70(unsigned int seed) {
    D_003EFC48->_rand_next = seed;
}

/* rand (stdlib/rand.c): the 64-bit multiply is a call to __muldi3 on the EE. */
int func_00126B88(void) {
    D_003EFC48->_rand_next = D_003EFC48->_rand_next * 6364136223846793005LL + 1;
    return (int)((D_003EFC48->_rand_next >> 32) & 0x7FFFFFFF);
}

/* _read_r (reent/readr.c): `ret` is newlib's _ssize_t, a long (64 bits here); `int` gives 4 differing. */
long func_00126BF0(struct _reent *ptr, int fd, void *buf, unsigned int cnt) {
    long ret;
    D_005D0090 = 0;
    if ((ret = func_0010A8A8(fd, buf, cnt)) == -1 && D_005D0090 != 0)
        ptr->_errno = D_005D0090;
    return ret;
}
