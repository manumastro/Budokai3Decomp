#include "common.h"

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 lbl_8017E5BC;

typedef unsigned int size_t_x00160EB0;
typedef int s32_x00160EB0;
typedef s32_x00160EB0 ptrdiff_t_x00160EB0;
typedef unsigned char Uint8_x00160EB0;
typedef char Sint8_x00160EB0;
typedef unsigned short Uint16_x00160EB0;
typedef signed short Sint16_x00160EB0;
typedef unsigned int Uint32_x00160EB0;
typedef signed int Sint32_x00160EB0;
typedef Sint32_x00160EB0 Bool_x00160EB0;
typedef char Char8_x00160EB0;
typedef struct _UUID_x00160EB0 {
    Uint32_x00160EB0 Data1;
    Uint16_x00160EB0 Data2;
    Uint16_x00160EB0 Data3;
    Uint8_x00160EB0 Data4[8];
} UUID_x00160EB0;
typedef struct {
        Sint8_x00160EB0 *data;
        Sint32_x00160EB0 len;
} SJCK_x00160EB0;
typedef struct {
        struct _sj_vtbl_x00160EB0 *vtbl;
} SJ_OBJ_x00160EB0;
typedef SJ_OBJ_x00160EB0 *SJ_x00160EB0;
typedef struct _sj_vtbl_x00160EB0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00160EB0 sj);
        UUID_x00160EB0 *(*GetUuid)(SJ_x00160EB0 sj);
        void (*Reset)(SJ_x00160EB0 sj);
        void (*GetChunk)(SJ_x00160EB0 sj, Sint32_x00160EB0 id, Sint32_x00160EB0 nbyte, SJCK_x00160EB0 *ck);
        void (*UngetChunk)(SJ_x00160EB0 sj, Sint32_x00160EB0 id, SJCK_x00160EB0 *ck);
        void (*PutChunk)(SJ_x00160EB0 sj, Sint32_x00160EB0 id, SJCK_x00160EB0 *ck);
        Sint32_x00160EB0 (*GetNumData)(SJ_x00160EB0 sj, Sint32_x00160EB0 id);
        Sint32_x00160EB0 (*IsGetChunk)(SJ_x00160EB0 sj, Sint32_x00160EB0 id, Sint32_x00160EB0 nbyte, Sint32_x00160EB0 *rbyte);
        void (*EntryErrFunc)(SJ_x00160EB0 sj,
                                        void (*func)(void *obj, Sint32_x00160EB0 ecode), void *obj);
} SJ_IF_x00160EB0;
extern int* sceCdCallback_x00160EB0(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00160EB0(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00160EB0;
typedef struct {
               Sint16_x00160EB0 unk0;
               Sint16_x00160EB0 unk2;
               Sint16_x00160EB0 unk4;
               Sint16_x00160EB0 unk6;
} ADXPD_OBJ_SUB_x00160EB0;
typedef struct {
               Sint32_x00160EB0 used;
               Sint32_x00160EB0 unk4;
               Sint32_x00160EB0 mode;
               Sint32_x00160EB0 stat;
               Sint32_x00160EB0 num_blk;
               Sint32_x00160EB0 unk14;
               Sint32_x00160EB0 unk18;
               Sint32_x00160EB0 unk1C;
               Sint32_x00160EB0 unk20;
               Sint32_x00160EB0 unk24;
               ADXPD_OBJ_SUB_x00160EB0 unk28;
               Sint16_x00160EB0 unk30;
               Sint16_x00160EB0 unk32;
               Sint16_x00160EB0 unk34;
               Sint16_x00160EB0 unk36;
               Sint16_x00160EB0 unk38;
               Sint16_x00160EB0 unk3A;
} ADXPD_OBJ_x00160EB0;
typedef ADXPD_OBJ_x00160EB0* ADXPD_x00160EB0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00160EB0;
typedef struct {
               Sint32_x00160EB0 unk0;
               Sint32_x00160EB0 unk4;
               Sint32_x00160EB0 unk8;
               Sint32_x00160EB0 unkC;
               Sint32_x00160EB0 unk10;
               void* unk14;
               Sint32_x00160EB0 unk18;
               Sint32_x00160EB0 unk1C;
               Sint32_x00160EB0 unk20;
               Sint32_x00160EB0 unk24;
               Sint32_x00160EB0 unk28;
} ADXB_UNK_x00160EB0;
typedef struct {
               Sint16_x00160EB0 unk0;
               Sint16_x00160EB0 unk2;
               Sint32_x00160EB0 stat;
               ADXPD_x00160EB0 adxpd;
               Sint8_x00160EB0 encoding_type;
               Sint8_x00160EB0 sample_bitdepth;
               Sint8_x00160EB0 channel_count;
               Sint8_x00160EB0 block_size;
               Sint32_x00160EB0 samples_per_block;
               Sint32_x00160EB0 sample_rate;
               Sint32_x00160EB0 total_samples;
               Sint16_x00160EB0 unk1C;
               char pad1E[2];
               Sint32_x00160EB0 unk20;
               Sint16_x00160EB0 unk24;
               Sint16_x00160EB0 unk26;
               Sint32_x00160EB0 unk28;
               Sint32_x00160EB0 unk2C;
               Sint32_x00160EB0 unk30;
               Sint32_x00160EB0 unk34;
               Sint32_x00160EB0 unk38;
               void* unk3C;
               Sint32_x00160EB0 unk40;
               Sint32_x00160EB0 unk44;
               ADXB_UNK_x00160EB0 unk48;
               Sint32_x00160EB0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00160EB0*, Sint32_x00160EB0*, Sint32_x00160EB0*);
               void* object;
               void (*add_wr)(void*, Sint32_x00160EB0, Sint32_x00160EB0);
               Sint32_x00160EB0 unk84;
               Sint32_x00160EB0 unk88;
               Sint32_x00160EB0 unk8C;
               Sint32_x00160EB0 dec_num_sample;
               Sint32_x00160EB0 dec_data_len;
               Sint16_x00160EB0 format;
               Sint16_x00160EB0 unk9A;
               Sint16_x00160EB0 unk9C;
               Sint16_x00160EB0 unk9E;
               Sint16_x00160EB0 unkA0;
               char padA2[0xE];
               Sint32_x00160EB0 unkB0;
               Sint32_x00160EB0 ahx_dec_samples;
               Sint32_x00160EB0 ahx_dec_frames;
               Sint32_x00160EB0 unkBC;
               Sint32_x00160EB0 ac3_dec_samples;
               Sint32_x00160EB0 ac3_dec_frames;
               Sint32_x00160EB0 unkC8;
               ADX_UNK_x00160EB0 unkCC;
               Sint16_x00160EB0 unkDC;
               Sint16_x00160EB0 unkDE[2];
               char padE2[2];
               Sint32_x00160EB0 unkE4;
               char padE8[8];
} ADXB_OBJ_x00160EB0;
typedef ADXB_OBJ_x00160EB0* ADXB_x00160EB0;
typedef struct {
    Sint8_x00160EB0 used;
    Sint8_x00160EB0 state;
    Sint8_x00160EB0 maxnch;
    Sint8_x00160EB0 unk3;
    ADXB_x00160EB0 adxb;
    SJ_x00160EB0 sji;
    SJ_x00160EB0 sjo[2];
    SJCK_x00160EB0 unk14;
    SJCK_x00160EB0 chunks[2];
    Sint32_x00160EB0 unk2C;
    Sint32_x00160EB0 unk30;
    Sint32_x00160EB0 unk34;
    Sint32_x00160EB0 unk38;
    Sint32_x00160EB0 trap_num_samples;
    Sint32_x00160EB0 trap_count;
    Sint32_x00160EB0 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00160EB0, Sint8_x00160EB0*, Sint32_x00160EB0);
    void* flt_obj;
    Sint8_x00160EB0 unk58[0x40];
    Sint32_x00160EB0 unk98;
    Sint32_x00160EB0 lnkflg;
} ADXSJD_OBJ_x00160EB0;
typedef ADXSJD_OBJ_x00160EB0* ADXSJD_x00160EB0;
typedef struct {
    Sint32_x00160EB0 unk0;
    SJ_x00160EB0 sj;
} SJX_UNK_0_x00160EB0;
typedef struct {
    Sint8_x00160EB0 used;
    Sint8_x00160EB0 unk1;
    Sint16_x00160EB0 unk2;
    SJ_x00160EB0 sj;
    void* unk8;
    Sint32_x00160EB0 unkC;
    SJX_UNK_0_x00160EB0* unk10;
} SJX_OBJ_x00160EB0;
typedef SJX_OBJ_x00160EB0* SJX_x00160EB0;
typedef struct {
    Sint8_x00160EB0 used;
    char pad1[3];
    void* unk4;
    SJ_x00160EB0 unk8;
    SJX_x00160EB0 unkC;
    SJCK_x00160EB0 chunk;
} PS2PSJ_OBJ_x00160EB0;
typedef PS2PSJ_OBJ_x00160EB0* PS2PSJ_x00160EB0;
typedef struct {
               Sint8_x00160EB0 unk0;
               Sint8_x00160EB0 unk1;
               Sint8_x00160EB0 unk2;
               SJ_x00160EB0 unk4;
               SJ_x00160EB0 unk8;
               SJCK_x00160EB0 unkC;
               SJCK_x00160EB0 unk14;
               sceSifDmaData_x00160EB0 dma_data;
               Sint32_x00160EB0 unk2C;
               Sint32_x00160EB0 unk30;
               Sint32_x00160EB0 unk34;
               Sint32_x00160EB0 unk38;
               Sint32_x00160EB0 unk3C;
} DTR_OBJ_x00160EB0;
typedef DTR_OBJ_x00160EB0* DTR_x00160EB0;
typedef struct {
    Sint8_x00160EB0 used;
    Sint32_x00160EB0 maxnch;
    PS2PSJ_x00160EB0 psj[2];
    DTR_x00160EB0 dtr[2];
    SJ_x00160EB0 sjo[2];
    void* unk20;
    Sint32_x00160EB0 unk24;
    Sint32_x00160EB0 unk28;
    Sint32_x00160EB0 unk2C;
    Sint8_x00160EB0 unk30;
    Sint8_x00160EB0 unk31;
    Sint8_x00160EB0 num_chan;
    Sint8_x00160EB0 unk33;
    Sint32_x00160EB0 sfreq;
    Sint32_x00160EB0 unk38;
    Sint32_x00160EB0 out_vol;
    Sint32_x00160EB0 unk40;
    Sint32_x00160EB0 pan[2];
    Sint32_x00160EB0 unk4C[2];
    Sint32_x00160EB0 unk54;
    Sint32_x00160EB0 unk58;
    Sint8_x00160EB0 unk5C;
    Sint8_x00160EB0 unk5D;
    Sint8_x00160EB0 unk5E;
    Sint8_x00160EB0 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00160EB0;
typedef ADXRNA_OBJ_x00160EB0* ADXRNA_x00160EB0;
typedef struct {
    Sint8_x00160EB0 unk0;
    Sint8_x00160EB0 stat;
    Sint8_x00160EB0 read_flg;
    Sint8_x00160EB0 unk3;
    SJ_x00160EB0 sj;
    void* cvfs;
    Sint32_x00160EB0 unkC;
    Sint32_x00160EB0 file_len;
    Sint32_x00160EB0 file_sct;
    Sint32_x00160EB0 unk18;
    Sint32_x00160EB0 unk1C;
    Sint32_x00160EB0 unk20;
    SJCK_x00160EB0 unk24;
    Sint32_x00160EB0 req_rd_size;
    Sint32_x00160EB0 eos;
    Uint32_x00160EB0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00160EB0 unk40;
    Sint8_x00160EB0 pause;
    Sint8_x00160EB0 unk45;
    Sint8_x00160EB0 unk46;
    Sint8_x00160EB0 unk47;
    Sint8_x00160EB0 unk48;
    Sint8_x00160EB0 unk49;
    char pad4A[6];
    const Char8_x00160EB0* fname;
    void* dir;
    Sint32_x00160EB0 cur_ofst;
    Uint32_x00160EB0 unk5C;
} ADXSTM_OBJ_x00160EB0;
typedef ADXSTM_OBJ_x00160EB0* ADXSTM_x00160EB0;
typedef struct _adx_talk_x00160EB0 {
                   Sint8_x00160EB0 used;
                   Sint8_x00160EB0 stat;
                   Sint8_x00160EB0 pmode;
                   Sint8_x00160EB0 maxnch;
                   ADXSJD_x00160EB0 sjd;
                   ADXSTM_x00160EB0 stm;
                   ADXRNA_x00160EB0 rna;
                   SJ_x00160EB0 sjf;
                   SJ_x00160EB0 sji;
                   SJ_x00160EB0 sjo[(2)];
                   Sint8_x00160EB0 *ibuf;
                   Sint32_x00160EB0 ibuflen;
                   Sint32_x00160EB0 ibufxlen;
                   Sint16_x00160EB0 *obuf;
                   Sint32_x00160EB0 obufsize;
                   Sint32_x00160EB0 obufdist;
                   Sint32_x00160EB0 svrfreq;
                   Sint16_x00160EB0 maxsct;
                   Sint16_x00160EB0 minsct;
                   Sint16_x00160EB0 outvol;
                   Sint16_x00160EB0 outpan[(2)];
                   Sint16_x00160EB0 unk46;
                   Sint32_x00160EB0 maxdecsmpl;
                   Sint32_x00160EB0 lpcnt;
                   Sint32_x00160EB0 lp_skiplen;
                   Sint32_x00160EB0 trp;
                   Sint32_x00160EB0 wpos;
                   Sint32_x00160EB0 mofst;
                   Sint16_x00160EB0 ercode;
                   Sint32_x00160EB0 edecpos;
                   Sint16_x00160EB0 edeccnt;
                   Sint16_x00160EB0 eshrtcnt;
                   Sint8_x00160EB0 lpflg;
                   Sint8_x00160EB0 autorcvr;
                   Sint8_x00160EB0 fltmode;
                   Sint8_x00160EB0 execflag;
                   Sint8_x00160EB0 pstwait_flag;
                   Sint8_x00160EB0 pstready_flag;
                   Sint8_x00160EB0 pause_flag;
                   void *amp;
                   SJ_x00160EB0 ampsji[(2)];
                   SJ_x00160EB0 ampsjo[(2)];
                   Sint32_x00160EB0 time_ofst;
                   Sint32_x00160EB0 lesct;
                   Sint32_x00160EB0 trpnsmpl;
                   void *lsc;
                   Sint8_x00160EB0 lnkflg;
                   Sint8_x00160EB0 rsv;
                   Sint16_x00160EB0 rsv2;
                   Uint32_x00160EB0 tvofst;
                   Uint32_x00160EB0 svcnt;
                   Uint32_x00160EB0 decofst;
                   Sint32_x00160EB0 flush_nsmpl;
                   Sint8_x00160EB0 unkAC;
                   Sint8_x00160EB0 padAD[1];
               Char8_x00160EB0* unkB0;
               Sint32_x00160EB0 padB4;
               Sint32_x00160EB0 padB8;
               Sint32_x00160EB0 padBC;
               Sint32_x00160EB0 padC0;
} ADX_TALK_x00160EB0;
typedef ADX_TALK_x00160EB0 *ADXT_x00160EB0;
Sint32_x00160EB0 ADXT_GetNumChan_x00160EB0(ADXT_x00160EB0 adxt) __asm__("ADXT_GetNumChan");
extern void ADXT_EntryErrFunc_x00160EB0(void (*func)(void *obj, Sint8_x00160EB0 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00160EB0(ADXT_x00160EB0 adxt,
                void (*f)(void *obj, Sint32_x00160EB0 ch, void *data, Sint32_x00160EB0 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00160EB0(Bool_x00160EB0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00160EB0(Bool_x00160EB0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00160EB0(void (*fn)(void *obj, Char8_x00160EB0 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00160EB0(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern void ADXRNA_EntryErrFunc_x00160EB0(void (*)(void*, Char8_x00160EB0*), void*) __asm__("ADXRNA_EntryErrFunc");
Sint32_x00160EB0 ADXRNA_GetNumData_x00160EB0(ADXRNA_x00160EB0) __asm__("func_001588C8");
void ADXRNA_SetPlaySw_x00160EB0(ADXRNA_x00160EB0, Sint32_x00160EB0) __asm__("func_00158898");
Sint32_x00160EB0 ADXRNA_GetNumRoom_x00160EB0(ADXRNA_x00160EB0 rna) __asm__("func_001588E0");
extern void ADXSJD_EntryTrapFunc_x00160EB0(ADXSJD_x00160EB0 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint32_x00160EB0 ADXSJD_GetBlkSmpl_x00160EB0(ADXSJD_x00160EB0 sjd) __asm__("func_00159DF8");
Sint8_x00160EB0 ADXSJD_GetStat_x00160EB0(ADXSJD_x00160EB0 sjd) __asm__("func_00158D98");
void* memset_x00160EB0(void* s, int c, size_t_x00160EB0 n) __asm__("memset");
extern volatile Sint32_x00160EB0 adxt_vsync_cnt_x00160EB0 __asm__("D_00404C14");
void func_00160EB0_x00160EB0(ADXT_x00160EB0 adxt) __asm__("func_00160EB0");
/* adxt_stat_prep: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tsvr.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00160EB0_x00160EB0(ADXT_x00160EB0 adxt) {
    ADXRNA_x00160EB0 rna;
    ADXSJD_x00160EB0 sjd;
    Sint32_x00160EB0 num_data;
    Sint32_x00160EB0 num_room;
    Sint32_x00160EB0 num_chan;
    Sint32_x00160EB0 i;
    Sint32_x00160EB0 size;
    SJCK_x00160EB0 chunk_info;
    rna = adxt->rna;
    sjd = adxt->sjd;
    num_data = ADXRNA_GetNumData_x00160EB0(rna);
    num_room = ADXRNA_GetNumRoom_x00160EB0(rna);
    if ((num_data >= (adxt->maxdecsmpl << 1)) || (ADXSJD_GetBlkSmpl_x00160EB0(sjd) >= num_room) ||
        (ADXSJD_GetStat_x00160EB0(adxt->sjd) == 3)) {
        if (adxt->pstwait_flag == 0) {
            if (adxt->pause_flag == 0) {
                ADXRNA_SetPlaySw_x00160EB0(rna, 1);
                adxt->tvofst = 0;
                adxt->svcnt = adxt_vsync_cnt_x00160EB0;
            }
            adxt->stat = (3);
        }
        adxt->pstready_flag = 1;
    }
    if (ADXSJD_GetStat_x00160EB0(adxt->sjd) != 3) {
        return;
    }
    num_chan = ADXT_GetNumChan_x00160EB0(adxt);
    size = (adxt->maxdecsmpl * num_chan) << 1;
    for (i = 0; i < num_chan; i++) {
        SJ_x00160EB0 sj_obj = adxt->sjo[i];
        (*(sj_obj)->vtbl->GetChunk)(sj_obj, 0, size, &chunk_info);
        memset_x00160EB0(chunk_info.data, 0, chunk_info.len);
        (*(sj_obj)->vtbl->PutChunk)(sj_obj, 1, &chunk_info);
    }
}
typedef struct SfdSj_x00161028 SfdSj_x00161028;
typedef struct SfdSjChunk_x00161028 {
    char *data;
    int len;
} SfdSjChunk_x00161028;
typedef struct SfdSjVtbl_x00161028 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00161028 *sj);
    int (*getUuid)(SfdSj_x00161028 *sj);
    void (*reset)(SfdSj_x00161028 *sj);
    void (*getChunk)(SfdSj_x00161028 *sj, int id, int n, SfdSjChunk_x00161028 *ck);
    void (*ungetChunk)(SfdSj_x00161028 *sj, int id, SfdSjChunk_x00161028 *ck);
    void (*putChunk)(SfdSj_x00161028 *sj, int id, SfdSjChunk_x00161028 *ck);
    int (*getNumData)(SfdSj_x00161028 *sj, int id);
} SfdSjVtbl_x00161028;
struct SfdSj_x00161028 {
    SfdSjVtbl_x00161028 *vtbl;
};
enum SjLine_x00161028 {
    SJ_LIN_FREE_x00161028 = 0,
    SJ_LIN_DATA_x00161028 = 1
};
typedef struct SjxObj_x00161028 SjxObj_x00161028;
typedef struct LscStm_x00161028 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x00161028;
typedef struct LscObj_x00161028 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00161028 *sj;
    SfdSjChunk_x00161028 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00161028 stms[16];
} LscObj_x00161028;
typedef struct AdxPdObj_x00161028 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00161028;
typedef struct AdxDecPara_x00161028 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00161028;
struct Pl2Enc_x00161028;
typedef struct AdxbObj_x00161028 AdxbObj_x00161028;
typedef short *(*AdxbGetWrFunc_x00161028)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00161028)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00161028 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00161028 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00161028 dp;
    AdxbGetWrFunc_x00161028 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00161028 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00161028 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00161028(AdxbObj_x00161028 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
enum AdxSjdStat_x00161028 {
    ADXSJD_STAT_STOP_x00161028 = 0,
    ADXSJD_STAT_DECHDR_x00161028 = 1,
    ADXSJD_STAT_DECODE_x00161028 = 2,
    ADXSJD_STAT_DECEND_x00161028 = 3,
    ADXSJD_STAT_ERROR_x00161028 = 4
};
typedef struct AdxSjdObj_x00161028 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00161028 *adxb;
    SfdSj_x00161028 *sji;
    SfdSj_x00161028 *sjo[2];
    SfdSjChunk_x00161028 cki;
    SfdSjChunk_x00161028 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00161028;
char ADXSJD_GetStat_x00161028(AdxSjdObj_x00161028 *sjd) __asm__("func_00158D98");
extern void ADXSJD_EntryFltFunc_x00161028(AdxSjdObj_x00161028 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00161028(AdxSjdObj_x00161028 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
int ADXSJD_GetNumChan_x00161028(AdxSjdObj_x00161028 *sjd) __asm__("func_00159DC8");
typedef void (*CvFsErrFn_x00161028)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00161028)(CvFsErrFn_x00161028 func, void *obj);
typedef int (*CvFsPathFn_x00161028)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00161028)(void);
typedef int (*CvFsOpenFn_x00161028)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00161028)(int fd);
typedef int (*CvFsFdIntFn_x00161028)(int fd);
typedef int (*CvFsSeekFn_x00161028)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00161028)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00161028)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00161028)(void);
typedef int (*CvFsLoadDirInfoFn_x00161028)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00161028)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00161028)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00161028 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00161028 entry_err_func;
    CvFsPathFn_x00161028 get_file_size;
    CvFsGetFreeSizeFn_x00161028 get_free_size;
    CvFsOpenFn_x00161028 open;
    CvFsFdFn_x00161028 close;
    CvFsSeekFn_x00161028 seek;
    CvFsFdIntFn_x00161028 tell;
    CvFsXferFn_x00161028 req_rd;
    CvFsXferFn_x00161028 req_wr;
    CvFsFdFn_x00161028 stop_tr;
    CvFsFdIntFn_x00161028 get_stat;
    CvFsFdIntFn_x00161028 get_sct_len;
    CvFsSetSctLenFn_x00161028 set_sct_len;
    CvFsFdIntFn_x00161028 get_num_tr;
    CvFsPathFn_x00161028 change_dir;
    CvFsPathFn_x00161028 is_exist_file;
    CvFsGetNumFilesFn_x00161028 get_num_files;
    CvFsLoadDirInfoFn_x00161028 load_dir_info;
    CvFsFdIntFn_x00161028 get_max_byte_rate;
    CvFsPathFn_x00161028 make_dir;
    CvFsPathFn_x00161028 remove_dir;
    CvFsPathFn_x00161028 delete_file;
    CvFsGetFileSizeExFn_x00161028 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00161028 opt_fn2;
} CvFsVtbl_x00161028;
typedef struct CvFsHandle_x00161028 {
    CvFsVtbl_x00161028 *vtbl;
    int fd;
} CvFsHandle_x00161028;
extern CvFsVtbl_x00161028 *addDevice_x00161028(char *devname, CvFsVtbl_x00161028 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00161028 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00161028 *sj;
    CvFsHandle_x00161028 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00161028 rdck;
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
} AdxStmObj_x00161028;
extern void ADXSTM_EntryEosFunc_x00161028(AdxStmObj_x00161028 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x00161028 AdxAmpObj_x00161028;
typedef struct DtrObj_x00161028 DtrObj_x00161028;
typedef struct Ps2RnaPsj_x00161028 {
    char used;
    void *sjrmt;
    SfdSj_x00161028 *sjuni;
    SjxObj_x00161028 *sjx;
    SfdSjChunk_x00161028 ck;
} Ps2RnaPsj_x00161028;
typedef struct Ps2Rna_x00161028 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00161028 *psj[2];
    DtrObj_x00161028 *dtr[2];
    SfdSj_x00161028 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x00161028;
enum AdxtStat_x00161028 {
    ADXT_STAT_STOP_x00161028 = 0,
    ADXT_STAT_DECINFO_x00161028 = 1,
    ADXT_STAT_PREP_x00161028 = 2,
    ADXT_STAT_PLAYING_x00161028 = 3,
    ADXT_STAT_DECEND_x00161028 = 4,
    ADXT_STAT_PLAYEND_x00161028 = 5,
    ADXT_STAT_ERROR_x00161028 = 6
};
typedef struct AdxtObj_x00161028 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00161028 *sjd;
    AdxStmObj_x00161028 *stm;
    Ps2Rna_x00161028 *rna;
    SfdSj_x00161028 *sjf;
    SfdSj_x00161028 *sji;
    SfdSj_x00161028 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x00161028 *amp;
    SfdSj_x00161028 *ampsji[2];
    SfdSj_x00161028 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00161028 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x00161028;
extern int adxt_playing_nch_x00161028 __asm__("D_004111B4");
extern int adxt_playing_ndata_x00161028 __asm__("D_004111B8");
void func_00161028_x00161028(AdxtObj_x00161028 *adxt) __asm__("func_00161028");
/* adxt_stat_playing: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00161028_x00161028(AdxtObj_x00161028 *adxt)
{
    SfdSj_x00161028 *sjo;
    int nch;
    int i;
    if (ADXSJD_GetStat_x00161028(adxt->sjd) == ADXSJD_STAT_DECEND_x00161028) {
        nch = ADXSJD_GetNumChan_x00161028(adxt->sjd);
        adxt_playing_nch_x00161028 = nch;
        for (i = 0; i < nch; i++) {
            sjo = adxt->sjo[i];
            adxt_playing_ndata_x00161028 = sjo->vtbl->getNumData(sjo, SJ_LIN_DATA_x00161028);
            if (adxt_playing_ndata_x00161028 >= 64) {
                break;
            }
        }
        if (i == nch) {
            adxt->stat = ADXT_STAT_DECEND_x00161028;
        }
    }
}
typedef signed char Sint8_x001610E0;
typedef int Sint32_x001610E0;
typedef struct SjChunk_x001610E0 {
    Sint8_x001610E0 *data;
    Sint32_x001610E0 len;
} SjChunk_x001610E0;
typedef struct SjObj_x001610E0 SjObj_x001610E0;
typedef struct SjIf_x001610E0 {
    void *obj;
    void (*addRef)(SjObj_x001610E0 *sj);
    void (*release)(SjObj_x001610E0 *sj);
    void (*destroy)(SjObj_x001610E0 *sj);
    void *(*getUuid)(SjObj_x001610E0 *sj);
    void (*reset)(SjObj_x001610E0 *sj);
    void (*getChunk)(SjObj_x001610E0 *sj, int id, int len, SjChunk_x001610E0 *ck);
    void (*ungetChunk)(SjObj_x001610E0 *sj, int id, SjChunk_x001610E0 *ck);
    void (*putChunk)(SjObj_x001610E0 *sj, int id, SjChunk_x001610E0 *ck);
    int (*getNumData)(SjObj_x001610E0 *sj, int id);
} SjIf_x001610E0;
struct SjObj_x001610E0 {
    SjIf_x001610E0 *vt;
};
typedef struct AdxSjdObj_x001610E0 {
    char f0;
    unsigned char stat;
    char pad02[2];
    void *sjd;
    char pad08[4];
    void *rna;
    char pad10[8];
    SjObj_x001610E0 *sj[2];
    char pad20[0x28];
    unsigned int flush;
    char pad4C[0x5C];
    int written;
} AdxSjdObj_x001610E0;
extern int D_003D1468_x001610E0 __asm__("D_004111BC");
extern int Obj3260_Tramp_003383B0_D358_x001610E0(void *rna) __asm__("func_001588C8");
extern int Obj3270_GetVia4_0033CE98_77A0_x001610E0(void *sjd) __asm__("func_00159DC8");
extern void Forward33B658_33E678_x001610E0(void) __asm__("func_00152508");
extern void Forward33B670_33E690_x001610E0(void) __asm__("func_00152520");
extern void func_0033ACA0_x001610E0(SjChunk_x001610E0 *ck, int len, SjChunk_x001610E0 *head, SjChunk_x001610E0 *tail) __asm__("func_0016F050");
extern void *func_003A52F0_x001610E0(void *dst, int c, int n) __asm__("memset");
extern void Obj3260_Tramp_003382A0_D320_x001610E0(void *rna, int a) __asm__("func_00158880");
extern void Obj3260_Tramp_00338338_D338_x001610E0(void *rna, int a) __asm__("func_00158898");
extern void func_00338378_x001610E0(void *rna, int a) __asm__("func_0016D068");
void func_001610E0_x001610E0(AdxSjdObj_x001610E0 *hn) __asm__("func_001610E0");
/* func_0032CC90: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032cc90.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001610E0_x001610E0(AdxSjdObj_x001610E0 *hn)
{
    SjChunk_x001610E0 ck[2];
    SjChunk_x001610E0 tail[2];
    int n;
    int i;
    unsigned int len;
    int mx;
    int v;
    i = 0;
    D_003D1468_x001610E0 = Obj3260_Tramp_003383B0_D358_x001610E0(hn->rna);
    n = Obj3270_GetVia4_0033CE98_77A0_x001610E0(hn->sjd);
    Forward33B658_33E678_x001610E0();
    len = hn->flush;
    for (; i < n; i++) {
        hn->sj[i]->vt->getChunk(hn->sj[i], 0, len * 2, &ck[i]);
        if ((unsigned int)ck[i].len / 2 < len)
            len = (unsigned int)ck[i].len / 2;
    }
    for (i = 0; i < n; i++) {
        func_0033ACA0_x001610E0(&ck[i], len * 2, &ck[i], &tail[i]);
        func_003A52F0_x001610E0(ck[i].data, 0, ck[i].len);
        hn->sj[i]->vt->putChunk(hn->sj[i], 1, &ck[i]);
        hn->sj[i]->vt->ungetChunk(hn->sj[i], 0, &tail[i]);
    }
    hn->written += len;
    Forward33B670_33E690_x001610E0();
    mx = 0;
    for (i = 0; i < n; i++) {
        v = (unsigned int)hn->sj[i]->vt->getNumData(hn->sj[i], 1) >> 1;
        if (v >= mx)
            mx = v;
    }
    if (mx + Obj3260_Tramp_003383B0_D358_x001610E0(hn->rna) - hn->written <= 0) {
        Obj3260_Tramp_003382A0_D320_x001610E0(hn->rna, 0);
        Obj3260_Tramp_00338338_D338_x001610E0(hn->rna, 0);
        func_00338378_x001610E0(hn->rna, 1);
        hn->stat = 5;
    }
}
void func_001612E8(void) {

}
typedef struct SfdSj_x001612F0 SfdSj_x001612F0;
typedef struct SfdSjChunk_x001612F0 {
    char *data;
    int len;
} SfdSjChunk_x001612F0;
typedef struct SfdSjVtbl_x001612F0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001612F0 *sj);
    int (*getUuid)(SfdSj_x001612F0 *sj);
    void (*reset)(SfdSj_x001612F0 *sj);
    void (*getChunk)(SfdSj_x001612F0 *sj, int id, int n, SfdSjChunk_x001612F0 *ck);
    void (*ungetChunk)(SfdSj_x001612F0 *sj, int id, SfdSjChunk_x001612F0 *ck);
    void (*putChunk)(SfdSj_x001612F0 *sj, int id, SfdSjChunk_x001612F0 *ck);
    int (*getNumData)(SfdSj_x001612F0 *sj, int id);
} SfdSjVtbl_x001612F0;
struct SfdSj_x001612F0 {
    SfdSjVtbl_x001612F0 *vtbl;
};
typedef struct SjxObj_x001612F0 SjxObj_x001612F0;
typedef struct LscStm_x001612F0 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x001612F0;
typedef struct LscObj_x001612F0 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x001612F0 *sj;
    SfdSjChunk_x001612F0 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x001612F0 stms[16];
} LscObj_x001612F0;
typedef struct AdxPdObj_x001612F0 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x001612F0;
typedef struct AdxDecPara_x001612F0 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x001612F0;
struct Pl2Enc_x001612F0;
typedef struct AdxbObj_x001612F0 AdxbObj_x001612F0;
typedef short *(*AdxbGetWrFunc_x001612F0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001612F0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001612F0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001612F0 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x001612F0 dp;
    AdxbGetWrFunc_x001612F0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001612F0 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x001612F0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001612F0(AdxbObj_x001612F0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001612F0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001612F0 *adxb;
    SfdSj_x001612F0 *sji;
    SfdSj_x001612F0 *sjo[2];
    SfdSjChunk_x001612F0 cki;
    SfdSjChunk_x001612F0 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x001612F0;
void ADXSJD_Stop_x001612F0(AdxSjdObj_x001612F0 *sjd) __asm__("func_00158E90");
extern void ADXSJD_EntryFltFunc_x001612F0(AdxSjdObj_x001612F0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001612F0(AdxSjdObj_x001612F0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001612F0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001612F0)(CvFsErrFn_x001612F0 func, void *obj);
typedef int (*CvFsPathFn_x001612F0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001612F0)(void);
typedef int (*CvFsOpenFn_x001612F0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001612F0)(int fd);
typedef int (*CvFsFdIntFn_x001612F0)(int fd);
typedef int (*CvFsSeekFn_x001612F0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001612F0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001612F0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001612F0)(void);
typedef int (*CvFsLoadDirInfoFn_x001612F0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001612F0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001612F0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001612F0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001612F0 entry_err_func;
    CvFsPathFn_x001612F0 get_file_size;
    CvFsGetFreeSizeFn_x001612F0 get_free_size;
    CvFsOpenFn_x001612F0 open;
    CvFsFdFn_x001612F0 close;
    CvFsSeekFn_x001612F0 seek;
    CvFsFdIntFn_x001612F0 tell;
    CvFsXferFn_x001612F0 req_rd;
    CvFsXferFn_x001612F0 req_wr;
    CvFsFdFn_x001612F0 stop_tr;
    CvFsFdIntFn_x001612F0 get_stat;
    CvFsFdIntFn_x001612F0 get_sct_len;
    CvFsSetSctLenFn_x001612F0 set_sct_len;
    CvFsFdIntFn_x001612F0 get_num_tr;
    CvFsPathFn_x001612F0 change_dir;
    CvFsPathFn_x001612F0 is_exist_file;
    CvFsGetNumFilesFn_x001612F0 get_num_files;
    CvFsLoadDirInfoFn_x001612F0 load_dir_info;
    CvFsFdIntFn_x001612F0 get_max_byte_rate;
    CvFsPathFn_x001612F0 make_dir;
    CvFsPathFn_x001612F0 remove_dir;
    CvFsPathFn_x001612F0 delete_file;
    CvFsGetFileSizeExFn_x001612F0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001612F0 opt_fn2;
} CvFsVtbl_x001612F0;
typedef struct CvFsHandle_x001612F0 {
    CvFsVtbl_x001612F0 *vtbl;
    int fd;
} CvFsHandle_x001612F0;
extern CvFsVtbl_x001612F0 *addDevice_x001612F0(char *devname, CvFsVtbl_x001612F0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001612F0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001612F0 *sj;
    CvFsHandle_x001612F0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001612F0 rdck;
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
} AdxStmObj_x001612F0;
int ADXSTM_Seek_x001612F0(AdxStmObj_x001612F0 *stm, int pos) __asm__("func_0015CCD8");
int ADXSTM_Start_x001612F0(AdxStmObj_x001612F0 *stm) __asm__("func_0015CD48");
void ADXSTM_Stop_x001612F0(AdxStmObj_x001612F0 *stm) __asm__("func_0015CE38");
extern void ADXSTM_EntryEosFunc_x001612F0(AdxStmObj_x001612F0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x001612F0 AdxAmpObj_x001612F0;
typedef struct DtrObj_x001612F0 DtrObj_x001612F0;
typedef struct Ps2RnaPsj_x001612F0 {
    char used;
    void *sjrmt;
    SfdSj_x001612F0 *sjuni;
    SjxObj_x001612F0 *sjx;
    SfdSjChunk_x001612F0 ck;
} Ps2RnaPsj_x001612F0;
typedef struct Ps2Rna_x001612F0 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x001612F0 *psj[2];
    DtrObj_x001612F0 *dtr[2];
    SfdSj_x001612F0 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x001612F0;
typedef struct AdxtObj_x001612F0 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x001612F0 *sjd;
    AdxStmObj_x001612F0 *stm;
    Ps2Rna_x001612F0 *rna;
    SfdSj_x001612F0 *sjf;
    SfdSj_x001612F0 *sji;
    SfdSj_x001612F0 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x001612F0 *amp;
    SfdSj_x001612F0 *ampsji[2];
    SfdSj_x001612F0 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x001612F0 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x001612F0;
void adxt_start_sj_x001612F0(AdxtObj_x001612F0 *adxt, SfdSj_x001612F0 *sji) __asm__("func_0015E408");
void ADXRNA_SetTransSw_x001612F0(Ps2Rna_x001612F0 *rna, int sw) __asm__("func_00158880");
void ADXRNA_SetPlaySw_x001612F0(Ps2Rna_x001612F0 *rna, int sw) __asm__("func_00158898");
void ADXCRS_Lock_x001612F0(void) __asm__("func_00152508");
void ADXCRS_Unlock_x001612F0(void) __asm__("func_00152520");
void func_001612F0_x001612F0(AdxtObj_x001612F0 *adxt) __asm__("func_001612F0");
/* adxt_RcvrReplay: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001612F0_x001612F0(AdxtObj_x001612F0 *adxt)
{
    int i;
    ADXCRS_Lock_x001612F0();
    ADXRNA_SetTransSw_x001612F0(adxt->rna, 0);
    ADXRNA_SetPlaySw_x001612F0(adxt->rna, 0);
    ADXSJD_Stop_x001612F0(adxt->sjd);
    ADXCRS_Unlock_x001612F0();
    if (adxt->stm != 0) {
        ADXSTM_Stop_x001612F0(adxt->stm);
        adxt->sji->vtbl->reset(adxt->sji);
    }
    ADXCRS_Lock_x001612F0();
    for (i = 0; i < adxt->maxnch; i++) {
        adxt->sjo[i]->vtbl->reset(adxt->sjo[i]);
    }
    if (adxt->stm != 0) {
        ADXSTM_Seek_x001612F0(adxt->stm, 0);
        ADXSTM_Start_x001612F0(adxt->stm);
    }
    adxt_start_sj_x001612F0(adxt, adxt->sji);
    ADXCRS_Unlock_x001612F0();
}
typedef int (*CvFsFn_x001613E0)();
typedef struct {
    CvFsFn_x001613E0 exec_server;
    CvFsFn_x001613E0 entry_err_func;
    CvFsFn_x001613E0 get_file_size;
    CvFsFn_x001613E0 get_free_size;
    CvFsFn_x001613E0 open;
    CvFsFn_x001613E0 close;
    CvFsFn_x001613E0 seek;
    CvFsFn_x001613E0 tell;
    CvFsFn_x001613E0 req_rd;
    CvFsFn_x001613E0 req_wr;
    CvFsFn_x001613E0 stop_tr;
    CvFsFn_x001613E0 get_stat;
    CvFsFn_x001613E0 get_sct_len;
    CvFsFn_x001613E0 set_sct_len;
    CvFsFn_x001613E0 get_num_tr;
    CvFsFn_x001613E0 change_dir;
    CvFsFn_x001613E0 is_exist_file;
    CvFsFn_x001613E0 get_num_files;
    CvFsFn_x001613E0 load_dir_info;
    CvFsFn_x001613E0 get_max_byte_rate;
    CvFsFn_x001613E0 make_dir;
    CvFsFn_x001613E0 remove_dir;
    CvFsFn_x001613E0 delete_file;
    CvFsFn_x001613E0 get_file_size_ex;
    CvFsFn_x001613E0 opt_fn1;
    CvFsFn_x001613E0 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x001613E0;
typedef struct {
    signed char used;
    signed char busy;
    signed char send_on;
    char pad_03[1];
    int svr;
    int seq;
    char *eewk;
    int len;
    int *ucwk;
    char *iopwk;
    int wklen;
    void (*fn20)();
    void *obj24;
    void (*fn28)();
    void *obj2c;
    struct { int data; char *addr; int size; int mode; } dma;
    int dmaid;
} DtxObj_x001613E0;
typedef struct SjObj_x001613E0 SjObj_x001613E0;
typedef struct {
    char pad_00[12];
    void (*destroy)(SjObj_x001613E0 *sj);
    void *(*get_uuid)(SjObj_x001613E0 *sj);
    void (*reset)(SjObj_x001613E0 *sj);
    void (*getchunk)(SjObj_x001613E0 *sj, int id, int nbyte, void *ck);
    void (*ungetchunk)(SjObj_x001613E0 *sj, int id, void *ck);
    void (*putchunk)(SjObj_x001613E0 *sj, int id, void *ck);
    int (*getnum)(SjObj_x001613E0 *sj, int id);
    int (*is_get_chunk)(SjObj_x001613E0 *sj, int id, int nbyte, int *rbyte);
    void (*set_error_cb)(SjObj_x001613E0 *sj, void *fn, void *obj);
} SjIf_x001613E0;
struct SjObj_x001613E0 {
    SjIf_x001613E0 *vtbl;
};
typedef struct SjChunk_x001613E0 {
    char *data;
    int len;
} SjChunk_x001613E0;
typedef struct {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char nch;
    void *sjd;
    int fstm;
    int rna;
    SjObj_x001613E0 *sjf;
    SjObj_x001613E0 *sji;
    SjObj_x001613E0 *sjo[2];
    unsigned char *wbuf;
    int wsize;
    int unk_28;
    unsigned char *work;
    int obuf_size;
    int obuf_dist;
    int svr_freq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    char pad_46[6];
    int lpcnt;
    char pad_50[4];
    int unk_54;
    int unk_58;
    int unk_5c;
    short ercode;
    char pad_62[2];
    int unk_64;
    short unk_68;
    short unk_6a;
    signed char lpflg;
    signed char rcvr_mode;
    char pad_6e[2];
    signed char start_hold;
    signed char ready;
    signed char pause;
    char pad_73[1];
    void *pkm;
    SjObj_x001613E0 *sjx[2];
    SjObj_x001613E0 *sjy[2];
    int time_ofst;
    int unk_8c;
    int unk_90;
    void *stm;
    signed char unk_98;
    char pad_99[3];
    int vsync_time;
    int vsync_base;
} AdxtObj_x001613E0;
typedef struct {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtycnt;
    int sj;
    void *fd;
    int start_sct;
    int ofst;
    int fsize;
    int rq_size;
    int fill_thr;
    int nrd;
    SjChunk_x001613E0 ck;
    int maxsct;
    int fsct;
    int total_rd;
    int end_cb;
    int end_obj;
} AdxstmObj_x001613E0;
struct SjObj_x001613E0;
struct SjObj_x001613E0;
void adxt_stop_x001613E0(AdxtObj_x001613E0 *adxt) __asm__("ADXT_Stop");
struct SjObj_x001613E0;
struct SjObj_x001613E0;
struct SjObj_x001613E0;
int adxstm_get_stat_x001613E0(AdxstmObj_x001613E0 *stm) __asm__("func_0015CCD0");
extern void cvFsAddDev_x001613E0(char *name, CvFsDevIf_x001613E0 *(*getif)(void)) __asm__("cvFsAddDev");
struct SjObj_x001613E0;
struct SjObj_x001613E0;
struct SjChunk_x001613E0;
struct SjChunk_x001613E0;
struct SjChunk_x001613E0;
struct SjObj_x001613E0;
extern void dtx_set_send_cb_x001613E0(DtxObj_x001613E0 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_send_cb");
extern void dtx_set_recv_cb_x001613E0(DtxObj_x001613E0 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_recv_cb");
typedef struct {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    void *sjd;
    void *stm;
    void *rna;
    char pad_10[4];
    SjObj_x001613E0 *sji;
    SjObj_x001613E0 *sjo[2];
    char pad_20[24];
    int svrfreq;
    char pad_3c[4];
    short outvol;
    short outpan0;
    short outpan1;
    char pad_46[2];
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    char pad_54[12];
    short ercode;
    char pad_62[2];
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    char pad_6e[2];
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    char pad_73[1];
    int amp;
    char pad_78[16];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    char pad_94[4];
    signed char lnkflg;
    char pad_99[3];
    int tvofst;
    int svcnt;
} AdxtObjView_x001613E0;
extern int adxsjd_get_decoded_smpl_x001613E0(void *sjd) __asm__("func_00159C78");
extern int adxsjd_get_stat_x001613E0(void *sjd) __asm__("func_00158D98");
extern void adxt_restart_x001613E0(AdxtObjView_x001613E0 *adxt) __asm__("func_001612F0");
void adxt_stop_x001613E0(AdxtObj_x001613E0 *adxt) __asm__("ADXT_Stop");
void adxt_restart_x001613E0(AdxtObjView_x001613E0 *adxt) __asm__("func_001612F0");
void func_001613E0_x001613E0(AdxtObjView_x001613E0 *adxt) __asm__("func_001613E0");
/* adxt_check_error: from https://github.com/new-coke/rez-decomp (src/cri/adxt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001613E0_x001613E0(AdxtObjView_x001613E0 *adxt)
{
    int stat;
    int n;
    int nbyte;
    SjObj_x001613E0 *sj;
    stat = adxt->stat;
    if (stat == 3 && adxt->pause_flag == 0 && adxsjd_get_stat_x001613E0(adxt->sjd) != stat) {
        n = adxsjd_get_decoded_smpl_x001613E0(adxt->sjd);
        if (adxt->edecpos == n) {
            adxt->edeccnt++;
            if (adxt->svrfreq * 5 < adxt->edeccnt)
                adxt->ercode = -2;
        } else {
            adxt->edeccnt = 0;
        }
        adxt->edecpos = n;
        if (adxt->ercode != 0) {
            if (adxt->autorcvr == 1 || adxt->autorcvr == 2)
                adxt_stop_x001613E0(adxt);
            if (adxt->autorcvr != 0) {
                adxt->ercode = 0;
                adxt->edeccnt = 0;
            }
        }
    } else {
        adxt->edeccnt = 0;
    }
    if ((stat == 1 || stat == 2 || stat == 3) && adxt->pause_flag == 0 && adxsjd_get_stat_x001613E0(adxt->sjd) != 3) {
        sj = adxt->sji;
        if (sj)
            nbyte = sj->vtbl->getnum(sj, 1);
        else
            nbyte = 0;
        if (nbyte < 64) {
            adxt->eshrtcnt++;
            if (stat == 3) {
                if (adxt->svrfreq * 5 < adxt->eshrtcnt)
                    adxt->ercode = -1;
            } else {
                if (adxt->svrfreq * 20 < adxt->eshrtcnt)
                    adxt->ercode = -1;
            }
            if (adxt->ercode != 0) {
                if (adxt->autorcvr == 1)
                    adxt_stop_x001613E0(adxt);
                else if (adxt->autorcvr == 2)
                    adxt_restart_x001613E0(adxt);
                if (adxt->autorcvr != 0) {
                    adxt->ercode = 0;
                    adxt->eshrtcnt = 0;
                }
            }
        } else {
            adxt->eshrtcnt = 0;
        }
    } else {
        adxt->eshrtcnt = 0;
    }
    if (adxt->stm && adxstm_get_stat_x001613E0(adxt->stm) == 4) {
        if (adxt->autorcvr == 1)
            adxt_stop_x001613E0(adxt);
        else if (adxt->autorcvr == 2)
            adxt_restart_x001613E0(adxt);
        if (adxt->autorcvr != 0) {
            adxt->ercode = 0;
            adxt->eshrtcnt = 0;
        }
    }
}
typedef int s32_x00161630;
typedef s32_x00161630 ptrdiff_t_x00161630;
typedef unsigned char Uint8_x00161630;
typedef char Sint8_x00161630;
typedef unsigned short Uint16_x00161630;
typedef signed short Sint16_x00161630;
typedef unsigned int Uint32_x00161630;
typedef signed int Sint32_x00161630;
typedef Sint32_x00161630 Bool_x00161630;
typedef char Char8_x00161630;
typedef struct _UUID_x00161630 {
    Uint32_x00161630 Data1;
    Uint16_x00161630 Data2;
    Uint16_x00161630 Data3;
    Uint8_x00161630 Data4[8];
} UUID_x00161630;
typedef struct {
        Sint8_x00161630 *data;
        Sint32_x00161630 len;
} SJCK_x00161630;
typedef struct {
        struct _sj_vtbl_x00161630 *vtbl;
} SJ_OBJ_x00161630;
typedef SJ_OBJ_x00161630 *SJ_x00161630;
typedef struct _sj_vtbl_x00161630 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00161630 sj);
        UUID_x00161630 *(*GetUuid)(SJ_x00161630 sj);
        void (*Reset)(SJ_x00161630 sj);
        void (*GetChunk)(SJ_x00161630 sj, Sint32_x00161630 id, Sint32_x00161630 nbyte, SJCK_x00161630 *ck);
        void (*UngetChunk)(SJ_x00161630 sj, Sint32_x00161630 id, SJCK_x00161630 *ck);
        void (*PutChunk)(SJ_x00161630 sj, Sint32_x00161630 id, SJCK_x00161630 *ck);
        Sint32_x00161630 (*GetNumData)(SJ_x00161630 sj, Sint32_x00161630 id);
        Sint32_x00161630 (*IsGetChunk)(SJ_x00161630 sj, Sint32_x00161630 id, Sint32_x00161630 nbyte, Sint32_x00161630 *rbyte);
        void (*EntryErrFunc)(SJ_x00161630 sj,
                                        void (*func)(void *obj, Sint32_x00161630 ecode), void *obj);
} SJ_IF_x00161630;
extern int* sceCdCallback_x00161630(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00161630(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00161630;
typedef struct {
               Sint16_x00161630 unk0;
               Sint16_x00161630 unk2;
               Sint16_x00161630 unk4;
               Sint16_x00161630 unk6;
} ADXPD_OBJ_SUB_x00161630;
typedef struct {
               Sint32_x00161630 used;
               Sint32_x00161630 unk4;
               Sint32_x00161630 mode;
               Sint32_x00161630 stat;
               Sint32_x00161630 num_blk;
               Sint32_x00161630 unk14;
               Sint32_x00161630 unk18;
               Sint32_x00161630 unk1C;
               Sint32_x00161630 unk20;
               Sint32_x00161630 unk24;
               ADXPD_OBJ_SUB_x00161630 unk28;
               Sint16_x00161630 unk30;
               Sint16_x00161630 unk32;
               Sint16_x00161630 unk34;
               Sint16_x00161630 unk36;
               Sint16_x00161630 unk38;
               Sint16_x00161630 unk3A;
} ADXPD_OBJ_x00161630;
typedef ADXPD_OBJ_x00161630* ADXPD_x00161630;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00161630;
typedef struct {
               Sint32_x00161630 unk0;
               Sint32_x00161630 unk4;
               Sint32_x00161630 unk8;
               Sint32_x00161630 unkC;
               Sint32_x00161630 unk10;
               void* unk14;
               Sint32_x00161630 unk18;
               Sint32_x00161630 unk1C;
               Sint32_x00161630 unk20;
               Sint32_x00161630 unk24;
               Sint32_x00161630 unk28;
} ADXB_UNK_x00161630;
typedef struct {
               Sint16_x00161630 unk0;
               Sint16_x00161630 unk2;
               Sint32_x00161630 stat;
               ADXPD_x00161630 adxpd;
               Sint8_x00161630 encoding_type;
               Sint8_x00161630 sample_bitdepth;
               Sint8_x00161630 channel_count;
               Sint8_x00161630 block_size;
               Sint32_x00161630 samples_per_block;
               Sint32_x00161630 sample_rate;
               Sint32_x00161630 total_samples;
               Sint16_x00161630 unk1C;
               char pad1E[2];
               Sint32_x00161630 unk20;
               Sint16_x00161630 unk24;
               Sint16_x00161630 unk26;
               Sint32_x00161630 unk28;
               Sint32_x00161630 unk2C;
               Sint32_x00161630 unk30;
               Sint32_x00161630 unk34;
               Sint32_x00161630 unk38;
               void* unk3C;
               Sint32_x00161630 unk40;
               Sint32_x00161630 unk44;
               ADXB_UNK_x00161630 unk48;
               Sint32_x00161630 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00161630*, Sint32_x00161630*, Sint32_x00161630*);
               void* object;
               void (*add_wr)(void*, Sint32_x00161630, Sint32_x00161630);
               Sint32_x00161630 unk84;
               Sint32_x00161630 unk88;
               Sint32_x00161630 unk8C;
               Sint32_x00161630 dec_num_sample;
               Sint32_x00161630 dec_data_len;
               Sint16_x00161630 format;
               Sint16_x00161630 unk9A;
               Sint16_x00161630 unk9C;
               Sint16_x00161630 unk9E;
               Sint16_x00161630 unkA0;
               char padA2[0xE];
               Sint32_x00161630 unkB0;
               Sint32_x00161630 ahx_dec_samples;
               Sint32_x00161630 ahx_dec_frames;
               Sint32_x00161630 unkBC;
               Sint32_x00161630 ac3_dec_samples;
               Sint32_x00161630 ac3_dec_frames;
               Sint32_x00161630 unkC8;
               ADX_UNK_x00161630 unkCC;
               Sint16_x00161630 unkDC;
               Sint16_x00161630 unkDE[2];
               char padE2[2];
               Sint32_x00161630 unkE4;
               char padE8[8];
} ADXB_OBJ_x00161630;
typedef ADXB_OBJ_x00161630* ADXB_x00161630;
typedef struct {
    Sint8_x00161630 used;
    Sint8_x00161630 state;
    Sint8_x00161630 maxnch;
    Sint8_x00161630 unk3;
    ADXB_x00161630 adxb;
    SJ_x00161630 sji;
    SJ_x00161630 sjo[2];
    SJCK_x00161630 unk14;
    SJCK_x00161630 chunks[2];
    Sint32_x00161630 unk2C;
    Sint32_x00161630 unk30;
    Sint32_x00161630 unk34;
    Sint32_x00161630 unk38;
    Sint32_x00161630 trap_num_samples;
    Sint32_x00161630 trap_count;
    Sint32_x00161630 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00161630, Sint8_x00161630*, Sint32_x00161630);
    void* flt_obj;
    Sint8_x00161630 unk58[0x40];
    Sint32_x00161630 unk98;
    Sint32_x00161630 lnkflg;
} ADXSJD_OBJ_x00161630;
typedef ADXSJD_OBJ_x00161630* ADXSJD_x00161630;
typedef struct {
    Sint32_x00161630 unk0;
    SJ_x00161630 sj;
} SJX_UNK_0_x00161630;
typedef struct {
    Sint8_x00161630 used;
    Sint8_x00161630 unk1;
    Sint16_x00161630 unk2;
    SJ_x00161630 sj;
    void* unk8;
    Sint32_x00161630 unkC;
    SJX_UNK_0_x00161630* unk10;
} SJX_OBJ_x00161630;
typedef SJX_OBJ_x00161630* SJX_x00161630;
typedef struct {
    Sint8_x00161630 used;
    char pad1[3];
    void* unk4;
    SJ_x00161630 unk8;
    SJX_x00161630 unkC;
    SJCK_x00161630 chunk;
} PS2PSJ_OBJ_x00161630;
typedef PS2PSJ_OBJ_x00161630* PS2PSJ_x00161630;
typedef struct {
               Sint8_x00161630 unk0;
               Sint8_x00161630 unk1;
               Sint8_x00161630 unk2;
               SJ_x00161630 unk4;
               SJ_x00161630 unk8;
               SJCK_x00161630 unkC;
               SJCK_x00161630 unk14;
               sceSifDmaData_x00161630 dma_data;
               Sint32_x00161630 unk2C;
               Sint32_x00161630 unk30;
               Sint32_x00161630 unk34;
               Sint32_x00161630 unk38;
               Sint32_x00161630 unk3C;
} DTR_OBJ_x00161630;
typedef DTR_OBJ_x00161630* DTR_x00161630;
typedef struct {
    Sint8_x00161630 used;
    Sint32_x00161630 maxnch;
    PS2PSJ_x00161630 psj[2];
    DTR_x00161630 dtr[2];
    SJ_x00161630 sjo[2];
    void* unk20;
    Sint32_x00161630 unk24;
    Sint32_x00161630 unk28;
    Sint32_x00161630 unk2C;
    Sint8_x00161630 unk30;
    Sint8_x00161630 unk31;
    Sint8_x00161630 num_chan;
    Sint8_x00161630 unk33;
    Sint32_x00161630 sfreq;
    Sint32_x00161630 unk38;
    Sint32_x00161630 out_vol;
    Sint32_x00161630 unk40;
    Sint32_x00161630 pan[2];
    Sint32_x00161630 unk4C[2];
    Sint32_x00161630 unk54;
    Sint32_x00161630 unk58;
    Sint8_x00161630 unk5C;
    Sint8_x00161630 unk5D;
    Sint8_x00161630 unk5E;
    Sint8_x00161630 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00161630;
typedef ADXRNA_OBJ_x00161630* ADXRNA_x00161630;
typedef struct {
    Sint8_x00161630 unk0;
    Sint8_x00161630 stat;
    Sint8_x00161630 read_flg;
    Sint8_x00161630 unk3;
    SJ_x00161630 sj;
    void* cvfs;
    Sint32_x00161630 unkC;
    Sint32_x00161630 file_len;
    Sint32_x00161630 file_sct;
    Sint32_x00161630 unk18;
    Sint32_x00161630 unk1C;
    Sint32_x00161630 unk20;
    SJCK_x00161630 unk24;
    Sint32_x00161630 req_rd_size;
    Sint32_x00161630 eos;
    Uint32_x00161630 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00161630 unk40;
    Sint8_x00161630 pause;
    Sint8_x00161630 unk45;
    Sint8_x00161630 unk46;
    Sint8_x00161630 unk47;
    Sint8_x00161630 unk48;
    Sint8_x00161630 unk49;
    char pad4A[6];
    const Char8_x00161630* fname;
    void* dir;
    Sint32_x00161630 cur_ofst;
    Uint32_x00161630 unk5C;
} ADXSTM_OBJ_x00161630;
typedef ADXSTM_OBJ_x00161630* ADXSTM_x00161630;
typedef struct {
    Sint32_x00161630 id;
    const Char8_x00161630* fname;
    Sint32_x00161630 unk8;
    void* dir;
    Sint32_x00161630 unk10;
    Sint32_x00161630 unk14;
    Sint32_x00161630 stat;
    Sint32_x00161630 rd_sct;
} LSC_STM_x00161630;
typedef struct {
    Sint8_x00161630 used;
    Sint8_x00161630 stat;
    Sint8_x00161630 unk2;
    Sint8_x00161630 lp_flg;
    Sint8_x00161630 unk4;
    SJ_x00161630 sj;
    Sint32_x00161630 unkC;
    Sint32_x00161630 unk10;
    Sint32_x00161630 flow_limit;
    Sint32_x00161630 unk18;
    Sint32_x00161630 last_stm_index;
    Sint32_x00161630 unk20;
    Sint32_x00161630 num_stm;
    ADXSTM_x00161630 stm_hndl;
    Sint32_x00161630 unk2C;
    char pad30[4];
    Sint32_x00161630 unk34;
    LSC_STM_x00161630 stm[16];
} LSC_OBJ_x00161630;
typedef LSC_OBJ_x00161630* LSC_x00161630;
typedef struct _adx_talk_x00161630 {
                   Sint8_x00161630 used;
                   Sint8_x00161630 stat;
                   Sint8_x00161630 pmode;
                   Sint8_x00161630 maxnch;
                   ADXSJD_x00161630 sjd;
                   ADXSTM_x00161630 stm;
                   ADXRNA_x00161630 rna;
                   SJ_x00161630 sjf;
                   SJ_x00161630 sji;
                   SJ_x00161630 sjo[(2)];
                   Sint8_x00161630 *ibuf;
                   Sint32_x00161630 ibuflen;
                   Sint32_x00161630 ibufxlen;
                   Sint16_x00161630 *obuf;
                   Sint32_x00161630 obufsize;
                   Sint32_x00161630 obufdist;
                   Sint32_x00161630 svrfreq;
                   Sint16_x00161630 maxsct;
                   Sint16_x00161630 minsct;
                   Sint16_x00161630 outvol;
                   Sint16_x00161630 outpan[(2)];
                   Sint16_x00161630 unk46;
                   Sint32_x00161630 maxdecsmpl;
                   Sint32_x00161630 lpcnt;
                   Sint32_x00161630 lp_skiplen;
                   Sint32_x00161630 trp;
                   Sint32_x00161630 wpos;
                   Sint32_x00161630 mofst;
                   Sint16_x00161630 ercode;
                   Sint32_x00161630 edecpos;
                   Sint16_x00161630 edeccnt;
                   Sint16_x00161630 eshrtcnt;
                   Sint8_x00161630 lpflg;
                   Sint8_x00161630 autorcvr;
                   Sint8_x00161630 fltmode;
                   Sint8_x00161630 execflag;
                   Sint8_x00161630 pstwait_flag;
                   Sint8_x00161630 pstready_flag;
                   Sint8_x00161630 pause_flag;
                   void *amp;
                   SJ_x00161630 ampsji[(2)];
                   SJ_x00161630 ampsjo[(2)];
                   Sint32_x00161630 time_ofst;
                   Sint32_x00161630 lesct;
                   Sint32_x00161630 trpnsmpl;
                   void *lsc;
                   Sint8_x00161630 lnkflg;
                   Sint8_x00161630 rsv;
                   Sint16_x00161630 rsv2;
                   Uint32_x00161630 tvofst;
                   Uint32_x00161630 svcnt;
                   Uint32_x00161630 decofst;
                   Sint32_x00161630 flush_nsmpl;
                   Sint8_x00161630 unkAC;
                   Sint8_x00161630 padAD[1];
               Char8_x00161630* unkB0;
               Sint32_x00161630 padB4;
               Sint32_x00161630 padB8;
               Sint32_x00161630 padBC;
               Sint32_x00161630 padC0;
} ADX_TALK_x00161630;
typedef ADX_TALK_x00161630 *ADXT_x00161630;
extern void ADXT_EntryErrFunc_x00161630(void (*func)(void *obj, Sint8_x00161630 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00161630(ADXT_x00161630 adxt,
                void (*f)(void *obj, Sint32_x00161630 ch, void *data, Sint32_x00161630 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00161630(Bool_x00161630 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00161630(Bool_x00161630 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00161630(void (*fn)(void *obj, Char8_x00161630 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00161630(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern void ADXRNA_EntryErrFunc_x00161630(void (*)(void*, Char8_x00161630*), void*) __asm__("ADXRNA_EntryErrFunc");
extern void ADXSJD_EntryTrapFunc_x00161630(ADXSJD_x00161630 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint32_x00161630 ADXSTM_GetStat_x00161630(ADXSTM_x00161630 stm) __asm__("func_0015CCD0");
Sint8_x00161630 LSC_GetStat_x00161630(LSC_x00161630 lsc) __asm__("func_00169D68");
void func_00161630_x00161630(ADXT_x00161630 adxt) __asm__("func_00161630");
/* ADXT_ExecRdErrChk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tsvr.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00161630_x00161630(ADXT_x00161630 adxt) {
    if ((adxt->stm != 0) && (ADXSTM_GetStat_x00161630(adxt->stm) == 4)) {
        adxt->ercode = -1;
        adxt->stat = (6);
    }
    if ((adxt->lsc != 0) && (LSC_GetStat_x00161630(adxt->lsc) == 3)) {
        adxt->ercode = -1;
        adxt->stat = (6);
    }
}
typedef struct SfdSj_x001616B0 SfdSj_x001616B0;
typedef struct SfdSjChunk_x001616B0 {
    char *data;
    int len;
} SfdSjChunk_x001616B0;
typedef struct SfdSjVtbl_x001616B0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001616B0 *sj);
    int (*getUuid)(SfdSj_x001616B0 *sj);
    void (*reset)(SfdSj_x001616B0 *sj);
    void (*getChunk)(SfdSj_x001616B0 *sj, int id, int n, SfdSjChunk_x001616B0 *ck);
    void (*ungetChunk)(SfdSj_x001616B0 *sj, int id, SfdSjChunk_x001616B0 *ck);
    void (*putChunk)(SfdSj_x001616B0 *sj, int id, SfdSjChunk_x001616B0 *ck);
    int (*getNumData)(SfdSj_x001616B0 *sj, int id);
} SfdSjVtbl_x001616B0;
struct SfdSj_x001616B0 {
    SfdSjVtbl_x001616B0 *vtbl;
};
typedef struct SjxObj_x001616B0 SjxObj_x001616B0;
typedef struct LscStm_x001616B0 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x001616B0;
typedef struct LscObj_x001616B0 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x001616B0 *sj;
    SfdSjChunk_x001616B0 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x001616B0 stms[16];
} LscObj_x001616B0;
typedef struct AdxPdObj_x001616B0 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x001616B0;
typedef struct AdxDecPara_x001616B0 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x001616B0;
struct Pl2Enc_x001616B0;
typedef struct AdxbObj_x001616B0 AdxbObj_x001616B0;
typedef short *(*AdxbGetWrFunc_x001616B0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001616B0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001616B0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001616B0 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x001616B0 dp;
    AdxbGetWrFunc_x001616B0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001616B0 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x001616B0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001616B0(AdxbObj_x001616B0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001616B0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001616B0 *adxb;
    SfdSj_x001616B0 *sji;
    SfdSj_x001616B0 *sjo[2];
    SfdSjChunk_x001616B0 cki;
    SfdSjChunk_x001616B0 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x001616B0;
void ADXSJD_TermSupply_x001616B0(AdxSjdObj_x001616B0 *sjd) __asm__("func_00158E30");
extern void ADXSJD_EntryFltFunc_x001616B0(AdxSjdObj_x001616B0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001616B0(AdxSjdObj_x001616B0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001616B0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001616B0)(CvFsErrFn_x001616B0 func, void *obj);
typedef int (*CvFsPathFn_x001616B0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001616B0)(void);
typedef int (*CvFsOpenFn_x001616B0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001616B0)(int fd);
typedef int (*CvFsFdIntFn_x001616B0)(int fd);
typedef int (*CvFsSeekFn_x001616B0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001616B0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001616B0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001616B0)(void);
typedef int (*CvFsLoadDirInfoFn_x001616B0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001616B0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001616B0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001616B0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001616B0 entry_err_func;
    CvFsPathFn_x001616B0 get_file_size;
    CvFsGetFreeSizeFn_x001616B0 get_free_size;
    CvFsOpenFn_x001616B0 open;
    CvFsFdFn_x001616B0 close;
    CvFsSeekFn_x001616B0 seek;
    CvFsFdIntFn_x001616B0 tell;
    CvFsXferFn_x001616B0 req_rd;
    CvFsXferFn_x001616B0 req_wr;
    CvFsFdFn_x001616B0 stop_tr;
    CvFsFdIntFn_x001616B0 get_stat;
    CvFsFdIntFn_x001616B0 get_sct_len;
    CvFsSetSctLenFn_x001616B0 set_sct_len;
    CvFsFdIntFn_x001616B0 get_num_tr;
    CvFsPathFn_x001616B0 change_dir;
    CvFsPathFn_x001616B0 is_exist_file;
    CvFsGetNumFilesFn_x001616B0 get_num_files;
    CvFsLoadDirInfoFn_x001616B0 load_dir_info;
    CvFsFdIntFn_x001616B0 get_max_byte_rate;
    CvFsPathFn_x001616B0 make_dir;
    CvFsPathFn_x001616B0 remove_dir;
    CvFsPathFn_x001616B0 delete_file;
    CvFsGetFileSizeExFn_x001616B0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001616B0 opt_fn2;
} CvFsVtbl_x001616B0;
typedef struct CvFsHandle_x001616B0 {
    CvFsVtbl_x001616B0 *vtbl;
    int fd;
} CvFsHandle_x001616B0;
extern CvFsVtbl_x001616B0 *addDevice_x001616B0(char *devname, CvFsVtbl_x001616B0 *(*get_if)(void)) __asm__("addDevice");
enum AdxStmStat_x001616B0 {
    ADXSTM_STAT_STOP_x001616B0 = 1,
    ADXSTM_STAT_READ_x001616B0 = 2,
    ADXSTM_STAT_READEND_x001616B0 = 3,
    ADXSTM_STAT_ERROR_x001616B0 = 4
};
typedef struct AdxStmObj_x001616B0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001616B0 *sj;
    CvFsHandle_x001616B0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001616B0 rdck;
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
} AdxStmObj_x001616B0;
int ADXSTM_GetStat_x001616B0(AdxStmObj_x001616B0 *stm) __asm__("func_0015CCD0");
extern void ADXSTM_EntryEosFunc_x001616B0(AdxStmObj_x001616B0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x001616B0 AdxAmpObj_x001616B0;
typedef struct DtrObj_x001616B0 DtrObj_x001616B0;
typedef struct Ps2RnaPsj_x001616B0 {
    char used;
    void *sjrmt;
    SfdSj_x001616B0 *sjuni;
    SjxObj_x001616B0 *sjx;
    SfdSjChunk_x001616B0 ck;
} Ps2RnaPsj_x001616B0;
typedef struct Ps2Rna_x001616B0 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x001616B0 *psj[2];
    DtrObj_x001616B0 *dtr[2];
    SfdSj_x001616B0 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x001616B0;
enum AdxtStat_x001616B0 {
    ADXT_STAT_STOP_x001616B0 = 0,
    ADXT_STAT_DECINFO_x001616B0 = 1,
    ADXT_STAT_PREP_x001616B0 = 2,
    ADXT_STAT_PLAYING_x001616B0 = 3,
    ADXT_STAT_DECEND_x001616B0 = 4,
    ADXT_STAT_PLAYEND_x001616B0 = 5,
    ADXT_STAT_ERROR_x001616B0 = 6
};
enum AdxtPmode_x001616B0 {
    ADXT_PMODE_FNAME_x001616B0 = 0,
    ADXT_PMODE_AFS_x001616B0 = 1,
    ADXT_PMODE_MEM_x001616B0 = 2,
    ADXT_PMODE_SJ_x001616B0 = 3,
    ADXT_PMODE_SLFILE_x001616B0 = 4
};
typedef struct AdxtObj_x001616B0 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x001616B0 *sjd;
    AdxStmObj_x001616B0 *stm;
    Ps2Rna_x001616B0 *rna;
    SfdSj_x001616B0 *sjf;
    SfdSj_x001616B0 *sji;
    SfdSj_x001616B0 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x001616B0 *amp;
    SfdSj_x001616B0 *ampsji[2];
    SfdSj_x001616B0 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x001616B0 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x001616B0;
int ADXT_GetStat_x001616B0(AdxtObj_x001616B0 *adxt) __asm__("ADXT_GetStat");
void func_001616B0_x001616B0(AdxtObj_x001616B0 *adxt) __asm__("func_001616B0");
/* ADXT_ExecRdCompChk: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001616B0_x001616B0(AdxtObj_x001616B0 *adxt)
{
    if (adxt->stm == 0) {
        return;
    }
    if (ADXT_GetStat_x001616B0(adxt) == ADXT_STAT_STOP_x001616B0) {
        return;
    }
    switch (adxt->pmode) {
    case ADXT_PMODE_FNAME_x001616B0:
    case ADXT_PMODE_AFS_x001616B0:
        if (ADXSTM_GetStat_x001616B0(adxt->stm) == ADXSTM_STAT_READEND_x001616B0) {
            ADXSJD_TermSupply_x001616B0(adxt->sjd);
        }
        break;
    case ADXT_PMODE_MEM_x001616B0:
        ADXSJD_TermSupply_x001616B0(adxt->sjd);
        break;
    case ADXT_PMODE_SJ_x001616B0:
    case ADXT_PMODE_SLFILE_x001616B0:
        break;
    }
}
__asm__("# rebind func_001616B0 0x001616B0");
typedef struct SfdSj_x00161748 SfdSj_x00161748;
typedef struct SfdSjChunk_x00161748 {
    char *data;
    int len;
} SfdSjChunk_x00161748;
typedef struct SfdSjVtbl_x00161748 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00161748 *sj);
    int (*getUuid)(SfdSj_x00161748 *sj);
    void (*reset)(SfdSj_x00161748 *sj);
    void (*getChunk)(SfdSj_x00161748 *sj, int id, int n, SfdSjChunk_x00161748 *ck);
    void (*ungetChunk)(SfdSj_x00161748 *sj, int id, SfdSjChunk_x00161748 *ck);
    void (*putChunk)(SfdSj_x00161748 *sj, int id, SfdSjChunk_x00161748 *ck);
    int (*getNumData)(SfdSj_x00161748 *sj, int id);
} SfdSjVtbl_x00161748;
struct SfdSj_x00161748 {
    SfdSjVtbl_x00161748 *vtbl;
};
typedef struct SjxObj_x00161748 SjxObj_x00161748;
typedef struct LscStm_x00161748 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x00161748;
typedef struct LscObj_x00161748 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00161748 *sj;
    SfdSjChunk_x00161748 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00161748 stms[16];
} LscObj_x00161748;
typedef struct AdxPdObj_x00161748 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00161748;
typedef struct AdxDecPara_x00161748 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00161748;
struct Pl2Enc_x00161748;
typedef struct AdxbObj_x00161748 AdxbObj_x00161748;
typedef short *(*AdxbGetWrFunc_x00161748)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00161748)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00161748 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00161748 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00161748 dp;
    AdxbGetWrFunc_x00161748 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00161748 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00161748 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00161748(AdxbObj_x00161748 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00161748 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00161748 *adxb;
    SfdSj_x00161748 *sji;
    SfdSj_x00161748 *sjo[2];
    SfdSjChunk_x00161748 cki;
    SfdSjChunk_x00161748 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00161748;
extern void ADXSJD_EntryFltFunc_x00161748(AdxSjdObj_x00161748 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00161748(AdxSjdObj_x00161748 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00161748)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00161748)(CvFsErrFn_x00161748 func, void *obj);
typedef int (*CvFsPathFn_x00161748)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00161748)(void);
typedef int (*CvFsOpenFn_x00161748)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00161748)(int fd);
typedef int (*CvFsFdIntFn_x00161748)(int fd);
typedef int (*CvFsSeekFn_x00161748)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00161748)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00161748)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00161748)(void);
typedef int (*CvFsLoadDirInfoFn_x00161748)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00161748)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00161748)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00161748 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00161748 entry_err_func;
    CvFsPathFn_x00161748 get_file_size;
    CvFsGetFreeSizeFn_x00161748 get_free_size;
    CvFsOpenFn_x00161748 open;
    CvFsFdFn_x00161748 close;
    CvFsSeekFn_x00161748 seek;
    CvFsFdIntFn_x00161748 tell;
    CvFsXferFn_x00161748 req_rd;
    CvFsXferFn_x00161748 req_wr;
    CvFsFdFn_x00161748 stop_tr;
    CvFsFdIntFn_x00161748 get_stat;
    CvFsFdIntFn_x00161748 get_sct_len;
    CvFsSetSctLenFn_x00161748 set_sct_len;
    CvFsFdIntFn_x00161748 get_num_tr;
    CvFsPathFn_x00161748 change_dir;
    CvFsPathFn_x00161748 is_exist_file;
    CvFsGetNumFilesFn_x00161748 get_num_files;
    CvFsLoadDirInfoFn_x00161748 load_dir_info;
    CvFsFdIntFn_x00161748 get_max_byte_rate;
    CvFsPathFn_x00161748 make_dir;
    CvFsPathFn_x00161748 remove_dir;
    CvFsPathFn_x00161748 delete_file;
    CvFsGetFileSizeExFn_x00161748 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00161748 opt_fn2;
} CvFsVtbl_x00161748;
typedef struct CvFsHandle_x00161748 {
    CvFsVtbl_x00161748 *vtbl;
    int fd;
} CvFsHandle_x00161748;
extern CvFsVtbl_x00161748 *addDevice_x00161748(char *devname, CvFsVtbl_x00161748 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00161748 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00161748 *sj;
    CvFsHandle_x00161748 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00161748 rdck;
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
} AdxStmObj_x00161748;
extern void ADXSTM_EntryEosFunc_x00161748(AdxStmObj_x00161748 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x00161748 AdxAmpObj_x00161748;
typedef struct DtrObj_x00161748 DtrObj_x00161748;
typedef struct Ps2RnaPsj_x00161748 {
    char used;
    void *sjrmt;
    SfdSj_x00161748 *sjuni;
    SjxObj_x00161748 *sjx;
    SfdSjChunk_x00161748 ck;
} Ps2RnaPsj_x00161748;
typedef struct Ps2Rna_x00161748 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00161748 *psj[2];
    DtrObj_x00161748 *dtr[2];
    SfdSj_x00161748 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x00161748;
enum AdxtStat_x00161748 {
    ADXT_STAT_STOP_x00161748 = 0,
    ADXT_STAT_DECINFO_x00161748 = 1,
    ADXT_STAT_PREP_x00161748 = 2,
    ADXT_STAT_PLAYING_x00161748 = 3,
    ADXT_STAT_DECEND_x00161748 = 4,
    ADXT_STAT_PLAYEND_x00161748 = 5,
    ADXT_STAT_ERROR_x00161748 = 6
};
typedef struct AdxtObj_x00161748 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00161748 *sjd;
    AdxStmObj_x00161748 *stm;
    Ps2Rna_x00161748 *rna;
    SfdSj_x00161748 *sjf;
    SfdSj_x00161748 *sji;
    SfdSj_x00161748 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x00161748 *amp;
    SfdSj_x00161748 *ampsji[2];
    SfdSj_x00161748 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00161748 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x00161748;
void ADXT_ExecRdErrChk_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_00161630");
void ADXT_ExecRdCompChk_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_001616B0");
void ADXERR_CallErrFunc1_x00161748(const char *msg) __asm__("ADXERR_CallErrFunc1");
void adxt_stat_decinfo_x00161748(AdxtObj_x00161748 *adxt) __asm__("adxt_stat_decinfo");
void adxt_stat_prep_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_00160EB0");
void adxt_stat_playing_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_00161028");
void adxt_stat_decend_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_001610E0");
void adxt_stat_playend_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_001612E8");
void ADXT_ExecRdErrChk_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_00161630");
void ADXT_ExecRdCompChk_x00161748(AdxtObj_x00161748 *adxt) __asm__("func_001616B0");
extern char ext_str0_x00161748[] __asm__("D_00462168");
void adxt_stat_decinfo_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void adxt_stat_decinfo_x00161748(AdxtObj_x00161748 *adxt) {}
void adxt_stat_prep_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void adxt_stat_prep_x00161748(AdxtObj_x00161748 *adxt) {}
void adxt_stat_playing_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void adxt_stat_playing_x00161748(AdxtObj_x00161748 *adxt) {}
void adxt_stat_decend_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void adxt_stat_decend_x00161748(AdxtObj_x00161748 *adxt) {}
void adxt_stat_playend_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void adxt_stat_playend_x00161748(AdxtObj_x00161748 *adxt) {}
void ADXT_ExecRdErrChk_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void ADXT_ExecRdErrChk_x00161748(AdxtObj_x00161748 *adxt) {}
void ADXT_ExecRdCompChk_x00161748(AdxtObj_x00161748 *adxt) __attribute__((weak, section(".b3stub")));
void ADXT_ExecRdCompChk_x00161748(AdxtObj_x00161748 *adxt) {}
void ADXT_ExecHndl_x00161748(AdxtObj_x00161748 *adxt) __asm__("ADXT_ExecHndl");
/* ADXT_ExecHndl_x00161748: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void ADXT_ExecHndl_x00161748(AdxtObj_x00161748 *adxt)
{
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x00161748(ext_str0_x00161748);
        return;
    }
    if (adxt->stat == ADXT_STAT_PLAYING_x00161748) {
        adxt_stat_playing_x00161748(adxt);
    } else if (adxt->stat == ADXT_STAT_DECINFO_x00161748) {
        adxt_stat_decinfo_x00161748(adxt);
    } else if (adxt->stat == ADXT_STAT_PREP_x00161748) {
        adxt_stat_prep_x00161748(adxt);
    } else if (adxt->stat == ADXT_STAT_DECEND_x00161748) {
        adxt_stat_decend_x00161748(adxt);
    } else if (adxt->stat == ADXT_STAT_PLAYEND_x00161748) {
        adxt_stat_playend_x00161748(adxt);
    }
    ADXT_ExecRdCompChk_x00161748(adxt);
    ADXT_ExecRdErrChk_x00161748(adxt);
}
typedef struct SfdSj_x00161810 SfdSj_x00161810;
typedef struct SfdSjChunk_x00161810 {
    char *data;
    int len;
} SfdSjChunk_x00161810;
typedef struct SfdSjVtbl_x00161810 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00161810 *sj);
    int (*getUuid)(SfdSj_x00161810 *sj);
    void (*reset)(SfdSj_x00161810 *sj);
    void (*getChunk)(SfdSj_x00161810 *sj, int id, int n, SfdSjChunk_x00161810 *ck);
    void (*ungetChunk)(SfdSj_x00161810 *sj, int id, SfdSjChunk_x00161810 *ck);
    void (*putChunk)(SfdSj_x00161810 *sj, int id, SfdSjChunk_x00161810 *ck);
    int (*getNumData)(SfdSj_x00161810 *sj, int id);
} SfdSjVtbl_x00161810;
struct SfdSj_x00161810 {
    SfdSjVtbl_x00161810 *vtbl;
};
typedef struct SjxObj_x00161810 SjxObj_x00161810;
typedef struct LscStm_x00161810 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x00161810;
typedef struct LscObj_x00161810 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00161810 *sj;
    SfdSjChunk_x00161810 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00161810 stms[16];
} LscObj_x00161810;
typedef struct AdxPdObj_x00161810 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00161810;
typedef struct AdxDecPara_x00161810 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00161810;
struct Pl2Enc_x00161810;
typedef struct AdxbObj_x00161810 AdxbObj_x00161810;
typedef short *(*AdxbGetWrFunc_x00161810)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00161810)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00161810 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00161810 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00161810 dp;
    AdxbGetWrFunc_x00161810 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00161810 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00161810 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00161810(AdxbObj_x00161810 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00161810 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00161810 *adxb;
    SfdSj_x00161810 *sji;
    SfdSj_x00161810 *sjo[2];
    SfdSjChunk_x00161810 cki;
    SfdSjChunk_x00161810 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00161810;
extern void ADXSJD_EntryFltFunc_x00161810(AdxSjdObj_x00161810 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00161810(AdxSjdObj_x00161810 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00161810)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00161810)(CvFsErrFn_x00161810 func, void *obj);
typedef int (*CvFsPathFn_x00161810)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00161810)(void);
typedef int (*CvFsOpenFn_x00161810)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00161810)(int fd);
typedef int (*CvFsFdIntFn_x00161810)(int fd);
typedef int (*CvFsSeekFn_x00161810)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00161810)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00161810)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00161810)(void);
typedef int (*CvFsLoadDirInfoFn_x00161810)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00161810)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00161810)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00161810 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00161810 entry_err_func;
    CvFsPathFn_x00161810 get_file_size;
    CvFsGetFreeSizeFn_x00161810 get_free_size;
    CvFsOpenFn_x00161810 open;
    CvFsFdFn_x00161810 close;
    CvFsSeekFn_x00161810 seek;
    CvFsFdIntFn_x00161810 tell;
    CvFsXferFn_x00161810 req_rd;
    CvFsXferFn_x00161810 req_wr;
    CvFsFdFn_x00161810 stop_tr;
    CvFsFdIntFn_x00161810 get_stat;
    CvFsFdIntFn_x00161810 get_sct_len;
    CvFsSetSctLenFn_x00161810 set_sct_len;
    CvFsFdIntFn_x00161810 get_num_tr;
    CvFsPathFn_x00161810 change_dir;
    CvFsPathFn_x00161810 is_exist_file;
    CvFsGetNumFilesFn_x00161810 get_num_files;
    CvFsLoadDirInfoFn_x00161810 load_dir_info;
    CvFsFdIntFn_x00161810 get_max_byte_rate;
    CvFsPathFn_x00161810 make_dir;
    CvFsPathFn_x00161810 remove_dir;
    CvFsPathFn_x00161810 delete_file;
    CvFsGetFileSizeExFn_x00161810 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00161810 opt_fn2;
} CvFsVtbl_x00161810;
typedef struct CvFsHandle_x00161810 {
    CvFsVtbl_x00161810 *vtbl;
    int fd;
} CvFsHandle_x00161810;
extern CvFsVtbl_x00161810 *addDevice_x00161810(char *devname, CvFsVtbl_x00161810 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00161810 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00161810 *sj;
    CvFsHandle_x00161810 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00161810 rdck;
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
} AdxStmObj_x00161810;
extern void ADXSTM_EntryEosFunc_x00161810(AdxStmObj_x00161810 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADXSTM_GetReadFlg_x00161810(AdxStmObj_x00161810 *stm) __asm__("func_0015D678");
typedef struct AdxAmpObj_x00161810 AdxAmpObj_x00161810;
typedef struct DtrObj_x00161810 DtrObj_x00161810;
typedef struct Ps2RnaPsj_x00161810 {
    char used;
    void *sjrmt;
    SfdSj_x00161810 *sjuni;
    SjxObj_x00161810 *sjx;
    SfdSjChunk_x00161810 ck;
} Ps2RnaPsj_x00161810;
typedef struct Ps2Rna_x00161810 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00161810 *psj[2];
    DtrObj_x00161810 *dtr[2];
    SfdSj_x00161810 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x00161810;
typedef struct AdxtObj_x00161810 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00161810 *sjd;
    AdxStmObj_x00161810 *stm;
    Ps2Rna_x00161810 *rna;
    SfdSj_x00161810 *sjf;
    SfdSj_x00161810 *sji;
    SfdSj_x00161810 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x00161810 *amp;
    SfdSj_x00161810 *ampsji[2];
    SfdSj_x00161810 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00161810 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x00161810;
int func_00161810_x00161810(AdxtObj_x00161810 *adxt) __asm__("func_00161810");
/* ADXT_GetStatRead: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00161810_x00161810(AdxtObj_x00161810 *adxt)
{
    if (adxt == 0) {
        return 0;
    }
    if (adxt->stm == 0) {
        if (adxt->lsc == 0) {
            return 0;
        }
        if (adxt->lsc->stm != 0) {
            return ADXSTM_GetReadFlg_x00161810(adxt->lsc->stm);
        }
        return 0;
    }
    return ADXSTM_GetReadFlg_x00161810(adxt->stm);
}
void func_00161880(void) {
    memset(&lbl_8017E5BC, 0, 0x3C0);
}
void func_001618A8(void) {
    memset(&lbl_8017E5BC, 0, 0x3C0);
}
