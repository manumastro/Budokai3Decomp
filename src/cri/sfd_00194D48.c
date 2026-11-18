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
extern int WaitSema_x00195068(int sid) __asm__("WaitSema");
extern int SignalSema_x00195068(int sid) __asm__("SignalSema");
typedef struct {
               unsigned int base;
               unsigned int tagp;
               int nblk;
               int rd;
               int rdofs;
               int wr;
               int size;
               unsigned char pad1C[0x40 - 0x1C];
               int sema;
               int active;
               long long total;
               void *ent;
               int nent;
               int f58;
               int f5C;
} ViBuf_x00195068;
int func_00195068_x00195068(ViBuf_x00195068 *b, int n) __asm__("func_00195068");
/* func_00355C08: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00353500.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00195068_x00195068(ViBuf_x00195068 *b, int n)
{
    WaitSema_x00195068(b->sema);
    b->wr -= n;
    b->total -= n;
    if (b->wr < 0) {
        for (;;) {
        }
    }
    SignalSema_x00195068(b->sema);
    return n;
}
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
s32 func_00195758_x00195E20(s32) __asm__("func_00195758");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1) __asm__("func_00195E20");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1)
{
  s32 temp_s0;
  u8 *temp_s0_2;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1C70));
  func_00195758_x00195E20(temp_s0 + 0x1038);
  temp_s0_2 = temp_s0 + 0xFC8;
  *((s32 *) (((u8 *) temp_s0_2) + 0x20)) = arg1;
  *((s32 *) (((u8 *) temp_s0_2) + 0x1C)) = 1;
}
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
int sfply_IsPrepEnd_x001969F0(void*) __asm__("func_00196AB0");
void sfply_AdjustPrepEnd_x001969F0(void*) __asm__("func_00196B60");
void sfply_TrStart_x001969F0(void*) __asm__("func_00197DC0");
int func_00357988_x001969F0(void*) __asm__("func_00196EA0");
int func_001969F0_x001969F0(int *a0) __asm__("func_001969F0");
/* func_003574D8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324040.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001969F0_x001969F0(int *a0) {
    int ret = a0[0x12];
    int sel = a0[0x13];
    if (sfply_IsPrepEnd_x001969F0(a0) == 0) {
        return ret;
    }
    sfply_AdjustPrepEnd_x001969F0(a0);
    switch (sel) {
        case 2:
            ret = 2;
            break;
        case 4:
        case 6:
            if (func_00357988_x001969F0(a0) != 0) {
                sfply_TrStart_x001969F0(a0);
                ret = 4;
                break;
            }
        case 3:
            ret = 3;
            break;
    }
    return ret;
}
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
s32 func_00197460_x001973F0() __asm__("func_00197460");
s32 func_001974D0_x001973F0(s32) __asm__("func_001974D0");
s32 func_00197598_x001973F0(s32) __asm__("func_00197598");
s32 func_001975F0_x001973F0(s32) __asm__("func_001975F0");
s32 func_00197680_x001973F0(s32) __asm__("func_00197680");
void func_001973F0_x001973F0(s32 arg0) __asm__("func_001973F0");
void func_001973F0_x001973F0(s32 arg0) {
    if (func_00197460_x001973F0() != 0) {
        goto block_6;
    }
    if (func_001974D0_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_00197598_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_001975F0_x001973F0(arg0) != 0) {
        goto block_5;
    }
    return;
block_5:
block_6:
    func_00197680_x001973F0(arg0);
    return;
}
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
s32 func_0018D650_x00197D30(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00197D30() __asm__("func_0018D870");
s32 func_00196548_x00197D30(void *) __asm__("func_00196548");
s32 func_00197DB0_x00197D30(void *) __asm__("func_00197DB0");
s32 func_001999E0_x00197D30(void *, s32) __asm__("func_001999E0");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0) __asm__("func_00197D30");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0)
{
  int new_var;
  s32 *new_var2;
  new_var = func_0018D870_x00197D30() != 0;
  if (new_var)
  {
    func_0018D650_x00197D30(0, 0xFF000132);
    return;
  }
  if (func_001999E0_x00197D30(arg0, 0x2F) == 1)
  {
    func_00196548_x00197D30(arg0);
  }
  else
  {
    func_00197DB0_x00197D30(arg0);
  }
  new_var2 = (s32 *) (((u8 *) arg0) + 0x44);
  *new_var2 = 1;
}
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
extern int Obj34D8_SetGlobalEE0B8_IfField48_x00198198(void *hn) __asm__("func_0018D870");
extern void func_0034DD70_x00198198(void *a0, unsigned int err) __asm__("func_0018D650");
extern void func_0035C2D0_x00198198(void *hn, int a1, int a2, void *a3, int a4) __asm__("func_0019C0D8");
void func_00198198_x00198198(void *hn, void *p, int n) __asm__("func_00198198");
/* SFD_AddWritePtr: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0034d1b8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00198198_x00198198(void *hn, void *p, int n)
{
    if (Obj34D8_SetGlobalEE0B8_IfField48_x00198198(hn) != 0) {
        func_0034DD70_x00198198(0, 0xFF000135);
        return;
    }
    func_0035C2D0_x00198198(hn, 0, 0xA, p, n);
}
s32 func_0018B750_x00198218(void *, s32, s32) __asm__("func_0018B750");
s32 func_0018B770_x00198218(void *, s32) __asm__("func_0018B770");
s32 func_0018D650_x00198218(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198218() __asm__("func_0018D870");
s32 func_00198218_x00198218(u8 *arg0) __asm__("func_00198218");
s32 func_00198218_x00198218(u8 *arg0)
{
  s32 temp_s0;
  if (func_0018D870_x00198218() != 0)
  {
    return func_0018D650_x00198218(0, 0xFF000135);
  }
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1BF4));
  if (func_0018B770_x00198218(arg0, temp_s0) != 1)
  {
    func_0018B750_x00198218(arg0, temp_s0, (unsigned short) 1);
    *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
  }
  return 0;
 do { } while (0);
}
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
s32 memset_x001984F0(s32, s32, s32) __asm__("memset");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_001984F0");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_s0;
  s32 temp_s2;
  s32 new_var;
  temp_s0 = (((u32) (arg1 + 3)) >> 2) * 4;
  temp_s2 = arg2 - 4;
  memset_x001984F0(temp_s0, 0, temp_s2);
  *((s32 *) (((u8 *) arg0) + 0)) = temp_s0;
  new_var = (s32) (temp_s2 / 12);
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = new_var;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198568);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001985F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001986A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198718);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001987C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198890);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001988D0);
s32 func_00198938_x001988F0(s32) __asm__("func_00198938");
void func_001988F0_x001988F0(s32 arg0, s32 arg1) __asm__("func_001988F0");
void func_001988F0_x001988F0(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg1 > 0)
  {
    var_s1 = arg0;
    var_s0 = arg1;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0xDC8;
      var_s0 -= 1;
      func_00198938_x001988F0(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198938);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001989A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198A60);
s32 func_0018D650_x00198AB8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198AB8() __asm__("func_0018D870");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1) __asm__("func_00198AB8");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1)
{
  if (func_0018D870_x00198AB8() != 0)
  {
    func_0018D650_x00198AB8(0, 0xFF000152);
    return;
  }
  *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x31E8)))) + 0xDB0)) = arg1;
}
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
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198DE0(int, int) __asm__("func_001999E0");
int func_00198DE0_x00198DE0(int a0, int a1, int a2) __asm__("func_00198DE0");
/* sfsee_IsAudioAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198DE0_x00198DE0(int a0, int a1, int a2) {
    int s0;
    int s1;
    int s2;
    int r;
    int v0;
    s2 = a1;
    s1 = a2;
    r = Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(a0, 3);
    s0 = a0;
    if (r) {
        r = GetArrayElemA0C_35A1C8_x00198DE0(s0, 6);
        if (r == 1) {
            *(int*)s1 = r;
            v0 = *(int*)s2;
            return ((unsigned int)v0 < 1u);
        }
    }
    *(int*)s1 = 0;
    return 0;
}
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198E60(int, int) __asm__("func_001999E0");
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) __asm__("func_00198E60");
/* sfsee_IsVideoAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) {
    int *s2;
    void *s0;
    int *s1;
    int v1;
    int v0;
    s2 = a1;
    s0 = a0;
    s1 = a2;
    if (!Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(s0, 2)) {
        goto fail;
    }
    v1 = GetArrayElemA0C_35A1C8_x00198E60(s0, 5);
    if (v1 != 1) {
        goto fail;
    }
    *s1 = v1;
    v0 = !(*s2);
    goto done;
fail:
    *s1 = 0;
    v0 = 0;
done:
    return v0;
}
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
extern int Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(int, int) __asm__("func_0019C188");
int func_001998B8_x001998B8(char *a0, int a1, int a2) __asm__("func_001998B8");
/* sfset_IsCondValid: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001998B8_x001998B8(char *a0, int a1, int a2)
{
    if (a1 == 6 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 3) == 0)
            return 0;
    }
    if (a1 == 5 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 2) == 0)
            return 0;
    }
    return 1;
}
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
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_00199D28");
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;

    temp_v0 = *(s32 **)((u8 *)((arg1 * 0x44) + arg0) + 0x1BE8);
    if (temp_v0 == NULL) {
        goto block_2;
    }
    goto block_5;
block_2:
    *arg2 = 0;
    return;
block_5:
    *arg2 = *temp_v0;
    return;
}
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
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019AE00");
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + (arg2 * 4);
  *((s32 *) (((u8 *) new_var) + 0xCC0)) = arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AE10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AEB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AF40);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AF78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AFB0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AFE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B088);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B120);
extern void func_0035B5B8_x0019B1C8(void *, int *, int *) __asm__("func_0019B2E0");
extern void func_0035B500_x0019B1C8(void *, int, int) __asm__("func_0019B228");
extern void func_0035B568_x0019B1C8(void *, int, int) __asm__("func_0019B290");
void func_0019B1C8_x0019B1C8(void *a0, int a1) __asm__("func_0019B1C8");
/* func_0035B4A0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00323a00.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019B1C8_x0019B1C8(void *a0, int a1) {
    void *s0;
    int tmp0;
    int tmp1;
    s0 = a0;
    if ((unsigned int)a1 < 2) return;
    if (a1 != 2) return;
    func_0035B5B8_x0019B1C8(s0, &tmp0, &tmp1);
    func_0035B500_x0019B1C8(s0, tmp0, tmp1);
    func_0035B568_x0019B1C8(s0, tmp0, tmp1);
}
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
typedef struct cVec_x0019BA40 {
    float x, y, z, w_x0019BA40;
} cVec_x0019BA40;
typedef struct cBox_x0019BA40 {
    float center[3];
    float half[3];
} cBox_x0019BA40;
typedef struct cMeshInfo_x0019BA40 {
    int dataOfs;
    char unk04[4];
    long name_x0019BA40;
    char unk10[0x24];
    unsigned int flags_x0019BA40;
    char unk38[0xB];
    unsigned char layer;
    char unk44[0x14];
    unsigned char alpha;
} cMeshInfo_x0019BA40;
typedef struct cMeshData_x0019BA40 {
    char unk00[8];
    unsigned short num;
} cMeshData_x0019BA40;
typedef struct cModelNode_x0019BA40 {
    char packet[2][0xB0];
    char unk160[0x220];
    unsigned int dispFlags;
    unsigned char unk384;
    char unk385;
    unsigned char meshNum;
    char unk387;
    struct cMeshData_x0019BA40 *data;
    float uvScroll[2];
    char unk394[0xC];
    float color[3];
    float alpha;
    char unk3B0[0x50];
    int unk400;
    struct cModelNode_x0019BA40 *next;
    int pktBuf;
    unsigned char layer;
    char unk40D[0x3];
    unsigned int tag;
    cMeshInfo_x0019BA40 *info;
} cModelNode_x0019BA40;
typedef struct cVtEnt_x0019BA40 {
    short delta;
    short index;
    void *pfn;
} cVtEnt_x0019BA40;
struct cParts_x0019BA40;
typedef struct cParts_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8];
} cParts_x0019BA40;
typedef struct SEQ_DATA_HEADER_1_x0019BA40 {
    char magic[4];
    char unk04[0x10];
    unsigned short entryOfs;
    unsigned short entryNum;
} SEQ_DATA_HEADER_1_x0019BA40;
typedef struct cSeqEffect_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char id;
    char unk02[2];
    int handle;
    unsigned char part;
    unsigned char flags_x0019BA40;
    char unk0A[2];
} cSeqEffect_x0019BA40;
typedef struct cGameObj_x0019BA40 cGameObj_x0019BA40;
struct cGameObj_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
};
typedef char cGameObj_chk_mtx[((int)&((struct cGameObj_x0019BA40 *)0)->mtx_x0019BA40) == 0x80 ? 1 : -1];
typedef char cGameObj_chk_pos[((int)&((struct cGameObj_x0019BA40 *)0)->pos_x0019BA40) == 0xF0 ? 1 : -1];
typedef char cGameObj_chk_rot[((int)&((struct cGameObj_x0019BA40 *)0)->rot_x0019BA40) == 0x100 ? 1 : -1];
typedef char cGameObj_chk_anim[((int)&((struct cGameObj_x0019BA40 *)0)->tint.w_x0019BA40) == 0x24C ? 1 : -1];
typedef char cGameObj_chk_vt[((int)&((struct cGameObj_x0019BA40 *)0)->vtable_x0019BA40) == 0x214 ? 1 : -1];
typedef char cGameObj_chk_step[((int)&((struct cGameObj_x0019BA40 *)0)->step_x0019BA40) == 0x2F6 ? 1 : -1];
typedef char cGameObj_chk_posA[((int)&((struct cGameObj_x0019BA40 *)0)->posA_x0019BA40) == 0x490 ? 1 : -1];
typedef char cGameObj_chk_stored[((int)&((struct cGameObj_x0019BA40 *)0)->stored_x0019BA40) == 0x520 ? 1 : -1];
typedef char cGameObj_chk_motion[((int)&((struct cGameObj_x0019BA40 *)0)->seqFlags_x0019BA40) == 0x3AC ? 1 : -1];
typedef char cGameObj_chk_hp[((int)&((struct cGameObj_x0019BA40 *)0)->hp_x0019BA40) == 0x54A ? 1 : -1];
typedef char cGameObj_chk_kind[((int)&((struct cGameObj_x0019BA40 *)0)->kindName_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cGameObj_chk_emno[((int)&((struct cGameObj_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cGameObj_chk_eff[((int)&((struct cGameObj_x0019BA40 *)0)->seqData_x0019BA40) == 0x42C ? 1 : -1];
typedef char cGameObj_chk_effno[((int)&((struct cGameObj_x0019BA40 *)0)->effNo_x0019BA40) == 0x570 ? 1 : -1];
typedef char cGameObj_chk_scr[((int)&((struct cGameObj_x0019BA40 *)0)->scrFlags_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cGameObj_chk_scale[((int)&((struct cGameObj_x0019BA40 *)0)->scale_x0019BA40) == 0x110 ? 1 : -1];
typedef char cGameObj_chk_child[((int)&((struct cGameObj_x0019BA40 *)0)->children_x0019BA40) == 0x278 ? 1 : -1];
typedef char cGameObj_chk_childn[((int)&((struct cGameObj_x0019BA40 *)0)->partNum_x0019BA40) == 0x2B4 ? 1 : -1];
typedef char cGameObj_chk_ik[((int)&((struct cGameObj_x0019BA40 *)0)->ik_x0019BA40) == 0x448 ? 1 : -1];
typedef char cGameObj_chk_drop[((int)&((struct cGameObj_x0019BA40 *)0)->dropItem_x0019BA40) == 0x560 ? 1 : -1];
typedef char cGameObj_chk_rate[((int)&((struct cGameObj_x0019BA40 *)0)->speedRate_x0019BA40) == 0x5A8 ? 1 : -1];
typedef char cGameObj_chk_ground[((int)&((struct cGameObj_x0019BA40 *)0)->groundKind_x0019BA40) == 0x474 ? 1 : -1];
typedef char cGameObj_chk_frame[((int)&((struct cGameObj_x0019BA40 *)0)->motionFrame_x0019BA40) == 0x430 ? 1 : -1];
typedef char cGameObj_chk_name[((int)&((struct cGameObj_x0019BA40 *)0)->name_x0019BA40) == 0x538 ? 1 : -1];
typedef char cGameObj_chk_size[sizeof(struct cGameObj_x0019BA40) == 0x5B0 ? 1 : -1];
typedef struct cOmBase_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x4];
    int flags0;
    int hitFlags;
    int flags2;
    char unk5BC[0x4];
    cVec_x0019BA40 knock;
    cVec_x0019BA40 posB;
} cOmBase_x0019BA40;
typedef char cOmBase_size_check[(sizeof(cOmBase_x0019BA40) == 0x5E0) ? 1 : -1];
typedef struct cCoreSaveCombo_x0019BA40 {
    int id[6];
    char lv[6];
    char pad1E[2];
    int max;
} cCoreSaveCombo_x0019BA40;
typedef struct cCoreSaveSpawn_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char sub;
    unsigned short angle;
    float pos_x0019BA40[4];
    int param;
} cCoreSaveSpawn_x0019BA40;
typedef struct cCoreSaveItem_x0019BA40 {
    unsigned short stage;
    unsigned short kind_x0019BA40;
    unsigned char flag;
    signed char yaw;
    unsigned short serial;
    short pos_x0019BA40[3];
    unsigned short extra;
} cCoreSaveItem_x0019BA40;
typedef struct cCoreSaveData_x0019BA40 {
    int worldTime;
    int worldTimeB;
    unsigned int counter08;
    unsigned short saveStageA;
    unsigned short saveStageB;
    unsigned short clearNum;
    unsigned short continueNum;
    unsigned int flags_x0019BA40;
    char unk18[4];
    short levelPoint;
    char levelDownGrace;
    char difficulty;
    int gold;
    int addGoldNum;
    int addGold[16];
    int keyCardNum;
    int keyNum;
    int upgradeLv[4];
    int vitalMax;
    int vital;
    unsigned short counter88;
    unsigned char comboST;
    char unk8B;
    short killEmNum[5];
    unsigned short killNpcNum;
    unsigned char reelSlot[10];
    char unkA2[2];
    unsigned int clearStageMask;
    unsigned char godItem[6];
    unsigned char costumeNo;
    unsigned char prevCostumeNo;
    char skill[0x80];
    unsigned int godReel;
    unsigned char stock[0x20];
    unsigned char vitalItemNum;
    unsigned char tensionItemNum;
    unsigned char reelItemNum;
    unsigned char paper;
    cCoreSaveSpawn_x0019BA40 spawn;
    int worldToggle;
    int worldActive;
    int savedToggle;
    int unk17C;
    char unk180[0x30];
    cCoreSaveCombo_x0019BA40 combo[6];
    unsigned short itemNum;
    cCoreSaveItem_x0019BA40 item[0x80];
    char unkA8A[0x102];
    unsigned int unkB8C;
    unsigned int eventFlags;
    int casinoTicketNum;
    unsigned int fightingRingClear[4];
    int fightingRingEmListNo;
    short allKillEmNum[5];
    unsigned short allKillNpcNum;
    unsigned short allContinueNum;
    unsigned short stateBits;
    unsigned int allStageTime;
    int oliviaCostumeNo;
    char unkBC4[0x8DC];
} cCoreSaveData_x0019BA40;
typedef char cCoreSaveData_size_check[sizeof(cCoreSaveData_x0019BA40) == 0x14A0 ? 1 : -1];
typedef struct cCoreSave_x0019BA40 {
    cCoreSaveData_x0019BA40 *data;
} cCoreSave_x0019BA40;
void cCoreSave_setGameLevel_x0019BA40(cCoreSave_x0019BA40 *self, int level) __asm__("func_0019BA58");
typedef struct cOmbb_x0019BA40 {
    cOmBase_x0019BA40 base;
    char unk5E0[0x20];
    unsigned char fireLit;
    unsigned char bombKind;
    char unk602[2];
    float countdown;
    int hissSe;
} cOmbb_x0019BA40;
typedef struct cEmActorVt_x0019BA40 {
    char unk00[0x60];
    short suspendDelta;
    short pad62;
    void (*suspend)(void *self, int flag);
    char unk68[8];
    short setPosDelta;
    short pad72;
    void (*setPos)(void *self, int pos_x0019BA40);
    short setScaleDelta;
    short pad7A;
    void (*setScale)(void *self, void *scale_x0019BA40);
    char unk80[0x98 - 0x80];
    short entryDelta;
    short pad9A;
    int (*entry_x0019BA40)(void *self, void *data, void *parent);
    char unkA0[0xD8 - 0xA0];
    short startDelta;
    short padDA;
    void (*startAction)(void *self);
} cEmActorVt_x0019BA40;
typedef struct cEmActor_x0019BA40 {
    char unk000[0xF0];
    struct cVec_x0019BA40 *pos_x0019BA40;
    char unk0F4[0x100 - 0xF4];
    float rot_x0019BA40[3];
    char unk10C[0x214 - 0x10C];
    cEmActorVt_x0019BA40 *vt;
    char unk218[0x250 - 0x218];
    int objFlags_x0019BA40;
    char unk254[0x2FE - 0x254];
    unsigned short actorId;
    char unk300[0x4AC - 0x300];
    int kind_x0019BA40;
    char unk4B0[0x548 - 0x4B0];
    short vitalMax;
    short vital;
    char unk54C[0x560 - 0x54C];
    int dropItem_x0019BA40;
    int emNo_x0019BA40;
    char unk568[0x5A0 - 0x568];
    int scrFlags_x0019BA40;
    char unk5A4[4];
    float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x640 - 0x5AC];
    unsigned short entryNo_x0019BA40;
} cEmActor_x0019BA40;
typedef char cEmActor_chk_flags[((int)&((cEmActor_x0019BA40 *)0)->objFlags_x0019BA40) == 0x250 ? 1 : -1];
typedef char cEmActor_chk_kind[((int)&((cEmActor_x0019BA40 *)0)->kind_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cEmActor_chk_emno[((int)&((cEmActor_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cEmActor_chk_entry[((int)&((cEmActor_x0019BA40 *)0)->entryNo_x0019BA40) == 0x640 ? 1 : -1];
typedef char cEmActorVt_chk_entry[(int)&((cEmActorVt_x0019BA40 *)0)->entry_x0019BA40 == 0x9C ? 1 : -1];
typedef struct SET_EM_DATA_x0019BA40 {
    int objId;
    char unk04[0xC];
    cVec_x0019BA40 pos_x0019BA40;
    float rot_x0019BA40;
    unsigned int flags_x0019BA40;
    int seBank;
    int seNo;
    unsigned char appPattern;
    unsigned char entryNo_x0019BA40;
} SET_EM_DATA_x0019BA40;
typedef struct cEmSlot_x0019BA40 {
    struct cEmSlot_x0019BA40 *prev;
    struct cEmSlot_x0019BA40 *next;
    cEmActor_x0019BA40 *em;
    int kind_x0019BA40;
    unsigned char used;
    char unk11[3];
} cEmSlot_x0019BA40;
typedef struct cEmList_x0019BA40 {
    cEmSlot_x0019BA40 *top_x0019BA40;
    cEmSlot_x0019BA40 *last;
} cEmList_x0019BA40;
typedef struct cEmManage_x0019BA40 {
    cEmSlot_x0019BA40 slot[64];
    cEmList_x0019BA40 list;
    int emNum;
    int kindNum;
    int unk510;
    int slotWait;
    unsigned char darkWorld;
    char unk519[7];
    cVec_x0019BA40 unk520_x0019BA40;
    int unk530;
    char unk534[4];
    signed char bigHitEffWait_x0019BA40;
    signed char unk539;
    signed char unk53A;
    signed char plBombHit;
    signed char plCatched;
    signed char plSorry;
    signed char unk53E;
    unsigned char unk53F;
    signed char unk540;
    signed char unk541;
    short unk542;
    float unk544;
    float speedRate_x0019BA40;
    int unk54C;
    int turnBehind_x0019BA40;
    int turnPlus;
    int turnMinus;
    int nextNo_x0019BA40;
    cEmActor_x0019BA40 *unk560[5];
    cEmActor_x0019BA40 *specialEm_x0019BA40[5];
    cEmActor_x0019BA40 *unk588[4];
    char unk598[8];
    unsigned char unk5A0_x0019BA40;
    unsigned char unk5A1;
    unsigned char unk5A2;
    unsigned char unk5A3;
    unsigned char unk5A4;
    unsigned char unk5A5;
    char unk5A6[6];
    cOmbb_x0019BA40 *unk5AC_x0019BA40[2];
    char unk5B4;
    unsigned char unk5B5_x0019BA40;
} cEmManage_x0019BA40;
typedef char SET_EM_DATA_chk_size[sizeof(SET_EM_DATA_x0019BA40) == 0x34 ? 1 : -1];
typedef char SET_EM_DATA_chk_pos[(int)&((SET_EM_DATA_x0019BA40 *)0)->pos_x0019BA40 == 0x10 ? 1 : -1];
typedef char SET_EM_DATA_chk_flags[(int)&((SET_EM_DATA_x0019BA40 *)0)->flags_x0019BA40 == 0x24 ? 1 : -1];
typedef char cEmSlot_chk_size[sizeof(cEmSlot_x0019BA40) == 0x14 ? 1 : -1];
typedef char cEmManage_chk_top[((int)&((cEmManage_x0019BA40 *)0)->list.top_x0019BA40) == 0x500 ? 1 : -1];
typedef char cEmManage_chk_vec[((int)&((cEmManage_x0019BA40 *)0)->unk520_x0019BA40) == 0x520 ? 1 : -1];
typedef char cEmManage_chk_wait[((int)&((cEmManage_x0019BA40 *)0)->bigHitEffWait_x0019BA40) == 0x538 ? 1 : -1];
typedef char cEmManage_chk_rate[((int)&((cEmManage_x0019BA40 *)0)->speedRate_x0019BA40) == 0x548 ? 1 : -1];
typedef char cEmManage_chk_turn[((int)&((cEmManage_x0019BA40 *)0)->turnBehind_x0019BA40) == 0x550 ? 1 : -1];
typedef char cEmManage_chk_no[((int)&((cEmManage_x0019BA40 *)0)->nextNo_x0019BA40) == 0x55C ? 1 : -1];
typedef char cEmManage_chk_special[((int)&((cEmManage_x0019BA40 *)0)->specialEm_x0019BA40) == 0x574 ? 1 : -1];
typedef char cEmManage_chk_flags[((int)&((cEmManage_x0019BA40 *)0)->unk5A0_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cEmManage_chk_5ac[((int)&((cEmManage_x0019BA40 *)0)->unk5AC_x0019BA40) == 0x5AC ? 1 : -1];
typedef char cEmManage_chk_5b5[((int)&((cEmManage_x0019BA40 *)0)->unk5B5_x0019BA40) == 0x5B5 ? 1 : -1];
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) __asm__("func_0019BA40");
/* cCoreSave_setGameLevel1_1F9AD0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/001b5160.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) { cCoreSave_setGameLevel_x0019BA40(self, 1); }
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
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019BFC8");
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int new_var;
  s32 new_var2;
  int new_var4;
  s32 *new_var3;
  new_var3 = &arg3;
  new_var4 = arg1 * 0x44;
  *((s32 *) (((u8 *) ((arg2 * 4) + (arg0 + new_var4))) + 0x1BF4)) = *new_var3;
  new_var2 = arg3;
  new_var = arg0 + (new_var2 * 0x74);
  *((s32 *) (((u8 *) new_var) + 0x12CC)) = arg1;
}
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C008");
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  int new_var2;
  *((s32 *) (((u8 *) (arg0 + (arg2 * (new_var2 = 0x44)))) + 0x1BF0)) = arg1;
  *((s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + (new_var = 0x12D0))) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C040);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C0D8);
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C128");
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  *((s32 *) (((u8 *) (new_var = arg0 + (arg1 * 0x44))) + 0x1BE0)) = arg2;
}
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1) __asm__("func_0019C140");
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1)
{
  int new_var;
  new_var = arg0 + (arg1 * 0x44);
  return *((s32 *) (((u8 *) new_var) + 0x1BE0));
}
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C158");
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4);
  *new_var = arg2;
}
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1) __asm__("func_0019C170");
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4;
  return *((s32 *) new_var);
}
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1) __asm__("func_0019C188");
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BEC;
  return (*((s32 *) new_var)) != 0;
}
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
extern long long func_0031DE10_x0019C350(long long, long long) __asm__("__muldi3");
extern long long func_003B7FE0_x0019C350(long long, long long) __asm__("func_0011F758");
void func_0019C350_x0019C350(char *a0, char *a1) __asm__("func_0019C350");
/* func_0035C548: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003264c8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C350_x0019C350(char *a0, char *a1) {
    long long r, r2;
    if (*(int *)(a0 + 0xC) == 0) {
        r = func_0031DE10_x0019C350(*(long long *)(a0 + 0x130), *(long long *)(a1));
        r2 = func_003B7FE0_x0019C350(r, *(long long *)(a1 + 8));
        *(long long *)(a0 + 0x128) += r2;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C3A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C8D0);
void func_0019C920(s32 arg0, s32 arg1) {
    D_00426B3C = arg0;
    D_00426B38 = arg1;
}
extern char D_00459990_x0019C938[] __asm__("D_004677A0");
extern int D_003EE320_x0019C938 __asm__("D_00426B3C");
extern int D_003EE31C_x0019C938 __asm__("D_00426B38");
extern int D_003EE328_x0019C938 __asm__("D_00426B44");
extern int D_003EE32C_x0019C938 __asm__("D_00426B48");
extern void func_003A52F0_x0019C938(int a0, int a1, int a2) __asm__("memset");
extern void func_003A57C4_x0019C938(int a0, char *a1) __asm__("func_00127A88");
extern int strlen_x0019C938(const char *s) __asm__("func_00127BA0");
struct S35CB20_x0019C938 { char b[0x112]; };
void func_0019C938_x0019C938(void) __asm__("func_0019C938");
/* func_0035CB20: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035cb20.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C938_x0019C938(void) {
    struct S35CB20_x0019C938 buf = *(struct S35CB20_x0019C938 *)D_00459990_x0019C938;
    if (D_003EE320_x0019C938 != 0) {
        func_003A52F0_x0019C938(D_003EE320_x0019C938, 0, D_003EE31C_x0019C938);
        D_003EE328_x0019C938 = D_003EE320_x0019C938;
        func_003A57C4_x0019C938(D_003EE320_x0019C938, buf.b);
        D_003EE328_x0019C938 = D_003EE328_x0019C938 + strlen_x0019C938(buf.b);
        D_003EE32C_x0019C938 = D_003EE328_x0019C938;
    }
}
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
extern volatile int D_00766C9C_x0019D500 __asm__("D_00492A64");
extern volatile int *D_00766C88_x0019D500 __asm__("D_00492A50");
extern int D_00766C90_x0019D500 __asm__("D_00492A58");
extern int *Obj35D0_GetStringPtr_D00459BF0_x0019D500(void) __asm__("func_0019D4E0");
extern void initLibWork_x0019D500(int a0, int a1) __asm__("func_0019D720");
extern void Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(int *a0, int a1, int a2) __asm__("func_0019D6E0");
void func_0019D500_x0019D500(int a0, int a1) __asm__("func_0019D500");
/* func_0035D538: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019D500_x0019D500(int a0, int a1) {
    int t = D_00766C9C_x0019D500;
    if (t <= 0) {
        D_00766C9C_x0019D500 = t + 1;
        D_00766C88_x0019D500 = Obj35D0_GetStringPtr_D00459BF0_x0019D500();
        initLibWork_x0019D500(a0, a1);
        Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(&D_00766C90_x0019D500, a0, a1);
    }
}
void func_0019D590(void) {
    s32 temp_v0;

    temp_v0 = D_00492A64 - 1;
    D_00492A64 = temp_v0;
    if (temp_v0 <= 0) {
        func_0019D6D0(&D_00492A58);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D5D8);
s32 func_0019D6F0_x0019D6A0() __asm__("func_0019D6F0");
extern s32 D_00492A58_x0019D6A0 __asm__("D_00492A58");
void func_0019D6A0_x0019D6A0(void) __asm__("func_0019D6A0");
void func_0019D6A0_x0019D6A0(void)
{
  u8 *new_var2;
  s32 *new_var;
  func_0019D6F0_x0019D6A0();
  new_var2 = (u8 *) (&D_00492A58_x0019D6A0);
  new_var = &D_00492A58_x0019D6A0;
  *((s32 *) (new_var2 + 4)) = (s32) ((*((s32 *) (((u8 *) new_var) + 4))) - 1);
}
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
s32 func_0019D6F0_x0019D720(s32) __asm__("func_0019D6F0");
void func_0019D720_x0019D720(s32 arg0, s32 arg1) __asm__("func_0019D720");
void func_0019D720_x0019D720(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg0 > 0)
  {
    var_s1 = arg1;
    var_s0 = arg0;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0x10;
      var_s0 -= 1;
      func_0019D6F0_x0019D720(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
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
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) __asm__("func_0019DA20");
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 var_v0;
    u8 *var_a3;
    u8 *var_v1;

    var_v1 = arg0 + 0x180;
    var_a3 = NULL;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
    var_a2 = 0;
    goto loop_4;
block_2:
    if (var_a2 >= 0x1A) {
        goto block_8;
    }
    var_v1 = arg0 + (var_a2 << 6) + 0x180;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
loop_4:
    if (var_v0 == arg1) {
        goto block_6;
    }
    var_a2 += 1;
    goto block_2;
block_6:
    var_a3 = var_v1;
block_8:
    return var_a3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DA68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DAD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DB48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DBD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DC28);
s32 func_0019D780_x0019DCF8() __asm__("func_0019D780");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1) __asm__("func_0019DCF8");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1)
{
  s32 *temp_s0;
  s32 var_v0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DCF8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *temp_s0;
    return var_v0;
  }
}
s32 func_0019D780_x0019DD40() __asm__("func_0019D780");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1) __asm__("func_0019DD40");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD40();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 4)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DD88() __asm__("func_0019D780");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1) __asm__("func_0019DD88");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD88();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((s16 *) (((u8 *) temp_s0) + 8)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DDD0() __asm__("func_0019D780");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1) __asm__("func_0019DDD0");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DDD0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE78);
s32 func_0019D780_x0019DF00() __asm__("func_0019D780");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1) __asm__("func_0019DF00");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF00();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*temp_s0);
    return var_v0;
  }
}
s32 func_0019D780_x0019DF48() __asm__("func_0019D780");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1) __asm__("func_0019DF48");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF48();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 1)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DF90() __asm__("func_0019D780");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1) __asm__("func_0019DF90");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1)
{
  s32 *new_var;
  s32 var_v0;
  u8 *temp_s0;
  new_var = &(*((s32 *) (((u8 *) arg0) + 4)));
  temp_s0 = (*new_var) + 0xB0;
  var_v0 = func_0019D780_x0019DF90();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 2)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DFD8() __asm__("func_0019D780");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1) __asm__("func_0019DFD8");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DFD8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 3)));
    return var_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E020);
s32 func_0019D780_x0019E088() __asm__("func_0019D780");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1) __asm__("func_0019E088");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E088();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 8));
    return var_v0;
  }
}
s32 func_0019D780_x0019E0D0() __asm__("func_0019D780");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1) __asm__("func_0019E0D0");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E0D0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
s32 func_0019D780_x0019E118() __asm__("func_0019D780");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1) __asm__("func_0019E118");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E118();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    if (1)
    {
      *arg1 = *((s32 *) (((u8 *) temp_s0) + 0x10));
      return var_v0;
    }
  }
}
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
s32 *func_0019EBC0_x0019EB68() __asm__("func_0019EBC0");
s32 func_0019EC10_x0019EB68(s32 *) __asm__("func_0019EC10");
extern s32 D_00426B50_x0019EB68 __asm__("D_00426B50");
s32 *func_0019EB68_x0019EB68(void) __asm__("func_0019EB68");
s32 *func_0019EB68_x0019EB68(void)
{
  s32 *new_var;
  s32 *temp_v0;
  temp_v0 = func_0019EBC0_x0019EB68();
  if (temp_v0 != ((void *) 0))
  {
    func_0019EC10_x0019EB68(temp_v0);
    D_00426B50_x0019EB68 += 1;
    *temp_v0 = 1;
  }
  if (temp_v0)
  {
    return temp_v0;
  }
  else
  {
    new_var = temp_v0;
    return new_var;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EBC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC10);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC50);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC78);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ECB8);
s32 func_0019ECE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019ECE8");
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *new_var;
  int new_var2;
  u8 *temp_v0;
  temp_v0 = arg0 + 8;
  new_var2 = 1;
  *((s32 *) (((u8 *) temp_v0) + 8)) = arg2;
 do { *((s32 *) (((u8 *) arg0) + 8)) = arg3; ; *((s32 *) (((u8 *) temp_v0) + 4)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = new_var2; } while (0);
}
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
