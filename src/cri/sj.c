#include "common.h"

s32 func_00112700(s32);                         /* extern */
s32 func_00165C68(s32);                         /* extern */
extern s32 D_00422784;
extern s32 D_0042278C;
extern s32 D_00422A18;

s32 func_001660C0();                            /* extern */

s32 func_00165F40();                            /* extern */
extern s32 D_0042277C;

s32 func_0016F148(s32);                             /* extern */

s32 func_00128040(s32, s32, s32);           /* extern */
s32 func_0016F0B0(s32, s32);                    /* extern */

extern s32 D_00421998;
extern s32 D_004219A0;

extern s32 D_0041D960;
extern s32 D_0041D968;

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0041D478;
extern s32 D_0041D480;

s32 func_00170118();                            /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s32 D_0041D438;

INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016D9F8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DA38);
void func_0016DA78(void) {
    D_0041D438 = 0;
}
void func_0016DA88(void) {
    D_0041D438 = 0;
}
void func_0016DA98(void) {
    D_0041D438 += 1;
}
void func_0016DAB0(void) {
    D_0041D438 -= 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DAC8);
void func_0016DAD8(void) {
    func_0016FF40();
}
void func_0016DAF0(void) {
    func_0016FF58();
}
void func_0016DB08(void) {
    func_00170118();
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DB20);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DB40);
void func_0016DB90(void) {
    s32 temp_v0;

    temp_v0 = D_0041D478 - 1;
    D_0041D478 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_0041D480, 0, 0x480);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DBE0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DCA8);
s32 func_0016DCE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DCE8);
void func_0016DCF8(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
}
s32 func_0016DD08(u8 *arg0, s32 arg1) {
    s32 (*temp_v0)(s32, s32);

    if (arg1 == 1) {
        return *(s32 *)((u8 *)arg0 + 0xC);
    }
    if (arg1 != 0) {
        temp_v0 = *(s32 (**)(s32, s32))((u8 *)arg0 + 0x1C);
        if (temp_v0 != NULL) {
            temp_v0(*(s32 *)((u8 *)arg0 + 0x20), -3);
        }
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DD50);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DE10);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DEA8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DFA0);
s32 func_0016E048(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
s32 func_0016E050(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x18);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E058);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E078);
void func_0016E0D0(void) {
    s32 temp_v0;

    func_0016DAD8();
    temp_v0 = D_0041D960 - 1;
    D_0041D960 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_0041D968, 0, 0x4000);
    }
    func_0016DAF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E120);
void func_0016E210(u8 *arg0) {
    func_0016DAD8();
    if (arg0 != NULL) {
        memset(arg0, 0, 0x40);
        *(s32 *)((u8 *)arg0 + 4) = 0;
    }
    func_0016DAF0();
}
s32 func_0016E250(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E258);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E268);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E2B0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E300);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E470);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E5C8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E760);
INCLUDE_ASM("asm/nonmatchings/cri/sj", fn_80057DB0);
s32 func_0016E830(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s32 func_0016E838(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x24);
}
void func_0016E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((u8 *)((((arg1 * 2) + arg2) * 4) + arg0) + 0x28) = arg3;
}
s32 func_0016E858(s32 arg0, s32 arg1, s32 arg2) {
    return *(s32 *)((u8 *)((((arg1 * 2) + arg2) * 4) + arg0) + 0x28);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E870);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E890);
void func_0016E8E0(void) {
    s32 temp_v0;

    temp_v0 = D_00421998 - 1;
    D_00421998 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_004219A0, 0, 0xC00);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E930);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EA18);
s32 func_0016EA50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EA58);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EA68);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EAF8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EB70);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016ECA8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EE00);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EF48);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016EFD8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F018);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F050);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F0B0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F148);
void func_0016F1F8(u8 *arg0, s32 arg1) {
    memset(*(s32 *)((u8 *)arg0 + 0), 0, *(s32 *)((u8 *)arg0 + 4));
    func_00128040(*(s32 *)((u8 *)arg0 + 0), arg1, 7);
    func_0016F0B0(*(s32 *)((u8 *)arg0 + 4) - 0x10, *(s32 *)((u8 *)arg0 + 0) + 8);
}
void func_0016F258(s32 arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = (s32) (arg0 + 0x10);
    *(s32 *)((u8 *)arg1 + 4) = func_0016F148(arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F290);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F360);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F3B8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F408);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F460);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F490);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F500);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F530);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F5A0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F5F0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F640);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F690);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F6F8);
void func_0016F748(void) {
    s32 temp_v0;

    temp_v0 = D_0042277C - 1;
    D_0042277C = temp_v0;
    if (temp_v0 == 0) {
        func_00165F40();
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F788);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F828);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F938);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F9C8);
void func_0016FAD8(void) {
    func_001660C0();
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016FAF0);
void func_0016FC88(void) {
    s32 temp_v0;

    temp_v0 = D_00422784 - 1;
    D_00422784 = temp_v0;
    if (temp_v0 == 0) {
        func_00165C68(D_00422A18);
        D_00422A18 = 0;
        if (D_0042278C != 0) {
            func_00112700(D_0042278C);
            D_0042278C = 0;
        }
        func_00165F40();
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016FD00);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016FDF8);
void func_0016FE40(u8 *arg0) {
    *(u16 *)((u8 *)arg0 + 2) = (u16) (*(u16 *)((u8 *)arg0 + 2) + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016FE50);
