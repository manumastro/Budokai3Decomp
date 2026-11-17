/* gcc probe, libmtap (Sony's multitap library, linked after CRI): functions written from the assembly, compiled with
 * every ee-gcc build by scripts/gccmatch.py.
 *     .venv/bin/python scripts/gccmatch.py scripts/probe/gcc_mtap.c */

typedef struct {
    char pad[0x24];
    void *serve;
    char pad2[4];
} sceSifClientData;

extern sceSifClientData D_00492AC0; /* the RPC client of mtapman */
extern unsigned int D_00492B00[32]; /* the RPC buffer (0x80 bytes) */
extern char D_00468000[];
int func_0010E1A8(sceSifClientData *cd, unsigned int fno, unsigned int mode, void *send, int ssize, void *recv,
                  int rsize, void (*end)(void *), void *end_param); /* sceSifCallRpc */
void func_001A19D0(const char *msg);

/* RPC 6 with one argument; returns the answer's first word, 0 on an RPC error. */
int func_001A19F8(unsigned int arg) {
    D_00492B00[1] = arg;
    if (func_0010E1A8(&D_00492AC0, 6, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0)
        return 0;
    return D_00492B00[0];
}

int sceMtapPortOpen(int port) {
    D_00492B00[0] = port;
    if (func_0010E1A8(&D_00492AC0, 1, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468000);
        return 0;
    }
    return D_00492B00[1];
}
