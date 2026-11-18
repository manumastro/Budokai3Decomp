#include "common.h"

extern s8 lbl_80186B68;

s32 ADXF_GetPtStat();                           /* extern */

s32 ADXF_GetStat(s32);                              /* extern */
s32 ADXF_Stop(s32);                             /* extern */

s32 func_001553A0(s32);                         /* extern */
extern s32 D_00402A7C;
extern s32 D_00402A80;
extern s32 D_00402A84;
extern s32 D_00402A8C;

s32 func_00170620();                            /* extern */

extern s32 D_00402000;
extern s32 D_00402004;
extern s32 D_00402008;

extern s32 D_00401FF8;

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s32 D_00401FF0;

s32 func_00161B68(s32);                         /* extern */

s32 func_001619C8(s32, s32, s32);               /* extern */
s32 func_00161A18(s32, s16, s16, s16);          /* extern */

s32 func_001619F0(s32, s32, s32);               /* extern */
s32 func_00161A28(s32, void *, void *, void *); /* extern */

s32 func_00161A48(s32);                         /* extern */

s32 func_001618A8();                            /* extern */

s32 func_00161880();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_004010A8;

extern s32 D_00401084;

extern s32 D_00401088;
extern s32 D_0040108C;

s32 func_0014F548();                            /* extern */
s32 func_0014F6E0();                            /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014EF28);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F2B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F320);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F430);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F548);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F6E0);
void func_0014F860(u8 *arg0) {
    if (*(s16 *)((u8 *)arg0 + 0x9C) == 1) {
        func_0014F6E0();
        return;
    }
    func_0014F548();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014F888);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014FBA0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014FBF8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014FD08);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014FE08);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_0014FFA0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150120);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001502C8);
s32 func_00150308(void) {
    return 0;
}
s32 func_00150310(s32 arg0, s32 arg1) {
    D_00401088 = arg0;
    D_0040108C = arg1;
    return 0;
}
extern s32 (*D_00401088_x00150328)(s32, s32) __asm__("D_00401088");
extern s32 D_0040108C_x00150328 __asm__("D_0040108C");
s32 func_00150328_x00150328(s32 arg0) __asm__("func_00150328");
s32 func_00150328_x00150328(s32 arg0) {
    if (D_00401088_x00150328 != NULL) {
        D_00401088_x00150328(D_0040108C_x00150328, arg0);
    }
    return 0;
}
s32 func_00150360(void) {
    D_00401084 += 1;
    return 0;
}
s32 func_00150380(void) {
    D_00401084 -= 1;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001503A0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150558);
s32 func_001505C8(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg0 = *arg2 + (*arg0 * *arg1);
    return 0;
}
void func_001505E8(void) {
    func_00161880();
    func_00150360();
    memset(&D_004010A8, 0, 0xF40);
}
void func_00150620(void) {
    func_001618A8();
    func_00150380();
    memset(&D_004010A8, 0, 0xF40);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150658);
typedef unsigned char u8_x00150688;
typedef unsigned int u32_x00150688;
struct fn_80045F58_Arg0_x00150688 {
    u8_x00150688 pad_0[0x88];
    u32_x00150688 unk_88;
    u32_x00150688 unk_8C;
};
void func_00150688_x00150688(struct fn_80045F58_Arg0_x00150688 *arg0, u32_x00150688 arg1, u32_x00150688 arg2) __asm__("func_00150688");
/* fn_80045F58: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_80045F58.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00150688_x00150688(struct fn_80045F58_Arg0_x00150688 *arg0, u32_x00150688 arg1, u32_x00150688 arg2) {
    arg0->unk_8C = (arg0->unk_8C + arg2);
    arg0->unk_88 = (arg0->unk_88 + arg2);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001506A8);
void func_001507E8(u8 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 8);
        *(s32 *)((u8 *)arg0 + 8) = 0;
        func_00161A48(temp_a0);
        memset(arg0, 0, 0xF4);
        *(s16 *)((u8 *)arg0 + 0) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", ADXB_DecodeHeaderAdx);
void func_00150B20(u8 *arg0) {
    *(s16 *)((u8 *)arg0 + 0x9A) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150B28);
typedef int s32_x00150BC8;
typedef s32_x00150BC8 ptrdiff_t_x00150BC8;
typedef char Sint8_x00150BC8;
typedef unsigned short Uint16_x00150BC8;
typedef signed short Sint16_x00150BC8;
typedef unsigned int Uint32_x00150BC8;
typedef signed int Sint32_x00150BC8;
extern int* sceCdCallback_x00150BC8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00150BC8 unk0;
               Sint16_x00150BC8 unk2;
               Sint16_x00150BC8 unk4;
               Sint16_x00150BC8 unk6;
} ADXPD_OBJ_SUB_x00150BC8;
typedef struct {
               Sint32_x00150BC8 used;
               Sint32_x00150BC8 unk4;
               Sint32_x00150BC8 mode;
               Sint32_x00150BC8 stat;
               Sint32_x00150BC8 num_blk;
               Sint32_x00150BC8 unk14;
               Sint32_x00150BC8 unk18;
               Sint32_x00150BC8 unk1C;
               Sint32_x00150BC8 unk20;
               Sint32_x00150BC8 unk24;
               ADXPD_OBJ_SUB_x00150BC8 unk28;
               Sint16_x00150BC8 unk30;
               Sint16_x00150BC8 unk32;
               Sint16_x00150BC8 unk34;
               Sint16_x00150BC8 unk36;
               Sint16_x00150BC8 unk38;
               Sint16_x00150BC8 unk3A;
} ADXPD_OBJ_x00150BC8;
typedef ADXPD_OBJ_x00150BC8* ADXPD_x00150BC8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00150BC8;
typedef struct {
               Sint32_x00150BC8 unk0;
               Sint32_x00150BC8 unk4;
               Sint32_x00150BC8 unk8;
               Sint32_x00150BC8 unkC;
               Sint32_x00150BC8 unk10;
               void* unk14;
               Sint32_x00150BC8 unk18;
               Sint32_x00150BC8 unk1C;
               Sint32_x00150BC8 unk20;
               Sint32_x00150BC8 unk24;
               Sint32_x00150BC8 unk28;
} ADXB_UNK_x00150BC8;
typedef struct {
               Sint16_x00150BC8 unk0;
               Sint16_x00150BC8 unk2;
               Sint32_x00150BC8 stat;
               ADXPD_x00150BC8 adxpd;
               Sint8_x00150BC8 encoding_type;
               Sint8_x00150BC8 sample_bitdepth;
               Sint8_x00150BC8 channel_count;
               Sint8_x00150BC8 block_size;
               Sint32_x00150BC8 samples_per_block;
               Sint32_x00150BC8 sample_rate;
               Sint32_x00150BC8 total_samples;
               Sint16_x00150BC8 unk1C;
               char pad1E[2];
               Sint32_x00150BC8 unk20;
               Sint16_x00150BC8 unk24;
               Sint16_x00150BC8 unk26;
               Sint32_x00150BC8 unk28;
               Sint32_x00150BC8 unk2C;
               Sint32_x00150BC8 unk30;
               Sint32_x00150BC8 unk34;
               Sint32_x00150BC8 unk38;
               void* unk3C;
               Sint32_x00150BC8 unk40;
               Sint32_x00150BC8 unk44;
               ADXB_UNK_x00150BC8 unk48;
               Sint32_x00150BC8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*);
               void* object;
               void (*add_wr)(void*, Sint32_x00150BC8, Sint32_x00150BC8);
               Sint32_x00150BC8 unk84;
               Sint32_x00150BC8 unk88;
               Sint32_x00150BC8 unk8C;
               Sint32_x00150BC8 dec_num_sample;
               Sint32_x00150BC8 dec_data_len;
               Sint16_x00150BC8 format;
               Sint16_x00150BC8 unk9A;
               Sint16_x00150BC8 unk9C;
               Sint16_x00150BC8 unk9E;
               Sint16_x00150BC8 unkA0;
               char padA2[0xE];
               Sint32_x00150BC8 unkB0;
               Sint32_x00150BC8 ahx_dec_samples;
               Sint32_x00150BC8 ahx_dec_frames;
               Sint32_x00150BC8 unkBC;
               Sint32_x00150BC8 ac3_dec_samples;
               Sint32_x00150BC8 ac3_dec_frames;
               Sint32_x00150BC8 unkC8;
               ADX_UNK_x00150BC8 unkCC;
               Sint16_x00150BC8 unkDC;
               Sint16_x00150BC8 unkDE[2];
               char padE2[2];
               Sint32_x00150BC8 unkE4;
               char padE8[8];
} ADXB_OBJ_x00150BC8;
typedef ADXB_OBJ_x00150BC8* ADXB_x00150BC8;
Sint32_x00150BC8 ADXB_CheckAc3_x00150BC8(void*) __asm__("func_0014EDB0");
Sint32_x00150BC8 ADXB_DecodeHeaderAc3_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014ED00");
Sint32_x00150BC8 ADXB_CheckAiff_x00150BC8(void*) __asm__("func_0014F2B8");
Sint32_x00150BC8 ADXB_DecodeHeaderAiff_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014F430");
Sint32_x00150BC8 ADXB_CheckAu_x00150BC8(void*) __asm__("func_0014FBA0");
Sint32_x00150BC8 ADXB_DecodeHeaderAu_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014FD08");
extern void ADXB_EntryGetWrFunc_x00150BC8(ADXB_x00150BC8 adxb, void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00150BC8 ADXB_CheckSpsd_x00150BC8(void*) __asm__("func_00151C30");
Sint32_x00150BC8 ADXB_DecodeHeaderSpsd_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_001519C0");
Sint32_x00150BC8 ADXB_CheckWav_x00150BC8(void*) __asm__("func_00152438");
Sint32_x00150BC8 ADXB_DecodeHeaderWav_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_00151E88");
extern void (*ahxsetextfunc_x00150BC8)(Sint32_x00150BC8, Sint16_x00150BC8*) __asm__("ahxsetextfunc");
Sint32_x00150BC8 ADXB_DecodeHeaderAdx_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) __asm__("ADXB_DecodeHeaderAdx");
void ADXB_EntryGetWrFunc_x00150BC8(ADXB_x00150BC8 adxb, void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00150BC8 func_00150BC8_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) __asm__("func_00150BC8");
/* ADXB_DecodeHeader: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00150BC8 func_00150BC8_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) {
    Uint32_x00150BC8 magic = *(Uint16_x00150BC8*)header;
    if ((Uint16_x00150BC8)((magic >> 8) | (magic << 8)) == 0x8000) {
        return ADXB_DecodeHeaderAdx_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckSpsd_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderSpsd_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckWav_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderWav_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAiff_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAiff_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAu_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAu_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAc3_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAc3_x00150BC8(adxb, header, len);
    }
    return -1;
}
void func_00150D30_x00150D30(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00150D30");
void func_00150D30_x00150D30(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x7C)) = arg2;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 0x78)) = arg1;
}
void func_00150D40_x00150D40(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00150D40");
void func_00150D40_x00150D40(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (arg0 + 0x80)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x84)) = arg2;
}
s32 fn_800455A4_x00150D50(u8 *arg0) __asm__("fn_800455A4");
s32 fn_800455A4_x00150D50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x3C);
}
s16 func_00150D58(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x98);
}
s32 func_00150D60(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", fn_80045588);
s8 func_00150D98(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0xD);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150DA0);
s32 func_00150E00(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x10);
}
s8 func_00150E08(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0xF);
}
s32 func_00150E10(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x18);
}
s16 func_00150E18(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x1C);
}
s32 func_00150E20(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s16 func_00150E28(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x24);
}
s32 func_00150E30(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x28);
}
s32 func_00150E38(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *(s32 *)((u8 *)arg0 + 0x2C);
    }
    return var_v0;
}
s32 func_00150E50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}
s32 func_00150E58(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}
s32 func_00150E60(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xCC);
}
s16 func_00150E68(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0xE0);
}
s16 func_00150E70(s32 arg0, s32 arg1) {
    return *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0xE2);
}
s32 func_00150E80(s32 arg0) {
    return arg0 + 0xD0;
}
void func_00150E88(u8 *arg0) {
    func_001619F0(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xAC, arg0 + 0xB0);
    func_00161A28(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xA6, arg0 + 0xA8, arg0 + 0xAA);
}
void func_00150EC8(u8 *arg0) {
    func_001619C8(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xAC, arg0 + 0xB0);
    func_00161A18(*(s32 *)((u8 *)arg0 + 8), *(s16 *)((u8 *)arg0 + 0xA6), *(s16 *)((u8 *)arg0 + 0xA8), *(s16 *)((u8 *)arg0 + 0xAA));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150F08);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150F70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150FB8);
s32 func_001510B8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
typedef int s32_x001510C0;
typedef s32_x001510C0 ptrdiff_t_x001510C0;
typedef char Sint8_x001510C0;
typedef signed short Sint16_x001510C0;
typedef signed int Sint32_x001510C0;
extern int* sceCdCallback_x001510C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x001510C0 unk0;
               Sint16_x001510C0 unk2;
               Sint16_x001510C0 unk4;
               Sint16_x001510C0 unk6;
} ADXPD_OBJ_SUB_x001510C0;
typedef struct {
               Sint32_x001510C0 used;
               Sint32_x001510C0 unk4;
               Sint32_x001510C0 mode;
               Sint32_x001510C0 stat;
               Sint32_x001510C0 num_blk;
               Sint32_x001510C0 unk14;
               Sint32_x001510C0 unk18;
               Sint32_x001510C0 unk1C;
               Sint32_x001510C0 unk20;
               Sint32_x001510C0 unk24;
               ADXPD_OBJ_SUB_x001510C0 unk28;
               Sint16_x001510C0 unk30;
               Sint16_x001510C0 unk32;
               Sint16_x001510C0 unk34;
               Sint16_x001510C0 unk36;
               Sint16_x001510C0 unk38;
               Sint16_x001510C0 unk3A;
} ADXPD_OBJ_x001510C0;
typedef ADXPD_OBJ_x001510C0* ADXPD_x001510C0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001510C0;
typedef struct {
               Sint32_x001510C0 unk0;
               Sint32_x001510C0 unk4;
               Sint32_x001510C0 unk8;
               Sint32_x001510C0 unkC;
               Sint32_x001510C0 unk10;
               void* unk14;
               Sint32_x001510C0 unk18;
               Sint32_x001510C0 unk1C;
               Sint32_x001510C0 unk20;
               Sint32_x001510C0 unk24;
               Sint32_x001510C0 unk28;
} ADXB_UNK_x001510C0;
typedef struct {
               Sint16_x001510C0 unk0;
               Sint16_x001510C0 unk2;
               Sint32_x001510C0 stat;
               ADXPD_x001510C0 adxpd;
               Sint8_x001510C0 encoding_type;
               Sint8_x001510C0 sample_bitdepth;
               Sint8_x001510C0 channel_count;
               Sint8_x001510C0 block_size;
               Sint32_x001510C0 samples_per_block;
               Sint32_x001510C0 sample_rate;
               Sint32_x001510C0 total_samples;
               Sint16_x001510C0 unk1C;
               char pad1E[2];
               Sint32_x001510C0 unk20;
               Sint16_x001510C0 unk24;
               Sint16_x001510C0 unk26;
               Sint32_x001510C0 unk28;
               Sint32_x001510C0 unk2C;
               Sint32_x001510C0 unk30;
               Sint32_x001510C0 unk34;
               Sint32_x001510C0 unk38;
               void* unk3C;
               Sint32_x001510C0 unk40;
               Sint32_x001510C0 unk44;
               ADXB_UNK_x001510C0 unk48;
               Sint32_x001510C0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*);
               void* object;
               void (*add_wr)(void*, Sint32_x001510C0, Sint32_x001510C0);
               Sint32_x001510C0 unk84;
               Sint32_x001510C0 unk88;
               Sint32_x001510C0 unk8C;
               Sint32_x001510C0 dec_num_sample;
               Sint32_x001510C0 dec_data_len;
               Sint16_x001510C0 format;
               Sint16_x001510C0 unk9A;
               Sint16_x001510C0 unk9C;
               Sint16_x001510C0 unk9E;
               Sint16_x001510C0 unkA0;
               char padA2[0xE];
               Sint32_x001510C0 unkB0;
               Sint32_x001510C0 ahx_dec_samples;
               Sint32_x001510C0 ahx_dec_frames;
               Sint32_x001510C0 unkBC;
               Sint32_x001510C0 ac3_dec_samples;
               Sint32_x001510C0 ac3_dec_frames;
               Sint32_x001510C0 unkC8;
               ADX_UNK_x001510C0 unkCC;
               Sint16_x001510C0 unkDC;
               Sint16_x001510C0 unkDE[2];
               char padE2[2];
               Sint32_x001510C0 unkE4;
               char padE8[8];
} ADXB_OBJ_x001510C0;
typedef ADXB_OBJ_x001510C0* ADXB_x001510C0;
extern void ADXB_EntryGetWrFunc_x001510C0(ADXB_x001510C0 adxb, void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*), void* object) __asm__("ADXB_EntryGetWrFunc");
extern void (*ahxsetextfunc_x001510C0)(Sint32_x001510C0, Sint16_x001510C0*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x001510C0(ADXB_x001510C0 adxb, void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*), void* object) __asm__("ADXB_EntryGetWrFunc");
void func_001510C0_x001510C0(ADXB_x001510C0 adxb, Sint32_x001510C0 arg1, Sint32_x001510C0 arg2) __asm__("func_001510C0");
/* ADXB_EntryData: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001510C0_x001510C0(ADXB_x001510C0 adxb, Sint32_x001510C0 arg1, Sint32_x001510C0 arg2) {
    if (adxb->format == 0) {
        adxb->unk48.unk0 = arg1;
        adxb->unk48.unk4 = arg2 / adxb->block_size;
        adxb->unk74 = 0;
        adxb->dec_num_sample = 0;
        adxb->dec_data_len = 0;
    } else {
        adxb->unk48.unk0 = arg1;
        adxb->unk48.unk4 = arg2 / ((adxb->sample_bitdepth / 8) * adxb->channel_count);
        adxb->unk74 = 0;
        adxb->dec_num_sample = 0;
        adxb->dec_data_len = 0;
    }
}
void func_00151148(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 4) == 0) {
        *(s32 *)((u8 *)arg0 + 4) = 1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151160);
void func_001511A8(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 4) == 3) {
        func_00161B68(*(s32 *)((u8 *)arg0 + 8));
        *(s32 *)((u8 *)arg0 + 0x8C) = 0;
        *(s32 *)((u8 *)arg0 + 4) = 0;
    }
}
s32 func_001511E8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x94);
}
s32 func_001511F0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x90);
}
s32 func_001511F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151200);
typedef int s32_x00151250;
typedef s32_x00151250 ptrdiff_t_x00151250;
typedef char Sint8_x00151250;
typedef signed short Sint16_x00151250;
typedef signed int Sint32_x00151250;
extern int* sceCdCallback_x00151250(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00151250 unk0;
               Sint16_x00151250 unk2;
               Sint16_x00151250 unk4;
               Sint16_x00151250 unk6;
} ADXPD_OBJ_SUB_x00151250;
typedef struct {
               Sint32_x00151250 used;
               Sint32_x00151250 unk4;
               Sint32_x00151250 mode;
               Sint32_x00151250 stat;
               Sint32_x00151250 num_blk;
               Sint32_x00151250 unk14;
               Sint32_x00151250 unk18;
               Sint32_x00151250 unk1C;
               Sint32_x00151250 unk20;
               Sint32_x00151250 unk24;
               ADXPD_OBJ_SUB_x00151250 unk28;
               Sint16_x00151250 unk30;
               Sint16_x00151250 unk32;
               Sint16_x00151250 unk34;
               Sint16_x00151250 unk36;
               Sint16_x00151250 unk38;
               Sint16_x00151250 unk3A;
} ADXPD_OBJ_x00151250;
typedef ADXPD_OBJ_x00151250* ADXPD_x00151250;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00151250;
typedef struct {
               Sint32_x00151250 unk0;
               Sint32_x00151250 unk4;
               Sint32_x00151250 unk8;
               Sint32_x00151250 unkC;
               Sint32_x00151250 unk10;
               void* unk14;
               Sint32_x00151250 unk18;
               Sint32_x00151250 unk1C;
               Sint32_x00151250 unk20;
               Sint32_x00151250 unk24;
               Sint32_x00151250 unk28;
} ADXB_UNK_x00151250;
typedef struct {
               Sint16_x00151250 unk0;
               Sint16_x00151250 unk2;
               Sint32_x00151250 stat;
               ADXPD_x00151250 adxpd;
               Sint8_x00151250 encoding_type;
               Sint8_x00151250 sample_bitdepth;
               Sint8_x00151250 channel_count;
               Sint8_x00151250 block_size;
               Sint32_x00151250 samples_per_block;
               Sint32_x00151250 sample_rate;
               Sint32_x00151250 total_samples;
               Sint16_x00151250 unk1C;
               char pad1E[2];
               Sint32_x00151250 unk20;
               Sint16_x00151250 unk24;
               Sint16_x00151250 unk26;
               Sint32_x00151250 unk28;
               Sint32_x00151250 unk2C;
               Sint32_x00151250 unk30;
               Sint32_x00151250 unk34;
               Sint32_x00151250 unk38;
               void* unk3C;
               Sint32_x00151250 unk40;
               Sint32_x00151250 unk44;
               ADXB_UNK_x00151250 unk48;
               Sint32_x00151250 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*);
               void* object;
               void (*add_wr)(void*, Sint32_x00151250, Sint32_x00151250);
               Sint32_x00151250 unk84;
               Sint32_x00151250 unk88;
               Sint32_x00151250 unk8C;
               Sint32_x00151250 dec_num_sample;
               Sint32_x00151250 dec_data_len;
               Sint16_x00151250 format;
               Sint16_x00151250 unk9A;
               Sint16_x00151250 unk9C;
               Sint16_x00151250 unk9E;
               Sint16_x00151250 unkA0;
               char padA2[0xE];
               Sint32_x00151250 unkB0;
               Sint32_x00151250 ahx_dec_samples;
               Sint32_x00151250 ahx_dec_frames;
               Sint32_x00151250 unkBC;
               Sint32_x00151250 ac3_dec_samples;
               Sint32_x00151250 ac3_dec_frames;
               Sint32_x00151250 unkC8;
               ADX_UNK_x00151250 unkCC;
               Sint16_x00151250 unkDC;
               Sint16_x00151250 unkDE[2];
               char padE2[2];
               Sint32_x00151250 unkE4;
               char padE8[8];
} ADXB_OBJ_x00151250;
typedef ADXB_OBJ_x00151250* ADXB_x00151250;
extern void ADXB_EntryGetWrFunc_x00151250(ADXB_x00151250 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00151250 ADXPD_EntrySte_x00151250(ADXPD_x00151250, Sint32_x00151250, Sint32_x00151250, Sint32_x00151250, Sint32_x00151250) __asm__("func_00161AC0");
void ADXPD_Start_x00151250(ADXPD_x00151250) __asm__("func_00161B20");
extern void (*ahxsetextfunc_x00151250)(Sint32_x00151250, Sint16_x00151250*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x00151250(ADXB_x00151250 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*), void* object) __asm__("ADXB_EntryGetWrFunc");
void func_00151250_x00151250(ADXB_x00151250 adxb, Sint32_x00151250 arg1) __asm__("func_00151250");
/* ADXB_EvokeExpandSte: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151250_x00151250(ADXB_x00151250 adxb, Sint32_x00151250 arg1) {
    ADXPD_x00151250 adxpd = adxb->adxpd;
    ADXB_UNK_x00151250* unk = &adxb->unk48;
    Sint32_x00151250 a3;
    Sint32_x00151250 t0;
    a3 = unk->unk14 + (unk->unk20 * 2);
    t0 = a3 + (unk->unk1C * 2);
    ADXPD_EntrySte_x00151250(adxpd, unk->unk0, arg1 * 2, a3, t0);
    ADXPD_Start_x00151250(adxpd);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001512A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151300);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151408);
typedef signed int Sint32_x00151438;
extern int* sceCdCallback_x00151438(void (*func)(int)) __asm__("sceCdCallback");
void memcpy2_x00151438(void* dest, const void* src, Sint32_x00151438 count) __asm__("func_00151408");
void func_00151438_x00151438(void* arg0, Sint32_x00151438 arg1, Sint32_x00151438 arg2, Sint32_x00151438 arg3) __asm__("func_00151438");
/* ADXB_CopyExtraBufSte: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151438_x00151438(void* arg0, Sint32_x00151438 arg1, Sint32_x00151438 arg2, Sint32_x00151438 arg3) {
    memcpy2_x00151438(arg0, arg0 + (arg1 * 2), arg3);
    memcpy2_x00151438(arg0 + (arg2 * 2), arg0 + ((arg2 + arg1) * 2), arg3);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001514A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001514C8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151650);
typedef int s32_x00151790;
typedef s32_x00151790 ptrdiff_t_x00151790;
typedef char Sint8_x00151790;
typedef signed short Sint16_x00151790;
typedef signed int Sint32_x00151790;
extern int* sceCdCallback_x00151790(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00151790 unk0;
               Sint16_x00151790 unk2;
               Sint16_x00151790 unk4;
               Sint16_x00151790 unk6;
} ADXPD_OBJ_SUB_x00151790;
typedef struct {
               Sint32_x00151790 used;
               Sint32_x00151790 unk4;
               Sint32_x00151790 mode;
               Sint32_x00151790 stat;
               Sint32_x00151790 num_blk;
               Sint32_x00151790 unk14;
               Sint32_x00151790 unk18;
               Sint32_x00151790 unk1C;
               Sint32_x00151790 unk20;
               Sint32_x00151790 unk24;
               ADXPD_OBJ_SUB_x00151790 unk28;
               Sint16_x00151790 unk30;
               Sint16_x00151790 unk32;
               Sint16_x00151790 unk34;
               Sint16_x00151790 unk36;
               Sint16_x00151790 unk38;
               Sint16_x00151790 unk3A;
} ADXPD_OBJ_x00151790;
typedef ADXPD_OBJ_x00151790* ADXPD_x00151790;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00151790;
typedef struct {
               Sint32_x00151790 unk0;
               Sint32_x00151790 unk4;
               Sint32_x00151790 unk8;
               Sint32_x00151790 unkC;
               Sint32_x00151790 unk10;
               void* unk14;
               Sint32_x00151790 unk18;
               Sint32_x00151790 unk1C;
               Sint32_x00151790 unk20;
               Sint32_x00151790 unk24;
               Sint32_x00151790 unk28;
} ADXB_UNK_x00151790;
typedef struct {
               Sint16_x00151790 unk0;
               Sint16_x00151790 unk2;
               Sint32_x00151790 stat;
               ADXPD_x00151790 adxpd;
               Sint8_x00151790 encoding_type;
               Sint8_x00151790 sample_bitdepth;
               Sint8_x00151790 channel_count;
               Sint8_x00151790 block_size;
               Sint32_x00151790 samples_per_block;
               Sint32_x00151790 sample_rate;
               Sint32_x00151790 total_samples;
               Sint16_x00151790 unk1C;
               char pad1E[2];
               Sint32_x00151790 unk20;
               Sint16_x00151790 unk24;
               Sint16_x00151790 unk26;
               Sint32_x00151790 unk28;
               Sint32_x00151790 unk2C;
               Sint32_x00151790 unk30;
               Sint32_x00151790 unk34;
               Sint32_x00151790 unk38;
               void* unk3C;
               Sint32_x00151790 unk40;
               Sint32_x00151790 unk44;
               ADXB_UNK_x00151790 unk48;
               Sint32_x00151790 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*);
               void* object;
               void (*add_wr)(void*, Sint32_x00151790, Sint32_x00151790);
               Sint32_x00151790 unk84;
               Sint32_x00151790 unk88;
               Sint32_x00151790 unk8C;
               Sint32_x00151790 dec_num_sample;
               Sint32_x00151790 dec_data_len;
               Sint16_x00151790 format;
               Sint16_x00151790 unk9A;
               Sint16_x00151790 unk9C;
               Sint16_x00151790 unk9E;
               Sint16_x00151790 unkA0;
               char padA2[0xE];
               Sint32_x00151790 unkB0;
               Sint32_x00151790 ahx_dec_samples;
               Sint32_x00151790 ahx_dec_frames;
               Sint32_x00151790 unkBC;
               Sint32_x00151790 ac3_dec_samples;
               Sint32_x00151790 ac3_dec_frames;
               Sint32_x00151790 unkC8;
               ADX_UNK_x00151790 unkCC;
               Sint16_x00151790 unkDC;
               Sint16_x00151790 unkDE[2];
               char padE2[2];
               Sint32_x00151790 unkE4;
               char padE8[8];
} ADXB_OBJ_x00151790;
typedef ADXB_OBJ_x00151790* ADXB_x00151790;
void ADXB_ExecOneAc3_x00151790(ADXB_x00151790 adxb) __asm__("func_0014ECD0");
void ADXB_ExecOneAhx_x00151790(ADXB_x00151790 adxb) __asm__("func_0014EED0");
void ADXB_ExecOneAiff_x00151790(ADXB_x00151790 adxb) __asm__("func_0014F860");
void ADXB_ExecOneAu_x00151790(ADXB_x00151790 adxb) __asm__("func_001502C8");
extern void ADXB_EntryGetWrFunc_x00151790(ADXB_x00151790 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*), void* object) __asm__("ADXB_EntryGetWrFunc");
void ADXB_ExecOneSpsd_x00151790(ADXB_x00151790 adxb) __asm__("func_00151AB8");
void ADXB_ExecOneWav_x00151790(ADXB_x00151790 adxb) __asm__("func_001524A0");
extern void (*ahxsetextfunc_x00151790)(Sint32_x00151790, Sint16_x00151790*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x00151790(ADXB_x00151790 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*), void* object) __asm__("ADXB_EntryGetWrFunc");
void ADXB_ExecOneAdx_x00151790(ADXB_x00151790 adxb) __asm__("func_00151650");
void func_00151790_x00151790(ADXB_x00151790 adxb) __asm__("func_00151790");
/* ADXB_ExecHndl: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151790_x00151790(ADXB_x00151790 adxb) {
    if (adxb->format == 0) {
        ADXB_ExecOneAdx_x00151790(adxb);
    } else if (adxb->format == 10) {
        ADXB_ExecOneAhx_x00151790(adxb);
    } else if (adxb->format == 2) {
        ADXB_ExecOneSpsd_x00151790(adxb);
    } else if (adxb->format == 3) {
        ADXB_ExecOneAiff_x00151790(adxb);
    } else if (adxb->format == 4) {
        ADXB_ExecOneAu_x00151790(adxb);
    } else if (adxb->format == 1) {
        ADXB_ExecOneWav_x00151790(adxb);
    } else if (adxb->format == 15) {
        ADXB_ExecOneAc3_x00151790(adxb);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151840);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001518A0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001519C0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151AB8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151C30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151C58);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151E88);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151F88);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152100);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152298);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152438);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001524A0);
void func_001524F8(void) {
    D_00401FF0 = 0;
}
void func_00152508(void) {
    func_0016FF40();
}
void func_00152520(void) {
    func_0016FF58();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", fn_80046D94);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152698);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152718);
typedef unsigned char Uint8_x001527C0;
typedef char Sint8_x001527C0;
typedef unsigned short Uint16_x001527C0;
typedef signed short Sint16_x001527C0;
typedef signed int Sint32_x001527C0;
extern int* sceCdCallback_x001527C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001527C0 magic;
        struct {
            Uint8_x001527C0 magic_0;
            Uint8_x001527C0 magic_1;
        };
    };
    union {
        Sint16_x001527C0 copyright_offset;
        struct {
            Uint8_x001527C0 copyright_offset_0;
            Uint8_x001527C0 copyright_offset_1;
        };
    };
    Uint8_x001527C0 encoding_type;
    Uint8_x001527C0 block_size;
    Uint8_x001527C0 sample_bitdepth;
    Uint8_x001527C0 channel_count;
    Uint8_x001527C0 sample_rate_0;
    Uint8_x001527C0 sample_rate_1;
    Uint8_x001527C0 sample_rate_2;
    Uint8_x001527C0 sample_rate_3;
    Uint8_x001527C0 total_samples_0;
    Uint8_x001527C0 total_samples_1;
    Uint8_x001527C0 total_samples_2;
    Uint8_x001527C0 total_samples_3;
    union {
        Uint16_x001527C0 high_pass_frequency;
        struct {
            Uint8_x001527C0 high_pass_frequency_0;
            Uint8_x001527C0 high_pass_frequency_1;
        };
    };
    Uint8_x001527C0 version;
    Uint8_x001527C0 flags;
    char pad14[4];
    Uint16_x001527C0 unk18;
    Uint16_x001527C0 unk1A;
    Uint16_x001527C0 unk1C;
    Uint16_x001527C0 unk1E;
} ADXHeader_x001527C0;
Sint32_x001527C0 func_001527C0_x001527C0(ADXHeader_x001527C0* hdr, Sint32_x001527C0 arg1, Sint16_x001527C0* audio_offset, Sint8_x001527C0* encoding_type, Sint8_x001527C0* sample_bitdepth,
                      Sint8_x001527C0* block_size, Sint8_x001527C0* channel_count, Sint32_x001527C0* sample_rate, Sint32_x001527C0* total_samples,
                      Sint32_x001527C0* samples_per_block) __asm__("func_001527C0");
/* ADX_DecodeInfo: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001527C0 func_001527C0_x001527C0(ADXHeader_x001527C0* hdr, Sint32_x001527C0 arg1, Sint16_x001527C0* audio_offset, Sint8_x001527C0* encoding_type, Sint8_x001527C0* sample_bitdepth,
                      Sint8_x001527C0* block_size, Sint8_x001527C0* channel_count, Sint32_x001527C0* sample_rate, Sint32_x001527C0* total_samples,
                      Sint32_x001527C0* samples_per_block) {
    if (arg1 < 16) {
        return -1;
    }
    if ((hdr->magic_1 | (hdr->magic_0 << 8)) != 0x8000) {
        return -2;
    }
    *audio_offset = ((hdr->copyright_offset_0 << 8) | hdr->copyright_offset_1) + 4;
    *encoding_type = hdr->encoding_type;
    *block_size = hdr->block_size;
    *sample_bitdepth = hdr->sample_bitdepth;
    *channel_count = hdr->channel_count;
    *sample_rate =
        (hdr->sample_rate_0 << 24) | (hdr->sample_rate_1 << 16) | (hdr->sample_rate_2 << 8) | hdr->sample_rate_3;
    *total_samples = (hdr->total_samples_0 << 24) | (hdr->total_samples_1 << 16) | (hdr->total_samples_2 << 8) |
                     hdr->total_samples_3;
    if (*sample_bitdepth == 0) {
        *samples_per_block = 0;
    } else {
        *samples_per_block = (*block_size - 2) * 8 / *sample_bitdepth;
    }
    return 0;
}
typedef unsigned char Uint8_x001528C0;
typedef unsigned short Uint16_x001528C0;
typedef signed short Sint16_x001528C0;
typedef unsigned int Uint32_x001528C0;
typedef signed int Sint32_x001528C0;
extern int* sceCdCallback_x001528C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001528C0 magic;
        struct {
            Uint8_x001528C0 magic_0;
            Uint8_x001528C0 magic_1;
        };
    };
    union {
        Sint16_x001528C0 copyright_offset;
        struct {
            Uint8_x001528C0 copyright_offset_0;
            Uint8_x001528C0 copyright_offset_1;
        };
    };
    Uint8_x001528C0 encoding_type;
    Uint8_x001528C0 block_size;
    Uint8_x001528C0 sample_bitdepth;
    Uint8_x001528C0 channel_count;
    Uint8_x001528C0 sample_rate_0;
    Uint8_x001528C0 sample_rate_1;
    Uint8_x001528C0 sample_rate_2;
    Uint8_x001528C0 sample_rate_3;
    Uint8_x001528C0 total_samples_0;
    Uint8_x001528C0 total_samples_1;
    Uint8_x001528C0 total_samples_2;
    Uint8_x001528C0 total_samples_3;
    union {
        Uint16_x001528C0 high_pass_frequency;
        struct {
            Uint8_x001528C0 high_pass_frequency_0;
            Uint8_x001528C0 high_pass_frequency_1;
        };
    };
    Uint8_x001528C0 version;
    Uint8_x001528C0 flags;
    char pad14[4];
    Uint16_x001528C0 unk18;
    Uint16_x001528C0 unk1A;
    Uint16_x001528C0 unk1C;
    Uint16_x001528C0 unk1E;
} ADXHeader_x001528C0;
Sint32_x001528C0 func_001528C0_x001528C0(ADXHeader_x001528C0* hdr, Sint32_x001528C0 arg1, Sint16_x001528C0* high_pass_frequency) __asm__("func_001528C0");
/* ADX_DecodeInfoExADPCM2: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001528C0 func_001528C0_x001528C0(ADXHeader_x001528C0* hdr, Sint32_x001528C0 arg1, Sint16_x001528C0* high_pass_frequency) {
    Uint32_x001528C0 magic;
    if (arg1 < 0x12) {
        return -1;
    }
    if (((Uint16_x001528C0)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x001528C0)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0xE) {
        return -1;
    }
    *high_pass_frequency = ((Sint16_x001528C0)((((hdr->high_pass_frequency & 0xFF00) >> 8)) | ((hdr->high_pass_frequency << 8) & 0xFF00)));
    return 0;
}
typedef unsigned char Uint8_x00152940;
typedef char Sint8_x00152940;
typedef unsigned short Uint16_x00152940;
typedef signed short Sint16_x00152940;
typedef signed int Sint32_x00152940;
extern int* sceCdCallback_x00152940(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x00152940 magic;
        struct {
            Uint8_x00152940 magic_0;
            Uint8_x00152940 magic_1;
        };
    };
    union {
        Sint16_x00152940 copyright_offset;
        struct {
            Uint8_x00152940 copyright_offset_0;
            Uint8_x00152940 copyright_offset_1;
        };
    };
    Uint8_x00152940 encoding_type;
    Uint8_x00152940 block_size;
    Uint8_x00152940 sample_bitdepth;
    Uint8_x00152940 channel_count;
    Uint8_x00152940 sample_rate_0;
    Uint8_x00152940 sample_rate_1;
    Uint8_x00152940 sample_rate_2;
    Uint8_x00152940 sample_rate_3;
    Uint8_x00152940 total_samples_0;
    Uint8_x00152940 total_samples_1;
    Uint8_x00152940 total_samples_2;
    Uint8_x00152940 total_samples_3;
    union {
        Uint16_x00152940 high_pass_frequency;
        struct {
            Uint8_x00152940 high_pass_frequency_0;
            Uint8_x00152940 high_pass_frequency_1;
        };
    };
    Uint8_x00152940 version;
    Uint8_x00152940 flags;
    char pad14[4];
    Uint16_x00152940 unk18;
    Uint16_x00152940 unk1A;
    Uint16_x00152940 unk1C;
    Uint16_x00152940 unk1E;
} ADXHeader_x00152940;
Sint32_x00152940 func_00152940_x00152940(ADXHeader_x00152940* hdr, Sint32_x00152940 arg1, Sint8_x00152940* version, Sint8_x00152940* flags) __asm__("func_00152940");
/* ADX_DecodeInfoExVer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00152940 func_00152940_x00152940(ADXHeader_x00152940* hdr, Sint32_x00152940 arg1, Sint8_x00152940* version, Sint8_x00152940* flags) {
    if (arg1 < 0x14) {
        return -1;
    }
    if (((Uint16_x00152940)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x00152940)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0x10) {
        return -1;
    }
    *version = hdr->version;
    *flags = hdr->flags;
    return 0;
}
typedef unsigned char Uint8_x001529B8;
typedef char Sint8_x001529B8;
typedef unsigned short Uint16_x001529B8;
typedef signed short Sint16_x001529B8;
typedef unsigned int Uint32_x001529B8;
typedef signed int Sint32_x001529B8;
extern int* sceCdCallback_x001529B8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001529B8 magic;
        struct {
            Uint8_x001529B8 magic_0;
            Uint8_x001529B8 magic_1;
        };
    };
    union {
        Sint16_x001529B8 copyright_offset;
        struct {
            Uint8_x001529B8 copyright_offset_0;
            Uint8_x001529B8 copyright_offset_1;
        };
    };
    Uint8_x001529B8 encoding_type;
    Uint8_x001529B8 block_size;
    Uint8_x001529B8 sample_bitdepth;
    Uint8_x001529B8 channel_count;
    Uint8_x001529B8 sample_rate_0;
    Uint8_x001529B8 sample_rate_1;
    Uint8_x001529B8 sample_rate_2;
    Uint8_x001529B8 sample_rate_3;
    Uint8_x001529B8 total_samples_0;
    Uint8_x001529B8 total_samples_1;
    Uint8_x001529B8 total_samples_2;
    Uint8_x001529B8 total_samples_3;
    union {
        Uint16_x001529B8 high_pass_frequency;
        struct {
            Uint8_x001529B8 high_pass_frequency_0;
            Uint8_x001529B8 high_pass_frequency_1;
        };
    };
    Uint8_x001529B8 version;
    Uint8_x001529B8 flags;
    char pad14[4];
    Uint16_x001529B8 unk18;
    Uint16_x001529B8 unk1A;
    Uint16_x001529B8 unk1C;
    Uint16_x001529B8 unk1E;
} ADXHeader_x001529B8;
Sint32_x001529B8 ADX_DecodeInfoExVer_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint8_x001529B8* version, Sint8_x001529B8* flags) __asm__("func_00152940");
Sint32_x001529B8 ADX_DecodeInfoExVer_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint8_x001529B8* version, Sint8_x001529B8* flags) __asm__("func_00152940");
Sint32_x001529B8 func_001529B8_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint16_x001529B8* arg2, Sint16_x001529B8* arg3) __asm__("func_001529B8");
/* ADX_DecodeInfoExIdly: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001529B8 func_001529B8_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint16_x001529B8* arg2, Sint16_x001529B8* arg3) {
    Uint8_x001529B8 version;
    Sint8_x001529B8 flags;
    Uint32_x001529B8 magic;
    if (ADX_DecodeInfoExVer_x001529B8(hdr, arg1, &version, &flags) != 0) {
        return -1;
    }
    if (version >= 4) {
        if (arg1 < 0x20) {
            return -1;
        }
        if (((Uint16_x001529B8)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
            return -2;
        }
        if (((Sint16_x001529B8)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0x1C) {
            return -1;
        }
        arg2[0] = ((Sint16_x001529B8)((((hdr->unk18 & 0xFF00) >> 8)) | ((hdr->unk18 << 8) & 0xFF00)));
        arg3[0] = ((Sint16_x001529B8)((((hdr->unk1A & 0xFF00) >> 8)) | ((hdr->unk1A << 8) & 0xFF00)));
        arg2[1] = ((Sint16_x001529B8)((((hdr->unk1C & 0xFF00) >> 8)) | ((hdr->unk1C << 8) & 0xFF00)));
        arg3[1] = ((Sint16_x001529B8)((((hdr->unk1E & 0xFF00) >> 8)) | ((hdr->unk1E << 8) & 0xFF00)));
    } else {
        arg3[1] = 0;
        arg2[1] = 0;
        arg3[0] = 0;
        arg2[0] = 0;
    }
    return 0;
}
typedef unsigned char Uint8_x00152AF0;
typedef char Sint8_x00152AF0;
typedef unsigned short Uint16_x00152AF0;
typedef signed short Sint16_x00152AF0;
typedef unsigned int Uint32_x00152AF0;
typedef signed int Sint32_x00152AF0;
extern int* sceCdCallback_x00152AF0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x00152AF0 magic;
        struct {
            Uint8_x00152AF0 magic_0;
            Uint8_x00152AF0 magic_1;
        };
    };
    union {
        Sint16_x00152AF0 copyright_offset;
        struct {
            Uint8_x00152AF0 copyright_offset_0;
            Uint8_x00152AF0 copyright_offset_1;
        };
    };
    Uint8_x00152AF0 encoding_type;
    Uint8_x00152AF0 block_size;
    Uint8_x00152AF0 sample_bitdepth;
    Uint8_x00152AF0 channel_count;
    Uint8_x00152AF0 sample_rate_0;
    Uint8_x00152AF0 sample_rate_1;
    Uint8_x00152AF0 sample_rate_2;
    Uint8_x00152AF0 sample_rate_3;
    Uint8_x00152AF0 total_samples_0;
    Uint8_x00152AF0 total_samples_1;
    Uint8_x00152AF0 total_samples_2;
    Uint8_x00152AF0 total_samples_3;
    union {
        Uint16_x00152AF0 high_pass_frequency;
        struct {
            Uint8_x00152AF0 high_pass_frequency_0;
            Uint8_x00152AF0 high_pass_frequency_1;
        };
    };
    Uint8_x00152AF0 version;
    Uint8_x00152AF0 flags;
    char pad14[4];
    Uint16_x00152AF0 unk18;
    Uint16_x00152AF0 unk1A;
    Uint16_x00152AF0 unk1C;
    Uint16_x00152AF0 unk1E;
} ADXHeader_x00152AF0;
Sint32_x00152AF0 ADX_DecodeInfoExVer_x00152AF0(ADXHeader_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint8_x00152AF0* version, Sint8_x00152AF0* flags) __asm__("func_00152940");
Sint32_x00152AF0 ADX_DecodeInfoExVer_x00152AF0(ADXHeader_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint8_x00152AF0* version, Sint8_x00152AF0* flags) __asm__("func_00152940");
Sint32_x00152AF0 func_00152AF0_x00152AF0(Uint8_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint32_x00152AF0* arg2, Sint16_x00152AF0* arg3, Sint16_x00152AF0* arg4, Sint32_x00152AF0* arg5,
                            Sint32_x00152AF0* arg6, Sint32_x00152AF0* arg7, Sint32_x00152AF0* arg8) __asm__("func_00152AF0");
/* ADX_DecodeInfoExLoop: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00152AF0 func_00152AF0_x00152AF0(Uint8_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint32_x00152AF0* arg2, Sint16_x00152AF0* arg3, Sint16_x00152AF0* arg4, Sint32_x00152AF0* arg5,
                            Sint32_x00152AF0* arg6, Sint32_x00152AF0* arg7, Sint32_x00152AF0* arg8) {
    Uint8_x00152AF0 version;
    Sint8_x00152AF0 flags;
    Sint32_x00152AF0 err;
    Uint32_x00152AF0 magic;
    Uint16_x00152AF0* p;
    Sint32_x00152AF0 temp_t5;
    Sint32_x00152AF0 temp_a2;
    *arg3 = 0;
    err = ADX_DecodeInfoExVer_x00152AF0(hdr, arg1, &version, &flags);
    if (err != 0) {
        return err;
    }
    temp_a2 = 0x30;
    if (version == 4) {
        temp_a2 = 0x3C;
    }
    if (arg1 < temp_a2) {
        return -1;
    }
    if (((Uint16_x00152AF0)((((((Uint16_x00152AF0*)hdr)[0] & 0xFF00) >> 8)) | ((((Uint16_x00152AF0*)hdr)[0] << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x00152AF0)((((((Sint16_x00152AF0*)hdr)[1] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)hdr)[1] << 8) & 0xFF00))) < (temp_a2 - 4)) {
        return -1;
    }
    temp_t5 = (version != 4) ? 0x14 : 0x20;
    *arg2 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    *arg3 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    if (*arg3 != 1) {
        return -2;
    }
    temp_t5 += 2;
    *arg4 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    *arg5 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg6 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg7 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg8 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152D50);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152F70);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152FD0);
void func_00153028(s32 arg0) {
    D_00401FF8 = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00153038);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001531A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00153440);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001536E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00153728);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00153908);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00153CD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154018);
void func_00154088(void) {
    memset(&D_00402008, 0, 0x100);
    D_00402000 = 0;
    D_00402004 = 0;
}
void func_001540C0(void) {
    memset(&D_00402008, 0, 0x100);
    D_00402000 = 0;
    D_00402004 = 0;
}
void func_001540F8(s32 arg0, s32 arg1) {
    D_00402000 = arg0;
    D_00402004 = arg1;
    func_00170620();
}
s32 func_00128040_x00154120(s32 *, s32, s32) __asm__("func_00128040");
s32 func_00170070_x00154120(s32 *) __asm__("func_00170070");
extern s32 (*D_00402000_x00154120)(s32, s32 *) __asm__("D_00402000");
extern s32 D_00402004_x00154120 __asm__("D_00402004");
extern s32 D_00402008_x00154120 __asm__("D_00402008");
void ADXERR_CallErrFunc1_x00154120(s32 arg0) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc1_x00154120(s32 arg0) {
    func_00128040_x00154120(&D_00402008_x00154120, arg0, 0xFF);
    if (D_00402000_x00154120 != NULL) {
        D_00402000_x00154120(D_00402004_x00154120, &D_00402008_x00154120);
    }
    func_00170070_x00154120(&D_00402008_x00154120);
}
s32 func_00127CD8_x00154178(s32 *, s32, s32) __asm__("func_00127CD8");
s32 func_00128040_x00154178(s32 *, s32, s32) __asm__("func_00128040");
s32 func_00170070_x00154178(s32 *) __asm__("func_00170070");
extern s32 (*D_00402000_x00154178)(s32, s32 *) __asm__("D_00402000");
extern s32 D_00402004_x00154178 __asm__("D_00402004");
extern s32 D_00402008_x00154178 __asm__("D_00402008");
void func_00154178_x00154178(s32 arg0, s32 arg1) __asm__("func_00154178");
void func_00154178_x00154178(s32 arg0, s32 arg1) {
    func_00128040_x00154178(&D_00402008_x00154178, arg0, 0xFF);
    func_00127CD8_x00154178(&D_00402008_x00154178, arg1, 0xFF);
    if (D_00402000_x00154178 != NULL) {
        D_00402000_x00154178(D_00402004_x00154178, &D_00402008_x00154178);
    }
    func_00170070_x00154178(&D_00402008_x00154178);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001541E8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001542F0);
typedef char Sint8_x00154378;
typedef signed int Sint32_x00154378;
void InvalidDCache_x00154378(void*, void*) __asm__("func_0010AC98");
extern int AddIntcHandler_x00154378(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00154378(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_00154378_x00154378(Sint8_x00154378* buf, Sint32_x00154378 bsize) __asm__("func_00154378");
/* ADXF_Ocbi: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fcch.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154378_x00154378(Sint8_x00154378* buf, Sint32_x00154378 bsize) {
    InvalidDCache_x00154378(buf, buf + bsize - 1);
}
typedef unsigned int size_t_x00154398;
typedef int s32_x00154398;
typedef s32_x00154398 intptr_t_x00154398;
typedef unsigned char Uint8_x00154398;
typedef char Sint8_x00154398;
typedef unsigned short Uint16_x00154398;
typedef signed short Sint16_x00154398;
typedef unsigned int Uint32_x00154398;
typedef signed int Sint32_x00154398;
typedef char Char8_x00154398;
typedef struct _UUID_x00154398 {
    Uint32_x00154398 Data1;
    Uint16_x00154398 Data2;
    Uint16_x00154398 Data3;
    Uint8_x00154398 Data4[8];
} UUID_x00154398;
typedef struct {
        Sint8_x00154398 *data;
        Sint32_x00154398 len;
} SJCK_x00154398;
typedef struct {
        struct _sj_vtbl_x00154398 *vtbl;
} SJ_OBJ_x00154398;
typedef SJ_OBJ_x00154398 *SJ_x00154398;
typedef struct _sj_vtbl_x00154398 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00154398 sj);
        UUID_x00154398 *(*GetUuid)(SJ_x00154398 sj);
        void (*Reset)(SJ_x00154398 sj);
        void (*GetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, Sint32_x00154398 nbyte, SJCK_x00154398 *ck);
        void (*UngetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, SJCK_x00154398 *ck);
        void (*PutChunk)(SJ_x00154398 sj, Sint32_x00154398 id, SJCK_x00154398 *ck);
        Sint32_x00154398 (*GetNumData)(SJ_x00154398 sj, Sint32_x00154398 id);
        Sint32_x00154398 (*IsGetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, Sint32_x00154398 nbyte, Sint32_x00154398 *rbyte);
        void (*EntryErrFunc)(SJ_x00154398 sj,
                                        void (*func)(void *obj, Sint32_x00154398 ecode), void *obj);
} SJ_IF_x00154398;
typedef void *ADXSTM_x00154398;
typedef struct _adx_fs_x00154398 {
    Sint8_x00154398 used;
    Sint8_x00154398 stat;
    Sint8_x00154398 sjflag;
    Sint8_x00154398 stopnw_flg;
    ADXSTM_x00154398 stm;
    SJ_x00154398 sj;
    Sint32_x00154398 fnsct;
    Sint32_x00154398 fsize;
    Sint32_x00154398 skpos;
    Sint32_x00154398 rdstpos;
    Sint32_x00154398 rqsct;
    Sint32_x00154398 rdsct;
    Sint8_x00154398 *buf;
    Sint32_x00154398 bsize;
    Sint32_x00154398 rqrdsct;
    Sint32_x00154398 ofst;
    void *dir;
    const Char8_x00154398 *unk38;
    Sint32_x00154398 unk3C;
    Sint32_x00154398 unk40;
} ADX_FS_x00154398;
typedef ADX_FS_x00154398 *ADXF_x00154398;
typedef struct _adxf_ptinfo_x00154398 {
    struct _adxf_ptinfo_x00154398 *next;
    Sint32_x00154398 size;
    Sint32_x00154398 nfile;
    Uint16_x00154398 nentry;
    Sint8_x00154398 type;
    Sint8_x00154398 rev;
    Sint8_x00154398 fname[(256)];
    void *curdir;
    Sint32_x00154398 ofst;
    Sint32_x00154398 top;
    Sint32_x00154398 file_sizes[0];
} ADXF_PTINFO_x00154398;
typedef struct _adxf_cmd_hstry_x00154398 {
    Uint8_x00154398 cmdid;
    Uint8_x00154398 fg;
    Uint16_x00154398 ncall;
    intptr_t_x00154398 prm[3];
} ADXF_CMD_HSTRY_x00154398;
extern ADX_FS_x00154398 adxf_obj_x00154398[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154398* adxf_ptinfo_x00154398[(256)] __asm__("D_00402550");
extern Sint32_x00154398 adxf_ocbi_fg_x00154398 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154398 adxf_cmd_hstry_x00154398[(16)] __asm__("D_00402958");
extern Sint16_x00154398 adxf_cmd_ncall_x00154398[(16)] __asm__("D_00402A58");
extern Sint32_x00154398 adxf_hstry_no_x00154398 __asm__("D_00402A78");
extern ADXF_x00154398 adxf_ldptnw_hn_x00154398 __asm__("D_00402A80");
extern Sint32_x00154398 adxf_ldptnw_ptid_x00154398 __asm__("D_00402A84");
extern Sint32_x00154398 adxf_flno_x00154398 __asm__("D_00402A7C");
void* memset_x00154398(void* s, int c, size_t_x00154398 n) __asm__("memset");
extern Char8_x00154398* volatile adxf_build_x00154398 __asm__("D_00402108");
extern Sint32_x00154398 adxf_init_cnt_x00154398 __asm__("D_0040210C");
extern ADX_FS_x00154398 adxf_obj_x00154398[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154398* adxf_ptinfo_x00154398[(256)] __asm__("D_00402550");
extern Sint32_x00154398 adxf_ocbi_fg_x00154398 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154398 adxf_cmd_hstry_x00154398[(16)] __asm__("D_00402958");
extern Sint16_x00154398 adxf_cmd_ncall_x00154398[(16)] __asm__("D_00402A58");
extern Sint32_x00154398 adxf_hstry_no_x00154398 __asm__("D_00402A78");
extern Sint32_x00154398 adxf_flno_x00154398 __asm__("D_00402A7C");
extern ADXF_x00154398 adxf_ldptnw_hn_x00154398 __asm__("D_00402A80");
extern Sint32_x00154398 adxf_ldptnw_ptid_x00154398 __asm__("D_00402A84");
void func_00154398_x00154398() __asm__("func_00154398");
/* ADXF_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fini.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154398_x00154398() {
    adxf_build_x00154398;
    if (adxf_init_cnt_x00154398 == 0) {
        memset_x00154398(adxf_obj_x00154398, 0, sizeof(adxf_obj_x00154398));
        memset_x00154398(adxf_ptinfo_x00154398, 0, sizeof(adxf_ptinfo_x00154398));
        memset_x00154398(adxf_cmd_hstry_x00154398, 0xFF, sizeof(adxf_cmd_hstry_x00154398));
        memset_x00154398(adxf_cmd_ncall_x00154398, 0, sizeof(adxf_cmd_ncall_x00154398));
        adxf_hstry_no_x00154398 = 0;
        adxf_ocbi_fg_x00154398 = 0;
        adxf_flno_x00154398 = 0;
        adxf_ldptnw_hn_x00154398 = 0;
        adxf_ldptnw_ptid_x00154398 = -1;
    }
    adxf_init_cnt_x00154398 += 1;
}
typedef unsigned int size_t_x00154460;
typedef int s32_x00154460;
typedef s32_x00154460 intptr_t_x00154460;
typedef unsigned char Uint8_x00154460;
typedef char Sint8_x00154460;
typedef unsigned short Uint16_x00154460;
typedef signed short Sint16_x00154460;
typedef unsigned int Uint32_x00154460;
typedef signed int Sint32_x00154460;
typedef char Char8_x00154460;
typedef struct _UUID_x00154460 {
    Uint32_x00154460 Data1;
    Uint16_x00154460 Data2;
    Uint16_x00154460 Data3;
    Uint8_x00154460 Data4[8];
} UUID_x00154460;
typedef struct {
        Sint8_x00154460 *data;
        Sint32_x00154460 len;
} SJCK_x00154460;
typedef struct {
        struct _sj_vtbl_x00154460 *vtbl;
} SJ_OBJ_x00154460;
typedef SJ_OBJ_x00154460 *SJ_x00154460;
typedef struct _sj_vtbl_x00154460 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00154460 sj);
        UUID_x00154460 *(*GetUuid)(SJ_x00154460 sj);
        void (*Reset)(SJ_x00154460 sj);
        void (*GetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, Sint32_x00154460 nbyte, SJCK_x00154460 *ck);
        void (*UngetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, SJCK_x00154460 *ck);
        void (*PutChunk)(SJ_x00154460 sj, Sint32_x00154460 id, SJCK_x00154460 *ck);
        Sint32_x00154460 (*GetNumData)(SJ_x00154460 sj, Sint32_x00154460 id);
        Sint32_x00154460 (*IsGetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, Sint32_x00154460 nbyte, Sint32_x00154460 *rbyte);
        void (*EntryErrFunc)(SJ_x00154460 sj,
                                        void (*func)(void *obj, Sint32_x00154460 ecode), void *obj);
} SJ_IF_x00154460;
typedef void *ADXSTM_x00154460;
typedef struct _adx_fs_x00154460 {
    Sint8_x00154460 used;
    Sint8_x00154460 stat;
    Sint8_x00154460 sjflag;
    Sint8_x00154460 stopnw_flg;
    ADXSTM_x00154460 stm;
    SJ_x00154460 sj;
    Sint32_x00154460 fnsct;
    Sint32_x00154460 fsize;
    Sint32_x00154460 skpos;
    Sint32_x00154460 rdstpos;
    Sint32_x00154460 rqsct;
    Sint32_x00154460 rdsct;
    Sint8_x00154460 *buf;
    Sint32_x00154460 bsize;
    Sint32_x00154460 rqrdsct;
    Sint32_x00154460 ofst;
    void *dir;
    const Char8_x00154460 *unk38;
    Sint32_x00154460 unk3C;
    Sint32_x00154460 unk40;
} ADX_FS_x00154460;
typedef ADX_FS_x00154460 *ADXF_x00154460;
typedef struct _adxf_ptinfo_x00154460 {
    struct _adxf_ptinfo_x00154460 *next;
    Sint32_x00154460 size;
    Sint32_x00154460 nfile;
    Uint16_x00154460 nentry;
    Sint8_x00154460 type;
    Sint8_x00154460 rev;
    Sint8_x00154460 fname[(256)];
    void *curdir;
    Sint32_x00154460 ofst;
    Sint32_x00154460 top;
    Sint32_x00154460 file_sizes[0];
} ADXF_PTINFO_x00154460;
typedef struct _adxf_cmd_hstry_x00154460 {
    Uint8_x00154460 cmdid;
    Uint8_x00154460 fg;
    Uint16_x00154460 ncall;
    intptr_t_x00154460 prm[3];
} ADXF_CMD_HSTRY_x00154460;
void ADXF_CloseAll_x00154460(void) __asm__("func_00155458");
extern ADX_FS_x00154460 adxf_obj_x00154460[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154460* adxf_ptinfo_x00154460[(256)] __asm__("D_00402550");
extern Sint32_x00154460 adxf_ocbi_fg_x00154460 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154460 adxf_cmd_hstry_x00154460[(16)] __asm__("D_00402958");
extern Sint16_x00154460 adxf_cmd_ncall_x00154460[(16)] __asm__("D_00402A58");
extern Sint32_x00154460 adxf_hstry_no_x00154460 __asm__("D_00402A78");
extern ADXF_x00154460 adxf_ldptnw_hn_x00154460 __asm__("D_00402A80");
extern Sint32_x00154460 adxf_ldptnw_ptid_x00154460 __asm__("D_00402A84");
extern Sint32_x00154460 adxf_flno_x00154460 __asm__("D_00402A7C");
void* memset_x00154460(void* s, int c, size_t_x00154460 n) __asm__("memset");
extern Sint32_x00154460 adxf_init_cnt_x00154460 __asm__("D_0040210C");
extern ADX_FS_x00154460 adxf_obj_x00154460[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154460* adxf_ptinfo_x00154460[(256)] __asm__("D_00402550");
extern Sint32_x00154460 adxf_ocbi_fg_x00154460 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154460 adxf_cmd_hstry_x00154460[(16)] __asm__("D_00402958");
extern Sint16_x00154460 adxf_cmd_ncall_x00154460[(16)] __asm__("D_00402A58");
extern Sint32_x00154460 adxf_hstry_no_x00154460 __asm__("D_00402A78");
extern Sint32_x00154460 adxf_flno_x00154460 __asm__("D_00402A7C");
extern ADXF_x00154460 adxf_ldptnw_hn_x00154460 __asm__("D_00402A80");
extern Sint32_x00154460 adxf_ldptnw_ptid_x00154460 __asm__("D_00402A84");
void func_00154460_x00154460() __asm__("func_00154460");
/* ADXF_Finish: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fini.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154460_x00154460() {
    if (--adxf_init_cnt_x00154460 == 0) {
        ADXF_CloseAll_x00154460();
        adxf_ldptnw_ptid_x00154460 = -1;
        adxf_ldptnw_hn_x00154460 = 0;
        adxf_flno_x00154460 = 0;
        adxf_ocbi_fg_x00154460 = 0;
        adxf_hstry_no_x00154460 = 0;
        memset_x00154460(adxf_cmd_ncall_x00154460, 0, sizeof(adxf_cmd_ncall_x00154460));
        memset_x00154460(adxf_cmd_hstry_x00154460, 0xFF, sizeof(adxf_cmd_hstry_x00154460));
        memset_x00154460(adxf_ptinfo_x00154460, 0, sizeof(adxf_ptinfo_x00154460));
        memset_x00154460(adxf_obj_x00154460, 0, sizeof(adxf_obj_x00154460));
    }
}
typedef signed int Sint32_x00154520;
extern int* sceCdCallback_x00154520(void (*func)(int)) __asm__("sceCdCallback");
Sint32_x00154520 func_00154520_x00154520(Sint32_x00154520 bytes) __asm__("func_00154520");
/* ADXF_CALC_BYTE2SCT: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00154520 func_00154520_x00154520(Sint32_x00154520 bytes) {
    Sint32_x00154520 result = bytes / 2048;
    if (bytes % 2048 > 0) {
        result += 1;
    }
    return result;
}
typedef int s32_x00154548;
typedef s32_x00154548 intptr_t_x00154548;
typedef unsigned char Uint8_x00154548;
typedef unsigned short Uint16_x00154548;
typedef signed short Sint16_x00154548;
typedef signed int Sint32_x00154548;
extern int* sceCdCallback_x00154548(void (*func)(int)) __asm__("sceCdCallback");
typedef struct _adxf_cmd_hstry_x00154548 {
    Uint8_x00154548 cmdid;
    Uint8_x00154548 fg;
    Uint16_x00154548 ncall;
    intptr_t_x00154548 prm[3];
} ADXF_CMD_HSTRY_x00154548;
extern ADXF_CMD_HSTRY_x00154548 adxf_cmd_hstry_x00154548[(16)] __asm__("D_00402958");
extern Sint16_x00154548 adxf_cmd_ncall_x00154548[(16)] __asm__("D_00402A58");
extern Sint32_x00154548 adxf_hstry_no_x00154548 __asm__("D_00402A78");
void func_00154548_x00154548(Sint32_x00154548 cmdid, Sint32_x00154548 fg, intptr_t_x00154548 prm_0, intptr_t_x00154548 prm_1, intptr_t_x00154548 prm_2) __asm__("func_00154548");
/* adxf_SetCmdHstry: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154548_x00154548(Sint32_x00154548 cmdid, Sint32_x00154548 fg, intptr_t_x00154548 prm_0, intptr_t_x00154548 prm_1, intptr_t_x00154548 prm_2) {
    ADXF_CMD_HSTRY_x00154548* cmd_hstry;
    adxf_hstry_no_x00154548 %= (16);
    cmd_hstry = &adxf_cmd_hstry_x00154548[adxf_hstry_no_x00154548];
    if (fg == 0) {
        adxf_cmd_ncall_x00154548[cmdid] += 1;
    }
    adxf_hstry_no_x00154548 += 1;
    cmd_hstry->cmdid = cmdid;
    cmd_hstry->fg = fg;
    cmd_hstry->ncall = adxf_cmd_ncall_x00154548[cmdid];
    cmd_hstry->prm[0] = prm_0;
    cmd_hstry->prm[1] = prm_1;
    cmd_hstry->prm[2] = prm_2;
}
typedef signed int Sint32_x001545F8;
extern int* sceCdCallback_x001545F8(void (*func)(int)) __asm__("sceCdCallback");
void func_001545F8_x001545F8() __asm__("func_001545F8");
/* adxf_wait_1ms: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001545F8_x001545F8() {
    Sint32_x001545F8 i;
    for (i = 0; i < 50000; i++) {
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", adxf_ChkPrmPt);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154670);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154690);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154710);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154738);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154760);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154788);
typedef char Sint8_x001547B0;
typedef unsigned short Uint16_x001547B0;
typedef signed int Sint32_x001547B0;
typedef char Char8_x001547B0;
extern int* sceCdCallback_x001547B0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct _adxf_ptinfo_x001547B0 {
    struct _adxf_ptinfo_x001547B0 *next;
    Sint32_x001547B0 size;
    Sint32_x001547B0 nfile;
    Uint16_x001547B0 nentry;
    Sint8_x001547B0 type;
    Sint8_x001547B0 rev;
    Sint8_x001547B0 fname[(256)];
    void *curdir;
    Sint32_x001547B0 ofst;
    Sint32_x001547B0 top;
    Sint32_x001547B0 file_sizes[0];
} ADXF_PTINFO_x001547B0;
Sint32_x001547B0 adxf_LoadPtBothNw_x001547B0(Sint32_x001547B0 ptid, Sint32_x001547B0 arg1, Sint32_x001547B0 arg2, Char8_x001547B0* fname, void* dir, ADXF_PTINFO_x001547B0* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize, Sint32_x001547B0 rev) __asm__("func_001548B0");
Sint32_x001547B0 adxf_LoadPtBothNw_x001547B0(Sint32_x001547B0 ptid, Sint32_x001547B0 arg1, Sint32_x001547B0 arg2, Char8_x001547B0* fname, void* dir, ADXF_PTINFO_x001547B0* ptinfo,
                         void* tmpbuf, Sint32_x001547B0 tbsize, Sint32_x001547B0 rev) __asm__("func_001548B0");
Sint32_x001547B0 func_001547B0_x001547B0(Sint32_x001547B0 ptid, Char8_x001547B0* fname, void* dir, void* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize) __asm__("func_001547B0");
/* ADXF_LoadPtNwEx: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001547B0 func_001547B0_x001547B0(Sint32_x001547B0 ptid, Char8_x001547B0* fname, void* dir, void* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize) {
    return adxf_LoadPtBothNw_x001547B0(ptid, 0, 0, fname, dir, (ADXF_PTINFO_x001547B0*)ptinfo, tmpbuf, tbsize, 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001547F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154830);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154878);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001548B0);
void func_00154AB0(void) {
    func_001553A0(D_00402A80);
    D_00402A80 = 0;
    D_00402A84 = -1;
    D_00402A7C = 0;
    D_00402A8C = 0;
}
void func_00154B00(void) {
    if ((D_00402A80 != 0) && (D_00402A84 >= 0)) {
        if (ADXF_GetStat(D_00402A80) != 1) {
            ADXF_Stop(D_00402A80);
        }
        func_00154AB0();
    }
}
void func_00154B68(void) {
    ADXF_GetPtStat();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", ADXF_GetPtStat);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154F60);
s8 *func_00154F78(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (lbl_80186B68 == 0) {
        var_a3 = &lbl_80186B68;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x10) {
            temp_v0 = (var_a1 * 0x44) + &lbl_80186B68;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", adxf_CreateAdxFs);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", ADXF_Open);
typedef int s32_x00155118;
typedef s32_x00155118 intptr_t_x00155118;
typedef unsigned char Uint8_x00155118;
typedef char Sint8_x00155118;
typedef unsigned short Uint16_x00155118;
typedef unsigned int Uint32_x00155118;
typedef signed int Sint32_x00155118;
typedef char Char8_x00155118;
typedef struct _UUID_x00155118 {
    Uint32_x00155118 Data1;
    Uint16_x00155118 Data2;
    Uint16_x00155118 Data3;
    Uint8_x00155118 Data4[8];
} UUID_x00155118;
typedef struct {
        Sint8_x00155118 *data;
        Sint32_x00155118 len;
} SJCK_x00155118;
typedef struct {
        struct _sj_vtbl_x00155118 *vtbl;
} SJ_OBJ_x00155118;
typedef SJ_OBJ_x00155118 *SJ_x00155118;
typedef struct _sj_vtbl_x00155118 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155118 sj);
        UUID_x00155118 *(*GetUuid)(SJ_x00155118 sj);
        void (*Reset)(SJ_x00155118 sj);
        void (*GetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, Sint32_x00155118 nbyte, SJCK_x00155118 *ck);
        void (*UngetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, SJCK_x00155118 *ck);
        void (*PutChunk)(SJ_x00155118 sj, Sint32_x00155118 id, SJCK_x00155118 *ck);
        Sint32_x00155118 (*GetNumData)(SJ_x00155118 sj, Sint32_x00155118 id);
        Sint32_x00155118 (*IsGetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, Sint32_x00155118 nbyte, Sint32_x00155118 *rbyte);
        void (*EntryErrFunc)(SJ_x00155118 sj,
                                        void (*func)(void *obj, Sint32_x00155118 ecode), void *obj);
} SJ_IF_x00155118;
extern int* sceCdCallback_x00155118(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155118 unk0;
    Sint8_x00155118 stat;
    Sint8_x00155118 read_flg;
    Sint8_x00155118 unk3;
    SJ_x00155118 sj;
    void* cvfs;
    Sint32_x00155118 unkC;
    Sint32_x00155118 file_len;
    Sint32_x00155118 file_sct;
    Sint32_x00155118 unk18;
    Sint32_x00155118 unk1C;
    Sint32_x00155118 unk20;
    SJCK_x00155118 unk24;
    Sint32_x00155118 req_rd_size;
    Sint32_x00155118 eos;
    Uint32_x00155118 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155118 unk40;
    Sint8_x00155118 pause;
    Sint8_x00155118 unk45;
    Sint8_x00155118 unk46;
    Sint8_x00155118 unk47;
    Sint8_x00155118 unk48;
    Sint8_x00155118 unk49;
    char pad4A[6];
    const Char8_x00155118* fname;
    void* dir;
    Sint32_x00155118 cur_ofst;
    Uint32_x00155118 unk5C;
} ADXSTM_OBJ_x00155118;
typedef ADXSTM_OBJ_x00155118* ADXSTM_x00155118;
typedef struct _adx_fs_x00155118 {
    Sint8_x00155118 used;
    Sint8_x00155118 stat;
    Sint8_x00155118 sjflag;
    Sint8_x00155118 stopnw_flg;
    ADXSTM_x00155118 stm;
    SJ_x00155118 sj;
    Sint32_x00155118 fnsct;
    Sint32_x00155118 fsize;
    Sint32_x00155118 skpos;
    Sint32_x00155118 rdstpos;
    Sint32_x00155118 rqsct;
    Sint32_x00155118 rdsct;
    Sint8_x00155118 *buf;
    Sint32_x00155118 bsize;
    Sint32_x00155118 rqrdsct;
    Sint32_x00155118 ofst;
    void *dir;
    const Char8_x00155118 *unk38;
    Sint32_x00155118 unk3C;
    Sint32_x00155118 unk40;
} ADX_FS_x00155118;
typedef ADX_FS_x00155118 *ADXF_x00155118;
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155118(Sint32_x00155118 ncall, Sint32_x00155118 fg, intptr_t_x00155118 ptid, intptr_t_x00155118 flid, intptr_t_x00155118 type) __asm__("func_00154548");
ADXF_x00155118 adxf_CreateAdxFs_x00155118() __asm__("adxf_CreateAdxFs");
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155118(Sint32_x00155118 cmdid, Sint32_x00155118 fg, intptr_t_x00155118 prm_0, intptr_t_x00155118 prm_1, intptr_t_x00155118 prm_2) __asm__("func_00154548");
ADXF_x00155118 adxf_CreateAdxFs_x00155118() __asm__("adxf_CreateAdxFs");
Sint32_x00155118 adxf_SetFileInfoEx_x00155118(ADXF_x00155118 adxf, Char8_x00155118* fname, void* dir) __asm__("ADXF_Open");
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
ADXF_x00155118 func_00155118_x00155118(Char8_x00155118* fname, void* atr) __asm__("func_00155118");
/* ADXF_Open: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
ADXF_x00155118 func_00155118_x00155118(Char8_x00155118* fname, void* atr) {
    ADXF_x00155118 adxf;
    adxf_SetCmdHstry_x00155118((1), 0, (intptr_t_x00155118)fname, (intptr_t_x00155118)atr, -1);
    adxf = adxf_CreateAdxFs_x00155118();
    if (adxf != 0) {
        if (adxf_SetFileInfoEx_x00155118(adxf, fname, atr) < 0) {
            ADXF_Close_x00155118(adxf);
            adxf = 0;
        }
    }
    adxf_SetCmdHstry_x00155118((1), 1, (intptr_t_x00155118)fname, (intptr_t_x00155118)atr, -1);
    return adxf;
}
typedef unsigned char Uint8_x001551B8;
typedef char Sint8_x001551B8;
typedef unsigned short Uint16_x001551B8;
typedef unsigned int Uint32_x001551B8;
typedef signed int Sint32_x001551B8;
typedef char Char8_x001551B8;
typedef struct _UUID_x001551B8 {
    Uint32_x001551B8 Data1;
    Uint16_x001551B8 Data2;
    Uint16_x001551B8 Data3;
    Uint8_x001551B8 Data4[8];
} UUID_x001551B8;
typedef struct {
        Sint8_x001551B8 *data;
        Sint32_x001551B8 len;
} SJCK_x001551B8;
typedef struct {
        struct _sj_vtbl_x001551B8 *vtbl;
} SJ_OBJ_x001551B8;
typedef SJ_OBJ_x001551B8 *SJ_x001551B8;
typedef struct _sj_vtbl_x001551B8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001551B8 sj);
        UUID_x001551B8 *(*GetUuid)(SJ_x001551B8 sj);
        void (*Reset)(SJ_x001551B8 sj);
        void (*GetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, Sint32_x001551B8 nbyte, SJCK_x001551B8 *ck);
        void (*UngetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, SJCK_x001551B8 *ck);
        void (*PutChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, SJCK_x001551B8 *ck);
        Sint32_x001551B8 (*GetNumData)(SJ_x001551B8 sj, Sint32_x001551B8 id);
        Sint32_x001551B8 (*IsGetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, Sint32_x001551B8 nbyte, Sint32_x001551B8 *rbyte);
        void (*EntryErrFunc)(SJ_x001551B8 sj,
                                        void (*func)(void *obj, Sint32_x001551B8 ecode), void *obj);
} SJ_IF_x001551B8;
extern int* sceCdCallback_x001551B8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001551B8 unk0;
    Sint8_x001551B8 stat;
    Sint8_x001551B8 read_flg;
    Sint8_x001551B8 unk3;
    SJ_x001551B8 sj;
    void* cvfs;
    Sint32_x001551B8 unkC;
    Sint32_x001551B8 file_len;
    Sint32_x001551B8 file_sct;
    Sint32_x001551B8 unk18;
    Sint32_x001551B8 unk1C;
    Sint32_x001551B8 unk20;
    SJCK_x001551B8 unk24;
    Sint32_x001551B8 req_rd_size;
    Sint32_x001551B8 eos;
    Uint32_x001551B8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001551B8 unk40;
    Sint8_x001551B8 pause;
    Sint8_x001551B8 unk45;
    Sint8_x001551B8 unk46;
    Sint8_x001551B8 unk47;
    Sint8_x001551B8 unk48;
    Sint8_x001551B8 unk49;
    char pad4A[6];
    const Char8_x001551B8* fname;
    void* dir;
    Sint32_x001551B8 cur_ofst;
    Uint32_x001551B8 unk5C;
} ADXSTM_OBJ_x001551B8;
typedef ADXSTM_OBJ_x001551B8* ADXSTM_x001551B8;
typedef struct _adx_fs_x001551B8 {
    Sint8_x001551B8 used;
    Sint8_x001551B8 stat;
    Sint8_x001551B8 sjflag;
    Sint8_x001551B8 stopnw_flg;
    ADXSTM_x001551B8 stm;
    SJ_x001551B8 sj;
    Sint32_x001551B8 fnsct;
    Sint32_x001551B8 fsize;
    Sint32_x001551B8 skpos;
    Sint32_x001551B8 rdstpos;
    Sint32_x001551B8 rqsct;
    Sint32_x001551B8 rdsct;
    Sint8_x001551B8 *buf;
    Sint32_x001551B8 bsize;
    Sint32_x001551B8 rqrdsct;
    Sint32_x001551B8 ofst;
    void *dir;
    const Char8_x001551B8 *unk38;
    Sint32_x001551B8 unk3C;
    Sint32_x001551B8 unk40;
} ADX_FS_x001551B8;
Sint32_x001551B8 ADXF_GetFnameRangeEx_x001551B8(Sint32_x001551B8 ptid, Sint32_x001551B8 flid, Char8_x001551B8 *fname, void **dir, Sint32_x001551B8 *ofst, Sint32_x001551B8 *fnsct) __asm__("func_00155E40");
Char8_x001551B8* ADXF_GetFnameFromPt_x001551B8(Sint32_x001551B8) __asm__("func_00155F98");
Sint32_x001551B8 ADXSTM_GetStat_x001551B8(ADXSTM_x001551B8 stm) __asm__("func_0015CCD0");
void ADXSTM_BindFile_x001551B8(ADXSTM_x001551B8 stm, const Char8_x001551B8* fname, void* dir, Sint32_x001551B8 arg3, Sint32_x001551B8 arg4) __asm__("func_0015CC00");
void ADXSTM_ReleaseFile_x001551B8(ADXSTM_x001551B8 stm) __asm__("func_0015CC78");
Sint32_x001551B8 ADXF_GetFnameRangeEx_x001551B8(Sint32_x001551B8 ptid, Sint32_x001551B8 flid, Char8_x001551B8* fname, void** dir, Sint32_x001551B8* ofst, Sint32_x001551B8* fnsct) __asm__("func_00155E40");
Char8_x001551B8* ADXF_GetFnameFromPt_x001551B8(Sint32_x001551B8 ptid) __asm__("func_00155F98");
Sint32_x001551B8 func_001551B8_x001551B8(ADX_FS_x001551B8* adxf, Sint32_x001551B8 ptid, Sint32_x001551B8 flid) __asm__("func_001551B8");
/* adxf_SetAfsFileInfo: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001551B8 func_001551B8_x001551B8(ADX_FS_x001551B8* adxf, Sint32_x001551B8 ptid, Sint32_x001551B8 flid) {
    Char8_x001551B8 fname[256];
    void* dir;
    Sint32_x001551B8 ofst;
    Sint32_x001551B8 fnsct;
    if (ADXF_GetFnameRangeEx_x001551B8(ptid, flid, fname, &dir, &ofst, &fnsct) < 0) {
        return (-3);
    }
    adxf->ofst = ofst;
    adxf->dir = dir;
    adxf->unk38 = ADXF_GetFnameFromPt_x001551B8(ptid);
    adxf->skpos = 0;
    adxf->unk40 = fnsct;
    adxf->unk3C = ofst;
    ADXSTM_BindFile_x001551B8(adxf->stm, adxf->unk38, adxf->dir, adxf->unk3C, adxf->unk40);
    if (ADXSTM_GetStat_x001551B8(adxf->stm) == 4) {
        ADXSTM_ReleaseFile_x001551B8(adxf->stm);
        return (-1);
    }
    adxf->fnsct = fnsct;
    adxf->fsize = fnsct << 11;
    return (0);
}
typedef int s32_x00155290;
typedef s32_x00155290 intptr_t_x00155290;
typedef unsigned char Uint8_x00155290;
typedef char Sint8_x00155290;
typedef unsigned short Uint16_x00155290;
typedef unsigned int Uint32_x00155290;
typedef signed int Sint32_x00155290;
typedef char Char8_x00155290;
typedef struct _UUID_x00155290 {
    Uint32_x00155290 Data1;
    Uint16_x00155290 Data2;
    Uint16_x00155290 Data3;
    Uint8_x00155290 Data4[8];
} UUID_x00155290;
typedef struct {
        Sint8_x00155290 *data;
        Sint32_x00155290 len;
} SJCK_x00155290;
typedef struct {
        struct _sj_vtbl_x00155290 *vtbl;
} SJ_OBJ_x00155290;
typedef SJ_OBJ_x00155290 *SJ_x00155290;
typedef struct _sj_vtbl_x00155290 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155290 sj);
        UUID_x00155290 *(*GetUuid)(SJ_x00155290 sj);
        void (*Reset)(SJ_x00155290 sj);
        void (*GetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, Sint32_x00155290 nbyte, SJCK_x00155290 *ck);
        void (*UngetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, SJCK_x00155290 *ck);
        void (*PutChunk)(SJ_x00155290 sj, Sint32_x00155290 id, SJCK_x00155290 *ck);
        Sint32_x00155290 (*GetNumData)(SJ_x00155290 sj, Sint32_x00155290 id);
        Sint32_x00155290 (*IsGetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, Sint32_x00155290 nbyte, Sint32_x00155290 *rbyte);
        void (*EntryErrFunc)(SJ_x00155290 sj,
                                        void (*func)(void *obj, Sint32_x00155290 ecode), void *obj);
} SJ_IF_x00155290;
extern int* sceCdCallback_x00155290(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155290 unk0;
    Sint8_x00155290 stat;
    Sint8_x00155290 read_flg;
    Sint8_x00155290 unk3;
    SJ_x00155290 sj;
    void* cvfs;
    Sint32_x00155290 unkC;
    Sint32_x00155290 file_len;
    Sint32_x00155290 file_sct;
    Sint32_x00155290 unk18;
    Sint32_x00155290 unk1C;
    Sint32_x00155290 unk20;
    SJCK_x00155290 unk24;
    Sint32_x00155290 req_rd_size;
    Sint32_x00155290 eos;
    Uint32_x00155290 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155290 unk40;
    Sint8_x00155290 pause;
    Sint8_x00155290 unk45;
    Sint8_x00155290 unk46;
    Sint8_x00155290 unk47;
    Sint8_x00155290 unk48;
    Sint8_x00155290 unk49;
    char pad4A[6];
    const Char8_x00155290* fname;
    void* dir;
    Sint32_x00155290 cur_ofst;
    Uint32_x00155290 unk5C;
} ADXSTM_OBJ_x00155290;
typedef ADXSTM_OBJ_x00155290* ADXSTM_x00155290;
typedef struct _adx_fs_x00155290 {
    Sint8_x00155290 used;
    Sint8_x00155290 stat;
    Sint8_x00155290 sjflag;
    Sint8_x00155290 stopnw_flg;
    ADXSTM_x00155290 stm;
    SJ_x00155290 sj;
    Sint32_x00155290 fnsct;
    Sint32_x00155290 fsize;
    Sint32_x00155290 skpos;
    Sint32_x00155290 rdstpos;
    Sint32_x00155290 rqsct;
    Sint32_x00155290 rdsct;
    Sint8_x00155290 *buf;
    Sint32_x00155290 bsize;
    Sint32_x00155290 rqrdsct;
    Sint32_x00155290 ofst;
    void *dir;
    const Char8_x00155290 *unk38;
    Sint32_x00155290 unk3C;
    Sint32_x00155290 unk40;
} ADX_FS_x00155290;
typedef ADX_FS_x00155290 *ADXF_x00155290;
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155290(Sint32_x00155290 ncall, Sint32_x00155290 fg, intptr_t_x00155290 ptid, intptr_t_x00155290 flid, intptr_t_x00155290 type) __asm__("func_00154548");
ADXF_x00155290 adxf_CreateAdxFs_x00155290() __asm__("adxf_CreateAdxFs");
Sint32_x00155290 adxf_SetAfsFileInfo_x00155290(ADXF_x00155290 adxf, Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_001551B8");
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155290(Sint32_x00155290 cmdid, Sint32_x00155290 fg, intptr_t_x00155290 prm_0, intptr_t_x00155290 prm_1, intptr_t_x00155290 prm_2) __asm__("func_00154548");
ADXF_x00155290 adxf_CreateAdxFs_x00155290() __asm__("adxf_CreateAdxFs");
Sint32_x00155290 adxf_SetAfsFileInfo_x00155290(ADX_FS_x00155290* adxf, Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_001551B8");
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
ADXF_x00155290 func_00155290_x00155290(Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_00155290");
/* ADXF_OpenAfs: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
ADXF_x00155290 func_00155290_x00155290(Sint32_x00155290 ptid, Sint32_x00155290 flid) {
    ADXF_x00155290 adxf;
    adxf_SetCmdHstry_x00155290((2), 0, (intptr_t_x00155290)ptid, (intptr_t_x00155290)flid, -1);
    adxf = adxf_CreateAdxFs_x00155290();
    if ((adxf != 0) && (adxf_SetAfsFileInfo_x00155290(adxf, ptid, flid) < 0)) {
        ADXF_Close_x00155290(adxf);
        adxf = 0;
    }
    adxf_SetCmdHstry_x00155290((2), 1, (intptr_t_x00155290)ptid, (intptr_t_x00155290)flid, -1);
    return adxf;
}
typedef unsigned char Uint8_x00155330;
typedef char Sint8_x00155330;
typedef unsigned short Uint16_x00155330;
typedef unsigned int Uint32_x00155330;
typedef signed int Sint32_x00155330;
typedef char Char8_x00155330;
typedef struct _UUID_x00155330 {
    Uint32_x00155330 Data1;
    Uint16_x00155330 Data2;
    Uint16_x00155330 Data3;
    Uint8_x00155330 Data4[8];
} UUID_x00155330;
typedef struct {
        Sint8_x00155330 *data;
        Sint32_x00155330 len;
} SJCK_x00155330;
typedef struct {
        struct _sj_vtbl_x00155330 *vtbl;
} SJ_OBJ_x00155330;
typedef SJ_OBJ_x00155330 *SJ_x00155330;
typedef struct _sj_vtbl_x00155330 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155330 sj);
        UUID_x00155330 *(*GetUuid)(SJ_x00155330 sj);
        void (*Reset)(SJ_x00155330 sj);
        void (*GetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, Sint32_x00155330 nbyte, SJCK_x00155330 *ck);
        void (*UngetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, SJCK_x00155330 *ck);
        void (*PutChunk)(SJ_x00155330 sj, Sint32_x00155330 id, SJCK_x00155330 *ck);
        Sint32_x00155330 (*GetNumData)(SJ_x00155330 sj, Sint32_x00155330 id);
        Sint32_x00155330 (*IsGetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, Sint32_x00155330 nbyte, Sint32_x00155330 *rbyte);
        void (*EntryErrFunc)(SJ_x00155330 sj,
                                        void (*func)(void *obj, Sint32_x00155330 ecode), void *obj);
} SJ_IF_x00155330;
extern int* sceCdCallback_x00155330(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155330 unk0;
    Sint8_x00155330 stat;
    Sint8_x00155330 read_flg;
    Sint8_x00155330 unk3;
    SJ_x00155330 sj;
    void* cvfs;
    Sint32_x00155330 unkC;
    Sint32_x00155330 file_len;
    Sint32_x00155330 file_sct;
    Sint32_x00155330 unk18;
    Sint32_x00155330 unk1C;
    Sint32_x00155330 unk20;
    SJCK_x00155330 unk24;
    Sint32_x00155330 req_rd_size;
    Sint32_x00155330 eos;
    Uint32_x00155330 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155330 unk40;
    Sint8_x00155330 pause;
    Sint8_x00155330 unk45;
    Sint8_x00155330 unk46;
    Sint8_x00155330 unk47;
    Sint8_x00155330 unk48;
    Sint8_x00155330 unk49;
    char pad4A[6];
    const Char8_x00155330* fname;
    void* dir;
    Sint32_x00155330 cur_ofst;
    Uint32_x00155330 unk5C;
} ADXSTM_OBJ_x00155330;
typedef ADXSTM_OBJ_x00155330* ADXSTM_x00155330;
void ADXF_Ocbi_x00155330(Sint8_x00155330* buf, Sint32_x00155330 bsize) __asm__("func_00154378");
typedef struct _adx_fs_x00155330 {
    Sint8_x00155330 used;
    Sint8_x00155330 stat;
    Sint8_x00155330 sjflag;
    Sint8_x00155330 stopnw_flg;
    ADXSTM_x00155330 stm;
    SJ_x00155330 sj;
    Sint32_x00155330 fnsct;
    Sint32_x00155330 fsize;
    Sint32_x00155330 skpos;
    Sint32_x00155330 rdstpos;
    Sint32_x00155330 rqsct;
    Sint32_x00155330 rdsct;
    Sint8_x00155330 *buf;
    Sint32_x00155330 bsize;
    Sint32_x00155330 rqrdsct;
    Sint32_x00155330 ofst;
    void *dir;
    const Char8_x00155330 *unk38;
    Sint32_x00155330 unk3C;
    Sint32_x00155330 unk40;
} ADX_FS_x00155330;
typedef ADX_FS_x00155330 *ADXF_x00155330;
extern Sint32_x00155330 adxf_ocbi_fg_x00155330 __asm__("D_00402950");
void func_00155330_x00155330(ADXF_x00155330 adxf) __asm__("func_00155330");
/* adxf_CloseSjStm: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00155330_x00155330(ADXF_x00155330 adxf) {
    SJ_x00155330 sj;
    if ((adxf->sj == 0) || (adxf->sjflag != 0)) {
        return;
    }
    if (adxf_ocbi_fg_x00155330 == 1) {
        ADXF_Ocbi_x00155330(adxf->buf, adxf->bsize);
    }
    sj = adxf->sj;
    adxf->sj = 0;
    (*(sj)->vtbl->Destroy)(sj);
}
typedef unsigned int size_t_x001553A0;
typedef int s32_x001553A0;
typedef s32_x001553A0 intptr_t_x001553A0;
typedef unsigned char Uint8_x001553A0;
typedef char Sint8_x001553A0;
typedef unsigned short Uint16_x001553A0;
typedef unsigned int Uint32_x001553A0;
typedef signed int Sint32_x001553A0;
typedef char Char8_x001553A0;
typedef struct _UUID_x001553A0 {
    Uint32_x001553A0 Data1;
    Uint16_x001553A0 Data2;
    Uint16_x001553A0 Data3;
    Uint8_x001553A0 Data4[8];
} UUID_x001553A0;
typedef struct {
        Sint8_x001553A0 *data;
        Sint32_x001553A0 len;
} SJCK_x001553A0;
typedef struct {
        struct _sj_vtbl_x001553A0 *vtbl;
} SJ_OBJ_x001553A0;
typedef SJ_OBJ_x001553A0 *SJ_x001553A0;
typedef struct _sj_vtbl_x001553A0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001553A0 sj);
        UUID_x001553A0 *(*GetUuid)(SJ_x001553A0 sj);
        void (*Reset)(SJ_x001553A0 sj);
        void (*GetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, Sint32_x001553A0 nbyte, SJCK_x001553A0 *ck);
        void (*UngetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, SJCK_x001553A0 *ck);
        void (*PutChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, SJCK_x001553A0 *ck);
        Sint32_x001553A0 (*GetNumData)(SJ_x001553A0 sj, Sint32_x001553A0 id);
        Sint32_x001553A0 (*IsGetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, Sint32_x001553A0 nbyte, Sint32_x001553A0 *rbyte);
        void (*EntryErrFunc)(SJ_x001553A0 sj,
                                        void (*func)(void *obj, Sint32_x001553A0 ecode), void *obj);
} SJ_IF_x001553A0;
extern int* sceCdCallback_x001553A0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001553A0 unk0;
    Sint8_x001553A0 stat;
    Sint8_x001553A0 read_flg;
    Sint8_x001553A0 unk3;
    SJ_x001553A0 sj;
    void* cvfs;
    Sint32_x001553A0 unkC;
    Sint32_x001553A0 file_len;
    Sint32_x001553A0 file_sct;
    Sint32_x001553A0 unk18;
    Sint32_x001553A0 unk1C;
    Sint32_x001553A0 unk20;
    SJCK_x001553A0 unk24;
    Sint32_x001553A0 req_rd_size;
    Sint32_x001553A0 eos;
    Uint32_x001553A0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001553A0 unk40;
    Sint8_x001553A0 pause;
    Sint8_x001553A0 unk45;
    Sint8_x001553A0 unk46;
    Sint8_x001553A0 unk47;
    Sint8_x001553A0 unk48;
    Sint8_x001553A0 unk49;
    char pad4A[6];
    const Char8_x001553A0* fname;
    void* dir;
    Sint32_x001553A0 cur_ofst;
    Uint32_x001553A0 unk5C;
} ADXSTM_OBJ_x001553A0;
typedef ADXSTM_OBJ_x001553A0* ADXSTM_x001553A0;
typedef struct _adx_fs_x001553A0 {
    Sint8_x001553A0 used;
    Sint8_x001553A0 stat;
    Sint8_x001553A0 sjflag;
    Sint8_x001553A0 stopnw_flg;
    ADXSTM_x001553A0 stm;
    SJ_x001553A0 sj;
    Sint32_x001553A0 fnsct;
    Sint32_x001553A0 fsize;
    Sint32_x001553A0 skpos;
    Sint32_x001553A0 rdstpos;
    Sint32_x001553A0 rqsct;
    Sint32_x001553A0 rdsct;
    Sint8_x001553A0 *buf;
    Sint32_x001553A0 bsize;
    Sint32_x001553A0 rqrdsct;
    Sint32_x001553A0 ofst;
    void *dir;
    const Char8_x001553A0 *unk38;
    Sint32_x001553A0 unk3C;
    Sint32_x001553A0 unk40;
} ADX_FS_x001553A0;
typedef ADX_FS_x001553A0 *ADXF_x001553A0;
Sint32_x001553A0 ADXF_Stop_x001553A0(ADXF_x001553A0 adxf) __asm__("ADXF_Stop");
void adxf_SetCmdHstry_x001553A0(Sint32_x001553A0 ncall, Sint32_x001553A0 fg, intptr_t_x001553A0 ptid, intptr_t_x001553A0 flid, intptr_t_x001553A0 type) __asm__("func_00154548");
void ADXSTM_ReleaseFile_x001553A0(ADXSTM_x001553A0 stm) __asm__("func_0015CC78");
void ADXSTM_Destroy_x001553A0(ADXSTM_x001553A0 stm) __asm__("func_0015CB30");
extern void* memset_x001553A0(void* s, int c, size_t_x001553A0 n) __asm__("memset");
void adxf_SetCmdHstry_x001553A0(Sint32_x001553A0 cmdid, Sint32_x001553A0 fg, intptr_t_x001553A0 prm_0, intptr_t_x001553A0 prm_1, intptr_t_x001553A0 prm_2) __asm__("func_00154548");
Sint32_x001553A0 ADXF_Stop_x001553A0(ADXF_x001553A0 adxf) __asm__("ADXF_Stop");
void fn_8004FC94_x001553A0(ADXF_x001553A0 adxf) __asm__("fn_8004FC94");
/* ADXF_Close: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void fn_8004FC94_x001553A0(ADXF_x001553A0 adxf) {
    ADXSTM_x001553A0 stm;
    adxf_SetCmdHstry_x001553A0((3), 0, (intptr_t_x001553A0)adxf, -1, -1);
    if (adxf == 0) {
        return;
    }
    if (adxf->stat == 2) {
        ADXF_Stop_x001553A0(adxf);
    }
    stm = adxf->stm;
    if (stm != 0) {
        adxf->used = 0;
        adxf->stm = 0;
        ADXSTM_ReleaseFile_x001553A0(stm);
        ADXSTM_Destroy_x001553A0(stm);
    }
    memset_x001553A0(adxf, 0, sizeof(ADX_FS_x001553A0));
    adxf_SetCmdHstry_x001553A0((3), 1, (intptr_t_x001553A0)adxf, -1, -1);
}
