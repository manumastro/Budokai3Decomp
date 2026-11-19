#include "common.h"

extern f32 D_00427328;

extern f32 D_0042732C;

f32 func_00121010();                                /* extern */
extern f32 D_00427330;

s32 func_001A18C8();                            /* extern */

s32 func_001A1630();                            /* extern */
extern s64 D_00427320;

s32 func_00129688();                            /* extern */

u32 func_001A0F28();                                /* extern */
s32 func_001A1348(s32, s32, s32);               /* extern */

extern s32 D_00467F40;

s32 func_00127E88(s32, s32 *, s32);         /* extern */
extern s32 D_00467F28;

extern s32 D_00467EC0;

s32 func_0019F6D0(s32, s32, s32 *); /* extern */
extern s32 D_00467E90;

extern s32 D_004270CC;

s32 func_001A01A0();                            /* extern */

s32 func_0019FD88();                            /* extern */

s32 func_001A0D98();                            /* extern */

s32 func_001A0D38();                            /* extern */

s32 func_00170B20();                            /* extern */

s32 func_00170AF8(s32);                         /* extern */

s32 func_0019ED40(s32);                         /* extern */

s32 func_0019ED28(s32, s32, s32, s32);          /* extern */

s32 func_0019ED08(s32);                         /* extern */

s32 func_0019ECE8(s32);                         /* extern */

s32 func_0019FFF0(s32, s32);                    /* extern */

s32 func_001A0840(s32);                         /* extern */

s32 SFXZ_SetZclip(s32);                         /* extern */

extern s32 D_00426C1C;

extern s32 D_00426C34;

s32 func_0019EC50(s32);                         /* extern */
s32 func_0019FE88(s32);                         /* extern */

s32 func_00170AA8();                            /* extern */
s32 func_00170B40();                            /* extern */
s32 func_0019F710(s32);                     /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00426C20;

extern s32 D_00467CE8;

s32 func_001726E8(s32);                         /* extern */

s32 func_001726F0(s32);                         /* extern */

s32 func_0019ECB8(s32, s32, s32);               /* extern */

s32 func_0019EC78(s32, s32, s32);               /* extern */

s32 func_0019F128(s32);                         /* extern */

s32 func_001A0588(s32, s32, s32);               /* extern */

s32 func_001A02E0(s32, s32, s32);               /* extern */

s32 sfxcnv_MakeTable();                         /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/sfx", sfxcnv_IsCnvUpHalf);
void func_0019EE88(void) {
    sfxcnv_MakeTable();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", sfxcnv_MakeTable);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F018);
void func_0019F0D0(u8 *arg0, u8 *arg1) {
    func_001A02E0(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F0F0(u8 *arg0, u8 *arg1) {
    func_001A0588(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F110(u8 *arg0) {
    func_0019F128(*(s32 *)((u8 *)arg0 + 0x3C));
}
typedef unsigned char Uint8_x0019F128;
typedef signed int Sint32_x0019F128;
typedef float Float32_x0019F128;
void func_0019F128_x0019F128(Uint8_x0019F128 *tbl) __asm__("func_0019F128");
/* sfxcnv_MakeLumiTbl: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfx_cnv.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019F128_x0019F128(Uint8_x0019F128 *tbl)
{
        Sint32_x0019F128 i;
        for (i = 0; i <= 15; i++) {
                tbl[i] = 0;
        }
        for (i = 16; i <= 235; i++) {
                tbl[i] = (Uint8_x0019F128)(0.582f * (Float32_x0019F128)(i - 16));
        }
        for (i = 236; i <= 255; i++) {
                tbl[i] = 0x80;
        }
}
void func_0019F1E0(u8 *arg0, u8 *arg1) {
    func_0019EC78(*(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F200(u8 *arg0, u8 *arg1) {
    func_0019ECB8(*(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F220(u8 *arg0) {
    func_001726F0(*(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F238(u8 *arg0) {
    func_001726E8(*(s32 *)((u8 *)arg0 + 0x3C));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", SFX_MakeTblZ16);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", SFX_MakeTblZ32);
s32 func_0019F320(void) {
    return 0x11;
}
void SFXA_Init_x0019F328(void) __asm__("func_0019EB08");
void SFXZ_Init_x0019F328(void) __asm__("func_0019FD70");
extern int sfx_init_cnt_x0019F328 __asm__("D_00426C18");
extern int sfxcnv_forcesplit_x0019F328 __asm__("D_00426C1C");
extern char *volatile sfx_version_ptr_x0019F328 __asm__("D_00492A68");
char *sfx_GetVersionStr_x0019F328(void) __asm__("func_0019F398");
void sfx_InitLibWork_x0019F328(void) __asm__("func_0019F3A8");
void SFXSUD_Init_x0019F328(void) __asm__("func_0019FBE0");
char *sfx_GetVersionStr_x0019F328(void) __asm__("func_0019F398");
void sfx_InitLibWork_x0019F328(void) __asm__("func_0019F3A8");
void SFXSUD_Init_x0019F328(void) __asm__("func_0019FBE0");
void func_0019F328_x0019F328(void) __asm__("func_0019F328");
/* SFX_Init: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019F328_x0019F328(void) {
    int *initialised = &sfx_init_cnt_x0019F328;
    if (*initialised > 0) {
        return;
    }
    sfx_version_ptr_x0019F328 = sfx_GetVersionStr_x0019F328();
    sfx_InitLibWork_x0019F328();
    SFXSUD_Init_x0019F328();
    SFXZ_Init_x0019F328();
    SFXA_Init_x0019F328();
    sfxcnv_forcesplit_x0019F328 = 0;
    (*initialised)++;
}
s32 *func_0019F398(void) {
    return &D_00467CE8;
}
void func_0019F3A8(void) {
    memset(&D_00426C20, 0, 0x4A8);
    *(s32 *)((u8 *)(&D_00426C20) + 4) = 8;
    func_0019F710(1);
    func_00170AA8();
    func_00170B40();
}
void CFT_Finish_x0019F3F8(void) __asm__("func_00170AE0");
void SFXA_Finish_x0019F3F8(void) __asm__("func_0019EB60");
void SFXZ_Finish_x0019F3F8(void) __asm__("func_0019FDC8");
extern int sfx_init_cnt_x0019F3F8 __asm__("D_00426C18");
void SFXSUD_Finish_x0019F3F8(void) __asm__("func_0019FBF8");
void SFXSUD_Finish_x0019F3F8(void) __asm__("func_0019FBF8");
void func_0019F3F8_x0019F3F8(void) __asm__("func_0019F3F8");
/* SFX_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019F3F8_x0019F3F8(void) {
    if (sfx_init_cnt_x0019F3F8 > 0) {
        SFXZ_Finish_x0019F3F8();
        SFXA_Finish_x0019F3F8();
        SFXSUD_Finish_x0019F3F8();
        CFT_Finish_x0019F3F8();
        sfx_init_cnt_x0019F3F8--;
    }
}
extern s32 D_00426C28_x0019F450 __asm__("D_00426C28");
void func_0019F450_x0019F450(s32 arg0, s32 arg1) __asm__("func_0019F450");
void func_0019F450_x0019F450(s32 arg0, s32 arg1)
{
  s32 *new_var;
  *((s32 *) (((u8 *) (&D_00426C28_x0019F450)) + 0)) = arg0;
  new_var = (s32 *) (((u8 *) (&D_00426C28_x0019F450)) + 4);
  *new_var = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F468);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F580);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F5D0);
s32 func_0019F670(s32 arg0) {
    return arg0 >= 0x181F;
}
void func_0019F680(u8 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)arg0 + 0) = 0;
        func_0019FE88(*(s32 *)((u8 *)arg0 + 0x24));
        func_0019EC50(temp_s0);
        D_00426C20 -= 1;
    }
}
typedef unsigned char Uint8_x0019F6D0;
typedef signed int Sint32_x0019F6D0;
typedef char Char8_x0019F6D0;
typedef struct SFXZ_OBJ_x0019F6D0 SFXZ_OBJ_x0019F6D0;
typedef struct SFXA_OBJ_x0019F6D0 SFXA_OBJ_x0019F6D0;
typedef struct SFX_OBJ_x0019F6D0 {
        Sint32_x0019F6D0 used;
        Sint32_x0019F6D0 compo;
        Sint32_x0019F6D0 fxtype;
        Sint32_x0019F6D0 outbuf_width;
        Sint32_x0019F6D0 outbuf_height;
        Sint32_x0019F6D0 unit_width;
        Sint32_x0019F6D0 taginf_flg;
        Sint32_x0019F6D0 tag_a;
        Sint32_x0019F6D0 tag_b;
        SFXZ_OBJ_x0019F6D0 *sfxz;
        Sint32_x0019F6D0 x2c;
        Sint32_x0019F6D0 x30;
        SFXA_OBJ_x0019F6D0 *sfxa;
        void *coladj;
        Sint32_x0019F6D0 tbl_type;
        Uint8_x0019F6D0 *buf[4];
        Sint32_x0019F6D0 pad50[2];
        void *work;
        Sint32_x0019F6D0 wsize;
        Sint32_x0019F6D0 pad60[2];
        Sint32_x0019F6D0 x68;
        Sint32_x0019F6D0 pad6c[2];
        Sint32_x0019F6D0 x74;
} SFX_OBJ_x0019F6D0;
typedef struct {
        Sint32_x0019F6D0 hn_cnt;
        Sint32_x0019F6D0 max_hn;
        void (*errfn)(void *obj, const Char8_x0019F6D0 *msg);
        void *errobj;
        Sint32_x0019F6D0 err_cnt;
        Sint32_x0019F6D0 ccir_fx;
        SFX_OBJ_x0019F6D0 hn[8];
        Sint32_x0019F6D0 pad3d8[4];
} SFX_LIBWORK_x0019F6D0;
extern SFX_LIBWORK_x0019F6D0 sfx_libwork_x0019F6D0 __asm__("D_00426C20");
typedef struct {
        Uint8_x0019F6D0 *buf;
        Sint32_x0019F6D0 width;
        Sint32_x0019F6D0 height;
        Sint32_x0019F6D0 pitch;
} SFX_PLN_x0019F6D0;
typedef struct {
        Sint32_x0019F6D0 frmfmt;
        SFX_PLN_x0019F6D0 pln[3];
        Uint8_x0019F6D0 pad34[0x44 - 0x34];
        Sint32_x0019F6D0 width;
        Sint32_x0019F6D0 height;
        void *tblsrc;
        Sint32_x0019F6D0 tag_a;
        Sint32_x0019F6D0 tag_b;
        Sint32_x0019F6D0 x58;
        Sint32_x0019F6D0 x5c;
        Sint32_x0019F6D0 pic_struct;
        Sint32_x0019F6D0 chroma_format;
        Sint32_x0019F6D0 x68;
        Sint32_x0019F6D0 x6c;
        Sint32_x0019F6D0 x70;
        Sint32_x0019F6D0 chromapos_h;
        Sint32_x0019F6D0 chromapos_v;
        Uint8_x0019F6D0 pad7c[0x88 - 0x7C];
} SFX_FRM_x0019F6D0;
extern SFX_LIBWORK_x0019F6D0 sfx_libwork_x0019F6D0 __asm__("D_00426C20");
typedef struct {
        void (*errfn)(void *obj, const Char8_x0019F6D0 *msg);
        void *errobj;
        Sint32_x0019F6D0 err_cnt;
} SFX_ERRAREA_x0019F6D0;
void func_0019F6D0_x0019F6D0(SFX_OBJ_x0019F6D0 *sfx, SFX_FRM_x0019F6D0 *frm, const Char8_x0019F6D0 *msg) __asm__("func_0019F6D0");
/* SFXLIB_Error: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfx_lib.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019F6D0_x0019F6D0(SFX_OBJ_x0019F6D0 *sfx, SFX_FRM_x0019F6D0 *frm, const Char8_x0019F6D0 *msg)
{
        void (*fn)(void *obj, const Char8_x0019F6D0 *msg);
        void *obj;
        SFX_ERRAREA_x0019F6D0 *e = (SFX_ERRAREA_x0019F6D0 *)&sfx_libwork_x0019F6D0.errfn;
        fn = e->errfn;
        obj = e->errobj;
        e->err_cnt++;
        if (fn != 0) {
                fn(obj, msg);
        }
}
extern s32 D_00426C34_x0019F710 __asm__("D_00426C34");
void func_0019F710_x0019F710(s32 arg0) __asm__("func_0019F710");
void func_0019F710_x0019F710(s32 arg0) {
    D_00426C34_x0019F710 = arg0;
}
s32 func_0019F720(void) {
    return D_00426C34;
}
void func_0019F730(s32 arg0) {
    D_00426C1C = arg0;
}
s32 func_0019F740(void) {
    return D_00426C1C;
}
void func_0019F750(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x24)) + 0x44) = arg1;
}
void func_0019F760(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
}
s32 func_0019F768(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
void func_0019F770_x0019F770(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019F770");
void func_0019F770_x0019F770(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  u8 *new_var;
  new_var = arg0;
  new_var2 = ((u8 *) new_var) + 0xC;
  *((s32 *) new_var2) = arg2;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
}
void func_0019F780(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)((u8 *)arg0 + 8);
    *arg2 = *(s32 *)((u8 *)arg0 + 0xC);
}
void func_0019F798(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
}
s32 func_0019F800_x0019F7A0() __asm__("func_0019F800");
void func_0019F7A0_x0019F7A0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019F7A0");
void func_0019F7A0_x0019F7A0(s32 arg0, s32 arg1, s32 arg2) {
    func_0019F800_x0019F7A0(arg0, 0x64);
    *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x3C) = arg2;
}
s32 func_0019F7F0(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x3C);
}
void func_0019F800(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
}
s32 func_0019F808(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x38);
}
typedef signed char Sint8_x0019F810;
typedef int Sint32_x0019F810;
typedef struct SjChunk_x0019F810 {
    Sint8_x0019F810 *data;
    Sint32_x0019F810 len;
} SjChunk_x0019F810;
typedef struct SjTagRec_x0019F810 {
    int set;
    SjChunk_x0019F810 ck;
} SjTagRec_x0019F810;
extern Sint8_x0019F810 *SJ_SearchTag_x0019F810(SjChunk_x0019F810 *ck, Sint8_x0019F810 *tag, Sint8_x0019F810 *endtag, SjChunk_x0019F810 *tagck) __asm__("func_0016F290");
typedef struct SfxZmvTagState_x0019F810 {
    char unk00[0x08];
    SjTagRec_x0019F810 input;
    char unk14[0x04];
    SjTagRec_x0019F810 header;
    char unk24[0x04];
    SjTagRec_x0019F810 frame;
} SfxZmvTagState_x0019F810;
extern void SFXZ_SetTagInf_x0019F810(SfxZmvTagState_x0019F810 *state, Sint8_x0019F810 *data, Sint32_x0019F810 len) __asm__("func_0019FEB0");
typedef struct {
    char pad0[0x14];
    SjTagRec_x0019F810 rec;
    char pad20[4];
    SfxZmvTagState_x0019F810 *sfxz;
} TagHn_x0019F810;
extern Sint8_x0019F810 D_0045A050_x0019F810[] __asm__("D_00467D90");
extern Sint8_x0019F810 D_0045A058_x0019F810[] __asm__("D_00467D98");
void func_0019F810_x0019F810(TagHn_x0019F810 *hn, Sint8_x0019F810 *data, Sint32_x0019F810 len) __asm__("func_0019F810");
/* func_0035FC88: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035fc88.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019F810_x0019F810(TagHn_x0019F810 *hn, Sint8_x0019F810 *data, Sint32_x0019F810 len)
{
    SjTagRec_x0019F810 *rec = &hn->rec;
    SjChunk_x0019F810 ck;
    SjChunk_x0019F810 tag;
    SfxZmvTagState_x0019F810 *sfxz;
    rec->ck.data = data;
    rec->ck.len = len;
    sfxz = hn->sfxz;
    ck.data = data;
    ck.len = len;
    if (SJ_SearchTag_x0019F810(&ck, D_0045A050_x0019F810, D_0045A058_x0019F810, &tag) == 0)
        SFXZ_SetTagInf_x0019F810(sfxz, 0, 0);
    else
        SFXZ_SetTagInf_x0019F810(sfxz, tag.data, tag.len);
    rec->set = 1;
}
void func_0019F8A8_x0019F8A8(s32 *a0, s32 *a1, s32 *a2) __asm__("func_0019F8A8");
void func_0019F8A8_x0019F8A8(s32 *a0, s32 *a1, s32 *a2) {
    s32 t;
    a0 += 5;
    if (a0[0] != 1) {
        *a1 = 0;
        *a2 = 0;
        return;
    }
    t = a0[1];
    *a2 = a0[2];
    *a1 = t;
}
void func_0019F8D8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x28) = arg1;
}
s32 func_0019F8E0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x28);
}
void func_0019F8E8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
}
s32 func_0019F8F0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x2C);
}
void func_0019F8F8(u8 *arg0) {
    SFXZ_SetZclip(*(s32 *)((u8 *)arg0 + 0x24));
}
void func_0019F910(u8 *arg0) {
    func_001A0840(*(s32 *)((u8 *)arg0 + 0x24));
}
void func_0019F928(u8 *arg0, u8 *arg1) {
    func_0019FFF0(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C));
}
void func_0019F948(u8 *arg0) {
    func_0019ECE8(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F960(u8 *arg0) {
    func_0019ED08(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F978(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0019ED28(*(s32 *)((u8 *)arg0 + 0x30), arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    func_0019F800(arg0, 0);
}
void func_0019F9B8(u8 *arg0) {
    func_0019ED40(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F9D0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x34) = arg1;
}
s32 func_0019F9D8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}
void func_0019F9E0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x64) = arg1;
}
s32 func_0019F9E8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x64);
}
void func_0019F9F0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x68) = arg1;
}
s32 func_0019F9F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x68);
}
void func_0019FA00(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x70) = arg1;
}
s32 func_0019FA08(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x70);
}
typedef struct SfxPlane_x0019FA10 {
    int addr;
    int pitch;
    int height;
    int f12;
} SfxPlane_x0019FA10;
typedef enum SfxChromaFmt_x0019FA10 {
    SFX_CHROMA_FMT_0_x0019FA10,
    SFX_CHROMA_FMT_1_x0019FA10,
    SFX_CHROMA_FMT_2_x0019FA10,
    SFX_CHROMA_FMT_3_x0019FA10
} SfxChromaFmt_x0019FA10;
typedef struct SfxPicFmt_x0019FA10 {
    int pictureStructure;
    SfxChromaFmt_x0019FA10 chromaFormat;
    int f8;
    int f12;
    int f16;
    int chromaPosH;
    int chromaPosV;
} SfxPicFmt_x0019FA10;
typedef struct SfxFrame_x0019FA10 {
    unsigned int frmfmt;
    SfxPlane_x0019FA10 plane[3];
    int f52[4];
    int width;
    int height;
    int fno;
    int f80;
    int f84;
    int f88;
    int f92;
    SfxPicFmt_x0019FA10 fmt;
    int f120[5];
} SfxFrame_x0019FA10;
void sfxset_ShiftBufInfByLine_x0019FA10(SfxPlane_x0019FA10 *plane, int lines) __asm__("func_0019FA70");
void sfxset_ShiftBufInfByLine_x0019FA10(SfxPlane_x0019FA10 *plane, int lines) __asm__("func_0019FA70");
void func_0019FA10_x0019FA10(SfxFrame_x0019FA10 *frm, int lines) __asm__("func_0019FA10");
/* SFX_ShiftYccPtrByLine: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FA10_x0019FA10(SfxFrame_x0019FA10 *frm, int lines) {
    lines = lines / 2 * 2;
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[0], lines);
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[1], lines >> 1);
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[2], lines >> 1);
}
void func_0019FA70_x0019FA70(u8 *arg0, s32 arg1) __asm__("func_0019FA70");
void func_0019FA70_x0019FA70(u8 *arg0, s32 arg1)
{
  *((s32 *) (((u8 *) arg0) + 0)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0))) + (arg1 * (*((s32 *) (((u8 *) arg0) + 4)))));
  *((s32 *) (((u8 *) arg0) + 8)) = (s32) ((*((s32 *) (((u8 *) arg0) + 8))) - arg1);
}
typedef unsigned char u8_x0019FA98;
typedef signed int s32_x0019FA98;
typedef unsigned int u32_x0019FA98;
struct fn_12_68C_Arg0_x0019FA98 {
    u8_x0019FA98 pad_0[0xC];
    u32_x0019FA98 unk_C;
    u8_x0019FA98 pad_10[0xC];
    u32_x0019FA98 unk_1C;
    u8_x0019FA98 pad_20[0xC];
    u32_x0019FA98 unk_2C;
};
void func_0019FA98_x0019FA98(struct fn_12_68C_Arg0_x0019FA98 *arg0, u32_x0019FA98 arg1) __asm__("func_0019FA98");
/* fn_12_68C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_68C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0019FA98_x0019FA98(struct fn_12_68C_Arg0_x0019FA98 *arg0, u32_x0019FA98 arg1) {
    s32_x0019FA98 v0;
    u32_x0019FA98 v1;
    s32_x0019FA98 v2;
    v0 = ((s32_x0019FA98)(((u32_x0019FA98)arg1 >> 31) + arg1) >> 1);
    v1 = (v0 << 1);
    arg0->unk_C = v1;
    v2 = ((s32_x0019FA98)(((v0 >> 30) & 0x1) + v1) >> 1);
    arg0->unk_1C = v2;
    arg0->unk_2C = v2;
}
extern void func_0035FE20_x0019FAC0(int a0, int a1, int a2) __asm__("func_0019FB48");
void func_0019FAC0_x0019FAC0(int a0, int a1, int a2) __asm__("func_0019FAC0");
/* func_0035FD98: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033d2d0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FAC0_x0019FAC0(int a0, int a1, int a2) {
    int u = (a2 / 2) * 2;
    int v = (a1 / 2) * 2;
    func_0035FE20_x0019FAC0(a0 + 0x4, u, v);
    func_0035FE20_x0019FAC0(a0 + 0x14, u >> 1, v >> 1);
    func_0035FE20_x0019FAC0(a0 + 0x24, u >> 1, v >> 1);
}
void func_0019FB48(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = (s32) (*(s32 *)((u8 *)arg0 + 8) - arg1);
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (arg1 * *(s32 *)((u8 *)arg0 + 4)) + arg2);
}
void func_0019FB70(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = arg1 & 0xFF;
    func_00170AF8(arg1);
    func_0019F800(arg0, 0);
    func_0019F978(arg0, 0, temp_s0 >> 1, temp_s0);
}
void func_0019FBC8(void) {
    func_00170B20();
}
void func_0019FBE0(void) {
    func_001A0D38();
}
void func_0019FBF8(void) {
    func_001A0D98();
}
void func_0019FC10_x0019FC10(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019FC10");
void func_0019FC10_x0019FC10(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
 do { *((s32 *) (new_var + 4)) = arg2; *((s32 *) (((u8 *) arg0) + 0x5C)) = arg1; } while (0);
}
s32 func_0019FC20(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x5C) != 0;
}
s32 func_001A0F28_x0019FC30(s32, s32) __asm__("func_001A0F28");
void func_0019FC30_x0019FC30(u8 *arg0) __asm__("func_0019FC30");
void func_0019FC30_x0019FC30(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A0F28_x0019FC30(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A0F70_x0019FC50(s32, s32) __asm__("func_001A0F70");
void func_0019FC50_x0019FC50(u8 *arg0) __asm__("func_0019FC50");
void func_0019FC50_x0019FC50(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A0F70_x0019FC50(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A0FB0_x0019FC70(s32, s32) __asm__("func_001A0FB0");
void func_0019FC70_x0019FC70(u8 *arg0) __asm__("func_0019FC70");
void func_0019FC70_x0019FC70(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A0FB0_x0019FC70(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A0FF0_x0019FC90(s32, s32) __asm__("func_001A0FF0");
void func_0019FC90_x0019FC90(u8 *arg0) __asm__("func_0019FC90");
void func_0019FC90_x0019FC90(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A0FF0_x0019FC90(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A1050_x0019FCB0(s32, s32) __asm__("func_001A1050");
void func_0019FCB0_x0019FCB0(u8 *arg0) __asm__("func_0019FCB0");
void func_0019FCB0_x0019FCB0(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A1050_x0019FCB0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A10E0_x0019FCD0(s32, s32) __asm__("func_001A10E0");
void func_0019FCD0_x0019FCD0(u8 *arg0) __asm__("func_0019FCD0");
void func_0019FCD0_x0019FCD0(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A10E0_x0019FCD0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A1148_x0019FCF0(s32, s32) __asm__("func_001A1148");
void func_0019FCF0_x0019FCF0(u8 *arg0) __asm__("func_0019FCF0");
void func_0019FCF0_x0019FCF0(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 - -0x5C);
  func_001A1148_x0019FCF0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A11C8_x0019FD10(s32, s32) __asm__("func_001A11C8");
void func_0019FD10_x0019FD10(u8 *arg0) __asm__("func_0019FD10");
void func_0019FD10_x0019FD10(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A11C8_x0019FD10(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A1248_x0019FD30(s32, s32) __asm__("func_001A1248");
void func_0019FD30_x0019FD30(u8 *arg0) __asm__("func_0019FD30");
void func_0019FD30_x0019FD30(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A1248_x0019FD30(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A12C8_x0019FD50(s32, s32) __asm__("func_001A12C8");
void func_0019FD50_x0019FD50(u8 *arg0) __asm__("func_0019FD50");
void func_0019FD50_x0019FD50(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A12C8_x0019FD50(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
void func_0019FD70(void) {
    func_0019FD88();
}
s32 func_001A0888_x0019FD88(s32) __asm__("func_001A0888");
s32 memset_x0019FD88(s32 *, s32, s32) __asm__("memset");
extern s32 D_004270C8_x0019FD88 __asm__("D_004270C8");
void func_0019FD88_x0019FD88(void) __asm__("func_0019FD88");
void func_0019FD88_x0019FD88(void) {
    memset_x0019FD88(&D_004270C8_x0019FD88, 0, 0x24C);
    *(s32 *)((u8 *)(&D_004270C8_x0019FD88) + 8) = 8;
    func_001A0888_x0019FD88(0);
}
void func_0019FDC8(void) {

}
s32 *func_0019FE28_x0019FDD0() __asm__("func_0019FE28");
s32 func_0019FE78_x0019FDD0(s32 *) __asm__("func_0019FE78");
extern s32 D_004270C8_x0019FDD0 __asm__("D_004270C8");
s32 *func_0019FDD0_x0019FDD0(void) __asm__("func_0019FDD0");
s32 *func_0019FDD0_x0019FDD0(void)
{
  s32 *temp_v0;
  temp_v0 = func_0019FE28_x0019FDD0();
  if (temp_v0 != ((void *) 0))
  {
    func_0019FE78_x0019FDD0(temp_v0);
    D_004270C8_x0019FDD0 += 1;
    *temp_v0 = 1;
    return temp_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FE28);
void func_0019FE78_x0019FE78(u8 *arg0) __asm__("func_0019FE78");
void func_0019FE78_x0019FE78(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x44)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0x3C)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x40)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FE88);
typedef signed char Sint8_x0019FEB0;
typedef int Sint32_x0019FEB0;
typedef struct SjChunk_x0019FEB0 {
    Sint8_x0019FEB0 *data;
    Sint32_x0019FEB0 len;
} SjChunk_x0019FEB0;
typedef struct SjTagRec_x0019FEB0 {
    int set;
    SjChunk_x0019FEB0 ck;
} SjTagRec_x0019FEB0;
typedef struct SfxZmvTagState_x0019FEB0 {
    char unk00[0x08];
    SjTagRec_x0019FEB0 input;
    char unk14[0x04];
    SjTagRec_x0019FEB0 header;
    char unk24[0x04];
    SjTagRec_x0019FEB0 frame;
} SfxZmvTagState_x0019FEB0;
extern void sfxzmv_SetTagGrp_x0019FEB0(SfxZmvTagState_x0019FEB0 *state) __asm__("func_0019FED8");
void func_0019FEB0_x0019FEB0(SfxZmvTagState_x0019FEB0 *state, Sint8_x0019FEB0 *data, Sint32_x0019FEB0 len) __asm__("func_0019FEB0");
/* SFXZ_SetTagInf: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035ffd8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FEB0_x0019FEB0(SfxZmvTagState_x0019FEB0 *state, Sint8_x0019FEB0 *data, Sint32_x0019FEB0 len)
{
    SjTagRec_x0019FEB0 *input;
    input = &state->input;
    input->set = 1;
    input->ck.data = data;
    input->ck.len = len;
    sfxzmv_SetTagGrp_x0019FEB0(state);
}
typedef signed char Sint8_x0019FED8;
typedef int Sint32_x0019FED8;
typedef struct SjChunk_x0019FED8 {
    Sint8_x0019FED8 *data;
    Sint32_x0019FED8 len;
} SjChunk_x0019FED8;
typedef struct SjTagRec_x0019FED8 {
    int set;
    SjChunk_x0019FED8 ck;
} SjTagRec_x0019FED8;
extern Sint8_x0019FED8 *SJ_SearchTag_x0019FED8(SjChunk_x0019FED8 *ck, Sint8_x0019FED8 *tag, Sint8_x0019FED8 *endtag, SjChunk_x0019FED8 *tagck) __asm__("func_0016F290");
typedef struct SfxZmvTagState_x0019FED8 {
    char unk00[0x08];
    SjTagRec_x0019FED8 input;
    char unk14[0x04];
    SjTagRec_x0019FED8 header;
    char unk24[0x04];
    SjTagRec_x0019FED8 frame;
} SfxZmvTagState_x0019FED8;
extern Sint8_x0019FED8 D_0045A060_x0019FED8[] __asm__("D_00467DA0");
extern Sint8_x0019FED8 D_0045A068_x0019FED8[] __asm__("D_00467DA8");
extern Sint8_x0019FED8 D_0045A070_x0019FED8[] __asm__("D_00467DB0");
void func_0019FED8_x0019FED8(SfxZmvTagState_x0019FED8 *state) __asm__("func_0019FED8");
/* sfxzmv_SetTagGrp: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00360000.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FED8_x0019FED8(SfxZmvTagState_x0019FED8 *state)
{
    SjChunk_x0019FED8 input;
    SjChunk_x0019FED8 found;
    SjTagRec_x0019FED8 *header = &state->header;
    SjTagRec_x0019FED8 *frame = &state->frame;
    SjTagRec_x0019FED8 *source = &state->input;
    Sint8_x0019FED8 *data = source->ck.data;
    if (data == 0) {
        header->ck.len = 0;
        header->set = 1;
        header->ck.data = 0;
        frame->set = 1;
        frame->ck.data = 0;
        frame->ck.len = 0;
        return;
    }
    input.data = data;
    input.len = source->ck.len;
    SJ_SearchTag_x0019FED8(&input, D_0045A060_x0019FED8, D_0045A068_x0019FED8, &found);
    header->ck.data = found.data;
    header->ck.len = found.len;
    header->set = 1;
    SJ_SearchTag_x0019FED8(&input, D_0045A070_x0019FED8, D_0045A068_x0019FED8, &found);
    frame->set = 1;
    frame->ck.data = found.data;
    frame->ck.len = found.len;
}
typedef struct SfxChunk_x0019FFC0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x0019FFC0;
typedef void (*SfxZCbFn_x0019FFC0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019FFC0 {
    int used;
    int zbit;
    SfxChunk_x0019FFC0 info;
    int pad20;
    SfxChunk_x0019FFC0 hdr;
    int pad36;
    SfxChunk_x0019FFC0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x0019FFC0 cbfn;
    int cbarg;
} SfxZHn_x0019FFC0;
void func_0019FFC0_x0019FFC0(SfxZHn_x0019FFC0 *zhn, char **data, int *size) __asm__("func_0019FFC0");
/* SFXZ_GetTagInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FFC0_x0019FFC0(SfxZHn_x0019FFC0 *zhn, char **data, int *size) {
    SfxChunk_x0019FFC0 *info = &zhn->info;
    char *value4;
    int value8;
    if (info->valid != 1) {
        *data = 0;
        *size = 0;
        return;
    }
    value4 = info->data;
    value8 = info->size;
    *size = value8;
    *data = value4;
}
typedef struct SfxChunk_x0019FFF0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x0019FFF0;
typedef void (*SfxZCbFn_x0019FFF0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019FFF0 {
    int used;
    int zbit;
    SfxChunk_x0019FFF0 info;
    int pad20;
    SfxChunk_x0019FFF0 hdr;
    int pad36;
    SfxChunk_x0019FFF0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x0019FFF0 cbfn;
    int cbarg;
} SfxZHn_x0019FFF0;
int sscanf_x0019FFF0(const char *, const char *, ...) __asm__("func_00127520");
long long __muldi3_x0019FFF0(long long u, long long v) __asm__("__muldi3");
void sfxzmv_GetZfrmInf_x0019FFF0(SfxZHn_x0019FFF0 *zhn, char *tag, char *endtag, char **data, int *size) __asm__("func_001A0108");
void func_0019FFF0_x0019FFF0(SfxZHn_x0019FFF0 *zhn, int frame, int *first, int *second) __asm__("func_0019FFF0");
/* SFXZ_GetZfrmRange: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FFF0_x0019FFF0(SfxZHn_x0019FFF0 *zhn, int frame, int *first, int *second) {
    char *p;
    int len;
    long long n;
    long long x, y, z;
    char *str;
    sfxzmv_GetZfrmInf_x0019FFF0(zhn, "ZMFSIZE", "SFXINFE", &p, &len);
    if (p == 0) {
        *first = 0;
        *second = 0x7FFFFFFF;
        return;
    }
    sscanf_x0019FFF0(p, "%lx", &n);
    sfxzmv_GetZfrmInf_x0019FFF0(zhn, "ZMFDATA", "SFXINFE", &p, &len);
    str = p;
    if (str == 0) {
        *first = 0x7FFFFFFF;
        return;
    }
    sscanf_x0019FFF0(str + (int)__muldi3_x0019FFF0(n, frame), "%lx %lx %lx", &x, &y, &z);
    *first = y;
    *second = z;
}
__asm__("# rebind func_0019FFF0 0x0019FFF0");
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0108);
void func_001A0188(void) {
    func_001A01A0();
}
typedef struct SfxChunk_x001A01A0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x001A01A0;
typedef void (*SfxZCbFn_x001A01A0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x001A01A0 {
    int used;
    int zbit;
    SfxChunk_x001A01A0 info;
    int pad20;
    SfxChunk_x001A01A0 hdr;
    int pad36;
    SfxChunk_x001A01A0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x001A01A0 cbfn;
    int cbarg;
} SfxZHn_x001A01A0;
void func_001A01A0_x001A01A0(SfxZHn_x001A01A0 *zhn, int lo, int hi, unsigned int *tbl) __asm__("func_001A01A0");
/* sfxzmv_MakeOrgZ32Tbl: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A01A0_x001A01A0(SfxZHn_x001A01A0 *zhn, int lo, int hi, unsigned int *tbl)
{
    int i;
    if (hi == (int)0x80000000)
        hi = 0x7FFFFFFF;
    if (lo == (int)0x80000000)
        lo = 0x7FFFFFFF;
    for (i = 8; i >= 0; i--)
        tbl[i] = 0;
    for (i = 9; i < 17; i++)
        tbl[i] = lo;
    if (lo == hi) {
        for (i = 17; i < 224; i++)
            tbl[i] = lo;
    } else {
        for (i = 17; i < 224; i++)
            tbl[i] = (unsigned int)(hi - lo) / 207 * (i - 17) + lo;
    }
    for (i = 224; i < 240; i++)
        tbl[i] = hi;
    for (i = 240; i < 256; i++)
        tbl[i] = 0x7FFFFFFF;
}
void func_0019FFF0_x001A02E0(s32, s32, s32 *, s32 *) __asm__("func_0019FFF0");
void func_001A0330_x001A02E0(s32, s32, s32, s16 *) __asm__("func_001A0330");
void func_001A02E0_x001A02E0(s32 a0, s32 a1, s16 *out) __asm__("func_001A02E0");
void func_001A02E0_x001A02E0(s32 a0, s32 a1, s16 *out)
{
    s32 x, y;
    *out = 0;
    func_0019FFF0_x001A02E0(a0, a1, &x, &y);
    func_001A0330_x001A02E0(a0, x, y, out);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0330);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A03B8);
void func_0019FFF0_x001A0588(s32, s32, s32 *, s32 *) __asm__("func_0019FFF0");
void func_001A05D8_x001A0588(s32, s32, s32, s32 *) __asm__("func_001A05D8");
void func_001A0588_x001A0588(s32 a0, s32 a1, s32 *out) __asm__("func_001A0588");
void func_001A0588_x001A0588(s32 a0, s32 a1, s32 *out)
{
    s32 x, y;
    *out = 0;
    func_0019FFF0_x001A0588(a0, a1, &x, &y);
    func_001A05D8_x001A0588(a0, x, y, out);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A05D8);
typedef struct SfxChunk_x001A0660 {
    int valid;
    char *data;
    int size;
} SfxChunk_x001A0660;
typedef void (*SfxZCbFn_x001A0660)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x001A0660 {
    int used;
    int zbit;
    SfxChunk_x001A0660 info;
    int pad20;
    SfxChunk_x001A0660 hdr;
    int pad36;
    SfxChunk_x001A0660 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x001A0660 cbfn;
    int cbarg;
} SfxZHn_x001A0660;
int SFXZ_GetZbufType_x001A0660(void) __asm__("func_001A0898");
int SFXZ_GetZbufType_x001A0660(void) __asm__("func_001A0898");
void func_001A0660_x001A0660(SfxZHn_x001A0660 *zhn, unsigned int *src, unsigned int *dst) __asm__("func_001A0660");
/* sfxzmv_MakeZ32TblFromOrgZ32: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A0660_x001A0660(SfxZHn_x001A0660 *zhn, unsigned int *src, unsigned int *dst)
{
    float scale = zhn->zmax;
    int i;
    unsigned int v;
    if (SFXZ_GetZbufType_x001A0660() == 1) {
        for (i = 0; i < 256; i++)
            dst[i] = (src[i] & 0x7FFFFF80) * 2;
        return;
    }
    for (i = 0; i < 256; i++) {
        if (src[i] == 0)
            src[i] = 1;
        v = src[i];
        dst[i] = 16777215.0f / (scale * v / 2147483520.0f);
    }
}
s32 func_0019F6D0_x001A07A8(s32, s32, s32 *) __asm__("func_0019F6D0");
s32 func_001A0810_x001A07A8() __asm__("func_001A0810");
extern s32 D_00467DF0_x001A07A8 __asm__("D_00467DF0");
void SFXZ_SetZclip_x001A07A8(u8 *arg0, f32 fparg0, f32 fparg1) __asm__("SFXZ_SetZclip");
void SFXZ_SetZclip_x001A07A8(u8 *arg0, f32 fparg0, f32 fparg1)
{
  u8 *new_var;
  if (func_001A0810_x001A07A8() != 1)
  {
    func_0019F6D0_x001A07A8(0, 0, &D_00467DF0_x001A07A8);
  }
  new_var = ((u8 *) arg0) + 0x3C;
  *((f32 *) new_var) = fparg0;
  *((f32 *) (((u8 *) arg0) + 0x40)) = fparg1;
}
s32 func_001A0810(f32 fparg0, f32 fparg1) {
    s32 var_v0;

    var_v0 = 1;
    if (fparg1 <= fparg0) {
        var_v0 = 0;
    }
    if ((fparg1 - fparg0) < -14.0f) {
        var_v0 = 0;
    }
    return var_v0;
}
void func_001A0840_x001A0840(u8 *arg0, f32 *arg1, f32 *arg2) __asm__("func_001A0840");
void func_001A0840_x001A0840(u8 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x3C);
    *arg2 = *(f32 *)((u8 *)arg0 + 0x40);
}
s32 func_001A0858_x001A0858(u8 *arg0) __asm__("func_001A0858");
s32 func_001A0858_x001A0858(u8 *arg0)
{
  f32 new_var;
  s32 var_v0;
  new_var = *((f32 *) (((u8 *) arg0) + 0x40));
  var_v0 = 1;
  if (((*((f32 *) (((u8 *) arg0) + 0x3C))) == 0.0f) && (new_var == 0.0f))
  {
    var_v0 = 0;
  }
  return var_v0;
}
void func_001A0888(s32 arg0) {
    D_004270CC = arg0;
}
s32 func_001A0898(void) {
    return D_004270CC;
}
typedef signed int s32_x001A08A8;
extern void fn_12_C60_x001A08A8(void *arg0, void *arg1, s32_x001A08A8 arg2, void *arg3) __asm__("func_001A0908");
void func_001A08A8_x001A08A8(void *arg0, void *arg1, void *arg2) __asm__("func_001A08A8");
/* fn_12_D60: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_D60.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001A08A8_x001A08A8(void *arg0, void *arg1, void *arg2) {
    fn_12_C60_x001A08A8(arg0, arg1, 16, arg2);
}
s32 func_001A0908_x001A08C8() __asm__("func_001A0908");
void func_001A08C8_x001A08C8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_001A08C8");
void func_001A08C8_x001A08C8(s32 arg0, s32 arg1, s32 arg2) {
    func_001A0908_x001A08C8(arg0, arg1, 0x18, arg2);
}
typedef unsigned int u32_x001A08E8;
extern void fn_12_C60_x001A08E8(u32_x001A08E8, u32_x001A08E8, u32_x001A08E8, u32_x001A08E8) __asm__("func_001A0908");
void func_001A08E8_x001A08E8(u32_x001A08E8 arg0, u32_x001A08E8 arg1, u32_x001A08E8 arg2) __asm__("func_001A08E8");
/* fn_12_D38: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_D38.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001A08E8_x001A08E8(u32_x001A08E8 arg0, u32_x001A08E8 arg1, u32_x001A08E8 arg2) {
    fn_12_C60_x001A08E8(arg0, arg1, 0x20, arg2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0908);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0A38);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0BC8);
s32 sfxcnv_CnvZbitToCft(u32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != 0x10) {
        if (arg0 >= 0x11U) {
            var_v1 = 2;
            if (arg0 != 0x18) {
                var_v1 = 3;
                if (arg0 != 0x20) {
                    goto block_5;
                }
            }
        } else {
block_5:
            func_0019F6D0(0, 0, &D_00467E90);
            var_v1 = 0;
        }
    }
    return var_v1;
}
extern int D_003EEA6C_x001A0D38 __asm__("D_00427318");
extern int *volatile D_00766CA4_x001A0D38 __asm__("D_00492A70");
extern int *Obj0000_Get_D_0045A1B0_360790_x001A0D38(void) __asm__("func_001A0D88");
void func_001A0D38_x001A0D38(void) __asm__("func_001A0D38");
/* func_00360740: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001A0D38_x001A0D38(void) {
    if (D_003EEA6C_x001A0D38 <= 0) {
        D_00766CA4_x001A0D38 = Obj0000_Get_D_0045A1B0_360790_x001A0D38();
        D_003EEA6C_x001A0D38 = D_003EEA6C_x001A0D38 + 1;
    }
}
s32 *func_001A0D88(void) {
    return &D_00467EC0;
}
extern s32 D_00427318_x001A0D98 __asm__("D_00427318");
void func_001A0D98_x001A0D98(void) __asm__("func_001A0D98");
void func_001A0D98_x001A0D98(void) {
    if (D_00427318_x001A0D98 > 0) {
        D_00427318_x001A0D98 -= 1;
    }
}
typedef unsigned int size_t_x001A0DB8;
int sprintf_x001A0DB8(char *, const char *, ...) __asm__("func_00127488");
extern void qsort_x001A0DB8(void *, size_t_x001A0DB8, size_t_x001A0DB8, int (*)(const void *, const void *)) __asm__("qsort");
char *strncpy_x001A0DB8(char *, const char *, size_t_x001A0DB8) __asm__("func_00128040");
char *strcat_x001A0DB8(char *, const char *) __asm__("func_00127810");
void SUD_SetFmtTypeToBuf_x001A0DB8(char *dst, int *flags) __asm__("func_001A0E48");
void SUD_SetFmtTypeToBuf_x001A0DB8(char *dst, int *flags) __asm__("func_001A0E48");
extern char ext_str0_x001A0DB8[] __asm__("D_00467F18");
extern char ext_str1_x001A0DB8[] __asm__("D_00467F10");
extern char ext_str2_x001A0DB8[] __asm__("D_00467F08");
extern char ext_str3_x001A0DB8[] __asm__("D_00467EF8");
void func_001A0DB8_x001A0DB8(char *out, int unused, int *flags) __asm__("func_001A0DB8");
/* SUD_MakePicUsrDat: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A0DB8_x001A0DB8(char *out, int unused, int *flags) {
    char number[16];
    char *field;
    strncpy_x001A0DB8(out, ext_str3_x001A0DB8, 8);
    sprintf_x001A0DB8(number, ext_str2_x001A0DB8, 19);
    field = out + 16;
    strcat_x001A0DB8(out, number);
    strncpy_x001A0DB8(field, ext_str1_x001A0DB8, 2);
    SUD_SetFmtTypeToBuf_x001A0DB8(field, flags);
    strcat_x001A0DB8(field, ext_str0_x001A0DB8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0E48);
int atoi_x001A0F28(const char *) __asm__("func_001221D8");
typedef struct SudChars2_x001A0F28 {
    char c[2];
} SudChars2_x001A0F28;
unsigned int func_001A0F28_x001A0F28(char *header, int index) __asm__("func_001A0F28");
/* SUD_AnalyVersion: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned int func_001A0F28_x001A0F28(char *header, int index) {
    SudChars2_x001A0F28 digits;
    if (header == 0 || index < 0) {
        return 0;
    }
    digits = *(SudChars2_x001A0F28 *)(header + 16);
    return atoi_x001A0F28(digits.c);
}
s32 func_001A0F70(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    return func_00127E88(arg0 + 0x12, &D_00467F28, 1) == 0;
}
s32 func_001A0FB0(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    return func_00127E88(arg0 + 0x13, &D_00467F40, 1) == 0;
}
s32 func_00127E88_x001A0FF0(s32, s32 *, s32) __asm__("func_00127E88");
s32 func_001A0F28_x001A0FF0() __asm__("func_001A0F28");
extern s32 D_00467F58_x001A0FF0 __asm__("D_00467F58");
s32 func_001A0FF0_x001A0FF0(s32 arg0, s32 arg1) __asm__("func_001A0FF0");
s32 func_001A0FF0_x001A0FF0(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    var_v0 = func_001A0F28_x001A0FF0(arg0, arg1);
    if (var_v0 != 0) {
        var_v0 = func_00127E88_x001A0FF0(arg0 + 0x14, &D_00467F58_x001A0FF0, 1) == 0;
    }
    return var_v0;
}
typedef unsigned int size_t_x001A1050;
int strncmp_x001A1050(const char *, const char *, size_t_x001A1050) __asm__("func_00127E88");
unsigned int SUD_AnalyVersion_x001A1050(char *header, int index) __asm__("func_001A0F28");
unsigned int SUD_AnalyVersion_x001A1050(char *header, int index) __asm__("func_001A0F28");
extern char ext_str0_x001A1050[] __asm__("D_00467F58");
extern char ext_str1_x001A1050[] __asm__("D_00467F50");
int func_001A1050_x001A1050(char *header, int index) __asm__("func_001A1050");
/* FUN_002b5400: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A1050_x001A1050(char *header, int index) {
    char *field;
    int kind;
    if (header == 0 || index < 0) {
        return 0;
    }
    if (SUD_AnalyVersion_x001A1050(header, index) < 2) {
        return 0;
    }
    field = header + 21;
    if (strncmp_x001A1050(field, ext_str1_x001A1050, 1) == 0) {
        kind = 1;
    } else {
        kind = strncmp_x001A1050(field, ext_str0_x001A1050, 1) != 0 ? 0 : 2;
    }
    return kind;
}
typedef unsigned int size_t_x001A10E0;
int strncmp_x001A10E0(const char *, const char *, size_t_x001A10E0) __asm__("func_00127E88");
unsigned int SUD_AnalyVersion_x001A10E0(char *header, int index) __asm__("func_001A0F28");
unsigned int SUD_AnalyVersion_x001A10E0(char *header, int index) __asm__("func_001A0F28");
extern char ext_str0_x001A10E0[] __asm__("D_00467F20");
int func_001A10E0_x001A10E0(char *header, int index) __asm__("func_001A10E0");
/* FUN_002b5490: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A10E0_x001A10E0(char *header, int index) {
    if (header == 0 || index < 0) {
        return 0;
    }
    if (SUD_AnalyVersion_x001A10E0(header, index) < 2) {
        return 0;
    }
    return strncmp_x001A10E0(header + 22, ext_str0_x001A10E0, 1) != 0;
}
s32 func_001A1148(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x17);
    }
    return 0;
}
s32 func_001A11C8(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x1A);
    }
    return 0;
}
s32 func_001A1248(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x1D);
    }
    return 0;
}
s32 func_001A12C8(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x20);
    }
    return 0;
}
typedef struct SudChars3_x001A1348 {
    char c[3];
} SudChars3_x001A1348;
unsigned long FUN_002b5758_x001A1348(char *text, char **end, int radix) __asm__("func_001A13A8");
unsigned long FUN_002b5758_x001A1348(char *text, char **end, int radix) __asm__("func_001A13A8");
int func_001A1348_x001A1348(char *base, int index, int offset) __asm__("func_001A1348");
/* FUN_002b56f8: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A1348_x001A1348(char *base, int index, int offset) {
    SudChars3_x001A1348 digits;
    char *end;
    if (base == 0 || index < 0) {
        return 0;
    }
    digits = *(SudChars3_x001A1348 *)(base + offset);
    return FUN_002b5758_x001A1348(digits.c, &end, 16);
}
void func_001A13A8(void) {
    func_00129688();
}
s32 func_001A1488_x001A13C0(s32) __asm__("func_001A1488");
s32 memcmp_x001A13C0(s32, s32 *, s32) __asm__("memcmp");
extern s32 D_00467EF8_x001A13C0 __asm__("D_00467EF8");
extern s32 D_00467F68_x001A13C0 __asm__("D_00467F68");
void func_001A13C0_x001A13C0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_001A13C0");
void func_001A13C0_x001A13C0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
  s32 var_s1;
  s32 var_s0;
  var_s0 = arg0;
  *arg3 = 0;
  *arg2 = 0;
  if (((var_s0 != 0) && (var_s1 = arg1 > 0)) && (arg1 > 0))
  {
    var_s1 = arg1;
    do
    {
      if ((memcmp_x001A13C0(var_s0, &D_00467F68_x001A13C0, 1) == 0) && (memcmp_x001A13C0(var_s0, &D_00467EF8_x001A13C0, 8) == 0))
      {
        *arg2 = var_s0;
        arg1++;
        arg1--;
        *arg3 = func_001A1488_x001A13C0(var_s0);
      }
      var_s1 = var_s1 - 1;
      var_s0 += 1;
    }
    while (var_s1 != 0);
  }
}
s32 func_001A1488_x001A1488(s32 arg0) __asm__("func_001A1488");
s32 func_001A1488_x001A1488(s32 arg0) {
    return (arg0 == 0) ? 0 : 0x23;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1498);
extern volatile int D_003EEA78_x001A15C0 __asm__("D_00427334");
extern int D_003EEA7C_x001A15C0 __asm__("D_00427338");
extern unsigned int D_003EEA80_x001A15C0 __asm__("D_0042733C");
extern volatile unsigned int *D_0045A260_x001A15C0[] __asm__("D_00467F70");
void func_001A15C0_x001A15C0(void) __asm__("func_001A15C0");
/* IntrNest_leave: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032afb0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001A15C0_x001A15C0(void)
{
    D_003EEA78_x001A15C0--;
    if (D_003EEA78_x001A15C0 == 0 && D_003EEA7C_x001A15C0 != -1 && (D_003EEA80_x001A15C0 & 0xC7) != 0x82)
        *D_0045A260_x001A15C0[D_003EEA7C_x001A15C0] = D_003EEA80_x001A15C0 ^ 0xC00;
    if (D_003EEA78_x001A15C0 < 0)
        D_003EEA78_x001A15C0 = 0;
}
typedef unsigned int size_t_x001A1630;
extern void qsort_x001A1630(void *, size_t_x001A1630, size_t_x001A1630, int (*)(const void *, const void *)) __asm__("qsort");
typedef struct SudClock_x001A1630 {
    long long base;
    unsigned short last;
} SudClock_x001A1630;
extern volatile int utytmr_init_cnt_x001A1630 __asm__("D_00427334");
extern int utytmr_ch_x001A1630 __asm__("D_00427338");
extern volatile SudClock_x001A1630 DAT_005856b0_x001A1630 __asm__("D_00492A78");
extern volatile SudClock_x001A1630 DAT_005856c0_x001A1630 __asm__("D_00492A88");
extern volatile SudClock_x001A1630 *volatile DAT_005856d0_x001A1630 __asm__("D_00492A98");
extern volatile int DAT_005856d4_x001A1630 __asm__("D_00492A9C");
extern volatile unsigned int *const sud_tmr_count_x001A1630[] __asm__("D_00467F80");
long long func_001A1630_x001A1630(void) __asm__("func_001A1630");
/* UTY_GetTmr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long long func_001A1630_x001A1630(void) {
    unsigned int count;
    long long now;
    if (utytmr_init_cnt_x001A1630 <= 0 || utytmr_ch_x001A1630 == -1) {
        return 0;
    }
    DAT_005856d4_x001A1630++;
    if (DAT_005856d4_x001A1630 == 1) {
        DAT_005856c0_x001A1630 = DAT_005856b0_x001A1630;
        DAT_005856d0_x001A1630 = &DAT_005856c0_x001A1630;
        count = *sud_tmr_count_x001A1630[utytmr_ch_x001A1630] & 0xFFFF;
        if (count < DAT_005856b0_x001A1630.last) {
            DAT_005856b0_x001A1630.base += 0x10000;
        }
        DAT_005856b0_x001A1630.last = count;
        now = count + DAT_005856b0_x001A1630.base;
        DAT_005856d0_x001A1630 = &DAT_005856b0_x001A1630;
    } else {
        count = *sud_tmr_count_x001A1630[utytmr_ch_x001A1630] & 0xFFFF;
        now = count + DAT_005856d0_x001A1630->base;
        if (count < DAT_005856d0_x001A1630->last) {
            now += 0x10000;
        }
    }
    DAT_005856d4_x001A1630--;
    return now;
}
s32 func_001A1758(void) {
    func_001A1630();
    return D_00427320 == 1;
}
void func_001A1788(void) {
    func_001A18C8();
}
s64 func_001A17A0(void) {
    return D_00427320;
}
s32 func_0011F758_x001A17B0() __asm__("func_0011F758");
extern s64 D_00427320_x001A17B0 __asm__("D_00427320");
void func_001A17B0_x001A17B0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A17B0");
void func_001A17B0_x001A17B0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A17B0(arg0 * 0xF4240, D_00427320_x001A17B0, arg2, arg3);
    __asm__ __volatile__("");
}
s32 func_0011F758_x001A17F0() __asm__("func_0011F758");
extern s64 D_00427320_x001A17F0 __asm__("D_00427320");
void func_001A17F0_x001A17F0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A17F0");
void func_001A17F0_x001A17F0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A17F0(arg0 * 0x3E8, D_00427320_x001A17F0, arg2, arg3);
    __asm__ __volatile__("");
}
s32 func_0011F758_x001A1828() __asm__("func_0011F758");
extern s64 D_00427320_x001A1828 __asm__("D_00427320");
void func_001A1828_x001A1828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A1828");
void func_001A1828_x001A1828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A1828(arg0, D_00427320_x001A1828, arg2, arg3);
    __asm__ __volatile__("");
}
f32 func_001A1850(void) {
    return func_00121010() * D_00427330;
}
f32 func_001A1878(void) {
    return func_00121010() * D_0042732C;
}
f32 func_001A18A0(void) {
    return func_00121010() * D_00427328;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A18C8);
void func_001A1970_x001A1970(u8 *arg0) __asm__("func_001A1970");
void func_001A1970_x001A1970(u8 *arg0)
{
  unsigned long new_var2;
  u8 *new_var;
  unsigned int new_var3;
  new_var2 = 1U;
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  new_var = (u8 *) arg0;
  *((u64 *) (new_var + 8)) = (u64) ((-new_var2) >> 1);
  new_var3 = 0x10;
  *((s64 *) (new_var + 0)) = 0;
 do { } while (0);
  *((s64 *) (((u8 *) arg0) + new_var3)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1990);
