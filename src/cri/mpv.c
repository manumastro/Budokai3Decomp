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
void func_001727A8_x001727A8(u8 *arg0) __asm__("func_001727A8");
void func_001727A8_x001727A8(u8 *arg0)
{
    s32 temp_v1;
    s32 temp_a1;
    s32 rows;
    s32 cols;
    s32 var_a0;
    s32 var_t1;
    s32 var_t2;
    s32 var_a2;
    s8 *var_t0;
    u8 *var_a3;
    u8 temp_v0;

    temp_v1 = *((s32 *) (arg0 + 4));
    temp_a1 = *((s32 *) (arg0 + 8));
    if (temp_v1 < 0)
    {
        temp_v1 += 15;
    }
    if (temp_a1 < 0)
    {
        temp_a1 += 31;
    }
    rows = temp_v1 >> 4;
    cols = temp_a1 >> 5;
    var_a0 = *((s32 *) (arg0 + 0));
    if (rows > 0)
    {
        do
        {
            var_t0 = (s8 *) (var_a0 + 3);
            var_t2 = 0;
            var_a3 = (u8 *) var_t0 + (cols << 10) - 1;
            if (cols > 0)
            {
                do
                {
                    var_t1 = 0;
                    do
                    {
                        var_a2 = 15;
                        do
                        {
                            temp_v0 = *var_a3;
                            var_a3 += 4;
                            var_a2 -= 1;
                            *var_t0 = (temp_v0 >> 1) + 1;
                            var_t0 += 4;
                        }
                        while (var_a2 >= 0);
                        var_t1 += 1;
                    }
                    while (var_t1 < 16);
                    var_t2 += 1;
                }
                while (var_t2 < cols);
            }
            rows -= 1;
            var_a0 += cols << 11;
        }
        while (rows != 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172858);
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_00172968);
typedef signed int Sint32_x00172A40;
typedef signed long long Sint64_x00172A40;
typedef Sint32_x00172A40 Bool_x00172A40;
Bool_x00172A40 func_00172A40_x00172A40(Sint32_x00172A40 cnt1, Sint32_x00172A40 tscl1, Sint32_x00172A40 cnt2, Sint32_x00172A40 tscl2) __asm__("func_00172A40");
/* UTY_CmpTime: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/cmptime.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x00172A40 func_00172A40_x00172A40(Sint32_x00172A40 cnt1, Sint32_x00172A40 tscl1, Sint32_x00172A40 cnt2, Sint32_x00172A40 tscl2)
{
        Bool_x00172A40 ret;
        Sint32_x00172A40 sz = sizeof(Sint64_x00172A40);
        if (sz < 8) {
                for (;;) {
                }
        }
        if ((Sint64_x00172A40)cnt1 * tscl2 <= (Sint64_x00172A40)cnt2 * tscl1) {
                ret = 1;
        } else {
                ret = 0;
        }
        return ret;
}
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
extern s32 *D_004814D8_x00178B80 __asm__("D_004814D8");
s32 func_00178B80_x00178B80(s32 *arg0) __asm__("func_00178B80");
s32 func_00178B80_x00178B80(s32 *arg0)
{
  s32 var_v0;
  D_004814D8_x00178B80 = arg0;
 do { var_v0 = -1; if (arg0 != ((void *) 0)) { var_v0 = (((*arg0) ^ 2) == 0) ? (0) : (-1); return var_v0; } } while (0);
}
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
extern s32 *D_004814E4_x0017B218 __asm__("D_004814E4");
s32 func_0017B218_x0017B218(s32 *arg0) __asm__("func_0017B218");
s32 func_0017B218_x0017B218(s32 *arg0)
{
  s32 var_v0;
  s32 *new_var2;
  s32 *new_var;
  D_004814E4_x0017B218 = arg0;
  var_v0 = -1;
  new_var = &var_v0;
  new_var2 = &(*new_var);
  if (arg0 != 0)
  {
    do
    {
      var_v0 = (!(0 != ((*arg0) ^ 1))) ? (-1) : (0);
      return *new_var2;
    }
    while (0);
  }
}
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
typedef unsigned char Uint8_x0017B420;
typedef signed int Sint32_x0017B420;
Sint32_x0017B420 func_0017B420_x0017B420(void *ptr) __asm__("func_0017B420");
/* MPV_CheckDelim: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mpv_deli.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0017B420 func_0017B420_x0017B420(void *ptr)
{
        Uint8_x0017B420 *p = ptr;
        Sint32_x0017B420 code;
        Sint32_x0017B420 ret;
        code = p[0];
        code <<= 8;
        code |= p[1];
        code <<= 8;
        code |= p[2];
        code <<= 8;
        code |= p[3];
        if (code == 0x100) {
                ret = 0x04;
        } else if (code == 0x101) {
                ret = 0x03;
        } else if (code > 0x101 && code <= 0x1AF) {
                ret = 0x01;
        } else if (code == 0x1B2) {
                ret = 0x20;
        } else if (code == 0x1B3) {
                ret = 0x40;
        } else if (code == 0x1B5) {
                ret = 0x10;
        } else if (code == 0x1B7) {
                ret = 0x80;
        } else if (code == 0x1B8) {
                ret = 0x08;
        } else {
                ret = 0;
        }
        return ret;
}
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
typedef unsigned char Uint8_x0017C260;
typedef unsigned int Uint32_x0017C260;
typedef signed int Sint32_x0017C260;
typedef struct {
        Uint32_x0017C260 words[5];
} MPV_DLM_STATE_x0017C260;
extern Sint32_x0017C260 func_00507480_x0017C260(void *hn) __asm__("func_0017EB90");
extern Sint32_x0017C260 func_00504b18_x0017C260(Sint32_x0017C260 hn, Uint32_x0017C260 code) __asm__("func_0017C2E0");
Sint32_x0017C260 func_0017C260_x0017C260(Uint8_x0017C260 *hn, MPV_DLM_STATE_x0017C260 *out) __asm__("func_0017C260");
/* func_00504a98: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mpv_deli_get_4a98.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0017C260 func_0017C260_x0017C260(Uint8_x0017C260 *hn, MPV_DLM_STATE_x0017C260 *out)
{
        if (func_00507480_x0017C260(hn) != 0) {
                return func_00504b18_x0017C260(0, 0xFF030204);
        }
        *out = *(MPV_DLM_STATE_x0017C260 *)(hn + 0x250);
        return 0;
}
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
typedef unsigned char Uint8_x0017C840;
typedef signed char Sint8_x0017C840;
typedef unsigned short Uint16_x0017C840;
typedef signed short Sint16_x0017C840;
typedef unsigned int Uint32_x0017C840;
typedef signed int Sint32_x0017C840;
typedef double Float64_x0017C840;
typedef char Char8_x0017C840;
typedef struct SJ_OBJ_x0017C840 *SJ_x0017C840;
typedef struct {
        Uint8_x0017C840 *data;
        Sint32_x0017C840 len;
} SJCK_x0017C840;
typedef struct {
        Uint8_x0017C840 data[16];
} SJUUID_x0017C840;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0017C840 sj);
        const SJUUID_x0017C840 *(*GetUuid)(SJ_x0017C840 sj);
        void (*Reset)(SJ_x0017C840 sj);
        void (*GetChunk)(SJ_x0017C840 sj, Sint32_x0017C840 id, Sint32_x0017C840 nbyte, SJCK_x0017C840 *ck);
        void (*UngetChunk)(SJ_x0017C840 sj, Sint32_x0017C840 id, SJCK_x0017C840 *ck);
        void (*PutChunk)(SJ_x0017C840 sj, Sint32_x0017C840 id, SJCK_x0017C840 *ck);
        Sint32_x0017C840 (*GetNumData)(SJ_x0017C840 sj, Sint32_x0017C840 id);
        Sint32_x0017C840 (*IsGetChunk)(SJ_x0017C840 sj, Sint32_x0017C840 id, Sint32_x0017C840 nbyte, Sint32_x0017C840 *rbyte);
        void (*EntryErrFunc)(SJ_x0017C840 sj, void (*func)(void *obj, Char8_x0017C840 *msg), void *obj);
} SJ_IF_x0017C840;
struct SJ_OBJ_x0017C840 {
        SJ_IF_x0017C840 *vtbl;
};
typedef struct {
        void *p;
        Sint32_x0017C840 n;
} MPVCMC_REF_x0017C840;
typedef struct {
        void (*func)(void *obj, Sint32_x0017C840 code);
        void *obj;
        Sint32_x0017C840 code;
} MPVERR_INF_x0017C840;
typedef struct {
        Sint32_x0017C840 width;
        Sint32_x0017C840 height;
        Sint32_x0017C840 mb_width;
        Sint32_x0017C840 mb_height;
        Sint32_x0017C840 frame_rate;
        Sint32_x0017C840 temp_ref;
        Sint32_x0017C840 pic_type;
        Sint32_x0017C840 tc_drop;
        Sint32_x0017C840 tc_hour;
        Sint32_x0017C840 tc_min;
        Sint32_x0017C840 tc_sec;
        Sint32_x0017C840 tc_pic;
        Sint32_x0017C840 ngop;
        Sint32_x0017C840 nseq;
        Sint32_x0017C840 x38;
        Sint32_x0017C840 x3c, x40, x44;
        Sint32_x0017C840 bitrate;
        Sint32_x0017C840 vbv_size;
        Sint16_x0017C840 x50, x52;
        Sint8_x0017C840 x54;
        Sint8_x0017C840 x55, x56, x57;
        Sint8_x0017C840 x58;
        Uint8_x0017C840 aspect;
        Uint8_x0017C840 constrained;
        Uint8_x0017C840 x5b, x5c;
        Uint8_x0017C840 x5d;
        Sint8_x0017C840 x5e, x5f, x60;
        Uint8_x0017C840 x61;
        Uint8_x0017C840 x62, x63, x64;
        Uint8_x0017C840 pad65[0x80 - 0x65];
} MPV_PICATR_x0017C840;
typedef struct {
        Uint8_x0017C840 pad0[0x1C];
        Sint16_x0017C840 width;
        Sint16_x0017C840 height;
        Uint8_x0017C840 pad20[4];
        MPV_PICATR_x0017C840 *picatr;
        Sint32_x0017C840 nfrm;
        Sint32_x0017C840 nbyte;
} MPV_FRM_x0017C840;
typedef struct {
        Uint32_x0017C840 *tbl;
        Sint32_x0017C840 bits;
} MPV_RUNLEVEL_x0017C840;
typedef struct MPV_OBJ_x0017C840 *MPV_x0017C840;
typedef struct MPVMC_x0017C840 {
        void (*oneref08[4])(struct MPVMC_x0017C840 *mc);
        Uint8_x0017C840 pad10[8];
        Uint32_x0017C840 *dst;
        Uint8_x0017C840 pad1C[4];
        Sint32_x0017C840 stride;
        Uint8_x0017C840 *src;
        Uint8_x0017C840 *src2;
        Uint8_x0017C840 pad2C[8];
        void (*oneref16[4])(struct MPVMC_x0017C840 *mc);
        Uint8_x0017C840 pad44[0x54 - 0x44];
} MPVMC_x0017C840;
typedef struct {
        Sint32_x0017C840 run;
        Sint32_x0017C840 level;
        Sint32_x0017C840 sign;
        Sint32_x0017C840 len;
        Sint32_x0017C840 idx0;
        Sint32_x0017C840 idx;
        Sint32_x0017C840 pad18;
        Float64_x0017C840 *dst;
        Uint8_x0017C840 *iqm;
        Sint32_x0017C840 qscale;
        Sint32_x0017C840 *dcpred;
        void *dctbl;
        Sint32_x0017C840 nintra;
} MPV_BLKPRM_x0017C840;
typedef Sint32_x0017C840 (*MPV_BLKDEC_FUNC_x0017C840)(MPV_x0017C840 mpv, MPV_BLKPRM_x0017C840 *prm);
typedef struct {
        Sint32_x0017C840 full_pel;
        Sint32_x0017C840 r_size;
        Sint32_x0017C840 shift;
        Sint32_x0017C840 f;
        Sint32_x0017C840 pred[2];
        Sint32_x0017C840 vec[2];
        Sint32_x0017C840 pad;
} MPV_MV_x0017C840;
typedef struct {
        SJ_x0017C840 sj;
        void (*func)(void *obj, Sint32_x0017C840 id);
        void *obj;
} MPV_USRSJ_x0017C840;
typedef struct MPV_OBJ_x0017C840 {
        Uint32_x0017C840 bbuf;
        Uint32_x0017C840 nbuf;
        Sint32_x0017C840 bitpos;
        Uint32_x0017C840 *bitptr;
        Uint32_x0017C840 *rl_8;
        Uint32_x0017C840 *rl_4;
        Uint32_x0017C840 *rl_2;
        Uint32_x0017C840 *rl_1;
        Uint32_x0017C840 *rl_0a;
        Uint32_x0017C840 *rl_0b;
        Uint32_x0017C840 *rl_0c;
        Sint8_x0017C840 *zigzag_tbl;
        Uint16_x0017C840 *bitmsk_tbl;
        Uint8_x0017C840 *scale_tbl;
        Uint8_x0017C840 *group_tbl_p;
        void *rl_p;
        Uint8_x0017C840 *clip_base;
        MPV_BLKPRM_x0017C840 blkprm;
        Sint8_x0017C840 cbp[6];
        Uint8_x0017C840 pad7E[0xA0 - 0x7E];
        Sint32_x0017C840 cbp_msk;
        Uint8_x0017C840 padA4[0xCC - 0xA4];
        MPVMC_x0017C840 mc;
        Sint32_x0017C840 ccnt_rt;
        MPVCMC_REF_x0017C840 oi_rt[6];
        Sint32_x0017C840 ccnt;
        MPVCMC_REF_x0017C840 oi[6];
        Sint32_x0017C840 stat;
        Sint32_x0017C840 x18c;
        Sint32_x0017C840 cond[16];
        MPV_PICATR_x0017C840 picatr;
        MPVERR_INF_x0017C840 errinf;
        Sint32_x0017C840 nfrm_dec;
        Sint32_x0017C840 nbyte_dec;
        MPV_FRM_x0017C840 frm;
        Uint8_x0017C840 pad294[0x2A4 - 0x294];
        Sint32_x0017C840 aspect;
        Sint32_x0017C840 bitrate;
        Sint32_x0017C840 vbv_size;
        Sint32_x0017C840 constrained;
        Sint32_x0017C840 linkflg1;
        Sint32_x0017C840 linkflg2;
        Sint32_x0017C840 vbv_delay;
        Sint32_x0017C840 (*dec_mbs_func_x0017C840)(MPV_x0017C840 mpv, SJ_x0017C840 sj);
        void (*skip_func_x0017C840)(MPV_x0017C840 mpv);
        Sint32_x0017C840 (*intra_blocks)(MPV_x0017C840 mpv);
        Sint32_x0017C840 (*nintra_blocks)(MPV_x0017C840 mpv);
        void (*mc_intra_func_x0017C840)(MPV_x0017C840 mpv);
        void (*mc_func[4])(MPV_x0017C840 mpv);
        Sint32_x0017C840 x2e4;
        Sint32_x0017C840 qscale;
        MPV_MV_x0017C840 fwd;
        MPV_MV_x0017C840 bwd;
        Sint32_x0017C840 mb_addr;
        Sint32_x0017C840 mb_y;
        Sint32_x0017C840 mb_x;
        Sint32_x0017C840 mb_last;
        Sint32_x0017C840 mbtype;
        Sint32_x0017C840 cbp_code;
        Sint32_x0017C840 dcpred[3];
        Sint32_x0017C840 m2v_mode;
        Sint32_x0017C840 stc[3];
        Uint8_x0017C840 *tbl368[6];
        Uint8_x0017C840 *mcbuf;
        Float64_x0017C840 (*blk)[32];
        Uint8_x0017C840 *intra_iqm;
        Uint8_x0017C840 *nintra_iqm;
        Uint8_x0017C840 *work;
        Uint16_x0017C840 *bitmsk;
        Sint8_x0017C840 *zigzag;
        Uint8_x0017C840 *group_tbl;
        MPV_RUNLEVEL_x0017C840 *rl;
        Sint32_x0017C840 x1324;
        void *dctbl_y;
        void *dctbl_c;
        void *m2v;
        Sint32_x0017C840 hdrtype;
        MPV_USRSJ_x0017C840 usr[4];
        Uint8_x0017C840 *picusr_buf;
        Sint32_x0017C840 picusr_bufsiz;
        Sint32_x0017C840 picusr_len;
        Sint32_x0017C840 pic_done;
        Sint32_x0017C840 npic;
        SJCK_x0017C840 ck;
        Sint32_x0017C840 bitofs;
        Sint32_x0017C840 dcprec;
        MPV_BLKDEC_FUNC_x0017C840 intra_func;
        MPV_BLKDEC_FUNC_x0017C840 nintra_func;
        Sint32_x0017C840 pad414;
        Uint8_x0017C840 pad418[0x420 - 0x418];
} MPV_OBJ_x0017C840;
typedef void (*MPV_MCFUNC_x0017C840)(MPV_x0017C840 mpv);
extern Sint32_x0017C840 (*const dec_mbs_func_x0017C840[5])() __asm__("dec_mbs_func");
extern MPV_MCFUNC_x0017C840 mc_intra_func_x0017C840[2][2][5] __asm__("mc_intra_func");
extern MPV_MCFUNC_x0017C840 skip_func_x0017C840[2][5] __asm__("skip_func");
void func_0017C840_x0017C840(MPV_x0017C840 mpv, Sint32_x0017C840 id, SJ_x0017C840 sj, void (*func)(void *obj, Sint32_x0017C840 id), void *obj) __asm__("func_0017C840");
/* MPV_SetUsrSj: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mpv_hdec.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0017C840_x0017C840(MPV_x0017C840 mpv, Sint32_x0017C840 id, SJ_x0017C840 sj, void (*func)(void *obj, Sint32_x0017C840 id), void *obj)
{
        MPV_USRSJ_x0017C840 *usr = &mpv->usr[id];
        usr->sj = sj;
        usr->func = func;
        usr->obj = obj;
}
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
s32 func_0016F050_x0017DB18(s32, s32, s32, void *) __asm__("func_0016F050");
s32 func_0017E040_x0017DB18(void **) __asm__("func_0017E040");
s32 func_0017DB18_x0017DB18(u8 *arg0, u8 **arg1) __asm__("func_0017DB18");
s32 func_0017DB18_x0017DB18(u8 *arg0, u8 **arg1)
{
  u8 sp[8];
  int new_var;
  s32 temp_a1;
  s32 temp_s1;
  s32 temp_v1;
  temp_s1 = arg0 + 0x388;
  (*((s32 (**)(u8 **, s32, s32, s32)) (((u8 *) (*arg1)) + 0x18)))(arg1, 1, 0x7FFFFFFF, temp_s1);
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x388));
  temp_a1 = temp_v1 & (~3);
  new_var = (temp_a1 + (((s32) ((temp_v1 - temp_a1) * 8)) >> 3)) + 4;
  func_0016F050_x0017DB18(temp_s1, new_var - temp_v1, temp_s1, sp);
  (*((s32 (**)(u8 **, s32, s32)) (((u8 *) (*arg1)) + 0x20)))(arg1, 0, temp_s1);
  (*((s32 (**)(u8 **, s32, u8 *)) (((u8 *) (*arg1)) + 0x1C)))(arg1, 1, sp);
  func_0017E040_x0017DB18(arg1);
  return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017DBD8);
typedef unsigned char Uint8_x0017DCC8;
typedef signed char Sint8_x0017DCC8;
typedef unsigned short Uint16_x0017DCC8;
typedef signed short Sint16_x0017DCC8;
typedef unsigned int Uint32_x0017DCC8;
typedef signed int Sint32_x0017DCC8;
typedef double Float64_x0017DCC8;
typedef char Char8_x0017DCC8;
typedef struct SJ_OBJ_x0017DCC8 *SJ_x0017DCC8;
typedef struct {
        Uint8_x0017DCC8 *data;
        Sint32_x0017DCC8 len;
} SJCK_x0017DCC8;
typedef struct {
        Uint8_x0017DCC8 data[16];
} SJUUID_x0017DCC8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0017DCC8 sj);
        const SJUUID_x0017DCC8 *(*GetUuid)(SJ_x0017DCC8 sj);
        void (*Reset)(SJ_x0017DCC8 sj);
        void (*GetChunk)(SJ_x0017DCC8 sj, Sint32_x0017DCC8 id, Sint32_x0017DCC8 nbyte, SJCK_x0017DCC8 *ck);
        void (*UngetChunk)(SJ_x0017DCC8 sj, Sint32_x0017DCC8 id, SJCK_x0017DCC8 *ck);
        void (*PutChunk)(SJ_x0017DCC8 sj, Sint32_x0017DCC8 id, SJCK_x0017DCC8 *ck);
        Sint32_x0017DCC8 (*GetNumData)(SJ_x0017DCC8 sj, Sint32_x0017DCC8 id);
        Sint32_x0017DCC8 (*IsGetChunk)(SJ_x0017DCC8 sj, Sint32_x0017DCC8 id, Sint32_x0017DCC8 nbyte, Sint32_x0017DCC8 *rbyte);
        void (*EntryErrFunc)(SJ_x0017DCC8 sj, void (*func)(void *obj, Char8_x0017DCC8 *msg), void *obj);
} SJ_IF_x0017DCC8;
struct SJ_OBJ_x0017DCC8 {
        SJ_IF_x0017DCC8 *vtbl;
};
typedef struct {
        void *p;
        Sint32_x0017DCC8 n;
} MPVCMC_REF_x0017DCC8;
typedef struct {
        void (*func)(void *obj, Sint32_x0017DCC8 code);
        void *obj;
        Sint32_x0017DCC8 code;
} MPVERR_INF_x0017DCC8;
typedef struct {
        Sint32_x0017DCC8 width;
        Sint32_x0017DCC8 height;
        Sint32_x0017DCC8 mb_width;
        Sint32_x0017DCC8 mb_height;
        Sint32_x0017DCC8 frame_rate;
        Sint32_x0017DCC8 temp_ref;
        Sint32_x0017DCC8 pic_type;
        Sint32_x0017DCC8 tc_drop;
        Sint32_x0017DCC8 tc_hour;
        Sint32_x0017DCC8 tc_min;
        Sint32_x0017DCC8 tc_sec;
        Sint32_x0017DCC8 tc_pic;
        Sint32_x0017DCC8 ngop;
        Sint32_x0017DCC8 nseq;
        Sint32_x0017DCC8 x38;
        Sint32_x0017DCC8 x3c, x40, x44;
        Sint32_x0017DCC8 bitrate;
        Sint32_x0017DCC8 vbv_size;
        Sint16_x0017DCC8 x50, x52;
        Sint8_x0017DCC8 x54;
        Sint8_x0017DCC8 x55, x56, x57;
        Sint8_x0017DCC8 x58;
        Uint8_x0017DCC8 aspect;
        Uint8_x0017DCC8 constrained;
        Uint8_x0017DCC8 x5b, x5c;
        Uint8_x0017DCC8 x5d;
        Sint8_x0017DCC8 x5e, x5f, x60;
        Uint8_x0017DCC8 x61;
        Uint8_x0017DCC8 x62, x63, x64;
        Uint8_x0017DCC8 pad65[0x80 - 0x65];
} MPV_PICATR_x0017DCC8;
typedef struct {
        Uint8_x0017DCC8 pad0[0x1C];
        Sint16_x0017DCC8 width;
        Sint16_x0017DCC8 height;
        Uint8_x0017DCC8 pad20[4];
        MPV_PICATR_x0017DCC8 *picatr;
        Sint32_x0017DCC8 nfrm;
        Sint32_x0017DCC8 nbyte;
} MPV_FRM_x0017DCC8;
typedef struct {
        Uint32_x0017DCC8 *tbl;
        Sint32_x0017DCC8 bits;
} MPV_RUNLEVEL_x0017DCC8;
typedef struct MPV_OBJ_x0017DCC8 *MPV_x0017DCC8;
typedef struct MPVMC_x0017DCC8 {
        void (*oneref08[4])(struct MPVMC_x0017DCC8 *mc);
        Uint8_x0017DCC8 pad10[8];
        Uint32_x0017DCC8 *dst;
        Uint8_x0017DCC8 pad1C[4];
        Sint32_x0017DCC8 stride;
        Uint8_x0017DCC8 *src;
        Uint8_x0017DCC8 *src2;
        Uint8_x0017DCC8 pad2C[8];
        void (*oneref16[4])(struct MPVMC_x0017DCC8 *mc);
        Uint8_x0017DCC8 pad44[0x54 - 0x44];
} MPVMC_x0017DCC8;
typedef struct {
        Sint32_x0017DCC8 run;
        Sint32_x0017DCC8 level;
        Sint32_x0017DCC8 sign;
        Sint32_x0017DCC8 len;
        Sint32_x0017DCC8 idx0;
        Sint32_x0017DCC8 idx;
        Sint32_x0017DCC8 pad18;
        Float64_x0017DCC8 *dst;
        Uint8_x0017DCC8 *iqm;
        Sint32_x0017DCC8 qscale;
        Sint32_x0017DCC8 *dcpred;
        void *dctbl;
        Sint32_x0017DCC8 nintra;
} MPV_BLKPRM_x0017DCC8;
typedef Sint32_x0017DCC8 (*MPV_BLKDEC_FUNC_x0017DCC8)(MPV_x0017DCC8 mpv, MPV_BLKPRM_x0017DCC8 *prm);
typedef struct {
        Sint32_x0017DCC8 full_pel;
        Sint32_x0017DCC8 r_size;
        Sint32_x0017DCC8 shift;
        Sint32_x0017DCC8 f;
        Sint32_x0017DCC8 pred[2];
        Sint32_x0017DCC8 vec[2];
        Sint32_x0017DCC8 pad;
} MPV_MV_x0017DCC8;
typedef struct {
        SJ_x0017DCC8 sj;
        void (*func)(void *obj, Sint32_x0017DCC8 id);
        void *obj;
} MPV_USRSJ_x0017DCC8;
typedef struct MPV_OBJ_x0017DCC8 {
        Uint32_x0017DCC8 bbuf;
        Uint32_x0017DCC8 nbuf;
        Sint32_x0017DCC8 bitpos;
        Uint32_x0017DCC8 *bitptr;
        Uint32_x0017DCC8 *rl_8;
        Uint32_x0017DCC8 *rl_4;
        Uint32_x0017DCC8 *rl_2;
        Uint32_x0017DCC8 *rl_1;
        Uint32_x0017DCC8 *rl_0a;
        Uint32_x0017DCC8 *rl_0b;
        Uint32_x0017DCC8 *rl_0c;
        Sint8_x0017DCC8 *zigzag_tbl;
        Uint16_x0017DCC8 *bitmsk_tbl;
        Uint8_x0017DCC8 *scale_tbl;
        Uint8_x0017DCC8 *group_tbl_p;
        void *rl_p;
        Uint8_x0017DCC8 *clip_base;
        MPV_BLKPRM_x0017DCC8 blkprm;
        Sint8_x0017DCC8 cbp[6];
        Uint8_x0017DCC8 pad7E[0xA0 - 0x7E];
        Sint32_x0017DCC8 cbp_msk;
        Uint8_x0017DCC8 padA4[0xCC - 0xA4];
        MPVMC_x0017DCC8 mc;
        Sint32_x0017DCC8 ccnt_rt;
        MPVCMC_REF_x0017DCC8 oi_rt[6];
        Sint32_x0017DCC8 ccnt;
        MPVCMC_REF_x0017DCC8 oi[6];
        Sint32_x0017DCC8 stat;
        Sint32_x0017DCC8 x18c;
        Sint32_x0017DCC8 cond[16];
        MPV_PICATR_x0017DCC8 picatr;
        MPVERR_INF_x0017DCC8 errinf;
        Sint32_x0017DCC8 nfrm_dec;
        Sint32_x0017DCC8 nbyte_dec;
        MPV_FRM_x0017DCC8 frm;
        Uint8_x0017DCC8 pad294[0x2A4 - 0x294];
        Sint32_x0017DCC8 aspect;
        Sint32_x0017DCC8 bitrate;
        Sint32_x0017DCC8 vbv_size;
        Sint32_x0017DCC8 constrained;
        Sint32_x0017DCC8 linkflg1;
        Sint32_x0017DCC8 linkflg2;
        Sint32_x0017DCC8 vbv_delay;
        Sint32_x0017DCC8 (*dec_mbs_func_x0017DCC8)(MPV_x0017DCC8 mpv, SJ_x0017DCC8 sj);
        void (*skip_func_x0017DCC8)(MPV_x0017DCC8 mpv);
        Sint32_x0017DCC8 (*intra_blocks)(MPV_x0017DCC8 mpv);
        Sint32_x0017DCC8 (*nintra_blocks)(MPV_x0017DCC8 mpv);
        void (*mc_intra_func_x0017DCC8)(MPV_x0017DCC8 mpv);
        void (*mc_func[4])(MPV_x0017DCC8 mpv);
        Sint32_x0017DCC8 x2e4;
        Sint32_x0017DCC8 qscale;
        MPV_MV_x0017DCC8 fwd;
        MPV_MV_x0017DCC8 bwd;
        Sint32_x0017DCC8 mb_addr;
        Sint32_x0017DCC8 mb_y;
        Sint32_x0017DCC8 mb_x;
        Sint32_x0017DCC8 mb_last;
        Sint32_x0017DCC8 mbtype;
        Sint32_x0017DCC8 cbp_code;
        Sint32_x0017DCC8 dcpred[3];
        Sint32_x0017DCC8 m2v_mode;
        Sint32_x0017DCC8 stc[3];
        Uint8_x0017DCC8 *tbl368[6];
        Uint8_x0017DCC8 *mcbuf;
        Float64_x0017DCC8 (*blk)[32];
        Uint8_x0017DCC8 *intra_iqm;
        Uint8_x0017DCC8 *nintra_iqm;
        Uint8_x0017DCC8 *work;
        Uint16_x0017DCC8 *bitmsk;
        Sint8_x0017DCC8 *zigzag;
        Uint8_x0017DCC8 *group_tbl;
        MPV_RUNLEVEL_x0017DCC8 *rl;
        Sint32_x0017DCC8 x1324;
        void *dctbl_y;
        void *dctbl_c;
        void *m2v;
        Sint32_x0017DCC8 hdrtype;
        MPV_USRSJ_x0017DCC8 usr[4];
        Uint8_x0017DCC8 *picusr_buf;
        Sint32_x0017DCC8 picusr_bufsiz;
        Sint32_x0017DCC8 picusr_len;
        Sint32_x0017DCC8 pic_done;
        Sint32_x0017DCC8 npic;
        SJCK_x0017DCC8 ck;
        Sint32_x0017DCC8 bitofs;
        Sint32_x0017DCC8 dcprec;
        MPV_BLKDEC_FUNC_x0017DCC8 intra_func;
        MPV_BLKDEC_FUNC_x0017DCC8 nintra_func;
        Sint32_x0017DCC8 pad414;
        Uint8_x0017DCC8 pad418[0x420 - 0x418];
} MPV_OBJ_x0017DCC8;
Sint32_x0017DCC8 MPV_CheckDelim_x0017DCC8(void *ptr) __asm__("func_0017B420");
typedef void (*MPV_MCFUNC_x0017DCC8)(MPV_x0017DCC8 mpv);
extern void *memcpy_x0017DCC8(void *dst, const void *src, Uint32_x0017DCC8 n) __asm__("func_00125740");
extern Sint32_x0017DCC8 (*const dec_mbs_func_x0017DCC8[5])() __asm__("dec_mbs_func");
extern MPV_MCFUNC_x0017DCC8 mc_intra_func_x0017DCC8[2][2][5] __asm__("mc_intra_func");
extern MPV_MCFUNC_x0017DCC8 skip_func_x0017DCC8[2][5] __asm__("skip_func");
Sint32_x0017DCC8 mpvhdec_DecSeqUdsc_x0017DCC8(MPV_x0017DCC8 mpv, Char8_x0017DCC8 *buf, Sint32_x0017DCC8 len) __asm__("func_0017DE90");
Sint32_x0017DCC8 func_0017DCC8_x0017DCC8(MPV_x0017DCC8 mpv, Uint8_x0017DCC8 *buf, Sint32_x0017DCC8 len) __asm__("func_0017DCC8");
/* mpvhdec_AnalyUd: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mpv_hdec.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0017DCC8 func_0017DCC8_x0017DCC8(MPV_x0017DCC8 mpv, Uint8_x0017DCC8 *buf, Sint32_x0017DCC8 len)
{
        SJCK_x0017DCC8 ck;
        SJCK_x0017DCC8 ck2;
        Sint32_x0017DCC8 ret;
        Sint32_x0017DCC8 ret2;
        Sint32_x0017DCC8 type;
        Sint32_x0017DCC8 n;
        SJ_x0017DCC8 sj;
        Sint32_x0017DCC8 siz;
        int i;
        ret2 = 0;
        ret = 0;
        type = mpv->hdrtype;
        for (i = 4; i < len - 3; i++) {
                if (MPV_CheckDelim_x0017DCC8(buf + i) != 0) {
                        break;
                }
        }
        if (i == len - 3) {
                ret = -1;
        }
        n = i;
        if (type == 1) {
                ret2 = mpvhdec_DecSeqUdsc_x0017DCC8(mpv, (Char8_x0017DCC8 *)buf, i);
        }
        sj = mpv->usr[type].sj;
        if (sj != 0) {
                (*(sj)->vtbl->GetChunk)(sj, 0, n, &ck);
                memcpy_x0017DCC8(ck.data, buf, ck.len);
                (*(sj)->vtbl->PutChunk)(sj, 1, &ck);
                if (ck.len < n) {
                        (*(sj)->vtbl->GetChunk)(sj, 0, n - ck.len, &ck2);
                        memcpy_x0017DCC8(ck2.data, buf + ck.len, ck2.len);
                        (*(sj)->vtbl->PutChunk)(sj, 1, &ck2);
                }
                if (mpv->usr[type].func != 0) {
                        mpv->usr[type].func(mpv->usr[type].obj, type);
                }
        }
        if (type == 3 && mpv->picusr_buf != 0) {
                siz = mpv->picusr_bufsiz;
                if (n < siz) {
                        siz = n;
                }
                mpv->picusr_len = siz;
                memcpy_x0017DCC8(mpv->picusr_buf, buf, mpv->picusr_len);
        }
        if (ret2 != 0) {
                return ret2;
        }
        return ret;
}
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
void func_0017E708_x0017E708(u8 *arg0) __asm__("func_0017E708");
void func_0017E708_x0017E708(u8 *arg0)
{
    s32 one = 1;
    s32 neg = -1;
    s32 three = 3;
    s32 zero = 0;
    *((volatile s8 *)(arg0 + 0x59)) = one;
    *((volatile s32 *)(arg0 + 0x38)) = three;
    *((volatile s32 *)(arg0 + 0x0)) = zero;
    *((volatile s32 *)(arg0 + 0x4)) = zero;
    *((volatile s32 *)(arg0 + 0x8)) = zero;
    *((volatile s32 *)(arg0 + 0xC)) = zero;
    *((volatile s32 *)(arg0 + 0x10)) = zero;
    *((volatile s32 *)(arg0 + 0x14)) = zero;
    *((volatile s32 *)(arg0 + 0x18)) = zero;
    *((volatile s32 *)(arg0 + 0x1C)) = zero;
    *((volatile s32 *)(arg0 + 0x20)) = zero;
    *((volatile s32 *)(arg0 + 0x24)) = zero;
    *((volatile s32 *)(arg0 + 0x28)) = zero;
    *((volatile s32 *)(arg0 + 0x2C)) = zero;
    *((volatile s32 *)(arg0 + 0x30)) = zero;
    *((volatile s32 *)(arg0 + 0x34)) = zero;
    *((volatile s32 *)(arg0 + 0x3C)) = one;
    *((volatile s32 *)(arg0 + 0x40)) = one;
    *((volatile s32 *)(arg0 + 0x44)) = one;
    *((volatile s32 *)(arg0 + 0x48)) = zero;
    *((volatile s32 *)(arg0 + 0x4C)) = zero;
    *((volatile s16 *)(arg0 + 0x50)) = neg;
    *((volatile s16 *)(arg0 + 0x52)) = neg;
    *((volatile s8 *)(arg0 + 0x54)) = zero;
    *((volatile s8 *)(arg0 + 0x55)) = neg;
    *((volatile s8 *)(arg0 + 0x56)) = neg;
    *((volatile s8 *)(arg0 + 0x57)) = neg;
    *((volatile s8 *)(arg0 + 0x58)) = zero;
    *((volatile s8 *)(arg0 + 0x5A)) = zero;
    *((volatile s8 *)(arg0 + 0x5B)) = zero;
    *((volatile s8 *)(arg0 + 0x5C)) = zero;
    *((volatile s8 *)(arg0 + 0x5D)) = neg;
    *((volatile s8 *)(arg0 + 0x5E)) = neg;
    *((volatile s8 *)(arg0 + 0x5F)) = neg;
    *((volatile s8 *)(arg0 + 0x64)) = neg;
    *((volatile s8 *)(arg0 + 0x60)) = neg;
    *((volatile s8 *)(arg0 + 0x61)) = zero;
    *((volatile s8 *)(arg0 + 0x62)) = neg;
    *((volatile s8 *)(arg0 + 0x63)) = neg;
}
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
s32 func_0017C2E0_x0017EB00(s32, s32) __asm__("func_0017C2E0");
s32 func_0017EB90_x0017EB00(void) __asm__("func_0017EB90");
extern s32 D_004814F0_x0017EB00 __asm__("D_004814F0");
s32 func_0017EB00_x0017EB00(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0017EB00");
s32 func_0017EB00_x0017EB00(s32 arg0, s32 arg1, s32 *arg2)
{
    s32 *p;
    if (arg0 == 0) {
        p = &D_004814F0_x0017EB00;
    } else {
        if (func_0017EB90_x0017EB00() != 0) {
            return func_0017C2E0_x0017EB00(0, 0xFF030210);
        }
        p = (s32 *)(arg0 + 0x190);
    }
    *arg2 = p[arg1];
    return 0;
}
typedef unsigned char Uint8_x0017EB90;
typedef signed char Sint8_x0017EB90;
typedef unsigned short Uint16_x0017EB90;
typedef signed short Sint16_x0017EB90;
typedef unsigned int Uint32_x0017EB90;
typedef signed int Sint32_x0017EB90;
typedef double Float64_x0017EB90;
typedef struct {
        void (*func)(void *obj, Sint32_x0017EB90 code);
        void *obj;
        Sint32_x0017EB90 code;
        Sint32_x0017EB90 reserved[2];
} MPVERR_INF_x0017EB90;
typedef struct {
        Uint8_x0017EB90 pad0[0x18];
        Sint32_x0017EB90 cnt0;
        Sint32_x0017EB90 cnt1;
        Uint8_x0017EB90 pad20[0x2C - 0x20];
        Float64_x0017EB90 *blk;
        void *tbl;
        Uint8_x0017EB90 pad34[0x48 - 0x34];
        Uint8_x0017EB90 *work;
} DCT_PA_x0017EB90;
typedef struct {
        Sint32_x0017EB90 x00, x04, x08, x0c, x10, x14, x18, x1c, x20, x24, x28, x2c, x30, x34;
        Sint32_x0017EB90 x38;
        Sint32_x0017EB90 x3c, x40, x44;
        Sint32_x0017EB90 x48, x4c;
        Sint16_x0017EB90 x50, x52;
        Uint8_x0017EB90 x54;
        Sint8_x0017EB90 x55, x56, x57;
        Uint8_x0017EB90 x58, x59, x5a, x5b, x5c;
        Uint8_x0017EB90 x5d;
        Sint8_x0017EB90 x5e, x5f, x60;
        Uint8_x0017EB90 x61;
        Uint8_x0017EB90 x62, x63, x64;
        Uint8_x0017EB90 pad65[0x80 - 0x65];
} MPV_PICATR_x0017EB90;
typedef struct MPV_OBJ_x0017EB90 {
        Uint8_x0017EB90 pad0[0x10];
        Uint32_x0017EB90 *rl_8;
        Uint32_x0017EB90 *rl_4;
        Uint32_x0017EB90 *rl_2;
        Uint32_x0017EB90 *rl_1;
        Uint32_x0017EB90 *rl_0a;
        Uint32_x0017EB90 *rl_0b;
        Uint32_x0017EB90 *rl_0c;
        Sint8_x0017EB90 *zigzag;
        Uint16_x0017EB90 *bitmsk;
        Uint8_x0017EB90 *scale;
        Uint8_x0017EB90 *group_tbl;
        void *rl;
        Uint8_x0017EB90 *clip_base;
        Uint8_x0017EB90 pad44[0x78 - 0x44];
        DCT_PA_x0017EB90 dctpa;
        Uint8_x0017EB90 padC4[0x110 - 0xC4];
        Uint8_x0017EB90 *mc_clip;
        Uint8_x0017EB90 *mc_buf0;
        Uint8_x0017EB90 *mc_work;
        Uint8_x0017EB90 *mc_work2;
        Uint8_x0017EB90 pad120[0x188 - 0x120];
        Sint32_x0017EB90 stat;
        Sint32_x0017EB90 x18c;
        Sint32_x0017EB90 cond[16];
        MPV_PICATR_x0017EB90 picatr;
        MPVERR_INF_x0017EB90 errinf;
        Uint8_x0017EB90 pad264[0x2E4 - 0x264];
        Sint32_x0017EB90 x2e4;
        Uint8_x0017EB90 pad2E8[0x358 - 0x2E8];
        Sint32_x0017EB90 x358;
        Sint32_x0017EB90 x35c;
        Sint32_x0017EB90 x360;
        Sint32_x0017EB90 x364;
        Uint8_x0017EB90 *tbl368[6];
        Uint8_x0017EB90 mcbuf[0x680 - 0x380];
        Float64_x0017EB90 blk[6][32];
        Uint8_x0017EB90 intra_iqm[64];
        Uint8_x0017EB90 nintra_iqm[64];
        Uint8_x0017EB90 work[0x1300 - 0xD00];
        Sint32_x0017EB90 x1300;
        Sint32_x0017EB90 x1304;
        Uint8_x0017EB90 pad1308[0x1314 - 0x1308];
        Sint32_x0017EB90 x1314;
        void *intra_func;
        void *nintra_func;
        Sint32_x0017EB90 pad1320;
        Sint32_x0017EB90 x1324;
        void *dctbl_y;
        void *dctbl_c;
        void *m2v;
        Uint8_x0017EB90 pad1334[0x1380 - 0x1334];
} MPV_OBJ_x0017EB90;
typedef MPV_OBJ_x0017EB90 *MPV_x0017EB90;
extern MPV_x0017EB90 mpvlib_mpvobj_x0017EB90 __asm__("D_0048154C");
Sint32_x0017EB90 func_0017EB90_x0017EB90(MPV_x0017EB90 mpv) __asm__("func_0017EB90");
/* MPVLIB_CheckHn: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mpv_lib.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0017EB90 func_0017EB90_x0017EB90(MPV_x0017EB90 mpv)
{
        mpvlib_mpvobj_x0017EB90 = mpv;
        if (mpv == 0) {
                return -1;
        }
        if (mpv->stat != 2) {
                return -1;
        }
        return 0;
}
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
