#include "common.h"

struct ThreadParam_B038_x0010B038 { int status; void *entry; void *stack; int stackSize; void *gpReg; int initPriority; int currentPriority; unsigned int attr; unsigned int option; int waitType; int waitId; int wakeupCount; };
struct SemaParam_B038_x0010B038 { int currentCount; int maxCount; int initCount; int numWaitThreads; unsigned int attr; unsigned int option; };
typedef struct { int readIndex; int writeIndex; } TopArg_B038_x0010B038;
extern int D_003EC618_x0010B038 __asm__("D_003EC618");
extern int D_00471040_x0010B038 __asm__("D_00471040");
extern char D_00470C40_x0010B038[] __asm__("D_00470C40");
extern char D_00477CF0_x0010B038[] __asm__("D_00477CF0");
extern char D_0045D3B8_x0010B038[] __asm__("D_0045D3B8");
extern TopArg_B038_x0010B038 D_00471048_x0010B038 __asm__("D_00471048");
void topThread_x0010B038(void *) __asm__("topThread");
int CreateSema_x0010B038(struct SemaParam_B038_x0010B038 *) __asm__("CreateSema");
int CreateThread_x0010B038(struct ThreadParam_B038_x0010B038 *) __asm__("CreateThread");
int DeleteSema_x0010B038(int) __asm__("DeleteSema");
int func_0010B3A0_x0010B038(int, void *) __asm__("func_0010B3A0");
int GetThreadId_x0010B038(void) __asm__("GetThreadId");
int ChangeThreadPriority_x0010B038(int, int) __asm__("ChangeThreadPriority");
int func_0010B038_x0010B038(void) __asm__("func_0010B038");
int func_0010B038_x0010B038(void)
{
    struct ThreadParam_B038_x0010B038 thread;
    struct SemaParam_B038_x0010B038 sema;

    if (D_003EC618_x0010B038 > 0) return -1;
    sema.initCount = 0;
    sema.maxCount = 255;
    sema.option = (unsigned int)D_0045D3B8_x0010B038;
    D_00471040_x0010B038 = CreateSema_x0010B038(&sema);
    if (D_00471040_x0010B038 < 0) return -1;
    thread.entry = topThread_x0010B038;
    thread.stack = D_00470C40_x0010B038;
    thread.stackSize = 0x400;
    thread.gpReg = D_00477CF0_x0010B038;
    thread.initPriority = 0;
    thread.option = (unsigned int)D_0045D3B8_x0010B038;
    D_003EC618_x0010B038 = CreateThread_x0010B038(&thread);
    if (D_003EC618_x0010B038 < 0) {
        DeleteSema_x0010B038(D_00471040_x0010B038);
        return -1;
    }
    D_00471048_x0010B038.readIndex = 0;
    D_00471048_x0010B038.writeIndex = 0;
    func_0010B3A0_x0010B038(D_003EC618_x0010B038, &D_00471048_x0010B038);
    ChangeThreadPriority_x0010B038(GetThreadId_x0010B038(), 1);
    return D_003EC618_x0010B038;
}
extern int D_004E2400_x0010B128 __asm__("D_00471040");
extern int D_00486198_x0010B128 __asm__("D_003EC618");
extern int D_004E2408_x0010B128[2] __asm__("D_00471048");
typedef struct { unsigned char a; unsigned char b; } EE010_x0010B128;
typedef struct { int x0; int x4; EE010_x0010B128 e[0x200]; } QE010_x0010B128;
extern void iSignalSema_x0010B128(int) __asm__("iSignalSema");
extern int _iWakeupThread_x0010B128(int) __asm__("_iWakeupThread");
int iWakeupThread_x0010B128(int tid) __asm__("iWakeupThread");
/* iWakeupThread_x0010B128: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10DE60.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int iWakeupThread_x0010B128(int tid)
{
    register int v0 __asm__("$2");
    unsigned int t;
    int i;
     
    __asm__ volatile("li $3, -0x2F\n\tsyscall" : "=r"(v0) : : "$3");
    t = v0;
    if (t != tid) return _iWakeupThread_x0010B128(tid);
    if (t >= 0x100 || D_00486198_x0010B128 == 0) return -1;
    i = (*(QE010_x0010B128*)&D_004E2408_x0010B128).x4 & 0x1FF;
    (*(QE010_x0010B128*)&D_004E2408_x0010B128).x4 = i + 1;
    (*(QE010_x0010B128*)&D_004E2408_x0010B128).e[i].a = 0;
    (*(QE010_x0010B128*)&D_004E2408_x0010B128).e[i].b = t;
    iSignalSema_x0010B128(D_004E2400_x0010B128);
    return t;
}
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
extern int D_004E2400_x0010B240 __asm__("D_00471040");
extern int D_00486198_x0010B240 __asm__("D_003EC618");
extern int D_004E2408_x0010B240[2] __asm__("D_00471048");
extern void iSignalSema_x0010B240(int) __asm__("iSignalSema");
typedef struct { unsigned char a; unsigned char b; } EE128_x0010B240;
typedef struct { int x0; int x4; EE128_x0010B240 e[0x200]; } QE128_x0010B240;
extern int _iSuspendThread_x0010B240(int) __asm__("_iSuspendThread");
int func_0010B240_x0010B240(int tid) __asm__("func_0010B240");
/* iSuspendThread_2: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10DE60.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010B240_x0010B240(int tid)
{
    register int v0 __asm__("$2");
    unsigned int t;
    int i;
     
    __asm__ volatile("li $3, -0x2F\n\tsyscall" : "=r"(v0) : : "$3");
    t = v0;
    if (t != tid) return _iSuspendThread_x0010B240(tid);
    if (t >= 0x100 || D_00486198_x0010B240 == 0) return -1;
    i = (*(QE128_x0010B240*)&D_004E2408_x0010B240).x4 & 0x1FF;
    (*(QE128_x0010B240*)&D_004E2408_x0010B240).x4 = i + 1;
    (*(QE128_x0010B240*)&D_004E2408_x0010B240).e[i].a = 2;
    (*(QE128_x0010B240*)&D_004E2408_x0010B240).e[i].b = t;
    iSignalSema_x0010B240(D_004E2400_x0010B240);
    return t;
}
extern int WaitSema_x0010B2D8(int) __asm__("WaitSema");
typedef struct { int count; int max_count; int init_count; int wait_threads; unsigned int attr; unsigned int option; } SemaParamDF38_x0010B2D8;
extern int CreateSema_x0010B2D8(SemaParamDF38_x0010B2D8 *) __asm__("CreateSema");
extern int DeleteSema_x0010B2D8(int) __asm__("DeleteSema");
typedef struct { int count; int max_count; int init_count; int wait_threads; unsigned int attr; void *option; } SemaParamE1C0_x0010B2D8;
extern int TimerUSec2BusClock_x0010B2D8(int, int) __asm__("func_00115E00");
extern int SetTimerAlarm_x0010B2D8(int, int (*)(int, int, int, int), int) __asm__("func_00115FB0");
extern int _DelayThreadHandler_x0010B2D8(int, int, int, int) __asm__("func_0010B518");
extern char ext_str0_x0010B2D8[] __asm__("D_0045D3D0");
int func_0010B2D8_x0010B2D8(int a) __asm__("func_0010B2D8");
/* DelayThread: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10DE60.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010B2D8_x0010B2D8(int a)
{
    SemaParamE1C0_x0010B2D8 sp;
    int s, sema, r;
    __asm__ volatile("mfc0 %0, $12" : "=r"(s));
    if (!(s & 0x10000)) return 0x80008008;
    sp.max_count = 1;
    sp.option = ext_str0_x0010B2D8;
    sp.init_count = 0;
    sema = (CreateSema_x0010B2D8((SemaParamDF38_x0010B2D8 *)(&sp)));
    if (sema < 0) return 0x80008003;
    r = SetTimerAlarm_x0010B2D8(TimerUSec2BusClock_x0010B2D8(0, a), _DelayThreadHandler_x0010B2D8, sema);
    if (r < 0) {
        DeleteSema_x0010B2D8(sema);
        return r;
    }
    WaitSema_x0010B2D8(sema);
    DeleteSema_x0010B2D8(sema);
    return 0;
}
struct ThreadParam_B3A0_x0010B3A0 { int status; void *entry; void *stack; int stackSize; void *gpReg; int initPriority; int currentPriority; unsigned int attr; unsigned int option; int waitType; int waitId; int wakeupCount; };
int func_0010AD30_x0010B3A0(void) __asm__("func_0010AD30");
int DI_x0010B3A0(void) __asm__("DI");
int EI_x0010B3A0(void) __asm__("EI");
int ReferThreadStatus_x0010B3A0(int, struct ThreadParam_B3A0_x0010B3A0 *) __asm__("ReferThreadStatus");
int StartThread_x0010B3A0(int, void *) __asm__("StartThread");
int func_0010B3A0_x0010B3A0(int thid, void *arg) __asm__("func_0010B3A0");
int func_0010B3A0_x0010B3A0(int thid, void *arg)
{
    struct ThreadParam_B3A0_x0010B3A0 info;
    int ret;
    char *p;

    if (func_0010AD30_x0010B3A0() != 0) return -1;
    if (DI_x0010B3A0() == 0) return -1;
    ret = ReferThreadStatus_x0010B3A0(thid, &info);
    if (ret < 0) {
        EI_x0010B3A0();
        return ret;
    }
    if (info.status != 0x10) {
        EI_x0010B3A0();
        return -1;
    }
            p = (char *)info.stack + info.stackSize - 0x2A0;
            __asm__ volatile(
                "sq $0, 0x0(%0)\n\tsq $0, 0x10(%0)\n\tsq $0, 0x20(%0)\n\tsq $0, 0x30(%0)\n\t"
                "sq $0, 0x40(%0)\n\tsq $0, 0x50(%0)\n\tsq $0, 0x60(%0)\n\tsq $0, 0x70(%0)\n\t"
                "sq $0, 0x80(%0)\n\tsq $0, 0x90(%0)\n\tsq $0, 0xA0(%0)\n\tsq $0, 0xB0(%0)\n\t"
                "sq $0, 0xC0(%0)\n\tsq $0, 0xD0(%0)\n\tsq $0, 0xE0(%0)\n\tsq $0, 0xF0(%0)\n\t"
                "sq $0, 0x100(%0)\n\tsq $0, 0x110(%0)\n\tsq $0, 0x120(%0)\n\tsq $0, 0x130(%0)\n\t"
                "sq $0, 0x140(%0)\n\tsq $0, 0x150(%0)\n\tsq $0, 0x160(%0)\n\tsq $0, 0x170(%0)\n\t"
                "sq $0, 0x180(%0)\n\tsq $0, 0x190(%0)\n\tsq $0, 0x1A0(%0)\n\tsq $0, 0x1B0(%0)\n\t"
                "sq $0, 0x200(%0)\n\tsq $0, 0x210(%0)\n\tsq $0, 0x220(%0)\n\tsq $0, 0x230(%0)\n\t"
                "sq $0, 0x240(%0)\n\tsq $0, 0x250(%0)\n\tsq $0, 0x260(%0)\n\tsq $0, 0x270(%0)\n\t"
                "sll $8, %1, 0\n\tsd $8, 0x40(%0)\n\t"
                "lw $8, 0x1C0(%0)\n\tsd $8, 0x1C0(%0)\n\tsd $0, 0x1C8(%0)\n\t"
                "lw $8, 0x1D0(%0)\n\tsd $8, 0x1D0(%0)\n\tsd $0, 0x1D8(%0)\n\t"
                "lw $8, 0x1E0(%0)\n\tsd $8, 0x1E0(%0)\n\tsd $0, 0x1E8(%0)\n\t"
                "lw $8, 0x1F0(%0)\n\tsd $8, 0x1F0(%0)\n\tsd $0, 0x1F8(%0)
1:"
                : : "r"(p), "r"(arg) : "$8", "memory");
            EI_x0010B3A0();
            return StartThread_x0010B3A0(thid, arg);
}
extern void iSignalSema_x0010B518(int a) __asm__("iSignalSema");
int func_0010B518_x0010B518(int a, int b, int c, int d) __asm__("func_0010B518");
/* _DelayThreadHandler: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_10E288.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010B518_x0010B518(int a, int b, int c, int d)
{
    iSignalSema_x0010B518(d);
    __asm__ __volatile__("sync");
    __asm__ __volatile__("ei");
    return 0;
}
