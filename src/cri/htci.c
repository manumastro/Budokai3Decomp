#include "common.h"

extern s8 D_00413F80;

extern s32 D_00413E20;

extern s32 D_00413D18;

extern s32 D_00413D10;

s32 func_001693C0(void *, s32, s32, s32);       /* extern */

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00413D00;

s32 htCiGetFileSize();                          /* extern */

s32 func_00164D38(s32);                     /* extern */
s32 func_001650B0(s32);                             /* extern */
s32 func_001682B0(void *);                      /* extern */
s32 func_00168768();                            /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00413D14;
extern s32 D_00463AF8;

INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiGetFileSize);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001681F0);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168278);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001682B0);
INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiOpen);
void func_00168458(u8 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        if ((u8) *(u8 *)((u8 *)arg0 + 2) >= 2U) {
            func_00168768();
        }
        if (*(s8 *)((u8 *)arg0 + 1) == 0) {
            func_00164D38(0x5000);
            temp_s0 = func_001650B0(*(s32 *)((u8 *)arg0 + 0x18));
            func_00164D38(0x5001);
            if ((temp_s0 < 0) && (D_00413D14 == 0)) {
                scePrintf(&D_00463AF8);
            }
        }
        *(s8 *)((u8 *)arg0 + 0) = 0;
        func_001682B0(arg0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168508);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001685A0);
INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiReqRd);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168768);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168870);
s32 func_001688A8(void) {
    return 0x800;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001688B0);
void func_00168900(void) {
    htCiGetFileSize();
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168918);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168938);
s64 func_00168900_x00168968() __asm__("func_00168900");
s64 func_00168968_x00168968(void) __asm__("func_00168968");
s64 func_00168968_x00168968(void) {
    return func_00168900_x00168968() >> 0x20;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168988);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001689B8);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168A80);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168AF0);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168B48);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168C60);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168C78);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168CD0);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168D68);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00168F08);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169068);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169258);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001693C0);
void func_00169488(void) {
    memset(&D_00413D00, 0, 0x10);
}
void func_001694B0(s32 arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = 0;
    *(s32 *)((u8 *)arg1 + 4) = 0;
    if (*(s32 *)((u8 *)(&D_00413D00) + 0) != 0) {
        func_001693C0(arg1, arg0, *(s32 *)((u8 *)(&D_00413D00) + 0), *(s32 *)((u8 *)(&D_00413D00) + 4));
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", htCiLoadDirInfo);
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169688);
void func_001696B0(s32 arg0) {
    if (arg0 != 0) {
        if (arg0 == 1) {
            D_00413D10 = arg0;
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        D_00413D10 = 0x8001;
        return;
    }
    D_00413D10 = 0x8001;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_001696E0);
s32 *func_00169760(void) {
    return &D_00413D18;
}
INCLUDE_ASM("asm/nonmatchings/cri/htci", func_00169770);
s32 *func_001697D8(void) {
    return &D_00413E20;
}
s32 func_001697E8(void) {
    return D_00413D10;
}
void func_001697F8(s32 arg0) {
    D_00413D14 = arg0;
}
s32 func_00169808(void) {
    return D_00413D14;
}
s8 *func_00169818(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (D_00413F80 == 0) {
        var_a3 = &D_00413F80;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x20) {
            temp_v0 = (var_a1 * 0x238) + &D_00413F80;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
