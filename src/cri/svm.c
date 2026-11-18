#include "common.h"

s32 func_00127CD8(s32 *, s32, s32);     /* extern */

s32 func_00128040(s32 *, s32, s32);     /* extern */
extern s32 D_00423340;
extern s32 D_00481470;

s32 func_0016FEB0(s32);                     /* extern */

s32 func_0016FE50(s32);                     /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/svm", func_0016FEB0);
void func_0016FF40(void) {
    func_0016FE50(1);
}
void func_0016FF58(void) {
    func_0016FEB0(1);
}
void func_0016FF70(void) {
    func_0016FE50(2);
}
void func_0016FF88(void) {
    func_0016FE50(3);
}
void func_0016FFA0(void) {
    func_0016FE50(4);
}
void func_0016FFB8(void) {
    func_0016FE50(5);
}
void func_0016FFD0(void) {
    func_0016FE50(0x3E8);
}
void func_0016FFE8(void) {
    func_0016FEB0(2);
}
void func_00170000(void) {
    func_0016FEB0(3);
}
void func_00170018(void) {
    func_0016FEB0(4);
}
void func_00170030(void) {
    func_0016FEB0(5);
}
void func_00170048(void) {
    func_0016FEB0(0x3E8);
}
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170060);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170070);
void func_00170118(s32 arg0) {
    func_00128040(&D_00423340, arg0, 0x7F);
    if (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0) != NULL) {
        (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0))(*(s32 *)((u8 *)(&D_00481470) + 4), &D_00423340);
    }
}
void func_00170168(s32 arg0, s32 arg1) {
    func_00128040(&D_00423340, arg0, 0x7F);
    func_00127CD8(&D_00423340, arg1, 0x7F);
    if (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0) != NULL) {
        (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0))(*(s32 *)((u8 *)(&D_00481470) + 4), &D_00423340);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001701D8);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001702E8);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170380);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170450);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001704C8);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170588);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001705E0);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170620);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170660);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170678);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170690);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170758);
