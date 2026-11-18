#include "common.h"

s32 func_00151160(s32);                         /* extern */

s32 ADXB_SetAhxInSj(s32);                       /* extern */
s32 func_0014ECA0(s32);                         /* extern */

s32 ADXB_SetAhxDecSmpl(s32);                    /* extern */
s32 func_0014EC80(s32, s32);                    /* extern */

s32 ADXB_AhxTermSupply(s32);                    /* extern */
s32 func_0014EC50(s32, s32);                    /* extern */

s32 func_001507E8(s32);                         /* extern */

s32 func_001505E8();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0040D5F0;

extern s32 D_0040D5E0;

s32 PS2RNA_SetStmHdInfo();                      /* extern */

s32 func_0016D030();                            /* extern */

s32 func_0016D000();                            /* extern */

s32 PS2RNA_DiscardData();                       /* extern */

s32 func_0016D860();                            /* extern */

s32 func_0016D830();                            /* extern */

s32 func_0016D7F8();                            /* extern */

s32 func_0016D7C8();                            /* extern */

s32 func_0016D798();                            /* extern */

s32 PS2RNA_SetBitPerSmpl();                     /* extern */

s32 func_0016D670();                            /* extern */

s32 func_0016D5E0();                            /* extern */

s32 func_0016D508();                            /* extern */

s32 func_0016D4D8();                            /* extern */

s32 PS2RNA_SetStartSmpl();                      /* extern */

s32 func_0016D1C8();                            /* extern */

s32 func_0016D160();                            /* extern */

s32 func_0016D128();                            /* extern */

s32 func_0016CFD0();                            /* extern */

s32 func_0016CF38();                            /* extern */

s32 func_0016CED8();                            /* extern */

s32 PS2RNA_Start();                             /* extern */

s32 func_0016CA28();                            /* extern */

s32 func_0016C968();                            /* extern */

s32 func_0016C460();                            /* extern */

s32 func_0016C910(s32);                         /* extern */

s32 func_0016C8A8();                            /* extern */

s32 func_0016C838();                            /* extern */

s32 func_0016C730();                            /* extern */

s32 PS2RNA_SetupVoice();                        /* extern */

extern s32 D_0047E978;

s32 func_001705E0(s32);                     /* extern */

s32 func_001704C8(s32, s32, s32, s32);  /* extern */

s32 func_001578F8();                            /* extern */

s32 func_00156048();                            /* extern */
s32 func_0015F5F0();                            /* extern */
extern s32 D_00405DB8;

s32 func_00158008();                            /* extern */
s32 func_00158110();                            /* extern */
s32 func_00158600();                            /* extern */

s32 func_00157EB0();                            /* extern */

extern s32 D_00405CE0;

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

s32 func_00170620();                            /* extern */

extern s32 D_00405CA4;

s32 func_001708A8();                            /* extern */

s32 func_00170890();                            /* extern */

s32 func_00170878();                            /* extern */

s32 func_00170860();                            /* extern */

s32 func_00170830();                            /* extern */

s32 func_00170818();                            /* extern */

extern s32 D_00405CA8;

s32 SleepThread();                              /* extern */

extern s64 D_00405D00;

s32 func_00169D98(s32);                             /* extern */
extern s32 D_00460D50;

s32 func_0016A130(s32);                         /* extern */
extern s32 D_00460CF0;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015E408(void *, s32);                 /* extern */
s32 func_0015E650();                            /* extern */
s32 func_0015FB70(void *, s32);             /* extern */
s32 func_00169BD8(s32);                         /* extern */
s32 func_0016A020(s32, s32);                    /* extern */
extern s32 D_00460CC0;

INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001563B0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156488);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXT_EntryFname);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXT_EntryAfs);
void ADXT_StartSeamless(u8 *arg0) {
    s32 temp_s1;
    u8 **temp_a0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x94);
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CC0);
        return;
    }
    func_0015E650();
    func_00152508();
    func_0015E408(arg0, *(s32 *)((u8 *)arg0 + 0x10));
    temp_a0 = *(u8 ***)((u8 *)arg0 + 0x14);
    (*(s32 (**)(u8 **))((u8 *)(*temp_a0) + 0x14))(temp_a0);
    *(s8 *)((u8 *)arg0 + 2) = 4;
    func_0016A020(temp_s1, *(s16 *)((u8 *)arg0 + 0x3E) << 0xB);
    func_00152520();
    func_00169BD8(temp_s1);
    func_0015FB70(arg0, 1);
}
void ADXT_SetSeamlessLp(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CF0);
        return;
    }
    func_0016A130(*(s32 *)((u8 *)arg0 + 0x94));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXT_StartFnameLp);
void func_00156918(void) {

}
s32 ADXT_GetNumFiles(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460D50);
        return -1;
    }
    return func_00169D98(*(s32 *)((u8 *)arg0 + 0x94));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXT_ResetEntry);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156998);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156A20);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156A90);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156B68);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156B90);
void func_00156BB8(void) {
    D_00405D00 += 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156BD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156C28);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156CC0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156DC8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156EA8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00156FE0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001570B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157108);
void func_00157158(void) {
    SleepThread();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157170);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001571D8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157238);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001572E0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157420);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001574A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157540);
s32 func_00157610(void) {
    return D_00405CA8;
}
void func_00157620(void) {
    func_00170818();
}
void func_00157638(void) {
    func_00170830();
}
void func_00157650(void) {
    func_00170860();
}
void func_00157668(void) {
    func_00170878();
}
void func_00157680(void) {
    func_00170890();
}
void func_00157698(void) {
    func_001708A8();
}
s32 func_001576B0(void) {
    func_00170818();
    func_00170830();
    func_00170878();
    func_00170890();
    func_001708A8();
    return 0;
}
s32 func_001576F0(void) {
    return D_00405CA4 != 0;
}
void func_00157700(void) {
    func_00170620();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157718);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001578A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001578F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157990);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157A60);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157B30);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157C00);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157CD0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157DA0);
void func_00157E70(void) {
    func_0016FF40();
}
void func_00157E88(void) {
    func_0016FF58();
}
s32 func_00157EA0(void) {
    return D_00405CE0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157EB0);
void func_00157FD8(void) {
    func_00157EB0();
}
void func_00157FF0(void) {
    func_00170878();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158008);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158090);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158110);
void func_00158138(void) {
    func_00158008();
    func_00158600();
    func_00158110();
}
void func_00158160(void) {
    func_00158138();
}
s32 func_00158178(void) {
    if (D_00405DB8 == 0) {
        D_00405DB8 = 1;
        func_0015F5F0();
        func_00156048();
        D_00405DB8 = 0;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001581C0);
void func_00158220(void) {
    func_001578F8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158238);
void func_001582A0(void) {
    func_0016FF40();
}
void func_001582B8(void) {
    func_0016FF58();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001582D0);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001584C0);
void func_00158570(s32 arg0, s32 arg1) {
    func_001704C8(1, 0, arg0, arg1);
}
void func_00158598(s32 arg0, s32 arg1) {
    func_001704C8(7, 0, arg0, arg1);
}
void func_001585C0(void) {
    func_001705E0(7);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001585D8);
extern s32 D_0047E970_x00158600 __asm__("D_0047E970");
void func_00158600_x00158600(void) __asm__("func_00158600");
void func_00158600_x00158600(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0))(*(s32 *)((u8 *)(&D_0047E970_x00158600) + 4));
    }
}
void func_00158630(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0))(*(s32 *)((u8 *)(&D_0047E978) + 4));
    }
}
void func_00158660(void) {
    PS2RNA_SetupVoice();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158678);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001586B8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_001586F8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158730);
void func_00158768(void) {
    func_0016C730();
}
void func_00158780(void) {
    func_0016C838();
}
void func_00158798(void) {
    func_0016C8A8();
}
void func_001587B0(u8 *arg0) {
    func_0016C910(*(s32 *)((u8 *)arg0 + 0xC));
}
void func_001587C8(void) {
    func_0016C460();
}
void func_001587E0(void) {
    func_0016C968();
}
void func_001587F8(void) {

}
void func_00158800(void) {
    func_0016CA28();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158818);
void func_00158850(void) {
    PS2RNA_Start();
}
void func_00158868(void) {
    func_0016CED8();
}
void func_00158880(void) {
    func_0016CF38();
}
void func_00158898(void) {
    func_0016CFD0();
}
void func_001588B0(void) {
    func_0016D128();
}
void func_001588C8(void) {
    func_0016D160();
}
void func_001588E0(void) {
    func_0016D1C8();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXRNA_GetStat);
void func_00158948(void) {
    PS2RNA_SetStartSmpl();
}
void func_00158960(void) {
    func_0016D4D8();
}
void func_00158978(void) {
    func_0016D508();
}
void func_00158990(void) {
    func_0016D5E0();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", fn_8004EDC4);
void func_001589C0(void) {
    func_0016D670();
}
void func_001589D8(void) {
    PS2RNA_SetBitPerSmpl();
}
void func_001589F0(void) {
    func_0016D798();
}
void func_00158A08(void) {
    func_0016D7C8();
}
void func_00158A20(void) {
    func_0016D7F8();
}
void func_00158A38(void) {
    func_0016D830();
}
void func_00158A50(void) {
    func_0016D860();
}
void func_00158A68(void) {
    PS2RNA_DiscardData();
}
void func_00158A80(void) {

}
void func_00158A88(void) {

}
void func_00158A90(void) {
    func_0016D000();
}
void func_00158AA8(void) {
    func_0016D030();
}
void func_00158AC0(void) {

}
void func_00158AC8(void) {

}
s32 func_00158AD0(void) {
    PS2RNA_SetStmHdInfo();
    return 0;
}
void func_00158AF0(void) {
    D_0040D5E0 += 1;
}
void func_00158B08(void) {
    D_0040D5E0 -= 1;
}
void func_00158B20(void) {
    func_001505E8();
    memset(&D_0040D5F0, 0, 0xA80);
}
void func_00158B50(void) {
    memset(&D_0040D5F0, 0, 0xA80);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158B78);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158BB8);
void func_00158D38(u8 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 4);
        if (temp_v0 != 0) {
            *(s32 *)((u8 *)arg0 + 4) = 0;
            func_001507E8(temp_v0);
        }
        func_00152508();
        memset(arg0, 0, 0xA8);
        func_00152520();
    }
}
s8 func_00158D98(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
void func_00158DA0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    ADXB_AhxTermSupply(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC50(*(s32 *)((u8 *)arg0 + 4), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158DE0);
void func_00158DF0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    ADXB_SetAhxDecSmpl(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC80(*(s32 *)((u8 *)arg0 + 4), arg1);
}
void func_00158E30(u8 *arg0) {
    ADXB_SetAhxInSj(*(s32 *)((u8 *)arg0 + 4));
    func_0014ECA0(*(s32 *)((u8 *)arg0 + 4));
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00158E60);
void func_00158E90(u8 *arg0) {
    func_00151160(*(s32 *)((u8 *)arg0 + 4));
    *(s8 *)((u8 *)arg0 + 1) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXB_DecodeHeader);
