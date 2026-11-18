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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00187FE8);
void func_00188010(void) {
    func_0015D678();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188028);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001889C0);
void func_00188A48(u8 *arg0) {
    func_0015FCD8(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188A68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188B20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188C40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188D48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188D98);
s32 func_00188E40(u8 *arg0) {
    return ADXT_GetStat(**(s32 **)((u8 *)arg0 + 0x1CB4)) == 3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188E68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189008);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189050);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189070);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189088);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001890A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001890C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189178);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001891A0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189598);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189850);
s32 func_00189870(u8 *arg0) {
    ADXT_Stop(**(s32 **)((u8 *)arg0 + 0x1CB4));
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189898);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189988);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001899D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189A20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189A60);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189AB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189AD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189AF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189B10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189B30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189BC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189BF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189C80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189CF8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189D78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189DE8);
s32 func_00189E40(void) {
    return 0;
}
s32 func_00189E48(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189E50);
s32 func_00189E90(s32 arg0) {
    func_00189EC0();
    func_00189F30(arg0);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189EC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189F30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189FA0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A140);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A160);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A180);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A478);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A4B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A520);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A678);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A700);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A9A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A9B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A9F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA98);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AB40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AB58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AB70);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018ACC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AD50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AE48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AEA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AF10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AF78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AF98);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B638);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B648);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B6A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B710);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B730);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B750);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B770);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B790);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B7B8);
s32 func_0018B7E0(s32 arg0) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000161, 1);
    }
    func_00199818(arg0, 0x31, 1);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B840);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B860);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B8A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B8F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B970);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BA20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BAE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BC30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BCD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BD80);
s32 func_0018BDE0(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BDE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BEA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BF88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C020);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C0D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C128);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C230);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C298);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C318);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018C968);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CF30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018CFC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D078);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D0F0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D430);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D440);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D4A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D568);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D578);
void func_0018D620(void) {
    func_0018D638();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D638);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D650);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D6C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D700);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D798);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D948);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D9A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D9C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D9E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DA08);
s32 func_0018DA28(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DA30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DAE0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DD38);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DD58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DEF8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DFD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E018);
u8 *func_0018E078(u8 *arg0) {
    return arg0 + (*(s32 *)((u8 *)arg0 + 0x1C34) * 0x74) + 0x1290;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E0A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E218);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EA38);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EE80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EEE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EF40);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F4A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F4C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F4E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F500);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F520);
void func_0018F5C8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F5D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F670);
s32 func_0018F6C0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C2C)) + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F6D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F780);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F910);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F9A0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FF20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FFA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190010);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190028);
s32 func_001900D8(s32 arg0) {
    if ((func_00194778() != 0) || ((func_00190138(arg0) != 0) && (func_00190180(arg0) != 0))) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190138);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190180);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190268);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190290);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190338);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190358);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001903D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190610);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001907B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190820);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001908A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190A00);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190B68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190DF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190E40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190EF8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190F48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191018);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191078);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001911E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191200);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191248);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191260);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191300);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001914C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191588);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001915B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191728);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191748);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001919D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191AA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191B80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191C40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191D38);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191F48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192040);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192268);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192C60);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193960);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193980);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193B18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193D18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193DE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193E80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193EA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193EF8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001940E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194100);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001941C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001942D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194320);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001943F0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194C08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194C28);
