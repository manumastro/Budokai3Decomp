#include "common.h"

extern s32 D_0041117C;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461938;

s32 ADXT_Destroy(s8 *);                         /* extern */
extern s8 D_00404C18;

extern s32 D_00411158;

s32 func_00169688();                            /* extern */

s32 func_00161F18(s32 *, s32 *, s32); /* extern */
s32 func_00162250(s32 *);                   /* extern */
s32 func_001635A0(s32 *, s32);          /* extern */
s32 func_00167BC8(s32);                     /* extern */
s32 func_00167BF8(s32);                     /* extern */
s32 func_001696B0(s32);                         /* extern */
s32 func_001696E0(s32);                         /* extern */
extern s32 D_00461800;
extern s32 D_00461808;
extern s32 func_0015DAD0;
extern s32 func_00167C28;
extern s32 func_0016A798;

s32 func_00167BB0();                            /* extern */

s32 func_00166BD0();                            /* extern */

s32 func_00166BB0();                            /* extern */

s32 func_00167A90();                            /* extern */

s32 adxstmf_stat_exec(void *);                  /* extern */
s32 func_00170A00(s32 *);                           /* extern */
extern s32 D_00410218;

extern s32 D_0041021C;

s32 func_00162A70(s32);                             /* extern */

extern s32 D_00410220;

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015CD10(void *);                      /* extern */

s32 func_0015CDD0();                            /* extern */
s32 func_0016FF40();                            /* extern */
s32 func_0016FF58();                            /* extern */

s32 func_0015CC78(s8 *);                        /* extern */
s32 func_0015CE38();                            /* extern */

extern s32 D_00410228;

extern s32 D_00410210;
extern s32 D_00410214;

extern s32 D_0041020C;

s32 func_0015C730(s8 *);                        /* extern */

extern s32 D_0040E088;

s8 *func_0015A758();                                /* extern */
extern s8 D_0040F908;

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0040F848;

extern s32 D_00461778;

extern s32 D_0040E070;

extern s32 D_0040E074;
extern s32 D_0040E078;

s32 func_00150EC8(s32);                         /* extern */

s32 func_00150E88(s32);                         /* extern */

s32 func_00150D98(s32);                         /* extern */

s32 func_00150E60(s32);                         /* extern */

s32 func_00150E58(s32);                         /* extern */

s32 func_00150E50(s32);                         /* extern */

s32 func_00150E30(s32);                         /* extern */

s32 func_00150E20(s32);                         /* extern */

s32 func_00150E28(s32);                         /* extern */

s32 func_00150E18(s32);                         /* extern */

s32 func_00150E10(s32);                         /* extern */

s32 func_00150E08(s32);                         /* extern */

s32 func_00150E00(s32);                         /* extern */

s32 func_00150DA0(s32);                         /* extern */

s32 func_00150D68(s32);                         /* extern */

s32 func_00150D60(s32);                         /* extern */

s32 func_00150D58(s32);                         /* extern */

s32 func_00150B20(s32);                         /* extern */

s32 func_00150F70();                            /* extern */

s32 func_00150F08(s32);                         /* extern */

s32 func_001598E8(s8 *);                        /* extern */
extern s8 D_0040D5F0;

s32 func_001510B8(void *);                          /* extern */
s32 func_00151790(void *);                      /* extern */
s32 func_00159278(void *);                      /* extern */
s32 func_001595E0(void *);                      /* extern */
s32 func_001597A8(void *);                      /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159278);
typedef int s32_x001595E0;
typedef s32_x001595E0 ptrdiff_t_x001595E0;
typedef unsigned char Uint8_x001595E0;
typedef char Sint8_x001595E0;
typedef unsigned short Uint16_x001595E0;
typedef signed short Sint16_x001595E0;
typedef unsigned int Uint32_x001595E0;
typedef signed int Sint32_x001595E0;
typedef struct _UUID_x001595E0 {
    Uint32_x001595E0 Data1;
    Uint16_x001595E0 Data2;
    Uint16_x001595E0 Data3;
    Uint8_x001595E0 Data4[8];
} UUID_x001595E0;
typedef struct {
        Sint8_x001595E0 *data;
        Sint32_x001595E0 len;
} SJCK_x001595E0;
typedef struct {
        struct _sj_vtbl_x001595E0 *vtbl;
} SJ_OBJ_x001595E0;
typedef SJ_OBJ_x001595E0 *SJ_x001595E0;
typedef struct _sj_vtbl_x001595E0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001595E0 sj);
        UUID_x001595E0 *(*GetUuid)(SJ_x001595E0 sj);
        void (*Reset)(SJ_x001595E0 sj);
        void (*GetChunk)(SJ_x001595E0 sj, Sint32_x001595E0 id, Sint32_x001595E0 nbyte, SJCK_x001595E0 *ck);
        void (*UngetChunk)(SJ_x001595E0 sj, Sint32_x001595E0 id, SJCK_x001595E0 *ck);
        void (*PutChunk)(SJ_x001595E0 sj, Sint32_x001595E0 id, SJCK_x001595E0 *ck);
        Sint32_x001595E0 (*GetNumData)(SJ_x001595E0 sj, Sint32_x001595E0 id);
        Sint32_x001595E0 (*IsGetChunk)(SJ_x001595E0 sj, Sint32_x001595E0 id, Sint32_x001595E0 nbyte, Sint32_x001595E0 *rbyte);
        void (*EntryErrFunc)(SJ_x001595E0 sj,
                                        void (*func)(void *obj, Sint32_x001595E0 ecode), void *obj);
} SJ_IF_x001595E0;
void SJ_SplitChunk_x001595E0(SJCK_x001595E0 *ck, Sint32_x001595E0 nbyte, SJCK_x001595E0 *ck1, SJCK_x001595E0 *ck2) __asm__("func_0016F050");
extern int* sceCdCallback_x001595E0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x001595E0 unk0;
               Sint16_x001595E0 unk2;
               Sint16_x001595E0 unk4;
               Sint16_x001595E0 unk6;
} ADXPD_OBJ_SUB_x001595E0;
typedef struct {
               Sint32_x001595E0 used;
               Sint32_x001595E0 unk4;
               Sint32_x001595E0 mode;
               Sint32_x001595E0 stat;
               Sint32_x001595E0 num_blk;
               Sint32_x001595E0 unk14;
               Sint32_x001595E0 unk18;
               Sint32_x001595E0 unk1C;
               Sint32_x001595E0 unk20;
               Sint32_x001595E0 unk24;
               ADXPD_OBJ_SUB_x001595E0 unk28;
               Sint16_x001595E0 unk30;
               Sint16_x001595E0 unk32;
               Sint16_x001595E0 unk34;
               Sint16_x001595E0 unk36;
               Sint16_x001595E0 unk38;
               Sint16_x001595E0 unk3A;
} ADXPD_OBJ_x001595E0;
typedef ADXPD_OBJ_x001595E0* ADXPD_x001595E0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001595E0;
typedef struct {
               Sint32_x001595E0 unk0;
               Sint32_x001595E0 unk4;
               Sint32_x001595E0 unk8;
               Sint32_x001595E0 unkC;
               Sint32_x001595E0 unk10;
               void* unk14;
               Sint32_x001595E0 unk18;
               Sint32_x001595E0 unk1C;
               Sint32_x001595E0 unk20;
               Sint32_x001595E0 unk24;
               Sint32_x001595E0 unk28;
} ADXB_UNK_x001595E0;
typedef struct {
               Sint16_x001595E0 unk0;
               Sint16_x001595E0 unk2;
               Sint32_x001595E0 stat;
               ADXPD_x001595E0 adxpd;
               Sint8_x001595E0 encoding_type;
               Sint8_x001595E0 sample_bitdepth;
               Sint8_x001595E0 channel_count;
               Sint8_x001595E0 block_size;
               Sint32_x001595E0 samples_per_block;
               Sint32_x001595E0 sample_rate;
               Sint32_x001595E0 total_samples;
               Sint16_x001595E0 unk1C;
               char pad1E[2];
               Sint32_x001595E0 unk20;
               Sint16_x001595E0 unk24;
               Sint16_x001595E0 unk26;
               Sint32_x001595E0 unk28;
               Sint32_x001595E0 unk2C;
               Sint32_x001595E0 unk30;
               Sint32_x001595E0 unk34;
               Sint32_x001595E0 unk38;
               void* unk3C;
               Sint32_x001595E0 unk40;
               Sint32_x001595E0 unk44;
               ADXB_UNK_x001595E0 unk48;
               Sint32_x001595E0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001595E0*, Sint32_x001595E0*, Sint32_x001595E0*);
               void* object;
               void (*add_wr)(void*, Sint32_x001595E0, Sint32_x001595E0);
               Sint32_x001595E0 unk84;
               Sint32_x001595E0 unk88;
               Sint32_x001595E0 unk8C;
               Sint32_x001595E0 dec_num_sample;
               Sint32_x001595E0 dec_data_len;
               Sint16_x001595E0 format;
               Sint16_x001595E0 unk9A;
               Sint16_x001595E0 unk9C;
               Sint16_x001595E0 unk9E;
               Sint16_x001595E0 unkA0;
               char padA2[0xE];
               Sint32_x001595E0 unkB0;
               Sint32_x001595E0 ahx_dec_samples;
               Sint32_x001595E0 ahx_dec_frames;
               Sint32_x001595E0 unkBC;
               Sint32_x001595E0 ac3_dec_samples;
               Sint32_x001595E0 ac3_dec_frames;
               Sint32_x001595E0 unkC8;
               ADX_UNK_x001595E0 unkCC;
               Sint16_x001595E0 unkDC;
               Sint16_x001595E0 unkDE[2];
               char padE2[2];
               Sint32_x001595E0 unkE4;
               char padE8[8];
} ADXB_OBJ_x001595E0;
typedef ADXB_OBJ_x001595E0* ADXB_x001595E0;
typedef struct {
    Sint8_x001595E0 used;
    Sint8_x001595E0 state;
    Sint8_x001595E0 maxnch;
    Sint8_x001595E0 unk3;
    ADXB_x001595E0 adxb;
    SJ_x001595E0 sji;
    SJ_x001595E0 sjo[2];
    SJCK_x001595E0 unk14;
    SJCK_x001595E0 chunks[2];
    Sint32_x001595E0 unk2C;
    Sint32_x001595E0 unk30;
    Sint32_x001595E0 unk34;
    Sint32_x001595E0 unk38;
    Sint32_x001595E0 trap_num_samples;
    Sint32_x001595E0 trap_count;
    Sint32_x001595E0 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x001595E0, Sint8_x001595E0*, Sint32_x001595E0);
    void* flt_obj;
    Sint8_x001595E0 unk58[0x40];
    Sint32_x001595E0 unk98;
    Sint32_x001595E0 lnkflg;
} ADXSJD_OBJ_x001595E0;
typedef ADXSJD_OBJ_x001595E0* ADXSJD_x001595E0;
Sint32_x001595E0 ADXB_GetNumChan_x001595E0(ADXB_x001595E0 adxb) __asm__("func_00150D68");
Sint32_x001595E0 ADXB_GetTotalNumSmpl_x001595E0(ADXB_x001595E0 adxb) __asm__("func_00150E10");
extern void ADXB_EntryGetWrFunc_x001595E0(ADXB_x001595E0 adxb, void* (*get_wr)(void*, ptrdiff_t_x001595E0*, Sint32_x001595E0*, Sint32_x001595E0*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x001595E0 ADXB_GetDecDtLen_x001595E0(ADXB_x001595E0 adxb) __asm__("func_001511E8");
Sint32_x001595E0 ADXB_GetDecNumSmpl_x001595E0(ADXB_x001595E0 adxb) __asm__("func_001511F0");
void ADXB_Reset_x001595E0(ADXB_x001595E0 adxb) __asm__("func_001511A8");
extern void ADXSJD_EntryTrapFunc_x001595E0(ADXSJD_x001595E0 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*pl2setsfreqfunc_x001595E0)(ADXB_x001595E0, Sint32_x001595E0) __asm__("pl2setsfreqfunc");
void ADXSJD_EntryTrapFunc_x001595E0(ADXSJD_x001595E0 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void func_001595E0_x001595E0(ADXSJD_x001595E0 sjd) __asm__("func_001595E0");
/* adxsjd_decexec_end: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sjd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001595E0_x001595E0(ADXSJD_x001595E0 sjd) {
    ADXB_x001595E0 adxb = sjd->adxb;
    SJ_x001595E0 sji = sjd->sji;
    Sint32_x001595E0 total_num_smpl = ADXB_GetTotalNumSmpl_x001595E0(adxb);
    Sint32_x001595E0 dec_dt_len = ADXB_GetDecDtLen_x001595E0(adxb);
    Sint32_x001595E0 dec_num_smpl = ADXB_GetDecNumSmpl_x001595E0(adxb);
    SJCK_x001595E0 sp;
    SJCK_x001595E0 sp10;
    Sint32_x001595E0 i;
    total_num_smpl -= sjd->unk34;
    if (dec_num_smpl >= total_num_smpl) {
        dec_num_smpl = total_num_smpl;
    }
    SJ_SplitChunk_x001595E0(&sjd->unk14, dec_dt_len, &sp, &sp10);
    (*(sji)->vtbl->PutChunk)(sji, 0, &sp);
    (*(sji)->vtbl->UngetChunk)(sji, 1, &sp10);
    for (i = 0; i < ADXB_GetNumChan_x001595E0(sjd->adxb); i++) {
        SJ_SplitChunk_x001595E0(&sjd->chunks[i], dec_num_smpl * 2, &sp, &sp10);
        if (sjd->flt_func != 0) {
            sjd->flt_func(sjd->flt_obj, i, sp.data, sp.len);
        }
        (*(sjd->sjo[i])->vtbl->PutChunk)(sjd->sjo[i], 1, &sp);
        (*(sjd->sjo[i])->vtbl->UngetChunk)(sjd->sjo[i], 0, &sp10);
    }
    sjd->unk2C += dec_num_smpl;
    sjd->unk30 += dec_dt_len;
    sjd->unk34 += dec_num_smpl;
    sjd->trap_count += dec_num_smpl;
    sjd->trap_dt_len += dec_dt_len;
    ADXB_Reset_x001595E0(adxb);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_001597A8);
void func_00159838(u8 *arg0) {
    s16 temp_a0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 4);
    if (func_001510B8(temp_s0) == 0) {
        func_00159278(arg0);
    }
    func_00151790(temp_s0);
    if (func_001510B8(temp_s0) == 3) {
        func_001595E0(arg0);
    }
    temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x98);
    if ((temp_a0 == 0xA) || (temp_a0 == 0x14) || (temp_a0 == 0xB) || (temp_a0 == 0xC) || (temp_a0 == 0xF)) {
        func_001597A8(arg0);
    }
}
extern void Forward33B658_33E678_x001598E8(void) __asm__("func_00152508");
extern void Forward33B670_33E690_x001598E8(void) __asm__("func_00152520");
extern void func_00327418_x001598E8(void *a) __asm__("func_00159990");
extern void func_003272C0_x001598E8(void *a) __asm__("func_00159838");
extern void func_00326890_x001598E8(void *a) __asm__("ADXB_DecodeHeader");
extern void func_00327568_x001598E8(void *a) __asm__("func_00159AD8");
void func_003272C0_x001598E8(void *a0) __asm__("func_00159838");
void func_001598E8_x001598E8(void *a0) __asm__("func_001598E8");
/* func_00327370: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001598E8_x001598E8(void *a0) {
    void *s0;
    int v0;
    char v1;
    s0 = a0;
    v0 = *(int *)((char *)s0 + 0xA0);
    if (v0 > 0) {
        Forward33B658_33E678_x001598E8();
        func_00327418_x001598E8(s0);
        Forward33B670_33E690_x001598E8();
    }
    v1 = *(char *)((char *)s0 + 1);
    if (v1 == 2) {
        func_003272C0_x001598E8(s0);
    } else if (v1 == 1) {
        func_00326890_x001598E8(s0);
    }
    v0 = *(int *)((char *)s0 + 0xA4);
    if (v0 <= 0) {
        return;
    }
    Forward33B658_33E678_x001598E8();
    func_00327568_x001598E8(s0);
    Forward33B670_33E690_x001598E8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159990);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159AD8);
void func_00159C10(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_0040D5F0;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_001598E8(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0xA8;
    } while (var_s1 >= 0);
}
s32 func_00159C70(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}
s32 func_00159C78(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x2C);
}
void func_00159C80(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x34) = arg1;
}
s32 func_00159C88(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}
void func_00159C90(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x9C) = arg1;
}
s32 func_00159C98(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x9C);
}
void func_00159CA0(u8 *arg0) {
    func_00150F08(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159CB8(void) {
    func_00150F70();
}
void func_00159CD0(u8 *arg0) {
    func_00150B20(*(s32 *)((u8 *)arg0 + 4));
}
s32 func_00152508_x00159CE8() __asm__("func_00152508");
s32 func_00152520_x00159CE8() __asm__("func_00152520");
s32 func_00159CE8_x00159CE8(u8 *arg0, s32 arg1) __asm__("func_00159CE8");
s32 func_00159CE8_x00159CE8(u8 *arg0, s32 arg1) {
    func_00152508_x00159CE8();
    if (arg1 > 0) {
        goto block_2;
    }
    goto block_5;
block_2:
    *(s32 *)((u8 *)arg0 + 0xA0) = (s32) (*(s32 *)((u8 *)arg0 + 0xA0) + arg1);
    goto block_6;
block_5:
    *(s32 *)((u8 *)arg0 + 0xA4) = (s32) (*(s32 *)((u8 *)arg0 + 0xA4) - arg1);
block_6:
    func_00152520_x00159CE8();
    return arg1;
}
void func_00159D48_x00159D48(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00159D48");
void func_00159D48_x00159D48(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x50)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x54)) = arg2;
}
void func_00159D58_x00159D58(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00159D58");
void func_00159D58_x00159D58(u8 *arg0, s32 arg1, s32 arg2)
{
  unsigned int new_var;
  *((s32 *) (((u8 *) arg0) + 0x48)) = (new_var = arg1);
  *((s32 *) (((u8 *) arg0) + 0x4C)) = arg2;
}
void fn_800416DC_x00159D68(u8 *arg0, s32 arg1) __asm__("fn_800416DC");
void fn_800416DC_x00159D68(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x3C) = arg1;
}
s32 func_00159D70(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x3C);
}
void func_00159D78(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x40) = arg1;
}
s32 func_00159D80(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x40);
}
void func_00159D88(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x44) = arg1;
}
s32 func_00159D90(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x44);
}
void func_00159D98(u8 *arg0) {
    func_00150D58(*(s32 *)((u8 *)arg0 + 4));
}
void ADXSJD_GetSfreq(u8 *arg0) {
    func_00150D60(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159DC8(u8 *arg0) {
    func_00150D68(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159DE0(u8 *arg0) {
    func_00150DA0(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159DF8(u8 *arg0) {
    func_00150E00(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E10(u8 *arg0) {
    func_00150E08(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E28(u8 *arg0) {
    func_00150E10(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E40(u8 *arg0) {
    func_00150E18(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E58(u8 *arg0) {
    func_00150E28(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E70(u8 *arg0) {
    func_00150E20(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159E88(u8 *arg0) {
    func_00150E30(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", fn_80041578);
void func_00159ED0(u8 *arg0) {
    func_00150E50(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159EE8(u8 *arg0) {
    func_00150E58(*(s32 *)((u8 *)arg0 + 4));
}
void func_00159F00(u8 *arg0) {
    func_00150E60(*(s32 *)((u8 *)arg0 + 4));
}
typedef int s32_x00159F18;
typedef s32_x00159F18 ptrdiff_t_x00159F18;
typedef unsigned char Uint8_x00159F18;
typedef char Sint8_x00159F18;
typedef unsigned short Uint16_x00159F18;
typedef signed short Sint16_x00159F18;
typedef unsigned int Uint32_x00159F18;
typedef signed int Sint32_x00159F18;
typedef struct _UUID_x00159F18 {
    Uint32_x00159F18 Data1;
    Uint16_x00159F18 Data2;
    Uint16_x00159F18 Data3;
    Uint8_x00159F18 Data4[8];
} UUID_x00159F18;
typedef struct {
        Sint8_x00159F18 *data;
        Sint32_x00159F18 len;
} SJCK_x00159F18;
typedef struct {
        struct _sj_vtbl_x00159F18 *vtbl;
} SJ_OBJ_x00159F18;
typedef SJ_OBJ_x00159F18 *SJ_x00159F18;
typedef struct _sj_vtbl_x00159F18 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00159F18 sj);
        UUID_x00159F18 *(*GetUuid)(SJ_x00159F18 sj);
        void (*Reset)(SJ_x00159F18 sj);
        void (*GetChunk)(SJ_x00159F18 sj, Sint32_x00159F18 id, Sint32_x00159F18 nbyte, SJCK_x00159F18 *ck);
        void (*UngetChunk)(SJ_x00159F18 sj, Sint32_x00159F18 id, SJCK_x00159F18 *ck);
        void (*PutChunk)(SJ_x00159F18 sj, Sint32_x00159F18 id, SJCK_x00159F18 *ck);
        Sint32_x00159F18 (*GetNumData)(SJ_x00159F18 sj, Sint32_x00159F18 id);
        Sint32_x00159F18 (*IsGetChunk)(SJ_x00159F18 sj, Sint32_x00159F18 id, Sint32_x00159F18 nbyte, Sint32_x00159F18 *rbyte);
        void (*EntryErrFunc)(SJ_x00159F18 sj,
                                        void (*func)(void *obj, Sint32_x00159F18 ecode), void *obj);
} SJ_IF_x00159F18;
extern int* sceCdCallback_x00159F18(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00159F18 unk0;
               Sint16_x00159F18 unk2;
               Sint16_x00159F18 unk4;
               Sint16_x00159F18 unk6;
} ADXPD_OBJ_SUB_x00159F18;
typedef struct {
               Sint32_x00159F18 used;
               Sint32_x00159F18 unk4;
               Sint32_x00159F18 mode;
               Sint32_x00159F18 stat;
               Sint32_x00159F18 num_blk;
               Sint32_x00159F18 unk14;
               Sint32_x00159F18 unk18;
               Sint32_x00159F18 unk1C;
               Sint32_x00159F18 unk20;
               Sint32_x00159F18 unk24;
               ADXPD_OBJ_SUB_x00159F18 unk28;
               Sint16_x00159F18 unk30;
               Sint16_x00159F18 unk32;
               Sint16_x00159F18 unk34;
               Sint16_x00159F18 unk36;
               Sint16_x00159F18 unk38;
               Sint16_x00159F18 unk3A;
} ADXPD_OBJ_x00159F18;
typedef ADXPD_OBJ_x00159F18* ADXPD_x00159F18;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00159F18;
typedef struct {
               Sint32_x00159F18 unk0;
               Sint32_x00159F18 unk4;
               Sint32_x00159F18 unk8;
               Sint32_x00159F18 unkC;
               Sint32_x00159F18 unk10;
               void* unk14;
               Sint32_x00159F18 unk18;
               Sint32_x00159F18 unk1C;
               Sint32_x00159F18 unk20;
               Sint32_x00159F18 unk24;
               Sint32_x00159F18 unk28;
} ADXB_UNK_x00159F18;
typedef struct {
               Sint16_x00159F18 unk0;
               Sint16_x00159F18 unk2;
               Sint32_x00159F18 stat;
               ADXPD_x00159F18 adxpd;
               Sint8_x00159F18 encoding_type;
               Sint8_x00159F18 sample_bitdepth;
               Sint8_x00159F18 channel_count;
               Sint8_x00159F18 block_size;
               Sint32_x00159F18 samples_per_block;
               Sint32_x00159F18 sample_rate;
               Sint32_x00159F18 total_samples;
               Sint16_x00159F18 unk1C;
               char pad1E[2];
               Sint32_x00159F18 unk20;
               Sint16_x00159F18 unk24;
               Sint16_x00159F18 unk26;
               Sint32_x00159F18 unk28;
               Sint32_x00159F18 unk2C;
               Sint32_x00159F18 unk30;
               Sint32_x00159F18 unk34;
               Sint32_x00159F18 unk38;
               void* unk3C;
               Sint32_x00159F18 unk40;
               Sint32_x00159F18 unk44;
               ADXB_UNK_x00159F18 unk48;
               Sint32_x00159F18 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00159F18*, Sint32_x00159F18*, Sint32_x00159F18*);
               void* object;
               void (*add_wr)(void*, Sint32_x00159F18, Sint32_x00159F18);
               Sint32_x00159F18 unk84;
               Sint32_x00159F18 unk88;
               Sint32_x00159F18 unk8C;
               Sint32_x00159F18 dec_num_sample;
               Sint32_x00159F18 dec_data_len;
               Sint16_x00159F18 format;
               Sint16_x00159F18 unk9A;
               Sint16_x00159F18 unk9C;
               Sint16_x00159F18 unk9E;
               Sint16_x00159F18 unkA0;
               char padA2[0xE];
               Sint32_x00159F18 unkB0;
               Sint32_x00159F18 ahx_dec_samples;
               Sint32_x00159F18 ahx_dec_frames;
               Sint32_x00159F18 unkBC;
               Sint32_x00159F18 ac3_dec_samples;
               Sint32_x00159F18 ac3_dec_frames;
               Sint32_x00159F18 unkC8;
               ADX_UNK_x00159F18 unkCC;
               Sint16_x00159F18 unkDC;
               Sint16_x00159F18 unkDE[2];
               char padE2[2];
               Sint32_x00159F18 unkE4;
               char padE8[8];
} ADXB_OBJ_x00159F18;
typedef ADXB_OBJ_x00159F18* ADXB_x00159F18;
typedef struct {
    Sint8_x00159F18 used;
    Sint8_x00159F18 state;
    Sint8_x00159F18 maxnch;
    Sint8_x00159F18 unk3;
    ADXB_x00159F18 adxb;
    SJ_x00159F18 sji;
    SJ_x00159F18 sjo[2];
    SJCK_x00159F18 unk14;
    SJCK_x00159F18 chunks[2];
    Sint32_x00159F18 unk2C;
    Sint32_x00159F18 unk30;
    Sint32_x00159F18 unk34;
    Sint32_x00159F18 unk38;
    Sint32_x00159F18 trap_num_samples;
    Sint32_x00159F18 trap_count;
    Sint32_x00159F18 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00159F18, Sint8_x00159F18*, Sint32_x00159F18);
    void* flt_obj;
    Sint8_x00159F18 unk58[0x40];
    Sint32_x00159F18 unk98;
    Sint32_x00159F18 lnkflg;
} ADXSJD_OBJ_x00159F18;
typedef ADXSJD_OBJ_x00159F18* ADXSJD_x00159F18;
Sint32_x00159F18 ADXB_GetAinfLen_x00159F18(ADXB_x00159F18 adxb) __asm__("func_00150E60");
Sint16_x00159F18 ADXB_GetDefOutVol_x00159F18(ADXB_x00159F18 adxb) __asm__("func_00150E68");
extern void ADXB_EntryGetWrFunc_x00159F18(ADXB_x00159F18 adxb, void* (*get_wr)(void*, ptrdiff_t_x00159F18*, Sint32_x00159F18*, Sint32_x00159F18*), void* object) __asm__("ADXB_EntryGetWrFunc");
extern void ADXSJD_EntryTrapFunc_x00159F18(ADXSJD_x00159F18 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*pl2setsfreqfunc_x00159F18)(ADXB_x00159F18, Sint32_x00159F18) __asm__("pl2setsfreqfunc");
void ADXSJD_EntryTrapFunc_x00159F18(ADXSJD_x00159F18 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint32_x00159F18 func_00159F18_x00159F18(ADXSJD_x00159F18 sjd) __asm__("func_00159F18");
/* ADXSJD_GetDefOutVol: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sjd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00159F18 func_00159F18_x00159F18(ADXSJD_x00159F18 sjd) {
    if (ADXB_GetAinfLen_x00159F18(sjd->adxb) > 0 && ((Uint8_x00159F18)sjd->state - 2) < 2U) {
        return ADXB_GetDefOutVol_x00159F18(sjd->adxb);
    }
    return 0;
}
typedef int s32_x00159F70;
typedef unsigned char u8_x00159F70;
typedef s32_x00159F70 ptrdiff_t_x00159F70;
typedef unsigned char Uint8_x00159F70;
typedef char Sint8_x00159F70;
typedef unsigned short Uint16_x00159F70;
typedef signed short Sint16_x00159F70;
typedef unsigned int Uint32_x00159F70;
typedef signed int Sint32_x00159F70;
typedef struct _UUID_x00159F70 {
    Uint32_x00159F70 Data1;
    Uint16_x00159F70 Data2;
    Uint16_x00159F70 Data3;
    Uint8_x00159F70 Data4[8];
} UUID_x00159F70;
typedef struct {
        Sint8_x00159F70 *data;
        Sint32_x00159F70 len;
} SJCK_x00159F70;
typedef struct {
        struct _sj_vtbl_x00159F70 *vtbl;
} SJ_OBJ_x00159F70;
typedef SJ_OBJ_x00159F70 *SJ_x00159F70;
typedef struct _sj_vtbl_x00159F70 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00159F70 sj);
        UUID_x00159F70 *(*GetUuid)(SJ_x00159F70 sj);
        void (*Reset)(SJ_x00159F70 sj);
        void (*GetChunk)(SJ_x00159F70 sj, Sint32_x00159F70 id, Sint32_x00159F70 nbyte, SJCK_x00159F70 *ck);
        void (*UngetChunk)(SJ_x00159F70 sj, Sint32_x00159F70 id, SJCK_x00159F70 *ck);
        void (*PutChunk)(SJ_x00159F70 sj, Sint32_x00159F70 id, SJCK_x00159F70 *ck);
        Sint32_x00159F70 (*GetNumData)(SJ_x00159F70 sj, Sint32_x00159F70 id);
        Sint32_x00159F70 (*IsGetChunk)(SJ_x00159F70 sj, Sint32_x00159F70 id, Sint32_x00159F70 nbyte, Sint32_x00159F70 *rbyte);
        void (*EntryErrFunc)(SJ_x00159F70 sj,
                                        void (*func)(void *obj, Sint32_x00159F70 ecode), void *obj);
} SJ_IF_x00159F70;
extern int* sceCdCallback_x00159F70(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00159F70 unk0;
               Sint16_x00159F70 unk2;
               Sint16_x00159F70 unk4;
               Sint16_x00159F70 unk6;
} ADXPD_OBJ_SUB_x00159F70;
typedef struct {
               Sint32_x00159F70 used;
               Sint32_x00159F70 unk4;
               Sint32_x00159F70 mode;
               Sint32_x00159F70 stat;
               Sint32_x00159F70 num_blk;
               Sint32_x00159F70 unk14;
               Sint32_x00159F70 unk18;
               Sint32_x00159F70 unk1C;
               Sint32_x00159F70 unk20;
               Sint32_x00159F70 unk24;
               ADXPD_OBJ_SUB_x00159F70 unk28;
               Sint16_x00159F70 unk30;
               Sint16_x00159F70 unk32;
               Sint16_x00159F70 unk34;
               Sint16_x00159F70 unk36;
               Sint16_x00159F70 unk38;
               Sint16_x00159F70 unk3A;
} ADXPD_OBJ_x00159F70;
typedef ADXPD_OBJ_x00159F70* ADXPD_x00159F70;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00159F70;
typedef struct {
               Sint32_x00159F70 unk0;
               Sint32_x00159F70 unk4;
               Sint32_x00159F70 unk8;
               Sint32_x00159F70 unkC;
               Sint32_x00159F70 unk10;
               void* unk14;
               Sint32_x00159F70 unk18;
               Sint32_x00159F70 unk1C;
               Sint32_x00159F70 unk20;
               Sint32_x00159F70 unk24;
               Sint32_x00159F70 unk28;
} ADXB_UNK_x00159F70;
typedef struct {
               Sint16_x00159F70 unk0;
               Sint16_x00159F70 unk2;
               Sint32_x00159F70 stat;
               ADXPD_x00159F70 adxpd;
               Sint8_x00159F70 encoding_type;
               Sint8_x00159F70 sample_bitdepth;
               Sint8_x00159F70 channel_count;
               Sint8_x00159F70 block_size;
               Sint32_x00159F70 samples_per_block;
               Sint32_x00159F70 sample_rate;
               Sint32_x00159F70 total_samples;
               Sint16_x00159F70 unk1C;
               char pad1E[2];
               Sint32_x00159F70 unk20;
               Sint16_x00159F70 unk24;
               Sint16_x00159F70 unk26;
               Sint32_x00159F70 unk28;
               Sint32_x00159F70 unk2C;
               Sint32_x00159F70 unk30;
               Sint32_x00159F70 unk34;
               Sint32_x00159F70 unk38;
               void* unk3C;
               Sint32_x00159F70 unk40;
               Sint32_x00159F70 unk44;
               ADXB_UNK_x00159F70 unk48;
               Sint32_x00159F70 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00159F70*, Sint32_x00159F70*, Sint32_x00159F70*);
               void* object;
               void (*add_wr)(void*, Sint32_x00159F70, Sint32_x00159F70);
               Sint32_x00159F70 unk84;
               Sint32_x00159F70 unk88;
               Sint32_x00159F70 unk8C;
               Sint32_x00159F70 dec_num_sample;
               Sint32_x00159F70 dec_data_len;
               Sint16_x00159F70 format;
               Sint16_x00159F70 unk9A;
               Sint16_x00159F70 unk9C;
               Sint16_x00159F70 unk9E;
               Sint16_x00159F70 unkA0;
               char padA2[0xE];
               Sint32_x00159F70 unkB0;
               Sint32_x00159F70 ahx_dec_samples;
               Sint32_x00159F70 ahx_dec_frames;
               Sint32_x00159F70 unkBC;
               Sint32_x00159F70 ac3_dec_samples;
               Sint32_x00159F70 ac3_dec_frames;
               Sint32_x00159F70 unkC8;
               ADX_UNK_x00159F70 unkCC;
               Sint16_x00159F70 unkDC;
               Sint16_x00159F70 unkDE[2];
               char padE2[2];
               Sint32_x00159F70 unkE4;
               char padE8[8];
} ADXB_OBJ_x00159F70;
typedef ADXB_OBJ_x00159F70* ADXB_x00159F70;
typedef struct {
    Sint8_x00159F70 used;
    Sint8_x00159F70 state;
    Sint8_x00159F70 maxnch;
    Sint8_x00159F70 unk3;
    ADXB_x00159F70 adxb;
    SJ_x00159F70 sji;
    SJ_x00159F70 sjo[2];
    SJCK_x00159F70 unk14;
    SJCK_x00159F70 chunks[2];
    Sint32_x00159F70 unk2C;
    Sint32_x00159F70 unk30;
    Sint32_x00159F70 unk34;
    Sint32_x00159F70 unk38;
    Sint32_x00159F70 trap_num_samples;
    Sint32_x00159F70 trap_count;
    Sint32_x00159F70 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00159F70, Sint8_x00159F70*, Sint32_x00159F70);
    void* flt_obj;
    Sint8_x00159F70 unk58[0x40];
    Sint32_x00159F70 unk98;
    Sint32_x00159F70 lnkflg;
} ADXSJD_OBJ_x00159F70;
typedef ADXSJD_OBJ_x00159F70* ADXSJD_x00159F70;
Sint32_x00159F70 ADXB_GetAinfLen_x00159F70(ADXB_x00159F70 adxb) __asm__("func_00150E60");
extern void ADXB_EntryGetWrFunc_x00159F70(ADXB_x00159F70 adxb, void* (*get_wr)(void*, ptrdiff_t_x00159F70*, Sint32_x00159F70*, Sint32_x00159F70*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint16_x00159F70 ADXB_GetDefPan_x00159F70(ADXB_x00159F70 adxb, Sint32_x00159F70 arg1) __asm__("func_00150E70");
extern void ADXSJD_EntryTrapFunc_x00159F70(ADXSJD_x00159F70 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*pl2setsfreqfunc_x00159F70)(ADXB_x00159F70, Sint32_x00159F70) __asm__("pl2setsfreqfunc");
void ADXSJD_EntryTrapFunc_x00159F70(ADXSJD_x00159F70 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint16_x00159F70 fn_80041460_x00159F70(ADXSJD_x00159F70 sjd, Sint32_x00159F70 arg1) __asm__("fn_80041460");
/* ADXSJD_GetDefPan: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sjd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint16_x00159F70 fn_80041460_x00159F70(ADXSJD_x00159F70 sjd, Sint32_x00159F70 arg1) {
    if ((ADXB_GetAinfLen_x00159F70(sjd->adxb) > 0) && (((u8_x00159F70)sjd->state - 2) < 2U)) {
        return ADXB_GetDefPan_x00159F70(sjd->adxb, arg1);
    } else {
        return -0x80;
    }
}
s32 func_00150E60_x00159FD8(s32) __asm__("func_00150E60");
s32 func_00150E80_x00159FD8(s32) __asm__("func_00150E80");
s32 func_00159FD8_x00159FD8(u8 *arg0) __asm__("func_00159FD8");
s32 func_00159FD8_x00159FD8(u8 *arg0) {
    if (func_00150E60_x00159FD8(*(s32 *)((u8 *)arg0 + 4)) > 0) {
        goto block_2;
    }
    goto block_8;
block_2:
    if ((u32) (*(u8 *)((u8 *)arg0 + 1) - 2) < 2U) {
        goto block_5;
    }
    goto block_8;
block_5:
    return func_00150E80_x00159FD8(*(s32 *)((u8 *)arg0 + 4));
block_8:
    return 0;
}
s32 func_0015A030(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x98);
}
void func_0015A038(u8 *arg0) {
    func_00150D98(*(s32 *)((u8 *)arg0 + 4));
}
s32 func_0015A050(s32 arg0) {
    return arg0 + 0x58;
}
void func_0015A058(u8 *arg0) {
    func_00150E88(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015A070(u8 *arg0) {
    func_00150EC8(*(s32 *)((u8 *)arg0 + 4));
}
s32 func_0015A088(void) {
    return 0;
}
s32 func_0015A090(s32 arg0, s32 arg1) {
    D_0040E074 = arg0;
    D_0040E078 = arg1;
    return 0;
}
extern s32 (*D_0040E074_x0015A0A8)(s32, s32) __asm__("D_0040E074");
extern s32 D_0040E078_x0015A0A8 __asm__("D_0040E078");
s32 func_0015A0A8_x0015A0A8(s32 arg0) __asm__("func_0015A0A8");
s32 func_0015A0A8_x0015A0A8(s32 arg0) {
    if (D_0040E074_x0015A0A8 != NULL) {
        D_0040E074_x0015A0A8(D_0040E078_x0015A0A8, arg0);
    }
    return 0;
}
s32 func_0015A0E0(void) {
    D_0040E070 += 1;
    return 0;
}
s32 func_0015A100(void) {
    D_0040E070 -= 1;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A120);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A2D8);
s32 func_0015A348(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg0 = *arg2 + (*arg0 * *arg1);
    return 0;
}
s32 func_0015A368(void) {
    return 0x100;
}
s32 *func_0015A370(void) {
    return &D_00461778;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A380);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A3B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A508);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A570);
void func_0015A730(void) {
    memset(&D_0040F848, 0, 0xC0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A758);
s32 memset_x0015A7B8() __asm__("memset");
void func_0015A7B8_x0015A7B8(s8 *arg0) __asm__("func_0015A7B8");
void func_0015A7B8_x0015A7B8(s8 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset_x0015A7B8(arg0, 0, 0xC);
    }
}
void func_0015A7F0_x0015A7F0(u8 *arg0, s16 arg1, s16 arg2) __asm__("func_0015A7F0");
void func_0015A7F0_x0015A7F0(u8 *arg0, s16 arg1, s16 arg2)
{
  *((s16 *) (((u8 *) arg0) + 6)) = arg2;
 do { } while (0);
  *((s16 *) (((u8 *) arg0) + 4)) = arg1;
}
void func_0015A800_x0015A800(u8 *arg0, s16 arg1, s16 arg2) __asm__("func_0015A800");
void func_0015A800_x0015A800(u8 *arg0, s16 arg1, s16 arg2)
{
  *((s16 *) (((u8 *) arg0) + 8)) = arg1;
  *((s16 *) (((u8 *) arg0) + 0xA)) = arg2;
}
void func_0015A810(u8 *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = *(u16 *)((u8 *)arg0 + 8);
    *arg2 = *(u16 *)((u8 *)arg0 + 0xA);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A828);
s8 *func_0015A8A0(s32 arg0) {
    s32 var_a3;
    s32 var_v1;
    s8 *var_a0;
    s8 *var_a1;
    s8 *var_a2;
    s8 *var_v0;

    var_v0 = func_0015A758();
    if (var_v0 != NULL) {
        var_a0 = &D_0040F908;
        var_a3 = 0;
        if (D_0040F908 != 0) {
            var_a2 = &D_0040F908;
            var_a1 = &D_0040F908;
loop_3:
            var_a3 += 1;
            var_a2 += 0x90;
            var_v1 = var_a3 < 0x10;
            var_a1 += 0x90;
            if (var_v1 != 0) {
                var_a0 = var_a1;
                if (*var_a2 == 0) {

                } else {
                    goto loop_3;
                }
            }
        } else {
            var_v1 = 1;
        }
        *(s32 *)((u8 *)var_a0 + 0x14) = arg0;
        *(s8 **)((u8 *)var_a0 + 0x88) = var_v0;
        if (var_v1 != 0) {
            *(s8 *)((u8 *)var_a0 + 0) = 1;
            return var_a0;
        }
        var_v0 = NULL;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
s32 memset_x0015A940() __asm__("memset");
void func_0015A940_x0015A940(s8 *arg0) __asm__("func_0015A940");
void func_0015A940_x0015A940(s8 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset_x0015A940(arg0, 0, 0x90);
    }
}
void func_0015A978_x0015A978(u8 *arg0, s16 arg1, s16 arg2) __asm__("func_0015A978");
void func_0015A978_x0015A978(u8 *arg0, s16 arg1, s16 arg2)
{
  u8 *new_var;
  *((s16 *) (((u8 *) arg0) + 6)) = arg2;
 do { } while (0);
  new_var = (u8 *) arg0;
  *((s16 *) (new_var + 4)) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A988);
void func_0015A9E0_x0015A9E0(u8 *arg0, s16 arg1, s16 arg2) __asm__("func_0015A9E0");
void func_0015A9E0_x0015A9E0(u8 *arg0, s16 arg1, s16 arg2)
{
  *((s16 *) (((u8 *) arg0) + 0xA)) = arg2;
 do { *((s16 *) (((u8 *) arg0) + 8)) = arg1; } while (0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A9F0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015AAD8);
s16 func_0015AB70(s32 arg0, s32 arg1) {
    s16 var_v0;

    var_v0 = 0;
    if (arg0 != 0) {
        var_v0 = *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x18);
    }
    return var_v0;
}
s8 func_0015AB90(s32 arg0, s32 arg1) {
    s8 var_v0;

    var_v0 = 0;
    if (arg0 != 0) {
        var_v0 = *(s8 *)((u8 *)(arg1 + arg0) + 0x58);
    }
    return var_v0;
}
void func_0015ABA8(s32 arg0, s32 arg1, s8 arg2) {
    *(s8 *)((u8 *)(arg1 + arg0) + 0x58) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015ABB8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015AD28);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015AF88);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015B210);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015B3D0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015B500);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015B5B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015B6B0);
void func_0015BE08(void) {
    func_0015A0E0();
    memset(&D_0040E088, 0, 0x17C0);
}
void func_0015BE38(void) {
    func_0015A100();
    memset(&D_0040E088, 0, 0x17C0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015BE68);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C038);
s8 func_0015C0A0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C0A8);
void func_0015C1D0(u8 *arg0) {
    *(s8 *)((u8 *)arg0 + 3) = 1;
}
void func_0015C1E0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x5C) = arg1;
}
void func_0015C1E8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x48) = arg1;
}
void func_0015C1F0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x58) = arg1;
}
void func_0015C1F8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x54) = arg1;
}
s32 func_0015A8A0_x0015C200(s32) __asm__("func_0015A8A0");
s32 func_0015A940_x0015C200(s32) __asm__("func_0015A940");
void func_0015C200_x0015C200(u8 *arg0, s32 arg1) __asm__("func_0015C200");
void func_0015C200_x0015C200(u8 *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  *((s32 *) (((u8 *) arg0) + 0x44)) = arg1;
  temp_v0 = *((s32 *) (((u8 *) arg0) + 0x80));
  if (temp_v0 != 0)
  {
    func_0015A940_x0015C200(temp_v0);
  }
  temp_v0 = func_0015A8A0_x0015C200(*((s32 *) (((u8 *) arg0) + 0x44)));
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x84));
  *((s32 *) (((u8 *) arg0) + 0x80)) = temp_v0;
  if (temp_v1 != 0)
  {
    func_0015A940_x0015C200(temp_v1);
  }
  *((s32 *) (((u8 *) arg0) + 0x84)) = func_0015A8A0_x0015C200(*((s32 *) (((u8 *) arg0) + 0x44)));
}
void func_0015C268(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x50) = arg1;
}
void func_0015C270_x0015C270(u8 *arg0, s32 arg1) __asm__("func_0015C270");
void func_0015C270_x0015C270(u8 *arg0, s32 arg1)
{
  *((s32 *) (((u8 *) arg0) + 0x60)) = (*((s32 *) (((u8 *) arg0) + 0x3C)) = arg1);
}
void func_0015C280(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x64) = arg1;
}
void func_0015C288(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x6C) = arg1;
}
void func_0015C290(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x68) = arg1;
}
void func_0015C298(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x70) = arg1;
}
void func_0015C2A0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x74) = arg1;
}
void func_0015C2A8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x78) = arg1;
}
void func_0015C2B0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x7C) = arg1;
}
void func_0015C2B8_x0015C2B8(u8 *arg0, unsigned int arg1) __asm__("func_0015C2B8");
void func_0015C2B8_x0015C2B8(u8 *arg0, unsigned int arg1)
{
  if ((*((s8 *) (((u8 *) arg0) + 0x2D6))) != 1)
  {
    *((s8 *) (((u8 *) arg0) + 0x2D6)) = 1;
    *((s32 *) (((u8 *) arg0) + 0x48)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x48))) + 0x24);
  }
  *((s16 *) (((u8 *) arg0) + 0x2E8)) = arg1;
}
void func_0015C2E0_x0015C2E0(u8 *arg0, s32 arg1, unsigned int arg2) __asm__("func_0015C2E0");
void func_0015C2E0_x0015C2E0(u8 *arg0, s32 arg1, unsigned int arg2)
{
  if ((*((s8 *) (((u8 *) arg0) + 0x2D6))) != 1)
  {
    *((s8 *) (((u8 *) arg0) + 0x2D6)) = 1;
    *((s32 *) (((u8 *) arg0) + 0x48)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x48))) + 0x24);
  }
  *((s16 *) (((u8 *) ((arg1 * 2) + arg0)) + 0x2EA)) = arg2;
}
s32 func_00128040_x0015C310(s32, s32, s32) __asm__("func_00128040");
s32 memset_x0015C310(s32, s32, s32) __asm__("memset");
void func_0015C310_x0015C310(u8 *arg0, s32 arg1) __asm__("func_0015C310");
void func_0015C310_x0015C310(u8 *arg0, s32 arg1)
{
  s32 temp_s0;
  temp_s0 = arg0 + 0x2D7;
  if ((*((s8 *) (((u8 *) arg0) + 0x2D6))) != 1)
  {
    *((s8 *) (((u8 *) arg0) + 0x2D6)) = 1;
    *((s32 *) (((u8 *) arg0) + 0x48)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x48))) + 0x24);
  }
  memset_x0015C310(arg0 + 0x2D7, 0, 0x10);
  func_00128040_x0015C310(arg0 + 0x2D7, arg1, 0x10);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C378);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C3C8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C418);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C478);
s32 func_0015C4E0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x2C);
}
s32 func_0015C4E8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}
void func_0015C4F0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x30) = arg1;
}
s32 func_0015C4F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}
void func_0015C500_x0015C500(s32 arg0, u32 arg1, s32 arg2) __asm__("func_0015C500");
void func_0015C500_x0015C500(s32 arg0, u32 arg1, s32 arg2)
{
  u8 *new_var;
  if (arg1 < 2U)
  {
    new_var = ((u8 *) (arg0 + (arg1 * 4))) + 4;
    *((s32 *) new_var) = arg2;
  }
 do { } while (0);
}
void func_0015C520(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C528);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C698);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C730);
void func_0015C770(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_0040E088;
    var_s1 = 7;
    do {
        if (*var_s0 == 1) {
            func_0015C730(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x2F8;
    } while (var_s1 >= 0);
}
void func_0015C7D0(s32 arg0) {
    D_0041020C = arg0;
}
void func_0015C7E0(s32 arg0) {
    D_00410210 = 0x28 - arg0;
    D_00410214 = arg0;
}
s32 func_0015C800(void) {
    memset(&D_00410228, 0, 0xF00);
    return 1;
}
void func_0015C830(void) {

}
void func_0015C838(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C840);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C948);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CA18);
typedef int s32_x0015CAE8;
typedef s32_x0015CAE8 ptrdiff_t_x0015CAE8;
typedef unsigned char Uint8_x0015CAE8;
typedef char Sint8_x0015CAE8;
typedef unsigned short Uint16_x0015CAE8;
typedef signed short Sint16_x0015CAE8;
typedef unsigned int Uint32_x0015CAE8;
typedef signed int Sint32_x0015CAE8;
typedef Sint32_x0015CAE8 Bool_x0015CAE8;
typedef char Char8_x0015CAE8;
typedef struct _UUID_x0015CAE8 {
    Uint32_x0015CAE8 Data1;
    Uint16_x0015CAE8 Data2;
    Uint16_x0015CAE8 Data3;
    Uint8_x0015CAE8 Data4[8];
} UUID_x0015CAE8;
typedef struct {
        Sint8_x0015CAE8 *data;
        Sint32_x0015CAE8 len;
} SJCK_x0015CAE8;
typedef struct {
        struct _sj_vtbl_x0015CAE8 *vtbl;
} SJ_OBJ_x0015CAE8;
typedef SJ_OBJ_x0015CAE8 *SJ_x0015CAE8;
typedef struct _sj_vtbl_x0015CAE8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CAE8 sj);
        UUID_x0015CAE8 *(*GetUuid)(SJ_x0015CAE8 sj);
        void (*Reset)(SJ_x0015CAE8 sj);
        void (*GetChunk)(SJ_x0015CAE8 sj, Sint32_x0015CAE8 id, Sint32_x0015CAE8 nbyte, SJCK_x0015CAE8 *ck);
        void (*UngetChunk)(SJ_x0015CAE8 sj, Sint32_x0015CAE8 id, SJCK_x0015CAE8 *ck);
        void (*PutChunk)(SJ_x0015CAE8 sj, Sint32_x0015CAE8 id, SJCK_x0015CAE8 *ck);
        Sint32_x0015CAE8 (*GetNumData)(SJ_x0015CAE8 sj, Sint32_x0015CAE8 id);
        Sint32_x0015CAE8 (*IsGetChunk)(SJ_x0015CAE8 sj, Sint32_x0015CAE8 id, Sint32_x0015CAE8 nbyte, Sint32_x0015CAE8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CAE8 sj,
                                        void (*func)(void *obj, Sint32_x0015CAE8 ecode), void *obj);
} SJ_IF_x0015CAE8;
extern int* sceCdCallback_x0015CAE8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CAE8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CAE8;
typedef struct {
               Sint16_x0015CAE8 unk0;
               Sint16_x0015CAE8 unk2;
               Sint16_x0015CAE8 unk4;
               Sint16_x0015CAE8 unk6;
} ADXPD_OBJ_SUB_x0015CAE8;
typedef struct {
               Sint32_x0015CAE8 used;
               Sint32_x0015CAE8 unk4;
               Sint32_x0015CAE8 mode;
               Sint32_x0015CAE8 stat;
               Sint32_x0015CAE8 num_blk;
               Sint32_x0015CAE8 unk14;
               Sint32_x0015CAE8 unk18;
               Sint32_x0015CAE8 unk1C;
               Sint32_x0015CAE8 unk20;
               Sint32_x0015CAE8 unk24;
               ADXPD_OBJ_SUB_x0015CAE8 unk28;
               Sint16_x0015CAE8 unk30;
               Sint16_x0015CAE8 unk32;
               Sint16_x0015CAE8 unk34;
               Sint16_x0015CAE8 unk36;
               Sint16_x0015CAE8 unk38;
               Sint16_x0015CAE8 unk3A;
} ADXPD_OBJ_x0015CAE8;
typedef ADXPD_OBJ_x0015CAE8* ADXPD_x0015CAE8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CAE8;
typedef struct {
               Sint32_x0015CAE8 unk0;
               Sint32_x0015CAE8 unk4;
               Sint32_x0015CAE8 unk8;
               Sint32_x0015CAE8 unkC;
               Sint32_x0015CAE8 unk10;
               void* unk14;
               Sint32_x0015CAE8 unk18;
               Sint32_x0015CAE8 unk1C;
               Sint32_x0015CAE8 unk20;
               Sint32_x0015CAE8 unk24;
               Sint32_x0015CAE8 unk28;
} ADXB_UNK_x0015CAE8;
typedef struct {
               Sint16_x0015CAE8 unk0;
               Sint16_x0015CAE8 unk2;
               Sint32_x0015CAE8 stat;
               ADXPD_x0015CAE8 adxpd;
               Sint8_x0015CAE8 encoding_type;
               Sint8_x0015CAE8 sample_bitdepth;
               Sint8_x0015CAE8 channel_count;
               Sint8_x0015CAE8 block_size;
               Sint32_x0015CAE8 samples_per_block;
               Sint32_x0015CAE8 sample_rate;
               Sint32_x0015CAE8 total_samples;
               Sint16_x0015CAE8 unk1C;
               char pad1E[2];
               Sint32_x0015CAE8 unk20;
               Sint16_x0015CAE8 unk24;
               Sint16_x0015CAE8 unk26;
               Sint32_x0015CAE8 unk28;
               Sint32_x0015CAE8 unk2C;
               Sint32_x0015CAE8 unk30;
               Sint32_x0015CAE8 unk34;
               Sint32_x0015CAE8 unk38;
               void* unk3C;
               Sint32_x0015CAE8 unk40;
               Sint32_x0015CAE8 unk44;
               ADXB_UNK_x0015CAE8 unk48;
               Sint32_x0015CAE8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CAE8*, Sint32_x0015CAE8*, Sint32_x0015CAE8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CAE8, Sint32_x0015CAE8);
               Sint32_x0015CAE8 unk84;
               Sint32_x0015CAE8 unk88;
               Sint32_x0015CAE8 unk8C;
               Sint32_x0015CAE8 dec_num_sample;
               Sint32_x0015CAE8 dec_data_len;
               Sint16_x0015CAE8 format;
               Sint16_x0015CAE8 unk9A;
               Sint16_x0015CAE8 unk9C;
               Sint16_x0015CAE8 unk9E;
               Sint16_x0015CAE8 unkA0;
               char padA2[0xE];
               Sint32_x0015CAE8 unkB0;
               Sint32_x0015CAE8 ahx_dec_samples;
               Sint32_x0015CAE8 ahx_dec_frames;
               Sint32_x0015CAE8 unkBC;
               Sint32_x0015CAE8 ac3_dec_samples;
               Sint32_x0015CAE8 ac3_dec_frames;
               Sint32_x0015CAE8 unkC8;
               ADX_UNK_x0015CAE8 unkCC;
               Sint16_x0015CAE8 unkDC;
               Sint16_x0015CAE8 unkDE[2];
               char padE2[2];
               Sint32_x0015CAE8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CAE8;
typedef ADXB_OBJ_x0015CAE8* ADXB_x0015CAE8;
typedef struct {
    Sint8_x0015CAE8 used;
    Sint8_x0015CAE8 state;
    Sint8_x0015CAE8 maxnch;
    Sint8_x0015CAE8 unk3;
    ADXB_x0015CAE8 adxb;
    SJ_x0015CAE8 sji;
    SJ_x0015CAE8 sjo[2];
    SJCK_x0015CAE8 unk14;
    SJCK_x0015CAE8 chunks[2];
    Sint32_x0015CAE8 unk2C;
    Sint32_x0015CAE8 unk30;
    Sint32_x0015CAE8 unk34;
    Sint32_x0015CAE8 unk38;
    Sint32_x0015CAE8 trap_num_samples;
    Sint32_x0015CAE8 trap_count;
    Sint32_x0015CAE8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CAE8, Sint8_x0015CAE8*, Sint32_x0015CAE8);
    void* flt_obj;
    Sint8_x0015CAE8 unk58[0x40];
    Sint32_x0015CAE8 unk98;
    Sint32_x0015CAE8 lnkflg;
} ADXSJD_OBJ_x0015CAE8;
typedef ADXSJD_OBJ_x0015CAE8* ADXSJD_x0015CAE8;
typedef struct {
    Sint32_x0015CAE8 unk0;
    SJ_x0015CAE8 sj;
} SJX_UNK_0_x0015CAE8;
typedef struct {
    Sint8_x0015CAE8 used;
    Sint8_x0015CAE8 unk1;
    Sint16_x0015CAE8 unk2;
    SJ_x0015CAE8 sj;
    void* unk8;
    Sint32_x0015CAE8 unkC;
    SJX_UNK_0_x0015CAE8* unk10;
} SJX_OBJ_x0015CAE8;
typedef SJX_OBJ_x0015CAE8* SJX_x0015CAE8;
typedef struct {
    Sint8_x0015CAE8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CAE8 unk8;
    SJX_x0015CAE8 unkC;
    SJCK_x0015CAE8 chunk;
} PS2PSJ_OBJ_x0015CAE8;
typedef PS2PSJ_OBJ_x0015CAE8* PS2PSJ_x0015CAE8;
typedef struct {
               Sint8_x0015CAE8 unk0;
               Sint8_x0015CAE8 unk1;
               Sint8_x0015CAE8 unk2;
               SJ_x0015CAE8 unk4;
               SJ_x0015CAE8 unk8;
               SJCK_x0015CAE8 unkC;
               SJCK_x0015CAE8 unk14;
               sceSifDmaData_x0015CAE8 dma_data;
               Sint32_x0015CAE8 unk2C;
               Sint32_x0015CAE8 unk30;
               Sint32_x0015CAE8 unk34;
               Sint32_x0015CAE8 unk38;
               Sint32_x0015CAE8 unk3C;
} DTR_OBJ_x0015CAE8;
typedef DTR_OBJ_x0015CAE8* DTR_x0015CAE8;
typedef struct {
    Sint8_x0015CAE8 used;
    Sint32_x0015CAE8 maxnch;
    PS2PSJ_x0015CAE8 psj[2];
    DTR_x0015CAE8 dtr[2];
    SJ_x0015CAE8 sjo[2];
    void* unk20;
    Sint32_x0015CAE8 unk24;
    Sint32_x0015CAE8 unk28;
    Sint32_x0015CAE8 unk2C;
    Sint8_x0015CAE8 unk30;
    Sint8_x0015CAE8 unk31;
    Sint8_x0015CAE8 num_chan;
    Sint8_x0015CAE8 unk33;
    Sint32_x0015CAE8 sfreq;
    Sint32_x0015CAE8 unk38;
    Sint32_x0015CAE8 out_vol;
    Sint32_x0015CAE8 unk40;
    Sint32_x0015CAE8 pan[2];
    Sint32_x0015CAE8 unk4C[2];
    Sint32_x0015CAE8 unk54;
    Sint32_x0015CAE8 unk58;
    Sint8_x0015CAE8 unk5C;
    Sint8_x0015CAE8 unk5D;
    Sint8_x0015CAE8 unk5E;
    Sint8_x0015CAE8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CAE8;
typedef ADXRNA_OBJ_x0015CAE8* ADXRNA_x0015CAE8;
typedef struct {
    Sint8_x0015CAE8 unk0;
    Sint8_x0015CAE8 stat;
    Sint8_x0015CAE8 read_flg;
    Sint8_x0015CAE8 unk3;
    SJ_x0015CAE8 sj;
    void* cvfs;
    Sint32_x0015CAE8 unkC;
    Sint32_x0015CAE8 file_len;
    Sint32_x0015CAE8 file_sct;
    Sint32_x0015CAE8 unk18;
    Sint32_x0015CAE8 unk1C;
    Sint32_x0015CAE8 unk20;
    SJCK_x0015CAE8 unk24;
    Sint32_x0015CAE8 req_rd_size;
    Sint32_x0015CAE8 eos;
    Uint32_x0015CAE8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CAE8 unk40;
    Sint8_x0015CAE8 pause;
    Sint8_x0015CAE8 unk45;
    Sint8_x0015CAE8 unk46;
    Sint8_x0015CAE8 unk47;
    Sint8_x0015CAE8 unk48;
    Sint8_x0015CAE8 unk49;
    char pad4A[6];
    const Char8_x0015CAE8* fname;
    void* dir;
    Sint32_x0015CAE8 cur_ofst;
    Uint32_x0015CAE8 unk5C;
} ADXSTM_OBJ_x0015CAE8;
typedef ADXSTM_OBJ_x0015CAE8* ADXSTM_x0015CAE8;
extern void cvFsEntryErrFunc_x0015CAE8(void (*function)(void*, const Char8_x0015CAE8*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CAE8(void (*callback)(void*, Char8_x0015CAE8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CAE8 SVM_SetCbSvr_x0015CAE8(Sint32_x0015CAE8, Sint32_x0015CAE8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CAE8(Sint32_x0015CAE8, Sint32_x0015CAE8, Sint32_x0015CAE8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CAE8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CAE8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CAE8 {
                   Sint8_x0015CAE8 used;
                   Sint8_x0015CAE8 stat;
                   Sint8_x0015CAE8 pmode;
                   Sint8_x0015CAE8 maxnch;
                   ADXSJD_x0015CAE8 sjd;
                   ADXSTM_x0015CAE8 stm;
                   ADXRNA_x0015CAE8 rna;
                   SJ_x0015CAE8 sjf;
                   SJ_x0015CAE8 sji;
                   SJ_x0015CAE8 sjo[(2)];
                   Sint8_x0015CAE8 *ibuf;
                   Sint32_x0015CAE8 ibuflen;
                   Sint32_x0015CAE8 ibufxlen;
                   Sint16_x0015CAE8 *obuf;
                   Sint32_x0015CAE8 obufsize;
                   Sint32_x0015CAE8 obufdist;
                   Sint32_x0015CAE8 svrfreq;
                   Sint16_x0015CAE8 maxsct;
                   Sint16_x0015CAE8 minsct;
                   Sint16_x0015CAE8 outvol;
                   Sint16_x0015CAE8 outpan[(2)];
                   Sint16_x0015CAE8 unk46;
                   Sint32_x0015CAE8 maxdecsmpl;
                   Sint32_x0015CAE8 lpcnt;
                   Sint32_x0015CAE8 lp_skiplen;
                   Sint32_x0015CAE8 trp;
                   Sint32_x0015CAE8 wpos;
                   Sint32_x0015CAE8 mofst;
                   Sint16_x0015CAE8 ercode;
                   Sint32_x0015CAE8 edecpos;
                   Sint16_x0015CAE8 edeccnt;
                   Sint16_x0015CAE8 eshrtcnt;
                   Sint8_x0015CAE8 lpflg;
                   Sint8_x0015CAE8 autorcvr;
                   Sint8_x0015CAE8 fltmode;
                   Sint8_x0015CAE8 execflag;
                   Sint8_x0015CAE8 pstwait_flag;
                   Sint8_x0015CAE8 pstready_flag;
                   Sint8_x0015CAE8 pause_flag;
                   void *amp;
                   SJ_x0015CAE8 ampsji[(2)];
                   SJ_x0015CAE8 ampsjo[(2)];
                   Sint32_x0015CAE8 time_ofst;
                   Sint32_x0015CAE8 lesct;
                   Sint32_x0015CAE8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CAE8 lnkflg;
                   Sint8_x0015CAE8 rsv;
                   Sint16_x0015CAE8 rsv2;
                   Uint32_x0015CAE8 tvofst;
                   Uint32_x0015CAE8 svcnt;
                   Uint32_x0015CAE8 decofst;
                   Sint32_x0015CAE8 flush_nsmpl;
                   Sint8_x0015CAE8 unkAC;
                   Sint8_x0015CAE8 padAD[1];
               Char8_x0015CAE8* unkB0;
               Sint32_x0015CAE8 padB4;
               Sint32_x0015CAE8 padB8;
               Sint32_x0015CAE8 padBC;
               Sint32_x0015CAE8 padC0;
} ADX_TALK_x0015CAE8;
typedef ADX_TALK_x0015CAE8 *ADXT_x0015CAE8;
extern void ADXT_EntryErrFunc_x0015CAE8(void (*func)(void *obj, Sint8_x0015CAE8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CAE8(ADXT_x0015CAE8 adxt,
                void (*f)(void *obj, Sint32_x0015CAE8 ch, void *data, Sint32_x0015CAE8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CAE8(Bool_x0015CAE8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CAE8(Bool_x0015CAE8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CAE8(void (*fn)(void *obj, Char8_x0015CAE8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CAE8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
ADXSTM_x0015CAE8 ADXSTMF_CreateCvfsRt_x0015CAE8(Sint32_x0015CAE8 arg0, Sint32_x0015CAE8 offset, Sint32_x0015CAE8 file_len, SJ_x0015CAE8 sj) __asm__("func_0015C948");
ADXSTM_x0015CAE8 ADXSTMF_CreateCvfs_x0015CAE8(Sint32_x0015CAE8 arg0, Sint32_x0015CAE8 offset, Sint32_x0015CAE8 file_len, SJ_x0015CAE8 sj) __asm__("func_0015CA18");
ADXSTM_x0015CAE8 func_0015CAE8_x0015CAE8(SJ_x0015CAE8 sj, Sint32_x0015CAE8 offset) __asm__("func_0015CAE8");
/* ADXSTM_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
ADXSTM_x0015CAE8 func_0015CAE8_x0015CAE8(SJ_x0015CAE8 sj, Sint32_x0015CAE8 offset) {
    ADXSTM_x0015CAE8 stm;
    if (offset < 0x100) {
        stm = ADXSTMF_CreateCvfsRt_x0015CAE8(0, 0, 0, sj);
    } else {
        stm = ADXSTMF_CreateCvfs_x0015CAE8(0, 0, 0, sj);
    }
    return stm;
}
void func_0015CB30(s8 *arg0) {
    if (arg0 != NULL) {
        func_0015CE38();
        func_0015CC78(arg0);
        *arg0 = 0;
        memset(arg0, 0, 0x60);
    }
}
typedef int s32_x0015CB88;
typedef s32_x0015CB88 ptrdiff_t_x0015CB88;
typedef unsigned char Uint8_x0015CB88;
typedef char Sint8_x0015CB88;
typedef unsigned short Uint16_x0015CB88;
typedef signed short Sint16_x0015CB88;
typedef unsigned int Uint32_x0015CB88;
typedef signed int Sint32_x0015CB88;
typedef Sint32_x0015CB88 Bool_x0015CB88;
typedef char Char8_x0015CB88;
typedef struct _UUID_x0015CB88 {
    Uint32_x0015CB88 Data1;
    Uint16_x0015CB88 Data2;
    Uint16_x0015CB88 Data3;
    Uint8_x0015CB88 Data4[8];
} UUID_x0015CB88;
typedef struct {
        Sint8_x0015CB88 *data;
        Sint32_x0015CB88 len;
} SJCK_x0015CB88;
typedef struct {
        struct _sj_vtbl_x0015CB88 *vtbl;
} SJ_OBJ_x0015CB88;
typedef SJ_OBJ_x0015CB88 *SJ_x0015CB88;
typedef struct _sj_vtbl_x0015CB88 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CB88 sj);
        UUID_x0015CB88 *(*GetUuid)(SJ_x0015CB88 sj);
        void (*Reset)(SJ_x0015CB88 sj);
        void (*GetChunk)(SJ_x0015CB88 sj, Sint32_x0015CB88 id, Sint32_x0015CB88 nbyte, SJCK_x0015CB88 *ck);
        void (*UngetChunk)(SJ_x0015CB88 sj, Sint32_x0015CB88 id, SJCK_x0015CB88 *ck);
        void (*PutChunk)(SJ_x0015CB88 sj, Sint32_x0015CB88 id, SJCK_x0015CB88 *ck);
        Sint32_x0015CB88 (*GetNumData)(SJ_x0015CB88 sj, Sint32_x0015CB88 id);
        Sint32_x0015CB88 (*IsGetChunk)(SJ_x0015CB88 sj, Sint32_x0015CB88 id, Sint32_x0015CB88 nbyte, Sint32_x0015CB88 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CB88 sj,
                                        void (*func)(void *obj, Sint32_x0015CB88 ecode), void *obj);
} SJ_IF_x0015CB88;
extern int* sceCdCallback_x0015CB88(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CB88(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CB88;
typedef struct {
               Sint16_x0015CB88 unk0;
               Sint16_x0015CB88 unk2;
               Sint16_x0015CB88 unk4;
               Sint16_x0015CB88 unk6;
} ADXPD_OBJ_SUB_x0015CB88;
typedef struct {
               Sint32_x0015CB88 used;
               Sint32_x0015CB88 unk4;
               Sint32_x0015CB88 mode;
               Sint32_x0015CB88 stat;
               Sint32_x0015CB88 num_blk;
               Sint32_x0015CB88 unk14;
               Sint32_x0015CB88 unk18;
               Sint32_x0015CB88 unk1C;
               Sint32_x0015CB88 unk20;
               Sint32_x0015CB88 unk24;
               ADXPD_OBJ_SUB_x0015CB88 unk28;
               Sint16_x0015CB88 unk30;
               Sint16_x0015CB88 unk32;
               Sint16_x0015CB88 unk34;
               Sint16_x0015CB88 unk36;
               Sint16_x0015CB88 unk38;
               Sint16_x0015CB88 unk3A;
} ADXPD_OBJ_x0015CB88;
typedef ADXPD_OBJ_x0015CB88* ADXPD_x0015CB88;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CB88;
typedef struct {
               Sint32_x0015CB88 unk0;
               Sint32_x0015CB88 unk4;
               Sint32_x0015CB88 unk8;
               Sint32_x0015CB88 unkC;
               Sint32_x0015CB88 unk10;
               void* unk14;
               Sint32_x0015CB88 unk18;
               Sint32_x0015CB88 unk1C;
               Sint32_x0015CB88 unk20;
               Sint32_x0015CB88 unk24;
               Sint32_x0015CB88 unk28;
} ADXB_UNK_x0015CB88;
typedef struct {
               Sint16_x0015CB88 unk0;
               Sint16_x0015CB88 unk2;
               Sint32_x0015CB88 stat;
               ADXPD_x0015CB88 adxpd;
               Sint8_x0015CB88 encoding_type;
               Sint8_x0015CB88 sample_bitdepth;
               Sint8_x0015CB88 channel_count;
               Sint8_x0015CB88 block_size;
               Sint32_x0015CB88 samples_per_block;
               Sint32_x0015CB88 sample_rate;
               Sint32_x0015CB88 total_samples;
               Sint16_x0015CB88 unk1C;
               char pad1E[2];
               Sint32_x0015CB88 unk20;
               Sint16_x0015CB88 unk24;
               Sint16_x0015CB88 unk26;
               Sint32_x0015CB88 unk28;
               Sint32_x0015CB88 unk2C;
               Sint32_x0015CB88 unk30;
               Sint32_x0015CB88 unk34;
               Sint32_x0015CB88 unk38;
               void* unk3C;
               Sint32_x0015CB88 unk40;
               Sint32_x0015CB88 unk44;
               ADXB_UNK_x0015CB88 unk48;
               Sint32_x0015CB88 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CB88*, Sint32_x0015CB88*, Sint32_x0015CB88*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CB88, Sint32_x0015CB88);
               Sint32_x0015CB88 unk84;
               Sint32_x0015CB88 unk88;
               Sint32_x0015CB88 unk8C;
               Sint32_x0015CB88 dec_num_sample;
               Sint32_x0015CB88 dec_data_len;
               Sint16_x0015CB88 format;
               Sint16_x0015CB88 unk9A;
               Sint16_x0015CB88 unk9C;
               Sint16_x0015CB88 unk9E;
               Sint16_x0015CB88 unkA0;
               char padA2[0xE];
               Sint32_x0015CB88 unkB0;
               Sint32_x0015CB88 ahx_dec_samples;
               Sint32_x0015CB88 ahx_dec_frames;
               Sint32_x0015CB88 unkBC;
               Sint32_x0015CB88 ac3_dec_samples;
               Sint32_x0015CB88 ac3_dec_frames;
               Sint32_x0015CB88 unkC8;
               ADX_UNK_x0015CB88 unkCC;
               Sint16_x0015CB88 unkDC;
               Sint16_x0015CB88 unkDE[2];
               char padE2[2];
               Sint32_x0015CB88 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CB88;
typedef ADXB_OBJ_x0015CB88* ADXB_x0015CB88;
typedef struct {
    Sint8_x0015CB88 used;
    Sint8_x0015CB88 state;
    Sint8_x0015CB88 maxnch;
    Sint8_x0015CB88 unk3;
    ADXB_x0015CB88 adxb;
    SJ_x0015CB88 sji;
    SJ_x0015CB88 sjo[2];
    SJCK_x0015CB88 unk14;
    SJCK_x0015CB88 chunks[2];
    Sint32_x0015CB88 unk2C;
    Sint32_x0015CB88 unk30;
    Sint32_x0015CB88 unk34;
    Sint32_x0015CB88 unk38;
    Sint32_x0015CB88 trap_num_samples;
    Sint32_x0015CB88 trap_count;
    Sint32_x0015CB88 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CB88, Sint8_x0015CB88*, Sint32_x0015CB88);
    void* flt_obj;
    Sint8_x0015CB88 unk58[0x40];
    Sint32_x0015CB88 unk98;
    Sint32_x0015CB88 lnkflg;
} ADXSJD_OBJ_x0015CB88;
typedef ADXSJD_OBJ_x0015CB88* ADXSJD_x0015CB88;
typedef struct {
    Sint32_x0015CB88 unk0;
    SJ_x0015CB88 sj;
} SJX_UNK_0_x0015CB88;
typedef struct {
    Sint8_x0015CB88 used;
    Sint8_x0015CB88 unk1;
    Sint16_x0015CB88 unk2;
    SJ_x0015CB88 sj;
    void* unk8;
    Sint32_x0015CB88 unkC;
    SJX_UNK_0_x0015CB88* unk10;
} SJX_OBJ_x0015CB88;
typedef SJX_OBJ_x0015CB88* SJX_x0015CB88;
typedef struct {
    Sint8_x0015CB88 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CB88 unk8;
    SJX_x0015CB88 unkC;
    SJCK_x0015CB88 chunk;
} PS2PSJ_OBJ_x0015CB88;
typedef PS2PSJ_OBJ_x0015CB88* PS2PSJ_x0015CB88;
typedef struct {
               Sint8_x0015CB88 unk0;
               Sint8_x0015CB88 unk1;
               Sint8_x0015CB88 unk2;
               SJ_x0015CB88 unk4;
               SJ_x0015CB88 unk8;
               SJCK_x0015CB88 unkC;
               SJCK_x0015CB88 unk14;
               sceSifDmaData_x0015CB88 dma_data;
               Sint32_x0015CB88 unk2C;
               Sint32_x0015CB88 unk30;
               Sint32_x0015CB88 unk34;
               Sint32_x0015CB88 unk38;
               Sint32_x0015CB88 unk3C;
} DTR_OBJ_x0015CB88;
typedef DTR_OBJ_x0015CB88* DTR_x0015CB88;
typedef struct {
    Sint8_x0015CB88 used;
    Sint32_x0015CB88 maxnch;
    PS2PSJ_x0015CB88 psj[2];
    DTR_x0015CB88 dtr[2];
    SJ_x0015CB88 sjo[2];
    void* unk20;
    Sint32_x0015CB88 unk24;
    Sint32_x0015CB88 unk28;
    Sint32_x0015CB88 unk2C;
    Sint8_x0015CB88 unk30;
    Sint8_x0015CB88 unk31;
    Sint8_x0015CB88 num_chan;
    Sint8_x0015CB88 unk33;
    Sint32_x0015CB88 sfreq;
    Sint32_x0015CB88 unk38;
    Sint32_x0015CB88 out_vol;
    Sint32_x0015CB88 unk40;
    Sint32_x0015CB88 pan[2];
    Sint32_x0015CB88 unk4C[2];
    Sint32_x0015CB88 unk54;
    Sint32_x0015CB88 unk58;
    Sint8_x0015CB88 unk5C;
    Sint8_x0015CB88 unk5D;
    Sint8_x0015CB88 unk5E;
    Sint8_x0015CB88 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CB88;
typedef ADXRNA_OBJ_x0015CB88* ADXRNA_x0015CB88;
typedef struct {
    Sint8_x0015CB88 unk0;
    Sint8_x0015CB88 stat;
    Sint8_x0015CB88 read_flg;
    Sint8_x0015CB88 unk3;
    SJ_x0015CB88 sj;
    void* cvfs;
    Sint32_x0015CB88 unkC;
    Sint32_x0015CB88 file_len;
    Sint32_x0015CB88 file_sct;
    Sint32_x0015CB88 unk18;
    Sint32_x0015CB88 unk1C;
    Sint32_x0015CB88 unk20;
    SJCK_x0015CB88 unk24;
    Sint32_x0015CB88 req_rd_size;
    Sint32_x0015CB88 eos;
    Uint32_x0015CB88 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CB88 unk40;
    Sint8_x0015CB88 pause;
    Sint8_x0015CB88 unk45;
    Sint8_x0015CB88 unk46;
    Sint8_x0015CB88 unk47;
    Sint8_x0015CB88 unk48;
    Sint8_x0015CB88 unk49;
    char pad4A[6];
    const Char8_x0015CB88* fname;
    void* dir;
    Sint32_x0015CB88 cur_ofst;
    Uint32_x0015CB88 unk5C;
} ADXSTM_OBJ_x0015CB88;
typedef ADXSTM_OBJ_x0015CB88* ADXSTM_x0015CB88;
extern void cvFsEntryErrFunc_x0015CB88(void (*function)(void*, const Char8_x0015CB88*), void* object) __asm__("cvFsEntryErrFunc");
void SVM_Lock_x0015CB88() __asm__("func_0016FF40");
void SVM_Unlock_x0015CB88() __asm__("func_0016FF58");
extern void SVM_SetCbErr_x0015CB88(void (*callback)(void*, Char8_x0015CB88*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CB88 SVM_SetCbSvr_x0015CB88(Sint32_x0015CB88, Sint32_x0015CB88 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CB88(Sint32_x0015CB88, Sint32_x0015CB88, Sint32_x0015CB88 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CB88(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CB88(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CB88 {
                   Sint8_x0015CB88 used;
                   Sint8_x0015CB88 stat;
                   Sint8_x0015CB88 pmode;
                   Sint8_x0015CB88 maxnch;
                   ADXSJD_x0015CB88 sjd;
                   ADXSTM_x0015CB88 stm;
                   ADXRNA_x0015CB88 rna;
                   SJ_x0015CB88 sjf;
                   SJ_x0015CB88 sji;
                   SJ_x0015CB88 sjo[(2)];
                   Sint8_x0015CB88 *ibuf;
                   Sint32_x0015CB88 ibuflen;
                   Sint32_x0015CB88 ibufxlen;
                   Sint16_x0015CB88 *obuf;
                   Sint32_x0015CB88 obufsize;
                   Sint32_x0015CB88 obufdist;
                   Sint32_x0015CB88 svrfreq;
                   Sint16_x0015CB88 maxsct;
                   Sint16_x0015CB88 minsct;
                   Sint16_x0015CB88 outvol;
                   Sint16_x0015CB88 outpan[(2)];
                   Sint16_x0015CB88 unk46;
                   Sint32_x0015CB88 maxdecsmpl;
                   Sint32_x0015CB88 lpcnt;
                   Sint32_x0015CB88 lp_skiplen;
                   Sint32_x0015CB88 trp;
                   Sint32_x0015CB88 wpos;
                   Sint32_x0015CB88 mofst;
                   Sint16_x0015CB88 ercode;
                   Sint32_x0015CB88 edecpos;
                   Sint16_x0015CB88 edeccnt;
                   Sint16_x0015CB88 eshrtcnt;
                   Sint8_x0015CB88 lpflg;
                   Sint8_x0015CB88 autorcvr;
                   Sint8_x0015CB88 fltmode;
                   Sint8_x0015CB88 execflag;
                   Sint8_x0015CB88 pstwait_flag;
                   Sint8_x0015CB88 pstready_flag;
                   Sint8_x0015CB88 pause_flag;
                   void *amp;
                   SJ_x0015CB88 ampsji[(2)];
                   SJ_x0015CB88 ampsjo[(2)];
                   Sint32_x0015CB88 time_ofst;
                   Sint32_x0015CB88 lesct;
                   Sint32_x0015CB88 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CB88 lnkflg;
                   Sint8_x0015CB88 rsv;
                   Sint16_x0015CB88 rsv2;
                   Uint32_x0015CB88 tvofst;
                   Uint32_x0015CB88 svcnt;
                   Uint32_x0015CB88 decofst;
                   Sint32_x0015CB88 flush_nsmpl;
                   Sint8_x0015CB88 unkAC;
                   Sint8_x0015CB88 padAD[1];
               Char8_x0015CB88* unkB0;
               Sint32_x0015CB88 padB4;
               Sint32_x0015CB88 padB8;
               Sint32_x0015CB88 padBC;
               Sint32_x0015CB88 padC0;
} ADX_TALK_x0015CB88;
typedef ADX_TALK_x0015CB88 *ADXT_x0015CB88;
extern void ADXT_EntryErrFunc_x0015CB88(void (*func)(void *obj, Sint8_x0015CB88 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CB88(ADXT_x0015CB88 adxt,
                void (*f)(void *obj, Sint32_x0015CB88 ch, void *data, Sint32_x0015CB88 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CB88(Bool_x0015CB88 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CB88(Bool_x0015CB88 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CB88(void (*fn)(void *obj, Char8_x0015CB88 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CB88(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void func_0015CB88_x0015CB88(ADXSTM_x0015CB88 stm, const Char8_x0015CB88* fname, void* dir, Sint32_x0015CB88 arg3, Sint32_x0015CB88 file_sct) __asm__("func_0015CB88");
/* ADXSTM_BindFileNw: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CB88_x0015CB88(ADXSTM_x0015CB88 stm, const Char8_x0015CB88* fname, void* dir, Sint32_x0015CB88 arg3, Sint32_x0015CB88 file_sct) {
    SVM_Lock_x0015CB88();
    stm->unkC = arg3;
    stm->file_len = file_sct << 11;
    stm->file_sct = file_sct;
    stm->fname = fname;
    stm->dir = dir;
    stm->unk45 = 1;
    SVM_Unlock_x0015CB88();
}
typedef int s32_x0015CC00;
typedef s32_x0015CC00 ptrdiff_t_x0015CC00;
typedef unsigned char Uint8_x0015CC00;
typedef char Sint8_x0015CC00;
typedef unsigned short Uint16_x0015CC00;
typedef signed short Sint16_x0015CC00;
typedef unsigned int Uint32_x0015CC00;
typedef signed int Sint32_x0015CC00;
typedef Sint32_x0015CC00 Bool_x0015CC00;
typedef char Char8_x0015CC00;
typedef struct _UUID_x0015CC00 {
    Uint32_x0015CC00 Data1;
    Uint16_x0015CC00 Data2;
    Uint16_x0015CC00 Data3;
    Uint8_x0015CC00 Data4[8];
} UUID_x0015CC00;
typedef struct {
        Sint8_x0015CC00 *data;
        Sint32_x0015CC00 len;
} SJCK_x0015CC00;
typedef struct {
        struct _sj_vtbl_x0015CC00 *vtbl;
} SJ_OBJ_x0015CC00;
typedef SJ_OBJ_x0015CC00 *SJ_x0015CC00;
typedef struct _sj_vtbl_x0015CC00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CC00 sj);
        UUID_x0015CC00 *(*GetUuid)(SJ_x0015CC00 sj);
        void (*Reset)(SJ_x0015CC00 sj);
        void (*GetChunk)(SJ_x0015CC00 sj, Sint32_x0015CC00 id, Sint32_x0015CC00 nbyte, SJCK_x0015CC00 *ck);
        void (*UngetChunk)(SJ_x0015CC00 sj, Sint32_x0015CC00 id, SJCK_x0015CC00 *ck);
        void (*PutChunk)(SJ_x0015CC00 sj, Sint32_x0015CC00 id, SJCK_x0015CC00 *ck);
        Sint32_x0015CC00 (*GetNumData)(SJ_x0015CC00 sj, Sint32_x0015CC00 id);
        Sint32_x0015CC00 (*IsGetChunk)(SJ_x0015CC00 sj, Sint32_x0015CC00 id, Sint32_x0015CC00 nbyte, Sint32_x0015CC00 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CC00 sj,
                                        void (*func)(void *obj, Sint32_x0015CC00 ecode), void *obj);
} SJ_IF_x0015CC00;
extern int* sceCdCallback_x0015CC00(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CC00(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CC00;
typedef struct {
               Sint16_x0015CC00 unk0;
               Sint16_x0015CC00 unk2;
               Sint16_x0015CC00 unk4;
               Sint16_x0015CC00 unk6;
} ADXPD_OBJ_SUB_x0015CC00;
typedef struct {
               Sint32_x0015CC00 used;
               Sint32_x0015CC00 unk4;
               Sint32_x0015CC00 mode;
               Sint32_x0015CC00 stat;
               Sint32_x0015CC00 num_blk;
               Sint32_x0015CC00 unk14;
               Sint32_x0015CC00 unk18;
               Sint32_x0015CC00 unk1C;
               Sint32_x0015CC00 unk20;
               Sint32_x0015CC00 unk24;
               ADXPD_OBJ_SUB_x0015CC00 unk28;
               Sint16_x0015CC00 unk30;
               Sint16_x0015CC00 unk32;
               Sint16_x0015CC00 unk34;
               Sint16_x0015CC00 unk36;
               Sint16_x0015CC00 unk38;
               Sint16_x0015CC00 unk3A;
} ADXPD_OBJ_x0015CC00;
typedef ADXPD_OBJ_x0015CC00* ADXPD_x0015CC00;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CC00;
typedef struct {
               Sint32_x0015CC00 unk0;
               Sint32_x0015CC00 unk4;
               Sint32_x0015CC00 unk8;
               Sint32_x0015CC00 unkC;
               Sint32_x0015CC00 unk10;
               void* unk14;
               Sint32_x0015CC00 unk18;
               Sint32_x0015CC00 unk1C;
               Sint32_x0015CC00 unk20;
               Sint32_x0015CC00 unk24;
               Sint32_x0015CC00 unk28;
} ADXB_UNK_x0015CC00;
typedef struct {
               Sint16_x0015CC00 unk0;
               Sint16_x0015CC00 unk2;
               Sint32_x0015CC00 stat;
               ADXPD_x0015CC00 adxpd;
               Sint8_x0015CC00 encoding_type;
               Sint8_x0015CC00 sample_bitdepth;
               Sint8_x0015CC00 channel_count;
               Sint8_x0015CC00 block_size;
               Sint32_x0015CC00 samples_per_block;
               Sint32_x0015CC00 sample_rate;
               Sint32_x0015CC00 total_samples;
               Sint16_x0015CC00 unk1C;
               char pad1E[2];
               Sint32_x0015CC00 unk20;
               Sint16_x0015CC00 unk24;
               Sint16_x0015CC00 unk26;
               Sint32_x0015CC00 unk28;
               Sint32_x0015CC00 unk2C;
               Sint32_x0015CC00 unk30;
               Sint32_x0015CC00 unk34;
               Sint32_x0015CC00 unk38;
               void* unk3C;
               Sint32_x0015CC00 unk40;
               Sint32_x0015CC00 unk44;
               ADXB_UNK_x0015CC00 unk48;
               Sint32_x0015CC00 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CC00*, Sint32_x0015CC00*, Sint32_x0015CC00*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CC00, Sint32_x0015CC00);
               Sint32_x0015CC00 unk84;
               Sint32_x0015CC00 unk88;
               Sint32_x0015CC00 unk8C;
               Sint32_x0015CC00 dec_num_sample;
               Sint32_x0015CC00 dec_data_len;
               Sint16_x0015CC00 format;
               Sint16_x0015CC00 unk9A;
               Sint16_x0015CC00 unk9C;
               Sint16_x0015CC00 unk9E;
               Sint16_x0015CC00 unkA0;
               char padA2[0xE];
               Sint32_x0015CC00 unkB0;
               Sint32_x0015CC00 ahx_dec_samples;
               Sint32_x0015CC00 ahx_dec_frames;
               Sint32_x0015CC00 unkBC;
               Sint32_x0015CC00 ac3_dec_samples;
               Sint32_x0015CC00 ac3_dec_frames;
               Sint32_x0015CC00 unkC8;
               ADX_UNK_x0015CC00 unkCC;
               Sint16_x0015CC00 unkDC;
               Sint16_x0015CC00 unkDE[2];
               char padE2[2];
               Sint32_x0015CC00 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CC00;
typedef ADXB_OBJ_x0015CC00* ADXB_x0015CC00;
typedef struct {
    Sint8_x0015CC00 used;
    Sint8_x0015CC00 state;
    Sint8_x0015CC00 maxnch;
    Sint8_x0015CC00 unk3;
    ADXB_x0015CC00 adxb;
    SJ_x0015CC00 sji;
    SJ_x0015CC00 sjo[2];
    SJCK_x0015CC00 unk14;
    SJCK_x0015CC00 chunks[2];
    Sint32_x0015CC00 unk2C;
    Sint32_x0015CC00 unk30;
    Sint32_x0015CC00 unk34;
    Sint32_x0015CC00 unk38;
    Sint32_x0015CC00 trap_num_samples;
    Sint32_x0015CC00 trap_count;
    Sint32_x0015CC00 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CC00, Sint8_x0015CC00*, Sint32_x0015CC00);
    void* flt_obj;
    Sint8_x0015CC00 unk58[0x40];
    Sint32_x0015CC00 unk98;
    Sint32_x0015CC00 lnkflg;
} ADXSJD_OBJ_x0015CC00;
typedef ADXSJD_OBJ_x0015CC00* ADXSJD_x0015CC00;
typedef struct {
    Sint32_x0015CC00 unk0;
    SJ_x0015CC00 sj;
} SJX_UNK_0_x0015CC00;
typedef struct {
    Sint8_x0015CC00 used;
    Sint8_x0015CC00 unk1;
    Sint16_x0015CC00 unk2;
    SJ_x0015CC00 sj;
    void* unk8;
    Sint32_x0015CC00 unkC;
    SJX_UNK_0_x0015CC00* unk10;
} SJX_OBJ_x0015CC00;
typedef SJX_OBJ_x0015CC00* SJX_x0015CC00;
typedef struct {
    Sint8_x0015CC00 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CC00 unk8;
    SJX_x0015CC00 unkC;
    SJCK_x0015CC00 chunk;
} PS2PSJ_OBJ_x0015CC00;
typedef PS2PSJ_OBJ_x0015CC00* PS2PSJ_x0015CC00;
typedef struct {
               Sint8_x0015CC00 unk0;
               Sint8_x0015CC00 unk1;
               Sint8_x0015CC00 unk2;
               SJ_x0015CC00 unk4;
               SJ_x0015CC00 unk8;
               SJCK_x0015CC00 unkC;
               SJCK_x0015CC00 unk14;
               sceSifDmaData_x0015CC00 dma_data;
               Sint32_x0015CC00 unk2C;
               Sint32_x0015CC00 unk30;
               Sint32_x0015CC00 unk34;
               Sint32_x0015CC00 unk38;
               Sint32_x0015CC00 unk3C;
} DTR_OBJ_x0015CC00;
typedef DTR_OBJ_x0015CC00* DTR_x0015CC00;
typedef struct {
    Sint8_x0015CC00 used;
    Sint32_x0015CC00 maxnch;
    PS2PSJ_x0015CC00 psj[2];
    DTR_x0015CC00 dtr[2];
    SJ_x0015CC00 sjo[2];
    void* unk20;
    Sint32_x0015CC00 unk24;
    Sint32_x0015CC00 unk28;
    Sint32_x0015CC00 unk2C;
    Sint8_x0015CC00 unk30;
    Sint8_x0015CC00 unk31;
    Sint8_x0015CC00 num_chan;
    Sint8_x0015CC00 unk33;
    Sint32_x0015CC00 sfreq;
    Sint32_x0015CC00 unk38;
    Sint32_x0015CC00 out_vol;
    Sint32_x0015CC00 unk40;
    Sint32_x0015CC00 pan[2];
    Sint32_x0015CC00 unk4C[2];
    Sint32_x0015CC00 unk54;
    Sint32_x0015CC00 unk58;
    Sint8_x0015CC00 unk5C;
    Sint8_x0015CC00 unk5D;
    Sint8_x0015CC00 unk5E;
    Sint8_x0015CC00 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CC00;
typedef ADXRNA_OBJ_x0015CC00* ADXRNA_x0015CC00;
typedef struct {
    Sint8_x0015CC00 unk0;
    Sint8_x0015CC00 stat;
    Sint8_x0015CC00 read_flg;
    Sint8_x0015CC00 unk3;
    SJ_x0015CC00 sj;
    void* cvfs;
    Sint32_x0015CC00 unkC;
    Sint32_x0015CC00 file_len;
    Sint32_x0015CC00 file_sct;
    Sint32_x0015CC00 unk18;
    Sint32_x0015CC00 unk1C;
    Sint32_x0015CC00 unk20;
    SJCK_x0015CC00 unk24;
    Sint32_x0015CC00 req_rd_size;
    Sint32_x0015CC00 eos;
    Uint32_x0015CC00 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CC00 unk40;
    Sint8_x0015CC00 pause;
    Sint8_x0015CC00 unk45;
    Sint8_x0015CC00 unk46;
    Sint8_x0015CC00 unk47;
    Sint8_x0015CC00 unk48;
    Sint8_x0015CC00 unk49;
    char pad4A[6];
    const Char8_x0015CC00* fname;
    void* dir;
    Sint32_x0015CC00 cur_ofst;
    Uint32_x0015CC00 unk5C;
} ADXSTM_OBJ_x0015CC00;
typedef ADXSTM_OBJ_x0015CC00* ADXSTM_x0015CC00;
void ADXSTM_BindFileNw_x0015CC00(ADXSTM_x0015CC00 stm, const Char8_x0015CC00* fname, void* dir, Sint32_x0015CC00 arg3, Sint32_x0015CC00 file_sct) __asm__("func_0015CB88");
extern void cvFsEntryErrFunc_x0015CC00(void (*function)(void*, const Char8_x0015CC00*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CC00(void (*callback)(void*, Char8_x0015CC00*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CC00 SVM_SetCbSvr_x0015CC00(Sint32_x0015CC00, Sint32_x0015CC00 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CC00(Sint32_x0015CC00, Sint32_x0015CC00, Sint32_x0015CC00 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CC00(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CC00(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CC00 {
                   Sint8_x0015CC00 used;
                   Sint8_x0015CC00 stat;
                   Sint8_x0015CC00 pmode;
                   Sint8_x0015CC00 maxnch;
                   ADXSJD_x0015CC00 sjd;
                   ADXSTM_x0015CC00 stm;
                   ADXRNA_x0015CC00 rna;
                   SJ_x0015CC00 sjf;
                   SJ_x0015CC00 sji;
                   SJ_x0015CC00 sjo[(2)];
                   Sint8_x0015CC00 *ibuf;
                   Sint32_x0015CC00 ibuflen;
                   Sint32_x0015CC00 ibufxlen;
                   Sint16_x0015CC00 *obuf;
                   Sint32_x0015CC00 obufsize;
                   Sint32_x0015CC00 obufdist;
                   Sint32_x0015CC00 svrfreq;
                   Sint16_x0015CC00 maxsct;
                   Sint16_x0015CC00 minsct;
                   Sint16_x0015CC00 outvol;
                   Sint16_x0015CC00 outpan[(2)];
                   Sint16_x0015CC00 unk46;
                   Sint32_x0015CC00 maxdecsmpl;
                   Sint32_x0015CC00 lpcnt;
                   Sint32_x0015CC00 lp_skiplen;
                   Sint32_x0015CC00 trp;
                   Sint32_x0015CC00 wpos;
                   Sint32_x0015CC00 mofst;
                   Sint16_x0015CC00 ercode;
                   Sint32_x0015CC00 edecpos;
                   Sint16_x0015CC00 edeccnt;
                   Sint16_x0015CC00 eshrtcnt;
                   Sint8_x0015CC00 lpflg;
                   Sint8_x0015CC00 autorcvr;
                   Sint8_x0015CC00 fltmode;
                   Sint8_x0015CC00 execflag;
                   Sint8_x0015CC00 pstwait_flag;
                   Sint8_x0015CC00 pstready_flag;
                   Sint8_x0015CC00 pause_flag;
                   void *amp;
                   SJ_x0015CC00 ampsji[(2)];
                   SJ_x0015CC00 ampsjo[(2)];
                   Sint32_x0015CC00 time_ofst;
                   Sint32_x0015CC00 lesct;
                   Sint32_x0015CC00 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CC00 lnkflg;
                   Sint8_x0015CC00 rsv;
                   Sint16_x0015CC00 rsv2;
                   Uint32_x0015CC00 tvofst;
                   Uint32_x0015CC00 svcnt;
                   Uint32_x0015CC00 decofst;
                   Sint32_x0015CC00 flush_nsmpl;
                   Sint8_x0015CC00 unkAC;
                   Sint8_x0015CC00 padAD[1];
               Char8_x0015CC00* unkB0;
               Sint32_x0015CC00 padB4;
               Sint32_x0015CC00 padB8;
               Sint32_x0015CC00 padBC;
               Sint32_x0015CC00 padC0;
} ADX_TALK_x0015CC00;
typedef ADX_TALK_x0015CC00 *ADXT_x0015CC00;
void ADXT_ExecFsSvr_x0015CC00(void) __asm__("func_00156048");
extern void ADXT_EntryErrFunc_x0015CC00(void (*func)(void *obj, Sint8_x0015CC00 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CC00(ADXT_x0015CC00 adxt,
                void (*f)(void *obj, Sint32_x0015CC00 ch, void *data, Sint32_x0015CC00 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CC00(Bool_x0015CC00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CC00(Bool_x0015CC00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CC00(void (*fn)(void *obj, Char8_x0015CC00 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CC00(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXSTM_BindFileNw_x0015CC00(ADXSTM_x0015CC00 stm, const Char8_x0015CC00* fname, void* dir, Sint32_x0015CC00 arg3, Sint32_x0015CC00 file_sct) __asm__("func_0015CB88");
void func_0015CC00_x0015CC00(ADXSTM_x0015CC00 stm, const Char8_x0015CC00* fname, void* dir, Sint32_x0015CC00 arg3, Sint32_x0015CC00 file_sct) __asm__("func_0015CC00");
/* ADXSTM_BindFile: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CC00_x0015CC00(ADXSTM_x0015CC00 stm, const Char8_x0015CC00* fname, void* dir, Sint32_x0015CC00 arg3, Sint32_x0015CC00 file_sct) {
    ADXSTM_BindFileNw_x0015CC00(stm, fname, dir, arg3, file_sct);
    do {
        ADXT_ExecFsSvr_x0015CC00();
    } while (stm->unk45 != 0);
}
void func_0015CC38(u8 *arg0) {
    s8 temp_v1;

    func_0015CDD0();
    func_0016FF40();
    temp_v1 = *(s8 *)((u8 *)arg0 + 0x49);
    if (temp_v1 == 1) {
        *(s8 *)((u8 *)arg0 + 0x46) = temp_v1;
    }
    *(s8 *)((u8 *)arg0 + 0x45) = 0;
    func_0016FF58();
}
typedef int s32_x0015CC78;
typedef s32_x0015CC78 ptrdiff_t_x0015CC78;
typedef unsigned char Uint8_x0015CC78;
typedef char Sint8_x0015CC78;
typedef unsigned short Uint16_x0015CC78;
typedef signed short Sint16_x0015CC78;
typedef unsigned int Uint32_x0015CC78;
typedef signed int Sint32_x0015CC78;
typedef Sint32_x0015CC78 Bool_x0015CC78;
typedef char Char8_x0015CC78;
typedef struct _UUID_x0015CC78 {
    Uint32_x0015CC78 Data1;
    Uint16_x0015CC78 Data2;
    Uint16_x0015CC78 Data3;
    Uint8_x0015CC78 Data4[8];
} UUID_x0015CC78;
typedef struct {
        Sint8_x0015CC78 *data;
        Sint32_x0015CC78 len;
} SJCK_x0015CC78;
typedef struct {
        struct _sj_vtbl_x0015CC78 *vtbl;
} SJ_OBJ_x0015CC78;
typedef SJ_OBJ_x0015CC78 *SJ_x0015CC78;
typedef struct _sj_vtbl_x0015CC78 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CC78 sj);
        UUID_x0015CC78 *(*GetUuid)(SJ_x0015CC78 sj);
        void (*Reset)(SJ_x0015CC78 sj);
        void (*GetChunk)(SJ_x0015CC78 sj, Sint32_x0015CC78 id, Sint32_x0015CC78 nbyte, SJCK_x0015CC78 *ck);
        void (*UngetChunk)(SJ_x0015CC78 sj, Sint32_x0015CC78 id, SJCK_x0015CC78 *ck);
        void (*PutChunk)(SJ_x0015CC78 sj, Sint32_x0015CC78 id, SJCK_x0015CC78 *ck);
        Sint32_x0015CC78 (*GetNumData)(SJ_x0015CC78 sj, Sint32_x0015CC78 id);
        Sint32_x0015CC78 (*IsGetChunk)(SJ_x0015CC78 sj, Sint32_x0015CC78 id, Sint32_x0015CC78 nbyte, Sint32_x0015CC78 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CC78 sj,
                                        void (*func)(void *obj, Sint32_x0015CC78 ecode), void *obj);
} SJ_IF_x0015CC78;
extern int* sceCdCallback_x0015CC78(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CC78(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CC78;
typedef struct {
               Sint16_x0015CC78 unk0;
               Sint16_x0015CC78 unk2;
               Sint16_x0015CC78 unk4;
               Sint16_x0015CC78 unk6;
} ADXPD_OBJ_SUB_x0015CC78;
typedef struct {
               Sint32_x0015CC78 used;
               Sint32_x0015CC78 unk4;
               Sint32_x0015CC78 mode;
               Sint32_x0015CC78 stat;
               Sint32_x0015CC78 num_blk;
               Sint32_x0015CC78 unk14;
               Sint32_x0015CC78 unk18;
               Sint32_x0015CC78 unk1C;
               Sint32_x0015CC78 unk20;
               Sint32_x0015CC78 unk24;
               ADXPD_OBJ_SUB_x0015CC78 unk28;
               Sint16_x0015CC78 unk30;
               Sint16_x0015CC78 unk32;
               Sint16_x0015CC78 unk34;
               Sint16_x0015CC78 unk36;
               Sint16_x0015CC78 unk38;
               Sint16_x0015CC78 unk3A;
} ADXPD_OBJ_x0015CC78;
typedef ADXPD_OBJ_x0015CC78* ADXPD_x0015CC78;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CC78;
typedef struct {
               Sint32_x0015CC78 unk0;
               Sint32_x0015CC78 unk4;
               Sint32_x0015CC78 unk8;
               Sint32_x0015CC78 unkC;
               Sint32_x0015CC78 unk10;
               void* unk14;
               Sint32_x0015CC78 unk18;
               Sint32_x0015CC78 unk1C;
               Sint32_x0015CC78 unk20;
               Sint32_x0015CC78 unk24;
               Sint32_x0015CC78 unk28;
} ADXB_UNK_x0015CC78;
typedef struct {
               Sint16_x0015CC78 unk0;
               Sint16_x0015CC78 unk2;
               Sint32_x0015CC78 stat;
               ADXPD_x0015CC78 adxpd;
               Sint8_x0015CC78 encoding_type;
               Sint8_x0015CC78 sample_bitdepth;
               Sint8_x0015CC78 channel_count;
               Sint8_x0015CC78 block_size;
               Sint32_x0015CC78 samples_per_block;
               Sint32_x0015CC78 sample_rate;
               Sint32_x0015CC78 total_samples;
               Sint16_x0015CC78 unk1C;
               char pad1E[2];
               Sint32_x0015CC78 unk20;
               Sint16_x0015CC78 unk24;
               Sint16_x0015CC78 unk26;
               Sint32_x0015CC78 unk28;
               Sint32_x0015CC78 unk2C;
               Sint32_x0015CC78 unk30;
               Sint32_x0015CC78 unk34;
               Sint32_x0015CC78 unk38;
               void* unk3C;
               Sint32_x0015CC78 unk40;
               Sint32_x0015CC78 unk44;
               ADXB_UNK_x0015CC78 unk48;
               Sint32_x0015CC78 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CC78*, Sint32_x0015CC78*, Sint32_x0015CC78*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CC78, Sint32_x0015CC78);
               Sint32_x0015CC78 unk84;
               Sint32_x0015CC78 unk88;
               Sint32_x0015CC78 unk8C;
               Sint32_x0015CC78 dec_num_sample;
               Sint32_x0015CC78 dec_data_len;
               Sint16_x0015CC78 format;
               Sint16_x0015CC78 unk9A;
               Sint16_x0015CC78 unk9C;
               Sint16_x0015CC78 unk9E;
               Sint16_x0015CC78 unkA0;
               char padA2[0xE];
               Sint32_x0015CC78 unkB0;
               Sint32_x0015CC78 ahx_dec_samples;
               Sint32_x0015CC78 ahx_dec_frames;
               Sint32_x0015CC78 unkBC;
               Sint32_x0015CC78 ac3_dec_samples;
               Sint32_x0015CC78 ac3_dec_frames;
               Sint32_x0015CC78 unkC8;
               ADX_UNK_x0015CC78 unkCC;
               Sint16_x0015CC78 unkDC;
               Sint16_x0015CC78 unkDE[2];
               char padE2[2];
               Sint32_x0015CC78 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CC78;
typedef ADXB_OBJ_x0015CC78* ADXB_x0015CC78;
typedef struct {
    Sint8_x0015CC78 used;
    Sint8_x0015CC78 state;
    Sint8_x0015CC78 maxnch;
    Sint8_x0015CC78 unk3;
    ADXB_x0015CC78 adxb;
    SJ_x0015CC78 sji;
    SJ_x0015CC78 sjo[2];
    SJCK_x0015CC78 unk14;
    SJCK_x0015CC78 chunks[2];
    Sint32_x0015CC78 unk2C;
    Sint32_x0015CC78 unk30;
    Sint32_x0015CC78 unk34;
    Sint32_x0015CC78 unk38;
    Sint32_x0015CC78 trap_num_samples;
    Sint32_x0015CC78 trap_count;
    Sint32_x0015CC78 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CC78, Sint8_x0015CC78*, Sint32_x0015CC78);
    void* flt_obj;
    Sint8_x0015CC78 unk58[0x40];
    Sint32_x0015CC78 unk98;
    Sint32_x0015CC78 lnkflg;
} ADXSJD_OBJ_x0015CC78;
typedef ADXSJD_OBJ_x0015CC78* ADXSJD_x0015CC78;
typedef struct {
    Sint32_x0015CC78 unk0;
    SJ_x0015CC78 sj;
} SJX_UNK_0_x0015CC78;
typedef struct {
    Sint8_x0015CC78 used;
    Sint8_x0015CC78 unk1;
    Sint16_x0015CC78 unk2;
    SJ_x0015CC78 sj;
    void* unk8;
    Sint32_x0015CC78 unkC;
    SJX_UNK_0_x0015CC78* unk10;
} SJX_OBJ_x0015CC78;
typedef SJX_OBJ_x0015CC78* SJX_x0015CC78;
typedef struct {
    Sint8_x0015CC78 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CC78 unk8;
    SJX_x0015CC78 unkC;
    SJCK_x0015CC78 chunk;
} PS2PSJ_OBJ_x0015CC78;
typedef PS2PSJ_OBJ_x0015CC78* PS2PSJ_x0015CC78;
typedef struct {
               Sint8_x0015CC78 unk0;
               Sint8_x0015CC78 unk1;
               Sint8_x0015CC78 unk2;
               SJ_x0015CC78 unk4;
               SJ_x0015CC78 unk8;
               SJCK_x0015CC78 unkC;
               SJCK_x0015CC78 unk14;
               sceSifDmaData_x0015CC78 dma_data;
               Sint32_x0015CC78 unk2C;
               Sint32_x0015CC78 unk30;
               Sint32_x0015CC78 unk34;
               Sint32_x0015CC78 unk38;
               Sint32_x0015CC78 unk3C;
} DTR_OBJ_x0015CC78;
typedef DTR_OBJ_x0015CC78* DTR_x0015CC78;
typedef struct {
    Sint8_x0015CC78 used;
    Sint32_x0015CC78 maxnch;
    PS2PSJ_x0015CC78 psj[2];
    DTR_x0015CC78 dtr[2];
    SJ_x0015CC78 sjo[2];
    void* unk20;
    Sint32_x0015CC78 unk24;
    Sint32_x0015CC78 unk28;
    Sint32_x0015CC78 unk2C;
    Sint8_x0015CC78 unk30;
    Sint8_x0015CC78 unk31;
    Sint8_x0015CC78 num_chan;
    Sint8_x0015CC78 unk33;
    Sint32_x0015CC78 sfreq;
    Sint32_x0015CC78 unk38;
    Sint32_x0015CC78 out_vol;
    Sint32_x0015CC78 unk40;
    Sint32_x0015CC78 pan[2];
    Sint32_x0015CC78 unk4C[2];
    Sint32_x0015CC78 unk54;
    Sint32_x0015CC78 unk58;
    Sint8_x0015CC78 unk5C;
    Sint8_x0015CC78 unk5D;
    Sint8_x0015CC78 unk5E;
    Sint8_x0015CC78 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CC78;
typedef ADXRNA_OBJ_x0015CC78* ADXRNA_x0015CC78;
typedef struct {
    Sint8_x0015CC78 unk0;
    Sint8_x0015CC78 stat;
    Sint8_x0015CC78 read_flg;
    Sint8_x0015CC78 unk3;
    SJ_x0015CC78 sj;
    void* cvfs;
    Sint32_x0015CC78 unkC;
    Sint32_x0015CC78 file_len;
    Sint32_x0015CC78 file_sct;
    Sint32_x0015CC78 unk18;
    Sint32_x0015CC78 unk1C;
    Sint32_x0015CC78 unk20;
    SJCK_x0015CC78 unk24;
    Sint32_x0015CC78 req_rd_size;
    Sint32_x0015CC78 eos;
    Uint32_x0015CC78 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CC78 unk40;
    Sint8_x0015CC78 pause;
    Sint8_x0015CC78 unk45;
    Sint8_x0015CC78 unk46;
    Sint8_x0015CC78 unk47;
    Sint8_x0015CC78 unk48;
    Sint8_x0015CC78 unk49;
    char pad4A[6];
    const Char8_x0015CC78* fname;
    void* dir;
    Sint32_x0015CC78 cur_ofst;
    Uint32_x0015CC78 unk5C;
} ADXSTM_OBJ_x0015CC78;
typedef ADXSTM_OBJ_x0015CC78* ADXSTM_x0015CC78;
void ADXSTM_Stop_x0015CC78(ADXSTM_x0015CC78 stm) __asm__("func_0015CE38");
void ADXSTM_ReleaseFileNw_x0015CC78(ADXSTM_x0015CC78 stm) __asm__("func_0015CC38");
extern void cvFsEntryErrFunc_x0015CC78(void (*function)(void*, const Char8_x0015CC78*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CC78(void (*callback)(void*, Char8_x0015CC78*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CC78 SVM_SetCbSvr_x0015CC78(Sint32_x0015CC78, Sint32_x0015CC78 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CC78(Sint32_x0015CC78, Sint32_x0015CC78, Sint32_x0015CC78 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CC78(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CC78(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CC78 {
                   Sint8_x0015CC78 used;
                   Sint8_x0015CC78 stat;
                   Sint8_x0015CC78 pmode;
                   Sint8_x0015CC78 maxnch;
                   ADXSJD_x0015CC78 sjd;
                   ADXSTM_x0015CC78 stm;
                   ADXRNA_x0015CC78 rna;
                   SJ_x0015CC78 sjf;
                   SJ_x0015CC78 sji;
                   SJ_x0015CC78 sjo[(2)];
                   Sint8_x0015CC78 *ibuf;
                   Sint32_x0015CC78 ibuflen;
                   Sint32_x0015CC78 ibufxlen;
                   Sint16_x0015CC78 *obuf;
                   Sint32_x0015CC78 obufsize;
                   Sint32_x0015CC78 obufdist;
                   Sint32_x0015CC78 svrfreq;
                   Sint16_x0015CC78 maxsct;
                   Sint16_x0015CC78 minsct;
                   Sint16_x0015CC78 outvol;
                   Sint16_x0015CC78 outpan[(2)];
                   Sint16_x0015CC78 unk46;
                   Sint32_x0015CC78 maxdecsmpl;
                   Sint32_x0015CC78 lpcnt;
                   Sint32_x0015CC78 lp_skiplen;
                   Sint32_x0015CC78 trp;
                   Sint32_x0015CC78 wpos;
                   Sint32_x0015CC78 mofst;
                   Sint16_x0015CC78 ercode;
                   Sint32_x0015CC78 edecpos;
                   Sint16_x0015CC78 edeccnt;
                   Sint16_x0015CC78 eshrtcnt;
                   Sint8_x0015CC78 lpflg;
                   Sint8_x0015CC78 autorcvr;
                   Sint8_x0015CC78 fltmode;
                   Sint8_x0015CC78 execflag;
                   Sint8_x0015CC78 pstwait_flag;
                   Sint8_x0015CC78 pstready_flag;
                   Sint8_x0015CC78 pause_flag;
                   void *amp;
                   SJ_x0015CC78 ampsji[(2)];
                   SJ_x0015CC78 ampsjo[(2)];
                   Sint32_x0015CC78 time_ofst;
                   Sint32_x0015CC78 lesct;
                   Sint32_x0015CC78 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CC78 lnkflg;
                   Sint8_x0015CC78 rsv;
                   Sint16_x0015CC78 rsv2;
                   Uint32_x0015CC78 tvofst;
                   Uint32_x0015CC78 svcnt;
                   Uint32_x0015CC78 decofst;
                   Sint32_x0015CC78 flush_nsmpl;
                   Sint8_x0015CC78 unkAC;
                   Sint8_x0015CC78 padAD[1];
               Char8_x0015CC78* unkB0;
               Sint32_x0015CC78 padB4;
               Sint32_x0015CC78 padB8;
               Sint32_x0015CC78 padBC;
               Sint32_x0015CC78 padC0;
} ADX_TALK_x0015CC78;
typedef ADX_TALK_x0015CC78 *ADXT_x0015CC78;
void ADXT_ExecFsSvr_x0015CC78(void) __asm__("func_00156048");
extern void ADXT_EntryErrFunc_x0015CC78(void (*func)(void *obj, Sint8_x0015CC78 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CC78(ADXT_x0015CC78 adxt,
                void (*f)(void *obj, Sint32_x0015CC78 ch, void *data, Sint32_x0015CC78 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CC78(Bool_x0015CC78 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CC78(Bool_x0015CC78 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CC78(void (*fn)(void *obj, Char8_x0015CC78 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CC78(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXSTM_ReleaseFileNw_x0015CC78(ADXSTM_x0015CC78 stm) __asm__("func_0015CC38");
void ADXSTM_Stop_x0015CC78(ADXSTM_x0015CC78 stm) __asm__("func_0015CE38");
void func_0015CC78_x0015CC78(ADXSTM_x0015CC78 stm) __asm__("func_0015CC78");
/* ADXSTM_ReleaseFile: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CC78_x0015CC78(ADXSTM_x0015CC78 stm) {
    ADXSTM_Stop_x0015CC78(stm);
    ADXSTM_ReleaseFileNw_x0015CC78(stm);
    while (stm->unk49 != 0) {
        ADXT_ExecFsSvr_x0015CC78();
    }
}
s8 func_0015CCC8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x49);
}
s8 func_0015CCD0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
typedef int s32_x0015CCD8;
typedef s32_x0015CCD8 ptrdiff_t_x0015CCD8;
typedef unsigned char Uint8_x0015CCD8;
typedef char Sint8_x0015CCD8;
typedef unsigned short Uint16_x0015CCD8;
typedef signed short Sint16_x0015CCD8;
typedef unsigned int Uint32_x0015CCD8;
typedef signed int Sint32_x0015CCD8;
typedef Sint32_x0015CCD8 Bool_x0015CCD8;
typedef char Char8_x0015CCD8;
typedef struct _UUID_x0015CCD8 {
    Uint32_x0015CCD8 Data1;
    Uint16_x0015CCD8 Data2;
    Uint16_x0015CCD8 Data3;
    Uint8_x0015CCD8 Data4[8];
} UUID_x0015CCD8;
typedef struct {
        Sint8_x0015CCD8 *data;
        Sint32_x0015CCD8 len;
} SJCK_x0015CCD8;
typedef struct {
        struct _sj_vtbl_x0015CCD8 *vtbl;
} SJ_OBJ_x0015CCD8;
typedef SJ_OBJ_x0015CCD8 *SJ_x0015CCD8;
typedef struct _sj_vtbl_x0015CCD8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CCD8 sj);
        UUID_x0015CCD8 *(*GetUuid)(SJ_x0015CCD8 sj);
        void (*Reset)(SJ_x0015CCD8 sj);
        void (*GetChunk)(SJ_x0015CCD8 sj, Sint32_x0015CCD8 id, Sint32_x0015CCD8 nbyte, SJCK_x0015CCD8 *ck);
        void (*UngetChunk)(SJ_x0015CCD8 sj, Sint32_x0015CCD8 id, SJCK_x0015CCD8 *ck);
        void (*PutChunk)(SJ_x0015CCD8 sj, Sint32_x0015CCD8 id, SJCK_x0015CCD8 *ck);
        Sint32_x0015CCD8 (*GetNumData)(SJ_x0015CCD8 sj, Sint32_x0015CCD8 id);
        Sint32_x0015CCD8 (*IsGetChunk)(SJ_x0015CCD8 sj, Sint32_x0015CCD8 id, Sint32_x0015CCD8 nbyte, Sint32_x0015CCD8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CCD8 sj,
                                        void (*func)(void *obj, Sint32_x0015CCD8 ecode), void *obj);
} SJ_IF_x0015CCD8;
extern int* sceCdCallback_x0015CCD8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CCD8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CCD8;
typedef struct {
               Sint16_x0015CCD8 unk0;
               Sint16_x0015CCD8 unk2;
               Sint16_x0015CCD8 unk4;
               Sint16_x0015CCD8 unk6;
} ADXPD_OBJ_SUB_x0015CCD8;
typedef struct {
               Sint32_x0015CCD8 used;
               Sint32_x0015CCD8 unk4;
               Sint32_x0015CCD8 mode;
               Sint32_x0015CCD8 stat;
               Sint32_x0015CCD8 num_blk;
               Sint32_x0015CCD8 unk14;
               Sint32_x0015CCD8 unk18;
               Sint32_x0015CCD8 unk1C;
               Sint32_x0015CCD8 unk20;
               Sint32_x0015CCD8 unk24;
               ADXPD_OBJ_SUB_x0015CCD8 unk28;
               Sint16_x0015CCD8 unk30;
               Sint16_x0015CCD8 unk32;
               Sint16_x0015CCD8 unk34;
               Sint16_x0015CCD8 unk36;
               Sint16_x0015CCD8 unk38;
               Sint16_x0015CCD8 unk3A;
} ADXPD_OBJ_x0015CCD8;
typedef ADXPD_OBJ_x0015CCD8* ADXPD_x0015CCD8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CCD8;
typedef struct {
               Sint32_x0015CCD8 unk0;
               Sint32_x0015CCD8 unk4;
               Sint32_x0015CCD8 unk8;
               Sint32_x0015CCD8 unkC;
               Sint32_x0015CCD8 unk10;
               void* unk14;
               Sint32_x0015CCD8 unk18;
               Sint32_x0015CCD8 unk1C;
               Sint32_x0015CCD8 unk20;
               Sint32_x0015CCD8 unk24;
               Sint32_x0015CCD8 unk28;
} ADXB_UNK_x0015CCD8;
typedef struct {
               Sint16_x0015CCD8 unk0;
               Sint16_x0015CCD8 unk2;
               Sint32_x0015CCD8 stat;
               ADXPD_x0015CCD8 adxpd;
               Sint8_x0015CCD8 encoding_type;
               Sint8_x0015CCD8 sample_bitdepth;
               Sint8_x0015CCD8 channel_count;
               Sint8_x0015CCD8 block_size;
               Sint32_x0015CCD8 samples_per_block;
               Sint32_x0015CCD8 sample_rate;
               Sint32_x0015CCD8 total_samples;
               Sint16_x0015CCD8 unk1C;
               char pad1E[2];
               Sint32_x0015CCD8 unk20;
               Sint16_x0015CCD8 unk24;
               Sint16_x0015CCD8 unk26;
               Sint32_x0015CCD8 unk28;
               Sint32_x0015CCD8 unk2C;
               Sint32_x0015CCD8 unk30;
               Sint32_x0015CCD8 unk34;
               Sint32_x0015CCD8 unk38;
               void* unk3C;
               Sint32_x0015CCD8 unk40;
               Sint32_x0015CCD8 unk44;
               ADXB_UNK_x0015CCD8 unk48;
               Sint32_x0015CCD8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CCD8*, Sint32_x0015CCD8*, Sint32_x0015CCD8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CCD8, Sint32_x0015CCD8);
               Sint32_x0015CCD8 unk84;
               Sint32_x0015CCD8 unk88;
               Sint32_x0015CCD8 unk8C;
               Sint32_x0015CCD8 dec_num_sample;
               Sint32_x0015CCD8 dec_data_len;
               Sint16_x0015CCD8 format;
               Sint16_x0015CCD8 unk9A;
               Sint16_x0015CCD8 unk9C;
               Sint16_x0015CCD8 unk9E;
               Sint16_x0015CCD8 unkA0;
               char padA2[0xE];
               Sint32_x0015CCD8 unkB0;
               Sint32_x0015CCD8 ahx_dec_samples;
               Sint32_x0015CCD8 ahx_dec_frames;
               Sint32_x0015CCD8 unkBC;
               Sint32_x0015CCD8 ac3_dec_samples;
               Sint32_x0015CCD8 ac3_dec_frames;
               Sint32_x0015CCD8 unkC8;
               ADX_UNK_x0015CCD8 unkCC;
               Sint16_x0015CCD8 unkDC;
               Sint16_x0015CCD8 unkDE[2];
               char padE2[2];
               Sint32_x0015CCD8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CCD8;
typedef ADXB_OBJ_x0015CCD8* ADXB_x0015CCD8;
typedef struct {
    Sint8_x0015CCD8 used;
    Sint8_x0015CCD8 state;
    Sint8_x0015CCD8 maxnch;
    Sint8_x0015CCD8 unk3;
    ADXB_x0015CCD8 adxb;
    SJ_x0015CCD8 sji;
    SJ_x0015CCD8 sjo[2];
    SJCK_x0015CCD8 unk14;
    SJCK_x0015CCD8 chunks[2];
    Sint32_x0015CCD8 unk2C;
    Sint32_x0015CCD8 unk30;
    Sint32_x0015CCD8 unk34;
    Sint32_x0015CCD8 unk38;
    Sint32_x0015CCD8 trap_num_samples;
    Sint32_x0015CCD8 trap_count;
    Sint32_x0015CCD8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CCD8, Sint8_x0015CCD8*, Sint32_x0015CCD8);
    void* flt_obj;
    Sint8_x0015CCD8 unk58[0x40];
    Sint32_x0015CCD8 unk98;
    Sint32_x0015CCD8 lnkflg;
} ADXSJD_OBJ_x0015CCD8;
typedef ADXSJD_OBJ_x0015CCD8* ADXSJD_x0015CCD8;
typedef struct {
    Sint32_x0015CCD8 unk0;
    SJ_x0015CCD8 sj;
} SJX_UNK_0_x0015CCD8;
typedef struct {
    Sint8_x0015CCD8 used;
    Sint8_x0015CCD8 unk1;
    Sint16_x0015CCD8 unk2;
    SJ_x0015CCD8 sj;
    void* unk8;
    Sint32_x0015CCD8 unkC;
    SJX_UNK_0_x0015CCD8* unk10;
} SJX_OBJ_x0015CCD8;
typedef SJX_OBJ_x0015CCD8* SJX_x0015CCD8;
typedef struct {
    Sint8_x0015CCD8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CCD8 unk8;
    SJX_x0015CCD8 unkC;
    SJCK_x0015CCD8 chunk;
} PS2PSJ_OBJ_x0015CCD8;
typedef PS2PSJ_OBJ_x0015CCD8* PS2PSJ_x0015CCD8;
typedef struct {
               Sint8_x0015CCD8 unk0;
               Sint8_x0015CCD8 unk1;
               Sint8_x0015CCD8 unk2;
               SJ_x0015CCD8 unk4;
               SJ_x0015CCD8 unk8;
               SJCK_x0015CCD8 unkC;
               SJCK_x0015CCD8 unk14;
               sceSifDmaData_x0015CCD8 dma_data;
               Sint32_x0015CCD8 unk2C;
               Sint32_x0015CCD8 unk30;
               Sint32_x0015CCD8 unk34;
               Sint32_x0015CCD8 unk38;
               Sint32_x0015CCD8 unk3C;
} DTR_OBJ_x0015CCD8;
typedef DTR_OBJ_x0015CCD8* DTR_x0015CCD8;
typedef struct {
    Sint8_x0015CCD8 used;
    Sint32_x0015CCD8 maxnch;
    PS2PSJ_x0015CCD8 psj[2];
    DTR_x0015CCD8 dtr[2];
    SJ_x0015CCD8 sjo[2];
    void* unk20;
    Sint32_x0015CCD8 unk24;
    Sint32_x0015CCD8 unk28;
    Sint32_x0015CCD8 unk2C;
    Sint8_x0015CCD8 unk30;
    Sint8_x0015CCD8 unk31;
    Sint8_x0015CCD8 num_chan;
    Sint8_x0015CCD8 unk33;
    Sint32_x0015CCD8 sfreq;
    Sint32_x0015CCD8 unk38;
    Sint32_x0015CCD8 out_vol;
    Sint32_x0015CCD8 unk40;
    Sint32_x0015CCD8 pan[2];
    Sint32_x0015CCD8 unk4C[2];
    Sint32_x0015CCD8 unk54;
    Sint32_x0015CCD8 unk58;
    Sint8_x0015CCD8 unk5C;
    Sint8_x0015CCD8 unk5D;
    Sint8_x0015CCD8 unk5E;
    Sint8_x0015CCD8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CCD8;
typedef ADXRNA_OBJ_x0015CCD8* ADXRNA_x0015CCD8;
typedef struct {
    Sint8_x0015CCD8 unk0;
    Sint8_x0015CCD8 stat;
    Sint8_x0015CCD8 read_flg;
    Sint8_x0015CCD8 unk3;
    SJ_x0015CCD8 sj;
    void* cvfs;
    Sint32_x0015CCD8 unkC;
    Sint32_x0015CCD8 file_len;
    Sint32_x0015CCD8 file_sct;
    Sint32_x0015CCD8 unk18;
    Sint32_x0015CCD8 unk1C;
    Sint32_x0015CCD8 unk20;
    SJCK_x0015CCD8 unk24;
    Sint32_x0015CCD8 req_rd_size;
    Sint32_x0015CCD8 eos;
    Uint32_x0015CCD8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CCD8 unk40;
    Sint8_x0015CCD8 pause;
    Sint8_x0015CCD8 unk45;
    Sint8_x0015CCD8 unk46;
    Sint8_x0015CCD8 unk47;
    Sint8_x0015CCD8 unk48;
    Sint8_x0015CCD8 unk49;
    char pad4A[6];
    const Char8_x0015CCD8* fname;
    void* dir;
    Sint32_x0015CCD8 cur_ofst;
    Uint32_x0015CCD8 unk5C;
} ADXSTM_OBJ_x0015CCD8;
typedef ADXSTM_OBJ_x0015CCD8* ADXSTM_x0015CCD8;
extern void cvFsEntryErrFunc_x0015CCD8(void (*function)(void*, const Char8_x0015CCD8*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CCD8(void (*callback)(void*, Char8_x0015CCD8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CCD8 SVM_SetCbSvr_x0015CCD8(Sint32_x0015CCD8, Sint32_x0015CCD8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CCD8(Sint32_x0015CCD8, Sint32_x0015CCD8, Sint32_x0015CCD8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CCD8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CCD8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CCD8 {
                   Sint8_x0015CCD8 used;
                   Sint8_x0015CCD8 stat;
                   Sint8_x0015CCD8 pmode;
                   Sint8_x0015CCD8 maxnch;
                   ADXSJD_x0015CCD8 sjd;
                   ADXSTM_x0015CCD8 stm;
                   ADXRNA_x0015CCD8 rna;
                   SJ_x0015CCD8 sjf;
                   SJ_x0015CCD8 sji;
                   SJ_x0015CCD8 sjo[(2)];
                   Sint8_x0015CCD8 *ibuf;
                   Sint32_x0015CCD8 ibuflen;
                   Sint32_x0015CCD8 ibufxlen;
                   Sint16_x0015CCD8 *obuf;
                   Sint32_x0015CCD8 obufsize;
                   Sint32_x0015CCD8 obufdist;
                   Sint32_x0015CCD8 svrfreq;
                   Sint16_x0015CCD8 maxsct;
                   Sint16_x0015CCD8 minsct;
                   Sint16_x0015CCD8 outvol;
                   Sint16_x0015CCD8 outpan[(2)];
                   Sint16_x0015CCD8 unk46;
                   Sint32_x0015CCD8 maxdecsmpl;
                   Sint32_x0015CCD8 lpcnt;
                   Sint32_x0015CCD8 lp_skiplen;
                   Sint32_x0015CCD8 trp;
                   Sint32_x0015CCD8 wpos;
                   Sint32_x0015CCD8 mofst;
                   Sint16_x0015CCD8 ercode;
                   Sint32_x0015CCD8 edecpos;
                   Sint16_x0015CCD8 edeccnt;
                   Sint16_x0015CCD8 eshrtcnt;
                   Sint8_x0015CCD8 lpflg;
                   Sint8_x0015CCD8 autorcvr;
                   Sint8_x0015CCD8 fltmode;
                   Sint8_x0015CCD8 execflag;
                   Sint8_x0015CCD8 pstwait_flag;
                   Sint8_x0015CCD8 pstready_flag;
                   Sint8_x0015CCD8 pause_flag;
                   void *amp;
                   SJ_x0015CCD8 ampsji[(2)];
                   SJ_x0015CCD8 ampsjo[(2)];
                   Sint32_x0015CCD8 time_ofst;
                   Sint32_x0015CCD8 lesct;
                   Sint32_x0015CCD8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CCD8 lnkflg;
                   Sint8_x0015CCD8 rsv;
                   Sint16_x0015CCD8 rsv2;
                   Uint32_x0015CCD8 tvofst;
                   Uint32_x0015CCD8 svcnt;
                   Uint32_x0015CCD8 decofst;
                   Sint32_x0015CCD8 flush_nsmpl;
                   Sint8_x0015CCD8 unkAC;
                   Sint8_x0015CCD8 padAD[1];
               Char8_x0015CCD8* unkB0;
               Sint32_x0015CCD8 padB4;
               Sint32_x0015CCD8 padB8;
               Sint32_x0015CCD8 padBC;
               Sint32_x0015CCD8 padC0;
} ADX_TALK_x0015CCD8;
typedef ADX_TALK_x0015CCD8 *ADXT_x0015CCD8;
extern void ADXT_EntryErrFunc_x0015CCD8(void (*func)(void *obj, Sint8_x0015CCD8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CCD8(ADXT_x0015CCD8 adxt,
                void (*f)(void *obj, Sint32_x0015CCD8 ch, void *data, Sint32_x0015CCD8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CCD8(Bool_x0015CCD8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CCD8(Bool_x0015CCD8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CCD8(void (*fn)(void *obj, Char8_x0015CCD8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CCD8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
Sint32_x0015CCD8 fn_8004AE94_x0015CCD8(ADXSTM_x0015CCD8 stm, Sint32_x0015CCD8 offset) __asm__("fn_8004AE94");
/* ADXSTM_Seek: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015CCD8 fn_8004AE94_x0015CCD8(ADXSTM_x0015CCD8 stm, Sint32_x0015CCD8 offset) {
    stm->cur_ofst = offset;
    if (stm->file_sct < offset) {
        stm->cur_ofst = stm->file_sct;
    }
    return stm->cur_ofst;
}
typedef int s32_x0015CCF8;
typedef s32_x0015CCF8 ptrdiff_t_x0015CCF8;
typedef unsigned char Uint8_x0015CCF8;
typedef char Sint8_x0015CCF8;
typedef unsigned short Uint16_x0015CCF8;
typedef signed short Sint16_x0015CCF8;
typedef unsigned int Uint32_x0015CCF8;
typedef signed int Sint32_x0015CCF8;
typedef Sint32_x0015CCF8 Bool_x0015CCF8;
typedef char Char8_x0015CCF8;
typedef struct _UUID_x0015CCF8 {
    Uint32_x0015CCF8 Data1;
    Uint16_x0015CCF8 Data2;
    Uint16_x0015CCF8 Data3;
    Uint8_x0015CCF8 Data4[8];
} UUID_x0015CCF8;
typedef struct {
        Sint8_x0015CCF8 *data;
        Sint32_x0015CCF8 len;
} SJCK_x0015CCF8;
typedef struct {
        struct _sj_vtbl_x0015CCF8 *vtbl;
} SJ_OBJ_x0015CCF8;
typedef SJ_OBJ_x0015CCF8 *SJ_x0015CCF8;
typedef struct _sj_vtbl_x0015CCF8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CCF8 sj);
        UUID_x0015CCF8 *(*GetUuid)(SJ_x0015CCF8 sj);
        void (*Reset)(SJ_x0015CCF8 sj);
        void (*GetChunk)(SJ_x0015CCF8 sj, Sint32_x0015CCF8 id, Sint32_x0015CCF8 nbyte, SJCK_x0015CCF8 *ck);
        void (*UngetChunk)(SJ_x0015CCF8 sj, Sint32_x0015CCF8 id, SJCK_x0015CCF8 *ck);
        void (*PutChunk)(SJ_x0015CCF8 sj, Sint32_x0015CCF8 id, SJCK_x0015CCF8 *ck);
        Sint32_x0015CCF8 (*GetNumData)(SJ_x0015CCF8 sj, Sint32_x0015CCF8 id);
        Sint32_x0015CCF8 (*IsGetChunk)(SJ_x0015CCF8 sj, Sint32_x0015CCF8 id, Sint32_x0015CCF8 nbyte, Sint32_x0015CCF8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CCF8 sj,
                                        void (*func)(void *obj, Sint32_x0015CCF8 ecode), void *obj);
} SJ_IF_x0015CCF8;
extern int* sceCdCallback_x0015CCF8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CCF8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CCF8;
typedef struct {
               Sint16_x0015CCF8 unk0;
               Sint16_x0015CCF8 unk2;
               Sint16_x0015CCF8 unk4;
               Sint16_x0015CCF8 unk6;
} ADXPD_OBJ_SUB_x0015CCF8;
typedef struct {
               Sint32_x0015CCF8 used;
               Sint32_x0015CCF8 unk4;
               Sint32_x0015CCF8 mode;
               Sint32_x0015CCF8 stat;
               Sint32_x0015CCF8 num_blk;
               Sint32_x0015CCF8 unk14;
               Sint32_x0015CCF8 unk18;
               Sint32_x0015CCF8 unk1C;
               Sint32_x0015CCF8 unk20;
               Sint32_x0015CCF8 unk24;
               ADXPD_OBJ_SUB_x0015CCF8 unk28;
               Sint16_x0015CCF8 unk30;
               Sint16_x0015CCF8 unk32;
               Sint16_x0015CCF8 unk34;
               Sint16_x0015CCF8 unk36;
               Sint16_x0015CCF8 unk38;
               Sint16_x0015CCF8 unk3A;
} ADXPD_OBJ_x0015CCF8;
typedef ADXPD_OBJ_x0015CCF8* ADXPD_x0015CCF8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CCF8;
typedef struct {
               Sint32_x0015CCF8 unk0;
               Sint32_x0015CCF8 unk4;
               Sint32_x0015CCF8 unk8;
               Sint32_x0015CCF8 unkC;
               Sint32_x0015CCF8 unk10;
               void* unk14;
               Sint32_x0015CCF8 unk18;
               Sint32_x0015CCF8 unk1C;
               Sint32_x0015CCF8 unk20;
               Sint32_x0015CCF8 unk24;
               Sint32_x0015CCF8 unk28;
} ADXB_UNK_x0015CCF8;
typedef struct {
               Sint16_x0015CCF8 unk0;
               Sint16_x0015CCF8 unk2;
               Sint32_x0015CCF8 stat;
               ADXPD_x0015CCF8 adxpd;
               Sint8_x0015CCF8 encoding_type;
               Sint8_x0015CCF8 sample_bitdepth;
               Sint8_x0015CCF8 channel_count;
               Sint8_x0015CCF8 block_size;
               Sint32_x0015CCF8 samples_per_block;
               Sint32_x0015CCF8 sample_rate;
               Sint32_x0015CCF8 total_samples;
               Sint16_x0015CCF8 unk1C;
               char pad1E[2];
               Sint32_x0015CCF8 unk20;
               Sint16_x0015CCF8 unk24;
               Sint16_x0015CCF8 unk26;
               Sint32_x0015CCF8 unk28;
               Sint32_x0015CCF8 unk2C;
               Sint32_x0015CCF8 unk30;
               Sint32_x0015CCF8 unk34;
               Sint32_x0015CCF8 unk38;
               void* unk3C;
               Sint32_x0015CCF8 unk40;
               Sint32_x0015CCF8 unk44;
               ADXB_UNK_x0015CCF8 unk48;
               Sint32_x0015CCF8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CCF8*, Sint32_x0015CCF8*, Sint32_x0015CCF8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CCF8, Sint32_x0015CCF8);
               Sint32_x0015CCF8 unk84;
               Sint32_x0015CCF8 unk88;
               Sint32_x0015CCF8 unk8C;
               Sint32_x0015CCF8 dec_num_sample;
               Sint32_x0015CCF8 dec_data_len;
               Sint16_x0015CCF8 format;
               Sint16_x0015CCF8 unk9A;
               Sint16_x0015CCF8 unk9C;
               Sint16_x0015CCF8 unk9E;
               Sint16_x0015CCF8 unkA0;
               char padA2[0xE];
               Sint32_x0015CCF8 unkB0;
               Sint32_x0015CCF8 ahx_dec_samples;
               Sint32_x0015CCF8 ahx_dec_frames;
               Sint32_x0015CCF8 unkBC;
               Sint32_x0015CCF8 ac3_dec_samples;
               Sint32_x0015CCF8 ac3_dec_frames;
               Sint32_x0015CCF8 unkC8;
               ADX_UNK_x0015CCF8 unkCC;
               Sint16_x0015CCF8 unkDC;
               Sint16_x0015CCF8 unkDE[2];
               char padE2[2];
               Sint32_x0015CCF8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CCF8;
typedef ADXB_OBJ_x0015CCF8* ADXB_x0015CCF8;
typedef struct {
    Sint8_x0015CCF8 used;
    Sint8_x0015CCF8 state;
    Sint8_x0015CCF8 maxnch;
    Sint8_x0015CCF8 unk3;
    ADXB_x0015CCF8 adxb;
    SJ_x0015CCF8 sji;
    SJ_x0015CCF8 sjo[2];
    SJCK_x0015CCF8 unk14;
    SJCK_x0015CCF8 chunks[2];
    Sint32_x0015CCF8 unk2C;
    Sint32_x0015CCF8 unk30;
    Sint32_x0015CCF8 unk34;
    Sint32_x0015CCF8 unk38;
    Sint32_x0015CCF8 trap_num_samples;
    Sint32_x0015CCF8 trap_count;
    Sint32_x0015CCF8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CCF8, Sint8_x0015CCF8*, Sint32_x0015CCF8);
    void* flt_obj;
    Sint8_x0015CCF8 unk58[0x40];
    Sint32_x0015CCF8 unk98;
    Sint32_x0015CCF8 lnkflg;
} ADXSJD_OBJ_x0015CCF8;
typedef ADXSJD_OBJ_x0015CCF8* ADXSJD_x0015CCF8;
typedef struct {
    Sint32_x0015CCF8 unk0;
    SJ_x0015CCF8 sj;
} SJX_UNK_0_x0015CCF8;
typedef struct {
    Sint8_x0015CCF8 used;
    Sint8_x0015CCF8 unk1;
    Sint16_x0015CCF8 unk2;
    SJ_x0015CCF8 sj;
    void* unk8;
    Sint32_x0015CCF8 unkC;
    SJX_UNK_0_x0015CCF8* unk10;
} SJX_OBJ_x0015CCF8;
typedef SJX_OBJ_x0015CCF8* SJX_x0015CCF8;
typedef struct {
    Sint8_x0015CCF8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CCF8 unk8;
    SJX_x0015CCF8 unkC;
    SJCK_x0015CCF8 chunk;
} PS2PSJ_OBJ_x0015CCF8;
typedef PS2PSJ_OBJ_x0015CCF8* PS2PSJ_x0015CCF8;
typedef struct {
               Sint8_x0015CCF8 unk0;
               Sint8_x0015CCF8 unk1;
               Sint8_x0015CCF8 unk2;
               SJ_x0015CCF8 unk4;
               SJ_x0015CCF8 unk8;
               SJCK_x0015CCF8 unkC;
               SJCK_x0015CCF8 unk14;
               sceSifDmaData_x0015CCF8 dma_data;
               Sint32_x0015CCF8 unk2C;
               Sint32_x0015CCF8 unk30;
               Sint32_x0015CCF8 unk34;
               Sint32_x0015CCF8 unk38;
               Sint32_x0015CCF8 unk3C;
} DTR_OBJ_x0015CCF8;
typedef DTR_OBJ_x0015CCF8* DTR_x0015CCF8;
typedef struct {
    Sint8_x0015CCF8 used;
    Sint32_x0015CCF8 maxnch;
    PS2PSJ_x0015CCF8 psj[2];
    DTR_x0015CCF8 dtr[2];
    SJ_x0015CCF8 sjo[2];
    void* unk20;
    Sint32_x0015CCF8 unk24;
    Sint32_x0015CCF8 unk28;
    Sint32_x0015CCF8 unk2C;
    Sint8_x0015CCF8 unk30;
    Sint8_x0015CCF8 unk31;
    Sint8_x0015CCF8 num_chan;
    Sint8_x0015CCF8 unk33;
    Sint32_x0015CCF8 sfreq;
    Sint32_x0015CCF8 unk38;
    Sint32_x0015CCF8 out_vol;
    Sint32_x0015CCF8 unk40;
    Sint32_x0015CCF8 pan[2];
    Sint32_x0015CCF8 unk4C[2];
    Sint32_x0015CCF8 unk54;
    Sint32_x0015CCF8 unk58;
    Sint8_x0015CCF8 unk5C;
    Sint8_x0015CCF8 unk5D;
    Sint8_x0015CCF8 unk5E;
    Sint8_x0015CCF8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CCF8;
typedef ADXRNA_OBJ_x0015CCF8* ADXRNA_x0015CCF8;
typedef struct {
    Sint8_x0015CCF8 unk0;
    Sint8_x0015CCF8 stat;
    Sint8_x0015CCF8 read_flg;
    Sint8_x0015CCF8 unk3;
    SJ_x0015CCF8 sj;
    void* cvfs;
    Sint32_x0015CCF8 unkC;
    Sint32_x0015CCF8 file_len;
    Sint32_x0015CCF8 file_sct;
    Sint32_x0015CCF8 unk18;
    Sint32_x0015CCF8 unk1C;
    Sint32_x0015CCF8 unk20;
    SJCK_x0015CCF8 unk24;
    Sint32_x0015CCF8 req_rd_size;
    Sint32_x0015CCF8 eos;
    Uint32_x0015CCF8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CCF8 unk40;
    Sint8_x0015CCF8 pause;
    Sint8_x0015CCF8 unk45;
    Sint8_x0015CCF8 unk46;
    Sint8_x0015CCF8 unk47;
    Sint8_x0015CCF8 unk48;
    Sint8_x0015CCF8 unk49;
    char pad4A[6];
    const Char8_x0015CCF8* fname;
    void* dir;
    Sint32_x0015CCF8 cur_ofst;
    Uint32_x0015CCF8 unk5C;
} ADXSTM_OBJ_x0015CCF8;
typedef ADXSTM_OBJ_x0015CCF8* ADXSTM_x0015CCF8;
extern void cvFsEntryErrFunc_x0015CCF8(void (*function)(void*, const Char8_x0015CCF8*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CCF8(void (*callback)(void*, Char8_x0015CCF8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CCF8 SVM_SetCbSvr_x0015CCF8(Sint32_x0015CCF8, Sint32_x0015CCF8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CCF8(Sint32_x0015CCF8, Sint32_x0015CCF8, Sint32_x0015CCF8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CCF8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CCF8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CCF8 {
                   Sint8_x0015CCF8 used;
                   Sint8_x0015CCF8 stat;
                   Sint8_x0015CCF8 pmode;
                   Sint8_x0015CCF8 maxnch;
                   ADXSJD_x0015CCF8 sjd;
                   ADXSTM_x0015CCF8 stm;
                   ADXRNA_x0015CCF8 rna;
                   SJ_x0015CCF8 sjf;
                   SJ_x0015CCF8 sji;
                   SJ_x0015CCF8 sjo[(2)];
                   Sint8_x0015CCF8 *ibuf;
                   Sint32_x0015CCF8 ibuflen;
                   Sint32_x0015CCF8 ibufxlen;
                   Sint16_x0015CCF8 *obuf;
                   Sint32_x0015CCF8 obufsize;
                   Sint32_x0015CCF8 obufdist;
                   Sint32_x0015CCF8 svrfreq;
                   Sint16_x0015CCF8 maxsct;
                   Sint16_x0015CCF8 minsct;
                   Sint16_x0015CCF8 outvol;
                   Sint16_x0015CCF8 outpan[(2)];
                   Sint16_x0015CCF8 unk46;
                   Sint32_x0015CCF8 maxdecsmpl;
                   Sint32_x0015CCF8 lpcnt;
                   Sint32_x0015CCF8 lp_skiplen;
                   Sint32_x0015CCF8 trp;
                   Sint32_x0015CCF8 wpos;
                   Sint32_x0015CCF8 mofst;
                   Sint16_x0015CCF8 ercode;
                   Sint32_x0015CCF8 edecpos;
                   Sint16_x0015CCF8 edeccnt;
                   Sint16_x0015CCF8 eshrtcnt;
                   Sint8_x0015CCF8 lpflg;
                   Sint8_x0015CCF8 autorcvr;
                   Sint8_x0015CCF8 fltmode;
                   Sint8_x0015CCF8 execflag;
                   Sint8_x0015CCF8 pstwait_flag;
                   Sint8_x0015CCF8 pstready_flag;
                   Sint8_x0015CCF8 pause_flag;
                   void *amp;
                   SJ_x0015CCF8 ampsji[(2)];
                   SJ_x0015CCF8 ampsjo[(2)];
                   Sint32_x0015CCF8 time_ofst;
                   Sint32_x0015CCF8 lesct;
                   Sint32_x0015CCF8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CCF8 lnkflg;
                   Sint8_x0015CCF8 rsv;
                   Sint16_x0015CCF8 rsv2;
                   Uint32_x0015CCF8 tvofst;
                   Uint32_x0015CCF8 svcnt;
                   Uint32_x0015CCF8 decofst;
                   Sint32_x0015CCF8 flush_nsmpl;
                   Sint8_x0015CCF8 unkAC;
                   Sint8_x0015CCF8 padAD[1];
               Char8_x0015CCF8* unkB0;
               Sint32_x0015CCF8 padB4;
               Sint32_x0015CCF8 padB8;
               Sint32_x0015CCF8 padBC;
               Sint32_x0015CCF8 padC0;
} ADX_TALK_x0015CCF8;
typedef ADX_TALK_x0015CCF8 *ADXT_x0015CCF8;
extern void ADXT_EntryErrFunc_x0015CCF8(void (*func)(void *obj, Sint8_x0015CCF8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CCF8(ADXT_x0015CCF8 adxt,
                void (*f)(void *obj, Sint32_x0015CCF8 ch, void *data, Sint32_x0015CCF8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CCF8(Bool_x0015CCF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CCF8(Bool_x0015CCF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CCF8(void (*fn)(void *obj, Char8_x0015CCF8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CCF8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
Sint32_x0015CCF8 func_0015CCF8_x0015CCF8(ADXSTM_x0015CCF8 stm) __asm__("func_0015CCF8");
/* ADXSTM_Tell: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015CCF8 func_0015CCF8_x0015CCF8(ADXSTM_x0015CCF8 stm) {
    if (stm->cvfs == 0) {
        return 0;
    }
    return stm->cur_ofst;
}
typedef int s32_x0015CD10;
typedef s32_x0015CD10 ptrdiff_t_x0015CD10;
typedef unsigned char Uint8_x0015CD10;
typedef char Sint8_x0015CD10;
typedef unsigned short Uint16_x0015CD10;
typedef signed short Sint16_x0015CD10;
typedef unsigned int Uint32_x0015CD10;
typedef signed int Sint32_x0015CD10;
typedef Sint32_x0015CD10 Bool_x0015CD10;
typedef char Char8_x0015CD10;
typedef struct _UUID_x0015CD10 {
    Uint32_x0015CD10 Data1;
    Uint16_x0015CD10 Data2;
    Uint16_x0015CD10 Data3;
    Uint8_x0015CD10 Data4[8];
} UUID_x0015CD10;
typedef struct {
        Sint8_x0015CD10 *data;
        Sint32_x0015CD10 len;
} SJCK_x0015CD10;
typedef struct {
        struct _sj_vtbl_x0015CD10 *vtbl;
} SJ_OBJ_x0015CD10;
typedef SJ_OBJ_x0015CD10 *SJ_x0015CD10;
typedef struct _sj_vtbl_x0015CD10 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CD10 sj);
        UUID_x0015CD10 *(*GetUuid)(SJ_x0015CD10 sj);
        void (*Reset)(SJ_x0015CD10 sj);
        void (*GetChunk)(SJ_x0015CD10 sj, Sint32_x0015CD10 id, Sint32_x0015CD10 nbyte, SJCK_x0015CD10 *ck);
        void (*UngetChunk)(SJ_x0015CD10 sj, Sint32_x0015CD10 id, SJCK_x0015CD10 *ck);
        void (*PutChunk)(SJ_x0015CD10 sj, Sint32_x0015CD10 id, SJCK_x0015CD10 *ck);
        Sint32_x0015CD10 (*GetNumData)(SJ_x0015CD10 sj, Sint32_x0015CD10 id);
        Sint32_x0015CD10 (*IsGetChunk)(SJ_x0015CD10 sj, Sint32_x0015CD10 id, Sint32_x0015CD10 nbyte, Sint32_x0015CD10 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CD10 sj,
                                        void (*func)(void *obj, Sint32_x0015CD10 ecode), void *obj);
} SJ_IF_x0015CD10;
extern int* sceCdCallback_x0015CD10(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CD10(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CD10;
typedef struct {
               Sint16_x0015CD10 unk0;
               Sint16_x0015CD10 unk2;
               Sint16_x0015CD10 unk4;
               Sint16_x0015CD10 unk6;
} ADXPD_OBJ_SUB_x0015CD10;
typedef struct {
               Sint32_x0015CD10 used;
               Sint32_x0015CD10 unk4;
               Sint32_x0015CD10 mode;
               Sint32_x0015CD10 stat;
               Sint32_x0015CD10 num_blk;
               Sint32_x0015CD10 unk14;
               Sint32_x0015CD10 unk18;
               Sint32_x0015CD10 unk1C;
               Sint32_x0015CD10 unk20;
               Sint32_x0015CD10 unk24;
               ADXPD_OBJ_SUB_x0015CD10 unk28;
               Sint16_x0015CD10 unk30;
               Sint16_x0015CD10 unk32;
               Sint16_x0015CD10 unk34;
               Sint16_x0015CD10 unk36;
               Sint16_x0015CD10 unk38;
               Sint16_x0015CD10 unk3A;
} ADXPD_OBJ_x0015CD10;
typedef ADXPD_OBJ_x0015CD10* ADXPD_x0015CD10;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CD10;
typedef struct {
               Sint32_x0015CD10 unk0;
               Sint32_x0015CD10 unk4;
               Sint32_x0015CD10 unk8;
               Sint32_x0015CD10 unkC;
               Sint32_x0015CD10 unk10;
               void* unk14;
               Sint32_x0015CD10 unk18;
               Sint32_x0015CD10 unk1C;
               Sint32_x0015CD10 unk20;
               Sint32_x0015CD10 unk24;
               Sint32_x0015CD10 unk28;
} ADXB_UNK_x0015CD10;
typedef struct {
               Sint16_x0015CD10 unk0;
               Sint16_x0015CD10 unk2;
               Sint32_x0015CD10 stat;
               ADXPD_x0015CD10 adxpd;
               Sint8_x0015CD10 encoding_type;
               Sint8_x0015CD10 sample_bitdepth;
               Sint8_x0015CD10 channel_count;
               Sint8_x0015CD10 block_size;
               Sint32_x0015CD10 samples_per_block;
               Sint32_x0015CD10 sample_rate;
               Sint32_x0015CD10 total_samples;
               Sint16_x0015CD10 unk1C;
               char pad1E[2];
               Sint32_x0015CD10 unk20;
               Sint16_x0015CD10 unk24;
               Sint16_x0015CD10 unk26;
               Sint32_x0015CD10 unk28;
               Sint32_x0015CD10 unk2C;
               Sint32_x0015CD10 unk30;
               Sint32_x0015CD10 unk34;
               Sint32_x0015CD10 unk38;
               void* unk3C;
               Sint32_x0015CD10 unk40;
               Sint32_x0015CD10 unk44;
               ADXB_UNK_x0015CD10 unk48;
               Sint32_x0015CD10 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CD10*, Sint32_x0015CD10*, Sint32_x0015CD10*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CD10, Sint32_x0015CD10);
               Sint32_x0015CD10 unk84;
               Sint32_x0015CD10 unk88;
               Sint32_x0015CD10 unk8C;
               Sint32_x0015CD10 dec_num_sample;
               Sint32_x0015CD10 dec_data_len;
               Sint16_x0015CD10 format;
               Sint16_x0015CD10 unk9A;
               Sint16_x0015CD10 unk9C;
               Sint16_x0015CD10 unk9E;
               Sint16_x0015CD10 unkA0;
               char padA2[0xE];
               Sint32_x0015CD10 unkB0;
               Sint32_x0015CD10 ahx_dec_samples;
               Sint32_x0015CD10 ahx_dec_frames;
               Sint32_x0015CD10 unkBC;
               Sint32_x0015CD10 ac3_dec_samples;
               Sint32_x0015CD10 ac3_dec_frames;
               Sint32_x0015CD10 unkC8;
               ADX_UNK_x0015CD10 unkCC;
               Sint16_x0015CD10 unkDC;
               Sint16_x0015CD10 unkDE[2];
               char padE2[2];
               Sint32_x0015CD10 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CD10;
typedef ADXB_OBJ_x0015CD10* ADXB_x0015CD10;
typedef struct {
    Sint8_x0015CD10 used;
    Sint8_x0015CD10 state;
    Sint8_x0015CD10 maxnch;
    Sint8_x0015CD10 unk3;
    ADXB_x0015CD10 adxb;
    SJ_x0015CD10 sji;
    SJ_x0015CD10 sjo[2];
    SJCK_x0015CD10 unk14;
    SJCK_x0015CD10 chunks[2];
    Sint32_x0015CD10 unk2C;
    Sint32_x0015CD10 unk30;
    Sint32_x0015CD10 unk34;
    Sint32_x0015CD10 unk38;
    Sint32_x0015CD10 trap_num_samples;
    Sint32_x0015CD10 trap_count;
    Sint32_x0015CD10 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CD10, Sint8_x0015CD10*, Sint32_x0015CD10);
    void* flt_obj;
    Sint8_x0015CD10 unk58[0x40];
    Sint32_x0015CD10 unk98;
    Sint32_x0015CD10 lnkflg;
} ADXSJD_OBJ_x0015CD10;
typedef ADXSJD_OBJ_x0015CD10* ADXSJD_x0015CD10;
typedef struct {
    Sint32_x0015CD10 unk0;
    SJ_x0015CD10 sj;
} SJX_UNK_0_x0015CD10;
typedef struct {
    Sint8_x0015CD10 used;
    Sint8_x0015CD10 unk1;
    Sint16_x0015CD10 unk2;
    SJ_x0015CD10 sj;
    void* unk8;
    Sint32_x0015CD10 unkC;
    SJX_UNK_0_x0015CD10* unk10;
} SJX_OBJ_x0015CD10;
typedef SJX_OBJ_x0015CD10* SJX_x0015CD10;
typedef struct {
    Sint8_x0015CD10 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CD10 unk8;
    SJX_x0015CD10 unkC;
    SJCK_x0015CD10 chunk;
} PS2PSJ_OBJ_x0015CD10;
typedef PS2PSJ_OBJ_x0015CD10* PS2PSJ_x0015CD10;
typedef struct {
               Sint8_x0015CD10 unk0;
               Sint8_x0015CD10 unk1;
               Sint8_x0015CD10 unk2;
               SJ_x0015CD10 unk4;
               SJ_x0015CD10 unk8;
               SJCK_x0015CD10 unkC;
               SJCK_x0015CD10 unk14;
               sceSifDmaData_x0015CD10 dma_data;
               Sint32_x0015CD10 unk2C;
               Sint32_x0015CD10 unk30;
               Sint32_x0015CD10 unk34;
               Sint32_x0015CD10 unk38;
               Sint32_x0015CD10 unk3C;
} DTR_OBJ_x0015CD10;
typedef DTR_OBJ_x0015CD10* DTR_x0015CD10;
typedef struct {
    Sint8_x0015CD10 used;
    Sint32_x0015CD10 maxnch;
    PS2PSJ_x0015CD10 psj[2];
    DTR_x0015CD10 dtr[2];
    SJ_x0015CD10 sjo[2];
    void* unk20;
    Sint32_x0015CD10 unk24;
    Sint32_x0015CD10 unk28;
    Sint32_x0015CD10 unk2C;
    Sint8_x0015CD10 unk30;
    Sint8_x0015CD10 unk31;
    Sint8_x0015CD10 num_chan;
    Sint8_x0015CD10 unk33;
    Sint32_x0015CD10 sfreq;
    Sint32_x0015CD10 unk38;
    Sint32_x0015CD10 out_vol;
    Sint32_x0015CD10 unk40;
    Sint32_x0015CD10 pan[2];
    Sint32_x0015CD10 unk4C[2];
    Sint32_x0015CD10 unk54;
    Sint32_x0015CD10 unk58;
    Sint8_x0015CD10 unk5C;
    Sint8_x0015CD10 unk5D;
    Sint8_x0015CD10 unk5E;
    Sint8_x0015CD10 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CD10;
typedef ADXRNA_OBJ_x0015CD10* ADXRNA_x0015CD10;
typedef struct {
    Sint8_x0015CD10 unk0;
    Sint8_x0015CD10 stat;
    Sint8_x0015CD10 read_flg;
    Sint8_x0015CD10 unk3;
    SJ_x0015CD10 sj;
    void* cvfs;
    Sint32_x0015CD10 unkC;
    Sint32_x0015CD10 file_len;
    Sint32_x0015CD10 file_sct;
    Sint32_x0015CD10 unk18;
    Sint32_x0015CD10 unk1C;
    Sint32_x0015CD10 unk20;
    SJCK_x0015CD10 unk24;
    Sint32_x0015CD10 req_rd_size;
    Sint32_x0015CD10 eos;
    Uint32_x0015CD10 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CD10 unk40;
    Sint8_x0015CD10 pause;
    Sint8_x0015CD10 unk45;
    Sint8_x0015CD10 unk46;
    Sint8_x0015CD10 unk47;
    Sint8_x0015CD10 unk48;
    Sint8_x0015CD10 unk49;
    char pad4A[6];
    const Char8_x0015CD10* fname;
    void* dir;
    Sint32_x0015CD10 cur_ofst;
    Uint32_x0015CD10 unk5C;
} ADXSTM_OBJ_x0015CD10;
typedef ADXSTM_OBJ_x0015CD10* ADXSTM_x0015CD10;
extern void cvFsEntryErrFunc_x0015CD10(void (*function)(void*, const Char8_x0015CD10*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CD10(void (*callback)(void*, Char8_x0015CD10*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CD10 SVM_SetCbSvr_x0015CD10(Sint32_x0015CD10, Sint32_x0015CD10 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CD10(Sint32_x0015CD10, Sint32_x0015CD10, Sint32_x0015CD10 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CD10(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CD10(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CD10 {
                   Sint8_x0015CD10 used;
                   Sint8_x0015CD10 stat;
                   Sint8_x0015CD10 pmode;
                   Sint8_x0015CD10 maxnch;
                   ADXSJD_x0015CD10 sjd;
                   ADXSTM_x0015CD10 stm;
                   ADXRNA_x0015CD10 rna;
                   SJ_x0015CD10 sjf;
                   SJ_x0015CD10 sji;
                   SJ_x0015CD10 sjo[(2)];
                   Sint8_x0015CD10 *ibuf;
                   Sint32_x0015CD10 ibuflen;
                   Sint32_x0015CD10 ibufxlen;
                   Sint16_x0015CD10 *obuf;
                   Sint32_x0015CD10 obufsize;
                   Sint32_x0015CD10 obufdist;
                   Sint32_x0015CD10 svrfreq;
                   Sint16_x0015CD10 maxsct;
                   Sint16_x0015CD10 minsct;
                   Sint16_x0015CD10 outvol;
                   Sint16_x0015CD10 outpan[(2)];
                   Sint16_x0015CD10 unk46;
                   Sint32_x0015CD10 maxdecsmpl;
                   Sint32_x0015CD10 lpcnt;
                   Sint32_x0015CD10 lp_skiplen;
                   Sint32_x0015CD10 trp;
                   Sint32_x0015CD10 wpos;
                   Sint32_x0015CD10 mofst;
                   Sint16_x0015CD10 ercode;
                   Sint32_x0015CD10 edecpos;
                   Sint16_x0015CD10 edeccnt;
                   Sint16_x0015CD10 eshrtcnt;
                   Sint8_x0015CD10 lpflg;
                   Sint8_x0015CD10 autorcvr;
                   Sint8_x0015CD10 fltmode;
                   Sint8_x0015CD10 execflag;
                   Sint8_x0015CD10 pstwait_flag;
                   Sint8_x0015CD10 pstready_flag;
                   Sint8_x0015CD10 pause_flag;
                   void *amp;
                   SJ_x0015CD10 ampsji[(2)];
                   SJ_x0015CD10 ampsjo[(2)];
                   Sint32_x0015CD10 time_ofst;
                   Sint32_x0015CD10 lesct;
                   Sint32_x0015CD10 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CD10 lnkflg;
                   Sint8_x0015CD10 rsv;
                   Sint16_x0015CD10 rsv2;
                   Uint32_x0015CD10 tvofst;
                   Uint32_x0015CD10 svcnt;
                   Uint32_x0015CD10 decofst;
                   Sint32_x0015CD10 flush_nsmpl;
                   Sint8_x0015CD10 unkAC;
                   Sint8_x0015CD10 padAD[1];
               Char8_x0015CD10* unkB0;
               Sint32_x0015CD10 padB4;
               Sint32_x0015CD10 padB8;
               Sint32_x0015CD10 padBC;
               Sint32_x0015CD10 padC0;
} ADX_TALK_x0015CD10;
typedef ADX_TALK_x0015CD10 *ADXT_x0015CD10;
extern void ADXT_EntryErrFunc_x0015CD10(void (*func)(void *obj, Sint8_x0015CD10 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CD10(ADXT_x0015CD10 adxt,
                void (*f)(void *obj, Sint32_x0015CD10 ch, void *data, Sint32_x0015CD10 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CD10(Bool_x0015CD10 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CD10(Bool_x0015CD10 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CD10(void (*fn)(void *obj, Char8_x0015CD10 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CD10(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void func_0015CD10_x0015CD10(ADXSTM_x0015CD10 stm) __asm__("func_0015CD10");
/* adxstm_start_sub: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CD10_x0015CD10(ADXSTM_x0015CD10 stm) {
    stm->unk34 = 0;
    stm->unk3 = 0;
    if (stm->file_sct == 0) {
        stm->stat = 3;
    } else {
        stm->stat = 2;
    }
    stm->read_flg = 0;
    stm->unk24.data = 0;
    stm->unk24.len = 0;
    stm->unk47 = 1;
}
typedef int s32_x0015CD48;
typedef s32_x0015CD48 ptrdiff_t_x0015CD48;
void ADXCRS_Lock_x0015CD48() __asm__("func_00152508");
void ADXCRS_Unlock_x0015CD48() __asm__("func_00152520");
typedef unsigned char Uint8_x0015CD48;
typedef char Sint8_x0015CD48;
typedef unsigned short Uint16_x0015CD48;
typedef signed short Sint16_x0015CD48;
typedef unsigned int Uint32_x0015CD48;
typedef signed int Sint32_x0015CD48;
typedef Sint32_x0015CD48 Bool_x0015CD48;
typedef char Char8_x0015CD48;
typedef struct _UUID_x0015CD48 {
    Uint32_x0015CD48 Data1;
    Uint16_x0015CD48 Data2;
    Uint16_x0015CD48 Data3;
    Uint8_x0015CD48 Data4[8];
} UUID_x0015CD48;
typedef struct {
        Sint8_x0015CD48 *data;
        Sint32_x0015CD48 len;
} SJCK_x0015CD48;
typedef struct {
        struct _sj_vtbl_x0015CD48 *vtbl;
} SJ_OBJ_x0015CD48;
typedef SJ_OBJ_x0015CD48 *SJ_x0015CD48;
typedef struct _sj_vtbl_x0015CD48 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CD48 sj);
        UUID_x0015CD48 *(*GetUuid)(SJ_x0015CD48 sj);
        void (*Reset)(SJ_x0015CD48 sj);
        void (*GetChunk)(SJ_x0015CD48 sj, Sint32_x0015CD48 id, Sint32_x0015CD48 nbyte, SJCK_x0015CD48 *ck);
        void (*UngetChunk)(SJ_x0015CD48 sj, Sint32_x0015CD48 id, SJCK_x0015CD48 *ck);
        void (*PutChunk)(SJ_x0015CD48 sj, Sint32_x0015CD48 id, SJCK_x0015CD48 *ck);
        Sint32_x0015CD48 (*GetNumData)(SJ_x0015CD48 sj, Sint32_x0015CD48 id);
        Sint32_x0015CD48 (*IsGetChunk)(SJ_x0015CD48 sj, Sint32_x0015CD48 id, Sint32_x0015CD48 nbyte, Sint32_x0015CD48 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CD48 sj,
                                        void (*func)(void *obj, Sint32_x0015CD48 ecode), void *obj);
} SJ_IF_x0015CD48;
extern int* sceCdCallback_x0015CD48(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CD48(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CD48;
typedef struct {
               Sint16_x0015CD48 unk0;
               Sint16_x0015CD48 unk2;
               Sint16_x0015CD48 unk4;
               Sint16_x0015CD48 unk6;
} ADXPD_OBJ_SUB_x0015CD48;
typedef struct {
               Sint32_x0015CD48 used;
               Sint32_x0015CD48 unk4;
               Sint32_x0015CD48 mode;
               Sint32_x0015CD48 stat;
               Sint32_x0015CD48 num_blk;
               Sint32_x0015CD48 unk14;
               Sint32_x0015CD48 unk18;
               Sint32_x0015CD48 unk1C;
               Sint32_x0015CD48 unk20;
               Sint32_x0015CD48 unk24;
               ADXPD_OBJ_SUB_x0015CD48 unk28;
               Sint16_x0015CD48 unk30;
               Sint16_x0015CD48 unk32;
               Sint16_x0015CD48 unk34;
               Sint16_x0015CD48 unk36;
               Sint16_x0015CD48 unk38;
               Sint16_x0015CD48 unk3A;
} ADXPD_OBJ_x0015CD48;
typedef ADXPD_OBJ_x0015CD48* ADXPD_x0015CD48;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CD48;
typedef struct {
               Sint32_x0015CD48 unk0;
               Sint32_x0015CD48 unk4;
               Sint32_x0015CD48 unk8;
               Sint32_x0015CD48 unkC;
               Sint32_x0015CD48 unk10;
               void* unk14;
               Sint32_x0015CD48 unk18;
               Sint32_x0015CD48 unk1C;
               Sint32_x0015CD48 unk20;
               Sint32_x0015CD48 unk24;
               Sint32_x0015CD48 unk28;
} ADXB_UNK_x0015CD48;
typedef struct {
               Sint16_x0015CD48 unk0;
               Sint16_x0015CD48 unk2;
               Sint32_x0015CD48 stat;
               ADXPD_x0015CD48 adxpd;
               Sint8_x0015CD48 encoding_type;
               Sint8_x0015CD48 sample_bitdepth;
               Sint8_x0015CD48 channel_count;
               Sint8_x0015CD48 block_size;
               Sint32_x0015CD48 samples_per_block;
               Sint32_x0015CD48 sample_rate;
               Sint32_x0015CD48 total_samples;
               Sint16_x0015CD48 unk1C;
               char pad1E[2];
               Sint32_x0015CD48 unk20;
               Sint16_x0015CD48 unk24;
               Sint16_x0015CD48 unk26;
               Sint32_x0015CD48 unk28;
               Sint32_x0015CD48 unk2C;
               Sint32_x0015CD48 unk30;
               Sint32_x0015CD48 unk34;
               Sint32_x0015CD48 unk38;
               void* unk3C;
               Sint32_x0015CD48 unk40;
               Sint32_x0015CD48 unk44;
               ADXB_UNK_x0015CD48 unk48;
               Sint32_x0015CD48 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CD48*, Sint32_x0015CD48*, Sint32_x0015CD48*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CD48, Sint32_x0015CD48);
               Sint32_x0015CD48 unk84;
               Sint32_x0015CD48 unk88;
               Sint32_x0015CD48 unk8C;
               Sint32_x0015CD48 dec_num_sample;
               Sint32_x0015CD48 dec_data_len;
               Sint16_x0015CD48 format;
               Sint16_x0015CD48 unk9A;
               Sint16_x0015CD48 unk9C;
               Sint16_x0015CD48 unk9E;
               Sint16_x0015CD48 unkA0;
               char padA2[0xE];
               Sint32_x0015CD48 unkB0;
               Sint32_x0015CD48 ahx_dec_samples;
               Sint32_x0015CD48 ahx_dec_frames;
               Sint32_x0015CD48 unkBC;
               Sint32_x0015CD48 ac3_dec_samples;
               Sint32_x0015CD48 ac3_dec_frames;
               Sint32_x0015CD48 unkC8;
               ADX_UNK_x0015CD48 unkCC;
               Sint16_x0015CD48 unkDC;
               Sint16_x0015CD48 unkDE[2];
               char padE2[2];
               Sint32_x0015CD48 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CD48;
typedef ADXB_OBJ_x0015CD48* ADXB_x0015CD48;
typedef struct {
    Sint8_x0015CD48 used;
    Sint8_x0015CD48 state;
    Sint8_x0015CD48 maxnch;
    Sint8_x0015CD48 unk3;
    ADXB_x0015CD48 adxb;
    SJ_x0015CD48 sji;
    SJ_x0015CD48 sjo[2];
    SJCK_x0015CD48 unk14;
    SJCK_x0015CD48 chunks[2];
    Sint32_x0015CD48 unk2C;
    Sint32_x0015CD48 unk30;
    Sint32_x0015CD48 unk34;
    Sint32_x0015CD48 unk38;
    Sint32_x0015CD48 trap_num_samples;
    Sint32_x0015CD48 trap_count;
    Sint32_x0015CD48 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CD48, Sint8_x0015CD48*, Sint32_x0015CD48);
    void* flt_obj;
    Sint8_x0015CD48 unk58[0x40];
    Sint32_x0015CD48 unk98;
    Sint32_x0015CD48 lnkflg;
} ADXSJD_OBJ_x0015CD48;
typedef ADXSJD_OBJ_x0015CD48* ADXSJD_x0015CD48;
typedef struct {
    Sint32_x0015CD48 unk0;
    SJ_x0015CD48 sj;
} SJX_UNK_0_x0015CD48;
typedef struct {
    Sint8_x0015CD48 used;
    Sint8_x0015CD48 unk1;
    Sint16_x0015CD48 unk2;
    SJ_x0015CD48 sj;
    void* unk8;
    Sint32_x0015CD48 unkC;
    SJX_UNK_0_x0015CD48* unk10;
} SJX_OBJ_x0015CD48;
typedef SJX_OBJ_x0015CD48* SJX_x0015CD48;
typedef struct {
    Sint8_x0015CD48 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CD48 unk8;
    SJX_x0015CD48 unkC;
    SJCK_x0015CD48 chunk;
} PS2PSJ_OBJ_x0015CD48;
typedef PS2PSJ_OBJ_x0015CD48* PS2PSJ_x0015CD48;
typedef struct {
               Sint8_x0015CD48 unk0;
               Sint8_x0015CD48 unk1;
               Sint8_x0015CD48 unk2;
               SJ_x0015CD48 unk4;
               SJ_x0015CD48 unk8;
               SJCK_x0015CD48 unkC;
               SJCK_x0015CD48 unk14;
               sceSifDmaData_x0015CD48 dma_data;
               Sint32_x0015CD48 unk2C;
               Sint32_x0015CD48 unk30;
               Sint32_x0015CD48 unk34;
               Sint32_x0015CD48 unk38;
               Sint32_x0015CD48 unk3C;
} DTR_OBJ_x0015CD48;
typedef DTR_OBJ_x0015CD48* DTR_x0015CD48;
typedef struct {
    Sint8_x0015CD48 used;
    Sint32_x0015CD48 maxnch;
    PS2PSJ_x0015CD48 psj[2];
    DTR_x0015CD48 dtr[2];
    SJ_x0015CD48 sjo[2];
    void* unk20;
    Sint32_x0015CD48 unk24;
    Sint32_x0015CD48 unk28;
    Sint32_x0015CD48 unk2C;
    Sint8_x0015CD48 unk30;
    Sint8_x0015CD48 unk31;
    Sint8_x0015CD48 num_chan;
    Sint8_x0015CD48 unk33;
    Sint32_x0015CD48 sfreq;
    Sint32_x0015CD48 unk38;
    Sint32_x0015CD48 out_vol;
    Sint32_x0015CD48 unk40;
    Sint32_x0015CD48 pan[2];
    Sint32_x0015CD48 unk4C[2];
    Sint32_x0015CD48 unk54;
    Sint32_x0015CD48 unk58;
    Sint8_x0015CD48 unk5C;
    Sint8_x0015CD48 unk5D;
    Sint8_x0015CD48 unk5E;
    Sint8_x0015CD48 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CD48;
typedef ADXRNA_OBJ_x0015CD48* ADXRNA_x0015CD48;
typedef struct {
    Sint8_x0015CD48 unk0;
    Sint8_x0015CD48 stat;
    Sint8_x0015CD48 read_flg;
    Sint8_x0015CD48 unk3;
    SJ_x0015CD48 sj;
    void* cvfs;
    Sint32_x0015CD48 unkC;
    Sint32_x0015CD48 file_len;
    Sint32_x0015CD48 file_sct;
    Sint32_x0015CD48 unk18;
    Sint32_x0015CD48 unk1C;
    Sint32_x0015CD48 unk20;
    SJCK_x0015CD48 unk24;
    Sint32_x0015CD48 req_rd_size;
    Sint32_x0015CD48 eos;
    Uint32_x0015CD48 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CD48 unk40;
    Sint8_x0015CD48 pause;
    Sint8_x0015CD48 unk45;
    Sint8_x0015CD48 unk46;
    Sint8_x0015CD48 unk47;
    Sint8_x0015CD48 unk48;
    Sint8_x0015CD48 unk49;
    char pad4A[6];
    const Char8_x0015CD48* fname;
    void* dir;
    Sint32_x0015CD48 cur_ofst;
    Uint32_x0015CD48 unk5C;
} ADXSTM_OBJ_x0015CD48;
typedef ADXSTM_OBJ_x0015CD48* ADXSTM_x0015CD48;
extern void cvFsEntryErrFunc_x0015CD48(void (*function)(void*, const Char8_x0015CD48*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CD48(void (*callback)(void*, Char8_x0015CD48*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CD48 SVM_SetCbSvr_x0015CD48(Sint32_x0015CD48, Sint32_x0015CD48 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CD48(Sint32_x0015CD48, Sint32_x0015CD48, Sint32_x0015CD48 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CD48(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CD48(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CD48 {
                   Sint8_x0015CD48 used;
                   Sint8_x0015CD48 stat;
                   Sint8_x0015CD48 pmode;
                   Sint8_x0015CD48 maxnch;
                   ADXSJD_x0015CD48 sjd;
                   ADXSTM_x0015CD48 stm;
                   ADXRNA_x0015CD48 rna;
                   SJ_x0015CD48 sjf;
                   SJ_x0015CD48 sji;
                   SJ_x0015CD48 sjo[(2)];
                   Sint8_x0015CD48 *ibuf;
                   Sint32_x0015CD48 ibuflen;
                   Sint32_x0015CD48 ibufxlen;
                   Sint16_x0015CD48 *obuf;
                   Sint32_x0015CD48 obufsize;
                   Sint32_x0015CD48 obufdist;
                   Sint32_x0015CD48 svrfreq;
                   Sint16_x0015CD48 maxsct;
                   Sint16_x0015CD48 minsct;
                   Sint16_x0015CD48 outvol;
                   Sint16_x0015CD48 outpan[(2)];
                   Sint16_x0015CD48 unk46;
                   Sint32_x0015CD48 maxdecsmpl;
                   Sint32_x0015CD48 lpcnt;
                   Sint32_x0015CD48 lp_skiplen;
                   Sint32_x0015CD48 trp;
                   Sint32_x0015CD48 wpos;
                   Sint32_x0015CD48 mofst;
                   Sint16_x0015CD48 ercode;
                   Sint32_x0015CD48 edecpos;
                   Sint16_x0015CD48 edeccnt;
                   Sint16_x0015CD48 eshrtcnt;
                   Sint8_x0015CD48 lpflg;
                   Sint8_x0015CD48 autorcvr;
                   Sint8_x0015CD48 fltmode;
                   Sint8_x0015CD48 execflag;
                   Sint8_x0015CD48 pstwait_flag;
                   Sint8_x0015CD48 pstready_flag;
                   Sint8_x0015CD48 pause_flag;
                   void *amp;
                   SJ_x0015CD48 ampsji[(2)];
                   SJ_x0015CD48 ampsjo[(2)];
                   Sint32_x0015CD48 time_ofst;
                   Sint32_x0015CD48 lesct;
                   Sint32_x0015CD48 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CD48 lnkflg;
                   Sint8_x0015CD48 rsv;
                   Sint16_x0015CD48 rsv2;
                   Uint32_x0015CD48 tvofst;
                   Uint32_x0015CD48 svcnt;
                   Uint32_x0015CD48 decofst;
                   Sint32_x0015CD48 flush_nsmpl;
                   Sint8_x0015CD48 unkAC;
                   Sint8_x0015CD48 padAD[1];
               Char8_x0015CD48* unkB0;
               Sint32_x0015CD48 padB4;
               Sint32_x0015CD48 padB8;
               Sint32_x0015CD48 padBC;
               Sint32_x0015CD48 padC0;
} ADX_TALK_x0015CD48;
typedef ADX_TALK_x0015CD48 *ADXT_x0015CD48;
extern void ADXT_EntryErrFunc_x0015CD48(void (*func)(void *obj, Sint8_x0015CD48 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CD48(ADXT_x0015CD48 adxt,
                void (*f)(void *obj, Sint32_x0015CD48 ch, void *data, Sint32_x0015CD48 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CD48(Bool_x0015CD48 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CD48(Bool_x0015CD48 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CD48(void (*fn)(void *obj, Char8_x0015CD48 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CD48(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void adxstm_start_sub_x0015CD48(ADXSTM_x0015CD48 stm) __asm__("func_0015CD10");
Sint32_x0015CD48 func_0015CD48_x0015CD48(ADXSTM_x0015CD48 stm) __asm__("func_0015CD48");
/* ADXSTM_Start: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015CD48 func_0015CD48_x0015CD48(ADXSTM_x0015CD48 stm) {
    ADXCRS_Lock_x0015CD48();
    adxstm_start_sub_x0015CD48(stm);
    stm->unk5C = 0xFFFFF;
    ADXCRS_Unlock_x0015CD48();
    return 1;
}
s32 func_0015CD88(u8 *arg0, s32 arg1) {
    func_00152508();
    func_0015CD10(arg0);
    *(s32 *)((u8 *)arg0 + 0x5C) = arg1;
    func_00152520();
    return 1;
}
typedef int s32_x0015CDD0;
typedef s32_x0015CDD0 ptrdiff_t_x0015CDD0;
typedef unsigned char Uint8_x0015CDD0;
typedef char Sint8_x0015CDD0;
typedef unsigned short Uint16_x0015CDD0;
typedef signed short Sint16_x0015CDD0;
typedef unsigned int Uint32_x0015CDD0;
typedef signed int Sint32_x0015CDD0;
typedef Sint32_x0015CDD0 Bool_x0015CDD0;
typedef char Char8_x0015CDD0;
typedef struct _UUID_x0015CDD0 {
    Uint32_x0015CDD0 Data1;
    Uint16_x0015CDD0 Data2;
    Uint16_x0015CDD0 Data3;
    Uint8_x0015CDD0 Data4[8];
} UUID_x0015CDD0;
typedef struct {
        Sint8_x0015CDD0 *data;
        Sint32_x0015CDD0 len;
} SJCK_x0015CDD0;
typedef struct {
        struct _sj_vtbl_x0015CDD0 *vtbl;
} SJ_OBJ_x0015CDD0;
typedef SJ_OBJ_x0015CDD0 *SJ_x0015CDD0;
typedef struct _sj_vtbl_x0015CDD0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CDD0 sj);
        UUID_x0015CDD0 *(*GetUuid)(SJ_x0015CDD0 sj);
        void (*Reset)(SJ_x0015CDD0 sj);
        void (*GetChunk)(SJ_x0015CDD0 sj, Sint32_x0015CDD0 id, Sint32_x0015CDD0 nbyte, SJCK_x0015CDD0 *ck);
        void (*UngetChunk)(SJ_x0015CDD0 sj, Sint32_x0015CDD0 id, SJCK_x0015CDD0 *ck);
        void (*PutChunk)(SJ_x0015CDD0 sj, Sint32_x0015CDD0 id, SJCK_x0015CDD0 *ck);
        Sint32_x0015CDD0 (*GetNumData)(SJ_x0015CDD0 sj, Sint32_x0015CDD0 id);
        Sint32_x0015CDD0 (*IsGetChunk)(SJ_x0015CDD0 sj, Sint32_x0015CDD0 id, Sint32_x0015CDD0 nbyte, Sint32_x0015CDD0 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CDD0 sj,
                                        void (*func)(void *obj, Sint32_x0015CDD0 ecode), void *obj);
} SJ_IF_x0015CDD0;
extern int* sceCdCallback_x0015CDD0(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CDD0(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CDD0;
typedef struct {
               Sint16_x0015CDD0 unk0;
               Sint16_x0015CDD0 unk2;
               Sint16_x0015CDD0 unk4;
               Sint16_x0015CDD0 unk6;
} ADXPD_OBJ_SUB_x0015CDD0;
typedef struct {
               Sint32_x0015CDD0 used;
               Sint32_x0015CDD0 unk4;
               Sint32_x0015CDD0 mode;
               Sint32_x0015CDD0 stat;
               Sint32_x0015CDD0 num_blk;
               Sint32_x0015CDD0 unk14;
               Sint32_x0015CDD0 unk18;
               Sint32_x0015CDD0 unk1C;
               Sint32_x0015CDD0 unk20;
               Sint32_x0015CDD0 unk24;
               ADXPD_OBJ_SUB_x0015CDD0 unk28;
               Sint16_x0015CDD0 unk30;
               Sint16_x0015CDD0 unk32;
               Sint16_x0015CDD0 unk34;
               Sint16_x0015CDD0 unk36;
               Sint16_x0015CDD0 unk38;
               Sint16_x0015CDD0 unk3A;
} ADXPD_OBJ_x0015CDD0;
typedef ADXPD_OBJ_x0015CDD0* ADXPD_x0015CDD0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CDD0;
typedef struct {
               Sint32_x0015CDD0 unk0;
               Sint32_x0015CDD0 unk4;
               Sint32_x0015CDD0 unk8;
               Sint32_x0015CDD0 unkC;
               Sint32_x0015CDD0 unk10;
               void* unk14;
               Sint32_x0015CDD0 unk18;
               Sint32_x0015CDD0 unk1C;
               Sint32_x0015CDD0 unk20;
               Sint32_x0015CDD0 unk24;
               Sint32_x0015CDD0 unk28;
} ADXB_UNK_x0015CDD0;
typedef struct {
               Sint16_x0015CDD0 unk0;
               Sint16_x0015CDD0 unk2;
               Sint32_x0015CDD0 stat;
               ADXPD_x0015CDD0 adxpd;
               Sint8_x0015CDD0 encoding_type;
               Sint8_x0015CDD0 sample_bitdepth;
               Sint8_x0015CDD0 channel_count;
               Sint8_x0015CDD0 block_size;
               Sint32_x0015CDD0 samples_per_block;
               Sint32_x0015CDD0 sample_rate;
               Sint32_x0015CDD0 total_samples;
               Sint16_x0015CDD0 unk1C;
               char pad1E[2];
               Sint32_x0015CDD0 unk20;
               Sint16_x0015CDD0 unk24;
               Sint16_x0015CDD0 unk26;
               Sint32_x0015CDD0 unk28;
               Sint32_x0015CDD0 unk2C;
               Sint32_x0015CDD0 unk30;
               Sint32_x0015CDD0 unk34;
               Sint32_x0015CDD0 unk38;
               void* unk3C;
               Sint32_x0015CDD0 unk40;
               Sint32_x0015CDD0 unk44;
               ADXB_UNK_x0015CDD0 unk48;
               Sint32_x0015CDD0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CDD0*, Sint32_x0015CDD0*, Sint32_x0015CDD0*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CDD0, Sint32_x0015CDD0);
               Sint32_x0015CDD0 unk84;
               Sint32_x0015CDD0 unk88;
               Sint32_x0015CDD0 unk8C;
               Sint32_x0015CDD0 dec_num_sample;
               Sint32_x0015CDD0 dec_data_len;
               Sint16_x0015CDD0 format;
               Sint16_x0015CDD0 unk9A;
               Sint16_x0015CDD0 unk9C;
               Sint16_x0015CDD0 unk9E;
               Sint16_x0015CDD0 unkA0;
               char padA2[0xE];
               Sint32_x0015CDD0 unkB0;
               Sint32_x0015CDD0 ahx_dec_samples;
               Sint32_x0015CDD0 ahx_dec_frames;
               Sint32_x0015CDD0 unkBC;
               Sint32_x0015CDD0 ac3_dec_samples;
               Sint32_x0015CDD0 ac3_dec_frames;
               Sint32_x0015CDD0 unkC8;
               ADX_UNK_x0015CDD0 unkCC;
               Sint16_x0015CDD0 unkDC;
               Sint16_x0015CDD0 unkDE[2];
               char padE2[2];
               Sint32_x0015CDD0 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CDD0;
typedef ADXB_OBJ_x0015CDD0* ADXB_x0015CDD0;
typedef struct {
    Sint8_x0015CDD0 used;
    Sint8_x0015CDD0 state;
    Sint8_x0015CDD0 maxnch;
    Sint8_x0015CDD0 unk3;
    ADXB_x0015CDD0 adxb;
    SJ_x0015CDD0 sji;
    SJ_x0015CDD0 sjo[2];
    SJCK_x0015CDD0 unk14;
    SJCK_x0015CDD0 chunks[2];
    Sint32_x0015CDD0 unk2C;
    Sint32_x0015CDD0 unk30;
    Sint32_x0015CDD0 unk34;
    Sint32_x0015CDD0 unk38;
    Sint32_x0015CDD0 trap_num_samples;
    Sint32_x0015CDD0 trap_count;
    Sint32_x0015CDD0 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CDD0, Sint8_x0015CDD0*, Sint32_x0015CDD0);
    void* flt_obj;
    Sint8_x0015CDD0 unk58[0x40];
    Sint32_x0015CDD0 unk98;
    Sint32_x0015CDD0 lnkflg;
} ADXSJD_OBJ_x0015CDD0;
typedef ADXSJD_OBJ_x0015CDD0* ADXSJD_x0015CDD0;
typedef struct {
    Sint32_x0015CDD0 unk0;
    SJ_x0015CDD0 sj;
} SJX_UNK_0_x0015CDD0;
typedef struct {
    Sint8_x0015CDD0 used;
    Sint8_x0015CDD0 unk1;
    Sint16_x0015CDD0 unk2;
    SJ_x0015CDD0 sj;
    void* unk8;
    Sint32_x0015CDD0 unkC;
    SJX_UNK_0_x0015CDD0* unk10;
} SJX_OBJ_x0015CDD0;
typedef SJX_OBJ_x0015CDD0* SJX_x0015CDD0;
typedef struct {
    Sint8_x0015CDD0 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CDD0 unk8;
    SJX_x0015CDD0 unkC;
    SJCK_x0015CDD0 chunk;
} PS2PSJ_OBJ_x0015CDD0;
typedef PS2PSJ_OBJ_x0015CDD0* PS2PSJ_x0015CDD0;
typedef struct {
               Sint8_x0015CDD0 unk0;
               Sint8_x0015CDD0 unk1;
               Sint8_x0015CDD0 unk2;
               SJ_x0015CDD0 unk4;
               SJ_x0015CDD0 unk8;
               SJCK_x0015CDD0 unkC;
               SJCK_x0015CDD0 unk14;
               sceSifDmaData_x0015CDD0 dma_data;
               Sint32_x0015CDD0 unk2C;
               Sint32_x0015CDD0 unk30;
               Sint32_x0015CDD0 unk34;
               Sint32_x0015CDD0 unk38;
               Sint32_x0015CDD0 unk3C;
} DTR_OBJ_x0015CDD0;
typedef DTR_OBJ_x0015CDD0* DTR_x0015CDD0;
typedef struct {
    Sint8_x0015CDD0 used;
    Sint32_x0015CDD0 maxnch;
    PS2PSJ_x0015CDD0 psj[2];
    DTR_x0015CDD0 dtr[2];
    SJ_x0015CDD0 sjo[2];
    void* unk20;
    Sint32_x0015CDD0 unk24;
    Sint32_x0015CDD0 unk28;
    Sint32_x0015CDD0 unk2C;
    Sint8_x0015CDD0 unk30;
    Sint8_x0015CDD0 unk31;
    Sint8_x0015CDD0 num_chan;
    Sint8_x0015CDD0 unk33;
    Sint32_x0015CDD0 sfreq;
    Sint32_x0015CDD0 unk38;
    Sint32_x0015CDD0 out_vol;
    Sint32_x0015CDD0 unk40;
    Sint32_x0015CDD0 pan[2];
    Sint32_x0015CDD0 unk4C[2];
    Sint32_x0015CDD0 unk54;
    Sint32_x0015CDD0 unk58;
    Sint8_x0015CDD0 unk5C;
    Sint8_x0015CDD0 unk5D;
    Sint8_x0015CDD0 unk5E;
    Sint8_x0015CDD0 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CDD0;
typedef ADXRNA_OBJ_x0015CDD0* ADXRNA_x0015CDD0;
typedef struct {
    Sint8_x0015CDD0 unk0;
    Sint8_x0015CDD0 stat;
    Sint8_x0015CDD0 read_flg;
    Sint8_x0015CDD0 unk3;
    SJ_x0015CDD0 sj;
    void* cvfs;
    Sint32_x0015CDD0 unkC;
    Sint32_x0015CDD0 file_len;
    Sint32_x0015CDD0 file_sct;
    Sint32_x0015CDD0 unk18;
    Sint32_x0015CDD0 unk1C;
    Sint32_x0015CDD0 unk20;
    SJCK_x0015CDD0 unk24;
    Sint32_x0015CDD0 req_rd_size;
    Sint32_x0015CDD0 eos;
    Uint32_x0015CDD0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CDD0 unk40;
    Sint8_x0015CDD0 pause;
    Sint8_x0015CDD0 unk45;
    Sint8_x0015CDD0 unk46;
    Sint8_x0015CDD0 unk47;
    Sint8_x0015CDD0 unk48;
    Sint8_x0015CDD0 unk49;
    char pad4A[6];
    const Char8_x0015CDD0* fname;
    void* dir;
    Sint32_x0015CDD0 cur_ofst;
    Uint32_x0015CDD0 unk5C;
} ADXSTM_OBJ_x0015CDD0;
typedef ADXSTM_OBJ_x0015CDD0* ADXSTM_x0015CDD0;
extern void cvFsEntryErrFunc_x0015CDD0(void (*function)(void*, const Char8_x0015CDD0*), void* object) __asm__("cvFsEntryErrFunc");
void SVM_Lock_x0015CDD0() __asm__("func_0016FF40");
void SVM_Unlock_x0015CDD0() __asm__("func_0016FF58");
extern void SVM_SetCbErr_x0015CDD0(void (*callback)(void*, Char8_x0015CDD0*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CDD0 SVM_SetCbSvr_x0015CDD0(Sint32_x0015CDD0, Sint32_x0015CDD0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CDD0(Sint32_x0015CDD0, Sint32_x0015CDD0, Sint32_x0015CDD0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CDD0(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CDD0(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CDD0 {
                   Sint8_x0015CDD0 used;
                   Sint8_x0015CDD0 stat;
                   Sint8_x0015CDD0 pmode;
                   Sint8_x0015CDD0 maxnch;
                   ADXSJD_x0015CDD0 sjd;
                   ADXSTM_x0015CDD0 stm;
                   ADXRNA_x0015CDD0 rna;
                   SJ_x0015CDD0 sjf;
                   SJ_x0015CDD0 sji;
                   SJ_x0015CDD0 sjo[(2)];
                   Sint8_x0015CDD0 *ibuf;
                   Sint32_x0015CDD0 ibuflen;
                   Sint32_x0015CDD0 ibufxlen;
                   Sint16_x0015CDD0 *obuf;
                   Sint32_x0015CDD0 obufsize;
                   Sint32_x0015CDD0 obufdist;
                   Sint32_x0015CDD0 svrfreq;
                   Sint16_x0015CDD0 maxsct;
                   Sint16_x0015CDD0 minsct;
                   Sint16_x0015CDD0 outvol;
                   Sint16_x0015CDD0 outpan[(2)];
                   Sint16_x0015CDD0 unk46;
                   Sint32_x0015CDD0 maxdecsmpl;
                   Sint32_x0015CDD0 lpcnt;
                   Sint32_x0015CDD0 lp_skiplen;
                   Sint32_x0015CDD0 trp;
                   Sint32_x0015CDD0 wpos;
                   Sint32_x0015CDD0 mofst;
                   Sint16_x0015CDD0 ercode;
                   Sint32_x0015CDD0 edecpos;
                   Sint16_x0015CDD0 edeccnt;
                   Sint16_x0015CDD0 eshrtcnt;
                   Sint8_x0015CDD0 lpflg;
                   Sint8_x0015CDD0 autorcvr;
                   Sint8_x0015CDD0 fltmode;
                   Sint8_x0015CDD0 execflag;
                   Sint8_x0015CDD0 pstwait_flag;
                   Sint8_x0015CDD0 pstready_flag;
                   Sint8_x0015CDD0 pause_flag;
                   void *amp;
                   SJ_x0015CDD0 ampsji[(2)];
                   SJ_x0015CDD0 ampsjo[(2)];
                   Sint32_x0015CDD0 time_ofst;
                   Sint32_x0015CDD0 lesct;
                   Sint32_x0015CDD0 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CDD0 lnkflg;
                   Sint8_x0015CDD0 rsv;
                   Sint16_x0015CDD0 rsv2;
                   Uint32_x0015CDD0 tvofst;
                   Uint32_x0015CDD0 svcnt;
                   Uint32_x0015CDD0 decofst;
                   Sint32_x0015CDD0 flush_nsmpl;
                   Sint8_x0015CDD0 unkAC;
                   Sint8_x0015CDD0 padAD[1];
               Char8_x0015CDD0* unkB0;
               Sint32_x0015CDD0 padB4;
               Sint32_x0015CDD0 padB8;
               Sint32_x0015CDD0 padBC;
               Sint32_x0015CDD0 padC0;
} ADX_TALK_x0015CDD0;
typedef ADX_TALK_x0015CDD0 *ADXT_x0015CDD0;
extern void ADXT_EntryErrFunc_x0015CDD0(void (*func)(void *obj, Sint8_x0015CDD0 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CDD0(ADXT_x0015CDD0 adxt,
                void (*f)(void *obj, Sint32_x0015CDD0 ch, void *data, Sint32_x0015CDD0 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CDD0(Bool_x0015CDD0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CDD0(Bool_x0015CDD0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CDD0(void (*fn)(void *obj, Char8_x0015CDD0 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CDD0(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void func_0015CDD0_x0015CDD0(ADXSTM_x0015CDD0 stm) __asm__("func_0015CDD0");
/* ADXSTM_StopNw: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CDD0_x0015CDD0(ADXSTM_x0015CDD0 stm) {
    SVM_Lock_x0015CDD0();
    if (stm->stat == 2 && stm->read_flg == 1) {
        stm->unk48 = 1;
        if (stm->unk47 == 1) {
            stm->unk47 = 0;
        }
    } else {
        stm->stat = 1;
    }
    SVM_Unlock_x0015CDD0();
}
typedef int s32_x0015CE38;
typedef s32_x0015CE38 ptrdiff_t_x0015CE38;
typedef unsigned char Uint8_x0015CE38;
typedef char Sint8_x0015CE38;
typedef unsigned short Uint16_x0015CE38;
typedef signed short Sint16_x0015CE38;
typedef unsigned int Uint32_x0015CE38;
typedef signed int Sint32_x0015CE38;
typedef Sint32_x0015CE38 Bool_x0015CE38;
typedef char Char8_x0015CE38;
typedef struct _UUID_x0015CE38 {
    Uint32_x0015CE38 Data1;
    Uint16_x0015CE38 Data2;
    Uint16_x0015CE38 Data3;
    Uint8_x0015CE38 Data4[8];
} UUID_x0015CE38;
typedef struct {
        Sint8_x0015CE38 *data;
        Sint32_x0015CE38 len;
} SJCK_x0015CE38;
typedef struct {
        struct _sj_vtbl_x0015CE38 *vtbl;
} SJ_OBJ_x0015CE38;
typedef SJ_OBJ_x0015CE38 *SJ_x0015CE38;
typedef struct _sj_vtbl_x0015CE38 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CE38 sj);
        UUID_x0015CE38 *(*GetUuid)(SJ_x0015CE38 sj);
        void (*Reset)(SJ_x0015CE38 sj);
        void (*GetChunk)(SJ_x0015CE38 sj, Sint32_x0015CE38 id, Sint32_x0015CE38 nbyte, SJCK_x0015CE38 *ck);
        void (*UngetChunk)(SJ_x0015CE38 sj, Sint32_x0015CE38 id, SJCK_x0015CE38 *ck);
        void (*PutChunk)(SJ_x0015CE38 sj, Sint32_x0015CE38 id, SJCK_x0015CE38 *ck);
        Sint32_x0015CE38 (*GetNumData)(SJ_x0015CE38 sj, Sint32_x0015CE38 id);
        Sint32_x0015CE38 (*IsGetChunk)(SJ_x0015CE38 sj, Sint32_x0015CE38 id, Sint32_x0015CE38 nbyte, Sint32_x0015CE38 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CE38 sj,
                                        void (*func)(void *obj, Sint32_x0015CE38 ecode), void *obj);
} SJ_IF_x0015CE38;
extern int* sceCdCallback_x0015CE38(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CE38(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CE38;
typedef struct {
               Sint16_x0015CE38 unk0;
               Sint16_x0015CE38 unk2;
               Sint16_x0015CE38 unk4;
               Sint16_x0015CE38 unk6;
} ADXPD_OBJ_SUB_x0015CE38;
typedef struct {
               Sint32_x0015CE38 used;
               Sint32_x0015CE38 unk4;
               Sint32_x0015CE38 mode;
               Sint32_x0015CE38 stat;
               Sint32_x0015CE38 num_blk;
               Sint32_x0015CE38 unk14;
               Sint32_x0015CE38 unk18;
               Sint32_x0015CE38 unk1C;
               Sint32_x0015CE38 unk20;
               Sint32_x0015CE38 unk24;
               ADXPD_OBJ_SUB_x0015CE38 unk28;
               Sint16_x0015CE38 unk30;
               Sint16_x0015CE38 unk32;
               Sint16_x0015CE38 unk34;
               Sint16_x0015CE38 unk36;
               Sint16_x0015CE38 unk38;
               Sint16_x0015CE38 unk3A;
} ADXPD_OBJ_x0015CE38;
typedef ADXPD_OBJ_x0015CE38* ADXPD_x0015CE38;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CE38;
typedef struct {
               Sint32_x0015CE38 unk0;
               Sint32_x0015CE38 unk4;
               Sint32_x0015CE38 unk8;
               Sint32_x0015CE38 unkC;
               Sint32_x0015CE38 unk10;
               void* unk14;
               Sint32_x0015CE38 unk18;
               Sint32_x0015CE38 unk1C;
               Sint32_x0015CE38 unk20;
               Sint32_x0015CE38 unk24;
               Sint32_x0015CE38 unk28;
} ADXB_UNK_x0015CE38;
typedef struct {
               Sint16_x0015CE38 unk0;
               Sint16_x0015CE38 unk2;
               Sint32_x0015CE38 stat;
               ADXPD_x0015CE38 adxpd;
               Sint8_x0015CE38 encoding_type;
               Sint8_x0015CE38 sample_bitdepth;
               Sint8_x0015CE38 channel_count;
               Sint8_x0015CE38 block_size;
               Sint32_x0015CE38 samples_per_block;
               Sint32_x0015CE38 sample_rate;
               Sint32_x0015CE38 total_samples;
               Sint16_x0015CE38 unk1C;
               char pad1E[2];
               Sint32_x0015CE38 unk20;
               Sint16_x0015CE38 unk24;
               Sint16_x0015CE38 unk26;
               Sint32_x0015CE38 unk28;
               Sint32_x0015CE38 unk2C;
               Sint32_x0015CE38 unk30;
               Sint32_x0015CE38 unk34;
               Sint32_x0015CE38 unk38;
               void* unk3C;
               Sint32_x0015CE38 unk40;
               Sint32_x0015CE38 unk44;
               ADXB_UNK_x0015CE38 unk48;
               Sint32_x0015CE38 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CE38*, Sint32_x0015CE38*, Sint32_x0015CE38*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CE38, Sint32_x0015CE38);
               Sint32_x0015CE38 unk84;
               Sint32_x0015CE38 unk88;
               Sint32_x0015CE38 unk8C;
               Sint32_x0015CE38 dec_num_sample;
               Sint32_x0015CE38 dec_data_len;
               Sint16_x0015CE38 format;
               Sint16_x0015CE38 unk9A;
               Sint16_x0015CE38 unk9C;
               Sint16_x0015CE38 unk9E;
               Sint16_x0015CE38 unkA0;
               char padA2[0xE];
               Sint32_x0015CE38 unkB0;
               Sint32_x0015CE38 ahx_dec_samples;
               Sint32_x0015CE38 ahx_dec_frames;
               Sint32_x0015CE38 unkBC;
               Sint32_x0015CE38 ac3_dec_samples;
               Sint32_x0015CE38 ac3_dec_frames;
               Sint32_x0015CE38 unkC8;
               ADX_UNK_x0015CE38 unkCC;
               Sint16_x0015CE38 unkDC;
               Sint16_x0015CE38 unkDE[2];
               char padE2[2];
               Sint32_x0015CE38 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CE38;
typedef ADXB_OBJ_x0015CE38* ADXB_x0015CE38;
typedef struct {
    Sint8_x0015CE38 used;
    Sint8_x0015CE38 state;
    Sint8_x0015CE38 maxnch;
    Sint8_x0015CE38 unk3;
    ADXB_x0015CE38 adxb;
    SJ_x0015CE38 sji;
    SJ_x0015CE38 sjo[2];
    SJCK_x0015CE38 unk14;
    SJCK_x0015CE38 chunks[2];
    Sint32_x0015CE38 unk2C;
    Sint32_x0015CE38 unk30;
    Sint32_x0015CE38 unk34;
    Sint32_x0015CE38 unk38;
    Sint32_x0015CE38 trap_num_samples;
    Sint32_x0015CE38 trap_count;
    Sint32_x0015CE38 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CE38, Sint8_x0015CE38*, Sint32_x0015CE38);
    void* flt_obj;
    Sint8_x0015CE38 unk58[0x40];
    Sint32_x0015CE38 unk98;
    Sint32_x0015CE38 lnkflg;
} ADXSJD_OBJ_x0015CE38;
typedef ADXSJD_OBJ_x0015CE38* ADXSJD_x0015CE38;
typedef struct {
    Sint32_x0015CE38 unk0;
    SJ_x0015CE38 sj;
} SJX_UNK_0_x0015CE38;
typedef struct {
    Sint8_x0015CE38 used;
    Sint8_x0015CE38 unk1;
    Sint16_x0015CE38 unk2;
    SJ_x0015CE38 sj;
    void* unk8;
    Sint32_x0015CE38 unkC;
    SJX_UNK_0_x0015CE38* unk10;
} SJX_OBJ_x0015CE38;
typedef SJX_OBJ_x0015CE38* SJX_x0015CE38;
typedef struct {
    Sint8_x0015CE38 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CE38 unk8;
    SJX_x0015CE38 unkC;
    SJCK_x0015CE38 chunk;
} PS2PSJ_OBJ_x0015CE38;
typedef PS2PSJ_OBJ_x0015CE38* PS2PSJ_x0015CE38;
typedef struct {
               Sint8_x0015CE38 unk0;
               Sint8_x0015CE38 unk1;
               Sint8_x0015CE38 unk2;
               SJ_x0015CE38 unk4;
               SJ_x0015CE38 unk8;
               SJCK_x0015CE38 unkC;
               SJCK_x0015CE38 unk14;
               sceSifDmaData_x0015CE38 dma_data;
               Sint32_x0015CE38 unk2C;
               Sint32_x0015CE38 unk30;
               Sint32_x0015CE38 unk34;
               Sint32_x0015CE38 unk38;
               Sint32_x0015CE38 unk3C;
} DTR_OBJ_x0015CE38;
typedef DTR_OBJ_x0015CE38* DTR_x0015CE38;
typedef struct {
    Sint8_x0015CE38 used;
    Sint32_x0015CE38 maxnch;
    PS2PSJ_x0015CE38 psj[2];
    DTR_x0015CE38 dtr[2];
    SJ_x0015CE38 sjo[2];
    void* unk20;
    Sint32_x0015CE38 unk24;
    Sint32_x0015CE38 unk28;
    Sint32_x0015CE38 unk2C;
    Sint8_x0015CE38 unk30;
    Sint8_x0015CE38 unk31;
    Sint8_x0015CE38 num_chan;
    Sint8_x0015CE38 unk33;
    Sint32_x0015CE38 sfreq;
    Sint32_x0015CE38 unk38;
    Sint32_x0015CE38 out_vol;
    Sint32_x0015CE38 unk40;
    Sint32_x0015CE38 pan[2];
    Sint32_x0015CE38 unk4C[2];
    Sint32_x0015CE38 unk54;
    Sint32_x0015CE38 unk58;
    Sint8_x0015CE38 unk5C;
    Sint8_x0015CE38 unk5D;
    Sint8_x0015CE38 unk5E;
    Sint8_x0015CE38 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CE38;
typedef ADXRNA_OBJ_x0015CE38* ADXRNA_x0015CE38;
typedef struct {
    Sint8_x0015CE38 unk0;
    Sint8_x0015CE38 stat;
    Sint8_x0015CE38 read_flg;
    Sint8_x0015CE38 unk3;
    SJ_x0015CE38 sj;
    void* cvfs;
    Sint32_x0015CE38 unkC;
    Sint32_x0015CE38 file_len;
    Sint32_x0015CE38 file_sct;
    Sint32_x0015CE38 unk18;
    Sint32_x0015CE38 unk1C;
    Sint32_x0015CE38 unk20;
    SJCK_x0015CE38 unk24;
    Sint32_x0015CE38 req_rd_size;
    Sint32_x0015CE38 eos;
    Uint32_x0015CE38 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CE38 unk40;
    Sint8_x0015CE38 pause;
    Sint8_x0015CE38 unk45;
    Sint8_x0015CE38 unk46;
    Sint8_x0015CE38 unk47;
    Sint8_x0015CE38 unk48;
    Sint8_x0015CE38 unk49;
    char pad4A[6];
    const Char8_x0015CE38* fname;
    void* dir;
    Sint32_x0015CE38 cur_ofst;
    Uint32_x0015CE38 unk5C;
} ADXSTM_OBJ_x0015CE38;
typedef ADXSTM_OBJ_x0015CE38* ADXSTM_x0015CE38;
void ADXSTM_StopNw_x0015CE38(ADXSTM_x0015CE38 stm) __asm__("func_0015CDD0");
extern void cvFsEntryErrFunc_x0015CE38(void (*function)(void*, const Char8_x0015CE38*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CE38(void (*callback)(void*, Char8_x0015CE38*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CE38 SVM_SetCbSvr_x0015CE38(Sint32_x0015CE38, Sint32_x0015CE38 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CE38(Sint32_x0015CE38, Sint32_x0015CE38, Sint32_x0015CE38 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CE38(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CE38(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CE38 {
                   Sint8_x0015CE38 used;
                   Sint8_x0015CE38 stat;
                   Sint8_x0015CE38 pmode;
                   Sint8_x0015CE38 maxnch;
                   ADXSJD_x0015CE38 sjd;
                   ADXSTM_x0015CE38 stm;
                   ADXRNA_x0015CE38 rna;
                   SJ_x0015CE38 sjf;
                   SJ_x0015CE38 sji;
                   SJ_x0015CE38 sjo[(2)];
                   Sint8_x0015CE38 *ibuf;
                   Sint32_x0015CE38 ibuflen;
                   Sint32_x0015CE38 ibufxlen;
                   Sint16_x0015CE38 *obuf;
                   Sint32_x0015CE38 obufsize;
                   Sint32_x0015CE38 obufdist;
                   Sint32_x0015CE38 svrfreq;
                   Sint16_x0015CE38 maxsct;
                   Sint16_x0015CE38 minsct;
                   Sint16_x0015CE38 outvol;
                   Sint16_x0015CE38 outpan[(2)];
                   Sint16_x0015CE38 unk46;
                   Sint32_x0015CE38 maxdecsmpl;
                   Sint32_x0015CE38 lpcnt;
                   Sint32_x0015CE38 lp_skiplen;
                   Sint32_x0015CE38 trp;
                   Sint32_x0015CE38 wpos;
                   Sint32_x0015CE38 mofst;
                   Sint16_x0015CE38 ercode;
                   Sint32_x0015CE38 edecpos;
                   Sint16_x0015CE38 edeccnt;
                   Sint16_x0015CE38 eshrtcnt;
                   Sint8_x0015CE38 lpflg;
                   Sint8_x0015CE38 autorcvr;
                   Sint8_x0015CE38 fltmode;
                   Sint8_x0015CE38 execflag;
                   Sint8_x0015CE38 pstwait_flag;
                   Sint8_x0015CE38 pstready_flag;
                   Sint8_x0015CE38 pause_flag;
                   void *amp;
                   SJ_x0015CE38 ampsji[(2)];
                   SJ_x0015CE38 ampsjo[(2)];
                   Sint32_x0015CE38 time_ofst;
                   Sint32_x0015CE38 lesct;
                   Sint32_x0015CE38 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CE38 lnkflg;
                   Sint8_x0015CE38 rsv;
                   Sint16_x0015CE38 rsv2;
                   Uint32_x0015CE38 tvofst;
                   Uint32_x0015CE38 svcnt;
                   Uint32_x0015CE38 decofst;
                   Sint32_x0015CE38 flush_nsmpl;
                   Sint8_x0015CE38 unkAC;
                   Sint8_x0015CE38 padAD[1];
               Char8_x0015CE38* unkB0;
               Sint32_x0015CE38 padB4;
               Sint32_x0015CE38 padB8;
               Sint32_x0015CE38 padBC;
               Sint32_x0015CE38 padC0;
} ADX_TALK_x0015CE38;
typedef ADX_TALK_x0015CE38 *ADXT_x0015CE38;
void ADXT_ExecFsSvr_x0015CE38(void) __asm__("func_00156048");
extern void ADXT_EntryErrFunc_x0015CE38(void (*func)(void *obj, Sint8_x0015CE38 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CE38(ADXT_x0015CE38 adxt,
                void (*f)(void *obj, Sint32_x0015CE38 ch, void *data, Sint32_x0015CE38 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CE38(Bool_x0015CE38 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CE38(Bool_x0015CE38 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CE38(void (*fn)(void *obj, Char8_x0015CE38 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CE38(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXSTM_StopNw_x0015CE38() __asm__("func_0015CDD0");
void ADXSTM_StopNw_x0015CE38(ADXSTM_x0015CE38 stm) __asm__("func_0015CDD0");
void func_0015CE38_x0015CE38(ADXSTM_x0015CE38 stm) __asm__("func_0015CE38");
/* ADXSTM_Stop: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CE38_x0015CE38(ADXSTM_x0015CE38 stm) {
    ADXSTM_StopNw_x0015CE38(stm);
    do {
        ADXT_ExecFsSvr_x0015CE38();
    } while (stm->stat != 1 || stm->unk24.data != 0);
}
void func_0015CE88_x0015CE88(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0015CE88");
void func_0015CE88_x0015CE88(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x3C)) = arg2;
  *((s32 *) (((u8 *) arg0) + 0x38)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x3C)) = arg2;
}
typedef int s32_x0015CE98;
typedef s32_x0015CE98 ptrdiff_t_x0015CE98;
typedef unsigned char Uint8_x0015CE98;
typedef char Sint8_x0015CE98;
typedef unsigned short Uint16_x0015CE98;
typedef signed short Sint16_x0015CE98;
typedef unsigned int Uint32_x0015CE98;
typedef signed int Sint32_x0015CE98;
typedef Sint32_x0015CE98 Bool_x0015CE98;
typedef char Char8_x0015CE98;
typedef struct _UUID_x0015CE98 {
    Uint32_x0015CE98 Data1;
    Uint16_x0015CE98 Data2;
    Uint16_x0015CE98 Data3;
    Uint8_x0015CE98 Data4[8];
} UUID_x0015CE98;
typedef struct {
        Sint8_x0015CE98 *data;
        Sint32_x0015CE98 len;
} SJCK_x0015CE98;
typedef struct {
        struct _sj_vtbl_x0015CE98 *vtbl;
} SJ_OBJ_x0015CE98;
typedef SJ_OBJ_x0015CE98 *SJ_x0015CE98;
typedef struct _sj_vtbl_x0015CE98 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CE98 sj);
        UUID_x0015CE98 *(*GetUuid)(SJ_x0015CE98 sj);
        void (*Reset)(SJ_x0015CE98 sj);
        void (*GetChunk)(SJ_x0015CE98 sj, Sint32_x0015CE98 id, Sint32_x0015CE98 nbyte, SJCK_x0015CE98 *ck);
        void (*UngetChunk)(SJ_x0015CE98 sj, Sint32_x0015CE98 id, SJCK_x0015CE98 *ck);
        void (*PutChunk)(SJ_x0015CE98 sj, Sint32_x0015CE98 id, SJCK_x0015CE98 *ck);
        Sint32_x0015CE98 (*GetNumData)(SJ_x0015CE98 sj, Sint32_x0015CE98 id);
        Sint32_x0015CE98 (*IsGetChunk)(SJ_x0015CE98 sj, Sint32_x0015CE98 id, Sint32_x0015CE98 nbyte, Sint32_x0015CE98 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CE98 sj,
                                        void (*func)(void *obj, Sint32_x0015CE98 ecode), void *obj);
} SJ_IF_x0015CE98;
extern int* sceCdCallback_x0015CE98(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CE98(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CE98;
typedef struct {
               Sint16_x0015CE98 unk0;
               Sint16_x0015CE98 unk2;
               Sint16_x0015CE98 unk4;
               Sint16_x0015CE98 unk6;
} ADXPD_OBJ_SUB_x0015CE98;
typedef struct {
               Sint32_x0015CE98 used;
               Sint32_x0015CE98 unk4;
               Sint32_x0015CE98 mode;
               Sint32_x0015CE98 stat;
               Sint32_x0015CE98 num_blk;
               Sint32_x0015CE98 unk14;
               Sint32_x0015CE98 unk18;
               Sint32_x0015CE98 unk1C;
               Sint32_x0015CE98 unk20;
               Sint32_x0015CE98 unk24;
               ADXPD_OBJ_SUB_x0015CE98 unk28;
               Sint16_x0015CE98 unk30;
               Sint16_x0015CE98 unk32;
               Sint16_x0015CE98 unk34;
               Sint16_x0015CE98 unk36;
               Sint16_x0015CE98 unk38;
               Sint16_x0015CE98 unk3A;
} ADXPD_OBJ_x0015CE98;
typedef ADXPD_OBJ_x0015CE98* ADXPD_x0015CE98;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CE98;
typedef struct {
               Sint32_x0015CE98 unk0;
               Sint32_x0015CE98 unk4;
               Sint32_x0015CE98 unk8;
               Sint32_x0015CE98 unkC;
               Sint32_x0015CE98 unk10;
               void* unk14;
               Sint32_x0015CE98 unk18;
               Sint32_x0015CE98 unk1C;
               Sint32_x0015CE98 unk20;
               Sint32_x0015CE98 unk24;
               Sint32_x0015CE98 unk28;
} ADXB_UNK_x0015CE98;
typedef struct {
               Sint16_x0015CE98 unk0;
               Sint16_x0015CE98 unk2;
               Sint32_x0015CE98 stat;
               ADXPD_x0015CE98 adxpd;
               Sint8_x0015CE98 encoding_type;
               Sint8_x0015CE98 sample_bitdepth;
               Sint8_x0015CE98 channel_count;
               Sint8_x0015CE98 block_size;
               Sint32_x0015CE98 samples_per_block;
               Sint32_x0015CE98 sample_rate;
               Sint32_x0015CE98 total_samples;
               Sint16_x0015CE98 unk1C;
               char pad1E[2];
               Sint32_x0015CE98 unk20;
               Sint16_x0015CE98 unk24;
               Sint16_x0015CE98 unk26;
               Sint32_x0015CE98 unk28;
               Sint32_x0015CE98 unk2C;
               Sint32_x0015CE98 unk30;
               Sint32_x0015CE98 unk34;
               Sint32_x0015CE98 unk38;
               void* unk3C;
               Sint32_x0015CE98 unk40;
               Sint32_x0015CE98 unk44;
               ADXB_UNK_x0015CE98 unk48;
               Sint32_x0015CE98 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CE98*, Sint32_x0015CE98*, Sint32_x0015CE98*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CE98, Sint32_x0015CE98);
               Sint32_x0015CE98 unk84;
               Sint32_x0015CE98 unk88;
               Sint32_x0015CE98 unk8C;
               Sint32_x0015CE98 dec_num_sample;
               Sint32_x0015CE98 dec_data_len;
               Sint16_x0015CE98 format;
               Sint16_x0015CE98 unk9A;
               Sint16_x0015CE98 unk9C;
               Sint16_x0015CE98 unk9E;
               Sint16_x0015CE98 unkA0;
               char padA2[0xE];
               Sint32_x0015CE98 unkB0;
               Sint32_x0015CE98 ahx_dec_samples;
               Sint32_x0015CE98 ahx_dec_frames;
               Sint32_x0015CE98 unkBC;
               Sint32_x0015CE98 ac3_dec_samples;
               Sint32_x0015CE98 ac3_dec_frames;
               Sint32_x0015CE98 unkC8;
               ADX_UNK_x0015CE98 unkCC;
               Sint16_x0015CE98 unkDC;
               Sint16_x0015CE98 unkDE[2];
               char padE2[2];
               Sint32_x0015CE98 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CE98;
typedef ADXB_OBJ_x0015CE98* ADXB_x0015CE98;
typedef struct {
    Sint8_x0015CE98 used;
    Sint8_x0015CE98 state;
    Sint8_x0015CE98 maxnch;
    Sint8_x0015CE98 unk3;
    ADXB_x0015CE98 adxb;
    SJ_x0015CE98 sji;
    SJ_x0015CE98 sjo[2];
    SJCK_x0015CE98 unk14;
    SJCK_x0015CE98 chunks[2];
    Sint32_x0015CE98 unk2C;
    Sint32_x0015CE98 unk30;
    Sint32_x0015CE98 unk34;
    Sint32_x0015CE98 unk38;
    Sint32_x0015CE98 trap_num_samples;
    Sint32_x0015CE98 trap_count;
    Sint32_x0015CE98 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CE98, Sint8_x0015CE98*, Sint32_x0015CE98);
    void* flt_obj;
    Sint8_x0015CE98 unk58[0x40];
    Sint32_x0015CE98 unk98;
    Sint32_x0015CE98 lnkflg;
} ADXSJD_OBJ_x0015CE98;
typedef ADXSJD_OBJ_x0015CE98* ADXSJD_x0015CE98;
typedef struct {
    Sint32_x0015CE98 unk0;
    SJ_x0015CE98 sj;
} SJX_UNK_0_x0015CE98;
typedef struct {
    Sint8_x0015CE98 used;
    Sint8_x0015CE98 unk1;
    Sint16_x0015CE98 unk2;
    SJ_x0015CE98 sj;
    void* unk8;
    Sint32_x0015CE98 unkC;
    SJX_UNK_0_x0015CE98* unk10;
} SJX_OBJ_x0015CE98;
typedef SJX_OBJ_x0015CE98* SJX_x0015CE98;
typedef struct {
    Sint8_x0015CE98 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CE98 unk8;
    SJX_x0015CE98 unkC;
    SJCK_x0015CE98 chunk;
} PS2PSJ_OBJ_x0015CE98;
typedef PS2PSJ_OBJ_x0015CE98* PS2PSJ_x0015CE98;
typedef struct {
               Sint8_x0015CE98 unk0;
               Sint8_x0015CE98 unk1;
               Sint8_x0015CE98 unk2;
               SJ_x0015CE98 unk4;
               SJ_x0015CE98 unk8;
               SJCK_x0015CE98 unkC;
               SJCK_x0015CE98 unk14;
               sceSifDmaData_x0015CE98 dma_data;
               Sint32_x0015CE98 unk2C;
               Sint32_x0015CE98 unk30;
               Sint32_x0015CE98 unk34;
               Sint32_x0015CE98 unk38;
               Sint32_x0015CE98 unk3C;
} DTR_OBJ_x0015CE98;
typedef DTR_OBJ_x0015CE98* DTR_x0015CE98;
typedef struct {
    Sint8_x0015CE98 used;
    Sint32_x0015CE98 maxnch;
    PS2PSJ_x0015CE98 psj[2];
    DTR_x0015CE98 dtr[2];
    SJ_x0015CE98 sjo[2];
    void* unk20;
    Sint32_x0015CE98 unk24;
    Sint32_x0015CE98 unk28;
    Sint32_x0015CE98 unk2C;
    Sint8_x0015CE98 unk30;
    Sint8_x0015CE98 unk31;
    Sint8_x0015CE98 num_chan;
    Sint8_x0015CE98 unk33;
    Sint32_x0015CE98 sfreq;
    Sint32_x0015CE98 unk38;
    Sint32_x0015CE98 out_vol;
    Sint32_x0015CE98 unk40;
    Sint32_x0015CE98 pan[2];
    Sint32_x0015CE98 unk4C[2];
    Sint32_x0015CE98 unk54;
    Sint32_x0015CE98 unk58;
    Sint8_x0015CE98 unk5C;
    Sint8_x0015CE98 unk5D;
    Sint8_x0015CE98 unk5E;
    Sint8_x0015CE98 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CE98;
typedef ADXRNA_OBJ_x0015CE98* ADXRNA_x0015CE98;
typedef struct {
    Sint8_x0015CE98 unk0;
    Sint8_x0015CE98 stat;
    Sint8_x0015CE98 read_flg;
    Sint8_x0015CE98 unk3;
    SJ_x0015CE98 sj;
    void* cvfs;
    Sint32_x0015CE98 unkC;
    Sint32_x0015CE98 file_len;
    Sint32_x0015CE98 file_sct;
    Sint32_x0015CE98 unk18;
    Sint32_x0015CE98 unk1C;
    Sint32_x0015CE98 unk20;
    SJCK_x0015CE98 unk24;
    Sint32_x0015CE98 req_rd_size;
    Sint32_x0015CE98 eos;
    Uint32_x0015CE98 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CE98 unk40;
    Sint8_x0015CE98 pause;
    Sint8_x0015CE98 unk45;
    Sint8_x0015CE98 unk46;
    Sint8_x0015CE98 unk47;
    Sint8_x0015CE98 unk48;
    Sint8_x0015CE98 unk49;
    char pad4A[6];
    const Char8_x0015CE98* fname;
    void* dir;
    Sint32_x0015CE98 cur_ofst;
    Uint32_x0015CE98 unk5C;
} ADXSTM_OBJ_x0015CE98;
typedef ADXSTM_OBJ_x0015CE98* ADXSTM_x0015CE98;
extern void cvFsEntryErrFunc_x0015CE98(void (*function)(void*, const Char8_x0015CE98*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015CE98(void (*callback)(void*, Char8_x0015CE98*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CE98 SVM_SetCbSvr_x0015CE98(Sint32_x0015CE98, Sint32_x0015CE98 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CE98(Sint32_x0015CE98, Sint32_x0015CE98, Sint32_x0015CE98 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CE98(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CE98(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CE98 {
                   Sint8_x0015CE98 used;
                   Sint8_x0015CE98 stat;
                   Sint8_x0015CE98 pmode;
                   Sint8_x0015CE98 maxnch;
                   ADXSJD_x0015CE98 sjd;
                   ADXSTM_x0015CE98 stm;
                   ADXRNA_x0015CE98 rna;
                   SJ_x0015CE98 sjf;
                   SJ_x0015CE98 sji;
                   SJ_x0015CE98 sjo[(2)];
                   Sint8_x0015CE98 *ibuf;
                   Sint32_x0015CE98 ibuflen;
                   Sint32_x0015CE98 ibufxlen;
                   Sint16_x0015CE98 *obuf;
                   Sint32_x0015CE98 obufsize;
                   Sint32_x0015CE98 obufdist;
                   Sint32_x0015CE98 svrfreq;
                   Sint16_x0015CE98 maxsct;
                   Sint16_x0015CE98 minsct;
                   Sint16_x0015CE98 outvol;
                   Sint16_x0015CE98 outpan[(2)];
                   Sint16_x0015CE98 unk46;
                   Sint32_x0015CE98 maxdecsmpl;
                   Sint32_x0015CE98 lpcnt;
                   Sint32_x0015CE98 lp_skiplen;
                   Sint32_x0015CE98 trp;
                   Sint32_x0015CE98 wpos;
                   Sint32_x0015CE98 mofst;
                   Sint16_x0015CE98 ercode;
                   Sint32_x0015CE98 edecpos;
                   Sint16_x0015CE98 edeccnt;
                   Sint16_x0015CE98 eshrtcnt;
                   Sint8_x0015CE98 lpflg;
                   Sint8_x0015CE98 autorcvr;
                   Sint8_x0015CE98 fltmode;
                   Sint8_x0015CE98 execflag;
                   Sint8_x0015CE98 pstwait_flag;
                   Sint8_x0015CE98 pstready_flag;
                   Sint8_x0015CE98 pause_flag;
                   void *amp;
                   SJ_x0015CE98 ampsji[(2)];
                   SJ_x0015CE98 ampsjo[(2)];
                   Sint32_x0015CE98 time_ofst;
                   Sint32_x0015CE98 lesct;
                   Sint32_x0015CE98 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CE98 lnkflg;
                   Sint8_x0015CE98 rsv;
                   Sint16_x0015CE98 rsv2;
                   Uint32_x0015CE98 tvofst;
                   Uint32_x0015CE98 svcnt;
                   Uint32_x0015CE98 decofst;
                   Sint32_x0015CE98 flush_nsmpl;
                   Sint8_x0015CE98 unkAC;
                   Sint8_x0015CE98 padAD[1];
               Char8_x0015CE98* unkB0;
               Sint32_x0015CE98 padB4;
               Sint32_x0015CE98 padB8;
               Sint32_x0015CE98 padBC;
               Sint32_x0015CE98 padC0;
} ADX_TALK_x0015CE98;
typedef ADX_TALK_x0015CE98 *ADXT_x0015CE98;
extern void ADXT_EntryErrFunc_x0015CE98(void (*func)(void *obj, Sint8_x0015CE98 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CE98(ADXT_x0015CE98 adxt,
                void (*f)(void *obj, Sint32_x0015CE98 ch, void *data, Sint32_x0015CE98 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CE98(Bool_x0015CE98 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CE98(Bool_x0015CE98 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CE98(void (*fn)(void *obj, Char8_x0015CE98 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CE98(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void fn_8004AC04_x0015CE98(ADXSTM_x0015CE98 stm, Sint32_x0015CE98 eos) __asm__("fn_8004AC04");
/* ADXSTM_SetEos: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void fn_8004AC04_x0015CE98(ADXSTM_x0015CE98 stm, Sint32_x0015CE98 eos) {
    if (eos >= 0) {
        stm->eos = eos;
    } else {
        stm->eos = stm->file_sct;
    }
}
void func_0015CEB0(void) {
    D_00410220 += 1;
}
typedef int s32_x0015CEC8;
typedef s32_x0015CEC8 ptrdiff_t_x0015CEC8;
typedef unsigned char Uint8_x0015CEC8;
typedef char Sint8_x0015CEC8;
typedef unsigned short Uint16_x0015CEC8;
typedef signed short Sint16_x0015CEC8;
typedef unsigned int Uint32_x0015CEC8;
typedef signed int Sint32_x0015CEC8;
typedef Sint32_x0015CEC8 Bool_x0015CEC8;
typedef char Char8_x0015CEC8;
typedef struct _UUID_x0015CEC8 {
    Uint32_x0015CEC8 Data1;
    Uint16_x0015CEC8 Data2;
    Uint16_x0015CEC8 Data3;
    Uint8_x0015CEC8 Data4[8];
} UUID_x0015CEC8;
typedef struct {
        Sint8_x0015CEC8 *data;
        Sint32_x0015CEC8 len;
} SJCK_x0015CEC8;
typedef struct {
        struct _sj_vtbl_x0015CEC8 *vtbl;
} SJ_OBJ_x0015CEC8;
typedef SJ_OBJ_x0015CEC8 *SJ_x0015CEC8;
typedef struct _sj_vtbl_x0015CEC8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015CEC8 sj);
        UUID_x0015CEC8 *(*GetUuid)(SJ_x0015CEC8 sj);
        void (*Reset)(SJ_x0015CEC8 sj);
        void (*GetChunk)(SJ_x0015CEC8 sj, Sint32_x0015CEC8 id, Sint32_x0015CEC8 nbyte, SJCK_x0015CEC8 *ck);
        void (*UngetChunk)(SJ_x0015CEC8 sj, Sint32_x0015CEC8 id, SJCK_x0015CEC8 *ck);
        void (*PutChunk)(SJ_x0015CEC8 sj, Sint32_x0015CEC8 id, SJCK_x0015CEC8 *ck);
        Sint32_x0015CEC8 (*GetNumData)(SJ_x0015CEC8 sj, Sint32_x0015CEC8 id);
        Sint32_x0015CEC8 (*IsGetChunk)(SJ_x0015CEC8 sj, Sint32_x0015CEC8 id, Sint32_x0015CEC8 nbyte, Sint32_x0015CEC8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015CEC8 sj,
                                        void (*func)(void *obj, Sint32_x0015CEC8 ecode), void *obj);
} SJ_IF_x0015CEC8;
void SJ_SplitChunk_x0015CEC8(SJCK_x0015CEC8 *ck, Sint32_x0015CEC8 nbyte, SJCK_x0015CEC8 *ck1, SJCK_x0015CEC8 *ck2) __asm__("func_0016F050");
extern int* sceCdCallback_x0015CEC8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015CEC8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015CEC8;
typedef struct {
               Sint16_x0015CEC8 unk0;
               Sint16_x0015CEC8 unk2;
               Sint16_x0015CEC8 unk4;
               Sint16_x0015CEC8 unk6;
} ADXPD_OBJ_SUB_x0015CEC8;
typedef struct {
               Sint32_x0015CEC8 used;
               Sint32_x0015CEC8 unk4;
               Sint32_x0015CEC8 mode;
               Sint32_x0015CEC8 stat;
               Sint32_x0015CEC8 num_blk;
               Sint32_x0015CEC8 unk14;
               Sint32_x0015CEC8 unk18;
               Sint32_x0015CEC8 unk1C;
               Sint32_x0015CEC8 unk20;
               Sint32_x0015CEC8 unk24;
               ADXPD_OBJ_SUB_x0015CEC8 unk28;
               Sint16_x0015CEC8 unk30;
               Sint16_x0015CEC8 unk32;
               Sint16_x0015CEC8 unk34;
               Sint16_x0015CEC8 unk36;
               Sint16_x0015CEC8 unk38;
               Sint16_x0015CEC8 unk3A;
} ADXPD_OBJ_x0015CEC8;
typedef ADXPD_OBJ_x0015CEC8* ADXPD_x0015CEC8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015CEC8;
typedef struct {
               Sint32_x0015CEC8 unk0;
               Sint32_x0015CEC8 unk4;
               Sint32_x0015CEC8 unk8;
               Sint32_x0015CEC8 unkC;
               Sint32_x0015CEC8 unk10;
               void* unk14;
               Sint32_x0015CEC8 unk18;
               Sint32_x0015CEC8 unk1C;
               Sint32_x0015CEC8 unk20;
               Sint32_x0015CEC8 unk24;
               Sint32_x0015CEC8 unk28;
} ADXB_UNK_x0015CEC8;
typedef struct {
               Sint16_x0015CEC8 unk0;
               Sint16_x0015CEC8 unk2;
               Sint32_x0015CEC8 stat;
               ADXPD_x0015CEC8 adxpd;
               Sint8_x0015CEC8 encoding_type;
               Sint8_x0015CEC8 sample_bitdepth;
               Sint8_x0015CEC8 channel_count;
               Sint8_x0015CEC8 block_size;
               Sint32_x0015CEC8 samples_per_block;
               Sint32_x0015CEC8 sample_rate;
               Sint32_x0015CEC8 total_samples;
               Sint16_x0015CEC8 unk1C;
               char pad1E[2];
               Sint32_x0015CEC8 unk20;
               Sint16_x0015CEC8 unk24;
               Sint16_x0015CEC8 unk26;
               Sint32_x0015CEC8 unk28;
               Sint32_x0015CEC8 unk2C;
               Sint32_x0015CEC8 unk30;
               Sint32_x0015CEC8 unk34;
               Sint32_x0015CEC8 unk38;
               void* unk3C;
               Sint32_x0015CEC8 unk40;
               Sint32_x0015CEC8 unk44;
               ADXB_UNK_x0015CEC8 unk48;
               Sint32_x0015CEC8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015CEC8*, Sint32_x0015CEC8*, Sint32_x0015CEC8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015CEC8, Sint32_x0015CEC8);
               Sint32_x0015CEC8 unk84;
               Sint32_x0015CEC8 unk88;
               Sint32_x0015CEC8 unk8C;
               Sint32_x0015CEC8 dec_num_sample;
               Sint32_x0015CEC8 dec_data_len;
               Sint16_x0015CEC8 format;
               Sint16_x0015CEC8 unk9A;
               Sint16_x0015CEC8 unk9C;
               Sint16_x0015CEC8 unk9E;
               Sint16_x0015CEC8 unkA0;
               char padA2[0xE];
               Sint32_x0015CEC8 unkB0;
               Sint32_x0015CEC8 ahx_dec_samples;
               Sint32_x0015CEC8 ahx_dec_frames;
               Sint32_x0015CEC8 unkBC;
               Sint32_x0015CEC8 ac3_dec_samples;
               Sint32_x0015CEC8 ac3_dec_frames;
               Sint32_x0015CEC8 unkC8;
               ADX_UNK_x0015CEC8 unkCC;
               Sint16_x0015CEC8 unkDC;
               Sint16_x0015CEC8 unkDE[2];
               char padE2[2];
               Sint32_x0015CEC8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015CEC8;
typedef ADXB_OBJ_x0015CEC8* ADXB_x0015CEC8;
typedef struct {
    Sint8_x0015CEC8 used;
    Sint8_x0015CEC8 state;
    Sint8_x0015CEC8 maxnch;
    Sint8_x0015CEC8 unk3;
    ADXB_x0015CEC8 adxb;
    SJ_x0015CEC8 sji;
    SJ_x0015CEC8 sjo[2];
    SJCK_x0015CEC8 unk14;
    SJCK_x0015CEC8 chunks[2];
    Sint32_x0015CEC8 unk2C;
    Sint32_x0015CEC8 unk30;
    Sint32_x0015CEC8 unk34;
    Sint32_x0015CEC8 unk38;
    Sint32_x0015CEC8 trap_num_samples;
    Sint32_x0015CEC8 trap_count;
    Sint32_x0015CEC8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015CEC8, Sint8_x0015CEC8*, Sint32_x0015CEC8);
    void* flt_obj;
    Sint8_x0015CEC8 unk58[0x40];
    Sint32_x0015CEC8 unk98;
    Sint32_x0015CEC8 lnkflg;
} ADXSJD_OBJ_x0015CEC8;
typedef ADXSJD_OBJ_x0015CEC8* ADXSJD_x0015CEC8;
typedef struct {
    Sint32_x0015CEC8 unk0;
    SJ_x0015CEC8 sj;
} SJX_UNK_0_x0015CEC8;
typedef struct {
    Sint8_x0015CEC8 used;
    Sint8_x0015CEC8 unk1;
    Sint16_x0015CEC8 unk2;
    SJ_x0015CEC8 sj;
    void* unk8;
    Sint32_x0015CEC8 unkC;
    SJX_UNK_0_x0015CEC8* unk10;
} SJX_OBJ_x0015CEC8;
typedef SJX_OBJ_x0015CEC8* SJX_x0015CEC8;
typedef struct {
    Sint8_x0015CEC8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015CEC8 unk8;
    SJX_x0015CEC8 unkC;
    SJCK_x0015CEC8 chunk;
} PS2PSJ_OBJ_x0015CEC8;
typedef PS2PSJ_OBJ_x0015CEC8* PS2PSJ_x0015CEC8;
typedef struct {
               Sint8_x0015CEC8 unk0;
               Sint8_x0015CEC8 unk1;
               Sint8_x0015CEC8 unk2;
               SJ_x0015CEC8 unk4;
               SJ_x0015CEC8 unk8;
               SJCK_x0015CEC8 unkC;
               SJCK_x0015CEC8 unk14;
               sceSifDmaData_x0015CEC8 dma_data;
               Sint32_x0015CEC8 unk2C;
               Sint32_x0015CEC8 unk30;
               Sint32_x0015CEC8 unk34;
               Sint32_x0015CEC8 unk38;
               Sint32_x0015CEC8 unk3C;
} DTR_OBJ_x0015CEC8;
typedef DTR_OBJ_x0015CEC8* DTR_x0015CEC8;
typedef struct {
    Sint8_x0015CEC8 used;
    Sint32_x0015CEC8 maxnch;
    PS2PSJ_x0015CEC8 psj[2];
    DTR_x0015CEC8 dtr[2];
    SJ_x0015CEC8 sjo[2];
    void* unk20;
    Sint32_x0015CEC8 unk24;
    Sint32_x0015CEC8 unk28;
    Sint32_x0015CEC8 unk2C;
    Sint8_x0015CEC8 unk30;
    Sint8_x0015CEC8 unk31;
    Sint8_x0015CEC8 num_chan;
    Sint8_x0015CEC8 unk33;
    Sint32_x0015CEC8 sfreq;
    Sint32_x0015CEC8 unk38;
    Sint32_x0015CEC8 out_vol;
    Sint32_x0015CEC8 unk40;
    Sint32_x0015CEC8 pan[2];
    Sint32_x0015CEC8 unk4C[2];
    Sint32_x0015CEC8 unk54;
    Sint32_x0015CEC8 unk58;
    Sint8_x0015CEC8 unk5C;
    Sint8_x0015CEC8 unk5D;
    Sint8_x0015CEC8 unk5E;
    Sint8_x0015CEC8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015CEC8;
typedef ADXRNA_OBJ_x0015CEC8* ADXRNA_x0015CEC8;
typedef struct {
    Sint8_x0015CEC8 unk0;
    Sint8_x0015CEC8 stat;
    Sint8_x0015CEC8 read_flg;
    Sint8_x0015CEC8 unk3;
    SJ_x0015CEC8 sj;
    void* cvfs;
    Sint32_x0015CEC8 unkC;
    Sint32_x0015CEC8 file_len;
    Sint32_x0015CEC8 file_sct;
    Sint32_x0015CEC8 unk18;
    Sint32_x0015CEC8 unk1C;
    Sint32_x0015CEC8 unk20;
    SJCK_x0015CEC8 unk24;
    Sint32_x0015CEC8 req_rd_size;
    Sint32_x0015CEC8 eos;
    Uint32_x0015CEC8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015CEC8 unk40;
    Sint8_x0015CEC8 pause;
    Sint8_x0015CEC8 unk45;
    Sint8_x0015CEC8 unk46;
    Sint8_x0015CEC8 unk47;
    Sint8_x0015CEC8 unk48;
    Sint8_x0015CEC8 unk49;
    char pad4A[6];
    const Char8_x0015CEC8* fname;
    void* dir;
    Sint32_x0015CEC8 cur_ofst;
    Uint32_x0015CEC8 unk5C;
} ADXSTM_OBJ_x0015CEC8;
typedef ADXSTM_OBJ_x0015CEC8* ADXSTM_x0015CEC8;
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32_x0015CEC8 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8_x0015CEC8* device_name, void*, Sint32_x0015CEC8);
               void (*Close)(void* fd);
               Sint32_x0015CEC8 (*Seek)(void* fd, Sint32_x0015CEC8 offset, Sint32_x0015CEC8 whence);
               Sint32_x0015CEC8 (*Tell)(void* fd);
               Sint32_x0015CEC8 (*ReqRd)(void* fd, Sint32_x0015CEC8 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32_x0015CEC8 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32_x0015CEC8 (*OptFn1)();
               void (*unk64)();
} CVFSDevice_x0015CEC8;
typedef struct {
    CVFSDevice_x0015CEC8* device;
    void* fd;
} CVFSHandle_x0015CEC8;
void cvFsSeek_x0015CEC8(CVFSHandle_x0015CEC8*, Sint32_x0015CEC8, Sint32_x0015CEC8) __asm__("func_00162880");
Sint32_x0015CEC8 cvFsGetStat_x0015CEC8(CVFSHandle_x0015CEC8*) __asm__("func_00162A70");
Sint32_x0015CEC8 cvFsReqRd_x0015CEC8(CVFSHandle_x0015CEC8*, Sint32_x0015CEC8, void*) __asm__("func_001628E8");
extern void cvFsEntryErrFunc_x0015CEC8(void (*function)(void*, const Char8_x0015CEC8*), void* object) __asm__("cvFsEntryErrFunc");
void SVM_Lock_x0015CEC8() __asm__("func_0016FF40");
void SVM_Unlock_x0015CEC8() __asm__("func_0016FF58");
extern void SVM_SetCbErr_x0015CEC8(void (*callback)(void*, Char8_x0015CEC8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015CEC8 SVM_SetCbSvr_x0015CEC8(Sint32_x0015CEC8, Sint32_x0015CEC8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015CEC8(Sint32_x0015CEC8, Sint32_x0015CEC8, Sint32_x0015CEC8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015CEC8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015CEC8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015CEC8 {
                   Sint8_x0015CEC8 used;
                   Sint8_x0015CEC8 stat;
                   Sint8_x0015CEC8 pmode;
                   Sint8_x0015CEC8 maxnch;
                   ADXSJD_x0015CEC8 sjd;
                   ADXSTM_x0015CEC8 stm;
                   ADXRNA_x0015CEC8 rna;
                   SJ_x0015CEC8 sjf;
                   SJ_x0015CEC8 sji;
                   SJ_x0015CEC8 sjo[(2)];
                   Sint8_x0015CEC8 *ibuf;
                   Sint32_x0015CEC8 ibuflen;
                   Sint32_x0015CEC8 ibufxlen;
                   Sint16_x0015CEC8 *obuf;
                   Sint32_x0015CEC8 obufsize;
                   Sint32_x0015CEC8 obufdist;
                   Sint32_x0015CEC8 svrfreq;
                   Sint16_x0015CEC8 maxsct;
                   Sint16_x0015CEC8 minsct;
                   Sint16_x0015CEC8 outvol;
                   Sint16_x0015CEC8 outpan[(2)];
                   Sint16_x0015CEC8 unk46;
                   Sint32_x0015CEC8 maxdecsmpl;
                   Sint32_x0015CEC8 lpcnt;
                   Sint32_x0015CEC8 lp_skiplen;
                   Sint32_x0015CEC8 trp;
                   Sint32_x0015CEC8 wpos;
                   Sint32_x0015CEC8 mofst;
                   Sint16_x0015CEC8 ercode;
                   Sint32_x0015CEC8 edecpos;
                   Sint16_x0015CEC8 edeccnt;
                   Sint16_x0015CEC8 eshrtcnt;
                   Sint8_x0015CEC8 lpflg;
                   Sint8_x0015CEC8 autorcvr;
                   Sint8_x0015CEC8 fltmode;
                   Sint8_x0015CEC8 execflag;
                   Sint8_x0015CEC8 pstwait_flag;
                   Sint8_x0015CEC8 pstready_flag;
                   Sint8_x0015CEC8 pause_flag;
                   void *amp;
                   SJ_x0015CEC8 ampsji[(2)];
                   SJ_x0015CEC8 ampsjo[(2)];
                   Sint32_x0015CEC8 time_ofst;
                   Sint32_x0015CEC8 lesct;
                   Sint32_x0015CEC8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015CEC8 lnkflg;
                   Sint8_x0015CEC8 rsv;
                   Sint16_x0015CEC8 rsv2;
                   Uint32_x0015CEC8 tvofst;
                   Uint32_x0015CEC8 svcnt;
                   Uint32_x0015CEC8 decofst;
                   Sint32_x0015CEC8 flush_nsmpl;
                   Sint8_x0015CEC8 unkAC;
                   Sint8_x0015CEC8 padAD[1];
               Char8_x0015CEC8* unkB0;
               Sint32_x0015CEC8 padB4;
               Sint32_x0015CEC8 padB8;
               Sint32_x0015CEC8 padBC;
               Sint32_x0015CEC8 padC0;
} ADX_TALK_x0015CEC8;
typedef ADX_TALK_x0015CEC8 *ADXT_x0015CEC8;
extern void ADXT_EntryErrFunc_x0015CEC8(void (*func)(void *obj, Sint8_x0015CEC8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015CEC8(ADXT_x0015CEC8 adxt,
                void (*f)(void *obj, Sint32_x0015CEC8 ch, void *data, Sint32_x0015CEC8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015CEC8(Bool_x0015CEC8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015CEC8(Bool_x0015CEC8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015CEC8(void (*fn)(void *obj, Char8_x0015CEC8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015CEC8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015CEC8 adxstmf_num_rtry_x0015CEC8 __asm__("D_0041021C");
void adxstm_sj_internal_error_x0015CEC8() __asm__("func_0015CEB0");
void func_0015CEC8_x0015CEC8(ADXSTM_x0015CEC8 stm) __asm__("func_0015CEC8");
/* adxstmf_stat_exec: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015CEC8_x0015CEC8(ADXSTM_x0015CEC8 stm) {
    SJCK_x0015CEC8 chunk_0;
    SJCK_x0015CEC8 chunk_1;
    SJ_x0015CEC8 sj;
    Sint32_x0015CEC8 len;
    Sint32_x0015CEC8 cvFs_stat;
    Sint32_x0015CEC8 temp_s0_5;
    Sint32_x0015CEC8 stream_len;
    sj = stm->sj;
    cvFs_stat = cvFsGetStat_x0015CEC8(stm->cvfs);
    SVM_Lock_x0015CEC8();
    if (stm->read_flg == 1) {
        if (cvFs_stat == 1) {
            stm->read_flg = 0;
            SVM_Unlock_x0015CEC8();
            temp_s0_5 = stm->unk20 << 11;
            SJ_SplitChunk_x0015CEC8(&stm->unk24, temp_s0_5, &chunk_0, &chunk_1);
            (*(sj)->vtbl->PutChunk)(sj, 1, &chunk_0);
            (*(sj)->vtbl->UngetChunk)(sj, 0, &chunk_1);
            stm->cur_ofst += stm->unk20;
            stm->unk34 += temp_s0_5;
            stm->unk24.len = 0;
            stm->unk24.data = 0;
            stream_len = stm->file_sct;
            if (stm->cur_ofst == stm->eos) {
                if (stm->eos_callback != 0) {
                    stm->eos_callback(stm->eos_callback_context);
                }
            }
            if (stm->cur_ofst >= stream_len || ((stm->unk34 >> 11) >= stm->unk5C && stm->unk5C <= 0xFFFFE)) {
                stm->stat = 3;
            }
            stm->unk3 = 0;
            return;
        } else if (cvFs_stat == 3) {
            stm->read_flg = 0;
            SVM_Unlock_x0015CEC8();
            (*(sj)->vtbl->UngetChunk)(sj, 0, &stm->unk24);
            stm->unk24.data = 0;
            stm->unk24.len = 0;
        } else {
            SVM_Unlock_x0015CEC8();
            return;
        }
    } else {
        stm->read_flg = 1;
        stm->unk24.data = 0;
        stm->unk24.len = 0;
        SVM_Unlock_x0015CEC8();
        if (stm->pause == 1) {
            stm->read_flg = 0;
            return;
        }
        if (stm->unk48 == 1) {
            stm->read_flg = 0;
            return;
        }
        if (stm->file_sct == 0) {
            stm->stat = 3;
            stm->unk20 = 0;
            stm->read_flg = 0;
            return;
        }
        if (sj == 0 || sj->vtbl == 0) {
            stm->read_flg = 0;
            adxstm_sj_internal_error_x0015CEC8();
            return;
        }
        if ((stm->unk40 - (*(sj)->vtbl->GetNumData)(sj, 0)) >= stm->unk1C) {
            stm->read_flg = 0;
            return;
        }
        (*(sj)->vtbl->GetChunk)(sj, 0, stm->unk18, &chunk_1);
        len = chunk_1.len / 2048;
        len = ((len) < (stm->eos - stm->cur_ofst) ? (len) : (stm->eos - stm->cur_ofst));
        len = ((len) < (stm->file_sct - stm->cur_ofst) ? (len) : (stm->file_sct - stm->cur_ofst));
        len = ((len) < (stm->req_rd_size) ? (len) : (stm->req_rd_size));
        cvFsSeek_x0015CEC8(stm->cvfs, stm->unkC + stm->cur_ofst, 0);
        stm->unk20 = cvFsReqRd_x0015CEC8(stm->cvfs, len, chunk_1.data);
        stm->unk24.data = chunk_1.data;
        stm->unk24.len = chunk_1.len;
        if (stm->unk20 > 0) {
            return;
        }
        (*(sj)->vtbl->UngetChunk)(sj, 0, &stm->unk24);
        stm->unk24.data = 0;
        stm->unk24.len = 0;
        stm->read_flg = 0;
        if (cvFsGetStat_x0015CEC8(stm->cvfs) != 3) {
            return;
        }
    }
    if (adxstmf_num_rtry_x0015CEC8 >= 0) {
        if (stm->unk3 >= adxstmf_num_rtry_x0015CEC8) {
            stm->stat = 4;
        } else {
            stm->unk3 += 1;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", adxstmf_stat_exec);
typedef int s32_x0015D3D8;
typedef s32_x0015D3D8 ptrdiff_t_x0015D3D8;
typedef unsigned char Uint8_x0015D3D8;
typedef char Sint8_x0015D3D8;
typedef unsigned short Uint16_x0015D3D8;
typedef signed short Sint16_x0015D3D8;
typedef unsigned int Uint32_x0015D3D8;
typedef signed int Sint32_x0015D3D8;
typedef Sint32_x0015D3D8 Bool_x0015D3D8;
typedef char Char8_x0015D3D8;
typedef struct _UUID_x0015D3D8 {
    Uint32_x0015D3D8 Data1;
    Uint16_x0015D3D8 Data2;
    Uint16_x0015D3D8 Data3;
    Uint8_x0015D3D8 Data4[8];
} UUID_x0015D3D8;
typedef struct {
        Sint8_x0015D3D8 *data;
        Sint32_x0015D3D8 len;
} SJCK_x0015D3D8;
typedef struct {
        struct _sj_vtbl_x0015D3D8 *vtbl;
} SJ_OBJ_x0015D3D8;
typedef SJ_OBJ_x0015D3D8 *SJ_x0015D3D8;
typedef struct _sj_vtbl_x0015D3D8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015D3D8 sj);
        UUID_x0015D3D8 *(*GetUuid)(SJ_x0015D3D8 sj);
        void (*Reset)(SJ_x0015D3D8 sj);
        void (*GetChunk)(SJ_x0015D3D8 sj, Sint32_x0015D3D8 id, Sint32_x0015D3D8 nbyte, SJCK_x0015D3D8 *ck);
        void (*UngetChunk)(SJ_x0015D3D8 sj, Sint32_x0015D3D8 id, SJCK_x0015D3D8 *ck);
        void (*PutChunk)(SJ_x0015D3D8 sj, Sint32_x0015D3D8 id, SJCK_x0015D3D8 *ck);
        Sint32_x0015D3D8 (*GetNumData)(SJ_x0015D3D8 sj, Sint32_x0015D3D8 id);
        Sint32_x0015D3D8 (*IsGetChunk)(SJ_x0015D3D8 sj, Sint32_x0015D3D8 id, Sint32_x0015D3D8 nbyte, Sint32_x0015D3D8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015D3D8 sj,
                                        void (*func)(void *obj, Sint32_x0015D3D8 ecode), void *obj);
} SJ_IF_x0015D3D8;
extern int* sceCdCallback_x0015D3D8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015D3D8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015D3D8;
typedef struct {
               Sint16_x0015D3D8 unk0;
               Sint16_x0015D3D8 unk2;
               Sint16_x0015D3D8 unk4;
               Sint16_x0015D3D8 unk6;
} ADXPD_OBJ_SUB_x0015D3D8;
typedef struct {
               Sint32_x0015D3D8 used;
               Sint32_x0015D3D8 unk4;
               Sint32_x0015D3D8 mode;
               Sint32_x0015D3D8 stat;
               Sint32_x0015D3D8 num_blk;
               Sint32_x0015D3D8 unk14;
               Sint32_x0015D3D8 unk18;
               Sint32_x0015D3D8 unk1C;
               Sint32_x0015D3D8 unk20;
               Sint32_x0015D3D8 unk24;
               ADXPD_OBJ_SUB_x0015D3D8 unk28;
               Sint16_x0015D3D8 unk30;
               Sint16_x0015D3D8 unk32;
               Sint16_x0015D3D8 unk34;
               Sint16_x0015D3D8 unk36;
               Sint16_x0015D3D8 unk38;
               Sint16_x0015D3D8 unk3A;
} ADXPD_OBJ_x0015D3D8;
typedef ADXPD_OBJ_x0015D3D8* ADXPD_x0015D3D8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015D3D8;
typedef struct {
               Sint32_x0015D3D8 unk0;
               Sint32_x0015D3D8 unk4;
               Sint32_x0015D3D8 unk8;
               Sint32_x0015D3D8 unkC;
               Sint32_x0015D3D8 unk10;
               void* unk14;
               Sint32_x0015D3D8 unk18;
               Sint32_x0015D3D8 unk1C;
               Sint32_x0015D3D8 unk20;
               Sint32_x0015D3D8 unk24;
               Sint32_x0015D3D8 unk28;
} ADXB_UNK_x0015D3D8;
typedef struct {
               Sint16_x0015D3D8 unk0;
               Sint16_x0015D3D8 unk2;
               Sint32_x0015D3D8 stat;
               ADXPD_x0015D3D8 adxpd;
               Sint8_x0015D3D8 encoding_type;
               Sint8_x0015D3D8 sample_bitdepth;
               Sint8_x0015D3D8 channel_count;
               Sint8_x0015D3D8 block_size;
               Sint32_x0015D3D8 samples_per_block;
               Sint32_x0015D3D8 sample_rate;
               Sint32_x0015D3D8 total_samples;
               Sint16_x0015D3D8 unk1C;
               char pad1E[2];
               Sint32_x0015D3D8 unk20;
               Sint16_x0015D3D8 unk24;
               Sint16_x0015D3D8 unk26;
               Sint32_x0015D3D8 unk28;
               Sint32_x0015D3D8 unk2C;
               Sint32_x0015D3D8 unk30;
               Sint32_x0015D3D8 unk34;
               Sint32_x0015D3D8 unk38;
               void* unk3C;
               Sint32_x0015D3D8 unk40;
               Sint32_x0015D3D8 unk44;
               ADXB_UNK_x0015D3D8 unk48;
               Sint32_x0015D3D8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015D3D8*, Sint32_x0015D3D8*, Sint32_x0015D3D8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015D3D8, Sint32_x0015D3D8);
               Sint32_x0015D3D8 unk84;
               Sint32_x0015D3D8 unk88;
               Sint32_x0015D3D8 unk8C;
               Sint32_x0015D3D8 dec_num_sample;
               Sint32_x0015D3D8 dec_data_len;
               Sint16_x0015D3D8 format;
               Sint16_x0015D3D8 unk9A;
               Sint16_x0015D3D8 unk9C;
               Sint16_x0015D3D8 unk9E;
               Sint16_x0015D3D8 unkA0;
               char padA2[0xE];
               Sint32_x0015D3D8 unkB0;
               Sint32_x0015D3D8 ahx_dec_samples;
               Sint32_x0015D3D8 ahx_dec_frames;
               Sint32_x0015D3D8 unkBC;
               Sint32_x0015D3D8 ac3_dec_samples;
               Sint32_x0015D3D8 ac3_dec_frames;
               Sint32_x0015D3D8 unkC8;
               ADX_UNK_x0015D3D8 unkCC;
               Sint16_x0015D3D8 unkDC;
               Sint16_x0015D3D8 unkDE[2];
               char padE2[2];
               Sint32_x0015D3D8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015D3D8;
typedef ADXB_OBJ_x0015D3D8* ADXB_x0015D3D8;
typedef struct {
    Sint8_x0015D3D8 used;
    Sint8_x0015D3D8 state;
    Sint8_x0015D3D8 maxnch;
    Sint8_x0015D3D8 unk3;
    ADXB_x0015D3D8 adxb;
    SJ_x0015D3D8 sji;
    SJ_x0015D3D8 sjo[2];
    SJCK_x0015D3D8 unk14;
    SJCK_x0015D3D8 chunks[2];
    Sint32_x0015D3D8 unk2C;
    Sint32_x0015D3D8 unk30;
    Sint32_x0015D3D8 unk34;
    Sint32_x0015D3D8 unk38;
    Sint32_x0015D3D8 trap_num_samples;
    Sint32_x0015D3D8 trap_count;
    Sint32_x0015D3D8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015D3D8, Sint8_x0015D3D8*, Sint32_x0015D3D8);
    void* flt_obj;
    Sint8_x0015D3D8 unk58[0x40];
    Sint32_x0015D3D8 unk98;
    Sint32_x0015D3D8 lnkflg;
} ADXSJD_OBJ_x0015D3D8;
typedef ADXSJD_OBJ_x0015D3D8* ADXSJD_x0015D3D8;
typedef struct {
    Sint32_x0015D3D8 unk0;
    SJ_x0015D3D8 sj;
} SJX_UNK_0_x0015D3D8;
typedef struct {
    Sint8_x0015D3D8 used;
    Sint8_x0015D3D8 unk1;
    Sint16_x0015D3D8 unk2;
    SJ_x0015D3D8 sj;
    void* unk8;
    Sint32_x0015D3D8 unkC;
    SJX_UNK_0_x0015D3D8* unk10;
} SJX_OBJ_x0015D3D8;
typedef SJX_OBJ_x0015D3D8* SJX_x0015D3D8;
typedef struct {
    Sint8_x0015D3D8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015D3D8 unk8;
    SJX_x0015D3D8 unkC;
    SJCK_x0015D3D8 chunk;
} PS2PSJ_OBJ_x0015D3D8;
typedef PS2PSJ_OBJ_x0015D3D8* PS2PSJ_x0015D3D8;
typedef struct {
               Sint8_x0015D3D8 unk0;
               Sint8_x0015D3D8 unk1;
               Sint8_x0015D3D8 unk2;
               SJ_x0015D3D8 unk4;
               SJ_x0015D3D8 unk8;
               SJCK_x0015D3D8 unkC;
               SJCK_x0015D3D8 unk14;
               sceSifDmaData_x0015D3D8 dma_data;
               Sint32_x0015D3D8 unk2C;
               Sint32_x0015D3D8 unk30;
               Sint32_x0015D3D8 unk34;
               Sint32_x0015D3D8 unk38;
               Sint32_x0015D3D8 unk3C;
} DTR_OBJ_x0015D3D8;
typedef DTR_OBJ_x0015D3D8* DTR_x0015D3D8;
typedef struct {
    Sint8_x0015D3D8 used;
    Sint32_x0015D3D8 maxnch;
    PS2PSJ_x0015D3D8 psj[2];
    DTR_x0015D3D8 dtr[2];
    SJ_x0015D3D8 sjo[2];
    void* unk20;
    Sint32_x0015D3D8 unk24;
    Sint32_x0015D3D8 unk28;
    Sint32_x0015D3D8 unk2C;
    Sint8_x0015D3D8 unk30;
    Sint8_x0015D3D8 unk31;
    Sint8_x0015D3D8 num_chan;
    Sint8_x0015D3D8 unk33;
    Sint32_x0015D3D8 sfreq;
    Sint32_x0015D3D8 unk38;
    Sint32_x0015D3D8 out_vol;
    Sint32_x0015D3D8 unk40;
    Sint32_x0015D3D8 pan[2];
    Sint32_x0015D3D8 unk4C[2];
    Sint32_x0015D3D8 unk54;
    Sint32_x0015D3D8 unk58;
    Sint8_x0015D3D8 unk5C;
    Sint8_x0015D3D8 unk5D;
    Sint8_x0015D3D8 unk5E;
    Sint8_x0015D3D8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015D3D8;
typedef ADXRNA_OBJ_x0015D3D8* ADXRNA_x0015D3D8;
typedef struct {
    Sint8_x0015D3D8 unk0;
    Sint8_x0015D3D8 stat;
    Sint8_x0015D3D8 read_flg;
    Sint8_x0015D3D8 unk3;
    SJ_x0015D3D8 sj;
    void* cvfs;
    Sint32_x0015D3D8 unkC;
    Sint32_x0015D3D8 file_len;
    Sint32_x0015D3D8 file_sct;
    Sint32_x0015D3D8 unk18;
    Sint32_x0015D3D8 unk1C;
    Sint32_x0015D3D8 unk20;
    SJCK_x0015D3D8 unk24;
    Sint32_x0015D3D8 req_rd_size;
    Sint32_x0015D3D8 eos;
    Uint32_x0015D3D8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015D3D8 unk40;
    Sint8_x0015D3D8 pause;
    Sint8_x0015D3D8 unk45;
    Sint8_x0015D3D8 unk46;
    Sint8_x0015D3D8 unk47;
    Sint8_x0015D3D8 unk48;
    Sint8_x0015D3D8 unk49;
    char pad4A[6];
    const Char8_x0015D3D8* fname;
    void* dir;
    Sint32_x0015D3D8 cur_ofst;
    Uint32_x0015D3D8 unk5C;
} ADXSTM_OBJ_x0015D3D8;
typedef ADXSTM_OBJ_x0015D3D8* ADXSTM_x0015D3D8;
extern void cvFsEntryErrFunc_x0015D3D8(void (*function)(void*, const Char8_x0015D3D8*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015D3D8(void (*callback)(void*, Char8_x0015D3D8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015D3D8 SVM_SetCbSvr_x0015D3D8(Sint32_x0015D3D8, Sint32_x0015D3D8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015D3D8(Sint32_x0015D3D8, Sint32_x0015D3D8, Sint32_x0015D3D8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015D3D8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015D3D8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
Sint32_x0015D3D8 SVM_TestAndSet_x0015D3D8(Sint32_x0015D3D8* mem) __asm__("func_00170A00");
typedef struct _adx_talk_x0015D3D8 {
                   Sint8_x0015D3D8 used;
                   Sint8_x0015D3D8 stat;
                   Sint8_x0015D3D8 pmode;
                   Sint8_x0015D3D8 maxnch;
                   ADXSJD_x0015D3D8 sjd;
                   ADXSTM_x0015D3D8 stm;
                   ADXRNA_x0015D3D8 rna;
                   SJ_x0015D3D8 sjf;
                   SJ_x0015D3D8 sji;
                   SJ_x0015D3D8 sjo[(2)];
                   Sint8_x0015D3D8 *ibuf;
                   Sint32_x0015D3D8 ibuflen;
                   Sint32_x0015D3D8 ibufxlen;
                   Sint16_x0015D3D8 *obuf;
                   Sint32_x0015D3D8 obufsize;
                   Sint32_x0015D3D8 obufdist;
                   Sint32_x0015D3D8 svrfreq;
                   Sint16_x0015D3D8 maxsct;
                   Sint16_x0015D3D8 minsct;
                   Sint16_x0015D3D8 outvol;
                   Sint16_x0015D3D8 outpan[(2)];
                   Sint16_x0015D3D8 unk46;
                   Sint32_x0015D3D8 maxdecsmpl;
                   Sint32_x0015D3D8 lpcnt;
                   Sint32_x0015D3D8 lp_skiplen;
                   Sint32_x0015D3D8 trp;
                   Sint32_x0015D3D8 wpos;
                   Sint32_x0015D3D8 mofst;
                   Sint16_x0015D3D8 ercode;
                   Sint32_x0015D3D8 edecpos;
                   Sint16_x0015D3D8 edeccnt;
                   Sint16_x0015D3D8 eshrtcnt;
                   Sint8_x0015D3D8 lpflg;
                   Sint8_x0015D3D8 autorcvr;
                   Sint8_x0015D3D8 fltmode;
                   Sint8_x0015D3D8 execflag;
                   Sint8_x0015D3D8 pstwait_flag;
                   Sint8_x0015D3D8 pstready_flag;
                   Sint8_x0015D3D8 pause_flag;
                   void *amp;
                   SJ_x0015D3D8 ampsji[(2)];
                   SJ_x0015D3D8 ampsjo[(2)];
                   Sint32_x0015D3D8 time_ofst;
                   Sint32_x0015D3D8 lesct;
                   Sint32_x0015D3D8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015D3D8 lnkflg;
                   Sint8_x0015D3D8 rsv;
                   Sint16_x0015D3D8 rsv2;
                   Uint32_x0015D3D8 tvofst;
                   Uint32_x0015D3D8 svcnt;
                   Uint32_x0015D3D8 decofst;
                   Sint32_x0015D3D8 flush_nsmpl;
                   Sint8_x0015D3D8 unkAC;
                   Sint8_x0015D3D8 padAD[1];
               Char8_x0015D3D8* unkB0;
               Sint32_x0015D3D8 padB4;
               Sint32_x0015D3D8 padB8;
               Sint32_x0015D3D8 padBC;
               Sint32_x0015D3D8 padC0;
} ADX_TALK_x0015D3D8;
typedef ADX_TALK_x0015D3D8 *ADXT_x0015D3D8;
extern void ADXT_EntryErrFunc_x0015D3D8(void (*func)(void *obj, Sint8_x0015D3D8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015D3D8(ADXT_x0015D3D8 adxt,
                void (*f)(void *obj, Sint32_x0015D3D8 ch, void *data, Sint32_x0015D3D8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015D3D8(Bool_x0015D3D8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015D3D8(Bool_x0015D3D8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015D3D8(void (*fn)(void *obj, Char8_x0015D3D8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015D3D8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015D3D8 volatile adxstmf_execsvr_flg_x0015D3D8 __asm__("D_00410218");
extern ADXSTM_OBJ_x0015D3D8 adxstmf_obj_x0015D3D8[40] __asm__("D_00410228");
void ADXSTMF_ExecHndl_x0015D3D8(ADXSTM_x0015D3D8 stm) __asm__("adxstmf_stat_exec");
void func_0015D3D8_x0015D3D8() __asm__("func_0015D3D8");
/* ADXSTM_ExecServer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015D3D8_x0015D3D8() {
    ADXSTM_x0015D3D8 stm;
    Sint32_x0015D3D8 i;
    if (SVM_TestAndSet_x0015D3D8(&adxstmf_execsvr_flg_x0015D3D8) == 0) {
        return;
    }
    for (i = 0; i < 40; i++) {
        stm = &adxstmf_obj_x0015D3D8[i];
        if (stm->unk0 == 1) {
            ADXSTMF_ExecHndl_x0015D3D8(stm);
        }
    }
    adxstmf_execsvr_flg_x0015D3D8 = 0;
}
s32 func_0015CCF8_x0015D458() __asm__("func_0015CCF8");
s32 func_0015D458_x0015D458(s32 a0, s32 *a1) __asm__("func_0015D458");
s32 func_0015D458_x0015D458(s32 a0, s32 *a1) {
    *a1 = func_0015CCF8_x0015D458();
    return 1;
}
s32 func_0015D488(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)((u8 *)arg0 + 0x1C);
    *arg2 = *(s32 *)((u8 *)arg0 + 0x18);
    return 1;
}
s32 func_0015D4A0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
s32 func_0015D4A8_x0015D4A8(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0015D4A8");
s32 func_0015D4A8_x0015D4A8(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x1C)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x18)) = arg2;
  return 1;
}
s32 func_0015D4B8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
    return 1;
}
void func_0015D4C8(void) {

}
s32 func_0015D4D0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x10);
}
s32 func_0015D4D8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
void func_0015D4E0(u8 *arg0, s8 arg1) {
    *(s8 *)((u8 *)arg0 + 0x44) = arg1;
}
s8 func_0015D4E8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x44);
}
void func_0015D4F0(u8 *arg0, s32 *arg1) {
    *arg1 = func_00162A70(*(s32 *)((u8 *)arg0 + 8));
}
s32 func_0015D520_x0015D520(s32 arg0, s32 *arg1) __asm__("func_0015D520");
s32 func_0015D520_x0015D520(s32 arg0, s32 *arg1) {
    *arg1 = 0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D530);
s32 func_00162AD8_x0015D588() __asm__("func_00162AD8");
s32 func_0015D588_x0015D588(s32 a0, s32 *a1) __asm__("func_0015D588");
s32 func_0015D588_x0015D588(s32 a0, s32 *a1) {
    *a1 = func_00162AD8_x0015D588();
    return 1;
}
typedef int s32_x0015D5B8;
typedef s32_x0015D5B8 ptrdiff_t_x0015D5B8;
void ADXCRS_Lock_x0015D5B8() __asm__("func_00152508");
void ADXCRS_Unlock_x0015D5B8() __asm__("func_00152520");
typedef unsigned char Uint8_x0015D5B8;
typedef char Sint8_x0015D5B8;
typedef unsigned short Uint16_x0015D5B8;
typedef signed short Sint16_x0015D5B8;
typedef unsigned int Uint32_x0015D5B8;
typedef signed int Sint32_x0015D5B8;
typedef Sint32_x0015D5B8 Bool_x0015D5B8;
typedef char Char8_x0015D5B8;
typedef struct _UUID_x0015D5B8 {
    Uint32_x0015D5B8 Data1;
    Uint16_x0015D5B8 Data2;
    Uint16_x0015D5B8 Data3;
    Uint8_x0015D5B8 Data4[8];
} UUID_x0015D5B8;
typedef struct {
        Sint8_x0015D5B8 *data;
        Sint32_x0015D5B8 len;
} SJCK_x0015D5B8;
typedef struct {
        struct _sj_vtbl_x0015D5B8 *vtbl;
} SJ_OBJ_x0015D5B8;
typedef SJ_OBJ_x0015D5B8 *SJ_x0015D5B8;
typedef struct _sj_vtbl_x0015D5B8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015D5B8 sj);
        UUID_x0015D5B8 *(*GetUuid)(SJ_x0015D5B8 sj);
        void (*Reset)(SJ_x0015D5B8 sj);
        void (*GetChunk)(SJ_x0015D5B8 sj, Sint32_x0015D5B8 id, Sint32_x0015D5B8 nbyte, SJCK_x0015D5B8 *ck);
        void (*UngetChunk)(SJ_x0015D5B8 sj, Sint32_x0015D5B8 id, SJCK_x0015D5B8 *ck);
        void (*PutChunk)(SJ_x0015D5B8 sj, Sint32_x0015D5B8 id, SJCK_x0015D5B8 *ck);
        Sint32_x0015D5B8 (*GetNumData)(SJ_x0015D5B8 sj, Sint32_x0015D5B8 id);
        Sint32_x0015D5B8 (*IsGetChunk)(SJ_x0015D5B8 sj, Sint32_x0015D5B8 id, Sint32_x0015D5B8 nbyte, Sint32_x0015D5B8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015D5B8 sj,
                                        void (*func)(void *obj, Sint32_x0015D5B8 ecode), void *obj);
} SJ_IF_x0015D5B8;
extern int* sceCdCallback_x0015D5B8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015D5B8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015D5B8;
typedef struct {
               Sint16_x0015D5B8 unk0;
               Sint16_x0015D5B8 unk2;
               Sint16_x0015D5B8 unk4;
               Sint16_x0015D5B8 unk6;
} ADXPD_OBJ_SUB_x0015D5B8;
typedef struct {
               Sint32_x0015D5B8 used;
               Sint32_x0015D5B8 unk4;
               Sint32_x0015D5B8 mode;
               Sint32_x0015D5B8 stat;
               Sint32_x0015D5B8 num_blk;
               Sint32_x0015D5B8 unk14;
               Sint32_x0015D5B8 unk18;
               Sint32_x0015D5B8 unk1C;
               Sint32_x0015D5B8 unk20;
               Sint32_x0015D5B8 unk24;
               ADXPD_OBJ_SUB_x0015D5B8 unk28;
               Sint16_x0015D5B8 unk30;
               Sint16_x0015D5B8 unk32;
               Sint16_x0015D5B8 unk34;
               Sint16_x0015D5B8 unk36;
               Sint16_x0015D5B8 unk38;
               Sint16_x0015D5B8 unk3A;
} ADXPD_OBJ_x0015D5B8;
typedef ADXPD_OBJ_x0015D5B8* ADXPD_x0015D5B8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015D5B8;
typedef struct {
               Sint32_x0015D5B8 unk0;
               Sint32_x0015D5B8 unk4;
               Sint32_x0015D5B8 unk8;
               Sint32_x0015D5B8 unkC;
               Sint32_x0015D5B8 unk10;
               void* unk14;
               Sint32_x0015D5B8 unk18;
               Sint32_x0015D5B8 unk1C;
               Sint32_x0015D5B8 unk20;
               Sint32_x0015D5B8 unk24;
               Sint32_x0015D5B8 unk28;
} ADXB_UNK_x0015D5B8;
typedef struct {
               Sint16_x0015D5B8 unk0;
               Sint16_x0015D5B8 unk2;
               Sint32_x0015D5B8 stat;
               ADXPD_x0015D5B8 adxpd;
               Sint8_x0015D5B8 encoding_type;
               Sint8_x0015D5B8 sample_bitdepth;
               Sint8_x0015D5B8 channel_count;
               Sint8_x0015D5B8 block_size;
               Sint32_x0015D5B8 samples_per_block;
               Sint32_x0015D5B8 sample_rate;
               Sint32_x0015D5B8 total_samples;
               Sint16_x0015D5B8 unk1C;
               char pad1E[2];
               Sint32_x0015D5B8 unk20;
               Sint16_x0015D5B8 unk24;
               Sint16_x0015D5B8 unk26;
               Sint32_x0015D5B8 unk28;
               Sint32_x0015D5B8 unk2C;
               Sint32_x0015D5B8 unk30;
               Sint32_x0015D5B8 unk34;
               Sint32_x0015D5B8 unk38;
               void* unk3C;
               Sint32_x0015D5B8 unk40;
               Sint32_x0015D5B8 unk44;
               ADXB_UNK_x0015D5B8 unk48;
               Sint32_x0015D5B8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015D5B8*, Sint32_x0015D5B8*, Sint32_x0015D5B8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015D5B8, Sint32_x0015D5B8);
               Sint32_x0015D5B8 unk84;
               Sint32_x0015D5B8 unk88;
               Sint32_x0015D5B8 unk8C;
               Sint32_x0015D5B8 dec_num_sample;
               Sint32_x0015D5B8 dec_data_len;
               Sint16_x0015D5B8 format;
               Sint16_x0015D5B8 unk9A;
               Sint16_x0015D5B8 unk9C;
               Sint16_x0015D5B8 unk9E;
               Sint16_x0015D5B8 unkA0;
               char padA2[0xE];
               Sint32_x0015D5B8 unkB0;
               Sint32_x0015D5B8 ahx_dec_samples;
               Sint32_x0015D5B8 ahx_dec_frames;
               Sint32_x0015D5B8 unkBC;
               Sint32_x0015D5B8 ac3_dec_samples;
               Sint32_x0015D5B8 ac3_dec_frames;
               Sint32_x0015D5B8 unkC8;
               ADX_UNK_x0015D5B8 unkCC;
               Sint16_x0015D5B8 unkDC;
               Sint16_x0015D5B8 unkDE[2];
               char padE2[2];
               Sint32_x0015D5B8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015D5B8;
typedef ADXB_OBJ_x0015D5B8* ADXB_x0015D5B8;
typedef struct {
    Sint8_x0015D5B8 used;
    Sint8_x0015D5B8 state;
    Sint8_x0015D5B8 maxnch;
    Sint8_x0015D5B8 unk3;
    ADXB_x0015D5B8 adxb;
    SJ_x0015D5B8 sji;
    SJ_x0015D5B8 sjo[2];
    SJCK_x0015D5B8 unk14;
    SJCK_x0015D5B8 chunks[2];
    Sint32_x0015D5B8 unk2C;
    Sint32_x0015D5B8 unk30;
    Sint32_x0015D5B8 unk34;
    Sint32_x0015D5B8 unk38;
    Sint32_x0015D5B8 trap_num_samples;
    Sint32_x0015D5B8 trap_count;
    Sint32_x0015D5B8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015D5B8, Sint8_x0015D5B8*, Sint32_x0015D5B8);
    void* flt_obj;
    Sint8_x0015D5B8 unk58[0x40];
    Sint32_x0015D5B8 unk98;
    Sint32_x0015D5B8 lnkflg;
} ADXSJD_OBJ_x0015D5B8;
typedef ADXSJD_OBJ_x0015D5B8* ADXSJD_x0015D5B8;
typedef struct {
    Sint32_x0015D5B8 unk0;
    SJ_x0015D5B8 sj;
} SJX_UNK_0_x0015D5B8;
typedef struct {
    Sint8_x0015D5B8 used;
    Sint8_x0015D5B8 unk1;
    Sint16_x0015D5B8 unk2;
    SJ_x0015D5B8 sj;
    void* unk8;
    Sint32_x0015D5B8 unkC;
    SJX_UNK_0_x0015D5B8* unk10;
} SJX_OBJ_x0015D5B8;
typedef SJX_OBJ_x0015D5B8* SJX_x0015D5B8;
typedef struct {
    Sint8_x0015D5B8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015D5B8 unk8;
    SJX_x0015D5B8 unkC;
    SJCK_x0015D5B8 chunk;
} PS2PSJ_OBJ_x0015D5B8;
typedef PS2PSJ_OBJ_x0015D5B8* PS2PSJ_x0015D5B8;
typedef struct {
               Sint8_x0015D5B8 unk0;
               Sint8_x0015D5B8 unk1;
               Sint8_x0015D5B8 unk2;
               SJ_x0015D5B8 unk4;
               SJ_x0015D5B8 unk8;
               SJCK_x0015D5B8 unkC;
               SJCK_x0015D5B8 unk14;
               sceSifDmaData_x0015D5B8 dma_data;
               Sint32_x0015D5B8 unk2C;
               Sint32_x0015D5B8 unk30;
               Sint32_x0015D5B8 unk34;
               Sint32_x0015D5B8 unk38;
               Sint32_x0015D5B8 unk3C;
} DTR_OBJ_x0015D5B8;
typedef DTR_OBJ_x0015D5B8* DTR_x0015D5B8;
typedef struct {
    Sint8_x0015D5B8 used;
    Sint32_x0015D5B8 maxnch;
    PS2PSJ_x0015D5B8 psj[2];
    DTR_x0015D5B8 dtr[2];
    SJ_x0015D5B8 sjo[2];
    void* unk20;
    Sint32_x0015D5B8 unk24;
    Sint32_x0015D5B8 unk28;
    Sint32_x0015D5B8 unk2C;
    Sint8_x0015D5B8 unk30;
    Sint8_x0015D5B8 unk31;
    Sint8_x0015D5B8 num_chan;
    Sint8_x0015D5B8 unk33;
    Sint32_x0015D5B8 sfreq;
    Sint32_x0015D5B8 unk38;
    Sint32_x0015D5B8 out_vol;
    Sint32_x0015D5B8 unk40;
    Sint32_x0015D5B8 pan[2];
    Sint32_x0015D5B8 unk4C[2];
    Sint32_x0015D5B8 unk54;
    Sint32_x0015D5B8 unk58;
    Sint8_x0015D5B8 unk5C;
    Sint8_x0015D5B8 unk5D;
    Sint8_x0015D5B8 unk5E;
    Sint8_x0015D5B8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015D5B8;
typedef ADXRNA_OBJ_x0015D5B8* ADXRNA_x0015D5B8;
typedef struct {
    Sint8_x0015D5B8 unk0;
    Sint8_x0015D5B8 stat;
    Sint8_x0015D5B8 read_flg;
    Sint8_x0015D5B8 unk3;
    SJ_x0015D5B8 sj;
    void* cvfs;
    Sint32_x0015D5B8 unkC;
    Sint32_x0015D5B8 file_len;
    Sint32_x0015D5B8 file_sct;
    Sint32_x0015D5B8 unk18;
    Sint32_x0015D5B8 unk1C;
    Sint32_x0015D5B8 unk20;
    SJCK_x0015D5B8 unk24;
    Sint32_x0015D5B8 req_rd_size;
    Sint32_x0015D5B8 eos;
    Uint32_x0015D5B8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015D5B8 unk40;
    Sint8_x0015D5B8 pause;
    Sint8_x0015D5B8 unk45;
    Sint8_x0015D5B8 unk46;
    Sint8_x0015D5B8 unk47;
    Sint8_x0015D5B8 unk48;
    Sint8_x0015D5B8 unk49;
    char pad4A[6];
    const Char8_x0015D5B8* fname;
    void* dir;
    Sint32_x0015D5B8 cur_ofst;
    Uint32_x0015D5B8 unk5C;
} ADXSTM_OBJ_x0015D5B8;
typedef ADXSTM_OBJ_x0015D5B8* ADXSTM_x0015D5B8;
extern void cvFsEntryErrFunc_x0015D5B8(void (*function)(void*, const Char8_x0015D5B8*), void* object) __asm__("cvFsEntryErrFunc");
extern void SVM_SetCbErr_x0015D5B8(void (*callback)(void*, Char8_x0015D5B8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0015D5B8 SVM_SetCbSvr_x0015D5B8(Sint32_x0015D5B8, Sint32_x0015D5B8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0015D5B8(Sint32_x0015D5B8, Sint32_x0015D5B8, Sint32_x0015D5B8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0015D5B8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0015D5B8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct _adx_talk_x0015D5B8 {
                   Sint8_x0015D5B8 used;
                   Sint8_x0015D5B8 stat;
                   Sint8_x0015D5B8 pmode;
                   Sint8_x0015D5B8 maxnch;
                   ADXSJD_x0015D5B8 sjd;
                   ADXSTM_x0015D5B8 stm;
                   ADXRNA_x0015D5B8 rna;
                   SJ_x0015D5B8 sjf;
                   SJ_x0015D5B8 sji;
                   SJ_x0015D5B8 sjo[(2)];
                   Sint8_x0015D5B8 *ibuf;
                   Sint32_x0015D5B8 ibuflen;
                   Sint32_x0015D5B8 ibufxlen;
                   Sint16_x0015D5B8 *obuf;
                   Sint32_x0015D5B8 obufsize;
                   Sint32_x0015D5B8 obufdist;
                   Sint32_x0015D5B8 svrfreq;
                   Sint16_x0015D5B8 maxsct;
                   Sint16_x0015D5B8 minsct;
                   Sint16_x0015D5B8 outvol;
                   Sint16_x0015D5B8 outpan[(2)];
                   Sint16_x0015D5B8 unk46;
                   Sint32_x0015D5B8 maxdecsmpl;
                   Sint32_x0015D5B8 lpcnt;
                   Sint32_x0015D5B8 lp_skiplen;
                   Sint32_x0015D5B8 trp;
                   Sint32_x0015D5B8 wpos;
                   Sint32_x0015D5B8 mofst;
                   Sint16_x0015D5B8 ercode;
                   Sint32_x0015D5B8 edecpos;
                   Sint16_x0015D5B8 edeccnt;
                   Sint16_x0015D5B8 eshrtcnt;
                   Sint8_x0015D5B8 lpflg;
                   Sint8_x0015D5B8 autorcvr;
                   Sint8_x0015D5B8 fltmode;
                   Sint8_x0015D5B8 execflag;
                   Sint8_x0015D5B8 pstwait_flag;
                   Sint8_x0015D5B8 pstready_flag;
                   Sint8_x0015D5B8 pause_flag;
                   void *amp;
                   SJ_x0015D5B8 ampsji[(2)];
                   SJ_x0015D5B8 ampsjo[(2)];
                   Sint32_x0015D5B8 time_ofst;
                   Sint32_x0015D5B8 lesct;
                   Sint32_x0015D5B8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015D5B8 lnkflg;
                   Sint8_x0015D5B8 rsv;
                   Sint16_x0015D5B8 rsv2;
                   Uint32_x0015D5B8 tvofst;
                   Uint32_x0015D5B8 svcnt;
                   Uint32_x0015D5B8 decofst;
                   Sint32_x0015D5B8 flush_nsmpl;
                   Sint8_x0015D5B8 unkAC;
                   Sint8_x0015D5B8 padAD[1];
               Char8_x0015D5B8* unkB0;
               Sint32_x0015D5B8 padB4;
               Sint32_x0015D5B8 padB8;
               Sint32_x0015D5B8 padBC;
               Sint32_x0015D5B8 padC0;
} ADX_TALK_x0015D5B8;
typedef ADX_TALK_x0015D5B8 *ADXT_x0015D5B8;
extern void ADXT_EntryErrFunc_x0015D5B8(void (*func)(void *obj, Sint8_x0015D5B8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015D5B8(ADXT_x0015D5B8 adxt,
                void (*f)(void *obj, Sint32_x0015D5B8 ch, void *data, Sint32_x0015D5B8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015D5B8(Bool_x0015D5B8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015D5B8(Bool_x0015D5B8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015D5B8(void (*fn)(void *obj, Char8_x0015D5B8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015D5B8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void func_0015D5B8_x0015D5B8(ADXSTM_x0015D5B8 stm, SJ_x0015D5B8 sj) __asm__("func_0015D5B8");
/* ADXSTM_SetSj: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_stmc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015D5B8_x0015D5B8(ADXSTM_x0015D5B8 stm, SJ_x0015D5B8 sj) {
    stm->sj = sj;
    ADXCRS_Lock_x0015D5B8();
    stm->unk40 = (*(sj)->vtbl->GetNumData)(sj, 0) + (*(sj)->vtbl->GetNumData)(sj, 1);
    ADXCRS_Unlock_x0015D5B8();
    stm->unk18 = stm->unk40;
    stm->unk1C = stm->unk40;
}
void func_0015D638(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x14) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (arg1 << 0xB);
}
s32 func_0015CCD8_x0015D648(s32, s32) __asm__("func_0015CCD8");
void func_0015D648_x0015D648(s32 *a0, s32 a1) __asm__("func_0015D648");
void func_0015D648_x0015D648(s32 *a0, s32 a1) {
    a0[3] = a1;
    func_0015CCD8_x0015D648(a0, 0);
}
void func_0015D668(s32 arg0) {
    D_0041021C = arg0;
}
s8 func_0015D678(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 2);
}
void func_0015D680(u8 *arg0) {
    if ((*(s32 *)((u8 *)arg0 + 0x50) != 0) && (*(s32 *)((u8 *)arg0 + 8) == 0)) {
        *(s8 *)((u8 *)arg0 + 0x45) = 1;
        do {
            if (func_00170A00(&D_00410218) == 1) {
                adxstmf_stat_exec(arg0);
                D_00410218 = 0;
            }
        } while (*(s8 *)((u8 *)arg0 + 0x45) != 0);
    }
}
s32 ADXERR_CallErrFunc1_x0015D708(s32) __asm__("ADXERR_CallErrFunc1");
void func_0015D708_x0015D708(s32 arg0, s32 arg1) __asm__("func_0015D708");
void func_0015D708_x0015D708(s32 arg0, s32 arg1) {
    ADXERR_CallErrFunc1_x0015D708(arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D720);
typedef char Sint8_x0015D850;
typedef signed int Sint32_x0015D850;
extern int* sceCdCallback_x0015D850(void (*func)(int)) __asm__("sceCdCallback");
Sint32_x0015D850 dvCiLoadFcache_x0015D850(Sint8_x0015D850*, Sint8_x0015D850*, Sint32_x0015D850, Sint32_x0015D850) __asm__("dvCiLoadDirInfo");
typedef struct _adxps2_fcprm_x0015D850 {
    Sint8_x0015D850 *flist;
    Sint32_x0015D850 maxflen;
    Sint8_x0015D850 *fcbuf;
    Sint32_x0015D850 fcsize;
} ADXPS2_FCPRM_x0015D850;
Sint32_x0015D850 func_0015D850_x0015D850(ADXPS2_FCPRM_x0015D850* fcprm) __asm__("func_0015D850");
/* ADXPS2_LoadFcacheDvd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sudv.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015D850 func_0015D850_x0015D850(ADXPS2_FCPRM_x0015D850* fcprm) {
    Sint32_x0015D850 ret = 0;
    if (fcprm != 0) {
        ret = dvCiLoadFcache_x0015D850(fcprm->flist, fcprm->fcbuf, fcprm->fcsize, fcprm->maxflen);
    } else {
        dvCiLoadFcache_x0015D850(0, 0, 0, 0);
    }
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D8B0);
typedef int (*CvFsFn_x0015D918)();
typedef struct {
    CvFsFn_x0015D918 exec_server;
    CvFsFn_x0015D918 entry_err_func;
    CvFsFn_x0015D918 get_file_size;
    CvFsFn_x0015D918 get_free_size;
    CvFsFn_x0015D918 open;
    CvFsFn_x0015D918 close;
    CvFsFn_x0015D918 seek;
    CvFsFn_x0015D918 tell;
    CvFsFn_x0015D918 req_rd;
    CvFsFn_x0015D918 req_wr;
    CvFsFn_x0015D918 stop_tr;
    CvFsFn_x0015D918 get_stat;
    CvFsFn_x0015D918 get_sct_len;
    CvFsFn_x0015D918 set_sct_len;
    CvFsFn_x0015D918 get_num_tr;
    CvFsFn_x0015D918 change_dir;
    CvFsFn_x0015D918 is_exist_file;
    CvFsFn_x0015D918 get_num_files;
    CvFsFn_x0015D918 load_dir_info;
    CvFsFn_x0015D918 get_max_byte_rate;
    CvFsFn_x0015D918 make_dir;
    CvFsFn_x0015D918 remove_dir;
    CvFsFn_x0015D918 delete_file;
    CvFsFn_x0015D918 get_file_size_ex;
    CvFsFn_x0015D918 opt_fn1;
    CvFsFn_x0015D918 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x0015D918;
extern void cvFsAddDev_x0015D918(char *name, CvFsDevIf_x0015D918 *(*getif)(void)) __asm__("cvFsAddDev");
void dvci_set_read_mode_x0015D918(int trycount, int spindlctrl, int datapattern, int flag) __asm__("func_00167AB8");
void dvci_set_cur_dir_x0015D918(const char *dir) __asm__("func_00167AD8");
void func_0015D918_x0015D918(int *prm) __asm__("func_0015D918");
/* adx_dvci_config: from https://github.com/new-coke/rez-decomp (src/cri/adx_dvci.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0015D918_x0015D918(int *prm)
{
    if (prm != 0) {
        dvci_set_read_mode_x0015D918(prm[2], prm[3], prm[4], prm[1]);
        dvci_set_cur_dir_x0015D918(prm[0]);
    } else {
        dvci_set_read_mode_x0015D918(0, 0, 0, 0);
        dvci_set_cur_dir_x0015D918(0);
    }
}
void func_0015D980(void) {
    func_00167A90();
}
void func_0015D998(void) {
    func_00166BB0();
}
void func_0015D9B0(void) {
    func_00166BD0();
}
void func_0015D9C8(void) {
    func_00167BB0();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D9E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DA30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DA80);
s32 ADXERR_CallErrFunc1_x0015DAD0(s32) __asm__("ADXERR_CallErrFunc1");
void func_0015DAD0_x0015DAD0(s32 arg0, s32 arg1) __asm__("func_0015DAD0");
void func_0015DAD0_x0015DAD0(s32 arg0, s32 arg1) {
    ADXERR_CallErrFunc1_x0015DAD0(arg1);
}
void func_0015DAE8(u8 *arg0) {
    func_001635A0(&func_0015DAD0, 0);
    func_00161F18(&D_00461800, &func_0016A798, 0);
    func_001635A0(&func_0015DAD0, 0);
    func_00161F18(&D_00461808, &func_00167C28, 0);
    func_00162250(&D_00461808);
    if (arg0 != NULL) {
        func_001696B0(*(s32 *)((u8 *)arg0 + 4));
        func_001696E0(*(s32 *)((u8 *)arg0 + 0));
        if (*(s32 *)((u8 *)arg0 + 8) == 0) {
            func_00167BC8(0);
        } else {
            func_00167BC8(1);
        }
        if (*(s32 *)((u8 *)arg0 + 0xC) == 0) {
            func_00167BF8(0);
            return;
        }
        func_00167BF8(1);
        return;
    }
    func_001696B0(0);
    func_001696E0(0);
    func_00167BC8(0);
    func_00167BF8(0);
}
typedef char Sint8_x0015DC00;
typedef signed int Sint32_x0015DC00;
extern int* sceCdCallback_x0015DC00(void (*func)(int)) __asm__("sceCdCallback");
int htCiLoadFcache_x0015DC00() __asm__("htCiLoadDirInfo");
typedef struct _adxps2_fcprm_x0015DC00 {
    Sint8_x0015DC00 *flist;
    Sint32_x0015DC00 maxflen;
    Sint8_x0015DC00 *fcbuf;
    Sint32_x0015DC00 fcsize;
} ADXPS2_FCPRM_x0015DC00;
int func_0015DC00_x0015DC00(ADXPS2_FCPRM_x0015DC00* prm) __asm__("func_0015DC00");
/* ADXPS2_LoadFcacheHost: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_suht.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
int func_0015DC00_x0015DC00(ADXPS2_FCPRM_x0015DC00* prm) {
    int ret;
    if (prm) {
        ret = htCiLoadFcache_x0015DC00(prm->flist, prm->fcbuf, prm->fcsize, prm->maxflen);
    } else {
        ret = htCiLoadFcache_x0015DC00(0, 0, 0, 0);
    }
    return ret;
}
void func_0015DC50(void) {
    func_00169688();
}
s32 func_001696B0_x0015DC68() __asm__("func_001696B0");
s32 func_001696E0_x0015DC68() __asm__("func_001696E0");
void func_0015DC68_x0015DC68(u8 *arg0) __asm__("func_0015DC68");
void func_0015DC68_x0015DC68(u8 *arg0) {
    if (arg0 != NULL) {
        func_001696B0_x0015DC68(*(s32 *)((u8 *)arg0 + 4));
        func_001696E0_x0015DC68(*(s32 *)((u8 *)arg0 + 0));
        return;
    }
    func_001696B0_x0015DC68();
    func_001696E0_x0015DC68(0);
}
s32 func_0015DCB8(void) {
    return D_00411158;
}
void func_0015DCC8(s32 arg0) {
    D_00411158 = arg0;
}
typedef int (*CvFsFn_x0015DCD8)();
typedef struct {
    CvFsFn_x0015DCD8 exec_server;
    CvFsFn_x0015DCD8 entry_err_func;
    CvFsFn_x0015DCD8 get_file_size;
    CvFsFn_x0015DCD8 get_free_size;
    CvFsFn_x0015DCD8 open;
    CvFsFn_x0015DCD8 close;
    CvFsFn_x0015DCD8 seek;
    CvFsFn_x0015DCD8 tell;
    CvFsFn_x0015DCD8 req_rd;
    CvFsFn_x0015DCD8 req_wr;
    CvFsFn_x0015DCD8 stop_tr;
    CvFsFn_x0015DCD8 get_stat;
    CvFsFn_x0015DCD8 get_sct_len;
    CvFsFn_x0015DCD8 set_sct_len;
    CvFsFn_x0015DCD8 get_num_tr;
    CvFsFn_x0015DCD8 change_dir;
    CvFsFn_x0015DCD8 is_exist_file;
    CvFsFn_x0015DCD8 get_num_files;
    CvFsFn_x0015DCD8 load_dir_info;
    CvFsFn_x0015DCD8 get_max_byte_rate;
    CvFsFn_x0015DCD8 make_dir;
    CvFsFn_x0015DCD8 remove_dir;
    CvFsFn_x0015DCD8 delete_file;
    CvFsFn_x0015DCD8 get_file_size_ex;
    CvFsFn_x0015DCD8 opt_fn1;
    CvFsFn_x0015DCD8 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x0015DCD8;
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
} DtxObj_x0015DCD8;
typedef struct SjObj_x0015DCD8 SjObj_x0015DCD8;
typedef struct {
    char pad_00[12];
    void (*destroy)(SjObj_x0015DCD8 *sj);
    void *(*get_uuid)(SjObj_x0015DCD8 *sj);
    void (*reset)(SjObj_x0015DCD8 *sj);
    void (*getchunk)(SjObj_x0015DCD8 *sj, int id, int nbyte, void *ck);
    void (*ungetchunk)(SjObj_x0015DCD8 *sj, int id, void *ck);
    void (*putchunk)(SjObj_x0015DCD8 *sj, int id, void *ck);
    int (*getnum)(SjObj_x0015DCD8 *sj, int id);
    int (*is_get_chunk)(SjObj_x0015DCD8 *sj, int id, int nbyte, int *rbyte);
    void (*set_error_cb)(SjObj_x0015DCD8 *sj, void *fn, void *obj);
} SjIf_x0015DCD8;
struct SjObj_x0015DCD8 {
    SjIf_x0015DCD8 *vtbl;
};
typedef struct {
    signed char used;
    char pad_01[3];
    void *sjrmt;
    SjObj_x0015DCD8 *sjuni;
    void *sjx;
    char *ckdata;
    int cklen;
} PsjObj_x0015DCD8;
typedef struct SjChunk_x0015DCD8 {
    char *data;
    int len;
} SjChunk_x0015DCD8;
typedef struct {
    signed char used;
    signed char stat;
    signed char busy;
    SjObj_x0015DCD8 *sjin;
    SjObj_x0015DCD8 *sjout;
    SjChunk_x0015DCD8 ckin;
    SjChunk_x0015DCD8 ckout;
    int dma_data;
    int dma_addr;
    int dma_size;
    int dma_mode;
    int sema;
    int unk_30;
    int unk_34;
    int unit;
    int xfer_total;
} DtrObj_x0015DCD8;
typedef struct {
    signed char used;
    int nch;
    PsjObj_x0015DCD8 *psj[2];
    DtrObj_x0015DCD8 *dtr[2];
    SjObj_x0015DCD8 *sj[2];
    void *id;
    signed char play;
    signed char play_sent;
    signed char nch_cur;
    signed char nch_sent;
    int sfreq;
    int sfreq_sent;
    int vol;
    int vol_sent;
    int outpan[2];
    int unk_40[2];
    signed char transfer_sw;
    signed char unk_49;
    int unk_4c;
    int bufsize;
} Ps2rnaObj_x0015DCD8;
typedef struct {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char nch;
    void *sjd;
    int fstm;
    int rna;
    SjObj_x0015DCD8 *sjf;
    SjObj_x0015DCD8 *sji;
    SjObj_x0015DCD8 *sjo[2];
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
    SjObj_x0015DCD8 *sjx[2];
    SjObj_x0015DCD8 *sjy[2];
    int time_ofst;
    int unk_8c;
    int unk_90;
    void *stm;
    signed char unk_98;
    char pad_99[3];
    int vsync_time;
    int vsync_base;
} AdxtObj_x0015DCD8;
struct SjObj_x0015DCD8;
int printf_x0015DCD8(const char *fmt, ...) __asm__("scePrintf");
struct SjObj_x0015DCD8;
struct SjObj_x0015DCD8;
struct SjObj_x0015DCD8;
struct SjObj_x0015DCD8;
extern void cvFsAddDev_x0015DCD8(char *name, CvFsDevIf_x0015DCD8 *(*getif)(void)) __asm__("cvFsAddDev");
struct SjObj_x0015DCD8;
struct SjObj_x0015DCD8;
struct SjObj_x0015DCD8 *ps2rna_get_sjuni_x0015DCD8(Ps2rnaObj_x0015DCD8 *rna, int ch) __asm__("func_0016D9F8");
void *ps2rna_get_sjrmt_x0015DCD8(Ps2rnaObj_x0015DCD8 *rna, int ch) __asm__("func_0016DA38");
struct SjChunk_x0015DCD8;
struct SjChunk_x0015DCD8;
int sjrmt_get_num_data_x0015DCD8(void *sj, int id) __asm__("func_0016F640");
struct SjChunk_x0015DCD8;
struct SjObj_x0015DCD8;
extern void dtx_set_send_cb_x0015DCD8(DtxObj_x0015DCD8 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_send_cb");
extern void dtx_set_recv_cb_x0015DCD8(DtxObj_x0015DCD8 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_recv_cb");
extern char ext_str0_x0015DCD8[] __asm__("D_00461850");
extern char ext_str1_x0015DCD8[] __asm__("D_00461830");
extern char ext_str2_x0015DCD8[] __asm__("D_00461810");
void func_0015DCD8_x0015DCD8(AdxtObj_x0015DCD8 *adxt) __asm__("func_0015DCD8");
/* adxt_debug_print: from https://github.com/new-coke/rez-decomp (src/cri/adxt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0015DCD8_x0015DCD8(AdxtObj_x0015DCD8 *adxt)
{
    void *rna;
    void *iop;
    SjObj_x0015DCD8 *sj;
    int ntmp0;
    int ntmp2;
    int niop0;
    int niop2;
    rna = (void *)adxt->rna;
    iop = ps2rna_get_sjrmt_x0015DCD8(rna, 0);
    sj = ps2rna_get_sjuni_x0015DCD8(rna, 0);
    ntmp0 = sj->vtbl->getnum(sj, 1);
    ntmp2 = sj->vtbl->getnum(sj, 0);
    niop0 = sjrmt_get_num_data_x0015DCD8(iop, 1);
    niop2 = sjrmt_get_num_data_x0015DCD8(iop, 0);
    printf_x0015DCD8(ext_str2_x0015DCD8, ntmp0, ntmp2, ntmp0 + ntmp2);
    printf_x0015DCD8(ext_str1_x0015DCD8, niop0, niop2, niop0 + niop2);
    printf_x0015DCD8(ext_str0_x0015DCD8, adxt->stat, ntmp0 + ntmp2 + niop0 + niop2);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_Create);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E0E8);
extern s32 (*D_0041116C_x0015E140)() __asm__("D_0041116C");
void func_0015E140_x0015E140(void) __asm__("func_0015E140");
void func_0015E140_x0015E140(void) {
    if (D_0041116C_x0015E140 != NULL) {
        D_0041116C_x0015E140();
    }
}
extern s32 (*D_00411170_x0015E168)() __asm__("D_00411170");
void func_0015E168_x0015E168(void) __asm__("func_0015E168");
void func_0015E168_x0015E168(void) {
    if (D_00411170_x0015E168 != NULL) {
        D_00411170_x0015E168();
    }
}
extern s32 (*D_00411178_x0015E190)() __asm__("D_00411178");
void func_0015E190_x0015E190(void) __asm__("func_0015E190");
void func_0015E190_x0015E190(void) {
    if (D_00411178_x0015E190 != NULL) {
        D_00411178_x0015E190();
    }
}
typedef unsigned int size_t_x0015E1B8;
typedef int s32_x0015E1B8;
typedef s32_x0015E1B8 ptrdiff_t_x0015E1B8;
typedef unsigned char Uint8_x0015E1B8;
typedef char Sint8_x0015E1B8;
typedef unsigned short Uint16_x0015E1B8;
typedef signed short Sint16_x0015E1B8;
typedef unsigned int Uint32_x0015E1B8;
typedef signed int Sint32_x0015E1B8;
typedef Sint32_x0015E1B8 Bool_x0015E1B8;
typedef char Char8_x0015E1B8;
typedef struct _UUID_x0015E1B8 {
    Uint32_x0015E1B8 Data1;
    Uint16_x0015E1B8 Data2;
    Uint16_x0015E1B8 Data3;
    Uint8_x0015E1B8 Data4[8];
} UUID_x0015E1B8;
typedef struct {
        Sint8_x0015E1B8 *data;
        Sint32_x0015E1B8 len;
} SJCK_x0015E1B8;
typedef struct {
        struct _sj_vtbl_x0015E1B8 *vtbl;
} SJ_OBJ_x0015E1B8;
typedef SJ_OBJ_x0015E1B8 *SJ_x0015E1B8;
typedef struct _sj_vtbl_x0015E1B8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015E1B8 sj);
        UUID_x0015E1B8 *(*GetUuid)(SJ_x0015E1B8 sj);
        void (*Reset)(SJ_x0015E1B8 sj);
        void (*GetChunk)(SJ_x0015E1B8 sj, Sint32_x0015E1B8 id, Sint32_x0015E1B8 nbyte, SJCK_x0015E1B8 *ck);
        void (*UngetChunk)(SJ_x0015E1B8 sj, Sint32_x0015E1B8 id, SJCK_x0015E1B8 *ck);
        void (*PutChunk)(SJ_x0015E1B8 sj, Sint32_x0015E1B8 id, SJCK_x0015E1B8 *ck);
        Sint32_x0015E1B8 (*GetNumData)(SJ_x0015E1B8 sj, Sint32_x0015E1B8 id);
        Sint32_x0015E1B8 (*IsGetChunk)(SJ_x0015E1B8 sj, Sint32_x0015E1B8 id, Sint32_x0015E1B8 nbyte, Sint32_x0015E1B8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015E1B8 sj,
                                        void (*func)(void *obj, Sint32_x0015E1B8 ecode), void *obj);
} SJ_IF_x0015E1B8;
extern int* sceCdCallback_x0015E1B8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015E1B8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015E1B8;
typedef struct {
               Sint16_x0015E1B8 unk0;
               Sint16_x0015E1B8 unk2;
               Sint16_x0015E1B8 unk4;
               Sint16_x0015E1B8 unk6;
} ADXPD_OBJ_SUB_x0015E1B8;
typedef struct {
               Sint32_x0015E1B8 used;
               Sint32_x0015E1B8 unk4;
               Sint32_x0015E1B8 mode;
               Sint32_x0015E1B8 stat;
               Sint32_x0015E1B8 num_blk;
               Sint32_x0015E1B8 unk14;
               Sint32_x0015E1B8 unk18;
               Sint32_x0015E1B8 unk1C;
               Sint32_x0015E1B8 unk20;
               Sint32_x0015E1B8 unk24;
               ADXPD_OBJ_SUB_x0015E1B8 unk28;
               Sint16_x0015E1B8 unk30;
               Sint16_x0015E1B8 unk32;
               Sint16_x0015E1B8 unk34;
               Sint16_x0015E1B8 unk36;
               Sint16_x0015E1B8 unk38;
               Sint16_x0015E1B8 unk3A;
} ADXPD_OBJ_x0015E1B8;
typedef ADXPD_OBJ_x0015E1B8* ADXPD_x0015E1B8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015E1B8;
typedef struct {
               Sint32_x0015E1B8 unk0;
               Sint32_x0015E1B8 unk4;
               Sint32_x0015E1B8 unk8;
               Sint32_x0015E1B8 unkC;
               Sint32_x0015E1B8 unk10;
               void* unk14;
               Sint32_x0015E1B8 unk18;
               Sint32_x0015E1B8 unk1C;
               Sint32_x0015E1B8 unk20;
               Sint32_x0015E1B8 unk24;
               Sint32_x0015E1B8 unk28;
} ADXB_UNK_x0015E1B8;
typedef struct {
               Sint16_x0015E1B8 unk0;
               Sint16_x0015E1B8 unk2;
               Sint32_x0015E1B8 stat;
               ADXPD_x0015E1B8 adxpd;
               Sint8_x0015E1B8 encoding_type;
               Sint8_x0015E1B8 sample_bitdepth;
               Sint8_x0015E1B8 channel_count;
               Sint8_x0015E1B8 block_size;
               Sint32_x0015E1B8 samples_per_block;
               Sint32_x0015E1B8 sample_rate;
               Sint32_x0015E1B8 total_samples;
               Sint16_x0015E1B8 unk1C;
               char pad1E[2];
               Sint32_x0015E1B8 unk20;
               Sint16_x0015E1B8 unk24;
               Sint16_x0015E1B8 unk26;
               Sint32_x0015E1B8 unk28;
               Sint32_x0015E1B8 unk2C;
               Sint32_x0015E1B8 unk30;
               Sint32_x0015E1B8 unk34;
               Sint32_x0015E1B8 unk38;
               void* unk3C;
               Sint32_x0015E1B8 unk40;
               Sint32_x0015E1B8 unk44;
               ADXB_UNK_x0015E1B8 unk48;
               Sint32_x0015E1B8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015E1B8*, Sint32_x0015E1B8*, Sint32_x0015E1B8*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015E1B8, Sint32_x0015E1B8);
               Sint32_x0015E1B8 unk84;
               Sint32_x0015E1B8 unk88;
               Sint32_x0015E1B8 unk8C;
               Sint32_x0015E1B8 dec_num_sample;
               Sint32_x0015E1B8 dec_data_len;
               Sint16_x0015E1B8 format;
               Sint16_x0015E1B8 unk9A;
               Sint16_x0015E1B8 unk9C;
               Sint16_x0015E1B8 unk9E;
               Sint16_x0015E1B8 unkA0;
               char padA2[0xE];
               Sint32_x0015E1B8 unkB0;
               Sint32_x0015E1B8 ahx_dec_samples;
               Sint32_x0015E1B8 ahx_dec_frames;
               Sint32_x0015E1B8 unkBC;
               Sint32_x0015E1B8 ac3_dec_samples;
               Sint32_x0015E1B8 ac3_dec_frames;
               Sint32_x0015E1B8 unkC8;
               ADX_UNK_x0015E1B8 unkCC;
               Sint16_x0015E1B8 unkDC;
               Sint16_x0015E1B8 unkDE[2];
               char padE2[2];
               Sint32_x0015E1B8 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015E1B8;
typedef ADXB_OBJ_x0015E1B8* ADXB_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 used;
    Sint8_x0015E1B8 state;
    Sint8_x0015E1B8 maxnch;
    Sint8_x0015E1B8 unk3;
    ADXB_x0015E1B8 adxb;
    SJ_x0015E1B8 sji;
    SJ_x0015E1B8 sjo[2];
    SJCK_x0015E1B8 unk14;
    SJCK_x0015E1B8 chunks[2];
    Sint32_x0015E1B8 unk2C;
    Sint32_x0015E1B8 unk30;
    Sint32_x0015E1B8 unk34;
    Sint32_x0015E1B8 unk38;
    Sint32_x0015E1B8 trap_num_samples;
    Sint32_x0015E1B8 trap_count;
    Sint32_x0015E1B8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015E1B8, Sint8_x0015E1B8*, Sint32_x0015E1B8);
    void* flt_obj;
    Sint8_x0015E1B8 unk58[0x40];
    Sint32_x0015E1B8 unk98;
    Sint32_x0015E1B8 lnkflg;
} ADXSJD_OBJ_x0015E1B8;
typedef ADXSJD_OBJ_x0015E1B8* ADXSJD_x0015E1B8;
typedef struct {
               Char8_x0015E1B8 pad0[1];
               Sint8_x0015E1B8 unk1;
               Sint8_x0015E1B8 unk2;
               Char8_x0015E1B8 pad3[1];
               SJ_x0015E1B8 unk4[1];
               Char8_x0015E1B8 pad8[4];
               SJ_x0015E1B8 unkC[1];
               Char8_x0015E1B8 pad10[4];
               Sint32_x0015E1B8 unk14[6];
               Sint32_x0015E1B8 unk2C;
} ADXAMP_OBJ_x0015E1B8;
typedef ADXAMP_OBJ_x0015E1B8* ADXAMP_x0015E1B8;
typedef struct {
    Sint32_x0015E1B8 unk0;
    SJ_x0015E1B8 sj;
} SJX_UNK_0_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 used;
    Sint8_x0015E1B8 unk1;
    Sint16_x0015E1B8 unk2;
    SJ_x0015E1B8 sj;
    void* unk8;
    Sint32_x0015E1B8 unkC;
    SJX_UNK_0_x0015E1B8* unk10;
} SJX_OBJ_x0015E1B8;
typedef SJX_OBJ_x0015E1B8* SJX_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 used;
    char pad1[3];
    void* unk4;
    SJ_x0015E1B8 unk8;
    SJX_x0015E1B8 unkC;
    SJCK_x0015E1B8 chunk;
} PS2PSJ_OBJ_x0015E1B8;
typedef PS2PSJ_OBJ_x0015E1B8* PS2PSJ_x0015E1B8;
typedef struct {
               Sint8_x0015E1B8 unk0;
               Sint8_x0015E1B8 unk1;
               Sint8_x0015E1B8 unk2;
               SJ_x0015E1B8 unk4;
               SJ_x0015E1B8 unk8;
               SJCK_x0015E1B8 unkC;
               SJCK_x0015E1B8 unk14;
               sceSifDmaData_x0015E1B8 dma_data;
               Sint32_x0015E1B8 unk2C;
               Sint32_x0015E1B8 unk30;
               Sint32_x0015E1B8 unk34;
               Sint32_x0015E1B8 unk38;
               Sint32_x0015E1B8 unk3C;
} DTR_OBJ_x0015E1B8;
typedef DTR_OBJ_x0015E1B8* DTR_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 used;
    Sint32_x0015E1B8 maxnch;
    PS2PSJ_x0015E1B8 psj[2];
    DTR_x0015E1B8 dtr[2];
    SJ_x0015E1B8 sjo[2];
    void* unk20;
    Sint32_x0015E1B8 unk24;
    Sint32_x0015E1B8 unk28;
    Sint32_x0015E1B8 unk2C;
    Sint8_x0015E1B8 unk30;
    Sint8_x0015E1B8 unk31;
    Sint8_x0015E1B8 num_chan;
    Sint8_x0015E1B8 unk33;
    Sint32_x0015E1B8 sfreq;
    Sint32_x0015E1B8 unk38;
    Sint32_x0015E1B8 out_vol;
    Sint32_x0015E1B8 unk40;
    Sint32_x0015E1B8 pan[2];
    Sint32_x0015E1B8 unk4C[2];
    Sint32_x0015E1B8 unk54;
    Sint32_x0015E1B8 unk58;
    Sint8_x0015E1B8 unk5C;
    Sint8_x0015E1B8 unk5D;
    Sint8_x0015E1B8 unk5E;
    Sint8_x0015E1B8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015E1B8;
typedef ADXRNA_OBJ_x0015E1B8* ADXRNA_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 unk0;
    Sint8_x0015E1B8 stat;
    Sint8_x0015E1B8 read_flg;
    Sint8_x0015E1B8 unk3;
    SJ_x0015E1B8 sj;
    void* cvfs;
    Sint32_x0015E1B8 unkC;
    Sint32_x0015E1B8 file_len;
    Sint32_x0015E1B8 file_sct;
    Sint32_x0015E1B8 unk18;
    Sint32_x0015E1B8 unk1C;
    Sint32_x0015E1B8 unk20;
    SJCK_x0015E1B8 unk24;
    Sint32_x0015E1B8 req_rd_size;
    Sint32_x0015E1B8 eos;
    Uint32_x0015E1B8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015E1B8 unk40;
    Sint8_x0015E1B8 pause;
    Sint8_x0015E1B8 unk45;
    Sint8_x0015E1B8 unk46;
    Sint8_x0015E1B8 unk47;
    Sint8_x0015E1B8 unk48;
    Sint8_x0015E1B8 unk49;
    char pad4A[6];
    const Char8_x0015E1B8* fname;
    void* dir;
    Sint32_x0015E1B8 cur_ofst;
    Uint32_x0015E1B8 unk5C;
} ADXSTM_OBJ_x0015E1B8;
typedef ADXSTM_OBJ_x0015E1B8* ADXSTM_x0015E1B8;
typedef struct {
    Sint32_x0015E1B8 id;
    const Char8_x0015E1B8* fname;
    Sint32_x0015E1B8 unk8;
    void* dir;
    Sint32_x0015E1B8 unk10;
    Sint32_x0015E1B8 unk14;
    Sint32_x0015E1B8 stat;
    Sint32_x0015E1B8 rd_sct;
} LSC_STM_x0015E1B8;
typedef struct {
    Sint8_x0015E1B8 used;
    Sint8_x0015E1B8 stat;
    Sint8_x0015E1B8 unk2;
    Sint8_x0015E1B8 lp_flg;
    Sint8_x0015E1B8 unk4;
    SJ_x0015E1B8 sj;
    Sint32_x0015E1B8 unkC;
    Sint32_x0015E1B8 unk10;
    Sint32_x0015E1B8 flow_limit;
    Sint32_x0015E1B8 unk18;
    Sint32_x0015E1B8 last_stm_index;
    Sint32_x0015E1B8 unk20;
    Sint32_x0015E1B8 num_stm;
    ADXSTM_x0015E1B8 stm_hndl;
    Sint32_x0015E1B8 unk2C;
    char pad30[4];
    Sint32_x0015E1B8 unk34;
    LSC_STM_x0015E1B8 stm[16];
} LSC_OBJ_x0015E1B8;
typedef LSC_OBJ_x0015E1B8* LSC_x0015E1B8;
void ADXAMP_Destroy_x0015E1B8(ADXAMP_x0015E1B8 amp) __asm__("func_0014E700");
void ADXCRS_Lock_x0015E1B8() __asm__("func_00152508");
void ADXCRS_Unlock_x0015E1B8() __asm__("func_00152520");
void ADXERR_CallErrFunc1_x0015E1B8(Sint8_x0015E1B8*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x0015E1B8 {
                   Sint8_x0015E1B8 used;
                   Sint8_x0015E1B8 stat;
                   Sint8_x0015E1B8 pmode;
                   Sint8_x0015E1B8 maxnch;
                   ADXSJD_x0015E1B8 sjd;
                   ADXSTM_x0015E1B8 stm;
                   ADXRNA_x0015E1B8 rna;
                   SJ_x0015E1B8 sjf;
                   SJ_x0015E1B8 sji;
                   SJ_x0015E1B8 sjo[(2)];
                   Sint8_x0015E1B8 *ibuf;
                   Sint32_x0015E1B8 ibuflen;
                   Sint32_x0015E1B8 ibufxlen;
                   Sint16_x0015E1B8 *obuf;
                   Sint32_x0015E1B8 obufsize;
                   Sint32_x0015E1B8 obufdist;
                   Sint32_x0015E1B8 svrfreq;
                   Sint16_x0015E1B8 maxsct;
                   Sint16_x0015E1B8 minsct;
                   Sint16_x0015E1B8 outvol;
                   Sint16_x0015E1B8 outpan[(2)];
                   Sint16_x0015E1B8 unk46;
                   Sint32_x0015E1B8 maxdecsmpl;
                   Sint32_x0015E1B8 lpcnt;
                   Sint32_x0015E1B8 lp_skiplen;
                   Sint32_x0015E1B8 trp;
                   Sint32_x0015E1B8 wpos;
                   Sint32_x0015E1B8 mofst;
                   Sint16_x0015E1B8 ercode;
                   Sint32_x0015E1B8 edecpos;
                   Sint16_x0015E1B8 edeccnt;
                   Sint16_x0015E1B8 eshrtcnt;
                   Sint8_x0015E1B8 lpflg;
                   Sint8_x0015E1B8 autorcvr;
                   Sint8_x0015E1B8 fltmode;
                   Sint8_x0015E1B8 execflag;
                   Sint8_x0015E1B8 pstwait_flag;
                   Sint8_x0015E1B8 pstready_flag;
                   Sint8_x0015E1B8 pause_flag;
                   void *amp;
                   SJ_x0015E1B8 ampsji[(2)];
                   SJ_x0015E1B8 ampsjo[(2)];
                   Sint32_x0015E1B8 time_ofst;
                   Sint32_x0015E1B8 lesct;
                   Sint32_x0015E1B8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015E1B8 lnkflg;
                   Sint8_x0015E1B8 rsv;
                   Sint16_x0015E1B8 rsv2;
                   Uint32_x0015E1B8 tvofst;
                   Uint32_x0015E1B8 svcnt;
                   Uint32_x0015E1B8 decofst;
                   Sint32_x0015E1B8 flush_nsmpl;
                   Sint8_x0015E1B8 unkAC;
                   Sint8_x0015E1B8 padAD[1];
               Char8_x0015E1B8* unkB0;
               Sint32_x0015E1B8 padB4;
               Sint32_x0015E1B8 padB8;
               Sint32_x0015E1B8 padBC;
               Sint32_x0015E1B8 padC0;
} ADX_TALK_x0015E1B8;
typedef ADX_TALK_x0015E1B8 *ADXT_x0015E1B8;
void ADXT_Stop_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x0015E1B8(void (*func)(void *obj, Sint8_x0015E1B8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015E1B8(ADXT_x0015E1B8 adxt,
                void (*f)(void *obj, Sint32_x0015E1B8 ch, void *data, Sint32_x0015E1B8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015E1B8(Bool_x0015E1B8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015E1B8(Bool_x0015E1B8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015E1B8(void (*fn)(void *obj, Char8_x0015E1B8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015E1B8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXRNA_Destroy_x0015E1B8(ADXRNA_x0015E1B8 rna) __asm__("func_00158818");
extern void ADXRNA_EntryErrFunc_x0015E1B8(void (*)(void*, Char8_x0015E1B8*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXSJD_Destroy_x0015E1B8(ADXSJD_x0015E1B8 sjd) __asm__("func_00158D38");
extern void ADXSJD_EntryTrapFunc_x0015E1B8(ADXSJD_x0015E1B8 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void ADXSTM_Destroy_x0015E1B8(ADXSTM_x0015E1B8 stm) __asm__("func_0015CB30");
extern void ADXSTM_EntryEosFunc_x0015E1B8(ADXSTM_x0015E1B8 stm, void (*func)(void*), void* context) __asm__("func_0015CE88");
void LSC_Destroy_x0015E1B8(LSC_x0015E1B8 lsc) __asm__("func_00169980");
void* memset_x0015E1B8(void* s, int c, size_t_x0015E1B8 n) __asm__("memset");
extern void (*ahxdetachfunc_x0015E1B8)(ADXT_x0015E1B8) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015E1B8)(ADXT_x0015E1B8) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015E1B8)(ADXT_x0015E1B8) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015E1B8)(ADXT_x0015E1B8) __asm__("pl2detachfunc");
void adxt_detach_ahx_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("func_0015E140");
void adxt_detach_ac3_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("func_0015E168");
void adxt_detach_pl2_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("func_0015E190");
void ADXT_Stop_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("ADXT_Stop");
extern char ext_str0_x0015E1B8[] __asm__("D_004618C0");
void ADXT_Destroy_x0015E1B8(ADXT_x0015E1B8 adxt) __asm__("ADXT_Destroy");
/* ADXT_Destroy_x0015E1B8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_Destroy_x0015E1B8(ADXT_x0015E1B8 adxt) {
    Sint32_x0015E1B8 i;
    ADXRNA_x0015E1B8 rna;
    ADXSJD_x0015E1B8 sjd;
    ADXSTM_x0015E1B8 stm;
    LSC_x0015E1B8 lsc;
    SJ_x0015E1B8 sjf;
    void* amp;
    SJ_x0015E1B8 sj;
    SJ_x0015E1B8 ampsj;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015E1B8(ext_str0_x0015E1B8);
        return;
    }
    adxt_detach_ahx_x0015E1B8(adxt);
    adxt_detach_ac3_x0015E1B8(adxt);
    adxt_detach_pl2_x0015E1B8(adxt);
    if (adxt->used == 1) {
        ADXT_Stop_x0015E1B8(adxt);
    }
    rna = adxt->rna;
    if (rna != 0) {
        adxt->rna = 0;
        ADXRNA_Destroy_x0015E1B8(rna);
    }
    sjd = adxt->sjd;
    if (sjd != 0) {
        adxt->sjd = 0;
        ADXSJD_Destroy_x0015E1B8(sjd);
    }
    stm = adxt->stm;
    if (stm != 0) {
        adxt->stm = 0;
        ADXSTM_EntryEosFunc_x0015E1B8(stm, 0, 0);
        ADXSTM_Destroy_x0015E1B8(stm);
    }
    lsc = adxt->lsc;
    if (lsc != 0) {
        adxt->lsc = 0;
        LSC_Destroy_x0015E1B8(lsc);
    }
    ADXCRS_Lock_x0015E1B8();
    sjf = adxt->sjf;
    if (sjf != 0) {
        adxt->sjf = 0;
        (*(sjf)->vtbl->Destroy)(sjf);
    }
    for (i = 0; i < adxt->maxnch; i++) {
        sj = adxt->sjo[i];
        if (sj != 0) {
            adxt->sjo[i] = 0;
            (*(sj)->vtbl->Destroy)(sj);
        }
        ampsj = adxt->ampsji[i];
        if (ampsj != 0) {
            adxt->ampsji[i] = 0;
            (*(ampsj)->vtbl->Destroy)(ampsj);
        }
        ampsj = adxt->ampsjo[i];
        if (ampsj != 0) {
            adxt->ampsjo[i] = 0;
            (*(ampsj)->vtbl->Destroy)(ampsj);
        }
    }
    amp = adxt->amp;
    if (amp != 0) {
        adxt->amp = 0;
        ADXAMP_Destroy_x0015E1B8(amp);
    }
    memset_x0015E1B8(adxt, 0, sizeof(ADX_TALK_x0015E1B8));
    adxt->used = 0;
    ADXCRS_Unlock_x0015E1B8();
}
void func_0015E390(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00404C18;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            ADXT_Destroy(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0xC4;
    } while (var_s1 >= 0);
}
void func_0015E3F0(void) {
    func_0015E390();
}
typedef int s32_x0015E408;
typedef s32_x0015E408 ptrdiff_t_x0015E408;
typedef unsigned char Uint8_x0015E408;
typedef char Sint8_x0015E408;
typedef unsigned short Uint16_x0015E408;
typedef signed short Sint16_x0015E408;
typedef unsigned int Uint32_x0015E408;
typedef signed int Sint32_x0015E408;
typedef Sint32_x0015E408 Bool_x0015E408;
typedef char Char8_x0015E408;
typedef struct _UUID_x0015E408 {
    Uint32_x0015E408 Data1;
    Uint16_x0015E408 Data2;
    Uint16_x0015E408 Data3;
    Uint8_x0015E408 Data4[8];
} UUID_x0015E408;
typedef struct {
        Sint8_x0015E408 *data;
        Sint32_x0015E408 len;
} SJCK_x0015E408;
typedef struct {
        struct _sj_vtbl_x0015E408 *vtbl;
} SJ_OBJ_x0015E408;
typedef SJ_OBJ_x0015E408 *SJ_x0015E408;
typedef struct _sj_vtbl_x0015E408 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015E408 sj);
        UUID_x0015E408 *(*GetUuid)(SJ_x0015E408 sj);
        void (*Reset)(SJ_x0015E408 sj);
        void (*GetChunk)(SJ_x0015E408 sj, Sint32_x0015E408 id, Sint32_x0015E408 nbyte, SJCK_x0015E408 *ck);
        void (*UngetChunk)(SJ_x0015E408 sj, Sint32_x0015E408 id, SJCK_x0015E408 *ck);
        void (*PutChunk)(SJ_x0015E408 sj, Sint32_x0015E408 id, SJCK_x0015E408 *ck);
        Sint32_x0015E408 (*GetNumData)(SJ_x0015E408 sj, Sint32_x0015E408 id);
        Sint32_x0015E408 (*IsGetChunk)(SJ_x0015E408 sj, Sint32_x0015E408 id, Sint32_x0015E408 nbyte, Sint32_x0015E408 *rbyte);
        void (*EntryErrFunc)(SJ_x0015E408 sj,
                                        void (*func)(void *obj, Sint32_x0015E408 ecode), void *obj);
} SJ_IF_x0015E408;
extern int* sceCdCallback_x0015E408(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015E408(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015E408;
typedef struct {
               Sint16_x0015E408 unk0;
               Sint16_x0015E408 unk2;
               Sint16_x0015E408 unk4;
               Sint16_x0015E408 unk6;
} ADXPD_OBJ_SUB_x0015E408;
typedef struct {
               Sint32_x0015E408 used;
               Sint32_x0015E408 unk4;
               Sint32_x0015E408 mode;
               Sint32_x0015E408 stat;
               Sint32_x0015E408 num_blk;
               Sint32_x0015E408 unk14;
               Sint32_x0015E408 unk18;
               Sint32_x0015E408 unk1C;
               Sint32_x0015E408 unk20;
               Sint32_x0015E408 unk24;
               ADXPD_OBJ_SUB_x0015E408 unk28;
               Sint16_x0015E408 unk30;
               Sint16_x0015E408 unk32;
               Sint16_x0015E408 unk34;
               Sint16_x0015E408 unk36;
               Sint16_x0015E408 unk38;
               Sint16_x0015E408 unk3A;
} ADXPD_OBJ_x0015E408;
typedef ADXPD_OBJ_x0015E408* ADXPD_x0015E408;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015E408;
typedef struct {
               Sint32_x0015E408 unk0;
               Sint32_x0015E408 unk4;
               Sint32_x0015E408 unk8;
               Sint32_x0015E408 unkC;
               Sint32_x0015E408 unk10;
               void* unk14;
               Sint32_x0015E408 unk18;
               Sint32_x0015E408 unk1C;
               Sint32_x0015E408 unk20;
               Sint32_x0015E408 unk24;
               Sint32_x0015E408 unk28;
} ADXB_UNK_x0015E408;
typedef struct {
               Sint16_x0015E408 unk0;
               Sint16_x0015E408 unk2;
               Sint32_x0015E408 stat;
               ADXPD_x0015E408 adxpd;
               Sint8_x0015E408 encoding_type;
               Sint8_x0015E408 sample_bitdepth;
               Sint8_x0015E408 channel_count;
               Sint8_x0015E408 block_size;
               Sint32_x0015E408 samples_per_block;
               Sint32_x0015E408 sample_rate;
               Sint32_x0015E408 total_samples;
               Sint16_x0015E408 unk1C;
               char pad1E[2];
               Sint32_x0015E408 unk20;
               Sint16_x0015E408 unk24;
               Sint16_x0015E408 unk26;
               Sint32_x0015E408 unk28;
               Sint32_x0015E408 unk2C;
               Sint32_x0015E408 unk30;
               Sint32_x0015E408 unk34;
               Sint32_x0015E408 unk38;
               void* unk3C;
               Sint32_x0015E408 unk40;
               Sint32_x0015E408 unk44;
               ADXB_UNK_x0015E408 unk48;
               Sint32_x0015E408 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015E408*, Sint32_x0015E408*, Sint32_x0015E408*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015E408, Sint32_x0015E408);
               Sint32_x0015E408 unk84;
               Sint32_x0015E408 unk88;
               Sint32_x0015E408 unk8C;
               Sint32_x0015E408 dec_num_sample;
               Sint32_x0015E408 dec_data_len;
               Sint16_x0015E408 format;
               Sint16_x0015E408 unk9A;
               Sint16_x0015E408 unk9C;
               Sint16_x0015E408 unk9E;
               Sint16_x0015E408 unkA0;
               char padA2[0xE];
               Sint32_x0015E408 unkB0;
               Sint32_x0015E408 ahx_dec_samples;
               Sint32_x0015E408 ahx_dec_frames;
               Sint32_x0015E408 unkBC;
               Sint32_x0015E408 ac3_dec_samples;
               Sint32_x0015E408 ac3_dec_frames;
               Sint32_x0015E408 unkC8;
               ADX_UNK_x0015E408 unkCC;
               Sint16_x0015E408 unkDC;
               Sint16_x0015E408 unkDE[2];
               char padE2[2];
               Sint32_x0015E408 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015E408;
typedef ADXB_OBJ_x0015E408* ADXB_x0015E408;
typedef struct {
    Sint8_x0015E408 used;
    Sint8_x0015E408 state;
    Sint8_x0015E408 maxnch;
    Sint8_x0015E408 unk3;
    ADXB_x0015E408 adxb;
    SJ_x0015E408 sji;
    SJ_x0015E408 sjo[2];
    SJCK_x0015E408 unk14;
    SJCK_x0015E408 chunks[2];
    Sint32_x0015E408 unk2C;
    Sint32_x0015E408 unk30;
    Sint32_x0015E408 unk34;
    Sint32_x0015E408 unk38;
    Sint32_x0015E408 trap_num_samples;
    Sint32_x0015E408 trap_count;
    Sint32_x0015E408 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015E408, Sint8_x0015E408*, Sint32_x0015E408);
    void* flt_obj;
    Sint8_x0015E408 unk58[0x40];
    Sint32_x0015E408 unk98;
    Sint32_x0015E408 lnkflg;
} ADXSJD_OBJ_x0015E408;
typedef ADXSJD_OBJ_x0015E408* ADXSJD_x0015E408;
typedef struct {
               Char8_x0015E408 pad0[1];
               Sint8_x0015E408 unk1;
               Sint8_x0015E408 unk2;
               Char8_x0015E408 pad3[1];
               SJ_x0015E408 unk4[1];
               Char8_x0015E408 pad8[4];
               SJ_x0015E408 unkC[1];
               Char8_x0015E408 pad10[4];
               Sint32_x0015E408 unk14[6];
               Sint32_x0015E408 unk2C;
} ADXAMP_OBJ_x0015E408;
typedef ADXAMP_OBJ_x0015E408* ADXAMP_x0015E408;
typedef struct {
    Sint32_x0015E408 unk0;
    SJ_x0015E408 sj;
} SJX_UNK_0_x0015E408;
typedef struct {
    Sint8_x0015E408 used;
    Sint8_x0015E408 unk1;
    Sint16_x0015E408 unk2;
    SJ_x0015E408 sj;
    void* unk8;
    Sint32_x0015E408 unkC;
    SJX_UNK_0_x0015E408* unk10;
} SJX_OBJ_x0015E408;
typedef SJX_OBJ_x0015E408* SJX_x0015E408;
typedef struct {
    Sint8_x0015E408 used;
    char pad1[3];
    void* unk4;
    SJ_x0015E408 unk8;
    SJX_x0015E408 unkC;
    SJCK_x0015E408 chunk;
} PS2PSJ_OBJ_x0015E408;
typedef PS2PSJ_OBJ_x0015E408* PS2PSJ_x0015E408;
typedef struct {
               Sint8_x0015E408 unk0;
               Sint8_x0015E408 unk1;
               Sint8_x0015E408 unk2;
               SJ_x0015E408 unk4;
               SJ_x0015E408 unk8;
               SJCK_x0015E408 unkC;
               SJCK_x0015E408 unk14;
               sceSifDmaData_x0015E408 dma_data;
               Sint32_x0015E408 unk2C;
               Sint32_x0015E408 unk30;
               Sint32_x0015E408 unk34;
               Sint32_x0015E408 unk38;
               Sint32_x0015E408 unk3C;
} DTR_OBJ_x0015E408;
typedef DTR_OBJ_x0015E408* DTR_x0015E408;
typedef struct {
    Sint8_x0015E408 used;
    Sint32_x0015E408 maxnch;
    PS2PSJ_x0015E408 psj[2];
    DTR_x0015E408 dtr[2];
    SJ_x0015E408 sjo[2];
    void* unk20;
    Sint32_x0015E408 unk24;
    Sint32_x0015E408 unk28;
    Sint32_x0015E408 unk2C;
    Sint8_x0015E408 unk30;
    Sint8_x0015E408 unk31;
    Sint8_x0015E408 num_chan;
    Sint8_x0015E408 unk33;
    Sint32_x0015E408 sfreq;
    Sint32_x0015E408 unk38;
    Sint32_x0015E408 out_vol;
    Sint32_x0015E408 unk40;
    Sint32_x0015E408 pan[2];
    Sint32_x0015E408 unk4C[2];
    Sint32_x0015E408 unk54;
    Sint32_x0015E408 unk58;
    Sint8_x0015E408 unk5C;
    Sint8_x0015E408 unk5D;
    Sint8_x0015E408 unk5E;
    Sint8_x0015E408 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015E408;
typedef ADXRNA_OBJ_x0015E408* ADXRNA_x0015E408;
typedef struct {
    Sint8_x0015E408 unk0;
    Sint8_x0015E408 stat;
    Sint8_x0015E408 read_flg;
    Sint8_x0015E408 unk3;
    SJ_x0015E408 sj;
    void* cvfs;
    Sint32_x0015E408 unkC;
    Sint32_x0015E408 file_len;
    Sint32_x0015E408 file_sct;
    Sint32_x0015E408 unk18;
    Sint32_x0015E408 unk1C;
    Sint32_x0015E408 unk20;
    SJCK_x0015E408 unk24;
    Sint32_x0015E408 req_rd_size;
    Sint32_x0015E408 eos;
    Uint32_x0015E408 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015E408 unk40;
    Sint8_x0015E408 pause;
    Sint8_x0015E408 unk45;
    Sint8_x0015E408 unk46;
    Sint8_x0015E408 unk47;
    Sint8_x0015E408 unk48;
    Sint8_x0015E408 unk49;
    char pad4A[6];
    const Char8_x0015E408* fname;
    void* dir;
    Sint32_x0015E408 cur_ofst;
    Uint32_x0015E408 unk5C;
} ADXSTM_OBJ_x0015E408;
typedef ADXSTM_OBJ_x0015E408* ADXSTM_x0015E408;
void ADXAMP_Start_x0015E408(ADXAMP_x0015E408) __asm__("func_0014E758");
typedef struct _adx_talk_x0015E408 {
                   Sint8_x0015E408 used;
                   Sint8_x0015E408 stat;
                   Sint8_x0015E408 pmode;
                   Sint8_x0015E408 maxnch;
                   ADXSJD_x0015E408 sjd;
                   ADXSTM_x0015E408 stm;
                   ADXRNA_x0015E408 rna;
                   SJ_x0015E408 sjf;
                   SJ_x0015E408 sji;
                   SJ_x0015E408 sjo[(2)];
                   Sint8_x0015E408 *ibuf;
                   Sint32_x0015E408 ibuflen;
                   Sint32_x0015E408 ibufxlen;
                   Sint16_x0015E408 *obuf;
                   Sint32_x0015E408 obufsize;
                   Sint32_x0015E408 obufdist;
                   Sint32_x0015E408 svrfreq;
                   Sint16_x0015E408 maxsct;
                   Sint16_x0015E408 minsct;
                   Sint16_x0015E408 outvol;
                   Sint16_x0015E408 outpan[(2)];
                   Sint16_x0015E408 unk46;
                   Sint32_x0015E408 maxdecsmpl;
                   Sint32_x0015E408 lpcnt;
                   Sint32_x0015E408 lp_skiplen;
                   Sint32_x0015E408 trp;
                   Sint32_x0015E408 wpos;
                   Sint32_x0015E408 mofst;
                   Sint16_x0015E408 ercode;
                   Sint32_x0015E408 edecpos;
                   Sint16_x0015E408 edeccnt;
                   Sint16_x0015E408 eshrtcnt;
                   Sint8_x0015E408 lpflg;
                   Sint8_x0015E408 autorcvr;
                   Sint8_x0015E408 fltmode;
                   Sint8_x0015E408 execflag;
                   Sint8_x0015E408 pstwait_flag;
                   Sint8_x0015E408 pstready_flag;
                   Sint8_x0015E408 pause_flag;
                   void *amp;
                   SJ_x0015E408 ampsji[(2)];
                   SJ_x0015E408 ampsjo[(2)];
                   Sint32_x0015E408 time_ofst;
                   Sint32_x0015E408 lesct;
                   Sint32_x0015E408 trpnsmpl;
                   void *lsc;
                   Sint8_x0015E408 lnkflg;
                   Sint8_x0015E408 rsv;
                   Sint16_x0015E408 rsv2;
                   Uint32_x0015E408 tvofst;
                   Uint32_x0015E408 svcnt;
                   Uint32_x0015E408 decofst;
                   Sint32_x0015E408 flush_nsmpl;
                   Sint8_x0015E408 unkAC;
                   Sint8_x0015E408 padAD[1];
               Char8_x0015E408* unkB0;
               Sint32_x0015E408 padB4;
               Sint32_x0015E408 padB8;
               Sint32_x0015E408 padBC;
               Sint32_x0015E408 padC0;
} ADX_TALK_x0015E408;
typedef ADX_TALK_x0015E408 *ADXT_x0015E408;
extern void ADXT_EntryErrFunc_x0015E408(void (*func)(void *obj, Sint8_x0015E408 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015E408(ADXT_x0015E408 adxt,
                void (*f)(void *obj, Sint32_x0015E408 ch, void *data, Sint32_x0015E408 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015E408(Bool_x0015E408 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015E408(Bool_x0015E408 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015E408(void (*fn)(void *obj, Char8_x0015E408 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015E408(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015E408 adxt_vsync_cnt_x0015E408 __asm__("D_00404C14");
extern void ADXRNA_EntryErrFunc_x0015E408(void (*)(void*, Char8_x0015E408*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXSJD_Start_x0015E408(ADXSJD_x0015E408) __asm__("func_00158E60");
void ADXSJD_SetInSj_x0015E408(ADXSJD_x0015E408 sjd, SJ_x0015E408 sj) __asm__("func_00158DA0");
extern void ADXSJD_EntryTrapFunc_x0015E408(ADXSJD_x0015E408 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*ahxdetachfunc_x0015E408)(ADXT_x0015E408) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015E408)(ADXT_x0015E408) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015E408)(ADXT_x0015E408) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015E408)(ADXT_x0015E408) __asm__("pl2detachfunc");
void func_0015E408_x0015E408(ADXT_x0015E408 adxt, SJ_x0015E408 sj) __asm__("func_0015E408");
/* adxt_start_sj: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015E408_x0015E408(ADXT_x0015E408 adxt, SJ_x0015E408 sj) {
    Sint32_x0015E408 i;
    for (i = 0; i < adxt->maxnch; i++) {
        (*(adxt->sjo[i])->vtbl->Reset)(adxt->sjo[i]);
    }
    ADXSJD_SetInSj_x0015E408(adxt->sjd, sj);
    adxt->sji = sj;
    ADXSJD_Start_x0015E408(adxt->sjd);
    adxt->stat = (1);
    adxt->lesct = 0x7FFFFFFF;
    adxt->trpnsmpl = -1;
    adxt->lpcnt = 0;
    adxt->pstready_flag = 0;
    adxt->tvofst = 0;
    adxt->decofst = 0;
    adxt->svcnt = adxt_vsync_cnt_x0015E408;
    if (adxt->amp != 0) {
        ADXAMP_Start_x0015E408(adxt->amp);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E4F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_StartSj);
typedef int s32_x0015E650;
typedef s32_x0015E650 ptrdiff_t_x0015E650;
typedef unsigned char Uint8_x0015E650;
typedef char Sint8_x0015E650;
typedef unsigned short Uint16_x0015E650;
typedef signed short Sint16_x0015E650;
typedef unsigned int Uint32_x0015E650;
typedef signed int Sint32_x0015E650;
typedef Sint32_x0015E650 Bool_x0015E650;
typedef char Char8_x0015E650;
typedef struct _UUID_x0015E650 {
    Uint32_x0015E650 Data1;
    Uint16_x0015E650 Data2;
    Uint16_x0015E650 Data3;
    Uint8_x0015E650 Data4[8];
} UUID_x0015E650;
typedef struct {
        Sint8_x0015E650 *data;
        Sint32_x0015E650 len;
} SJCK_x0015E650;
typedef struct {
        struct _sj_vtbl_x0015E650 *vtbl;
} SJ_OBJ_x0015E650;
typedef SJ_OBJ_x0015E650 *SJ_x0015E650;
typedef struct _sj_vtbl_x0015E650 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015E650 sj);
        UUID_x0015E650 *(*GetUuid)(SJ_x0015E650 sj);
        void (*Reset)(SJ_x0015E650 sj);
        void (*GetChunk)(SJ_x0015E650 sj, Sint32_x0015E650 id, Sint32_x0015E650 nbyte, SJCK_x0015E650 *ck);
        void (*UngetChunk)(SJ_x0015E650 sj, Sint32_x0015E650 id, SJCK_x0015E650 *ck);
        void (*PutChunk)(SJ_x0015E650 sj, Sint32_x0015E650 id, SJCK_x0015E650 *ck);
        Sint32_x0015E650 (*GetNumData)(SJ_x0015E650 sj, Sint32_x0015E650 id);
        Sint32_x0015E650 (*IsGetChunk)(SJ_x0015E650 sj, Sint32_x0015E650 id, Sint32_x0015E650 nbyte, Sint32_x0015E650 *rbyte);
        void (*EntryErrFunc)(SJ_x0015E650 sj,
                                        void (*func)(void *obj, Sint32_x0015E650 ecode), void *obj);
} SJ_IF_x0015E650;
extern int* sceCdCallback_x0015E650(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015E650(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015E650;
typedef struct {
               Sint16_x0015E650 unk0;
               Sint16_x0015E650 unk2;
               Sint16_x0015E650 unk4;
               Sint16_x0015E650 unk6;
} ADXPD_OBJ_SUB_x0015E650;
typedef struct {
               Sint32_x0015E650 used;
               Sint32_x0015E650 unk4;
               Sint32_x0015E650 mode;
               Sint32_x0015E650 stat;
               Sint32_x0015E650 num_blk;
               Sint32_x0015E650 unk14;
               Sint32_x0015E650 unk18;
               Sint32_x0015E650 unk1C;
               Sint32_x0015E650 unk20;
               Sint32_x0015E650 unk24;
               ADXPD_OBJ_SUB_x0015E650 unk28;
               Sint16_x0015E650 unk30;
               Sint16_x0015E650 unk32;
               Sint16_x0015E650 unk34;
               Sint16_x0015E650 unk36;
               Sint16_x0015E650 unk38;
               Sint16_x0015E650 unk3A;
} ADXPD_OBJ_x0015E650;
typedef ADXPD_OBJ_x0015E650* ADXPD_x0015E650;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015E650;
typedef struct {
               Sint32_x0015E650 unk0;
               Sint32_x0015E650 unk4;
               Sint32_x0015E650 unk8;
               Sint32_x0015E650 unkC;
               Sint32_x0015E650 unk10;
               void* unk14;
               Sint32_x0015E650 unk18;
               Sint32_x0015E650 unk1C;
               Sint32_x0015E650 unk20;
               Sint32_x0015E650 unk24;
               Sint32_x0015E650 unk28;
} ADXB_UNK_x0015E650;
typedef struct {
               Sint16_x0015E650 unk0;
               Sint16_x0015E650 unk2;
               Sint32_x0015E650 stat;
               ADXPD_x0015E650 adxpd;
               Sint8_x0015E650 encoding_type;
               Sint8_x0015E650 sample_bitdepth;
               Sint8_x0015E650 channel_count;
               Sint8_x0015E650 block_size;
               Sint32_x0015E650 samples_per_block;
               Sint32_x0015E650 sample_rate;
               Sint32_x0015E650 total_samples;
               Sint16_x0015E650 unk1C;
               char pad1E[2];
               Sint32_x0015E650 unk20;
               Sint16_x0015E650 unk24;
               Sint16_x0015E650 unk26;
               Sint32_x0015E650 unk28;
               Sint32_x0015E650 unk2C;
               Sint32_x0015E650 unk30;
               Sint32_x0015E650 unk34;
               Sint32_x0015E650 unk38;
               void* unk3C;
               Sint32_x0015E650 unk40;
               Sint32_x0015E650 unk44;
               ADXB_UNK_x0015E650 unk48;
               Sint32_x0015E650 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015E650*, Sint32_x0015E650*, Sint32_x0015E650*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015E650, Sint32_x0015E650);
               Sint32_x0015E650 unk84;
               Sint32_x0015E650 unk88;
               Sint32_x0015E650 unk8C;
               Sint32_x0015E650 dec_num_sample;
               Sint32_x0015E650 dec_data_len;
               Sint16_x0015E650 format;
               Sint16_x0015E650 unk9A;
               Sint16_x0015E650 unk9C;
               Sint16_x0015E650 unk9E;
               Sint16_x0015E650 unkA0;
               char padA2[0xE];
               Sint32_x0015E650 unkB0;
               Sint32_x0015E650 ahx_dec_samples;
               Sint32_x0015E650 ahx_dec_frames;
               Sint32_x0015E650 unkBC;
               Sint32_x0015E650 ac3_dec_samples;
               Sint32_x0015E650 ac3_dec_frames;
               Sint32_x0015E650 unkC8;
               ADX_UNK_x0015E650 unkCC;
               Sint16_x0015E650 unkDC;
               Sint16_x0015E650 unkDE[2];
               char padE2[2];
               Sint32_x0015E650 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015E650;
typedef ADXB_OBJ_x0015E650* ADXB_x0015E650;
typedef struct {
    Sint8_x0015E650 used;
    Sint8_x0015E650 state;
    Sint8_x0015E650 maxnch;
    Sint8_x0015E650 unk3;
    ADXB_x0015E650 adxb;
    SJ_x0015E650 sji;
    SJ_x0015E650 sjo[2];
    SJCK_x0015E650 unk14;
    SJCK_x0015E650 chunks[2];
    Sint32_x0015E650 unk2C;
    Sint32_x0015E650 unk30;
    Sint32_x0015E650 unk34;
    Sint32_x0015E650 unk38;
    Sint32_x0015E650 trap_num_samples;
    Sint32_x0015E650 trap_count;
    Sint32_x0015E650 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015E650, Sint8_x0015E650*, Sint32_x0015E650);
    void* flt_obj;
    Sint8_x0015E650 unk58[0x40];
    Sint32_x0015E650 unk98;
    Sint32_x0015E650 lnkflg;
} ADXSJD_OBJ_x0015E650;
typedef ADXSJD_OBJ_x0015E650* ADXSJD_x0015E650;
typedef struct {
               Char8_x0015E650 pad0[1];
               Sint8_x0015E650 unk1;
               Sint8_x0015E650 unk2;
               Char8_x0015E650 pad3[1];
               SJ_x0015E650 unk4[1];
               Char8_x0015E650 pad8[4];
               SJ_x0015E650 unkC[1];
               Char8_x0015E650 pad10[4];
               Sint32_x0015E650 unk14[6];
               Sint32_x0015E650 unk2C;
} ADXAMP_OBJ_x0015E650;
typedef ADXAMP_OBJ_x0015E650* ADXAMP_x0015E650;
typedef struct {
    Sint32_x0015E650 unk0;
    SJ_x0015E650 sj;
} SJX_UNK_0_x0015E650;
typedef struct {
    Sint8_x0015E650 used;
    Sint8_x0015E650 unk1;
    Sint16_x0015E650 unk2;
    SJ_x0015E650 sj;
    void* unk8;
    Sint32_x0015E650 unkC;
    SJX_UNK_0_x0015E650* unk10;
} SJX_OBJ_x0015E650;
typedef SJX_OBJ_x0015E650* SJX_x0015E650;
typedef struct {
    Sint8_x0015E650 used;
    char pad1[3];
    void* unk4;
    SJ_x0015E650 unk8;
    SJX_x0015E650 unkC;
    SJCK_x0015E650 chunk;
} PS2PSJ_OBJ_x0015E650;
typedef PS2PSJ_OBJ_x0015E650* PS2PSJ_x0015E650;
typedef struct {
               Sint8_x0015E650 unk0;
               Sint8_x0015E650 unk1;
               Sint8_x0015E650 unk2;
               SJ_x0015E650 unk4;
               SJ_x0015E650 unk8;
               SJCK_x0015E650 unkC;
               SJCK_x0015E650 unk14;
               sceSifDmaData_x0015E650 dma_data;
               Sint32_x0015E650 unk2C;
               Sint32_x0015E650 unk30;
               Sint32_x0015E650 unk34;
               Sint32_x0015E650 unk38;
               Sint32_x0015E650 unk3C;
} DTR_OBJ_x0015E650;
typedef DTR_OBJ_x0015E650* DTR_x0015E650;
typedef struct {
    Sint8_x0015E650 used;
    Sint32_x0015E650 maxnch;
    PS2PSJ_x0015E650 psj[2];
    DTR_x0015E650 dtr[2];
    SJ_x0015E650 sjo[2];
    void* unk20;
    Sint32_x0015E650 unk24;
    Sint32_x0015E650 unk28;
    Sint32_x0015E650 unk2C;
    Sint8_x0015E650 unk30;
    Sint8_x0015E650 unk31;
    Sint8_x0015E650 num_chan;
    Sint8_x0015E650 unk33;
    Sint32_x0015E650 sfreq;
    Sint32_x0015E650 unk38;
    Sint32_x0015E650 out_vol;
    Sint32_x0015E650 unk40;
    Sint32_x0015E650 pan[2];
    Sint32_x0015E650 unk4C[2];
    Sint32_x0015E650 unk54;
    Sint32_x0015E650 unk58;
    Sint8_x0015E650 unk5C;
    Sint8_x0015E650 unk5D;
    Sint8_x0015E650 unk5E;
    Sint8_x0015E650 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015E650;
typedef ADXRNA_OBJ_x0015E650* ADXRNA_x0015E650;
typedef struct {
    Sint8_x0015E650 unk0;
    Sint8_x0015E650 stat;
    Sint8_x0015E650 read_flg;
    Sint8_x0015E650 unk3;
    SJ_x0015E650 sj;
    void* cvfs;
    Sint32_x0015E650 unkC;
    Sint32_x0015E650 file_len;
    Sint32_x0015E650 file_sct;
    Sint32_x0015E650 unk18;
    Sint32_x0015E650 unk1C;
    Sint32_x0015E650 unk20;
    SJCK_x0015E650 unk24;
    Sint32_x0015E650 req_rd_size;
    Sint32_x0015E650 eos;
    Uint32_x0015E650 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015E650 unk40;
    Sint8_x0015E650 pause;
    Sint8_x0015E650 unk45;
    Sint8_x0015E650 unk46;
    Sint8_x0015E650 unk47;
    Sint8_x0015E650 unk48;
    Sint8_x0015E650 unk49;
    char pad4A[6];
    const Char8_x0015E650* fname;
    void* dir;
    Sint32_x0015E650 cur_ofst;
    Uint32_x0015E650 unk5C;
} ADXSTM_OBJ_x0015E650;
typedef ADXSTM_OBJ_x0015E650* ADXSTM_x0015E650;
void ADXAMP_Stop_x0015E650(ADXAMP_x0015E650 amp) __asm__("func_0014E8F8");
void ADXCRS_Lock_x0015E650() __asm__("func_00152508");
void ADXCRS_Unlock_x0015E650() __asm__("func_00152520");
typedef struct _adx_talk_x0015E650 {
                   Sint8_x0015E650 used;
                   Sint8_x0015E650 stat;
                   Sint8_x0015E650 pmode;
                   Sint8_x0015E650 maxnch;
                   ADXSJD_x0015E650 sjd;
                   ADXSTM_x0015E650 stm;
                   ADXRNA_x0015E650 rna;
                   SJ_x0015E650 sjf;
                   SJ_x0015E650 sji;
                   SJ_x0015E650 sjo[(2)];
                   Sint8_x0015E650 *ibuf;
                   Sint32_x0015E650 ibuflen;
                   Sint32_x0015E650 ibufxlen;
                   Sint16_x0015E650 *obuf;
                   Sint32_x0015E650 obufsize;
                   Sint32_x0015E650 obufdist;
                   Sint32_x0015E650 svrfreq;
                   Sint16_x0015E650 maxsct;
                   Sint16_x0015E650 minsct;
                   Sint16_x0015E650 outvol;
                   Sint16_x0015E650 outpan[(2)];
                   Sint16_x0015E650 unk46;
                   Sint32_x0015E650 maxdecsmpl;
                   Sint32_x0015E650 lpcnt;
                   Sint32_x0015E650 lp_skiplen;
                   Sint32_x0015E650 trp;
                   Sint32_x0015E650 wpos;
                   Sint32_x0015E650 mofst;
                   Sint16_x0015E650 ercode;
                   Sint32_x0015E650 edecpos;
                   Sint16_x0015E650 edeccnt;
                   Sint16_x0015E650 eshrtcnt;
                   Sint8_x0015E650 lpflg;
                   Sint8_x0015E650 autorcvr;
                   Sint8_x0015E650 fltmode;
                   Sint8_x0015E650 execflag;
                   Sint8_x0015E650 pstwait_flag;
                   Sint8_x0015E650 pstready_flag;
                   Sint8_x0015E650 pause_flag;
                   void *amp;
                   SJ_x0015E650 ampsji[(2)];
                   SJ_x0015E650 ampsjo[(2)];
                   Sint32_x0015E650 time_ofst;
                   Sint32_x0015E650 lesct;
                   Sint32_x0015E650 trpnsmpl;
                   void *lsc;
                   Sint8_x0015E650 lnkflg;
                   Sint8_x0015E650 rsv;
                   Sint16_x0015E650 rsv2;
                   Uint32_x0015E650 tvofst;
                   Uint32_x0015E650 svcnt;
                   Uint32_x0015E650 decofst;
                   Sint32_x0015E650 flush_nsmpl;
                   Sint8_x0015E650 unkAC;
                   Sint8_x0015E650 padAD[1];
               Char8_x0015E650* unkB0;
               Sint32_x0015E650 padB4;
               Sint32_x0015E650 padB8;
               Sint32_x0015E650 padBC;
               Sint32_x0015E650 padC0;
} ADX_TALK_x0015E650;
typedef ADX_TALK_x0015E650 *ADXT_x0015E650;
extern void ADXT_EntryErrFunc_x0015E650(void (*func)(void *obj, Sint8_x0015E650 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015E650(ADXT_x0015E650 adxt,
                void (*f)(void *obj, Sint32_x0015E650 ch, void *data, Sint32_x0015E650 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015E650(Bool_x0015E650 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015E650(Bool_x0015E650 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015E650(void (*fn)(void *obj, Char8_x0015E650 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015E650(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern void ADXRNA_EntryErrFunc_x0015E650(void (*)(void*, Char8_x0015E650*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXRNA_SetPlaySw_x0015E650(ADXRNA_x0015E650, Sint32_x0015E650) __asm__("func_00158898");
void ADXRNA_SetTransSw_x0015E650(ADXRNA_x0015E650 rna, Sint32_x0015E650 sw) __asm__("func_00158880");
void ADXSJD_Stop_x0015E650(ADXSJD_x0015E650) __asm__("func_00158E90");
extern void ADXSJD_EntryTrapFunc_x0015E650(ADXSJD_x0015E650 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void PS2RNA_SetDiscardSw_x0015E650(ADXRNA_x0015E650 rna, Sint32_x0015E650 sw) __asm__("func_0016D068");
extern void (*ahxdetachfunc_x0015E650)(ADXT_x0015E650) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015E650)(ADXT_x0015E650) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015E650)(ADXT_x0015E650) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015E650)(ADXT_x0015E650) __asm__("pl2detachfunc");
void func_0015E650_x0015E650(ADXT_x0015E650 adxt) __asm__("func_0015E650");
/* ADXT_StopWithoutLsc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0015E650_x0015E650(ADXT_x0015E650 adxt) {
    SJ_x0015E650 sj;
    ADXAMP_x0015E650 amp;
    ADXCRS_Lock_x0015E650();
    ADXRNA_SetTransSw_x0015E650(adxt->rna, 0);
    ADXRNA_SetPlaySw_x0015E650(adxt->rna, 0);
    PS2RNA_SetDiscardSw_x0015E650(adxt->rna, 1);
    ADXSJD_Stop_x0015E650(adxt->sjd);
    if (adxt->pmode == 2) {
        sj = adxt->sji;
        if (sj != 0) {
            adxt->sji = 0;
            (*(sj)->vtbl->Destroy)(sj);
        }
    }
    amp = adxt->amp;
    if (amp != 0) {
        ADXAMP_Stop_x0015E650(amp);
    }
    adxt->sji = 0;
    adxt->stat = (0);
    adxt->unkAC = 0;
    ADXCRS_Unlock_x0015E650();
}
typedef int s32_x0015E6F0;
typedef s32_x0015E6F0 ptrdiff_t_x0015E6F0;
typedef unsigned char Uint8_x0015E6F0;
typedef char Sint8_x0015E6F0;
typedef unsigned short Uint16_x0015E6F0;
typedef signed short Sint16_x0015E6F0;
typedef unsigned int Uint32_x0015E6F0;
typedef signed int Sint32_x0015E6F0;
typedef Sint32_x0015E6F0 Bool_x0015E6F0;
typedef char Char8_x0015E6F0;
typedef struct _UUID_x0015E6F0 {
    Uint32_x0015E6F0 Data1;
    Uint16_x0015E6F0 Data2;
    Uint16_x0015E6F0 Data3;
    Uint8_x0015E6F0 Data4[8];
} UUID_x0015E6F0;
typedef struct {
        Sint8_x0015E6F0 *data;
        Sint32_x0015E6F0 len;
} SJCK_x0015E6F0;
typedef struct {
        struct _sj_vtbl_x0015E6F0 *vtbl;
} SJ_OBJ_x0015E6F0;
typedef SJ_OBJ_x0015E6F0 *SJ_x0015E6F0;
typedef struct _sj_vtbl_x0015E6F0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015E6F0 sj);
        UUID_x0015E6F0 *(*GetUuid)(SJ_x0015E6F0 sj);
        void (*Reset)(SJ_x0015E6F0 sj);
        void (*GetChunk)(SJ_x0015E6F0 sj, Sint32_x0015E6F0 id, Sint32_x0015E6F0 nbyte, SJCK_x0015E6F0 *ck);
        void (*UngetChunk)(SJ_x0015E6F0 sj, Sint32_x0015E6F0 id, SJCK_x0015E6F0 *ck);
        void (*PutChunk)(SJ_x0015E6F0 sj, Sint32_x0015E6F0 id, SJCK_x0015E6F0 *ck);
        Sint32_x0015E6F0 (*GetNumData)(SJ_x0015E6F0 sj, Sint32_x0015E6F0 id);
        Sint32_x0015E6F0 (*IsGetChunk)(SJ_x0015E6F0 sj, Sint32_x0015E6F0 id, Sint32_x0015E6F0 nbyte, Sint32_x0015E6F0 *rbyte);
        void (*EntryErrFunc)(SJ_x0015E6F0 sj,
                                        void (*func)(void *obj, Sint32_x0015E6F0 ecode), void *obj);
} SJ_IF_x0015E6F0;
extern int* sceCdCallback_x0015E6F0(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015E6F0(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015E6F0;
typedef struct {
               Sint16_x0015E6F0 unk0;
               Sint16_x0015E6F0 unk2;
               Sint16_x0015E6F0 unk4;
               Sint16_x0015E6F0 unk6;
} ADXPD_OBJ_SUB_x0015E6F0;
typedef struct {
               Sint32_x0015E6F0 used;
               Sint32_x0015E6F0 unk4;
               Sint32_x0015E6F0 mode;
               Sint32_x0015E6F0 stat;
               Sint32_x0015E6F0 num_blk;
               Sint32_x0015E6F0 unk14;
               Sint32_x0015E6F0 unk18;
               Sint32_x0015E6F0 unk1C;
               Sint32_x0015E6F0 unk20;
               Sint32_x0015E6F0 unk24;
               ADXPD_OBJ_SUB_x0015E6F0 unk28;
               Sint16_x0015E6F0 unk30;
               Sint16_x0015E6F0 unk32;
               Sint16_x0015E6F0 unk34;
               Sint16_x0015E6F0 unk36;
               Sint16_x0015E6F0 unk38;
               Sint16_x0015E6F0 unk3A;
} ADXPD_OBJ_x0015E6F0;
typedef ADXPD_OBJ_x0015E6F0* ADXPD_x0015E6F0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015E6F0;
typedef struct {
               Sint32_x0015E6F0 unk0;
               Sint32_x0015E6F0 unk4;
               Sint32_x0015E6F0 unk8;
               Sint32_x0015E6F0 unkC;
               Sint32_x0015E6F0 unk10;
               void* unk14;
               Sint32_x0015E6F0 unk18;
               Sint32_x0015E6F0 unk1C;
               Sint32_x0015E6F0 unk20;
               Sint32_x0015E6F0 unk24;
               Sint32_x0015E6F0 unk28;
} ADXB_UNK_x0015E6F0;
typedef struct {
               Sint16_x0015E6F0 unk0;
               Sint16_x0015E6F0 unk2;
               Sint32_x0015E6F0 stat;
               ADXPD_x0015E6F0 adxpd;
               Sint8_x0015E6F0 encoding_type;
               Sint8_x0015E6F0 sample_bitdepth;
               Sint8_x0015E6F0 channel_count;
               Sint8_x0015E6F0 block_size;
               Sint32_x0015E6F0 samples_per_block;
               Sint32_x0015E6F0 sample_rate;
               Sint32_x0015E6F0 total_samples;
               Sint16_x0015E6F0 unk1C;
               char pad1E[2];
               Sint32_x0015E6F0 unk20;
               Sint16_x0015E6F0 unk24;
               Sint16_x0015E6F0 unk26;
               Sint32_x0015E6F0 unk28;
               Sint32_x0015E6F0 unk2C;
               Sint32_x0015E6F0 unk30;
               Sint32_x0015E6F0 unk34;
               Sint32_x0015E6F0 unk38;
               void* unk3C;
               Sint32_x0015E6F0 unk40;
               Sint32_x0015E6F0 unk44;
               ADXB_UNK_x0015E6F0 unk48;
               Sint32_x0015E6F0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015E6F0*, Sint32_x0015E6F0*, Sint32_x0015E6F0*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015E6F0, Sint32_x0015E6F0);
               Sint32_x0015E6F0 unk84;
               Sint32_x0015E6F0 unk88;
               Sint32_x0015E6F0 unk8C;
               Sint32_x0015E6F0 dec_num_sample;
               Sint32_x0015E6F0 dec_data_len;
               Sint16_x0015E6F0 format;
               Sint16_x0015E6F0 unk9A;
               Sint16_x0015E6F0 unk9C;
               Sint16_x0015E6F0 unk9E;
               Sint16_x0015E6F0 unkA0;
               char padA2[0xE];
               Sint32_x0015E6F0 unkB0;
               Sint32_x0015E6F0 ahx_dec_samples;
               Sint32_x0015E6F0 ahx_dec_frames;
               Sint32_x0015E6F0 unkBC;
               Sint32_x0015E6F0 ac3_dec_samples;
               Sint32_x0015E6F0 ac3_dec_frames;
               Sint32_x0015E6F0 unkC8;
               ADX_UNK_x0015E6F0 unkCC;
               Sint16_x0015E6F0 unkDC;
               Sint16_x0015E6F0 unkDE[2];
               char padE2[2];
               Sint32_x0015E6F0 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015E6F0;
typedef ADXB_OBJ_x0015E6F0* ADXB_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 used;
    Sint8_x0015E6F0 state;
    Sint8_x0015E6F0 maxnch;
    Sint8_x0015E6F0 unk3;
    ADXB_x0015E6F0 adxb;
    SJ_x0015E6F0 sji;
    SJ_x0015E6F0 sjo[2];
    SJCK_x0015E6F0 unk14;
    SJCK_x0015E6F0 chunks[2];
    Sint32_x0015E6F0 unk2C;
    Sint32_x0015E6F0 unk30;
    Sint32_x0015E6F0 unk34;
    Sint32_x0015E6F0 unk38;
    Sint32_x0015E6F0 trap_num_samples;
    Sint32_x0015E6F0 trap_count;
    Sint32_x0015E6F0 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015E6F0, Sint8_x0015E6F0*, Sint32_x0015E6F0);
    void* flt_obj;
    Sint8_x0015E6F0 unk58[0x40];
    Sint32_x0015E6F0 unk98;
    Sint32_x0015E6F0 lnkflg;
} ADXSJD_OBJ_x0015E6F0;
typedef ADXSJD_OBJ_x0015E6F0* ADXSJD_x0015E6F0;
typedef struct {
    Sint32_x0015E6F0 unk0;
    SJ_x0015E6F0 sj;
} SJX_UNK_0_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 used;
    Sint8_x0015E6F0 unk1;
    Sint16_x0015E6F0 unk2;
    SJ_x0015E6F0 sj;
    void* unk8;
    Sint32_x0015E6F0 unkC;
    SJX_UNK_0_x0015E6F0* unk10;
} SJX_OBJ_x0015E6F0;
typedef SJX_OBJ_x0015E6F0* SJX_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 used;
    char pad1[3];
    void* unk4;
    SJ_x0015E6F0 unk8;
    SJX_x0015E6F0 unkC;
    SJCK_x0015E6F0 chunk;
} PS2PSJ_OBJ_x0015E6F0;
typedef PS2PSJ_OBJ_x0015E6F0* PS2PSJ_x0015E6F0;
typedef struct {
               Sint8_x0015E6F0 unk0;
               Sint8_x0015E6F0 unk1;
               Sint8_x0015E6F0 unk2;
               SJ_x0015E6F0 unk4;
               SJ_x0015E6F0 unk8;
               SJCK_x0015E6F0 unkC;
               SJCK_x0015E6F0 unk14;
               sceSifDmaData_x0015E6F0 dma_data;
               Sint32_x0015E6F0 unk2C;
               Sint32_x0015E6F0 unk30;
               Sint32_x0015E6F0 unk34;
               Sint32_x0015E6F0 unk38;
               Sint32_x0015E6F0 unk3C;
} DTR_OBJ_x0015E6F0;
typedef DTR_OBJ_x0015E6F0* DTR_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 used;
    Sint32_x0015E6F0 maxnch;
    PS2PSJ_x0015E6F0 psj[2];
    DTR_x0015E6F0 dtr[2];
    SJ_x0015E6F0 sjo[2];
    void* unk20;
    Sint32_x0015E6F0 unk24;
    Sint32_x0015E6F0 unk28;
    Sint32_x0015E6F0 unk2C;
    Sint8_x0015E6F0 unk30;
    Sint8_x0015E6F0 unk31;
    Sint8_x0015E6F0 num_chan;
    Sint8_x0015E6F0 unk33;
    Sint32_x0015E6F0 sfreq;
    Sint32_x0015E6F0 unk38;
    Sint32_x0015E6F0 out_vol;
    Sint32_x0015E6F0 unk40;
    Sint32_x0015E6F0 pan[2];
    Sint32_x0015E6F0 unk4C[2];
    Sint32_x0015E6F0 unk54;
    Sint32_x0015E6F0 unk58;
    Sint8_x0015E6F0 unk5C;
    Sint8_x0015E6F0 unk5D;
    Sint8_x0015E6F0 unk5E;
    Sint8_x0015E6F0 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015E6F0;
typedef ADXRNA_OBJ_x0015E6F0* ADXRNA_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 unk0;
    Sint8_x0015E6F0 stat;
    Sint8_x0015E6F0 read_flg;
    Sint8_x0015E6F0 unk3;
    SJ_x0015E6F0 sj;
    void* cvfs;
    Sint32_x0015E6F0 unkC;
    Sint32_x0015E6F0 file_len;
    Sint32_x0015E6F0 file_sct;
    Sint32_x0015E6F0 unk18;
    Sint32_x0015E6F0 unk1C;
    Sint32_x0015E6F0 unk20;
    SJCK_x0015E6F0 unk24;
    Sint32_x0015E6F0 req_rd_size;
    Sint32_x0015E6F0 eos;
    Uint32_x0015E6F0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015E6F0 unk40;
    Sint8_x0015E6F0 pause;
    Sint8_x0015E6F0 unk45;
    Sint8_x0015E6F0 unk46;
    Sint8_x0015E6F0 unk47;
    Sint8_x0015E6F0 unk48;
    Sint8_x0015E6F0 unk49;
    char pad4A[6];
    const Char8_x0015E6F0* fname;
    void* dir;
    Sint32_x0015E6F0 cur_ofst;
    Uint32_x0015E6F0 unk5C;
} ADXSTM_OBJ_x0015E6F0;
typedef ADXSTM_OBJ_x0015E6F0* ADXSTM_x0015E6F0;
typedef struct {
    Sint32_x0015E6F0 id;
    const Char8_x0015E6F0* fname;
    Sint32_x0015E6F0 unk8;
    void* dir;
    Sint32_x0015E6F0 unk10;
    Sint32_x0015E6F0 unk14;
    Sint32_x0015E6F0 stat;
    Sint32_x0015E6F0 rd_sct;
} LSC_STM_x0015E6F0;
typedef struct {
    Sint8_x0015E6F0 used;
    Sint8_x0015E6F0 stat;
    Sint8_x0015E6F0 unk2;
    Sint8_x0015E6F0 lp_flg;
    Sint8_x0015E6F0 unk4;
    SJ_x0015E6F0 sj;
    Sint32_x0015E6F0 unkC;
    Sint32_x0015E6F0 unk10;
    Sint32_x0015E6F0 flow_limit;
    Sint32_x0015E6F0 unk18;
    Sint32_x0015E6F0 last_stm_index;
    Sint32_x0015E6F0 unk20;
    Sint32_x0015E6F0 num_stm;
    ADXSTM_x0015E6F0 stm_hndl;
    Sint32_x0015E6F0 unk2C;
    char pad30[4];
    Sint32_x0015E6F0 unk34;
    LSC_STM_x0015E6F0 stm[16];
} LSC_OBJ_x0015E6F0;
typedef LSC_OBJ_x0015E6F0* LSC_x0015E6F0;
void ADXERR_CallErrFunc1_x0015E6F0(Sint8_x0015E6F0*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x0015E6F0 {
                   Sint8_x0015E6F0 used;
                   Sint8_x0015E6F0 stat;
                   Sint8_x0015E6F0 pmode;
                   Sint8_x0015E6F0 maxnch;
                   ADXSJD_x0015E6F0 sjd;
                   ADXSTM_x0015E6F0 stm;
                   ADXRNA_x0015E6F0 rna;
                   SJ_x0015E6F0 sjf;
                   SJ_x0015E6F0 sji;
                   SJ_x0015E6F0 sjo[(2)];
                   Sint8_x0015E6F0 *ibuf;
                   Sint32_x0015E6F0 ibuflen;
                   Sint32_x0015E6F0 ibufxlen;
                   Sint16_x0015E6F0 *obuf;
                   Sint32_x0015E6F0 obufsize;
                   Sint32_x0015E6F0 obufdist;
                   Sint32_x0015E6F0 svrfreq;
                   Sint16_x0015E6F0 maxsct;
                   Sint16_x0015E6F0 minsct;
                   Sint16_x0015E6F0 outvol;
                   Sint16_x0015E6F0 outpan[(2)];
                   Sint16_x0015E6F0 unk46;
                   Sint32_x0015E6F0 maxdecsmpl;
                   Sint32_x0015E6F0 lpcnt;
                   Sint32_x0015E6F0 lp_skiplen;
                   Sint32_x0015E6F0 trp;
                   Sint32_x0015E6F0 wpos;
                   Sint32_x0015E6F0 mofst;
                   Sint16_x0015E6F0 ercode;
                   Sint32_x0015E6F0 edecpos;
                   Sint16_x0015E6F0 edeccnt;
                   Sint16_x0015E6F0 eshrtcnt;
                   Sint8_x0015E6F0 lpflg;
                   Sint8_x0015E6F0 autorcvr;
                   Sint8_x0015E6F0 fltmode;
                   Sint8_x0015E6F0 execflag;
                   Sint8_x0015E6F0 pstwait_flag;
                   Sint8_x0015E6F0 pstready_flag;
                   Sint8_x0015E6F0 pause_flag;
                   void *amp;
                   SJ_x0015E6F0 ampsji[(2)];
                   SJ_x0015E6F0 ampsjo[(2)];
                   Sint32_x0015E6F0 time_ofst;
                   Sint32_x0015E6F0 lesct;
                   Sint32_x0015E6F0 trpnsmpl;
                   void *lsc;
                   Sint8_x0015E6F0 lnkflg;
                   Sint8_x0015E6F0 rsv;
                   Sint16_x0015E6F0 rsv2;
                   Uint32_x0015E6F0 tvofst;
                   Uint32_x0015E6F0 svcnt;
                   Uint32_x0015E6F0 decofst;
                   Sint32_x0015E6F0 flush_nsmpl;
                   Sint8_x0015E6F0 unkAC;
                   Sint8_x0015E6F0 padAD[1];
               Char8_x0015E6F0* unkB0;
               Sint32_x0015E6F0 padB4;
               Sint32_x0015E6F0 padB8;
               Sint32_x0015E6F0 padBC;
               Sint32_x0015E6F0 padC0;
} ADX_TALK_x0015E6F0;
typedef ADX_TALK_x0015E6F0 *ADXT_x0015E6F0;
extern void ADXT_EntryErrFunc_x0015E6F0(void (*func)(void *obj, Sint8_x0015E6F0 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015E6F0(ADXT_x0015E6F0 adxt,
                void (*f)(void *obj, Sint32_x0015E6F0 ch, void *data, Sint32_x0015E6F0 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015E6F0(Bool_x0015E6F0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015E6F0(Bool_x0015E6F0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015E6F0(void (*fn)(void *obj, Char8_x0015E6F0 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015E6F0(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern void ADXRNA_EntryErrFunc_x0015E6F0(void (*)(void*, Char8_x0015E6F0*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXSJD_Stop_x0015E6F0(ADXSJD_x0015E6F0) __asm__("func_00158E90");
extern void ADXSJD_EntryTrapFunc_x0015E6F0(ADXSJD_x0015E6F0 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void ADXSTM_ReleaseFileNw_x0015E6F0(ADXSTM_x0015E6F0 stm) __asm__("func_0015CC38");
void LSC_Stop_x0015E6F0(LSC_x0015E6F0 lsc) __asm__("func_00169C40");
extern void (*ahxdetachfunc_x0015E6F0)(ADXT_x0015E6F0) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015E6F0)(ADXT_x0015E6F0) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015E6F0)(ADXT_x0015E6F0) __asm__("D_00411174");
extern void (*pl2detachfunc_x0015E6F0)(ADXT_x0015E6F0) __asm__("pl2detachfunc");
void ADXT_StopWithoutLsc_x0015E6F0(ADXT_x0015E6F0 adxt) __asm__("func_0015E650");
extern char ext_str0_x0015E6F0[] __asm__("D_00461910");
void ADXT_Stop_x0015E6F0(ADXT_x0015E6F0 adxt) __asm__("ADXT_Stop");
/* ADXT_Stop_x0015E6F0: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_Stop_x0015E6F0(ADXT_x0015E6F0 adxt) {
    ADXSTM_x0015E6F0 stm;
    SJ_x0015E6F0 sj;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015E6F0(ext_str0_x0015E6F0);
        return;
    }
    if (ac3stopfunc_x0015E6F0 != 0) {
        ADXSJD_Stop_x0015E6F0(adxt->sjd);
        ac3stopfunc_x0015E6F0(adxt);
    }
    stm = adxt->stm;
    if (stm != 0) {
        ADXSTM_ReleaseFileNw_x0015E6F0(stm);
    }
    if (adxt->pmode == 4) {
        LSC_Stop_x0015E6F0(adxt->lsc);
        sj = adxt->sji;
        if (sj != 0) {
            (*(sj)->vtbl->Reset)(sj);
        }
    }
    ADXT_StopWithoutLsc_x0015E6F0(adxt);
}
s8 ADXT_GetStat(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461938);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
typedef int (*CvFsFn_x0015E7E0)();
typedef struct {
    CvFsFn_x0015E7E0 exec_server;
    CvFsFn_x0015E7E0 entry_err_func;
    CvFsFn_x0015E7E0 get_file_size;
    CvFsFn_x0015E7E0 get_free_size;
    CvFsFn_x0015E7E0 open;
    CvFsFn_x0015E7E0 close;
    CvFsFn_x0015E7E0 seek;
    CvFsFn_x0015E7E0 tell;
    CvFsFn_x0015E7E0 req_rd;
    CvFsFn_x0015E7E0 req_wr;
    CvFsFn_x0015E7E0 stop_tr;
    CvFsFn_x0015E7E0 get_stat;
    CvFsFn_x0015E7E0 get_sct_len;
    CvFsFn_x0015E7E0 set_sct_len;
    CvFsFn_x0015E7E0 get_num_tr;
    CvFsFn_x0015E7E0 change_dir;
    CvFsFn_x0015E7E0 is_exist_file;
    CvFsFn_x0015E7E0 get_num_files;
    CvFsFn_x0015E7E0 load_dir_info;
    CvFsFn_x0015E7E0 get_max_byte_rate;
    CvFsFn_x0015E7E0 make_dir;
    CvFsFn_x0015E7E0 remove_dir;
    CvFsFn_x0015E7E0 delete_file;
    CvFsFn_x0015E7E0 get_file_size_ex;
    CvFsFn_x0015E7E0 opt_fn1;
    CvFsFn_x0015E7E0 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x0015E7E0;
extern void cvFsAddDev_x0015E7E0(char *name, CvFsDevIf_x0015E7E0 *(*getif)(void)) __asm__("cvFsAddDev");
extern int adxt_vsync_rate_x0015E7E0 __asm__("D_004111A8");
extern int adxt_vsync_mode_x0015E7E0 __asm__("D_0041115C");
void func_0015E7E0_x0015E7E0(int mode) __asm__("func_0015E7E0");
/* adxt_set_vsync_mode: from https://github.com/new-coke/rez-decomp (src/cri/adxt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0015E7E0_x0015E7E0(int mode)
{
    if (mode == 1)
        adxt_vsync_rate_x0015E7E0 = 5994;
    else if (mode == 2)
        adxt_vsync_rate_x0015E7E0 = 5000;
    adxt_vsync_mode_x0015E7E0 = mode;
}
typedef int (*CvFsFn_x0015E818)();
typedef struct {
    CvFsFn_x0015E818 exec_server;
    CvFsFn_x0015E818 entry_err_func;
    CvFsFn_x0015E818 get_file_size;
    CvFsFn_x0015E818 get_free_size;
    CvFsFn_x0015E818 open;
    CvFsFn_x0015E818 close;
    CvFsFn_x0015E818 seek;
    CvFsFn_x0015E818 tell;
    CvFsFn_x0015E818 req_rd;
    CvFsFn_x0015E818 req_wr;
    CvFsFn_x0015E818 stop_tr;
    CvFsFn_x0015E818 get_stat;
    CvFsFn_x0015E818 get_sct_len;
    CvFsFn_x0015E818 set_sct_len;
    CvFsFn_x0015E818 get_num_tr;
    CvFsFn_x0015E818 change_dir;
    CvFsFn_x0015E818 is_exist_file;
    CvFsFn_x0015E818 get_num_files;
    CvFsFn_x0015E818 load_dir_info;
    CvFsFn_x0015E818 get_max_byte_rate;
    CvFsFn_x0015E818 make_dir;
    CvFsFn_x0015E818 remove_dir;
    CvFsFn_x0015E818 delete_file;
    CvFsFn_x0015E818 get_file_size_ex;
    CvFsFn_x0015E818 opt_fn1;
    CvFsFn_x0015E818 opt_fn2;
    char pad_68[8];
} CvFsDevIf_x0015E818;
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
} DtxObj_x0015E818;
typedef struct SjObj_x0015E818 SjObj_x0015E818;
typedef struct {
    char pad_00[12];
    void (*destroy)(SjObj_x0015E818 *sj);
    void *(*get_uuid)(SjObj_x0015E818 *sj);
    void (*reset)(SjObj_x0015E818 *sj);
    void (*getchunk)(SjObj_x0015E818 *sj, int id, int nbyte, void *ck);
    void (*ungetchunk)(SjObj_x0015E818 *sj, int id, void *ck);
    void (*putchunk)(SjObj_x0015E818 *sj, int id, void *ck);
    int (*getnum)(SjObj_x0015E818 *sj, int id);
    int (*is_get_chunk)(SjObj_x0015E818 *sj, int id, int nbyte, int *rbyte);
    void (*set_error_cb)(SjObj_x0015E818 *sj, void *fn, void *obj);
} SjIf_x0015E818;
struct SjObj_x0015E818 {
    SjIf_x0015E818 *vtbl;
};
typedef struct {
    signed char used;
    char pad_01[3];
    void *sjrmt;
    SjObj_x0015E818 *sjuni;
    void *sjx;
    char *ckdata;
    int cklen;
} PsjObj_x0015E818;
typedef struct SjChunk_x0015E818 {
    char *data;
    int len;
} SjChunk_x0015E818;
typedef struct {
    signed char used;
    signed char stat;
    signed char busy;
    SjObj_x0015E818 *sjin;
    SjObj_x0015E818 *sjout;
    SjChunk_x0015E818 ckin;
    SjChunk_x0015E818 ckout;
    int dma_data;
    int dma_addr;
    int dma_size;
    int dma_mode;
    int sema;
    int unk_30;
    int unk_34;
    int unit;
    int xfer_total;
} DtrObj_x0015E818;
typedef struct {
    signed char used;
    int nch;
    PsjObj_x0015E818 *psj[2];
    DtrObj_x0015E818 *dtr[2];
    SjObj_x0015E818 *sj[2];
    void *id;
    signed char play;
    signed char play_sent;
    signed char nch_cur;
    signed char nch_sent;
    int sfreq;
    int sfreq_sent;
    int vol;
    int vol_sent;
    int outpan[2];
    int unk_40[2];
    signed char transfer_sw;
    signed char unk_49;
    int unk_4c;
    int bufsize;
} Ps2rnaObj_x0015E818;
typedef struct {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char nch;
    void *sjd;
    int fstm;
    int rna;
    SjObj_x0015E818 *sjf;
    SjObj_x0015E818 *sji;
    SjObj_x0015E818 *sjo[2];
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
    SjObj_x0015E818 *sjx[2];
    SjObj_x0015E818 *sjy[2];
    int time_ofst;
    int unk_8c;
    int unk_90;
    void *stm;
    signed char unk_98;
    char pad_99[3];
    int vsync_time;
    int vsync_base;
} AdxtObj_x0015E818;
struct SjObj_x0015E818;
void adxrna_get_time_x0015E818(Ps2rnaObj_x0015E818 *rna, int *type, int *rate) __asm__("func_001588B0");
struct SjObj_x0015E818;
struct SjObj_x0015E818;
struct SjObj_x0015E818;
struct SjObj_x0015E818;
extern void cvFsAddDev_x0015E818(char *name, CvFsDevIf_x0015E818 *(*getif)(void)) __asm__("cvFsAddDev");
struct SjObj_x0015E818;
struct SjObj_x0015E818;
struct SjChunk_x0015E818;
struct SjChunk_x0015E818;
struct SjChunk_x0015E818;
struct SjObj_x0015E818;
extern void dtx_set_send_cb_x0015E818(DtxObj_x0015E818 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_send_cb");
extern void dtx_set_recv_cb_x0015E818(DtxObj_x0015E818 *dtx, void (*fn)(), void *obj) __asm__("dtx_set_recv_cb");
extern int adxsjd_get_total_smpl_x0015E818(void *sjd) __asm__("func_00159E28");
extern int adxsjd_get_sfreq_x0015E818(void *sjd) __asm__("ADXSJD_GetSfreq");
extern int adxsjd_get_out_bps_x0015E818(void *sjd) __asm__("func_00159DE0");
void func_0015E818_x0015E818(AdxtObj_x0015E818 *adxt, int *ncount, int *tscale) __asm__("func_0015E818");
/* adxt_get_time_raw: from https://github.com/new-coke/rez-decomp (src/cri/adxt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0015E818_x0015E818(AdxtObj_x0015E818 *adxt, int *ncount, int *tscale)
{
    if (adxt->stat == 3 || adxt->stat == 4) {
        adxrna_get_time_x0015E818((void *)adxt->rna, ncount, tscale);
    } else if (adxt->stat == 5) {
        *ncount = adxsjd_get_total_smpl_x0015E818(adxt->sjd);
        *tscale = adxsjd_get_sfreq_x0015E818(adxt->sjd);
        *ncount *= 16 / adxsjd_get_out_bps_x0015E818(adxt->sjd);
    } else {
        *ncount = 0;
        *tscale = 1;
    }
    *ncount += adxt->time_ofst;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E8E0);
void func_0015EA08(void) {
    D_0041117C += 1;
}
typedef int s32_x0015EA20;
typedef s32_x0015EA20 ptrdiff_t_x0015EA20;
typedef unsigned char Uint8_x0015EA20;
typedef char Sint8_x0015EA20;
typedef unsigned short Uint16_x0015EA20;
typedef signed short Sint16_x0015EA20;
typedef unsigned int Uint32_x0015EA20;
typedef signed int Sint32_x0015EA20;
typedef float Float32_x0015EA20;
typedef Sint32_x0015EA20 Bool_x0015EA20;
typedef char Char8_x0015EA20;
typedef struct _UUID_x0015EA20 {
    Uint32_x0015EA20 Data1;
    Uint16_x0015EA20 Data2;
    Uint16_x0015EA20 Data3;
    Uint8_x0015EA20 Data4[8];
} UUID_x0015EA20;
typedef struct {
        Sint8_x0015EA20 *data;
        Sint32_x0015EA20 len;
} SJCK_x0015EA20;
typedef struct {
        struct _sj_vtbl_x0015EA20 *vtbl;
} SJ_OBJ_x0015EA20;
typedef SJ_OBJ_x0015EA20 *SJ_x0015EA20;
typedef struct _sj_vtbl_x0015EA20 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015EA20 sj);
        UUID_x0015EA20 *(*GetUuid)(SJ_x0015EA20 sj);
        void (*Reset)(SJ_x0015EA20 sj);
        void (*GetChunk)(SJ_x0015EA20 sj, Sint32_x0015EA20 id, Sint32_x0015EA20 nbyte, SJCK_x0015EA20 *ck);
        void (*UngetChunk)(SJ_x0015EA20 sj, Sint32_x0015EA20 id, SJCK_x0015EA20 *ck);
        void (*PutChunk)(SJ_x0015EA20 sj, Sint32_x0015EA20 id, SJCK_x0015EA20 *ck);
        Sint32_x0015EA20 (*GetNumData)(SJ_x0015EA20 sj, Sint32_x0015EA20 id);
        Sint32_x0015EA20 (*IsGetChunk)(SJ_x0015EA20 sj, Sint32_x0015EA20 id, Sint32_x0015EA20 nbyte, Sint32_x0015EA20 *rbyte);
        void (*EntryErrFunc)(SJ_x0015EA20 sj,
                                        void (*func)(void *obj, Sint32_x0015EA20 ecode), void *obj);
} SJ_IF_x0015EA20;
extern int* sceCdCallback_x0015EA20(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015EA20(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015EA20;
typedef struct {
               Sint16_x0015EA20 unk0;
               Sint16_x0015EA20 unk2;
               Sint16_x0015EA20 unk4;
               Sint16_x0015EA20 unk6;
} ADXPD_OBJ_SUB_x0015EA20;
typedef struct {
               Sint32_x0015EA20 used;
               Sint32_x0015EA20 unk4;
               Sint32_x0015EA20 mode;
               Sint32_x0015EA20 stat;
               Sint32_x0015EA20 num_blk;
               Sint32_x0015EA20 unk14;
               Sint32_x0015EA20 unk18;
               Sint32_x0015EA20 unk1C;
               Sint32_x0015EA20 unk20;
               Sint32_x0015EA20 unk24;
               ADXPD_OBJ_SUB_x0015EA20 unk28;
               Sint16_x0015EA20 unk30;
               Sint16_x0015EA20 unk32;
               Sint16_x0015EA20 unk34;
               Sint16_x0015EA20 unk36;
               Sint16_x0015EA20 unk38;
               Sint16_x0015EA20 unk3A;
} ADXPD_OBJ_x0015EA20;
typedef ADXPD_OBJ_x0015EA20* ADXPD_x0015EA20;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015EA20;
typedef struct {
               Sint32_x0015EA20 unk0;
               Sint32_x0015EA20 unk4;
               Sint32_x0015EA20 unk8;
               Sint32_x0015EA20 unkC;
               Sint32_x0015EA20 unk10;
               void* unk14;
               Sint32_x0015EA20 unk18;
               Sint32_x0015EA20 unk1C;
               Sint32_x0015EA20 unk20;
               Sint32_x0015EA20 unk24;
               Sint32_x0015EA20 unk28;
} ADXB_UNK_x0015EA20;
typedef struct {
               Sint16_x0015EA20 unk0;
               Sint16_x0015EA20 unk2;
               Sint32_x0015EA20 stat;
               ADXPD_x0015EA20 adxpd;
               Sint8_x0015EA20 encoding_type;
               Sint8_x0015EA20 sample_bitdepth;
               Sint8_x0015EA20 channel_count;
               Sint8_x0015EA20 block_size;
               Sint32_x0015EA20 samples_per_block;
               Sint32_x0015EA20 sample_rate;
               Sint32_x0015EA20 total_samples;
               Sint16_x0015EA20 unk1C;
               char pad1E[2];
               Sint32_x0015EA20 unk20;
               Sint16_x0015EA20 unk24;
               Sint16_x0015EA20 unk26;
               Sint32_x0015EA20 unk28;
               Sint32_x0015EA20 unk2C;
               Sint32_x0015EA20 unk30;
               Sint32_x0015EA20 unk34;
               Sint32_x0015EA20 unk38;
               void* unk3C;
               Sint32_x0015EA20 unk40;
               Sint32_x0015EA20 unk44;
               ADXB_UNK_x0015EA20 unk48;
               Sint32_x0015EA20 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015EA20*, Sint32_x0015EA20*, Sint32_x0015EA20*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015EA20, Sint32_x0015EA20);
               Sint32_x0015EA20 unk84;
               Sint32_x0015EA20 unk88;
               Sint32_x0015EA20 unk8C;
               Sint32_x0015EA20 dec_num_sample;
               Sint32_x0015EA20 dec_data_len;
               Sint16_x0015EA20 format;
               Sint16_x0015EA20 unk9A;
               Sint16_x0015EA20 unk9C;
               Sint16_x0015EA20 unk9E;
               Sint16_x0015EA20 unkA0;
               char padA2[0xE];
               Sint32_x0015EA20 unkB0;
               Sint32_x0015EA20 ahx_dec_samples;
               Sint32_x0015EA20 ahx_dec_frames;
               Sint32_x0015EA20 unkBC;
               Sint32_x0015EA20 ac3_dec_samples;
               Sint32_x0015EA20 ac3_dec_frames;
               Sint32_x0015EA20 unkC8;
               ADX_UNK_x0015EA20 unkCC;
               Sint16_x0015EA20 unkDC;
               Sint16_x0015EA20 unkDE[2];
               char padE2[2];
               Sint32_x0015EA20 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015EA20;
typedef ADXB_OBJ_x0015EA20* ADXB_x0015EA20;
typedef struct {
    Sint8_x0015EA20 used;
    Sint8_x0015EA20 state;
    Sint8_x0015EA20 maxnch;
    Sint8_x0015EA20 unk3;
    ADXB_x0015EA20 adxb;
    SJ_x0015EA20 sji;
    SJ_x0015EA20 sjo[2];
    SJCK_x0015EA20 unk14;
    SJCK_x0015EA20 chunks[2];
    Sint32_x0015EA20 unk2C;
    Sint32_x0015EA20 unk30;
    Sint32_x0015EA20 unk34;
    Sint32_x0015EA20 unk38;
    Sint32_x0015EA20 trap_num_samples;
    Sint32_x0015EA20 trap_count;
    Sint32_x0015EA20 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015EA20, Sint8_x0015EA20*, Sint32_x0015EA20);
    void* flt_obj;
    Sint8_x0015EA20 unk58[0x40];
    Sint32_x0015EA20 unk98;
    Sint32_x0015EA20 lnkflg;
} ADXSJD_OBJ_x0015EA20;
typedef ADXSJD_OBJ_x0015EA20* ADXSJD_x0015EA20;
typedef struct {
    Sint32_x0015EA20 unk0;
    SJ_x0015EA20 sj;
} SJX_UNK_0_x0015EA20;
typedef struct {
    Sint8_x0015EA20 used;
    Sint8_x0015EA20 unk1;
    Sint16_x0015EA20 unk2;
    SJ_x0015EA20 sj;
    void* unk8;
    Sint32_x0015EA20 unkC;
    SJX_UNK_0_x0015EA20* unk10;
} SJX_OBJ_x0015EA20;
typedef SJX_OBJ_x0015EA20* SJX_x0015EA20;
typedef struct {
    Sint8_x0015EA20 used;
    char pad1[3];
    void* unk4;
    SJ_x0015EA20 unk8;
    SJX_x0015EA20 unkC;
    SJCK_x0015EA20 chunk;
} PS2PSJ_OBJ_x0015EA20;
typedef PS2PSJ_OBJ_x0015EA20* PS2PSJ_x0015EA20;
typedef struct {
               Sint8_x0015EA20 unk0;
               Sint8_x0015EA20 unk1;
               Sint8_x0015EA20 unk2;
               SJ_x0015EA20 unk4;
               SJ_x0015EA20 unk8;
               SJCK_x0015EA20 unkC;
               SJCK_x0015EA20 unk14;
               sceSifDmaData_x0015EA20 dma_data;
               Sint32_x0015EA20 unk2C;
               Sint32_x0015EA20 unk30;
               Sint32_x0015EA20 unk34;
               Sint32_x0015EA20 unk38;
               Sint32_x0015EA20 unk3C;
} DTR_OBJ_x0015EA20;
typedef DTR_OBJ_x0015EA20* DTR_x0015EA20;
typedef struct {
    Sint8_x0015EA20 used;
    Sint32_x0015EA20 maxnch;
    PS2PSJ_x0015EA20 psj[2];
    DTR_x0015EA20 dtr[2];
    SJ_x0015EA20 sjo[2];
    void* unk20;
    Sint32_x0015EA20 unk24;
    Sint32_x0015EA20 unk28;
    Sint32_x0015EA20 unk2C;
    Sint8_x0015EA20 unk30;
    Sint8_x0015EA20 unk31;
    Sint8_x0015EA20 num_chan;
    Sint8_x0015EA20 unk33;
    Sint32_x0015EA20 sfreq;
    Sint32_x0015EA20 unk38;
    Sint32_x0015EA20 out_vol;
    Sint32_x0015EA20 unk40;
    Sint32_x0015EA20 pan[2];
    Sint32_x0015EA20 unk4C[2];
    Sint32_x0015EA20 unk54;
    Sint32_x0015EA20 unk58;
    Sint8_x0015EA20 unk5C;
    Sint8_x0015EA20 unk5D;
    Sint8_x0015EA20 unk5E;
    Sint8_x0015EA20 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015EA20;
typedef ADXRNA_OBJ_x0015EA20* ADXRNA_x0015EA20;
typedef struct {
    Sint8_x0015EA20 unk0;
    Sint8_x0015EA20 stat;
    Sint8_x0015EA20 read_flg;
    Sint8_x0015EA20 unk3;
    SJ_x0015EA20 sj;
    void* cvfs;
    Sint32_x0015EA20 unkC;
    Sint32_x0015EA20 file_len;
    Sint32_x0015EA20 file_sct;
    Sint32_x0015EA20 unk18;
    Sint32_x0015EA20 unk1C;
    Sint32_x0015EA20 unk20;
    SJCK_x0015EA20 unk24;
    Sint32_x0015EA20 req_rd_size;
    Sint32_x0015EA20 eos;
    Uint32_x0015EA20 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015EA20 unk40;
    Sint8_x0015EA20 pause;
    Sint8_x0015EA20 unk45;
    Sint8_x0015EA20 unk46;
    Sint8_x0015EA20 unk47;
    Sint8_x0015EA20 unk48;
    Sint8_x0015EA20 unk49;
    char pad4A[6];
    const Char8_x0015EA20* fname;
    void* dir;
    Sint32_x0015EA20 cur_ofst;
    Uint32_x0015EA20 unk5C;
} ADXSTM_OBJ_x0015EA20;
typedef ADXSTM_OBJ_x0015EA20* ADXSTM_x0015EA20;
void ADXERR_CallErrFunc1_x0015EA20(Sint8_x0015EA20*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x0015EA20 {
                   Sint8_x0015EA20 used;
                   Sint8_x0015EA20 stat;
                   Sint8_x0015EA20 pmode;
                   Sint8_x0015EA20 maxnch;
                   ADXSJD_x0015EA20 sjd;
                   ADXSTM_x0015EA20 stm;
                   ADXRNA_x0015EA20 rna;
                   SJ_x0015EA20 sjf;
                   SJ_x0015EA20 sji;
                   SJ_x0015EA20 sjo[(2)];
                   Sint8_x0015EA20 *ibuf;
                   Sint32_x0015EA20 ibuflen;
                   Sint32_x0015EA20 ibufxlen;
                   Sint16_x0015EA20 *obuf;
                   Sint32_x0015EA20 obufsize;
                   Sint32_x0015EA20 obufdist;
                   Sint32_x0015EA20 svrfreq;
                   Sint16_x0015EA20 maxsct;
                   Sint16_x0015EA20 minsct;
                   Sint16_x0015EA20 outvol;
                   Sint16_x0015EA20 outpan[(2)];
                   Sint16_x0015EA20 unk46;
                   Sint32_x0015EA20 maxdecsmpl;
                   Sint32_x0015EA20 lpcnt;
                   Sint32_x0015EA20 lp_skiplen;
                   Sint32_x0015EA20 trp;
                   Sint32_x0015EA20 wpos;
                   Sint32_x0015EA20 mofst;
                   Sint16_x0015EA20 ercode;
                   Sint32_x0015EA20 edecpos;
                   Sint16_x0015EA20 edeccnt;
                   Sint16_x0015EA20 eshrtcnt;
                   Sint8_x0015EA20 lpflg;
                   Sint8_x0015EA20 autorcvr;
                   Sint8_x0015EA20 fltmode;
                   Sint8_x0015EA20 execflag;
                   Sint8_x0015EA20 pstwait_flag;
                   Sint8_x0015EA20 pstready_flag;
                   Sint8_x0015EA20 pause_flag;
                   void *amp;
                   SJ_x0015EA20 ampsji[(2)];
                   SJ_x0015EA20 ampsjo[(2)];
                   Sint32_x0015EA20 time_ofst;
                   Sint32_x0015EA20 lesct;
                   Sint32_x0015EA20 trpnsmpl;
                   void *lsc;
                   Sint8_x0015EA20 lnkflg;
                   Sint8_x0015EA20 rsv;
                   Sint16_x0015EA20 rsv2;
                   Uint32_x0015EA20 tvofst;
                   Uint32_x0015EA20 svcnt;
                   Uint32_x0015EA20 decofst;
                   Sint32_x0015EA20 flush_nsmpl;
                   Sint8_x0015EA20 unkAC;
                   Sint8_x0015EA20 padAD[1];
               Char8_x0015EA20* unkB0;
               Sint32_x0015EA20 padB4;
               Sint32_x0015EA20 padB8;
               Sint32_x0015EA20 padBC;
               Sint32_x0015EA20 padC0;
} ADX_TALK_x0015EA20;
typedef ADX_TALK_x0015EA20 *ADXT_x0015EA20;
extern void ADXT_EntryErrFunc_x0015EA20(void (*func)(void *obj, Sint8_x0015EA20 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015EA20(ADXT_x0015EA20 adxt,
                void (*f)(void *obj, Sint32_x0015EA20 ch, void *data, Sint32_x0015EA20 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015EA20(Bool_x0015EA20 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015EA20(Bool_x0015EA20 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015EA20(void (*fn)(void *obj, Char8_x0015EA20 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015EA20(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015EA20 adxt_vsync_cnt_x0015EA20 __asm__("D_00404C14");
extern void ADXRNA_EntryErrFunc_x0015EA20(void (*)(void*, Char8_x0015EA20*), void*) __asm__("ADXRNA_EntryErrFunc");
Sint32_x0015EA20 ADXSJD_GetOutBps_x0015EA20(ADXSJD_x0015EA20) __asm__("func_00159DE0");
Sint32_x0015EA20 ADXSJD_GetSfreq_x0015EA20(ADXSJD_x0015EA20) __asm__("ADXSJD_GetSfreq");
Sint32_x0015EA20 ADXSJD_GetTotalNumSmpl_x0015EA20(ADXSJD_x0015EA20) __asm__("func_00159E28");
extern void ADXSJD_EntryTrapFunc_x0015EA20(ADXSJD_x0015EA20 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern Sint32_x0015EA20 adxt_time_mode_x0015EA20 __asm__("D_0041115C");
extern void (*ahxdetachfunc_x0015EA20)(ADXT_x0015EA20) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015EA20)(ADXT_x0015EA20) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015EA20)(ADXT_x0015EA20) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015EA20)(ADXT_x0015EA20) __asm__("pl2detachfunc");
extern Sint32_x0015EA20 adxt_time_adjust_sw_x0015EA20 __asm__("D_00411180");
extern Sint32_x0015EA20 adxt_time_unit_x0015EA20 __asm__("D_004111A8");
extern Float32_x0015EA20 adxt_diff_av_x0015EA20 __asm__("D_004111AC");
void ADXT_GetTimeSfreq2_x0015EA20(ADXT_x0015EA20 adxt, Sint32_x0015EA20* ncount, Sint32_x0015EA20* tscale) __asm__("func_0015E8E0");
void adxt_time_adjust_trap_x0015EA20() __asm__("func_0015EA08");
extern char ext_str0_x0015EA20[] __asm__("D_00461960");
void ADXT_GetTime_x0015EA20(ADX_TALK_x0015EA20* adxt, Sint32_x0015EA20* ncount, Sint32_x0015EA20* tscale) __asm__("ADXT_GetTime");
/* ADXT_GetTime_x0015EA20: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_GetTime_x0015EA20(ADX_TALK_x0015EA20* adxt, Sint32_x0015EA20* ncount, Sint32_x0015EA20* tscale) {
    Sint32_x0015EA20 sp0;
    Sint32_x0015EA20 sp4;
    Sint32_x0015EA20 temp_s1;
    Uint8_x0015EA20 stat;
    Sint32_x0015EA20 temp;
    if ((adxt == 0) || (ncount == 0) || (tscale == 0)) {
        ADXERR_CallErrFunc1_x0015EA20(ext_str0_x0015EA20);
        return;
    }
    if (adxt_time_mode_x0015EA20 == 0) {
        ADXT_GetTimeSfreq2_x0015EA20(adxt, ncount, tscale);
        return;
    }
    adxt_diff_av_x0015EA20 = 0.0f;
    stat = adxt->stat;
    if ((Uint32_x0015EA20)(stat - 3) < 2) {
        if (adxt->pause_flag == 0) {
            *ncount = ((adxt_vsync_cnt_x0015EA20 - adxt->svcnt) * 0x64) + adxt->tvofst;
        } else {
            *ncount = adxt->tvofst;
        }
        ADXT_GetTimeSfreq2_x0015EA20(adxt, &sp0, &sp4);
        adxt_diff_av_x0015EA20 = (((Float32_x0015EA20)sp0 / sp4) - ((Float32_x0015EA20)*ncount / adxt_time_unit_x0015EA20)) * 1000.0f;
        if ((adxt_diff_av_x0015EA20 > 60.0f) || (adxt_diff_av_x0015EA20 < -60.0f)) {
            if (adxt_time_adjust_sw_x0015EA20 == 1) {
                temp_s1 = adxt_time_mode_x0015EA20;
                adxt_time_mode_x0015EA20 = 0;
                ADXT_GetTime_x0015EA20(adxt, &sp0, &sp4);
                adxt_time_mode_x0015EA20 = temp_s1;
                adxt_time_adjust_trap_x0015EA20();
            }
            adxt->tvofst = (Float32_x0015EA20)sp0 / sp4 * adxt_time_unit_x0015EA20;
            adxt->svcnt = adxt_vsync_cnt_x0015EA20;
        }
    } else if (adxt->stat == (5)) {
        sp0 = ADXSJD_GetTotalNumSmpl_x0015EA20(adxt->sjd);
        sp4 = ADXSJD_GetSfreq_x0015EA20(adxt->sjd);
        sp0 *= (0x10 / ADXSJD_GetOutBps_x0015EA20(adxt->sjd));
        *ncount = (Float32_x0015EA20)sp0 / sp4 * adxt_time_unit_x0015EA20;
        temp = adxt->tvofst + 1;
        *ncount += temp;
    } else {
        *ncount = 0;
    }
    *ncount += adxt->time_ofst;
    *tscale = adxt_time_unit_x0015EA20;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015ED18);
s32 ADXERR_CallErrFunc1_x0015ED68(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_00159E28_x0015ED68(s32) __asm__("func_00159E28");
extern s32 D_00461988_x0015ED68 __asm__("D_00461988");
s32 ADXT_GetNumSmpl_x0015ED68(u8 *arg0) __asm__("ADXT_GetNumSmpl");
s32 ADXT_GetNumSmpl_x0015ED68(u8 *arg0)
{
  unsigned long long new_var;
  s32 *new_var2;
  u8 *new_var3;
  if (arg0 == ((void *) 0))
  {
    new_var = -1;
    ADXERR_CallErrFunc1_x0015ED68(&D_00461988_x0015ED68);
    return new_var;
  }
 do { if (2 > (*((s8 *) (((u8 *) arg0) + 1)))) { return 0; } new_var = 4; new_var2 = (s32 *) ((new_var3 = (u8 *) arg0) + new_var); } while (0);
  return func_00159E28_x0015ED68(*new_var2);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetSfreq);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetNumChan);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetHdrLen);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetFmtBps);
