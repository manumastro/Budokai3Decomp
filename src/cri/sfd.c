#include "common.h"

s32 func_00194AD0();                                /* extern */

s32 func_0017E968();                            /* extern */

s32 memcpy(s32, s32, s32);                      /* extern */

s32 func_00190138(s32);                             /* extern */
s32 func_00190180(s32);                             /* extern */
s32 func_00194778();                                /* extern */

s32 func_0018FF20();                            /* extern */

s32 func_0017E7B8();                            /* extern */

s32 func_0017B3D0();                            /* extern */

s32 func_0018B730(void *, s32);                     /* extern */
s32 func_0018EE10();                                /* extern */
s32 func_0018EE80(void *, s32);             /* extern */
s32 func_0018EEE0(void *, s32);                     /* extern */

s32 func_0018DC00(void *);                          /* extern */
s32 func_0018EAA8();                                /* extern */
s32 func_0018ED30(void *);                      /* extern */

s32 func_0018DB90();                            /* extern */

s32 func_0017AFA8();                            /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

s32 func_001966A8();                            /* extern */

s32 func_0016E0D0();                            /* extern */

s32 func_0016E078();                            /* extern */

s32 func_0018D638();                            /* extern */

extern s32 D_004673D0;

s32 func_0018CD70(s32);                         /* extern */
s32 func_0018D390(s32);                         /* extern */

s32 func_0018CBE8(s32, s32);                    /* extern */
s32 func_0018CD20();                                /* extern */

s32 func_0018CA58();                                /* extern */

s32 func_0019D590();                            /* extern */

s32 func_0019D500(s32, s32 *);          /* extern */
extern s32 D_0048E088;

s32 func_0018D650(s32, s32, s32);       /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00199818(s32, s32, s32);       /* extern */

s32 func_00189EC0();                            /* extern */
s32 func_00189F30(s32);                         /* extern */

s32 ADXT_Stop(s32);                             /* extern */

s32 ADXT_Destroy();                             /* extern */

extern s32 D_00426AE0;

s32 ADXT_Create(s32, s32, s32);                     /* extern */
s32 func_0015F5B0(s32, s32);                /* extern */
s32 func_00189588();                                /* extern */
s32 func_00197EB8();                                /* extern */

s32 ADXT_GetStat(s32);                              /* extern */

s32 func_0015FCD8(s32);                         /* extern */

s32 func_001884E8();                            /* extern */

s32 func_001563B0();                            /* extern */
s32 func_00158B08();                            /* extern */

s32 func_00156210();                            /* extern */
s32 func_00158AF0();                            /* extern */
s32 func_00179018(s32 *, s32, s32); /* extern */
extern s32 D_0048CFD0;

s32 ADXT_GetOutVol(s32);                        /* extern */

s32 ADXT_SetOutVol(s32);                        /* extern */

s32 ADXT_GetOutPan(s32);                        /* extern */

s32 ADXT_SetOutPan(s32);                        /* extern */

s32 func_0015CC78(s32);                         /* extern */
s32 func_0015CE38();                            /* extern */

s32 func_0015CC38(s32);                         /* extern */
s32 func_0015CDD0();                            /* extern */

s32 func_0015CB30();                            /* extern */

s32 func_0015D678();                            /* extern */

s32 func_0015D488();                            /* extern */

s32 func_0015D4A8();                            /* extern */

s32 func_0015CCD0();                                /* extern */

s32 func_0015CD48();                            /* extern */

s32 func_001835A8();                            /* extern */
s32 func_001835C0();                            /* extern */
s32 func_00187180();                            /* extern */
s32 func_001871F0(s32);                         /* extern */

s32 func_00187D00();                                /* extern */

void *func_00181FA8();                              /* extern */

void func_00187D90(u8 *arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = func_00181FA8();
    *(s32 *)((u8 *)arg0 + 0x60) = arg1;
    *(s32 *)((u8 *)temp_v0 + 0x24) = arg1;
}
s32 func_00187DC8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x60);
}
s32 func_00187DD0(void) {
    return *(s32 *)((u8 *)(func_00181FA8()) + 0x24);
}
s32 func_00187DF0(void) {
    return func_00187D00() != 1;
}
void func_00187E18(s32 arg0) {
    func_001835A8();
    func_00187D90(arg0, 1);
    func_00187180();
    func_00187D90(arg0, 0);
    func_001835C0();
    func_001871F0(arg0);
}
s32 func_00187E68(void) {
    return 0;
}
s32 func_00187E70(void) {
    return 0;
}
s32 func_00187E78(void) {
    return 0;
}
s32 func_00187E80(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00187E88);
s32 func_00187EB0(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00187EB8);
s32 func_00187F58(void) {
    func_0015CD48();
    return 0;
}
s32 func_00187F78(void) {
    return func_0015CCD0() == 4;
}
void func_00187FA0(void) {

}
void func_00187FA8(s32 arg0) {
    if (arg0 != 0) {
        func_0015D4A8();
    }
}
void func_00187FD0(void) {
    func_0015D488();
}
s32 func_0015D4D0_x00187FE8() __asm__("func_0015D4D0");
void func_00187FE8_x00187FE8(s32 a0, s32 *a1) __asm__("func_00187FE8");
void func_00187FE8_x00187FE8(s32 a0, s32 *a1) {
    *a1 = func_0015D4D0_x00187FE8();
}
void func_00188010(void) {
    func_0015D678();
}
s32 func_0015CAE8_x00188028(s32, s32) __asm__("func_0015CAE8");
void func_00188028_x00188028(s32 a0) __asm__("func_00188028");
void func_00188028_x00188028(s32 a0) {
    func_0015CAE8_x00188028(a0, 0);
}
void func_00188040(void) {
    func_0015CB30();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188058);
typedef unsigned int u32_x001880B0;
extern u32_x001880B0 fn_8004AC04_x001880B0(u32_x001880B0, u32_x001880B0) __asm__("func_0015CE98");
extern u32_x001880B0 fn_8004B180_x001880B0(u32_x001880B0, u32_x001880B0, u32_x001880B0, u32_x001880B0, u32_x001880B0) __asm__("func_0015CB88");
extern void fn_8004B0EC_x001880B0(void *) __asm__("func_0015CC38");
void func_001880B0_x001880B0(u32_x001880B0 arg0, u32_x001880B0 arg1, u32_x001880B0 arg2, u32_x001880B0 arg3, u32_x001880B0 arg4) __asm__("func_001880B0");
/* fn_12_34F04: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_34F04.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001880B0_x001880B0(u32_x001880B0 arg0, u32_x001880B0 arg1, u32_x001880B0 arg2, u32_x001880B0 arg3, u32_x001880B0 arg4) {
    fn_8004B0EC_x001880B0((void *)arg0);
    fn_8004B180_x001880B0(arg0, arg1, arg2, arg3, arg4);
    fn_8004AC04_x001880B0(arg0, arg4);
}
void func_00188128(void) {
    func_0015CD48();
}
void func_00188140(s32 arg0) {
    func_0015CDD0();
    func_0015CC38(arg0);
}
void func_00188168(s32 arg0) {
    func_0015CE38();
    func_0015CC78(arg0);
}
void func_00188190(void) {
    func_0015CCD0();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001881A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188208);
void func_00188248(u8 *arg0) {
    ADXT_SetOutPan(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_00188268(u8 *arg0) {
    ADXT_GetOutPan(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_00188288(u8 *arg0) {
    ADXT_SetOutVol(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_001882A8(u8 *arg0) {
    ADXT_GetOutVol(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001882C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188380);
s32 func_001883D8(void) {
    func_00156210();
    func_00158AF0();
    func_00179018(&D_0048CFD0, 0, 7);
    return 0;
}
s32 func_00188418(void) {
    func_00158B08();
    func_001563B0();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188440);
void func_001884D0(void) {
    func_001884E8();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001884E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188578);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001885F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188620);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001886A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188760);
typedef signed char Sint8_x001889C0;
typedef signed int Sint32_x001889C0;
Sint32_x001889C0 ADXT_IsEndcode_x001889C0(Sint8_x001889C0 *adr, Sint32_x001889C0 siz, Sint32_x001889C0 *endsiz) __asm__("func_0015FC98");
Sint32_x001889C0 func_001889C0_x001889C0(Sint8_x001889C0 *buf, Sint32_x001889C0 size, Sint32_x001889C0 *pFound) __asm__("func_001889C0");
/* sfadxt_AdjDiscard: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003358e8.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x001889C0 func_001889C0_x001889C0(Sint8_x001889C0 *buf, Sint32_x001889C0 size, Sint32_x001889C0 *pFound) {
    Sint32_x001889C0 endsiz;
    Sint32_x001889C0 i;
    *pFound = 0;
    for (i = 0; i < size; i += 18) {
        if (!ADXT_IsEndcode_x001889C0(buf, 18, &endsiz)) {
            buf += 18;
            continue;
        }
        *pFound = 1;
        break;
    }
    return i;
}
void func_00188A48(u8 *arg0) {
    func_0015FCD8(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188A68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188B20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188C40);
void *func_0034B618_x00188D48(char *self) __asm__("func_00189BC0");
int func_00188D48_x00188D48(int a0, int *a1, int *a2) __asm__("func_00188D48");
/* func_0034A6F8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032f938.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00188D48_x00188D48(int a0, int *a1, int *a2) {
    int *r = func_0034B618_x00188D48(a0);
    if (r == 0) return -1;
    *a1 = r[3];
    *a2 = r[4];
    return 0;
}
s32 func_00188E40_x00188D98() __asm__("func_00188E40");
s32 func_0018B710_x00188D98() __asm__("func_0018B710");
s32 func_0018B730_x00188D98() __asm__("func_0018B730");
void func_00188D98_x00188D98(s32 arg0) __asm__("func_00188D98");
void func_00188D98_x00188D98(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1CAC;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730_x00188D98(arg0, temp_s2) != 1) && (func_0018B730_x00188D98(arg0, temp_s0) == 1) && (func_00188E40_x00188D98(arg0) != 0)) {
        func_0018B710_x00188D98(arg0, temp_s2, 1);
    }
}
s32 func_00188E40(u8 *arg0) {
    return ADXT_GetStat(**(s32 **)((u8 *)arg0 + 0x1CB4)) == 3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188E68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189008);
s32 func_0018AB58_x00189050() __asm__("func_0018AB58");
void func_00189050_x00189050(u8 *arg0, s32 arg1) __asm__("func_00189050");
void func_00189050_x00189050(u8 *arg0, s32 arg1) {
    func_0018AB58_x00189050(arg0, *(s32 *)((u8 *)arg0 + 0x1CBC), arg1);
    __asm__ __volatile__("");
}
s32 func_0018B770_x00189070(u8 *a0, s32 a1) __asm__("func_0018B770");
s32 func_00189070_x00189070(u8 *arg0) __asm__("func_00189070");
s32 func_00189070_x00189070(u8 *arg0) {
    return func_0018B770_x00189070(arg0, *(s32 *)(arg0 + 0x1CBC));
}
s32 func_0018B770_x00189088(u8 *a0, s32 a1) __asm__("func_0018B770");
s32 func_00189088_x00189088(u8 *arg0) __asm__("func_00189088");
s32 func_00189088_x00189088(u8 *arg0) {
    return func_0018B770_x00189088(arg0, *(s32 *)(arg0 + 0x1CC0));
}
s32 func_0018B750_x001890A0() __asm__("func_0018B750");
void func_001890A0_x001890A0(u8 *arg0, s32 arg1) __asm__("func_001890A0");
void func_001890A0_x001890A0(u8 *arg0, s32 arg1) {
    func_0018B750_x001890A0(arg0, *(s32 *)((u8 *)arg0 + 0x1CC0), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001890C0);
extern int GuardedCall_00329FD0_329F98_x00189178(void *hn) __asm__("ADXT_GetStat");
int func_00189178_x00189178(void *hn) __asm__("func_00189178");
/* sfadxt_IsEndDecinfo: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00349d38.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00189178_x00189178(void *hn)
{
    if ((unsigned int)GuardedCall_00329FD0_329F98_x00189178(hn) < 2) return 0;
    return 1;
}
s32 ADXT_SetSvrFreq_x001891A0() __asm__("ADXT_SetSvrFreq");
s32 func_001999E0_x001891A0() __asm__("func_001999E0");
void func_001891A0_x001891A0(u8 *arg0) __asm__("func_001891A0");
void func_001891A0_x001891A0(u8 *arg0) {
    s32 *temp_s1;
    s32 temp_s0;
    s32 temp_v0;

    temp_s1 = *(s32 **)((u8 *)arg0 + 0x1CB4);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0);
    temp_v0 = func_001999E0_x001891A0(arg0, 0x1B);
    if (*(s32 *)((u8 *)temp_s1 + 0x44) != temp_v0) {
        *(s32 *)((u8 *)temp_s1 + 0x44) = temp_v0;
        ADXT_SetSvrFreq_x001891A0(temp_s0, temp_v0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189208);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189360);
s32 func_00189518(u8 *arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (func_00197EB8() != 1) {
        var_v0_2 = ADXT_Create(*(s32 *)((u8 *)arg0 + 0xC), *(s32 *)((u8 *)arg0 + 0x18), *(s32 *)((u8 *)arg0 + 0x14));
    } else {
        var_v0_2 = func_00189588();
    }
    var_v0 = 0;
    if (var_v0_2 != 0) {
        func_0015F5B0(var_v0_2, 0);
        var_v0 = var_v0_2;
    }
    return var_v0;
}
s32 func_00189588(void) {
    return D_00426AE0;
}
s32 func_00199818_x00189598() __asm__("func_00199818");
s32 func_0019AE00_x00189598() __asm__("func_0019AE00");
extern s32 func_001895D8_x00189598 __asm__("func_001895D8");
void func_00189598_x00189598(s32 arg0) __asm__("func_00189598");
void func_00189598_x00189598(s32 arg0) {
    func_0019AE00_x00189598(arg0, &func_001895D8_x00189598, 2);
    func_00199818_x00189598(arg0, 0xF, 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001895D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189698);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189740);
s32 func_00189818(void) {
    ADXT_Destroy();
    return 0;
}
s32 func_00189838(s32 arg0) {
    D_00426AE0 = arg0;
    return 0;
}
s32 func_00189848(void) {
    return 0;
}
extern void func_0034B3E0_x00189850(int a, int b) __asm__("func_00189988");
int func_00189850_x00189850(int a0) __asm__("func_00189850");
/* func_0034B2A8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0031f4e0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00189850_x00189850(int a0) {
    func_0034B3E0_x00189850(a0, 0);
    return 0;
}
s32 func_00189870(u8 *arg0) {
    ADXT_Stop(**(s32 **)((u8 *)arg0 + 0x1CB4));
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189898);
s32 func_00189A20_x00189988(s32, s32, s32, s32) __asm__("func_00189A20");
void func_00189988_x00189988(u8 *arg0, s32 arg1) __asm__("func_00189988");
void func_00189988_x00189988(u8 *arg0, s32 arg1)
{
  s32 temp_a3;
  u8 *temp_v1;
  u8 *new_var;
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x1CB4));
  *((s32 *) (((u8 *) temp_v1) + 0x2C)) = arg1;
  new_var = arg0 + 0xFA0;
  temp_a3 = *((s32 *) (((u8 *) temp_v1) + 0));
  if ((arg1 != 0) || ((*((s32 *) (((u8 *) arg0) + 0x50))) != 1))
  {
    func_00189A20_x00189988(temp_a3, new_var, arg1, temp_a3);
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001899D8);
extern void func_0032B300_x00189A20(void *hn, int sw) __asm__("ADXT_Pause");
extern void Obj35C0_SetField_4_C538_x00189A20(int a0, int sw) __asm__("func_0019C340");
void func_00189A20_x00189A20(void *hn, int a1, int sw) __asm__("func_00189A20");
/* sfadxt_WtPause: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00349d38.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00189A20_x00189A20(void *hn, int a1, int sw)
{
    func_0032B300_x00189A20(hn, sw);
    Obj35C0_SetField_4_C538_x00189A20(a1, sw);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189A60);
s32 func_0018D650_x00189AB0() __asm__("func_0018D650");
void func_00189AB0_x00189AB0(s32 arg0) __asm__("func_00189AB0");
void func_00189AB0_x00189AB0(s32 arg0) {
    func_0018D650_x00189AB0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189AD0() __asm__("func_0018D650");
void func_00189AD0_x00189AD0(s32 arg0) __asm__("func_00189AD0");
void func_00189AD0_x00189AD0(s32 arg0) {
    func_0018D650_x00189AD0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189AF0() __asm__("func_0018D650");
void func_00189AF0_x00189AF0(s32 arg0) __asm__("func_00189AF0");
void func_00189AF0_x00189AF0(s32 arg0) {
    func_0018D650_x00189AF0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189B10() __asm__("func_0018D650");
void func_00189B10_x00189B10(s32 arg0) __asm__("func_00189B10");
void func_00189B10_x00189B10(s32 arg0) {
    func_0018D650_x00189B10(arg0, 0xFF000C03);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189B30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189BC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189BF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189C80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189CF8);
s32 func_0018D650_x00189D78(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00189D78() __asm__("func_0018D870");
s32 func_001999E0_x00189D78(void *, s32) __asm__("func_001999E0");
s32 func_00189D78_x00189D78(u8 *arg0) __asm__("func_00189D78");
s32 func_00189D78_x00189D78(u8 *arg0)
{
  s32 var_v0;
  if (func_0018D870_x00189D78() != 0)
  {
    func_0018D650_x00189D78(0, 0xFF0001A4);
    return 0;
  }
  var_v0 = func_001999E0_x00189D78(arg0, 6);
  if (var_v0 != 0)
  {
    var_v0 = (*((s32 (**)(u8 *)) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x1DC4)))) + 0x10)))(arg0);
    return var_v0;
  }
}
s32 func_001999E0_x00189DE8() __asm__("func_001999E0");
void func_00189DE8_x00189DE8(u8 *arg0, s32 arg1) __asm__("func_00189DE8");
void func_00189DE8_x00189DE8(u8 *arg0, s32 arg1) {
    s32 (*temp_v0)(u8 *, s32);

    if (func_001999E0_x00189DE8(arg0, 6) != 0) {
        temp_v0 = *(s32 (**)(u8 *, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0x1DC4)) + 0x14);
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
    }
}
s32 func_00189E40(void) {
    return 0;
}
s32 func_00189E48(void) {
    return 0;
}
s32 func_00189E90_x00189E50() __asm__("func_00189E90");
s32 func_001999E0_x00189E50() __asm__("func_001999E0");
void func_00189E50_x00189E50(s32 arg0) __asm__("func_00189E50");
void func_00189E50_x00189E50(s32 arg0) {
    if (func_001999E0_x00189E50(arg0, 6) != 0) {
        func_00189E90_x00189E50(arg0);
    }
}
s32 func_00189E90(s32 arg0) {
    func_00189EC0();
    func_00189F30(arg0);
    return 0;
}
s32 func_0018B730_x00189EC0() __asm__("func_0018B730");
s32 func_0019C128_x00189EC0() __asm__("func_0019C128");
s32 func_0019C140_x00189EC0() __asm__("func_0019C140");
void func_00189EC0_x00189EC0(u8 *arg0) __asm__("func_00189EC0");
void func_00189EC0_x00189EC0(u8 *arg0) {
    if ((func_0019C140_x00189EC0(arg0, 7) != 1) && (func_0018B730_x00189EC0(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C128_x00189EC0(arg0, 7, 1);
    }
}
s32 func_0018B770_x00189F30() __asm__("func_0018B770");
s32 func_0019C158_x00189F30() __asm__("func_0019C158");
s32 func_0019C170_x00189F30() __asm__("func_0019C170");
void func_00189F30_x00189F30(u8 *arg0) __asm__("func_00189F30");
void func_00189F30_x00189F30(u8 *arg0) {
    if ((func_0019C170_x00189F30(arg0, 7) != 1) && (func_0018B770_x00189F30(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C158_x00189F30(arg0, 7, 1);
    }
}
s32 func_00189FE0_x00189FA0() __asm__("func_00189FE0");
s32 func_001999E0_x00189FA0() __asm__("func_001999E0");
s32 func_00189FA0_x00189FA0(u8 *arg0) __asm__("func_00189FA0");
s32 func_00189FA0_x00189FA0(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = func_001999E0_x00189FA0(arg0, 6);
    temp_v1 = arg0 + 0x3194;
    if (var_v0 != 0) {
        *(s32 *)((u8 *)arg0 + 0x1DC4) = temp_v1;
        func_00189FE0_x00189FA0(temp_v1);
        var_v0 = 0;
    }
    return var_v0;
}
void func_00189FE0(void) {

}
s32 func_00189FE8(void) {
    return 0;
}
extern int fn_12_2D73C_x00189FF0(void *arg, int value) __asm__("func_001999E0");
extern int fn_12_2F210_x00189FF0(void *arg, int a, int b, int c, int d) __asm__("func_0019C0D8");
int func_00189FF0_x00189FF0(void *arg) __asm__("func_00189FF0");
/* fn_12_21864: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_21864.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_00189FF0_x00189FF0(void *arg) {
    int temp;
    int result;
    if (fn_12_2D73C_x00189FF0(arg, 6) == 0) {
        return 0;
    }
    temp = fn_12_2F210_x00189FF0(arg, 3, 5, 0, 0);
    result = 0;
    if (temp != 0) {
        result = temp;
    }
    return result;
}
extern int fn_12_2D73C_x0018A038(int arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A038(int arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A038_x0018A038(int arg0) __asm__("func_0018A038");
/* fn_12_217F8: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_217F8.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A038_x0018A038(int arg0) {
    int result;
    int value;
    if (fn_12_2D73C_x0018A038(arg0, 6) == 0) {
        return 0;
    }
    value = fn_12_2F210_x0018A038(arg0, 3, 6, 0, 0);
    result = 0;
    if (value != 0) {
        result = value;
    }
    return result;
}
extern int fn_12_2D73C_x0018A080(void *arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A080(void *arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A080_x0018A080(void *arg0) __asm__("func_0018A080");
/* fn_12_2178C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2178C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A080_x0018A080(void *arg0) {
    int result;
    int value;
    if (!fn_12_2D73C_x0018A080(arg0, 6)) {
        return 0;
    }
    value = fn_12_2F210_x0018A080(arg0, 3, 7, 0, 0);
    result = 0;
    if (value) {
        result = value;
    }
    return result;
}
extern int fn_12_2D73C_x0018A0C8(void *arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A0C8(void *arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A0C8_x0018A0C8(void *arg0, int arg1) __asm__("func_0018A0C8");
/* fn_12_21714: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_21714.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A0C8_x0018A0C8(void *arg0, int arg1) {
    int result;
    int value;
    if (!fn_12_2D73C_x0018A0C8(arg0, 6)) {
        return 0;
    }
    value = fn_12_2F210_x0018A0C8(arg0, 3, 8, arg1, 0);
    result = 0;
    if (value) {
        result = value;
    }
    return result;
}
s32 func_0018D650_x0018A120() __asm__("func_0018D650");
void func_0018A120_x0018A120(s32 arg0) __asm__("func_0018A120");
void func_0018A120_x0018A120(s32 arg0) {
    func_0018D650_x0018A120(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A140() __asm__("func_0018D650");
void func_0018A140_x0018A140(s32 arg0) __asm__("func_0018A140");
void func_0018A140_x0018A140(s32 arg0) {
    func_0018D650_x0018A140(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A160() __asm__("func_0018D650");
void func_0018A160_x0018A160(s32 arg0) __asm__("func_0018A160");
void func_0018A160_x0018A160(s32 arg0) {
    func_0018D650_x0018A160(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A180() __asm__("func_0018D650");
void func_0018A180_x0018A180(s32 arg0) __asm__("func_0018A180");
void func_0018A180_x0018A180(s32 arg0) {
    func_0018D650_x0018A180(arg0, 0xFF000A01);
}
s32 func_0018A1A0(void) {
    return 0;
}
void func_0018A1A8(void) {

}
void func_0018A1B0(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A1B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A318);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A358);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A420);
extern void func_0034BD98_x0018A478(void *sj, int kind) __asm__("func_0018A4B8");
void func_0018A478_x0018A478(void *sj) __asm__("func_0018A478");
/* SFBUF_DestroySj: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00201a50.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018A478_x0018A478(void *sj)
{
    func_0034BD98_x0018A478(sj, 0);
    func_0034BD98_x0018A478(sj, 1);
    func_0034BD98_x0018A478(sj, 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A4B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A520);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A678);
s32 func_0018A750_x0018A700(s32, s32, s32) __asm__("func_0018A750");
s32 func_0018A770_x0018A700(s32) __asm__("func_0018A770");
void func_0018A700_x0018A700(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0018A700");
void func_0018A700_x0018A700(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
  int new_var;
  s32 temp_s0;
  new_var = arg0 + (arg3 * 0x74);
  temp_s0 = new_var;
  new_var = temp_s0 + 0x10;
  func_0018A750_x0018A700(temp_s0, 3, 1);
  func_0018A770_x0018A700(new_var);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A750);
void func_0018A770(u8 *arg0) {
    s32 var_v0;
    u8 *var_a0;

    var_a0 = arg0;
    var_v0 = 2;
    do {
        var_v0 -= 1;
        *(s32 *)((u8 *)var_a0 + 0) = 0;
        *(s32 *)((u8 *)var_a0 + 4) = 0;
        *(s32 *)((u8 *)var_a0 + 8) = 0;
        *(s32 *)((u8 *)var_a0 + 0xC) = 0;
        var_a0 += 0x10;
    } while (var_v0 >= 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A7A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A848);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A890);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A900);
void func_0018A9A0_x0018A9A0(u8 *arg0) __asm__("func_0018A9A0");
void func_0018A9A0_x0018A9A0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A9B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A9F8);
void func_0018AA40_x0018AA40(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0018AA40");
void func_0018AA40_x0018AA40(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var;
  new_var = arg1 * 0x74;
  *arg2 = *((s32 *) (((u8 *) (arg0 + new_var)) + 0x1294));
}
s32 func_0018AA98_x0018AA68(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0018AA98");
s32 func_0018AA68_x0018AA68(s32 a0, s32 a1, s32 a2) __asm__("func_0018AA68");
s32 func_0018AA68_x0018AA68(s32 a0, s32 a1, s32 a2) {
    return func_0018AA98_x0018AA68(a0, a1, a2, 0);
}
s32 func_0018AA98_x0018AA80(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0018AA98");
s32 func_0018AA80_x0018AA80(s32 a0, s32 a1, s32 a2) __asm__("func_0018AA80");
s32 func_0018AA80_x0018AA80(s32 a0, s32 a1, s32 a2) {
    return func_0018AA98_x0018AA80(a0, a1, a2, 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA98);
void func_0018AB70_x0018AB40(s32, s32, s32, s32) __asm__("func_0018AB70");
void func_0018AB40_x0018AB40(s32 a, s32 b, s32 c) __asm__("func_0018AB40");
void func_0018AB40_x0018AB40(s32 a, s32 b, s32 c) {
    func_0018AB70_x0018AB40(a, b, c, 0);
}
void func_0018AB70_x0018AB58(s32, s32, s32, s32) __asm__("func_0018AB70");
void func_0018AB58_x0018AB58(s32 a, s32 b, s32 c) __asm__("func_0018AB58");
void func_0018AB58_x0018AB58(s32 a, s32 b, s32 c) {
    func_0018AB70_x0018AB58(a, b, c, 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AB70);
extern void sfbuf_PeekChunk_x0018ACC0(void *buf, int a1, void *out0, void *out1) __asm__("func_0018AD50");
typedef struct {
    int start;
    int len;
} SfChunk_x0018ACC0;
typedef struct {
    int pos;
    int next;
} SfConti_x0018ACC0;
typedef struct {
    void *dummy0;
    void *buf;
    int pad[4];
    SfConti_x0018ACC0 conti;
} SfBuf_x0018ACC0;
void func_0018ACC0_x0018ACC0(SfBuf_x0018ACC0 *a0) __asm__("func_0018ACC0");
/* sfbuf_ResetConti: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018ACC0_x0018ACC0(SfBuf_x0018ACC0 *a0) {
    SfConti_x0018ACC0 *s0;
    SfChunk_x0018ACC0 chunk1;
    SfChunk_x0018ACC0 chunk2;
    unsigned int pos;
    s0 = &a0->conti;
    sfbuf_PeekChunk_x0018ACC0(a0->buf, 1, &chunk1, &chunk2);
    pos = (unsigned int)s0->pos;
    if ((unsigned int)pos < (unsigned int)chunk1.start) {
        goto check2;
    }
    if ((unsigned int)pos < (unsigned int)(chunk1.start + chunk1.len)) {
        return;
    }
check2:
    if ((unsigned int)pos < (unsigned int)chunk2.start) {
        s0->pos = 0;
        s0->next = 0;
        return;
    }
    if ((unsigned int)pos < (unsigned int)(chunk2.start + chunk2.len)) {
        return;
    }
    s0->pos = 0;
    s0->next = 0;
}
typedef unsigned char Uint8_x0018AD50;
typedef int Sint32_x0018AD50;
typedef struct _sj_obj_x0018AD50 {
    struct _sj_vtbl_x0018AD50 *vtbl;
} SJ_OBJ_x0018AD50, *SJ_x0018AD50;
typedef struct {
    Uint8_x0018AD50 *data;
    Sint32_x0018AD50 len;
} SJCK_x0018AD50;
struct _sj_vtbl_x0018AD50 {
    void (*QueryInterface)();
    void (*AddRef)();
    void (*Release)();
    void (*Destroy)();
    void *(*GetUuid)();
    void (*Reset)();
    void (*GetChunk)(SJ_x0018AD50, Sint32_x0018AD50, Sint32_x0018AD50, SJCK_x0018AD50 *);
    void (*UngetChunk)(SJ_x0018AD50, Sint32_x0018AD50, SJCK_x0018AD50 *);
    void (*PutChunk)();
    Sint32_x0018AD50 (*GetNumData)(SJ_x0018AD50, Sint32_x0018AD50);
    Sint32_x0018AD50 (*IsGetChunk)();
    void (*EntryErrFunc)();
};
Sint32_x0018AD50 func_0018AD50_x0018AD50(SJ_x0018AD50 sj, Sint32_x0018AD50 type, SJCK_x0018AD50 *ck1, SJCK_x0018AD50 *ck2) __asm__("func_0018AD50");
/* sfbuf_PeekChunk: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0034c588.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0018AD50 func_0018AD50_x0018AD50(SJ_x0018AD50 sj, Sint32_x0018AD50 type, SJCK_x0018AD50 *ck1, SJCK_x0018AD50 *ck2)
{
    Sint32_x0018AD50 ndata;
    ndata = ((sj)->vtbl->GetNumData((sj), (type)));
    ((sj)->vtbl->GetChunk((sj), (type), (0x7FFFFFFF), (ck1)));
    if (ck1->len < ndata) {
        ((sj)->vtbl->GetChunk((sj), (type), (0x7FFFFFFF), (ck2)));
        ((sj)->vtbl->UngetChunk((sj), (type), (ck2)));
    } else {
        ck2->data = 0;
        ck2->len = 0;
    }
    ((sj)->vtbl->UngetChunk((sj), (type), (ck1)));
    return ndata;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AE48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AEA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AF10);
s32 func_0018AF78_x0018AF78(s32 arg0, s32 arg1) __asm__("func_0018AF78");
s32 func_0018AF78_x0018AF78(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x129C);
  return *new_var;
}
s32 func_0018AF98_x0018AF98(s32 arg0, s32 arg1) __asm__("func_0018AF98");
s32 func_0018AF98_x0018AF98(s32 arg0, s32 arg1)
{
  int new_var;
  new_var = arg1 * 0x74;
  return *((s32 *) (((u8 *) (arg0 + new_var)) + 0x12B4));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AFB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B058);
void func_0018B0B8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u8 *temp_a0;

    temp_a0 = arg0 + (arg1 * 0x74) + 0x1290;
    temp_v0 = *(s32 *)((u8 *)temp_a0 + 0x24);
    if (temp_v0 >= 0) {
        *(s32 *)((u8 *)temp_a0 + 0x24) = (s32) (temp_v0 + arg2);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B0F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B298);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B390);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B540);
s32 func_0018B630(void) {
    return 0;
}
s32 func_0018B638_x0018B638(u8 *arg0) __asm__("func_0018B638");
s32 func_0018B638_x0018B638(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
 do { return 0; } while (0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B648);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B6A0);
void func_0018B710_x0018B710(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018B710");
void func_0018B710_x0018B710(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x74))) + 0x1288;
  *((s32 *) new_var) = arg2;
}
s32 func_0018B730_x0018B730(s32 arg0, s32 arg1) __asm__("func_0018B730");
s32 func_0018B730_x0018B730(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x1288);
  return *new_var;
}
void func_0018B750_x0018B750(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018B750");
void func_0018B750_x0018B750(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  s32 new_var;
  new_var = arg2;
  new_var2 = (u8 *) (arg0 + (arg1 * 0x74));
  *((s32 *) (new_var2 + 0x128C)) = new_var;
}
s32 func_0018B770_x0018B770(s32 arg0, s32 arg1) __asm__("func_0018B770");
s32 func_0018B770_x0018B770(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x128C);
  return *new_var;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B790);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B7B8);
s32 func_0018B7E0(s32 arg0) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000161, 1);
    }
    func_00199818(arg0, 0x31, 1);
    return 0;
}
s32 func_001999E0_x0018B840(s32, s32) __asm__("func_001999E0");
s32 func_0018B840_x0018B840(s32 a0) __asm__("func_0018B840");
s32 func_0018B840_x0018B840(s32 a0) {
    return func_001999E0_x0018B840(a0, 0x31) != 0;
}
s32 func_001999E0_x0018B860() __asm__("func_001999E0");
s32 func_0018B860_x0018B860(s32 arg0) __asm__("func_0018B860");
s32 func_0018B860_x0018B860(s32 arg0) {
    s32 var_v0;

    if ((func_001999E0_x0018B860(arg0, 0x31) != 0) || (var_v0 = func_001999E0_x0018B860(arg0, 0x38), (var_v0 != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
s32 func_001999E0_x0018B8A8() __asm__("func_001999E0");
s32 func_0018B8A8_x0018B8A8(s32 arg0) __asm__("func_0018B8A8");
s32 func_0018B8A8_x0018B8A8(s32 arg0) {
    s32 var_v0;

    if ((func_001999E0_x0018B8A8(arg0, 0x31) != 0) || (var_v0 = func_001999E0_x0018B8A8(arg0, 0x39), (var_v0 != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B8F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B970);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BA20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BAE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BC30);
s32 func_0018BD80_x0018BCD0(s32) __asm__("func_0018BD80");
s32 func_0018BDE0_x0018BCD0(s32, s32, s32) __asm__("func_0018BDE0");
s32 func_0018BDE8_x0018BCD0(s32, s32, s32) __asm__("func_0018BDE8");
s32 func_0018C318_x0018BCD0(s32, s32, s32) __asm__("func_0018C318");
s32 func_0018C5B8_x0018BCD0(s32, s32, s32) __asm__("func_0018C5B8");
s32 func_0018C7B0_x0018BCD0(s32, s32, s32) __asm__("func_0018C7B0");
void func_0018BCD0_x0018BCD0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018BCD0");
void func_0018BCD0_x0018BCD0(s32 arg0, s32 arg1, s32 arg2) {
    func_0018BD80_x0018BCD0(arg2);
    if (func_0018BDE0_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018BDE8_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018C7B0_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018C318_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    func_0018C5B8_x0018BCD0(arg0, arg1, arg2);
block_5:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BD80);
s32 func_0018BDE0(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BDE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BEA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BF88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C020);
s32 func_00178BA8_x0018C0D8(s32, s32, s32) __asm__("func_00178BA8");
s32 func_0018CD70_x0018C0D8(void *) __asm__("func_0018CD70");
void func_0018C0D8_x0018C0D8(s32 arg0, s32 arg1, u8 *arg2) __asm__("func_0018C0D8");
void func_0018C0D8_x0018C0D8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_s0;

    temp_s0 = (arg1 < 0x801) ? arg1 : 0x800;
    func_00178BA8_x0018C0D8(arg2 + 0x94, arg0, temp_s0);
    *(s32 *)((u8 *)arg2 + 0x90) = temp_s0;
    func_0018CD70_x0018C0D8(arg2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C128);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C230);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C298);
s32 func_0018C3B0_x0018C318() __asm__("func_0018C3B0");
s32 func_0018C318_x0018C318(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018C318");
s32 func_0018C318_x0018C318(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0018C3B0_x0018C318() != 0) {
        goto block_5;
    }
    if (func_0018C3B0_x0018C318(arg0 + 2, arg1 - 2, arg2) == 0) {
        goto block_3;
    }
    return 1;
block_3:
    if (func_0018C3B0_x0018C318(arg0 + 1, arg1 - 1, arg2) == 0) {
        goto block_7;
    }
block_5:
    return 1;
block_7:
    return func_0018C3B0_x0018C318(arg0 + 3, arg1 - 3, arg2) != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C3B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C488);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C500);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C5B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C660);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C730);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C7B0);
void func_0018C918(void) {
    func_0019D500(0x20, &D_0048E088);
}
void func_0018C938(void) {
    func_0019D590();
}
typedef unsigned char u8_x0018C950;
typedef unsigned int u32_x0018C950;
typedef struct MovieModule_x0018C950 {
    u32_x0018C950 unk_00;
    u32_x0018C950 unk_04;
    u32_x0018C950 unk_08;
    u32_x0018C950 unk_0c;
    u8_x0018C950 pad_10[0x80];
    u32_x0018C950 unk_90;
} MovieModule_x0018C950;
void func_0018C950_x0018C950(MovieModule_x0018C950 *self) __asm__("func_0018C950");
/* fn_12_248E8: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_248E8.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0018C950_x0018C950(MovieModule_x0018C950 *self) {
    self->unk_00 = 0;
    self->unk_04 = 0;
    self->unk_08 = 0;
    self->unk_0c = 0;
    self->unk_90 = 0;
}
void func_0018C968_x0018C968(u8 *arg0) __asm__("func_0018C968");
void func_0018C968_x0018C968(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x90)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C978);
s32 func_0018CA30(void) {
    return func_0018CA58() == 0x1BF;
}
s32 func_0018CA58(u8 *arg0) {
    return (((((*(u8 *)((u8 *)arg0 + 0) << 8) | *(u8 *)((u8 *)arg0 + 1)) << 8) | *(u8 *)((u8 *)arg0 + 2)) << 8) | *(u8 *)((u8 *)arg0 + 3);
}
typedef unsigned int u32_x0018CA88;
extern void *fn_12_3310C_x0018CA88(void) __asm__("func_0019D5D8");
extern int fn_12_32EAC_x0018CA88(void *movie, u32_x0018CA88 *result) __asm__("func_0019D7F0");
extern void fn_12_330E0_x0018CA88(void *movie) __asm__("func_0019D6A0");
u32_x0018CA88 func_0018CA88_x0018CA88(void) __asm__("func_0018CA88");
/* fn_12_24760: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_24760.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u32_x0018CA88 func_0018CA88_x0018CA88(void) {
    void *movie;
    u32_x0018CA88 result;
    movie = fn_12_3310C_x0018CA88();
    if (movie == 0) {
        return 0;
    }
    if (fn_12_32EAC_x0018CA88(movie, &result) == 0) {
        result = 0;
    }
    fn_12_330E0_x0018CA88(movie);
    return result;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CAE0);
void func_0018CBA8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_v0, arg0 + 0x78);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CBE8);
void func_0018CCB8(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 0x78;
    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_s0, temp_v0);
        func_0018CD70(temp_s0);
        func_0018D390(arg0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CD20);
s32 func_0018CDD8_x0018CD70(s32, void *) __asm__("func_0018CDD8");
s32 func_0019D5D8_x0018CD70(s32, s32) __asm__("func_0019D5D8");
s32 func_0019D6A0_x0018CD70(s32) __asm__("func_0019D6A0");
void func_0018CD70_x0018CD70(u8 *arg0) __asm__("func_0018CD70");
void func_0018CD70_x0018CD70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0019D5D8_x0018CD70(arg0 + 0x94, *(s32 *)((u8 *)arg0 + 0x90));
    if (temp_v0 != 0) {
        func_0018CDD8_x0018CD70(temp_v0, arg0);
        func_0019D6A0_x0018CD70(temp_v0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CDD8);
s32 func_0018D320_x0018CF30() __asm__("func_0018D320");
extern s32 func_0019DCF8_x0018CF30 __asm__("func_0019DCF8");
extern s32 func_0019DD40_x0018CF30 __asm__("func_0019DD40");
extern s32 func_0019DD88_x0018CF30 __asm__("func_0019DD88");
extern s32 func_0019DDD0_x0018CF30 __asm__("func_0019DDD0");
void func_0018CF30_x0018CF30(s32 *arg0, u8 *arg1) __asm__("func_0018CF30");
void func_0018CF30_x0018CF30(s32 *arg0, u8 *arg1) {
    s32 temp_v0;

    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320_x0018CF30(arg0, &func_0019DCF8_x0018CF30);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320_x0018CF30(arg0, &func_0019DD40_x0018CF30);
    temp_v0 = func_0018D320_x0018CF30(arg0, &func_0019DD88_x0018CF30);
    *(s32 *)((u8 *)arg1 + 0x18) = temp_v0;
    if (temp_v0 == -1) {
        *(s32 *)((u8 *)arg1 + 0x18) = 2;
    }
    *(s32 *)((u8 *)arg1 + 0x1C) = func_0018D320_x0018CF30(arg0, &func_0019DDD0_x0018CF30);
}
s32 func_0018D320_x0018CFC0() __asm__("func_0018D320");
extern s32 func_0019DF00_x0018CFC0 __asm__("func_0019DF00");
extern s32 func_0019DF48_x0018CFC0 __asm__("func_0019DF48");
extern s32 func_0019DF90_x0018CFC0 __asm__("func_0019DF90");
extern s32 func_0019DFD8_x0018CFC0 __asm__("func_0019DFD8");
extern s32 func_0019E088_x0018CFC0 __asm__("func_0019E088");
extern s32 func_0019E0D0_x0018CFC0 __asm__("func_0019E0D0");
extern s32 func_0019E118_x0018CFC0 __asm__("func_0019E118");
void func_0018CFC0_x0018CFC0(s32 *arg0, u8 *arg1) __asm__("func_0018CFC0");
void func_0018CFC0_x0018CFC0(s32 *arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = func_0018D320_x0018CFC0(arg0, &func_0019DF00_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 4) = func_0018D320_x0018CFC0(arg0, &func_0019DF48_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 8) = func_0018D320_x0018CFC0(arg0, &func_0019DF90_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0xC) = func_0018D320_x0018CFC0(arg0, &func_0019DFD8_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320_x0018CFC0(arg0, &func_0019E088_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320_x0018CFC0(arg0, &func_0019E0D0_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x18) = func_0018D320_x0018CFC0(arg0, &func_0019E118_x0018CFC0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D078);
s32 func_0018D358_x0018D0F0() __asm__("func_0018D358");
extern s32 func_0019E298_x0018D0F0 __asm__("func_0019E298");
extern s32 func_0019E300_x0018D0F0 __asm__("func_0019E300");
extern s32 func_0019E380_x0018D0F0 __asm__("func_0019E380");
extern s32 func_0019E3E8_x0018D0F0 __asm__("func_0019E3E8");
void func_0018D0F0_x0018D0F0(s32 *arg0, s32 arg1, u8 *arg2) __asm__("func_0018D0F0");
void func_0018D0F0_x0018D0F0(s32 *arg0, s32 arg1, u8 *arg2) {
    if (arg1 != 0) {
        *(s32 *)((u8 *)arg2 + 0) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E298_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 4) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E300_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 8) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E380_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 0xC) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E3E8_x0018D0F0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D188);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D320);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D358);
void func_0018D390_x0018D390(s32 arg0) __asm__("func_0018D390");
void func_0018D390_x0018D390(s32 arg0) {
    u8 *temp_a0;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x98;
    temp_a0 = arg0 + 0x90C;
    *(s32 *)((u8 *)temp_a0 + 0x24) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)temp_a0 + 0x28) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *(s32 *)((u8 *)temp_a0 + 0x2C) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
}
s32 func_0018D3B8(void) {
    return 2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D3C0);
typedef unsigned char u8_x0018D3F8;
typedef signed int s32_x0018D3F8;
typedef struct MovieSub_x0018D3F8 {
    u8_x0018D3F8 pad_00[0x14];
    s32_x0018D3F8 unk_14;
    void *unk_18;
} MovieSub_x0018D3F8;
typedef struct MovieModule_x0018D3F8 {
    u8_x0018D3F8 pad_00[0x78];
    s32_x0018D3F8 unk_78;
    u8_x0018D3F8 pad_7c[0x58];
    u8_x0018D3F8 unk_d4[1];
} MovieModule_x0018D3F8;
void *func_0018D3F8_x0018D3F8(MovieModule_x0018D3F8 *self) __asm__("func_0018D3F8");
/* fn_12_23F00: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_23F00.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *func_0018D3F8_x0018D3F8(MovieModule_x0018D3F8 *self) {
    void *base = (u8_x0018D3F8 *)self + 0xd4;
    if (self->unk_78 == 0) {
        return (void *)-1;
    }
    if (((MovieSub_x0018D3F8 *)base)->unk_14 != 0) {
        return ((MovieSub_x0018D3F8 *)base)->unk_18;
    }
    return (void *)-1;
}
s32 *func_0018D420(void) {
    return &D_004673D0;
}
s32 func_0018D430_x0018D430(s32 arg0, s32 arg1) __asm__("func_0018D430");
s32 func_0018D430_x0018D430(s32 arg0, s32 arg1) {
    return arg1 == 0x32B8;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D440);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D4A8);
void func_0018D568_x0018D568(u8 *arg0) __asm__("func_0018D568");
void func_0018D568_x0018D568(u8 *arg0)
{
  u8 *new_var;
  u8 *new_var2;
  u8 *new_var3;
  new_var = arg0;
 new_var3 = arg0 + 0x1FC; *((s32 *) (((u8 *) new_var3) + 4)) = 0; do { } while (0); new_var2 = new_var; *((s32 *) (((u8 *) new_var2) + 0x1FC)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D578);
void func_0018D620(void) {
    func_0018D638();
}
void func_0018D638_x0018D638(u8 *arg0) __asm__("func_0018D638");
void func_0018D638_x0018D638(u8 *arg0)
{
  u8 *new_var;
  new_var = ((u8 *) arg0) + 0;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) new_var) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D650);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D6C0);
s32 func_0018D650_x0018D700() __asm__("func_0018D650");
s32 func_0018D798_x0018D700() __asm__("func_0018D798");
s32 func_0018D870_x0018D700() __asm__("func_0018D870");
extern s32 D_00426A7C_x0018D700 __asm__("D_00426A7C");
s32 func_0018D700_x0018D700(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018D700");
s32 func_0018D700_x0018D700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        goto block_2;
    }
    func_0018D798_x0018D700(&D_00426A7C_x0018D700);
    goto block_6;
block_2:
    if (func_0018D870_x0018D700() == 0) {
        goto block_5;
    }
    return func_0018D650_x0018D700(0, 0xFF000101);
block_5:
    func_0018D798_x0018D700(arg0 + 0x98C, arg1, arg2);
block_6:
    return 0;
}
void func_0018D798_x0018D798(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018D798");
void func_0018D798_x0018D798(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = ((u8 *) arg0) + 0;
  *((s32 *) new_var) = arg1;
  *((s32 *) (((u8 *) arg0) + 4)) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D7A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D870);
void func_0018D890(void) {
    func_0016E078();
}
void func_0018D8A8(void) {
    func_0016E0D0();
}
void func_0018D8C0(void) {
    func_001966A8();
    func_0018C918();
}
void func_0018D8E0(void) {
    func_0018C938();
}
void func_0018D8F8(void) {

}
void func_0018D900(void) {

}
void func_0018D908(void) {
    func_0016FF40();
}
void func_0018D920(void) {
    func_0016FF58();
}
s32 func_0018D938(void) {
    return 0;
}
s32 func_0018D940(void) {
    return 0;
}
s32 func_0018B710_x0018D948() __asm__("func_0018B710");
s32 func_0018D948_x0018D948(u8 *arg0) __asm__("func_0018D948");
s32 func_0018D948_x0018D948(u8 *arg0) {
    func_0018B710_x0018D948(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), 1);
    return 0;
}
s32 func_0018D970(void) {
    return 0;
}
s32 func_0018D978(void) {
    return 0;
}
s32 func_0018D980(void) {
    return 0;
}
s32 func_0018D988(void) {
    return 0;
}
s32 func_0018D990(void) {
    return 0;
}
s32 func_0018D998(void) {
    return 0;
}
s32 func_0018AA68_x0018D9A0() __asm__("func_0018AA68");
void func_0018D9A0_x0018D9A0(u8 *arg0, s32 arg1) __asm__("func_0018D9A0");
void func_0018D9A0_x0018D9A0(u8 *arg0, s32 arg1) {
    func_0018AA68_x0018D9A0(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), arg1);
}
s32 func_0018AB40_x0018D9C0() __asm__("func_0018AB40");
void func_0018D9C0_x0018D9C0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018D9C0");
void func_0018D9C0_x0018D9C0(u8 *arg0, s32 arg1, s32 arg2) {
    func_0018AB40_x0018D9C0(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), arg1, arg2);
}
s32 func_0018D650_x0018D9E8() __asm__("func_0018D650");
void func_0018D9E8_x0018D9E8(s32 arg0) __asm__("func_0018D9E8");
void func_0018D9E8_x0018D9E8(s32 arg0) {
    func_0018D650_x0018D9E8(arg0, 0xFF000501);
}
s32 func_0018D650_x0018DA08() __asm__("func_0018D650");
void func_0018DA08_x0018DA08(s32 arg0) __asm__("func_0018DA08");
void func_0018DA08_x0018DA08(s32 arg0) {
    func_0018D650_x0018DA08(arg0, 0xFF000501);
}
s32 func_0018DA28(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DA30);
s32 func_0017AE98_x0018DAE0(s32, s32 *) __asm__("func_0017AE98");
s32 func_0018D650_x0018DAE0(s32, s32) __asm__("func_0018D650");
s32 func_0018DB50_x0018DAE0() __asm__("func_0018DB50");
extern s32 D_00426B08_x0018DAE0 __asm__("D_00426B08");
extern s32 D_0048E298_x0018DAE0 __asm__("D_0048E298");
unsigned int func_0018DAE0_x0018DAE0(void) __asm__("func_0018DAE0");
unsigned int func_0018DAE0_x0018DAE0(void)
{
  if (func_0018DB50_x0018DAE0() != 0)
  {
    loop_1:
    goto loop_1;

  }
  if (func_0017AE98_x0018DAE0(8, &D_0048E298_x0018DAE0) != 0)
  {
    func_0018D650_x0018DAE0(0, 0xFF000D01);
    return;
  }
  D_00426B08_x0018DAE0 = 0;
}
s32 func_0018DB50(void) {
    return 0;
}
s32 func_0018DB58(void) {
    func_0017AFA8();
    return 0;
}
void func_0018DB78(void) {
    func_0018DB90();
}
s32 func_0018DB90(u8 *arg0) {
    s32 temp_s1;

    if (func_0018EAA8() == 1) {
        return 0;
    }
    temp_s1 = func_0018DC00(arg0);
    if (*(s32 *)((u8 *)arg0 + 0x48) == 2) {
        func_0018ED30(arg0);
    }
    return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DC00);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DCD0);
s32 func_0018AB58_x0018DD38() __asm__("func_0018AB58");
void func_0018DD38_x0018DD38(u8 *arg0, s32 arg1) __asm__("func_0018DD38");
void func_0018DD38_x0018DD38(u8 *arg0, s32 arg1) {
    func_0018AB58_x0018DD38(arg0, *(s32 *)((u8 *)arg0 + 0x1C34), arg1);
    __asm__ __volatile__("");
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DD58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DEF8);
s32 func_0018DFD8_x0018DFD8(u8 *arg0, s32 arg1) __asm__("func_0018DFD8");
s32 func_0018DFD8_x0018DFD8(u8 *arg0, s32 arg1)
{
  s32 var_a2;
  s32 var_v0;
  u8 *var_a0;
  u8 var_v1;
  var_a0 = arg0;
  var_a2 = 0;
  if (arg1 > 0)
  {
 do { var_v1 = *var_a0; loop_2: var_a0 += 1; var_v0 = 0; if (var_v1 == 0) { var_a2 += 1; if (var_a2 < arg1) { var_v1 = *var_a0; goto loop_2; } goto block_6; } } while (0);
  }
  else
  {
    block_6:
    var_v0 = 1;

  }
  return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E018);
u8 *func_0018E078(u8 *arg0) {
    return arg0 + (*(s32 *)((u8 *)arg0 + 0x1C34) * 0x74) + 0x1290;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E0A0);
extern int sfmps_CopySj_x0018E218(int a0, int a1, int a2, int a3) __asm__("func_0018E7D8");
int func_0018E218_x0018E218(int a0, int (*a1)(int, int), int a2, int a3, int a4, int a5) __asm__("func_0018E218");
/* func_0034EB28: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00323a00.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0018E218_x0018E218(int a0, int (*a1)(int, int), int a2, int a3, int a4, int a5) {
    int r;
    r = sfmps_CopySj_x0018E218(a0, a4, a5, a3);
    if (r == 1) {
        if (a1) {
            a1(a2, a3);
        }
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E288);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E400);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E660);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E700);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E7D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E880);
s32 func_0018E8F0(void) {
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E8F8);
s32 func_0018B750_x0018EA38() __asm__("func_0018B750");
s32 func_00195E20_x0018EA38() __asm__("func_00195E20");
void func_0018EA38_x0018EA38(s32 arg0, s32 arg1) __asm__("func_0018EA38");
void func_0018EA38_x0018EA38(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x18), 1);
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), 1);
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), 1);
    func_00195E20_x0018EA38(arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EAA8);
void func_0018EB18(u8 *arg0) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    *(s32 *)((u8 *)temp_v1 + 0x14) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x14) + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EB30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EC78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018ECC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018ED30);
void func_0018ED88(u8 *arg0) {
    s32 temp_s0;

    if (func_0018EE10() != 1) {
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x1C34);
        if ((func_0018B730(arg0, temp_s0) == 1) && (func_0018EEE0(arg0, temp_s0) != 0)) {
            func_0018EE80(arg0, 1);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EE10);
s32 func_0018B710_x0018EE80() __asm__("func_0018B710");
void func_0018EE80_x0018EE80(s32 arg0, s32 arg1) __asm__("func_0018EE80");
void func_0018EE80_x0018EE80(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x18), arg1);
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), arg1);
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EEE0);
s32 func_00199818_x0018EF40() __asm__("func_00199818");
s32 func_001999E0_x0018EF40() __asm__("func_001999E0");
s32 func_0019C140_x0018EF40() __asm__("func_0019C140");
void func_0018EF40_x0018EF40(u8 *arg0) __asm__("func_0018EF40");
void func_0018EF40_x0018EF40(u8 *arg0) {
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    if ((func_001999E0_x0018EF40(arg0, (u8 *)6) == 1) && (*(s32 *)((u8 *)temp_s1 + 8) == 0) && (func_0019C140_x0018EF40(arg0, 6) != 0)) {
        func_00199818_x0018EF40(arg0, 6, 0);
    }
    if ((func_001999E0_x0018EF40(arg0, 5) == 1) && (*(s32 *)((u8 *)temp_s1 + 4) == 0) && (func_0019C140_x0018EF40(arg0, 7) != 0)) {
        func_00199818_x0018EF40(arg0, 5, 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F008);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F0B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F150);
void func_0018F208(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F210);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F2C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F390);
s32 func_0018D650_x0018F400() __asm__("func_0018D650");
void func_0018F400_x0018F400(void) __asm__("func_0018F400");
void func_0018F400_x0018F400(void) {
    func_0018D650_x0018F400();
}
s32 func_0018D650_x0018F418(void *, s32) __asm__("func_0018D650");
s32 func_0018F468_x0018F418(s32) __asm__("func_0018F468");
void func_0018F418_x0018F418(u8 *arg0) __asm__("func_0018F418");
void func_0018F418_x0018F418(u8 *arg0) {
    if (func_0018F468_x0018F418(**(s32 **)((u8 *)arg0 + 0x1C2C)) != 0) {
        func_0018D650_x0018F418(arg0, 0xFF000D0A);
    }
}
void func_0018F468(void) {
    func_0017B3D0();
}
s32 func_0018F480(void) {
    return 0;
}
s32 func_0018F488(void) {
    return 0;
}
s32 func_0018F490(void) {
    return 0;
}
s32 func_0018F498(void) {
    return 0;
}
s32 func_0018D650_x0018F4A0() __asm__("func_0018D650");
void func_0018F4A0_x0018F4A0(s32 arg0) __asm__("func_0018F4A0");
void func_0018F4A0_x0018F4A0(s32 arg0) {
    func_0018D650_x0018F4A0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F4C0() __asm__("func_0018D650");
void func_0018F4C0_x0018F4C0(s32 arg0) __asm__("func_0018F4C0");
void func_0018F4C0_x0018F4C0(s32 arg0) {
    func_0018D650_x0018F4C0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F4E0() __asm__("func_0018D650");
void func_0018F4E0_x0018F4E0(s32 arg0) __asm__("func_0018F4E0");
void func_0018F4E0_x0018F4E0(s32 arg0) {
    func_0018D650_x0018F4E0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F500() __asm__("func_0018D650");
void func_0018F500_x0018F500(s32 arg0) __asm__("func_0018F500");
void func_0018F500_x0018F500(s32 arg0) {
    func_0018D650_x0018F500(arg0, 0xFF000D0B);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F520);
void func_0018F5C8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F5D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F670);
s32 func_0018F6C0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C2C)) + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F6D0);
extern struct S24 { int w[9]; } D_00766BA8_x0018F780 __asm__("D_00492988");
extern int D_00766BD0_x0018F780[] __asm__("D_004929B0");
extern int D_00766BD8_x0018F780[] __asm__("D_004929B8");
void func_0018F780_x0018F780(struct S24 *src, int *b, int *c) __asm__("func_0018F780");
/* SFD_SetMpvParaTbl: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00350150.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018F780_x0018F780(struct S24 *src, int *b, int *c) {
    int i, n;
    D_00766BA8_x0018F780 = *src;
    D_00766BA8_x0018F780.w[4] = 0;
    D_00766BA8_x0018F780.w[8] = 0;
    for (i = 0; i < 2; i++) D_00766BD0_x0018F780[i] = (b[i] + 0x3F) & -0x40;
    n = src->w[7];
    for (i = 0; i < 0x10; i++) {
        if (i < n) D_00766BD8_x0018F780[i] = (c[i] + 0x3F) & -0x40;
        else D_00766BD8_x0018F780[i] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F910);
s32 func_0017E9E8_x0018F9A0(s32, s32, s32) __asm__("func_0017E9E8");
s32 func_0018D650_x0018F9A0(void *, s32) __asm__("func_0018D650");
s32 func_0018D870_x0018F9A0() __asm__("func_0018D870");
void func_0018F9A0_x0018F9A0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018F9A0");
void func_0018F9A0_x0018F9A0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        goto block_5;
    }
    if (func_0018D870_x0018F9A0(arg0) == 0) {
        goto block_4;
    }
    func_0018D650_x0018F9A0(NULL, 0xFF000181);
    return;
block_4:
    var_v1 = **(s32 **)((u8 *)arg0 + 0x1C70);
block_5:
    if (func_0017E9E8_x0018F9A0(var_v1, arg1, ((arg1 ^ 5) != 0) ? arg2 : 0) == 0) {
        goto block_8;
    }
    func_0018D650_x0018F9A0(arg0, 0xFF000F12);
    return;
block_8:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FA58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FAE0);
typedef unsigned int u32_x0018FB58;
extern int fn_12_24990_x0018FB58(void *arg0, void *arg1) __asm__("func_0018D870");
extern int fn_12_24A88_x0018FB58(int arg0, u32_x0018FB58 arg1) __asm__("func_0018D650");
extern int fn_12_2ABF0_x0018FB58(void *arg0) __asm__("func_00194798");
int func_0018FB58_x0018FB58(void *arg0, int *arg1) __asm__("func_0018FB58");
/* fn_12_2A55C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2A55C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018FB58_x0018FB58(void *arg0, int *arg1) {
    *arg1 = 0;
    if (fn_12_24990_x0018FB58(arg0, arg1)) {
        return fn_12_24A88_x0018FB58(0, 0xff000182);
    }
    *arg1 = fn_12_2ABF0_x0018FB58(arg0);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FBC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FC18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FCC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FE00);
s32 func_0018FEE0(void) {
    return 0;
}
s32 func_0018FEE8(void) {
    func_0017E7B8();
    return 0;
}
void func_0018FF08(void) {
    func_0018FF20();
}
s32 func_0018FFA0_x0018FF20() __asm__("func_0018FFA0");
s32 func_00190010_x0018FF20() __asm__("func_00190010");
s32 func_00190028_x0018FF20() __asm__("func_00190028");
s32 func_00190290_x0018FF20() __asm__("func_00190290");
s32 func_00190358_x0018FF20() __asm__("func_00190358");
s32 func_001999E0_x0018FF20() __asm__("func_001999E0");
s32 func_0018FF20_x0018FF20(s32 arg0) __asm__("func_0018FF20");
s32 func_0018FF20_x0018FF20(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0_x0018FF20(arg0, 5);
    if (var_v0 != 0) {
        if (func_00190010_x0018FF20(arg0) == 1) {
            return 0;
        }
        func_0018FFA0_x0018FF20(arg0);
        temp_s0 = func_00190358_x0018FF20(arg0);
        func_00190028_x0018FF20(arg0);
        func_00190290_x0018FF20(arg0);
        var_v0 = temp_s0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
s32 func_0018D3F8_x0018FFA0() __asm__("func_0018D3F8");
s32 func_0018F9A0_x0018FFA0() __asm__("func_0018F9A0");
s32 func_001999E0_x0018FFA0() __asm__("func_001999E0");
void func_0018FFA0_x0018FFA0(s32 arg0) __asm__("func_0018FFA0");
void func_0018FFA0_x0018FFA0(s32 arg0) {
    s32 var_a2;
    s32 temp_v0;

    if (func_001999E0_x0018FFA0(arg0, 0x1C) != 0) {
        temp_v0 = func_0018D3F8_x0018FFA0(arg0);
        var_a2 = 1;
        if ((temp_v0 == 0) || (var_a2 = 0, (temp_v0 > 0)) || (temp_v0 != -1)) {
            func_0018F9A0_x0018FFA0(arg0, 5, var_a2);
        }
    }
}
void func_0018B770_x00190010(u8 *, s32) __asm__("func_0018B770");
void func_00190010_x00190010(u8 *p) __asm__("func_00190010");
void func_00190010_x00190010(u8 *p) {
    func_0018B770_x00190010(p, *(s32 *)(p + 0x1C7C));
}
s32 func_0018B710_x00190028() __asm__("func_0018B710");
s32 func_0018B730_x00190028() __asm__("func_0018B730");
s32 func_001900D8_x00190028() __asm__("func_001900D8");
s32 func_00190268_x00190028() __asm__("func_00190268");
void func_00190028_x00190028(s32 arg0) __asm__("func_00190028");
void func_00190028_x00190028(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1C68;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730_x00190028(arg0, temp_s2) != 1) && (func_0018B730_x00190028(arg0, temp_s0) == 1) && (func_001900D8_x00190028(arg0) != 0)) {
        func_0018B710_x00190028(arg0, temp_s2, 1);
        func_00190268_x00190028(arg0);
    }
}
s32 func_001900D8(s32 arg0) {
    if ((func_00194778() != 0) || ((func_00190138(arg0) != 0) && (func_00190180(arg0) != 0))) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190138);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190180);
void func_00190268_x00190268(u8 *arg0) __asm__("func_00190268");
void func_00190268_x00190268(u8 *arg0)
{
  u8 *new_var;
  if ((*((s32 *) ((new_var = (u8 *) (arg0 + 0xDD8)) + 0x24))) != 0x7FFFFFFF)
  {
    *((s32 *) (((u8 *) arg0) + 0xDD8)) = 1;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190290);
s32 func_0018B750_x00190338() __asm__("func_0018B750");
void func_00190338_x00190338(u8 *arg0, s32 arg1) __asm__("func_00190338");
void func_00190338_x00190338(u8 *arg0, s32 arg1) {
    func_0018B750_x00190338(arg0, *(s32 *)((u8 *)arg0 + 0x1C7C), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190358);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001903D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190610);
typedef struct {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int fC;
} SfMpv_x001907B8;
unsigned int func_001907B8_x001907B8(SfMpv_x001907B8 *p, unsigned int v) __asm__("func_001907B8");
/* sfmpv_CalcDistance: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00351108.c, MIT); ee-gcc 2.96 -O2 -G0 */
unsigned int func_001907B8_x001907B8(SfMpv_x001907B8 *p, unsigned int v) {
    unsigned int lo0 = p->f0;
    unsigned int r;
    if (v >= lo0 && v < lo0 + p->f4) {
        r = v - lo0;
    } else if (v >= p->f8 && v < p->f8 + p->fC) {
        r = (v - p->f8) + p->f4;
    } else {
        r = 0;
    }
    return r;
}
s32 func_0018AF78_x00190820() __asm__("func_0018AF78");
s32 func_0018B790_x00190820() __asm__("func_0018B790");
s32 func_0018D650_x00190820() __asm__("func_0018D650");
s32 func_00190820_x00190820(u8 *arg0) __asm__("func_00190820");
s32 func_00190820_x00190820(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C78);
    temp_s1 = func_0018AF78_x00190820(arg0, temp_s2);
    if ((temp_s1 - func_0018B790_x00190820(arg0, temp_s2)) < *(s32 *)((u8 *)arg0 + 0x28)) {
        return func_0018D650_x00190820(arg0, 0xFF000F1C);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001908A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190A00);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190B68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190DF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190E40);
typedef struct SfMpv_x00190EF8 SfMpv_x00190EF8;
extern int func_003518D8_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00190F48");
extern void sfmpv_DiscardSec_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00191120");
int func_00190EF8_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00190EF8");
/* sfmpv_Concat: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00351888.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00190EF8_x00190EF8(SfMpv_x00190EF8 *p, int n)
{
    if (func_003518D8_x00190EF8(p, n) == -1)
        return -1;
    sfmpv_DiscardSec_x00190EF8(p, n);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190F48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191018);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191078);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191120);
s32 func_0018B0B8_x001911E0() __asm__("func_0018B0B8");
void func_001911E0_x001911E0(u8 *arg0, s32 arg1) __asm__("func_001911E0");
void func_001911E0_x001911E0(u8 *arg0, s32 arg1) {
    func_0018B0B8_x001911E0(arg0, *(s32 *)((u8 *)arg0 + 0x1C78), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191200);
void func_0018B770_x00191248(u8 *, s32) __asm__("func_0018B770");
void func_00191248_x00191248(u8 *p) __asm__("func_00191248");
void func_00191248_x00191248(u8 *p) {
    func_0018B770_x00191248(p, *(s32 *)(p + 0x1C78));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191260);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191300);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001914C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191588);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001915B0);
s32 func_0017EE78_x00191728() __asm__("func_0017EE78");
void func_00191728_x00191728(s32 arg0, s32 arg1) __asm__("func_00191728");
void func_00191728_x00191728(s32 arg0, s32 arg1) {
    func_0017EE78_x00191728(arg0, 0x015752A0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191748);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001919D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191AA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191B80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191C40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191D38);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191F48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192040);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192120);
void func_00192268_x00192268(u8 *arg0, u8 *arg1) __asm__("func_00192268");
void func_00192268_x00192268(u8 *arg0, u8 *arg1)
{
  u8 new_var;
  *((s32 *) (((u8 *) arg1) + 0)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x10)));
  *((s32 *) (((u8 *) arg1) + 4)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x1C)));
  *((s32 *) (((u8 *) arg1) + 8)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x20)));
  *((s32 *) (((u8 *) arg1) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x24)));
  *((s32 *) (((u8 *) arg1) + 0x10)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x28)));
  *((s32 *) (((u8 *) arg1) + 0x14)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x2C)));
  *((s32 *) (((u8 *) arg1) + 0x18)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x14)));
  new_var = *((u8 *) (((u8 *) arg0) + 0x54));
  *((s16 *) (((u8 *) arg1) + 0x1E)) = 0;
  *((s16 *) (((u8 *) arg1) + 0x1C)) = (s16) ((s8) new_var);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001922B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001923E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192508);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192540);
u32 func_001926F8(u8 *arg0) {
    return (u32) ~*(s32 *)((u8 *)arg0 + 0xE18) >> 0x1F;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192708);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192800);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192860);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192968);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001929B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192A08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192AE8);
void func_00192C60_x00192C60(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_00192C60");
void func_00192C60_x00192C60(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x9A0;
    *arg3 = *(s32 *)((u8 *)temp_a0 + 0xAC);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0xA8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192C78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192D68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192DE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193060);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193360);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193478);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193520);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193608);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001936B0);
void func_00193828(u8 *arg0, u8 *arg1) {
    memcpy(*(s32 *)((u8 *)arg0 + 0), *(s32 *)((u8 *)arg1 + 0), *(s32 *)((u8 *)arg1 + 4));
    *(s32 *)((u8 *)arg0 + 4) = (s32) *(s32 *)((u8 *)arg1 + 4);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193870);
s32 func_0018AB58_x00193960() __asm__("func_0018AB58");
void func_00193960_x00193960(u8 *arg0, s32 arg1) __asm__("func_00193960");
void func_00193960_x00193960(u8 *arg0, s32 arg1) {
    func_0018AB58_x00193960(arg0, *(s32 *)((u8 *)arg0 + 0x1C78), arg1);
    __asm__ __volatile__("");
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193980);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193B18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193D18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193DE0);
s32 func_00179018_x00193E80() __asm__("func_00179018");
void func_00193E80_x00193E80(s32 arg0) __asm__("func_00193E80");
void func_00193E80_x00193E80(s32 arg0) {
    func_00179018_x00193E80(arg0, -1, 0x20);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193EA0);
s32 func_0018D650_x00193EF8() __asm__("func_0018D650");
void func_00193EF8_x00193EF8(s32 arg0, u32 arg1) __asm__("func_00193EF8");
void func_00193EF8_x00193EF8(s32 arg0, u32 arg1) {
    if (arg1 == 0) {
        goto block_5;
    }
    if (arg1 >= 0xFFFFFFFFU) {
        goto block_3;
    }
    if (arg1 >= 0xFFFFFFFDU) {
        goto block_6;
    }
block_3:
    func_0018D650_x00193EF8(arg0, arg1);
    return;
block_5:
block_6:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193F38);
void func_001940A8(void) {
    func_0017E968();
}
s32 func_001940C0(void) {
    return 0;
}
s32 func_001940C8(void) {
    return 0;
}
s32 func_001940D0(void) {
    return 0;
}
s32 func_001940D8(void) {
    return 0;
}
s32 func_0018D650_x001940E0() __asm__("func_0018D650");
void func_001940E0_x001940E0(s32 arg0) __asm__("func_001940E0");
void func_001940E0_x001940E0(s32 arg0) {
    func_0018D650_x001940E0(arg0, 0xFF000F0D);
}
s32 func_0018D650_x00194100() __asm__("func_0018D650");
void func_00194100_x00194100(s32 arg0) __asm__("func_00194100");
void func_00194100_x00194100(s32 arg0) {
    func_0018D650_x00194100(arg0, 0xFF000F0D);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001941C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001942D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194320);
s32 func_001943F0_x001943F0(s32 a0, s32 a1) __asm__("func_001943F0");
s32 func_001943F0_x001943F0(s32 a0, s32 a1) {
    return a1 - 4;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001943F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194468);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194560);
s32 func_0018D650_x00194590(void *, s32) __asm__("func_0018D650");
s32 func_0018D870_x00194590() __asm__("func_0018D870");
void *func_001946D8_x00194590(void *, s32) __asm__("func_001946D8");
void func_00194590_x00194590(u8 *arg0, s32 arg1) __asm__("func_00194590");
void func_00194590_x00194590(u8 *arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_0018D870_x00194590() != 0) {
        func_0018D650_x00194590(NULL, 0xFF000188);
        return;
    }
    temp_v0 = func_001946D8_x00194590(arg0, arg1);
    if (temp_v0 == NULL) {
        func_0018D650_x00194590(arg0, 0xFF000F30);
    } else {
        *(s32 *)((u8 *)temp_v0 + 4) = (s32) (*(s32 *)((u8 *)temp_v0 + 4) + 1);
    }
    *(s32 *)((u8 *)arg0 + 0x978) = (s32) (*(s32 *)((u8 *)arg0 + 0x978) + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194630);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001946D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194720);
void func_00194768(u8 *arg0) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x7C) = 1;
}
s32 func_00194778(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x7C);
}
void func_00194788(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x80) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194798);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194838);
void func_001948D8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
}
void func_001948E8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 2;
    }
}
void func_00194900(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 4;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194918);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194940);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194968);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194A50);
s32 func_00194AB0(void) {
    return func_00194AD0() != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194AD0);
s32 func_00194C08_x00194C08(u8 *arg0, u8 *arg1) __asm__("func_00194C08");
s32 func_00194C08_x00194C08(u8 *arg0, u8 *arg1)
{
  s32 new_var;
  s32 var_v0;
  var_v0 = 1;
  if (arg0 != ((void *) 0))
  {
    new_var = *((s32 *) (((u8 *) arg0) + 0x38));
    var_v0 = (*((s32 *) (((u8 *) arg1) + 0x38))) < new_var;
  }
  return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194C28);
