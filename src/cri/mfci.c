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
s32 func_0016A8F0_x0016A8F8(s8 *) __asm__("func_0016A8F0");
extern s8 D_004186F8_x0016A8F8 __asm__("D_004186F8");
void func_0016A8F8_x0016A8F8(void) __asm__("func_0016A8F8");
void func_0016A8F8_x0016A8F8(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_004186F8_x0016A8F8;
    var_s1 = 0x27;
    do {
        if (*var_s0 != 0) {
            func_0016A8F0_x0016A8F8(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x38;
    } while (var_s1 >= 0);
}
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
s32 memset_x0016A9E0() __asm__("memset");
void func_0016A9E0_x0016A9E0(s32 arg0) __asm__("func_0016A9E0");
void func_0016A9E0_x0016A9E0(s32 arg0) {
    memset_x0016A9E0(arg0, 0, 0x38);
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AA00);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiOpen);
s32 func_0016A9E0_x0016AB10(s8 *) __asm__("func_0016A9E0");
s32 func_0016ADD8_x0016AB10() __asm__("func_0016ADD8");
void func_0016AB10_x0016AB10(s8 *arg0) __asm__("func_0016AB10");
void func_0016AB10_x0016AB10(s8 *arg0) {
    if (arg0 == NULL) {
        goto block_3;
    }
    func_0016ADD8_x0016AB10();
    if (*arg0 != 1) {
        goto block_3;
    }
    *arg0 = 0;
    func_0016A9E0_x0016AB10(arg0);
block_3:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AB58);
s32 func_0016A7B0_x0016AC18() __asm__("func_0016A7B0");
extern s32 D_00464068_x0016AC18 __asm__("D_00464068");
s32 func_0016AC18_x0016AC18(u8 *arg0) __asm__("func_0016AC18");
s32 func_0016AC18_x0016AC18(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AC18(arg0, &D_00464068_x0016AC18);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x10);
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiReqRd);
s32 func_0016A768_x0016ADD8() __asm__("func_0016A768");
s32 func_0016A780_x0016ADD8() __asm__("func_0016A780");
s32 func_0016A7B0_x0016ADD8() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016ADD8 __asm__("D_004640F0");
void func_0016ADD8_x0016ADD8(u8 *arg0) __asm__("func_0016ADD8");
void func_0016ADD8_x0016ADD8(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016ADD8(arg0, &D_004640F0_x0016ADD8);
        return;
    }
    func_0016A768_x0016ADD8();
    *(s8 *)((u8 *)arg0 + 1) = 0;
    func_0016A780_x0016ADD8();
}
s32 func_0016A7B0_x0016AE28() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016AE28 __asm__("D_004640F0");
s8 func_0016AE28_x0016AE28(u8 *arg0) __asm__("func_0016AE28");
s8 func_0016AE28_x0016AE28(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AE28(arg0, &D_004640F0_x0016AE28);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
s32 func_0016A7B0_x0016AE60() __asm__("func_0016A7B0");
extern s32 D_00464108_x0016AE60 __asm__("D_00464108");
s32 func_0016AE60_x0016AE60(u8 *arg0) __asm__("func_0016AE60");
s32 func_0016AE60_x0016AE60(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AE60(arg0, &D_00464108_x0016AE60);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 4);
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AE98);
s32 func_0016A7B0_x0016AF18() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016AF18 __asm__("D_004640F0");
s32 func_0016AF18_x0016AF18(u8 *arg0) __asm__("func_0016AF18");
s32 func_0016AF18_x0016AF18(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AF18(arg0, &D_004640F0_x0016AF18);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
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
extern s32 D_0041911C_x0016B048 __asm__("D_0041911C");
extern s32 D_00419120_x0016B048 __asm__("D_00419120");
void func_0016B048_x0016B048(s32 arg0, s32 arg1) __asm__("func_0016B048");
void func_0016B048_x0016B048(s32 arg0, s32 arg1) {
    D_0041911C_x0016B048 = arg0;
    D_00419120_x0016B048 = arg1;
}
extern s32 (*D_0041911C_x0016B060)(s32, s32) __asm__("D_0041911C");
extern s32 D_00419120_x0016B060 __asm__("D_00419120");
void func_0016B060_x0016B060(s32 arg0) __asm__("func_0016B060");
void func_0016B060_x0016B060(s32 arg0) {
    if (D_0041911C_x0016B060 != NULL) {
        D_0041911C_x0016B060(D_00419120_x0016B060, arg0);
    }
}
void func_0016B090(s32 arg0) {
    func_0016AFD8();
    func_0016B0C0(arg0);
    func_0016AFF0();
}
s32 memcmp_x0016B0C0(s32 *, s32 *, s32) __asm__("memcmp");
extern s32 D_004190E8_x0016B0C0 __asm__("D_004190E8");
extern s32 D_00419118_x0016B0C0 __asm__("D_00419118");
void func_0016B0C0_x0016B0C0(void) __asm__("func_0016B0C0");
void func_0016B0C0_x0016B0C0(void)
{
  s32 *new_var;
  int new_var2;
 new_var2 = 0; do { new_var = &D_004190E8_x0016B0C0; } while (new_var2);
  memcmp_x0016B0C0(new_var, &D_004190E8_x0016B0C0, 0x168);
  D_00419118_x0016B0C0 += 1;
}
void func_0016B100(s32 arg0) {
    func_0016AFD8();
    func_0016B130(arg0);
    func_0016AFF0();
}
extern s32 D_00419118_x0016B130 __asm__("D_00419118");
void func_0016B130_x0016B130(void) __asm__("func_0016B130");
void func_0016B130_x0016B130(void) {
    D_00419118_x0016B130 -= 1;
}
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
s32 memset_x0016B2C0() __asm__("memset");
void func_0016B2C0_x0016B2C0(s32 arg0) __asm__("func_0016B2C0");
void func_0016B2C0_x0016B2C0(s32 arg0) {
    memset_x0016B2C0(arg0, 0, 0x2C);
}
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
extern s32 (*D_00411178_x0016BA20)() __asm__("D_00411178");
void func_0016BA20_x0016BA20(void) __asm__("func_0016BA20");
void func_0016BA20_x0016BA20(void) {
    if (D_00411178_x0016BA20 != NULL) {
        D_00411178_x0016BA20();
    }
}
s32 ADXERR_CallErrFunc1_x0016BA48(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_0016B720_x0016BA48(s32) __asm__("func_0016B720");
extern s32 D_00464768_x0016BA48 __asm__("D_00464768");
extern s32 D_00464798_x0016BA48 __asm__("D_00464798");
void func_0016BA48_x0016BA48(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016BA48");
void func_0016BA48_x0016BA48(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  u8 *temp_s0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0016BA48(&D_00464768_x0016BA48);
    return;
  }
  temp_s0 = *((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 4)))) + 4));
  temp_a0 = *((s32 *) (((u8 *) temp_s0) + 0xE8));
  if (((*((s8 *) (((u8 *) arg0) + 3))) < 2) || (temp_a0 == 0))
  {
    ADXERR_CallErrFunc1_x0016BA48(&D_00464798_x0016BA48);
    return;
  }
  func_0016B720_x0016BA48(temp_a0);
 do { *((s32 *) (((u8 *) temp_s0) + 0xF0)) = arg2; *((s32 *) (((u8 *) temp_s0) + 0xEC)) = arg1; } while (0);
}
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
s32 func_0016B350_x0016BB78(s32, s16) __asm__("func_0016B350");
void func_0016BB78_x0016BB78(u8 *arg0, s16 arg1) __asm__("func_0016BB78");
void func_0016BB78_x0016BB78(u8 *arg0, s16 arg1) {
    func_0016B350_x0016BB78(*(s32 *)((u8 *)arg0 + 0xE8), arg1);
}
s32 func_0016B720_x0016BB98(s32) __asm__("func_0016B720");
void func_0016BB98_x0016BB98(u8 *arg0) __asm__("func_0016BB98");
void func_0016BB98_x0016BB98(u8 *arg0) {
    func_0016B720_x0016BB98(*(s32 *)((u8 *)arg0 + 0xE8));
}
s32 func_0016B820_x0016BBB0(s32) __asm__("func_0016B820");
void func_0016BBB0_x0016BBB0(u8 *arg0) __asm__("func_0016BBB0");
void func_0016BBB0_x0016BBB0(u8 *arg0) {
    func_0016B820_x0016BBB0(*(s32 *)((u8 *)arg0 + 0xE8));
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016BBC8);
