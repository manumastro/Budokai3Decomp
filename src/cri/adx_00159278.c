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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_001595E0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_001598E8);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159CE8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159D48);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159D58);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", fn_800416DC);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159F18);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", fn_80041460);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_00159FD8);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A0A8);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A7B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A7F0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A800);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A940);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A978);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A988);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015A9E0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C200);
void func_0015C268(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x50) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C270);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C2B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C2E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C310);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015C500);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CAE8);
void func_0015CB30(s8 *arg0) {
    if (arg0 != NULL) {
        func_0015CE38();
        func_0015CC78(arg0);
        *arg0 = 0;
        memset(arg0, 0, 0x60);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CB88);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CC00);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CC78);
s8 func_0015CCC8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x49);
}
s8 func_0015CCD0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", fn_8004AE94);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CCF8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CD10);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CD48);
s32 func_0015CD88(u8 *arg0, s32 arg1) {
    func_00152508();
    func_0015CD10(arg0);
    *(s32 *)((u8 *)arg0 + 0x5C) = arg1;
    func_00152520();
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CDD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CE38);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CE88);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", fn_8004AC04);
void func_0015CEB0(void) {
    D_00410220 += 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015CEC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", adxstmf_stat_exec);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D3D8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D458);
s32 func_0015D488(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)((u8 *)arg0 + 0x1C);
    *arg2 = *(s32 *)((u8 *)arg0 + 0x18);
    return 1;
}
s32 func_0015D4A0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D4A8);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D520);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D530);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D588);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D5B8);
void func_0015D638(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x14) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (arg1 << 0xB);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D648);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D708);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D720);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D850);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D8B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015D918);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DAD0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DC00);
void func_0015DC50(void) {
    func_00169688();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DC68);
s32 func_0015DCB8(void) {
    return D_00411158;
}
void func_0015DCC8(s32 arg0) {
    D_00411158 = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015DCD8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_Create);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E0E8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E140);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E168);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E190);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_Destroy);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E408);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E4F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_StartSj);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E650);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_Stop);
s8 ADXT_GetStat(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461938);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E7E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E818);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015E8E0);
void func_0015EA08(void) {
    D_0041117C += 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetTime);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", func_0015ED18);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetNumSmpl);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetSfreq);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetNumChan);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetHdrLen);
INCLUDE_ASM("asm/nonmatchings/cri/adx_00159278", ADXT_GetFmtBps);
