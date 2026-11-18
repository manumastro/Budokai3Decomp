#include "common.h"

s32 func_00115BE0(s32, s32, s32, s32);              /* extern */

s32 func_00115B20(s32);                             /* extern */

s32 func_00115A88(s32);                             /* extern */

s32 func_001158A0(s32);                             /* extern */

s32 func_001157A0(s32);                             /* extern */

s32 func_001156F0(s32, s32);                        /* extern */

s32 func_00115600(s32);                             /* extern */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_00115548();                                /* extern */

s32 Exit(s32);                                  /* extern */

s32 func_00113D78();                            /* extern */

s32 func_0010B038();                            /* extern */
s32 func_00113BF0();                            /* extern */
s32 func_00114388();                            /* extern */
s32 func_001144C8();                            /* extern */
s32 func_00114700();                            /* extern */
s32 func_00114AB8();                            /* extern */
s32 func_00114C30(s32);                     /* extern */
s32 func_00114E70();                            /* extern */
s32 func_001162F0();                            /* extern */

extern s32 D_003ECD54;

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113B88);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113B98);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CD8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D18);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D28);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D38);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D48);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D68);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D78);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113DB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kTLBException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kDebugException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", DI);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", EI);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114388);
s32 func_001143E8(void) {
    return D_003ECD54;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001143F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114408);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114440);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114480);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114490);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001144C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001145C8);
void func_001145D8(void) {
    func_00114388();
    func_001144C8();
    func_00114AB8();
    func_00114C30(2);
    func_00114E70();
    func_0010B038();
    func_00114700();
    func_00113BF0();
    func_001162F0();
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114630);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114640);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114650);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114688);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114698);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114700);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147B0);
s32 func_001147C0(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a3;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    if (arg2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < arg2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114800);
void func_00114918(void) {
    func_00113D78();
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114920);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114990);
void Exit_001149D8(s32 arg0) {
    func_00114918();
    Exit(arg0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A60);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114AA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114AB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114B90);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C10);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C20);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114D88);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114E40);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114E70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F80);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115110);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115198);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001151D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115478);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001154C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115548);
s32 func_001155B8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = DI();
    temp_s1 = func_00115548();
    if (temp_s0 != 0) {
        EI();
    }
    return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115600);
s32 func_001156A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115600(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001156F0);
s32 func_00115740(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = DI();
    temp_s0 = func_001156F0(arg0, arg1);
    if (temp_s2 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001157A0);
s32 func_00115850(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001157A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001158A0);
s32 func_00115968(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001158A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001159B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115A88);
s32 func_00115AD0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115A88(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115B20);
s32 func_00115B90(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115B20(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115BE0);
s32 func_00115CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;

    temp_s4 = DI();
    temp_s0 = func_00115BE0(arg0, arg1, arg2, arg3);
    if (temp_s4 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115EC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115FB0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001160E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001161D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116278);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001162F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116318);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116398);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116450);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001164A8);
