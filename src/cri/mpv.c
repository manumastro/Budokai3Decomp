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
typedef unsigned int size_t_x001708E8;
typedef signed int Sint32_x001708E8;
typedef char Char8_x001708E8;
extern void SVM_SetCbErr_x001708E8(void (*callback)(void*, Char8_x001708E8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x001708E8 SVM_SetCbSvr_x001708E8(Sint32_x001708E8, Sint32_x001708E8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001708E8(Sint32_x001708E8, Sint32_x001708E8, Sint32_x001708E8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x001708E8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x001708E8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void* memset_x001708E8(void* s, int c, size_t_x001708E8 n) __asm__("memset");
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback_x001708E8;
extern Sint32_x001708E8 svm_exec_cnt_x001708E8[8] __asm__("D_00423300");
extern Sint32_x001708E8 svm_svr_exec_flag_x001708E8[8] __asm__("D_00423320");
extern Sint32_x001708E8 (*svm_test_and_set_callback_x001708E8)() __asm__("D_00481478");
extern SVMLockCallback_x001708E8 svm_unlock_callback_x001708E8 __asm__("D_00481468");
extern SVMLockCallback_x001708E8 svm_lock_callback_x001708E8 __asm__("D_00481460");
Sint32_x001708E8 SVM_SetCbSvr_x001708E8(Sint32_x001708E8 index, Sint32_x001708E8 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbSvrId_x001708E8(Sint32_x001708E8 svtype, Sint32_x001708E8 id, Sint32_x001708E8 (*func)(void*), void* object) __asm__("SVM_SetCbSvrId");
void SVM_SetCbErr_x001708E8(void (*func)(void*, Char8_x001708E8*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x001708E8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x001708E8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void func_001708E8_x001708E8() __asm__("func_001708E8");
/* svm_reset_variable: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001708E8_x001708E8() {
    Sint32_x001708E8 i;
    Sint32_x001708E8* exec_cnt_ptr;
    memset_x001708E8(svm_svr_exec_flag_x001708E8, 0, sizeof(svm_svr_exec_flag_x001708E8));
    memset_x001708E8(&svm_lock_callback_x001708E8, 0, sizeof(SVMLockCallback_x001708E8));
    memset_x001708E8(&svm_unlock_callback_x001708E8, 0, sizeof(SVMLockCallback_x001708E8));
    exec_cnt_ptr = svm_exec_cnt_x001708E8;
    for (i = 0; i < 6; i++) {
        *exec_cnt_ptr++ = 0;
    }
    svm_test_and_set_callback_x001708E8 = 0;
}
extern volatile int svm_init_level_x00170968 __asm__("D_004232F4");
void svm_clear_x00170968(void) __asm__("func_001708E8");
void func_00170968_x00170968(void) __asm__("func_00170968");
/* SVM_Init: from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00170968_x00170968(void)
{
    if (svm_init_level_x00170968 == 0) {
        svm_clear_x00170968();
    }
    svm_init_level_x00170968++;
}
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
typedef signed int Sint32_x00170A68;
extern Sint32_x00170A68 (*svm_test_and_set_callback_x00170A68)() __asm__("D_00481478");
Sint32_x00170A68 func_00170A68_x00170A68(Sint32_x00170A68 (*callback)()) __asm__("func_00170A68");
/* SVM_SetCbTestAndSet: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00170A68 func_00170A68_x00170A68(Sint32_x00170A68 (*callback)()) {
    if (svm_test_and_set_callback_x00170A68 != 0) {
        return 0;
    }
    svm_test_and_set_callback_x00170A68 = callback;
    return 1;
}
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
extern s32 (*D_00424BD4_x00172AF8)() __asm__("D_00424BD4");
void func_00172AF8_x00172AF8(void) __asm__("func_00172AF8");
void func_00172AF8_x00172AF8(void) {
    if (D_00424BD4_x00172AF8 != NULL) {
        D_00424BD4_x00172AF8();
    }
}
extern s32 (*D_00424BD8_x00172B20)() __asm__("D_00424BD8");
void func_00172B20_x00172B20(void) __asm__("func_00172B20");
void func_00172B20_x00172B20(void) {
    if (D_00424BD8_x00172B20 != NULL) {
        D_00424BD8_x00172B20();
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172B48);
extern s32 (*D_00424BE0_x00172B78)() __asm__("D_00424BE0");
void func_00172B78_x00172B78(void) __asm__("func_00172B78");
void func_00172B78_x00172B78(void) {
    if (D_00424BE0_x00172B78 != NULL) {
        D_00424BE0_x00172B78();
    }
}
extern s32 (*D_00424BE8_x00172BA0)() __asm__("D_00424BE8");
void func_00172BA0_x00172BA0(void) __asm__("func_00172BA0");
void func_00172BA0_x00172BA0(void) {
    if (D_00424BE8_x00172BA0 != NULL) {
        D_00424BE8_x00172BA0();
    }
}
extern s32 (*D_00424BE4_x00172BC8)() __asm__("D_00424BE4");
void func_00172BC8_x00172BC8(void) __asm__("func_00172BC8");
void func_00172BC8_x00172BC8(void) {
    if (D_00424BE4_x00172BC8 != NULL) {
        D_00424BE4_x00172BC8();
    }
}
extern s32 (*D_00424BEC_x00172BF0)() __asm__("D_00424BEC");
void func_00172BF0_x00172BF0(void) __asm__("func_00172BF0");
void func_00172BF0_x00172BF0(void) {
    if (D_00424BEC_x00172BF0 != NULL) {
        D_00424BEC_x00172BF0();
    }
}
extern s32 (*D_00424BF0_x00172C18)() __asm__("D_00424BF0");
void func_00172C18_x00172C18(void) __asm__("func_00172C18");
void func_00172C18_x00172C18(void) {
    if (D_00424BF0_x00172C18 != NULL) {
        D_00424BF0_x00172C18();
    }
}
extern s32 (*D_00424BF4_x00172C40)() __asm__("D_00424BF4");
void func_00172C40_x00172C40(void) __asm__("func_00172C40");
void func_00172C40_x00172C40(void) {
    if (D_00424BF4_x00172C40 != NULL) {
        D_00424BF4_x00172C40();
    }
}
extern s32 (*D_00424BF8_x00172C68)() __asm__("D_00424BF8");
void func_00172C68_x00172C68(void) __asm__("func_00172C68");
void func_00172C68_x00172C68(void) {
    if (D_00424BF8_x00172C68 != NULL) {
        D_00424BF8_x00172C68();
    }
}
extern s32 (*D_00424BFC_x00172C90)() __asm__("D_00424BFC");
void func_00172C90_x00172C90(void) __asm__("func_00172C90");
void func_00172C90_x00172C90(void) {
    if (D_00424BFC_x00172C90 != NULL) {
        D_00424BFC_x00172C90();
    }
}
extern s32 (*D_00424C00_x00172CB8)() __asm__("D_00424C00");
void func_00172CB8_x00172CB8(void) __asm__("func_00172CB8");
void func_00172CB8_x00172CB8(void) {
    if (D_00424C00_x00172CB8 != NULL) {
        D_00424C00_x00172CB8();
    }
}
extern s32 (*D_00424C04_x00172CE0)() __asm__("D_00424C04");
void func_00172CE0_x00172CE0(void) __asm__("func_00172CE0");
void func_00172CE0_x00172CE0(void) {
    if (D_00424C04_x00172CE0 != NULL) {
        D_00424C04_x00172CE0();
    }
}
extern s32 (*D_00424C08_x00172D08)() __asm__("D_00424C08");
void func_00172D08_x00172D08(void) __asm__("func_00172D08");
void func_00172D08_x00172D08(void) {
    if (D_00424C08_x00172D08 != NULL) {
        D_00424C08_x00172D08();
    }
}
extern s32 (*D_00424C0C_x00172D30)() __asm__("D_00424C0C");
void func_00172D30_x00172D30(void) __asm__("func_00172D30");
void func_00172D30_x00172D30(void) {
    if (D_00424C0C_x00172D30 != NULL) {
        D_00424C0C_x00172D30();
    }
}
extern s32 (*D_00424C10_x00172D58)() __asm__("D_00424C10");
void func_00172D58_x00172D58(void) __asm__("func_00172D58");
void func_00172D58_x00172D58(void) {
    if (D_00424C10_x00172D58 != NULL) {
        D_00424C10_x00172D58();
    }
}
extern s32 (*D_00424C14_x00172D80)() __asm__("D_00424C14");
void func_00172D80_x00172D80(void) __asm__("func_00172D80");
void func_00172D80_x00172D80(void) {
    if (D_00424C14_x00172D80 != NULL) {
        D_00424C14_x00172D80();
    }
}
extern s32 (*D_00424C18_x00172DA8)() __asm__("D_00424C18");
void func_00172DA8_x00172DA8(void) __asm__("func_00172DA8");
void func_00172DA8_x00172DA8(void) {
    if (D_00424C18_x00172DA8 != NULL) {
        D_00424C18_x00172DA8();
    }
}
void func_00172DD0(void) {
    func_00172DF0(&D_00424C20);
}
void func_00172DF0_x00172DF0(u8 *arg0) __asm__("func_00172DF0");
void func_00172DF0_x00172DF0(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
typedef struct E_x00172E08 { void *fn; void *arg; } E_x00172E08;
typedef struct H_x00172E08 { int f0; E_x00172E08 e; } H_x00172E08;
extern int Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00172E08(H_x00172E08 *h) __asm__("func_00178B80");
extern void M2VERR_SetCode_x00172E08(int a, int b) __asm__("func_00172EF8");
void func_00172E08_x00172E08(H_x00172E08 *h, void *fn, void *arg) __asm__("func_00172E08");
/* M2V_SetErrFunc: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0036d7f8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00172E08_x00172E08(H_x00172E08 *h, void *fn, void *arg)
{
    E_x00172E08 *e;
    int ok;
    ok = Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00172E08(h);
    e = &h->e;
    if (ok != 0) {
        M2VERR_SetCode_x00172E08(0, 0xFF030203);
        return;
    }
    e->fn = fn;
    e->arg = arg;
}
typedef struct ErrInf_x00172E78 { int w[5]; } ErrInf_x00172E78;
typedef struct H_x00172E78 { int f0; ErrInf_x00172E78 err; } H_x00172E78;
extern int Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00172E78(H_x00172E78 *h) __asm__("func_00178B80");
extern void M2VERR_SetCode_x00172E78(int a, int b) __asm__("func_00172EF8");
void func_00172E78_x00172E78(H_x00172E78 *h, ErrInf_x00172E78 *out) __asm__("func_00172E78");
/* M2V_GetErrInf: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0036d868.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00172E78_x00172E78(H_x00172E78 *h, ErrInf_x00172E78 *out)
{
    if (Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00172E78(h) != 0) {
        M2VERR_SetCode_x00172E78(0, 0xFF030204);
        return;
    }
    *out = h->err;
}
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
s32 func_00172EF8_x00173140(s32, s32) __asm__("func_00172EF8");
s32 func_00178B80_x00173140() __asm__("func_00178B80");
void func_00173140_x00173140(s32 arg0, s32 *arg1) __asm__("func_00173140");
void func_00173140_x00173140(s32 arg0, s32 *arg1)
{
  int new_var;
  new_var = arg0 + 0x158;
  if (func_00178B80_x00173140() != 0)
  {
    func_00172EF8_x00173140(0, 0xFF03020D);
    return;
  }
  *arg1 = *((s32 *) (((u8 *) new_var) + 0x2F8));
}
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
void func_001732A8_x001732A8(void) __asm__("func_001732A8");
void func_001732A8_x001732A8(void)
{
  s32 *new_var;
  s32 var_v0;
  var_v0 = 0x3F;
  do
  {
    var_v0 -= 0x20;
  }
  while ((*(new_var = &var_v0)) >= 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_001732D8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00173350);
void func_00173378_x00173378(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00173378");
void func_00173378_x00173378(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
 do { new_var = (u8 *) (arg0 + 0x148); *((s32 *) (new_var + 4)) = arg2; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x148)) = arg1;
}
void func_00173388_x00173388(u8 *arg0, s32 *arg1, s32 *arg2) __asm__("func_00173388");
void func_00173388_x00173388(u8 *arg0, s32 *arg1, s32 *arg2)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x148);
  if (arg1 != ((void *) 0))
  {
    *arg1 = *((s32 *) (((u8 *) arg0) + 0x148));
  }
  if (arg2 != ((void *) 0))
  {
    *arg2 = *((s32 *) (new_var + 8));
  }
}
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
typedef struct SndObj_x001739B0 {
    char unk000[0x38];
    int state;
    char unk03C[0x48 - 0x3C];
    int f48;
    char unk04C[0x118 - 0x4C];
    int f118;
    char unk11C[0x134 - 0x11C];
    int f134;
} SndObj_x001739B0;
void func_001739B0_x001739B0(SndObj_x001739B0 *o) __asm__("func_001739B0");
/* func_0036E2B8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0036e2b8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001739B0_x001739B0(SndObj_x001739B0 *o)
{
    if (o->f48 == 1 || o->f118 == 1 || o->f118 == 2) {
        o->state = 1;
    } else if (o->f134 == 1) {
        o->state = 3;
    } else {
        o->state = 2;
    }
}
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
extern s32 D_00481490_x00178738 __asm__("D_00481490");
void func_00178738_x00178738(void) __asm__("func_00178738");
void func_00178738_x00178738(void) {
  s32 new_var;
  s32 *var_v1;
  s32 var_v0;
  u8 *new_var2;
  s32 new_var3;
  new_var2 = (u8 *) (&D_00481490_x00178738);
  new_var3 = *((s32 *) (new_var2 + 0x40));
  var_v1 = *((s32 **) (new_var2 + 0x44));
  if ((new_var = *((s32 *) (new_var2 + 0x40))) > 0)
  {
    var_v0 = new_var3;
    do
    {
      var_v0 -= 1;
      *var_v1 = 1;
      var_v1 += 440;
    }
    while (var_v0 != 0);
  }
}
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
extern int Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00178A78(char *h) __asm__("func_00178B80");
extern void M2VERR_SetCode_x00178A78(int a, int b) __asm__("func_00172EF8");
extern void func_0036D630_x00178A78(int n, void *fn) __asm__("func_00178B28");
extern void func_0036CD70_x00178A78(void) __asm__("func_00172BA0");
extern void *D_0076A590_x00178A78[] __asm__("D_00481490");
void func_00178A78_x00178A78(char *h, int n, void *fn) __asm__("func_00178A78");
/* M2V_SetCond: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0036d580.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00178A78_x00178A78(char *h, int n, void *fn)
{
    void **p;
    if (n == 8) {
        if (fn == 0) fn = func_0036CD70_x00178A78;
    }
    if (h == 0) {
        func_0036D630_x00178A78(n, fn);
        p = D_0076A590_x00178A78;
    } else {
        if (Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_x00178A78(h) != 0) {
            M2VERR_SetCode_x00178A78(0, 0xFF030202);
            return;
        }
        p = (void **)(h + 0x18);
    }
    p[n] = fn;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178B28);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178B80);
s32 memcpy_x00178BA8() __asm__("memcpy");
void func_00178BA8_x00178BA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00178BA8");
void func_00178BA8_x00178BA8(s32 arg0, s32 arg1, s32 arg2) {
    memcpy_x00178BA8(arg0, arg1, arg2);
}
s32 memcpy_x00178BC0() __asm__("memcpy");
void func_00178BC0_x00178BC0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00178BC0");
void func_00178BC0_x00178BC0(s32 arg0, s32 arg1, s32 arg2) {
    memcpy_x00178BC0(arg0, arg1, arg2);
}
s32 memcpy_x00178BD8() __asm__("memcpy");
void func_00178BD8_x00178BD8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00178BD8");
void func_00178BD8_x00178BD8(s32 arg0, s32 arg1, s32 arg2) {
    memcpy_x00178BD8(arg0, arg1, arg2);
}
s32 memcpy_x00178BF0() __asm__("memcpy");
void func_00178BF0_x00178BF0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00178BF0");
void func_00178BF0_x00178BF0(s32 arg0, s32 arg1, s32 arg2) {
    memcpy_x00178BF0(arg0, arg1, arg2);
}
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
void func_00178C68_x00178C68(char *d, signed char *s, unsigned int n) __asm__("func_00178C68");
/* func_003669B0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/001bf2e8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00178C68_x00178C68(char *d, signed char *s, unsigned int n) {
    unsigned int r = n & 0x1F;
    if (r != 0) {
        do {
            *d++ = *(unsigned char *)s++;
        } while (--r != 0);
    }
    n >>= 5;
    if (n == 0) {
        return;
    }
    do {
        int t0, t1, t2, t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[0] = t0; d[1] = t1; d[2] = t2; d[3] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[4] = t0; d[5] = t1; d[6] = t2; d[7] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[8] = t0; d[9] = t1; d[10] = t2; d[11] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[12] = t0; d[13] = t1; d[14] = t2; d[15] = t3;
        d += 0x10;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[0] = t0; d[1] = t1; d[2] = t2; d[3] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[4] = t0; d[5] = t1; d[6] = t2; d[7] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[8] = t0; d[9] = t1; d[10] = t2; d[11] = t3;
        t0 = *s++; t1 = *s++; t2 = *s++; t3 = *s++;
        d[12] = t0; d[13] = t1; d[14] = t2; d[15] = t3;
        d += 0x10;
    } while (--n != 0);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178E38);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00178F48);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00179018);
void func_001790E0(void) {

}
void func_001790E8(void) {

}
s32 func_0017B048_x001790F0(s32, s32) __asm__("func_0017B048");
s32 func_0017B218_x001790F0() __asm__("func_0017B218");
long long func_001790F0_x001790F0(u8 *arg0, s32 arg1) __asm__("func_001790F0");
long long func_001790F0_x001790F0(u8 *arg0, s32 arg1) {
  if (func_0017B218_x001790F0(arg0) != 0)
  {
    func_0017B048_x001790F0(0, 0xFF020302);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x10)) = arg1;
}
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
typedef unsigned char u8_x0017AC38;
typedef unsigned int u32_x0017AC38;
typedef struct MovieValues_x0017AC38 {
    u32_x0017AC38 value_14;
    u32_x0017AC38 value_18;
    u32_x0017AC38 value_1c;
} MovieValues_x0017AC38;
typedef struct MovieModule_x0017AC38 {
    u8_x0017AC38 pad[0x14];
    MovieValues_x0017AC38 values;
} MovieModule_x0017AC38;
extern int fn_12_6C78_x0017AC38(MovieModule_x0017AC38 *module) __asm__("func_0017B218");
extern int fn_12_6D5C_x0017AC38(int arg0, int arg1) __asm__("func_0017B048");
int func_0017AC38_x0017AC38(MovieModule_x0017AC38 *module, MovieValues_x0017AC38 *result) __asm__("func_0017AC38");
/* fn_12_6A18: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_6A18.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0017AC38_x0017AC38(MovieModule_x0017AC38 *module, MovieValues_x0017AC38 *result) {
    if (fn_12_6C78_x0017AC38(module)) {
        return fn_12_6D5C_x0017AC38(0, 0xff020201);
    }
    *result = module->values;
    return 0;
}
typedef unsigned char u8_x0017ACA8;
typedef unsigned int u32_x0017ACA8;
typedef struct MovieValues_x0017ACA8 {
    u32_x0017ACA8 value_00;
    u32_x0017ACA8 value_04;
    u32_x0017ACA8 value_08;
    u32_x0017ACA8 value_0c;
    u32_x0017ACA8 value_10;
    u32_x0017ACA8 value_14;
    u32_x0017ACA8 value_18;
    u32_x0017ACA8 value_1c;
} MovieValues_x0017ACA8;
typedef struct MovieModule_x0017ACA8 {
    u8_x0017ACA8 _pad00[0x40];
    MovieValues_x0017ACA8 values[1];
} MovieModule_x0017ACA8;
extern int fn_12_6C78_x0017ACA8(MovieModule_x0017ACA8 *module) __asm__("func_0017B218");
extern int fn_12_6D5C_x0017ACA8(int arg0, int arg1) __asm__("func_0017B048");
int func_0017ACA8_x0017ACA8(MovieModule_x0017ACA8 *module, MovieValues_x0017ACA8 *result, int index) __asm__("func_0017ACA8");
/* fn_12_696C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_696C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0017ACA8_x0017ACA8(MovieModule_x0017ACA8 *module, MovieValues_x0017ACA8 *result, int index) {
    if (fn_12_6C78_x0017ACA8(module)) {
        return fn_12_6D5C_x0017ACA8(0, 0xff020202);
    }
    *result = module->values[index];
    return 0;
}
typedef unsigned char u8_x0017AD58;
typedef unsigned int u32_x0017AD58;
typedef struct MovieValues_x0017AD58 {
    u32_x0017AD58 value_00;
    u32_x0017AD58 value_04;
    u32_x0017AD58 value_08;
    u32_x0017AD58 value_0c;
    u32_x0017AD58 value_10;
    u32_x0017AD58 value_14;
    u32_x0017AD58 value_18;
    u32_x0017AD58 value_1c;
} MovieValues_x0017AD58;
typedef struct MovieModule_x0017AD58 {
    u8_x0017AD58 _pad00[0x20];
    MovieValues_x0017AD58 values;
} MovieModule_x0017AD58;
extern int fn_12_6C78_x0017AD58(MovieModule_x0017AD58 *module) __asm__("func_0017B218");
extern int fn_12_6D5C_x0017AD58(int arg0, int arg1) __asm__("func_0017B048");
int func_0017AD58_x0017AD58(MovieModule_x0017AD58 *module, MovieValues_x0017AD58 *result) __asm__("func_0017AD58");
/* fn_12_68D4: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_68D4.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0017AD58_x0017AD58(MovieModule_x0017AD58 *module, MovieValues_x0017AD58 *result) {
    if (fn_12_6C78_x0017AD58(module)) {
        return fn_12_6D5C_x0017AD58(0, 0xff020202);
    }
    *result = module->values;
    return 0;
}
typedef unsigned char u8_x0017ADF0;
typedef unsigned int u32_x0017ADF0;
typedef struct MovieValues_x0017ADF0 {
    u32_x0017ADF0 value_00;
    u32_x0017ADF0 value_04;
    u32_x0017ADF0 value_08;
    u32_x0017ADF0 value_0c;
    u32_x0017ADF0 value_10;
    u32_x0017ADF0 value_14;
    u32_x0017ADF0 value_18;
    u32_x0017ADF0 value_1c;
} MovieValues_x0017ADF0;
typedef struct MovieModule_x0017ADF0 {
    u8_x0017ADF0 _pad00[0xa0];
    MovieValues_x0017ADF0 values;
} MovieModule_x0017ADF0;
extern int fn_12_6C78_x0017ADF0(MovieModule_x0017ADF0 *) __asm__("func_0017B218");
extern int fn_12_6D5C_x0017ADF0(int, int) __asm__("func_0017B048");
int func_0017ADF0_x0017ADF0(MovieModule_x0017ADF0 *module, MovieValues_x0017ADF0 *result) __asm__("func_0017ADF0");
/* fn_12_683C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_683C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0017ADF0_x0017ADF0(MovieModule_x0017ADF0 *module, MovieValues_x0017ADF0 *result) {
    if (fn_12_6C78_x0017ADF0(module)) {
        return fn_12_6D5C_x0017ADF0(0, 0xff020203);
    }
    *result = module->values;
    return 0;
}
s32 *func_0017AE88(void) {
    return &D_00465328;
}
extern void func_00366D18_x0017AE98(void) __asm__("func_001790E0");
extern void func_00368AA0_x0017AE98(void) __asm__("func_0017AC28");
extern unsigned char D_0045A370_x0017AE98 __asm__("D_00465378");
extern char D_0045A320_x0017AE98[] __asm__("D_00465328");
extern char *volatile D_00766CD4_x0017AE98 __asm__("D_004814E0");
extern int func_00368D60_x0017AE98(int a, int b) __asm__("func_0017AF10");
int func_0017AE98_x0017AE98(int a, int b) __asm__("func_0017AE98");
/* sfd_InitPool: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033b5c8.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0017AE98_x0017AE98(int a, int b)
{
    int r;
    D_00766CD4_x0017AE98 = D_0045A320_x0017AE98;
    if (D_0045A370_x0017AE98 != 4) {
        for (;;) {
            ((void (*)(void))-1)();
        }
    }
    r = func_00368D60_x0017AE98(a, b);
    if (r != 0) {
        return r;
    }
    func_00366D18_x0017AE98();
    func_00368AA0_x0017AE98();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017AF10);
s32 func_001790E8_x0017AFA8() __asm__("func_001790E8");
s32 func_0017AC30_x0017AFA8() __asm__("func_0017AC30");
s32 func_0017B3D0_x0017AFA8(s32 *) __asm__("func_0017B3D0");
extern void *D_00424C38_x0017AFA8 __asm__("D_00424C38");
void func_0017AFA8_x0017AFA8(void) __asm__("func_0017AFA8");
void func_0017AFA8_x0017AFA8(void) {
  s32 *var_s0;
  void *new_var;
  s32 temp_v0;
  s32 var_s1;
  temp_v0 = *((s32 *) (((u8 *) D_00424C38_x0017AFA8) + 0xC));
  new_var = D_00424C38_x0017AFA8 + 0x10;
  if (temp_v0 > 0)
  {
    var_s0 = new_var;
    var_s1 = temp_v0;
    do
    {
      if ((*var_s0) != 1)
      {
        func_0017B3D0_x0017AFA8(var_s0);
      }
      var_s1 -= 1;
      var_s0 += 53;
    }
    while (var_s1 != 0);
  }
  func_001790E8_x0017AFA8();
  func_0017AC30_x0017AFA8();
}
void func_0017B020(void) {
    func_0017B038();
}
void func_0017B038_x0017B038(u8 *arg0) __asm__("func_0017B038");
void func_0017B038_x0017B038(u8 *arg0)
{
  s32 *new_var;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
 do { new_var = (s32 *) (((u8 *) arg0) + 4); } while (0);
  *new_var = 0;
}
s32 func_0017B048(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_0017B098(D_00424C38);
    } else {
        func_0017B098(arg0 + 4);
    }
    return arg1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B098);
s32 func_0017B048_x0017B0D0() __asm__("func_0017B048");
s32 func_0017B168_x0017B0D0() __asm__("func_0017B168");
s32 func_0017B218_x0017B0D0() __asm__("func_0017B218");
extern s32 D_00424C38_x0017B0D0 __asm__("D_00424C38");
s32 func_0017B0D0_x0017B0D0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0017B0D0");
s32 func_0017B0D0_x0017B0D0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        goto block_2;
    }
    func_0017B168_x0017B0D0(D_00424C38_x0017B0D0);
    goto block_6;
block_2:
    if (func_0017B218_x0017B0D0() == 0) {
        goto block_5;
    }
    return func_0017B048_x0017B0D0(0, 0xFF020101);
block_5:
    func_0017B168_x0017B0D0(arg0 + 4, arg1, arg2);
block_6:
    return 0;
}
void func_0017B168_x0017B168(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0017B168");
void func_0017B168_x0017B168(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  *((s32 *) (((u8 *) arg0) + 4)) = arg2;
 do { new_var = (u8 *) arg0; *((s32 *) (new_var + 0)) = arg1; } while (0);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B178);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B218);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B240);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B278);
s32 func_00179018_x0017B2D0() __asm__("func_00179018");
s32 func_0017B038_x0017B2D0() __asm__("func_0017B038");
s32 func_0017B368_x0017B2D0() __asm__("func_0017B368");
s32 func_0017B380_x0017B2D0() __asm__("func_0017B380");
s32 func_0017B3A8_x0017B2D0() __asm__("func_0017B3A8");
extern s32 func_001791F0_x0017B2D0 __asm__("func_001791F0");
u8 * func_0017B2D0_x0017B2D0(u8 *arg0) __asm__("func_0017B2D0");
u8 * func_0017B2D0_x0017B2D0(u8 *arg0) {
    func_00179018_x0017B2D0(arg0, 0, 0x35);
    *(s32 *)((u8 *)arg0 + 0) = 2;
    func_0017B038_x0017B2D0(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x10) = 2;
    func_0017B368_x0017B2D0(arg0 + 0x14);
    func_0017B380_x0017B2D0(arg0 + 0x20);
    func_0017B380_x0017B2D0(arg0 + 0x40);
    func_0017B380_x0017B2D0(arg0 + 0x60);
    func_0017B380_x0017B2D0(arg0 + 0x80);
    func_0017B3A8_x0017B2D0(arg0 + 0xA0);
    *(s32 *)((u8 *)arg0 + 0xC0) = 0;
    *(s32 *)((u8 *)arg0 + 0xC8) = 0;
    *(s32 *)((u8 *)arg0 + 0xCC) = 0;
    *(s32 **)((u8 *)arg0 + 0xC4) = &func_001791F0_x0017B2D0;
    *(s32 *)((u8 *)arg0 + 0xD0) = 0;
    return arg0;
}
void func_0017B368_x0017B368(u8 *arg0) __asm__("func_0017B368");
void func_0017B368_x0017B368(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = -1;
  *((s32 *) (((u8 *) arg0) + 4)) = -1;
  *((s32 *) (((u8 *) arg0) + 8)) = -1;
}
void func_0017B380_x0017B380(u8 *arg0) __asm__("func_0017B380");
void func_0017B380_x0017B380(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x1C)) = -1;
  *((s32 *) (((u8 *) arg0) + 0)) = -1;
  *((s32 *) (((u8 *) arg0) + 4)) = -1;
  *((s32 *) (((u8 *) arg0) + 8)) = -1;
  *((s32 *) (((u8 *) arg0) + 0xC)) = -1;
  *((s32 *) (((u8 *) arg0) + 0x10)) = -1;
 do { *((s32 *) (((u8 *) arg0) + 0x14)) = -1; *((s32 *) (((u8 *) arg0) + 0x18)) = -1; } while (0);
}
void func_0017B3A8_x0017B3A8(u8 *arg0) __asm__("func_0017B3A8");
void func_0017B3A8_x0017B3A8(u8 *arg0)
{
  s32 *new_var;
  *((s32 *) (((u8 *) arg0) + 0x1C)) = -1;
  *((s32 *) (((u8 *) arg0) + 0)) = -1;
  new_var = (s32 *) (((u8 *) arg0) + 0x18);
  *((s32 *) (((u8 *) arg0) + 0xC)) = (*((s32 *) (((u8 *) arg0) + 8)) = (*((s32 *) (((u8 *) arg0) + 4)) = -1));
  *((s32 *) (((u8 *) arg0) + 0x10)) = -1;
 do { *((s32 *) (((u8 *) arg0) + 0x14)) = -1; *new_var = -1; } while (0);
}
s32 func_0017B048_x0017B3D0(s32, s32) __asm__("func_0017B048");
s32 func_0017B218_x0017B3D0() __asm__("func_0017B218");
volatile int func_0017B3D0_x0017B3D0(s32 *arg0) __asm__("func_0017B3D0");
volatile int func_0017B3D0_x0017B3D0(s32 *arg0)
{
  if (func_0017B218_x0017B3D0() != 0)
  {
    func_0017B048_x0017B3D0(0, 0xFF020103);
    return;
  }
  *arg0 = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B420);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B4B8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B5B8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B6C0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017B7D0);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017BC78);
void func_0017C1B8(void) {
    func_0017C1D8(&D_00424C88);
}
void func_0017C1D8_x0017C1D8(u8 *arg0) __asm__("func_0017C1D8");
void func_0017C1D8_x0017C1D8(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
s32 func_0017C2E0_x0017C1F0(s32, s32) __asm__("func_0017C2E0");
s32 func_0017EB90_x0017C1F0() __asm__("func_0017EB90");
void func_0017C1F0_x0017C1F0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0017C1F0");
void func_0017C1F0_x0017C1F0(u8 *arg0, s32 arg1, s32 arg2)
{
  int new_var;
  u8 *new_var2;
  new_var = 0;
  new_var = func_0017EB90_x0017C1F0() != new_var;
  new_var2 = arg0 + 0x250;
  if (new_var)
  {
    func_0017C2E0_x0017C1F0(0, 0xFF030203);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x250)) = arg1;
  *((s32 *) (((u8 *) new_var2) + 4)) = arg2;
}
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
s32 func_0017C2E0_x0017C4D8(s32, s32) __asm__("func_0017C2E0");
s32 func_0017E040_x0017C4D8(s32) __asm__("func_0017E040");
s32 func_0017E268_x0017C4D8(s32, s32, s32) __asm__("func_0017E268");
s32 func_0017EB90_x0017C4D8() __asm__("func_0017EB90");
void func_0017C4D8_x0017C4D8(s32 arg0, s32 arg1) __asm__("func_0017C4D8");
void func_0017C4D8_x0017C4D8(s32 arg0, s32 arg1)
{
  int new_var;
  s32 var_s1;
  s32 temp_v0;
  if (func_0017EB90_x0017C4D8() != 0)
  {
    func_0017C2E0_x0017C4D8(0, 0xFF03020A);
    return;
  }
  var_s1 = 0xFF030305;
 do { loop_4: temp_v0 = func_0017E040_x0017C4D8(arg1); if (temp_v0 != 0) { new_var = temp_v0 & 0xCC; if (new_var) { var_s1 = 0; } else if (func_0017E268_x0017C4D8(arg1, 1, 4) == 4) { goto loop_4; } } } while (0);
  func_0017C2E0_x0017C4D8(arg0, var_s1);
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C590);
s32 func_0017C2E0_x0017C698(s32, s32) __asm__("func_0017C2E0");
s32 func_0017EB90_x0017C698() __asm__("func_0017EB90");
short func_0017C698_x0017C698(u8 *arg0, s32 *arg1) __asm__("func_0017C698");
short func_0017C698_x0017C698(u8 *arg0, s32 *arg1)
{
  if (func_0017EB90_x0017C698() != 0)
  {
    func_0017C2E0_x0017C698(0, 0xFF03020D);
    return;
  }
  *arg1 = *((s32 *) (((u8 *) arg0) + 0x2A8));
}
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
void func_0017C880_x0017C880(u8 *arg0, s32 *arg1, s32 *arg2) __asm__("func_0017C880");
void func_0017C880_x0017C880(u8 *arg0, s32 *arg1, s32 *arg2)
{
  u8 *new_var;
  new_var = arg0 + 0x3E8;
  if (arg1 != ((void *) 0))
  {
    if (1)
    {
    }
    *arg1 = *((s32 *) (((u8 *) arg0) + 0x3E8));
  }
  if (arg2 != ((void *) 0))
  {
    *arg2 = *((s32 *) (((u8 *) new_var) + 8));
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017C8A8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CA98);
typedef unsigned char u8_x0017CB08;
typedef signed int s32_x0017CB08;
typedef unsigned int u32_x0017CB08;
typedef struct MovieObject_x0017CB08 MovieObject_x0017CB08;
typedef struct MovieArgs_x0017CB08 {
    u32_x0017CB08 field_0000;
    u32_x0017CB08 field_0004;
} MovieArgs_x0017CB08;
typedef struct MovieVTable_x0017CB08 {
    u8_x0017CB08 pad_0000[0x0c];
    void (*method_000c)(MovieObject_x0017CB08 *);
    u8_x0017CB08 pad_0010[0x14];
    s32_x0017CB08 (*method_0024)(MovieObject_x0017CB08 *, s32_x0017CB08);
} MovieVTable_x0017CB08;
struct MovieObject_x0017CB08 {
    MovieVTable_x0017CB08 *vtable;
};
extern MovieObject_x0017CB08 *fn_80057B9C_x0017CB08(u32_x0017CB08 arg0, u32_x0017CB08 arg1) __asm__("func_0016DBE0");
extern s32_x0017CB08 fn_12_C2C8_x0017CB08(void *arg0, MovieObject_x0017CB08 *movie) __asm__("func_0017C8A8");
s32_x0017CB08 func_0017CB08_x0017CB08(void *arg0, MovieArgs_x0017CB08 *args, s32_x0017CB08 *result) __asm__("func_0017CB08");
/* fn_12_C218: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_C218.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x0017CB08 func_0017CB08_x0017CB08(void *arg0, MovieArgs_x0017CB08 *args, s32_x0017CB08 *result) {
    s32_x0017CB08 status;
    s32_x0017CB08 elapsed;
    MovieObject_x0017CB08 *movie;
    movie = fn_80057B9C_x0017CB08(args->field_0000, args->field_0004);
    if (movie == 0) {
        return -1;
    }
    status = fn_12_C2C8_x0017CB08(arg0, movie);
    elapsed = movie->vtable->method_0024(movie, 1);
    *result = args->field_0004 - elapsed;
    movie->vtable->method_000c(movie);
    return status;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CBA8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017CC50);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017D308);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017D578);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DB18);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DBD8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DCC8);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DE90);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DF98);
typedef unsigned char u8_x0017E040;
typedef struct SJCK_x0017E040 {
    unsigned char *data;
    int len;
} SJCK_x0017E040;
typedef struct SJ_x0017E040 SJ_x0017E040;
typedef struct SJInterface_x0017E040 SJInterface_x0017E040;
typedef void (*SJErrorCallback_x0017E040)(void *object, int error);
struct SJInterface_x0017E040 {
    void *reserved[3];
    void (*destroy)(SJ_x0017E040 *sj);
    const void *(*get_uuid)(SJ_x0017E040 *sj);
    void (*reset)(SJ_x0017E040 *sj);
    void (*get_chunk)(SJ_x0017E040 *sj, int channel, int max_size, SJCK_x0017E040 *chunk);
    void (*unget_chunk)(SJ_x0017E040 *sj, int channel, SJCK_x0017E040 *chunk);
    void (*put_chunk)(SJ_x0017E040 *sj, int channel, SJCK_x0017E040 *chunk);
    int (*get_num_data)(SJ_x0017E040 *sj, int channel);
    int (*is_get_chunk)(SJ_x0017E040 *sj, int channel, int size, int *available);
    void (*entry_error_func)(SJ_x0017E040 *sj, SJErrorCallback_x0017E040 callback, void *object);
};
struct SJ_x0017E040 {
    const SJInterface_x0017E040 *interface;
};
void fn_800589BC_x0017E040(const SJCK_x0017E040 *source, int nbyte, SJCK_x0017E040 *first, SJCK_x0017E040 *remainder) __asm__("func_0016F050");
const unsigned char *fn_12_A0D8_x0017E040(const unsigned char *data, int length, int mask) __asm__("func_0017B5B8");
int fn_12_A2C4_x0017E040(const unsigned char *data) __asm__("func_0017B420");
int func_0017E040_x0017E040(SJ_x0017E040 *stream) __asm__("func_0017E040");
/* MPV_GoNextDelimSj: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/MPV_GoNextDelimSj.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0017E040_x0017E040(SJ_x0017E040 *stream) {
    SJCK_x0017E040 chunk;
    SJCK_x0017E040 remainder;
    const u8_x0017E040 *delimiter;
    int delimiter_type;
    for (;;) {
        stream->interface->get_chunk(stream, 1, 0x7FFFFFFF, &chunk);
        if (chunk.len < 4) {
            stream->interface->unget_chunk(stream, 1, &chunk);
            delimiter_type = 0;
            break;
        }
        delimiter = fn_12_A0D8_x0017E040(chunk.data, chunk.len, -1);
        if (delimiter == 0) {
            fn_800589BC_x0017E040(&chunk, chunk.len - 3, &chunk, &remainder);
            stream->interface->put_chunk(stream, 0, &chunk);
            stream->interface->unget_chunk(stream, 1, &remainder);
            continue;
        }
        delimiter_type = fn_12_A2C4_x0017E040(delimiter);
        fn_800589BC_x0017E040(&chunk, delimiter - chunk.data, &chunk, &remainder);
        stream->interface->put_chunk(stream, 0, &chunk);
        stream->interface->unget_chunk(stream, 1, &remainder);
        break;
    }
    return delimiter_type;
}
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
extern unsigned char D_003F1AC8_x0017E550[] __asm__("D_00424CB0");
extern unsigned char *D_003F1ABC_x0017E550 __asm__("D_00424CA4");
extern unsigned char D_003F1C48_x0017E550[] __asm__("D_00424E30");
void func_0017E550_x0017E550(void) __asm__("func_0017E550");
/* func_0036BFB0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032d3a8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0017E550_x0017E550(void)
{
    unsigned char *p;
    int i;
    int fill;
    p = D_003F1AC8_x0017E550;
    i = 0x17F;
    do {
        *p++ = 0;
        i--;
    } while (i >= 0);
    i = 0;
    do {
        *p++ = (unsigned char)i;
        i++;
    } while (i < 0x100);
    fill = -1;
    i = 0x17F;
    do {
        *p++ = (unsigned char)fill;
        i--;
    } while (i >= 0);
    D_003F1ABC_x0017E550 = D_003F1C48_x0017E550;
}
extern s32 D_004814F0_x0017E5D8 __asm__("D_004814F0");
void func_0017E5D8_x0017E5D8(void) __asm__("func_0017E5D8");
void func_0017E5D8_x0017E5D8(void)
{
  s32 var_v0;
  u8 *new_var;
  int new_var2;
  u8 *var_v1;
  new_var = (u8 *) (&D_004814F0_x0017E5D8);
  new_var2 = (*((s32 *) (((u8 *) (&D_004814F0_x0017E5D8)) + 0x54))) > 0;
  var_v1 = *((u8 **) (new_var + 0x58));
  if (new_var2)
  {
    var_v0 = *((s32 *) (((u8 *) (&D_004814F0_x0017E5D8)) + 0x54));
    do
    {
      var_v0 -= 1;
      *((s32 *) (((u8 *) var_v1) + 0x188)) = 1;
      var_v1 += 0x400;
    }
    while (var_v0 != 0);
  }
}
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
