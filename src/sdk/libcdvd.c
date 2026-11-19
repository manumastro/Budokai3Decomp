#include "common.h"

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0045DDE0;

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010D3A8(s32, s32 *, s32); /* extern */
extern s32 D_003EDDA4;
extern s32 D_003EDDC8;
extern s32 func_00118628;

extern int DIntr_x001180F0(void) __asm__("DI");
extern int EIntr_x001180F0(void) __asm__("EI");
extern int sceCdSync_x001180F0(int mode) __asm__("func_00118C08");
extern void (*sceCdCbfunc_x001180F0)(int) __asm__("D_00478D00");
extern int data_001D5F84_x001180F0 __asm__("D_00478D04");
int sceCdSync_x001180F0(int mode) __asm__("func_00118C08");
void *func_001180F0_x001180F0(void (*func)(int)) __asm__("func_001180F0");
/* sceCdCallback: from https://github.com/DabDavis/socom2-decomp (src/lib/sdk/libcdvd.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void *func_001180F0_x001180F0(void (*func)(int))
{
	void *old;
	int oldi;

	if (sceCdSync_x001180F0(1) != 0)
		return 0;
	oldi = DIntr_x001180F0();
	old = sceCdCbfunc_x001180F0;
	sceCdCbfunc_x001180F0 = func;
	__asm__ volatile ("sw $28, %0" : "=m" (data_001D5F84_x001180F0));
	if (oldi)
		EIntr_x001180F0();
	return old;
}
extern volatile int D_003EDDE0_x00118158[] __asm__("D_003EDDE0");
extern volatile int D_003EDDE4_x00118158[] __asm__("D_003EDDE4");
extern volatile int D_003EDDA8_x00118158[] __asm__("D_003EDDA8");
extern int D_003EDD94_x00118158[] __asm__("D_003EDD94");
extern void (*D_00478D00_x00118158[])(int) __asm__("D_00478D00");
extern volatile int D_003EDDA0_x00118158[] __asm__("D_003EDDA0");
extern volatile int D_003EDDB4_x00118158[] __asm__("D_003EDDB4");
extern int iSignalSema_x00118158(int sema) __asm__("iSignalSema");
void func_00118158_x00118158(int *data) __asm__("func_00118158");
void func_00118158_x00118158(int *data)
{
    D_003EDDE0_x00118158[0] = *data;
    D_003EDDE4_x00118158[0] = D_003EDDE0_x00118158[0];
    if (D_003EDDE0_x00118158[0] == 11) {
        D_003EDDE0_x00118158[0] = 0;
        D_003EDDB4_x00118158[0] = 0;
        return;
    }
    {
        int x = D_003EDDA8_x00118158[0];
        __asm__ volatile("1:");
        iSignalSema_x00118158(x);
    }
    if (D_003EDD94_x00118158[0] && D_00478D00_x00118158[0]) {
        iSignalSema_x00118158(D_003EDDA0_x00118158[0]);
    } else {
        D_003EDDB4_x00118158[0] = 0;
    }
    D_003EDDE0_x00118158[0] = 0;
}
register int gp_x001181F8 asm("$28");
extern int D_004878A0_x001181F8 __asm__("D_003EDDA0");
extern int D_004878D8_x001181F8 __asm__("D_003EDDE0");
extern int D_004878B4_x001181F8 __asm__("D_003EDDB4");
extern int D_00487894_x001181F8 __asm__("D_003EDD94");
extern int D_004E9D14_x001181F8 __asm__("D_00478D14");
extern int D_00487890_x001181F8 __asm__("D_003EDD90");
extern int D_004E9D00_x001181F8 __asm__("D_00478D00");
extern int D_004E9D04_x001181F8 __asm__("D_00478D04");
extern int D_004878DC_x001181F8 __asm__("D_003EDDE4");
extern char D_00498C38_x001181F8[] __asm__("D_0045DB78");
extern int WaitSema_x001181F8(int) __asm__("WaitSema");
extern void ExitDeleteThread_x001181F8(void) __asm__("ExitDeleteThread");
extern int scePrintf_x001181F8(const char *, ...) __asm__("scePrintf");
extern int D_00487894_x001181F8 __asm__("D_003EDD94");
void func_001181F8_x001181F8(void *arg) __asm__("func_001181F8");
/* func_001184C0: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libcdvd/func_001184C0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001181F8_x001181F8(void *arg)
{
    int save;

    while (1) {
        WaitSema_x001181F8(D_004878A0_x001181F8);
        if (D_004878D8_x001181F8 == -1) {
            D_004878B4_x001181F8 = 0;
             
            __asm__ volatile("");
            D_004878D8_x001181F8 = 0;
            D_00487894_x001181F8 = 0;
            D_004E9D14_x001181F8 = 0;
            ExitDeleteThread_x001181F8();
        }
        if (D_00487890_x001181F8 > 0) {
            scePrintf_x001181F8(D_00498C38_x001181F8, D_004E9D00_x001181F8, D_004878DC_x001181F8);
        }
        if (D_004E9D00_x001181F8 != 0 && *(volatile int *)&D_004878DC_x001181F8 != 0) {
             
            __asm__ volatile("");
            save = gp_x001181F8;
            gp_x001181F8 = *(volatile int *)&D_004E9D04_x001181F8;
            ((void (*)(int))D_004E9D00_x001181F8)(*(volatile int *)&D_004878DC_x001181F8);
            gp_x001181F8 = save;
        }
        *(volatile int *)&D_004878B4_x001181F8 = 0;
    }
}
typedef struct {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
} ThreadParam_x001182C8;
extern ThreadParam_x001182C8 cb_thread_x001182C8 __asm__("D_00478D18");
extern int cb_thid_x001182C8 __asm__("D_003EDD94");
extern char cb_option_x001182C8[] __asm__("D_0045DBA0");
extern void cb_loop_x001182C8(void *) __asm__("func_001181F8");
extern int CreateThread_x001182C8(ThreadParam_x001182C8 *) __asm__("CreateThread");
extern int StartThread_x001182C8(int, void *) __asm__("func_0010B3A0");
extern int ChangeThreadPriority_x001182C8(int, int) __asm__("ChangeThreadPriority");
int sceCdInitEeCB_x001182C8(int prio, void *stack, int stacksize) __asm__("sceCdInitEeCB");
/* sceCdInitEeCB: written by hand after socom2-decomp's version (src/lib/sdk/libcdvd.c), this one without its
 * GetThreadId / ReferThreadStatus */
int sceCdInitEeCB_x001182C8(int prio, void *stack, int stacksize)
{
    int ret = 1;

    if (cb_thid_x001182C8 == 0) {
        cb_thread_x001182C8.stackSize = stacksize;
        cb_thread_x001182C8.entry = cb_loop_x001182C8;
        cb_thread_x001182C8.stack = stack;
        cb_thread_x001182C8.initPriority = prio;
        cb_thread_x001182C8.option = (unsigned int)cb_option_x001182C8;
        cb_thread_x001182C8.gpReg = 0;
        cb_thid_x001182C8 = CreateThread_x001182C8(&cb_thread_x001182C8);
        StartThread_x001182C8(cb_thid_x001182C8, 0);
    } else {
        ChangeThreadPriority_x001182C8(cb_thid_x001182C8, prio);
        ret = 0;
    }
    return ret;
}
extern char D_004878D8_x00118368[] __asm__("D_003EDDE0");
extern void _sceCd_cd_callback_x00118368(char *) __asm__("func_00118158");
typedef struct {int n,m;unsigned char *a,*b;unsigned char x[64],y[64];} Req_x00118368;
void func_00118368_x00118368(Req_x00118368 *p) __asm__("func_00118368");
/* _sceCd_cd_read_intr: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libcdvd/func_00118660.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00118368_x00118368(Req_x00118368 *p){
 int i;
 p=(Req_x00118368 *)((unsigned)p|0x20000000);
 if(p->n>0){
  unsigned char *dest=p->a,*uncached=(unsigned char *)((unsigned)dest|0x20000000);
  for(i=0;i<p->n;i++) {unsigned char c=p->x[i];uncached[i]=c;dest[i]=c;}
 }
 if(p->m>0){
  unsigned char *dest=p->b,*uncached=(unsigned char *)((unsigned)dest|0x20000000);
  for(i=0;i<p->m;i++) {unsigned char c=p->y[i];uncached[i]=c;dest[i]=c;}
 }
 _sceCd_cd_callback_x00118368(D_004878D8_x00118368);
}
extern char D_0045E1A8_x00118420[] __asm__("D_0045DBB8");
extern char D_0045E1B8_x00118420[] __asm__("D_0045DBC8");
extern char D_0045E1C8_x00118420[] __asm__("D_0045DBD8");
extern char D_0045E1D8_x00118420[] __asm__("D_0045DBE8");
extern int D_003F8674_x00118420 __asm__("D_003EDDB4");
extern int D_003F8660_x00118420 __asm__("D_003EDDA0");
extern int D_003F8668_x00118420 __asm__("D_003EDDA8");
extern int D_003F866C_x00118420 __asm__("D_003EDDAC");
extern int D_003F8670_x00118420 __asm__("D_003EDDB0");
extern volatile int D_003F8674_x00118420 __asm__("D_003EDDB4");
extern volatile int D_003F8668_x00118420 __asm__("D_003EDDA8");
extern volatile int D_003F8660_x00118420 __asm__("D_003EDDA0");
struct SemaParam_x00118420 {
    int    currentCount;
    int    maxCount;
    int    initCount;
    int    numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
extern int CreateSema_x00118420(struct SemaParam_x00118420 *p) __asm__("CreateSema");
extern volatile int D_003F8668_x00118420 __asm__("D_003EDDA8");
extern volatile int D_003F866C_x00118420 __asm__("D_003EDDAC");
extern volatile int D_003F8670_x00118420 __asm__("D_003EDDB0");
extern volatile int D_003F8660_x00118420 __asm__("D_003EDDA0");
extern volatile int D_003F8674_x00118420 __asm__("D_003EDDB4");
void func_00118420_x00118420(void) __asm__("func_00118420");
/* cmd_sem_init: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003984d8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00118420_x00118420(void)
{
    struct SemaParam_x00118420 sp;

    if (D_003F8668_x00118420 == -1 || D_003F866C_x00118420 == -1 || D_003F8670_x00118420 == -1) {
        sp.option = (unsigned int)D_0045E1A8_x00118420;
        sp.initCount = 1;
        sp.maxCount = 1;
        D_003F8668_x00118420 = CreateSema_x00118420(&sp);
        sp.option = (unsigned int)D_0045E1B8_x00118420;
        D_003F866C_x00118420 = CreateSema_x00118420(&sp);
        sp.option = (unsigned int)D_0045E1C8_x00118420;
        D_003F8670_x00118420 = CreateSema_x00118420(&sp);
        sp.option = (unsigned int)D_0045E1D8_x00118420;
        sp.initCount = 0;
        D_003F8660_x00118420 = CreateSema_x00118420(&sp);
        D_003F8674_x00118420 = 0;
    }
}
int DIntr_x00118508(void) __asm__("DI");
int EIntr_x00118508(void) __asm__("EI");
extern int SignalSema_x00118508(int sema) __asm__("SignalSema");
extern int DeleteSema_x00118508(int sema) __asm__("DeleteSema");
extern volatile int D_003F8654_x00118508 __asm__("D_003EDD94");
extern volatile int D_003F86A0_x00118508 __asm__("D_003EDDE0");
extern int D_003F8660_x00118508 __asm__("D_003EDDA0");
extern int D_003F8668_x00118508 __asm__("D_003EDDA8");
extern int D_003F866C_x00118508 __asm__("D_003EDDAC");
extern int D_003F8670_x00118508 __asm__("D_003EDDB0");
extern int func_003B2500_x00118508(int fid) __asm__("func_0010D420");
extern volatile int D_003F86A0_x00118508 __asm__("D_003EDDE0");
extern volatile int D_003F8668_x00118508 __asm__("D_003EDDA8");
extern int D_003F8654_x00118508 __asm__("D_003EDD94");
extern volatile int D_003F8660_x00118508 __asm__("D_003EDDA0");
extern volatile int D_003F8668_x00118508 __asm__("D_003EDDA8");
extern volatile int D_003F866C_x00118508 __asm__("D_003EDDAC");
extern volatile int D_003F8670_x00118508 __asm__("D_003EDDB0");
extern volatile int D_003F8660_x00118508 __asm__("D_003EDDA0");
void func_00118508_x00118508(void) __asm__("func_00118508");
/* cdvd_exit: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003984d8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00118508_x00118508(void)
{
    int oldstat;

    if (D_003F8654_x00118508) {
        D_003F86A0_x00118508 = -1;
        SignalSema_x00118508(*(volatile int *)&D_003F8660_x00118508);
    }
    DeleteSema_x00118508(D_003F8668_x00118508);
    DeleteSema_x00118508(D_003F866C_x00118508);
    DeleteSema_x00118508(D_003F8670_x00118508);
    DeleteSema_x00118508(D_003F8660_x00118508);
    oldstat = DIntr_x00118508();
    func_003B2500_x00118508(0x80000012);
    if (oldstat)
        EIntr_x00118508();
}
extern int DIntr_x001185A8(void) __asm__("DI");
extern int EIntr_x001185A8(void) __asm__("EI");
extern int _icmd_bind_x001185A8 __asm__("D_003EDDC8");
extern void (*data_001D5F88_x001185A8)(void *) __asm__("D_00478D08");
extern int data_001D5F8C_x001185A8 __asm__("D_00478D0C");
extern void *data_001D5F90_x001185A8 __asm__("D_00478D10");
int PowerOffCB_x001185A8(void) __asm__("func_00118680");
int PowerOffCB_x001185A8(void) __asm__("func_00118680");
void *func_001185A8_x001185A8(void (*func)(void *), void *addr) __asm__("func_001185A8");
/* sceCdPOffCallback: from https://github.com/DabDavis/socom2-decomp (src/lib/sdk/libcdvd.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void *func_001185A8_x001185A8(void (*func)(void *), void *addr)
{
	void *old;
	int oldi;

	if (_icmd_bind_x001185A8 < 0)
		PowerOffCB_x001185A8();
	oldi = DIntr_x001185A8();
	old = data_001D5F88_x001185A8;
	data_001D5F90_x001185A8 = addr;
	data_001D5F88_x001185A8 = func;
	__asm__ volatile ("sw $28, %0" : "=m" (data_001D5F8C_x001185A8));
	if (oldi)
		EIntr_x001185A8();
	return old;
}
extern volatile int Init_seq_x00118628 __asm__("D_003EDDA4");
extern void (*data_001D5F88_x00118628)(void *) __asm__("D_00478D08");
extern int data_001D5F8C_x00118628 __asm__("D_00478D0C");
extern void *data_001D5F90_x00118628 __asm__("D_00478D10");
void func_00118628_x00118628(void *data) __asm__("func_00118628");
/* _sceCd_Poff_Intr: from https://github.com/DabDavis/socom2-decomp (src/lib/sdk/libcdvd.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00118628_x00118628(void *data)
{
	int old_gp;

	if (data_001D5F88_x00118628 != 0 && Init_seq_x00118628 == 0) {
		__asm__ volatile ("move %0, $28\n\tlw $28, %1" : "=r" (old_gp) : "m" (data_001D5F8C_x00118628));
		data_001D5F88_x00118628(data_001D5F90_x00118628);
		__asm__ volatile ("move $28, %0" : : "r" (old_gp));
	}
}
s32 func_00118680(void) {
    s32 temp_s0;

    D_003EDDA4 = 1;
    temp_s0 = DI();
    func_0010D3A8(0x80000012, &func_00118628, 0);
    if (temp_s0 != 0) {
        EI();
    }
    D_003EDDA4 = 0;
    D_003EDDC8 = 1;
    return 1;
}
typedef struct { unsigned int lsn; unsigned int size; char name[0x1C]; } sceCdlFILE_x001186F8;
typedef struct { char b[0x24]; } fileblk_x001186F8;
struct sfdata_x001186F8 {
    unsigned char file[0x24];    
    char          name[0x100];   
    void         *addr;          
    int           layer;         
};
extern volatile int D_003F8668_x001186F8 __asm__("D_003EDDA8");
extern char D_003F8640_x001186F8[] __asm__("D_003EDD80");
extern int D_003F865C_x001186F8 __asm__("D_003EDD9C");
extern int D_003F868C_x001186F8 __asm__("D_003EDDCC");
extern struct sfdata_x001186F8 D_0077C440_x001186F8 __asm__("D_00478D80");
extern char D_0077C464_x001186F8[] __asm__("D_00478DA4");
extern int D_0077C580_x001186F8[] __asm__("D_00478EC0");
extern int D_0077C5C0_x001186F8[] __asm__("D_00478F00");
extern char D_0045E1F0_x001186F8[] __asm__("D_0045DC00");
extern char D_0045E210_x001186F8[] __asm__("D_0045DC20");
extern char D_0045E228_x001186F8[] __asm__("D_0045DC38");
extern char D_0045E238_x001186F8[] __asm__("D_0045DC48");
extern char D_0045E248_x001186F8[] __asm__("D_0045DC58");
extern void cmd_sem_init_x001186F8(void) __asm__("func_00118420");
extern int PollSema_x001186F8(int sema) __asm__("PollSema");
extern int SignalSema_x001186F8(int sema) __asm__("SignalSema");
extern void sceSifInitRpc_x001186F8(int mode) __asm__("sceSifInitRpc");
extern void func_003B1F28_x001186F8() __asm__("scePrintf");
extern int func_00398DA0_x001186F8(int mode) __asm__("func_00118C08");
extern int func_003B2F48_x001186F8(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
extern void func_003B2850_x001186F8(void *p, int size) __asm__("func_0010D770");
int func_003B3128_x001186F8() __asm__("sceSifCallRpc");
int func_001186F8_x001186F8(sceCdlFILE_x001186F8 *fp, const char *name, int layer) __asm__("func_001186F8");
/* sceCdLayerSearchFile: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00398890.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001186F8_x001186F8(sceCdlFILE_x001186F8 *fp, const char *name, int layer)
{
    int i;
    int n;
    int r;
    int b;

    cmd_sem_init_x001186F8();
    r = PollSema_x001186F8(D_003F8668_x001186F8);
    if (D_003F8668_x001186F8 != r)
        return 0;
    D_003F865C_x001186F8 = 1;
    if (func_00398DA0_x001186F8(1)) {
        SignalSema_x001186F8(D_003F8668_x001186F8);
        return 0;
    }
    do {
        sceSifInitRpc_x001186F8(0);
        b = D_003F868C_x001186F8;
    } while (0);
    if (b < 0) {
        while (1) {
            if (func_003B2F48_x001186F8(D_0077C5C0_x001186F8, 0x80000597, 0) < 0) {
                if (*(int *)(D_003F8640_x001186F8 + 0x10) > 0)
                    func_003B1F28_x001186F8(D_0045E1F0_x001186F8);
                for (i = 0x100000; i != -1; i--)
                    ;
                continue;
            }
            if (D_0077C5C0_x001186F8[9] != 0)
                break;
            for (i = 0x100000; i != -1; i--)
                ;
        }
        D_003F868C_x001186F8 = 0;
    }
    for (n = 0; n < 0x100; n++) {
        if ((D_0077C440_x001186F8.name[n] = name[n]) == 0)
            break;
    }
    if (n == 0x100)
        D_0077C440_x001186F8.name[0xFF] = 0;
    if (*(int *)(D_003F8640_x001186F8 + 0x10) > 0)
        func_003B1F28_x001186F8(D_0045E210_x001186F8, D_0077C464_x001186F8);
    D_0077C440_x001186F8.layer = layer;
    D_0077C440_x001186F8.addr = &D_0077C440_x001186F8;
    func_003B2850_x001186F8(&D_0077C440_x001186F8, 0x12C);
    if (func_003B3128_x001186F8(D_0077C5C0_x001186F8, 0, 0, &D_0077C440_x001186F8, 0x12C, D_0077C580_x001186F8, 4, 0, 0) < 0) {
        SignalSema_x001186F8(D_003F8668_x001186F8);
        return 0;
    }
    *(fileblk_x001186F8 *)fp = *(fileblk_x001186F8 *)(((unsigned int)&D_0077C440_x001186F8) | 0x20000000);
    if (*(int *)(D_003F8640_x001186F8 + 0x10) > 0)
        func_003B1F28_x001186F8(D_0045E228_x001186F8, fp->name);
    if (*(int *)(D_003F8640_x001186F8 + 0x10) > 0)
        func_003B1F28_x001186F8(D_0045E238_x001186F8, fp->size);
    if (*(int *)(D_003F8640_x001186F8 + 0x10) > 0)
        func_003B1F28_x001186F8(D_0045E248_x001186F8, fp->lsn);
    r = *(int *)(((unsigned int)D_0077C580_x001186F8) | 0x20000000);
    SignalSema_x001186F8(D_003F8668_x001186F8);
    return r;
}
__asm__("# noswap func_001186F8");
int sceCdLayerSearchFile_x001189F8(int a0, int a1, int a2) __asm__("func_001186F8");
int func_001189F8_x001189F8(int a0, int a1) __asm__("func_001189F8");
/* func_00398B90: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00150078.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001189F8_x001189F8(int a0, int a1) {
    return sceCdLayerSearchFile_x001189F8(a0, a1, 0);
}
extern char D_0045E260_x00118A18[] __asm__("D_0045DC70");
extern char D_0045E288_x00118A18[] __asm__("D_0045DC98");
extern void cmd_sem_init_x00118A18(void) __asm__("func_00118420");
extern int PollSema_x00118A18(int sema) __asm__("PollSema");
extern int SignalSema_x00118A18(int sema) __asm__("SignalSema");
extern void sceSifInitRpc_x00118A18(int mode) __asm__("sceSifInitRpc");
extern volatile int D_003F8668_x00118A18 __asm__("D_003EDDA8");
extern int D_003F8640_x00118A18[] __asm__("D_003EDD80");
extern int D_003F865C_x00118A18 __asm__("D_003EDD9C");
extern int D_003F867C_x00118A18 __asm__("D_003EDDBC");
extern int D_003F9810_x00118A18[] __asm__("D_003EEF50");
extern void func_003B1F28_x00118A18() __asm__("scePrintf");
extern int func_00398DA0_x00118A18(int mode) __asm__("func_00118C08");
extern int func_003B2F48_x00118A18(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
extern int D_003F8640_x00118A18[] __asm__("D_003EDD80");
extern void func_003B1F28_x00118A18() __asm__("scePrintf");
extern int func_003B2F48_x00118A18(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
int func_00118A18_x00118A18(int cmd) __asm__("func_00118A18");
/* func_00398BB0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00398bb0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118A18_x00118A18(int cmd)
{
    int i;
    int r;

    cmd_sem_init_x00118A18();
    r = PollSema_x00118A18(D_003F8668_x00118A18);
    if (D_003F8668_x00118A18 != r) {
        if (D_003F8640_x00118A18[4] > 0)
            func_003B1F28_x00118A18(D_0045E260_x00118A18, cmd, D_003F865C_x00118A18);
        return 0;
    }
    D_003F865C_x00118A18 = cmd;
    if (func_00398DA0_x00118A18(1)) {
        SignalSema_x00118A18(D_003F8668_x00118A18);
        return 0;
    }
    sceSifInitRpc_x00118A18(0);
    if (D_003F867C_x00118A18 < 0) {
        while (1) {
            if (func_003B2F48_x00118A18(D_003F9810_x00118A18, 0x80000595, 0) < 0) {
                if (D_003F8640_x00118A18[4] > 0)
                    func_003B1F28_x00118A18(D_0045E288_x00118A18);
                for (i = 0x100000; i != -1; i--)
                    ;
                continue;
            }
            if (D_003F9810_x00118A18[9] != 0)
                break;
            for (i = 0x100000; i != -1; i--)
                ;
        }
        D_003F867C_x00118A18 = 0;
    }
    return 1;
}
int SignalSema_x00118B70(int sema) __asm__("SignalSema");
typedef void (*sceSifEndFunc_x00118B70)(void *param);
typedef struct sceSifRpcClientData_x00118B70 {
    void *pkt;              
    int pid;                
    int sema;               
    unsigned int mode;      
    unsigned int command;   
    unsigned int buff;      
    unsigned int cbuff;     
    sceSifEndFunc_x00118B70 endFunc;  
    void *endParam;         
    unsigned int serve;     
} sceSifRpcClientData_x00118B70;
extern int _sceCd_ncmd_semid_x00118B70 __asm__("D_003EDDA8");
extern int _sceCd_ncmdrdata_x00118B70[] __asm__("D_003EDE00");
extern sceSifRpcClientData_x00118B70 _sceCd_cd_ncmd_x00118B70 __asm__("D_003EEF50");
int _sceCd_ncmd_prechk_x00118B70(int cmd) __asm__("func_00118A18");
extern int _sceCd_ncmd_semid_x00118B70 __asm__("D_003EDDA8");
extern int _sceCd_ncmdrdata_x00118B70[32] __asm__("D_003EDE00");
extern sceSifRpcClientData_x00118B70 _sceCd_cd_ncmd_x00118B70 __asm__("D_003EEF50");
extern void (*poff_cbfunc_x00118B70)(int) __asm__("poff_cbfunc");
int _sceCd_ncmd_prechk_x00118B70(int cmd) __asm__("func_00118A18");
int func_00118B70_x00118B70(void) __asm__("func_00118B70");
/* sceCdNcmdDiskReady: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/cdvd000.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118B70_x00118B70(void)
{
    int *p;
    int v;
    if (_sceCd_ncmd_prechk_x00118B70(2) == 0) {
        return 0;
    }
    p = _sceCd_ncmdrdata_x00118B70;
    if (sceSifCallRpc(&_sceCd_cd_ncmd_x00118B70, 0xE, 0, 0, 0, p, 4, 0, 0) < 0) {
        SignalSema_x00118B70(_sceCd_ncmd_semid_x00118B70);
        return 0;
    }
    v = *(int *)((int)p | 0x20000000);
    SignalSema_x00118B70(_sceCd_ncmd_semid_x00118B70);
    return v;
}
extern int sceSifCheckStatRpc_x00118C08(void *cd) __asm__("func_0010E3A8");
extern int D_003F8640_x00118C08[] __asm__("D_003EDD80");
extern void func_003B1F28_x00118C08(const char *fmt) __asm__("scePrintf");
extern void DelayThread_x00118C08(int usec) __asm__("func_0010B2D8");
extern char D_003F9810_x00118C08 __asm__("D_003EEF50");
extern int D_003F8674_x00118C08 __asm__("D_003EDDB4");
extern int D_003F8640_x00118C08[] __asm__("D_003EDD80");
extern char D_0045E2A0_x00118C08[] __asm__("D_0045DCB0");
extern void func_003B1F28_x00118C08(const char *fmt) __asm__("scePrintf");
extern void DelayThread_x00118C08(int usec) __asm__("func_0010B2D8");
extern volatile int D_003F8674_x00118C08 __asm__("D_003EDDB4");
extern volatile int D_003F8674_x00118C08 __asm__("D_003EDDB4");
int func_00118C08_x00118C08(int mode) __asm__("func_00118C08");
/* func_00398DA0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003984d8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118C08_x00118C08(int mode)
{
    if (mode == 0) {
        if (D_003F8640_x00118C08[4] > 0)
            func_003B1F28_x00118C08(D_0045E2A0_x00118C08);
        while (D_003F8674_x00118C08 || sceSifCheckStatRpc_x00118C08(&D_003F9810_x00118C08))
            DelayThread_x00118C08(4000);
        return 0;
    }
    if (D_003F8674_x00118C08 || sceSifCheckStatRpc_x00118C08(&D_003F9810_x00118C08))
        return 1;
    return 0;
}
extern int sceSifCheckStatRpc_x00118CA8(void *cd) __asm__("func_0010E3A8");
extern char D_003FA1C0_x00118CA8 __asm__("D_003EF900");
extern int D_003F8640_x00118CA8[] __asm__("D_003EDD80");
extern char D_0045E2B0_x00118CA8[] __asm__("D_0045DCC0");
extern void func_003B1F28_x00118CA8(const char *fmt) __asm__("scePrintf");
extern void DelayThread_x00118CA8(int usec) __asm__("func_0010B2D8");
extern int D_003F8640_x00118CA8[] __asm__("D_003EDD80");
extern void func_003B1F28_x00118CA8(const char *fmt) __asm__("scePrintf");
extern void DelayThread_x00118CA8(int usec) __asm__("func_0010B2D8");
int func_00118CA8_x00118CA8(int mode) __asm__("func_00118CA8");
/* sceCdSyncS: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003984d8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118CA8_x00118CA8(int mode)
{
    if (mode == 0) {
        if (D_003F8640_x00118CA8[4] > 0)
            func_003B1F28_x00118CA8(D_0045E2B0_x00118CA8);
        while (sceSifCheckStatRpc_x00118CA8(&D_003FA1C0_x00118CA8))
            DelayThread_x00118CA8(4000);
        return 0;
    }
    return sceSifCheckStatRpc_x00118CA8(&D_003FA1C0_x00118CA8);
}
extern void cmd_sem_init_x00118D18(void) __asm__("func_00118420");
extern int PollSema_x00118D18(int sema) __asm__("PollSema");
extern int SignalSema_x00118D18(int sema) __asm__("SignalSema");
extern void sceSifInitRpc_x00118D18(int mode) __asm__("sceSifInitRpc");
extern char D_0045E2C0_x00118D18[] __asm__("D_0045DCD0");
extern char D_0045E2E8_x00118D18[] __asm__("D_0045DCF8");
extern int D_003F8640_x00118D18[] __asm__("D_003EDD80");
extern void func_003B1F28_x00118D18() __asm__("scePrintf");
extern int func_003B2F48_x00118D18(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
extern volatile int D_003F866C_x00118D18 __asm__("D_003EDDAC");
extern int D_003F8640_x00118D18[] __asm__("D_003EDD80");
extern int D_003F8658_x00118D18 __asm__("D_003EDD98");
extern int D_003F8694_x00118D18 __asm__("D_003EDDD4");
extern int D_003FA1C0_x00118D18[] __asm__("D_003EF900");
extern void func_003B1F28_x00118D18() __asm__("scePrintf");
extern int sceCdSyncS_x00118D18(int mode) __asm__("func_00118CA8");
extern int func_003B2F48_x00118D18(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
int func_00118D18_x00118D18(int cmd) __asm__("func_00118D18");
/* func_00398EB0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00398bb0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118D18_x00118D18(int cmd)
{
    int i;
    int r;

    cmd_sem_init_x00118D18();
    r = PollSema_x00118D18(D_003F866C_x00118D18);
    if (D_003F866C_x00118D18 != r) {
        if (D_003F8640_x00118D18[4] > 0)
            func_003B1F28_x00118D18(D_0045E2C0_x00118D18, cmd, D_003F8658_x00118D18);
        return 0;
    }
    D_003F8658_x00118D18 = cmd;
    if (sceCdSyncS_x00118D18(1)) {
        SignalSema_x00118D18(D_003F866C_x00118D18);
        return 0;
    }
    sceSifInitRpc_x00118D18(0);
    if (D_003F8694_x00118D18 < 0) {
        while (1) {
            if (func_003B2F48_x00118D18(D_003FA1C0_x00118D18, 0x80000593, 0) < 0) {
                if (D_003F8640_x00118D18[4] > 0)
                    func_003B1F28_x00118D18(D_0045E2E8_x00118D18);
                for (i = 0x100000; i != -1; i--)
                    ;
                continue;
            }
            if (D_003FA1C0_x00118D18[9] != 0)
                break;
            for (i = 0x100000; i != -1; i--)
                ;
        }
        D_003F8694_x00118D18 = 0;
    }
    return 1;
}
extern int D_004878A8_x00118E70 __asm__("D_003EDDA8");
extern volatile int D_004878AC_x00118E70 __asm__("D_003EDDAC");
extern char D_00487900_x00118E70[] __asm__("D_003EDE00");
extern char D_00487980_x00118E70[0x1000] __asm__("D_003EDE80");
extern char D_00488A50_x00118E70[] __asm__("D_003EEF50");
extern char D_00488A80_x00118E70[] __asm__("D_003EEF80");
extern char D_00488EC0_x00118E70[] __asm__("D_003EF3C0");
extern char D_00489400_x00118E70[] __asm__("D_003EF900");
int func_00118E70_x00118E70(int cmd,int *out) __asm__("func_00118E70");
/* _sceCdSC: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libcdvd/func_00119180.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118E70_x00118E70(int cmd,int *out){
 int v;
 if(cmd!=0x8001){
  if(cmd!=0x8003){
   if(cmd!=0x8002){
    if(cmd!=0x8004){
     if(cmd!=0x8011){
      if(cmd!=0x8013){
       if(cmd!=0x8012){
        if(cmd==0x8014)v=(int)D_00489400_x00118E70; else v=0;
       }else v=(int)D_00488EC0_x00118E70;
      }else v=(int)D_00488A80_x00118E70;
     }else { v=D_004878AC_x00118E70; *out=v; goto done; }
    }else v=(int)D_00488A50_x00118E70;
   }else v=(int)((char*)D_00487980_x00118E70);
  }else v=(int)D_00487900_x00118E70;
 }else v=D_004878A8_x00118E70;
 *out=v; done: return 1;
}
typedef struct { int pad[9]; void *serve; int pad2[6]; } sceSifClientData_x00118F20;
extern int D_002C6750_x00118F20 __asm__("D_003EDD90");
extern volatile int D_002C6760_x00118F20 __asm__("D_003EDDA0");
extern volatile int D_002C6764_x00118F20 __asm__("D_003EDDA4");
extern volatile int D_002C6768_x00118F20 __asm__("D_003EDDA8");
extern volatile int D_002C676C_x00118F20 __asm__("D_003EDDAC");
extern int D_002C6778_x00118F20 __asm__("D_003EDDB8");
extern int D_002C677C_x00118F20 __asm__("D_003EDDBC");
extern int D_002C6784_x00118F20 __asm__("D_003EDDC4");
extern int D_002C6788_x00118F20 __asm__("D_003EDDC8");
extern int D_002C678C_x00118F20 __asm__("D_003EDDCC");
extern int D_002C6790_x00118F20 __asm__("D_003EDDD0");
extern int D_002C6794_x00118F20 __asm__("D_003EDDD4");
extern int D_002C6798_x00118F20 __asm__("D_003EDDD8");
extern int D_002C679C_x00118F20 __asm__("D_003EDDDC");
extern sceSifClientData_x00118F20 D_004504E8_x00118F20 __asm__("D_00478F28");
extern int D_00450540_x00118F20[] __asm__("D_00478F80");
extern int D_002C7940_x00118F20[] __asm__("D_003EEF80");
extern char D_002AB570_x00118F20[] __asm__("D_0045DD10");
extern char D_002AB590_x00118F20[] __asm__("D_0045DD30");
int func_00236960_x00118F20(const char *, ...) __asm__("scePrintf");
int sceCdSyncS_x00118F20(int) __asm__("func_00118CA8");
void sceSifInitRpc_x00118F20(unsigned int) __asm__("sceSifInitRpc");
int sceSifBindRpc_x00118F20(sceSifClientData_x00118F20 *, unsigned int, unsigned int) __asm__("sceSifBindRpc");
void sceSifWriteBackDCache_x00118F20(void *, int) __asm__("func_0010D770");
int sceSifCallRpc_x00118F20(sceSifClientData_x00118F20 *, int, unsigned int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
void cdvd_exit_x00118F20(void) __asm__("func_00118508");
void cmd_sem_init_x00118F20(void) __asm__("func_00118420");
int PowerOffCB_x00118F20(void) __asm__("func_00118680");
static __inline__ void nopdelay_x00118F20(void)
{
    int i = 0x100000;
    while (i--) ;
}
int func_00118F20_x00118F20(int mode) __asm__("func_00118F20");
/* sceCdInit: from https://github.com/Komasia/sly2-decomp (src/lib/sceCdInit.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00118F20_x00118F20(int mode)
{
    int r;
    int *p;
    if (sceCdSyncS_x00118F20(1)) return 0;
    sceSifInitRpc_x00118F20(0);
    D_002C678C_x00118F20 = -1;
    D_002C677C_x00118F20 = -1;
    D_002C6794_x00118F20 = -1;
    D_002C6790_x00118F20 = -1;
    D_002C6798_x00118F20 = -1;
    D_002C6788_x00118F20 = -1;
    D_002C6764_x00118F20 = 1;
    D_002C6778_x00118F20 = 0;
    *(volatile int *)&D_002C679C_x00118F20 = D_002C679C_x00118F20 + 1;
    while (1) {
        int b = sceSifBindRpc_x00118F20(&D_004504E8_x00118F20, 0x80000592, 0);
        if (b < 0) {
            if (D_002C6750_x00118F20 > 0) func_00236960_x00118F20(D_002AB570_x00118F20, b, D_002C679C_x00118F20);
            nopdelay_x00118F20();
            continue;
        }
        if (D_004504E8_x00118F20.serve != 0) {
            D_002C6798_x00118F20 = 0;
            D_00450540_x00118F20[0] = mode;
            sceSifWriteBackDCache_x00118F20(D_00450540_x00118F20, 4);
            p = D_002C7940_x00118F20;
            if (sceSifCallRpc_x00118F20(&D_004504E8_x00118F20, 0, 0, D_00450540_x00118F20, 4, p, 0x10, 0, 0) < 0) {
                D_002C6764_x00118F20 = 0;
                return 0;
            }
            break;
        }
        nopdelay_x00118F20();
    }
    {
         
        int b = *(int *)((unsigned int)&p[1] | 0x20000000);
        int c = *(int *)((unsigned int)&p[2] | 0x20000000);
        int a = *(int *)((unsigned int)&p[3] | 0x20000000);
        r = 1;
        if (a == 0xFF) {
        } else if (a == 0xFE) {
            D_002C6750_x00118F20 = 1;
        } else if (b / 256 < 2 || c / 256 < 2) {
            r = 2;
        }
    }
    D_002C6764_x00118F20 = 0;
    switch (mode) {
    case 5:
        if (D_002C6750_x00118F20 > 0) func_00236960_x00118F20(D_002AB590_x00118F20);
        cdvd_exit_x00118F20();
        D_002C6768_x00118F20 = -1;
        D_002C676C_x00118F20 = -1;
        D_002C6760_x00118F20 = -1;
        D_002C6784_x00118F20 = 0;
        break;
    case 0: case 1:
    default:
        cmd_sem_init_x00118F20();
        PowerOffCB_x00118F20();
        D_002C6784_x00118F20 = 1;
        break;
    }
    return r;
}
__asm__("# rebind func_00118F20 0x00118F20");
int DIntr_x00119208(void) __asm__("DI");
int EIntr_x00119208(void) __asm__("EI");
typedef unsigned int u_int_x00119208;
extern char D_003F8640_x00119208[] __asm__("D_003EDD80");
extern int D_003F8680_x00119208 __asm__("D_003EDDC0");
extern int D_003F8690_x00119208 __asm__("D_003EDDD0");
extern volatile int D_003F866C_x00119208 __asm__("D_003EDDAC");
extern int D_0077C610_x00119208[] __asm__("D_00478F50");
extern int D_0077C650_x00119208[] __asm__("D_00478F90");
extern int D_003F9840_x00119208[] __asm__("D_003EEF80");
extern char D_0045E330_x00119208[] __asm__("D_0045DD40");
extern char D_0045E348_x00119208[] __asm__("D_0045DD58");
extern char D_0045E368_x00119208[] __asm__("D_0045DD78");
extern void func_003B1F28_x00119208() __asm__("scePrintf");
extern void cmd_sem_init_x00119208(void) __asm__("func_00118420");
extern int PollSema_x00119208(int sema) __asm__("PollSema");
extern int SignalSema_x00119208(int sema) __asm__("SignalSema");
extern int sceCdSyncS_x00119208(int mode) __asm__("func_00118CA8");
extern void sceSifInitRpc_x00119208(int mode) __asm__("sceSifInitRpc");
extern int func_003B2F48_x00119208(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
extern void func_003B2850_x00119208(void *p, int size) __asm__("func_0010D770");
int func_003B3128_x00119208() __asm__("sceSifCallRpc");
int func_00119208_x00119208(int mode) __asm__("func_00119208");
/* sceCdDiskReady_old: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003992f0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119208_x00119208(int mode)
{
    int i;
    int r;
    int b;

    if (*(int *)(D_003F8640_x00119208 + 0x10) > 0)
        func_003B1F28_x00119208(D_0045E330_x00119208);
    i = DIntr_x00119208();
    D_003F8680_x00119208 = 1;
    if (i)
        EIntr_x00119208();
    cmd_sem_init_x00119208();
    r = PollSema_x00119208(D_003F866C_x00119208);
    if (D_003F866C_x00119208 != r)
        return 6;
    if (sceCdSyncS_x00119208(1)) {
        SignalSema_x00119208(D_003F866C_x00119208);
        return (mode != 8) ? 6 : -1;
    }
    do {
        sceSifInitRpc_x00119208(0);
        b = D_003F8690_x00119208;
    } while (0);
    if (b < 0) {
        while (1) {
            if (func_003B2F48_x00119208(D_0077C610_x00119208, 0x8000059A, 0) < 0) {
                if (*(int *)(D_003F8640_x00119208 + 0x10) > 0)
                    func_003B1F28_x00119208(D_0045E348_x00119208);
                for (i = 0x100000; i != -1; i--)
                    ;
                continue;
            }
            if (D_0077C610_x00119208[9] != 0)
                break;
            for (i = 0x100000; i != -1; i--)
                ;
        }
        D_003F8690_x00119208 = 0;
    }
    D_0077C650_x00119208[0] = mode;
    func_003B2850_x00119208(D_0077C650_x00119208, 4);
    if (func_003B3128_x00119208(D_0077C610_x00119208, 0, 0, D_0077C650_x00119208, 4, D_003F9840_x00119208, 4, 0, 0) < 0) {
        SignalSema_x00119208(D_003F866C_x00119208);
        return (mode != 8) ? 6 : -1;
    }
    if (*(int *)(D_003F8640_x00119208 + 0x10) > 0)
        func_003B1F28_x00119208(D_0045E368_x00119208);
    r = *(int *)((u_int_x00119208)D_003F9840_x00119208 | 0x20000000);
    SignalSema_x00119208(D_003F866C_x00119208);
    return r;
}
__asm__("# noswap func_00119208");
int DIntr_x00119420(void) __asm__("DI");
int EIntr_x00119420(void) __asm__("EI");
typedef unsigned int u_int_x00119420;
extern char D_003F8640_x00119420[] __asm__("D_003EDD80");
extern int D_003F8680_x00119420 __asm__("D_003EDDC0");
extern int D_003F8690_x00119420 __asm__("D_003EDDD0");
extern volatile int D_003F8670_x00119420 __asm__("D_003EDDB0");
extern int D_0077C610_x00119420[] __asm__("D_00478F50");
extern int D_0077C650_x00119420[] __asm__("D_00478F90");
extern int D_003FA0C0_x00119420[] __asm__("D_003EF800");
extern char D_0045E348_x00119420[] __asm__("D_0045DD58");
extern char D_0045E368_x00119420[] __asm__("D_0045DD78");
extern char D_0045E380_x00119420[] __asm__("D_0045DD90");
extern void func_003B1F28_x00119420() __asm__("scePrintf");
extern void cmd_sem_init_x00119420(void) __asm__("func_00118420");
extern int PollSema_x00119420(int sema) __asm__("PollSema");
extern int SignalSema_x00119420(int sema) __asm__("SignalSema");
extern void sceSifInitRpc_x00119420(int mode) __asm__("sceSifInitRpc");
extern int sceCdDiskReady_old_x00119420(int mode) __asm__("func_00119208");
extern int func_003B2F48_x00119420(void *cd, unsigned int sid, int mode) __asm__("sceSifBindRpc");
extern void func_003B2850_x00119420(void *p, int size) __asm__("func_0010D770");
int func_003B3128_x00119420() __asm__("sceSifCallRpc");
int func_00119420_x00119420(int mode) __asm__("func_00119420");
/* sceCdDiskReady: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399508.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119420_x00119420(int mode)
{
    int i;
    int n;
    int r;
    int m;

    if (*(int *)(D_003F8640_x00119420 + 0x10) > 0)
        func_003B1F28_x00119420(D_0045E380_x00119420);
    cmd_sem_init_x00119420();
    r = PollSema_x00119420(D_003F8670_x00119420);
    if (D_003F8670_x00119420 != r)
        return (mode != 8) ? 6 : -1;
    sceSifInitRpc_x00119420(0);
    n = 0;
    if (D_003F8690_x00119420 < 0) {
        D_003F8690_x00119420++;    
        D_003F8690_x00119420--;
        while (1) {
            if (func_003B2F48_x00119420(D_0077C610_x00119420, 0x8000059C, 0) < 0) {
                if (*(int *)(D_003F8640_x00119420 + 0x10) > 0)
                    func_003B1F28_x00119420(D_0045E348_x00119420);
                for (i = 0x100000; i != -1; i--)
                    ;
                continue;
            }
            if (D_0077C610_x00119420[9] != 0)
                break;
            if (n >= 0x11) {
                SignalSema_x00119420(D_003F8670_x00119420);
                return sceCdDiskReady_old_x00119420(mode);
            }
            m = n + 1;
            for (i = 0x100000; i != -1; i--)
                ;
            n = m;
        }
        D_003F8690_x00119420 = 0;
    }
    i = DIntr_x00119420();
    D_003F8680_x00119420 = 0;
    if (i)
        EIntr_x00119420();
    D_0077C650_x00119420[0] = mode;
    func_003B2850_x00119420(D_0077C650_x00119420, 4);
    if (func_003B3128_x00119420(D_0077C610_x00119420, 0, 0, D_0077C650_x00119420, 4, D_003FA0C0_x00119420, 4, 0, 0) < 0) {
        SignalSema_x00119420(D_003F8670_x00119420);
        return (mode != 8) ? 6 : -1;
    }
    if (*(int *)(D_003F8640_x00119420 + 0x10) > 0)
        func_003B1F28_x00119420(D_0045E368_x00119420);
    r = *(int *)((u_int_x00119420)D_003FA0C0_x00119420 | 0x20000000);
    SignalSema_x00119420(D_003F8670_x00119420);
    return r;
}
__asm__("# noswap func_00119420");
int SignalSema_x00119640(int sema) __asm__("SignalSema");
void scePrintf_x00119640(char *fmt, ...) __asm__("scePrintf");
typedef void (*sceSifEndFunc_x00119640)(void *param);
typedef struct sceSifRpcClientData_x00119640 {
    void *pkt;              
    int pid;                
    int sema;               
    unsigned int mode;      
    unsigned int command;   
    unsigned int buff;      
    unsigned int cbuff;     
    sceSifEndFunc_x00119640 endFunc;  
    void *endParam;         
    unsigned int serve;     
} sceSifRpcClientData_x00119640;
void sceSifWriteBackDCache_x00119640(void *addr, int len) __asm__("func_0010D770");
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode_x00119640;
extern int SCE_CD_debug_x00119640 __asm__("D_003EDD90");
extern int _sceCd_ncmd_semid_x00119640 __asm__("D_003EDDA8");
extern volatile int _sceCd_ee_read_mode_x00119640 __asm__("D_003EDDB8");
extern volatile int sceCdCbfunc_num_x00119640 __asm__("D_003EDDE0");
extern int _sceCd_ncmdsdata_x00119640[] __asm__("D_003EDE80");
extern int _sceCd_rd_intr_data_x00119640[] __asm__("D_003EEE80");
extern int _sceCd_Read_cur_pos_x00119640[] __asm__("D_003EEF40");
extern sceSifRpcClientData_x00119640 _sceCd_cd_ncmd_x00119640 __asm__("D_003EEF50");
int _sceCd_ncmd_prechk_x00119640(int cmd) __asm__("func_00118A18");
void _sceCd_cd_read_intr_x00119640(void *pkt) __asm__("func_00118368");
int sceCdNcmdDiskReady_x00119640(void) __asm__("func_00118B70");
typedef struct {  
    int lsn;
    int sectors;
    void *buf;
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
    int *intr_data;
    int *cur_pos;
} CdReadCmd_x00119640;
extern volatile int _sceCd_c_cb_sem_x00119640 __asm__("D_003EDDB4");
extern char ext_str0_x00119640[] __asm__("D_0045DDC0");
extern char ext_str1_x00119640[] __asm__("D_0045DDA8");
int func_00119640_x00119640(int lsn, int sectors, void *buf, sceCdRMode_x00119640 *mode) __asm__("func_00119640");
/* sceCdRead: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/cdvd005.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119640_x00119640(int lsn, int sectors, void *buf, sceCdRMode_x00119640 *mode)
{
    CdReadCmd_x00119640 *sd = (CdReadCmd_x00119640 *)_sceCd_ncmdsdata_x00119640;
    int size;

    if ((_sceCd_ee_read_mode_x00119640 & 1) == 0) {
        if (sceCdNcmdDiskReady_x00119640() == 6) {
            return 0;
        }
    }
    if (_sceCd_ncmd_prechk_x00119640(4) == 0) {
        return 0;
    }
    sd->lsn = lsn;
    sd->sectors = sectors;
    sd->buf = buf;
    sd->trycount = mode->trycount;
    sd->spindlctrl = mode->spindlctrl;
    sd->datapattern = mode->datapattern;
    sd->intr_data = _sceCd_rd_intr_data_x00119640;
    sd->cur_pos = _sceCd_Read_cur_pos_x00119640;
    switch (mode->datapattern) {
    case 1:
        size = sectors * 2328;
        break;
    case 2:
        size = sectors * 2340;
        break;
    case 0:
    default:
        size = sectors * 2048;
        break;
    }
    _sceCd_Read_cur_pos_x00119640[0] = 0;
    if ((_sceCd_ee_read_mode_x00119640 & 2) == 0) {
        sceSifWriteBackDCache_x00119640(buf, size);
    }
    sceSifWriteBackDCache_x00119640(_sceCd_rd_intr_data_x00119640, 144);
    sceSifWriteBackDCache_x00119640(sd, 24);
    sceSifWriteBackDCache_x00119640(_sceCd_Read_cur_pos_x00119640, 4);
    if (SCE_CD_debug_x00119640 > 0) {
        scePrintf_x00119640(ext_str1_x00119640);
    }
    sceCdCbfunc_num_x00119640 = 1;
    _sceCd_c_cb_sem_x00119640 = 1;
    if (sceSifCallRpc(&_sceCd_cd_ncmd_x00119640, 1, 1, sd, 24, 0, 0, _sceCd_cd_read_intr_x00119640,
                      _sceCd_rd_intr_data_x00119640) < 0) {
        sceCdCbfunc_num_x00119640 = 0;
        _sceCd_c_cb_sem_x00119640 = 0;
        SignalSema_x00119640(*(volatile int *)&_sceCd_ncmd_semid_x00119640);
        return 0;
    }
    if (SCE_CD_debug_x00119640 > 0) {
        scePrintf_x00119640(ext_str0_x00119640);
    }
    return 1;
}
int SignalSema_x00119820(int sema) __asm__("SignalSema");
typedef void (*sceSifEndFunc_x00119820)(void *param);
typedef struct sceSifRpcClientData_x00119820 {
    void *pkt;              
    int pid;                
    int sema;               
    unsigned int mode;      
    unsigned int command;   
    unsigned int buff;      
    unsigned int cbuff;     
    sceSifEndFunc_x00119820 endFunc;  
    void *endParam;         
    unsigned int serve;     
} sceSifRpcClientData_x00119820;
void sceSifWriteBackDCache_x00119820(void *addr, int len) __asm__("func_0010D770");
extern int _sceCd_ncmd_semid_x00119820 __asm__("D_003EDDA8");
extern volatile int sceCdCbfunc_num_x00119820 __asm__("D_003EDDE0");
extern int _sceCd_ncmdsdata_x00119820[] __asm__("D_003EDE80");
extern sceSifRpcClientData_x00119820 _sceCd_cd_ncmd_x00119820 __asm__("D_003EEF50");
int _sceCd_ncmd_prechk_x00119820(int cmd) __asm__("func_00118A18");
void _sceCd_cd_callback_x00119820(void *data) __asm__("func_00118158");
int sceCdNcmdDiskReady_x00119820(void) __asm__("func_00118B70");
extern volatile int _sceCd_c_cb_sem_x00119820 __asm__("D_003EDDB4");
int func_00119820_x00119820(int lsn) __asm__("func_00119820");
/* sceCdSeek: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/libcdvd_22f3d0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119820_x00119820(int lsn)
{
    int *sd = _sceCd_ncmdsdata_x00119820;

    if (sceCdNcmdDiskReady_x00119820() == 6) {
        return 0;
    }
    if (_sceCd_ncmd_prechk_x00119820(9) == 0) {
        return 0;
    }
    *sd = lsn;
    sceSifWriteBackDCache_x00119820(sd, 4);
    sceCdCbfunc_num_x00119820 = 4;
    _sceCd_c_cb_sem_x00119820 = 1;
    if (sceSifCallRpc(&_sceCd_cd_ncmd_x00119820, 5, 1, sd, 4, 0, 0, _sceCd_cd_callback_x00119820, &sceCdCbfunc_num_x00119820) <
        0) {
        sceCdCbfunc_num_x00119820 = 0;
        _sceCd_c_cb_sem_x00119820 = 0;
        SignalSema_x00119820(*(volatile int *)&_sceCd_ncmd_semid_x00119820);
        return 0;
    }
    return 1;
}
int SignalSema_x001198F0(int sema) __asm__("SignalSema");
typedef void (*sceSifEndFunc_x001198F0)(void *param);
typedef struct sceSifRpcClientData_x001198F0 {
    void *pkt;              
    int pid;                
    int sema;               
    unsigned int mode;      
    unsigned int command;   
    unsigned int buff;      
    unsigned int cbuff;     
    sceSifEndFunc_x001198F0 endFunc;  
    void *endParam;         
    unsigned int serve;     
} sceSifRpcClientData_x001198F0;
extern int _sceCd_scmd_semid_x001198F0 __asm__("D_003EDDAC");
extern int _sceCd_scmdrdata_x001198F0[] __asm__("D_003EEF80");
extern sceSifRpcClientData_x001198F0 _sceCd_cd_scmd_x001198F0 __asm__("D_003EF900");
int _sceCd_scmd_prechk_x001198F0(int cmd) __asm__("func_00118D18");
int func_001198F0_x001198F0(void) __asm__("func_001198F0");
/* sceCdGetError: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/cdvd015.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001198F0_x001198F0(void)
{
    int *p;
    int v;
    if (_sceCd_scmd_prechk_x001198F0(3) == 0) {
        return -1;
    }
    p = _sceCd_scmdrdata_x001198F0;
    if (sceSifCallRpc(&_sceCd_cd_scmd_x001198F0, 4, 0, 0, 0, p, 4, 0, 0) < 0) {
        SignalSema_x001198F0(_sceCd_scmd_semid_x001198F0);
        return -1;
    }
    v = *(int *)((int)p | 0x20000000);
    SignalSema_x001198F0(_sceCd_scmd_semid_x001198F0);
    return v;
}
typedef unsigned int u_int_x00119988;
extern char D_003FA1C0_x00119988 __asm__("D_003EF900");
extern int D_003F9840_x00119988[] __asm__("D_003EEF80");
extern int D_003F866C_x00119988 __asm__("D_003EDDAC");
extern int D_003F8640_x00119988[] __asm__("D_003EDD80");
extern char D_0045E3C0_x00119988[] __asm__("D_0045DDD0");
extern int func_00398EB0_x00119988(int cmd) __asm__("func_00118D18");
extern int func_003B3128_x00119988(void *cd, int rno, int mode, void *sbuf, int ssize, void *rbuf, int rsize, void *efunc, void *epara) __asm__("sceSifCallRpc");
extern int SignalSema_x00119988(int sema) __asm__("SignalSema");
extern void func_003B1F28_x00119988(const char *fmt) __asm__("scePrintf");
int func_00119988_x00119988(void) __asm__("func_00119988");
/* func_00399A68: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399a68.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119988_x00119988(void)
{
    int *rd;
    int r;

    if (!func_00398EB0_x00119988(2))
        return -1;
    rd = D_003F9840_x00119988;
    if (func_003B3128_x00119988(&D_003FA1C0_x00119988, 12, 0, 0, 0, rd, 4, 0, 0) < 0) {
        SignalSema_x00119988(D_003F866C_x00119988);
        return -1;
    }
    r = *(int *)((u_int_x00119988)rd | 0x20000000);
    SignalSema_x00119988(D_003F866C_x00119988);
    if (D_003F8640_x00119988[4] >= 2)
        func_003B1F28_x00119988(D_0045E3C0_x00119988);
    return r;
}
int SignalSema_x00119A40(int sema) __asm__("SignalSema");
typedef void (*sceSifEndFunc_x00119A40)(void *param);
typedef struct sceSifRpcClientData_x00119A40 {
    void *pkt;              
    int pid;                
    int sema;               
    unsigned int mode;      
    unsigned int command;   
    unsigned int buff;      
    unsigned int cbuff;     
    sceSifEndFunc_x00119A40 endFunc;  
    void *endParam;         
    unsigned int serve;     
} sceSifRpcClientData_x00119A40;
extern int _sceCd_scmd_semid_x00119A40 __asm__("D_003EDDAC");
extern volatile int sceCdCbfunc_num_x00119A40 __asm__("D_003EDDE0");
extern int _sceCd_scmdrdata_x00119A40[] __asm__("D_003EEF80");
extern sceSifRpcClientData_x00119A40 _sceCd_cd_scmd_x00119A40 __asm__("D_003EF900");
int _sceCd_scmd_prechk_x00119A40(int cmd) __asm__("func_00118D18");
int func_00119A40_x00119A40(void) __asm__("func_00119A40");
/* sceCdBreak: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libcdvd/libcdvd_22f538.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119A40_x00119A40(void)
{
    int *p;
    int v;
    if (_sceCd_scmd_prechk_x00119A40(0x1E) == 0) {
        return 0;
    }
    p = _sceCd_scmdrdata_x00119A40;
    sceCdCbfunc_num_x00119A40 = 8;
    if (sceSifCallRpc(&_sceCd_cd_scmd_x00119A40, 0x16, 0, 0, 0, p, 4, 0, 0) < 0) {
        SignalSema_x00119A40(*(volatile int *)&_sceCd_scmd_semid_x00119A40);
        sceCdCbfunc_num_x00119A40 = 0;
        return 0;
    }
    sceCdCbfunc_num_x00119A40 = 0;
    v = *(int *)((int)p | 0x20000000);
    SignalSema_x00119A40(*(volatile int *)&_sceCd_scmd_semid_x00119A40);
    return v;
}
typedef unsigned int u_int_x00119AF8;
extern char D_003FA1C0_x00119AF8 __asm__("D_003EF900");
extern int D_003F9840_x00119AF8[] __asm__("D_003EEF80");
extern int D_003F9C80_x00119AF8[] __asm__("D_003EF3C0");
extern int D_003F866C_x00119AF8 __asm__("D_003EDDAC");
extern int D_003FA1E8_x00119AF8 __asm__("D_003EF928");
extern int D_003FA1EC_x00119AF8 __asm__("D_003EF92C");
extern int D_003FA1F0_x00119AF8 __asm__("D_003EF930");
extern int func_00398EB0_x00119AF8(int cmd) __asm__("func_00118D18");
extern void func_003B2850_x00119AF8(void *p, int size) __asm__("func_0010D770");
extern int func_003B3128_x00119AF8(void *cd, int rno, int mode, void *sbuf, int ssize, void *rbuf, int rsize, void *efunc, void *epara) __asm__("sceSifCallRpc");
extern int SignalSema_x00119AF8(int sema) __asm__("SignalSema");
int func_00119AF8_x00119AF8(int media) __asm__("func_00119AF8");
/* func_00399BD8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399bd8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119AF8_x00119AF8(int media)
{
    int *sd = D_003F9C80_x00119AF8;

    int r;

    if (!func_00398EB0_x00119AF8(0x22))
        return 0;
    D_003F9C80_x00119AF8[0] = media;
    func_003B2850_x00119AF8(sd, 4);

    if (func_003B3128_x00119AF8(&D_003FA1C0_x00119AF8, D_003FA1E8_x00119AF8, 0, sd, D_003FA1EC_x00119AF8,
                      D_003F9840_x00119AF8, D_003FA1F0_x00119AF8, 0, 0) < 0) {
        SignalSema_x00119AF8(D_003F866C_x00119AF8);
        return 0;
    }
    r = *(int *)((u_int_x00119AF8)D_003F9840_x00119AF8 | 0x20000000);
    SignalSema_x00119AF8(D_003F866C_x00119AF8);
    return r;
}
s32 sceCdChgSys(void) {
    scePrintf(&D_0045DDE0);
    return 2;
}
typedef unsigned int u_int_x00119BF0;
typedef struct { char b[8]; } T8_x00119BF0;
extern char D_003FA1C0_x00119BF0 __asm__("D_003EF900");
extern int D_003F9840_x00119BF0[] __asm__("D_003EEF80");
extern int D_003F866C_x00119BF0 __asm__("D_003EDDAC");
extern int func_00398EB0_x00119BF0(int cmd) __asm__("func_00118D18");
extern int func_003B3128_x00119BF0(void *cd, int rno, int mode, void *sbuf, int ssize, void *rbuf, int rsize, void *efunc, void *epara) __asm__("sceSifCallRpc");
extern int SignalSema_x00119BF0(int sema) __asm__("SignalSema");
int func_00119BF0_x00119BF0(void *rtc) __asm__("func_00119BF0");
/* func_00399CB0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399cb0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119BF0_x00119BF0(void *rtc)
{
    int r;

    if (!func_00398EB0_x00119BF0(15))
        return 0;
    if (func_003B3128_x00119BF0(&D_003FA1C0_x00119BF0, 1, 0, 0, 0, D_003F9840_x00119BF0, 16, 0, 0) < 0) {
        SignalSema_x00119BF0(D_003F866C_x00119BF0);
        return 0;
    }
    *(T8_x00119BF0 *)rtc = *(T8_x00119BF0 *)((u_int_x00119BF0)&D_003F9840_x00119BF0[1] | 0x20000000);
    r = *(int *)((u_int_x00119BF0)D_003F9840_x00119BF0 | 0x20000000);
    SignalSema_x00119BF0(D_003F866C_x00119BF0);
    return r;
}
