#include "common.h"

s32 func_00119820(s32);                             /* extern */
s32 func_001198F0();                                /* extern */
s32 func_00170A00(s32 *);                           /* extern */

s32 func_00170018(s32);                     /* extern */

s32 func_0016FFA0(s32);                     /* extern */

extern s32 D_0041160C;

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00411608;
extern s32 D_004630E8;

extern s8 D_0041159A;

extern s32 D_004115CC;

extern s8 D_00411599;

extern s32 D_004115D4;

s32 func_00164258(s32 *);                   /* extern */
extern s32 D_00411598;

s32 func_00118C08(s32);                     /* extern */
s32 func_00164D38(s32);                     /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00163EE8);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00163F88);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164078);
s8 func_00164128(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164130);
void func_00164160(void) {
    func_00164D38(0x1300);
    func_00118C08(0);
    func_00164D38(0x1301);
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164188);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164258);
void func_00164368(void) {
    func_00164258(&D_00411598);
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164388);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001643F0);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164500);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001646D0);
s32 func_001648A0(void) {
    return D_004115D4;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001648B0);
s8 func_001649A0(void) {
    return D_00411599;
}
s32 func_001649B0(void) {
    return D_004115CC;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_001649C0);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A28);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A60);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164A98);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164AD0);
void func_00164B08(void) {
    D_0041159A = 9;
}
s32 func_00164B18(void) {
    s32 temp_s0;

    func_00164D38(0x2300);
    temp_s0 = func_00118C08(1);
    func_00164D38(0x2301);
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164B58);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164BF8);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164C48);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D18);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D28);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D38);
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164D58);
void func_00164D68(s32 arg0) {
    D_00411608 = arg0;
    if (arg0 == 1) {
        scePrintf(&D_004630E8);
    }
}
s32 func_00164DA8(void) {
    return D_00411608;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164DB8);
s32 func_00164E10(void) {
    return D_0041160C;
}
void func_00164E20(void) {
    if (D_0041160C == 1) {
        func_0016FFA0(1);
    }
}
void func_00164E58(void) {
    if (D_0041160C == 1) {
        func_00170018(1);
    }
}
s32 func_00164E90(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = func_00170A00(&D_004115D4);
    var_s1 = 0;
    if (var_v0 != 0) {
        func_00164D38(0x9600);
        temp_s0 = func_00119820(arg0);
        func_00164D38(0x9601);
        if (temp_s0 == 0) {
            var_s1 = func_001198F0();
        }
        D_004115D4 = 0;
        var_v0 = var_s1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/srd", func_00164F18);
s32 func_00110160_x00164FD0(s32, s32, s32) __asm__("func_00110160");
s32 func_00164E20_x00164FD0() __asm__("func_00164E20");
s32 func_00164E58_x00164FD0() __asm__("func_00164E58");
s32 scePrintf_x00164FD0(s32 *, s32) __asm__("scePrintf");
extern s32 D_00463160_x00164FD0 __asm__("D_00463160");
s32 func_00164FD0_x00164FD0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00164FD0");
s32 func_00164FD0_x00164FD0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    func_00164E20_x00164FD0();
    temp_v0 = func_00110160_x00164FD0(arg0, arg1, arg2);
    if (temp_v0 < 0) {
        scePrintf_x00164FD0(&D_00463160_x00164FD0, temp_v0);
    }
    func_00164E58_x00164FD0();
    return temp_v0;
}
s32 func_0010F5E8_x00165048(s32, s32) __asm__("func_0010F5E8");
s32 func_00164E20_x00165048() __asm__("func_00164E20");
s32 func_00164E58_x00165048() __asm__("func_00164E58");
s32 scePrintf_x00165048(s32 *, s32) __asm__("scePrintf");
extern s32 D_00463180_x00165048 __asm__("D_00463180");
s32 func_00165048_x00165048(s32 arg0, s32 arg1) __asm__("func_00165048");
s32 func_00165048_x00165048(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_00164E20_x00165048();
    temp_v0 = func_0010F5E8_x00165048(arg0, arg1);
    if (temp_v0 < 0) {
        scePrintf_x00165048(&D_00463180_x00165048, temp_v0);
    }
    func_00164E58_x00165048();
    return temp_v0;
}
s32 func_0010F878_x001650B0(s32) __asm__("func_0010F878");
s32 func_00164E20_x001650B0() __asm__("func_00164E20");
s32 func_00164E58_x001650B0() __asm__("func_00164E58");
s32 scePrintf_x001650B0(s32 *, s32) __asm__("scePrintf");
extern s32 D_004631A0_x001650B0 __asm__("D_004631A0");
s32 func_001650B0_x001650B0(s32 arg0) __asm__("func_001650B0");
s32 func_001650B0_x001650B0(s32 arg0) {
    s32 temp_v0;

    func_00164E20_x001650B0();
    temp_v0 = func_0010F878_x001650B0(arg0);
    if (temp_v0 < 0) {
        scePrintf_x001650B0(&D_004631A0_x001650B0, temp_v0);
    }
    func_00164E58_x001650B0();
    return temp_v0;
}
s32 func_0010FC30_x00165108(s32, s32, s32) __asm__("func_0010FC30");
s32 func_00164E20_x00165108() __asm__("func_00164E20");
s32 func_00164E58_x00165108() __asm__("func_00164E58");
s32 scePrintf_x00165108(s32 *, s32) __asm__("scePrintf");
extern s32 D_004631C0_x00165108 __asm__("D_004631C0");
s32 func_00165108_x00165108(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00165108");
s32 func_00165108_x00165108(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    func_00164E20_x00165108();
    temp_v0 = func_0010FC30_x00165108(arg0, arg1, arg2);
    if (temp_v0 < 0) {
        scePrintf_x00165108(&D_004631C0_x00165108, temp_v0);
    }
    func_00164E58_x00165108();
    return temp_v0;
}
