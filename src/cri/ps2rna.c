#include "common.h"

extern s32 D_00464CD0;

extern s32 D_00464C80;

extern s32 D_00464BB8;

extern s32 D_00464B90;

extern s32 D_00464B68;

extern s32 D_0041A104;

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_00464B48;

typedef signed int Sint32_x0016BBE0;
extern int* sceCdCallback_x0016BBE0(void (*func)(int)) __asm__("sceCdCallback");
extern int AddIntcHandler_x0016BBE0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016BBE0(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x0016BBE0(const char* fmt, ...) __asm__("scePrintf");
extern Sint32_x0016BBE0 ps2rna_max_voice_x0016BBE0 __asm__("D_0041A0D0");
extern Sint32_x0016BBE0 ps2psj_iop_wksize_x0016BBE0 __asm__("D_0041A0D4");
extern Sint32_x0016BBE0 ps2rna_setupvoice_flag_x0016BBE0 __asm__("D_0041A0D8");
extern Sint32_x0016BBE0 ps2rna_max_nste_x0016BBE0 __asm__("D_0041A0F8");
extern Sint32_x0016BBE0 ps2rna_max_nmono_x0016BBE0 __asm__("D_0041A0FC");
extern char ext_str0_x0016BBE0[] __asm__("D_00464860");
extern char ext_str1_x0016BBE0[] __asm__("D_00464830");
extern char ext_str2_x0016BBE0[] __asm__("D_00464800");
void PS2RNA_SetupVoice_x0016BBE0(Sint32_x0016BBE0 nste, Sint32_x0016BBE0 nmono) __asm__("PS2RNA_SetupVoice");
/* PS2RNA_SetupVoice_x0016BBE0: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void PS2RNA_SetupVoice_x0016BBE0(Sint32_x0016BBE0 nste, Sint32_x0016BBE0 nmono) {
    Sint32_x0016BBE0 voice_count;
    if (nste < 0) {
        scePrintf_x0016BBE0(ext_str2_x0016BBE0, nste);
        return;
    }
    if (nmono < 0) {
        scePrintf_x0016BBE0(ext_str1_x0016BBE0, nmono);
        return;
    }
    voice_count = (nste * 2) + nmono;
    if (voice_count > 32) {
        scePrintf_x0016BBE0(ext_str0_x0016BBE0, 32);
        return;
    }
    ps2rna_max_voice_x0016BBE0 = voice_count;
    ps2rna_max_nste_x0016BBE0 = nste;
    ps2rna_max_nmono_x0016BBE0 = nmono;
    ps2psj_iop_wksize_x0016BBE0 = voice_count * 0x4100;
    ps2rna_setupvoice_flag_x0016BBE0 = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", ps2rna_init_psj);
typedef unsigned int size_t_x0016BF98;
typedef int s32_x0016BF98;
typedef s32_x0016BF98 ptrdiff_t_x0016BF98;
typedef unsigned char Uint8_x0016BF98;
typedef char Sint8_x0016BF98;
typedef unsigned short Uint16_x0016BF98;
typedef signed short Sint16_x0016BF98;
typedef unsigned int Uint32_x0016BF98;
typedef signed int Sint32_x0016BF98;
typedef Sint32_x0016BF98 Bool_x0016BF98;
typedef char Char8_x0016BF98;
typedef struct _UUID_x0016BF98 {
    Uint32_x0016BF98 Data1;
    Uint16_x0016BF98 Data2;
    Uint16_x0016BF98 Data3;
    Uint8_x0016BF98 Data4[8];
} UUID_x0016BF98;
typedef struct {
        Sint8_x0016BF98 *data;
        Sint32_x0016BF98 len;
} SJCK_x0016BF98;
typedef struct {
        struct _sj_vtbl_x0016BF98 *vtbl;
} SJ_OBJ_x0016BF98;
typedef SJ_OBJ_x0016BF98 *SJ_x0016BF98;
typedef struct _sj_vtbl_x0016BF98 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016BF98 sj);
        UUID_x0016BF98 *(*GetUuid)(SJ_x0016BF98 sj);
        void (*Reset)(SJ_x0016BF98 sj);
        void (*GetChunk)(SJ_x0016BF98 sj, Sint32_x0016BF98 id, Sint32_x0016BF98 nbyte, SJCK_x0016BF98 *ck);
        void (*UngetChunk)(SJ_x0016BF98 sj, Sint32_x0016BF98 id, SJCK_x0016BF98 *ck);
        void (*PutChunk)(SJ_x0016BF98 sj, Sint32_x0016BF98 id, SJCK_x0016BF98 *ck);
        Sint32_x0016BF98 (*GetNumData)(SJ_x0016BF98 sj, Sint32_x0016BF98 id);
        Sint32_x0016BF98 (*IsGetChunk)(SJ_x0016BF98 sj, Sint32_x0016BF98 id, Sint32_x0016BF98 nbyte, Sint32_x0016BF98 *rbyte);
        void (*EntryErrFunc)(SJ_x0016BF98 sj,
                                        void (*func)(void *obj, Sint32_x0016BF98 ecode), void *obj);
} SJ_IF_x0016BF98;
extern int* sceCdCallback_x0016BF98(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0016BF98(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0016BF98;
typedef struct {
               Sint16_x0016BF98 unk0;
               Sint16_x0016BF98 unk2;
               Sint16_x0016BF98 unk4;
               Sint16_x0016BF98 unk6;
} ADXPD_OBJ_SUB_x0016BF98;
typedef struct {
               Sint32_x0016BF98 used;
               Sint32_x0016BF98 unk4;
               Sint32_x0016BF98 mode;
               Sint32_x0016BF98 stat;
               Sint32_x0016BF98 num_blk;
               Sint32_x0016BF98 unk14;
               Sint32_x0016BF98 unk18;
               Sint32_x0016BF98 unk1C;
               Sint32_x0016BF98 unk20;
               Sint32_x0016BF98 unk24;
               ADXPD_OBJ_SUB_x0016BF98 unk28;
               Sint16_x0016BF98 unk30;
               Sint16_x0016BF98 unk32;
               Sint16_x0016BF98 unk34;
               Sint16_x0016BF98 unk36;
               Sint16_x0016BF98 unk38;
               Sint16_x0016BF98 unk3A;
} ADXPD_OBJ_x0016BF98;
typedef ADXPD_OBJ_x0016BF98* ADXPD_x0016BF98;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0016BF98;
typedef struct {
               Sint32_x0016BF98 unk0;
               Sint32_x0016BF98 unk4;
               Sint32_x0016BF98 unk8;
               Sint32_x0016BF98 unkC;
               Sint32_x0016BF98 unk10;
               void* unk14;
               Sint32_x0016BF98 unk18;
               Sint32_x0016BF98 unk1C;
               Sint32_x0016BF98 unk20;
               Sint32_x0016BF98 unk24;
               Sint32_x0016BF98 unk28;
} ADXB_UNK_x0016BF98;
typedef struct {
               Sint16_x0016BF98 unk0;
               Sint16_x0016BF98 unk2;
               Sint32_x0016BF98 stat;
               ADXPD_x0016BF98 adxpd;
               Sint8_x0016BF98 encoding_type;
               Sint8_x0016BF98 sample_bitdepth;
               Sint8_x0016BF98 channel_count;
               Sint8_x0016BF98 block_size;
               Sint32_x0016BF98 samples_per_block;
               Sint32_x0016BF98 sample_rate;
               Sint32_x0016BF98 total_samples;
               Sint16_x0016BF98 unk1C;
               char pad1E[2];
               Sint32_x0016BF98 unk20;
               Sint16_x0016BF98 unk24;
               Sint16_x0016BF98 unk26;
               Sint32_x0016BF98 unk28;
               Sint32_x0016BF98 unk2C;
               Sint32_x0016BF98 unk30;
               Sint32_x0016BF98 unk34;
               Sint32_x0016BF98 unk38;
               void* unk3C;
               Sint32_x0016BF98 unk40;
               Sint32_x0016BF98 unk44;
               ADXB_UNK_x0016BF98 unk48;
               Sint32_x0016BF98 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0016BF98*, Sint32_x0016BF98*, Sint32_x0016BF98*);
               void* object;
               void (*add_wr)(void*, Sint32_x0016BF98, Sint32_x0016BF98);
               Sint32_x0016BF98 unk84;
               Sint32_x0016BF98 unk88;
               Sint32_x0016BF98 unk8C;
               Sint32_x0016BF98 dec_num_sample;
               Sint32_x0016BF98 dec_data_len;
               Sint16_x0016BF98 format;
               Sint16_x0016BF98 unk9A;
               Sint16_x0016BF98 unk9C;
               Sint16_x0016BF98 unk9E;
               Sint16_x0016BF98 unkA0;
               char padA2[0xE];
               Sint32_x0016BF98 unkB0;
               Sint32_x0016BF98 ahx_dec_samples;
               Sint32_x0016BF98 ahx_dec_frames;
               Sint32_x0016BF98 unkBC;
               Sint32_x0016BF98 ac3_dec_samples;
               Sint32_x0016BF98 ac3_dec_frames;
               Sint32_x0016BF98 unkC8;
               ADX_UNK_x0016BF98 unkCC;
               Sint16_x0016BF98 unkDC;
               Sint16_x0016BF98 unkDE[2];
               char padE2[2];
               Sint32_x0016BF98 unkE4;
               char padE8[8];
} ADXB_OBJ_x0016BF98;
typedef ADXB_OBJ_x0016BF98* ADXB_x0016BF98;
typedef struct {
    Sint8_x0016BF98 used;
    Sint8_x0016BF98 state;
    Sint8_x0016BF98 maxnch;
    Sint8_x0016BF98 unk3;
    ADXB_x0016BF98 adxb;
    SJ_x0016BF98 sji;
    SJ_x0016BF98 sjo[2];
    SJCK_x0016BF98 unk14;
    SJCK_x0016BF98 chunks[2];
    Sint32_x0016BF98 unk2C;
    Sint32_x0016BF98 unk30;
    Sint32_x0016BF98 unk34;
    Sint32_x0016BF98 unk38;
    Sint32_x0016BF98 trap_num_samples;
    Sint32_x0016BF98 trap_count;
    Sint32_x0016BF98 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0016BF98, Sint8_x0016BF98*, Sint32_x0016BF98);
    void* flt_obj;
    Sint8_x0016BF98 unk58[0x40];
    Sint32_x0016BF98 unk98;
    Sint32_x0016BF98 lnkflg;
} ADXSJD_OBJ_x0016BF98;
typedef ADXSJD_OBJ_x0016BF98* ADXSJD_x0016BF98;
typedef struct {
    Sint32_x0016BF98 unk0;
    SJ_x0016BF98 sj;
} SJX_UNK_0_x0016BF98;
typedef struct {
    Sint8_x0016BF98 used;
    Sint8_x0016BF98 unk1;
    Sint16_x0016BF98 unk2;
    SJ_x0016BF98 sj;
    void* unk8;
    Sint32_x0016BF98 unkC;
    SJX_UNK_0_x0016BF98* unk10;
} SJX_OBJ_x0016BF98;
typedef SJX_OBJ_x0016BF98* SJX_x0016BF98;
typedef struct {
    Sint8_x0016BF98 used;
    char pad1[3];
    void* unk4;
    SJ_x0016BF98 unk8;
    SJX_x0016BF98 unkC;
    SJCK_x0016BF98 chunk;
} PS2PSJ_OBJ_x0016BF98;
typedef PS2PSJ_OBJ_x0016BF98* PS2PSJ_x0016BF98;
typedef struct {
               Sint8_x0016BF98 unk0;
               Sint8_x0016BF98 unk1;
               Sint8_x0016BF98 unk2;
               SJ_x0016BF98 unk4;
               SJ_x0016BF98 unk8;
               SJCK_x0016BF98 unkC;
               SJCK_x0016BF98 unk14;
               sceSifDmaData_x0016BF98 dma_data;
               Sint32_x0016BF98 unk2C;
               Sint32_x0016BF98 unk30;
               Sint32_x0016BF98 unk34;
               Sint32_x0016BF98 unk38;
               Sint32_x0016BF98 unk3C;
} DTR_OBJ_x0016BF98;
typedef DTR_OBJ_x0016BF98* DTR_x0016BF98;
typedef struct {
    Sint8_x0016BF98 used;
    Sint32_x0016BF98 maxnch;
    PS2PSJ_x0016BF98 psj[2];
    DTR_x0016BF98 dtr[2];
    SJ_x0016BF98 sjo[2];
    void* unk20;
    Sint32_x0016BF98 unk24;
    Sint32_x0016BF98 unk28;
    Sint32_x0016BF98 unk2C;
    Sint8_x0016BF98 unk30;
    Sint8_x0016BF98 unk31;
    Sint8_x0016BF98 num_chan;
    Sint8_x0016BF98 unk33;
    Sint32_x0016BF98 sfreq;
    Sint32_x0016BF98 unk38;
    Sint32_x0016BF98 out_vol;
    Sint32_x0016BF98 unk40;
    Sint32_x0016BF98 pan[2];
    Sint32_x0016BF98 unk4C[2];
    Sint32_x0016BF98 unk54;
    Sint32_x0016BF98 unk58;
    Sint8_x0016BF98 unk5C;
    Sint8_x0016BF98 unk5D;
    Sint8_x0016BF98 unk5E;
    Sint8_x0016BF98 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0016BF98;
typedef ADXRNA_OBJ_x0016BF98* ADXRNA_x0016BF98;
typedef struct {
    Sint8_x0016BF98 unk0;
    Sint8_x0016BF98 stat;
    Sint8_x0016BF98 read_flg;
    Sint8_x0016BF98 unk3;
    SJ_x0016BF98 sj;
    void* cvfs;
    Sint32_x0016BF98 unkC;
    Sint32_x0016BF98 file_len;
    Sint32_x0016BF98 file_sct;
    Sint32_x0016BF98 unk18;
    Sint32_x0016BF98 unk1C;
    Sint32_x0016BF98 unk20;
    SJCK_x0016BF98 unk24;
    Sint32_x0016BF98 req_rd_size;
    Sint32_x0016BF98 eos;
    Uint32_x0016BF98 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016BF98 unk40;
    Sint8_x0016BF98 pause;
    Sint8_x0016BF98 unk45;
    Sint8_x0016BF98 unk46;
    Sint8_x0016BF98 unk47;
    Sint8_x0016BF98 unk48;
    Sint8_x0016BF98 unk49;
    char pad4A[6];
    const Char8_x0016BF98* fname;
    void* dir;
    Sint32_x0016BF98 cur_ofst;
    Uint32_x0016BF98 unk5C;
} ADXSTM_OBJ_x0016BF98;
typedef ADXSTM_OBJ_x0016BF98* ADXSTM_x0016BF98;
void SJRMT_Destroy_x0016BF98(void*) __asm__("func_0016F460");
void SJX_Destroy_x0016BF98(SJX_x0016BF98) __asm__("func_0016FDF8");
typedef struct _adx_talk_x0016BF98 {
                   Sint8_x0016BF98 used;
                   Sint8_x0016BF98 stat;
                   Sint8_x0016BF98 pmode;
                   Sint8_x0016BF98 maxnch;
                   ADXSJD_x0016BF98 sjd;
                   ADXSTM_x0016BF98 stm;
                   ADXRNA_x0016BF98 rna;
                   SJ_x0016BF98 sjf;
                   SJ_x0016BF98 sji;
                   SJ_x0016BF98 sjo[(2)];
                   Sint8_x0016BF98 *ibuf;
                   Sint32_x0016BF98 ibuflen;
                   Sint32_x0016BF98 ibufxlen;
                   Sint16_x0016BF98 *obuf;
                   Sint32_x0016BF98 obufsize;
                   Sint32_x0016BF98 obufdist;
                   Sint32_x0016BF98 svrfreq;
                   Sint16_x0016BF98 maxsct;
                   Sint16_x0016BF98 minsct;
                   Sint16_x0016BF98 outvol;
                   Sint16_x0016BF98 outpan[(2)];
                   Sint16_x0016BF98 unk46;
                   Sint32_x0016BF98 maxdecsmpl;
                   Sint32_x0016BF98 lpcnt;
                   Sint32_x0016BF98 lp_skiplen;
                   Sint32_x0016BF98 trp;
                   Sint32_x0016BF98 wpos;
                   Sint32_x0016BF98 mofst;
                   Sint16_x0016BF98 ercode;
                   Sint32_x0016BF98 edecpos;
                   Sint16_x0016BF98 edeccnt;
                   Sint16_x0016BF98 eshrtcnt;
                   Sint8_x0016BF98 lpflg;
                   Sint8_x0016BF98 autorcvr;
                   Sint8_x0016BF98 fltmode;
                   Sint8_x0016BF98 execflag;
                   Sint8_x0016BF98 pstwait_flag;
                   Sint8_x0016BF98 pstready_flag;
                   Sint8_x0016BF98 pause_flag;
                   void *amp;
                   SJ_x0016BF98 ampsji[(2)];
                   SJ_x0016BF98 ampsjo[(2)];
                   Sint32_x0016BF98 time_ofst;
                   Sint32_x0016BF98 lesct;
                   Sint32_x0016BF98 trpnsmpl;
                   void *lsc;
                   Sint8_x0016BF98 lnkflg;
                   Sint8_x0016BF98 rsv;
                   Sint16_x0016BF98 rsv2;
                   Uint32_x0016BF98 tvofst;
                   Uint32_x0016BF98 svcnt;
                   Uint32_x0016BF98 decofst;
                   Sint32_x0016BF98 flush_nsmpl;
                   Sint8_x0016BF98 unkAC;
                   Sint8_x0016BF98 padAD[1];
               Char8_x0016BF98* unkB0;
               Sint32_x0016BF98 padB4;
               Sint32_x0016BF98 padB8;
               Sint32_x0016BF98 padBC;
               Sint32_x0016BF98 padC0;
} ADX_TALK_x0016BF98;
typedef ADX_TALK_x0016BF98 *ADXT_x0016BF98;
extern void ADXT_EntryErrFunc_x0016BF98(void (*func)(void *obj, Sint8_x0016BF98 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0016BF98(ADXT_x0016BF98 adxt,
                void (*f)(void *obj, Sint32_x0016BF98 ch, void *data, Sint32_x0016BF98 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0016BF98(Bool_x0016BF98 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0016BF98(Bool_x0016BF98 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0016BF98(void (*fn)(void *obj, Char8_x0016BF98 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0016BF98(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern int AddIntcHandler_x0016BF98(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016BF98(int, int (*)(int), int) __asm__("AddDmacHandler");
extern int sceSifFreeIopHeap_x0016BF98(void*) __asm__("func_00112700");
void* memset_x0016BF98(void* s, int c, size_t_x0016BF98 n) __asm__("memset");
extern Sint32_x0016BF98 ps2rna_max_voice_x0016BF98 __asm__("D_0041A0D0");
extern void* ps2psj_iop_work0_x0016BF98 __asm__("D_0041A0DC");
extern Sint8_x0016BF98 ps2psj_alloc_flag_x0016BF98 __asm__("D_0041A0E4");
extern PS2PSJ_OBJ_x0016BF98 ps2psj_obj_x0016BF98[32] __asm__("D_0041A120");
void func_0016BF98_x0016BF98() __asm__("func_0016BF98");
/* ps2rna_finish_psj: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016BF98_x0016BF98() {
    PS2PSJ_x0016BF98 psj;
    Sint32_x0016BF98 i;
    for (i = 0; i < ps2rna_max_voice_x0016BF98; i++) {
        psj = &ps2psj_obj_x0016BF98[i];
        if (psj->unk4 != 0) {
            SJRMT_Destroy_x0016BF98(psj->unk4);
        }
        if (psj->unk8 != 0) {
            (*(psj->unk8)->vtbl->Destroy)(psj->unk8);
        }
        if (psj->unkC != 0) {
            SJX_Destroy_x0016BF98(psj->unkC);
        }
        memset_x0016BF98(psj, 0, sizeof(PS2PSJ_OBJ_x0016BF98));
    }
    if (ps2psj_alloc_flag_x0016BF98 == 1) {
        sceSifFreeIopHeap_x0016BF98(ps2psj_iop_work0_x0016BF98);
        ps2psj_iop_work0_x0016BF98 = 0;
        ps2psj_alloc_flag_x0016BF98 = 0;
    }
}
typedef int s32_x0016C078;
typedef s32_x0016C078 ptrdiff_t_x0016C078;
typedef unsigned char Uint8_x0016C078;
typedef char Sint8_x0016C078;
typedef unsigned short Uint16_x0016C078;
typedef signed short Sint16_x0016C078;
typedef unsigned int Uint32_x0016C078;
typedef signed int Sint32_x0016C078;
typedef Sint32_x0016C078 Bool_x0016C078;
typedef char Char8_x0016C078;
typedef struct _UUID_x0016C078 {
    Uint32_x0016C078 Data1;
    Uint16_x0016C078 Data2;
    Uint16_x0016C078 Data3;
    Uint8_x0016C078 Data4[8];
} UUID_x0016C078;
typedef struct {
        Sint8_x0016C078 *data;
        Sint32_x0016C078 len;
} SJCK_x0016C078;
typedef struct {
        struct _sj_vtbl_x0016C078 *vtbl;
} SJ_OBJ_x0016C078;
typedef SJ_OBJ_x0016C078 *SJ_x0016C078;
typedef struct _sj_vtbl_x0016C078 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016C078 sj);
        UUID_x0016C078 *(*GetUuid)(SJ_x0016C078 sj);
        void (*Reset)(SJ_x0016C078 sj);
        void (*GetChunk)(SJ_x0016C078 sj, Sint32_x0016C078 id, Sint32_x0016C078 nbyte, SJCK_x0016C078 *ck);
        void (*UngetChunk)(SJ_x0016C078 sj, Sint32_x0016C078 id, SJCK_x0016C078 *ck);
        void (*PutChunk)(SJ_x0016C078 sj, Sint32_x0016C078 id, SJCK_x0016C078 *ck);
        Sint32_x0016C078 (*GetNumData)(SJ_x0016C078 sj, Sint32_x0016C078 id);
        Sint32_x0016C078 (*IsGetChunk)(SJ_x0016C078 sj, Sint32_x0016C078 id, Sint32_x0016C078 nbyte, Sint32_x0016C078 *rbyte);
        void (*EntryErrFunc)(SJ_x0016C078 sj,
                                        void (*func)(void *obj, Sint32_x0016C078 ecode), void *obj);
} SJ_IF_x0016C078;
extern int* sceCdCallback_x0016C078(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0016C078(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0016C078;
typedef struct {
               Sint16_x0016C078 unk0;
               Sint16_x0016C078 unk2;
               Sint16_x0016C078 unk4;
               Sint16_x0016C078 unk6;
} ADXPD_OBJ_SUB_x0016C078;
typedef struct {
               Sint32_x0016C078 used;
               Sint32_x0016C078 unk4;
               Sint32_x0016C078 mode;
               Sint32_x0016C078 stat;
               Sint32_x0016C078 num_blk;
               Sint32_x0016C078 unk14;
               Sint32_x0016C078 unk18;
               Sint32_x0016C078 unk1C;
               Sint32_x0016C078 unk20;
               Sint32_x0016C078 unk24;
               ADXPD_OBJ_SUB_x0016C078 unk28;
               Sint16_x0016C078 unk30;
               Sint16_x0016C078 unk32;
               Sint16_x0016C078 unk34;
               Sint16_x0016C078 unk36;
               Sint16_x0016C078 unk38;
               Sint16_x0016C078 unk3A;
} ADXPD_OBJ_x0016C078;
typedef ADXPD_OBJ_x0016C078* ADXPD_x0016C078;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0016C078;
typedef struct {
               Sint32_x0016C078 unk0;
               Sint32_x0016C078 unk4;
               Sint32_x0016C078 unk8;
               Sint32_x0016C078 unkC;
               Sint32_x0016C078 unk10;
               void* unk14;
               Sint32_x0016C078 unk18;
               Sint32_x0016C078 unk1C;
               Sint32_x0016C078 unk20;
               Sint32_x0016C078 unk24;
               Sint32_x0016C078 unk28;
} ADXB_UNK_x0016C078;
typedef struct {
               Sint16_x0016C078 unk0;
               Sint16_x0016C078 unk2;
               Sint32_x0016C078 stat;
               ADXPD_x0016C078 adxpd;
               Sint8_x0016C078 encoding_type;
               Sint8_x0016C078 sample_bitdepth;
               Sint8_x0016C078 channel_count;
               Sint8_x0016C078 block_size;
               Sint32_x0016C078 samples_per_block;
               Sint32_x0016C078 sample_rate;
               Sint32_x0016C078 total_samples;
               Sint16_x0016C078 unk1C;
               char pad1E[2];
               Sint32_x0016C078 unk20;
               Sint16_x0016C078 unk24;
               Sint16_x0016C078 unk26;
               Sint32_x0016C078 unk28;
               Sint32_x0016C078 unk2C;
               Sint32_x0016C078 unk30;
               Sint32_x0016C078 unk34;
               Sint32_x0016C078 unk38;
               void* unk3C;
               Sint32_x0016C078 unk40;
               Sint32_x0016C078 unk44;
               ADXB_UNK_x0016C078 unk48;
               Sint32_x0016C078 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0016C078*, Sint32_x0016C078*, Sint32_x0016C078*);
               void* object;
               void (*add_wr)(void*, Sint32_x0016C078, Sint32_x0016C078);
               Sint32_x0016C078 unk84;
               Sint32_x0016C078 unk88;
               Sint32_x0016C078 unk8C;
               Sint32_x0016C078 dec_num_sample;
               Sint32_x0016C078 dec_data_len;
               Sint16_x0016C078 format;
               Sint16_x0016C078 unk9A;
               Sint16_x0016C078 unk9C;
               Sint16_x0016C078 unk9E;
               Sint16_x0016C078 unkA0;
               char padA2[0xE];
               Sint32_x0016C078 unkB0;
               Sint32_x0016C078 ahx_dec_samples;
               Sint32_x0016C078 ahx_dec_frames;
               Sint32_x0016C078 unkBC;
               Sint32_x0016C078 ac3_dec_samples;
               Sint32_x0016C078 ac3_dec_frames;
               Sint32_x0016C078 unkC8;
               ADX_UNK_x0016C078 unkCC;
               Sint16_x0016C078 unkDC;
               Sint16_x0016C078 unkDE[2];
               char padE2[2];
               Sint32_x0016C078 unkE4;
               char padE8[8];
} ADXB_OBJ_x0016C078;
typedef ADXB_OBJ_x0016C078* ADXB_x0016C078;
typedef struct {
    Sint8_x0016C078 used;
    Sint8_x0016C078 state;
    Sint8_x0016C078 maxnch;
    Sint8_x0016C078 unk3;
    ADXB_x0016C078 adxb;
    SJ_x0016C078 sji;
    SJ_x0016C078 sjo[2];
    SJCK_x0016C078 unk14;
    SJCK_x0016C078 chunks[2];
    Sint32_x0016C078 unk2C;
    Sint32_x0016C078 unk30;
    Sint32_x0016C078 unk34;
    Sint32_x0016C078 unk38;
    Sint32_x0016C078 trap_num_samples;
    Sint32_x0016C078 trap_count;
    Sint32_x0016C078 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0016C078, Sint8_x0016C078*, Sint32_x0016C078);
    void* flt_obj;
    Sint8_x0016C078 unk58[0x40];
    Sint32_x0016C078 unk98;
    Sint32_x0016C078 lnkflg;
} ADXSJD_OBJ_x0016C078;
typedef ADXSJD_OBJ_x0016C078* ADXSJD_x0016C078;
typedef struct {
    Sint32_x0016C078 unk0;
    SJ_x0016C078 sj;
} SJX_UNK_0_x0016C078;
typedef struct {
    Sint8_x0016C078 used;
    Sint8_x0016C078 unk1;
    Sint16_x0016C078 unk2;
    SJ_x0016C078 sj;
    void* unk8;
    Sint32_x0016C078 unkC;
    SJX_UNK_0_x0016C078* unk10;
} SJX_OBJ_x0016C078;
typedef SJX_OBJ_x0016C078* SJX_x0016C078;
typedef struct {
    Sint8_x0016C078 used;
    char pad1[3];
    void* unk4;
    SJ_x0016C078 unk8;
    SJX_x0016C078 unkC;
    SJCK_x0016C078 chunk;
} PS2PSJ_OBJ_x0016C078;
typedef PS2PSJ_OBJ_x0016C078* PS2PSJ_x0016C078;
typedef struct {
               Sint8_x0016C078 unk0;
               Sint8_x0016C078 unk1;
               Sint8_x0016C078 unk2;
               SJ_x0016C078 unk4;
               SJ_x0016C078 unk8;
               SJCK_x0016C078 unkC;
               SJCK_x0016C078 unk14;
               sceSifDmaData_x0016C078 dma_data;
               Sint32_x0016C078 unk2C;
               Sint32_x0016C078 unk30;
               Sint32_x0016C078 unk34;
               Sint32_x0016C078 unk38;
               Sint32_x0016C078 unk3C;
} DTR_OBJ_x0016C078;
typedef DTR_OBJ_x0016C078* DTR_x0016C078;
typedef struct {
    Sint8_x0016C078 used;
    Sint32_x0016C078 maxnch;
    PS2PSJ_x0016C078 psj[2];
    DTR_x0016C078 dtr[2];
    SJ_x0016C078 sjo[2];
    void* unk20;
    Sint32_x0016C078 unk24;
    Sint32_x0016C078 unk28;
    Sint32_x0016C078 unk2C;
    Sint8_x0016C078 unk30;
    Sint8_x0016C078 unk31;
    Sint8_x0016C078 num_chan;
    Sint8_x0016C078 unk33;
    Sint32_x0016C078 sfreq;
    Sint32_x0016C078 unk38;
    Sint32_x0016C078 out_vol;
    Sint32_x0016C078 unk40;
    Sint32_x0016C078 pan[2];
    Sint32_x0016C078 unk4C[2];
    Sint32_x0016C078 unk54;
    Sint32_x0016C078 unk58;
    Sint8_x0016C078 unk5C;
    Sint8_x0016C078 unk5D;
    Sint8_x0016C078 unk5E;
    Sint8_x0016C078 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0016C078;
typedef ADXRNA_OBJ_x0016C078* ADXRNA_x0016C078;
typedef struct {
    Sint8_x0016C078 unk0;
    Sint8_x0016C078 stat;
    Sint8_x0016C078 read_flg;
    Sint8_x0016C078 unk3;
    SJ_x0016C078 sj;
    void* cvfs;
    Sint32_x0016C078 unkC;
    Sint32_x0016C078 file_len;
    Sint32_x0016C078 file_sct;
    Sint32_x0016C078 unk18;
    Sint32_x0016C078 unk1C;
    Sint32_x0016C078 unk20;
    SJCK_x0016C078 unk24;
    Sint32_x0016C078 req_rd_size;
    Sint32_x0016C078 eos;
    Uint32_x0016C078 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016C078 unk40;
    Sint8_x0016C078 pause;
    Sint8_x0016C078 unk45;
    Sint8_x0016C078 unk46;
    Sint8_x0016C078 unk47;
    Sint8_x0016C078 unk48;
    Sint8_x0016C078 unk49;
    char pad4A[6];
    const Char8_x0016C078* fname;
    void* dir;
    Sint32_x0016C078 cur_ofst;
    Uint32_x0016C078 unk5C;
} ADXSTM_OBJ_x0016C078;
typedef ADXSTM_OBJ_x0016C078* ADXSTM_x0016C078;
typedef struct _adx_talk_x0016C078 {
                   Sint8_x0016C078 used;
                   Sint8_x0016C078 stat;
                   Sint8_x0016C078 pmode;
                   Sint8_x0016C078 maxnch;
                   ADXSJD_x0016C078 sjd;
                   ADXSTM_x0016C078 stm;
                   ADXRNA_x0016C078 rna;
                   SJ_x0016C078 sjf;
                   SJ_x0016C078 sji;
                   SJ_x0016C078 sjo[(2)];
                   Sint8_x0016C078 *ibuf;
                   Sint32_x0016C078 ibuflen;
                   Sint32_x0016C078 ibufxlen;
                   Sint16_x0016C078 *obuf;
                   Sint32_x0016C078 obufsize;
                   Sint32_x0016C078 obufdist;
                   Sint32_x0016C078 svrfreq;
                   Sint16_x0016C078 maxsct;
                   Sint16_x0016C078 minsct;
                   Sint16_x0016C078 outvol;
                   Sint16_x0016C078 outpan[(2)];
                   Sint16_x0016C078 unk46;
                   Sint32_x0016C078 maxdecsmpl;
                   Sint32_x0016C078 lpcnt;
                   Sint32_x0016C078 lp_skiplen;
                   Sint32_x0016C078 trp;
                   Sint32_x0016C078 wpos;
                   Sint32_x0016C078 mofst;
                   Sint16_x0016C078 ercode;
                   Sint32_x0016C078 edecpos;
                   Sint16_x0016C078 edeccnt;
                   Sint16_x0016C078 eshrtcnt;
                   Sint8_x0016C078 lpflg;
                   Sint8_x0016C078 autorcvr;
                   Sint8_x0016C078 fltmode;
                   Sint8_x0016C078 execflag;
                   Sint8_x0016C078 pstwait_flag;
                   Sint8_x0016C078 pstready_flag;
                   Sint8_x0016C078 pause_flag;
                   void *amp;
                   SJ_x0016C078 ampsji[(2)];
                   SJ_x0016C078 ampsjo[(2)];
                   Sint32_x0016C078 time_ofst;
                   Sint32_x0016C078 lesct;
                   Sint32_x0016C078 trpnsmpl;
                   void *lsc;
                   Sint8_x0016C078 lnkflg;
                   Sint8_x0016C078 rsv;
                   Sint16_x0016C078 rsv2;
                   Uint32_x0016C078 tvofst;
                   Uint32_x0016C078 svcnt;
                   Uint32_x0016C078 decofst;
                   Sint32_x0016C078 flush_nsmpl;
                   Sint8_x0016C078 unkAC;
                   Sint8_x0016C078 padAD[1];
               Char8_x0016C078* unkB0;
               Sint32_x0016C078 padB4;
               Sint32_x0016C078 padB8;
               Sint32_x0016C078 padBC;
               Sint32_x0016C078 padC0;
} ADX_TALK_x0016C078;
typedef ADX_TALK_x0016C078 *ADXT_x0016C078;
extern void ADXT_EntryErrFunc_x0016C078(void (*func)(void *obj, Sint8_x0016C078 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0016C078(ADXT_x0016C078 adxt,
                void (*f)(void *obj, Sint32_x0016C078 ch, void *data, Sint32_x0016C078 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0016C078(Bool_x0016C078 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0016C078(Bool_x0016C078 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0016C078(void (*fn)(void *obj, Char8_x0016C078 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0016C078(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern int AddIntcHandler_x0016C078(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016C078(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x0016C078 ps2rna_max_voice_x0016C078 __asm__("D_0041A0D0");
extern PS2PSJ_OBJ_x0016C078 ps2psj_obj_x0016C078[32] __asm__("D_0041A120");
PS2PSJ_x0016C078 func_0016C078_x0016C078() __asm__("func_0016C078");
/* ps2rna_get_psj: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
PS2PSJ_x0016C078 func_0016C078_x0016C078() {
    PS2PSJ_x0016C078 psj = 0;
    Sint32_x0016C078 i;
    for (i = 0; i < ps2rna_max_voice_x0016C078; i++) {
        psj = &ps2psj_obj_x0016C078[i];
        if (psj->used == 0) {
            break;
        }
    }
    if (i == ps2rna_max_voice_x0016C078) {
        return 0;
    }
    psj->used = 1;
    return psj;
}
void func_0016C0F0(s8 *arg0) {
    *arg0 = 0;
}
typedef signed int Sint32_x0016C0F8;
extern int* sceCdCallback_x0016C0F8(void (*func)(int)) __asm__("sceCdCallback");
extern int AddIntcHandler_x0016C0F8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016C0F8(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_0016C0F8_x0016C0F8(void* object, void* arg1, Sint32_x0016C0F8 arg2) __asm__("func_0016C0F8");
/* ps2rna_rcvcbf: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016C0F8_x0016C0F8(void* object, void* arg1, Sint32_x0016C0F8 arg2) {
    Sint32_x0016C0F8 i;
    Sint32_x0016C0F8 ticks;
    if (arg1 == 0) {
        while (1) {}
    }
    ticks = ((Sint32_x0016C0F8*)arg1)[0];
    for (i = 0; i < ticks; i++) {
    }
}
typedef int s32_x0016C158;
typedef s32_x0016C158 ptrdiff_t_x0016C158;
typedef unsigned char Uint8_x0016C158;
typedef char Sint8_x0016C158;
typedef unsigned short Uint16_x0016C158;
typedef signed short Sint16_x0016C158;
typedef unsigned int Uint32_x0016C158;
typedef signed int Sint32_x0016C158;
typedef Sint32_x0016C158 Bool_x0016C158;
typedef char Char8_x0016C158;
typedef struct _UUID_x0016C158 {
    Uint32_x0016C158 Data1;
    Uint16_x0016C158 Data2;
    Uint16_x0016C158 Data3;
    Uint8_x0016C158 Data4[8];
} UUID_x0016C158;
typedef struct {
        Sint8_x0016C158 *data;
        Sint32_x0016C158 len;
} SJCK_x0016C158;
typedef struct {
        struct _sj_vtbl_x0016C158 *vtbl;
} SJ_OBJ_x0016C158;
typedef SJ_OBJ_x0016C158 *SJ_x0016C158;
typedef struct _sj_vtbl_x0016C158 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016C158 sj);
        UUID_x0016C158 *(*GetUuid)(SJ_x0016C158 sj);
        void (*Reset)(SJ_x0016C158 sj);
        void (*GetChunk)(SJ_x0016C158 sj, Sint32_x0016C158 id, Sint32_x0016C158 nbyte, SJCK_x0016C158 *ck);
        void (*UngetChunk)(SJ_x0016C158 sj, Sint32_x0016C158 id, SJCK_x0016C158 *ck);
        void (*PutChunk)(SJ_x0016C158 sj, Sint32_x0016C158 id, SJCK_x0016C158 *ck);
        Sint32_x0016C158 (*GetNumData)(SJ_x0016C158 sj, Sint32_x0016C158 id);
        Sint32_x0016C158 (*IsGetChunk)(SJ_x0016C158 sj, Sint32_x0016C158 id, Sint32_x0016C158 nbyte, Sint32_x0016C158 *rbyte);
        void (*EntryErrFunc)(SJ_x0016C158 sj,
                                        void (*func)(void *obj, Sint32_x0016C158 ecode), void *obj);
} SJ_IF_x0016C158;
extern int* sceCdCallback_x0016C158(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0016C158(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0016C158;
typedef struct {
               Sint16_x0016C158 unk0;
               Sint16_x0016C158 unk2;
               Sint16_x0016C158 unk4;
               Sint16_x0016C158 unk6;
} ADXPD_OBJ_SUB_x0016C158;
typedef struct {
               Sint32_x0016C158 used;
               Sint32_x0016C158 unk4;
               Sint32_x0016C158 mode;
               Sint32_x0016C158 stat;
               Sint32_x0016C158 num_blk;
               Sint32_x0016C158 unk14;
               Sint32_x0016C158 unk18;
               Sint32_x0016C158 unk1C;
               Sint32_x0016C158 unk20;
               Sint32_x0016C158 unk24;
               ADXPD_OBJ_SUB_x0016C158 unk28;
               Sint16_x0016C158 unk30;
               Sint16_x0016C158 unk32;
               Sint16_x0016C158 unk34;
               Sint16_x0016C158 unk36;
               Sint16_x0016C158 unk38;
               Sint16_x0016C158 unk3A;
} ADXPD_OBJ_x0016C158;
typedef ADXPD_OBJ_x0016C158* ADXPD_x0016C158;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0016C158;
typedef struct {
               Sint32_x0016C158 unk0;
               Sint32_x0016C158 unk4;
               Sint32_x0016C158 unk8;
               Sint32_x0016C158 unkC;
               Sint32_x0016C158 unk10;
               void* unk14;
               Sint32_x0016C158 unk18;
               Sint32_x0016C158 unk1C;
               Sint32_x0016C158 unk20;
               Sint32_x0016C158 unk24;
               Sint32_x0016C158 unk28;
} ADXB_UNK_x0016C158;
typedef struct {
               Sint16_x0016C158 unk0;
               Sint16_x0016C158 unk2;
               Sint32_x0016C158 stat;
               ADXPD_x0016C158 adxpd;
               Sint8_x0016C158 encoding_type;
               Sint8_x0016C158 sample_bitdepth;
               Sint8_x0016C158 channel_count;
               Sint8_x0016C158 block_size;
               Sint32_x0016C158 samples_per_block;
               Sint32_x0016C158 sample_rate;
               Sint32_x0016C158 total_samples;
               Sint16_x0016C158 unk1C;
               char pad1E[2];
               Sint32_x0016C158 unk20;
               Sint16_x0016C158 unk24;
               Sint16_x0016C158 unk26;
               Sint32_x0016C158 unk28;
               Sint32_x0016C158 unk2C;
               Sint32_x0016C158 unk30;
               Sint32_x0016C158 unk34;
               Sint32_x0016C158 unk38;
               void* unk3C;
               Sint32_x0016C158 unk40;
               Sint32_x0016C158 unk44;
               ADXB_UNK_x0016C158 unk48;
               Sint32_x0016C158 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0016C158*, Sint32_x0016C158*, Sint32_x0016C158*);
               void* object;
               void (*add_wr)(void*, Sint32_x0016C158, Sint32_x0016C158);
               Sint32_x0016C158 unk84;
               Sint32_x0016C158 unk88;
               Sint32_x0016C158 unk8C;
               Sint32_x0016C158 dec_num_sample;
               Sint32_x0016C158 dec_data_len;
               Sint16_x0016C158 format;
               Sint16_x0016C158 unk9A;
               Sint16_x0016C158 unk9C;
               Sint16_x0016C158 unk9E;
               Sint16_x0016C158 unkA0;
               char padA2[0xE];
               Sint32_x0016C158 unkB0;
               Sint32_x0016C158 ahx_dec_samples;
               Sint32_x0016C158 ahx_dec_frames;
               Sint32_x0016C158 unkBC;
               Sint32_x0016C158 ac3_dec_samples;
               Sint32_x0016C158 ac3_dec_frames;
               Sint32_x0016C158 unkC8;
               ADX_UNK_x0016C158 unkCC;
               Sint16_x0016C158 unkDC;
               Sint16_x0016C158 unkDE[2];
               char padE2[2];
               Sint32_x0016C158 unkE4;
               char padE8[8];
} ADXB_OBJ_x0016C158;
typedef ADXB_OBJ_x0016C158* ADXB_x0016C158;
typedef struct {
    Sint8_x0016C158 used;
    Sint8_x0016C158 state;
    Sint8_x0016C158 maxnch;
    Sint8_x0016C158 unk3;
    ADXB_x0016C158 adxb;
    SJ_x0016C158 sji;
    SJ_x0016C158 sjo[2];
    SJCK_x0016C158 unk14;
    SJCK_x0016C158 chunks[2];
    Sint32_x0016C158 unk2C;
    Sint32_x0016C158 unk30;
    Sint32_x0016C158 unk34;
    Sint32_x0016C158 unk38;
    Sint32_x0016C158 trap_num_samples;
    Sint32_x0016C158 trap_count;
    Sint32_x0016C158 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0016C158, Sint8_x0016C158*, Sint32_x0016C158);
    void* flt_obj;
    Sint8_x0016C158 unk58[0x40];
    Sint32_x0016C158 unk98;
    Sint32_x0016C158 lnkflg;
} ADXSJD_OBJ_x0016C158;
typedef ADXSJD_OBJ_x0016C158* ADXSJD_x0016C158;
typedef struct {
    Sint32_x0016C158 unk0;
    SJ_x0016C158 sj;
} SJX_UNK_0_x0016C158;
typedef struct {
    Sint8_x0016C158 used;
    Sint8_x0016C158 unk1;
    Sint16_x0016C158 unk2;
    SJ_x0016C158 sj;
    void* unk8;
    Sint32_x0016C158 unkC;
    SJX_UNK_0_x0016C158* unk10;
} SJX_OBJ_x0016C158;
typedef SJX_OBJ_x0016C158* SJX_x0016C158;
typedef struct {
    Sint8_x0016C158 used;
    char pad1[3];
    void* unk4;
    SJ_x0016C158 unk8;
    SJX_x0016C158 unkC;
    SJCK_x0016C158 chunk;
} PS2PSJ_OBJ_x0016C158;
typedef PS2PSJ_OBJ_x0016C158* PS2PSJ_x0016C158;
typedef struct {
               Sint8_x0016C158 unk0;
               Sint8_x0016C158 unk1;
               Sint8_x0016C158 unk2;
               SJ_x0016C158 unk4;
               SJ_x0016C158 unk8;
               SJCK_x0016C158 unkC;
               SJCK_x0016C158 unk14;
               sceSifDmaData_x0016C158 dma_data;
               Sint32_x0016C158 unk2C;
               Sint32_x0016C158 unk30;
               Sint32_x0016C158 unk34;
               Sint32_x0016C158 unk38;
               Sint32_x0016C158 unk3C;
} DTR_OBJ_x0016C158;
typedef DTR_OBJ_x0016C158* DTR_x0016C158;
typedef struct {
    Sint8_x0016C158 used;
    Sint32_x0016C158 maxnch;
    PS2PSJ_x0016C158 psj[2];
    DTR_x0016C158 dtr[2];
    SJ_x0016C158 sjo[2];
    void* unk20;
    Sint32_x0016C158 unk24;
    Sint32_x0016C158 unk28;
    Sint32_x0016C158 unk2C;
    Sint8_x0016C158 unk30;
    Sint8_x0016C158 unk31;
    Sint8_x0016C158 num_chan;
    Sint8_x0016C158 unk33;
    Sint32_x0016C158 sfreq;
    Sint32_x0016C158 unk38;
    Sint32_x0016C158 out_vol;
    Sint32_x0016C158 unk40;
    Sint32_x0016C158 pan[2];
    Sint32_x0016C158 unk4C[2];
    Sint32_x0016C158 unk54;
    Sint32_x0016C158 unk58;
    Sint8_x0016C158 unk5C;
    Sint8_x0016C158 unk5D;
    Sint8_x0016C158 unk5E;
    Sint8_x0016C158 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0016C158;
typedef ADXRNA_OBJ_x0016C158* ADXRNA_x0016C158;
typedef struct {
    Sint8_x0016C158 unk0;
    Sint8_x0016C158 stat;
    Sint8_x0016C158 read_flg;
    Sint8_x0016C158 unk3;
    SJ_x0016C158 sj;
    void* cvfs;
    Sint32_x0016C158 unkC;
    Sint32_x0016C158 file_len;
    Sint32_x0016C158 file_sct;
    Sint32_x0016C158 unk18;
    Sint32_x0016C158 unk1C;
    Sint32_x0016C158 unk20;
    SJCK_x0016C158 unk24;
    Sint32_x0016C158 req_rd_size;
    Sint32_x0016C158 eos;
    Uint32_x0016C158 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016C158 unk40;
    Sint8_x0016C158 pause;
    Sint8_x0016C158 unk45;
    Sint8_x0016C158 unk46;
    Sint8_x0016C158 unk47;
    Sint8_x0016C158 unk48;
    Sint8_x0016C158 unk49;
    char pad4A[6];
    const Char8_x0016C158* fname;
    void* dir;
    Sint32_x0016C158 cur_ofst;
    Uint32_x0016C158 unk5C;
} ADXSTM_OBJ_x0016C158;
typedef ADXSTM_OBJ_x0016C158* ADXSTM_x0016C158;
typedef struct _adx_talk_x0016C158 {
                   Sint8_x0016C158 used;
                   Sint8_x0016C158 stat;
                   Sint8_x0016C158 pmode;
                   Sint8_x0016C158 maxnch;
                   ADXSJD_x0016C158 sjd;
                   ADXSTM_x0016C158 stm;
                   ADXRNA_x0016C158 rna;
                   SJ_x0016C158 sjf;
                   SJ_x0016C158 sji;
                   SJ_x0016C158 sjo[(2)];
                   Sint8_x0016C158 *ibuf;
                   Sint32_x0016C158 ibuflen;
                   Sint32_x0016C158 ibufxlen;
                   Sint16_x0016C158 *obuf;
                   Sint32_x0016C158 obufsize;
                   Sint32_x0016C158 obufdist;
                   Sint32_x0016C158 svrfreq;
                   Sint16_x0016C158 maxsct;
                   Sint16_x0016C158 minsct;
                   Sint16_x0016C158 outvol;
                   Sint16_x0016C158 outpan[(2)];
                   Sint16_x0016C158 unk46;
                   Sint32_x0016C158 maxdecsmpl;
                   Sint32_x0016C158 lpcnt;
                   Sint32_x0016C158 lp_skiplen;
                   Sint32_x0016C158 trp;
                   Sint32_x0016C158 wpos;
                   Sint32_x0016C158 mofst;
                   Sint16_x0016C158 ercode;
                   Sint32_x0016C158 edecpos;
                   Sint16_x0016C158 edeccnt;
                   Sint16_x0016C158 eshrtcnt;
                   Sint8_x0016C158 lpflg;
                   Sint8_x0016C158 autorcvr;
                   Sint8_x0016C158 fltmode;
                   Sint8_x0016C158 execflag;
                   Sint8_x0016C158 pstwait_flag;
                   Sint8_x0016C158 pstready_flag;
                   Sint8_x0016C158 pause_flag;
                   void *amp;
                   SJ_x0016C158 ampsji[(2)];
                   SJ_x0016C158 ampsjo[(2)];
                   Sint32_x0016C158 time_ofst;
                   Sint32_x0016C158 lesct;
                   Sint32_x0016C158 trpnsmpl;
                   void *lsc;
                   Sint8_x0016C158 lnkflg;
                   Sint8_x0016C158 rsv;
                   Sint16_x0016C158 rsv2;
                   Uint32_x0016C158 tvofst;
                   Uint32_x0016C158 svcnt;
                   Uint32_x0016C158 decofst;
                   Sint32_x0016C158 flush_nsmpl;
                   Sint8_x0016C158 unkAC;
                   Sint8_x0016C158 padAD[1];
               Char8_x0016C158* unkB0;
               Sint32_x0016C158 padB4;
               Sint32_x0016C158 padB8;
               Sint32_x0016C158 padBC;
               Sint32_x0016C158 padC0;
} ADX_TALK_x0016C158;
typedef ADX_TALK_x0016C158 *ADXT_x0016C158;
extern void ADXT_EntryErrFunc_x0016C158(void (*func)(void *obj, Sint8_x0016C158 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0016C158(ADXT_x0016C158 adxt,
                void (*f)(void *obj, Sint32_x0016C158 ch, void *data, Sint32_x0016C158 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0016C158(Bool_x0016C158 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0016C158(Bool_x0016C158 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0016C158(void (*fn)(void *obj, Char8_x0016C158 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0016C158(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern int AddIntcHandler_x0016C158(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016C158(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x0016C158 ps2rna_dbtbl_x0016C158[1000] __asm__("D_00419130");
extern Sint32_x0016C158 ps2rna_ee_allpause_x0016C158 __asm__("D_0041A104");
extern Sint32_x0016C158 ps2rna_iop_allpause_x0016C158 __asm__("D_0041A108");
extern ADXRNA_OBJ_x0016C158 ps2rna_obj_x0016C158[16] __asm__("D_0041C520");
typedef struct {
    Sint16_x0016C158 unk0;
    void* unk4;
    Sint32_x0016C158 unk8;
    Sint32_x0016C158 unkC;
} PS2RNA_UNK_Item_x0016C158;
typedef struct {
    Sint32_x0016C158 count;
    char pad4[0xC];
    PS2RNA_UNK_Item_x0016C158 items[0];
} PS2RNA_UNK_Header_x0016C158;
void func_0016C158_x0016C158(void* object, void* arg1, Sint32_x0016C158 arg2) __asm__("func_0016C158");
/* ps2rna_sndcbf: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016C158_x0016C158(void* object, void* arg1, Sint32_x0016C158 arg2) {
    ADXRNA_x0016C158 rna;
    Sint32_x0016C158 i;
    Sint32_x0016C158 j;
    Sint32_x0016C158 k;
    PS2RNA_UNK_Header_x0016C158* head = (PS2RNA_UNK_Header_x0016C158*)arg1;
    PS2RNA_UNK_Item_x0016C158* items = head->items;
    PS2RNA_UNK_Item_x0016C158* item;
    j = 0;
    for (i = 0; i < 16; i++) {
        rna = &ps2rna_obj_x0016C158[i];
        if (rna->used != 1) {
            continue;
        }
        if (j == 0x80) {
            goto end;
        }
        if (ps2rna_ee_allpause_x0016C158 != ps2rna_iop_allpause_x0016C158) {
            items[j].unk0 = 0xB;
            items[j].unk4 = 0;
            items[j].unk8 = ps2rna_ee_allpause_x0016C158;
            ps2rna_iop_allpause_x0016C158 = ps2rna_ee_allpause_x0016C158;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->unk5F != rna->unk5E) {
            items[j].unk0 = 8;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = rna->unk5F;
            rna->unk5E = rna->unk5F;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->unk30 == 0 && rna->unk31 == 1) {
            items[j].unk0 = 2;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = rna->unk30;
            rna->unk31 = rna->unk30;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->unk54 != rna->unk58) {
            items[j].unk0 = 0xA;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = rna->unk54;
            rna->unk58 = rna->unk54;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->num_chan != rna->unk33) {
            items[j].unk0 = 3;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = rna->num_chan;
            rna->unk33 = rna->num_chan;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->sfreq != rna->unk38) {
            items[j].unk0 = 4;
            items[j].unk8 = rna->sfreq;
            rna->unk38 = rna->sfreq;
            items[j].unk4 = rna->unk20;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->out_vol != rna->unk40) {
            int y = ps2rna_dbtbl_x0016C158[-rna->out_vol];
            items[j].unk0 = 5;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = 0;
            items[j].unkC = y;
            rna->unk40 = rna->out_vol;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
        if (j == 0x7F) {
            goto end;
        }
        for (k = 0; k < rna->num_chan; k++) {
            if (rna->pan[k] != rna->unk4C[k]) {
                items[j].unk0 = 9;
                items[j].unk4 = rna->unk20;
                items[j].unk8 = k;
                items[j].unkC = rna->pan[k];
                rna->unk4C[k] = rna->pan[k];
                j += 1;
            }
        }
        if (j == 0x80) {
            goto end;
        }
        if (rna->unk30 == 1 && rna->unk31 == 0) {
            items[j].unk0 = 2;
            items[j].unk4 = rna->unk20;
            items[j].unk8 = rna->unk30;
            rna->unk31 = rna->unk30;
            j += 1;
        }
        if (j == 0x80) {
            goto end;
        }
    }
end:
    head->count = j;
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C460);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C730);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C788);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C7E8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C838);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C8A8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C910);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C968);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CA28);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CDA8);
void PS2RNA_Start(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B48);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CED8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CF38);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CFD0);
void func_0016D000(s32 arg0) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        D_0041A104 = arg0;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D030);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D068);
void PS2RNA_ClearBuf(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B68);
    }
}
void PS2RNA_SetPcmType(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B90);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D128);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D160);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D1C8);
typedef int s32_x0016D228;
typedef s32_x0016D228 ptrdiff_t_x0016D228;
typedef unsigned char Uint8_x0016D228;
typedef char Sint8_x0016D228;
typedef unsigned short Uint16_x0016D228;
typedef signed short Sint16_x0016D228;
typedef unsigned int Uint32_x0016D228;
typedef signed int Sint32_x0016D228;
typedef Sint32_x0016D228 Bool_x0016D228;
typedef char Char8_x0016D228;
typedef struct _UUID_x0016D228 {
    Uint32_x0016D228 Data1;
    Uint16_x0016D228 Data2;
    Uint16_x0016D228 Data3;
    Uint8_x0016D228 Data4[8];
} UUID_x0016D228;
typedef struct {
        Sint8_x0016D228 *data;
        Sint32_x0016D228 len;
} SJCK_x0016D228;
typedef struct {
        struct _sj_vtbl_x0016D228 *vtbl;
} SJ_OBJ_x0016D228;
typedef SJ_OBJ_x0016D228 *SJ_x0016D228;
typedef struct _sj_vtbl_x0016D228 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016D228 sj);
        UUID_x0016D228 *(*GetUuid)(SJ_x0016D228 sj);
        void (*Reset)(SJ_x0016D228 sj);
        void (*GetChunk)(SJ_x0016D228 sj, Sint32_x0016D228 id, Sint32_x0016D228 nbyte, SJCK_x0016D228 *ck);
        void (*UngetChunk)(SJ_x0016D228 sj, Sint32_x0016D228 id, SJCK_x0016D228 *ck);
        void (*PutChunk)(SJ_x0016D228 sj, Sint32_x0016D228 id, SJCK_x0016D228 *ck);
        Sint32_x0016D228 (*GetNumData)(SJ_x0016D228 sj, Sint32_x0016D228 id);
        Sint32_x0016D228 (*IsGetChunk)(SJ_x0016D228 sj, Sint32_x0016D228 id, Sint32_x0016D228 nbyte, Sint32_x0016D228 *rbyte);
        void (*EntryErrFunc)(SJ_x0016D228 sj,
                                        void (*func)(void *obj, Sint32_x0016D228 ecode), void *obj);
} SJ_IF_x0016D228;
extern int* sceCdCallback_x0016D228(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0016D228(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0016D228;
typedef struct {
               Sint16_x0016D228 unk0;
               Sint16_x0016D228 unk2;
               Sint16_x0016D228 unk4;
               Sint16_x0016D228 unk6;
} ADXPD_OBJ_SUB_x0016D228;
typedef struct {
               Sint32_x0016D228 used;
               Sint32_x0016D228 unk4;
               Sint32_x0016D228 mode;
               Sint32_x0016D228 stat;
               Sint32_x0016D228 num_blk;
               Sint32_x0016D228 unk14;
               Sint32_x0016D228 unk18;
               Sint32_x0016D228 unk1C;
               Sint32_x0016D228 unk20;
               Sint32_x0016D228 unk24;
               ADXPD_OBJ_SUB_x0016D228 unk28;
               Sint16_x0016D228 unk30;
               Sint16_x0016D228 unk32;
               Sint16_x0016D228 unk34;
               Sint16_x0016D228 unk36;
               Sint16_x0016D228 unk38;
               Sint16_x0016D228 unk3A;
} ADXPD_OBJ_x0016D228;
typedef ADXPD_OBJ_x0016D228* ADXPD_x0016D228;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0016D228;
typedef struct {
               Sint32_x0016D228 unk0;
               Sint32_x0016D228 unk4;
               Sint32_x0016D228 unk8;
               Sint32_x0016D228 unkC;
               Sint32_x0016D228 unk10;
               void* unk14;
               Sint32_x0016D228 unk18;
               Sint32_x0016D228 unk1C;
               Sint32_x0016D228 unk20;
               Sint32_x0016D228 unk24;
               Sint32_x0016D228 unk28;
} ADXB_UNK_x0016D228;
typedef struct {
               Sint16_x0016D228 unk0;
               Sint16_x0016D228 unk2;
               Sint32_x0016D228 stat;
               ADXPD_x0016D228 adxpd;
               Sint8_x0016D228 encoding_type;
               Sint8_x0016D228 sample_bitdepth;
               Sint8_x0016D228 channel_count;
               Sint8_x0016D228 block_size;
               Sint32_x0016D228 samples_per_block;
               Sint32_x0016D228 sample_rate;
               Sint32_x0016D228 total_samples;
               Sint16_x0016D228 unk1C;
               char pad1E[2];
               Sint32_x0016D228 unk20;
               Sint16_x0016D228 unk24;
               Sint16_x0016D228 unk26;
               Sint32_x0016D228 unk28;
               Sint32_x0016D228 unk2C;
               Sint32_x0016D228 unk30;
               Sint32_x0016D228 unk34;
               Sint32_x0016D228 unk38;
               void* unk3C;
               Sint32_x0016D228 unk40;
               Sint32_x0016D228 unk44;
               ADXB_UNK_x0016D228 unk48;
               Sint32_x0016D228 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0016D228*, Sint32_x0016D228*, Sint32_x0016D228*);
               void* object;
               void (*add_wr)(void*, Sint32_x0016D228, Sint32_x0016D228);
               Sint32_x0016D228 unk84;
               Sint32_x0016D228 unk88;
               Sint32_x0016D228 unk8C;
               Sint32_x0016D228 dec_num_sample;
               Sint32_x0016D228 dec_data_len;
               Sint16_x0016D228 format;
               Sint16_x0016D228 unk9A;
               Sint16_x0016D228 unk9C;
               Sint16_x0016D228 unk9E;
               Sint16_x0016D228 unkA0;
               char padA2[0xE];
               Sint32_x0016D228 unkB0;
               Sint32_x0016D228 ahx_dec_samples;
               Sint32_x0016D228 ahx_dec_frames;
               Sint32_x0016D228 unkBC;
               Sint32_x0016D228 ac3_dec_samples;
               Sint32_x0016D228 ac3_dec_frames;
               Sint32_x0016D228 unkC8;
               ADX_UNK_x0016D228 unkCC;
               Sint16_x0016D228 unkDC;
               Sint16_x0016D228 unkDE[2];
               char padE2[2];
               Sint32_x0016D228 unkE4;
               char padE8[8];
} ADXB_OBJ_x0016D228;
typedef ADXB_OBJ_x0016D228* ADXB_x0016D228;
typedef struct {
    Sint8_x0016D228 used;
    Sint8_x0016D228 state;
    Sint8_x0016D228 maxnch;
    Sint8_x0016D228 unk3;
    ADXB_x0016D228 adxb;
    SJ_x0016D228 sji;
    SJ_x0016D228 sjo[2];
    SJCK_x0016D228 unk14;
    SJCK_x0016D228 chunks[2];
    Sint32_x0016D228 unk2C;
    Sint32_x0016D228 unk30;
    Sint32_x0016D228 unk34;
    Sint32_x0016D228 unk38;
    Sint32_x0016D228 trap_num_samples;
    Sint32_x0016D228 trap_count;
    Sint32_x0016D228 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0016D228, Sint8_x0016D228*, Sint32_x0016D228);
    void* flt_obj;
    Sint8_x0016D228 unk58[0x40];
    Sint32_x0016D228 unk98;
    Sint32_x0016D228 lnkflg;
} ADXSJD_OBJ_x0016D228;
typedef ADXSJD_OBJ_x0016D228* ADXSJD_x0016D228;
typedef struct {
    Sint32_x0016D228 unk0;
    SJ_x0016D228 sj;
} SJX_UNK_0_x0016D228;
typedef struct {
    Sint8_x0016D228 used;
    Sint8_x0016D228 unk1;
    Sint16_x0016D228 unk2;
    SJ_x0016D228 sj;
    void* unk8;
    Sint32_x0016D228 unkC;
    SJX_UNK_0_x0016D228* unk10;
} SJX_OBJ_x0016D228;
typedef SJX_OBJ_x0016D228* SJX_x0016D228;
typedef struct {
    Sint8_x0016D228 used;
    char pad1[3];
    void* unk4;
    SJ_x0016D228 unk8;
    SJX_x0016D228 unkC;
    SJCK_x0016D228 chunk;
} PS2PSJ_OBJ_x0016D228;
typedef PS2PSJ_OBJ_x0016D228* PS2PSJ_x0016D228;
typedef struct {
               Sint8_x0016D228 unk0;
               Sint8_x0016D228 unk1;
               Sint8_x0016D228 unk2;
               SJ_x0016D228 unk4;
               SJ_x0016D228 unk8;
               SJCK_x0016D228 unkC;
               SJCK_x0016D228 unk14;
               sceSifDmaData_x0016D228 dma_data;
               Sint32_x0016D228 unk2C;
               Sint32_x0016D228 unk30;
               Sint32_x0016D228 unk34;
               Sint32_x0016D228 unk38;
               Sint32_x0016D228 unk3C;
} DTR_OBJ_x0016D228;
typedef DTR_OBJ_x0016D228* DTR_x0016D228;
typedef struct {
    Sint8_x0016D228 used;
    Sint32_x0016D228 maxnch;
    PS2PSJ_x0016D228 psj[2];
    DTR_x0016D228 dtr[2];
    SJ_x0016D228 sjo[2];
    void* unk20;
    Sint32_x0016D228 unk24;
    Sint32_x0016D228 unk28;
    Sint32_x0016D228 unk2C;
    Sint8_x0016D228 unk30;
    Sint8_x0016D228 unk31;
    Sint8_x0016D228 num_chan;
    Sint8_x0016D228 unk33;
    Sint32_x0016D228 sfreq;
    Sint32_x0016D228 unk38;
    Sint32_x0016D228 out_vol;
    Sint32_x0016D228 unk40;
    Sint32_x0016D228 pan[2];
    Sint32_x0016D228 unk4C[2];
    Sint32_x0016D228 unk54;
    Sint32_x0016D228 unk58;
    Sint8_x0016D228 unk5C;
    Sint8_x0016D228 unk5D;
    Sint8_x0016D228 unk5E;
    Sint8_x0016D228 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0016D228;
typedef ADXRNA_OBJ_x0016D228* ADXRNA_x0016D228;
typedef struct {
    Sint8_x0016D228 unk0;
    Sint8_x0016D228 stat;
    Sint8_x0016D228 read_flg;
    Sint8_x0016D228 unk3;
    SJ_x0016D228 sj;
    void* cvfs;
    Sint32_x0016D228 unkC;
    Sint32_x0016D228 file_len;
    Sint32_x0016D228 file_sct;
    Sint32_x0016D228 unk18;
    Sint32_x0016D228 unk1C;
    Sint32_x0016D228 unk20;
    SJCK_x0016D228 unk24;
    Sint32_x0016D228 req_rd_size;
    Sint32_x0016D228 eos;
    Uint32_x0016D228 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0016D228 unk40;
    Sint8_x0016D228 pause;
    Sint8_x0016D228 unk45;
    Sint8_x0016D228 unk46;
    Sint8_x0016D228 unk47;
    Sint8_x0016D228 unk48;
    Sint8_x0016D228 unk49;
    char pad4A[6];
    const Char8_x0016D228* fname;
    void* dir;
    Sint32_x0016D228 cur_ofst;
    Uint32_x0016D228 unk5C;
} ADXSTM_OBJ_x0016D228;
typedef ADXSTM_OBJ_x0016D228* ADXSTM_x0016D228;
void DTR_Start_x0016D228(DTR_x0016D228 dtr) __asm__("func_00165750");
Sint32_x0016D228 DTR_GetStat_x0016D228(DTR_x0016D228 dtr) __asm__("func_001654F0");
typedef struct _adx_talk_x0016D228 {
                   Sint8_x0016D228 used;
                   Sint8_x0016D228 stat;
                   Sint8_x0016D228 pmode;
                   Sint8_x0016D228 maxnch;
                   ADXSJD_x0016D228 sjd;
                   ADXSTM_x0016D228 stm;
                   ADXRNA_x0016D228 rna;
                   SJ_x0016D228 sjf;
                   SJ_x0016D228 sji;
                   SJ_x0016D228 sjo[(2)];
                   Sint8_x0016D228 *ibuf;
                   Sint32_x0016D228 ibuflen;
                   Sint32_x0016D228 ibufxlen;
                   Sint16_x0016D228 *obuf;
                   Sint32_x0016D228 obufsize;
                   Sint32_x0016D228 obufdist;
                   Sint32_x0016D228 svrfreq;
                   Sint16_x0016D228 maxsct;
                   Sint16_x0016D228 minsct;
                   Sint16_x0016D228 outvol;
                   Sint16_x0016D228 outpan[(2)];
                   Sint16_x0016D228 unk46;
                   Sint32_x0016D228 maxdecsmpl;
                   Sint32_x0016D228 lpcnt;
                   Sint32_x0016D228 lp_skiplen;
                   Sint32_x0016D228 trp;
                   Sint32_x0016D228 wpos;
                   Sint32_x0016D228 mofst;
                   Sint16_x0016D228 ercode;
                   Sint32_x0016D228 edecpos;
                   Sint16_x0016D228 edeccnt;
                   Sint16_x0016D228 eshrtcnt;
                   Sint8_x0016D228 lpflg;
                   Sint8_x0016D228 autorcvr;
                   Sint8_x0016D228 fltmode;
                   Sint8_x0016D228 execflag;
                   Sint8_x0016D228 pstwait_flag;
                   Sint8_x0016D228 pstready_flag;
                   Sint8_x0016D228 pause_flag;
                   void *amp;
                   SJ_x0016D228 ampsji[(2)];
                   SJ_x0016D228 ampsjo[(2)];
                   Sint32_x0016D228 time_ofst;
                   Sint32_x0016D228 lesct;
                   Sint32_x0016D228 trpnsmpl;
                   void *lsc;
                   Sint8_x0016D228 lnkflg;
                   Sint8_x0016D228 rsv;
                   Sint16_x0016D228 rsv2;
                   Uint32_x0016D228 tvofst;
                   Uint32_x0016D228 svcnt;
                   Uint32_x0016D228 decofst;
                   Sint32_x0016D228 flush_nsmpl;
                   Sint8_x0016D228 unkAC;
                   Sint8_x0016D228 padAD[1];
               Char8_x0016D228* unkB0;
               Sint32_x0016D228 padB4;
               Sint32_x0016D228 padB8;
               Sint32_x0016D228 padBC;
               Sint32_x0016D228 padC0;
} ADX_TALK_x0016D228;
typedef ADX_TALK_x0016D228 *ADXT_x0016D228;
extern void ADXT_EntryErrFunc_x0016D228(void (*func)(void *obj, Sint8_x0016D228 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0016D228(ADXT_x0016D228 adxt,
                void (*f)(void *obj, Sint32_x0016D228 ch, void *data, Sint32_x0016D228 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0016D228(Bool_x0016D228 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0016D228(Bool_x0016D228 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0016D228(void (*fn)(void *obj, Char8_x0016D228 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0016D228(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern int AddIntcHandler_x0016D228(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016D228(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_0016D228_x0016D228(ADXRNA_x0016D228 rna) __asm__("func_0016D228");
/* PS2RNA_ExecHndl: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016D228_x0016D228(ADXRNA_x0016D228 rna) {
    SJCK_x0016D228 chunk;
    Sint32_x0016D228 var_s2;
    Sint32_x0016D228 i;
    if (rna->unk5C != 1) {
        return;
    }
    var_s2 = 0;
    for (i = 0; i < rna->num_chan; i++) {
        if (DTR_GetStat_x0016D228(rna->dtr[i]) == 1) {
            continue;
        }
        if ((*(rna->psj[i]->unk8)->vtbl->GetNumData)(rna->psj[i]->unk8, 0) != rna->unk2C) {
            continue;
        }
        var_s2 += 1;
    }
    if (var_s2 != rna->num_chan) {
        return;
    }
    i = 0;
    if (var_s2 <= 0) {
        return;
    }
    for (i = 0; i < rna->num_chan; i++) {
        (*(rna->psj[i]->unk8)->vtbl->GetChunk)(rna->psj[i]->unk8, 0, (0x7fffffff), &chunk);
        (*(rna->psj[i]->unk8)->vtbl->PutChunk)(rna->psj[i]->unk8, 0, &chunk);
        (*(rna->psj[i]->unk8)->vtbl->GetChunk)(rna->psj[i]->unk8, 0, (0x7fffffff), &chunk);
        if (chunk.len != rna->unk2C) {
            while (1) {}
        }
        (*(rna->psj[i]->unk8)->vtbl->PutChunk)(rna->psj[i]->unk8, 0, &chunk);
        rna->unk5F = 0;
        DTR_Start_x0016D228(rna->dtr[i]);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D3E8);
void PS2RNA_SetStartSmpl(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464BB8);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D4D8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D508);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D5E0);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D620);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D670);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_SetBitPerSmpl);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_GetStartSmpl);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D798);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D7C8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D7F8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D830);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D860);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_IsOverflow);
void PS2RNA_ClearOverflow(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464C80);
    }
}
void func_0016D918(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_DiscardData);
void PS2RNA_SetTotalNumSmpl(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464CD0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_SetStmHdInfo);
