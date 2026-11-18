#include "common.h"

s32 func_00169D08();                            /* extern */

s32 func_0015F5F0();                            /* extern */
extern s32 D_00404C14;

extern s32 D_00404C0C;

s32 func_00156048();                            /* extern */

s32 func_00162AD8();                            /* extern */

extern s32 D_00460BB0;

extern s32 D_00402950;

extern s32 D_00460B38;

extern s32 D_00460B08;

extern s32 D_00460AD8;

s32 ADXF_GetFsizeSct();                             /* extern */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00460A80;

s32 ADXF_ReadSj32();                            /* extern */

typedef unsigned char Uint8_x001554B8;
typedef char Sint8_x001554B8;
typedef unsigned short Uint16_x001554B8;
typedef unsigned int Uint32_x001554B8;
typedef signed int Sint32_x001554B8;
typedef char Char8_x001554B8;
typedef struct _UUID_x001554B8 {
    Uint32_x001554B8 Data1;
    Uint16_x001554B8 Data2;
    Uint16_x001554B8 Data3;
    Uint8_x001554B8 Data4[8];
} UUID_x001554B8;
typedef struct {
        Sint8_x001554B8 *data;
        Sint32_x001554B8 len;
} SJCK_x001554B8;
typedef struct {
        struct _sj_vtbl_x001554B8 *vtbl;
} SJ_OBJ_x001554B8;
typedef SJ_OBJ_x001554B8 *SJ_x001554B8;
typedef struct _sj_vtbl_x001554B8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001554B8 sj);
        UUID_x001554B8 *(*GetUuid)(SJ_x001554B8 sj);
        void (*Reset)(SJ_x001554B8 sj);
        void (*GetChunk)(SJ_x001554B8 sj, Sint32_x001554B8 id, Sint32_x001554B8 nbyte, SJCK_x001554B8 *ck);
        void (*UngetChunk)(SJ_x001554B8 sj, Sint32_x001554B8 id, SJCK_x001554B8 *ck);
        void (*PutChunk)(SJ_x001554B8 sj, Sint32_x001554B8 id, SJCK_x001554B8 *ck);
        Sint32_x001554B8 (*GetNumData)(SJ_x001554B8 sj, Sint32_x001554B8 id);
        Sint32_x001554B8 (*IsGetChunk)(SJ_x001554B8 sj, Sint32_x001554B8 id, Sint32_x001554B8 nbyte, Sint32_x001554B8 *rbyte);
        void (*EntryErrFunc)(SJ_x001554B8 sj,
                                        void (*func)(void *obj, Sint32_x001554B8 ecode), void *obj);
} SJ_IF_x001554B8;
extern int* sceCdCallback_x001554B8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001554B8 unk0;
    Sint8_x001554B8 stat;
    Sint8_x001554B8 read_flg;
    Sint8_x001554B8 unk3;
    SJ_x001554B8 sj;
    void* cvfs;
    Sint32_x001554B8 unkC;
    Sint32_x001554B8 file_len;
    Sint32_x001554B8 file_sct;
    Sint32_x001554B8 unk18;
    Sint32_x001554B8 unk1C;
    Sint32_x001554B8 unk20;
    SJCK_x001554B8 unk24;
    Sint32_x001554B8 req_rd_size;
    Sint32_x001554B8 eos;
    Uint32_x001554B8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001554B8 unk40;
    Sint8_x001554B8 pause;
    Sint8_x001554B8 unk45;
    Sint8_x001554B8 unk46;
    Sint8_x001554B8 unk47;
    Sint8_x001554B8 unk48;
    Sint8_x001554B8 unk49;
    char pad4A[6];
    const Char8_x001554B8* fname;
    void* dir;
    Sint32_x001554B8 cur_ofst;
    Uint32_x001554B8 unk5C;
} ADXSTM_OBJ_x001554B8;
typedef ADXSTM_OBJ_x001554B8* ADXSTM_x001554B8;
void ADXCRS_Lock_x001554B8() __asm__("func_00152508");
void ADXCRS_Unlock_x001554B8() __asm__("func_00152520");
typedef struct _adx_fs_x001554B8 {
    Sint8_x001554B8 used;
    Sint8_x001554B8 stat;
    Sint8_x001554B8 sjflag;
    Sint8_x001554B8 stopnw_flg;
    ADXSTM_x001554B8 stm;
    SJ_x001554B8 sj;
    Sint32_x001554B8 fnsct;
    Sint32_x001554B8 fsize;
    Sint32_x001554B8 skpos;
    Sint32_x001554B8 rdstpos;
    Sint32_x001554B8 rqsct;
    Sint32_x001554B8 rdsct;
    Sint8_x001554B8 *buf;
    Sint32_x001554B8 bsize;
    Sint32_x001554B8 rqrdsct;
    Sint32_x001554B8 ofst;
    void *dir;
    const Char8_x001554B8 *unk38;
    Sint32_x001554B8 unk3C;
    Sint32_x001554B8 unk40;
} ADX_FS_x001554B8;
typedef ADX_FS_x001554B8 *ADXF_x001554B8;
Sint32_x001554B8 ADXSTM_GetStat_x001554B8(ADXSTM_x001554B8 stm) __asm__("func_0015CCD0");
void ADXSTM_SetSj_x001554B8(ADXSTM_x001554B8 stm, SJ_x001554B8 sj) __asm__("func_0015D5B8");
void ADXSTM_Stop_x001554B8(ADXSTM_x001554B8 stm) __asm__("func_0015CE38");
void ADXSTM_SetEos_x001554B8(ADXSTM_x001554B8 stm, Sint32_x001554B8 eos) __asm__("func_0015CE98");
Sint32_x001554B8 ADXSTM_SetReqRdSize_x001554B8(ADXSTM_x001554B8 stm, Sint32_x001554B8 size) __asm__("func_0015D4B8");
void ADXSTM_SetPause_x001554B8(ADXSTM_x001554B8 stm, Sint8_x001554B8 sw) __asm__("func_0015D4E0");
Sint32_x001554B8 ADXSTM_Seek_x001554B8(ADXSTM_x001554B8 stm, Sint32_x001554B8 offset) __asm__("func_0015CCD8");
Sint32_x001554B8 ADXSTM_Start2_x001554B8(ADXSTM_x001554B8 stm, Sint32_x001554B8 arg1) __asm__("func_0015CD88");
Sint32_x001554B8 func_001554B8_x001554B8(ADXF_x001554B8 adxf, Sint32_x001554B8 nsct, SJ_x001554B8 sj) __asm__("func_001554B8");
/* adxf_read_sj32: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001554B8 func_001554B8_x001554B8(ADXF_x001554B8 adxf, Sint32_x001554B8 nsct, SJ_x001554B8 sj) {
    Sint32_x001554B8 rqsct;
    if (ADXSTM_GetStat_x001554B8(adxf->stm) != 1) {
        ADXSTM_Stop_x001554B8(adxf->stm);
    }
    ADXCRS_Lock_x001554B8();
    adxf->rdsct = 0;
    adxf->rdstpos = adxf->ofst + adxf->skpos;
    adxf->rqsct = (nsct < (adxf->fnsct - adxf->skpos)) ? nsct : adxf->fnsct - adxf->skpos;
    if (adxf->rqsct == 0) {
        adxf->stat = (3);
        rqsct = 0;
    } else {
        ADXSTM_SetEos_x001554B8(adxf->stm, -1);
        ADXSTM_SetSj_x001554B8(adxf->stm, sj);
        ADXSTM_SetReqRdSize_x001554B8(adxf->stm, adxf->rqrdsct);
        adxf->stat = (2);
        adxf->stopnw_flg = 0;
        ADXSTM_SetPause_x001554B8(adxf->stm, 0);
        ADXSTM_Seek_x001554B8(adxf->stm, adxf->skpos);
        ADXSTM_Start2_x001554B8(adxf->stm, adxf->rqsct);
        rqsct = adxf->rqsct;
    }
    ADXCRS_Unlock_x001554B8();
    return rqsct;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_ReadSj32);
void func_00155648(void) {
    ADXF_ReadSj32();
}
typedef int s32_x00155660;
typedef s32_x00155660 intptr_t_x00155660;
typedef unsigned char Uint8_x00155660;
typedef char Sint8_x00155660;
typedef unsigned short Uint16_x00155660;
typedef unsigned int Uint32_x00155660;
typedef signed int Sint32_x00155660;
typedef char Char8_x00155660;
typedef struct _UUID_x00155660 {
    Uint32_x00155660 Data1;
    Uint16_x00155660 Data2;
    Uint16_x00155660 Data3;
    Uint8_x00155660 Data4[8];
} UUID_x00155660;
typedef struct {
        Sint8_x00155660 *data;
        Sint32_x00155660 len;
} SJCK_x00155660;
typedef struct {
        struct _sj_vtbl_x00155660 *vtbl;
} SJ_OBJ_x00155660;
typedef SJ_OBJ_x00155660 *SJ_x00155660;
typedef struct _sj_vtbl_x00155660 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155660 sj);
        UUID_x00155660 *(*GetUuid)(SJ_x00155660 sj);
        void (*Reset)(SJ_x00155660 sj);
        void (*GetChunk)(SJ_x00155660 sj, Sint32_x00155660 id, Sint32_x00155660 nbyte, SJCK_x00155660 *ck);
        void (*UngetChunk)(SJ_x00155660 sj, Sint32_x00155660 id, SJCK_x00155660 *ck);
        void (*PutChunk)(SJ_x00155660 sj, Sint32_x00155660 id, SJCK_x00155660 *ck);
        Sint32_x00155660 (*GetNumData)(SJ_x00155660 sj, Sint32_x00155660 id);
        Sint32_x00155660 (*IsGetChunk)(SJ_x00155660 sj, Sint32_x00155660 id, Sint32_x00155660 nbyte, Sint32_x00155660 *rbyte);
        void (*EntryErrFunc)(SJ_x00155660 sj,
                                        void (*func)(void *obj, Sint32_x00155660 ecode), void *obj);
} SJ_IF_x00155660;
SJ_x00155660 SJRBF_Create_x00155660(Sint8_x00155660 *buf, Sint32_x00155660 bsize, Sint32_x00155660 xsize) __asm__("func_0016E120");
extern int* sceCdCallback_x00155660(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155660 unk0;
    Sint8_x00155660 stat;
    Sint8_x00155660 read_flg;
    Sint8_x00155660 unk3;
    SJ_x00155660 sj;
    void* cvfs;
    Sint32_x00155660 unkC;
    Sint32_x00155660 file_len;
    Sint32_x00155660 file_sct;
    Sint32_x00155660 unk18;
    Sint32_x00155660 unk1C;
    Sint32_x00155660 unk20;
    SJCK_x00155660 unk24;
    Sint32_x00155660 req_rd_size;
    Sint32_x00155660 eos;
    Uint32_x00155660 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155660 unk40;
    Sint8_x00155660 pause;
    Sint8_x00155660 unk45;
    Sint8_x00155660 unk46;
    Sint8_x00155660 unk47;
    Sint8_x00155660 unk48;
    Sint8_x00155660 unk49;
    char pad4A[6];
    const Char8_x00155660* fname;
    void* dir;
    Sint32_x00155660 cur_ofst;
    Uint32_x00155660 unk5C;
} ADXSTM_OBJ_x00155660;
typedef ADXSTM_OBJ_x00155660* ADXSTM_x00155660;
void ADXCRS_Lock_x00155660() __asm__("func_00152508");
void ADXCRS_Unlock_x00155660() __asm__("func_00152520");
void ADXERR_CallErrFunc1_x00155660(Sint8_x00155660*) __asm__("ADXERR_CallErrFunc1");
void ADXF_Ocbi_x00155660(Sint8_x00155660* buf, Sint32_x00155660 bsize) __asm__("func_00154378");
typedef struct _adx_fs_x00155660 {
    Sint8_x00155660 used;
    Sint8_x00155660 stat;
    Sint8_x00155660 sjflag;
    Sint8_x00155660 stopnw_flg;
    ADXSTM_x00155660 stm;
    SJ_x00155660 sj;
    Sint32_x00155660 fnsct;
    Sint32_x00155660 fsize;
    Sint32_x00155660 skpos;
    Sint32_x00155660 rdstpos;
    Sint32_x00155660 rqsct;
    Sint32_x00155660 rdsct;
    Sint8_x00155660 *buf;
    Sint32_x00155660 bsize;
    Sint32_x00155660 rqrdsct;
    Sint32_x00155660 ofst;
    void *dir;
    const Char8_x00155660 *unk38;
    Sint32_x00155660 unk3C;
    Sint32_x00155660 unk40;
} ADX_FS_x00155660;
typedef ADX_FS_x00155660 *ADXF_x00155660;
extern Sint32_x00155660 adxf_ocbi_fg_x00155660 __asm__("D_00402950");
void adxf_SetCmdHstry_x00155660(Sint32_x00155660 ncall, Sint32_x00155660 fg, intptr_t_x00155660 ptid, intptr_t_x00155660 flid, intptr_t_x00155660 type) __asm__("func_00154548");
void adxf_SetCmdHstry_x00155660(Sint32_x00155660 cmdid, Sint32_x00155660 fg, intptr_t_x00155660 prm_0, intptr_t_x00155660 prm_1, intptr_t_x00155660 prm_2) __asm__("func_00154548");
Sint32_x00155660 adxf_read_sj32_x00155660(ADXF_x00155660 adxf, Sint32_x00155660 nsct, SJ_x00155660 sj) __asm__("func_001554B8");
extern char ext_str0_x00155660[] __asm__("D_00460918");
extern char ext_str1_x00155660[] __asm__("D_004608F0");
extern char ext_str2_x00155660[] __asm__("D_004608C0");
extern char ext_str3_x00155660[] __asm__("D_00460898");
Sint32_x00155660 ADXF_ReadNw32_x00155660(ADXF_x00155660 adxf, Sint32_x00155660 nsct, void* buf) __asm__("ADXF_ReadNw32");
/* ADXF_ReadNw32_x00155660: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00155660 ADXF_ReadNw32_x00155660(ADXF_x00155660 adxf, Sint32_x00155660 nsct, void* buf) {
    SJ_x00155660 sj;
    SJ_x00155660 sjrbf;
    Sint32_x00155660 bsize;
    Sint32_x00155660 temp_v0_2;
    adxf_SetCmdHstry_x00155660((4), 0, (intptr_t_x00155660)adxf, (intptr_t_x00155660)nsct, buf);
    if (adxf == 0) {
        ADXERR_CallErrFunc1_x00155660(ext_str3_x00155660);
        return (-3);
    }
    if (nsct < 0) {
        ADXERR_CallErrFunc1_x00155660(ext_str2_x00155660);
        return (-3);
    }
    if (buf == 0) {
        ADXERR_CallErrFunc1_x00155660(ext_str1_x00155660);
        return (-3);
    }
    if (adxf->stat == (2)) {
        return (0);
    }
    if (adxf->sj != 0) {
        ADXERR_CallErrFunc1_x00155660(ext_str0_x00155660);
        return (-1);
    }
    bsize = nsct << 11;
    sjrbf = SJRBF_Create_x00155660(buf, bsize, 0);
    if (sjrbf == 0) {
        return (-2);
    }
    ADXCRS_Lock_x00155660();
    adxf->buf = buf;
    adxf->sj = sjrbf;
    adxf->bsize = bsize;
    if (adxf_ocbi_fg_x00155660 == 1) {
        ADXF_Ocbi_x00155660(buf, bsize);
    }
    ADXCRS_Unlock_x00155660();
    temp_v0_2 = adxf_read_sj32_x00155660(adxf, nsct, adxf->sj);
    if (temp_v0_2 <= 0) {
        ADXCRS_Lock_x00155660();
        sj = adxf->sj;
        if (sj != 0) {
            (*(sj)->vtbl->Destroy)(sj);
            adxf->sj = 0;
        }
        ADXCRS_Unlock_x00155660();
    }
    adxf->sjflag = 0;
    adxf_SetCmdHstry_x00155660((4), 1, (intptr_t_x00155660)adxf, (intptr_t_x00155660)nsct, buf);
    return temp_v0_2;
}
typedef unsigned int u32_x001557F0;
typedef u32_x001557F0 uintptr_t_x001557F0;
typedef unsigned char Uint8_x001557F0;
typedef char Sint8_x001557F0;
typedef unsigned short Uint16_x001557F0;
typedef unsigned int Uint32_x001557F0;
typedef signed int Sint32_x001557F0;
typedef char Char8_x001557F0;
typedef struct _UUID_x001557F0 {
    Uint32_x001557F0 Data1;
    Uint16_x001557F0 Data2;
    Uint16_x001557F0 Data3;
    Uint8_x001557F0 Data4[8];
} UUID_x001557F0;
typedef struct {
        Sint8_x001557F0 *data;
        Sint32_x001557F0 len;
} SJCK_x001557F0;
typedef struct {
        struct _sj_vtbl_x001557F0 *vtbl;
} SJ_OBJ_x001557F0;
typedef SJ_OBJ_x001557F0 *SJ_x001557F0;
typedef struct _sj_vtbl_x001557F0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001557F0 sj);
        UUID_x001557F0 *(*GetUuid)(SJ_x001557F0 sj);
        void (*Reset)(SJ_x001557F0 sj);
        void (*GetChunk)(SJ_x001557F0 sj, Sint32_x001557F0 id, Sint32_x001557F0 nbyte, SJCK_x001557F0 *ck);
        void (*UngetChunk)(SJ_x001557F0 sj, Sint32_x001557F0 id, SJCK_x001557F0 *ck);
        void (*PutChunk)(SJ_x001557F0 sj, Sint32_x001557F0 id, SJCK_x001557F0 *ck);
        Sint32_x001557F0 (*GetNumData)(SJ_x001557F0 sj, Sint32_x001557F0 id);
        Sint32_x001557F0 (*IsGetChunk)(SJ_x001557F0 sj, Sint32_x001557F0 id, Sint32_x001557F0 nbyte, Sint32_x001557F0 *rbyte);
        void (*EntryErrFunc)(SJ_x001557F0 sj,
                                        void (*func)(void *obj, Sint32_x001557F0 ecode), void *obj);
} SJ_IF_x001557F0;
extern int* sceCdCallback_x001557F0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001557F0 unk0;
    Sint8_x001557F0 stat;
    Sint8_x001557F0 read_flg;
    Sint8_x001557F0 unk3;
    SJ_x001557F0 sj;
    void* cvfs;
    Sint32_x001557F0 unkC;
    Sint32_x001557F0 file_len;
    Sint32_x001557F0 file_sct;
    Sint32_x001557F0 unk18;
    Sint32_x001557F0 unk1C;
    Sint32_x001557F0 unk20;
    SJCK_x001557F0 unk24;
    Sint32_x001557F0 req_rd_size;
    Sint32_x001557F0 eos;
    Uint32_x001557F0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001557F0 unk40;
    Sint8_x001557F0 pause;
    Sint8_x001557F0 unk45;
    Sint8_x001557F0 unk46;
    Sint8_x001557F0 unk47;
    Sint8_x001557F0 unk48;
    Sint8_x001557F0 unk49;
    char pad4A[6];
    const Char8_x001557F0* fname;
    void* dir;
    Sint32_x001557F0 cur_ofst;
    Uint32_x001557F0 unk5C;
} ADXSTM_OBJ_x001557F0;
typedef ADXSTM_OBJ_x001557F0* ADXSTM_x001557F0;
void ADXERR_CallErrFunc1_x001557F0(Sint8_x001557F0*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_fs_x001557F0 {
    Sint8_x001557F0 used;
    Sint8_x001557F0 stat;
    Sint8_x001557F0 sjflag;
    Sint8_x001557F0 stopnw_flg;
    ADXSTM_x001557F0 stm;
    SJ_x001557F0 sj;
    Sint32_x001557F0 fnsct;
    Sint32_x001557F0 fsize;
    Sint32_x001557F0 skpos;
    Sint32_x001557F0 rdstpos;
    Sint32_x001557F0 rqsct;
    Sint32_x001557F0 rdsct;
    Sint8_x001557F0 *buf;
    Sint32_x001557F0 bsize;
    Sint32_x001557F0 rqrdsct;
    Sint32_x001557F0 ofst;
    void *dir;
    const Char8_x001557F0 *unk38;
    Sint32_x001557F0 unk3C;
    Sint32_x001557F0 unk40;
} ADX_FS_x001557F0;
typedef ADX_FS_x001557F0 *ADXF_x001557F0;
Sint32_x001557F0 ADXF_ReadNw32_x001557F0(ADXF_x001557F0 adxf, Sint32_x001557F0 nsct, void* buf) __asm__("ADXF_ReadNw32");
extern char ext_str0_x001557F0[] __asm__("D_00460948");
Sint32_x001557F0 ADXF_ReadNw_x001557F0(ADXF_x001557F0 adxf, Sint32_x001557F0 nsct, void* buf) __asm__("ADXF_ReadNw");
/* ADXF_ReadNw_x001557F0: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001557F0 ADXF_ReadNw_x001557F0(ADXF_x001557F0 adxf, Sint32_x001557F0 nsct, void* buf) {
    if ((uintptr_t_x001557F0)buf & 0x3F) {
        ADXERR_CallErrFunc1_x001557F0(ext_str0_x001557F0);
        return (-3);
    }
    return ADXF_ReadNw32_x001557F0(adxf, nsct, buf);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_Stop);
extern int D_00451858_x00155920 __asm__("D_004609D8");
extern int D_00451880_x00155920 __asm__("D_00460A00");
int func_003228C0_x00155920(int, int, void*, int, int) __asm__("func_00154548");
int func_0033F130_x00155920(void*) __asm__("ADXERR_CallErrFunc1");
int func_003282D0_x00155920(int) __asm__("func_0015CDD0");
int ADXF_StopNw_x00155920(int *a0) __asm__("ADXF_StopNw");
/* func_00324040: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324040.c, MIT); ee-gcc 2.96 -O2 -G0 */
int ADXF_StopNw_x00155920(int *a0) {
    func_003228C0_x00155920(7, 0, a0, -1, -1);
    if (a0 == 0) {
        func_0033F130_x00155920(&D_00451858_x00155920);
        return -3;
    }
    {
        signed char v1 = *((signed char*)a0 + 1);
        if (v1 == 1) {
            return a0[5];
        }
        if (v1 == 3) {
            *((char*)a0 + 1) = 1;
            return a0[5];
        }
        if (a0[1] == 0) {
            func_0033F130_x00155920(&D_00451880_x00155920);
            return -1;
        }
        func_003282D0_x00155920(a0[1]);
        *((char*)a0 + 3) = 1;
        func_003228C0_x00155920(7, 1, a0, -1, -1);
        return a0[5];
    }
}
typedef unsigned char u8_x001559E8;
typedef unsigned char Uint8_x001559E8;
typedef char Sint8_x001559E8;
typedef unsigned short Uint16_x001559E8;
typedef unsigned int Uint32_x001559E8;
typedef signed int Sint32_x001559E8;
typedef char Char8_x001559E8;
typedef struct _UUID_x001559E8 {
    Uint32_x001559E8 Data1;
    Uint16_x001559E8 Data2;
    Uint16_x001559E8 Data3;
    Uint8_x001559E8 Data4[8];
} UUID_x001559E8;
typedef struct {
        Sint8_x001559E8 *data;
        Sint32_x001559E8 len;
} SJCK_x001559E8;
typedef struct {
        struct _sj_vtbl_x001559E8 *vtbl;
} SJ_OBJ_x001559E8;
typedef SJ_OBJ_x001559E8 *SJ_x001559E8;
typedef struct _sj_vtbl_x001559E8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001559E8 sj);
        UUID_x001559E8 *(*GetUuid)(SJ_x001559E8 sj);
        void (*Reset)(SJ_x001559E8 sj);
        void (*GetChunk)(SJ_x001559E8 sj, Sint32_x001559E8 id, Sint32_x001559E8 nbyte, SJCK_x001559E8 *ck);
        void (*UngetChunk)(SJ_x001559E8 sj, Sint32_x001559E8 id, SJCK_x001559E8 *ck);
        void (*PutChunk)(SJ_x001559E8 sj, Sint32_x001559E8 id, SJCK_x001559E8 *ck);
        Sint32_x001559E8 (*GetNumData)(SJ_x001559E8 sj, Sint32_x001559E8 id);
        Sint32_x001559E8 (*IsGetChunk)(SJ_x001559E8 sj, Sint32_x001559E8 id, Sint32_x001559E8 nbyte, Sint32_x001559E8 *rbyte);
        void (*EntryErrFunc)(SJ_x001559E8 sj,
                                        void (*func)(void *obj, Sint32_x001559E8 ecode), void *obj);
} SJ_IF_x001559E8;
extern int* sceCdCallback_x001559E8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001559E8 unk0;
    Sint8_x001559E8 stat;
    Sint8_x001559E8 read_flg;
    Sint8_x001559E8 unk3;
    SJ_x001559E8 sj;
    void* cvfs;
    Sint32_x001559E8 unkC;
    Sint32_x001559E8 file_len;
    Sint32_x001559E8 file_sct;
    Sint32_x001559E8 unk18;
    Sint32_x001559E8 unk1C;
    Sint32_x001559E8 unk20;
    SJCK_x001559E8 unk24;
    Sint32_x001559E8 req_rd_size;
    Sint32_x001559E8 eos;
    Uint32_x001559E8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001559E8 unk40;
    Sint8_x001559E8 pause;
    Sint8_x001559E8 unk45;
    Sint8_x001559E8 unk46;
    Sint8_x001559E8 unk47;
    Sint8_x001559E8 unk48;
    Sint8_x001559E8 unk49;
    char pad4A[6];
    const Char8_x001559E8* fname;
    void* dir;
    Sint32_x001559E8 cur_ofst;
    Uint32_x001559E8 unk5C;
} ADXSTM_OBJ_x001559E8;
typedef ADXSTM_OBJ_x001559E8* ADXSTM_x001559E8;
typedef struct _adx_fs_x001559E8 {
    Sint8_x001559E8 used;
    Sint8_x001559E8 stat;
    Sint8_x001559E8 sjflag;
    Sint8_x001559E8 stopnw_flg;
    ADXSTM_x001559E8 stm;
    SJ_x001559E8 sj;
    Sint32_x001559E8 fnsct;
    Sint32_x001559E8 fsize;
    Sint32_x001559E8 skpos;
    Sint32_x001559E8 rdstpos;
    Sint32_x001559E8 rqsct;
    Sint32_x001559E8 rdsct;
    Sint8_x001559E8 *buf;
    Sint32_x001559E8 bsize;
    Sint32_x001559E8 rqrdsct;
    Sint32_x001559E8 ofst;
    void *dir;
    const Char8_x001559E8 *unk38;
    Sint32_x001559E8 unk3C;
    Sint32_x001559E8 unk40;
} ADX_FS_x001559E8;
typedef ADX_FS_x001559E8 *ADXF_x001559E8;
Sint32_x001559E8 ADXSTM_GetStat_x001559E8(ADXSTM_x001559E8 stm) __asm__("func_0015CCD0");
Sint32_x001559E8 ADXSTM_Tell_x001559E8(ADXSTM_x001559E8 stm) __asm__("func_0015CCF8");
void adxf_CloseSjStm_x001559E8(ADXF_x001559E8 adxf) __asm__("func_00155330");
void func_001559E8_x001559E8(ADXF_x001559E8 adxf) __asm__("func_001559E8");
/* adxf_ExecOne: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001559E8_x001559E8(ADXF_x001559E8 adxf) {
    Sint32_x001559E8 stat;
    Sint8_x001559E8 stopnw_flg;
    if (adxf->stat == (2)) {
        adxf->stat = ADXSTM_GetStat_x001559E8(adxf->stm);
        adxf->rdsct = ADXSTM_Tell_x001559E8(adxf->stm) - adxf->skpos;
        if ((Uint32_x001559E8)((u8_x001559E8)adxf->stat - 3) < 2) {
            adxf->skpos = adxf->skpos + adxf->rdsct;
            adxf_CloseSjStm_x001559E8(adxf);
        }
    }
    stopnw_flg = adxf->stopnw_flg;
    if (adxf->stopnw_flg == 1) {
        stat = ADXSTM_GetStat_x001559E8(adxf->stm);
        if (stat == 1) {
            adxf->rdsct = ADXSTM_Tell_x001559E8(adxf->stm) - adxf->skpos;
            adxf_CloseSjStm_x001559E8(adxf);
            adxf->stat = stat;
            adxf->stopnw_flg = 0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155AB0);
typedef struct SjObj_x00155B10 SjObj_x00155B10;
typedef struct {
    char pad_00[12];
    void (*destroy)(SjObj_x00155B10 *sj);
    void *(*get_uuid)(SjObj_x00155B10 *sj);
    void (*reset)(SjObj_x00155B10 *sj);
    void (*getchunk)(SjObj_x00155B10 *sj, int id, int nbyte, void *ck);
    void (*ungetchunk)(SjObj_x00155B10 *sj, int id, void *ck);
    void (*putchunk)(SjObj_x00155B10 *sj, int id, void *ck);
    int (*getnum)(SjObj_x00155B10 *sj, int id);
    int (*is_get_chunk)(SjObj_x00155B10 *sj, int id, int nbyte, int *rbyte);
    void (*set_error_cb)(SjObj_x00155B10 *sj, void *fn, void *obj);
} SjIf_x00155B10;
struct SjObj_x00155B10 {
    SjIf_x00155B10 *vtbl;
};
typedef struct {
    signed char used;
    signed char stat;
    signed char sjflag;
    char pad_03[1];
    void *stm;
    SjObj_x00155B10 *sj;
    int fsize_sct;
    int fsize_byte;
    int cursct;
    int rqsct;
    int rqnsct;
    int nreadsct;
    void *buf;
    int bufsize;
    int maxsct;
    int ofst;
    char pad_34[260];
} AdxfObj_x00155B10;
struct SjObj_x00155B10;
void adx_error_x00155B10(const char *msg) __asm__("ADXERR_CallErrFunc1");
struct SjObj_x00155B10;
int ADXF_Stop_x00155B10(AdxfObj_x00155B10 *adxf) __asm__("ADXF_Stop");
void adxf_history_add_x00155B10(int ptid, int kind, int target, int param, int extra) __asm__("func_00154548");
int ADXF_Stop_x00155B10(AdxfObj_x00155B10 *adxf) __asm__("ADXF_Stop");
extern char ext_str0_x00155B10[] __asm__("D_00460A58");
extern char ext_str1_x00155B10[] __asm__("D_00460A30");
int ADXF_Seek_x00155B10(AdxfObj_x00155B10 *adxf, int pos, int type) __asm__("ADXF_Seek");
/* ADXF_Seek_x00155B10: from https://github.com/new-coke/rez-decomp (src/cri/adxf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int ADXF_Seek_x00155B10(AdxfObj_x00155B10 *adxf, int pos, int type)
{
    adxf_history_add_x00155B10(6, 0, (int)adxf, pos, type);
    if (adxf == 0) {
        adx_error_x00155B10(ext_str1_x00155B10);
        return -3;
    }
    if (adxf->stat == 2)
        ADXF_Stop_x00155B10(adxf);
    if (type == 0) {
        adxf->cursct = pos;
    } else if (type == 1) {
        adxf->cursct = adxf->cursct + pos;
    } else if (type == 2) {
        adxf->cursct = adxf->fsize_sct + pos;
    } else {
        adx_error_x00155B10(ext_str0_x00155B10);
        return -3;
    }
    if (adxf->cursct < 0)
        adxf->cursct = 0;
    else if (adxf->cursct > adxf->fsize_sct)
        adxf->cursct = adxf->fsize_sct;
    adxf_history_add_x00155B10(6, 1, (int)adxf, pos, type);
    return adxf->cursct;
}
s32 ADXF_Tell(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460A80);
        return -3;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", ADXF_GetFsizeSct);
s32 func_00155CD0(void) {
    return ADXF_GetFsizeSct() << 0xB;
}
s32 ADXF_GetNumReqSct(u8 *arg0, s32 *arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460AD8);
        *arg1 = 0;
        return -3;
    }
    *arg1 = *(s32 *)((u8 *)arg0 + 0x18);
    return *(s32 *)((u8 *)arg0 + 0x1C);
}
s32 ADXF_GetNumReadSct(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460B08);
        return -3;
    }
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s8 ADXF_GetStat(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460B38);
        return -3;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
typedef signed char Sint8_x00155DA0;
typedef signed int Sint32_x00155DA0;
typedef unsigned int Uint32_x00155DA0;
typedef struct ADXF_PTINFO_x00155DA0 { char _pad[8]; Sint32_x00155DA0 nfile; } ADXF_PTINFO_x00155DA0;
extern ADXF_PTINFO_x00155DA0 *D_003EB308_x00155DA0[] __asm__("D_00402550");
extern void func_0033F130_x00155DA0(const Sint8_x00155DA0 *) __asm__("ADXERR_CallErrFunc1");
extern const Sint8_x00155DA0 D_00451A18_x00155DA0[] __asm__("D_00460B60");
extern const Sint8_x00155DA0 D_00451A40_x00155DA0[] __asm__("D_00460B88");
Sint32_x00155DA0 func_00155DA0_x00155DA0(Sint32_x00155DA0 ptid, Sint32_x00155DA0 flid) __asm__("func_00155DA0");
/* adxf_ChkPrmGfr: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003245.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x00155DA0 func_00155DA0_x00155DA0(Sint32_x00155DA0 ptid, Sint32_x00155DA0 flid) {
    ADXF_PTINFO_x00155DA0 *info;
    if ((Uint32_x00155DA0)ptid >= 0x100) {
        func_0033F130_x00155DA0(D_00451A18_x00155DA0);
        return -3;
    }
    info = D_003EB308_x00155DA0[ptid];
    if (info == 0) {
        func_0033F130_x00155DA0(D_00451A18_x00155DA0);
        return -3;
    }
    if ((flid < 0) || (flid >= info->nfile)) {
        func_0033F130_x00155DA0(D_00451A40_x00155DA0);
        return -3;
    }
    return 0;
}
typedef signed int Sint32_x00155E18;
typedef char Char8_x00155E18;
extern int* sceCdCallback_x00155E18(void (*func)(int)) __asm__("sceCdCallback");
Sint32_x00155E18 ADXF_GetFnameRangeEx_x00155E18(Sint32_x00155E18 ptid, Sint32_x00155E18 flid, Char8_x00155E18 *fname, void **dir, Sint32_x00155E18 *ofst, Sint32_x00155E18 *fnsct) __asm__("func_00155E40");
Sint32_x00155E18 ADXF_GetFnameRangeEx_x00155E18(Sint32_x00155E18 ptid, Sint32_x00155E18 flid, Char8_x00155E18* fname, void** dir, Sint32_x00155E18* ofst, Sint32_x00155E18* fnsct) __asm__("func_00155E40");
Sint32_x00155E18 func_00155E18_x00155E18(Sint32_x00155E18 ptid, Sint32_x00155E18 flid, Char8_x00155E18* fname, Sint32_x00155E18* ofst, Sint32_x00155E18* fnsct) __asm__("func_00155E18");
/* ADXF_GetFnameRange: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00155E18 func_00155E18_x00155E18(Sint32_x00155E18 ptid, Sint32_x00155E18 flid, Char8_x00155E18* fname, Sint32_x00155E18* ofst, Sint32_x00155E18* fnsct) {
    void* dir;
    return ADXF_GetFnameRangeEx_x00155E18(ptid, flid, fname, &dir, ofst, fnsct);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155E40);
typedef char Sint8_x00155F98;
typedef unsigned short Uint16_x00155F98;
typedef signed int Sint32_x00155F98;
typedef char Char8_x00155F98;
extern int* sceCdCallback_x00155F98(void (*func)(int)) __asm__("sceCdCallback");
typedef struct _adxf_ptinfo_x00155F98 {
    struct _adxf_ptinfo_x00155F98 *next;
    Sint32_x00155F98 size;
    Sint32_x00155F98 nfile;
    Uint16_x00155F98 nentry;
    Sint8_x00155F98 type;
    Sint8_x00155F98 rev;
    Sint8_x00155F98 fname[(256)];
    void *curdir;
    Sint32_x00155F98 ofst;
    Sint32_x00155F98 top;
    Sint32_x00155F98 file_sizes[0];
} ADXF_PTINFO_x00155F98;
extern ADXF_PTINFO_x00155F98* adxf_ptinfo_x00155F98[(256)] __asm__("D_00402550");
Char8_x00155F98* func_00155F98_x00155F98(Sint32_x00155F98 ptid) __asm__("func_00155F98");
/* ADXF_GetFnameFromPt: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Char8_x00155F98* func_00155F98_x00155F98(Sint32_x00155F98 ptid) {
    return adxf_ptinfo_x00155F98[ptid]->fname;
}
void func_00155FB0(s32 arg0) {
    D_00402950 = arg0;
}
void ADXF_SetReqRdSct(u8 *arg0, s32 arg1) {
    if (*(s8 *)((u8 *)arg0 + 1) == 2) {
        ADXERR_CallErrFunc1(&D_00460BB0);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00155FF8);
void func_00156030(void) {
    func_00162AD8();
}
void ADXCRS_Lock_x00156048() __asm__("func_00152508");
void ADXCRS_Unlock_x00156048() __asm__("func_00152520");
typedef signed int Sint32_x00156048;
extern int* sceCdCallback_x00156048(void (*func)(int)) __asm__("sceCdCallback");
void ADXSTM_ExecServer_x00156048() __asm__("func_0015D3D8");
void cvFsExecServer_x00156048() __asm__("func_00162A10");
void SRD_ExecServer_x00156048() __asm__("func_001648B0");
void ADXF_ExecServer_x00156048(void) __asm__("func_00155AB0");
extern Sint32_x00156048 adxt_fssvr_enter_cnt_x00156048 __asm__("D_00404BE0");
void func_00156048_x00156048() __asm__("func_00156048");
/* ADXT_ExecFsSvr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fsvr.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156048_x00156048() {
    ADXCRS_Lock_x00156048();
    if (adxt_fssvr_enter_cnt_x00156048 != 0) {
        ADXCRS_Unlock_x00156048();
        return;
    }
    adxt_fssvr_enter_cnt_x00156048 = 1;
    ADXCRS_Unlock_x00156048();
    ADXSTM_ExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 2;
    cvFsExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 3;
    SRD_ExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 4;
    cvFsExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 5;
    ADXSTM_ExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 6;
    ADXF_ExecServer_x00156048();
    adxt_fssvr_enter_cnt_x00156048 = 0;
}
void func_001560E8(void) {
    func_00156048();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156100);
void func_00156118(s32 arg0) {
    D_00404C0C = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156128);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001554B8", func_00156140);
void func_00156158(void) {
    D_00404C14 += 1;
    func_0015F5F0();
}
s32 func_00156180(void) {
    func_00169D08();
    return 0;
}
s32 func_00156180_x001561A0(s32) __asm__("func_00156180");
s32 func_001561D0_x001561A0(s32) __asm__("func_001561D0");
s32 func_001561F0_x001561A0(s32) __asm__("func_001561F0");
s32 func_001561A0_x001561A0(void) __asm__("func_001561A0");
s32 func_001561A0_x001561A0(void) {
    func_001561D0_x001561A0(0);
    func_001561F0_x001561A0(0);
    func_00156180_x001561A0(0);
    return 0;
}
s32 func_001561D0(void) {
    func_0015F5F0();
    return 0;
}
s32 func_001561F0(void) {
    func_00156048();
    return 0;
}
typedef unsigned int size_t_x00156210;
typedef int s32_x00156210;
typedef s32_x00156210 ptrdiff_t_x00156210;
typedef unsigned char Uint8_x00156210;
typedef char Sint8_x00156210;
typedef unsigned short Uint16_x00156210;
typedef signed short Sint16_x00156210;
typedef unsigned int Uint32_x00156210;
typedef signed int Sint32_x00156210;
typedef Sint32_x00156210 Bool_x00156210;
typedef char Char8_x00156210;
typedef struct _UUID_x00156210 {
    Uint32_x00156210 Data1;
    Uint16_x00156210 Data2;
    Uint16_x00156210 Data3;
    Uint8_x00156210 Data4[8];
} UUID_x00156210;
typedef struct {
        Sint8_x00156210 *data;
        Sint32_x00156210 len;
} SJCK_x00156210;
typedef struct {
        struct _sj_vtbl_x00156210 *vtbl;
} SJ_OBJ_x00156210;
typedef SJ_OBJ_x00156210 *SJ_x00156210;
typedef struct _sj_vtbl_x00156210 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156210 sj);
        UUID_x00156210 *(*GetUuid)(SJ_x00156210 sj);
        void (*Reset)(SJ_x00156210 sj);
        void (*GetChunk)(SJ_x00156210 sj, Sint32_x00156210 id, Sint32_x00156210 nbyte, SJCK_x00156210 *ck);
        void (*UngetChunk)(SJ_x00156210 sj, Sint32_x00156210 id, SJCK_x00156210 *ck);
        void (*PutChunk)(SJ_x00156210 sj, Sint32_x00156210 id, SJCK_x00156210 *ck);
        Sint32_x00156210 (*GetNumData)(SJ_x00156210 sj, Sint32_x00156210 id);
        Sint32_x00156210 (*IsGetChunk)(SJ_x00156210 sj, Sint32_x00156210 id, Sint32_x00156210 nbyte, Sint32_x00156210 *rbyte);
        void (*EntryErrFunc)(SJ_x00156210 sj,
                                        void (*func)(void *obj, Sint32_x00156210 ecode), void *obj);
} SJ_IF_x00156210;
void SJRBF_Init_x00156210(void) __asm__("func_0016E078");
void SJMEM_Init_x00156210(void) __asm__("func_0016DB40");
void SJUNI_Init_x00156210(void) __asm__("func_0016E890");
extern int* sceCdCallback_x00156210(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156210(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156210;
typedef struct {
               Sint16_x00156210 unk0;
               Sint16_x00156210 unk2;
               Sint16_x00156210 unk4;
               Sint16_x00156210 unk6;
} ADXPD_OBJ_SUB_x00156210;
typedef struct {
               Sint32_x00156210 used;
               Sint32_x00156210 unk4;
               Sint32_x00156210 mode;
               Sint32_x00156210 stat;
               Sint32_x00156210 num_blk;
               Sint32_x00156210 unk14;
               Sint32_x00156210 unk18;
               Sint32_x00156210 unk1C;
               Sint32_x00156210 unk20;
               Sint32_x00156210 unk24;
               ADXPD_OBJ_SUB_x00156210 unk28;
               Sint16_x00156210 unk30;
               Sint16_x00156210 unk32;
               Sint16_x00156210 unk34;
               Sint16_x00156210 unk36;
               Sint16_x00156210 unk38;
               Sint16_x00156210 unk3A;
} ADXPD_OBJ_x00156210;
typedef ADXPD_OBJ_x00156210* ADXPD_x00156210;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156210;
typedef struct {
               Sint32_x00156210 unk0;
               Sint32_x00156210 unk4;
               Sint32_x00156210 unk8;
               Sint32_x00156210 unkC;
               Sint32_x00156210 unk10;
               void* unk14;
               Sint32_x00156210 unk18;
               Sint32_x00156210 unk1C;
               Sint32_x00156210 unk20;
               Sint32_x00156210 unk24;
               Sint32_x00156210 unk28;
} ADXB_UNK_x00156210;
typedef struct {
               Sint16_x00156210 unk0;
               Sint16_x00156210 unk2;
               Sint32_x00156210 stat;
               ADXPD_x00156210 adxpd;
               Sint8_x00156210 encoding_type;
               Sint8_x00156210 sample_bitdepth;
               Sint8_x00156210 channel_count;
               Sint8_x00156210 block_size;
               Sint32_x00156210 samples_per_block;
               Sint32_x00156210 sample_rate;
               Sint32_x00156210 total_samples;
               Sint16_x00156210 unk1C;
               char pad1E[2];
               Sint32_x00156210 unk20;
               Sint16_x00156210 unk24;
               Sint16_x00156210 unk26;
               Sint32_x00156210 unk28;
               Sint32_x00156210 unk2C;
               Sint32_x00156210 unk30;
               Sint32_x00156210 unk34;
               Sint32_x00156210 unk38;
               void* unk3C;
               Sint32_x00156210 unk40;
               Sint32_x00156210 unk44;
               ADXB_UNK_x00156210 unk48;
               Sint32_x00156210 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156210*, Sint32_x00156210*, Sint32_x00156210*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156210, Sint32_x00156210);
               Sint32_x00156210 unk84;
               Sint32_x00156210 unk88;
               Sint32_x00156210 unk8C;
               Sint32_x00156210 dec_num_sample;
               Sint32_x00156210 dec_data_len;
               Sint16_x00156210 format;
               Sint16_x00156210 unk9A;
               Sint16_x00156210 unk9C;
               Sint16_x00156210 unk9E;
               Sint16_x00156210 unkA0;
               char padA2[0xE];
               Sint32_x00156210 unkB0;
               Sint32_x00156210 ahx_dec_samples;
               Sint32_x00156210 ahx_dec_frames;
               Sint32_x00156210 unkBC;
               Sint32_x00156210 ac3_dec_samples;
               Sint32_x00156210 ac3_dec_frames;
               Sint32_x00156210 unkC8;
               ADX_UNK_x00156210 unkCC;
               Sint16_x00156210 unkDC;
               Sint16_x00156210 unkDE[2];
               char padE2[2];
               Sint32_x00156210 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156210;
typedef ADXB_OBJ_x00156210* ADXB_x00156210;
typedef struct {
    Sint8_x00156210 used;
    Sint8_x00156210 state;
    Sint8_x00156210 maxnch;
    Sint8_x00156210 unk3;
    ADXB_x00156210 adxb;
    SJ_x00156210 sji;
    SJ_x00156210 sjo[2];
    SJCK_x00156210 unk14;
    SJCK_x00156210 chunks[2];
    Sint32_x00156210 unk2C;
    Sint32_x00156210 unk30;
    Sint32_x00156210 unk34;
    Sint32_x00156210 unk38;
    Sint32_x00156210 trap_num_samples;
    Sint32_x00156210 trap_count;
    Sint32_x00156210 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156210, Sint8_x00156210*, Sint32_x00156210);
    void* flt_obj;
    Sint8_x00156210 unk58[0x40];
    Sint32_x00156210 unk98;
    Sint32_x00156210 lnkflg;
} ADXSJD_OBJ_x00156210;
typedef ADXSJD_OBJ_x00156210* ADXSJD_x00156210;
typedef struct {
    Sint32_x00156210 unk0;
    SJ_x00156210 sj;
} SJX_UNK_0_x00156210;
typedef struct {
    Sint8_x00156210 used;
    Sint8_x00156210 unk1;
    Sint16_x00156210 unk2;
    SJ_x00156210 sj;
    void* unk8;
    Sint32_x00156210 unkC;
    SJX_UNK_0_x00156210* unk10;
} SJX_OBJ_x00156210;
typedef SJX_OBJ_x00156210* SJX_x00156210;
typedef struct {
    Sint8_x00156210 used;
    char pad1[3];
    void* unk4;
    SJ_x00156210 unk8;
    SJX_x00156210 unkC;
    SJCK_x00156210 chunk;
} PS2PSJ_OBJ_x00156210;
typedef PS2PSJ_OBJ_x00156210* PS2PSJ_x00156210;
typedef struct {
               Sint8_x00156210 unk0;
               Sint8_x00156210 unk1;
               Sint8_x00156210 unk2;
               SJ_x00156210 unk4;
               SJ_x00156210 unk8;
               SJCK_x00156210 unkC;
               SJCK_x00156210 unk14;
               sceSifDmaData_x00156210 dma_data;
               Sint32_x00156210 unk2C;
               Sint32_x00156210 unk30;
               Sint32_x00156210 unk34;
               Sint32_x00156210 unk38;
               Sint32_x00156210 unk3C;
} DTR_OBJ_x00156210;
typedef DTR_OBJ_x00156210* DTR_x00156210;
typedef struct {
    Sint8_x00156210 used;
    Sint32_x00156210 maxnch;
    PS2PSJ_x00156210 psj[2];
    DTR_x00156210 dtr[2];
    SJ_x00156210 sjo[2];
    void* unk20;
    Sint32_x00156210 unk24;
    Sint32_x00156210 unk28;
    Sint32_x00156210 unk2C;
    Sint8_x00156210 unk30;
    Sint8_x00156210 unk31;
    Sint8_x00156210 num_chan;
    Sint8_x00156210 unk33;
    Sint32_x00156210 sfreq;
    Sint32_x00156210 unk38;
    Sint32_x00156210 out_vol;
    Sint32_x00156210 unk40;
    Sint32_x00156210 pan[2];
    Sint32_x00156210 unk4C[2];
    Sint32_x00156210 unk54;
    Sint32_x00156210 unk58;
    Sint8_x00156210 unk5C;
    Sint8_x00156210 unk5D;
    Sint8_x00156210 unk5E;
    Sint8_x00156210 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156210;
typedef ADXRNA_OBJ_x00156210* ADXRNA_x00156210;
typedef struct {
    Sint8_x00156210 unk0;
    Sint8_x00156210 stat;
    Sint8_x00156210 read_flg;
    Sint8_x00156210 unk3;
    SJ_x00156210 sj;
    void* cvfs;
    Sint32_x00156210 unkC;
    Sint32_x00156210 file_len;
    Sint32_x00156210 file_sct;
    Sint32_x00156210 unk18;
    Sint32_x00156210 unk1C;
    Sint32_x00156210 unk20;
    SJCK_x00156210 unk24;
    Sint32_x00156210 req_rd_size;
    Sint32_x00156210 eos;
    Uint32_x00156210 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156210 unk40;
    Sint8_x00156210 pause;
    Sint8_x00156210 unk45;
    Sint8_x00156210 unk46;
    Sint8_x00156210 unk47;
    Sint8_x00156210 unk48;
    Sint8_x00156210 unk49;
    char pad4A[6];
    const Char8_x00156210* fname;
    void* dir;
    Sint32_x00156210 cur_ofst;
    Uint32_x00156210 unk5C;
} ADXSTM_OBJ_x00156210;
typedef ADXSTM_OBJ_x00156210* ADXSTM_x00156210;
void ADXCRS_Init_x00156210() __asm__("func_001524F8");
void ADXCRS_Lock_x00156210() __asm__("func_00152508");
void ADXCRS_Unlock_x00156210() __asm__("func_00152520");
void ADXERR_Init_x00156210() __asm__("func_00154088");
typedef struct _adx_talk_x00156210 {
                   Sint8_x00156210 used;
                   Sint8_x00156210 stat;
                   Sint8_x00156210 pmode;
                   Sint8_x00156210 maxnch;
                   ADXSJD_x00156210 sjd;
                   ADXSTM_x00156210 stm;
                   ADXRNA_x00156210 rna;
                   SJ_x00156210 sjf;
                   SJ_x00156210 sji;
                   SJ_x00156210 sjo[(2)];
                   Sint8_x00156210 *ibuf;
                   Sint32_x00156210 ibuflen;
                   Sint32_x00156210 ibufxlen;
                   Sint16_x00156210 *obuf;
                   Sint32_x00156210 obufsize;
                   Sint32_x00156210 obufdist;
                   Sint32_x00156210 svrfreq;
                   Sint16_x00156210 maxsct;
                   Sint16_x00156210 minsct;
                   Sint16_x00156210 outvol;
                   Sint16_x00156210 outpan[(2)];
                   Sint16_x00156210 unk46;
                   Sint32_x00156210 maxdecsmpl;
                   Sint32_x00156210 lpcnt;
                   Sint32_x00156210 lp_skiplen;
                   Sint32_x00156210 trp;
                   Sint32_x00156210 wpos;
                   Sint32_x00156210 mofst;
                   Sint16_x00156210 ercode;
                   Sint32_x00156210 edecpos;
                   Sint16_x00156210 edeccnt;
                   Sint16_x00156210 eshrtcnt;
                   Sint8_x00156210 lpflg;
                   Sint8_x00156210 autorcvr;
                   Sint8_x00156210 fltmode;
                   Sint8_x00156210 execflag;
                   Sint8_x00156210 pstwait_flag;
                   Sint8_x00156210 pstready_flag;
                   Sint8_x00156210 pause_flag;
                   void *amp;
                   SJ_x00156210 ampsji[(2)];
                   SJ_x00156210 ampsjo[(2)];
                   Sint32_x00156210 time_ofst;
                   Sint32_x00156210 lesct;
                   Sint32_x00156210 trpnsmpl;
                   void *lsc;
                   Sint8_x00156210 lnkflg;
                   Sint8_x00156210 rsv;
                   Sint16_x00156210 rsv2;
                   Uint32_x00156210 tvofst;
                   Uint32_x00156210 svcnt;
                   Uint32_x00156210 decofst;
                   Sint32_x00156210 flush_nsmpl;
                   Sint8_x00156210 unkAC;
                   Sint8_x00156210 padAD[1];
               Char8_x00156210* unkB0;
               Sint32_x00156210 padB4;
               Sint32_x00156210 padB8;
               Sint32_x00156210 padBC;
               Sint32_x00156210 padC0;
} ADX_TALK_x00156210;
typedef ADX_TALK_x00156210 *ADXT_x00156210;
extern void ADXT_EntryErrFunc_x00156210(void (*func)(void *obj, Sint8_x00156210 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156210(ADXT_x00156210 adxt,
                void (*f)(void *obj, Sint32_x00156210 ch, void *data, Sint32_x00156210 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00156210(Bool_x00156210 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156210(Bool_x00156210 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156210(void (*fn)(void *obj, Char8_x00156210 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156210(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
Bool_x00156210 ADXM_IsSetupThrd_x00156210(void) __asm__("func_001576F0");
void ADXRNA_Init_x00156210() __asm__("func_001587C8");
extern void ADXRNA_EntryErrFunc_x00156210(void (*)(void*, Char8_x00156210*), void*) __asm__("func_001587F8");
void ADXSJD_Init_x00156210() __asm__("func_00158B20");
extern void ADXSJD_EntryTrapFunc_x00156210(ADXSJD_x00156210 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint32_x00156210 ADXSTM_Init_x00156210() __asm__("func_0015C800");
void ADXT_SetDefSvrFreq_x00156210(Sint32_x00156210 freq) __asm__("func_0015F1B0");
extern void LSC_EntryErrFunc_x00156210(void (*)(void*, Char8_x00156210*), void*) __asm__("func_0016A198");
void LSC_Init_x00156210() __asm__("func_0016A260");
void SVM_Init_x00156210() __asm__("func_00170968");
extern void SVM_SetCbErr_x00156210(void (*callback)(void*, Char8_x00156210*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x00156210 SVM_SetCbSvr_x00156210(Sint32_x00156210, Sint32_x00156210 (*)(void*), void*) __asm__("func_00170380");
extern void SVM_SetCbSvrId_x00156210(Sint32_x00156210, Sint32_x00156210, Sint32_x00156210 (*)(void*), void*) __asm__("func_001704C8");
extern void SVM_SetCbLock_x00156210(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x00156210(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void ADXF_Init_x00156210(void) __asm__("func_00154398");
void* memset_x00156210(void* s, int c, size_t_x00156210 n) __asm__("memset");
extern Char8_x00156210* volatile adxt_build_x00156210 __asm__("D_00404BE8");
extern Sint32_x00156210 adxt_init_cnt_x00156210 __asm__("lbl_801A6734");
extern Sint32_x00156210 adxt_svr_main_id_x00156210 __asm__("D_00404C08");
extern Sint32_x00156210 adxt_vsync_svr_flag_x00156210 __asm__("D_00404C0C");
extern Sint32_x00156210 adxt_svr_fs_id_x00156210 __asm__("D_00404C10");
extern Sint32_x00156210 volatile adxt_vsync_cnt_x00156210 __asm__("D_00404C14");
extern ADX_TALK_x00156210 adxt_obj_x00156210[(16)] __asm__("D_00404C18");
Sint32_x00156210 adxt_exec_tsvr_x00156210(void* object) __asm__("func_001561D0");
Sint32_x00156210 adxt_exec_fssvr_x00156210(void* object) __asm__("func_001561F0");
void adxini_rnaerr_cbfn_x00156210(void* object, Char8_x00156210* msg) __asm__("func_00156128");
void adxini_lscerr_cbfn_x00156210(void* object, Char8_x00156210* msg) __asm__("func_00156140");
Sint32_x00156210 adxt_exec_main_thrd_x00156210(void* object) __asm__("func_00156180");
Sint32_x00156210 adxt_exec_main_nothrd_x00156210(void* object) __asm__("func_001561A0");
Sint32_x00156210 adxt_exec_tsvr_x00156210(void* object) __asm__("func_001561D0");
Sint32_x00156210 adxt_exec_fssvr_x00156210(void* object) __asm__("func_001561F0");
void fn_80008FB0_x00156210() __asm__("fn_80008FB0");
/* ADXT_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_inis.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void fn_80008FB0_x00156210() {
    Bool_x00156210 is_thread_setup;
    adxt_build_x00156210;
    if (adxt_init_cnt_x00156210 == 0) {
        ADXCRS_Init_x00156210();
        ADXCRS_Lock_x00156210();
        SJUNI_Init_x00156210();
        SJRBF_Init_x00156210();
        SJMEM_Init_x00156210();
        ADXERR_Init_x00156210();
        ADXSTM_Init_x00156210();
        ADXSJD_Init_x00156210();
        ADXF_Init_x00156210();
        ADXRNA_Init_x00156210();
        LSC_Init_x00156210();
        SVM_Init_x00156210();
        ADXRNA_EntryErrFunc_x00156210(adxini_rnaerr_cbfn_x00156210, 0);
        LSC_EntryErrFunc_x00156210(adxini_lscerr_cbfn_x00156210, 0);
        memset_x00156210(adxt_obj_x00156210, 0, sizeof(adxt_obj_x00156210));
        is_thread_setup = ADXM_IsSetupThrd_x00156210();
        if ((is_thread_setup == 1) && (adxt_vsync_svr_flag_x00156210 == 1)) {
            SVM_SetCbSvrId_x00156210(2, 1, adxt_exec_tsvr_x00156210, 0);
            adxt_svr_fs_id_x00156210 = SVM_SetCbSvr_x00156210(4, adxt_exec_fssvr_x00156210, 0);
            adxt_svr_main_id_x00156210 = SVM_SetCbSvr_x00156210(5, adxt_exec_main_thrd_x00156210, 0);
        } else {
            adxt_svr_main_id_x00156210 = SVM_SetCbSvr_x00156210(5, adxt_exec_main_nothrd_x00156210, 0);
        }
        adxt_vsync_cnt_x00156210 = 0;
        ADXT_SetDefSvrFreq_x00156210(60);
        ADXCRS_Unlock_x00156210();
    }
    adxt_init_cnt_x00156210 += 1;
}
