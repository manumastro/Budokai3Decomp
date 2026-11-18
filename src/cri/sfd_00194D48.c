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
s32 func_001957B8_x00195D50() __asm__("func_001957B8");
s32 func_00195B08_x00195D50(s32, s32, s32) __asm__("func_00195B08");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00195D50");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) {
    if (func_001957B8_x00195D50() == 0) {
        return arg2;
    }
    return func_00195B08_x00195D50(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1, arg2);
}
s32 func_00195068_x00195DC0(s32, s32) __asm__("func_00195068");
s32 func_001957B8_x00195DC0() __asm__("func_001957B8");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) __asm__("func_00195DC0");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) {
    if (func_001957B8_x00195DC0() == 0) {
        return arg1;
    }
    return func_00195068_x00195DC0(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1);
}
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
s32 func_0018D650_x001965C8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x001965C8() __asm__("func_0018D870");
s32 func_00199818_x001965C8(s32, s32, s32) __asm__("func_00199818");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) __asm__("func_001965C8");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) {
    if (func_0018D870_x001965C8() != 0) {
        return func_0018D650_x001965C8(0, 0xFF000145, arg1);
    }
    func_00199818_x001965C8(arg0, 0x1E, arg1);
    return 0;
}
s32 func_0018D650_x00196638(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00196638() __asm__("func_0018D870");
s32 func_00199818_x00196638(s32, s32, s32) __asm__("func_00199818");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) __asm__("func_00196638");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) {
    if (func_0018D870_x00196638() != 0) {
        return func_0018D650_x00196638(0, 0xFF000146, arg1);
    }
    func_00199818_x00196638(arg0, 0x1D, arg1);
    return 0;
}
void func_001966A8(void) {
    func_001966C0();
}
s32 func_0018D650_x001966C0(s32, s32) __asm__("func_0018D650");
extern s32 D_004676A4_x001966C0 __asm__("D_004676A4");
void func_001966C0_x001966C0(void) __asm__("func_001966C0");
void func_001966C0_x001966C0(void) {
    if (D_004676A4_x001966C0 != 0x5A5A5A5A) {
        func_0018D650_x001966C0(0, 0xFF000201);
    }
}
void func_00196708(void) {
    func_0019A160();
}
void func_00196720(void) {

}
typedef unsigned char u8_x00196728;
typedef unsigned int u32_x00196728;
typedef struct MovieModuleState_x00196728 {
    u8_x00196728 _pad_0[0x44];
    u32_x00196728 field_44;
    u32_x00196728 field_48;
} MovieModuleState_x00196728;
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) __asm__("func_00196728");
/* fn_12_2CD44: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CD44.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) {
    if (state->field_48 - 1 > 3) {
        return 1;
    }
    return state->field_44 == 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196750);
typedef unsigned char u8_x001967B8;
typedef unsigned int u32_x001967B8;
typedef struct MovieModuleState_x001967B8 {
    u8_x001967B8 _pad_0[0x44];
    u32_x001967B8 field_44;
} MovieModuleState_x001967B8;
extern int fn_12_24990_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_0018D870");
extern int fn_12_24A88_x001967B8(int arg0, u32_x001967B8 arg1) __asm__("func_0018D650");
extern void fn_12_2C9C4_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_00196868");
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_001967B8");
/* fn_12_2CC24: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CC24.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) {
    if (fn_12_24990_x001967B8(state)) {
        return fn_12_24A88_x001967B8(0, 0xFF000138);
    }
    state->field_44 = 1;
    fn_12_2C9C4_x001967B8(state);
    return 0;
}
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
struct MovieModule_x00197B80 {
    char pad_94c[0x94c];
    int value_94c;
};
typedef void (*MovieCallback_x00197B80)(struct MovieModule_x00197B80 *, void *, int *);
extern MovieCallback_x00197B80 fn_12_2D73C_x00197B80(struct MovieModule_x00197B80 *, int) __asm__("func_001999E0");
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) __asm__("func_00197B80");
/* fn_12_2BA6C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2BA6C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) {
    int *value = &module->value_94c;
    MovieCallback_x00197B80 callback;
    *value += delta;
    callback = fn_12_2D73C_x00197B80(module, 0x24);
    if (callback != 0) {
        callback(module, arg, value);
    }
}
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
void func_00198450_x00198450(u8 *arg0) __asm__("func_00198450");
void func_00198450_x00198450(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
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
s32 func_0018D650_x00198B18(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198B18() __asm__("func_0018D870");
s32 func_00196548_x00198B18(s32) __asm__("func_00196548");
s32 func_00199818_x00198B18(s32, s32, s32) __asm__("func_00199818");
void func_00198B18_x00198B18(s32 arg0) __asm__("func_00198B18");
void func_00198B18_x00198B18(s32 arg0) {
    if (func_0018D870_x00198B18() != 0) {
        func_0018D650_x00198B18(0, 0xFF000153, 1);
        return;
    }
    func_00199818_x00198B18(arg0, 0x2F, 1);
    func_00196548_x00198B18(arg0);
}
s32 func_00198B78(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000154);
    }
    func_00198BE8(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) __asm__("func_00198BE8");
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg1 = ((temp_v0 ^ 1) != 0) ? 0 : temp_v0;
}
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
s32 func_00198C78_x00198C30() __asm__("func_00198C78");
s32 func_001994D8_x00198C30(void *) __asm__("func_001994D8");
void func_00198C30_x00198C30(u8 *arg0) __asm__("func_00198C30");
void func_00198C30_x00198C30(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x31E8) == 0) {
        return;
    }
    func_00198C78_x00198C30();
    func_001994D8_x00198C30(arg0);
}
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
s32 func_0017EE78_x00199610(s32, s32, s32) __asm__("func_0017EE78");
unsigned long long func_00199610_x00199610(u8 *arg0) __asm__("func_00199610");
unsigned long long func_00199610_x00199610(u8 *arg0)
{
  s32 var_a0;
  s32 var_a1;
  s32 var_a2;
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x31E8));
  var_v0 = *((s32 *) (((u8 *) temp_s0) + 0xDC0));
  if (var_v0 <= 0)
  {
    var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xDB4));
    var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDB8));
    var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDBC));
    if ((var_a0 <= 0) || (var_a2 <= 0))
    {
      var_v0 = *((s32 *) (((u8 *) temp_s0) + 4));
      if (var_v0 <= 0)
      {
        if (var_a0 <= 0)
        {
          var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xD9C));
        }
        if (var_a2 <= 0)
        {
          var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDA0));
          var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDA4));
        }
        if ((var_a0 > 0) && (var_a2 > 0))
        {
          goto block_10;
        }
      }
    }
    else
    {
      block_10:
      var_v0 = func_0017EE78_x00199610(var_a0, var_a1, var_a2);

    }
  }
  *((s32 *) (((u8 *) temp_s0) + 0xD98)) = var_v0;
}
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
typedef unsigned char u8_x00199AC8;
typedef signed int s32_x00199AC8;
typedef unsigned int u32_x00199AC8;
struct fn_12_2D58C_Copy64_x00199AC8 { u32_x00199AC8 a[16]; };
extern s32_x00199AC8 fn_12_24990_x00199AC8(u32_x00199AC8) __asm__("func_0018D870");
extern s32_x00199AC8 fn_12_24A88_x00199AC8(void *, s32_x00199AC8) __asm__("func_0018D650");
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) __asm__("func_00199AC8");
/* fn_12_2D58C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2D58C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) {
    s32_x00199AC8 t0;
    t0 = fn_12_24990_x00199AC8(arg0);
    if (t0 != 0) {
    return fn_12_24A88_x00199AC8(0, 0xFF000000 + 281);
    }
    *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg1 + 0) = *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg0 + 2380);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199BA0);
s32 func_0018D650_x00199CA8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00199CA8() __asm__("func_0018D870");
s32 func_00199D28_x00199CA8(s32, s32, s32) __asm__("func_00199D28");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00199CA8");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0018D870_x00199CA8() != 0) {
        return func_0018D650_x00199CA8(0, 0xFF000117, arg2);
    }
    func_00199D28_x00199CA8(arg0, arg1, arg2);
    return 0;
}
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
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1) __asm__("func_00199DF0");
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1)
{
 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = 0; } while (0);
}
void func_00199E00(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199E08);
void func_0019A010(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    func_0019A058(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
}
void func_0019A058_x0019A058(u8 *arg0) __asm__("func_0019A058");
void func_0019A058_x0019A058(u8 *arg0)
{
  *((s16 *) (((u8 *) arg0) + 0x1E)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0xC)) = 0; *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0x14)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1C)) = 0;
}
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
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019A550");
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  u8 *new_var;
 do { *((s32 *) (((u8 *) arg0) + 0x148)) = arg2; new_var = arg0; } while (0);
  new_var2 = ((u8 *) new_var) + 0x144;
  *((s32 *) new_var2) = arg1;
}
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
s32 func_0018D650_x0019AB28(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AB28() __asm__("func_0018D870");
s32 func_00199818_x0019AB28(s32, s32, s32) __asm__("func_00199818");
s32 func_0019AE00_x0019AB28(s32, s32, s32) __asm__("func_0019AE00");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) __asm__("func_0019AB28");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) {
    if (func_0018D870_x0019AB28() != 0) {
        return func_0018D650_x0019AB28(0, 0xFF000123, 4);
    }
    func_0019AE00_x0019AB28(arg0, arg1, 4);
    func_00199818_x0019AB28(arg0, 0xF, 4);
    return 0;
}
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
typedef unsigned char u8_x0019B2E0;
typedef struct SfdPlaybackSettings_x0019B2E0 {
    u8_x0019B2E0 unknown_00[0x14];
    int frame_rate_code;
} SfdPlaybackSettings_x0019B2E0;
typedef struct SfdHandle_x0019B2E0 {
    u8_x0019B2E0 unknown_0000[0x44];
    int field_0044;
    int playback_state;
    u8_x0019B2E0 unknown_004C[0x8C0];
    SfdPlaybackSettings_x0019B2E0 playback_settings;
} SfdHandle_x0019B2E0;
extern const int lbl_12_rodata_E10_x0019B2E0[9] __asm__("D_00467730");
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) __asm__("func_0019B2E0");
/* SFTIM_GetTimeOneFrmVideo: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/SFTIM_GetTimeOneFrmVideo.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) {
    int code = handle->playback_settings.frame_rate_code;
    if (code == 0) {
        *value = 0;
        *scale = 29970;
    } else {
        *value = 1000;
        *scale = lbl_12_rodata_E10_x0019B2E0[code];
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B320);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B398);
typedef unsigned char u8_x0019B428;
typedef signed int s32_x0019B428;
typedef struct MovieEntry_x0019B428 {
    u8_x0019B428 pad_0[0x14];
    s32_x0019B428 value_14;
    s32_x0019B428 value_18;
} MovieEntry_x0019B428;
extern int fn_12_2DEB0_x0019B428(void *arg0, s32_x0019B428 value_14, s32_x0019B428 value_18) __asm__("func_0019B460");
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) __asm__("func_0019B428");
/* fn_12_2DEF0: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2DEF0.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) {
    if (entry == 0) {
        return 0;
    }
    return fn_12_2DEB0_x0019B428(arg0, entry->value_14, entry->value_18);
}
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
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) __asm__("func_0019B938");
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xF60) = arg1;
}
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
s32 func_0019D070_x0019D070(void) __asm__("func_0019D070");
s32 func_0019D070_x0019D070(void) {
    return 0;
}
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
void func_0019D6D0_x0019D6D0(u8 *arg0) __asm__("func_0019D6D0");
void func_0019D6D0_x0019D6D0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
}
void func_0019D6E0(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
void func_0019D6F0_x0019D6F0(u8 *arg0) __asm__("func_0019D6F0");
void func_0019D6F0_x0019D6F0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
}
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
s32 func_0019D780_x0019E240() __asm__("func_0019D780");
s32 func_0019DA20_x0019E240(s32, s32) __asm__("func_0019DA20");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) __asm__("func_0019E240");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    if (func_0019D780_x0019E240() != 0) {
        func_0019DA20_x0019E240(temp_s1, arg1);
    }
}
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
s32 memset_x0019EB20(s32 *, s32, s32) __asm__("memset");
extern s32 D_00426B50_x0019EB20 __asm__("D_00426B50");
void func_0019EB20_x0019EB20(void) __asm__("func_0019EB20");
void func_0019EB20_x0019EB20(void) {
    memset_x0019EB20(&D_00426B50_x0019EB20, 0, 0xC8);
    *(s32 *)((u8 *)(&D_00426B50_x0019EB20) + 4) = 8;
}
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
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) __asm__("func_0019ED28");
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3)
{
  u8 *temp_a0;
 do { temp_a0 = arg0 + 0x14; *((s8 *) (((u8 *) temp_a0) + 2)) = arg3; *((s8 *) (((u8 *) arg0) + 0x14)) = arg1; } while (0);
  *((s8 *) (((u8 *) temp_a0) + 1)) = arg2;
}
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
