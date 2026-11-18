#include "common.h"

s32 ADXT_Stop();                                /* extern */
s32 func_00157E70();                            /* extern */
s32 func_00157E88();                            /* extern */

s32 func_0016B860(s32, s32);                    /* extern */

s32 func_0016B770(s32, s32, s32);               /* extern */

s32 func_0016B580(s32, s32, s32, s32);          /* extern */

s32 func_0016B3B0(s32, s16, s32, s32);          /* extern */

s32 func_0016B310(s32);                         /* extern */

s32 func_0016B2C0(s32);                         /* extern */

s32 func_0016B190(s32, s32);                        /* extern */

s32 func_0016B130(s32);                         /* extern */

s32 func_0016B0C0(s32);                         /* extern */

s32 func_0016B048(s32, s32);                    /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s8 D_004186F8;

extern s32 D_00418684;
extern s32 D_00418688;

INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfci_get_adr_size);
void func_0016A8F0(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016A8F8);
void func_0016A950(s32 arg0, s32 arg1) {
    D_00418684 = arg0;
    D_00418688 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016A968);
s8 *func_0016A988(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (D_004186F8 == 0) {
        var_a3 = &D_004186F8;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x28) {
            temp_v0 = (var_a1 * 0x38) + &D_004186F8;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016A9E0);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AA00);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiOpen);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AB10);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AB58);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AC18);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiReqRd);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016ADD8);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AE28);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AE60);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AE98);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AF18);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiOpenEntry);
void func_0016AFD8(void) {
    func_0016FF40();
}
void func_0016AFF0(void) {
    func_0016FF58();
}
void func_0016B008(s32 arg0, s32 arg1) {
    func_0016AFD8();
    func_0016B048(arg0, arg1);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B048);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B060);
void func_0016B090(s32 arg0) {
    func_0016AFD8();
    func_0016B0C0(arg0);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B0C0);
void func_0016B100(s32 arg0) {
    func_0016AFD8();
    func_0016B130(arg0);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B130);
s32 func_0016B148(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_0016AFD8();
    temp_s0 = func_0016B190(arg0, arg1);
    func_0016AFF0();
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B190);
void func_0016B290(s32 arg0) {
    func_0016AFD8();
    func_0016B2C0(arg0);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B2C0);
void func_0016B2E0(s32 arg0) {
    func_0016AFD8();
    func_0016B310(arg0);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B310);
void func_0016B350(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B3B0(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B3B0);
void func_0016B520(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B580(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B580);
void func_0016B720(s32 arg0, s32 arg1, s32 arg2) {
    func_0016AFD8();
    func_0016B770(arg0, arg1, arg2);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B770);
void func_0016B820(s32 arg0, s32 arg1) {
    func_0016AFD8();
    func_0016B860(arg0, arg1);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B860);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B8E8);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BA20);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BA48);
void func_0016BAF0(u8 *arg0) {
    s32 temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 4);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0xE8);
    if (temp_s0 == 0) {
        return;
    }
    ADXT_Stop();
    func_00157E70();
    func_0016B290(temp_s0);
    *(s32 *)((u8 *)temp_s1 + 0xE8) = 0;
    func_0016B100(0);
    func_00157E88();
}
void func_0016BB60(u8 *arg0) {
    func_0016B2E0(*(s32 *)((u8 *)arg0 + 0xE8));
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BB78);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BB98);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BBB0);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BBC8);
