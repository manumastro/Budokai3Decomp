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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F450);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F710);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F770);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F810);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FA70);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FA98);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FAC0);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FC10);
s32 func_0019FC20(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x5C) != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FC30);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FC50);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FC70);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FC90);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FCB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FCD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FCF0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FD10);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FD30);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FD50);
void func_0019FD70(void) {
    func_0019FD88();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FD88);
void func_0019FDC8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FDD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FE28);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FE78);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FE88);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FEB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019FED8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0840);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0858);
void func_001A0888(s32 arg0) {
    D_004270CC = arg0;
}
s32 func_001A0898(void) {
    return D_004270CC;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A08A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A08C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A08E8);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0D38);
s32 *func_001A0D88(void) {
    return &D_00467EC0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0D98);
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
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A13C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1488);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A1498);
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A15C0);
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
