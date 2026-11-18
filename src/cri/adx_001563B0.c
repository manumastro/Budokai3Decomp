#include "common.h"

s32 func_00151160(s32);                         /* extern */

s32 ADXB_SetAhxInSj(s32);                       /* extern */
s32 func_0014ECA0(s32);                         /* extern */

s32 ADXB_SetAhxDecSmpl(s32);                    /* extern */
s32 func_0014EC80(s32, s32);                    /* extern */

s32 ADXB_AhxTermSupply(s32);                    /* extern */
s32 func_0014EC50(s32, s32);                    /* extern */

s32 func_001507E8(s32);                         /* extern */

s32 func_001505E8();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0040D5F0;

extern s32 D_0040D5E0;

s32 PS2RNA_SetStmHdInfo();                      /* extern */

s32 func_0016D030();                            /* extern */

s32 func_0016D000();                            /* extern */

s32 PS2RNA_DiscardData();                       /* extern */

s32 func_0016D860();                            /* extern */

s32 func_0016D830();                            /* extern */

s32 func_0016D7F8();                            /* extern */

s32 func_0016D7C8();                            /* extern */

s32 func_0016D798();                            /* extern */

s32 PS2RNA_SetBitPerSmpl();                     /* extern */

s32 func_0016D670();                            /* extern */

s32 func_0016D5E0();                            /* extern */

s32 func_0016D508();                            /* extern */

s32 func_0016D4D8();                            /* extern */

s32 PS2RNA_SetStartSmpl();                      /* extern */

s32 func_0016D1C8();                            /* extern */

s32 func_0016D160();                            /* extern */

s32 func_0016D128();                            /* extern */

s32 func_0016CFD0();                            /* extern */

s32 func_0016CF38();                            /* extern */

s32 func_0016CED8();                            /* extern */

s32 PS2RNA_Start();                             /* extern */

s32 func_0016CA28();                            /* extern */

s32 func_0016C968();                            /* extern */

s32 func_0016C460();                            /* extern */

s32 func_0016C910(s32);                         /* extern */

s32 func_0016C8A8();                            /* extern */

s32 func_0016C838();                            /* extern */

s32 func_0016C730();                            /* extern */

s32 PS2RNA_SetupVoice();                        /* extern */

extern s32 D_0047E978;

s32 func_001705E0(s32);                     /* extern */

s32 func_001704C8(s32, s32, s32, s32);  /* extern */

s32 func_001578F8();                            /* extern */

s32 func_00156048();                            /* extern */
s32 func_0015F5F0();                            /* extern */
extern s32 D_00405DB8;

s32 func_00158008();                            /* extern */
s32 func_00158110();                            /* extern */
s32 func_00158600();                            /* extern */

s32 func_00157EB0();                            /* extern */

extern s32 D_00405CE0;

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

s32 func_00170620();                            /* extern */

extern s32 D_00405CA4;

s32 func_001708A8();                            /* extern */

s32 func_00170890();                            /* extern */

s32 func_00170878();                            /* extern */

s32 func_00170860();                            /* extern */

s32 func_00170830();                            /* extern */

s32 func_00170818();                            /* extern */

extern s32 D_00405CA8;

s32 SleepThread();                              /* extern */

extern s64 D_00405D00;

s32 func_00169D98(s32);                             /* extern */
extern s32 D_00460D50;

s32 func_0016A130(s32);                         /* extern */
extern s32 D_00460CF0;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015E408(void *, s32);                 /* extern */
s32 func_0015E650();                            /* extern */
s32 func_0015FB70(void *, s32);             /* extern */
s32 func_00169BD8(s32);                         /* extern */
s32 func_0016A020(s32, s32);                    /* extern */
extern s32 D_00460CC0;

INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001563B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156488);
typedef int s32_x00156688;
typedef s32_x00156688 ptrdiff_t_x00156688;
typedef unsigned char Uint8_x00156688;
typedef char Sint8_x00156688;
typedef unsigned short Uint16_x00156688;
typedef signed short Sint16_x00156688;
typedef unsigned int Uint32_x00156688;
typedef signed int Sint32_x00156688;
typedef Sint32_x00156688 Bool_x00156688;
typedef char Char8_x00156688;
typedef struct _UUID_x00156688 {
    Uint32_x00156688 Data1;
    Uint16_x00156688 Data2;
    Uint16_x00156688 Data3;
    Uint8_x00156688 Data4[8];
} UUID_x00156688;
typedef struct {
        Sint8_x00156688 *data;
        Sint32_x00156688 len;
} SJCK_x00156688;
typedef struct {
        struct _sj_vtbl_x00156688 *vtbl;
} SJ_OBJ_x00156688;
typedef SJ_OBJ_x00156688 *SJ_x00156688;
typedef struct _sj_vtbl_x00156688 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156688 sj);
        UUID_x00156688 *(*GetUuid)(SJ_x00156688 sj);
        void (*Reset)(SJ_x00156688 sj);
        void (*GetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, Sint32_x00156688 nbyte, SJCK_x00156688 *ck);
        void (*UngetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, SJCK_x00156688 *ck);
        void (*PutChunk)(SJ_x00156688 sj, Sint32_x00156688 id, SJCK_x00156688 *ck);
        Sint32_x00156688 (*GetNumData)(SJ_x00156688 sj, Sint32_x00156688 id);
        Sint32_x00156688 (*IsGetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, Sint32_x00156688 nbyte, Sint32_x00156688 *rbyte);
        void (*EntryErrFunc)(SJ_x00156688 sj,
                                        void (*func)(void *obj, Sint32_x00156688 ecode), void *obj);
} SJ_IF_x00156688;
extern int* sceCdCallback_x00156688(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156688(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156688;
typedef struct {
               Sint16_x00156688 unk0;
               Sint16_x00156688 unk2;
               Sint16_x00156688 unk4;
               Sint16_x00156688 unk6;
} ADXPD_OBJ_SUB_x00156688;
typedef struct {
               Sint32_x00156688 used;
               Sint32_x00156688 unk4;
               Sint32_x00156688 mode;
               Sint32_x00156688 stat;
               Sint32_x00156688 num_blk;
               Sint32_x00156688 unk14;
               Sint32_x00156688 unk18;
               Sint32_x00156688 unk1C;
               Sint32_x00156688 unk20;
               Sint32_x00156688 unk24;
               ADXPD_OBJ_SUB_x00156688 unk28;
               Sint16_x00156688 unk30;
               Sint16_x00156688 unk32;
               Sint16_x00156688 unk34;
               Sint16_x00156688 unk36;
               Sint16_x00156688 unk38;
               Sint16_x00156688 unk3A;
} ADXPD_OBJ_x00156688;
typedef ADXPD_OBJ_x00156688* ADXPD_x00156688;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156688;
typedef struct {
               Sint32_x00156688 unk0;
               Sint32_x00156688 unk4;
               Sint32_x00156688 unk8;
               Sint32_x00156688 unkC;
               Sint32_x00156688 unk10;
               void* unk14;
               Sint32_x00156688 unk18;
               Sint32_x00156688 unk1C;
               Sint32_x00156688 unk20;
               Sint32_x00156688 unk24;
               Sint32_x00156688 unk28;
} ADXB_UNK_x00156688;
typedef struct {
               Sint16_x00156688 unk0;
               Sint16_x00156688 unk2;
               Sint32_x00156688 stat;
               ADXPD_x00156688 adxpd;
               Sint8_x00156688 encoding_type;
               Sint8_x00156688 sample_bitdepth;
               Sint8_x00156688 channel_count;
               Sint8_x00156688 block_size;
               Sint32_x00156688 samples_per_block;
               Sint32_x00156688 sample_rate;
               Sint32_x00156688 total_samples;
               Sint16_x00156688 unk1C;
               char pad1E[2];
               Sint32_x00156688 unk20;
               Sint16_x00156688 unk24;
               Sint16_x00156688 unk26;
               Sint32_x00156688 unk28;
               Sint32_x00156688 unk2C;
               Sint32_x00156688 unk30;
               Sint32_x00156688 unk34;
               Sint32_x00156688 unk38;
               void* unk3C;
               Sint32_x00156688 unk40;
               Sint32_x00156688 unk44;
               ADXB_UNK_x00156688 unk48;
               Sint32_x00156688 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156688*, Sint32_x00156688*, Sint32_x00156688*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156688, Sint32_x00156688);
               Sint32_x00156688 unk84;
               Sint32_x00156688 unk88;
               Sint32_x00156688 unk8C;
               Sint32_x00156688 dec_num_sample;
               Sint32_x00156688 dec_data_len;
               Sint16_x00156688 format;
               Sint16_x00156688 unk9A;
               Sint16_x00156688 unk9C;
               Sint16_x00156688 unk9E;
               Sint16_x00156688 unkA0;
               char padA2[0xE];
               Sint32_x00156688 unkB0;
               Sint32_x00156688 ahx_dec_samples;
               Sint32_x00156688 ahx_dec_frames;
               Sint32_x00156688 unkBC;
               Sint32_x00156688 ac3_dec_samples;
               Sint32_x00156688 ac3_dec_frames;
               Sint32_x00156688 unkC8;
               ADX_UNK_x00156688 unkCC;
               Sint16_x00156688 unkDC;
               Sint16_x00156688 unkDE[2];
               char padE2[2];
               Sint32_x00156688 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156688;
typedef ADXB_OBJ_x00156688* ADXB_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 state;
    Sint8_x00156688 maxnch;
    Sint8_x00156688 unk3;
    ADXB_x00156688 adxb;
    SJ_x00156688 sji;
    SJ_x00156688 sjo[2];
    SJCK_x00156688 unk14;
    SJCK_x00156688 chunks[2];
    Sint32_x00156688 unk2C;
    Sint32_x00156688 unk30;
    Sint32_x00156688 unk34;
    Sint32_x00156688 unk38;
    Sint32_x00156688 trap_num_samples;
    Sint32_x00156688 trap_count;
    Sint32_x00156688 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156688, Sint8_x00156688*, Sint32_x00156688);
    void* flt_obj;
    Sint8_x00156688 unk58[0x40];
    Sint32_x00156688 unk98;
    Sint32_x00156688 lnkflg;
} ADXSJD_OBJ_x00156688;
typedef ADXSJD_OBJ_x00156688* ADXSJD_x00156688;
typedef struct {
    Sint32_x00156688 unk0;
    SJ_x00156688 sj;
} SJX_UNK_0_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 unk1;
    Sint16_x00156688 unk2;
    SJ_x00156688 sj;
    void* unk8;
    Sint32_x00156688 unkC;
    SJX_UNK_0_x00156688* unk10;
} SJX_OBJ_x00156688;
typedef SJX_OBJ_x00156688* SJX_x00156688;
typedef struct {
    Sint8_x00156688 used;
    char pad1[3];
    void* unk4;
    SJ_x00156688 unk8;
    SJX_x00156688 unkC;
    SJCK_x00156688 chunk;
} PS2PSJ_OBJ_x00156688;
typedef PS2PSJ_OBJ_x00156688* PS2PSJ_x00156688;
typedef struct {
               Sint8_x00156688 unk0;
               Sint8_x00156688 unk1;
               Sint8_x00156688 unk2;
               SJ_x00156688 unk4;
               SJ_x00156688 unk8;
               SJCK_x00156688 unkC;
               SJCK_x00156688 unk14;
               sceSifDmaData_x00156688 dma_data;
               Sint32_x00156688 unk2C;
               Sint32_x00156688 unk30;
               Sint32_x00156688 unk34;
               Sint32_x00156688 unk38;
               Sint32_x00156688 unk3C;
} DTR_OBJ_x00156688;
typedef DTR_OBJ_x00156688* DTR_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint32_x00156688 maxnch;
    PS2PSJ_x00156688 psj[2];
    DTR_x00156688 dtr[2];
    SJ_x00156688 sjo[2];
    void* unk20;
    Sint32_x00156688 unk24;
    Sint32_x00156688 unk28;
    Sint32_x00156688 unk2C;
    Sint8_x00156688 unk30;
    Sint8_x00156688 unk31;
    Sint8_x00156688 num_chan;
    Sint8_x00156688 unk33;
    Sint32_x00156688 sfreq;
    Sint32_x00156688 unk38;
    Sint32_x00156688 out_vol;
    Sint32_x00156688 unk40;
    Sint32_x00156688 pan[2];
    Sint32_x00156688 unk4C[2];
    Sint32_x00156688 unk54;
    Sint32_x00156688 unk58;
    Sint8_x00156688 unk5C;
    Sint8_x00156688 unk5D;
    Sint8_x00156688 unk5E;
    Sint8_x00156688 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156688;
typedef ADXRNA_OBJ_x00156688* ADXRNA_x00156688;
typedef struct {
    Sint8_x00156688 unk0;
    Sint8_x00156688 stat;
    Sint8_x00156688 read_flg;
    Sint8_x00156688 unk3;
    SJ_x00156688 sj;
    void* cvfs;
    Sint32_x00156688 unkC;
    Sint32_x00156688 file_len;
    Sint32_x00156688 file_sct;
    Sint32_x00156688 unk18;
    Sint32_x00156688 unk1C;
    Sint32_x00156688 unk20;
    SJCK_x00156688 unk24;
    Sint32_x00156688 req_rd_size;
    Sint32_x00156688 eos;
    Uint32_x00156688 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156688 unk40;
    Sint8_x00156688 pause;
    Sint8_x00156688 unk45;
    Sint8_x00156688 unk46;
    Sint8_x00156688 unk47;
    Sint8_x00156688 unk48;
    Sint8_x00156688 unk49;
    char pad4A[6];
    const Char8_x00156688* fname;
    void* dir;
    Sint32_x00156688 cur_ofst;
    Uint32_x00156688 unk5C;
} ADXSTM_OBJ_x00156688;
typedef ADXSTM_OBJ_x00156688* ADXSTM_x00156688;
typedef struct {
    Sint32_x00156688 id;
    const Char8_x00156688* fname;
    Sint32_x00156688 unk8;
    void* dir;
    Sint32_x00156688 unk10;
    Sint32_x00156688 unk14;
    Sint32_x00156688 stat;
    Sint32_x00156688 rd_sct;
} LSC_STM_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 stat;
    Sint8_x00156688 unk2;
    Sint8_x00156688 lp_flg;
    Sint8_x00156688 unk4;
    SJ_x00156688 sj;
    Sint32_x00156688 unkC;
    Sint32_x00156688 unk10;
    Sint32_x00156688 flow_limit;
    Sint32_x00156688 unk18;
    Sint32_x00156688 last_stm_index;
    Sint32_x00156688 unk20;
    Sint32_x00156688 num_stm;
    ADXSTM_x00156688 stm_hndl;
    Sint32_x00156688 unk2C;
    char pad30[4];
    Sint32_x00156688 unk34;
    LSC_STM_x00156688 stm[16];
} LSC_OBJ_x00156688;
typedef LSC_OBJ_x00156688* LSC_x00156688;
void ADXERR_CallErrFunc1_x00156688(Sint8_x00156688*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x00156688(Sint8_x00156688*, Sint8_x00156688*) __asm__("func_00154178");
Sint32_x00156688 LSC_EntryFname_x00156688(LSC_x00156688 lsc) __asm__("func_001699D8");
typedef struct _adx_talk_x00156688 {
                   Sint8_x00156688 used;
                   Sint8_x00156688 stat;
                   Sint8_x00156688 pmode;
                   Sint8_x00156688 maxnch;
                   ADXSJD_x00156688 sjd;
                   ADXSTM_x00156688 stm;
                   ADXRNA_x00156688 rna;
                   SJ_x00156688 sjf;
                   SJ_x00156688 sji;
                   SJ_x00156688 sjo[(2)];
                   Sint8_x00156688 *ibuf;
                   Sint32_x00156688 ibuflen;
                   Sint32_x00156688 ibufxlen;
                   Sint16_x00156688 *obuf;
                   Sint32_x00156688 obufsize;
                   Sint32_x00156688 obufdist;
                   Sint32_x00156688 svrfreq;
                   Sint16_x00156688 maxsct;
                   Sint16_x00156688 minsct;
                   Sint16_x00156688 outvol;
                   Sint16_x00156688 outpan[(2)];
                   Sint16_x00156688 unk46;
                   Sint32_x00156688 maxdecsmpl;
                   Sint32_x00156688 lpcnt;
                   Sint32_x00156688 lp_skiplen;
                   Sint32_x00156688 trp;
                   Sint32_x00156688 wpos;
                   Sint32_x00156688 mofst;
                   Sint16_x00156688 ercode;
                   Sint32_x00156688 edecpos;
                   Sint16_x00156688 edeccnt;
                   Sint16_x00156688 eshrtcnt;
                   Sint8_x00156688 lpflg;
                   Sint8_x00156688 autorcvr;
                   Sint8_x00156688 fltmode;
                   Sint8_x00156688 execflag;
                   Sint8_x00156688 pstwait_flag;
                   Sint8_x00156688 pstready_flag;
                   Sint8_x00156688 pause_flag;
                   void *amp;
                   SJ_x00156688 ampsji[(2)];
                   SJ_x00156688 ampsjo[(2)];
                   Sint32_x00156688 time_ofst;
                   Sint32_x00156688 lesct;
                   Sint32_x00156688 trpnsmpl;
                   void *lsc;
                   Sint8_x00156688 lnkflg;
                   Sint8_x00156688 rsv;
                   Sint16_x00156688 rsv2;
                   Uint32_x00156688 tvofst;
                   Uint32_x00156688 svcnt;
                   Uint32_x00156688 decofst;
                   Sint32_x00156688 flush_nsmpl;
                   Sint8_x00156688 unkAC;
                   Sint8_x00156688 padAD[1];
               Char8_x00156688* unkB0;
               Sint32_x00156688 padB4;
               Sint32_x00156688 padB8;
               Sint32_x00156688 padBC;
               Sint32_x00156688 padC0;
} ADX_TALK_x00156688;
typedef ADX_TALK_x00156688 *ADXT_x00156688;
extern void ADXT_EntryErrFunc_x00156688(void (*func)(void *obj, Sint8_x00156688 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156688(ADXT_x00156688 adxt,
                void (*f)(void *obj, Sint32_x00156688 ch, void *data, Sint32_x00156688 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00156688(Bool_x00156688 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156688(Bool_x00156688 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156688(void (*fn)(void *obj, Char8_x00156688 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156688(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern char ext_str0_x00156688[] __asm__("D_00460C48");
extern char ext_str1_x00156688[] __asm__("D_00460C18");
void ADXT_EntryFname_x00156688(ADXT_x00156688 adxt, Char8_x00156688* fname) __asm__("ADXT_EntryFname");
/* ADXT_EntryFname_x00156688: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_EntryFname_x00156688(ADXT_x00156688 adxt, Char8_x00156688* fname) {
    void* lsc = adxt->lsc;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x00156688(ext_str1_x00156688);
        return;
    }
    if (LSC_EntryFname_x00156688(lsc) < 0) {
        ADXERR_CallErrFunc2_x00156688(ext_str0_x00156688, fname);
    }
}
typedef int s32_x001566E8;
typedef s32_x001566E8 ptrdiff_t_x001566E8;
typedef unsigned char Uint8_x001566E8;
typedef char Sint8_x001566E8;
typedef unsigned short Uint16_x001566E8;
typedef signed short Sint16_x001566E8;
typedef unsigned int Uint32_x001566E8;
typedef signed int Sint32_x001566E8;
typedef Sint32_x001566E8 Bool_x001566E8;
typedef char Char8_x001566E8;
typedef struct _UUID_x001566E8 {
    Uint32_x001566E8 Data1;
    Uint16_x001566E8 Data2;
    Uint16_x001566E8 Data3;
    Uint8_x001566E8 Data4[8];
} UUID_x001566E8;
typedef struct {
        Sint8_x001566E8 *data;
        Sint32_x001566E8 len;
} SJCK_x001566E8;
typedef struct {
        struct _sj_vtbl_x001566E8 *vtbl;
} SJ_OBJ_x001566E8;
typedef SJ_OBJ_x001566E8 *SJ_x001566E8;
typedef struct _sj_vtbl_x001566E8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001566E8 sj);
        UUID_x001566E8 *(*GetUuid)(SJ_x001566E8 sj);
        void (*Reset)(SJ_x001566E8 sj);
        void (*GetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, Sint32_x001566E8 nbyte, SJCK_x001566E8 *ck);
        void (*UngetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, SJCK_x001566E8 *ck);
        void (*PutChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, SJCK_x001566E8 *ck);
        Sint32_x001566E8 (*GetNumData)(SJ_x001566E8 sj, Sint32_x001566E8 id);
        Sint32_x001566E8 (*IsGetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, Sint32_x001566E8 nbyte, Sint32_x001566E8 *rbyte);
        void (*EntryErrFunc)(SJ_x001566E8 sj,
                                        void (*func)(void *obj, Sint32_x001566E8 ecode), void *obj);
} SJ_IF_x001566E8;
extern int* sceCdCallback_x001566E8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x001566E8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x001566E8;
typedef struct {
               Sint16_x001566E8 unk0;
               Sint16_x001566E8 unk2;
               Sint16_x001566E8 unk4;
               Sint16_x001566E8 unk6;
} ADXPD_OBJ_SUB_x001566E8;
typedef struct {
               Sint32_x001566E8 used;
               Sint32_x001566E8 unk4;
               Sint32_x001566E8 mode;
               Sint32_x001566E8 stat;
               Sint32_x001566E8 num_blk;
               Sint32_x001566E8 unk14;
               Sint32_x001566E8 unk18;
               Sint32_x001566E8 unk1C;
               Sint32_x001566E8 unk20;
               Sint32_x001566E8 unk24;
               ADXPD_OBJ_SUB_x001566E8 unk28;
               Sint16_x001566E8 unk30;
               Sint16_x001566E8 unk32;
               Sint16_x001566E8 unk34;
               Sint16_x001566E8 unk36;
               Sint16_x001566E8 unk38;
               Sint16_x001566E8 unk3A;
} ADXPD_OBJ_x001566E8;
typedef ADXPD_OBJ_x001566E8* ADXPD_x001566E8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001566E8;
typedef struct {
               Sint32_x001566E8 unk0;
               Sint32_x001566E8 unk4;
               Sint32_x001566E8 unk8;
               Sint32_x001566E8 unkC;
               Sint32_x001566E8 unk10;
               void* unk14;
               Sint32_x001566E8 unk18;
               Sint32_x001566E8 unk1C;
               Sint32_x001566E8 unk20;
               Sint32_x001566E8 unk24;
               Sint32_x001566E8 unk28;
} ADXB_UNK_x001566E8;
typedef struct {
               Sint16_x001566E8 unk0;
               Sint16_x001566E8 unk2;
               Sint32_x001566E8 stat;
               ADXPD_x001566E8 adxpd;
               Sint8_x001566E8 encoding_type;
               Sint8_x001566E8 sample_bitdepth;
               Sint8_x001566E8 channel_count;
               Sint8_x001566E8 block_size;
               Sint32_x001566E8 samples_per_block;
               Sint32_x001566E8 sample_rate;
               Sint32_x001566E8 total_samples;
               Sint16_x001566E8 unk1C;
               char pad1E[2];
               Sint32_x001566E8 unk20;
               Sint16_x001566E8 unk24;
               Sint16_x001566E8 unk26;
               Sint32_x001566E8 unk28;
               Sint32_x001566E8 unk2C;
               Sint32_x001566E8 unk30;
               Sint32_x001566E8 unk34;
               Sint32_x001566E8 unk38;
               void* unk3C;
               Sint32_x001566E8 unk40;
               Sint32_x001566E8 unk44;
               ADXB_UNK_x001566E8 unk48;
               Sint32_x001566E8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001566E8*, Sint32_x001566E8*, Sint32_x001566E8*);
               void* object;
               void (*add_wr)(void*, Sint32_x001566E8, Sint32_x001566E8);
               Sint32_x001566E8 unk84;
               Sint32_x001566E8 unk88;
               Sint32_x001566E8 unk8C;
               Sint32_x001566E8 dec_num_sample;
               Sint32_x001566E8 dec_data_len;
               Sint16_x001566E8 format;
               Sint16_x001566E8 unk9A;
               Sint16_x001566E8 unk9C;
               Sint16_x001566E8 unk9E;
               Sint16_x001566E8 unkA0;
               char padA2[0xE];
               Sint32_x001566E8 unkB0;
               Sint32_x001566E8 ahx_dec_samples;
               Sint32_x001566E8 ahx_dec_frames;
               Sint32_x001566E8 unkBC;
               Sint32_x001566E8 ac3_dec_samples;
               Sint32_x001566E8 ac3_dec_frames;
               Sint32_x001566E8 unkC8;
               ADX_UNK_x001566E8 unkCC;
               Sint16_x001566E8 unkDC;
               Sint16_x001566E8 unkDE[2];
               char padE2[2];
               Sint32_x001566E8 unkE4;
               char padE8[8];
} ADXB_OBJ_x001566E8;
typedef ADXB_OBJ_x001566E8* ADXB_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 state;
    Sint8_x001566E8 maxnch;
    Sint8_x001566E8 unk3;
    ADXB_x001566E8 adxb;
    SJ_x001566E8 sji;
    SJ_x001566E8 sjo[2];
    SJCK_x001566E8 unk14;
    SJCK_x001566E8 chunks[2];
    Sint32_x001566E8 unk2C;
    Sint32_x001566E8 unk30;
    Sint32_x001566E8 unk34;
    Sint32_x001566E8 unk38;
    Sint32_x001566E8 trap_num_samples;
    Sint32_x001566E8 trap_count;
    Sint32_x001566E8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x001566E8, Sint8_x001566E8*, Sint32_x001566E8);
    void* flt_obj;
    Sint8_x001566E8 unk58[0x40];
    Sint32_x001566E8 unk98;
    Sint32_x001566E8 lnkflg;
} ADXSJD_OBJ_x001566E8;
typedef ADXSJD_OBJ_x001566E8* ADXSJD_x001566E8;
typedef struct {
    Sint32_x001566E8 unk0;
    SJ_x001566E8 sj;
} SJX_UNK_0_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 unk1;
    Sint16_x001566E8 unk2;
    SJ_x001566E8 sj;
    void* unk8;
    Sint32_x001566E8 unkC;
    SJX_UNK_0_x001566E8* unk10;
} SJX_OBJ_x001566E8;
typedef SJX_OBJ_x001566E8* SJX_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    char pad1[3];
    void* unk4;
    SJ_x001566E8 unk8;
    SJX_x001566E8 unkC;
    SJCK_x001566E8 chunk;
} PS2PSJ_OBJ_x001566E8;
typedef PS2PSJ_OBJ_x001566E8* PS2PSJ_x001566E8;
typedef struct {
               Sint8_x001566E8 unk0;
               Sint8_x001566E8 unk1;
               Sint8_x001566E8 unk2;
               SJ_x001566E8 unk4;
               SJ_x001566E8 unk8;
               SJCK_x001566E8 unkC;
               SJCK_x001566E8 unk14;
               sceSifDmaData_x001566E8 dma_data;
               Sint32_x001566E8 unk2C;
               Sint32_x001566E8 unk30;
               Sint32_x001566E8 unk34;
               Sint32_x001566E8 unk38;
               Sint32_x001566E8 unk3C;
} DTR_OBJ_x001566E8;
typedef DTR_OBJ_x001566E8* DTR_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint32_x001566E8 maxnch;
    PS2PSJ_x001566E8 psj[2];
    DTR_x001566E8 dtr[2];
    SJ_x001566E8 sjo[2];
    void* unk20;
    Sint32_x001566E8 unk24;
    Sint32_x001566E8 unk28;
    Sint32_x001566E8 unk2C;
    Sint8_x001566E8 unk30;
    Sint8_x001566E8 unk31;
    Sint8_x001566E8 num_chan;
    Sint8_x001566E8 unk33;
    Sint32_x001566E8 sfreq;
    Sint32_x001566E8 unk38;
    Sint32_x001566E8 out_vol;
    Sint32_x001566E8 unk40;
    Sint32_x001566E8 pan[2];
    Sint32_x001566E8 unk4C[2];
    Sint32_x001566E8 unk54;
    Sint32_x001566E8 unk58;
    Sint8_x001566E8 unk5C;
    Sint8_x001566E8 unk5D;
    Sint8_x001566E8 unk5E;
    Sint8_x001566E8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x001566E8;
typedef ADXRNA_OBJ_x001566E8* ADXRNA_x001566E8;
typedef struct {
    Sint8_x001566E8 unk0;
    Sint8_x001566E8 stat;
    Sint8_x001566E8 read_flg;
    Sint8_x001566E8 unk3;
    SJ_x001566E8 sj;
    void* cvfs;
    Sint32_x001566E8 unkC;
    Sint32_x001566E8 file_len;
    Sint32_x001566E8 file_sct;
    Sint32_x001566E8 unk18;
    Sint32_x001566E8 unk1C;
    Sint32_x001566E8 unk20;
    SJCK_x001566E8 unk24;
    Sint32_x001566E8 req_rd_size;
    Sint32_x001566E8 eos;
    Uint32_x001566E8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001566E8 unk40;
    Sint8_x001566E8 pause;
    Sint8_x001566E8 unk45;
    Sint8_x001566E8 unk46;
    Sint8_x001566E8 unk47;
    Sint8_x001566E8 unk48;
    Sint8_x001566E8 unk49;
    char pad4A[6];
    const Char8_x001566E8* fname;
    void* dir;
    Sint32_x001566E8 cur_ofst;
    Uint32_x001566E8 unk5C;
} ADXSTM_OBJ_x001566E8;
typedef ADXSTM_OBJ_x001566E8* ADXSTM_x001566E8;
typedef struct {
    Sint32_x001566E8 id;
    const Char8_x001566E8* fname;
    Sint32_x001566E8 unk8;
    void* dir;
    Sint32_x001566E8 unk10;
    Sint32_x001566E8 unk14;
    Sint32_x001566E8 stat;
    Sint32_x001566E8 rd_sct;
} LSC_STM_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 stat;
    Sint8_x001566E8 unk2;
    Sint8_x001566E8 lp_flg;
    Sint8_x001566E8 unk4;
    SJ_x001566E8 sj;
    Sint32_x001566E8 unkC;
    Sint32_x001566E8 unk10;
    Sint32_x001566E8 flow_limit;
    Sint32_x001566E8 unk18;
    Sint32_x001566E8 last_stm_index;
    Sint32_x001566E8 unk20;
    Sint32_x001566E8 num_stm;
    ADXSTM_x001566E8 stm_hndl;
    Sint32_x001566E8 unk2C;
    char pad30[4];
    Sint32_x001566E8 unk34;
    LSC_STM_x001566E8 stm[16];
} LSC_OBJ_x001566E8;
typedef LSC_OBJ_x001566E8* LSC_x001566E8;
void ADXERR_CallErrFunc1_x001566E8(Sint8_x001566E8*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x001566E8(Sint8_x001566E8*, Sint8_x001566E8*) __asm__("func_00154178");
void ADXERR_ItoA2_x001566E8(Sint32_x001566E8, Sint32_x001566E8, Sint8_x001566E8*, Sint32_x001566E8) __asm__("func_001542F0");
Sint32_x001566E8 ADXF_GetFnameRangeEx_x001566E8(Sint32_x001566E8 ptid, Sint32_x001566E8 flid, Char8_x001566E8 *fname, void **dir, Sint32_x001566E8 *ofst, Sint32_x001566E8 *fnsct) __asm__("func_00155E40");
Char8_x001566E8* ADXF_GetFnameFromPt_x001566E8(Sint32_x001566E8) __asm__("func_00155F98");
Sint32_x001566E8 LSC_EntryFileRange_x001566E8(LSC_x001566E8 lsc, const Char8_x001566E8* fname, void* dir, Sint32_x001566E8 ofst, Sint32_x001566E8 fnsct) __asm__("func_00169A00");
typedef struct _adx_talk_x001566E8 {
                   Sint8_x001566E8 used;
                   Sint8_x001566E8 stat;
                   Sint8_x001566E8 pmode;
                   Sint8_x001566E8 maxnch;
                   ADXSJD_x001566E8 sjd;
                   ADXSTM_x001566E8 stm;
                   ADXRNA_x001566E8 rna;
                   SJ_x001566E8 sjf;
                   SJ_x001566E8 sji;
                   SJ_x001566E8 sjo[(2)];
                   Sint8_x001566E8 *ibuf;
                   Sint32_x001566E8 ibuflen;
                   Sint32_x001566E8 ibufxlen;
                   Sint16_x001566E8 *obuf;
                   Sint32_x001566E8 obufsize;
                   Sint32_x001566E8 obufdist;
                   Sint32_x001566E8 svrfreq;
                   Sint16_x001566E8 maxsct;
                   Sint16_x001566E8 minsct;
                   Sint16_x001566E8 outvol;
                   Sint16_x001566E8 outpan[(2)];
                   Sint16_x001566E8 unk46;
                   Sint32_x001566E8 maxdecsmpl;
                   Sint32_x001566E8 lpcnt;
                   Sint32_x001566E8 lp_skiplen;
                   Sint32_x001566E8 trp;
                   Sint32_x001566E8 wpos;
                   Sint32_x001566E8 mofst;
                   Sint16_x001566E8 ercode;
                   Sint32_x001566E8 edecpos;
                   Sint16_x001566E8 edeccnt;
                   Sint16_x001566E8 eshrtcnt;
                   Sint8_x001566E8 lpflg;
                   Sint8_x001566E8 autorcvr;
                   Sint8_x001566E8 fltmode;
                   Sint8_x001566E8 execflag;
                   Sint8_x001566E8 pstwait_flag;
                   Sint8_x001566E8 pstready_flag;
                   Sint8_x001566E8 pause_flag;
                   void *amp;
                   SJ_x001566E8 ampsji[(2)];
                   SJ_x001566E8 ampsjo[(2)];
                   Sint32_x001566E8 time_ofst;
                   Sint32_x001566E8 lesct;
                   Sint32_x001566E8 trpnsmpl;
                   void *lsc;
                   Sint8_x001566E8 lnkflg;
                   Sint8_x001566E8 rsv;
                   Sint16_x001566E8 rsv2;
                   Uint32_x001566E8 tvofst;
                   Uint32_x001566E8 svcnt;
                   Uint32_x001566E8 decofst;
                   Sint32_x001566E8 flush_nsmpl;
                   Sint8_x001566E8 unkAC;
                   Sint8_x001566E8 padAD[1];
               Char8_x001566E8* unkB0;
               Sint32_x001566E8 padB4;
               Sint32_x001566E8 padB8;
               Sint32_x001566E8 padBC;
               Sint32_x001566E8 padC0;
} ADX_TALK_x001566E8;
typedef ADX_TALK_x001566E8 *ADXT_x001566E8;
extern void ADXT_EntryErrFunc_x001566E8(void (*func)(void *obj, Sint8_x001566E8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x001566E8(ADXT_x001566E8 adxt,
                void (*f)(void *obj, Sint32_x001566E8 ch, void *data, Sint32_x001566E8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x001566E8(Bool_x001566E8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x001566E8(Bool_x001566E8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x001566E8(void (*fn)(void *obj, Char8_x001566E8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x001566E8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern char ext_str0_x001566E8[] __asm__("D_00460C98");
extern char ext_str1_x001566E8[] __asm__("D_00460C68");
void ADXT_EntryAfs_x001566E8(ADXT_x001566E8 adxt, Sint32_x001566E8 patid, Sint32_x001566E8 fid) __asm__("ADXT_EntryAfs");
/* ADXT_EntryAfs_x001566E8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_EntryAfs_x001566E8(ADXT_x001566E8 adxt, Sint32_x001566E8 patid, Sint32_x001566E8 fid) {
    Char8_x001566E8 error[16];
    void* dir;
    Sint32_x001566E8 ofst;
    Sint32_x001566E8 fnsct;
    void* lsc = adxt->lsc;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x001566E8(ext_str1_x001566E8);
        return;
    }
    if (ADXF_GetFnameRangeEx_x001566E8(patid, fid, adxt->unkB0, &dir, &ofst, &fnsct) == 0) {
        LSC_EntryFileRange_x001566E8(lsc, ADXF_GetFnameFromPt_x001566E8(patid), dir, ofst, fnsct);
        return;
    }
    ADXERR_ItoA2_x001566E8(patid, fid, error, 16);
    ADXERR_CallErrFunc2_x001566E8(ext_str0_x001566E8, error);
}
void ADXT_StartSeamless(u8 *arg0) {
    s32 temp_s1;
    u8 **temp_a0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x94);
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CC0);
        return;
    }
    func_0015E650();
    func_00152508();
    func_0015E408(arg0, *(s32 *)((u8 *)arg0 + 0x10));
    temp_a0 = *(u8 ***)((u8 *)arg0 + 0x14);
    (*(s32 (**)(u8 **))((u8 *)(*temp_a0) + 0x14))(temp_a0);
    *(s8 *)((u8 *)arg0 + 2) = 4;
    func_0016A020(temp_s1, *(s16 *)((u8 *)arg0 + 0x3E) << 0xB);
    func_00152520();
    func_00169BD8(temp_s1);
    func_0015FB70(arg0, 1);
}
void ADXT_SetSeamlessLp(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CF0);
        return;
    }
    func_0016A130(*(s32 *)((u8 *)arg0 + 0x94));
}
typedef int s32_x00156890;
typedef s32_x00156890 ptrdiff_t_x00156890;
typedef unsigned char Uint8_x00156890;
typedef char Sint8_x00156890;
typedef unsigned short Uint16_x00156890;
typedef signed short Sint16_x00156890;
typedef unsigned int Uint32_x00156890;
typedef signed int Sint32_x00156890;
typedef Sint32_x00156890 Bool_x00156890;
typedef char Char8_x00156890;
typedef struct _UUID_x00156890 {
    Uint32_x00156890 Data1;
    Uint16_x00156890 Data2;
    Uint16_x00156890 Data3;
    Uint8_x00156890 Data4[8];
} UUID_x00156890;
typedef struct {
        Sint8_x00156890 *data;
        Sint32_x00156890 len;
} SJCK_x00156890;
typedef struct {
        struct _sj_vtbl_x00156890 *vtbl;
} SJ_OBJ_x00156890;
typedef SJ_OBJ_x00156890 *SJ_x00156890;
typedef struct _sj_vtbl_x00156890 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156890 sj);
        UUID_x00156890 *(*GetUuid)(SJ_x00156890 sj);
        void (*Reset)(SJ_x00156890 sj);
        void (*GetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, Sint32_x00156890 nbyte, SJCK_x00156890 *ck);
        void (*UngetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, SJCK_x00156890 *ck);
        void (*PutChunk)(SJ_x00156890 sj, Sint32_x00156890 id, SJCK_x00156890 *ck);
        Sint32_x00156890 (*GetNumData)(SJ_x00156890 sj, Sint32_x00156890 id);
        Sint32_x00156890 (*IsGetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, Sint32_x00156890 nbyte, Sint32_x00156890 *rbyte);
        void (*EntryErrFunc)(SJ_x00156890 sj,
                                        void (*func)(void *obj, Sint32_x00156890 ecode), void *obj);
} SJ_IF_x00156890;
extern int* sceCdCallback_x00156890(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156890(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156890;
typedef struct {
               Sint16_x00156890 unk0;
               Sint16_x00156890 unk2;
               Sint16_x00156890 unk4;
               Sint16_x00156890 unk6;
} ADXPD_OBJ_SUB_x00156890;
typedef struct {
               Sint32_x00156890 used;
               Sint32_x00156890 unk4;
               Sint32_x00156890 mode;
               Sint32_x00156890 stat;
               Sint32_x00156890 num_blk;
               Sint32_x00156890 unk14;
               Sint32_x00156890 unk18;
               Sint32_x00156890 unk1C;
               Sint32_x00156890 unk20;
               Sint32_x00156890 unk24;
               ADXPD_OBJ_SUB_x00156890 unk28;
               Sint16_x00156890 unk30;
               Sint16_x00156890 unk32;
               Sint16_x00156890 unk34;
               Sint16_x00156890 unk36;
               Sint16_x00156890 unk38;
               Sint16_x00156890 unk3A;
} ADXPD_OBJ_x00156890;
typedef ADXPD_OBJ_x00156890* ADXPD_x00156890;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156890;
typedef struct {
               Sint32_x00156890 unk0;
               Sint32_x00156890 unk4;
               Sint32_x00156890 unk8;
               Sint32_x00156890 unkC;
               Sint32_x00156890 unk10;
               void* unk14;
               Sint32_x00156890 unk18;
               Sint32_x00156890 unk1C;
               Sint32_x00156890 unk20;
               Sint32_x00156890 unk24;
               Sint32_x00156890 unk28;
} ADXB_UNK_x00156890;
typedef struct {
               Sint16_x00156890 unk0;
               Sint16_x00156890 unk2;
               Sint32_x00156890 stat;
               ADXPD_x00156890 adxpd;
               Sint8_x00156890 encoding_type;
               Sint8_x00156890 sample_bitdepth;
               Sint8_x00156890 channel_count;
               Sint8_x00156890 block_size;
               Sint32_x00156890 samples_per_block;
               Sint32_x00156890 sample_rate;
               Sint32_x00156890 total_samples;
               Sint16_x00156890 unk1C;
               char pad1E[2];
               Sint32_x00156890 unk20;
               Sint16_x00156890 unk24;
               Sint16_x00156890 unk26;
               Sint32_x00156890 unk28;
               Sint32_x00156890 unk2C;
               Sint32_x00156890 unk30;
               Sint32_x00156890 unk34;
               Sint32_x00156890 unk38;
               void* unk3C;
               Sint32_x00156890 unk40;
               Sint32_x00156890 unk44;
               ADXB_UNK_x00156890 unk48;
               Sint32_x00156890 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156890*, Sint32_x00156890*, Sint32_x00156890*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156890, Sint32_x00156890);
               Sint32_x00156890 unk84;
               Sint32_x00156890 unk88;
               Sint32_x00156890 unk8C;
               Sint32_x00156890 dec_num_sample;
               Sint32_x00156890 dec_data_len;
               Sint16_x00156890 format;
               Sint16_x00156890 unk9A;
               Sint16_x00156890 unk9C;
               Sint16_x00156890 unk9E;
               Sint16_x00156890 unkA0;
               char padA2[0xE];
               Sint32_x00156890 unkB0;
               Sint32_x00156890 ahx_dec_samples;
               Sint32_x00156890 ahx_dec_frames;
               Sint32_x00156890 unkBC;
               Sint32_x00156890 ac3_dec_samples;
               Sint32_x00156890 ac3_dec_frames;
               Sint32_x00156890 unkC8;
               ADX_UNK_x00156890 unkCC;
               Sint16_x00156890 unkDC;
               Sint16_x00156890 unkDE[2];
               char padE2[2];
               Sint32_x00156890 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156890;
typedef ADXB_OBJ_x00156890* ADXB_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 state;
    Sint8_x00156890 maxnch;
    Sint8_x00156890 unk3;
    ADXB_x00156890 adxb;
    SJ_x00156890 sji;
    SJ_x00156890 sjo[2];
    SJCK_x00156890 unk14;
    SJCK_x00156890 chunks[2];
    Sint32_x00156890 unk2C;
    Sint32_x00156890 unk30;
    Sint32_x00156890 unk34;
    Sint32_x00156890 unk38;
    Sint32_x00156890 trap_num_samples;
    Sint32_x00156890 trap_count;
    Sint32_x00156890 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156890, Sint8_x00156890*, Sint32_x00156890);
    void* flt_obj;
    Sint8_x00156890 unk58[0x40];
    Sint32_x00156890 unk98;
    Sint32_x00156890 lnkflg;
} ADXSJD_OBJ_x00156890;
typedef ADXSJD_OBJ_x00156890* ADXSJD_x00156890;
typedef struct {
    Sint32_x00156890 unk0;
    SJ_x00156890 sj;
} SJX_UNK_0_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 unk1;
    Sint16_x00156890 unk2;
    SJ_x00156890 sj;
    void* unk8;
    Sint32_x00156890 unkC;
    SJX_UNK_0_x00156890* unk10;
} SJX_OBJ_x00156890;
typedef SJX_OBJ_x00156890* SJX_x00156890;
typedef struct {
    Sint8_x00156890 used;
    char pad1[3];
    void* unk4;
    SJ_x00156890 unk8;
    SJX_x00156890 unkC;
    SJCK_x00156890 chunk;
} PS2PSJ_OBJ_x00156890;
typedef PS2PSJ_OBJ_x00156890* PS2PSJ_x00156890;
typedef struct {
               Sint8_x00156890 unk0;
               Sint8_x00156890 unk1;
               Sint8_x00156890 unk2;
               SJ_x00156890 unk4;
               SJ_x00156890 unk8;
               SJCK_x00156890 unkC;
               SJCK_x00156890 unk14;
               sceSifDmaData_x00156890 dma_data;
               Sint32_x00156890 unk2C;
               Sint32_x00156890 unk30;
               Sint32_x00156890 unk34;
               Sint32_x00156890 unk38;
               Sint32_x00156890 unk3C;
} DTR_OBJ_x00156890;
typedef DTR_OBJ_x00156890* DTR_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint32_x00156890 maxnch;
    PS2PSJ_x00156890 psj[2];
    DTR_x00156890 dtr[2];
    SJ_x00156890 sjo[2];
    void* unk20;
    Sint32_x00156890 unk24;
    Sint32_x00156890 unk28;
    Sint32_x00156890 unk2C;
    Sint8_x00156890 unk30;
    Sint8_x00156890 unk31;
    Sint8_x00156890 num_chan;
    Sint8_x00156890 unk33;
    Sint32_x00156890 sfreq;
    Sint32_x00156890 unk38;
    Sint32_x00156890 out_vol;
    Sint32_x00156890 unk40;
    Sint32_x00156890 pan[2];
    Sint32_x00156890 unk4C[2];
    Sint32_x00156890 unk54;
    Sint32_x00156890 unk58;
    Sint8_x00156890 unk5C;
    Sint8_x00156890 unk5D;
    Sint8_x00156890 unk5E;
    Sint8_x00156890 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156890;
typedef ADXRNA_OBJ_x00156890* ADXRNA_x00156890;
typedef struct {
    Sint8_x00156890 unk0;
    Sint8_x00156890 stat;
    Sint8_x00156890 read_flg;
    Sint8_x00156890 unk3;
    SJ_x00156890 sj;
    void* cvfs;
    Sint32_x00156890 unkC;
    Sint32_x00156890 file_len;
    Sint32_x00156890 file_sct;
    Sint32_x00156890 unk18;
    Sint32_x00156890 unk1C;
    Sint32_x00156890 unk20;
    SJCK_x00156890 unk24;
    Sint32_x00156890 req_rd_size;
    Sint32_x00156890 eos;
    Uint32_x00156890 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156890 unk40;
    Sint8_x00156890 pause;
    Sint8_x00156890 unk45;
    Sint8_x00156890 unk46;
    Sint8_x00156890 unk47;
    Sint8_x00156890 unk48;
    Sint8_x00156890 unk49;
    char pad4A[6];
    const Char8_x00156890* fname;
    void* dir;
    Sint32_x00156890 cur_ofst;
    Uint32_x00156890 unk5C;
} ADXSTM_OBJ_x00156890;
typedef ADXSTM_OBJ_x00156890* ADXSTM_x00156890;
typedef struct {
    Sint32_x00156890 id;
    const Char8_x00156890* fname;
    Sint32_x00156890 unk8;
    void* dir;
    Sint32_x00156890 unk10;
    Sint32_x00156890 unk14;
    Sint32_x00156890 stat;
    Sint32_x00156890 rd_sct;
} LSC_STM_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 stat;
    Sint8_x00156890 unk2;
    Sint8_x00156890 lp_flg;
    Sint8_x00156890 unk4;
    SJ_x00156890 sj;
    Sint32_x00156890 unkC;
    Sint32_x00156890 unk10;
    Sint32_x00156890 flow_limit;
    Sint32_x00156890 unk18;
    Sint32_x00156890 last_stm_index;
    Sint32_x00156890 unk20;
    Sint32_x00156890 num_stm;
    ADXSTM_x00156890 stm_hndl;
    Sint32_x00156890 unk2C;
    char pad30[4];
    Sint32_x00156890 unk34;
    LSC_STM_x00156890 stm[16];
} LSC_OBJ_x00156890;
typedef LSC_OBJ_x00156890* LSC_x00156890;
void ADXERR_CallErrFunc1_x00156890(Sint8_x00156890*) __asm__("ADXERR_CallErrFunc1");
void LSC_Stop_x00156890(LSC_x00156890 lsc) __asm__("func_00169C40");
typedef struct _adx_talk_x00156890 {
                   Sint8_x00156890 used;
                   Sint8_x00156890 stat;
                   Sint8_x00156890 pmode;
                   Sint8_x00156890 maxnch;
                   ADXSJD_x00156890 sjd;
                   ADXSTM_x00156890 stm;
                   ADXRNA_x00156890 rna;
                   SJ_x00156890 sjf;
                   SJ_x00156890 sji;
                   SJ_x00156890 sjo[(2)];
                   Sint8_x00156890 *ibuf;
                   Sint32_x00156890 ibuflen;
                   Sint32_x00156890 ibufxlen;
                   Sint16_x00156890 *obuf;
                   Sint32_x00156890 obufsize;
                   Sint32_x00156890 obufdist;
                   Sint32_x00156890 svrfreq;
                   Sint16_x00156890 maxsct;
                   Sint16_x00156890 minsct;
                   Sint16_x00156890 outvol;
                   Sint16_x00156890 outpan[(2)];
                   Sint16_x00156890 unk46;
                   Sint32_x00156890 maxdecsmpl;
                   Sint32_x00156890 lpcnt;
                   Sint32_x00156890 lp_skiplen;
                   Sint32_x00156890 trp;
                   Sint32_x00156890 wpos;
                   Sint32_x00156890 mofst;
                   Sint16_x00156890 ercode;
                   Sint32_x00156890 edecpos;
                   Sint16_x00156890 edeccnt;
                   Sint16_x00156890 eshrtcnt;
                   Sint8_x00156890 lpflg;
                   Sint8_x00156890 autorcvr;
                   Sint8_x00156890 fltmode;
                   Sint8_x00156890 execflag;
                   Sint8_x00156890 pstwait_flag;
                   Sint8_x00156890 pstready_flag;
                   Sint8_x00156890 pause_flag;
                   void *amp;
                   SJ_x00156890 ampsji[(2)];
                   SJ_x00156890 ampsjo[(2)];
                   Sint32_x00156890 time_ofst;
                   Sint32_x00156890 lesct;
                   Sint32_x00156890 trpnsmpl;
                   void *lsc;
                   Sint8_x00156890 lnkflg;
                   Sint8_x00156890 rsv;
                   Sint16_x00156890 rsv2;
                   Uint32_x00156890 tvofst;
                   Uint32_x00156890 svcnt;
                   Uint32_x00156890 decofst;
                   Sint32_x00156890 flush_nsmpl;
                   Sint8_x00156890 unkAC;
                   Sint8_x00156890 padAD[1];
               Char8_x00156890* unkB0;
               Sint32_x00156890 padB4;
               Sint32_x00156890 padB8;
               Sint32_x00156890 padBC;
               Sint32_x00156890 padC0;
} ADX_TALK_x00156890;
typedef ADX_TALK_x00156890 *ADXT_x00156890;
extern void ADXT_EntryErrFunc_x00156890(void (*func)(void *obj, Sint8_x00156890 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156890(ADXT_x00156890 adxt,
                void (*f)(void *obj, Sint32_x00156890 ch, void *data, Sint32_x00156890 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_EntryFname_x00156890(ADXT_x00156890 adxt, Char8_x00156890 *fname) __asm__("ADXT_EntryFname");
void ADXT_StartSeamless_x00156890(ADXT_x00156890 adxt) __asm__("ADXT_StartSeamless");
extern void ADXM_SetCbUsrVsync_x00156890(Bool_x00156890 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156890(Bool_x00156890 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156890(void (*fn)(void *obj, Char8_x00156890 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156890(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void LSC_SetLpFlg_x00156890(void*, Sint32_x00156890) __asm__("func_0016A130");
void ADXT_EntryFname_x00156890(ADXT_x00156890 adxt, Char8_x00156890* fname) __asm__("ADXT_EntryFname");
void ADXT_StartSeamless_x00156890(ADXT_x00156890 adxt) __asm__("ADXT_StartSeamless");
extern char ext_str0_x00156890[] __asm__("D_00460D20");
void ADXT_StartFnameLp_x00156890(ADX_TALK_x00156890* adxt, Char8_x00156890* fname) __asm__("ADXT_StartFnameLp");
/* ADXT_StartFnameLp_x00156890: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartFnameLp_x00156890(ADX_TALK_x00156890* adxt, Char8_x00156890* fname) {
    void* lsc;
    if (adxt == 0 || fname == 0) {
        ADXERR_CallErrFunc1_x00156890(ext_str0_x00156890);
        return;
    }
    lsc = adxt->lsc;
    LSC_Stop_x00156890(lsc);
    ADXT_EntryFname_x00156890(adxt, fname);
    LSC_SetLpFlg_x00156890(lsc, 1);
    ADXT_StartSeamless_x00156890(adxt);
}
void func_00156918(void) {

}
s32 ADXT_GetNumFiles(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460D50);
        return -1;
    }
    return func_00169D98(*(s32 *)((u8 *)arg0 + 0x94));
}
typedef int s32_x00156958;
typedef s32_x00156958 ptrdiff_t_x00156958;
typedef unsigned char Uint8_x00156958;
typedef char Sint8_x00156958;
typedef unsigned short Uint16_x00156958;
typedef signed short Sint16_x00156958;
typedef unsigned int Uint32_x00156958;
typedef signed int Sint32_x00156958;
typedef Sint32_x00156958 Bool_x00156958;
typedef char Char8_x00156958;
typedef struct _UUID_x00156958 {
    Uint32_x00156958 Data1;
    Uint16_x00156958 Data2;
    Uint16_x00156958 Data3;
    Uint8_x00156958 Data4[8];
} UUID_x00156958;
typedef struct {
        Sint8_x00156958 *data;
        Sint32_x00156958 len;
} SJCK_x00156958;
typedef struct {
        struct _sj_vtbl_x00156958 *vtbl;
} SJ_OBJ_x00156958;
typedef SJ_OBJ_x00156958 *SJ_x00156958;
typedef struct _sj_vtbl_x00156958 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156958 sj);
        UUID_x00156958 *(*GetUuid)(SJ_x00156958 sj);
        void (*Reset)(SJ_x00156958 sj);
        void (*GetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, Sint32_x00156958 nbyte, SJCK_x00156958 *ck);
        void (*UngetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, SJCK_x00156958 *ck);
        void (*PutChunk)(SJ_x00156958 sj, Sint32_x00156958 id, SJCK_x00156958 *ck);
        Sint32_x00156958 (*GetNumData)(SJ_x00156958 sj, Sint32_x00156958 id);
        Sint32_x00156958 (*IsGetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, Sint32_x00156958 nbyte, Sint32_x00156958 *rbyte);
        void (*EntryErrFunc)(SJ_x00156958 sj,
                                        void (*func)(void *obj, Sint32_x00156958 ecode), void *obj);
} SJ_IF_x00156958;
extern int* sceCdCallback_x00156958(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156958(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156958;
typedef struct {
               Sint16_x00156958 unk0;
               Sint16_x00156958 unk2;
               Sint16_x00156958 unk4;
               Sint16_x00156958 unk6;
} ADXPD_OBJ_SUB_x00156958;
typedef struct {
               Sint32_x00156958 used;
               Sint32_x00156958 unk4;
               Sint32_x00156958 mode;
               Sint32_x00156958 stat;
               Sint32_x00156958 num_blk;
               Sint32_x00156958 unk14;
               Sint32_x00156958 unk18;
               Sint32_x00156958 unk1C;
               Sint32_x00156958 unk20;
               Sint32_x00156958 unk24;
               ADXPD_OBJ_SUB_x00156958 unk28;
               Sint16_x00156958 unk30;
               Sint16_x00156958 unk32;
               Sint16_x00156958 unk34;
               Sint16_x00156958 unk36;
               Sint16_x00156958 unk38;
               Sint16_x00156958 unk3A;
} ADXPD_OBJ_x00156958;
typedef ADXPD_OBJ_x00156958* ADXPD_x00156958;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156958;
typedef struct {
               Sint32_x00156958 unk0;
               Sint32_x00156958 unk4;
               Sint32_x00156958 unk8;
               Sint32_x00156958 unkC;
               Sint32_x00156958 unk10;
               void* unk14;
               Sint32_x00156958 unk18;
               Sint32_x00156958 unk1C;
               Sint32_x00156958 unk20;
               Sint32_x00156958 unk24;
               Sint32_x00156958 unk28;
} ADXB_UNK_x00156958;
typedef struct {
               Sint16_x00156958 unk0;
               Sint16_x00156958 unk2;
               Sint32_x00156958 stat;
               ADXPD_x00156958 adxpd;
               Sint8_x00156958 encoding_type;
               Sint8_x00156958 sample_bitdepth;
               Sint8_x00156958 channel_count;
               Sint8_x00156958 block_size;
               Sint32_x00156958 samples_per_block;
               Sint32_x00156958 sample_rate;
               Sint32_x00156958 total_samples;
               Sint16_x00156958 unk1C;
               char pad1E[2];
               Sint32_x00156958 unk20;
               Sint16_x00156958 unk24;
               Sint16_x00156958 unk26;
               Sint32_x00156958 unk28;
               Sint32_x00156958 unk2C;
               Sint32_x00156958 unk30;
               Sint32_x00156958 unk34;
               Sint32_x00156958 unk38;
               void* unk3C;
               Sint32_x00156958 unk40;
               Sint32_x00156958 unk44;
               ADXB_UNK_x00156958 unk48;
               Sint32_x00156958 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156958*, Sint32_x00156958*, Sint32_x00156958*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156958, Sint32_x00156958);
               Sint32_x00156958 unk84;
               Sint32_x00156958 unk88;
               Sint32_x00156958 unk8C;
               Sint32_x00156958 dec_num_sample;
               Sint32_x00156958 dec_data_len;
               Sint16_x00156958 format;
               Sint16_x00156958 unk9A;
               Sint16_x00156958 unk9C;
               Sint16_x00156958 unk9E;
               Sint16_x00156958 unkA0;
               char padA2[0xE];
               Sint32_x00156958 unkB0;
               Sint32_x00156958 ahx_dec_samples;
               Sint32_x00156958 ahx_dec_frames;
               Sint32_x00156958 unkBC;
               Sint32_x00156958 ac3_dec_samples;
               Sint32_x00156958 ac3_dec_frames;
               Sint32_x00156958 unkC8;
               ADX_UNK_x00156958 unkCC;
               Sint16_x00156958 unkDC;
               Sint16_x00156958 unkDE[2];
               char padE2[2];
               Sint32_x00156958 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156958;
typedef ADXB_OBJ_x00156958* ADXB_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint8_x00156958 state;
    Sint8_x00156958 maxnch;
    Sint8_x00156958 unk3;
    ADXB_x00156958 adxb;
    SJ_x00156958 sji;
    SJ_x00156958 sjo[2];
    SJCK_x00156958 unk14;
    SJCK_x00156958 chunks[2];
    Sint32_x00156958 unk2C;
    Sint32_x00156958 unk30;
    Sint32_x00156958 unk34;
    Sint32_x00156958 unk38;
    Sint32_x00156958 trap_num_samples;
    Sint32_x00156958 trap_count;
    Sint32_x00156958 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156958, Sint8_x00156958*, Sint32_x00156958);
    void* flt_obj;
    Sint8_x00156958 unk58[0x40];
    Sint32_x00156958 unk98;
    Sint32_x00156958 lnkflg;
} ADXSJD_OBJ_x00156958;
typedef ADXSJD_OBJ_x00156958* ADXSJD_x00156958;
typedef struct {
    Sint32_x00156958 unk0;
    SJ_x00156958 sj;
} SJX_UNK_0_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint8_x00156958 unk1;
    Sint16_x00156958 unk2;
    SJ_x00156958 sj;
    void* unk8;
    Sint32_x00156958 unkC;
    SJX_UNK_0_x00156958* unk10;
} SJX_OBJ_x00156958;
typedef SJX_OBJ_x00156958* SJX_x00156958;
typedef struct {
    Sint8_x00156958 used;
    char pad1[3];
    void* unk4;
    SJ_x00156958 unk8;
    SJX_x00156958 unkC;
    SJCK_x00156958 chunk;
} PS2PSJ_OBJ_x00156958;
typedef PS2PSJ_OBJ_x00156958* PS2PSJ_x00156958;
typedef struct {
               Sint8_x00156958 unk0;
               Sint8_x00156958 unk1;
               Sint8_x00156958 unk2;
               SJ_x00156958 unk4;
               SJ_x00156958 unk8;
               SJCK_x00156958 unkC;
               SJCK_x00156958 unk14;
               sceSifDmaData_x00156958 dma_data;
               Sint32_x00156958 unk2C;
               Sint32_x00156958 unk30;
               Sint32_x00156958 unk34;
               Sint32_x00156958 unk38;
               Sint32_x00156958 unk3C;
} DTR_OBJ_x00156958;
typedef DTR_OBJ_x00156958* DTR_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint32_x00156958 maxnch;
    PS2PSJ_x00156958 psj[2];
    DTR_x00156958 dtr[2];
    SJ_x00156958 sjo[2];
    void* unk20;
    Sint32_x00156958 unk24;
    Sint32_x00156958 unk28;
    Sint32_x00156958 unk2C;
    Sint8_x00156958 unk30;
    Sint8_x00156958 unk31;
    Sint8_x00156958 num_chan;
    Sint8_x00156958 unk33;
    Sint32_x00156958 sfreq;
    Sint32_x00156958 unk38;
    Sint32_x00156958 out_vol;
    Sint32_x00156958 unk40;
    Sint32_x00156958 pan[2];
    Sint32_x00156958 unk4C[2];
    Sint32_x00156958 unk54;
    Sint32_x00156958 unk58;
    Sint8_x00156958 unk5C;
    Sint8_x00156958 unk5D;
    Sint8_x00156958 unk5E;
    Sint8_x00156958 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156958;
typedef ADXRNA_OBJ_x00156958* ADXRNA_x00156958;
typedef struct {
    Sint8_x00156958 unk0;
    Sint8_x00156958 stat;
    Sint8_x00156958 read_flg;
    Sint8_x00156958 unk3;
    SJ_x00156958 sj;
    void* cvfs;
    Sint32_x00156958 unkC;
    Sint32_x00156958 file_len;
    Sint32_x00156958 file_sct;
    Sint32_x00156958 unk18;
    Sint32_x00156958 unk1C;
    Sint32_x00156958 unk20;
    SJCK_x00156958 unk24;
    Sint32_x00156958 req_rd_size;
    Sint32_x00156958 eos;
    Uint32_x00156958 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156958 unk40;
    Sint8_x00156958 pause;
    Sint8_x00156958 unk45;
    Sint8_x00156958 unk46;
    Sint8_x00156958 unk47;
    Sint8_x00156958 unk48;
    Sint8_x00156958 unk49;
    char pad4A[6];
    const Char8_x00156958* fname;
    void* dir;
    Sint32_x00156958 cur_ofst;
    Uint32_x00156958 unk5C;
} ADXSTM_OBJ_x00156958;
typedef ADXSTM_OBJ_x00156958* ADXSTM_x00156958;
void ADXERR_CallErrFunc1_x00156958(Sint8_x00156958*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x00156958 {
                   Sint8_x00156958 used;
                   Sint8_x00156958 stat;
                   Sint8_x00156958 pmode;
                   Sint8_x00156958 maxnch;
                   ADXSJD_x00156958 sjd;
                   ADXSTM_x00156958 stm;
                   ADXRNA_x00156958 rna;
                   SJ_x00156958 sjf;
                   SJ_x00156958 sji;
                   SJ_x00156958 sjo[(2)];
                   Sint8_x00156958 *ibuf;
                   Sint32_x00156958 ibuflen;
                   Sint32_x00156958 ibufxlen;
                   Sint16_x00156958 *obuf;
                   Sint32_x00156958 obufsize;
                   Sint32_x00156958 obufdist;
                   Sint32_x00156958 svrfreq;
                   Sint16_x00156958 maxsct;
                   Sint16_x00156958 minsct;
                   Sint16_x00156958 outvol;
                   Sint16_x00156958 outpan[(2)];
                   Sint16_x00156958 unk46;
                   Sint32_x00156958 maxdecsmpl;
                   Sint32_x00156958 lpcnt;
                   Sint32_x00156958 lp_skiplen;
                   Sint32_x00156958 trp;
                   Sint32_x00156958 wpos;
                   Sint32_x00156958 mofst;
                   Sint16_x00156958 ercode;
                   Sint32_x00156958 edecpos;
                   Sint16_x00156958 edeccnt;
                   Sint16_x00156958 eshrtcnt;
                   Sint8_x00156958 lpflg;
                   Sint8_x00156958 autorcvr;
                   Sint8_x00156958 fltmode;
                   Sint8_x00156958 execflag;
                   Sint8_x00156958 pstwait_flag;
                   Sint8_x00156958 pstready_flag;
                   Sint8_x00156958 pause_flag;
                   void *amp;
                   SJ_x00156958 ampsji[(2)];
                   SJ_x00156958 ampsjo[(2)];
                   Sint32_x00156958 time_ofst;
                   Sint32_x00156958 lesct;
                   Sint32_x00156958 trpnsmpl;
                   void *lsc;
                   Sint8_x00156958 lnkflg;
                   Sint8_x00156958 rsv;
                   Sint16_x00156958 rsv2;
                   Uint32_x00156958 tvofst;
                   Uint32_x00156958 svcnt;
                   Uint32_x00156958 decofst;
                   Sint32_x00156958 flush_nsmpl;
                   Sint8_x00156958 unkAC;
                   Sint8_x00156958 padAD[1];
               Char8_x00156958* unkB0;
               Sint32_x00156958 padB4;
               Sint32_x00156958 padB8;
               Sint32_x00156958 padBC;
               Sint32_x00156958 padC0;
} ADX_TALK_x00156958;
typedef ADX_TALK_x00156958 *ADXT_x00156958;
extern void ADXT_EntryErrFunc_x00156958(void (*func)(void *obj, Sint8_x00156958 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156958(ADXT_x00156958 adxt,
                void (*f)(void *obj, Sint32_x00156958 ch, void *data, Sint32_x00156958 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00156958(Bool_x00156958 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156958(Bool_x00156958 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156958(void (*fn)(void *obj, Char8_x00156958 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156958(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void LSC_ResetEntry_x00156958(void*) __asm__("func_00169B98");
extern char ext_str0_x00156958[] __asm__("D_00460D80");
void ADXT_ResetEntry_x00156958(ADXT_x00156958 adxt) __asm__("ADXT_ResetEntry");
/* ADXT_ResetEntry_x00156958: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_ResetEntry_x00156958(ADXT_x00156958 adxt) {
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x00156958(ext_str0_x00156958);
        return;
    }
    if (adxt->stat != (0)) {
        return;
    }
    LSC_ResetEntry_x00156958(adxt->lsc);
}
typedef signed int Sint32_x00156998;
extern Sint32_x00156998 SVM_SetCbSvr_x00156998(Sint32_x00156998, Sint32_x00156998 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156998(Sint32_x00156998, Sint32_x00156998, Sint32_x00156998 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
int ChangeThreadPriority_x00156998(int, int) __asm__("ChangeThreadPriority");
int GetThreadId_x00156998(void) __asm__("GetThreadId");
extern int AddIntcHandler_x00156998(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156998(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156998 adxm_save_tprm_x00156998[12] __asm__("D_00405CB0");
extern Sint32_x00156998 adxm_lock_level_x00156998 __asm__("D_00405CE0");
extern Sint32_x00156998 volatile adxm_id_safe_x00156998 __asm__("D_00405D38");
extern Sint32_x00156998 adxm_cur_prio_x00156998 __asm__("D_0040D5D0");
extern Sint32_x00156998 adxm_cur_tid_x00156998 __asm__("D_0040D5D4");
Sint32_x00156998 adxm_ResumeThread_x00156998(Sint32_x00156998 tid) __asm__("func_00157170");
Sint32_x00156998 adxm_ResumeThread_x00156998(Sint32_x00156998 tid) __asm__("func_00157170");
void func_00156998_x00156998() __asm__("func_00156998");
/* _adxm_lock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156998_x00156998() {
    if (adxm_lock_level_x00156998 == 0) {
        Sint32_x00156998 tid = GetThreadId_x00156998();
        adxm_cur_prio_x00156998 = ChangeThreadPriority_x00156998(tid, adxm_save_tprm_x00156998[0]);
        adxm_cur_tid_x00156998 = tid;
        adxm_ResumeThread_x00156998(adxm_id_safe_x00156998);
        adxm_id_safe_x00156998;
        adxm_lock_level_x00156998 += 1;
        adxm_lock_level_x00156998 -= 1;
    }
    adxm_lock_level_x00156998 += 1;
}
typedef signed int Sint32_x00156A20;
extern Sint32_x00156A20 SVM_SetCbSvr_x00156A20(Sint32_x00156A20, Sint32_x00156A20 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156A20(Sint32_x00156A20, Sint32_x00156A20, Sint32_x00156A20 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
int ChangeThreadPriority_x00156A20(int, int) __asm__("ChangeThreadPriority");
int GetThreadId_x00156A20(void) __asm__("GetThreadId");
extern int AddIntcHandler_x00156A20(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156A20(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156A20 adxm_lock_level_x00156A20 __asm__("D_00405CE0");
extern Sint32_x00156A20 volatile adxm_id_safe_x00156A20 __asm__("D_00405D38");
extern Sint32_x00156A20 adxm_cur_prio_x00156A20 __asm__("D_0040D5D0");
Sint32_x00156A20 adxm_SuspendThread_x00156A20(Sint32_x00156A20 tid) __asm__("func_001571D8");
Sint32_x00156A20 adxm_SuspendThread_x00156A20(Sint32_x00156A20 tid) __asm__("func_001571D8");
void func_00156A20_x00156A20() __asm__("func_00156A20");
/* _adxm_unlock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156A20_x00156A20() {
    if (--adxm_lock_level_x00156A20 == 0) {
        adxm_SuspendThread_x00156A20(adxm_id_safe_x00156A20);
        adxm_id_safe_x00156A20;
        ChangeThreadPriority_x00156A20(GetThreadId_x00156A20(), adxm_cur_prio_x00156A20);
    }
    if (adxm_lock_level_x00156A20 < 0) {
        adxm_lock_level_x00156A20 = 0;
    }
}
typedef signed int Sint32_x00156A90;
typedef char Char8_x00156A90;
extern Sint32_x00156A90 SVM_SetCbSvr_x00156A90(Sint32_x00156A90, Sint32_x00156A90 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156A90(Sint32_x00156A90, Sint32_x00156A90, Sint32_x00156A90 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
void SVM_CallErr1_x00156A90(const Char8_x00156A90* msg) __asm__("func_00170118");
int ChangeThreadPriority_x00156A90(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x00156A90(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156A90(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156A90 adxm_save_tprm_x00156A90[12] __asm__("D_00405CB0");
extern Sint32_x00156A90 volatile adxm_goto_border_flag_x00156A90 __asm__("D_00405CE4");
Sint32_x00156A90 adxm_ResumeThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157170");
Sint32_x00156A90 adxm_SuspendThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_001571D8");
void adxm_WakeupThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157108");
void adxm_WakeupThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157108");
Sint32_x00156A90 adxm_ResumeThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157170");
Sint32_x00156A90 adxm_SuspendThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_001571D8");
extern char ext_str0_x00156A90[] __asm__("D_00460DE0");
void func_00156A90_x00156A90(Sint32_x00156A90 tid, Sint32_x00156A90 priority) __asm__("func_00156A90");
/* adxm_goto_svr_border: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156A90_x00156A90(Sint32_x00156A90 tid, Sint32_x00156A90 priority) {
    Sint32_x00156A90 var_s0;
    if (tid != 0) {
        adxm_goto_border_flag_x00156A90 = 1;
        ChangeThreadPriority_x00156A90(tid, adxm_save_tprm_x00156A90[0]);
        for (var_s0 = 0; var_s0 < 200000000; var_s0++) {
            adxm_WakeupThread_x00156A90(tid);
            adxm_ResumeThread_x00156A90(tid);
            if (adxm_goto_border_flag_x00156A90 == 0) {
                break;
            }
        }
        if (var_s0 == 200000000) {
            SVM_CallErr1_x00156A90(ext_str0_x00156A90);
        }
        ChangeThreadPriority_x00156A90(tid, priority);
        adxm_SuspendThread_x00156A90(tid);
        while (0) {
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156B68);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156B90);
void func_00156BB8(void) {
    D_00405D00 += 1;
}
typedef signed int Sint32_x00156BD0;
typedef signed long Sint64_x00156BD0;
extern Sint32_x00156BD0 SVM_SetCbSvr_x00156BD0(Sint32_x00156BD0, Sint32_x00156BD0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156BD0(Sint32_x00156BD0, Sint32_x00156BD0, Sint32_x00156BD0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
void ExitDeleteThread_x00156BD0(void) __asm__("ExitDeleteThread");
extern int AddIntcHandler_x00156BD0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156BD0(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint64_x00156BD0 volatile adxm_safe_loop_x00156BD0 __asm__("D_00405D58");
extern Sint64_x00156BD0 volatile adxm_safe_exit_x00156BD0 __asm__("D_00405D60");
void adxm_safe_trap_x00156BD0() __asm__("func_00156BB8");
void func_00156BD0_x00156BD0() __asm__("func_00156BD0");
/* adxm_safe_proc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156BD0_x00156BD0() {
    while (adxm_safe_loop_x00156BD0 == 0) {
        adxm_safe_trap_x00156BD0();
    }
    adxm_safe_exit_x00156BD0 = 1;
    ExitDeleteThread_x00156BD0();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156C28);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156CC0);
typedef unsigned long u_long_x00156DC8;
typedef unsigned short Uint16_x00156DC8;
typedef signed int Sint32_x00156DC8;
typedef signed long Sint64_x00156DC8;
extern Sint32_x00156DC8 SVM_SetCbSvr_x00156DC8(Sint32_x00156DC8, Sint32_x00156DC8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156DC8(Sint32_x00156DC8, Sint32_x00156DC8, Sint32_x00156DC8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x00156DC8 SVM_ExecSvrFs_x00156DC8() __asm__("func_00170860");
void ExitDeleteThread_x00156DC8(void) __asm__("ExitDeleteThread");
extern int AddIntcHandler_x00156DC8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156DC8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156DC8 volatile adxm_fsproc_exec_flag_x00156DC8 __asm__("D_00405CF0");
extern Sint64_x00156DC8 volatile adxm_fs_cnt_x00156DC8 __asm__("D_00405D18");
extern Sint64_x00156DC8 volatile adxm_fs_loop_x00156DC8 __asm__("D_00405D88");
extern Sint64_x00156DC8 volatile adxm_fs_exit_x00156DC8 __asm__("D_00405D90");
extern Uint16_x00156DC8 adxm_debug_bgcl_x00156DC8 __asm__("D_00405DC4");
void adxm_SleepThread_x00156DC8() __asm__("func_00157158");
void adxm_SleepThread_x00156DC8() __asm__("func_00157158");
void func_00156DC8_x00156DC8() __asm__("func_00156DC8");
/* adxm_fs_proc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156DC8_x00156DC8() {
    while (adxm_fs_loop_x00156DC8 == 0) {
        adxm_fs_cnt_x00156DC8 += 1;
        adxm_fsproc_exec_flag_x00156DC8 = 1;
        if (adxm_debug_bgcl_x00156DC8 != 0) {
            *((volatile u_long_x00156DC8*)(0x120000e0)) = adxm_debug_bgcl_x00156DC8;
        }
        SVM_ExecSvrFs_x00156DC8();
        if (adxm_debug_bgcl_x00156DC8 != 0) {
            *((volatile u_long_x00156DC8*)(0x120000e0)) = 0;
        }
        adxm_fsproc_exec_flag_x00156DC8 = 0;
        adxm_SleepThread_x00156DC8();
    }
    adxm_fs_exit_x00156DC8 = 1;
    ExitDeleteThread_x00156DC8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156EA8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156FE0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001570B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157108);
void func_00157158(void) {
    SleepThread();
}
typedef unsigned int u_int_x00157170;
typedef signed int Sint32_x00157170;
extern Sint32_x00157170 SVM_SetCbSvr_x00157170(Sint32_x00157170, Sint32_x00157170 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157170(Sint32_x00157170, Sint32_x00157170, Sint32_x00157170 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00157170 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00157170 attr;
    u_int_x00157170 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x00157170(int, struct ThreadParam_x00157170*) __asm__("ReferThreadStatus");
int ResumeThread_x00157170(int) __asm__("ResumeThread");
extern int AddIntcHandler_x00157170(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157170(int, int (*)(int), int) __asm__("AddDmacHandler");
Sint32_x00157170 func_00157170_x00157170(Sint32_x00157170 tid) __asm__("func_00157170");
/* adxm_ResumeThread: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00157170 func_00157170_x00157170(Sint32_x00157170 tid) {
    struct ThreadParam_x00157170 param;
    Sint32_x00157170 ret = 0;
    if (tid != 0) {
        ReferThreadStatus_x00157170(tid, &param);
        if ((param.status == 0x08) || (param.status == 0x0c)) {
            ret = ResumeThread_x00157170(tid);
        } else {
            ret = 0;
        }
    }
    return ret;
}
typedef unsigned int u_int_x001571D8;
typedef signed int Sint32_x001571D8;
extern Sint32_x001571D8 SVM_SetCbSvr_x001571D8(Sint32_x001571D8, Sint32_x001571D8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001571D8(Sint32_x001571D8, Sint32_x001571D8, Sint32_x001571D8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x001571D8 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x001571D8 attr;
    u_int_x001571D8 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x001571D8(int, struct ThreadParam_x001571D8*) __asm__("ReferThreadStatus");
int SuspendThread_x001571D8(int) __asm__("SuspendThread");
extern int AddIntcHandler_x001571D8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001571D8(int, int (*)(int), int) __asm__("AddDmacHandler");
Sint32_x001571D8 func_001571D8_x001571D8(Sint32_x001571D8 tid) __asm__("func_001571D8");
/* adxm_SuspendThread: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001571D8 func_001571D8_x001571D8(Sint32_x001571D8 tid) {
    struct ThreadParam_x001571D8 param;
    Sint32_x001571D8 ret = 0;
    if (tid != 0) {
        ReferThreadStatus_x001571D8(tid, &param);
        if ((param.status != 0x08) && (param.status != 0x0c)) {
            ret = SuspendThread_x001571D8(tid);
        }
    }
    return ret;
}
typedef unsigned int u_int_x00157238;
typedef signed int Sint32_x00157238;
extern Sint32_x00157238 SVM_SetCbSvr_x00157238(Sint32_x00157238, Sint32_x00157238 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157238(Sint32_x00157238, Sint32_x00157238, Sint32_x00157238 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00157238 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00157238 attr;
    u_int_x00157238 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x00157238(struct ThreadParam_x00157238*) __asm__("CreateThread");
int StartThread_x00157238(int, void* arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x00157238(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x00157238(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157238(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00157238 adxm_save_tprm_x00157238[12] __asm__("D_00405CB0");
extern Sint32_x00157238 volatile adxm_id_safe_x00157238 __asm__("D_00405D38");
extern Sint32_x00157238 adxm_stack_safe_x00157238[0x200] __asm__("D_00405DD0");
extern Sint32_x00157238 adxm_main_prio_def_x00157238 __asm__("D_0040D5D8");
extern void* _gp_x00157238 __asm__("D_00477CF0");
Sint32_x00157238 adxm_SuspendThread_x00157238(Sint32_x00157238 tid) __asm__("func_001571D8");
void adxm_safe_proc_x00157238() __asm__("func_00156BD0");
Sint32_x00157238 adxm_SuspendThread_x00157238(Sint32_x00157238 tid) __asm__("func_001571D8");
void func_00157238_x00157238() __asm__("func_00157238");
/* adxm_SetupSafeThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00157238_x00157238() {
    struct ThreadParam_x00157238 param;
    param.entry = adxm_safe_proc_x00157238;
    param.stack = adxm_stack_safe_x00157238;
    param.stackSize = sizeof(adxm_stack_safe_x00157238);
    param.initPriority = adxm_main_prio_def_x00157238;
    param.gpReg = &_gp_x00157238;
    adxm_id_safe_x00157238 = CreateThread_x00157238(&param);
    adxm_id_safe_x00157238;
    StartThread_x00157238(adxm_id_safe_x00157238, 0);
    if (adxm_id_safe_x00157238 != 0) {
        adxm_SuspendThread_x00157238(adxm_id_safe_x00157238);
        adxm_id_safe_x00157238;
    }
    ChangeThreadPriority_x00157238(adxm_id_safe_x00157238, adxm_save_tprm_x00157238[1]);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001572E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157420);
typedef unsigned int u_int_x001574A8;
typedef signed int Sint32_x001574A8;
extern Sint32_x001574A8 SVM_SetCbSvr_x001574A8(Sint32_x001574A8, Sint32_x001574A8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001574A8(Sint32_x001574A8, Sint32_x001574A8, Sint32_x001574A8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x001574A8 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x001574A8 attr;
    u_int_x001574A8 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x001574A8(struct ThreadParam_x001574A8*) __asm__("CreateThread");
int StartThread_x001574A8(int, void* arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x001574A8(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x001574A8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001574A8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x001574A8 adxm_save_tprm_x001574A8[12] __asm__("D_00405CB0");
extern Sint32_x001574A8 volatile adxm_id_mwidle_x001574A8 __asm__("D_00405D4C");
extern Sint32_x001574A8 adxm_stack_mwidle_x001574A8[0x800] __asm__("D_004095D0");
extern Sint32_x001574A8 adxm_main_prio_def_x001574A8 __asm__("D_0040D5D8");
extern void* _gp_x001574A8 __asm__("D_00477CF0");
Sint32_x001574A8 adxm_SuspendThread_x001574A8(Sint32_x001574A8 tid) __asm__("func_001571D8");
void adxm_mwidle_proc_x001574A8() __asm__("func_00156EA8");
Sint32_x001574A8 adxm_SuspendThread_x001574A8(Sint32_x001574A8 tid) __asm__("func_001571D8");
void func_001574A8_x001574A8() __asm__("func_001574A8");
/* adxm_SetupMwIdleThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001574A8_x001574A8() {
    struct ThreadParam_x001574A8 param;
    param.entry = adxm_mwidle_proc_x001574A8;
    param.stack = adxm_stack_mwidle_x001574A8;
    param.stackSize = sizeof(adxm_stack_mwidle_x001574A8);
    param.initPriority = adxm_main_prio_def_x001574A8;
    param.gpReg = &_gp_x001574A8;
    adxm_id_mwidle_x001574A8 = CreateThread_x001574A8(&param);
    adxm_id_mwidle_x001574A8;
    StartThread_x001574A8(adxm_id_mwidle_x001574A8, 0);
    ChangeThreadPriority_x001574A8(adxm_id_mwidle_x001574A8, adxm_save_tprm_x001574A8[6]);
    adxm_SuspendThread_x001574A8(adxm_id_mwidle_x001574A8);
    adxm_id_mwidle_x001574A8;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157540);
s32 func_00157610(void) {
    return D_00405CA8;
}
void func_00157620(void) {
    func_00170818();
}
void func_00157638(void) {
    func_00170830();
}
void func_00157650(void) {
    func_00170860();
}
void func_00157668(void) {
    func_00170878();
}
void func_00157680(void) {
    func_00170890();
}
void func_00157698(void) {
    func_001708A8();
}
s32 func_001576B0(void) {
    func_00170818();
    func_00170830();
    func_00170878();
    func_00170890();
    func_001708A8();
    return 0;
}
s32 func_001576F0(void) {
    return D_00405CA4 != 0;
}
void func_00157700(void) {
    func_00170620();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157718);
typedef signed int Sint32_x001578A8;
typedef signed long Sint64_x001578A8;
extern Sint32_x001578A8 SVM_SetCbSvr_x001578A8(Sint32_x001578A8, Sint32_x001578A8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001578A8(Sint32_x001578A8, Sint32_x001578A8, Sint32_x001578A8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x001578A8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001578A8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint64_x001578A8 volatile adxm_safe_loop_x001578A8 __asm__("D_00405D58");
extern Sint64_x001578A8 volatile adxm_usrvsync_loop_x001578A8 __asm__("D_00405D68");
extern Sint64_x001578A8 volatile adxm_vsync_loop_x001578A8 __asm__("D_00405D78");
extern Sint64_x001578A8 volatile adxm_fs_loop_x001578A8 __asm__("D_00405D88");
extern Sint64_x001578A8 volatile adxm_mwidle_loop_x001578A8 __asm__("D_00405D98");
extern Sint64_x001578A8 volatile adxm_usridle_loop_x001578A8 __asm__("D_00405DA8");
void func_001578A8_x001578A8() __asm__("func_001578A8");
/* adxm_ShutdownPreProcedure: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001578A8_x001578A8() {
    adxm_safe_loop_x001578A8 = 1;
    adxm_usrvsync_loop_x001578A8 = 1;
    adxm_vsync_loop_x001578A8 = 1;
    adxm_fs_loop_x001578A8 = 1;
    adxm_mwidle_loop_x001578A8 = 1;
    adxm_usridle_loop_x001578A8 = 1;
}
typedef signed int Sint32_x001578F8;
typedef char Char8_x001578F8;
extern void SVM_SetCbErr_x001578F8(void (*callback)(void*, Char8_x001578F8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x001578F8 SVM_SetCbSvr_x001578F8(Sint32_x001578F8, Sint32_x001578F8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001578F8(Sint32_x001578F8, Sint32_x001578F8, Sint32_x001578F8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x001578F8(void (*func)(void*), void* object) __asm__("func_00170660");
extern void SVM_SetCbUnlock_x001578F8(void (*func)(void*), void* object) __asm__("func_00170678");
void SVM_Finish_x001578F8() __asm__("func_001709A8");
int ChangeThreadPriority_x001578F8(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x001578F8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001578F8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x001578F8 adxm_init_level_x001578F8 __asm__("D_00405CA4");
extern Sint32_x001578F8 volatile adxm_id_main_x001578F8 __asm__("D_00405D48");
extern Sint32_x001578F8 adxm_main_prio_def_x001578F8 __asm__("D_0040D5D8");
void adxm_ShutdownFsThrd_x001578F8() __asm__("func_00157C00");
void adxm_ShutdownMwIdleThrd_x001578F8() __asm__("func_00157A60");
void adxm_ShutdownPreProcedure_x001578F8() __asm__("func_001578A8");
void adxm_ShutdownSafeThrd_x001578F8() __asm__("func_00157DA0");
void adxm_ShutdownVsyncThrd_x001578F8() __asm__("func_00157B30");
void adxm_ShutdownPreProcedure_x001578F8() __asm__("func_001578A8");
void adxm_ShutdownMwIdleThrd_x001578F8() __asm__("func_00157A60");
void adxm_ShutdownVsyncThrd_x001578F8() __asm__("func_00157B30");
void adxm_ShutdownFsThrd_x001578F8() __asm__("func_00157C00");
void adxm_ShutdownSafeThrd_x001578F8() __asm__("func_00157DA0");
void func_001578F8_x001578F8() __asm__("func_001578F8");
/* ADXM_ShutdownThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001578F8_x001578F8() {
    if (--adxm_init_level_x001578F8 == 0) {
        adxm_ShutdownPreProcedure_x001578F8();
        adxm_ShutdownMwIdleThrd_x001578F8();
        adxm_ShutdownFsThrd_x001578F8();
        adxm_ShutdownVsyncThrd_x001578F8();
        adxm_ShutdownSafeThrd_x001578F8();
        ChangeThreadPriority_x001578F8(adxm_id_main_x001578F8, adxm_main_prio_def_x001578F8);
        SVM_SetCbLock_x001578F8(0, 0);
        SVM_SetCbUnlock_x001578F8(0, 0);
        SVM_Finish_x001578F8();
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157990);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157A60);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157B30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157C00);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157CD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157DA0);
void func_00157E70(void) {
    func_0016FF40();
}
void func_00157E88(void) {
    func_0016FF58();
}
s32 func_00157EA0(void) {
    return D_00405CE0;
}
typedef signed int Sint32_x00157EB0;
typedef signed long Sint64_x00157EB0;
extern Sint32_x00157EB0 SVM_SetCbSvr_x00157EB0(Sint32_x00157EB0, Sint32_x00157EB0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157EB0(Sint32_x00157EB0, Sint32_x00157EB0, Sint32_x00157EB0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x00157EB0 SVM_ExecSvrVint_x00157EB0() __asm__("func_00170800");
extern int AddIntcHandler_x00157EB0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157EB0(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00157EB0 adxm_init_level_x00157EB0 __asm__("D_00405CA4");
extern Sint32_x00157EB0 volatile adxm_vsyncproc_exec_flag_x00157EB0 __asm__("D_00405CE8");
extern Sint32_x00157EB0 volatile adxm_usrvsyncproc_exec_flag_x00157EB0 __asm__("D_00405CEC");
extern Sint32_x00157EB0 volatile adxm_fsproc_exec_flag_x00157EB0 __asm__("D_00405CF0");
extern Sint64_x00157EB0 adxm_vint_cnt_x00157EB0 __asm__("D_00405D30");
extern Sint32_x00157EB0 volatile adxm_id_usrvsync_x00157EB0 __asm__("D_00405D3C");
extern Sint32_x00157EB0 volatile adxm_id_vsync_x00157EB0 __asm__("D_00405D40");
extern Sint32_x00157EB0 volatile adxm_id_fs_x00157EB0 __asm__("D_00405D44");
extern Sint32_x00157EB0 volatile adxps2_exec_vint_x00157EB0 __asm__("D_00405DBC");
extern Sint32_x00157EB0 (*adxm_old_cbf_x00157EB0)(Sint32_x00157EB0 arg) __asm__("D_00405DC0");
extern Sint32_x00157EB0 volatile adxt_vsync_cnt_x00157EB0 __asm__("D_00404C14");
Sint32_x00157EB0 adxm_IsSetupThrdEx_x00157EB0() __asm__("func_00157610");
void adxm_iWakeupThread_x00157EB0(Sint32_x00157EB0 tid) __asm__("func_001570B8");
Sint32_x00157EB0 adxm_IsSetupThrdEx_x00157EB0() __asm__("func_00157610");
Sint32_x00157EB0 func_00157EB0_x00157EB0(Sint32_x00157EB0 arg) __asm__("func_00157EB0");
/* ADXPS2_ExecVint: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00157EB0 func_00157EB0_x00157EB0(Sint32_x00157EB0 arg) {
    adxt_vsync_cnt_x00157EB0 += 1;
    if (adxps2_exec_vint_x00157EB0 == 0) {
        adxps2_exec_vint_x00157EB0 = 1;
        if (adxm_init_level_x00157EB0 > 0) {
            if (adxm_vsyncproc_exec_flag_x00157EB0 != 1) {
                adxm_iWakeupThread_x00157EB0(adxm_id_vsync_x00157EB0);
            }
            if (adxm_fsproc_exec_flag_x00157EB0 != 1) {
                adxm_iWakeupThread_x00157EB0(adxm_id_fs_x00157EB0);
            }
            if ((adxm_IsSetupThrdEx_x00157EB0() == 1) && (adxm_usrvsyncproc_exec_flag_x00157EB0 != 1)) {
                adxm_iWakeupThread_x00157EB0(adxm_id_usrvsync_x00157EB0);
            }
            adxm_vint_cnt_x00157EB0 += 1;
        }
        SVM_ExecSvrVint_x00157EB0();
        adxps2_exec_vint_x00157EB0 = 0;
    }
    if (adxm_old_cbf_x00157EB0 != 0) {
        return adxm_old_cbf_x00157EB0(arg);
    }
    return 0;
}
void func_00157FD8(void) {
    func_00157EB0();
}
void func_00157FF0(void) {
    func_00170878();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158008);
typedef unsigned int u_int_x00158090;
typedef signed int Sint32_x00158090;
extern Sint32_x00158090 SVM_SetCbSvr_x00158090(Sint32_x00158090, Sint32_x00158090 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00158090(Sint32_x00158090, Sint32_x00158090, Sint32_x00158090 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00158090 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00158090 attr;
    u_int_x00158090 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x00158090(int, struct ThreadParam_x00158090*) __asm__("ReferThreadStatus");
int WakeupThread_x00158090(int) __asm__("WakeupThread");
extern int AddIntcHandler_x00158090(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00158090(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00158090 volatile adxm_waiting_main_th_flag_x00158090 __asm__("D_00405CFC");
extern Sint32_x00158090 volatile adxm_id_main_x00158090 __asm__("D_00405D48");
void func_00158090_x00158090() __asm__("func_00158090");
/* ADXPS2_WakeupMainThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00158090_x00158090() {
    struct ThreadParam_x00158090 param;
    if (adxm_waiting_main_th_flag_x00158090 != 1) {
        return;
    }
    ReferThreadStatus_x00158090(adxm_id_main_x00158090, &param);
    if ((param.status != 0x04) && (param.status != 0x0c)) {
        return;
    }
    if (WakeupThread_x00158090(adxm_id_main_x00158090) != adxm_id_main_x00158090) {
        return;
    }
    adxm_waiting_main_th_flag_x00158090 = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158110);
void func_00158138(void) {
    func_00158008();
    func_00158600();
    func_00158110();
}
void func_00158160(void) {
    func_00158138();
}
s32 func_00158178(void) {
    if (D_00405DB8 == 0) {
        D_00405DB8 = 1;
        func_0015F5F0();
        func_00156048();
        D_00405DB8 = 0;
    }
    return 0;
}
typedef signed int Sint32_x001581C0;
extern Sint32_x001581C0 SVM_SetCbSvr_x001581C0(Sint32_x001581C0, Sint32_x001581C0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001581C0(Sint32_x001581C0, Sint32_x001581C0, Sint32_x001581C0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
} ADXM_TPRM_x001581C0;
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_usrvsync;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
        int prio_usridle;
} ADXM_TPRM_EX_x001581C0;
void ADXM_SetupThrd_x001581C0(ADXM_TPRM_x001581C0 *tprm) __asm__("func_00157718");
typedef struct {
    int prio_lock;
    int prio_safe;
    int prio_adx;
    int prio_main;
} ADXPS2_TPRM_x001581C0;
extern int AddIntcHandler_x001581C0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001581C0(int, int (*)(int), int) __asm__("AddDmacHandler");
void ADXM_SetupThrd_x001581C0(ADXM_TPRM_x001581C0* tprm) __asm__("func_00157718");
void func_001581C0_x001581C0(ADXPS2_TPRM_x001581C0* tprm) __asm__("func_001581C0");
/* ADXPS2_SetupThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001581C0_x001581C0(ADXPS2_TPRM_x001581C0* tprm) {
    ADXM_TPRM_EX_x001581C0 _tprm;
    ADXM_TPRM_EX_x001581C0* tprm_p;
    if (tprm != 0) {
        _tprm.prio_main = tprm->prio_main;
        _tprm.prio_lock = tprm->prio_lock;
        _tprm.prio_safe = tprm->prio_safe;
        _tprm.prio_vsync = tprm->prio_adx + 1;
        _tprm.prio_mwidle = 25;
        _tprm.prio_usrvsync = tprm->prio_adx;
        tprm_p = &_tprm;
    } else {
        tprm_p = 0;
    }
    ADXM_SetupThrd_x001581C0(tprm_p);
}
void func_00158220(void) {
    func_001578F8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158238);
void func_001582A0(void) {
    func_0016FF40();
}
void func_001582B8(void) {
    func_0016FF58();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001582D0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001584C0);
void func_00158570(s32 arg0, s32 arg1) {
    func_001704C8(1, 0, arg0, arg1);
}
void func_00158598(s32 arg0, s32 arg1) {
    func_001704C8(7, 0, arg0, arg1);
}
void func_001585C0(void) {
    func_001705E0(7);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001585D8);
extern s32 D_0047E970_x00158600 __asm__("D_0047E970");
void func_00158600_x00158600(void) __asm__("func_00158600");
void func_00158600_x00158600(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0))(*(s32 *)((u8 *)(&D_0047E970_x00158600) + 4));
    }
}
void func_00158630(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0))(*(s32 *)((u8 *)(&D_0047E978) + 4));
    }
}
void func_00158660(void) {
    PS2RNA_SetupVoice();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158678);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001586B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001586F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158730);
void func_00158768(void) {
    func_0016C730();
}
void func_00158780(void) {
    func_0016C838();
}
void func_00158798(void) {
    func_0016C8A8();
}
void func_001587B0(u8 *arg0) {
    func_0016C910(*(s32 *)((u8 *)arg0 + 0xC));
}
void func_001587C8(void) {
    func_0016C460();
}
void func_001587E0(void) {
    func_0016C968();
}
void func_001587F8(void) {

}
void func_00158800(void) {
    func_0016CA28();
}
typedef unsigned int u32_x00158818;
extern u32_x00158818 fn_8005B0C4_x00158818(u32_x00158818, u32_x00158818) __asm__("func_0016CFD0");
extern u32_x00158818 fn_8005B264_x00158818(u32_x00158818, u32_x00158818) __asm__("func_0016CF38");
extern u32_x00158818 fn_8005B464_x00158818(u32_x00158818) __asm__("func_0016CDA8");
void func_00158818_x00158818(u32_x00158818 arg0) __asm__("func_00158818");
/* fn_8004EEE4: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8004EEE4.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00158818_x00158818(u32_x00158818 arg0) {
    fn_8005B0C4_x00158818(arg0, 0);
    fn_8005B264_x00158818(arg0, 0);
    fn_8005B464_x00158818(arg0);
}
void func_00158850(void) {
    PS2RNA_Start();
}
void func_00158868(void) {
    func_0016CED8();
}
void func_00158880(void) {
    func_0016CF38();
}
void func_00158898(void) {
    func_0016CFD0();
}
void func_001588B0(void) {
    func_0016D128();
}
void func_001588C8(void) {
    func_0016D160();
}
void func_001588E0(void) {
    func_0016D1C8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXRNA_GetStat);
void func_00158948(void) {
    PS2RNA_SetStartSmpl();
}
void func_00158960(void) {
    func_0016D4D8();
}
void func_00158978(void) {
    func_0016D508();
}
void func_00158990(void) {
    func_0016D5E0();
}
s32 func_0016D620_x001589A8() __asm__("func_0016D620");
void fn_8004EDC4_x001589A8(void) __asm__("fn_8004EDC4");
void fn_8004EDC4_x001589A8(void) {
    func_0016D620_x001589A8();
}
void func_001589C0(void) {
    func_0016D670();
}
void func_001589D8(void) {
    PS2RNA_SetBitPerSmpl();
}
void func_001589F0(void) {
    func_0016D798();
}
void func_00158A08(void) {
    func_0016D7C8();
}
void func_00158A20(void) {
    func_0016D7F8();
}
void func_00158A38(void) {
    func_0016D830();
}
void func_00158A50(void) {
    func_0016D860();
}
void func_00158A68(void) {
    PS2RNA_DiscardData();
}
void func_00158A80(void) {

}
void func_00158A88(void) {

}
void func_00158A90(void) {
    func_0016D000();
}
void func_00158AA8(void) {
    func_0016D030();
}
void func_00158AC0(void) {

}
void func_00158AC8(void) {

}
s32 func_00158AD0(void) {
    PS2RNA_SetStmHdInfo();
    return 0;
}
void func_00158AF0(void) {
    D_0040D5E0 += 1;
}
void func_00158B08(void) {
    D_0040D5E0 -= 1;
}
void func_00158B20(void) {
    func_001505E8();
    memset(&D_0040D5F0, 0, 0xA80);
}
void func_00158B50(void) {
    memset(&D_0040D5F0, 0, 0xA80);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158B78);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158BB8);
void func_00158D38(u8 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 4);
        if (temp_v0 != 0) {
            *(s32 *)((u8 *)arg0 + 4) = 0;
            func_001507E8(temp_v0);
        }
        func_00152508();
        memset(arg0, 0, 0xA8);
        func_00152520();
    }
}
s8 func_00158D98(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
void func_00158DA0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    ADXB_AhxTermSupply(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC50(*(s32 *)((u8 *)arg0 + 4), arg1);
}
void func_00158DE0_x00158DE0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00158DE0");
void func_00158DE0_x00158DE0(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 4))) + 0xC);
  *new_var = arg2;
}
void func_00158DF0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    ADXB_SetAhxDecSmpl(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC80(*(s32 *)((u8 *)arg0 + 4), arg1);
}
void func_00158E30(u8 *arg0) {
    ADXB_SetAhxInSj(*(s32 *)((u8 *)arg0 + 4));
    func_0014ECA0(*(s32 *)((u8 *)arg0 + 4));
}
typedef int s32_x00158E60;
typedef s32_x00158E60 ptrdiff_t_x00158E60;
typedef unsigned char Uint8_x00158E60;
typedef char Sint8_x00158E60;
typedef unsigned short Uint16_x00158E60;
typedef signed short Sint16_x00158E60;
typedef unsigned int Uint32_x00158E60;
typedef signed int Sint32_x00158E60;
typedef struct _UUID_x00158E60 {
    Uint32_x00158E60 Data1;
    Uint16_x00158E60 Data2;
    Uint16_x00158E60 Data3;
    Uint8_x00158E60 Data4[8];
} UUID_x00158E60;
typedef struct {
        Sint8_x00158E60 *data;
        Sint32_x00158E60 len;
} SJCK_x00158E60;
typedef struct {
        struct _sj_vtbl_x00158E60 *vtbl;
} SJ_OBJ_x00158E60;
typedef SJ_OBJ_x00158E60 *SJ_x00158E60;
typedef struct _sj_vtbl_x00158E60 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00158E60 sj);
        UUID_x00158E60 *(*GetUuid)(SJ_x00158E60 sj);
        void (*Reset)(SJ_x00158E60 sj);
        void (*GetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, Sint32_x00158E60 nbyte, SJCK_x00158E60 *ck);
        void (*UngetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, SJCK_x00158E60 *ck);
        void (*PutChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, SJCK_x00158E60 *ck);
        Sint32_x00158E60 (*GetNumData)(SJ_x00158E60 sj, Sint32_x00158E60 id);
        Sint32_x00158E60 (*IsGetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, Sint32_x00158E60 nbyte, Sint32_x00158E60 *rbyte);
        void (*EntryErrFunc)(SJ_x00158E60 sj,
                                        void (*func)(void *obj, Sint32_x00158E60 ecode), void *obj);
} SJ_IF_x00158E60;
extern int* sceCdCallback_x00158E60(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00158E60 unk0;
               Sint16_x00158E60 unk2;
               Sint16_x00158E60 unk4;
               Sint16_x00158E60 unk6;
} ADXPD_OBJ_SUB_x00158E60;
typedef struct {
               Sint32_x00158E60 used;
               Sint32_x00158E60 unk4;
               Sint32_x00158E60 mode;
               Sint32_x00158E60 stat;
               Sint32_x00158E60 num_blk;
               Sint32_x00158E60 unk14;
               Sint32_x00158E60 unk18;
               Sint32_x00158E60 unk1C;
               Sint32_x00158E60 unk20;
               Sint32_x00158E60 unk24;
               ADXPD_OBJ_SUB_x00158E60 unk28;
               Sint16_x00158E60 unk30;
               Sint16_x00158E60 unk32;
               Sint16_x00158E60 unk34;
               Sint16_x00158E60 unk36;
               Sint16_x00158E60 unk38;
               Sint16_x00158E60 unk3A;
} ADXPD_OBJ_x00158E60;
typedef ADXPD_OBJ_x00158E60* ADXPD_x00158E60;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00158E60;
typedef struct {
               Sint32_x00158E60 unk0;
               Sint32_x00158E60 unk4;
               Sint32_x00158E60 unk8;
               Sint32_x00158E60 unkC;
               Sint32_x00158E60 unk10;
               void* unk14;
               Sint32_x00158E60 unk18;
               Sint32_x00158E60 unk1C;
               Sint32_x00158E60 unk20;
               Sint32_x00158E60 unk24;
               Sint32_x00158E60 unk28;
} ADXB_UNK_x00158E60;
typedef struct {
               Sint16_x00158E60 unk0;
               Sint16_x00158E60 unk2;
               Sint32_x00158E60 stat;
               ADXPD_x00158E60 adxpd;
               Sint8_x00158E60 encoding_type;
               Sint8_x00158E60 sample_bitdepth;
               Sint8_x00158E60 channel_count;
               Sint8_x00158E60 block_size;
               Sint32_x00158E60 samples_per_block;
               Sint32_x00158E60 sample_rate;
               Sint32_x00158E60 total_samples;
               Sint16_x00158E60 unk1C;
               char pad1E[2];
               Sint32_x00158E60 unk20;
               Sint16_x00158E60 unk24;
               Sint16_x00158E60 unk26;
               Sint32_x00158E60 unk28;
               Sint32_x00158E60 unk2C;
               Sint32_x00158E60 unk30;
               Sint32_x00158E60 unk34;
               Sint32_x00158E60 unk38;
               void* unk3C;
               Sint32_x00158E60 unk40;
               Sint32_x00158E60 unk44;
               ADXB_UNK_x00158E60 unk48;
               Sint32_x00158E60 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00158E60*, Sint32_x00158E60*, Sint32_x00158E60*);
               void* object;
               void (*add_wr)(void*, Sint32_x00158E60, Sint32_x00158E60);
               Sint32_x00158E60 unk84;
               Sint32_x00158E60 unk88;
               Sint32_x00158E60 unk8C;
               Sint32_x00158E60 dec_num_sample;
               Sint32_x00158E60 dec_data_len;
               Sint16_x00158E60 format;
               Sint16_x00158E60 unk9A;
               Sint16_x00158E60 unk9C;
               Sint16_x00158E60 unk9E;
               Sint16_x00158E60 unkA0;
               char padA2[0xE];
               Sint32_x00158E60 unkB0;
               Sint32_x00158E60 ahx_dec_samples;
               Sint32_x00158E60 ahx_dec_frames;
               Sint32_x00158E60 unkBC;
               Sint32_x00158E60 ac3_dec_samples;
               Sint32_x00158E60 ac3_dec_frames;
               Sint32_x00158E60 unkC8;
               ADX_UNK_x00158E60 unkCC;
               Sint16_x00158E60 unkDC;
               Sint16_x00158E60 unkDE[2];
               char padE2[2];
               Sint32_x00158E60 unkE4;
               char padE8[8];
} ADXB_OBJ_x00158E60;
typedef ADXB_OBJ_x00158E60* ADXB_x00158E60;
typedef struct {
    Sint8_x00158E60 used;
    Sint8_x00158E60 state;
    Sint8_x00158E60 maxnch;
    Sint8_x00158E60 unk3;
    ADXB_x00158E60 adxb;
    SJ_x00158E60 sji;
    SJ_x00158E60 sjo[2];
    SJCK_x00158E60 unk14;
    SJCK_x00158E60 chunks[2];
    Sint32_x00158E60 unk2C;
    Sint32_x00158E60 unk30;
    Sint32_x00158E60 unk34;
    Sint32_x00158E60 unk38;
    Sint32_x00158E60 trap_num_samples;
    Sint32_x00158E60 trap_count;
    Sint32_x00158E60 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00158E60, Sint8_x00158E60*, Sint32_x00158E60);
    void* flt_obj;
    Sint8_x00158E60 unk58[0x40];
    Sint32_x00158E60 unk98;
    Sint32_x00158E60 lnkflg;
} ADXSJD_OBJ_x00158E60;
typedef ADXSJD_OBJ_x00158E60* ADXSJD_x00158E60;
extern void ADXB_EntryGetWrFunc_x00158E60(ADXB_x00158E60 adxb, void* (*get_wr)(void*, ptrdiff_t_x00158E60*, Sint32_x00158E60*, Sint32_x00158E60*), void* object) __asm__("ADXB_EntryGetWrFunc");
extern void ADXSJD_EntryTrapFunc_x00158E60(ADXSJD_x00158E60 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*pl2setsfreqfunc_x00158E60)(ADXB_x00158E60, Sint32_x00158E60) __asm__("pl2setsfreqfunc");
void adxsjd_clear_x00158E60(ADXSJD_x00158E60 sjd) __asm__("func_00158B78");
void ADXSJD_EntryTrapFunc_x00158E60(ADXSJD_x00158E60 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void func_00158E60_x00158E60(ADXSJD_x00158E60 sjd) __asm__("func_00158E60");
/* ADXSJD_Start: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sjd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00158E60_x00158E60(ADXSJD_x00158E60 sjd) {
    adxsjd_clear_x00158E60(sjd);
    sjd->state = 1;
}
void func_00158E90(u8 *arg0) {
    func_00151160(*(s32 *)((u8 *)arg0 + 4));
    *(s8 *)((u8 *)arg0 + 1) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXB_DecodeHeader);
