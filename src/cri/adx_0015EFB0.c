#include "common.h"

s32 func_00159C80(s32, s32);                    /* extern */
s32 func_00159D58(s32, s32 *, void *);      /* extern */
s32 func_00159D68(s32, s32);                    /* extern */
s32 func_00159D78(s32, s32);                /* extern */
s32 func_00159D88(s32, s32);                    /* extern */
s32 func_00159E88(s32);                             /* extern */
s32 func_00159EA0(s32);                             /* extern */
s32 func_00159ED0(s32);                             /* extern */
s32 func_0015A058(s32);                         /* extern */
extern s32 adxt_trap_entry;

s32 func_00159CD0(s32);                         /* extern */

s32 func_00159CB8();                            /* extern */

s32 func_00159CA0(s32);                         /* extern */
extern s32 D_00461F68;

s32 func_00153028();                            /* extern */

s32 func_00159C78(s32);                             /* extern */
extern s32 D_00461F38;

s32 func_00159D48(s32);                         /* extern */

s32 func_00159C90(s32);                         /* extern */

s32 func_00159CE8(s32);                         /* extern */

s32 func_001540F8();                            /* extern */

s32 func_00158E30(s32);                         /* extern */

s32 func_00158AA8();                            /* extern */

s32 func_00158A90();                            /* extern */

extern s32 D_00461F08;

extern s32 D_00461EA8;

extern s32 D_00461E40;

extern s32 D_00461DE0;

extern s32 D_00461D80;

s32 func_0015F5F0();                            /* extern */

extern s32 D_00461D50;

extern s32 D_00461CB8;

extern s32 D_00461BC8;

extern s32 D_00411164;
extern s32 D_00411168;

s32 func_00159FD8(s32);                         /* extern */

extern s32 D_00461B98;

extern s32 D_00461B38;

s32 func_001589C0(s32);                         /* extern */
s16 func_00158A38(s32);                             /* extern */
extern s32 D_00461B08;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461AD8;

s16 ADXT_GetOutPan(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        ADXERR_CallErrFunc1(&D_00461AD8);
        return 0;
    }
    return *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x42);
}
void ADXT_SetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B08);
        return;
    }
    func_001589C0(*(s32 *)((u8 *)arg0 + 0xC));
    *(s16 *)((u8 *)arg0 + 0x46) = func_00158A38(*(s32 *)((u8 *)arg0 + 0xC));
}
s16 ADXT_GetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B38);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x46);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetOutVol);
s16 ADXT_GetOutVol(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B98);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x40);
}
s32 func_00159F18_x0015F110(s32) __asm__("func_00159F18");
void func_0015F110_x0015F110(u8 *arg0) __asm__("func_0015F110");
void func_0015F110_x0015F110(u8 *arg0)
{
 do { func_00159F18_x0015F110(*((s32 *) (((u8 *) arg0) + 4))); } while (0);
}
s32 fn_80041460_x0015F130(s32) __asm__("fn_80041460");
void func_0015F130_x0015F130(u8 *arg0) __asm__("func_0015F130");
void func_0015F130_x0015F130(u8 *arg0)
{
 do { fn_80041460_x0015F130(*((s32 *) (((u8 *) arg0) + 4))); } while (0);
}
void func_0015F150(u8 *arg0) {
    func_00159FD8(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F168);
void func_0015F1B0(s32 arg0) {
    D_00411164 = arg0;
    D_00411168 = arg0;
}
void ADXT_SetSvrFreq(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461BC8);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    D_00411168 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetReloadTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_ResetReloadTime);
s32 ADXERR_CallErrFunc1_x0015F330(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_0015D4A8_x0015F330(s32, s32, s32) __asm__("func_0015D4A8");
extern s32 D_00461C58_x0015F330 __asm__("D_00461C58");
void ADXT_SetReloadSct_x0015F330(u8 *arg0, int arg1) __asm__("ADXT_SetReloadSct");
void ADXT_SetReloadSct_x0015F330(u8 *arg0, int arg1)
{
  s32 temp_v0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F330(&D_00461C58_x0015F330);
    return;
  }
  temp_v0 = *((s32 *) (8 + ((u8 *) arg0)));
  *((s16 *) (((u8 *) arg0) + 0x3E)) = arg1;
  if (temp_v0 != 0)
  {
    func_0015D4A8_x0015F330(*((s32 *) (((u8 *) arg0) + 8)), ((s32) (arg1 << 0x10)) >> 5, (*((s16 *) (((u8 *) arg0) + 0x3C))) << 0xB);
  }
}
s16 func_0015F388(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x3E);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_GetNumSctIbuf);
s32 ADXT_GetNumSmplObuf(s32 arg0, s32 arg1) {
    u32 temp_v0;
    u8 **temp_v0_2;

    if ((arg0 == 0) || (arg1 < 0)) {
        ADXERR_CallErrFunc1(&D_00461CB8);
        return -1;
    }
    temp_v0_2 = *(u8 ***)((u8 *)((arg1 * 4) + arg0) + 0x18);
    if (temp_v0_2 != NULL) {
        temp_v0 = (*(u32 (**)(u8 **, s32))((u8 *)(*temp_v0_2) + 0x24))(temp_v0_2, 1);
        return (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_GetIbufRemainTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_IsIbufSafety);
void func_0015F5B0(u8 *arg0, s8 arg1) {
    *(s8 *)((u8 *)arg0 + 0x6D) = arg1;
}
s32 ADXT_IsCompleted(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D50);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1) == 5;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015F5F0);
void func_0015F6E0(void) {
    func_0015F5F0();
}
s16 ADXT_GetErrCode(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D80);
        return -1;
    }
    return *(s16 *)((u8 *)arg0 + 0x60);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_ClearErrCode);
s32 ADXT_GetLpCnt(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461DE0);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x4C);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetLpFlg);
s32 ADXT_GetInputSj(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461E40);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_SetWaitPlayStart);
s8 ADXT_IsReadyPlayStart(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461EA8);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 0x71);
}
typedef int s32_x0015F858;
typedef s32_x0015F858 ptrdiff_t_x0015F858;
typedef unsigned char Uint8_x0015F858;
typedef char Sint8_x0015F858;
typedef unsigned short Uint16_x0015F858;
typedef signed short Sint16_x0015F858;
typedef unsigned int Uint32_x0015F858;
typedef signed int Sint32_x0015F858;
typedef float Float32_x0015F858;
typedef Sint32_x0015F858 Bool_x0015F858;
typedef char Char8_x0015F858;
typedef struct _UUID_x0015F858 {
    Uint32_x0015F858 Data1;
    Uint16_x0015F858 Data2;
    Uint16_x0015F858 Data3;
    Uint8_x0015F858 Data4[8];
} UUID_x0015F858;
typedef struct {
        Sint8_x0015F858 *data;
        Sint32_x0015F858 len;
} SJCK_x0015F858;
typedef struct {
        struct _sj_vtbl_x0015F858 *vtbl;
} SJ_OBJ_x0015F858;
typedef SJ_OBJ_x0015F858 *SJ_x0015F858;
typedef struct _sj_vtbl_x0015F858 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015F858 sj);
        UUID_x0015F858 *(*GetUuid)(SJ_x0015F858 sj);
        void (*Reset)(SJ_x0015F858 sj);
        void (*GetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, Sint32_x0015F858 nbyte, SJCK_x0015F858 *ck);
        void (*UngetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, SJCK_x0015F858 *ck);
        void (*PutChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, SJCK_x0015F858 *ck);
        Sint32_x0015F858 (*GetNumData)(SJ_x0015F858 sj, Sint32_x0015F858 id);
        Sint32_x0015F858 (*IsGetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, Sint32_x0015F858 nbyte, Sint32_x0015F858 *rbyte);
        void (*EntryErrFunc)(SJ_x0015F858 sj,
                                        void (*func)(void *obj, Sint32_x0015F858 ecode), void *obj);
} SJ_IF_x0015F858;
extern int* sceCdCallback_x0015F858(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015F858(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015F858;
typedef struct {
               Sint16_x0015F858 unk0;
               Sint16_x0015F858 unk2;
               Sint16_x0015F858 unk4;
               Sint16_x0015F858 unk6;
} ADXPD_OBJ_SUB_x0015F858;
typedef struct {
               Sint32_x0015F858 used;
               Sint32_x0015F858 unk4;
               Sint32_x0015F858 mode;
               Sint32_x0015F858 stat;
               Sint32_x0015F858 num_blk;
               Sint32_x0015F858 unk14;
               Sint32_x0015F858 unk18;
               Sint32_x0015F858 unk1C;
               Sint32_x0015F858 unk20;
               Sint32_x0015F858 unk24;
               ADXPD_OBJ_SUB_x0015F858 unk28;
               Sint16_x0015F858 unk30;
               Sint16_x0015F858 unk32;
               Sint16_x0015F858 unk34;
               Sint16_x0015F858 unk36;
               Sint16_x0015F858 unk38;
               Sint16_x0015F858 unk3A;
} ADXPD_OBJ_x0015F858;
typedef ADXPD_OBJ_x0015F858* ADXPD_x0015F858;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015F858;
typedef struct {
               Sint32_x0015F858 unk0;
               Sint32_x0015F858 unk4;
               Sint32_x0015F858 unk8;
               Sint32_x0015F858 unkC;
               Sint32_x0015F858 unk10;
               void* unk14;
               Sint32_x0015F858 unk18;
               Sint32_x0015F858 unk1C;
               Sint32_x0015F858 unk20;
               Sint32_x0015F858 unk24;
               Sint32_x0015F858 unk28;
} ADXB_UNK_x0015F858;
typedef struct {
               Sint16_x0015F858 unk0;
               Sint16_x0015F858 unk2;
               Sint32_x0015F858 stat;
               ADXPD_x0015F858 adxpd;
               Sint8_x0015F858 encoding_type;
               Sint8_x0015F858 sample_bitdepth;
               Sint8_x0015F858 channel_count;
               Sint8_x0015F858 block_size;
               Sint32_x0015F858 samples_per_block;
               Sint32_x0015F858 sample_rate;
               Sint32_x0015F858 total_samples;
               Sint16_x0015F858 unk1C;
               char pad1E[2];
               Sint32_x0015F858 unk20;
               Sint16_x0015F858 unk24;
               Sint16_x0015F858 unk26;
               Sint32_x0015F858 unk28;
               Sint32_x0015F858 unk2C;
               Sint32_x0015F858 unk30;
               Sint32_x0015F858 unk34;
               Sint32_x0015F858 unk38;
               void* unk3C;
               Sint32_x0015F858 unk40;
               Sint32_x0015F858 unk44;
               ADXB_UNK_x0015F858 unk48;
               Sint32_x0015F858 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015F858*, Sint32_x0015F858*, Sint32_x0015F858*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015F858, Sint32_x0015F858);
               Sint32_x0015F858 unk84;
               Sint32_x0015F858 unk88;
               Sint32_x0015F858 unk8C;
               Sint32_x0015F858 dec_num_sample;
               Sint32_x0015F858 dec_data_len;
               Sint16_x0015F858 format;
               Sint16_x0015F858 unk9A;
               Sint16_x0015F858 unk9C;
               Sint16_x0015F858 unk9E;
               Sint16_x0015F858 unkA0;
               char padA2[0xE];
               Sint32_x0015F858 unkB0;
               Sint32_x0015F858 ahx_dec_samples;
               Sint32_x0015F858 ahx_dec_frames;
               Sint32_x0015F858 unkBC;
               Sint32_x0015F858 ac3_dec_samples;
               Sint32_x0015F858 ac3_dec_frames;
               Sint32_x0015F858 unkC8;
               ADX_UNK_x0015F858 unkCC;
               Sint16_x0015F858 unkDC;
               Sint16_x0015F858 unkDE[2];
               char padE2[2];
               Sint32_x0015F858 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015F858;
typedef ADXB_OBJ_x0015F858* ADXB_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint8_x0015F858 state;
    Sint8_x0015F858 maxnch;
    Sint8_x0015F858 unk3;
    ADXB_x0015F858 adxb;
    SJ_x0015F858 sji;
    SJ_x0015F858 sjo[2];
    SJCK_x0015F858 unk14;
    SJCK_x0015F858 chunks[2];
    Sint32_x0015F858 unk2C;
    Sint32_x0015F858 unk30;
    Sint32_x0015F858 unk34;
    Sint32_x0015F858 unk38;
    Sint32_x0015F858 trap_num_samples;
    Sint32_x0015F858 trap_count;
    Sint32_x0015F858 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015F858, Sint8_x0015F858*, Sint32_x0015F858);
    void* flt_obj;
    Sint8_x0015F858 unk58[0x40];
    Sint32_x0015F858 unk98;
    Sint32_x0015F858 lnkflg;
} ADXSJD_OBJ_x0015F858;
typedef ADXSJD_OBJ_x0015F858* ADXSJD_x0015F858;
typedef struct {
    Sint32_x0015F858 unk0;
    SJ_x0015F858 sj;
} SJX_UNK_0_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint8_x0015F858 unk1;
    Sint16_x0015F858 unk2;
    SJ_x0015F858 sj;
    void* unk8;
    Sint32_x0015F858 unkC;
    SJX_UNK_0_x0015F858* unk10;
} SJX_OBJ_x0015F858;
typedef SJX_OBJ_x0015F858* SJX_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    char pad1[3];
    void* unk4;
    SJ_x0015F858 unk8;
    SJX_x0015F858 unkC;
    SJCK_x0015F858 chunk;
} PS2PSJ_OBJ_x0015F858;
typedef PS2PSJ_OBJ_x0015F858* PS2PSJ_x0015F858;
typedef struct {
               Sint8_x0015F858 unk0;
               Sint8_x0015F858 unk1;
               Sint8_x0015F858 unk2;
               SJ_x0015F858 unk4;
               SJ_x0015F858 unk8;
               SJCK_x0015F858 unkC;
               SJCK_x0015F858 unk14;
               sceSifDmaData_x0015F858 dma_data;
               Sint32_x0015F858 unk2C;
               Sint32_x0015F858 unk30;
               Sint32_x0015F858 unk34;
               Sint32_x0015F858 unk38;
               Sint32_x0015F858 unk3C;
} DTR_OBJ_x0015F858;
typedef DTR_OBJ_x0015F858* DTR_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint32_x0015F858 maxnch;
    PS2PSJ_x0015F858 psj[2];
    DTR_x0015F858 dtr[2];
    SJ_x0015F858 sjo[2];
    void* unk20;
    Sint32_x0015F858 unk24;
    Sint32_x0015F858 unk28;
    Sint32_x0015F858 unk2C;
    Sint8_x0015F858 unk30;
    Sint8_x0015F858 unk31;
    Sint8_x0015F858 num_chan;
    Sint8_x0015F858 unk33;
    Sint32_x0015F858 sfreq;
    Sint32_x0015F858 unk38;
    Sint32_x0015F858 out_vol;
    Sint32_x0015F858 unk40;
    Sint32_x0015F858 pan[2];
    Sint32_x0015F858 unk4C[2];
    Sint32_x0015F858 unk54;
    Sint32_x0015F858 unk58;
    Sint8_x0015F858 unk5C;
    Sint8_x0015F858 unk5D;
    Sint8_x0015F858 unk5E;
    Sint8_x0015F858 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015F858;
typedef ADXRNA_OBJ_x0015F858* ADXRNA_x0015F858;
typedef struct {
    Sint8_x0015F858 unk0;
    Sint8_x0015F858 stat;
    Sint8_x0015F858 read_flg;
    Sint8_x0015F858 unk3;
    SJ_x0015F858 sj;
    void* cvfs;
    Sint32_x0015F858 unkC;
    Sint32_x0015F858 file_len;
    Sint32_x0015F858 file_sct;
    Sint32_x0015F858 unk18;
    Sint32_x0015F858 unk1C;
    Sint32_x0015F858 unk20;
    SJCK_x0015F858 unk24;
    Sint32_x0015F858 req_rd_size;
    Sint32_x0015F858 eos;
    Uint32_x0015F858 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015F858 unk40;
    Sint8_x0015F858 pause;
    Sint8_x0015F858 unk45;
    Sint8_x0015F858 unk46;
    Sint8_x0015F858 unk47;
    Sint8_x0015F858 unk48;
    Sint8_x0015F858 unk49;
    char pad4A[6];
    const Char8_x0015F858* fname;
    void* dir;
    Sint32_x0015F858 cur_ofst;
    Uint32_x0015F858 unk5C;
} ADXSTM_OBJ_x0015F858;
typedef ADXSTM_OBJ_x0015F858* ADXSTM_x0015F858;
void ADXCRS_Lock_x0015F858() __asm__("func_00152508");
void ADXCRS_Unlock_x0015F858() __asm__("func_00152520");
void ADXERR_CallErrFunc1_x0015F858(Sint8_x0015F858*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x0015F858 {
                   Sint8_x0015F858 used;
                   Sint8_x0015F858 stat;
                   Sint8_x0015F858 pmode;
                   Sint8_x0015F858 maxnch;
                   ADXSJD_x0015F858 sjd;
                   ADXSTM_x0015F858 stm;
                   ADXRNA_x0015F858 rna;
                   SJ_x0015F858 sjf;
                   SJ_x0015F858 sji;
                   SJ_x0015F858 sjo[(2)];
                   Sint8_x0015F858 *ibuf;
                   Sint32_x0015F858 ibuflen;
                   Sint32_x0015F858 ibufxlen;
                   Sint16_x0015F858 *obuf;
                   Sint32_x0015F858 obufsize;
                   Sint32_x0015F858 obufdist;
                   Sint32_x0015F858 svrfreq;
                   Sint16_x0015F858 maxsct;
                   Sint16_x0015F858 minsct;
                   Sint16_x0015F858 outvol;
                   Sint16_x0015F858 outpan[(2)];
                   Sint16_x0015F858 unk46;
                   Sint32_x0015F858 maxdecsmpl;
                   Sint32_x0015F858 lpcnt;
                   Sint32_x0015F858 lp_skiplen;
                   Sint32_x0015F858 trp;
                   Sint32_x0015F858 wpos;
                   Sint32_x0015F858 mofst;
                   Sint16_x0015F858 ercode;
                   Sint32_x0015F858 edecpos;
                   Sint16_x0015F858 edeccnt;
                   Sint16_x0015F858 eshrtcnt;
                   Sint8_x0015F858 lpflg;
                   Sint8_x0015F858 autorcvr;
                   Sint8_x0015F858 fltmode;
                   Sint8_x0015F858 execflag;
                   Sint8_x0015F858 pstwait_flag;
                   Sint8_x0015F858 pstready_flag;
                   Sint8_x0015F858 pause_flag;
                   void *amp;
                   SJ_x0015F858 ampsji[(2)];
                   SJ_x0015F858 ampsjo[(2)];
                   Sint32_x0015F858 time_ofst;
                   Sint32_x0015F858 lesct;
                   Sint32_x0015F858 trpnsmpl;
                   void *lsc;
                   Sint8_x0015F858 lnkflg;
                   Sint8_x0015F858 rsv;
                   Sint16_x0015F858 rsv2;
                   Uint32_x0015F858 tvofst;
                   Uint32_x0015F858 svcnt;
                   Uint32_x0015F858 decofst;
                   Sint32_x0015F858 flush_nsmpl;
                   Sint8_x0015F858 unkAC;
                   Sint8_x0015F858 padAD[1];
               Char8_x0015F858* unkB0;
               Sint32_x0015F858 padB4;
               Sint32_x0015F858 padB8;
               Sint32_x0015F858 padBC;
               Sint32_x0015F858 padC0;
} ADX_TALK_x0015F858;
typedef ADX_TALK_x0015F858 *ADXT_x0015F858;
void ADXT_GetTime_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 *ncount, Sint32_x0015F858 *tscale) __asm__("ADXT_GetTime");
extern void ADXT_EntryErrFunc_x0015F858(void (*func)(void *obj, Sint8_x0015F858 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015F858(ADXT_x0015F858 adxt,
                void (*f)(void *obj, Sint32_x0015F858 ch, void *data, Sint32_x0015F858 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015F858(Bool_x0015F858 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015F858(Bool_x0015F858 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015F858(void (*fn)(void *obj, Char8_x0015F858 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015F858(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015F858 adxt_vsync_cnt_x0015F858 __asm__("D_00404C14");
extern void ADXRNA_EntryErrFunc_x0015F858(void (*)(void*, Char8_x0015F858*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXRNA_SetPlaySw_x0015F858(ADXRNA_x0015F858, Sint32_x0015F858) __asm__("func_00158898");
extern void ADXSJD_EntryTrapFunc_x0015F858(ADXSJD_x0015F858 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern Sint32_x0015F858 adxt_time_mode_x0015F858 __asm__("D_0041115C");
extern void (*ahxdetachfunc_x0015F858)(ADXT_x0015F858) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015F858)(ADXT_x0015F858) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015F858)(ADXT_x0015F858) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015F858)(ADXT_x0015F858) __asm__("pl2detachfunc");
extern Sint32_x0015F858 adxt_time_unit_x0015F858 __asm__("D_004111A8");
void ADXT_GetTime_x0015F858(ADX_TALK_x0015F858* adxt, Sint32_x0015F858* ncount, Sint32_x0015F858* tscale) __asm__("ADXT_GetTime");
extern char ext_str0_x0015F858[] __asm__("D_00461EE0");
void ADXT_Pause_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 sw) __asm__("ADXT_Pause");
/* ADXT_Pause_x0015F858: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_Pause_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 sw) {
    Sint32_x0015F858 ncount;
    Sint32_x0015F858 tscale;
    Sint32_x0015F858 time_mode_temp;
    Sint8_x0015F858 stat;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015F858(ext_str0_x0015F858);
        return;
    }
    stat = adxt->stat;
    if (sw == adxt->pause_flag) {
        return;
    }
    ADXCRS_Lock_x0015F858();
    adxt->pause_flag = sw;
    if ((Uint8_x0015F858)(stat - 3) < 2) {
        if (sw == 1) {
            ADXRNA_SetPlaySw_x0015F858(adxt->rna, 0);
        } else {
            ADXRNA_SetPlaySw_x0015F858(adxt->rna, 1);
            adxt->svcnt = adxt_vsync_cnt_x0015F858;
        }
        time_mode_temp = adxt_time_mode_x0015F858;
        adxt_time_mode_x0015F858 = 0;
        ADXT_GetTime_x0015F858(adxt, &ncount, &tscale);
        adxt_time_mode_x0015F858 = time_mode_temp;
        adxt->tvofst = (Float32_x0015F858)ncount / tscale * adxt_time_unit_x0015F858;
    }
    ADXCRS_Unlock_x0015F858();
}
s8 ADXT_GetStatPause(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F08);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 0x72);
}
void func_0015F9B8(void) {
    func_00158A90();
}
void func_0015F9D0(void) {
    func_00158AA8();
}
void func_0015F9E8(void) {

}
void func_0015F9F0(void) {

}
s32 func_0015F9F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0015FA00(u8 *arg0) {
    func_00158E30(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FA18(void) {

}
s32 func_0015FA20(void) {
    return 0;
}
void func_0015FA28(void) {

}
void func_0015FA30(void) {

}
void func_0015FA38(void) {

}
void func_0015FA40(void) {

}
void func_0015FA48(void) {
    func_001540F8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FA60);
s32 func_0015FB48(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x88);
}
void func_0015FB50(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x88) = arg1;
}
void func_0015FB58(u8 *arg0) {
    func_00159CE8(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FB70(u8 *arg0, s8 arg1) {
    s32 temp_v0;

    *(s8 *)((u8 *)arg0 + 0x98) = arg1;
    temp_v0 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v0 != 0) {
        func_00159C90(temp_v0);
    }
}
s8 func_0015FBA8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x98);
}
void func_0015FBB0(u8 *arg0) {
    func_00159D48(*(s32 *)((u8 *)arg0 + 4));
}
s32 ADXT_GetDecNumSmpl(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F38);
        return -1;
    }
    return func_00159C78(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FC00);
typedef unsigned short Uint16_x0015FC98;
typedef signed char Sint8_x0015FC98;
typedef signed int Sint32_x0015FC98;
Sint32_x0015FC98 func_0015FC98_x0015FC98(Sint8_x0015FC98 *adr, Sint32_x0015FC98 siz, Sint32_x0015FC98 *endsiz) __asm__("func_0015FC98");
/* ADXT_IsEndcode: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032b7.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015FC98 func_0015FC98_x0015FC98(Sint8_x0015FC98 *adr, Sint32_x0015FC98 siz, Sint32_x0015FC98 *endsiz) {
    if (siz <= 1) {
        return 0;
    }
    if ((Uint16_x0015FC98)((*(Uint16_x0015FC98*)adr >> 8) | (*(Uint16_x0015FC98*)adr << 8)) != 0x8001) {
        return 0;
    }
    *endsiz = siz;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FCD8);
void func_0015FE80(void) {
    func_00153028();
}
void ADXT_SetKeyString(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F68);
        return;
    }
    func_00159CA0(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FEC8(void) {
    func_00159CB8();
}
s32 func_0015FEE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xC);
}
void func_0015FEE8(u8 *arg0) {
    func_00159CD0(*(s32 *)((u8 *)arg0 + 4));
}
typedef unsigned char Uint8_x0015FF00;
typedef char Sint8_x0015FF00;
typedef unsigned short Uint16_x0015FF00;
typedef signed short Sint16_x0015FF00;
typedef unsigned int Uint32_x0015FF00;
typedef signed int Sint32_x0015FF00;
typedef Sint32_x0015FF00 Bool_x0015FF00;
typedef char Char8_x0015FF00;
void ADXERR_CallErrFunc1_x0015FF00(Sint8_x0015FF00*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x0015FF00(Sint8_x0015FF00*, Sint8_x0015FF00*) __asm__("func_00154178");
void ADXERR_ItoA2_x0015FF00(Sint32_x0015FF00, Sint32_x0015FF00, Sint8_x0015FF00*, Sint32_x0015FF00) __asm__("func_001542F0");
typedef struct _UUID_x0015FF00 {
    Uint32_x0015FF00 Data1;
    Uint16_x0015FF00 Data2;
    Uint16_x0015FF00 Data3;
    Uint8_x0015FF00 Data4[8];
} UUID_x0015FF00;
typedef struct {
        Sint8_x0015FF00 *data;
        Sint32_x0015FF00 len;
} SJCK_x0015FF00;
typedef struct {
        struct _sj_vtbl_x0015FF00 *vtbl;
} SJ_OBJ_x0015FF00;
typedef SJ_OBJ_x0015FF00 *SJ_x0015FF00;
typedef struct _sj_vtbl_x0015FF00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015FF00 sj);
        UUID_x0015FF00 *(*GetUuid)(SJ_x0015FF00 sj);
        void (*Reset)(SJ_x0015FF00 sj);
        void (*GetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, Sint32_x0015FF00 nbyte, SJCK_x0015FF00 *ck);
        void (*UngetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, SJCK_x0015FF00 *ck);
        void (*PutChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, SJCK_x0015FF00 *ck);
        Sint32_x0015FF00 (*GetNumData)(SJ_x0015FF00 sj, Sint32_x0015FF00 id);
        Sint32_x0015FF00 (*IsGetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, Sint32_x0015FF00 nbyte, Sint32_x0015FF00 *rbyte);
        void (*EntryErrFunc)(SJ_x0015FF00 sj,
                                        void (*func)(void *obj, Sint32_x0015FF00 ecode), void *obj);
} SJ_IF_x0015FF00;
typedef void *ADXSTM_x0015FF00;
typedef void *ADXSJD_x0015FF00;
typedef void *ADXRNA_x0015FF00;
typedef struct _adx_talk_x0015FF00 {
                   Sint8_x0015FF00 used;
                   Sint8_x0015FF00 stat;
                   Sint8_x0015FF00 pmode;
                   Sint8_x0015FF00 maxnch;
                   ADXSJD_x0015FF00 sjd;
                   ADXSTM_x0015FF00 stm;
                   ADXRNA_x0015FF00 rna;
                   SJ_x0015FF00 sjf;
                   SJ_x0015FF00 sji;
                   SJ_x0015FF00 sjo[(2)];
                   Sint8_x0015FF00 *ibuf;
                   Sint32_x0015FF00 ibuflen;
                   Sint32_x0015FF00 ibufxlen;
                   Sint16_x0015FF00 *obuf;
                   Sint32_x0015FF00 obufsize;
                   Sint32_x0015FF00 obufdist;
                   Sint32_x0015FF00 svrfreq;
                   Sint16_x0015FF00 maxsct;
                   Sint16_x0015FF00 minsct;
                   Sint16_x0015FF00 outvol;
                   Sint16_x0015FF00 outpan[(2)];
                   Sint16_x0015FF00 unk46;
                   Sint32_x0015FF00 maxdecsmpl;
                   Sint32_x0015FF00 lpcnt;
                   Sint32_x0015FF00 lp_skiplen;
                   Sint32_x0015FF00 trp;
                   Sint32_x0015FF00 wpos;
                   Sint32_x0015FF00 mofst;
                   Sint16_x0015FF00 ercode;
                   Sint32_x0015FF00 edecpos;
                   Sint16_x0015FF00 edeccnt;
                   Sint16_x0015FF00 eshrtcnt;
                   Sint8_x0015FF00 lpflg;
                   Sint8_x0015FF00 autorcvr;
                   Sint8_x0015FF00 fltmode;
                   Sint8_x0015FF00 execflag;
                   Sint8_x0015FF00 pstwait_flag;
                   Sint8_x0015FF00 pstready_flag;
                   Sint8_x0015FF00 pause_flag;
                   void *amp;
                   SJ_x0015FF00 ampsji[(2)];
                   SJ_x0015FF00 ampsjo[(2)];
                   Sint32_x0015FF00 time_ofst;
                   Sint32_x0015FF00 lesct;
                   Sint32_x0015FF00 trpnsmpl;
                   void *lsc;
                   Sint8_x0015FF00 lnkflg;
                   Sint8_x0015FF00 rsv;
                   Sint16_x0015FF00 rsv2;
                   Uint32_x0015FF00 tvofst;
                   Uint32_x0015FF00 svcnt;
                   Uint32_x0015FF00 decofst;
                   Sint32_x0015FF00 flush_nsmpl;
                   Sint8_x0015FF00 unkAC;
                   Sint8_x0015FF00 padAD[1];
               Char8_x0015FF00* unkB0;
               Sint32_x0015FF00 padB4;
               Sint32_x0015FF00 padB8;
               Sint32_x0015FF00 padBC;
               Sint32_x0015FF00 padC0;
} ADX_TALK_x0015FF00;
typedef ADX_TALK_x0015FF00 *ADXT_x0015FF00;
void ADXT_Stop_x0015FF00(ADXT_x0015FF00 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x0015FF00(void (*func)(void *obj, Sint8_x0015FF00 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015FF00(ADXT_x0015FF00 adxt,
                void (*f)(void *obj, Sint32_x0015FF00 ch, void *data, Sint32_x0015FF00 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_SetLnkSw_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 sw) __asm__("func_0015FB70");
extern void ADXM_SetCbUsrVsync_x0015FF00(Bool_x0015FF00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015FF00(Bool_x0015FF00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015FF00(void (*fn)(void *obj, Char8_x0015FF00 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015FF00(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
Sint32_x0015FF00 ADXF_GetFnameRangeEx_x0015FF00(Sint32_x0015FF00 ptid, Sint32_x0015FF00 flid, Char8_x0015FF00 *fname, void **dir, Sint32_x0015FF00 *ofst, Sint32_x0015FF00 *fnsct) __asm__("func_00155E40");
extern char ext_str0_x0015FF00[] __asm__("D_00461FC8");
extern char ext_str1_x0015FF00[] __asm__("D_00461F98");
void ADXT_StartAfs_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 patid, Sint32_x0015FF00 fid) __asm__("ADXT_StartAfs");
/* ADXT_StartAfs_x0015FF00: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartAfs_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 patid, Sint32_x0015FF00 fid) {
    Char8_x0015FF00 error[16];
    void* dir;
    Sint32_x0015FF00 ofst;
    Sint32_x0015FF00 fnsct;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015FF00(ext_str1_x0015FF00);
        return;
    }
    ADXT_Stop_x0015FF00(adxt);
    if (ADXF_GetFnameRangeEx_x0015FF00(patid, fid, adxt->unkB0, &dir, &ofst, &fnsct) != 0) {
        return;
    }
    if (adxt->stm == 0) {
        ADXERR_ItoA2_x0015FF00(patid, fid, &error, 16);
        ADXERR_CallErrFunc2_x0015FF00(ext_str0_x0015FF00, error);
        adxt->ercode = (-1);
        adxt->stat = (6);
        return;
    }
    adxt->stat = (1);
    adxt->padB4 = adxt->unkB0;
    adxt->padB8 = dir;
    adxt->padBC = ofst;
    adxt->padC0 = fnsct;
    adxt->unkAC = 1;
    adxt->pmode = (1);
    ADXT_SetLnkSw_x0015FF00(adxt, 0);
}
typedef unsigned char Uint8_x0015FFF8;
typedef char Sint8_x0015FFF8;
typedef unsigned short Uint16_x0015FFF8;
typedef signed short Sint16_x0015FFF8;
typedef unsigned int Uint32_x0015FFF8;
typedef signed int Sint32_x0015FFF8;
typedef Sint32_x0015FFF8 Bool_x0015FFF8;
typedef char Char8_x0015FFF8;
void ADXERR_CallErrFunc1_x0015FFF8(Sint8_x0015FFF8*) __asm__("ADXERR_CallErrFunc1");
typedef struct _UUID_x0015FFF8 {
    Uint32_x0015FFF8 Data1;
    Uint16_x0015FFF8 Data2;
    Uint16_x0015FFF8 Data3;
    Uint8_x0015FFF8 Data4[8];
} UUID_x0015FFF8;
typedef struct {
        Sint8_x0015FFF8 *data;
        Sint32_x0015FFF8 len;
} SJCK_x0015FFF8;
typedef struct {
        struct _sj_vtbl_x0015FFF8 *vtbl;
} SJ_OBJ_x0015FFF8;
typedef SJ_OBJ_x0015FFF8 *SJ_x0015FFF8;
typedef struct _sj_vtbl_x0015FFF8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015FFF8 sj);
        UUID_x0015FFF8 *(*GetUuid)(SJ_x0015FFF8 sj);
        void (*Reset)(SJ_x0015FFF8 sj);
        void (*GetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, Sint32_x0015FFF8 nbyte, SJCK_x0015FFF8 *ck);
        void (*UngetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, SJCK_x0015FFF8 *ck);
        void (*PutChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, SJCK_x0015FFF8 *ck);
        Sint32_x0015FFF8 (*GetNumData)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id);
        Sint32_x0015FFF8 (*IsGetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, Sint32_x0015FFF8 nbyte, Sint32_x0015FFF8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015FFF8 sj,
                                        void (*func)(void *obj, Sint32_x0015FFF8 ecode), void *obj);
} SJ_IF_x0015FFF8;
typedef void *ADXSTM_x0015FFF8;
typedef void *ADXSJD_x0015FFF8;
typedef void *ADXRNA_x0015FFF8;
typedef struct _adx_talk_x0015FFF8 {
                   Sint8_x0015FFF8 used;
                   Sint8_x0015FFF8 stat;
                   Sint8_x0015FFF8 pmode;
                   Sint8_x0015FFF8 maxnch;
                   ADXSJD_x0015FFF8 sjd;
                   ADXSTM_x0015FFF8 stm;
                   ADXRNA_x0015FFF8 rna;
                   SJ_x0015FFF8 sjf;
                   SJ_x0015FFF8 sji;
                   SJ_x0015FFF8 sjo[(2)];
                   Sint8_x0015FFF8 *ibuf;
                   Sint32_x0015FFF8 ibuflen;
                   Sint32_x0015FFF8 ibufxlen;
                   Sint16_x0015FFF8 *obuf;
                   Sint32_x0015FFF8 obufsize;
                   Sint32_x0015FFF8 obufdist;
                   Sint32_x0015FFF8 svrfreq;
                   Sint16_x0015FFF8 maxsct;
                   Sint16_x0015FFF8 minsct;
                   Sint16_x0015FFF8 outvol;
                   Sint16_x0015FFF8 outpan[(2)];
                   Sint16_x0015FFF8 unk46;
                   Sint32_x0015FFF8 maxdecsmpl;
                   Sint32_x0015FFF8 lpcnt;
                   Sint32_x0015FFF8 lp_skiplen;
                   Sint32_x0015FFF8 trp;
                   Sint32_x0015FFF8 wpos;
                   Sint32_x0015FFF8 mofst;
                   Sint16_x0015FFF8 ercode;
                   Sint32_x0015FFF8 edecpos;
                   Sint16_x0015FFF8 edeccnt;
                   Sint16_x0015FFF8 eshrtcnt;
                   Sint8_x0015FFF8 lpflg;
                   Sint8_x0015FFF8 autorcvr;
                   Sint8_x0015FFF8 fltmode;
                   Sint8_x0015FFF8 execflag;
                   Sint8_x0015FFF8 pstwait_flag;
                   Sint8_x0015FFF8 pstready_flag;
                   Sint8_x0015FFF8 pause_flag;
                   void *amp;
                   SJ_x0015FFF8 ampsji[(2)];
                   SJ_x0015FFF8 ampsjo[(2)];
                   Sint32_x0015FFF8 time_ofst;
                   Sint32_x0015FFF8 lesct;
                   Sint32_x0015FFF8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015FFF8 lnkflg;
                   Sint8_x0015FFF8 rsv;
                   Sint16_x0015FFF8 rsv2;
                   Uint32_x0015FFF8 tvofst;
                   Uint32_x0015FFF8 svcnt;
                   Uint32_x0015FFF8 decofst;
                   Sint32_x0015FFF8 flush_nsmpl;
                   Sint8_x0015FFF8 unkAC;
                   Sint8_x0015FFF8 padAD[1];
               Char8_x0015FFF8* unkB0;
               Sint32_x0015FFF8 padB4;
               Sint32_x0015FFF8 padB8;
               Sint32_x0015FFF8 padBC;
               Sint32_x0015FFF8 padC0;
} ADX_TALK_x0015FFF8;
typedef ADX_TALK_x0015FFF8 *ADXT_x0015FFF8;
void ADXT_Stop_x0015FFF8(ADXT_x0015FFF8 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x0015FFF8(void (*func)(void *obj, Sint8_x0015FFF8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015FFF8(ADXT_x0015FFF8 adxt,
                void (*f)(void *obj, Sint32_x0015FFF8 ch, void *data, Sint32_x0015FFF8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_SetLnkSw_x0015FFF8(ADXT_x0015FFF8 adxt, Sint32_x0015FFF8 sw) __asm__("func_0015FB70");
extern void ADXM_SetCbUsrVsync_x0015FFF8(Bool_x0015FFF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015FFF8(Bool_x0015FFF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015FFF8(void (*fn)(void *obj, Char8_x0015FFF8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015FFF8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
char* strcpy_x0015FFF8(char* dest, const char* src) __asm__("func_00127A88");
extern char ext_str0_x0015FFF8[] __asm__("D_00461FF0");
void ADXT_StartFname_x0015FFF8(ADXT_x0015FFF8 adxt, Char8_x0015FFF8* fname) __asm__("ADXT_StartFname");
/* ADXT_StartFname_x0015FFF8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartFname_x0015FFF8(ADXT_x0015FFF8 adxt, Char8_x0015FFF8* fname) {
    if ((adxt == 0) || (fname == 0)) {
        ADXERR_CallErrFunc1_x0015FFF8(ext_str0_x0015FFF8);
        return;
    }
    ADXT_Stop_x0015FFF8(adxt);
    strcpy_x0015FFF8(adxt->unkB0, fname);
    adxt->padB4 = adxt->unkB0;
    adxt->padC0 = 0xFFFFF;
    adxt->padB8 = 0;
    adxt->padBC = 0;
    adxt->stat = (1);
    adxt->unkAC = 1;
    adxt->pmode = (0);
    ADXT_SetLnkSw_x0015FFF8(adxt, 0);
}
typedef unsigned char Uint8_x00160098;
typedef char Sint8_x00160098;
typedef unsigned short Uint16_x00160098;
typedef signed short Sint16_x00160098;
typedef unsigned int Uint32_x00160098;
typedef signed int Sint32_x00160098;
typedef Sint32_x00160098 Bool_x00160098;
typedef char Char8_x00160098;
typedef struct _UUID_x00160098 {
    Uint32_x00160098 Data1;
    Uint16_x00160098 Data2;
    Uint16_x00160098 Data3;
    Uint8_x00160098 Data4[8];
} UUID_x00160098;
typedef struct {
        Sint8_x00160098 *data;
        Sint32_x00160098 len;
} SJCK_x00160098;
typedef struct {
        struct _sj_vtbl_x00160098 *vtbl;
} SJ_OBJ_x00160098;
typedef SJ_OBJ_x00160098 *SJ_x00160098;
typedef struct _sj_vtbl_x00160098 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00160098 sj);
        UUID_x00160098 *(*GetUuid)(SJ_x00160098 sj);
        void (*Reset)(SJ_x00160098 sj);
        void (*GetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, Sint32_x00160098 nbyte, SJCK_x00160098 *ck);
        void (*UngetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, SJCK_x00160098 *ck);
        void (*PutChunk)(SJ_x00160098 sj, Sint32_x00160098 id, SJCK_x00160098 *ck);
        Sint32_x00160098 (*GetNumData)(SJ_x00160098 sj, Sint32_x00160098 id);
        Sint32_x00160098 (*IsGetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, Sint32_x00160098 nbyte, Sint32_x00160098 *rbyte);
        void (*EntryErrFunc)(SJ_x00160098 sj,
                                        void (*func)(void *obj, Sint32_x00160098 ecode), void *obj);
} SJ_IF_x00160098;
typedef void *ADXSTM_x00160098;
typedef void *ADXSJD_x00160098;
typedef void *ADXRNA_x00160098;
typedef struct _adx_talk_x00160098 {
                   Sint8_x00160098 used;
                   Sint8_x00160098 stat;
                   Sint8_x00160098 pmode;
                   Sint8_x00160098 maxnch;
                   ADXSJD_x00160098 sjd;
                   ADXSTM_x00160098 stm;
                   ADXRNA_x00160098 rna;
                   SJ_x00160098 sjf;
                   SJ_x00160098 sji;
                   SJ_x00160098 sjo[(2)];
                   Sint8_x00160098 *ibuf;
                   Sint32_x00160098 ibuflen;
                   Sint32_x00160098 ibufxlen;
                   Sint16_x00160098 *obuf;
                   Sint32_x00160098 obufsize;
                   Sint32_x00160098 obufdist;
                   Sint32_x00160098 svrfreq;
                   Sint16_x00160098 maxsct;
                   Sint16_x00160098 minsct;
                   Sint16_x00160098 outvol;
                   Sint16_x00160098 outpan[(2)];
                   Sint16_x00160098 unk46;
                   Sint32_x00160098 maxdecsmpl;
                   Sint32_x00160098 lpcnt;
                   Sint32_x00160098 lp_skiplen;
                   Sint32_x00160098 trp;
                   Sint32_x00160098 wpos;
                   Sint32_x00160098 mofst;
                   Sint16_x00160098 ercode;
                   Sint32_x00160098 edecpos;
                   Sint16_x00160098 edeccnt;
                   Sint16_x00160098 eshrtcnt;
                   Sint8_x00160098 lpflg;
                   Sint8_x00160098 autorcvr;
                   Sint8_x00160098 fltmode;
                   Sint8_x00160098 execflag;
                   Sint8_x00160098 pstwait_flag;
                   Sint8_x00160098 pstready_flag;
                   Sint8_x00160098 pause_flag;
                   void *amp;
                   SJ_x00160098 ampsji[(2)];
                   SJ_x00160098 ampsjo[(2)];
                   Sint32_x00160098 time_ofst;
                   Sint32_x00160098 lesct;
                   Sint32_x00160098 trpnsmpl;
                   void *lsc;
                   Sint8_x00160098 lnkflg;
                   Sint8_x00160098 rsv;
                   Sint16_x00160098 rsv2;
                   Uint32_x00160098 tvofst;
                   Uint32_x00160098 svcnt;
                   Uint32_x00160098 decofst;
                   Sint32_x00160098 flush_nsmpl;
                   Sint8_x00160098 unkAC;
                   Sint8_x00160098 padAD[1];
               Char8_x00160098* unkB0;
               Sint32_x00160098 padB4;
               Sint32_x00160098 padB8;
               Sint32_x00160098 padBC;
               Sint32_x00160098 padC0;
} ADX_TALK_x00160098;
typedef ADX_TALK_x00160098 *ADXT_x00160098;
void ADXT_StartMem2_x00160098(ADXT_x00160098 adxt, void *adxdat, Sint32_x00160098 datlen) __asm__("func_001600B0");
extern void ADXT_EntryErrFunc_x00160098(void (*func)(void *obj, Sint8_x00160098 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00160098(ADXT_x00160098 adxt,
                void (*f)(void *obj, Sint32_x00160098 ch, void *data, Sint32_x00160098 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00160098(Bool_x00160098 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00160098(Bool_x00160098 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00160098(void (*fn)(void *obj, Char8_x00160098 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00160098(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXT_StartMem2_x00160098(ADXT_x00160098 adxt, void* adxdat, Sint32_x00160098 datlen) __asm__("func_001600B0");
void func_00160098_x00160098(ADXT_x00160098 adxt, void* adxdat) __asm__("func_00160098");
/* ADXT_StartMem: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00160098_x00160098(ADXT_x00160098 adxt, void* adxdat) {
    ADXT_StartMem2_x00160098(adxt, adxdat, 0x40000000);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_001600B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", ADXT_StartMemIdx);
void func_00160300(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s3 = func_00159E88(temp_s1);
    temp_s4 = func_00159EA0(temp_s1);
    temp_s0 = func_00159ED0(temp_s1);
    func_0015A058(temp_s1);
    temp_s0_2 = temp_s0 - temp_s3;
    func_00159D78(temp_s1, 0);
    *(s32 *)((u8 *)arg0 + 0x90) = temp_s0_2;
    func_00159D68(temp_s1, temp_s0_2);
    func_00159D88(temp_s1, temp_s4);
    func_00159C80(temp_s1, temp_s3);
    func_00159D58(temp_s1, &adxt_trap_entry, arg0);
}
typedef signed char Sint8_x001603B8;
typedef int Sint32_x001603B8;
typedef struct SjChunk_x001603B8 {
    Sint8_x001603B8 *data;
    Sint32_x001603B8 len;
} SjChunk_x001603B8;
typedef struct SjObj_x001603B8 SjObj_x001603B8;
typedef struct SjIf_x001603B8 {
    void *obj;
    void (*addRef)(SjObj_x001603B8 *sj);
    void (*release)(SjObj_x001603B8 *sj);
    void (*destroy)(SjObj_x001603B8 *sj);
    void *(*getUuid)(SjObj_x001603B8 *sj);
    void (*reset)(SjObj_x001603B8 *sj);
    void (*getChunk)(SjObj_x001603B8 *sj, int id, int len, SjChunk_x001603B8 *ck);
    void (*ungetChunk)(SjObj_x001603B8 *sj, int id, SjChunk_x001603B8 *ck);
    void (*putChunk)(SjObj_x001603B8 *sj, int id, SjChunk_x001603B8 *ck);
    int (*getNumData)(SjObj_x001603B8 *sj, int id);
} SjIf_x001603B8;
struct SjObj_x001603B8 {
    SjIf_x001603B8 *vt;
};
extern int GetVia4_Obj33C8_GetField_28_7818_327818_x001603B8(void *sj) __asm__("func_00159E88");
extern int func_00327830_x001603B8(void *sj) __asm__("func_00159EA0");
extern int GetVia4_Obj33C8_GetField_30_7860_327860_x001603B8(void *sj) __asm__("func_00159ED0");
extern void Forward33CFF8_327988_x001603B8(void *sj) __asm__("func_0015A070");
extern void Obj3270_SetField_34_x001603B8(void *sj, int v) __asm__("func_00159C80");
extern void Obj3270_SetField_3C_x001603B8(void *sj, int v) __asm__("func_00159D68");
extern void Obj3270_SetField_40_x001603B8(void *sj, int v) __asm__("func_00159D78");
extern void Obj3270_SetField_44_x001603B8(void *sj, int v) __asm__("func_00159D88");
extern void func_0033F130_x001603B8(const char *msg) __asm__("ADXERR_CallErrFunc1");
extern char D_00452890_x001603B8[] __asm__("D_004620E0");
void adxt_trap_entry_x001603B8(char *self) __asm__("adxt_trap_entry");
/* func_0032C048: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032bf90.c, MIT); ee-gcc 2.96 -O2 -G0 */
void adxt_trap_entry_x001603B8(char *self)
{
    void *sj = *(void **)(self + 4);
    SjObj_x001603B8 *in = *(SjObj_x001603B8 **)(self + 0x14);
    int top = GetVia4_Obj33C8_GetField_28_7818_327818_x001603B8(sj);
    int size = func_00327830_x001603B8(sj);
    int end = GetVia4_Obj33C8_GetField_30_7860_327860_x001603B8(sj);
    int len;
    SjChunk_x001603B8 ck;
    if ((*(signed char *)(self + 2) == 2 || *(signed char *)(self + 2) == 3) &&
        *(signed char *)(self + 0x6C) == 0) {
        Obj3270_SetField_3C_x001603B8(*(void **)(self + 4), -1);
        return;
    }
    in->vt->getChunk(in, 1, *(int *)(self + 0x50), &ck);
    if (ck.len < *(int *)(self + 0x50)) {
        func_0033F130_x001603B8(D_00452890_x001603B8);
    }
    in->vt->putChunk(in, 0, &ck);
    Obj3270_SetField_40_x001603B8(sj, 0);
    len = end - top;
    *(int *)(self + 0x90) = len;
    Obj3270_SetField_3C_x001603B8(sj, len);
    Obj3270_SetField_44_x001603B8(sj, size);
    Obj3270_SetField_34_x001603B8(sj, top);
    if (*(signed char *)(self + 2) == 2) {
        in->vt->reset(in);
        in->vt->getChunk(in, 1, size, &ck);
        in->vt->putChunk(in, 0, &ck);
    }
    Forward33CFF8_327988_x001603B8(sj);
    *(int *)(self + 0x4C) += 1;
}
