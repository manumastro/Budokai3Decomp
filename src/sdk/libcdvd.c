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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118420);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118508);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001189F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118A18);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118C08);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118CA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118D18);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119988);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119AF8);
s32 sceCdChgSys(void) {
    scePrintf(&D_0045DDE0);
    return 2;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119BF0);
