#include "common.h"

s32 func_0017EE78();                            /* extern */

s32 func_00172BC8(s32);                         /* extern */

s32 func_00172B78(s32);                         /* extern */

s32 func_00172B48();                            /* extern */

s32 func_00172B20();                            /* extern */

s32 func_00172AF8(s32, s32 *, s32); /* extern */
s32 func_00178440();                            /* extern */
extern s32 D_00481550;

s32 func_00178E38(s32, s32 *, s32);     /* extern */
s32 func_0017E550();                            /* extern */
extern s32 D_00424CA4;
extern s32 D_00424CB0;

extern s32 D_00481534;

extern s32 D_00481530;

extern s32 D_00465390;

s32 func_0017C330(s32 *);                   /* extern */

s32 func_0017C1D8(s32 *);                   /* extern */
extern s32 D_00424C88;

s32 func_0017B098(s32);                         /* extern */
extern s32 D_00424C38;

s32 func_0017B038();                            /* extern */

extern s32 D_00465328;

s32 func_00178BF0();                            /* extern */

s32 func_00178BD8();                            /* extern */

s32 func_00178BC0();                            /* extern */

s32 func_00178BA8();                            /* extern */

extern s32 D_00465288;

s32 func_00173418(s32);                         /* extern */
s32 func_00173580(s32, s32);                    /* extern */

s32 func_00178B80();                                /* extern */

s32 func_00172F48(s32 *);                   /* extern */

s32 func_00172DF0(s32 *);                   /* extern */
extern s32 D_00424C20;

extern s32 D_00424BC8;

extern s32 D_004233C0;

s32 func_00170A68(s32);                     /* extern */

s32 func_0016FF40();                            /* extern */
s32 func_0016FF58();                            /* extern */
extern s32 (*D_00481478)();

s32 func_00170690(s32);                     /* extern */

void func_00170800(void) {
    func_00170690(0);
}
void func_00170818(void) {
    func_00170690(1);
}
void func_00170830(void) {
    func_00170690(2);
}
void func_00170848(void) {
    func_00170690(3);
}
void func_00170860(void) {
    func_00170690(4);
}
void func_00170878(void) {
    func_00170690(5);
}
void func_00170890(void) {
    func_00170690(6);
}
void func_001708A8(void) {
    func_00170690(7);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001708C0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001708E8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00170968);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001709A8);
s32 func_00170A00(s32 *arg0) {
    s32 temp_v0;
    s32 var_s0;

    if (D_00481478 != NULL) {
        var_s0 = D_00481478();
    } else {
        func_0016FF40();
        temp_v0 = *arg0;
        *arg0 = 1;
        var_s0 = temp_v0 != 1;
        func_0016FF58();
    }
    return var_s0;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00170A68);
void func_00170A90(void) {
    func_00170A68(0);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00170AA8);
void func_00170AE0(void) {

}
s32 *func_00170AE8(void) {
    return &D_004233C0;
}
void func_00170AF8(s32 arg0) {
    *func_00170AE8() = arg0;
}
s32 func_00170B20(void) {
    return *func_00170AE8();
}
void func_00170B40(void) {

}
void func_00170B48(void) {

}
void func_00170B50(void) {

}
void func_00170B58(void) {

}
void func_00170B60(void) {

}
void func_00170B68(void) {

}
void func_00170B70(void) {

}
void func_00170B78(void) {

}
void func_00170B80(void) {

}
void func_00170B88(void) {

}
void func_00170B90(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00170B98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172110);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001723E0);
void func_001726E8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001726F0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001727A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172858);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172968);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172A40);
s32 func_00172A88(void) {
    return D_00424BC8;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172A98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172AC8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172AF8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172B20);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172B48);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172B78);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172BA0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172BC8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172BF0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172C18);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172C40);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172C68);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172C90);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172CB8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172CE0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172D08);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172D30);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172D58);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172D80);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172DA8);
void func_00172DD0(void) {
    func_00172DF0(&D_00424C20);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172DF0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172E08);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172E78);
s32 func_00172EF8(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_00172F48(&D_00424C20);
    } else {
        func_00172F48(arg0 + 4);
    }
    return arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172F48);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172F80);
void func_00173038(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173040);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173140);
void func_001731A0(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x158;
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF03020F);
        return;
    }
    *arg1 = *(s32 *)((u8 *)temp_s0 + 0x2FC) << 0xB;
    *arg2 = *(s32 *)((u8 *)temp_s0 + 0xE4);
    *arg3 = -1;
}
void func_00173230(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x158;
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF03020E);
        return;
    }
    *arg1 = *(s32 *)((u8 *)temp_s0 + 0xD0);
    *arg2 = *(s32 *)((u8 *)temp_s0 + 0xD4);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001732A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001732D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173350);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173378);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173388);
void func_001733B0(s32 arg0, s32 arg1) {
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF03020C);
        return;
    }
    func_00173580(arg0, arg1);
    func_00173418(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173418);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173580);
void func_00173740(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173748);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173810);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001739B0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173A00);
void func_00173A70(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173A78);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001742A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001743C8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001745E0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00174758);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00174798);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001777F0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00177D48);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178440);
s32 *func_001785E8(void) {
    return &D_00465288;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001785F8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001786A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178738);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178780);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178820);
void func_001788D0(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001788D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178910);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178960);
void func_00178A20(s32 *arg0) {
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF030201);
        return;
    }
    *arg0 = 1;
}
void func_00178A70(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178A78);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178B28);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178B80);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178BA8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178BC0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178BD8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178BF0);
void func_00178C08(void) {
    func_00178BA8();
}
void func_00178C20(void) {
    func_00178BC0();
}
void func_00178C38(void) {
    func_00178BD8();
}
void func_00178C50(void) {
    func_00178BF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178C68);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178E38);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178F48);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179018);
void func_001790E0(void) {

}
void func_001790E8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001790F0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179148);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001791F0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179310);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179400);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179860);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179EA0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AAF0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AB60);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017ABC0);
void func_0017AC28(void) {

}
void func_0017AC30(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AC38);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017ACA8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AD58);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017ADF0);
s32 *func_0017AE88(void) {
    return &D_00465328;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AE98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AF10);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AFA8);
void func_0017B020(void) {
    func_0017B038();
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B038);
s32 func_0017B048(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_0017B098(D_00424C38);
    } else {
        func_0017B098(arg0 + 4);
    }
    return arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B098);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B0D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B168);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B178);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B218);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B240);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B278);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B2D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B368);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B380);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B3A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B3D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B420);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B4B8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B5B8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B6C0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B7D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017BC78);
void func_0017C1B8(void) {
    func_0017C1D8(&D_00424C88);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C1D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C1F0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C260);
s32 func_0017C2E0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_0017C330(&D_00424C88);
    } else {
        func_0017C330(arg0 + 0x250);
    }
    return arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C330);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C368);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C418);
void func_0017C4C8(void) {

}
s32 func_0017C4D0(void) {
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C4D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C590);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C698);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C6F8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C7C0);
void func_0017C838(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C840);
void func_0017C868(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x3E8;
    *(s32 *)((u8 *)arg0 + 0x3E8) = arg1;
    *(s32 *)((u8 *)temp_a0 + 4) = arg2;
    *(s32 *)((u8 *)temp_a0 + 8) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C880);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C8A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CA98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CB08);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CBA8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CC50);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017D308);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017D578);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DB18);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DBD8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DCC8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DE90);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DF98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E040);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E198);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E268);
s32 *func_0017E2C0(void) {
    return &D_00465390;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E2D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E368);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E440);
void func_0017E4B8(void) {

}
s32 func_0017E4C0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (D_00481530 != 0) {
        var_a0 |= 0x02000000;
    }
    return var_a0;
}
s32 func_0017E4E0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (D_00481534 != 0) {
        var_a0 |= 0x02000000;
    }
    return var_a0;
}
void func_0017E500(s32 arg0) {
    func_0017E550();
    if (arg0 != 0) {
        func_00178E38(arg0, &D_00424CB0, 0x100);
        D_00424CA4 = arg0 + 0x180;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E550);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E5D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E620);
void func_0017E658(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E660);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E708);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E7B8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E7E0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E838);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E888);
void func_0017E950(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x78;
    *arg1 = *(s32 *)((u8 *)temp_a0 + 0x18);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0x1C);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E968);
void func_0017E9D0(void) {

}
void func_0017E9D8(void) {

}
void func_0017E9E0(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017E9E8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EAB0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EB00);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EB90);
void func_0017EBB8(void) {
    func_00172A88();
}
void func_0017EBD0(void) {
    func_00178440();
    func_00172AF8(8, &D_00481550, 0x3840);
}
void func_0017EC00(void) {
    func_00172B20();
}
void func_0017EC18(void) {
    func_00172B48();
}
void func_0017EC30(u8 *arg0) {
    func_00172B78(*(s32 *)((u8 *)arg0 + 0x3B0));
}
void func_0017EC48(u8 *arg0) {
    func_00172BC8(*(s32 *)((u8 *)arg0 + 0x3B0));
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EC60);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017ED20);
void func_0017EE60(void) {
    func_0017EE78();
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EE78);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EEE8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017EF98);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017F080);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017F0D0);
