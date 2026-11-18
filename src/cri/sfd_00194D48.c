#include "common.h"

s32 func_0019EB20();                            /* extern */

s32 func_0019D7C8();                                /* extern */

s32 func_0019D6D0(s32 *);                   /* extern */
extern s32 D_00492A58;
extern s32 D_00492A64;

extern s32 D_00467A00;

s32 func_0019CF60();                            /* extern */
s32 func_0019CFE8(s32);                         /* extern */
s32 func_0019D070(s32);                             /* extern */

extern s32 D_00426B38;
extern s32 D_00426B3C;

s32 memset(s32, s32, s32);              /* extern */

extern s32 D_00426A98;

s32 func_00172A40();                            /* extern */

s32 func_0019AA08();                            /* extern */

s32 func_0019A718();                            /* extern */

s32 func_0019A218();                            /* extern */
s32 func_0019AD80(s32);                         /* extern */

s32 func_0019A058(s32);                         /* extern */

s32 func_001998B8();                                /* extern */

s32 func_001976B8();                            /* extern */

s32 func_00198F70(s32, s32 *);                  /* extern */

s32 func_00198BE8(s32, s32 *);                  /* extern */

s32 func_0018A7A0(s32, s32);                    /* extern */

extern s32 D_00426ADC;

s32 func_00196B90();                            /* extern */
s32 func_00196C38(s32);                         /* extern */
s32 func_00196CC0(s32);                         /* extern */

s32 func_001969A8();                            /* extern */
s32 func_00198C30(s32);                         /* extern */

s32 func_0019A160();                            /* extern */

s32 func_001966C0();                            /* extern */

s32 func_00189DE8(s32, s32);                    /* extern */
s32 func_0019B938(s32, s32);                    /* extern */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

s32 func_00178C68(s32 *, s32, s32);     /* extern */

s32 func_00107AF0();                            /* extern */
s32 func_00178F48(s32 *, s32, s32); /* extern */
extern s32 D_004929F8;

extern s32 D_00426B18;

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */

void func_00194D48(s64 *arg0, s64 arg1, s64 arg2, s64 arg3) {
    *arg0 = (arg1 << 0x20) | ((u64) (arg2 << 0x20) >> 4) | ((u64) (arg3 << 0x20) >> 0x20);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194D70);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194DE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194F28);
void func_00195018(u8 *arg0, s32 arg1) {
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) (*(s32 *)((u8 *)arg0 + 0x14) + arg1);
    *(s64 *)((u8 *)arg0 + 0x48) = (s64) (arg1 + *(s64 *)((u8 *)arg0 + 0x48));
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195068);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001950E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001952E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001953E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195700);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195758);
void func_001957A8(s32 arg0) {
    D_00426B18 = arg0;
}
s32 func_001957B8(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFC8) != 0;
}
void func_001957C8(void) {
    if (D_00426B18 != 0) {
        func_00107AF0();
        func_00178F48(&D_004929F8, 0, 0x48);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195878);
s32 func_00195A90(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x109C);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195AA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195B08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195BA8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195C28);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195C50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195C78);
void func_00195D00(u8 *arg0) {
    func_00178C68(&D_004929F8, *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, 0x48);
}
void func_00195D28(u8 *arg0) {
    func_00178C68(*(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, &D_004929F8, 0x48);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195D50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195DC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195E20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195E68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195F98);
s32 func_001960E0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFF8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001960F0);
void func_00196288(u8 *arg0) {
    u8 *temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFC8;
    *(s32 *)((u8 *)temp_v1 + 0xC) = (s32) (*(s32 *)((u8 *)temp_v1 + 0xC) - 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001962A0);
s32 func_001962F8(void) {
    return 0x48;
}
s32 func_00196300(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000141);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x50);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196350);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001963E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196470);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001964D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196500);
s32 func_00196548(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 3;
    return 0;
}
s32 func_00196558(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000144);
    }
    func_0019B938(arg0, arg1);
    func_00189DE8(arg0, arg1);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001965C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196638);
void func_001966A8(void) {
    func_001966C0();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001966C0);
void func_00196708(void) {
    func_0019A160();
}
void func_00196720(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196728);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196750);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001967B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196868);
void func_00196980(s32 arg0) {
    func_001969A8();
    func_00198C30(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001969A8);
s32 func_001969C0(u8 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x4C);
    var_a1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 >= 2) && ((temp_v1 < 5) || (temp_v1 == 6))) {
        var_a1 = 2;
    }
    return var_a1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001969F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196AB0);
void func_00196B60(s32 arg0) {
    func_00196B90();
    func_00196C38(arg0);
    func_00196CC0(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196B90);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196C38);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196CC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196D88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196E28);
s32 func_00196E98(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x48);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196EA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196F08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196FB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197138);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197218);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001972B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197370);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001973F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197460);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001974D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197598);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001975F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197680);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001976B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197778);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197830);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197A60);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197AC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197B20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197B80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197BE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197C50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197C68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197D08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197D30);
s32 func_00197DB0(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 4;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197DC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197DE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197E40);
void func_00197EA8(s32 arg0) {
    D_00426ADC = arg0;
}
s32 func_00197EB8(void) {
    return D_00426ADC;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197EC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197F28);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198128);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198198);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198218);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001982A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001982C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198380);
void func_001983F0(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000139);
        return;
    }
    func_0018A7A0(arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198450);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198468);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001984F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198568);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001985F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001986A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198718);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001987C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198890);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001988D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001988F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198938);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001989A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198A60);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198AB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198B18);
s32 func_00198B78(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000154);
    }
    func_00198BE8(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198BE8);
void func_00198C00(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_v1 != NULL) {
        if (*(s32 *)((u8 *)temp_v1 + 0xDA8) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDA8) = arg1;
        }
        if (*(s32 *)((u8 *)temp_v1 + 0xDAC) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDAC) = arg2;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198C30);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198C78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198DE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198E60);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198EE0);
s32 func_00198F00(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000155);
    }
    func_00198F70(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198F70);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198FE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199080);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001990D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001990D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199180);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199208);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199218);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199310);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199380);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199408);
void func_00199478(u8 *arg0, s32 arg1) {
    u8 *temp_a0;

    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF00015C);
        return;
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_a0 != NULL) {
        *(s32 *)((u8 *)temp_a0 + 0xDC4) = arg1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001994D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001995C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199610);
void func_00199698(void) {
    func_001976B8();
}
s32 func_001996B0(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000111);
    }
    return *(s32 *)((u8 *)arg0 + 0x48);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001996F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001997A8);
void func_00199818(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0) = arg2;
    }
}
void func_00199868(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0xB30) = arg2;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001998B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199940);
s32 func_001999E0(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001999F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199AC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199BA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199CA8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199D28);
s32 func_00199D58(u8 *arg0, u8 **arg1, s32 *arg2) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00011C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        *arg1 = arg0 + 0x10C;
        *arg2 = *(s32 *)((u8 *)arg0 + 0x108);
    } else {
        *arg1 = NULL;
        *arg2 = 0;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199DF0);
void func_00199E00(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199E08);
void func_0019A010(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    func_0019A058(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A058);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A080);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A160);
void func_0019A1C8(s32 arg0) {
    func_0019A218();
    if (func_001999E0(arg0, 0x47) == 1) {
        func_0019AD80(arg0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A218);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A288);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A2C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A2E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A330);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A3C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A408);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A488);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A4D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A550);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A560);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A688);
void func_0019A700(void) {
    func_0019A718();
}
s32 func_0019A718(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0xCC0;
    *arg1 = *(s32 *)((u8 *)temp_a0 + 0x280);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0x284);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A738);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A7B0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A848);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A890);
s32 func_0019A8F0(void) {
    func_0019AA08();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A910);
s32 func_0019AA08(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 != 4) && (temp_v1 != -4) && (temp_v1 != 6) && (temp_v1 != -6)) {
        *arg1 = -1;
        *arg2 = 1;
        return 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AA58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AAB8);
void func_0019AB10(void) {
    func_00172A40();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AB28);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ABA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AC90);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AD18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AD80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AE00);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AE10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AEB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AF40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AF78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AFB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AFE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B088);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B1C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B228);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B290);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B2E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B320);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B398);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B428);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B460);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B498);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B520);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B5E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B738);
void func_0019B7B0(u8 *arg0, s32 *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 var_t0;
    s32 var_v0;
    u8 *temp_a2;

    temp_f1 = (f32) *(s32 *)((u8 *)arg0 + 0xA58);
    temp_a2 = arg0 + 0xCC0;
    if ((fparg1 + temp_f1) < fparg0) {
        *arg1 = 0;
        return;
    }
    if (fparg0 <= (fparg1 - temp_f1)) {
        *arg1 = 1;
        if ((*(f32 *)((u8 *)temp_a2 + 0x2BC) != fparg0) && (*(f32 *)((u8 *)temp_a2 + 0x2B4) != fparg0)) {
            *(f32 *)((u8 *)temp_a2 + 0x2B4) = fparg0;
            *(s32 *)((u8 *)temp_a2 + 0x2B0) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x2B0) + 1);
        }
    } else {
        var_t0 = 0;
        if ((D_00426A98 == 0xEA24) && (*(s32 *)((u8 *)arg0 + 0x920) < 3)) {
            var_t0 = *(s32 *)((u8 *)temp_a2 + 0x2A0) == 0x3E8;
        }
        if (var_t0 >= *(s32 *)((u8 *)temp_a2 + 0x2B0)) {
            var_v0 = *(s32 *)((u8 *)temp_a2 + 0x2B8);
            goto block_16;
        }
        var_v0 = 1;
        if (fparg1 < fparg0) {
            *arg1 = 0;
        } else {
block_16:
            *arg1 = var_v0;
        }
        *(s32 *)((u8 *)temp_a2 + 0x2B0) = 0;
        *(f32 *)((u8 *)temp_a2 + 0x2BC) = fparg0;
        *(s32 *)((u8 *)temp_a2 + 0x2B8) = (s32) *arg1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B8A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B938);
s32 func_0019B940(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xF60);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B948);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B968);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B9A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BA40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BA58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BAD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BB90);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BBD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BCF8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BDE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BE88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BF28);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BF48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BF68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BF88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BFA8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BFC8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C008);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C040);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C0D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C128);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C140);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C158);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C170);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C188);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C1A8);
void func_0019C288(u8 *arg0) {
    memset(arg0 + 0x18, 0, 0xF0);
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x19C) = (s32) (*(s32 *)((u8 *)arg0 + 0x19C) + 1);
}
void func_0019C2C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
void func_0019C2D0(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x138) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x140) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C2E8(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x148) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x150) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C300(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x158) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x160) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C318(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x168) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x170) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C330(u8 *arg0, s32 arg1) {
    if (arg1 > 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    }
}
void func_0019C340(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
}
void func_0019C348(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C350);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C3A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C8D0);
void func_0019C920(s32 arg0, s32 arg1) {
    D_00426B3C = arg0;
    D_00426B38 = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C938);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CA98);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CCD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CDF8);
s32 func_0019CF08(void) {
    return 0;
}
s32 func_0019CF10(void) {
    return 0;
}
s32 func_0019CF18(s32 arg0) {
    s32 temp_s0;

    func_0019CF60();
    temp_s0 = func_0019D070(arg0);
    func_0019CFE8(arg0);
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CF60);
s32 func_0019CFE0(void) {
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CFE8);
s32 func_0019D068(void) {
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D070);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D078);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D0A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D148);
s32 func_0019D160(void) {
    return 0;
}
s32 func_0019D168(void) {
    return 0;
}
s32 func_0019D170(void) {
    return 0;
}
s32 func_0019D178(void) {
    return 0;
}
s32 func_0019D180(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D188);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D1A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D1C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D1E8);
s32 func_0019D208(void) {
    return 0;
}
s32 func_0019D210(void) {
    return 0;
}
s32 func_0019D218(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D220);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D278);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D2F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D340);
s32 func_0019D3C0(void) {
    return 1;
}
s32 func_0019D3C8(void) {
    return 0;
}
s32 func_0019D3D0(void) {
    return 0;
}
s32 func_0019D3D8(void) {
    return 0;
}
s32 func_0019D3E0(void) {
    return 0;
}
s32 func_0019D3E8(void) {
    return 0;
}
s32 func_0019D3F0(void) {
    return 0;
}
s32 func_0019D3F8(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D400);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D420);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D440);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D4B8);
s32 func_0019D4D8(void) {
    return 0;
}
s32 *func_0019D4E0(void) {
    return &D_00467A00;
}
s32 func_0019D4F0(s32 arg0) {
    return arg0 == 2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D500);
void func_0019D590(void) {
    s32 temp_v0;

    temp_v0 = D_00492A64 - 1;
    D_00492A64 = temp_v0;
    if (temp_v0 <= 0) {
        func_0019D6D0(&D_00492A58);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D6A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D6D0);
void func_0019D6E0(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D6F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D708);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D720);
s32 func_0019D770(s32 *arg0) {
    return *arg0 == 0;
}
s32 func_0019D780(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = func_0019D7C8();
    if ((var_v0 != 0) && ((temp_v0 = *(s32 *)((u8 *)arg0 + 0xC), (temp_v0 == 0x6B)) || (var_v0 = 0, ((temp_v0 < 0x6E) == 0)))) {
        var_v0 = 1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D7C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D7F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D8E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D950);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DA20);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DA68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DAD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DB48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DBD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DC28);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DCF8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DD40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DD88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DDD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DF00);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DF48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DF90);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DFD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E020);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E088);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E0D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E118);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E160);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E1D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E240);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E298);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E300);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E380);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E3E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E450);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E4B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E528);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E5D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E640);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E6A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E710);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E780);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E7F0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E858);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E8D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E948);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E9D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EA40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EA80);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EAC0);
void func_0019EB08(void) {
    func_0019EB20();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EB20);
void func_0019EB60(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EB68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EBC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ECB8);
s32 func_0019ECE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ECE8);
void func_0019ED08(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 8;
    *arg3 = *(s32 *)((u8 *)arg0 + 8);
    *arg1 = *(s32 *)((u8 *)temp_a0 + 4);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ED28);
void func_0019ED40(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x14;
    *arg1 = *(u8 *)((u8 *)arg0 + 0x14);
    *arg2 = *(u8 *)((u8 *)temp_a0 + 1);
    *arg3 = *(u8 *)((u8 *)temp_a0 + 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ED60);
void func_0019ED80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
void func_0019EDA8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
