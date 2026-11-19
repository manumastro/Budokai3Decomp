#include "common.h"

typedef unsigned char Uint8_x00169878;
typedef char Sint8_x00169878;
typedef unsigned short Uint16_x00169878;
typedef unsigned int Uint32_x00169878;
typedef signed int Sint32_x00169878;
typedef char Char8_x00169878;
typedef struct _UUID_x00169878 {
    Uint32_x00169878 Data1;
    Uint16_x00169878 Data2;
    Uint16_x00169878 Data3;
    Uint8_x00169878 Data4[8];
} UUID_x00169878;
typedef struct {
        Sint8_x00169878 *data;
        Sint32_x00169878 len;
} SJCK_x00169878;
typedef struct {
        struct _sj_vtbl_x00169878 *vtbl;
} SJ_OBJ_x00169878;
typedef SJ_OBJ_x00169878 *SJ_x00169878;
typedef struct _sj_vtbl_x00169878 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169878 sj);
        UUID_x00169878 *(*GetUuid)(SJ_x00169878 sj);
        void (*Reset)(SJ_x00169878 sj);
        void (*GetChunk)(SJ_x00169878 sj, Sint32_x00169878 id, Sint32_x00169878 nbyte, SJCK_x00169878 *ck);
        void (*UngetChunk)(SJ_x00169878 sj, Sint32_x00169878 id, SJCK_x00169878 *ck);
        void (*PutChunk)(SJ_x00169878 sj, Sint32_x00169878 id, SJCK_x00169878 *ck);
        Sint32_x00169878 (*GetNumData)(SJ_x00169878 sj, Sint32_x00169878 id);
        Sint32_x00169878 (*IsGetChunk)(SJ_x00169878 sj, Sint32_x00169878 id, Sint32_x00169878 nbyte, Sint32_x00169878 *rbyte);
        void (*EntryErrFunc)(SJ_x00169878 sj,
                                        void (*func)(void *obj, Sint32_x00169878 ecode), void *obj);
} SJ_IF_x00169878;
extern int* sceCdCallback_x00169878(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169878 unk0;
    Sint8_x00169878 stat;
    Sint8_x00169878 read_flg;
    Sint8_x00169878 unk3;
    SJ_x00169878 sj;
    void* cvfs;
    Sint32_x00169878 unkC;
    Sint32_x00169878 file_len;
    Sint32_x00169878 file_sct;
    Sint32_x00169878 unk18;
    Sint32_x00169878 unk1C;
    Sint32_x00169878 unk20;
    SJCK_x00169878 unk24;
    Sint32_x00169878 req_rd_size;
    Sint32_x00169878 eos;
    Uint32_x00169878 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169878 unk40;
    Sint8_x00169878 pause;
    Sint8_x00169878 unk45;
    Sint8_x00169878 unk46;
    Sint8_x00169878 unk47;
    Sint8_x00169878 unk48;
    Sint8_x00169878 unk49;
    char pad4A[6];
    const Char8_x00169878* fname;
    void* dir;
    Sint32_x00169878 cur_ofst;
    Uint32_x00169878 unk5C;
} ADXSTM_OBJ_x00169878;
typedef ADXSTM_OBJ_x00169878* ADXSTM_x00169878;
typedef struct {
    Sint32_x00169878 id;
    const Char8_x00169878* fname;
    Sint32_x00169878 unk8;
    void* dir;
    Sint32_x00169878 unk10;
    Sint32_x00169878 unk14;
    Sint32_x00169878 stat;
    Sint32_x00169878 rd_sct;
} LSC_STM_x00169878;
typedef struct {
    Sint8_x00169878 used;
    Sint8_x00169878 stat;
    Sint8_x00169878 unk2;
    Sint8_x00169878 lp_flg;
    Sint8_x00169878 unk4;
    SJ_x00169878 sj;
    Sint32_x00169878 unkC;
    Sint32_x00169878 unk10;
    Sint32_x00169878 flow_limit;
    Sint32_x00169878 unk18;
    Sint32_x00169878 last_stm_index;
    Sint32_x00169878 unk20;
    Sint32_x00169878 num_stm;
    ADXSTM_x00169878 stm_hndl;
    Sint32_x00169878 unk2C;
    char pad30[4];
    Sint32_x00169878 unk34;
    LSC_STM_x00169878 stm[16];
} LSC_OBJ_x00169878;
typedef LSC_OBJ_x00169878* LSC_x00169878;
void LSC_LockCrs_x00169878(Sint32_x00169878*) __asm__("func_0016A160");
void LSC_UnlockCrs_x00169878(Sint32_x00169878*) __asm__("func_0016A180");
extern void LSC_EntryErrFunc_x00169878(void (*)(void*, Char8_x00169878*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169878(const Char8_x00169878* format, ...) __asm__("func_0016A1C0");
LSC_x00169878 lsc_Alloc_x00169878() __asm__("func_00169818");
extern char ext_str0_x00169878[] __asm__("D_00463D98");
extern char ext_str1_x00169878[] __asm__("D_00463D68");
LSC_x00169878 LSC_Create_x00169878(SJ_x00169878 sj) __asm__("LSC_Create");
/* LSC_Create_x00169878: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
LSC_x00169878 LSC_Create_x00169878(SJ_x00169878 sj) {
    LSC_x00169878 lsc;
    Sint32_x00169878 lock;
    Sint32_x00169878 i;
    if (sj == 0) {
        LSC_CallErrFunc_x00169878(ext_str1_x00169878);
        return 0;
    }
    LSC_LockCrs_x00169878(&lock);
    lsc = lsc_Alloc_x00169878();
    if (lsc == 0) {
        LSC_CallErrFunc_x00169878(ext_str0_x00169878);
    } else {
        lsc->stat = 0;
        lsc->sj = sj;
        lsc->unk18 = (*(sj)->vtbl->GetNumData)(sj, 0) + (*(sj)->vtbl->GetNumData)(sj, 1);
        lsc->flow_limit = (lsc->unk18 * 8) / 10;
        for (i = 0; i < 16; i++) {
            lsc->stm[i].stat = 0;
        }
        lsc->used = 1;
    }
    LSC_UnlockCrs_x00169878(&lock);
    return lsc;
}
s32 func_00169C40_x00169980() __asm__("func_00169C40");
s32 memset_x00169980(s8 *, s32, s32) __asm__("memset");
void func_00169980_x00169980(s8 *arg0) __asm__("func_00169980");
void func_00169980_x00169980(s8 *arg0) {
    if (arg0 != NULL) {
        func_00169C40_x00169980();
        *arg0 = 0;
        memset_x00169980(arg0, 0, 0x238);
    }
}
void func_001699D0_x001699D0(u8 *arg0, s32 arg1) __asm__("func_001699D0");
void func_001699D0_x001699D0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x28) = arg1;
}
typedef unsigned int u32_x001699D8;
extern u32_x001699D8 fn_80056E9C_x001699D8(u32_x001699D8, u32_x001699D8, u32_x001699D8, u32_x001699D8, u32_x001699D8) __asm__("func_00169A00");
void func_001699D8_x001699D8(u32_x001699D8 arg0, u32_x001699D8 arg1) __asm__("func_001699D8");
/* fn_800570DC: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_800570DC.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001699D8_x001699D8(u32_x001699D8 arg0, u32_x001699D8 arg1) {
    fn_80056E9C_x001699D8(arg0, arg1, 0, 0, (0x100000 - 1));
}
typedef unsigned int size_t_x00169A00;
typedef unsigned char Uint8_x00169A00;
typedef char Sint8_x00169A00;
typedef unsigned short Uint16_x00169A00;
typedef unsigned int Uint32_x00169A00;
typedef signed int Sint32_x00169A00;
typedef char Char8_x00169A00;
typedef struct _UUID_x00169A00 {
    Uint32_x00169A00 Data1;
    Uint16_x00169A00 Data2;
    Uint16_x00169A00 Data3;
    Uint8_x00169A00 Data4[8];
} UUID_x00169A00;
typedef struct {
        Sint8_x00169A00 *data;
        Sint32_x00169A00 len;
} SJCK_x00169A00;
typedef struct {
        struct _sj_vtbl_x00169A00 *vtbl;
} SJ_OBJ_x00169A00;
typedef SJ_OBJ_x00169A00 *SJ_x00169A00;
typedef struct _sj_vtbl_x00169A00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169A00 sj);
        UUID_x00169A00 *(*GetUuid)(SJ_x00169A00 sj);
        void (*Reset)(SJ_x00169A00 sj);
        void (*GetChunk)(SJ_x00169A00 sj, Sint32_x00169A00 id, Sint32_x00169A00 nbyte, SJCK_x00169A00 *ck);
        void (*UngetChunk)(SJ_x00169A00 sj, Sint32_x00169A00 id, SJCK_x00169A00 *ck);
        void (*PutChunk)(SJ_x00169A00 sj, Sint32_x00169A00 id, SJCK_x00169A00 *ck);
        Sint32_x00169A00 (*GetNumData)(SJ_x00169A00 sj, Sint32_x00169A00 id);
        Sint32_x00169A00 (*IsGetChunk)(SJ_x00169A00 sj, Sint32_x00169A00 id, Sint32_x00169A00 nbyte, Sint32_x00169A00 *rbyte);
        void (*EntryErrFunc)(SJ_x00169A00 sj,
                                        void (*func)(void *obj, Sint32_x00169A00 ecode), void *obj);
} SJ_IF_x00169A00;
extern int* sceCdCallback_x00169A00(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169A00 unk0;
    Sint8_x00169A00 stat;
    Sint8_x00169A00 read_flg;
    Sint8_x00169A00 unk3;
    SJ_x00169A00 sj;
    void* cvfs;
    Sint32_x00169A00 unkC;
    Sint32_x00169A00 file_len;
    Sint32_x00169A00 file_sct;
    Sint32_x00169A00 unk18;
    Sint32_x00169A00 unk1C;
    Sint32_x00169A00 unk20;
    SJCK_x00169A00 unk24;
    Sint32_x00169A00 req_rd_size;
    Sint32_x00169A00 eos;
    Uint32_x00169A00 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169A00 unk40;
    Sint8_x00169A00 pause;
    Sint8_x00169A00 unk45;
    Sint8_x00169A00 unk46;
    Sint8_x00169A00 unk47;
    Sint8_x00169A00 unk48;
    Sint8_x00169A00 unk49;
    char pad4A[6];
    const Char8_x00169A00* fname;
    void* dir;
    Sint32_x00169A00 cur_ofst;
    Uint32_x00169A00 unk5C;
} ADXSTM_OBJ_x00169A00;
typedef ADXSTM_OBJ_x00169A00* ADXSTM_x00169A00;
typedef struct {
    Sint32_x00169A00 id;
    const Char8_x00169A00* fname;
    Sint32_x00169A00 unk8;
    void* dir;
    Sint32_x00169A00 unk10;
    Sint32_x00169A00 unk14;
    Sint32_x00169A00 stat;
    Sint32_x00169A00 rd_sct;
} LSC_STM_x00169A00;
typedef struct {
    Sint8_x00169A00 used;
    Sint8_x00169A00 stat;
    Sint8_x00169A00 unk2;
    Sint8_x00169A00 lp_flg;
    Sint8_x00169A00 unk4;
    SJ_x00169A00 sj;
    Sint32_x00169A00 unkC;
    Sint32_x00169A00 unk10;
    Sint32_x00169A00 flow_limit;
    Sint32_x00169A00 unk18;
    Sint32_x00169A00 last_stm_index;
    Sint32_x00169A00 unk20;
    Sint32_x00169A00 num_stm;
    ADXSTM_x00169A00 stm_hndl;
    Sint32_x00169A00 unk2C;
    char pad30[4];
    Sint32_x00169A00 unk34;
    LSC_STM_x00169A00 stm[16];
} LSC_OBJ_x00169A00;
typedef LSC_OBJ_x00169A00* LSC_x00169A00;
extern void LSC_EntryErrFunc_x00169A00(void (*)(void*, Char8_x00169A00*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169A00(const Char8_x00169A00* format, ...) __asm__("func_0016A1C0");
size_t_x00169A00 strlen_x00169A00(const char* s) __asm__("func_00127BA0");
extern char ext_str0_x00169A00[] __asm__("D_00463DF0");
extern char ext_str1_x00169A00[] __asm__("D_00463DC8");
Sint32_x00169A00 func_00169A00_x00169A00(LSC_x00169A00 lsc, const Char8_x00169A00* fname, void* dir, Sint32_x00169A00 ofst, Sint32_x00169A00 fnsct) __asm__("func_00169A00");
/* LSC_EntryFileRange: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00169A00 func_00169A00_x00169A00(LSC_x00169A00 lsc, const Char8_x00169A00* fname, void* dir, Sint32_x00169A00 ofst, Sint32_x00169A00 fnsct) {
    LSC_STM_x00169A00* stm;
    Sint32_x00169A00 id;
    size_t_x00169A00 fname_length;
    Sint32_x00169A00 i;
    Sint32_x00169A00 prev_stm_index;
    if (lsc == 0) {
        LSC_CallErrFunc_x00169A00(ext_str1_x00169A00);
        return -1;
    }
    if (lsc->num_stm >= 16) {
        return -1;
    }
    if (fname == 0) {
        LSC_CallErrFunc_x00169A00(ext_str0_x00169A00, fname);
        return -1;
    }
    stm = &lsc->stm[lsc->last_stm_index];
    prev_stm_index = (lsc->last_stm_index + 16 - 1) % 16;
    stm->fname = fname;
    id = (((lsc->stm[prev_stm_index].id) != 0x7FFFFFFF) ? ((lsc->stm[prev_stm_index].id) + 1) : 0);
    stm->id = id;
    fname_length = strlen_x00169A00(fname);
    stm->unk8 = 0;
    for (i = 0; i < fname_length; i++) {
        stm->unk8 += (Uint8_x00169A00)fname[i];
    }
    stm->unk10 = ofst;
    stm->unk14 = fnsct;
    stm->dir = dir;
    stm->stat = 0;
    stm->rd_sct = 0;
    lsc->num_stm += 1;
    lsc->last_stm_index += 1;
    lsc->last_stm_index %= 16;
    if (lsc->stat == 1) {
        lsc->stat = 2;
    }
    return id;
}
typedef unsigned char Uint8_x00169B98;
typedef char Sint8_x00169B98;
typedef unsigned short Uint16_x00169B98;
typedef unsigned int Uint32_x00169B98;
typedef signed int Sint32_x00169B98;
typedef char Char8_x00169B98;
typedef struct _UUID_x00169B98 {
    Uint32_x00169B98 Data1;
    Uint16_x00169B98 Data2;
    Uint16_x00169B98 Data3;
    Uint8_x00169B98 Data4[8];
} UUID_x00169B98;
typedef struct {
        Sint8_x00169B98 *data;
        Sint32_x00169B98 len;
} SJCK_x00169B98;
typedef struct {
        struct _sj_vtbl_x00169B98 *vtbl;
} SJ_OBJ_x00169B98;
typedef SJ_OBJ_x00169B98 *SJ_x00169B98;
typedef struct _sj_vtbl_x00169B98 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169B98 sj);
        UUID_x00169B98 *(*GetUuid)(SJ_x00169B98 sj);
        void (*Reset)(SJ_x00169B98 sj);
        void (*GetChunk)(SJ_x00169B98 sj, Sint32_x00169B98 id, Sint32_x00169B98 nbyte, SJCK_x00169B98 *ck);
        void (*UngetChunk)(SJ_x00169B98 sj, Sint32_x00169B98 id, SJCK_x00169B98 *ck);
        void (*PutChunk)(SJ_x00169B98 sj, Sint32_x00169B98 id, SJCK_x00169B98 *ck);
        Sint32_x00169B98 (*GetNumData)(SJ_x00169B98 sj, Sint32_x00169B98 id);
        Sint32_x00169B98 (*IsGetChunk)(SJ_x00169B98 sj, Sint32_x00169B98 id, Sint32_x00169B98 nbyte, Sint32_x00169B98 *rbyte);
        void (*EntryErrFunc)(SJ_x00169B98 sj,
                                        void (*func)(void *obj, Sint32_x00169B98 ecode), void *obj);
} SJ_IF_x00169B98;
extern int* sceCdCallback_x00169B98(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169B98 unk0;
    Sint8_x00169B98 stat;
    Sint8_x00169B98 read_flg;
    Sint8_x00169B98 unk3;
    SJ_x00169B98 sj;
    void* cvfs;
    Sint32_x00169B98 unkC;
    Sint32_x00169B98 file_len;
    Sint32_x00169B98 file_sct;
    Sint32_x00169B98 unk18;
    Sint32_x00169B98 unk1C;
    Sint32_x00169B98 unk20;
    SJCK_x00169B98 unk24;
    Sint32_x00169B98 req_rd_size;
    Sint32_x00169B98 eos;
    Uint32_x00169B98 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169B98 unk40;
    Sint8_x00169B98 pause;
    Sint8_x00169B98 unk45;
    Sint8_x00169B98 unk46;
    Sint8_x00169B98 unk47;
    Sint8_x00169B98 unk48;
    Sint8_x00169B98 unk49;
    char pad4A[6];
    const Char8_x00169B98* fname;
    void* dir;
    Sint32_x00169B98 cur_ofst;
    Uint32_x00169B98 unk5C;
} ADXSTM_OBJ_x00169B98;
typedef ADXSTM_OBJ_x00169B98* ADXSTM_x00169B98;
typedef struct {
    Sint32_x00169B98 id;
    const Char8_x00169B98* fname;
    Sint32_x00169B98 unk8;
    void* dir;
    Sint32_x00169B98 unk10;
    Sint32_x00169B98 unk14;
    Sint32_x00169B98 stat;
    Sint32_x00169B98 rd_sct;
} LSC_STM_x00169B98;
typedef struct {
    Sint8_x00169B98 used;
    Sint8_x00169B98 stat;
    Sint8_x00169B98 unk2;
    Sint8_x00169B98 lp_flg;
    Sint8_x00169B98 unk4;
    SJ_x00169B98 sj;
    Sint32_x00169B98 unkC;
    Sint32_x00169B98 unk10;
    Sint32_x00169B98 flow_limit;
    Sint32_x00169B98 unk18;
    Sint32_x00169B98 last_stm_index;
    Sint32_x00169B98 unk20;
    Sint32_x00169B98 num_stm;
    ADXSTM_x00169B98 stm_hndl;
    Sint32_x00169B98 unk2C;
    char pad30[4];
    Sint32_x00169B98 unk34;
    LSC_STM_x00169B98 stm[16];
} LSC_OBJ_x00169B98;
typedef LSC_OBJ_x00169B98* LSC_x00169B98;
extern void LSC_EntryErrFunc_x00169B98(void (*)(void*, Char8_x00169B98*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169B98(const Char8_x00169B98* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169B98[] __asm__("D_00463DC8");
void func_00169B98_x00169B98(LSC_x00169B98 lsc) __asm__("func_00169B98");
/* LSC_ResetEntry: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00169B98_x00169B98(LSC_x00169B98 lsc) {
    if (lsc == 0) {
        LSC_CallErrFunc_x00169B98(ext_str0_x00169B98);
        return;
    }
    if (lsc->stat == 0) {
        lsc->last_stm_index = 0;
        lsc->unk20 = 0;
        lsc->num_stm = 0;
    }
}
typedef unsigned char Uint8_x00169BD8;
typedef char Sint8_x00169BD8;
typedef unsigned short Uint16_x00169BD8;
typedef unsigned int Uint32_x00169BD8;
typedef signed int Sint32_x00169BD8;
typedef char Char8_x00169BD8;
typedef struct _UUID_x00169BD8 {
    Uint32_x00169BD8 Data1;
    Uint16_x00169BD8 Data2;
    Uint16_x00169BD8 Data3;
    Uint8_x00169BD8 Data4[8];
} UUID_x00169BD8;
typedef struct {
        Sint8_x00169BD8 *data;
        Sint32_x00169BD8 len;
} SJCK_x00169BD8;
typedef struct {
        struct _sj_vtbl_x00169BD8 *vtbl;
} SJ_OBJ_x00169BD8;
typedef SJ_OBJ_x00169BD8 *SJ_x00169BD8;
typedef struct _sj_vtbl_x00169BD8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169BD8 sj);
        UUID_x00169BD8 *(*GetUuid)(SJ_x00169BD8 sj);
        void (*Reset)(SJ_x00169BD8 sj);
        void (*GetChunk)(SJ_x00169BD8 sj, Sint32_x00169BD8 id, Sint32_x00169BD8 nbyte, SJCK_x00169BD8 *ck);
        void (*UngetChunk)(SJ_x00169BD8 sj, Sint32_x00169BD8 id, SJCK_x00169BD8 *ck);
        void (*PutChunk)(SJ_x00169BD8 sj, Sint32_x00169BD8 id, SJCK_x00169BD8 *ck);
        Sint32_x00169BD8 (*GetNumData)(SJ_x00169BD8 sj, Sint32_x00169BD8 id);
        Sint32_x00169BD8 (*IsGetChunk)(SJ_x00169BD8 sj, Sint32_x00169BD8 id, Sint32_x00169BD8 nbyte, Sint32_x00169BD8 *rbyte);
        void (*EntryErrFunc)(SJ_x00169BD8 sj,
                                        void (*func)(void *obj, Sint32_x00169BD8 ecode), void *obj);
} SJ_IF_x00169BD8;
extern int* sceCdCallback_x00169BD8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169BD8 unk0;
    Sint8_x00169BD8 stat;
    Sint8_x00169BD8 read_flg;
    Sint8_x00169BD8 unk3;
    SJ_x00169BD8 sj;
    void* cvfs;
    Sint32_x00169BD8 unkC;
    Sint32_x00169BD8 file_len;
    Sint32_x00169BD8 file_sct;
    Sint32_x00169BD8 unk18;
    Sint32_x00169BD8 unk1C;
    Sint32_x00169BD8 unk20;
    SJCK_x00169BD8 unk24;
    Sint32_x00169BD8 req_rd_size;
    Sint32_x00169BD8 eos;
    Uint32_x00169BD8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169BD8 unk40;
    Sint8_x00169BD8 pause;
    Sint8_x00169BD8 unk45;
    Sint8_x00169BD8 unk46;
    Sint8_x00169BD8 unk47;
    Sint8_x00169BD8 unk48;
    Sint8_x00169BD8 unk49;
    char pad4A[6];
    const Char8_x00169BD8* fname;
    void* dir;
    Sint32_x00169BD8 cur_ofst;
    Uint32_x00169BD8 unk5C;
} ADXSTM_OBJ_x00169BD8;
typedef ADXSTM_OBJ_x00169BD8* ADXSTM_x00169BD8;
typedef struct {
    Sint32_x00169BD8 id;
    const Char8_x00169BD8* fname;
    Sint32_x00169BD8 unk8;
    void* dir;
    Sint32_x00169BD8 unk10;
    Sint32_x00169BD8 unk14;
    Sint32_x00169BD8 stat;
    Sint32_x00169BD8 rd_sct;
} LSC_STM_x00169BD8;
typedef struct {
    Sint8_x00169BD8 used;
    Sint8_x00169BD8 stat;
    Sint8_x00169BD8 unk2;
    Sint8_x00169BD8 lp_flg;
    Sint8_x00169BD8 unk4;
    SJ_x00169BD8 sj;
    Sint32_x00169BD8 unkC;
    Sint32_x00169BD8 unk10;
    Sint32_x00169BD8 flow_limit;
    Sint32_x00169BD8 unk18;
    Sint32_x00169BD8 last_stm_index;
    Sint32_x00169BD8 unk20;
    Sint32_x00169BD8 num_stm;
    ADXSTM_x00169BD8 stm_hndl;
    Sint32_x00169BD8 unk2C;
    char pad30[4];
    Sint32_x00169BD8 unk34;
    LSC_STM_x00169BD8 stm[16];
} LSC_OBJ_x00169BD8;
typedef LSC_OBJ_x00169BD8* LSC_x00169BD8;
void LSC_Stop_x00169BD8(LSC_x00169BD8 lsc) __asm__("func_00169C40");
extern void LSC_EntryErrFunc_x00169BD8(void (*)(void*, Char8_x00169BD8*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169BD8(const Char8_x00169BD8* format, ...) __asm__("func_0016A1C0");
void LSC_Stop_x00169BD8(LSC_x00169BD8 lsc) __asm__("func_00169C40");
extern char ext_str0_x00169BD8[] __asm__("D_00463DC8");
void func_00169BD8_x00169BD8(LSC_x00169BD8 lsc) __asm__("func_00169BD8");
/* LSC_Start: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00169BD8_x00169BD8(LSC_x00169BD8 lsc) {
    if (lsc == 0) {
        LSC_CallErrFunc_x00169BD8(ext_str0_x00169BD8);
        return;
    }
    if (lsc->stat != 0) {
        LSC_Stop_x00169BD8(lsc);
    }
    if (lsc->num_stm > 0) {
        lsc->stat = 2;
    } else {
        lsc->stat = 1;
    }
}
s32 func_0015CE38_x00169C40(s32) __asm__("func_0015CE38");
s32 func_00169B98_x00169C40(void *) __asm__("func_00169B98");
s32 func_0016A1C0_x00169C40(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169C40 __asm__("D_00463DC8");
void func_00169C40_x00169C40(u8 *arg0) __asm__("func_00169C40");
void func_00169C40_x00169C40(u8 *arg0) {
    s32 temp_a0;

    if (arg0 == NULL) {
        func_0016A1C0_x00169C40(&D_00463DC8_x00169C40);
        return;
    }
    if (*(s8 *)((u8 *)arg0 + 1) != 0) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
        *(s8 *)((u8 *)arg0 + 1) = 0;
        if ((temp_a0 != 0) && (*(s8 *)((u8 *)arg0 + 2) == 1)) {
            func_0015CE38_x00169C40(temp_a0);
            *(s8 *)((u8 *)arg0 + 2) = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        func_00169B98_x00169C40(arg0);
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    }
}
typedef unsigned char Uint8_x00169CC8;
typedef char Sint8_x00169CC8;
typedef unsigned short Uint16_x00169CC8;
typedef unsigned int Uint32_x00169CC8;
typedef signed int Sint32_x00169CC8;
typedef char Char8_x00169CC8;
typedef struct _UUID_x00169CC8 {
    Uint32_x00169CC8 Data1;
    Uint16_x00169CC8 Data2;
    Uint16_x00169CC8 Data3;
    Uint8_x00169CC8 Data4[8];
} UUID_x00169CC8;
typedef struct {
        Sint8_x00169CC8 *data;
        Sint32_x00169CC8 len;
} SJCK_x00169CC8;
typedef struct {
        struct _sj_vtbl_x00169CC8 *vtbl;
} SJ_OBJ_x00169CC8;
typedef SJ_OBJ_x00169CC8 *SJ_x00169CC8;
typedef struct _sj_vtbl_x00169CC8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169CC8 sj);
        UUID_x00169CC8 *(*GetUuid)(SJ_x00169CC8 sj);
        void (*Reset)(SJ_x00169CC8 sj);
        void (*GetChunk)(SJ_x00169CC8 sj, Sint32_x00169CC8 id, Sint32_x00169CC8 nbyte, SJCK_x00169CC8 *ck);
        void (*UngetChunk)(SJ_x00169CC8 sj, Sint32_x00169CC8 id, SJCK_x00169CC8 *ck);
        void (*PutChunk)(SJ_x00169CC8 sj, Sint32_x00169CC8 id, SJCK_x00169CC8 *ck);
        Sint32_x00169CC8 (*GetNumData)(SJ_x00169CC8 sj, Sint32_x00169CC8 id);
        Sint32_x00169CC8 (*IsGetChunk)(SJ_x00169CC8 sj, Sint32_x00169CC8 id, Sint32_x00169CC8 nbyte, Sint32_x00169CC8 *rbyte);
        void (*EntryErrFunc)(SJ_x00169CC8 sj,
                                        void (*func)(void *obj, Sint32_x00169CC8 ecode), void *obj);
} SJ_IF_x00169CC8;
extern int* sceCdCallback_x00169CC8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169CC8 unk0;
    Sint8_x00169CC8 stat;
    Sint8_x00169CC8 read_flg;
    Sint8_x00169CC8 unk3;
    SJ_x00169CC8 sj;
    void* cvfs;
    Sint32_x00169CC8 unkC;
    Sint32_x00169CC8 file_len;
    Sint32_x00169CC8 file_sct;
    Sint32_x00169CC8 unk18;
    Sint32_x00169CC8 unk1C;
    Sint32_x00169CC8 unk20;
    SJCK_x00169CC8 unk24;
    Sint32_x00169CC8 req_rd_size;
    Sint32_x00169CC8 eos;
    Uint32_x00169CC8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169CC8 unk40;
    Sint8_x00169CC8 pause;
    Sint8_x00169CC8 unk45;
    Sint8_x00169CC8 unk46;
    Sint8_x00169CC8 unk47;
    Sint8_x00169CC8 unk48;
    Sint8_x00169CC8 unk49;
    char pad4A[6];
    const Char8_x00169CC8* fname;
    void* dir;
    Sint32_x00169CC8 cur_ofst;
    Uint32_x00169CC8 unk5C;
} ADXSTM_OBJ_x00169CC8;
typedef ADXSTM_OBJ_x00169CC8* ADXSTM_x00169CC8;
typedef struct {
    Sint32_x00169CC8 id;
    const Char8_x00169CC8* fname;
    Sint32_x00169CC8 unk8;
    void* dir;
    Sint32_x00169CC8 unk10;
    Sint32_x00169CC8 unk14;
    Sint32_x00169CC8 stat;
    Sint32_x00169CC8 rd_sct;
} LSC_STM_x00169CC8;
typedef struct {
    Sint8_x00169CC8 used;
    Sint8_x00169CC8 stat;
    Sint8_x00169CC8 unk2;
    Sint8_x00169CC8 lp_flg;
    Sint8_x00169CC8 unk4;
    SJ_x00169CC8 sj;
    Sint32_x00169CC8 unkC;
    Sint32_x00169CC8 unk10;
    Sint32_x00169CC8 flow_limit;
    Sint32_x00169CC8 unk18;
    Sint32_x00169CC8 last_stm_index;
    Sint32_x00169CC8 unk20;
    Sint32_x00169CC8 num_stm;
    ADXSTM_x00169CC8 stm_hndl;
    Sint32_x00169CC8 unk2C;
    char pad30[4];
    Sint32_x00169CC8 unk34;
    LSC_STM_x00169CC8 stm[16];
} LSC_OBJ_x00169CC8;
typedef LSC_OBJ_x00169CC8* LSC_x00169CC8;
extern void LSC_EntryErrFunc_x00169CC8(void (*)(void*, Char8_x00169CC8*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169CC8(const Char8_x00169CC8* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169CC8[] __asm__("D_00463DC8");
void func_00169CC8_x00169CC8(LSC_x00169CC8 lsc, Sint32_x00169CC8 sw) __asm__("func_00169CC8");
/* LSC_Pause: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00169CC8_x00169CC8(LSC_x00169CC8 lsc, Sint32_x00169CC8 sw) {
    if (lsc == 0) {
        LSC_CallErrFunc_x00169CC8(ext_str0_x00169CC8);
        return;
    }
    if (sw == 1) {
        lsc->unk4 = 1;
    } else {
        lsc->unk4 = 0;
    }
}
s32 func_0016A698_x00169D08(s8 *) __asm__("func_0016A698");
extern s8 D_00413F80_x00169D08 __asm__("D_00413F80");
void func_00169D08_x00169D08(void) __asm__("func_00169D08");
void func_00169D08_x00169D08(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00413F80_x00169D08;
    var_s1 = 0x1F;
    do {
        if (*var_s0 == 1) {
            func_0016A698_x00169D08(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x238;
    } while (var_s1 >= 0);
}
s32 func_0016A1C0_x00169D68(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169D68 __asm__("D_00463DC8");
s8 func_00169D68_x00169D68(u8 *arg0) __asm__("func_00169D68");
s8 func_00169D68_x00169D68(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x00169D68(&D_00463DC8_x00169D68);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
s32 func_0016A1C0_x00169D98(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169D98 __asm__("D_00463DC8");
s32 func_00169D98_x00169D98(u8 *arg0) __asm__("func_00169D98");
s32 func_00169D98_x00169D98(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x00169D98(&D_00463DC8_x00169D98);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x24);
}
typedef unsigned char Uint8_x00169DC8;
typedef char Sint8_x00169DC8;
typedef unsigned short Uint16_x00169DC8;
typedef unsigned int Uint32_x00169DC8;
typedef signed int Sint32_x00169DC8;
typedef char Char8_x00169DC8;
typedef struct _UUID_x00169DC8 {
    Uint32_x00169DC8 Data1;
    Uint16_x00169DC8 Data2;
    Uint16_x00169DC8 Data3;
    Uint8_x00169DC8 Data4[8];
} UUID_x00169DC8;
typedef struct {
        Sint8_x00169DC8 *data;
        Sint32_x00169DC8 len;
} SJCK_x00169DC8;
typedef struct {
        struct _sj_vtbl_x00169DC8 *vtbl;
} SJ_OBJ_x00169DC8;
typedef SJ_OBJ_x00169DC8 *SJ_x00169DC8;
typedef struct _sj_vtbl_x00169DC8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169DC8 sj);
        UUID_x00169DC8 *(*GetUuid)(SJ_x00169DC8 sj);
        void (*Reset)(SJ_x00169DC8 sj);
        void (*GetChunk)(SJ_x00169DC8 sj, Sint32_x00169DC8 id, Sint32_x00169DC8 nbyte, SJCK_x00169DC8 *ck);
        void (*UngetChunk)(SJ_x00169DC8 sj, Sint32_x00169DC8 id, SJCK_x00169DC8 *ck);
        void (*PutChunk)(SJ_x00169DC8 sj, Sint32_x00169DC8 id, SJCK_x00169DC8 *ck);
        Sint32_x00169DC8 (*GetNumData)(SJ_x00169DC8 sj, Sint32_x00169DC8 id);
        Sint32_x00169DC8 (*IsGetChunk)(SJ_x00169DC8 sj, Sint32_x00169DC8 id, Sint32_x00169DC8 nbyte, Sint32_x00169DC8 *rbyte);
        void (*EntryErrFunc)(SJ_x00169DC8 sj,
                                        void (*func)(void *obj, Sint32_x00169DC8 ecode), void *obj);
} SJ_IF_x00169DC8;
extern int* sceCdCallback_x00169DC8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169DC8 unk0;
    Sint8_x00169DC8 stat;
    Sint8_x00169DC8 read_flg;
    Sint8_x00169DC8 unk3;
    SJ_x00169DC8 sj;
    void* cvfs;
    Sint32_x00169DC8 unkC;
    Sint32_x00169DC8 file_len;
    Sint32_x00169DC8 file_sct;
    Sint32_x00169DC8 unk18;
    Sint32_x00169DC8 unk1C;
    Sint32_x00169DC8 unk20;
    SJCK_x00169DC8 unk24;
    Sint32_x00169DC8 req_rd_size;
    Sint32_x00169DC8 eos;
    Uint32_x00169DC8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169DC8 unk40;
    Sint8_x00169DC8 pause;
    Sint8_x00169DC8 unk45;
    Sint8_x00169DC8 unk46;
    Sint8_x00169DC8 unk47;
    Sint8_x00169DC8 unk48;
    Sint8_x00169DC8 unk49;
    char pad4A[6];
    const Char8_x00169DC8* fname;
    void* dir;
    Sint32_x00169DC8 cur_ofst;
    Uint32_x00169DC8 unk5C;
} ADXSTM_OBJ_x00169DC8;
typedef ADXSTM_OBJ_x00169DC8* ADXSTM_x00169DC8;
typedef struct {
    Sint32_x00169DC8 id;
    const Char8_x00169DC8* fname;
    Sint32_x00169DC8 unk8;
    void* dir;
    Sint32_x00169DC8 unk10;
    Sint32_x00169DC8 unk14;
    Sint32_x00169DC8 stat;
    Sint32_x00169DC8 rd_sct;
} LSC_STM_x00169DC8;
typedef struct {
    Sint8_x00169DC8 used;
    Sint8_x00169DC8 stat;
    Sint8_x00169DC8 unk2;
    Sint8_x00169DC8 lp_flg;
    Sint8_x00169DC8 unk4;
    SJ_x00169DC8 sj;
    Sint32_x00169DC8 unkC;
    Sint32_x00169DC8 unk10;
    Sint32_x00169DC8 flow_limit;
    Sint32_x00169DC8 unk18;
    Sint32_x00169DC8 last_stm_index;
    Sint32_x00169DC8 unk20;
    Sint32_x00169DC8 num_stm;
    ADXSTM_x00169DC8 stm_hndl;
    Sint32_x00169DC8 unk2C;
    char pad30[4];
    Sint32_x00169DC8 unk34;
    LSC_STM_x00169DC8 stm[16];
} LSC_OBJ_x00169DC8;
typedef LSC_OBJ_x00169DC8* LSC_x00169DC8;
extern void LSC_EntryErrFunc_x00169DC8(void (*)(void*, Char8_x00169DC8*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169DC8(const Char8_x00169DC8* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169DC8[] __asm__("D_00463E18");
extern char ext_str1_x00169DC8[] __asm__("D_00463DC8");
Sint32_x00169DC8 func_00169DC8_x00169DC8(LSC_x00169DC8 lsc, Sint32_x00169DC8 no) __asm__("func_00169DC8");
/* LSC_GetStmId: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00169DC8 func_00169DC8_x00169DC8(LSC_x00169DC8 lsc, Sint32_x00169DC8 no) {
    Sint32_x00169DC8 stream_index;
    if (lsc == 0) {
        LSC_CallErrFunc_x00169DC8(ext_str1_x00169DC8);
        return -1;
    }
    if (no < 0 || no >= lsc->num_stm) {
        LSC_CallErrFunc_x00169DC8(ext_str0_x00169DC8, no);
        return -1;
    }
    stream_index = (lsc->unk20 + no) % 16;
    return lsc->stm[stream_index].id;
}
typedef unsigned char Uint8_x00169E58;
typedef char Sint8_x00169E58;
typedef unsigned short Uint16_x00169E58;
typedef unsigned int Uint32_x00169E58;
typedef signed int Sint32_x00169E58;
typedef char Char8_x00169E58;
typedef struct _UUID_x00169E58 {
    Uint32_x00169E58 Data1;
    Uint16_x00169E58 Data2;
    Uint16_x00169E58 Data3;
    Uint8_x00169E58 Data4[8];
} UUID_x00169E58;
typedef struct {
        Sint8_x00169E58 *data;
        Sint32_x00169E58 len;
} SJCK_x00169E58;
typedef struct {
        struct _sj_vtbl_x00169E58 *vtbl;
} SJ_OBJ_x00169E58;
typedef SJ_OBJ_x00169E58 *SJ_x00169E58;
typedef struct _sj_vtbl_x00169E58 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169E58 sj);
        UUID_x00169E58 *(*GetUuid)(SJ_x00169E58 sj);
        void (*Reset)(SJ_x00169E58 sj);
        void (*GetChunk)(SJ_x00169E58 sj, Sint32_x00169E58 id, Sint32_x00169E58 nbyte, SJCK_x00169E58 *ck);
        void (*UngetChunk)(SJ_x00169E58 sj, Sint32_x00169E58 id, SJCK_x00169E58 *ck);
        void (*PutChunk)(SJ_x00169E58 sj, Sint32_x00169E58 id, SJCK_x00169E58 *ck);
        Sint32_x00169E58 (*GetNumData)(SJ_x00169E58 sj, Sint32_x00169E58 id);
        Sint32_x00169E58 (*IsGetChunk)(SJ_x00169E58 sj, Sint32_x00169E58 id, Sint32_x00169E58 nbyte, Sint32_x00169E58 *rbyte);
        void (*EntryErrFunc)(SJ_x00169E58 sj,
                                        void (*func)(void *obj, Sint32_x00169E58 ecode), void *obj);
} SJ_IF_x00169E58;
extern int* sceCdCallback_x00169E58(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169E58 unk0;
    Sint8_x00169E58 stat;
    Sint8_x00169E58 read_flg;
    Sint8_x00169E58 unk3;
    SJ_x00169E58 sj;
    void* cvfs;
    Sint32_x00169E58 unkC;
    Sint32_x00169E58 file_len;
    Sint32_x00169E58 file_sct;
    Sint32_x00169E58 unk18;
    Sint32_x00169E58 unk1C;
    Sint32_x00169E58 unk20;
    SJCK_x00169E58 unk24;
    Sint32_x00169E58 req_rd_size;
    Sint32_x00169E58 eos;
    Uint32_x00169E58 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169E58 unk40;
    Sint8_x00169E58 pause;
    Sint8_x00169E58 unk45;
    Sint8_x00169E58 unk46;
    Sint8_x00169E58 unk47;
    Sint8_x00169E58 unk48;
    Sint8_x00169E58 unk49;
    char pad4A[6];
    const Char8_x00169E58* fname;
    void* dir;
    Sint32_x00169E58 cur_ofst;
    Uint32_x00169E58 unk5C;
} ADXSTM_OBJ_x00169E58;
typedef ADXSTM_OBJ_x00169E58* ADXSTM_x00169E58;
typedef struct {
    Sint32_x00169E58 id;
    const Char8_x00169E58* fname;
    Sint32_x00169E58 unk8;
    void* dir;
    Sint32_x00169E58 unk10;
    Sint32_x00169E58 unk14;
    Sint32_x00169E58 stat;
    Sint32_x00169E58 rd_sct;
} LSC_STM_x00169E58;
typedef struct {
    Sint8_x00169E58 used;
    Sint8_x00169E58 stat;
    Sint8_x00169E58 unk2;
    Sint8_x00169E58 lp_flg;
    Sint8_x00169E58 unk4;
    SJ_x00169E58 sj;
    Sint32_x00169E58 unkC;
    Sint32_x00169E58 unk10;
    Sint32_x00169E58 flow_limit;
    Sint32_x00169E58 unk18;
    Sint32_x00169E58 last_stm_index;
    Sint32_x00169E58 unk20;
    Sint32_x00169E58 num_stm;
    ADXSTM_x00169E58 stm_hndl;
    Sint32_x00169E58 unk2C;
    char pad30[4];
    Sint32_x00169E58 unk34;
    LSC_STM_x00169E58 stm[16];
} LSC_OBJ_x00169E58;
typedef LSC_OBJ_x00169E58* LSC_x00169E58;
extern void LSC_EntryErrFunc_x00169E58(void (*)(void*, Char8_x00169E58*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169E58(const Char8_x00169E58* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169E58[] __asm__("D_00463E38");
extern char ext_str1_x00169E58[] __asm__("D_00463DC8");
const Char8_x00169E58* func_00169E58_x00169E58(LSC_x00169E58 lsc, Sint32_x00169E58 stm_id) __asm__("func_00169E58");
/* LSC_GetStmFname: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
const Char8_x00169E58* func_00169E58_x00169E58(LSC_x00169E58 lsc, Sint32_x00169E58 stm_id) {
    Sint32_x00169E58 i;
    if (lsc == 0) {
        LSC_CallErrFunc_x00169E58(ext_str1_x00169E58);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (lsc->stm[i].id == stm_id) {
            break;
        }
    }
    if (i == 16) {
        LSC_CallErrFunc_x00169E58(ext_str0_x00169E58, stm_id);
        return 0;
    }
    return lsc->stm[i].fname;
}
typedef unsigned char Uint8_x00169EF0;
typedef char Sint8_x00169EF0;
typedef unsigned short Uint16_x00169EF0;
typedef unsigned int Uint32_x00169EF0;
typedef signed int Sint32_x00169EF0;
typedef char Char8_x00169EF0;
typedef struct _UUID_x00169EF0 {
    Uint32_x00169EF0 Data1;
    Uint16_x00169EF0 Data2;
    Uint16_x00169EF0 Data3;
    Uint8_x00169EF0 Data4[8];
} UUID_x00169EF0;
typedef struct {
        Sint8_x00169EF0 *data;
        Sint32_x00169EF0 len;
} SJCK_x00169EF0;
typedef struct {
        struct _sj_vtbl_x00169EF0 *vtbl;
} SJ_OBJ_x00169EF0;
typedef SJ_OBJ_x00169EF0 *SJ_x00169EF0;
typedef struct _sj_vtbl_x00169EF0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169EF0 sj);
        UUID_x00169EF0 *(*GetUuid)(SJ_x00169EF0 sj);
        void (*Reset)(SJ_x00169EF0 sj);
        void (*GetChunk)(SJ_x00169EF0 sj, Sint32_x00169EF0 id, Sint32_x00169EF0 nbyte, SJCK_x00169EF0 *ck);
        void (*UngetChunk)(SJ_x00169EF0 sj, Sint32_x00169EF0 id, SJCK_x00169EF0 *ck);
        void (*PutChunk)(SJ_x00169EF0 sj, Sint32_x00169EF0 id, SJCK_x00169EF0 *ck);
        Sint32_x00169EF0 (*GetNumData)(SJ_x00169EF0 sj, Sint32_x00169EF0 id);
        Sint32_x00169EF0 (*IsGetChunk)(SJ_x00169EF0 sj, Sint32_x00169EF0 id, Sint32_x00169EF0 nbyte, Sint32_x00169EF0 *rbyte);
        void (*EntryErrFunc)(SJ_x00169EF0 sj,
                                        void (*func)(void *obj, Sint32_x00169EF0 ecode), void *obj);
} SJ_IF_x00169EF0;
extern int* sceCdCallback_x00169EF0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169EF0 unk0;
    Sint8_x00169EF0 stat;
    Sint8_x00169EF0 read_flg;
    Sint8_x00169EF0 unk3;
    SJ_x00169EF0 sj;
    void* cvfs;
    Sint32_x00169EF0 unkC;
    Sint32_x00169EF0 file_len;
    Sint32_x00169EF0 file_sct;
    Sint32_x00169EF0 unk18;
    Sint32_x00169EF0 unk1C;
    Sint32_x00169EF0 unk20;
    SJCK_x00169EF0 unk24;
    Sint32_x00169EF0 req_rd_size;
    Sint32_x00169EF0 eos;
    Uint32_x00169EF0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169EF0 unk40;
    Sint8_x00169EF0 pause;
    Sint8_x00169EF0 unk45;
    Sint8_x00169EF0 unk46;
    Sint8_x00169EF0 unk47;
    Sint8_x00169EF0 unk48;
    Sint8_x00169EF0 unk49;
    char pad4A[6];
    const Char8_x00169EF0* fname;
    void* dir;
    Sint32_x00169EF0 cur_ofst;
    Uint32_x00169EF0 unk5C;
} ADXSTM_OBJ_x00169EF0;
typedef ADXSTM_OBJ_x00169EF0* ADXSTM_x00169EF0;
typedef struct {
    Sint32_x00169EF0 id;
    const Char8_x00169EF0* fname;
    Sint32_x00169EF0 unk8;
    void* dir;
    Sint32_x00169EF0 unk10;
    Sint32_x00169EF0 unk14;
    Sint32_x00169EF0 stat;
    Sint32_x00169EF0 rd_sct;
} LSC_STM_x00169EF0;
typedef struct {
    Sint8_x00169EF0 used;
    Sint8_x00169EF0 stat;
    Sint8_x00169EF0 unk2;
    Sint8_x00169EF0 lp_flg;
    Sint8_x00169EF0 unk4;
    SJ_x00169EF0 sj;
    Sint32_x00169EF0 unkC;
    Sint32_x00169EF0 unk10;
    Sint32_x00169EF0 flow_limit;
    Sint32_x00169EF0 unk18;
    Sint32_x00169EF0 last_stm_index;
    Sint32_x00169EF0 unk20;
    Sint32_x00169EF0 num_stm;
    ADXSTM_x00169EF0 stm_hndl;
    Sint32_x00169EF0 unk2C;
    char pad30[4];
    Sint32_x00169EF0 unk34;
    LSC_STM_x00169EF0 stm[16];
} LSC_OBJ_x00169EF0;
typedef LSC_OBJ_x00169EF0* LSC_x00169EF0;
extern void LSC_EntryErrFunc_x00169EF0(void (*)(void*, Char8_x00169EF0*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169EF0(const Char8_x00169EF0* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169EF0[] __asm__("D_00463E38");
extern char ext_str1_x00169EF0[] __asm__("D_00463DC8");
Sint32_x00169EF0 func_00169EF0_x00169EF0(LSC_x00169EF0 lsc, Sint32_x00169EF0 stm_id) __asm__("func_00169EF0");
/* LSC_GetStmStat: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00169EF0 func_00169EF0_x00169EF0(LSC_x00169EF0 lsc, Sint32_x00169EF0 stm_id) {
    Sint32_x00169EF0 i;
    if (lsc == 0) {
        LSC_CallErrFunc_x00169EF0(ext_str1_x00169EF0);
        return -1;
    }
    for (i = 0; i < 16; i++) {
        if (lsc->stm[i].id == stm_id) {
            break;
        }
    }
    if (i == 16) {
        LSC_CallErrFunc_x00169EF0(ext_str0_x00169EF0, stm_id);
        return -1;
    }
    return lsc->stm[i].stat;
}
typedef unsigned char Uint8_x00169F88;
typedef char Sint8_x00169F88;
typedef unsigned short Uint16_x00169F88;
typedef unsigned int Uint32_x00169F88;
typedef signed int Sint32_x00169F88;
typedef char Char8_x00169F88;
typedef struct _UUID_x00169F88 {
    Uint32_x00169F88 Data1;
    Uint16_x00169F88 Data2;
    Uint16_x00169F88 Data3;
    Uint8_x00169F88 Data4[8];
} UUID_x00169F88;
typedef struct {
        Sint8_x00169F88 *data;
        Sint32_x00169F88 len;
} SJCK_x00169F88;
typedef struct {
        struct _sj_vtbl_x00169F88 *vtbl;
} SJ_OBJ_x00169F88;
typedef SJ_OBJ_x00169F88 *SJ_x00169F88;
typedef struct _sj_vtbl_x00169F88 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00169F88 sj);
        UUID_x00169F88 *(*GetUuid)(SJ_x00169F88 sj);
        void (*Reset)(SJ_x00169F88 sj);
        void (*GetChunk)(SJ_x00169F88 sj, Sint32_x00169F88 id, Sint32_x00169F88 nbyte, SJCK_x00169F88 *ck);
        void (*UngetChunk)(SJ_x00169F88 sj, Sint32_x00169F88 id, SJCK_x00169F88 *ck);
        void (*PutChunk)(SJ_x00169F88 sj, Sint32_x00169F88 id, SJCK_x00169F88 *ck);
        Sint32_x00169F88 (*GetNumData)(SJ_x00169F88 sj, Sint32_x00169F88 id);
        Sint32_x00169F88 (*IsGetChunk)(SJ_x00169F88 sj, Sint32_x00169F88 id, Sint32_x00169F88 nbyte, Sint32_x00169F88 *rbyte);
        void (*EntryErrFunc)(SJ_x00169F88 sj,
                                        void (*func)(void *obj, Sint32_x00169F88 ecode), void *obj);
} SJ_IF_x00169F88;
extern int* sceCdCallback_x00169F88(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00169F88 unk0;
    Sint8_x00169F88 stat;
    Sint8_x00169F88 read_flg;
    Sint8_x00169F88 unk3;
    SJ_x00169F88 sj;
    void* cvfs;
    Sint32_x00169F88 unkC;
    Sint32_x00169F88 file_len;
    Sint32_x00169F88 file_sct;
    Sint32_x00169F88 unk18;
    Sint32_x00169F88 unk1C;
    Sint32_x00169F88 unk20;
    SJCK_x00169F88 unk24;
    Sint32_x00169F88 req_rd_size;
    Sint32_x00169F88 eos;
    Uint32_x00169F88 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00169F88 unk40;
    Sint8_x00169F88 pause;
    Sint8_x00169F88 unk45;
    Sint8_x00169F88 unk46;
    Sint8_x00169F88 unk47;
    Sint8_x00169F88 unk48;
    Sint8_x00169F88 unk49;
    char pad4A[6];
    const Char8_x00169F88* fname;
    void* dir;
    Sint32_x00169F88 cur_ofst;
    Uint32_x00169F88 unk5C;
} ADXSTM_OBJ_x00169F88;
typedef ADXSTM_OBJ_x00169F88* ADXSTM_x00169F88;
typedef struct {
    Sint32_x00169F88 id;
    const Char8_x00169F88* fname;
    Sint32_x00169F88 unk8;
    void* dir;
    Sint32_x00169F88 unk10;
    Sint32_x00169F88 unk14;
    Sint32_x00169F88 stat;
    Sint32_x00169F88 rd_sct;
} LSC_STM_x00169F88;
typedef struct {
    Sint8_x00169F88 used;
    Sint8_x00169F88 stat;
    Sint8_x00169F88 unk2;
    Sint8_x00169F88 lp_flg;
    Sint8_x00169F88 unk4;
    SJ_x00169F88 sj;
    Sint32_x00169F88 unkC;
    Sint32_x00169F88 unk10;
    Sint32_x00169F88 flow_limit;
    Sint32_x00169F88 unk18;
    Sint32_x00169F88 last_stm_index;
    Sint32_x00169F88 unk20;
    Sint32_x00169F88 num_stm;
    ADXSTM_x00169F88 stm_hndl;
    Sint32_x00169F88 unk2C;
    char pad30[4];
    Sint32_x00169F88 unk34;
    LSC_STM_x00169F88 stm[16];
} LSC_OBJ_x00169F88;
typedef LSC_OBJ_x00169F88* LSC_x00169F88;
extern void LSC_EntryErrFunc_x00169F88(void (*)(void*, Char8_x00169F88*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00169F88(const Char8_x00169F88* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x00169F88[] __asm__("D_00463E38");
extern char ext_str1_x00169F88[] __asm__("D_00463DC8");
Sint32_x00169F88 func_00169F88_x00169F88(LSC_x00169F88 lsc, Sint32_x00169F88 stm_id) __asm__("func_00169F88");
/* LSC_GetStmRdSct: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00169F88 func_00169F88_x00169F88(LSC_x00169F88 lsc, Sint32_x00169F88 stm_id) {
    Sint32_x00169F88 i;
    if (lsc == 0) {
        LSC_CallErrFunc_x00169F88(ext_str1_x00169F88);
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (lsc->stm[i].id == stm_id) {
            break;
        }
    }
    if (i == 16) {
        LSC_CallErrFunc_x00169F88(ext_str0_x00169F88, stm_id);
        return 0;
    }
    return lsc->stm[i].rd_sct;
}
typedef unsigned char Uint8_x0016A020;
typedef char Sint8_x0016A020;
typedef unsigned short Uint16_x0016A020;
typedef unsigned int Uint32_x0016A020;
typedef signed int Sint32_x0016A020;
typedef char Char8_x0016A020;
typedef struct _UUID_x0016A020 {
    Uint32_x0016A020 Data1;
    Uint16_x0016A020 Data2;
    Uint16_x0016A020 Data3;
    Uint8_x0016A020 Data4[8];
} UUID_x0016A020;
typedef struct {
        Sint8_x0016A020 *data;
        Sint32_x0016A020 len;
} SJCK_x0016A020;
typedef struct {
        struct _sj_vtbl_x0016A020 *vtbl;
} SJ_OBJ_x0016A020;
typedef SJ_OBJ_x0016A020 *SJ_x0016A020;
typedef struct _sj_vtbl_x0016A020 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016A020 sj);
        UUID_x0016A020 *(*GetUuid)(SJ_x0016A020 sj);
        void (*Reset)(SJ_x0016A020 sj);
        void (*GetChunk)(SJ_x0016A020 sj, Sint32_x0016A020 id, Sint32_x0016A020 nbyte, SJCK_x0016A020 *ck);
        void (*UngetChunk)(SJ_x0016A020 sj, Sint32_x0016A020 id, SJCK_x0016A020 *ck);
        void (*PutChunk)(SJ_x0016A020 sj, Sint32_x0016A020 id, SJCK_x0016A020 *ck);
        Sint32_x0016A020 (*GetNumData)(SJ_x0016A020 sj, Sint32_x0016A020 id);
        Sint32_x0016A020 (*IsGetChunk)(SJ_x0016A020 sj, Sint32_x0016A020 id, Sint32_x0016A020 nbyte, Sint32_x0016A020 *rbyte);
        void (*EntryErrFunc)(SJ_x0016A020 sj,
                                        void (*func)(void *obj, Sint32_x0016A020 ecode), void *obj);
} SJ_IF_x0016A020;
extern int* sceCdCallback_x0016A020(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x0016A020 unk0;
    Sint8_x0016A020 stat;
    Sint8_x0016A020 read_flg;
    Sint8_x0016A020 unk3;
    SJ_x0016A020 sj;
    void* cvfs;
    Sint32_x0016A020 unkC;
    Sint32_x0016A020 file_len;
    Sint32_x0016A020 file_sct;
    Sint32_x0016A020 unk18;
    Sint32_x0016A020 unk1C;
    Sint32_x0016A020 unk20;
    SJCK_x0016A020 unk24;
    Sint32_x0016A020 req_rd_size;
    Sint32_x0016A020 eos;
    Uint32_x0016A020 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016A020 unk40;
    Sint8_x0016A020 pause;
    Sint8_x0016A020 unk45;
    Sint8_x0016A020 unk46;
    Sint8_x0016A020 unk47;
    Sint8_x0016A020 unk48;
    Sint8_x0016A020 unk49;
    char pad4A[6];
    const Char8_x0016A020* fname;
    void* dir;
    Sint32_x0016A020 cur_ofst;
    Uint32_x0016A020 unk5C;
} ADXSTM_OBJ_x0016A020;
typedef ADXSTM_OBJ_x0016A020* ADXSTM_x0016A020;
typedef struct {
    Sint32_x0016A020 id;
    const Char8_x0016A020* fname;
    Sint32_x0016A020 unk8;
    void* dir;
    Sint32_x0016A020 unk10;
    Sint32_x0016A020 unk14;
    Sint32_x0016A020 stat;
    Sint32_x0016A020 rd_sct;
} LSC_STM_x0016A020;
typedef struct {
    Sint8_x0016A020 used;
    Sint8_x0016A020 stat;
    Sint8_x0016A020 unk2;
    Sint8_x0016A020 lp_flg;
    Sint8_x0016A020 unk4;
    SJ_x0016A020 sj;
    Sint32_x0016A020 unkC;
    Sint32_x0016A020 unk10;
    Sint32_x0016A020 flow_limit;
    Sint32_x0016A020 unk18;
    Sint32_x0016A020 last_stm_index;
    Sint32_x0016A020 unk20;
    Sint32_x0016A020 num_stm;
    ADXSTM_x0016A020 stm_hndl;
    Sint32_x0016A020 unk2C;
    char pad30[4];
    Sint32_x0016A020 unk34;
    LSC_STM_x0016A020 stm[16];
} LSC_OBJ_x0016A020;
typedef LSC_OBJ_x0016A020* LSC_x0016A020;
extern void LSC_EntryErrFunc_x0016A020(void (*)(void*, Char8_x0016A020*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x0016A020(const Char8_x0016A020* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x0016A020[] __asm__("D_00463E60");
extern char ext_str1_x0016A020[] __asm__("D_00463DC8");
void func_0016A020_x0016A020(LSC_x0016A020 lsc, Sint32_x0016A020 min) __asm__("func_0016A020");
/* LSC_SetFlowLimit: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016A020_x0016A020(LSC_x0016A020 lsc, Sint32_x0016A020 min) {
    if (lsc == 0) {
        LSC_CallErrFunc_x0016A020(ext_str1_x0016A020);
        return;
    }
    if ((min < 0) || (lsc->unk18 < min)) {
        LSC_CallErrFunc_x0016A020(ext_str0_x0016A020, min);
        return;
    }
    lsc->flow_limit = min;
}
s32 func_0016A1C0_x0016A088(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x0016A088 __asm__("D_00463DC8");
s32 func_0016A088_x0016A088(u8 *arg0) __asm__("func_0016A088");
s32 func_0016A088_x0016A088(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x0016A088(&D_00463DC8_x0016A088);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
extern s32 D_00413E48_x0016A0B8 __asm__("D_00413E48");
extern s32 D_00413E4C_x0016A0B8 __asm__("D_00413E4C");
extern s32 D_00413E50_x0016A0B8 __asm__("D_00413E50");
void func_0016A0B8_x0016A0B8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0016A0B8");
void func_0016A0B8_x0016A0B8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        D_00413E48_x0016A0B8 = 0;
        D_00413E4C_x0016A0B8 = 0;
        D_00413E50_x0016A0B8 = 0;
        return;
    }
    D_00413E48_x0016A0B8 = arg0;
    D_00413E4C_x0016A0B8 = arg1;
    D_00413E50_x0016A0B8 = arg2;
}
extern void (*D_003DA4C4_x0016A0F8)(int, int) __asm__("D_00413E48");
extern int D_003DA4C8_x0016A0F8 __asm__("D_00413E4C");
extern int D_003DA4CC_x0016A0F8 __asm__("D_00413E50");
void func_0016A0F8_x0016A0F8(void) __asm__("func_0016A0F8");
/* func_00335C30: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00320388.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016A0F8_x0016A0F8(void) {
    if (D_003DA4C4_x0016A0F8) {
        D_003DA4C4_x0016A0F8(D_003DA4C8_x0016A0F8, D_003DA4CC_x0016A0F8);
    }
}
typedef unsigned char Uint8_x0016A130;
typedef char Sint8_x0016A130;
typedef unsigned short Uint16_x0016A130;
typedef unsigned int Uint32_x0016A130;
typedef signed int Sint32_x0016A130;
typedef char Char8_x0016A130;
typedef struct _UUID_x0016A130 {
    Uint32_x0016A130 Data1;
    Uint16_x0016A130 Data2;
    Uint16_x0016A130 Data3;
    Uint8_x0016A130 Data4[8];
} UUID_x0016A130;
typedef struct {
        Sint8_x0016A130 *data;
        Sint32_x0016A130 len;
} SJCK_x0016A130;
typedef struct {
        struct _sj_vtbl_x0016A130 *vtbl;
} SJ_OBJ_x0016A130;
typedef SJ_OBJ_x0016A130 *SJ_x0016A130;
typedef struct _sj_vtbl_x0016A130 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016A130 sj);
        UUID_x0016A130 *(*GetUuid)(SJ_x0016A130 sj);
        void (*Reset)(SJ_x0016A130 sj);
        void (*GetChunk)(SJ_x0016A130 sj, Sint32_x0016A130 id, Sint32_x0016A130 nbyte, SJCK_x0016A130 *ck);
        void (*UngetChunk)(SJ_x0016A130 sj, Sint32_x0016A130 id, SJCK_x0016A130 *ck);
        void (*PutChunk)(SJ_x0016A130 sj, Sint32_x0016A130 id, SJCK_x0016A130 *ck);
        Sint32_x0016A130 (*GetNumData)(SJ_x0016A130 sj, Sint32_x0016A130 id);
        Sint32_x0016A130 (*IsGetChunk)(SJ_x0016A130 sj, Sint32_x0016A130 id, Sint32_x0016A130 nbyte, Sint32_x0016A130 *rbyte);
        void (*EntryErrFunc)(SJ_x0016A130 sj,
                                        void (*func)(void *obj, Sint32_x0016A130 ecode), void *obj);
} SJ_IF_x0016A130;
extern int* sceCdCallback_x0016A130(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x0016A130 unk0;
    Sint8_x0016A130 stat;
    Sint8_x0016A130 read_flg;
    Sint8_x0016A130 unk3;
    SJ_x0016A130 sj;
    void* cvfs;
    Sint32_x0016A130 unkC;
    Sint32_x0016A130 file_len;
    Sint32_x0016A130 file_sct;
    Sint32_x0016A130 unk18;
    Sint32_x0016A130 unk1C;
    Sint32_x0016A130 unk20;
    SJCK_x0016A130 unk24;
    Sint32_x0016A130 req_rd_size;
    Sint32_x0016A130 eos;
    Uint32_x0016A130 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016A130 unk40;
    Sint8_x0016A130 pause;
    Sint8_x0016A130 unk45;
    Sint8_x0016A130 unk46;
    Sint8_x0016A130 unk47;
    Sint8_x0016A130 unk48;
    Sint8_x0016A130 unk49;
    char pad4A[6];
    const Char8_x0016A130* fname;
    void* dir;
    Sint32_x0016A130 cur_ofst;
    Uint32_x0016A130 unk5C;
} ADXSTM_OBJ_x0016A130;
typedef ADXSTM_OBJ_x0016A130* ADXSTM_x0016A130;
typedef struct {
    Sint32_x0016A130 id;
    const Char8_x0016A130* fname;
    Sint32_x0016A130 unk8;
    void* dir;
    Sint32_x0016A130 unk10;
    Sint32_x0016A130 unk14;
    Sint32_x0016A130 stat;
    Sint32_x0016A130 rd_sct;
} LSC_STM_x0016A130;
typedef struct {
    Sint8_x0016A130 used;
    Sint8_x0016A130 stat;
    Sint8_x0016A130 unk2;
    Sint8_x0016A130 lp_flg;
    Sint8_x0016A130 unk4;
    SJ_x0016A130 sj;
    Sint32_x0016A130 unkC;
    Sint32_x0016A130 unk10;
    Sint32_x0016A130 flow_limit;
    Sint32_x0016A130 unk18;
    Sint32_x0016A130 last_stm_index;
    Sint32_x0016A130 unk20;
    Sint32_x0016A130 num_stm;
    ADXSTM_x0016A130 stm_hndl;
    Sint32_x0016A130 unk2C;
    char pad30[4];
    Sint32_x0016A130 unk34;
    LSC_STM_x0016A130 stm[16];
} LSC_OBJ_x0016A130;
typedef LSC_OBJ_x0016A130* LSC_x0016A130;
extern void LSC_EntryErrFunc_x0016A130(void (*)(void*, Char8_x0016A130*), void*) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x0016A130(const Char8_x0016A130* format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x0016A130[] __asm__("D_00463DC8");
void func_0016A130_x0016A130(LSC_x0016A130 lsc, Sint32_x0016A130 flg) __asm__("func_0016A130");
/* LSC_SetLpFlg: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016A130_x0016A130(LSC_x0016A130 lsc, Sint32_x0016A130 flg) {
    if (lsc == 0) {
        LSC_CallErrFunc_x0016A130(ext_str0_x0016A130);
        return;
    }
    lsc->lp_flg = flg;
}
s32 func_0016DAD8_x0016A160() __asm__("func_0016DAD8");
void func_0016A160_x0016A160(void) __asm__("func_0016A160");
void func_0016A160_x0016A160(void)
{
 do { func_0016DAD8_x0016A160(); } while (0);
}
s32 func_0016DAF0_x0016A180() __asm__("func_0016DAF0");
void func_0016A180_x0016A180(void) __asm__("func_0016A180");
void func_0016A180_x0016A180(void) {
    func_0016DAF0_x0016A180();
}
extern s32 D_00413E58_x0016A198 __asm__("D_00413E58");
extern s32 D_00413E5C_x0016A198 __asm__("D_00413E5C");
void func_0016A198_x0016A198(s32 arg0, s32 arg1) __asm__("func_0016A198");
void func_0016A198_x0016A198(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        D_00413E58_x0016A198 = 0;
        D_00413E5C_x0016A198 = 0;
        return;
    }
    D_00413E58_x0016A198 = arg0;
    D_00413E5C_x0016A198 = arg1;
}
typedef char Char8_x0016A1C0;
extern void LSC_EntryErrFunc_x0016A1C0(void (*)(void*, Char8_x0016A1C0*), void*) __asm__("LSC_EntryErrFunc");
extern int vsprintf_x0016A1C0(char* buf, const char* fmt, ...) __asm__("func_0012C140");
typedef char* va_list_x0016A1C0;
extern void (*lsc_err_func_x0016A1C0)(void*, Char8_x0016A1C0*) __asm__("D_00413E58");
extern void* lsc_err_obj_x0016A1C0 __asm__("D_00413E5C");
extern Char8_x0016A1C0 lsc_err_msg_x0016A1C0[0x100] __asm__("D_00413E60");
void LSC_EntryErrFunc_x0016A1C0(void (*func)(void*, Char8_x0016A1C0*), void* object) __asm__("LSC_EntryErrFunc");
void func_0016A1C0_x0016A1C0(const Char8_x0016A1C0* format, ...) __asm__("func_0016A1C0");
/* LSC_CallErrFunc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/lsc_err.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016A1C0_x0016A1C0(const Char8_x0016A1C0* format, ...) {
    va_list_x0016A1C0 args;
    (args = ((char*) __builtin_next_arg (format) - (__builtin_args_info (2) >= 8 ? 0 : (8 - __builtin_args_info (2)) * 8)));
    vsprintf_x0016A1C0(lsc_err_msg_x0016A1C0, format, args);
    if (lsc_err_func_x0016A1C0 != 0) {
        lsc_err_func_x0016A1C0(lsc_err_obj_x0016A1C0, lsc_err_msg_x0016A1C0);
    }
}
void func_0016A250_x0016A250(void) __asm__("func_0016A250");
void func_0016A250_x0016A250(void) {

}
void func_0016A258_x0016A258(void) __asm__("func_0016A258");
void func_0016A258_x0016A258(void) {

}
extern volatile int D_003DA5D8_x0016A260 __asm__("D_00413F60");
extern int D_003DA5F0_x0016A260 __asm__("D_00413F78");
extern int D_003DA5F8_x0016A260 __asm__("D_00413F80");
extern void Forward33B658_335CE8_x0016A260(int *) __asm__("func_0016A160");
extern void Forward33B670_335D00_x0016A260(int *) __asm__("func_0016A180");
extern void func_003A52F0_x0016A260(void *, int, int) __asm__("memset");
extern void func_00335DD0_x0016A260(void) __asm__("func_0016A250");
extern void func_00335D18_x0016A260(int, int) __asm__("func_0016A198");
void func_0016A260_x0016A260(void) __asm__("func_0016A260");
/* func_00335DE0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016A260_x0016A260(void) {
    int *s0;
    int sp_buf[1];
    int v3;
    v3 = D_003DA5D8_x0016A260;
    Forward33B658_335CE8_x0016A260(sp_buf);
    s0 = &D_003DA5F0_x0016A260;
    if (!*s0) {
        func_003A52F0_x0016A260(&D_003DA5F8_x0016A260, 0, 0x4700);
        func_00335DD0_x0016A260();
        func_00335D18_x0016A260(0, 0);
    }
    *s0 = *s0 + 1;
    Forward33B670_335D00_x0016A260(sp_buf);
}
s32 func_00169980_x0016A2E0(s8 *) __asm__("func_00169980");
s32 func_0016A198_x0016A2E0(s32, s32) __asm__("func_0016A198");
s32 func_0016A258_x0016A2E0() __asm__("func_0016A258");
s32 memset_x0016A2E0(s8 *, s32, s32) __asm__("memset");
extern s32 D_00413F78_x0016A2E0 __asm__("D_00413F78");
extern s8 D_00413F80_x0016A2E0 __asm__("D_00413F80");
void func_0016A2E0_x0016A2E0(void) __asm__("func_0016A2E0");
void func_0016A2E0_x0016A2E0(void)
{
  s32 temp_v0;
  s32 var_s1;
  int new_var2;
  s8 *var_s0;
  s8 *new_var;
  temp_v0 = D_00413F78_x0016A2E0 - 1;
  D_00413F78_x0016A2E0 = temp_v0;
  if (0 == temp_v0)
  {
    new_var2 = 1;
    var_s0 = &D_00413F80_x0016A2E0;
    var_s1 = 0x1F;
    do
    {
      if ((*(new_var = &(*var_s0))) == new_var2)
      {
        func_00169980_x0016A2E0(var_s0);
      }
      var_s1 -= new_var2;
      var_s0 += 0x238;
    }
    while (var_s1 >= 0);
    memset_x0016A2E0(&D_00413F80_x0016A2E0, 0, 0x4700);
    func_0016A258_x0016A2E0();
    func_0016A198_x0016A2E0(0, 0);
  }
}
typedef struct SfdSj_x0016A3A0 SfdSj_x0016A3A0;
typedef struct SfdSjChunk_x0016A3A0 {
    char *data;
    int len;
} SfdSjChunk_x0016A3A0;
typedef struct SfdSjVtbl_x0016A3A0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0016A3A0 *sj);
    int (*getUuid)(SfdSj_x0016A3A0 *sj);
    void (*reset)(SfdSj_x0016A3A0 *sj);
    void (*getChunk)(SfdSj_x0016A3A0 *sj, int id, int n, SfdSjChunk_x0016A3A0 *ck);
    void (*ungetChunk)(SfdSj_x0016A3A0 *sj, int id, SfdSjChunk_x0016A3A0 *ck);
    void (*putChunk)(SfdSj_x0016A3A0 *sj, int id, SfdSjChunk_x0016A3A0 *ck);
    int (*getNumData)(SfdSj_x0016A3A0 *sj, int id);
} SfdSjVtbl_x0016A3A0;
struct SfdSj_x0016A3A0 {
    SfdSjVtbl_x0016A3A0 *vtbl;
};
typedef struct LscStm_x0016A3A0 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x0016A3A0;
typedef struct LscObj_x0016A3A0 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0016A3A0 *sj;
    SfdSjChunk_x0016A3A0 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0016A3A0 stms[16];
} LscObj_x0016A3A0;
void LSC_CallErrFunc_x0016A3A0(const char *format, ...) __asm__("func_0016A1C0");
typedef unsigned int size_t_x0016A3A0;
size_t_x0016A3A0 strlen_x0016A3A0(const char *) __asm__("func_00127BA0");
typedef void (*CvFsErrFn_x0016A3A0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016A3A0)(CvFsErrFn_x0016A3A0 func, void *obj);
typedef int (*CvFsPathFn_x0016A3A0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016A3A0)(void);
typedef int (*CvFsOpenFn_x0016A3A0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016A3A0)(int fd);
typedef int (*CvFsFdIntFn_x0016A3A0)(int fd);
typedef int (*CvFsSeekFn_x0016A3A0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016A3A0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016A3A0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016A3A0)(void);
typedef int (*CvFsLoadDirInfoFn_x0016A3A0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016A3A0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016A3A0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016A3A0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016A3A0 entry_err_func;
    CvFsPathFn_x0016A3A0 get_file_size;
    CvFsGetFreeSizeFn_x0016A3A0 get_free_size;
    CvFsOpenFn_x0016A3A0 open;
    CvFsFdFn_x0016A3A0 close;
    CvFsSeekFn_x0016A3A0 seek;
    CvFsFdIntFn_x0016A3A0 tell;
    CvFsXferFn_x0016A3A0 req_rd;
    CvFsXferFn_x0016A3A0 req_wr;
    CvFsFdFn_x0016A3A0 stop_tr;
    CvFsFdIntFn_x0016A3A0 get_stat;
    CvFsFdIntFn_x0016A3A0 get_sct_len;
    CvFsSetSctLenFn_x0016A3A0 set_sct_len;
    CvFsFdIntFn_x0016A3A0 get_num_tr;
    CvFsPathFn_x0016A3A0 change_dir;
    CvFsPathFn_x0016A3A0 is_exist_file;
    CvFsGetNumFilesFn_x0016A3A0 get_num_files;
    CvFsLoadDirInfoFn_x0016A3A0 load_dir_info;
    CvFsFdIntFn_x0016A3A0 get_max_byte_rate;
    CvFsPathFn_x0016A3A0 make_dir;
    CvFsPathFn_x0016A3A0 remove_dir;
    CvFsPathFn_x0016A3A0 delete_file;
    CvFsGetFileSizeExFn_x0016A3A0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016A3A0 opt_fn2;
} CvFsVtbl_x0016A3A0;
typedef struct CvFsHandle_x0016A3A0 {
    CvFsVtbl_x0016A3A0 *vtbl;
    int fd;
} CvFsHandle_x0016A3A0;
extern CvFsVtbl_x0016A3A0 *addDevice_x0016A3A0(char *devname, CvFsVtbl_x0016A3A0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0016A3A0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0016A3A0 *sj;
    CvFsHandle_x0016A3A0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0016A3A0 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0016A3A0;
void ADXSTM_BindFileNw_x0016A3A0(AdxStmObj_x0016A3A0 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("func_0015CB88");
void ADXSTM_ReleaseFileNw_x0016A3A0(AdxStmObj_x0016A3A0 *stm) __asm__("func_0015CC38");
int ADXSTM_Seek_x0016A3A0(AdxStmObj_x0016A3A0 *stm, int pos) __asm__("func_0015CCD8");
int ADXSTM_Start_x0016A3A0(AdxStmObj_x0016A3A0 *stm) __asm__("func_0015CD48");
void ADXSTM_StopNw_x0016A3A0(AdxStmObj_x0016A3A0 *stm) __asm__("func_0015CDD0");
extern void ADXSTM_EntryEosFunc_x0016A3A0(AdxStmObj_x0016A3A0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXSTM_SetEos_x0016A3A0(AdxStmObj_x0016A3A0 *stm, int eos) __asm__("func_0015CE98");
int ADXSTM_SetBufSize_x0016A3A0(AdxStmObj_x0016A3A0 *stm, int min, int max) __asm__("func_0015D4A8");
typedef unsigned int size_t_x0016A3A0;
enum LscStmStat_x0016A3A0 {
    LSC_STM_STAT_WAIT_x0016A3A0 = 0,
    LSC_STM_STAT_READ_x0016A3A0 = 1,
    LSC_STM_STAT_END_x0016A3A0 = 2
};
void LSC_CallErrFunc_x0016A3A0(const char *format, ...) __asm__("func_0016A1C0");
extern char ext_str0_x0016A3A0[] __asm__("D_00463EB8");
void LSC_ExecServer_x0016A3A0(LscObj_x0016A3A0 *lsc) __asm__("LSC_ExecServer");
/* lsc_StatWait: from https://github.com/crashbashash/DW4_Decomp (src/cri/lsc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void LSC_ExecServer_x0016A3A0(LscObj_x0016A3A0 *lsc)
{
    LscStm_x0016A3A0 *stm = &lsc->stms[lsc->rpos];
    const char *fname;
    unsigned int len;
    unsigned int i;
    int sum;
    if (lsc->nstm <= 0) {
        return;
    }
    ADXSTM_StopNw_x0016A3A0(lsc->stm);
    ADXSTM_ReleaseFileNw_x0016A3A0(lsc->stm);
    fname = stm->fname;
    len = strlen_x0016A3A0(fname);
    sum = 0;
    for (i = 0; i < len; i++) {
        sum += (unsigned char)fname[i];
    }
    if (sum != stm->fname_sum) {
        LSC_CallErrFunc_x0016A3A0(ext_str0_x0016A3A0, stm->fname);
        return;
    }
    ADXSTM_BindFileNw_x0016A3A0(lsc->stm, stm->fname, stm->dir, stm->ofst, stm->nsct);
    ADXSTM_SetEos_x0016A3A0(lsc->stm, stm->nsct);
    lsc->stm_size = stm->nsct;
    stm->rdsct = 0;
    lsc->reading = 0;
    ADXSTM_SetBufSize_x0016A3A0(lsc->stm, lsc->flow_min, lsc->flow_max);
    ADXSTM_Seek_x0016A3A0(lsc->stm, 0);
    ADXSTM_Start_x0016A3A0(lsc->stm);
    lsc->reading = 1;
    stm->stat = LSC_STM_STAT_READ_x0016A3A0;
}
typedef struct SfdSj_x0016A4C8 SfdSj_x0016A4C8;
typedef struct SfdSjChunk_x0016A4C8 {
    char *data;
    int len;
} SfdSjChunk_x0016A4C8;
typedef struct SfdSjVtbl_x0016A4C8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0016A4C8 *sj);
    int (*getUuid)(SfdSj_x0016A4C8 *sj);
    void (*reset)(SfdSj_x0016A4C8 *sj);
    void (*getChunk)(SfdSj_x0016A4C8 *sj, int id, int n, SfdSjChunk_x0016A4C8 *ck);
    void (*ungetChunk)(SfdSj_x0016A4C8 *sj, int id, SfdSjChunk_x0016A4C8 *ck);
    void (*putChunk)(SfdSj_x0016A4C8 *sj, int id, SfdSjChunk_x0016A4C8 *ck);
    int (*getNumData)(SfdSj_x0016A4C8 *sj, int id);
} SfdSjVtbl_x0016A4C8;
struct SfdSj_x0016A4C8 {
    SfdSjVtbl_x0016A4C8 *vtbl;
};
enum LscStat_x0016A4C8 {
    LSC_STAT_STOP_x0016A4C8 = 0,
    LSC_STAT_WAIT_x0016A4C8 = 1,
    LSC_STAT_EXEC_x0016A4C8 = 2,
    LSC_STAT_ERROR_x0016A4C8 = 3
};
typedef struct LscStm_x0016A4C8 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x0016A4C8;
typedef struct LscObj_x0016A4C8 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0016A4C8 *sj;
    SfdSjChunk_x0016A4C8 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0016A4C8 stms[16];
} LscObj_x0016A4C8;
void LSC_CallErrFunc_x0016A4C8(const char *format, ...) __asm__("func_0016A1C0");
typedef void (*CvFsErrFn_x0016A4C8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016A4C8)(CvFsErrFn_x0016A4C8 func, void *obj);
typedef int (*CvFsPathFn_x0016A4C8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016A4C8)(void);
typedef int (*CvFsOpenFn_x0016A4C8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016A4C8)(int fd);
typedef int (*CvFsFdIntFn_x0016A4C8)(int fd);
typedef int (*CvFsSeekFn_x0016A4C8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016A4C8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016A4C8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016A4C8)(void);
typedef int (*CvFsLoadDirInfoFn_x0016A4C8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016A4C8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016A4C8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016A4C8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016A4C8 entry_err_func;
    CvFsPathFn_x0016A4C8 get_file_size;
    CvFsGetFreeSizeFn_x0016A4C8 get_free_size;
    CvFsOpenFn_x0016A4C8 open;
    CvFsFdFn_x0016A4C8 close;
    CvFsSeekFn_x0016A4C8 seek;
    CvFsFdIntFn_x0016A4C8 tell;
    CvFsXferFn_x0016A4C8 req_rd;
    CvFsXferFn_x0016A4C8 req_wr;
    CvFsFdFn_x0016A4C8 stop_tr;
    CvFsFdIntFn_x0016A4C8 get_stat;
    CvFsFdIntFn_x0016A4C8 get_sct_len;
    CvFsSetSctLenFn_x0016A4C8 set_sct_len;
    CvFsFdIntFn_x0016A4C8 get_num_tr;
    CvFsPathFn_x0016A4C8 change_dir;
    CvFsPathFn_x0016A4C8 is_exist_file;
    CvFsGetNumFilesFn_x0016A4C8 get_num_files;
    CvFsLoadDirInfoFn_x0016A4C8 load_dir_info;
    CvFsFdIntFn_x0016A4C8 get_max_byte_rate;
    CvFsPathFn_x0016A4C8 make_dir;
    CvFsPathFn_x0016A4C8 remove_dir;
    CvFsPathFn_x0016A4C8 delete_file;
    CvFsGetFileSizeExFn_x0016A4C8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016A4C8 opt_fn2;
} CvFsVtbl_x0016A4C8;
typedef struct CvFsHandle_x0016A4C8 {
    CvFsVtbl_x0016A4C8 *vtbl;
    int fd;
} CvFsHandle_x0016A4C8;
extern CvFsVtbl_x0016A4C8 *addDevice_x0016A4C8(char *devname, CvFsVtbl_x0016A4C8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0016A4C8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0016A4C8 *sj;
    CvFsHandle_x0016A4C8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0016A4C8 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0016A4C8;
int ADXSTM_GetStat_x0016A4C8(AdxStmObj_x0016A4C8 *stm) __asm__("func_0015CCD0");
int ADXSTM_Tell_x0016A4C8(AdxStmObj_x0016A4C8 *stm) __asm__("func_0015CCF8");
extern void ADXSTM_EntryEosFunc_x0016A4C8(AdxStmObj_x0016A4C8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
enum LscStmStat_x0016A4C8 {
    LSC_STM_STAT_WAIT_x0016A4C8 = 0,
    LSC_STM_STAT_READ_x0016A4C8 = 1,
    LSC_STM_STAT_END_x0016A4C8 = 2
};
void LSC_CallErrFunc_x0016A4C8(const char *format, ...) __asm__("func_0016A1C0");
void LSC_CallErrFunc_x0016A4C8(const char *format, ...) __attribute__((weak, section(".b3stub")));
void LSC_CallErrFunc_x0016A4C8(const char *format, ...) {}
void func_0016A4C8_x0016A4C8(LscObj_x0016A4C8 *lsc) __asm__("func_0016A4C8");
/* lsc_StatRead: from https://github.com/crashbashash/DW4_Decomp (src/cri/lsc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016A4C8_x0016A4C8(LscObj_x0016A4C8 *lsc)
{
    LscStm_x0016A4C8 *stm;
    if (lsc->stm == 0) {
        LSC_CallErrFunc_x0016A4C8("E0007: lsc->fp=NULL\n");
        return;
    }
    stm = &lsc->stms[lsc->rpos];
    switch (ADXSTM_GetStat_x0016A4C8(lsc->stm)) {
    case 2:
        stm->rdsct = ADXSTM_Tell_x0016A4C8(lsc->stm);
        break;
    case 3:
        stm->rdsct = lsc->stm_size;
        stm->stat = LSC_STM_STAT_END_x0016A4C8;
        break;
    case 4:
        lsc->stat = LSC_STAT_ERROR_x0016A4C8;
        break;
    }
}
__asm__("# rebind func_0016A4C8 0x0016A4C8");
typedef struct SfdSj_x0016A590 SfdSj_x0016A590;
typedef struct SfdSjChunk_x0016A590 {
    char *data;
    int len;
} SfdSjChunk_x0016A590;
typedef struct SfdSjVtbl_x0016A590 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0016A590 *sj);
    int (*getUuid)(SfdSj_x0016A590 *sj);
    void (*reset)(SfdSj_x0016A590 *sj);
    void (*getChunk)(SfdSj_x0016A590 *sj, int id, int n, SfdSjChunk_x0016A590 *ck);
    void (*ungetChunk)(SfdSj_x0016A590 *sj, int id, SfdSjChunk_x0016A590 *ck);
    void (*putChunk)(SfdSj_x0016A590 *sj, int id, SfdSjChunk_x0016A590 *ck);
    int (*getNumData)(SfdSj_x0016A590 *sj, int id);
} SfdSjVtbl_x0016A590;
struct SfdSj_x0016A590 {
    SfdSjVtbl_x0016A590 *vtbl;
};
enum LscStat_x0016A590 {
    LSC_STAT_STOP_x0016A590 = 0,
    LSC_STAT_WAIT_x0016A590 = 1,
    LSC_STAT_EXEC_x0016A590 = 2,
    LSC_STAT_ERROR_x0016A590 = 3
};
typedef struct LscStm_x0016A590 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x0016A590;
typedef struct LscObj_x0016A590 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0016A590 *sj;
    SfdSjChunk_x0016A590 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0016A590 stms[16];
} LscObj_x0016A590;
int LSC_EntryFileRange_x0016A590(LscObj_x0016A590 *lsc, const char *fname, void *dir, int ofst, int nsct) __asm__("func_00169A00");
typedef void (*CvFsErrFn_x0016A590)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016A590)(CvFsErrFn_x0016A590 func, void *obj);
typedef int (*CvFsPathFn_x0016A590)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016A590)(void);
typedef int (*CvFsOpenFn_x0016A590)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016A590)(int fd);
typedef int (*CvFsFdIntFn_x0016A590)(int fd);
typedef int (*CvFsSeekFn_x0016A590)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016A590)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016A590)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016A590)(void);
typedef int (*CvFsLoadDirInfoFn_x0016A590)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016A590)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016A590)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016A590 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016A590 entry_err_func;
    CvFsPathFn_x0016A590 get_file_size;
    CvFsGetFreeSizeFn_x0016A590 get_free_size;
    CvFsOpenFn_x0016A590 open;
    CvFsFdFn_x0016A590 close;
    CvFsSeekFn_x0016A590 seek;
    CvFsFdIntFn_x0016A590 tell;
    CvFsXferFn_x0016A590 req_rd;
    CvFsXferFn_x0016A590 req_wr;
    CvFsFdFn_x0016A590 stop_tr;
    CvFsFdIntFn_x0016A590 get_stat;
    CvFsFdIntFn_x0016A590 get_sct_len;
    CvFsSetSctLenFn_x0016A590 set_sct_len;
    CvFsFdIntFn_x0016A590 get_num_tr;
    CvFsPathFn_x0016A590 change_dir;
    CvFsPathFn_x0016A590 is_exist_file;
    CvFsGetNumFilesFn_x0016A590 get_num_files;
    CvFsLoadDirInfoFn_x0016A590 load_dir_info;
    CvFsFdIntFn_x0016A590 get_max_byte_rate;
    CvFsPathFn_x0016A590 make_dir;
    CvFsPathFn_x0016A590 remove_dir;
    CvFsPathFn_x0016A590 delete_file;
    CvFsGetFileSizeExFn_x0016A590 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016A590 opt_fn2;
} CvFsVtbl_x0016A590;
typedef struct CvFsHandle_x0016A590 {
    CvFsVtbl_x0016A590 *vtbl;
    int fd;
} CvFsHandle_x0016A590;
extern CvFsVtbl_x0016A590 *addDevice_x0016A590(char *devname, CvFsVtbl_x0016A590 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0016A590 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0016A590 *sj;
    CvFsHandle_x0016A590 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0016A590 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0016A590;
extern void ADXSTM_EntryEosFunc_x0016A590(AdxStmObj_x0016A590 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int LSC_EntryFileRange_x0016A590(LscObj_x0016A590 *lsc, const char *fname, void *dir, int ofst, int nsct) __asm__("func_00169A00");
void LSC_CallStatFunc_x0016A590(void) __asm__("func_0016A0F8");
int LSC_EntryFileRange_x0016A590(LscObj_x0016A590 *lsc, const char *fname, void *dir, int ofst, int nsct) __attribute__((weak, section(".b3stub")));
int LSC_EntryFileRange_x0016A590(LscObj_x0016A590 *lsc, const char *fname, void *dir, int ofst, int nsct) {}
void LSC_CallStatFunc_x0016A590(void) __attribute__((weak, section(".b3stub")));
void LSC_CallStatFunc_x0016A590(void) {}
void func_0016A590_x0016A590(LscObj_x0016A590 *lsc) __asm__("func_0016A590");
/* lsc_EndStm: from https://github.com/crashbashash/DW4_Decomp (src/cri/lsc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016A590_x0016A590(LscObj_x0016A590 *lsc)
{
    const char *fname = 0;
    void *dir = 0;
    int ofst = 0;
    int nsct = 0;
    LscStm_x0016A590 *stm;
    if (lsc->stm == 0) {
        return;
    }
    if (lsc->loop == 1) {
        stm = &lsc->stms[lsc->rpos];
        fname = stm->fname;
        dir = stm->dir;
        ofst = stm->ofst;
        nsct = stm->nsct;
    }
    lsc->rpos = (lsc->rpos + 1) % 16;
    if (--lsc->nstm <= 0) {
        LSC_CallStatFunc_x0016A590();
        lsc->stat = LSC_STAT_WAIT_x0016A590;
    }
    if (lsc->loop == 1) {
        LSC_EntryFileRange_x0016A590(lsc, fname, dir, ofst, nsct);
    }
}
typedef struct SfdSj_x0016A698 SfdSj_x0016A698;
typedef struct SfdSjChunk_x0016A698 {
    char *data;
    int len;
} SfdSjChunk_x0016A698;
typedef struct SfdSjVtbl_x0016A698 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0016A698 *sj);
    int (*getUuid)(SfdSj_x0016A698 *sj);
    void (*reset)(SfdSj_x0016A698 *sj);
    void (*getChunk)(SfdSj_x0016A698 *sj, int id, int n, SfdSjChunk_x0016A698 *ck);
    void (*ungetChunk)(SfdSj_x0016A698 *sj, int id, SfdSjChunk_x0016A698 *ck);
    void (*putChunk)(SfdSj_x0016A698 *sj, int id, SfdSjChunk_x0016A698 *ck);
    int (*getNumData)(SfdSj_x0016A698 *sj, int id);
} SfdSjVtbl_x0016A698;
struct SfdSj_x0016A698 {
    SfdSjVtbl_x0016A698 *vtbl;
};
enum LscStat_x0016A698 {
    LSC_STAT_STOP_x0016A698 = 0,
    LSC_STAT_WAIT_x0016A698 = 1,
    LSC_STAT_EXEC_x0016A698 = 2,
    LSC_STAT_ERROR_x0016A698 = 3
};
typedef struct LscStm_x0016A698 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x0016A698;
typedef struct LscObj_x0016A698 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0016A698 *sj;
    SfdSjChunk_x0016A698 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0016A698 stms[16];
} LscObj_x0016A698;
typedef void (*CvFsErrFn_x0016A698)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016A698)(CvFsErrFn_x0016A698 func, void *obj);
typedef int (*CvFsPathFn_x0016A698)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016A698)(void);
typedef int (*CvFsOpenFn_x0016A698)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016A698)(int fd);
typedef int (*CvFsFdIntFn_x0016A698)(int fd);
typedef int (*CvFsSeekFn_x0016A698)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016A698)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016A698)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016A698)(void);
typedef int (*CvFsLoadDirInfoFn_x0016A698)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016A698)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016A698)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016A698 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016A698 entry_err_func;
    CvFsPathFn_x0016A698 get_file_size;
    CvFsGetFreeSizeFn_x0016A698 get_free_size;
    CvFsOpenFn_x0016A698 open;
    CvFsFdFn_x0016A698 close;
    CvFsSeekFn_x0016A698 seek;
    CvFsFdIntFn_x0016A698 tell;
    CvFsXferFn_x0016A698 req_rd;
    CvFsXferFn_x0016A698 req_wr;
    CvFsFdFn_x0016A698 stop_tr;
    CvFsFdIntFn_x0016A698 get_stat;
    CvFsFdIntFn_x0016A698 get_sct_len;
    CvFsSetSctLenFn_x0016A698 set_sct_len;
    CvFsFdIntFn_x0016A698 get_num_tr;
    CvFsPathFn_x0016A698 change_dir;
    CvFsPathFn_x0016A698 is_exist_file;
    CvFsGetNumFilesFn_x0016A698 get_num_files;
    CvFsLoadDirInfoFn_x0016A698 load_dir_info;
    CvFsFdIntFn_x0016A698 get_max_byte_rate;
    CvFsPathFn_x0016A698 make_dir;
    CvFsPathFn_x0016A698 remove_dir;
    CvFsPathFn_x0016A698 delete_file;
    CvFsGetFileSizeExFn_x0016A698 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016A698 opt_fn2;
} CvFsVtbl_x0016A698;
typedef struct CvFsHandle_x0016A698 {
    CvFsVtbl_x0016A698 *vtbl;
    int fd;
} CvFsHandle_x0016A698;
extern CvFsVtbl_x0016A698 *addDevice_x0016A698(char *devname, CvFsVtbl_x0016A698 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0016A698 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0016A698 *sj;
    CvFsHandle_x0016A698 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0016A698 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0016A698;
extern void ADXSTM_EntryEosFunc_x0016A698(AdxStmObj_x0016A698 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
enum LscStmStat_x0016A698 {
    LSC_STM_STAT_WAIT_x0016A698 = 0,
    LSC_STM_STAT_READ_x0016A698 = 1,
    LSC_STM_STAT_END_x0016A698 = 2
};
void lsc_StatWait_x0016A698(LscObj_x0016A698 *lsc) __asm__("LSC_ExecServer");
void lsc_StatRead_x0016A698(LscObj_x0016A698 *lsc) __asm__("func_0016A4C8");
void lsc_EndStm_x0016A698(LscObj_x0016A698 *lsc) __asm__("func_0016A590");
void lsc_StatWait_x0016A698(LscObj_x0016A698 *lsc) __attribute__((weak, section(".b3stub")));
void lsc_StatWait_x0016A698(LscObj_x0016A698 *lsc) {}
void lsc_StatRead_x0016A698(LscObj_x0016A698 *lsc) __attribute__((weak, section(".b3stub")));
void lsc_StatRead_x0016A698(LscObj_x0016A698 *lsc) {}
void lsc_EndStm_x0016A698(LscObj_x0016A698 *lsc) __attribute__((weak, section(".b3stub")));
void lsc_EndStm_x0016A698(LscObj_x0016A698 *lsc) {}
void func_0016A698_x0016A698(LscObj_x0016A698 *lsc) __asm__("func_0016A698");
/* lsc_ExecHndl: from https://github.com/crashbashash/DW4_Decomp (src/cri/lsc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016A698_x0016A698(LscObj_x0016A698 *lsc)
{
    if (lsc->pause != 1 && lsc->stat == LSC_STAT_EXEC_x0016A698 && lsc->nstm > 0) {
        if (lsc->stms[lsc->rpos].stat == LSC_STM_STAT_READ_x0016A698) {
            lsc_StatRead_x0016A698(lsc);
        }
        if (lsc->stms[lsc->rpos].stat == LSC_STM_STAT_END_x0016A698) {
            lsc_EndStm_x0016A698(lsc);
        }
        if (lsc->stms[lsc->rpos].stat == LSC_STM_STAT_WAIT_x0016A698) {
            lsc_StatWait_x0016A698(lsc);
        }
    }
}
s32 func_0016FF40_x0016A768() __asm__("func_0016FF40");
void func_0016A768_x0016A768(void) __asm__("func_0016A768");
void func_0016A768_x0016A768(void) {
    func_0016FF40_x0016A768();
}
s32 func_0016FF58_x0016A780() __asm__("func_0016FF58");
void func_0016A780_x0016A780(void) __asm__("func_0016A780");
void func_0016A780_x0016A780(void) {
    func_0016FF58_x0016A780();
}
typedef unsigned char u8_x0016A798;
typedef unsigned int u32_x0016A798;
extern volatile u32_x0016A798 lbl_80092528_x0016A798[36] __asm__("D_00418680");
extern u8_x0016A798 lbl_801324F0_x0016A798[104] __asm__("D_00418690");
u8_x0016A798 *func_0016A798_x0016A798(void) __asm__("func_0016A798");
/* fn_8005A5A8: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8005A5A8.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u8_x0016A798 *func_0016A798_x0016A798(void) {
    lbl_80092528_x0016A798[0];
    return lbl_801324F0_x0016A798;
}
extern s32 (*D_00418684_x0016A7B0)(s32, s32, s32) __asm__("D_00418684");
extern s32 D_00418688_x0016A7B0 __asm__("D_00418688");
void func_0016A7B0_x0016A7B0(s32 arg0, s32 arg1) __asm__("func_0016A7B0");
void func_0016A7B0_x0016A7B0(s32 arg0, s32 arg1) {
    if (D_00418684_x0016A7B0 != NULL) {
        D_00418684_x0016A7B0(D_00418688_x0016A7B0, arg1, arg0);
    }
}
s32 func_00129688_x0016A7E0() __asm__("func_00129688");
void func_0016A7E0_x0016A7E0(void) __asm__("func_0016A7E0");
void func_0016A7E0_x0016A7E0(void) {
    func_00129688_x0016A7E0();
}
