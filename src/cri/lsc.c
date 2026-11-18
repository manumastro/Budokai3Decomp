#include "common.h"

INCLUDE_ASM("asm/nonmatchings/cri/lsc", LSC_Create);
s32 func_00169C40_x00169980() __asm__("func_00169C40");
s32 memset_x00169980(s8 *, s32, s32) __asm__("memset");
void func_00169980_x00169980(s8 *arg0) __asm__("func_00169980");
void func_00169980_x00169980(s8 *arg0) {
    if (arg0 != NULL) {
        func_00169C40_x00169980();
        *arg0 = 0;
        memset_x00169980(arg0, 0, 0x238);
    }
}
void func_001699D0_x001699D0(u8 *arg0, s32 arg1) __asm__("func_001699D0");
void func_001699D0_x001699D0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x28) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_001699D8);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169A00);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169B98);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169BD8);
s32 func_0015CE38_x00169C40(s32) __asm__("func_0015CE38");
s32 func_00169B98_x00169C40(void *) __asm__("func_00169B98");
s32 func_0016A1C0_x00169C40(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169C40 __asm__("D_00463DC8");
void func_00169C40_x00169C40(u8 *arg0) __asm__("func_00169C40");
void func_00169C40_x00169C40(u8 *arg0) {
    s32 temp_a0;

    if (arg0 == NULL) {
        func_0016A1C0_x00169C40(&D_00463DC8_x00169C40);
        return;
    }
    if (*(s8 *)((u8 *)arg0 + 1) != 0) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
        *(s8 *)((u8 *)arg0 + 1) = 0;
        if ((temp_a0 != 0) && (*(s8 *)((u8 *)arg0 + 2) == 1)) {
            func_0015CE38_x00169C40(temp_a0);
            *(s8 *)((u8 *)arg0 + 2) = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        func_00169B98_x00169C40(arg0);
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169CC8);
s32 func_0016A698_x00169D08(s8 *) __asm__("func_0016A698");
extern s8 D_00413F80_x00169D08 __asm__("D_00413F80");
void func_00169D08_x00169D08(void) __asm__("func_00169D08");
void func_00169D08_x00169D08(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00413F80_x00169D08;
    var_s1 = 0x1F;
    do {
        if (*var_s0 == 1) {
            func_0016A698_x00169D08(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x238;
    } while (var_s1 >= 0);
}
s32 func_0016A1C0_x00169D68(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169D68 __asm__("D_00463DC8");
s8 func_00169D68_x00169D68(u8 *arg0) __asm__("func_00169D68");
s8 func_00169D68_x00169D68(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x00169D68(&D_00463DC8_x00169D68);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
s32 func_0016A1C0_x00169D98(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x00169D98 __asm__("D_00463DC8");
s32 func_00169D98_x00169D98(u8 *arg0) __asm__("func_00169D98");
s32 func_00169D98_x00169D98(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x00169D98(&D_00463DC8_x00169D98);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x24);
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169DC8);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169E58);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169EF0);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_00169F88);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A020);
s32 func_0016A1C0_x0016A088(s32 *) __asm__("func_0016A1C0");
extern s32 D_00463DC8_x0016A088 __asm__("D_00463DC8");
s32 func_0016A088_x0016A088(u8 *arg0) __asm__("func_0016A088");
s32 func_0016A088_x0016A088(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A1C0_x0016A088(&D_00463DC8_x0016A088);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
extern s32 D_00413E48_x0016A0B8 __asm__("D_00413E48");
extern s32 D_00413E4C_x0016A0B8 __asm__("D_00413E4C");
extern s32 D_00413E50_x0016A0B8 __asm__("D_00413E50");
void func_0016A0B8_x0016A0B8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0016A0B8");
void func_0016A0B8_x0016A0B8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        D_00413E48_x0016A0B8 = 0;
        D_00413E4C_x0016A0B8 = 0;
        D_00413E50_x0016A0B8 = 0;
        return;
    }
    D_00413E48_x0016A0B8 = arg0;
    D_00413E4C_x0016A0B8 = arg1;
    D_00413E50_x0016A0B8 = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A0F8);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A130);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A160);
s32 func_0016DAF0_x0016A180() __asm__("func_0016DAF0");
void func_0016A180_x0016A180(void) __asm__("func_0016A180");
void func_0016A180_x0016A180(void) {
    func_0016DAF0_x0016A180();
}
extern s32 D_00413E58_x0016A198 __asm__("D_00413E58");
extern s32 D_00413E5C_x0016A198 __asm__("D_00413E5C");
void func_0016A198_x0016A198(s32 arg0, s32 arg1) __asm__("func_0016A198");
void func_0016A198_x0016A198(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        D_00413E58_x0016A198 = 0;
        D_00413E5C_x0016A198 = 0;
        return;
    }
    D_00413E58_x0016A198 = arg0;
    D_00413E5C_x0016A198 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A1C0);
void func_0016A250_x0016A250(void) __asm__("func_0016A250");
void func_0016A250_x0016A250(void) {

}
void func_0016A258_x0016A258(void) __asm__("func_0016A258");
void func_0016A258_x0016A258(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A260);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A2E0);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", LSC_ExecServer);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A4C8);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A590);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A698);
s32 func_0016FF40_x0016A768() __asm__("func_0016FF40");
void func_0016A768_x0016A768(void) __asm__("func_0016A768");
void func_0016A768_x0016A768(void) {
    func_0016FF40_x0016A768();
}
s32 func_0016FF58_x0016A780() __asm__("func_0016FF58");
void func_0016A780_x0016A780(void) __asm__("func_0016A780");
void func_0016A780_x0016A780(void) {
    func_0016FF58_x0016A780();
}
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A798);
INCLUDE_ASM("asm/nonmatchings/cri/lsc", func_0016A7B0);
s32 func_00129688_x0016A7E0() __asm__("func_00129688");
void func_0016A7E0_x0016A7E0(void) __asm__("func_0016A7E0");
void func_0016A7E0_x0016A7E0(void) {
    func_00129688_x0016A7E0();
}
