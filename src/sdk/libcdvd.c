#include "common.h"

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0045DDE0;

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010D3A8(s32, s32 *, s32); /* extern */
extern s32 D_003EDDA4;
extern s32 D_003EDDC8;
extern s32 func_00118628;

INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001180F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118158);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001181F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118368);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001185A8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118628);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001186F8);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118E70);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118F20);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119208);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119420);
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
