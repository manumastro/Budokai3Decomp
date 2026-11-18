#include "common.h"

extern s32 D_004138EC;
extern s32 D_004138F0;

s32 func_00164D38(s32);                     /* extern */
s32 func_00164FD0(s32, s32, s32);               /* extern */

s32 func_00164E10();                            /* extern */

s32 func_00164DB8();                            /* extern */

s32 func_00164DA8();                            /* extern */

s32 func_00164D68();                            /* extern */

s32 func_00164E90();                            /* extern */

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00413740;

s32 func_00127810(s32, s8 *);                   /* extern */
s32 func_00127940(s32, s8 *);                       /* extern */
s32 func_00127A88(s32, s32 *);              /* extern */
s32 func_00166380(s32);                         /* extern */
s32 strlen(s32);                                    /* extern */
extern s32 D_00413760;
extern s8 D_00463690;
extern s8 D_00463698;

s32 func_00166BE0();                            /* extern */

extern u32 D_00412A5C;

extern s32 D_00413758;

s32 func_00166588(void *);                      /* extern */
s32 func_00166A00();                            /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiGetFileSize);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166550);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166588);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiOpen);
void func_00166730(u8 *arg0) {
    if (arg0 != NULL) {
        if ((u8) *(u8 *)((u8 *)arg0 + 2) >= 2U) {
            func_00166A00();
        }
        *(s8 *)((u8 *)arg0 + 0) = 0;
        func_00166588(arg0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166788);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166820);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiReqRd);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166A00);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166B00);
s32 func_00166B38(void) {
    return 0x800;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166B40);
void func_00166B90(s32 arg0) {
    D_00413758 = arg0;
}
s32 func_00166BA0(void) {
    return D_00413758;
}
void func_00166BB0(u32 arg0) {
    D_00412A5C = arg0;
    if (arg0 >= 2U) {
        D_00412A5C = 0;
    }
}
s32 func_00166BD0(void) {
    return D_00412A5C;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166BE0);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166C88);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166C98);
s32 func_00166CB8(void) {
    return 0;
}
void func_00166CC0(void) {
    func_00166BE0();
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166CD8);
void func_00166DA0(s8 *arg0, s32 arg1) {
    s8 temp_v1;

    func_00127A88(arg1, &D_00413760);
    temp_v1 = *arg0;
    if ((temp_v1 != 0x2F) && (temp_v1 != 0x5C)) {
        func_00127810(arg1, &D_00463690);
    }
    func_00127810(arg1, arg0);
    if (func_00127940((arg1 + strlen(arg1)) - 2, &D_00463698) != 0) {
        func_00127810(arg1, &D_00463698);
    }
    func_00166380(arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166E48);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166E80);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166ED8);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00166F70);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167108);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167290);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167468);
void func_00167530(void) {
    memset(&D_00413740, 0, 0x10);
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167558);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167598);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167688);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", dvCiLoadDirInfo);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167928);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167A90);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167AB8);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167AD8);
s32 *func_00167BA0(void) {
    return &D_00413760;
}
void func_00167BB0(void) {
    func_00164E90();
}
void func_00167BC8(void) {
    func_00164D68();
}
void func_00167BE0(void) {
    func_00164DA8();
}
void func_00167BF8(void) {
    func_00164DB8();
}
void func_00167C10(void) {
    func_00164E10();
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167C28);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167C60);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167C90);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167CC0);
s32 func_00167D10(u8 *arg0) {
    s32 temp_s0;
    s32 var_v0;

    func_00164D38(0x4000);
    temp_s0 = func_00164FD0(*(s32 *)((u8 *)arg0 + 0x18), 1, arg0 + 0x14);
    func_00164D38(0x4001);
    var_v0 = 0;
    if (temp_s0 >= 0) {
        var_v0 = *(s32 *)((u8 *)arg0 + 0x14) != 1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167D78);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167DD8);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167EA0);
void func_00167F18(s32 arg0, s32 arg1) {
    D_004138EC = arg0;
    D_004138F0 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167F30);
INCLUDE_ASM("asm/nonmatchings/cri/dvci", func_00167FD0);
