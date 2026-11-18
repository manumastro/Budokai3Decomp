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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150688);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150BC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150D30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00150D40);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", fn_800455A4);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001510C0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151250);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001512A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151300);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151408);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151438);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001514A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001514C8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151650);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00151790);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001527C0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001528C0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152940);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001529B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152AF0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154378);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154460);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154520);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154548);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001545F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", adxf_ChkPrmPt);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154670);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154690);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154710);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154738);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154760);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00154788);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001547B0);
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
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00155118);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_001551B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00155290);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00155330);
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", fn_8004FC94);
