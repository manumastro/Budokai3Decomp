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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F128);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F328);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F3F8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F6D0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F7A0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F8A8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FA10);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FFC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FFF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0108);
void func_001A0188(void) {
    func_001A01A0();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A01A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A02E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0330);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A03B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0588);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A05D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0660);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", SFXZ_SetZclip);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A08C8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0DB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0E48);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0F28);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0FF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1050);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A10E0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1348);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1630);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A17B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A17F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1828);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1970);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1990);
