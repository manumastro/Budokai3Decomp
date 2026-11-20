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
extern int svm_exec_cnt_x001708C0[8] __asm__("D_00423300");
int func_001708C0_x001708C0(int svtype) __asm__("func_001708C0");
/* SVM_GetExecCount: from https://github.com/crashbashash/DW4_Decomp (src/cri/svm.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001708C0_x001708C0(int svtype)
{
    int ok = (unsigned int)svtype < 7;
    int *p = &svm_exec_cnt_x001708C0[svtype];
    if (ok) {
        return *p;
    }
    return 0;
}
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
typedef unsigned int size_t_x001709A8;
void *memset_x001709A8(void *, int, size_t_x001709A8) __asm__("memset");
typedef void (*SvmErrFunc_x001709A8)(void *obj, char *msg);
typedef unsigned int size_t_x001709A8;
typedef struct SvmErrCb_x001709A8 {
    SvmErrFunc_x001709A8 func;
    void *obj;
} SvmErrCb_x001709A8;
extern volatile int svm_init_cnt_x001709A8 __asm__("D_004232F4");
extern SvmErrCb_x001709A8 svm_cberr_x001709A8 __asm__("D_00481470");
void svm_reset_variable_x001709A8(void) __asm__("func_001708E8");
void svm_reset_variable_x001709A8(void) __asm__("func_001708E8");
void svm_reset_variable_x001709A8(void) __attribute__((weak, section(".b3stub")));
void svm_reset_variable_x001709A8(void) {}
void func_001709A8_x001709A8(void) __asm__("func_001709A8");
/* SVM_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/svm.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001709A8_x001709A8(void)
{
    svm_init_cnt_x001709A8--;
    if (svm_init_cnt_x001709A8 == 0) {
        svm_reset_variable_x001709A8();
        memset_x001709A8(&svm_cberr_x001709A8, 0, sizeof(svm_cberr_x001709A8));
    }
}
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
void CFT_SetMaxAlpha_x00170AA8(int max) __asm__("func_00170AF8");
extern char *volatile DAT_00573ea8_x00170AA8 __asm__("D_00481480");
int *CFT_GetVersionStr_x00170AA8(void) __asm__("func_00170AE8");
void CFT_SetMaxAlpha_x00170AA8(int max) __asm__("func_00170AF8");
int *CFT_GetVersionStr_x00170AA8(void) __asm__("func_00170AE8");
void CFT_SetMaxAlpha_x00170AA8(int max) __asm__("func_00170AF8");
extern char ext_str0_x00170AA8[] __asm__("D_00465018");
void func_00170AA8_x00170AA8(void) __asm__("func_00170AA8");
/* CFT_Init: from https://github.com/crashbashash/DW4_Decomp (src/cri/cft.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00170AA8_x00170AA8(void)
{
    DAT_00573ea8_x00170AA8 = ext_str0_x00170AA8;
    *CFT_GetVersionStr_x00170AA8() = 0;
    CFT_SetMaxAlpha_x00170AA8(128);
}
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
typedef struct CftImage_x00170B98 {
    int f0;
    int *base;
    int stride;
    int f12;
    int height;
    int width;
} CftImage_x00170B98;
void func_00170B98_x00170B98(unsigned char **src, CftImage_x00170B98 *img, int *table) __asm__("func_00170B98");
/* CFT_Argb8888mbToZ32: from https://github.com/crashbashash/DW4_Decomp (src/cri/cft.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00170B98_x00170B98(unsigned char **src, CftImage_x00170B98 *img, int *table)
{
    int rows = img->height / 16;
    int cols = img->width / 16;
    unsigned char *s = *src;
    int *column = img->base;
    int y, x;
    int *o;
    for (y = 0; y < rows; y++) {
        o = column;
        s += cols * 1024;
        for (x = 0; x < cols; x++) {
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
            (o)[0] = (table)[(s)[0]]; (o)[1] = (table)[(s)[4]]; (o)[2] = (table)[(s)[8]]; (o)[3] = (table)[(s)[12]]; (o)[4] = (table)[(s)[16]]; (o)[5] = (table)[(s)[20]]; (o)[6] = (table)[(s)[24]]; (o)[7] = (table)[(s)[28]]; (o)[8] = (table)[(s)[32]]; (o)[9] = (table)[(s)[36]]; (o)[10] = (table)[(s)[40]]; (o)[11] = (table)[(s)[44]]; (o)[12] = (table)[(s)[48]]; (o)[13] = (table)[(s)[52]]; (o)[14] = (table)[(s)[56]]; (o)[15] = (table)[(s)[60]]; (s) += 64; (o) += img->stride;
        }
        column += 16;
    }
}
typedef struct { short v[4]; } E_2110_x00172110;
int func_00170B20_x00172110(void) __asm__("func_00170B20");
void func_00172110_x00172110(int mode, int lo, int hi, E_2110_x00172110 *t) __asm__("func_00172110");
void func_00172110_x00172110(int mode, int lo, int hi, E_2110_x00172110 *t)
{
    int i;
    int k;
    short y;
    double c;
    double sc;
    int range;
    E_2110_x00172110 *u = t + 256;
    E_2110_x00172110 *w = t + 512;

    k = func_00170B20_x00172110();
    for (i = 0; i < 256; i++) {
        y = (int)((i - 16) * 74.496 + 0.5);
        t[i].v[2] = y;
        t[i].v[1] = y;
        t[i].v[0] = y;
        c = i - 128;
        u[i].v[2] = (int)(c * 129.088 + 0.5);
        u[i].v[1] = (int)(c * -25.087999999999997 + 0.5);
        u[i].v[0] = 0;
        u[i].v[3] = 0;
        w[i].v[2] = 0;
        w[i].v[1] = (int)(c * -52.032 + 0.5);
        w[i].v[0] = (int)(c * 102.14399999999999 + 0.5);
        w[i].v[3] = 0;
    }
    range = hi - lo;
    sc = (double)k / (double)range;
    if (mode == 1) {
        for (i = 0; i < 256; i++) {
            if (i < lo)
                t[i].v[3] = k << 6;
            else if (hi < i)
                t[i].v[3] = 0;
            else
                t[i].v[3] = (int)((range - (i - lo)) * sc) << 6;
        }
    } else {
        for (i = 0; i < 256; i++) {
            if (i < lo)
                t[i].v[3] = 0;
            else if (hi < i)
                t[i].v[3] = k << 6;
            else
                t[i].v[3] = (int)((i - lo) * sc) << 6;
        }
    }
}
__asm__("# rebind func_00172110 0x00172110");
typedef struct { short v[4]; } E_23E0_x001723E0;
void func_001723E0_x001723E0(E_23E0_x001723E0 *t, unsigned char a, unsigned char b, unsigned char cc) __asm__("func_001723E0");
void func_001723E0_x001723E0(E_23E0_x001723E0 *t, unsigned char a, unsigned char b, unsigned char cc)
{
    int i;
    double c;
    double d;
    short y;
    E_23E0_x001723E0 *u = t + 256;
    E_23E0_x001723E0 *w = t + 512;

    for (i = 0; i < 256; i++) {
        c = i - 128;
        u[i].v[2] = (int)(c * 129.088 + 0.5);
        u[i].v[1] = (int)(c * -25.087999999999997 + 0.5);
        u[i].v[0] = 0;
        u[i].v[3] = 0;
        w[i].v[2] = 0;
        w[i].v[1] = (int)(c * -52.032 + 0.5);
        w[i].v[0] = (int)(c * 102.14399999999999 + 0.5);
        w[i].v[3] = 0;
    }
    for (i = 0; i < 9; i++) {
        t[i].v[2] = 0;
        t[i].v[1] = 0;
        t[i].v[0] = 0;
        t[i].v[3] = a;
    }
    for (i = 9; i < 0x86; i++) {
        d = (double)i - 16.0;
        y = (d < 0.0) ? 0 : (d > 255.0) ? -27703 : (int)(d * 64.0 * 2.318181818181818 + 0.5);
        t[i].v[3] = b << 6;
        t[i].v[2] = y;
        t[i].v[1] = y;
        t[i].v[0] = y;
    }
    for (i = 0x86; i < 256; i++) {
        d = 251.0 - (double)i;
        y = (d < 0.0) ? 0 : (d > 255.0) ? -27703 : (int)(d * 64.0 * 2.318181818181818 + 0.5);
        t[i].v[3] = cc << 6;
        t[i].v[2] = y;
        t[i].v[1] = y;
        t[i].v[0] = y;
    }
}
__asm__("# rebind func_001723E0 0x001723E0");
void func_001726E8(void) {

}
typedef struct CftGifPacket_x001726F0 {
    int w[0x600];
} CftGifPacket_x001726F0;
extern CftGifPacket_x001726F0 DAT_004bb3f8_x001726F0 __asm__("D_004233C8");
void func_001726F0_x001726F0(void *dstp) __asm__("func_001726F0");
/* CFT_MakeArgb8888ColAdjTbl: from https://github.com/crashbashash/DW4_Decomp (src/cri/cft.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001726F0_x001726F0(void *dstp)
{
    CftGifPacket_x001726F0 *dst = dstp;
    *dst = DAT_004bb3f8_x001726F0;
}
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
typedef struct CftPlane_x00172858 {
    unsigned char *base;
    int height;
    int width;
} CftPlane_x00172858;
typedef struct CftArgbBuf_x00172858 {
    unsigned char *base;
    int f4;
    int f8;
    int stride;
} CftArgbBuf_x00172858;
void func_00172858_x00172858(CftPlane_x00172858 *plane, CftArgbBuf_x00172858 *dest, unsigned char *table) __asm__("func_00172858");
/* FUN_00284f30: from https://github.com/crashbashash/DW4_Decomp (src/cri/cft.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00172858_x00172858(CftPlane_x00172858 *plane, CftArgbBuf_x00172858 *dest, unsigned char *table)
{
    int rows = plane->height / 16;
    int cols = plane->width / 32;
    unsigned char *s = plane->base + cols * 384;
    int stride = dest->stride;
    unsigned char *d;
    int y, x, r, c;
    for (y = 0; y < rows; y++) {
        s = plane->base + cols * y * 768 + cols * 384;
        for (x = 0; x < cols; x++) {
            d = dest->base + y * 64 + x * stride * 16 + 3;
            for (r = 0; r < 16; r++) {
                for (c = 0; c < 16; c++) {
                    *d = table[*s];
                    s++;
                    d += 4;
                }
                d += stride - 64;
            }
            s += 128;
        }
    }
}
typedef struct CftPlane_x00172968 {
    unsigned char *base;
    int height;
    int width;
} CftPlane_x00172968;
typedef struct CftArgbBuf_x00172968 {
    unsigned char *base;
    int f4;
    int f8;
    int stride;
} CftArgbBuf_x00172968;
void func_00172968_x00172968(CftPlane_x00172968 *plane, CftArgbBuf_x00172968 *dest, unsigned char *table) __asm__("func_00172968");
/* FUN_00285040: from https://github.com/crashbashash/DW4_Decomp (src/cri/cft.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00172968_x00172968(CftPlane_x00172968 *plane, CftArgbBuf_x00172968 *dest, unsigned char *table)
{
    int rows = plane->height / 16;
    int cols = plane->width / 32;
    unsigned char *s = plane->base + cols * 384;
    unsigned char *d = dest->base + 3;
    int y, x, i;
    for (y = 0; y < rows; y++) {
        s = plane->base + cols * y * 768 + cols * 384;
        d = dest->base + cols * y * 1024 + 3;
        for (x = 0; x < cols; x++) {
            for (i = 0; i < 256; i++) {
                *d = table[*s];
                s++;
                d += 4;
            }
            s += 128;
        }
    }
}
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
extern s32 (*D_00424BCC_x00172A98)(void) __asm__("D_00424BCC");
s32 func_00172A98_x00172A98(void) __asm__("func_00172A98");
s32 func_00172A98_x00172A98(void)
{
    if (D_00424BCC_x00172A98 != 0) {
        return D_00424BCC_x00172A98();
    }
    return 0;
}
extern s32 (*D_00424BD0_x00172AC8)(void) __asm__("D_00424BD0");
s32 func_00172AC8_x00172AC8(void) __asm__("func_00172AC8");
s32 func_00172AC8_x00172AC8(void)
{
    if (D_00424BD0_x00172AC8 != 0) {
        return D_00424BD0_x00172AC8();
    }
    return 0;
}
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
extern s32 (*D_00424BDC_x00172B48)(void) __asm__("D_00424BDC");
s32 func_00172B48_x00172B48(void) __asm__("func_00172B48");
s32 func_00172B48_x00172B48(void)
{
    if (D_00424BDC_x00172B48 != 0) {
        return D_00424BDC_x00172B48();
    }
    return 0;
}
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
typedef s32 (*CbFn_x00172F48)(s32);
typedef struct { CbFn_x00172F48 fn; s32 arg; s32 val; } CbObj_x00172F48;
s32 func_00172F48_x00172F48(CbObj_x00172F48 *o, s32 v) __asm__("func_00172F48");
s32 func_00172F48_x00172F48(CbObj_x00172F48 *o, s32 v)
{
    s32 r = v;
    o->val = r;
    if (r != 0) {
        r = (s32)o->fn;
        if (r != 0) {
            r = ((CbFn_x00172F48)r)(o->arg);
        }
    }
    return r;
}
s32 func_00172EF8_x00172F80(s32, s32) __asm__("func_00172EF8");
s32 func_00178B80_x00172F80() __asm__("func_00178B80");
s32 func_0017E040_x00172F80(s32) __asm__("func_0017E040");
s32 func_0017E268_x00172F80(s32, s32, s32) __asm__("func_0017E268");
void func_00172F80_x00172F80(s32 arg0, s32 arg1) __asm__("func_00172F80");
void func_00172F80_x00172F80(s32 arg0, s32 arg1)
{
  int new_var;
  s32 var_s1;
  s32 temp_v0;
  if (func_00178B80_x00172F80() != 0)
  {
    func_00172EF8_x00172F80(0, 0xFF03020A);
    return;
  }
 do { new_var = 4; var_s1 = 0xFF030305; loop_4: temp_v0 = func_0017E040_x00172F80(arg1); if (temp_v0 != 0) { if (temp_v0 & 0xCC) { var_s1 = 0; } else if (func_0017E268_x00172F80(arg1, 1, 4) == new_var) { goto loop_4; } } } while (0);
  func_00172EF8_x00172F80(arg0, var_s1);
}
void func_00173038(void) {

}
struct SfdSj_x00173040;
typedef struct M2vErrInf_x00173040 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00173040;
typedef struct Mpeg2Ext_x00173040 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00173040;
typedef enum M2vFrameRate_x00173040 {
    M2V_FRAME_RATE_FORBIDDEN_x00173040 = 0
} M2vFrameRate_x00173040;
typedef enum M2vPicType_x00173040 {
    M2V_PICTYPE_I_x00173040 = 1,
    M2V_PICTYPE_P_x00173040 = 2,
    M2V_PICTYPE_B_x00173040 = 3,
    M2V_PICTYPE_D_x00173040 = 4
} M2vPicType_x00173040;
typedef enum M2vPicStruct_x00173040 {
    M2V_PICSTRUCT_TOP_FIELD_x00173040 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00173040 = 2,
    M2V_PICSTRUCT_FRAME_x00173040 = 3
} M2vPicStruct_x00173040;
typedef enum M2vPicAtrF64_x00173040 {
    M2V_PICATR_F64_0_x00173040 = 0
} M2vPicAtrF64_x00173040;
typedef struct M2vPicAtr_x00173040 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00173040 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00173040 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00173040 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00173040 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00173040;
typedef void (*M2vUsrDatFn_x00173040)(void *obj, int level);
typedef struct M2vUsrSj_x00173040 {
    struct SfdSj_x00173040 *sj;
    M2vUsrDatFn_x00173040 fn;
    void *obj;
} M2vUsrSj_x00173040;
typedef struct M2vPicUsr_x00173040 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00173040;
typedef void (*M2vCondFn_x00173040)();
typedef struct M2vObj_x00173040 {
    int stat;
    M2vErrInf_x00173040 err;
    M2vCondFn_x00173040 cond[16];
    M2vPicAtr_x00173040 picatr;
    char pad216[64];
    M2vUsrSj_x00173040 usrsj[4];
    M2vPicUsr_x00173040 picusr;
    char pad340[12];
    Mpeg2Ext_x00173040 ext;
    char pad1656[8];
} M2vObj_x00173040;
int M2VLIB_CheckHn_x00173040(M2vObj_x00173040 *hn) __asm__("func_00178B80");
extern void M2V_SetErrFunc_x00173040(M2vObj_x00173040 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
int M2VERR_SetCode_x00173040(M2vObj_x00173040 *hn, int code) __asm__("func_00172EF8");
void func_00173040_x00173040(M2vObj_x00173040 *hn, M2vPicAtr_x00173040 *picatr) __asm__("func_00173040");
/* M2V_GetPicAtr: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vget.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00173040_x00173040(M2vObj_x00173040 *hn, M2vPicAtr_x00173040 *picatr)
{
    if (M2VLIB_CheckHn_x00173040(hn) != 0) {
        M2VERR_SetCode_x00173040(0, 0xFF03020C);
        return;
    }
    *picatr = hn->picatr;
}
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
void *memset_x001732D8(void *, int, unsigned int) __asm__("memset");
void func_001732D8_x001732D8(u8 *a0) __asm__("func_001732D8");
void func_001732D8_x001732D8(u8 *a0)
{
    u8 *p = a0 + 0x158;
    memset_x001732D8(p, 0, 0x570);
    *(s32 *)(p + 0x70) = 0;
    *(s32 *)(p + 0xD4) = 1;
    *(s32 *)(p + 0x564) = 0;
    *(s32 *)(p + 0x74) = 0xff;
    *(s32 *)(p + 0x78) = 0xff;
    *(s32 *)(p + 0x4C8) = 0;
    *(s32 *)(p + 0x4CC) = 0;
    *(s32 *)(p + 0x4D0) = 0;
    *(s32 *)(p + 0x4D4) = 0;
    *(s32 *)(p + 0x4D8) = 0;
    *(s32 *)(p + 0x4DC) = 0;
    *(s32 *)(p + 0x4E4) = 0;
    *(s32 *)(p + 0x424) = 0;
    *(s32 *)(p + 0xD0) = 0;
    *(s32 *)(p + 0x7C) = 0xff;
}
struct SfdSj_x00173350;
typedef struct M2vErrInf_x00173350 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00173350;
typedef struct Mpeg2Ext_x00173350 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00173350;
typedef enum M2vFrameRate_x00173350 {
    M2V_FRAME_RATE_FORBIDDEN_x00173350 = 0
} M2vFrameRate_x00173350;
typedef enum M2vPicType_x00173350 {
    M2V_PICTYPE_I_x00173350 = 1,
    M2V_PICTYPE_P_x00173350 = 2,
    M2V_PICTYPE_B_x00173350 = 3,
    M2V_PICTYPE_D_x00173350 = 4
} M2vPicType_x00173350;
typedef enum M2vPicStruct_x00173350 {
    M2V_PICSTRUCT_TOP_FIELD_x00173350 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00173350 = 2,
    M2V_PICSTRUCT_FRAME_x00173350 = 3
} M2vPicStruct_x00173350;
typedef enum M2vPicAtrF64_x00173350 {
    M2V_PICATR_F64_0_x00173350 = 0
} M2vPicAtrF64_x00173350;
typedef struct M2vPicAtr_x00173350 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00173350 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00173350 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00173350 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00173350 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00173350;
typedef void (*M2vUsrDatFn_x00173350)(void *obj, int level);
typedef struct M2vUsrSj_x00173350 {
    struct SfdSj_x00173350 *sj;
    M2vUsrDatFn_x00173350 fn;
    void *obj;
} M2vUsrSj_x00173350;
typedef struct M2vPicUsr_x00173350 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00173350;
typedef void (*M2vCondFn_x00173350)();
typedef struct M2vObj_x00173350 {
    int stat;
    M2vErrInf_x00173350 err;
    M2vCondFn_x00173350 cond[16];
    M2vPicAtr_x00173350 picatr;
    char pad216[64];
    M2vUsrSj_x00173350 usrsj[4];
    M2vPicUsr_x00173350 picusr;
    char pad340[12];
    Mpeg2Ext_x00173350 ext;
    char pad1656[8];
} M2vObj_x00173350;
extern void M2V_SetErrFunc_x00173350(M2vObj_x00173350 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct SfdSj_x00173350 SfdSj_x00173350;
typedef struct SfdSjChunk_x00173350 {
    char *data;
    int len;
} SfdSjChunk_x00173350;
typedef struct SfdSjVtbl_x00173350 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00173350 *sj);
    int (*getUuid)(SfdSj_x00173350 *sj);
    void (*reset)(SfdSj_x00173350 *sj);
    void (*getChunk)(SfdSj_x00173350 *sj, int id, int n, SfdSjChunk_x00173350 *ck);
    void (*ungetChunk)(SfdSj_x00173350 *sj, int id, SfdSjChunk_x00173350 *ck);
    void (*putChunk)(SfdSj_x00173350 *sj, int id, SfdSjChunk_x00173350 *ck);
    int (*getNumData)(SfdSj_x00173350 *sj, int id);
} SfdSjVtbl_x00173350;
struct SfdSj_x00173350 {
    SfdSjVtbl_x00173350 *vtbl;
};
extern void mpvhook_SetErrFunc_x00173350(M2vObj_x00173350 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef struct AdxPdObj_x00173350 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00173350;
typedef struct AdxDecPara_x00173350 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00173350;
struct Pl2Enc_x00173350;
typedef struct AdxbObj_x00173350 AdxbObj_x00173350;
typedef short *(*AdxbGetWrFunc_x00173350)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00173350)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00173350 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00173350 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00173350 dp;
    AdxbGetWrFunc_x00173350 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00173350 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00173350 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00173350(AdxbObj_x00173350 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00173350 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00173350 *adxb;
    SfdSj_x00173350 *sji;
    SfdSj_x00173350 *sjo[2];
    SfdSjChunk_x00173350 cki;
    SfdSjChunk_x00173350 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00173350;
extern void ADXSJD_EntryFltFunc_x00173350(AdxSjdObj_x00173350 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00173350(AdxSjdObj_x00173350 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00173350)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00173350)(CvFsErrFn_x00173350 func, void *obj);
typedef int (*CvFsPathFn_x00173350)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00173350)(void);
typedef int (*CvFsOpenFn_x00173350)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00173350)(int fd);
typedef int (*CvFsFdIntFn_x00173350)(int fd);
typedef int (*CvFsSeekFn_x00173350)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00173350)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00173350)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00173350)(void);
typedef int (*CvFsLoadDirInfoFn_x00173350)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00173350)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00173350)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00173350 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00173350 entry_err_func;
    CvFsPathFn_x00173350 get_file_size;
    CvFsGetFreeSizeFn_x00173350 get_free_size;
    CvFsOpenFn_x00173350 open;
    CvFsFdFn_x00173350 close;
    CvFsSeekFn_x00173350 seek;
    CvFsFdIntFn_x00173350 tell;
    CvFsXferFn_x00173350 req_rd;
    CvFsXferFn_x00173350 req_wr;
    CvFsFdFn_x00173350 stop_tr;
    CvFsFdIntFn_x00173350 get_stat;
    CvFsFdIntFn_x00173350 get_sct_len;
    CvFsSetSctLenFn_x00173350 set_sct_len;
    CvFsFdIntFn_x00173350 get_num_tr;
    CvFsPathFn_x00173350 change_dir;
    CvFsPathFn_x00173350 is_exist_file;
    CvFsGetNumFilesFn_x00173350 get_num_files;
    CvFsLoadDirInfoFn_x00173350 load_dir_info;
    CvFsFdIntFn_x00173350 get_max_byte_rate;
    CvFsPathFn_x00173350 make_dir;
    CvFsPathFn_x00173350 remove_dir;
    CvFsPathFn_x00173350 delete_file;
    CvFsGetFileSizeExFn_x00173350 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00173350 opt_fn2;
} CvFsVtbl_x00173350;
typedef struct CvFsHandle_x00173350 {
    CvFsVtbl_x00173350 *vtbl;
    int fd;
} CvFsHandle_x00173350;
extern CvFsVtbl_x00173350 *addDevice_x00173350(char *devname, CvFsVtbl_x00173350 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00173350 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00173350 *sj;
    CvFsHandle_x00173350 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00173350 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00173350;
extern void ADXSTM_EntryEosFunc_x00173350(AdxStmObj_x00173350 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void func_00173350_x00173350(M2vObj_x00173350 *hn, int no, SfdSj_x00173350 *sj, M2vUsrDatFn_x00173350 fn, void *obj) __asm__("func_00173350");
/* M2V_SetUsrSj: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vhdec.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00173350_x00173350(M2vObj_x00173350 *hn, int no, SfdSj_x00173350 *sj, M2vUsrDatFn_x00173350 fn, void *obj)
{
    M2vUsrSj_x00173350 *usr = &hn->usrsj[no];
    usr->sj = sj;
    usr->fn = fn;
    usr->obj = obj;
}
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
typedef enum { CP_0_x00173418, CP_1_x00173418 } Cp_3418_x00173418;
typedef enum { FR_0_x00173418, FR_1_x00173418 } Fr_3418_x00173418;
typedef enum { PT_0_x00173418, PT_1_x00173418 } Pt_3418_x00173418;
typedef enum { PS_0_x00173418, PS_1_x00173418 } Ps_3418_x00173418;
typedef struct { int horizontal_size; int vertical_size; int mb_width; int mb_height; Fr_3418_x00173418 frame_rate_code; int temporal_reference; Pt_3418_x00173418 picture_coding_type; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int gsc_count; int shc_count; Ps_3418_x00173418 picture_structure; int chroma_format; Cp_3418_x00173418 chroma_pos_h; int chroma_pos_v; int bit_rate; int vbv_buffer_size; unsigned short display_horizontal_size; unsigned short display_vertical_size; unsigned char field_count; unsigned char progressive_frame; unsigned char top_field_first; signed char repeat_first_field; signed char second_field; unsigned char aspect_ratio_information; unsigned char constrained_parameters_flag; unsigned char frame_rate_extension_n; unsigned char frame_rate_extension_d; unsigned char profile_and_level_indication; unsigned char progressive_sequence; unsigned char low_delay; unsigned char video_format; unsigned char colour_description; unsigned char colour_primaries; unsigned char transfer_characteristics; unsigned char matrix_coefficients; } PicAtr_3418_x00173418;
typedef struct { char p0[0xC]; int aspect_ratio_information; int frame_rate_code; char p14[0xC]; int constrained_parameters_flag; char p24[0x20]; int profile_and_level_indication; int progressive_sequence; int chroma_format; char p50[0x10]; int low_delay; int frame_rate_extension_n; int frame_rate_extension_d; int video_format; int colour_description; int colour_primaries; int transfer_characteristics; int matrix_coefficients; int display_horizontal_size; int display_vertical_size; char p88[0x34]; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; char pD0[0xC]; int temporal_reference; int picture_coding_type; char pE4[0x34]; int picture_structure; int top_field_first; char p120[0x14]; int repeat_first_field; char p138[0x4]; int progressive_frame; char p140[0x184]; int horizontal_size; int vertical_size; int mb_width; int mb_height; char p2D4[0x24]; int bit_rate; int vbv_buffer_size; char p300[0x120]; int second_field; char p424[0xC4]; int shc_count; char p4EC[0xC]; int gsc_count; } Ext_3418_x00173418;
typedef struct { char p0[0x58]; PicAtr_3418_x00173418 picatr; char p[0x158 - 0x58 - sizeof(PicAtr_3418_x00173418)]; Ext_3418_x00173418 ext; } Hn_3418_x00173418;
extern unsigned char D_00465230_x00173418[] __asm__("D_00465230");
void func_00173418_x00173418(Hn_3418_x00173418 *hn) __asm__("func_00173418");
void func_00173418_x00173418(Hn_3418_x00173418 *hn)
{
    Ext_3418_x00173418 *h = &hn->ext;
    PicAtr_3418_x00173418 *a = &hn->picatr;

    a->horizontal_size = h->horizontal_size;
    a->vertical_size = h->vertical_size;
    a->mb_width = h->mb_width;
    a->mb_height = h->mb_height;
    a->frame_rate_code = h->frame_rate_code;
    a->temporal_reference = h->temporal_reference;
    a->picture_coding_type = h->picture_coding_type;
    a->drop_frame_flag = h->drop_frame_flag;
    a->time_code_hours = h->time_code_hours;
    a->time_code_minutes = h->time_code_minutes;
    a->time_code_seconds = h->time_code_seconds;
    a->time_code_pictures = h->time_code_pictures;
    a->gsc_count = h->gsc_count;
    a->shc_count = h->shc_count;
    a->picture_structure = h->picture_structure;
    a->chroma_format = h->chroma_format;
    a->chroma_pos_h = 0;
    a->chroma_pos_v = 1;
    a->bit_rate = h->bit_rate;
    a->vbv_buffer_size = h->vbv_buffer_size;
    a->display_horizontal_size = h->display_horizontal_size;
    a->display_vertical_size = h->display_vertical_size;
    a->field_count = D_00465230_x00173418[(h->progressive_sequence * 2 + h->repeat_first_field) * 2 + h->top_field_first];
    a->progressive_frame = h->progressive_frame;
    a->top_field_first = h->top_field_first;
    a->repeat_first_field = h->repeat_first_field;
    a->second_field = h->second_field;
    a->aspect_ratio_information = h->aspect_ratio_information;
    a->constrained_parameters_flag = h->constrained_parameters_flag;
    a->frame_rate_extension_n = h->frame_rate_extension_n;
    a->frame_rate_extension_d = h->frame_rate_extension_d;
    a->profile_and_level_indication = h->profile_and_level_indication;
    a->progressive_sequence = h->progressive_sequence;
    a->low_delay = h->low_delay;
    a->video_format = h->video_format;
    a->colour_description = h->colour_description;
    a->colour_primaries = h->colour_primaries;
    a->transfer_characteristics = h->transfer_characteristics;
    a->matrix_coefficients = h->matrix_coefficients;
}
typedef struct { char *data; int len; } Ck_3580_x00173580;
struct Sj_3580_x00173580;
typedef struct { char pad[0x18]; void (*getck)(struct Sj_3580_x00173580 *, int, int, Ck_3580_x00173580 *); void (*ungetck)(struct Sj_3580_x00173580 *, int, Ck_3580_x00173580 *); void (*putck)(struct Sj_3580_x00173580 *, int, Ck_3580_x00173580 *); } Vt_3580_x00173580;
typedef struct Sj_3580_x00173580 { Vt_3580_x00173580 *vt; } Sj_3580_x00173580;
unsigned int func_0017E040_x00173580(Sj_3580_x00173580 *) __asm__("func_0017E040");
int func_00173A78_x00173580(void *, char *) __asm__("func_00173A78");
int func_001742A8_x00173580(void *, char *) __asm__("func_001742A8");
int func_001743C8_x00173580(void *, char *) __asm__("func_001743C8");
int func_00174798_x00173580(void *, char *) __asm__("func_00174798");
int func_001777F0_x00173580(void *, char *) __asm__("func_001777F0");
int func_00177D48_x00173580(void *, char *) __asm__("func_00177D48");
void func_0016F050_x00173580(Ck_3580_x00173580 *, int, Ck_3580_x00173580 *, Ck_3580_x00173580 *) __asm__("func_0016F050");
void func_00173580_x00173580(void *m, Sj_3580_x00173580 *sj) __asm__("func_00173580");
void func_00173580_x00173580(void *m, Sj_3580_x00173580 *sj)
{
    Ck_3580_x00173580 ck;
    Ck_3580_x00173580 rest;
    unsigned int type;
    int end;

    while ((type = func_0017E040_x00173580(sj)) != 0) {
        sj->vt->getck(sj, 1, 0x7FFFFFFF, &ck);
        end = 0;
        switch (type) {
        case 0x40:
            end = func_00173A78_x00173580(m, ck.data);
            break;
        case 0x80:
            end = func_001742A8_x00173580(m, ck.data);
            break;
        case 0x20:
            end = func_001743C8_x00173580(m, ck.data);
            break;
        case 0x10:
            end = func_00174798_x00173580(m, ck.data);
            break;
        case 0x8:
            end = func_001777F0_x00173580(m, ck.data);
            break;
        case 0x4:
            end = func_00177D48_x00173580(m, ck.data);
            break;
        }
        if (end == 0) {
            sj->vt->ungetck(sj, 1, &ck);
            return;
        }
        func_0016F050_x00173580(&ck, end - (int)ck.data, &ck, &rest);
        sj->vt->putck(sj, 0, &ck);
        sj->vt->ungetck(sj, 1, &rest);
    }
}
void func_00173740(void) {

}
typedef struct { int pad0; unsigned int f4, f8; char padC[0x48 - 0xC]; int f48, f4C; unsigned int f50, f54; char pad58[0x118 - 0x58]; int f118; char pad11C[0x2C4 - 0x11C]; unsigned int width, height, mbw, mbh; char pad2D4[0x410 - 0x2D4]; int w, h, w2, h2; } Mpv3748_x00173748;
void func_00173748_x00173748(Mpv3748_x00173748 *m) __asm__("func_00173748");
void func_00173748_x00173748(Mpv3748_x00173748 *m)
{
    int width = (m->f50 << 12) | m->f4;
    int height = (m->f54 << 12) | m->f8;

    m->mbw = (unsigned int)(width + 15) >> 4;
    m->width = width;
    m->height = height;
    if (m->f48 == 1) {
        m->mbh = (unsigned int)(height + 15) >> 4;
    } else if (m->f118 == 3) {
        m->mbh = ((unsigned int)(height + 31) >> 5) * 2;
    } else {
        m->mbh = (unsigned int)(height + 31) >> 5;
    }
    m->w = m->mbw * 16;
    m->h = m->mbh * 16;
    m->w2 = (m->f4C != 3) ? m->w >> 1 : m->w;
    m->h2 = (m->f4C == 1) ? m->h >> 1 : m->h;
}
typedef struct { char pad0[0xC]; int fC; char pad10[0x80 - 0x10]; unsigned int f80; unsigned int f84; char pad88[0x2C4 - 0x88]; unsigned int f2C4; unsigned int f2C8; char pad2CC[0x2D8 - 0x2CC]; double f2D8; double f2E0; } M_3810_x00173810;
extern double D_004651B0_x00173810[] __asm__("D_004651B0");
void func_00173810_x00173810(M_3810_x00173810 *m) __asm__("func_00173810");
void func_00173810_x00173810(M_3810_x00173810 *m)
{
    if (m->fC == 1) {
        m->f2D8 = (double)m->f2C4 / m->f2C8;
        m->f2E0 = 1.0;
    } else {
        m->f2D8 = D_004651B0_x00173810[m->fC];
        if (m->f80 != 0 && m->f84 != 0) {
            m->f2E0 = (m->f2D8 * m->f80) / m->f84;
        } else {
            m->f2E0 = (m->f2D8 * m->f2C4) / m->f2C8;
        }
    }
}
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
/* padding for ee-gcc (scripts/func_insert.py, moved_pad) */
extern int b3m38101_000000;
extern s32 D_00465240_x00173A00[] __asm__("D_00465240");
extern s32 D_00465250_x00173A00[] __asm__("D_00465250");
void func_00173A00_x00173A00(s32 *p) __asm__("func_00173A00");
void func_00173A00_x00173A00(s32 *p)
{
    s32 v;
    s32 idx;

    if (p[70] == 3) {
        p[265] = 0;
        p[264] = 0;
    } else {
        v = p[265];
        p[265] = v + 1;
        p[264] = v - (v / 2) * 2;
    }
    idx = p[69];
    p[219] = D_00465240_x00173A00[idx];
    p[223] = D_00465250_x00173A00[idx];
}
void func_00173A70(void) {

}
typedef struct { int sequence_header_code; int horizontal_size_value; int vertical_size_value; int aspect_ratio_information; int frame_rate_code; int bit_rate_value; int marker_bit; int vbv_buffer_size_value; int constrained_parameters_flag; int load_intra_quantiser_matrix; int load_non_intra_quantiser_matrix; char p2C[0x8C]; int group_start_code; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int closed_gop; int broken_link; int picture_start_code; int temporal_reference; int picture_coding_type; int vbv_delay; int full_pel_forward_vector; int forward_f_code; int full_pel_backward_vector; int backward_f_code; int extra_bit_picture; int extra_information_picture; char p100[0x1C4]; int horizontal_size; int vertical_size; char p2CC[0x5C]; int ext_state; int expected_ext_id; char p330[0x1AC]; int header_level; char p4E0[0x8]; int shc_count; char p4EC[0xC]; int gsc_count; int psc_count; int picture_count[4]; char p510[0x40]; int error_count; int warning_count; } Ext_3A78_x00173A78;
void func_00173740_x00173A78(Ext_3A78_x00173A78 *) __asm__("func_00173740");
void func_00173748_x00173A78(Ext_3A78_x00173A78 *) __asm__("func_00173748");
void func_00173810_x00173A78(Ext_3A78_x00173A78 *) __asm__("func_00173810");
void func_00173A70_x00173A78(Ext_3A78_x00173A78 *) __asm__("func_00173A70");
char *func_00173A78_x00173A78(char *ctx, char *buf) __asm__("func_00173A78");
char *func_00173A78_x00173A78(char *ctx, char *buf)
{
    int i2;
    Ext_3A78_x00173A78 *h = (Ext_3A78_x00173A78 *)(ctx + 0x158);
    char *p;
    int cnt;
    unsigned int acc, nxt;

    h->header_level = 1;
    h->shc_count++;
    if ((h->ext_state != 0 && h->ext_state != 64) || h->expected_ext_id != 0) {
        h->error_count++;
    }
    func_00173740_x00173A78(h);
    p = (char *)((unsigned int)buf & ~3);
    cnt = (buf - p) << 3;
    { (acc) = *p++; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    acc <<= cnt;
    if (cnt != 0) {
        h->sequence_header_code = acc | (nxt >> (32 - cnt));
        acc = nxt << cnt;
    } else {
        h->sequence_header_code = acc;
        acc = nxt;
    }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    { if (cnt >= 32 - (12)) { cnt -= 32 - (12); if (cnt != 0) { acc |= nxt >> ((12) - cnt); (h->horizontal_size_value) = acc >> (32 - (12)); acc = nxt << cnt; } else { (h->horizontal_size_value) = acc >> (32 - (12)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->horizontal_size_value) = acc >> (32 - (12)); acc <<= (12); cnt += (12); } }
    { if (cnt >= 32 - (12)) { cnt -= 32 - (12); if (cnt != 0) { acc |= nxt >> ((12) - cnt); (h->vertical_size_value) = acc >> (32 - (12)); acc = nxt << cnt; } else { (h->vertical_size_value) = acc >> (32 - (12)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->vertical_size_value) = acc >> (32 - (12)); acc <<= (12); cnt += (12); } }
    { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->aspect_ratio_information) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->aspect_ratio_information) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->aspect_ratio_information) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } }
    { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->frame_rate_code) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->frame_rate_code) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->frame_rate_code) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } }
    { if (cnt >= 32 - (18)) { cnt -= 32 - (18); if (cnt != 0) { acc |= nxt >> ((18) - cnt); (h->bit_rate_value) = acc >> (32 - (18)); acc = nxt << cnt; } else { (h->bit_rate_value) = acc >> (32 - (18)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->bit_rate_value) = acc >> (32 - (18)); acc <<= (18); cnt += (18); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    { if (cnt >= 32 - (10)) { cnt -= 32 - (10); if (cnt != 0) { acc |= nxt >> ((10) - cnt); (h->vbv_buffer_size_value) = acc >> (32 - (10)); acc = nxt << cnt; } else { (h->vbv_buffer_size_value) = acc >> (32 - (10)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->vbv_buffer_size_value) = acc >> (32 - (10)); acc <<= (10); cnt += (10); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->constrained_parameters_flag) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->constrained_parameters_flag) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->constrained_parameters_flag) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    if (h->load_intra_quantiser_matrix)
        { int i; for (i = 0; i < 64; i++) { cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { acc <<= 8; } } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    i2 = 63; if (h->load_non_intra_quantiser_matrix)
        { skp:  cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { acc <<= 8; } if (--i2 >= 0) goto skp;  }
    func_00173748_x00173A78(h);
    func_00173810_x00173A78(h);
    func_00173A70_x00173A78(h);
    if (h->horizontal_size == 0) {
        h->error_count++;
    }
    if (h->horizontal_size & 15) {
        h->warning_count++;
    }
    if (h->vertical_size == 0) {
        h->error_count++;
    }
    if (h->vertical_size & 15) {
        h->warning_count++;
    }
    if (h->aspect_ratio_information < 1 || h->aspect_ratio_information > 4) {
        h->error_count++;
    }
    if (h->frame_rate_code < 1 || h->frame_rate_code > 8) {
        h->error_count++;
    }
    if (h->marker_bit == 0) {
        h->error_count++;
    }
    if (h->constrained_parameters_flag != 0) {
        h->error_count++;
    }
    h->ext_state = 16;
    h->expected_ext_id = 1;
    return buf + ((cnt + (p - buf) * 8 - 57) / 8);
}
typedef struct { char pad0[0x2C]; unsigned int f2C; char pad30[0x328 - 0x30]; int f328; int f32C; char pad330[0x4DC - 0x330]; int f4DC; char pad4E0[0x4EC - 0x4E0]; int f4EC; char pad4F0[0x550 - 0x4F0]; int f550; } St_42A8_x001742A8;
char *func_001742A8_x001742A8(char *m, char *buf) __asm__("func_001742A8");
char *func_001742A8_x001742A8(char *m, char *buf)
{
    St_42A8_x001742A8 *s = (St_42A8_x001742A8 *)(m + 0x158);
    unsigned char *p;
    int sh;
    unsigned int w0;
    unsigned int w1;

    s->f4EC++;
    s->f4DC = 1;
    if ((s->f328 != 0 && s->f328 != 0x80) || s->f32C != 0) {
        s->f550++;
    }
    p = (unsigned char *)((int)buf & ~3);
    sh = ((int)buf - (int)p) * 8;
    w0 = (signed char)*p++;
    w0 <<= 8;
    w0 |= *p++;
    w0 <<= 8;
    w0 |= *p++;
    w0 <<= 8;
    w0 |= *p++;
    w1 = (signed char)*p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w0 <<= sh;
    if (sh != 0) {
        s->f2C = w0 | (w1 >> (32 - sh));
        w0 = w1 << sh;
    } else {
        s->f2C = w0;
        w0 = w1;
    }
    w1 = (signed char)*p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    s->f328 = 0;
    s->f32C = 0;
    return buf + (sh + ((int)p - (int)buf) * 8 - 57) / 8;
}
typedef struct { char pad0[0x30]; unsigned int f30; char pad34[0x328 - 0x34]; int f328; int f32C; char pad330[0x4F0 - 0x330]; int f4F0; char pad4F4[0x550 - 0x4F4]; int f550; } St_43C8_x001743C8;
void func_001745E0_x001743C8(char *, char *, int) __asm__("func_001745E0");
char *func_001743C8_x001743C8(char *m, char *buf) __asm__("func_001743C8");
char *func_001743C8_x001743C8(char *m, char *buf)
{
    St_43C8_x001743C8 *s = (St_43C8_x001743C8 *)(m + 0x158);
    unsigned char *p;
    int sh;
    unsigned int w0;
    unsigned int w1;
    unsigned int v;
    int cnt;

    s->f4F0++;
    if ((s->f328 != 0 && s->f328 != 0x20) || s->f32C != 0) {
        s->f550++;
    }
    p = (unsigned char *)((int)buf & ~3);
    sh = ((int)buf - (int)p) * 8;
    w0 = (signed char)*p++;
    w0 <<= 8;
    w0 |= *p++;
    w0 <<= 8;
    w0 |= *p++;
    w0 <<= 8;
    w0 |= *p++;
    w1 = (signed char)*p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w0 <<= sh;
    if (sh != 0) {
        s->f30 = w0 | (w1 >> (32 - sh));
        w0 = w1 << sh;
    } else {
        s->f30 = w0;
        w0 = w1;
    }
    w1 = (signed char)*p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    w1 <<= 8;
    w1 |= *p++;
    cnt = 0;
    while (cnt <= 0xFFFFF) {
        v = w0 >> 8;
        w0 <<= 8;
        if (sh >= 9) {
            v |= w1 >> (40 - sh);
        }
        if (v == 1) {
            break;
        }
        sh += 8;
        cnt++;
        if (sh >= 32) {
            sh -= 32;
            w0 = w1 << sh;
            w1 = (signed char)*p++;
            w1 <<= 8;
            w1 |= *p++;
            w1 <<= 8;
            w1 |= *p++;
            w1 <<= 8;
            w1 |= *p++;
        }
    }
    func_001745E0_x001743C8(m, buf, cnt + 4);
    return buf + (sh + ((int)p - (int)buf) * 8 - 57) / 8;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p32_05d0f2_0_x __asm__("b3cse_asmpad_05d0f2_0_xx");
typedef struct { char *data; int len; } Ck_45E0_x001745E0;
struct Sj_45E0_x001745E0;
typedef struct { char pad[0x18]; void (*getck)(struct Sj_45E0_x001745E0 *, int, int, Ck_45E0_x001745E0 *); void *pad1C; void (*putck)(struct Sj_45E0_x001745E0 *, int, Ck_45E0_x001745E0 *); } Vt_45E0_x001745E0;
typedef struct Sj_45E0_x001745E0 { Vt_45E0_x001745E0 *vt; } Sj_45E0_x001745E0;
typedef struct { Sj_45E0_x001745E0 *sj; void (*cb)(void *, int); void *cbobj; } Ent_45E0_x001745E0;
typedef struct { char pad0[0x118]; Ent_45E0_x001745E0 ent[4]; char pad148[0x148 - 0x148]; int f148; char pad14C[0x578 - 0x14C]; int f578; char pad57C[0x634 - 0x57C]; int idx; } Mpv_45E0_x001745E0;
extern char D_00465238_x001745E0[] __asm__("D_00465238");
void *memcpy_x001745E0(void *, const void *, unsigned int) __asm__("memcpy");
void func_00174758_x001745E0(Mpv_45E0_x001745E0 *, char *, int) __asm__("func_00174758");
void func_001745E0_x001745E0(Mpv_45E0_x001745E0 *m, char *src, int len) __asm__("func_001745E0");
void func_001745E0_x001745E0(Mpv_45E0_x001745E0 *m, char *src, int len)
{
    Ck_45E0_x001745E0 ck;
    Ck_45E0_x001745E0 ck2;
    int idx = m->idx;
    Sj_45E0_x001745E0 *sj = m->ent[idx].sj;

    if (sj != 0) {
        sj->vt->getck(sj, 0, len, &ck);
        memcpy_x001745E0(ck.data, src, ck.len);
        sj->vt->putck(sj, 1, &ck);
        if (ck.len < len) {
            sj->vt->getck(sj, 0, len - ck.len, &ck2);
            memcpy_x001745E0(ck2.data, src + ck.len, ck2.len);
            sj->vt->putck(sj, 1, &ck2);
        }
        if (m->ent[idx].cb != 0) {
            m->ent[idx].cb(m->ent[idx].cbobj, idx);
        }
    }
    if (idx == 3 && m->f148 != 0) {
        if (m->f578 != 0) {
            func_00174758_x001745E0(m, D_00465238_x001745E0, 8);
        }
        func_00174758_x001745E0(m, src, len);
    }
}
struct SfdSj_x00174758;
typedef struct M2vErrInf_x00174758 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00174758;
typedef struct Mpeg2Ext_x00174758 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00174758;
typedef enum M2vFrameRate_x00174758 {
    M2V_FRAME_RATE_FORBIDDEN_x00174758 = 0
} M2vFrameRate_x00174758;
typedef enum M2vPicType_x00174758 {
    M2V_PICTYPE_I_x00174758 = 1,
    M2V_PICTYPE_P_x00174758 = 2,
    M2V_PICTYPE_B_x00174758 = 3,
    M2V_PICTYPE_D_x00174758 = 4
} M2vPicType_x00174758;
typedef enum M2vPicStruct_x00174758 {
    M2V_PICSTRUCT_TOP_FIELD_x00174758 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00174758 = 2,
    M2V_PICSTRUCT_FRAME_x00174758 = 3
} M2vPicStruct_x00174758;
typedef enum M2vPicAtrF64_x00174758 {
    M2V_PICATR_F64_0_x00174758 = 0
} M2vPicAtrF64_x00174758;
typedef struct M2vPicAtr_x00174758 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00174758 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00174758 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00174758 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00174758 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00174758;
typedef void (*M2vUsrDatFn_x00174758)(void *obj, int level);
typedef struct M2vUsrSj_x00174758 {
    struct SfdSj_x00174758 *sj;
    M2vUsrDatFn_x00174758 fn;
    void *obj;
} M2vUsrSj_x00174758;
typedef struct M2vPicUsr_x00174758 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00174758;
typedef void (*M2vCondFn_x00174758)();
typedef struct M2vObj_x00174758 {
    int stat;
    M2vErrInf_x00174758 err;
    M2vCondFn_x00174758 cond[16];
    M2vPicAtr_x00174758 picatr;
    char pad216[64];
    M2vUsrSj_x00174758 usrsj[4];
    M2vPicUsr_x00174758 picusr;
    char pad340[12];
    Mpeg2Ext_x00174758 ext;
    char pad1656[8];
} M2vObj_x00174758;
extern void M2V_SetErrFunc_x00174758(M2vObj_x00174758 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct SfdSj_x00174758 SfdSj_x00174758;
typedef struct SfdSjChunk_x00174758 {
    char *data;
    int len;
} SfdSjChunk_x00174758;
typedef struct SfdSjVtbl_x00174758 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00174758 *sj);
    int (*getUuid)(SfdSj_x00174758 *sj);
    void (*reset)(SfdSj_x00174758 *sj);
    void (*getChunk)(SfdSj_x00174758 *sj, int id, int n, SfdSjChunk_x00174758 *ck);
    void (*ungetChunk)(SfdSj_x00174758 *sj, int id, SfdSjChunk_x00174758 *ck);
    void (*putChunk)(SfdSj_x00174758 *sj, int id, SfdSjChunk_x00174758 *ck);
    int (*getNumData)(SfdSj_x00174758 *sj, int id);
} SfdSjVtbl_x00174758;
struct SfdSj_x00174758 {
    SfdSjVtbl_x00174758 *vtbl;
};
extern void mpvhook_SetErrFunc_x00174758(M2vObj_x00174758 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x00174758;
void *memcpy_x00174758(void *, const void *, size_t_x00174758) __asm__("func_00125740");
typedef struct AdxPdObj_x00174758 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00174758;
typedef struct AdxDecPara_x00174758 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00174758;
struct Pl2Enc_x00174758;
typedef struct AdxbObj_x00174758 AdxbObj_x00174758;
typedef short *(*AdxbGetWrFunc_x00174758)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00174758)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00174758 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00174758 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00174758 dp;
    AdxbGetWrFunc_x00174758 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00174758 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00174758 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00174758(AdxbObj_x00174758 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00174758 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00174758 *adxb;
    SfdSj_x00174758 *sji;
    SfdSj_x00174758 *sjo[2];
    SfdSjChunk_x00174758 cki;
    SfdSjChunk_x00174758 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00174758;
extern void ADXSJD_EntryFltFunc_x00174758(AdxSjdObj_x00174758 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00174758(AdxSjdObj_x00174758 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00174758)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00174758)(CvFsErrFn_x00174758 func, void *obj);
typedef int (*CvFsPathFn_x00174758)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00174758)(void);
typedef int (*CvFsOpenFn_x00174758)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00174758)(int fd);
typedef int (*CvFsFdIntFn_x00174758)(int fd);
typedef int (*CvFsSeekFn_x00174758)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00174758)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00174758)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00174758)(void);
typedef int (*CvFsLoadDirInfoFn_x00174758)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00174758)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00174758)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00174758 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00174758 entry_err_func;
    CvFsPathFn_x00174758 get_file_size;
    CvFsGetFreeSizeFn_x00174758 get_free_size;
    CvFsOpenFn_x00174758 open;
    CvFsFdFn_x00174758 close;
    CvFsSeekFn_x00174758 seek;
    CvFsFdIntFn_x00174758 tell;
    CvFsXferFn_x00174758 req_rd;
    CvFsXferFn_x00174758 req_wr;
    CvFsFdFn_x00174758 stop_tr;
    CvFsFdIntFn_x00174758 get_stat;
    CvFsFdIntFn_x00174758 get_sct_len;
    CvFsSetSctLenFn_x00174758 set_sct_len;
    CvFsFdIntFn_x00174758 get_num_tr;
    CvFsPathFn_x00174758 change_dir;
    CvFsPathFn_x00174758 is_exist_file;
    CvFsGetNumFilesFn_x00174758 get_num_files;
    CvFsLoadDirInfoFn_x00174758 load_dir_info;
    CvFsFdIntFn_x00174758 get_max_byte_rate;
    CvFsPathFn_x00174758 make_dir;
    CvFsPathFn_x00174758 remove_dir;
    CvFsPathFn_x00174758 delete_file;
    CvFsGetFileSizeExFn_x00174758 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00174758 opt_fn2;
} CvFsVtbl_x00174758;
typedef struct CvFsHandle_x00174758 {
    CvFsVtbl_x00174758 *vtbl;
    int fd;
} CvFsHandle_x00174758;
extern CvFsVtbl_x00174758 *addDevice_x00174758(char *devname, CvFsVtbl_x00174758 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00174758 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00174758 *sj;
    CvFsHandle_x00174758 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00174758 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00174758;
extern void ADXSTM_EntryEosFunc_x00174758(AdxStmObj_x00174758 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void func_00174758_x00174758(M2vObj_x00174758 *ctx, void *src, int len) __asm__("func_00174758");
/* m2vhdec_AppendPicUsr: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vhdec.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00174758_x00174758(M2vObj_x00174758 *ctx, void *src, int len)
{
    M2vPicUsr_x00174758 *b = &ctx->picusr;
    int n = b->size - b->len;
    char *dst = b->buf + b->len;
    if (len < n) {
        n = len;
    }
    b->len += n;
    memcpy_x00174758(dst, src, n);
}
struct SfdSj_x00174798;
typedef struct M2vErrInf_x00174798 { int (*func)(void *obj); void *obj; int code; int reserved[2]; } M2vErrInf_x00174798;
typedef struct Mpeg2Ext_x00174798 { int sequence_header_code; int horizontal_size_value; int vertical_size_value; int aspect_ratio_information; int frame_rate_code; int bit_rate_value; int marker_bit; int vbv_buffer_size_value; int constrained_parameters_flag; int load_intra_quantiser_matrix; int load_non_intra_quantiser_matrix; int sec_start_code; int udsc_start_code; int start_code; int number_of_frame_centre_offsets; char pad3[4]; int extension_id; int profile_and_level_indication; int progressive_sequence; int chroma_format; int horizontal_size_extension; int vertical_size_extension; int bit_rate_extension; int vbv_buffer_size_extension; int low_delay; int frame_rate_extension_n; int frame_rate_extension_d; int video_format; int colour_description; int colour_primaries; int transfer_characteristics; int matrix_coefficients; int display_horizontal_size; int display_vertical_size; int scalable_mode; int layer_id; int lower_layer_prediction_horizontal_size; int lower_layer_prediction_vertical_size; int horizontal_subsampling_factor_m; int horizontal_subsampling_factor_n; int vertical_subsampling_factor_m; int vertical_subsampling_factor_n; int picture_mux_enable; int mux_to_progressive_sequence; int picture_mux_order; int picture_mux_factor; int group_start_code; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int closed_gop; int broken_link; int picture_start_code; int temporal_reference; int picture_coding_type; int vbv_delay; int full_pel_forward_vector; int forward_f_code; int full_pel_backward_vector; int backward_f_code; int extra_bit_picture; int extra_information_picture; char pad4b[4]; int f_code00; int f_code01; int f_code10; int f_code11; int intra_dc_precision; int picture_structure; int top_field_first; int frame_pred_frame_dct; int concealment_motion_vectors; int q_scale_type; int intra_vlc_format; int alternate_scan; int repeat_first_field; int chroma_420_type; int progressive_frame; int composite_display_flag; int v_axis; int field_sequence; int sub_carrier; int burst_amplitude; int sub_carrier_phase; int load_chroma_intra_quantiser_matrix; int load_chroma_non_intra_quantiser_matrix; int frame_centre_horizontal_offset[3]; int frame_centre_vertical_offset[3]; int reference_select_code; int forward_temporal_reference; int backward_temporal_reference; int lower_layer_temporal_reference; int lower_layer_horizontal_offset; int lower_layer_vertical_offset; int spatial_temporal_weight_code_table_index; int lower_layer_progressive_frame; int lower_layer_deinterlaced_field_select; int copyright_flag; int copyright_identifier; int original_or_copy; int copyright_reserved; int copyright_number_1; int copyright_number_2; int copyright_number_3; char pad5[0x2E8 - 0x1B8]; double frame_rate; double frame_rate_full; int bit_rate; int vbv_buffer_size; char pad6[0x328 - 0x300]; int ext_state; int expected_ext_id; int scalable_seen; int spatial_scalable_seen; int blocks_per_macroblock; char pad7[0x420 - 0x33C]; int second_field; char pad8[0x4DC - 0x424]; int header_level; char pad9[0x4F4 - 0x4E0]; int call_count; char pad10[0x550 - 0x4F8]; int error_count; char pad11[0x10]; } Mpeg2Ext_x00174798;
typedef enum M2vFrameRate_x00174798 { M2V_FRAME_RATE_FORBIDDEN_x00174798 = 0 } M2vFrameRate_x00174798;
typedef enum M2vPicType_x00174798 { M2V_PICTYPE_I_x00174798 = 1, M2V_PICTYPE_P_x00174798 = 2, M2V_PICTYPE_B_x00174798 = 3, M2V_PICTYPE_D_x00174798 = 4 } M2vPicType_x00174798;
typedef enum M2vPicStruct_x00174798 { M2V_PICSTRUCT_TOP_FIELD_x00174798 = 1, M2V_PICSTRUCT_BOTTOM_FIELD_x00174798 = 2, M2V_PICSTRUCT_FRAME_x00174798 = 3 } M2vPicStruct_x00174798;
typedef enum M2vChromaPos_x00174798 { M2V_CHROMAPOS_COSITED_x00174798 = 0, M2V_CHROMAPOS_CENTRE_x00174798 = 1 } M2vChromaPos_x00174798;
typedef struct M2vPicAtr_x00174798 { int horizontal_size; int vertical_size; int mb_width; int mb_height; M2vFrameRate_x00174798 frame_rate_code; int temporal_reference; M2vPicType_x00174798 picture_coding_type; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int gsc_count; int shc_count; M2vPicStruct_x00174798 picture_structure; int chroma_format; M2vChromaPos_x00174798 chroma_pos_h; int chroma_pos_v; int bit_rate; int vbv_buffer_size; unsigned short display_horizontal_size; unsigned short display_vertical_size; unsigned char field_count; unsigned char progressive_frame; unsigned char top_field_first; signed char repeat_first_field; signed char second_field; unsigned char aspect_ratio_information; unsigned char constrained_parameters_flag; unsigned char frame_rate_extension_n; unsigned char frame_rate_extension_d; unsigned char profile_and_level_indication; unsigned char progressive_sequence; unsigned char low_delay; unsigned char video_format; unsigned char colour_description; unsigned char colour_primaries; unsigned char transfer_characteristics; unsigned char matrix_coefficients; char pad101[27]; } M2vPicAtr_x00174798;
typedef void (*M2vUsrDatFn_x00174798)(void *obj, int level);
typedef struct M2vUsrSj_x00174798 { struct SfdSj_x00174798 *sj; M2vUsrDatFn_x00174798 fn; void *obj; } M2vUsrSj_x00174798;
typedef struct M2vPicUsr_x00174798 { char *buf; int size; int len; } M2vPicUsr_x00174798;
typedef void (*M2vCondFn_x00174798)();
typedef struct M2vObj_x00174798 { int stat; M2vErrInf_x00174798 err; M2vCondFn_x00174798 cond[16]; M2vPicAtr_x00174798 picatr; char pad216[64]; M2vUsrSj_x00174798 usrsj[4]; M2vPicUsr_x00174798 picusr; char pad340[4]; Mpeg2Ext_x00174798 ext; char pad1656[8]; } M2vObj_x00174798;
extern void func_00173748_x00174798(Mpeg2Ext_x00174798 *) __asm__("func_00173748");
extern void func_001739B0_x00174798(Mpeg2Ext_x00174798 *) __asm__("func_001739B0");
extern void func_00173A00_x00174798(Mpeg2Ext_x00174798 *) __asm__("func_00173A00");
extern void func_00173A70_x00174798(Mpeg2Ext_x00174798 *) __asm__("func_00173A70");
extern void resetQuantiserMatrix_x00174798(Mpeg2Ext_x00174798 *) __asm__("resetQuantiserMatrix");
typedef struct M2vLibWork_x00174798 { M2vCondFn_x00174798 cond[16]; int nobj; M2vObj_x00174798 *obj; } M2vLibWork_x00174798;
void M2V_Init_x00174798(int nobj, char *work, unsigned int size) __asm__("M2V_Init");
void M2V_Finish_x00174798(void) __asm__("M2V_Finish");
char *M2V_GetVersionStr_x00174798(void) __asm__("M2V_GetVersionStr");
int M2V_IsDecodable_x00174798(char *buf, int size) __asm__("M2V_IsDecodable");
M2vObj_x00174798 *M2V_Create_x00174798(void) __asm__("M2V_Create");
void M2V_Destroy_x00174798(M2vObj_x00174798 *hn) __asm__("M2V_Destroy");
void M2V_MbCbFn_x00174798(void) __asm__("M2V_MbCbFn");
void M2V_SetCond_x00174798(M2vObj_x00174798 *hn, int no, M2vCondFn_x00174798 fn) __asm__("M2V_SetCond");
int M2VLIB_CheckHn_x00174798(M2vObj_x00174798 *hn) __asm__("M2VLIB_CheckHn");
void M2V_SetUsrSj_x00174798(M2vObj_x00174798 *hn, int no, struct SfdSj_x00174798 *sj, M2vUsrDatFn_x00174798 fn, void *obj) __asm__("M2V_SetUsrSj");
void M2V_SetPicUsrBuf_x00174798(M2vObj_x00174798 *hn, char *buf, int size) __asm__("M2V_SetPicUsrBuf");
void M2V_GetPicUsr_x00174798(M2vObj_x00174798 *hn, char **buf, int *size) __asm__("M2V_GetPicUsr");
void M2VERR_Init_x00174798(void) __asm__("M2VERR_Init");
void M2V_SetErrFunc_x00174798(M2vObj_x00174798 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void M2V_GetErrInf_x00174798(M2vObj_x00174798 *hn, M2vErrInf_x00174798 *inf) __asm__("M2V_GetErrInf");
int M2VERR_SetCode_x00174798(M2vObj_x00174798 *hn, int code) __asm__("M2VERR_SetCode");
void M2V_SkipFrm_x00174798(M2vObj_x00174798 *hn, struct SfdSj_x00174798 *sj) __asm__("M2V_SkipFrm");
void M2V_DecodeFrm_x00174798(void) __asm__("M2V_DecodeFrm");
void M2V_GetPicAtr_x00174798(M2vObj_x00174798 *hn, M2vPicAtr_x00174798 *picatr) __asm__("M2V_GetPicAtr");
void M2V_GetBitRate_x00174798(M2vObj_x00174798 *hn, int *bit_rate) __asm__("M2V_GetBitRate");
void M2V_GetVbvBufSiz_x00174798(M2vObj_x00174798 *hn, int *vbv_size, int *vbv_delay, int *reserved) __asm__("M2V_GetVbvBufSiz");
void M2V_GetLinkFlg_x00174798(M2vObj_x00174798 *hn, int *closed_gop, int *broken_link) __asm__("M2V_GetLinkFlg");
void M2VHDEC_Init_x00174798(void) __asm__("M2VHDEC_Init");
void M2VHDEC_InitHn_x00174798(M2vObj_x00174798 *hn) __asm__("M2VHDEC_InitHn");
int M2V_DecodePicAtr_x00174798(M2vObj_x00174798 *hn, struct SfdSj_x00174798 *sj) __asm__("M2V_DecodePicAtr");
typedef struct SfdSj_x00174798 SfdSj_x00174798;
typedef struct SfdSjChunk_x00174798 { char *data; int len; } SfdSjChunk_x00174798;
typedef struct SfdSjVtbl_x00174798 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x00174798 *sj); int (*getUuid)(SfdSj_x00174798 *sj); void (*reset)(SfdSj_x00174798 *sj); void (*getChunk)(SfdSj_x00174798 *sj, int id, int n, SfdSjChunk_x00174798 *ck); void (*ungetChunk)(SfdSj_x00174798 *sj, int id, SfdSjChunk_x00174798 *ck); void (*putChunk)(SfdSj_x00174798 *sj, int id, SfdSjChunk_x00174798 *ck); int (*getNumData)(SfdSj_x00174798 *sj, int id); } SfdSjVtbl_x00174798;
struct SfdSj_x00174798 { SfdSjVtbl_x00174798 *vtbl; };
typedef struct SfdBufStat_x00174798 { SfdSjChunk_x00174798 ck0; SfdSjChunk_x00174798 ck1; char *tailData; int tailLen; int tailFlag; int pad28; } SfdBufStat_x00174798;
enum SjLine_x00174798 { SJ_LIN_FREE_x00174798 = 0, SJ_LIN_DATA_x00174798 = 1 };
typedef void (*SjErrFunc_x00174798)(void *obj, int code);
typedef struct SjxObj_x00174798 SjxObj_x00174798;
void SJ_SplitChunk_x00174798(SfdSjChunk_x00174798 *ck, int nbyte, SfdSjChunk_x00174798 *head, SfdSjChunk_x00174798 *rest) __asm__("SJ_SplitChunk");
void SJ_MakeTag_x00174798(SfdSjChunk_x00174798 *tag, const char *id) __asm__("SJ_MakeTag");
void SJ_GetTagContent_x00174798(char *tag, SfdSjChunk_x00174798 *content) __asm__("SJ_GetTagContent");
char *SJ_SearchTag_x00174798(SfdSjChunk_x00174798 *ck, const char *id, const char *endid, SfdSjChunk_x00174798 *content) __asm__("SJ_SearchTag");
void SJCRS_Init_x00174798(void) __asm__("SJCRS_Init");
void SJCRS_Finish_x00174798(void) __asm__("SJCRS_Finish");
void SJCRS_BeginSvr_x00174798(void) __asm__("SJCRS_BeginSvr");
void SJCRS_EndSvr_x00174798(void) __asm__("SJCRS_EndSvr");
void SJCRS_Lock_x00174798(void) __asm__("SJCRS_Lock");
void SJCRS_Unlock_x00174798(void) __asm__("SJCRS_Unlock");
void SJERR_CallErr_x00174798(const char *message) __asm__("SJERR_CallErr");
void SJMEM_Init_x00174798(void) __asm__("SJMEM_Init");
void SJMEM_Finish_x00174798(void) __asm__("SJMEM_Finish");
SfdSj_x00174798 *SJMEM_Create_x00174798(char *buf, int bsize) __asm__("SJMEM_Create");
char *SJMEM_GetBufPtr_x00174798(SfdSj_x00174798 *sj) __asm__("SJMEM_GetBufPtr");
int SJMEM_GetBufSize_x00174798(SfdSj_x00174798 *sj) __asm__("SJMEM_GetBufSize");
void SJRBF_Init_x00174798(void) __asm__("SJRBF_Init");
void SJRBF_Finish_x00174798(void) __asm__("SJRBF_Finish");
SfdSj_x00174798 *SJRBF_Create_x00174798(char *buf, int bsize, int xsize) __asm__("SJRBF_Create");
char *SJRBF_GetBufPtr_x00174798(SfdSj_x00174798 *sj) __asm__("SJRBF_GetBufPtr");
int SJRBF_GetBufSize_x00174798(SfdSj_x00174798 *sj) __asm__("SJRBF_GetBufSize");
int SJRBF_GetXtrSize_x00174798(SfdSj_x00174798 *sj) __asm__("SJRBF_GetXtrSize");
void SJRBF_SetFlowCnt_x00174798(SfdSj_x00174798 *sj, int line, int flow, int cnt) __asm__("SJRBF_SetFlowCnt");
int SJRBF_GetFlowCnt_x00174798(SfdSj_x00174798 *sj, int line, int flow) __asm__("SJRBF_GetFlowCnt");
void SJUNI_Init_x00174798(void) __asm__("SJUNI_Init");
void SJUNI_Finish_x00174798(void) __asm__("SJUNI_Finish");
SfdSj_x00174798 *SJUNI_Create_x00174798(int mode, char *work, int wksize) __asm__("SJUNI_Create");
void *SJRBF_CreateRmt_x00174798(int buf, int bsize, int xsize) __asm__("SJRBF_CreateRmt");
void *SJMEM_CreateRmt_x00174798(int buf, int bsize) __asm__("SJMEM_CreateRmt");
void *SJUNI_CreateRmt_x00174798(int mode, int work, int wksize) __asm__("SJUNI_CreateRmt");
void SJRMT_Destroy_x00174798(void *sjrmt) __asm__("SJRMT_Destroy");
int *SJRMT_GetUuid_x00174798(void *sjrmt) __asm__("SJRMT_GetUuid");
void SJRMT_Reset_x00174798(void *sjrmt) __asm__("SJRMT_Reset");
void SJRMT_GetChunk_x00174798(void *sjrmt, int line, int nbyte, SfdSjChunk_x00174798 *ck) __asm__("SJRMT_GetChunk");
void SJRMT_UngetChunk_x00174798(void *sjrmt, int line, SfdSjChunk_x00174798 *ck) __asm__("SJRMT_UngetChunk");
int SJRMT_PutChunk_x00174798(void *sjrmt, int line, SfdSjChunk_x00174798 *ck) __asm__("SJRMT_PutChunk");
int SJRMT_GetNumData_x00174798(void *sjrmt, int line) __asm__("SJRMT_GetNumData");
int SJRMT_IsGetChunk_x00174798(void *sjrmt, int line, int nbyte, int *rbyte) __asm__("SJRMT_IsGetChunk");
void SJRMT_Init_x00174798(void) __asm__("SJRMT_Init");
void SJRMT_Finish_x00174798(void) __asm__("SJRMT_Finish");
void SJX_ExecServer_x00174798(void) __asm__("SJX_ExecServer");
void SJX_Init_x00174798(void) __asm__("SJX_Init");
void SJX_Finish_x00174798(void) __asm__("SJX_Finish");
SjxObj_x00174798 *SJX_Create_x00174798(SfdSj_x00174798 *sj, void *sjrmt, int line) __asm__("SJX_Create");
void SJX_Destroy_x00174798(SjxObj_x00174798 *sjx) __asm__("SJX_Destroy");
void SJX_Reset_x00174798(SjxObj_x00174798 *sjx) __asm__("SJX_Reset");
typedef enum MpvUdLevel_x00174798 { MPV_UDLVL_SEQ_x00174798 = 1, MPV_UDLVL_GOP_x00174798 = 2, MPV_UDLVL_PIC_x00174798 = 3 } MpvUdLevel_x00174798;
typedef struct MpvSeqInf_x00174798 { char pad0[24]; int width; int height; } MpvSeqInf_x00174798;
typedef struct MpvMotionRange_x00174798 { int fullPel; int rSize; int shift; int f; } MpvMotionRange_x00174798;
typedef struct MpvErrObj_x00174798 { int (*fn)(void *arg); void *arg; int code; int skipReqCnt; int skipPicCnt; } MpvErrObj_x00174798;
typedef struct MpvHn_x00174798 { char pad0[44]; char *mbBuf; char *blkBuf; char *dctBuf; char pad56[8]; unsigned char *clampY; char pad68[52]; MpvSeqInf_x00174798 seq; char pad152[120]; unsigned char *clampC; char pad276[116]; int stat; int rsv; int cond[16]; M2vPicAtr_x00174798 picInf; MpvErrObj_x00174798 err; char pad612[64]; int pelAspectRatio; int bitRate; int vbvBufferSize; int constrainedParams; int closedGop; int brokenLink; int vbvDelay; char pad704[20]; void (*mcFunc[4])(struct MpvHn_x00174798 *mpv); char pad740[8]; MpvMotionRange_x00174798 fwd; char pad764[20]; MpvMotionRange_x00174798 bwd; char pad800[32]; int lastMbAddr; char pad836[20]; int strmType; int stc[3]; char pad872[24]; int skipReq; int skipCnt; SfdSjChunk_x00174798 chunk; char pad912[4]; int idcPrec; char pad920[12]; int maxCount; char pad936[8]; M2vObj_x00174798 *lower; MpvUdLevel_x00174798 usrDatLevel; M2vUsrSj_x00174798 bufEnt[4]; M2vPicUsr_x00174798 picusr; char pad1012[1016 - 1012]; char pad1016[1024 - 1016]; } MpvHn_x00174798;
typedef struct MpvPool_x00174798 { char pad0[4352]; char blk[32]; char mb[64]; char dct[1664]; unsigned char clamp[1024]; } MpvPool_x00174798;
typedef struct MpvLib_x00174798 { int cond[16]; int optionFlag; int initFlag; char pad72[4]; char *tables; MpvPool_x00174798 *pool; int nhn; MpvHn_x00174798 *hn; } MpvLib_x00174798;
typedef struct MpvBuildInf_x00174798 { int magic; int libSize; int hnSize; int poolSize; } MpvBuildInf_x00174798;
extern MpvErrObj_x00174798 mpv_err_global_x00174798 __asm__("mpv_err_global");
int MPV_GoNextDelimSj_x00174798(SfdSj_x00174798 *sj) __asm__("MPV_GoNextDelimSj");
int MPV_MoveChunk_x00174798(SfdSj_x00174798 *sj, int id, int n) __asm__("MPV_MoveChunk");
int MPV_Init_x00174798(int count, void *work) __asm__("MPV_Init");
void MPV_Finish_x00174798(void) __asm__("MPV_Finish");
MpvHn_x00174798 *MPV_Create_x00174798(void) __asm__("MPV_Create");
int MPV_Destroy_x00174798(MpvHn_x00174798 *hn) __asm__("MPV_Destroy");
int MPV_SetCond_x00174798(MpvHn_x00174798 *hn, int no, int value) __asm__("MPV_SetCond");
int MPV_GetCond_x00174798(MpvHn_x00174798 *hn, int no, int *value) __asm__("MPV_GetCond");
int MPVLIB_CheckHn_x00174798(MpvHn_x00174798 *hn) __asm__("MPVLIB_CheckHn");
int mpv_StartLower_x00174798(MpvHn_x00174798 *hn, SfdSj_x00174798 *sj) __asm__("mpv_StartLower");
void mpv_InitLibErr_x00174798(void) __asm__("mpv_InitLibErr");
void mpv_ResetErr_x00174798(MpvErrObj_x00174798 *err) __asm__("mpv_ResetErr");
int mpv_ReportError_x00174798(MpvHn_x00174798 *mpv, int code) __asm__("mpv_ReportError");
void mpvapi_Init_x00174798(void) __asm__("mpvapi_Init");
struct SfdFrmPara_x00174798;
int MPV_DecPicSj_x00174798(MpvHn_x00174798 *mpv, SfdSj_x00174798 *sj, struct SfdFrmPara_x00174798 *para) __asm__("MPV_DecPicSj");
int MPV_SkipFrmSj_x00174798(MpvHn_x00174798 *mpv, SfdSj_x00174798 *sj) __asm__("MPV_SkipFrmSj");
int MPV_GetPicInf_x00174798(MpvHn_x00174798 *mpv, M2vPicAtr_x00174798 *out) __asm__("MPV_GetPicInf");
int MPV_GetBitRate_x00174798(MpvHn_x00174798 *mpv, int *bitRate) __asm__("MPV_GetBitRate");
void MPV_GetDctCnt_x00174798(MpvHn_x00174798 *hn, int *width, int *height) __asm__("MPV_GetDctCnt");
int MPV_GetVbvBufSiz_x00174798(MpvHn_x00174798 *mpv, int *size, int *delay, int *bytes) __asm__("MPV_GetVbvBufSiz");
int MPV_GetLinkFlg_x00174798(MpvHn_x00174798 *mpv, int *inf3, int *inf4) __asm__("MPV_GetLinkFlg");
void MPV_SetUsrSj_x00174798(MpvHn_x00174798 *mpv, int index, SfdSj_x00174798 *sj, M2vUsrDatFn_x00174798 fn, void *obj) __asm__("MPV_SetUsrSj");
void MPV_SetPicUsrBuf_x00174798(MpvHn_x00174798 *mpv, char *buf, int size) __asm__("MPV_SetPicUsrBuf");
void MPV_GetPicUsr_x00174798(MpvHn_x00174798 *mpv, char **buf, int *len) __asm__("MPV_GetPicUsr");
int MPV_DecodePicAtrSj_x00174798(MpvHn_x00174798 *mpv, SfdSj_x00174798 *sj) __asm__("MPV_DecodePicAtrSj");
int MPV_DecodePicAtr_x00174798(MpvHn_x00174798 *mpv, SfdSjChunk_x00174798 *buf, int *used) __asm__("MPV_DecodePicAtr");
int MPV_CheckDelim_x00174798(const unsigned char *p) __asm__("MPV_CheckDelim");
char *MPV_SearchDelim_x00174798(char *buf, int len, int mask) __asm__("MPV_SearchDelim");
char *MPV_BsearchDelim_x00174798(char *end, int len, int mask) __asm__("MPV_BsearchDelim");
int MPV_IsEmptyBpic_x00174798(unsigned char *buf, int nbyte, int nmb) __asm__("MPV_IsEmptyBpic");
int MPV_IsEmptyPpic_x00174798(unsigned char *buf, int nbyte, int nmb) __asm__("MPV_IsEmptyPpic");
int mpvhook_IsInstalled_x00174798(void) __asm__("mpvhook_IsInstalled");
void mpvhook_Init_x00174798(int nobj, char *work, unsigned int size) __asm__("mpvhook_Init");
void mpvhook_Finish_x00174798(void) __asm__("mpvhook_Finish");
M2vObj_x00174798 *mpvhook_Create_x00174798(void) __asm__("mpvhook_Create");
void mpvhook_Destroy_x00174798(M2vObj_x00174798 *lower) __asm__("mpvhook_Destroy");
void mpvhook_SetCond_x00174798(M2vObj_x00174798 *lower, int no, M2vCondFn_x00174798 fn) __asm__("mpvhook_SetCond");
void mpvhook_SetUsrSj_x00174798(M2vObj_x00174798 *lower, int index, SfdSj_x00174798 *sj, M2vUsrDatFn_x00174798 fn, void *obj) __asm__("mpvhook_SetUsrSj");
void mpvhook_SetPicUsrBuf_x00174798(M2vObj_x00174798 *lower, char *buf, int size) __asm__("mpvhook_SetPicUsrBuf");
void mpvhook_GetPicUsr_x00174798(M2vObj_x00174798 *lower, char **buf, int *len) __asm__("mpvhook_GetPicUsr");
int mpvhook_DecodePicAtr_x00174798(M2vObj_x00174798 *lower, SfdSj_x00174798 *sj) __asm__("mpvhook_DecodePicAtr");
void mpvhook_GetPicAtr_x00174798(M2vObj_x00174798 *lower, M2vPicAtr_x00174798 *picatr) __asm__("mpvhook_GetPicAtr");
void mpvhook_GetBitRate_x00174798(M2vObj_x00174798 *lower, int *bit_rate) __asm__("mpvhook_GetBitRate");
void mpvhook_GetVbvBufSiz_x00174798(M2vObj_x00174798 *lower, int *vbv_size, int *vbv_delay, int *reserved) __asm__("mpvhook_GetVbvBufSiz");
void mpvhook_GetLinkFlg_x00174798(M2vObj_x00174798 *lower, int *closed_gop, int *broken_link) __asm__("mpvhook_GetLinkFlg");
char *mpvhook_GetVersionStr_x00174798(void) __asm__("mpvhook_GetVersionStr");
int mpvhook_IsDecodable_x00174798(char *buf, int size) __asm__("mpvhook_IsDecodable");
void mpvhook_MbCbFn_x00174798(void) __asm__("mpvhook_MbCbFn");
void mpvhook_SetErrFunc_x00174798(M2vObj_x00174798 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void mpvhook_GetErrInf_x00174798(M2vObj_x00174798 *lower, M2vErrInf_x00174798 *inf) __asm__("mpvhook_GetErrInf");
void mpvhook_DecodeFrm_x00174798(void) __asm__("mpvhook_DecodeFrm");
void mpvhook_SkipFrm_x00174798(M2vObj_x00174798 *lower, SfdSj_x00174798 *sj) __asm__("mpvhook_SkipFrm");
void mpv_InstallHooks_x00174798(void) __asm__("mpv_InstallHooks");
typedef unsigned int size_t_x00174798;
typedef int ptrdiff_t_x00174798;
void *memset_x00174798(void *, int, size_t_x00174798) __asm__("memset");
void *memcpy_x00174798(void *, const void *, size_t_x00174798) __asm__("memcpy");
void *memmove_x00174798(void *, const void *, size_t_x00174798) __asm__("memmove");
int memcmp_x00174798(const void *, const void *, size_t_x00174798) __asm__("memcmp");
size_t_x00174798 strlen_x00174798(const char *) __asm__("strlen");
char *strcpy_x00174798(char *, const char *) __asm__("strcpy");
char *strncpy_x00174798(char *, const char *, size_t_x00174798) __asm__("strncpy");
int strcmp_x00174798(const char *, const char *) __asm__("strcmp");
int strncmp_x00174798(const char *, const char *, size_t_x00174798) __asm__("strncmp");
char *strcat_x00174798(char *, const char *) __asm__("strcat");
enum LscStat_x00174798 { LSC_STAT_STOP_x00174798 = 0, LSC_STAT_WAIT_x00174798 = 1, LSC_STAT_EXEC_x00174798 = 2, LSC_STAT_ERROR_x00174798 = 3 };
typedef void (*LscStatFunc_x00174798)(void *obj, void *usr);
typedef void (*LscErrFunc_x00174798)(void *obj, const char *msg);
typedef struct LscStm_x00174798 { int id; const char *fname; int fname_sum; void *dir; int ofst; int nsct; int stat; int rdsct; } LscStm_x00174798;
typedef struct LscObj_x00174798 { signed char used; signed char stat; signed char reading; signed char loop; signed char pause; char rsv1; short rsv2; SfdSj_x00174798 *sj; SfdSjChunk_x00174798 ck; int flow_min; int flow_max; int wpos; int rpos; int nstm; void *stm; int stm_size; int reqsct; int errcnt; LscStm_x00174798 stms[16]; } LscObj_x00174798;
LscObj_x00174798 *LSC_Create_x00174798(SfdSj_x00174798 *sj) __asm__("LSC_Create");
void LSC_Destroy_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_Destroy");
void LSC_SetStmHndl_x00174798(LscObj_x00174798 *lsc, void *stm) __asm__("LSC_SetStmHndl");
int LSC_EntryFname_x00174798(LscObj_x00174798 *lsc, const char *fname) __asm__("LSC_EntryFname");
int LSC_EntryFileRange_x00174798(LscObj_x00174798 *lsc, const char *fname, void *dir, int ofst, int nsct) __asm__("LSC_EntryFileRange");
void LSC_ResetEntry_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_ResetEntry");
void LSC_Start_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_Start");
void LSC_Stop_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_Stop");
void LSC_Pause_x00174798(LscObj_x00174798 *lsc, int sw) __asm__("LSC_Pause");
void LSC_ExecServer_x00174798(void) __asm__("LSC_ExecServer");
int LSC_GetStat_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_GetStat");
int LSC_GetNumStm_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_GetNumStm");
int LSC_GetStmId_x00174798(LscObj_x00174798 *lsc, int no) __asm__("LSC_GetStmId");
const char *LSC_GetStmFname_x00174798(LscObj_x00174798 *lsc, int id) __asm__("LSC_GetStmFname");
int LSC_GetStmStat_x00174798(LscObj_x00174798 *lsc, int id) __asm__("LSC_GetStmStat");
int LSC_GetStmRdSct_x00174798(LscObj_x00174798 *lsc, int id) __asm__("LSC_GetStmRdSct");
void LSC_SetFlowLimit_x00174798(LscObj_x00174798 *lsc, int min) __asm__("LSC_SetFlowLimit");
int LSC_GetFlowLimit_x00174798(LscObj_x00174798 *lsc) __asm__("LSC_GetFlowLimit");
void LSC_EntryChgStatFunc_x00174798(LscStatFunc_x00174798 func, void *obj, void *usr) __asm__("LSC_EntryChgStatFunc");
void LSC_SetLpFlg_x00174798(LscObj_x00174798 *lsc, int loop) __asm__("LSC_SetLpFlg");
void LSC_EntryErrFunc_x00174798(LscErrFunc_x00174798 func, void *obj) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x00174798(const char *format, ...) __asm__("LSC_CallErrFunc");
void LSC_Init_x00174798(void) __asm__("LSC_Init");
void LSC_Finish_x00174798(void) __asm__("LSC_Finish");
enum AdxPdStat_x00174798 { ADXPD_STAT_STOP_x00174798 = 0, ADXPD_STAT_DECODE_QUEUED_x00174798 = 1, ADXPD_STAT_DECODING_x00174798 = 2, ADXPD_STAT_DECEND_x00174798 = 3 };
enum AdxPdChannels_x00174798 { ADXPD_CH_MONO_x00174798 = 1, ADXPD_CH_STEREO_x00174798 = 2 };
typedef struct AdxPdObj_x00174798 { int used; int id; int mode; int stat; int nblk_decoded; int channels; unsigned char *ibuf; int nblk; short *obufl; short *obufr; short dly[2][2]; short k0; short k1; short seed; short mul; short add; } AdxPdObj_x00174798;
void ADXPD_Init_x00174798(void) __asm__("ADXPD_Init");
void ADXPD_Finish_x00174798(void) __asm__("ADXPD_Finish");
AdxPdObj_x00174798 *ADXPD_Create_x00174798(void) __asm__("ADXPD_Create");
void ADXPD_SetCoef_x00174798(AdxPdObj_x00174798 *pd, int sfreq, int cutoff) __asm__("ADXPD_SetCoef");
void ADXPD_SetDly_x00174798(AdxPdObj_x00174798 *pd, unsigned short *dly1, unsigned short *dly2) __asm__("ADXPD_SetDly");
void ADXPD_GetDly_x00174798(AdxPdObj_x00174798 *pd, unsigned short *dly1, unsigned short *dly2) __asm__("ADXPD_GetDly");
void ADXPD_SetExtPrm_x00174798(AdxPdObj_x00174798 *pd, short seed, short mul, short add) __asm__("ADXPD_SetExtPrm");
void ADXPD_GetExtPrm_x00174798(AdxPdObj_x00174798 *pd, unsigned short *seed, unsigned short *mul, unsigned short *add) __asm__("ADXPD_GetExtPrm");
void ADXPD_Destroy_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_Destroy");
void ADXPD_SetMode_x00174798(AdxPdObj_x00174798 *pd, int mode) __asm__("ADXPD_SetMode");
int ADXPD_GetStat_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_GetStat");
int ADXPD_EntryMono_x00174798(AdxPdObj_x00174798 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntryMono");
int ADXPD_EntrySte_x00174798(AdxPdObj_x00174798 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntrySte");
int ADXPD_EntryPl2_x00174798(AdxPdObj_x00174798 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntryPl2");
void ADXPD_Start_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_Start");
void ADXPD_Stop_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_Stop");
void ADXPD_Reset_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_Reset");
int ADXPD_GetNumBlk_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_GetNumBlk");
void ADXPD_ExecHndl_x00174798(AdxPdObj_x00174798 *pd) __asm__("ADXPD_ExecHndl");
void ADXPD_ExecServer_x00174798(void) __asm__("ADXPD_ExecServer");
typedef struct AdxDecPara_x00174798 { char *ibuf; int niblk; int nch; int blksize; int blknsmpl; short *pcmbuf; int pcmbsize; int pcmbdist; int wpos; int nroom; int lp_nsmpl; int ndecsmpl; } AdxDecPara_x00174798;
enum { ADXB_FORMAT_ADX_x00174798 = 0, ADXB_FORMAT_WAV_x00174798 = 1, ADXB_FORMAT_SPSD_x00174798 = 2, ADXB_FORMAT_AIFF_x00174798 = 3, ADXB_FORMAT_AU_x00174798 = 4, ADXB_FORMAT_AHX_x00174798 = 10, ADXB_FORMAT_AC3_x00174798 = 15 };
struct Pl2Enc_x00174798;
typedef struct AdxbObj_x00174798 AdxbObj_x00174798;
typedef short *(*AdxbGetWrFunc_x00174798)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00174798)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00174798 { short used; short hdcdflag; int stat; AdxPdObj_x00174798 *xpd; signed char code; signed char bps; signed char nch; signed char blklen; int blknsmpl; int sfreq; int total_nsmpl; short cof; short rsv1; int lp_ins_nsmpl; short nloop; short lp_type; int lp_spos; int lp_sofst; int lp_epos; int lp_eofst; int maxnch; short *pcmbuf; int pcmbsize; int pcmbdist; AdxDecPara_x00174798 dp; AdxbGetWrFunc_x00174798 getwrfunc; void *getwrobj; AdxbAddWrFunc_x00174798 addwrfunc; void *addwrobj; int total_ndecsmpl; int curwpos; int ndecsmpl; int ndeclen; short fmttype; unsigned short def_fmttype; short cdctype; short f158; short k0; short km; short ka; unsigned short xp_key; unsigned short xp_km; unsigned short xp_ka; unsigned short dly1[2]; unsigned short dly2[2]; void *ahx; int ahx_dec_nsmpl; int ahx_dec_nfrm; void *ac3; int ac3_dec_nsmpl; int ac3_dec_nfrm; int ainf_len; char dataid[16]; short def_outvol; short def_pan[2]; char pad230[2]; struct Pl2Enc_x00174798 *pl2; int pl2_x; int pl2_y; int cb_ndeclen; int rsv; void (*decfunc)(void *context, int count, int bytes); void *decobj; };
extern void (*adxb_pl2_exec_func_x00174798)(AdxbObj_x00174798 *obj, int v, short *src, short *dst) __asm__("adxb_pl2_exec_func");
extern void (*adxb_pl2_reset_func_x00174798)(AdxbObj_x00174798 *obj) __asm__("adxb_pl2_reset_func");
void ADXB_Init_x00174798(void) __asm__("ADXB_Init");
void ADXB_Finish_x00174798(void) __asm__("ADXB_Finish");
AdxbObj_x00174798 *ADXB_Create_x00174798(int nch, short *buf, int bsize, int bdist) __asm__("ADXB_Create");
void ADXB_Destroy_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_Destroy");
int ADXB_DecodeHeaderAdx_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAdx");
void ADXB_ResetDefFmt_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ResetDefFmt");
void ADXB_SetDefPrm_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_SetDefPrm");
int ADXB_DecodeHeader_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeader");
void ADXB_EntryGetWrFunc_x00174798(AdxbObj_x00174798 *adxb, AdxbGetWrFunc_x00174798 func, void *obj) __asm__("ADXB_EntryGetWrFunc");
void ADXB_EntryAddWrFunc_x00174798(AdxbObj_x00174798 *adxb, AdxbAddWrFunc_x00174798 func, void *obj) __asm__("ADXB_EntryAddWrFunc");
short *ADXB_GetPcmBuf_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetPcmBuf");
int ADXB_GetFormat_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetFormat");
int ADXB_GetSfreq_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetSfreq");
int ADXB_GetNumChan_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetNumChan");
int ADXB_GetFmtBps_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetFmtBps");
int ADXB_GetOutBps_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetOutBps");
int ADXB_GetBlkSmpl_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetBlkSmpl");
int ADXB_GetBlkLen_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetBlkLen");
int ADXB_GetTotalNumSmpl_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetTotalNumSmpl");
int ADXB_GetCof_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetCof");
int ADXB_GetLpInsNsmpl_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetLpInsNsmpl");
int ADXB_GetNumLoop_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetNumLoop");
int ADXB_GetLpStartPos_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetLpStartPos");
int ADXB_GetLpStartOfst_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetLpStartOfst");
int ADXB_GetLpEndPos_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetLpEndPos");
int ADXB_GetLpEndOfst_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetLpEndOfst");
int ADXB_GetAinfLen_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetAinfLen");
short ADXB_GetDefOutVol_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetDefOutVol");
short ADXB_GetDefPan_x00174798(AdxbObj_x00174798 *adxb, int ch) __asm__("ADXB_GetDefPan");
char *ADXB_GetDataId_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetDataId");
void ADXB_TakeSnapshot_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_TakeSnapshot");
void ADXB_RestoreSnapshot_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_RestoreSnapshot");
void ADXB_SetExtString_x00174798(AdxbObj_x00174798 *adxb, const char *str) __asm__("ADXB_SetExtString");
void ADXB_SetDefExtString_x00174798(const char *str) __asm__("ADXB_SetDefExtString");
int ADXB_GetStat_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetStat");
void ADXB_EntryData_x00174798(AdxbObj_x00174798 *adxb, char *data, int len) __asm__("ADXB_EntryData");
void ADXB_Start_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_Start");
void ADXB_Stop_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_Stop");
void ADXB_Reset_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_Reset");
int ADXB_GetDecDtLen_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetDecDtLen");
int ADXB_GetDecNumSmpl_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetDecNumSmpl");
void ADXB_EntryDecFunc_x00174798(AdxbObj_x00174798 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
AdxPdObj_x00174798 *ADXB_GetAdxpd_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_GetAdxpd");
void ADXB_ExecOneAdx_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneAdx");
void ADXB_ExecHndl_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecHndl");
void ADXB_ExecServer_x00174798(void) __asm__("ADXB_ExecServer");
void ADXB_SetAc3InSj_x00174798(AdxbObj_x00174798 *adxb, SfdSj_x00174798 *sji) __asm__("ADXB_SetAc3InSj");
void ADXB_SetAc3DecSmpl_x00174798(AdxbObj_x00174798 *adxb, int nsmpl) __asm__("ADXB_SetAc3DecSmpl");
void ADXB_Ac3TermSupply_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_Ac3TermSupply");
void ADXB_ExecOneAc3_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneAc3");
int ADXB_DecodeHeaderAc3_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAc3");
int ADXB_CheckAc3_x00174798(unsigned char *hdr) __asm__("ADXB_CheckAc3");
void ADXB_SetAhxInSj_x00174798(AdxbObj_x00174798 *adxb, SfdSj_x00174798 *sji) __asm__("ADXB_SetAhxInSj");
void ADXB_SetAhxDecSmpl_x00174798(AdxbObj_x00174798 *adxb, int nsmpl) __asm__("ADXB_SetAhxDecSmpl");
void ADXB_ExecOneAhx_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneAhx");
void ADXB_AhxTermSupply_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_AhxTermSupply");
int ADXB_CheckAiff_x00174798(unsigned char *hdr) __asm__("ADXB_CheckAiff");
int ADXB_DecodeHeaderAiff_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAiff");
void ADXB_ExecOneAiff_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneAiff");
int ADXB_CheckAu_x00174798(unsigned char *hdr) __asm__("ADXB_CheckAu");
int ADXB_DecodeHeaderAu_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAu");
void ADXB_ExecOneAu_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneAu");
int ADXB_DecodeHeaderSpsd_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderSpsd");
void ADXB_ExecOneSpsd_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneSpsd");
int ADXB_CheckSpsd_x00174798(unsigned char *hdr) __asm__("ADXB_CheckSpsd");
int ADXB_DecodeHeaderWav_x00174798(AdxbObj_x00174798 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderWav");
int ADXB_CheckWav_x00174798(unsigned char *hdr) __asm__("ADXB_CheckWav");
void ADXB_ExecOneWav_x00174798(AdxbObj_x00174798 *adxb) __asm__("ADXB_ExecOneWav");
enum AdxSjdStat_x00174798 { ADXSJD_STAT_STOP_x00174798 = 0, ADXSJD_STAT_DECHDR_x00174798 = 1, ADXSJD_STAT_DECODE_x00174798 = 2, ADXSJD_STAT_DECEND_x00174798 = 3, ADXSJD_STAT_ERROR_x00174798 = 4 };
typedef struct AdxSjdObj_x00174798 { signed char used; signed char stat; signed char maxnch; signed char empty_end; AdxbObj_x00174798 *adxb; SfdSj_x00174798 *sji; SfdSj_x00174798 *sjo[2]; SfdSjChunk_x00174798 cki; SfdSjChunk_x00174798 cko[2]; int total_decsmpl; int total_decdtlen; int decpos; int maxdecsmpl; int dtrpsmpl; int dtrpcnt; int dtrpdtlen; void (*dtrpfunc)(void *context); void *dtrpobj; void (*dfltfunc)(void *context, int ch, char *data, int len); void *dfltobj; char hdr[64]; int hdrlen; int lnksw; int fill; int skip; } AdxSjdObj_x00174798;
extern void (*adxsjd_header_hook_x00174798)(AdxbObj_x00174798 *adxb, int rate) __asm__("adxsjd_header_hook");
void SFA_Init_x00174798(void) __asm__("SFA_Init");
void SFA_Finish_x00174798(void) __asm__("SFA_Finish");
void ADXSJD_Init_x00174798(void) __asm__("ADXSJD_Init");
void ADXSJD_Finish_x00174798(void) __asm__("ADXSJD_Finish");
AdxSjdObj_x00174798 *ADXSJD_Create_x00174798(SfdSj_x00174798 *sji, int nch, SfdSj_x00174798 **sjo) __asm__("ADXSJD_Create");
void ADXSJD_Destroy_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_Destroy");
char ADXSJD_GetStat_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetStat");
void ADXSJD_SetInSj_x00174798(AdxSjdObj_x00174798 *sjd, SfdSj_x00174798 *sji) __asm__("ADXSJD_SetInSj");
void ADXSJD_SetOutSj_x00174798(AdxSjdObj_x00174798 *sjd, int ch, SfdSj_x00174798 *sjo) __asm__("ADXSJD_SetOutSj");
void ADXSJD_SetMaxDecSmpl_x00174798(AdxSjdObj_x00174798 *sjd, int nsmpl) __asm__("ADXSJD_SetMaxDecSmpl");
void ADXSJD_TermSupply_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_TermSupply");
void ADXSJD_Start_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_Start");
void ADXSJD_Stop_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_Stop");
void ADXSJD_ExecHndl_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_ExecHndl");
void ADXSJD_ExecServer_x00174798(void) __asm__("ADXSJD_ExecServer");
int ADXSJD_GetDecDtLen_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetDecDtLen");
int ADXSJD_GetDecNumSmpl_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetDecNumSmpl");
void ADXSJD_SetDecPos_x00174798(AdxSjdObj_x00174798 *sjd, int pos) __asm__("ADXSJD_SetDecPos");
int ADXSJD_GetDecPos_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetDecPos");
void ADXSJD_SetLnkSw_x00174798(AdxSjdObj_x00174798 *sjd, int sw) __asm__("ADXSJD_SetLnkSw");
int ADXSJD_GetLnkSw_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetLnkSw");
void ADXSJD_SetExtString_x00174798(AdxSjdObj_x00174798 *sjd, const char *str) __asm__("ADXSJD_SetExtString");
void ADXSJD_SetDefExtString_x00174798(const char *str) __asm__("ADXSJD_SetDefExtString");
void ADXSJD_ResetDefFmt_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_ResetDefFmt");
int ADXSJD_AdjustSmpl_x00174798(AdxSjdObj_x00174798 *sjd, int nsmpl) __asm__("ADXSJD_AdjustSmpl");
void ADXSJD_EntryFltFunc_x00174798(AdxSjdObj_x00174798 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
void ADXSJD_EntryTrapFunc_x00174798(AdxSjdObj_x00174798 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
void ADXSJD_SetTrapNumSmpl_x00174798(AdxSjdObj_x00174798 *sjd, int nsmpl) __asm__("ADXSJD_SetTrapNumSmpl");
int ADXSJD_GetTrapNumSmpl_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetTrapNumSmpl");
void ADXSJD_SetTrapCnt_x00174798(AdxSjdObj_x00174798 *sjd, int cnt) __asm__("ADXSJD_SetTrapCnt");
int ADXSJD_GetTrapCnt_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetTrapCnt");
void ADXSJD_SetTrapDtLen_x00174798(AdxSjdObj_x00174798 *sjd, int len) __asm__("ADXSJD_SetTrapDtLen");
int ADXSJD_GetTrapDtLen_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetTrapDtLen");
int ADXSJD_GetFormat_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetFormat");
int ADXSJD_GetSfreq_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetSfreq");
int ADXSJD_GetNumChan_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetNumChan");
int ADXSJD_GetOutBps_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetOutBps");
int ADXSJD_GetBlkSmpl_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetBlkSmpl");
int ADXSJD_GetTotalNumSmpl_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetTotalNumSmpl");
int ADXSJD_GetNumLoop_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetNumLoop");
int ADXSJD_GetLpStartPos_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetLpStartPos");
int ADXSJD_GetLpStartOfst_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetLpStartOfst");
int ADXSJD_GetLpEndPos_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetLpEndPos");
int ADXSJD_GetLpEndOfst_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetLpEndOfst");
int ADXSJD_GetAinfLen_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetAinfLen");
short ADXSJD_GetDefOutVol_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetDefOutVol");
short ADXSJD_GetDefPan_x00174798(AdxSjdObj_x00174798 *sjd, int ch) __asm__("ADXSJD_GetDefPan");
char *ADXSJD_GetDataId_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetDataId");
int ADXSJD_GetHdrLen_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetHdrLen");
int ADXSJD_GetFmtBps_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetFmtBps");
char *ADXSJD_GetSpsdInfo_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_GetSpsdInfo");
void ADXSJD_TakeSnapshot_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_TakeSnapshot");
void ADXSJD_RestoreSnapshot_x00174798(AdxSjdObj_x00174798 *sjd) __asm__("ADXSJD_RestoreSnapshot");
enum CvFsOptCode_x00174798 { CVFS_OPT_SET_CUR_VOLUME_x00174798 = 1, CVFS_OPT_ADD_VOLUME_x00174798 = 2, CVFS_OPT_DEL_VOLUME_x00174798 = 3, CVFS_OPT_GET_NUM_FILES_x00174798 = 4, CVFS_OPT_GET_VOLUME_INFO_x00174798 = 5, CVFS_OPT_SET_DEF_VOL_x00174798 = 6, CVFS_OPT_IS_FULL_PATH_x00174798 = 100, CVFS_OPT_NUM_TR64_HIGH_x00174798 = 200, CVFS_OPT_NUM_TR64_LOW_x00174798 = 201, CVFS_OPT_FILE_SIZE64_HIGH_x00174798 = 202, CVFS_OPT_FILE_SIZE64_LOW_x00174798 = 203, CVFS_OPT_FILE_SIZE_EX64_HIGH_x00174798 = 204, CVFS_OPT_FILE_SIZE_EX64_LOW_x00174798 = 205, CVFS_OPT_FSYS64_INFO_x00174798 = 299, CVFS_OPT_FILE_SIZE_BY_HNDL_x00174798 = 300 };
typedef void (*CvFsErrFn_x00174798)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00174798)(CvFsErrFn_x00174798 func, void *obj);
typedef int (*CvFsPathFn_x00174798)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00174798)(void);
typedef int (*CvFsOpenFn_x00174798)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00174798)(int fd);
typedef int (*CvFsFdIntFn_x00174798)(int fd);
typedef int (*CvFsSeekFn_x00174798)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00174798)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00174798)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00174798)(void);
typedef int (*CvFsLoadDirInfoFn_x00174798)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00174798)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00174798)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00174798 { void (*exec_server)(void); CvFsEntryErrFuncFn_x00174798 entry_err_func; CvFsPathFn_x00174798 get_file_size; CvFsGetFreeSizeFn_x00174798 get_free_size; CvFsOpenFn_x00174798 open; CvFsFdFn_x00174798 close; CvFsSeekFn_x00174798 seek; CvFsFdIntFn_x00174798 tell; CvFsXferFn_x00174798 req_rd; CvFsXferFn_x00174798 req_wr; CvFsFdFn_x00174798 stop_tr; CvFsFdIntFn_x00174798 get_stat; CvFsFdIntFn_x00174798 get_sct_len; CvFsSetSctLenFn_x00174798 set_sct_len; CvFsFdIntFn_x00174798 get_num_tr; CvFsPathFn_x00174798 change_dir; CvFsPathFn_x00174798 is_exist_file; CvFsGetNumFilesFn_x00174798 get_num_files; CvFsLoadDirInfoFn_x00174798 load_dir_info; CvFsFdIntFn_x00174798 get_max_byte_rate; CvFsPathFn_x00174798 make_dir; CvFsPathFn_x00174798 remove_dir; CvFsPathFn_x00174798 delete_file; CvFsGetFileSizeExFn_x00174798 get_file_size_ex; int (*opt_fn1)(); CvFsOptFn2_x00174798 opt_fn2; } CvFsVtbl_x00174798;
typedef struct CvFsHandle_x00174798 { CvFsVtbl_x00174798 *vtbl; int fd; } CvFsHandle_x00174798;
typedef struct CvFsDevice_x00174798 { CvFsVtbl_x00174798 *vtbl; char name[12]; } CvFsDevice_x00174798;
typedef struct CvFsOptPrm_x00174798 { void *prm[5]; } CvFsOptPrm_x00174798;
extern CvFsErrFn_x00174798 cvfs_errfn_x00174798 __asm__("cvfs_errfn");
extern void *cvfs_errobj_x00174798 __asm__("cvfs_errobj");
extern int cvfs_init_cnt_x00174798 __asm__("cvfs_init_cnt");
extern CvFsHandle_x00174798 cvfs_handles_x00174798[40] __asm__("cvfs_handles");
extern CvFsDevice_x00174798 cvfs_devices_x00174798[32] __asm__("cvfs_devices");
extern char cvfs_defdev_x00174798[9] __asm__("cvfs_defdev");
extern char cvfs_path_work_x00174798[] __asm__("cvfs_path_work");
void cvFsCallUsrErrFn_x00174798(void *obj, const char *msg, int code) __asm__("cvFsCallUsrErrFn");
void cvFsError_x00174798(const char *msg) __asm__("cvFsError");
void cvFsInit_x00174798(void) __asm__("cvFsInit");
void cvFsFinish_x00174798(void) __asm__("cvFsFinish");
void cvFsAddDev_x00174798(char *devname, CvFsVtbl_x00174798 *(*get_if)(void), void *prm) __asm__("cvFsAddDev");
CvFsVtbl_x00174798 *addDevice_x00174798(char *devname, CvFsVtbl_x00174798 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x00174798 *getDevice_x00174798(const char *devname) __asm__("getDevice");
void toUpperStr_x00174798(char *str) __asm__("toUpperStr");
void cvFsDelDev_x00174798(const char *devname) __asm__("cvFsDelDev");
void cvFsSetDefDev_x00174798(char *devname) __asm__("cvFsSetDefDev");
int isExistDev_x00174798(const char *devname, int len) __asm__("isExistDev");
char *cvFsGetDefDev_x00174798(void) __asm__("cvFsGetDefDev");
CvFsVtbl_x00174798 *variousProc_x00174798(char *devname, char *fname, const char *path) __asm__("variousProc");
CvFsHandle_x00174798 *cvFsOpen_x00174798(const char *path, void *atr, int rw) __asm__("cvFsOpen");
CvFsHandle_x00174798 *allocCvFsHn_x00174798(void) __asm__("allocCvFsHn");
void releaseCvFsHn_x00174798(CvFsHandle_x00174798 *hdl) __asm__("releaseCvFsHn");
void getDevName_x00174798(char *devname, char *fname, const char *path) __asm__("getDevName");
void getDefDev_x00174798(char *devname) __asm__("getDefDev");
void cvFsClose_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsClose");
int cvFsTell_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsTell");
int cvFsSeek_x00174798(CvFsHandle_x00174798 *hdl, int offset, int origin) __asm__("cvFsSeek");
int cvFsReqRd_x00174798(CvFsHandle_x00174798 *hdl, int nsct, void *buf) __asm__("cvFsReqRd");
int cvFsReqWr_x00174798(CvFsHandle_x00174798 *hdl, int nsct, void *buf) __asm__("cvFsReqWr");
void cvFsStopTr_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsStopTr");
void cvFsExecServer_x00174798(void) __asm__("cvFsExecServer");
int cvFsGetStat_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetStat");
int cvFsGetFileSize_x00174798(const char *path) __asm__("cvFsGetFileSize");
int cvFsGetFileSizeEx_x00174798(const char *path, int arg) __asm__("cvFsGetFileSizeEx");
int cvFsGetFileSizeByHndl_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetFileSizeByHndl");
int cvFsGetFreeSize_x00174798(const char *devname) __asm__("cvFsGetFreeSize");
int cvFsGetSctLen_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetSctLen");
void cvFsSetSctLen_x00174798(CvFsHandle_x00174798 *hdl, int len) __asm__("cvFsSetSctLen");
int cvFsGetNumTr_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetNumTr");
int cvFsChangeDir_x00174798(const char *path) __asm__("cvFsChangeDir");
int cvFsIsExistFile_x00174798(const char *path) __asm__("cvFsIsExistFile");
int cvFsGetNumFiles_x00174798(const char *devname) __asm__("cvFsGetNumFiles");
int cvFsLoadDirInfo_x00174798(const char *path, void *work, int nfile) __asm__("cvFsLoadDirInfo");
int cvFsGetMaxByteRate_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetMaxByteRate");
int cvFsMakeDir_x00174798(const char *path) __asm__("cvFsMakeDir");
int cvFsRemoveDir_x00174798(const char *path) __asm__("cvFsRemoveDir");
int cvFsDeleteFile_x00174798(const char *path) __asm__("cvFsDeleteFile");
char *cvFsGetDevName_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetDevName");
void cvFsEntryErrFunc_x00174798(CvFsErrFn_x00174798 func, void *obj) __asm__("cvFsEntryErrFunc");
int cvFsOptFn1_x00174798(CvFsHandle_x00174798 *hdl, int code, int arg) __asm__("cvFsOptFn1");
int cvFsOptFn2_x00174798(CvFsHandle_x00174798 *hdl, int code, int arg) __asm__("cvFsOptFn2");
int cvFsSetCurVolume_x00174798(const char *devname, void *image) __asm__("cvFsSetCurVolume");
int cvFsAddVolumeEx_x00174798(const char *devname, const char *volume, void *image, int option) __asm__("cvFsAddVolumeEx");
int cvFsDelVolume_x00174798(const char *devname, const char *volume) __asm__("cvFsDelVolume");
int cvFsGetVolumeInfo_x00174798(const char *devname, const char *volume, void *info) __asm__("cvFsGetVolumeInfo");
void cvFsSetDefVol_x00174798(const char *devname, const char *volume) __asm__("cvFsSetDefVol");
int isNeedDevName_x00174798(const char *devname) __asm__("isNeedDevName");
void addDevName_x00174798(char *devname, char *fname) __asm__("addDevName");
int cvFsIsExistDevice_x00174798(const char *devname) __asm__("cvFsIsExistDevice");
long long cvFsGetNumTr64_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetNumTr64");
long long cvFsGetFileSize64_x00174798(const char *path) __asm__("cvFsGetFileSize64");
long long cvFsGetFileSizeEx64_x00174798(const char *path, int arg) __asm__("cvFsGetFileSizeEx64");
int cvFsGetFsys64Info_x00174798(CvFsHandle_x00174798 *hdl) __asm__("cvFsGetFsys64Info");
enum AdxStmStat_x00174798 { ADXSTM_STAT_STOP_x00174798 = 1, ADXSTM_STAT_READ_x00174798 = 2, ADXSTM_STAT_READEND_x00174798 = 3, ADXSTM_STAT_ERROR_x00174798 = 4 };
typedef struct AdxStmObj_x00174798 { signed char used; signed char stat; signed char rdflg; signed char rtrycnt; SfdSj_x00174798 *sj; CvFsHandle_x00174798 *fd; int fofst; int fsize; int fsctsz; int maxrdsz; int minrdsz; int rdsct; SfdSjChunk_x00174798 rdck; int reqrdsct; int eos; int rdbyte; void (*eosfunc)(void *obj); void *eosobj; int buflen; signed char pause; signed char open_req; signed char close_req; signed char start_req; signed char stop_req; signed char opened; signed char nrmlflg; char f75[5]; const char *fname; void *dir; int curpos; int maxsct; } AdxStmObj_x00174798;
void ADXT_SetupRtimeNumStm_x00174798(int num) __asm__("ADXT_SetupRtimeNumStm");
void ADXSTMF_SetRtimNum_x00174798(int num) __asm__("ADXSTMF_SetRtimNum");
int ADXSTM_Init_x00174798(void) __asm__("ADXSTM_Init");
void ADXSTM_Reset_x00174798(void) __asm__("ADXSTM_Reset");
void ADXSTM_Finish_x00174798(void) __asm__("ADXSTM_Finish");
AdxStmObj_x00174798 *ADXSTMF_CreateCvfs_x00174798(CvFsHandle_x00174798 *fd, int fofst, int fsize, SfdSj_x00174798 *sj) __asm__("ADXSTMF_CreateCvfs");
AdxStmObj_x00174798 *ADXSTMF_CreateCvfsRt_x00174798(CvFsHandle_x00174798 *fd, int fofst, int fsize, SfdSj_x00174798 *sj) __asm__("ADXSTMF_CreateCvfsRt");
AdxStmObj_x00174798 *ADXSTM_Create_x00174798(SfdSj_x00174798 *sj, int maxsct) __asm__("ADXSTM_Create");
void ADXSTM_Destroy_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_Destroy");
void ADXSTM_BindFileNw_x00174798(AdxStmObj_x00174798 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("ADXSTM_BindFileNw");
void ADXSTM_BindFile_x00174798(AdxStmObj_x00174798 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("ADXSTM_BindFile");
void ADXSTM_ReleaseFileNw_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_ReleaseFileNw");
void ADXSTM_ReleaseFile_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_ReleaseFile");
int ADXSTM_IsOpenedFile_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_IsOpenedFile");
int ADXSTM_GetStat_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetStat");
int ADXSTM_Seek_x00174798(AdxStmObj_x00174798 *stm, int pos) __asm__("ADXSTM_Seek");
int ADXSTM_Tell_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_Tell");
int ADXSTM_Start_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_Start");
int ADXSTM_Start2_x00174798(AdxStmObj_x00174798 *stm, int maxsct) __asm__("ADXSTM_Start2");
void ADXSTM_StopNw_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_StopNw");
void ADXSTM_Stop_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_Stop");
void ADXSTM_EntryEosFunc_x00174798(AdxStmObj_x00174798 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXSTM_SetEos_x00174798(AdxStmObj_x00174798 *stm, int eos) __asm__("ADXSTM_SetEos");
void ADXSTM_ExecServer_x00174798(void) __asm__("ADXSTM_ExecServer");
int ADXSTM_GetCurSct_x00174798(AdxStmObj_x00174798 *stm, int *nsct) __asm__("ADXSTM_GetCurSct");
int ADXSTM_GetBufSize_x00174798(AdxStmObj_x00174798 *stm, int *min, int *max) __asm__("ADXSTM_GetBufSize");
SfdSj_x00174798 *ADXSTM_GetSj_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetSj");
int ADXSTM_SetBufSize_x00174798(AdxStmObj_x00174798 *stm, int min, int max) __asm__("ADXSTM_SetBufSize");
int ADXSTM_SetReqRdSize_x00174798(AdxStmObj_x00174798 *stm, int nsct) __asm__("ADXSTM_SetReqRdSize");
void ADXSTM_EntryErrFunc_x00174798(AdxStmObj_x00174798 *stm, int prio) __asm__("ADXSTM_EntryErrFunc");
int ADXSTM_GetFileLen_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetFileLen");
int ADXSTM_GetFileSct_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetFileSct");
void ADXSTM_SetPause_x00174798(AdxStmObj_x00174798 *stm, int sw) __asm__("ADXSTM_SetPause");
int ADXSTM_GetPause_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetPause");
void ADXSTM_GetCvdfsStat_x00174798(AdxStmObj_x00174798 *stm, int *stat) __asm__("ADXSTM_GetCvdfsStat");
int ADXSTM_GetFad_x00174798(AdxStmObj_x00174798 *stm, int *fad) __asm__("ADXSTM_GetFad");
int ADXSTM_GetFsizeSct_x00174798(const char *fname, int *nsct) __asm__("ADXSTM_GetFsizeSct");
int ADXSTM_GetFsizeByte_x00174798(const char *fname, int *nbyte) __asm__("ADXSTM_GetFsizeByte");
void ADXSTM_SetSj_x00174798(AdxStmObj_x00174798 *stm, SfdSj_x00174798 *sj) __asm__("ADXSTM_SetSj");
void ADXSTM_SetRdSct_x00174798(AdxStmObj_x00174798 *stm, int nsct) __asm__("ADXSTM_SetRdSct");
void ADXSTM_SetOfst_x00174798(AdxStmObj_x00174798 *stm, int ofst) __asm__("ADXSTM_SetOfst");
void ADXT_SetNumRetry_x00174798(int num) __asm__("ADXT_SetNumRetry");
int ADXSTM_GetReadFlg_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_GetReadFlg");
void ADXSTM_OpenCvfs_x00174798(AdxStmObj_x00174798 *stm) __asm__("ADXSTM_OpenCvfs");
typedef struct AdxAmpObj_x00174798 AdxAmpObj_x00174798;
void ADXAMP_Init_x00174798(void) __asm__("ADXAMP_Init");
void ADXAMP_Finish_x00174798(void) __asm__("ADXAMP_Finish");
AdxAmpObj_x00174798 *ADXAMP_Create_x00174798(int maxnch, SfdSj_x00174798 **sji, SfdSj_x00174798 **sjo) __asm__("ADXAMP_Create");
void ADXAMP_Destroy_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_Destroy");
int ADXAMP_GetStat_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_GetStat");
void ADXAMP_Start_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_Start");
void ADXAMP_Stop_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_Stop");
void ADXAMP_ExecHndl_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_ExecHndl");
void ADXAMP_ExecServer_x00174798(void) __asm__("ADXAMP_ExecServer");
int ADXAMP_GetExtractNumSmpl_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_GetExtractNumSmpl");
void ADXAMP_SetSfreq_x00174798(AdxAmpObj_x00174798 *amp, int sfreq) __asm__("ADXAMP_SetSfreq");
int ADXAMP_GetSfreq_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_GetSfreq");
void ADXAMP_SetFrmLen_x00174798(AdxAmpObj_x00174798 *amp, float frmlen) __asm__("ADXAMP_SetFrmLen");
float ADXAMP_GetFrmLen_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_GetFrmLen");
void ADXAMP_SetFrmPrd_x00174798(AdxAmpObj_x00174798 *amp, float frmprd) __asm__("ADXAMP_SetFrmPrd");
float ADXAMP_GetFrmPrd_x00174798(AdxAmpObj_x00174798 *amp) __asm__("ADXAMP_GetFrmPrd");
typedef struct DtrObj_x00174798 DtrObj_x00174798;
signed char DTR_GetStat_x00174798(DtrObj_x00174798 *dtr) __asm__("DTR_GetStat");
void DTR_ExecServer_x00174798(void) __asm__("DTR_ExecServer");
void DTR_Init_x00174798(void) __asm__("DTR_Init");
void DTR_Finish_x00174798(void) __asm__("DTR_Finish");
DtrObj_x00174798 *DTR_Create_x00174798(SfdSj_x00174798 *sjs, SfdSj_x00174798 *sjd) __asm__("DTR_Create");
void DTR_Destroy_x00174798(DtrObj_x00174798 *dtr) __asm__("DTR_Destroy");
void DTR_Start_x00174798(DtrObj_x00174798 *dtr) __asm__("DTR_Start");
void DTR_Stop_x00174798(DtrObj_x00174798 *dtr) __asm__("DTR_Stop");
typedef struct Ps2RnaPsj_x00174798 { char used; void *sjrmt; SfdSj_x00174798 *sjuni; SjxObj_x00174798 *sjx; SfdSjChunk_x00174798 ck; } Ps2RnaPsj_x00174798;
typedef struct Ps2Rna_x00174798 { signed char used; int maxnch; Ps2RnaPsj_x00174798 *psj[2]; DtrObj_x00174798 *dtr[2]; SfdSj_x00174798 *sjo[2]; void *id; int pad36; int ring_size; int psj_bufsize; int sfreq; int sent_sfreq; int outvol; int sent_outvol; int outpan[2]; int sent_outpan[2]; signed char playsw; signed char sent_playsw; signed char nch; signed char sent_nch; signed char auxsw; signed char sent_auxsw; signed char dualsw; signed char sent_dualsw; signed char transsw; signed char trans_stopped; signed char sent_stopflag; signed char stopflag; int outbalance; int sent_outbalance; } Ps2Rna_x00174798;
void PS2RNA_SetupVoice_x00174798(int nste, int nmono) __asm__("PS2RNA_SetupVoice");
void PS2RNA_Init_x00174798(void) __asm__("PS2RNA_Init");
void PS2RNA_SendOutMode_x00174798(int outmode) __asm__("PS2RNA_SendOutMode");
void PS2RNA_StartAux_x00174798(void) __asm__("PS2RNA_StartAux");
void PS2RNA_StopAux_x00174798(void) __asm__("PS2RNA_StopAux");
void PS2RNA_SetAuxSw_x00174798(Ps2Rna_x00174798 *rna, int sw) __asm__("PS2RNA_SetAuxSw");
void PS2RNA_SetDualSw_x00174798(Ps2Rna_x00174798 *rna, int sw) __asm__("PS2RNA_SetDualSw");
signed char PS2RNA_GetDualSw_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetDualSw");
void PS2RNA_OpenPort_x00174798(unsigned int port) __asm__("PS2RNA_OpenPort");
void PS2RNA_ClosePort_x00174798(unsigned int port) __asm__("PS2RNA_ClosePort");
int PS2RNA_IsPortOpen_x00174798(unsigned int port) __asm__("PS2RNA_IsPortOpen");
int PS2RNA_Finish_x00174798(void) __asm__("PS2RNA_Finish");
Ps2Rna_x00174798 *PS2RNA_Create_x00174798(SfdSj_x00174798 **sjo, int nch) __asm__("PS2RNA_Create");
void PS2RNA_Destroy_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_Destroy");
void PS2RNA_Start_x00174798(void) __asm__("PS2RNA_Start");
void PS2RNA_Stop_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_Stop");
void PS2RNA_SetTransSw_x00174798(Ps2Rna_x00174798 *rna, int sw) __asm__("PS2RNA_SetTransSw");
void PS2RNA_SetPlaySw_x00174798(Ps2Rna_x00174798 *rna, int sw) __asm__("PS2RNA_SetPlaySw");
void PS2RNA_SetOutMode_x00174798(int outmode) __asm__("PS2RNA_SetOutMode");
int PS2RNA_GetOutMode_x00174798(void) __asm__("PS2RNA_GetOutMode");
void PS2RNA_SetStopFlag_x00174798(Ps2Rna_x00174798 *rna, int flag) __asm__("PS2RNA_SetStopFlag");
void PS2RNA_ClearBuf_x00174798(void) __asm__("PS2RNA_ClearBuf");
void PS2RNA_SetPcmType_x00174798(void) __asm__("PS2RNA_SetPcmType");
void PS2RNA_GetTime_x00174798(Ps2Rna_x00174798 *rna, int *ncount, int *tscale) __asm__("PS2RNA_GetTime");
int PS2RNA_GetNumData_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetNumData");
int PS2RNA_GetNumRoom_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetNumRoom");
void PS2RNA_ExecServer_x00174798(void) __asm__("PS2RNA_ExecServer");
void PS2RNA_SetStartSmpl_x00174798(void) __asm__("PS2RNA_SetStartSmpl");
void PS2RNA_SetNumChan_x00174798(Ps2Rna_x00174798 *rna, int nch) __asm__("PS2RNA_SetNumChan");
void PS2RNA_SetSfreq_x00174798(Ps2Rna_x00174798 *rna, int sfreq) __asm__("PS2RNA_SetSfreq");
void PS2RNA_SetOutVol_x00174798(Ps2Rna_x00174798 *rna, int vol) __asm__("PS2RNA_SetOutVol");
void PS2RNA_SetOutPan_x00174798(Ps2Rna_x00174798 *rna, int ch, int pan) __asm__("PS2RNA_SetOutPan");
void PS2RNA_SetOutBalance_x00174798(Ps2Rna_x00174798 *rna, int balance) __asm__("PS2RNA_SetOutBalance");
int PS2RNA_SetBitPerSmpl_x00174798(Ps2Rna_x00174798 *rna, int bps) __asm__("PS2RNA_SetBitPerSmpl");
int PS2RNA_GetStartSmpl_x00174798(void) __asm__("PS2RNA_GetStartSmpl");
int PS2RNA_GetSfreq_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetSfreq");
int PS2RNA_GetOutVol_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetOutVol");
int PS2RNA_GetOutPan_x00174798(Ps2Rna_x00174798 *rna, int ch) __asm__("PS2RNA_GetOutPan");
int PS2RNA_GetOutBalance_x00174798(Ps2Rna_x00174798 *rna) __asm__("PS2RNA_GetOutBalance");
int PS2RNA_GetBitPerSmpl_x00174798(void) __asm__("PS2RNA_GetBitPerSmpl");
int PS2RNA_IsOverflow_x00174798(void) __asm__("PS2RNA_IsOverflow");
void PS2RNA_ClearOverflow_x00174798(void) __asm__("PS2RNA_ClearOverflow");
void PS2RNA_Flush_x00174798(void) __asm__("PS2RNA_Flush");
int PS2RNA_DiscardData_x00174798(Ps2Rna_x00174798 *rna, int nsmpl) __asm__("PS2RNA_DiscardData");
void PS2RNA_SetTotalNumSmpl_x00174798(void) __asm__("PS2RNA_SetTotalNumSmpl");
int PS2RNA_SetStmHdInfo_x00174798(Ps2Rna_x00174798 *rna, char *info) __asm__("PS2RNA_SetStmHdInfo");
SfdSj_x00174798 *PS2RNA_GetSjUni_x00174798(Ps2Rna_x00174798 *rna, int ch) __asm__("PS2RNA_GetSjUni");
void *PS2RNA_GetSjRmt_x00174798(Ps2Rna_x00174798 *rna, int ch) __asm__("PS2RNA_GetSjRmt");
typedef struct AdxtHdrInfo_x00174798 { int fmt; int sfreq; int nch; int bps; int nsmpl; int lptype; int lpstart; int lpend; } AdxtHdrInfo_x00174798;
enum AdxtStat_x00174798 { ADXT_STAT_STOP_x00174798 = 0, ADXT_STAT_DECINFO_x00174798 = 1, ADXT_STAT_PREP_x00174798 = 2, ADXT_STAT_PLAYING_x00174798 = 3, ADXT_STAT_DECEND_x00174798 = 4, ADXT_STAT_PLAYEND_x00174798 = 5, ADXT_STAT_ERROR_x00174798 = 6 };
enum AdxtPmode_x00174798 { ADXT_PMODE_FNAME_x00174798 = 0, ADXT_PMODE_AFS_x00174798 = 1, ADXT_PMODE_MEM_x00174798 = 2, ADXT_PMODE_SJ_x00174798 = 3, ADXT_PMODE_SLFILE_x00174798 = 4 };
enum AdxtRmode_x00174798 { ADXT_RMODE_NOACT_x00174798 = 0, ADXT_RMODE_STOP_x00174798 = 1, ADXT_RMODE_REPLAY_x00174798 = 2 };
enum AdxtErrCode_x00174798 { ADXT_ERR_OK_x00174798 = 0, ADXT_ERR_SHRTBUF_x00174798 = -1, ADXT_ERR_SNDBLK_x00174798 = -2 };
typedef struct AdxtObj_x00174798 { signed char used; signed char stat; signed char pmode; signed char maxnch; AdxSjdObj_x00174798 *sjd; AdxStmObj_x00174798 *stm; Ps2Rna_x00174798 *rna; SfdSj_x00174798 *sjf; SfdSj_x00174798 *sji; SfdSj_x00174798 *sjo[2]; char *ibuf; int ibufbsize; int ibufxsize; char *obuf; int obufsize; int obufdist; int svrfreq; short maxsct; short minsct; short outvol; short outpan[2]; short outbalance; int maxdecsmpl; int lpcnt; int lp_skiplen; int trp; int wpos; int mofst; short ercode; int edecpos; short edeccnt; short eshrtcnt; signed char lpflg; signed char autorcvr; signed char fltmode; signed char execflag; signed char pstwait_flag; signed char pstready_flag; signed char pause_flag; AdxAmpObj_x00174798 *amp; SfdSj_x00174798 *ampsji[2]; SfdSj_x00174798 *ampsjo[2]; int time_ofst; int lesct; int trpnsmpl; LscObj_x00174798 *lsc; signed char lnkflg; unsigned int vtime; int vbase; int decofst; int pad_nsmpl; signed char stm_req; char *fnbuf; char *fname; void *dir; int ofst; int nsct; } AdxtObj_x00174798;
typedef void (*AdxtHookFunc_x00174798)(AdxtObj_x00174798 *adxt);
typedef void (*AdxtFltFunc_x00174798)(void *obj, int ch, char *data, int len);
typedef void (*AdxtDecFunc_x00174798)(void *obj, int nsmpl, int nbyte);
typedef void (*AdxtErrFunc_x00174798)(void *obj, char *message);
typedef void (*AdxtDecInfoFunc_x00174798)(AdxtObj_x00174798 *adxt, int sfreq, int nch, int total_nsmpl);
typedef struct AcxEntry_x00174798 { int ofst; int len; } AcxEntry_x00174798;
typedef struct AcxHeader_x00174798 { int id; int count; AcxEntry_x00174798 ent[1]; } AcxHeader_x00174798;
extern AdxtObj_x00174798 adxt_obj_x00174798[16] __asm__("adxt_obj");
extern int adxt_output_mono_x00174798 __asm__("adxt_output_mono");
extern AdxtHookFunc_x00174798 adxt_detach_pl2_x00174798 __asm__("adxt_detach_pl2");
AdxtObj_x00174798 *ADXT_Create_x00174798(int maxnch, char *work, int worksize) __asm__("ADXT_Create");
AdxtObj_x00174798 *ADXT_CreatePl2_x00174798(char *work, int worksize) __asm__("ADXT_CreatePl2");
void ADXT_DetachAhx_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_DetachAhx");
void ADXT_DetachPl2_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_DetachPl2");
void ADXT_Destroy_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_Destroy");
void ADXT_DestroyAll_x00174798(void) __asm__("ADXT_DestroyAll");
void ADXT_CloseAllHandles_x00174798(void) __asm__("ADXT_CloseAllHandles");
void adxt_start_sj_x00174798(AdxtObj_x00174798 *adxt, SfdSj_x00174798 *sji) __asm__("adxt_start_sj");
void adxt_start_stm_x00174798(AdxtObj_x00174798 *adxt, char *fname, void *dir, int ofst, int nsct) __asm__("adxt_start_stm");
void ADXT_StartSj_x00174798(AdxtObj_x00174798 *adxt, SfdSj_x00174798 *sj) __asm__("ADXT_StartSj");
void ADXT_StopWithoutLsc_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_StopWithoutLsc");
void ADXT_Stop_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_Stop");
int ADXT_GetStat_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetStat");
void ADXT_SetTimeMode_x00174798(int mode) __asm__("ADXT_SetTimeMode");
void ADXT_GetTimeSfreq_x00174798(AdxtObj_x00174798 *adxt, int *ncount, int *tscale) __asm__("ADXT_GetTimeSfreq");
void ADXT_GetTime_x00174798(AdxtObj_x00174798 *adxt, int *ncount, int *tscale) __asm__("ADXT_GetTime");
int ADXT_GetTimeReal_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetTimeReal");
int ADXT_GetNumSmpl_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetNumSmpl");
int ADXT_GetSfreq_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetSfreq");
int ADXT_GetNumChan_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetNumChan");
int ADXT_GetHdrLen_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetHdrLen");
int ADXT_GetFmtBps_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetFmtBps");
void ADXT_SetOutPan_x00174798(AdxtObj_x00174798 *adxt, int ch, int pan) __asm__("ADXT_SetOutPan");
int ADXT_GetOutPan_x00174798(AdxtObj_x00174798 *adxt, int ch) __asm__("ADXT_GetOutPan");
void ADXT_SetOutBalance_x00174798(AdxtObj_x00174798 *adxt, int balance) __asm__("ADXT_SetOutBalance");
int ADXT_GetOutBalance_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetOutBalance");
void ADXT_SetOutVol_x00174798(AdxtObj_x00174798 *adxt, int vol) __asm__("ADXT_SetOutVol");
int ADXT_GetOutVol_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetOutVol");
short ADXT_GetDefOutVol_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetDefOutVol");
short ADXT_GetDefPan_x00174798(AdxtObj_x00174798 *adxt, int ch) __asm__("ADXT_GetDefPan");
char *ADXT_GetDataId_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetDataId");
char *ADXT_GetHdrDataId_x00174798(unsigned char *hdr) __asm__("ADXT_GetHdrDataId");
void ADXT_SetDefSvrFreq_x00174798(int freq) __asm__("ADXT_SetDefSvrFreq");
void ADXT_SetSvrFreq_x00174798(AdxtObj_x00174798 *adxt, int freq) __asm__("ADXT_SetSvrFreq");
void ADXT_SetReloadTime_x00174798(AdxtObj_x00174798 *adxt, float time, int nch, int sfreq) __asm__("ADXT_SetReloadTime");
void ADXT_ResetReloadTime_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ResetReloadTime");
void ADXT_SetReloadSct_x00174798(AdxtObj_x00174798 *adxt, int minsct) __asm__("ADXT_SetReloadSct");
short ADXT_GetReloadSct_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetReloadSct");
int ADXT_GetNumSctIbuf_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetNumSctIbuf");
int ADXT_GetNumSmplObuf_x00174798(AdxtObj_x00174798 *adxt, int ch) __asm__("ADXT_GetNumSmplObuf");
float ADXT_GetIbufRemainTime_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetIbufRemainTime");
int ADXT_IsIbufSafety_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_IsIbufSafety");
void ADXT_SetAutoRcvr_x00174798(AdxtObj_x00174798 *adxt, int rmode) __asm__("ADXT_SetAutoRcvr");
int ADXT_IsCompleted_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_IsCompleted");
void ADXT_ExecServer_x00174798(void) __asm__("ADXT_ExecServer");
int ADXT_GetErrCode_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetErrCode");
void ADXT_ClearErrCode_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ClearErrCode");
int ADXT_GetLpCnt_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetLpCnt");
void ADXT_SetLpFlg_x00174798(AdxtObj_x00174798 *adxt, int flg) __asm__("ADXT_SetLpFlg");
SfdSj_x00174798 *ADXT_GetInputSj_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetInputSj");
void ADXT_SetWaitPlayStart_x00174798(AdxtObj_x00174798 *adxt, int flg) __asm__("ADXT_SetWaitPlayStart");
int ADXT_IsReadyPlayStart_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_IsReadyPlayStart");
void ADXT_Pause_x00174798(AdxtObj_x00174798 *adxt, int sw) __asm__("ADXT_Pause");
int ADXT_GetStatPause_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetStatPause");
void ADXT_SetOutMode_x00174798(int mode) __asm__("ADXT_SetOutMode");
int ADXT_GetOutMode_x00174798(void) __asm__("ADXT_GetOutMode");
void ADXT_SetTranspose_x00174798(AdxtObj_x00174798 *adxt, int fxch, int fxlev) __asm__("ADXT_SetTranspose");
void ADXT_GetTranspose_x00174798(AdxtObj_x00174798 *adxt, int *fxch, int *fxlev) __asm__("ADXT_GetTranspose");
AdxStmObj_x00174798 *ADXT_GetStm_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetStm");
void ADXT_TermSupply_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_TermSupply");
void ADXT_SetDrctLvl_x00174798(AdxtObj_x00174798 *adxt, int lvl) __asm__("ADXT_SetDrctLvl");
int ADXT_GetDrctLvl_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetDrctLvl");
void ADXT_SetFilter_x00174798(AdxtObj_x00174798 *adxt, int coff, int q) __asm__("ADXT_SetFilter");
void ADXT_GetFilter_x00174798(AdxtObj_x00174798 *adxt, int *coff, int *q) __asm__("ADXT_GetFilter");
void ADXT_SetSurround_x00174798(AdxtObj_x00174798 *adxt, int sw) __asm__("ADXT_SetSurround");
void ADXT_GetSurround_x00174798(AdxtObj_x00174798 *adxt, int *sw) __asm__("ADXT_GetSurround");
void ADXT_EntryErrFunc_x00174798(AdxtErrFunc_x00174798 func, void *obj) __asm__("ADXT_EntryErrFunc");
int ADXT_DiscardSmpl_x00174798(AdxtObj_x00174798 *adxt, int nsmpl) __asm__("ADXT_DiscardSmpl");
int ADXT_GetTimeOfst_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetTimeOfst");
void ADXT_SetTimeOfst_x00174798(AdxtObj_x00174798 *adxt, int ofst) __asm__("ADXT_SetTimeOfst");
void ADXT_AdjustSmpl_x00174798(AdxtObj_x00174798 *adxt, int nsmpl) __asm__("ADXT_AdjustSmpl");
void ADXT_SetLnkSw_x00174798(AdxtObj_x00174798 *adxt, int sw) __asm__("ADXT_SetLnkSw");
int ADXT_GetLnkSw_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetLnkSw");
void ADXT_EntryFltFunc_x00174798(AdxtObj_x00174798 *adxt, AdxtFltFunc_x00174798 func, void *obj) __asm__("ADXT_EntryFltFunc");
int ADXT_GetDecNumSmpl_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetDecNumSmpl");
int ADXT_GetDecDtLen_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetDecDtLen");
void ADXT_EntryDecFunc_x00174798(AdxtObj_x00174798 *adxt, AdxtDecFunc_x00174798 func, void *obj) __asm__("ADXT_EntryDecFunc");
int ADXT_IsHeader_x00174798(unsigned char *buf, int len, int *hdrlen) __asm__("ADXT_IsHeader");
int ADXT_IsEndcode_x00174798(unsigned char *buf, int len, int *ftrlen) __asm__("ADXT_IsEndcode");
int ADXT_InsertSilence_x00174798(AdxtObj_x00174798 *adxt, int nch, int nsmpl) __asm__("ADXT_InsertSilence");
void ADXT_SetOutputMono_x00174798(int flag) __asm__("ADXT_SetOutputMono");
void ADXT_SetKeyString_x00174798(AdxtObj_x00174798 *adxt, char *str) __asm__("ADXT_SetKeyString");
void ADXT_SetDefKeyString_x00174798(char *str) __asm__("ADXT_SetDefKeyString");
Ps2Rna_x00174798 *ADXT_GetRna_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetRna");
void ADXT_ResetDefFmt_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ResetDefFmt");
void ADXT_StartAfs_x00174798(AdxtObj_x00174798 *adxt, int ptid, int flid) __asm__("ADXT_StartAfs");
void ADXT_StartFnameRange_x00174798(AdxtObj_x00174798 *adxt, char *fname, int ofst, int nsct) __asm__("ADXT_StartFnameRange");
void ADXT_StartFname_x00174798(AdxtObj_x00174798 *adxt, char *fname) __asm__("ADXT_StartFname");
void ADXT_StartMem_x00174798(AdxtObj_x00174798 *adxt, char *data) __asm__("ADXT_StartMem");
void ADXT_StartMem2_x00174798(AdxtObj_x00174798 *adxt, char *data, int size) __asm__("ADXT_StartMem2");
void ADXT_StartMemIdx_x00174798(AdxtObj_x00174798 *adxt, AcxHeader_x00174798 *acx, int no) __asm__("ADXT_StartMemIdx");
void ADXT_ConfigVsyncSvr_x00174798(int value) __asm__("ADXT_ConfigVsyncSvr");
void ADXT_VsyncProc_x00174798(void) __asm__("ADXT_VsyncProc");
void ADXT_Init_x00174798(void) __asm__("ADXT_Init");
void ADXT_ResetLibrary_x00174798(void) __asm__("ADXT_ResetLibrary");
void ADXT_Finish_x00174798(void) __asm__("ADXT_Finish");
void ADXT_InsertHdrSfa_x00174798(AdxtObj_x00174798 *adxt, int nch, int sfreq, int nsmpl) __asm__("ADXT_InsertHdrSfa");
AdxtDecInfoFunc_x00174798 ADXT_EntryDecInfoFunc_x00174798(AdxtDecInfoFunc_x00174798 func) __asm__("ADXT_EntryDecInfoFunc");
void ADXT_ExecErrChk_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ExecErrChk");
void ADXT_ExecRdErrChk_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ExecRdErrChk");
void ADXT_ExecRdCompChk_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ExecRdCompChk");
void ADXT_ExecHndl_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ExecHndl");
int ADXT_GetStatRead_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetStatRead");
void ADXT_EntryFname_x00174798(AdxtObj_x00174798 *adxt, const char *fname) __asm__("ADXT_EntryFname");
void ADXT_EntryFnameRange_x00174798(AdxtObj_x00174798 *adxt, const char *fname, int ofst, int nsct) __asm__("ADXT_EntryFnameRange");
void ADXT_EntryAfs_x00174798(AdxtObj_x00174798 *adxt, int ptid, int flid) __asm__("ADXT_EntryAfs");
void ADXT_StartSeamless_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_StartSeamless");
void ADXT_SetSeamlessLp_x00174798(AdxtObj_x00174798 *adxt, int sw) __asm__("ADXT_SetSeamlessLp");
void ADXT_StartFnameLp_x00174798(AdxtObj_x00174798 *adxt, const char *fname) __asm__("ADXT_StartFnameLp");
void ADXT_StartFnameRangeLp_x00174798(AdxtObj_x00174798 *adxt, const char *fname, int ofst, int nsct) __asm__("ADXT_StartFnameRangeLp");
void ADXT_StartAfsLp_x00174798(AdxtObj_x00174798 *adxt, int ptid, unsigned int flid) __asm__("ADXT_StartAfsLp");
void ADXT_ReleaseSeamless_x00174798(void) __asm__("ADXT_ReleaseSeamless");
int ADXT_GetNumFiles_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_GetNumFiles");
void ADXT_ResetEntry_x00174798(AdxtObj_x00174798 *adxt) __asm__("ADXT_ResetEntry");
void ADXT_AttachPl2_x00174798(AdxtObj_x00174798 *adxt, void *work, int wksize) __asm__("ADXT_AttachPl2");
void ADXT_SetPl2Pos_x00174798(AdxtObj_x00174798 *adxt, int x, int y) __asm__("ADXT_SetPl2Pos");
void ADXT_ExecFsSvr_x00174798(void) __asm__("ADXT_ExecFsSvr");
void ADXT_ExecFsServer_x00174798(void) __asm__("ADXT_ExecFsServer");
int ADXT_IsActiveFsSvr_x00174798(void) __asm__("ADXT_IsActiveFsSvr");
void ADXT_GetHdrInfo_x00174798(void *buf, int size, AdxtHdrInfo_x00174798 *info) __asm__("ADXT_GetHdrInfo");
extern const int D_004651A0_x00174798[4] __asm__("D_004651A0");
extern const double D_00465120_x00174798[] __asm__("D_00465120");
void func_00173810_x00174798(Mpeg2Ext_x00174798 *) __asm__("func_00173810");
extern const unsigned char tbl_field_count_x00174798[8] __asm__("tbl_field_count");
extern const unsigned char m2vhdec_usrdat_2nd_mark_x00174798[8] __asm__("m2vhdec_usrdat_2nd_mark");
extern const int tbl_dc_dct_pred_reset_x00174798[4] __asm__("tbl_dc_dct_pred_reset");
extern const int tbl_intra_dc_mult_x00174798[4] __asm__("tbl_intra_dc_mult");
void M2VHDEC_Init_x00174798(void) __asm__("M2VHDEC_Init");
void M2VHDEC_InitHn_x00174798(M2vObj_x00174798 *hn) __asm__("M2VHDEC_InitHn");
void M2V_SetUsrSj_x00174798(M2vObj_x00174798 *hn, int no, SfdSj_x00174798 *sj, M2vUsrDatFn_x00174798 fn, void *obj) __asm__("M2V_SetUsrSj");
void M2V_SetPicUsrBuf_x00174798(M2vObj_x00174798 *hn, char *buf, int size) __asm__("M2V_SetPicUsrBuf");
void M2V_GetPicUsr_x00174798(M2vObj_x00174798 *hn, char **buf, int *size) __asm__("M2V_GetPicUsr");
int m2vhdec_ParseSj_x00174798(M2vObj_x00174798 *hn, SfdSj_x00174798 *sj) __asm__("m2vhdec_ParseSj");
void m2vhdec_SetPicAtr_x00174798(M2vObj_x00174798 *hn) __asm__("m2vhdec_SetPicAtr");
int M2V_DecodePicAtr_x00174798(M2vObj_x00174798 *hn, SfdSj_x00174798 *sj) __asm__("M2V_DecodePicAtr");
void m2vhdec_SetPicAtr_x00174798(M2vObj_x00174798 *hn) __asm__("m2vhdec_SetPicAtr");
char *parseShc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseShc");
char *parseSec_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseSec");
char *parseUdsc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseUdsc");
char *func_00174798_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("func_00174798");
char *parseGsc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseGsc");
char *parsePsc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parsePsc");
int m2vhdec_ParseSj_x00174798(M2vObj_x00174798 *ctx, SfdSj_x00174798 *sj) __asm__("m2vhdec_ParseSj");
void resetQuantiserMatrix_x00174798(Mpeg2Ext_x00174798 *h) __asm__("resetQuantiserMatrix");
void func_00173748_x00174798(Mpeg2Ext_x00174798 *h) __asm__("func_00173748");
void func_001739B0_x00174798(Mpeg2Ext_x00174798 *h) __asm__("func_001739B0");
void func_00173A00_x00174798(Mpeg2Ext_x00174798 *h) __asm__("func_00173A00");
void func_00173A70_x00174798(Mpeg2Ext_x00174798 *h) __asm__("func_00173A70");
char *parseShc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseShc");
char *parseSec_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseSec");
void m2vhdec_PutUsrDat_x00174798(M2vObj_x00174798 *ctx, char *src, int n) __asm__("m2vhdec_PutUsrDat");
char *parseUdsc_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("parseUdsc");
void m2vhdec_AppendPicUsr_x00174798(M2vObj_x00174798 *ctx, void *src, int len) __asm__("m2vhdec_AppendPicUsr");
void m2vhdec_PutUsrDat_x00174798(M2vObj_x00174798 *ctx, char *src, int n) __asm__("m2vhdec_PutUsrDat");
void m2vhdec_AppendPicUsr_x00174798(M2vObj_x00174798 *ctx, void *src, int len) __asm__("m2vhdec_AppendPicUsr");
char *func_00174798_x00174798(M2vObj_x00174798 *ctx, char *buf) __asm__("func_00174798");
char *func_00174798_x00174798(M2vObj_x00174798 *ctx, char *buf)
{
    Mpeg2Ext_x00174798 *h = &ctx->ext;
    char *p = (char *)((unsigned int)buf & ~3);
    int cnt = (buf - p) << 3;
    unsigned int acc, nxt;
    int i;
    h->call_count++;
    { (acc) = *p++; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; };
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; };
    acc <<= cnt;
    if (cnt != 0) {
        h->start_code = acc | (nxt >> (32 - cnt));
        acc = nxt << cnt;
    } else {
        h->start_code = acc;
        acc = nxt;
    }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; };
    { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->extension_id) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->extension_id) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->extension_id) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
    if ((h->ext_state != 0 && h->ext_state != 16) || (h->expected_ext_id != 0 && h->expected_ext_id != h->extension_id)) {
        h->error_count++;
    }
    if (h->header_level != 1 && (h->extension_id == 1 || h->extension_id == 2 || h->extension_id == 5)) {
        h->error_count++;
    } else if (h->header_level != 3) {
        if (h->extension_id == 3)
            h->error_count++;
        else if (h->extension_id == 4)
            h->error_count++;
        else if (h->extension_id == 7)
            h->error_count++;
        else if (h->extension_id == 8)
            h->error_count++;
        else if (h->extension_id == 9)
            h->error_count++;
        else if (h->extension_id == 10)
            h->error_count++;
    }
    switch (h->extension_id) {
    case 1:
        { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->profile_and_level_indication) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->profile_and_level_indication) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->profile_and_level_indication) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->progressive_sequence) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->progressive_sequence) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->progressive_sequence) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->chroma_format) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->chroma_format) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->chroma_format) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->horizontal_size_extension) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->horizontal_size_extension) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->horizontal_size_extension) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->vertical_size_extension) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->vertical_size_extension) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->vertical_size_extension) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (12)) { cnt -= 32 - (12); if (cnt != 0) { acc |= nxt >> ((12) - cnt); (h->bit_rate_extension) = acc >> (32 - (12)); acc = nxt << cnt; } else { (h->bit_rate_extension) = acc >> (32 - (12)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->bit_rate_extension) = acc >> (32 - (12)); acc <<= (12); cnt += (12); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->vbv_buffer_size_extension) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->vbv_buffer_size_extension) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->vbv_buffer_size_extension) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->low_delay) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->low_delay) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->low_delay) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->frame_rate_extension_n) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->frame_rate_extension_n) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->frame_rate_extension_n) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->frame_rate_extension_d) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->frame_rate_extension_d) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->frame_rate_extension_d) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } };
        h->blocks_per_macroblock = D_004651A0_x00174798[h->chroma_format];
        func_00173748_x00174798(h);
        func_00173810_x00174798(h);
        h->bit_rate = (h->bit_rate_extension << 18) | h->bit_rate_value;
        h->vbv_buffer_size = (h->vbv_buffer_size_extension << 10) | h->vbv_buffer_size_value;
        h->frame_rate = D_00465120_x00174798[h->frame_rate_code];
        h->frame_rate_full = h->frame_rate * (unsigned int)(h->frame_rate_extension_n + 1) / (unsigned int)(h->frame_rate_extension_d + 1);
        break;
    case 2:
        { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->video_format) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->video_format) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->video_format) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->colour_description) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->colour_description) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->colour_description) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->colour_description) {
            { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->colour_primaries) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->colour_primaries) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->colour_primaries) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
            { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->transfer_characteristics) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->transfer_characteristics) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->transfer_characteristics) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
            { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->matrix_coefficients) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->matrix_coefficients) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->matrix_coefficients) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
        }
        { if (cnt >= 32 - (14)) { cnt -= 32 - (14); if (cnt != 0) { acc |= nxt >> ((14) - cnt); (h->display_horizontal_size) = acc >> (32 - (14)); acc = nxt << cnt; } else { (h->display_horizontal_size) = acc >> (32 - (14)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->display_horizontal_size) = acc >> (32 - (14)); acc <<= (14); cnt += (14); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (14)) { cnt -= 32 - (14); if (cnt != 0) { acc |= nxt >> ((14) - cnt); (h->display_vertical_size) = acc >> (32 - (14)); acc = nxt << cnt; } else { (h->display_vertical_size) = acc >> (32 - (14)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->display_vertical_size) = acc >> (32 - (14)); acc <<= (14); cnt += (14); } };
        func_00173810_x00174798(h);
        break;
    case 3:
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->load_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->load_intra_quantiser_matrix)
            { int i; for (i = 0; i < 64; i++) { cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { acc <<= 8; } } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->load_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->load_non_intra_quantiser_matrix)
            { int i; for (i = 0; i < 64; i++) { cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { acc <<= 8; } } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_chroma_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_chroma_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->load_chroma_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->load_chroma_intra_quantiser_matrix)
            { int i; for (i = 0; i < 64; i++) { cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { acc <<= 8; } } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->load_chroma_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->load_chroma_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->load_chroma_non_intra_quantiser_matrix) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->load_chroma_non_intra_quantiser_matrix)
            { int i; for (i = 0; i < 64; i++) { cnt += 8; if (cnt >= 32) { cnt -= 32; acc = nxt << cnt; { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { acc <<= 8; } } };
        func_00173A70_x00174798(h);
        break;
    case 4:
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->copyright_flag) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->copyright_flag) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_flag) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->copyright_identifier) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->copyright_identifier) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_identifier) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->original_or_copy) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->original_or_copy) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->original_or_copy) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (7)) { cnt -= 32 - (7); if (cnt != 0) { acc |= nxt >> ((7) - cnt); (h->copyright_reserved) = acc >> (32 - (7)); acc = nxt << cnt; } else { (h->copyright_reserved) = acc >> (32 - (7)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_reserved) = acc >> (32 - (7)); acc <<= (7); cnt += (7); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (20)) { cnt -= 32 - (20); if (cnt != 0) { acc |= nxt >> ((20) - cnt); (h->copyright_number_1) = acc >> (32 - (20)); acc = nxt << cnt; } else { (h->copyright_number_1) = acc >> (32 - (20)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_number_1) = acc >> (32 - (20)); acc <<= (20); cnt += (20); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (22)) { cnt -= 32 - (22); if (cnt != 0) { acc |= nxt >> ((22) - cnt); (h->copyright_number_2) = acc >> (32 - (22)); acc = nxt << cnt; } else { (h->copyright_number_2) = acc >> (32 - (22)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_number_2) = acc >> (32 - (22)); acc <<= (22); cnt += (22); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (22)) { cnt -= 32 - (22); if (cnt != 0) { acc |= nxt >> ((22) - cnt); (h->copyright_number_3) = acc >> (32 - (22)); acc = nxt << cnt; } else { (h->copyright_number_3) = acc >> (32 - (22)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->copyright_number_3) = acc >> (32 - (22)); acc <<= (22); cnt += (22); } };
        break;
    case 5:
        h->scalable_seen = 1;
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->scalable_mode) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->scalable_mode) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->scalable_mode) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->layer_id) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->layer_id) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->layer_id) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
        if (h->scalable_mode == 1) {
            { if (cnt >= 32 - (14)) { cnt -= 32 - (14); if (cnt != 0) { acc |= nxt >> ((14) - cnt); (h->lower_layer_prediction_horizontal_size) = acc >> (32 - (14)); acc = nxt << cnt; } else { (h->lower_layer_prediction_horizontal_size) = acc >> (32 - (14)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_prediction_horizontal_size) = acc >> (32 - (14)); acc <<= (14); cnt += (14); } };
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            { if (cnt >= 32 - (14)) { cnt -= 32 - (14); if (cnt != 0) { acc |= nxt >> ((14) - cnt); (h->lower_layer_prediction_vertical_size) = acc >> (32 - (14)); acc = nxt << cnt; } else { (h->lower_layer_prediction_vertical_size) = acc >> (32 - (14)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_prediction_vertical_size) = acc >> (32 - (14)); acc <<= (14); cnt += (14); } };
            { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->horizontal_subsampling_factor_m) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->horizontal_subsampling_factor_m) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->horizontal_subsampling_factor_m) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } };
            { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->horizontal_subsampling_factor_n) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->horizontal_subsampling_factor_n) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->horizontal_subsampling_factor_n) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } };
            { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->vertical_subsampling_factor_m) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->vertical_subsampling_factor_m) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->vertical_subsampling_factor_m) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } };
            { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->vertical_subsampling_factor_n) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->vertical_subsampling_factor_n) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->vertical_subsampling_factor_n) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } };
        } else if (h->scalable_mode == 3) {
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->picture_mux_enable) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->picture_mux_enable) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->picture_mux_enable) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            if (h->picture_mux_enable)
                { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->mux_to_progressive_sequence) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->mux_to_progressive_sequence) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->mux_to_progressive_sequence) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->picture_mux_order) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->picture_mux_order) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->picture_mux_order) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } };
            { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->picture_mux_factor) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->picture_mux_factor) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->picture_mux_factor) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } };
        }
        break;
    case 7:
        func_001739B0_x00174798(h);
        for (i = 0; i < h->number_of_frame_centre_offsets; i++) {
            { if (cnt >= 32 - (16)) { cnt -= 32 - (16); if (cnt != 0) { acc |= nxt >> ((16) - cnt); (h->frame_centre_horizontal_offset[i]) = acc >> (32 - (16)); acc = nxt << cnt; } else { (h->frame_centre_horizontal_offset[i]) = acc >> (32 - (16)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->frame_centre_horizontal_offset[i]) = acc >> (32 - (16)); acc <<= (16); cnt += (16); } };
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            { if (cnt >= 32 - (16)) { cnt -= 32 - (16); if (cnt != 0) { acc |= nxt >> ((16) - cnt); (h->frame_centre_vertical_offset[i]) = acc >> (32 - (16)); acc = nxt << cnt; } else { (h->frame_centre_vertical_offset[i]) = acc >> (32 - (16)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->frame_centre_vertical_offset[i]) = acc >> (32 - (16)); acc <<= (16); cnt += (16); } };
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        }
        break;
    case 8:
        { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->f_code00) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->f_code00) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->f_code00) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
        { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->f_code01) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->f_code01) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->f_code01) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
        { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->f_code10) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->f_code10) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->f_code10) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
        { if (cnt >= 32 - (4)) { cnt -= 32 - (4); if (cnt != 0) { acc |= nxt >> ((4) - cnt); (h->f_code11) = acc >> (32 - (4)); acc = nxt << cnt; } else { (h->f_code11) = acc >> (32 - (4)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->f_code11) = acc >> (32 - (4)); acc <<= (4); cnt += (4); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->intra_dc_precision) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->intra_dc_precision) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->intra_dc_precision) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->picture_structure) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->picture_structure) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->picture_structure) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->top_field_first) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->top_field_first) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->top_field_first) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->frame_pred_frame_dct) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->frame_pred_frame_dct) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->frame_pred_frame_dct) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->concealment_motion_vectors) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->concealment_motion_vectors) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->concealment_motion_vectors) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->q_scale_type) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->q_scale_type) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->q_scale_type) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->intra_vlc_format) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->intra_vlc_format) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->intra_vlc_format) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->alternate_scan) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->alternate_scan) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->alternate_scan) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->repeat_first_field) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->repeat_first_field) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->repeat_first_field) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->chroma_420_type) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->chroma_420_type) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->chroma_420_type) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->progressive_frame) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->progressive_frame) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->progressive_frame) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->composite_display_flag) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->composite_display_flag) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->composite_display_flag) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        if (h->composite_display_flag) {
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->v_axis) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->v_axis) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->v_axis) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->field_sequence) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->field_sequence) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->field_sequence) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } };
            { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->sub_carrier) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->sub_carrier) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->sub_carrier) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
            { if (cnt >= 32 - (7)) { cnt -= 32 - (7); if (cnt != 0) { acc |= nxt >> ((7) - cnt); (h->burst_amplitude) = acc >> (32 - (7)); acc = nxt << cnt; } else { (h->burst_amplitude) = acc >> (32 - (7)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->burst_amplitude) = acc >> (32 - (7)); acc <<= (7); cnt += (7); } };
            { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->sub_carrier_phase) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->sub_carrier_phase) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->sub_carrier_phase) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } };
        }
        func_00173748_x00174798(h);
        func_00173A00_x00174798(h);
        if (h->second_field == 0)
            ctx->picusr.len = 0;
        break;
    case 9:
        h->spatial_scalable_seen = 1;
        { if (cnt >= 32 - (10)) { cnt -= 32 - (10); if (cnt != 0) { acc |= nxt >> ((10) - cnt); (h->lower_layer_temporal_reference) = acc >> (32 - (10)); acc = nxt << cnt; } else { (h->lower_layer_temporal_reference) = acc >> (32 - (10)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_temporal_reference) = acc >> (32 - (10)); acc <<= (10); cnt += (10); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (15)) { cnt -= 32 - (15); if (cnt != 0) { acc |= nxt >> ((15) - cnt); (h->lower_layer_horizontal_offset) = acc >> (32 - (15)); acc = nxt << cnt; } else { (h->lower_layer_horizontal_offset) = acc >> (32 - (15)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_horizontal_offset) = acc >> (32 - (15)); acc <<= (15); cnt += (15); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (15)) { cnt -= 32 - (15); if (cnt != 0) { acc |= nxt >> ((15) - cnt); (h->lower_layer_vertical_offset) = acc >> (32 - (15)); acc = nxt << cnt; } else { (h->lower_layer_vertical_offset) = acc >> (32 - (15)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_vertical_offset) = acc >> (32 - (15)); acc <<= (15); cnt += (15); } };
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->spatial_temporal_weight_code_table_index) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->spatial_temporal_weight_code_table_index) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->spatial_temporal_weight_code_table_index) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->lower_layer_progressive_frame) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->lower_layer_progressive_frame) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_progressive_frame) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->lower_layer_deinterlaced_field_select) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->lower_layer_deinterlaced_field_select) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->lower_layer_deinterlaced_field_select) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        break;
    case 10:
        { if (cnt >= 32 - (2)) { cnt -= 32 - (2); if (cnt != 0) { acc |= nxt >> ((2) - cnt); (h->reference_select_code) = acc >> (32 - (2)); acc = nxt << cnt; } else { (h->reference_select_code) = acc >> (32 - (2)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->reference_select_code) = acc >> (32 - (2)); acc <<= (2); cnt += (2); } };
        { if (cnt >= 32 - (10)) { cnt -= 32 - (10); if (cnt != 0) { acc |= nxt >> ((10) - cnt); (h->forward_temporal_reference) = acc >> (32 - (10)); acc = nxt << cnt; } else { (h->forward_temporal_reference) = acc >> (32 - (10)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->forward_temporal_reference) = acc >> (32 - (10)); acc <<= (10); cnt += (10); } };
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } };
        { if (cnt >= 32 - (10)) { cnt -= 32 - (10); if (cnt != 0) { acc |= nxt >> ((10) - cnt); (h->backward_temporal_reference) = acc >> (32 - (10)); acc = nxt << cnt; } else { (h->backward_temporal_reference) = acc >> (32 - (10)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }; } else { (h->backward_temporal_reference) = acc >> (32 - (10)); acc <<= (10); cnt += (10); } };
        break;
    default:
        h->error_count++;
        break;
    }
    h->ext_state = 0;
    h->expected_ext_id = 0;
    return buf + ((cnt + (p - buf) * 8 - 57) / 8);
}
__asm__("# rebind func_00174798 0x00174798");
typedef struct { char p0[0x18]; int marker_bit; char p1C[0x9C]; int group_start_code; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int closed_gop; int broken_link; int picture_start_code; int temporal_reference; int picture_coding_type; int vbv_delay; int full_pel_forward_vector; int forward_f_code; int full_pel_backward_vector; int backward_f_code; int extra_bit_picture; int extra_information_picture; char p100[0x228]; int ext_state; int expected_ext_id; char p330[0x1AC]; int header_level; char p4E0[0x18]; int gsc_count; int psc_count; int picture_count[4]; char p510[0x40]; int error_count; } Ext_77F0_x001777F0;
char *func_001777F0_x001777F0(char *ctx, char *buf) __asm__("func_001777F0");
char *func_001777F0_x001777F0(char *ctx, char *buf)
{
    Ext_77F0_x001777F0 *h = (Ext_77F0_x001777F0 *)(ctx + 0x158);
    char *p;
    int cnt;
    unsigned int acc, nxt;

    h->header_level = 2;
    h->gsc_count++;
    if ((h->ext_state != 0 && h->ext_state != 8) || h->expected_ext_id != 0) {
        h->error_count++;
    }
    p = (char *)((unsigned int)buf & ~3);
    cnt = (buf - p) << 3;
    { (acc) = *p++; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    acc <<= cnt;
    if (cnt != 0) {
        h->group_start_code = acc | (nxt >> (32 - cnt));
        acc = nxt << cnt;
    } else {
        h->group_start_code = acc;
        acc = nxt;
    }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->drop_frame_flag) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->drop_frame_flag) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->drop_frame_flag) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    { if (cnt >= 32 - (5)) { cnt -= 32 - (5); if (cnt != 0) { acc |= nxt >> ((5) - cnt); (h->time_code_hours) = acc >> (32 - (5)); acc = nxt << cnt; } else { (h->time_code_hours) = acc >> (32 - (5)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->time_code_hours) = acc >> (32 - (5)); acc <<= (5); cnt += (5); } }
    { if (cnt >= 32 - (6)) { cnt -= 32 - (6); if (cnt != 0) { acc |= nxt >> ((6) - cnt); (h->time_code_minutes) = acc >> (32 - (6)); acc = nxt << cnt; } else { (h->time_code_minutes) = acc >> (32 - (6)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->time_code_minutes) = acc >> (32 - (6)); acc <<= (6); cnt += (6); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->marker_bit) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->marker_bit) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->marker_bit) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    { if (cnt >= 32 - (6)) { cnt -= 32 - (6); if (cnt != 0) { acc |= nxt >> ((6) - cnt); (h->time_code_seconds) = acc >> (32 - (6)); acc = nxt << cnt; } else { (h->time_code_seconds) = acc >> (32 - (6)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->time_code_seconds) = acc >> (32 - (6)); acc <<= (6); cnt += (6); } }
    { if (cnt >= 32 - (6)) { cnt -= 32 - (6); if (cnt != 0) { acc |= nxt >> ((6) - cnt); (h->time_code_pictures) = acc >> (32 - (6)); acc = nxt << cnt; } else { (h->time_code_pictures) = acc >> (32 - (6)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->time_code_pictures) = acc >> (32 - (6)); acc <<= (6); cnt += (6); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->closed_gop) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->closed_gop) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->closed_gop) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->broken_link) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->broken_link) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->broken_link) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
    return buf + ((cnt + (p - buf) * 8 - 57) / 8);
}
typedef struct { char p0[0x18]; int marker_bit_hdr; char p1C[0x9C]; int group_start_code; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int closed_gop; int broken_link; int picture_start_code; int temporal_reference; int picture_coding_type; int vbv_delay; int full_pel_forward_vector; int forward_f_code; int full_pel_backward_vector; int backward_f_code; int extra_bit_picture; int extra_information_picture; char p100[0x228]; int ext_state; int expected_ext_id; char p330[0x1AC]; int header_level; char p4E0[0x18]; int gsc_count; int psc_count; int picture_count[4]; char p510[0x40]; int error_count; } Ext_7D48_x00177D48;
char *func_00177D48_x00177D48(char *ctx, char *buf) __asm__("func_00177D48");
char *func_00177D48_x00177D48(char *ctx, char *buf)
{
    Ext_7D48_x00177D48 *h = (Ext_7D48_x00177D48 *)(ctx + 0x158);
    char *p;
    int cnt;
    unsigned int acc, nxt;

    h->header_level = 3;
    h->psc_count++;
    if ((h->ext_state != 0 && h->ext_state != 4) || h->expected_ext_id != 0) {
        h->error_count++;
    }
    p = (char *)((unsigned int)buf & ~3);
    cnt = (buf - p) << 3;
    { (acc) = *p++; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; (acc) <<= 8; (acc) |= *p++ & 255; }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    acc <<= cnt;
    if (cnt != 0) {
        h->picture_start_code = acc | (nxt >> (32 - cnt));
        acc = nxt << cnt;
    } else {
        h->picture_start_code = acc;
        acc = nxt;
    }
    { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; }
    { if (cnt >= 32 - (10)) { cnt -= 32 - (10); if (cnt != 0) { acc |= nxt >> ((10) - cnt); (h->temporal_reference) = acc >> (32 - (10)); acc = nxt << cnt; } else { (h->temporal_reference) = acc >> (32 - (10)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->temporal_reference) = acc >> (32 - (10)); acc <<= (10); cnt += (10); } }
    { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->picture_coding_type) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->picture_coding_type) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->picture_coding_type) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } }
    { if (cnt >= 32 - (16)) { cnt -= 32 - (16); if (cnt != 0) { acc |= nxt >> ((16) - cnt); (h->vbv_delay) = acc >> (32 - (16)); acc = nxt << cnt; } else { (h->vbv_delay) = acc >> (32 - (16)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->vbv_delay) = acc >> (32 - (16)); acc <<= (16); cnt += (16); } }
    if (h->picture_coding_type < 1 || h->picture_coding_type > 3) {
        h->error_count++;
    }
    if (h->picture_coding_type == 2 || h->picture_coding_type == 3) {
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->full_pel_forward_vector) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->full_pel_forward_vector) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->full_pel_forward_vector) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
        { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->forward_f_code) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->forward_f_code) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->forward_f_code) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } }
        if (h->full_pel_forward_vector != 0) {
            h->error_count++;
        }
        if (h->forward_f_code != 7) {
            h->error_count++;
        }
    }
    if (h->picture_coding_type == 3) {
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->full_pel_backward_vector) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->full_pel_backward_vector) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->full_pel_backward_vector) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
        { if (cnt >= 32 - (3)) { cnt -= 32 - (3); if (cnt != 0) { acc |= nxt >> ((3) - cnt); (h->backward_f_code) = acc >> (32 - (3)); acc = nxt << cnt; } else { (h->backward_f_code) = acc >> (32 - (3)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->backward_f_code) = acc >> (32 - (3)); acc <<= (3); cnt += (3); } }
        if (h->full_pel_backward_vector != 0) {
            h->error_count++;
        }
        if (h->backward_f_code != 7) {
            h->error_count++;
        }
    }
    for (;;) {
        { if (cnt >= 32 - (1)) { cnt -= 32 - (1); if (cnt != 0) { acc |= nxt >> ((1) - cnt); (h->extra_bit_picture) = acc >> (32 - (1)); acc = nxt << cnt; } else { (h->extra_bit_picture) = acc >> (32 - (1)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->extra_bit_picture) = acc >> (32 - (1)); acc <<= (1); cnt += (1); } }
        if (h->extra_bit_picture == 0) {
            break;
        }
        { if (cnt >= 32 - (8)) { cnt -= 32 - (8); if (cnt != 0) { acc |= nxt >> ((8) - cnt); (h->extra_information_picture) = acc >> (32 - (8)); acc = nxt << cnt; } else { (h->extra_information_picture) = acc >> (32 - (8)); acc = nxt; } { (nxt) = *p++; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; (nxt) <<= 8; (nxt) |= *p++ & 255; } } else { (h->extra_information_picture) = acc >> (32 - (8)); acc <<= (8); cnt += (8); } }
    }
    h->picture_count[h->picture_coding_type]++;
    h->ext_state = 16;
    h->expected_ext_id = 8;
    return buf + ((cnt + (p - buf) * 8 - 57) / 8);
}
struct SfdSj_x00178440;
typedef struct M2vErrInf_x00178440 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00178440;
typedef struct Mpeg2Ext_x00178440 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00178440;
typedef enum M2vFrameRate_x00178440 {
    M2V_FRAME_RATE_FORBIDDEN_x00178440 = 0
} M2vFrameRate_x00178440;
typedef enum M2vPicType_x00178440 {
    M2V_PICTYPE_I_x00178440 = 1,
    M2V_PICTYPE_P_x00178440 = 2,
    M2V_PICTYPE_B_x00178440 = 3,
    M2V_PICTYPE_D_x00178440 = 4
} M2vPicType_x00178440;
typedef enum M2vPicStruct_x00178440 {
    M2V_PICSTRUCT_TOP_FIELD_x00178440 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00178440 = 2,
    M2V_PICSTRUCT_FRAME_x00178440 = 3
} M2vPicStruct_x00178440;
typedef enum M2vPicAtrF64_x00178440 {
    M2V_PICATR_F64_0_x00178440 = 0
} M2vPicAtrF64_x00178440;
typedef struct M2vPicAtr_x00178440 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00178440 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00178440 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00178440 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00178440 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00178440;
typedef void (*M2vUsrDatFn_x00178440)(void *obj, int level);
typedef struct M2vUsrSj_x00178440 {
    struct SfdSj_x00178440 *sj;
    M2vUsrDatFn_x00178440 fn;
    void *obj;
} M2vUsrSj_x00178440;
typedef struct M2vPicUsr_x00178440 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00178440;
typedef void (*M2vCondFn_x00178440)();
typedef struct M2vObj_x00178440 {
    int stat;
    M2vErrInf_x00178440 err;
    M2vCondFn_x00178440 cond[16];
    M2vPicAtr_x00178440 picatr;
    char pad216[64];
    M2vUsrSj_x00178440 usrsj[4];
    M2vPicUsr_x00178440 picusr;
    char pad340[12];
    Mpeg2Ext_x00178440 ext;
    char pad1656[8];
} M2vObj_x00178440;
void M2V_Init_x00178440(int nobj, char *work, unsigned int size) __asm__("func_001786A8");
void M2V_Finish_x00178440(void) __asm__("func_001788D0");
char *M2V_GetVersionStr_x00178440(void) __asm__("func_001785E8");
int M2V_IsConformable_x00178440(char *buf, int size) __asm__("func_001785F8");
M2vObj_x00178440 *M2V_Create_x00178440(void) __asm__("func_001788D8");
void M2V_Destroy_x00178440(M2vObj_x00178440 *hn) __asm__("func_00178A20");
void M2V_MbCbFn_x00178440(void) __asm__("func_00178A70");
void M2V_SetCond_x00178440(M2vObj_x00178440 *hn, int no, M2vCondFn_x00178440 fn) __asm__("func_00178A78");
void M2V_SetUsrSj_x00178440(M2vObj_x00178440 *hn, int no, struct SfdSj_x00178440 *sj, M2vUsrDatFn_x00178440 fn, void *obj) __asm__("func_00173350");
void M2V_SetPicUsrBuf_x00178440(M2vObj_x00178440 *hn, char *buf, int size) __asm__("func_00173378");
void M2V_GetPicUsr_x00178440(M2vObj_x00178440 *hn, char **buf, int *size) __asm__("func_00173388");
extern void M2V_SetErrFunc_x00178440(M2vObj_x00178440 *hn, int (*func)(void *obj), void *obj) __asm__("func_00172E08");
void M2V_GetErrInf_x00178440(M2vObj_x00178440 *hn, M2vErrInf_x00178440 *inf) __asm__("func_00172E78");
void M2V_SkipFrm_x00178440(M2vObj_x00178440 *hn, struct SfdSj_x00178440 *sj) __asm__("func_00172F80");
void M2V_DecodeFrm_x00178440(void) __asm__("func_00173038");
void M2V_GetPicAtr_x00178440(M2vObj_x00178440 *hn, M2vPicAtr_x00178440 *picatr) __asm__("func_00173040");
void M2V_GetBitRate_x00178440(M2vObj_x00178440 *hn, int *bit_rate) __asm__("func_00173140");
void M2V_GetVbvBufSiz_x00178440(M2vObj_x00178440 *hn, int *vbv_size, int *vbv_delay, int *reserved) __asm__("func_001731A0");
void M2V_GetLinkFlg_x00178440(M2vObj_x00178440 *hn, int *closed_gop, int *broken_link) __asm__("func_00173230");
int M2V_DecodePicAtr_x00178440(M2vObj_x00178440 *hn, struct SfdSj_x00178440 *sj) __asm__("func_001733B0");
typedef struct SfdSj_x00178440 SfdSj_x00178440;
typedef struct SfdSjChunk_x00178440 {
    char *data;
    int len;
} SfdSjChunk_x00178440;
typedef struct SfdSjVtbl_x00178440 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00178440 *sj);
    int (*getUuid)(SfdSj_x00178440 *sj);
    void (*reset)(SfdSj_x00178440 *sj);
    void (*getChunk)(SfdSj_x00178440 *sj, int id, int n, SfdSjChunk_x00178440 *ck);
    void (*ungetChunk)(SfdSj_x00178440 *sj, int id, SfdSjChunk_x00178440 *ck);
    void (*putChunk)(SfdSj_x00178440 *sj, int id, SfdSjChunk_x00178440 *ck);
    int (*getNumData)(SfdSj_x00178440 *sj, int id);
} SfdSjVtbl_x00178440;
struct SfdSj_x00178440 {
    SfdSjVtbl_x00178440 *vtbl;
};
extern void mpvhook_SetErrFunc_x00178440(M2vObj_x00178440 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern int mpvhook_installed_x00178440 __asm__("D_00424BC8");
extern char *(*mpvhook_fn_GetVersionStr_x00178440)(void) __asm__("D_00424BCC");
extern int (*mpvhook_fn_IsConformable_x00178440)(char *buf, int size) __asm__("D_00424BD0");
extern void (*mpvhook_fn_Init_x00178440)(int nobj, char *work, unsigned int size) __asm__("D_00424BD4");
extern void (*mpvhook_fn_Finish_x00178440)(void) __asm__("D_00424BD8");
extern M2vObj_x00178440 *(*mpvhook_fn_Create_x00178440)(void) __asm__("D_00424BDC");
extern void (*mpvhook_fn_Destroy_x00178440)(M2vObj_x00178440 *hn) __asm__("D_00424BE0");
extern void (*mpvhook_fn_SetCond_x00178440)(M2vObj_x00178440 *hn, int no, M2vCondFn_x00178440 fn) __asm__("D_00424BE4");
extern void (*mpvhook_fn_MbCbFn_x00178440)(void) __asm__("D_00424BE8");
extern void (*mpvhook_fn_SetErrFunc_x00178440)(M2vObj_x00178440 *hn, int (*func)(void *obj), void *obj) __asm__("D_00424BEC");
extern void (*mpvhook_fn_GetErrInf_x00178440)(M2vObj_x00178440 *hn, M2vErrInf_x00178440 *inf) __asm__("D_00424BF0");
extern void (*mpvhook_fn_DecodeFrm_x00178440)(void) __asm__("D_00424BF4");
extern void (*mpvhook_fn_SkipFrm_x00178440)(M2vObj_x00178440 *hn, struct SfdSj_x00178440 *sj) __asm__("D_00424BF8");
extern void (*mpvhook_fn_SetUsrSj_x00178440)(M2vObj_x00178440 *hn, int no, struct SfdSj_x00178440 *sj, M2vUsrDatFn_x00178440 fn, void *obj) __asm__("D_00424BFC");
extern void (*mpvhook_fn_SetPicUsrBuf_x00178440)(M2vObj_x00178440 *hn, char *buf, int size) __asm__("D_00424C00");
extern void (*mpvhook_fn_GetPicUsr_x00178440)(M2vObj_x00178440 *hn, char **buf, int *size) __asm__("D_00424C04");
extern int (*mpvhook_fn_DecodePicAtr_x00178440)(M2vObj_x00178440 *hn, struct SfdSj_x00178440 *sj) __asm__("D_00424C08");
extern void (*mpvhook_fn_GetPicAtr_x00178440)(M2vObj_x00178440 *hn, M2vPicAtr_x00178440 *picatr) __asm__("D_00424C0C");
extern void (*mpvhook_fn_GetBitRate_x00178440)(M2vObj_x00178440 *hn, int *bit_rate) __asm__("D_00424C10");
extern void (*mpvhook_fn_GetVbvBufSiz_x00178440)(M2vObj_x00178440 *hn, int *vbv_size, int *vbv_delay, int *reserved) __asm__("D_00424C14");
extern void (*mpvhook_fn_GetLinkFlg_x00178440)(M2vObj_x00178440 *hn, int *closed_gop, int *broken_link) __asm__("D_00424C18");
void func_00178440_x00178440(void) __asm__("func_00178440");
/* mpv_InstallHooks: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvinst.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00178440_x00178440(void) {
    mpvhook_fn_GetVersionStr_x00178440 = M2V_GetVersionStr_x00178440;
    mpvhook_fn_IsConformable_x00178440 = M2V_IsConformable_x00178440;
    mpvhook_fn_Init_x00178440 = M2V_Init_x00178440;
    mpvhook_fn_Finish_x00178440 = M2V_Finish_x00178440;
    mpvhook_fn_Create_x00178440 = M2V_Create_x00178440;
    mpvhook_fn_Destroy_x00178440 = M2V_Destroy_x00178440;
    mpvhook_fn_SetCond_x00178440 = M2V_SetCond_x00178440;
    mpvhook_fn_MbCbFn_x00178440 = M2V_MbCbFn_x00178440;
    mpvhook_fn_SetErrFunc_x00178440 = M2V_SetErrFunc_x00178440;
    mpvhook_fn_GetErrInf_x00178440 = M2V_GetErrInf_x00178440;
    mpvhook_fn_DecodeFrm_x00178440 = M2V_DecodeFrm_x00178440;
    mpvhook_fn_SkipFrm_x00178440 = M2V_SkipFrm_x00178440;
    mpvhook_fn_SetUsrSj_x00178440 = M2V_SetUsrSj_x00178440;
    mpvhook_fn_SetPicUsrBuf_x00178440 = M2V_SetPicUsrBuf_x00178440;
    mpvhook_fn_GetPicUsr_x00178440 = M2V_GetPicUsr_x00178440;
    mpvhook_fn_DecodePicAtr_x00178440 = M2V_DecodePicAtr_x00178440;
    mpvhook_fn_GetPicAtr_x00178440 = M2V_GetPicAtr_x00178440;
    mpvhook_fn_GetBitRate_x00178440 = M2V_GetBitRate_x00178440;
    mpvhook_fn_GetVbvBufSiz_x00178440 = M2V_GetVbvBufSiz_x00178440;
    mpvhook_fn_GetLinkFlg_x00178440 = M2V_GetLinkFlg_x00178440;
    mpvhook_installed_x00178440 = 1;
}
s32 *func_001785E8(void) {
    return &D_00465288;
}
int MPV_CheckDelim_x001785F8(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x001785F8(char *buf, int len, int mask) __asm__("func_0017B5B8");
int func_001785F8_x001785F8(char *buf, int size) __asm__("func_001785F8");
/* M2V_IsConformable: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001785F8_x001785F8(char *buf, int size)
{
    char *p;
    p = MPV_SearchDelim_x001785F8(buf, size, 64);
    if (p == 0) {
        return 0;
    }
    p += 4;
    size -= p - buf;
    if (size <= 0) {
        return 0;
    }
    buf = p;
    p = MPV_SearchDelim_x001785F8(buf, size, -1);
    if (p == 0) {
        return 0;
    }
    if ((MPV_CheckDelim_x001785F8(p) & 0x10) == 0) {
        return 0;
    }
    p += 4;
    size -= p - buf;
    if (size <= 0) {
        return 0;
    }
    return (*(unsigned char *)p >> 4) == 1;
}
void M2VERR_Init_x001786A8(void) __asm__("func_00172DD0");
void M2VHDEC_Init_x001786A8(void) __asm__("func_001732A8");
extern char M2VLIB_version_str_x001786A8[] __asm__("D_00465288");
extern char *volatile m2vlib_version_ptr_x001786A8 __asm__("D_00481488");
extern unsigned char m2vlib_endian_mark_x001786A8[4] __asm__("D_00465324");
void m2vlib_InitObjTbl_x001786A8(void) __asm__("func_00178738");
void m2vlib_InitWork_x001786A8(int nobj, char *work, unsigned int size) __asm__("func_00178780");
void m2vlib_InitObjTbl_x001786A8(void) __asm__("func_00178738");
void m2vlib_InitWork_x001786A8(int nobj, char *work, unsigned int size) __asm__("func_00178780");
void func_001786A8_x001786A8(int nobj, char *work, unsigned int size) __asm__("func_001786A8");
/* M2V_Init: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001786A8_x001786A8(int nobj, char *work, unsigned int size)
{
    do { if (m2vlib_endian_mark_x001786A8[0] != 4) { for (;;) { ((void (*)(void))-1)(); } } } while (0);
    m2vlib_version_ptr_x001786A8 = M2VLIB_version_str_x001786A8;
    M2VERR_Init_x001786A8();
    M2VHDEC_Init_x001786A8();
    m2vlib_InitWork_x001786A8(nobj, work, size);
    m2vlib_InitObjTbl_x001786A8();
}
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
struct SfdSj_x00178780;
typedef struct M2vErrInf_x00178780 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00178780;
typedef struct Mpeg2Ext_x00178780 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00178780;
typedef enum M2vFrameRate_x00178780 {
    M2V_FRAME_RATE_FORBIDDEN_x00178780 = 0
} M2vFrameRate_x00178780;
typedef enum M2vPicType_x00178780 {
    M2V_PICTYPE_I_x00178780 = 1,
    M2V_PICTYPE_P_x00178780 = 2,
    M2V_PICTYPE_B_x00178780 = 3,
    M2V_PICTYPE_D_x00178780 = 4
} M2vPicType_x00178780;
typedef enum M2vPicStruct_x00178780 {
    M2V_PICSTRUCT_TOP_FIELD_x00178780 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00178780 = 2,
    M2V_PICSTRUCT_FRAME_x00178780 = 3
} M2vPicStruct_x00178780;
typedef enum M2vPicAtrF64_x00178780 {
    M2V_PICATR_F64_0_x00178780 = 0
} M2vPicAtrF64_x00178780;
typedef struct M2vPicAtr_x00178780 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00178780 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00178780 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00178780 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00178780 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00178780;
typedef void (*M2vUsrDatFn_x00178780)(void *obj, int level);
typedef struct M2vUsrSj_x00178780 {
    struct SfdSj_x00178780 *sj;
    M2vUsrDatFn_x00178780 fn;
    void *obj;
} M2vUsrSj_x00178780;
typedef struct M2vPicUsr_x00178780 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00178780;
typedef void (*M2vCondFn_x00178780)();
typedef struct M2vObj_x00178780 {
    int stat;
    M2vErrInf_x00178780 err;
    M2vCondFn_x00178780 cond[16];
    M2vPicAtr_x00178780 picatr;
    char pad216[64];
    M2vUsrSj_x00178780 usrsj[4];
    M2vPicUsr_x00178780 picusr;
    char pad340[12];
    Mpeg2Ext_x00178780 ext;
    char pad1656[8];
} M2vObj_x00178780;
typedef struct M2vLibWork_x00178780 {
    M2vCondFn_x00178780 cond[16];
    int nobj;
    M2vObj_x00178780 *obj;
} M2vLibWork_x00178780;
extern void M2V_SetErrFunc_x00178780(M2vObj_x00178780 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef unsigned int size_t_x00178780;
void *memset_x00178780(void *, int, size_t_x00178780) __asm__("memset");
typedef struct SfdSj_x00178780 SfdSj_x00178780;
typedef struct SfdSjChunk_x00178780 {
    char *data;
    int len;
} SfdSjChunk_x00178780;
typedef struct SfdSjVtbl_x00178780 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00178780 *sj);
    int (*getUuid)(SfdSj_x00178780 *sj);
    void (*reset)(SfdSj_x00178780 *sj);
    void (*getChunk)(SfdSj_x00178780 *sj, int id, int n, SfdSjChunk_x00178780 *ck);
    void (*ungetChunk)(SfdSj_x00178780 *sj, int id, SfdSjChunk_x00178780 *ck);
    void (*putChunk)(SfdSj_x00178780 *sj, int id, SfdSjChunk_x00178780 *ck);
    int (*getNumData)(SfdSj_x00178780 *sj, int id);
} SfdSjVtbl_x00178780;
struct SfdSj_x00178780 {
    SfdSjVtbl_x00178780 *vtbl;
};
extern void mpvhook_SetErrFunc_x00178780(M2vObj_x00178780 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern M2vLibWork_x00178780 m2vlib_libwork_x00178780 __asm__("D_00481490");
void func_00178780_x00178780(int nobj, char *work, unsigned int size) __asm__("func_00178780");
/* m2vlib_InitWork: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00178780_x00178780(int nobj, char *work, unsigned int size)
{
    while (size < nobj * 0x700 + 64) {
        nobj--;
    }
    work = (char *)(((int)work + 63) & ~63);
    memset_x00178780(work, 0, nobj * 0x700);
    m2vlib_libwork_x00178780.nobj = nobj;
    m2vlib_libwork_x00178780.obj = (M2vObj_x00178780 *)work;
}
typedef enum M2vFrameRate_x00178820 {
    M2V_FRAME_RATE_FORBIDDEN_x00178820 = 0
} M2vFrameRate_x00178820;
typedef enum M2vPicType_x00178820 {
    M2V_PICTYPE_I_x00178820 = 1,
    M2V_PICTYPE_P_x00178820 = 2,
    M2V_PICTYPE_B_x00178820 = 3,
    M2V_PICTYPE_D_x00178820 = 4
} M2vPicType_x00178820;
typedef enum M2vPicStruct_x00178820 {
    M2V_PICSTRUCT_TOP_FIELD_x00178820 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00178820 = 2,
    M2V_PICSTRUCT_FRAME_x00178820 = 3
} M2vPicStruct_x00178820;
typedef enum M2vPicAtrF64_x00178820 {
    M2V_PICATR_F64_0_x00178820 = 0
} M2vPicAtrF64_x00178820;
typedef struct M2vPicAtr_x00178820 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00178820 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00178820 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00178820 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00178820 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00178820;
void func_00178820_x00178820(M2vPicAtr_x00178820 *picatr) __asm__("func_00178820");
/* m2vlib_InitPicAtr: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00178820_x00178820(M2vPicAtr_x00178820 *picatr)
{
    picatr->horizontal_size = 0;
    picatr->vertical_size = 0;
    picatr->mb_width = 0;
    picatr->mb_height = 0;
    picatr->frame_rate_code = 0;
    picatr->temporal_reference = 0;
    picatr->picture_coding_type = 0;
    picatr->drop_frame_flag = 0;
    picatr->time_code_hours = 0;
    picatr->time_code_minutes = 0;
    picatr->time_code_seconds = 0;
    picatr->time_code_pictures = 0;
    picatr->gsc_count = 0;
    picatr->shc_count = 0;
    picatr->picture_structure = 3;
    picatr->chroma_format = 1;
    picatr->f64 = 0;
    picatr->f68 = 1;
    picatr->bit_rate = 0;
    picatr->vbv_buffer_size = 0;
    picatr->display_horizontal_size = -1;
    picatr->display_vertical_size = -1;
    picatr->field_count = 0;
    picatr->progressive_frame = 1;
    picatr->top_field_first = 0;
    picatr->repeat_first_field = 0;
    picatr->field_964 = 0;
    picatr->aspect_ratio_information = 1;
    picatr->constrained_parameters_flag = 0;
    picatr->frame_rate_extension_n = 0;
    picatr->frame_rate_extension_d = 0;
    picatr->profile_and_level_indication = 255;
    picatr->progressive_sequence = 0;
    picatr->low_delay = 255;
    picatr->video_format = 255;
    picatr->colour_description = 0;
    picatr->colour_primaries = 255;
    picatr->transfer_characteristics = 255;
    picatr->matrix_coefficients = 255;
}
void func_001788D0(void) {

}
s32 func_00178910_x001788D8() __asm__("func_00178910");
s32 func_00178960_x001788D8(s32) __asm__("func_00178960");
s32 func_001788D8_x001788D8(void) __asm__("func_001788D8");
s32 func_001788D8_x001788D8(void)
{
    s32 h = func_00178910_x001788D8();
    if (h == 0) {
        return 0;
    }
    return func_00178960_x001788D8(h);
}
typedef struct { u8 pad[0x40]; s32 n; u8 *p; } Lib_x00178910;
extern Lib_x00178910 D_00481490_x00178910 __asm__("D_00481490");
s32 *func_00178910_x00178910(void) __asm__("func_00178910");
s32 *func_00178910_x00178910(void)
{
    s32 i;
    Lib_x00178910 *l = &D_00481490_x00178910;
    s32 n = l->n;
    u8 *p = l->p;
    for (i = 0; i < n; i++) {
        if (*(s32 *)p == 1) {
            return (s32 *)p;
        }
        p += 0x6E0;
    }
    return 0;
}
struct SfdSj_x00178960;
typedef struct M2vErrInf_x00178960 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00178960;
typedef struct Mpeg2Ext_x00178960 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00178960;
typedef enum M2vFrameRate_x00178960 {
    M2V_FRAME_RATE_FORBIDDEN_x00178960 = 0
} M2vFrameRate_x00178960;
typedef enum M2vPicType_x00178960 {
    M2V_PICTYPE_I_x00178960 = 1,
    M2V_PICTYPE_P_x00178960 = 2,
    M2V_PICTYPE_B_x00178960 = 3,
    M2V_PICTYPE_D_x00178960 = 4
} M2vPicType_x00178960;
typedef enum M2vPicStruct_x00178960 {
    M2V_PICSTRUCT_TOP_FIELD_x00178960 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00178960 = 2,
    M2V_PICSTRUCT_FRAME_x00178960 = 3
} M2vPicStruct_x00178960;
typedef enum M2vPicAtrF64_x00178960 {
    M2V_PICATR_F64_0_x00178960 = 0
} M2vPicAtrF64_x00178960;
typedef struct M2vPicAtr_x00178960 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00178960 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00178960 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00178960 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00178960 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00178960;
typedef void (*M2vUsrDatFn_x00178960)(void *obj, int level);
typedef struct M2vUsrSj_x00178960 {
    struct SfdSj_x00178960 *sj;
    M2vUsrDatFn_x00178960 fn;
    void *obj;
} M2vUsrSj_x00178960;
typedef struct M2vPicUsr_x00178960 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00178960;
typedef void (*M2vCondFn_x00178960)();
typedef struct M2vObj_x00178960 {
    int stat;
    M2vErrInf_x00178960 err;
    M2vCondFn_x00178960 cond[16];
    M2vPicAtr_x00178960 picatr;
    char pad216[64];
    M2vUsrSj_x00178960 usrsj[4];
    M2vPicUsr_x00178960 picusr;
    char pad340[12];
    Mpeg2Ext_x00178960 ext;
    char pad1656[8];
} M2vObj_x00178960;
typedef struct M2vLibWork_x00178960 {
    M2vCondFn_x00178960 cond[16];
    int nobj;
    M2vObj_x00178960 *obj;
} M2vLibWork_x00178960;
extern void M2V_SetErrFunc_x00178960(M2vObj_x00178960 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void M2VHDEC_InitHn_x00178960(M2vObj_x00178960 *hn) __asm__("func_001732D8");
typedef struct SfdSj_x00178960 SfdSj_x00178960;
typedef struct SfdSjChunk_x00178960 {
    char *data;
    int len;
} SfdSjChunk_x00178960;
typedef struct SfdSjVtbl_x00178960 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00178960 *sj);
    int (*getUuid)(SfdSj_x00178960 *sj);
    void (*reset)(SfdSj_x00178960 *sj);
    void (*getChunk)(SfdSj_x00178960 *sj, int id, int n, SfdSjChunk_x00178960 *ck);
    void (*ungetChunk)(SfdSj_x00178960 *sj, int id, SfdSjChunk_x00178960 *ck);
    void (*putChunk)(SfdSj_x00178960 *sj, int id, SfdSjChunk_x00178960 *ck);
    int (*getNumData)(SfdSj_x00178960 *sj, int id);
} SfdSjVtbl_x00178960;
struct SfdSj_x00178960 {
    SfdSjVtbl_x00178960 *vtbl;
};
extern void mpvhook_SetErrFunc_x00178960(M2vObj_x00178960 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern M2vLibWork_x00178960 m2vlib_libwork_x00178960 __asm__("D_00481490");
void m2vlib_InitPicAtr_x00178960(M2vPicAtr_x00178960 *picatr) __asm__("func_00178820");
void m2vlib_InitPicAtr_x00178960(M2vPicAtr_x00178960 *picatr) __asm__("func_00178820");
typedef struct M2vCondTbl_x00178960 { M2vCondFn_x00178960 fn[16]; } M2vCondTbl_x00178960;
M2vObj_x00178960 *func_00178960_x00178960(M2vObj_x00178960 *hn) __asm__("func_00178960");
/* m2vlib_InitHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/m2vlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
M2vObj_x00178960 *func_00178960_x00178960(M2vObj_x00178960 *hn)
{
    *(M2vCondTbl_x00178960 *)hn->cond = *(M2vCondTbl_x00178960 *)m2vlib_libwork_x00178960.cond;
    M2VHDEC_InitHn_x00178960(hn);
    m2vlib_InitPicAtr_x00178960(&hn->picatr);
    hn->stat = 2;
    return hn;
}
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
typedef struct { s32 type; s32 pad[5]; s32 x[(0x6E0 - 0x18) / 4]; } MpvE_r3_x00178B28;
typedef struct { u8 pad[0x40]; s32 n; MpvE_r3_x00178B28 *e; } MpvT_r3_x00178B28;
extern MpvT_r3_x00178B28 D_00481490_x00178B28 __asm__("D_00481490");
void func_00178B28_x00178B28(s32 a0, s32 a1) __asm__("func_00178B28");
void func_00178B28_x00178B28(s32 a0, s32 a1)
{
    MpvT_r3_x00178B28 *t = &D_00481490_x00178B28;
    MpvE_r3_x00178B28 *e;
    s32 i, n;

    n = t->n;
    e = t->e;
    for (i = 0; i < n; i++, e++) {
        if (e->type == 2) {
            e->x[a0] = a1;
        }
    }
}
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
void func_00178E38_x00178E38(void *dst, void *src, unsigned int n) __asm__("func_00178E38");
/* UTY_MemcpyDword: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsutl.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00178E38_x00178E38(void *dst, void *src, unsigned int n) {
    int *to = dst;
    int *from = src;
    int i;
    int a, b, c, d;
    for (i = n & 15; i != 0; i--) {
        *to++ = *from++;
    }
    for (n >>= 4; n != 0; n--) {
        a = *from++; b = *from++; c = *from++; d = *from++;
        to[0] = a; to[1] = b; to[2] = c; to[3] = d;
        a = *from++; b = *from++; c = *from++; d = *from++;
        to[4] = a; to[5] = b; to[6] = c; to[7] = d;
        a = *from++; b = *from++; c = *from++; d = *from++;
        to[8] = a; to[9] = b; to[10] = c; to[11] = d;
        a = *from++; b = *from++; c = *from++; d = *from++;
        to[12] = a; to[13] = b; to[14] = c; to[15] = d;
        to += 16;
    }
}
void func_00178F48_x00178F48(void *dst, char value, unsigned int count) __asm__("func_00178F48");
/* UTY_MemsetByte: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsutl.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00178F48_x00178F48(void *dst, char value, unsigned int count) {
    char *p = (char *)dst + count;
    unsigned int n;
    for (n = count & 15; n != 0; n--) {
        *--p = value;
    }
    for (count >>= 4; count != 0; count--) {
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
    }
}
void func_00179018_x00179018(void *dst, int value, unsigned int count) __asm__("func_00179018");
/* UTY_MemsetDword: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsutl.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00179018_x00179018(void *dst, int value, unsigned int count) {
    int *p = (int *)dst + count;
    unsigned int n;
    for (n = count & 15; n != 0; n--) {
        *--p = value;
    }
    for (count >>= 4; count != 0; count--) {
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
        *--p = value; *--p = value; *--p = value; *--p = value;
    }
}
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
typedef struct MpvO_x00179148 MpvO_x00179148;
struct MpvO_x00179148 { u8 pad[0xC4]; void (*fn)(MpvO_x00179148 *, s32); };
s32 func_0017B218_x00179148(MpvO_x00179148 *) __asm__("func_0017B218");
void func_0017B048_x00179148(s32, s32, s32, s32 *, s32 *) __asm__("func_0017B048");
void func_00179148_x00179148(MpvO_x00179148 *o, s32 a1, s32 a2, s32 *p3, s32 *p4) __asm__("func_00179148");
void func_00179148_x00179148(MpvO_x00179148 *o, s32 a1, s32 a2, s32 *p3, s32 *p4)
{
    *p3 = 0;
    *p4 = 0;
    if (func_0017B218_x00179148(o) != 0) {
        func_0017B048_x00179148(0, 0xFF020301, a2, p3, p4);
        return;
    }
    o->fn(o, a1);
}
typedef struct { int w0, w1, f8, fC, w4, w5, w6, w7; } Pic_91F0_x001791F0;
typedef struct { char pad0[0x20]; Pic_91F0_x001791F0 cur; Pic_91F0_x001791F0 slot[3]; } Mpv_91F0_x001791F0;
int func_00179310_x001791F0(Mpv_91F0_x001791F0 *, unsigned char *, int, int *, int *) __asm__("func_00179310");
int func_001791F0_x001791F0(Mpv_91F0_x001791F0 *m, unsigned char *buf, int len, int *consumed, int *flags) __asm__("func_001791F0");
int func_001791F0_x001791F0(Mpv_91F0_x001791F0 *m, unsigned char *buf, int len, int *consumed, int *flags)
{
    int n, fl;
    int idx;

    while (len >= 4) {
        int r = func_00179310_x001791F0(m, buf, len, &n, &fl);
        {
            int f = *flags;
            buf += n;
            len -= n;
            *consumed += n;
            *flags = f | fl;
        }
        if (r == 0) {
            break;
        }
    }
    if (*flags & 0x20000) {
        Pic_91F0_x001791F0 *p = &m->cur;
        if (p->f8 != 0) {
            idx = 0;
        } else if (p->fC != 0) {
            idx = 1;
        } else {
            idx = 2;
        }
        m->slot[idx] = *p;
    }
    return 0;
}
u32 func_0017AAF0_x00179310(s32) __asm__("func_0017AAF0");
void func_00179400_x00179310(u8 *, s32, s32 *) __asm__("func_00179400");
void func_00179860_x00179310(u8 *, s32, s32 *) __asm__("func_00179860");
void func_00179EA0_x00179310(u8 *, s32, s32 *, s32) __asm__("func_00179EA0");
s32 func_00179310_x00179310(u8 *o, s32 a1, s32 a2, s32 *p3, u32 *p4) __asm__("func_00179310");
s32 func_00179310_x00179310(u8 *o, s32 a1, s32 a2, s32 *p3, u32 *p4)
{
    u32 t;
    s32 r;

    *p3 = 0;
    t = func_0017AAF0_x00179310(a1);
    *p4 = t;
    r = 0;
    switch (t) {
    case 0x10000:
        r = 1;
        func_00179400_x00179310(o + 0x14, a1, p3);
        break;
    case 0x20000:
        r = 1;
        func_00179860_x00179310(o + 0x20, a1, p3);
        break;
    case 0x40000:
        func_00179EA0_x00179310(o + 0xA0, a1, p3, *(s32 *)(o + 0x10));
        break;
    }
    return r;
}
typedef struct { int isMpeg1; unsigned int scr; int muxRate; } Pack_9400_x00179400;
void func_00179400_x00179400(Pack_9400_x00179400 *pack, unsigned char *pos, int *len) __asm__("func_00179400");
void func_00179400_x00179400(Pack_9400_x00179400 *pack, unsigned char *pos, int *len)
{
    unsigned int cur, nxt;
    int bit;
    char *rp;
    unsigned int prefix, scrHi, scrMid, scrLo, muxRate;
    { (rp) = (char *)((int)(pos + 4) & ~3); (bit) = ((char *)(pos + 4) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 30) { (bit) -= 30; if ((bit) != 0) { (cur) |= (nxt) >> 1; (prefix) = (cur) >> 30; (cur) = (nxt) << 1; } else { (prefix) = (cur) >> 30; (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (prefix) = (cur) >> 30; (cur) <<= 2; (bit) += 2; } };
    { (bit) += (2); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (2); } };
    { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (scrHi) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (scrHi) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (scrHi) = (cur) >> (32 - (3)); (cur) <<= (3); (bit) += (3); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (scrMid) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (scrMid) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (scrMid) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (scrLo) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (scrLo) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (scrLo) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (22)) { (bit) -= 32 - (22); if ((bit) != 0) { (cur) |= (nxt) >> ((22) - (bit)); (muxRate) = (cur) >> (32 - (22)); (cur) = (nxt) << (bit); } else { (muxRate) = (cur) >> (32 - (22)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (muxRate) = (cur) >> (32 - (22)); (cur) <<= (22); (bit) += (22); } };
    pack->isMpeg1 = prefix == 0;
    pack->scr = (scrHi << 28) | (scrMid << 13) | (scrLo >> 2);
    pack->muxRate = muxRate;
    *len = 12;
}
typedef struct { int headerLength; int rateBound; int audioBound; int videoBound; int fixedFlag; int cspsFlag; int audioLockFlag; int videoLockFlag; } SysHd_9860_x00179860;
int func_0017AAF0_x00179860(unsigned char *) __asm__("func_0017AAF0");
void func_00179860_x00179860(SysHd_9860_x00179860 *sysHd, unsigned char *pos, int *len) __asm__("func_00179860");
void func_00179860_x00179860(SysHd_9860_x00179860 *sysHd, unsigned char *pos, int *len)
{
    unsigned int cur, nxt;
    int bit;
    char *rp;
    unsigned char *end;
    unsigned char *next;
    { (rp) = (char *)((int)(pos + 4) & ~3); (bit) = ((char *)(pos + 4) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 32 - (16)) { (bit) -= 32 - (16); if ((bit) != 0) { (cur) |= (nxt) >> ((16) - (bit)); (sysHd->headerLength) = (cur) >> (32 - (16)); (cur) = (nxt) << (bit); } else { (sysHd->headerLength) = (cur) >> (32 - (16)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (sysHd->headerLength) = (cur) >> (32 - (16)); (cur) <<= (16); (bit) += (16); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (22)) { (bit) -= 32 - (22); if ((bit) != 0) { (cur) |= (nxt) >> ((22) - (bit)); (sysHd->rateBound) = (cur) >> (32 - (22)); (cur) = (nxt) << (bit); } else { (sysHd->rateBound) = (cur) >> (32 - (22)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (sysHd->rateBound) = (cur) >> (32 - (22)); (cur) <<= (22); (bit) += (22); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (6)) { (bit) -= 32 - (6); if ((bit) != 0) { (cur) |= (nxt) >> ((6) - (bit)); (sysHd->audioBound) = (cur) >> (32 - (6)); (cur) = (nxt) << (bit); } else { (sysHd->audioBound) = (cur) >> (32 - (6)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (sysHd->audioBound) = (cur) >> (32 - (6)); (cur) <<= (6); (bit) += (6); } };
    { (sysHd->fixedFlag) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (sysHd->cspsFlag) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (sysHd->audioLockFlag) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (sysHd->videoLockFlag) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (5)) { (bit) -= 32 - (5); if ((bit) != 0) { (cur) |= (nxt) >> ((5) - (bit)); (sysHd->videoBound) = (cur) >> (32 - (5)); (cur) = (nxt) << (bit); } else { (sysHd->videoBound) = (cur) >> (32 - (5)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (sysHd->videoBound) = (cur) >> (32 - (5)); (cur) <<= (5); (bit) += (5); } };
    { (bit) += (8); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (8); } };
    while (cur >> 31) {
        { (bit) += (24); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (24); } };
    }
    end = (unsigned char *)rp + ((bit + 7) >> 3);
    next = end - 8;
    *len = next - pos;
    if (func_0017AAF0_x00179860(next) == 0 && func_0017AAF0_x00179860(end - 7) == 0x40000) {
        *len += 1;
    }
}
typedef struct { int streamId; int streamKind; int streamNo; int packetLength; int stdBufferSize; unsigned int pts; unsigned int dts; int dataSize; } Pes_9EA0_x00179EA0;
void func_00179EA0_x00179EA0(Pes_9EA0_x00179EA0 *pes, unsigned char *pos, int *len, int pesSw) __asm__("func_00179EA0");
void func_00179EA0_x00179EA0(Pes_9EA0_x00179EA0 *pes, unsigned char *pos, int *len, int pesSw)
{
    unsigned int cur, nxt;
    int bit;
    char *rp;
    unsigned int streamId, bufferBoundScale, bufferSizeBound, tsHi, tsMid, tsLo, peek;
    int streamKind, streamNo;
    int headerBase;
    unsigned char *end;
    { (rp) = (char *)((int)(pos + 3) & ~3); (bit) = ((char *)(pos + 3) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 32 - (8)) { (bit) -= 32 - (8); if ((bit) != 0) { (cur) |= (nxt) >> ((8) - (bit)); (streamId) = (cur) >> (32 - (8)); (cur) = (nxt) << (bit); } else { (streamId) = (cur) >> (32 - (8)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (streamId) = (cur) >> (32 - (8)); (cur) <<= (8); (bit) += (8); } };
    pes->streamId = streamId;
    if (streamId - 0xE0 < 16) {
        streamKind = 1;
        streamNo = streamId - 0xE0;
    } else if (streamId - 0xC0 < 32) {
        streamKind = 0;
        streamNo = streamId - 0xC0;
    } else if (streamId == 0xBD) {
        streamKind = 2;
        streamNo = 1;
    } else if (streamId == 0xBF) {
        streamKind = 2;
        streamNo = 2;
    } else if (streamId == 0xBE) {
        streamKind = 3;
        streamNo = 0;
    } else {
        streamKind = 4;
        streamNo = 0;
    }
    pes->streamKind = streamKind;
    pes->streamNo = streamNo;
    if (pesSw == 2) {
        { if ((bit) >= 32 - (16)) { (bit) -= 32 - (16); if ((bit) != 0) { (cur) |= (nxt) >> ((16) - (bit)); (pes->packetLength) = (cur) >> (32 - (16)); (cur) = (nxt) << (bit); } else { (pes->packetLength) = (cur) >> (32 - (16)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (pes->packetLength) = (cur) >> (32 - (16)); (cur) <<= (16); (bit) += (16); } };
        headerBase = 6;
    } else {
        { if ((bit) != 0) { (pes->packetLength) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (pes->packetLength) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
        headerBase = 8;
    }
    if (streamId - 0xBE < 2) {
        *len = headerBase;
        pes->dataSize = pes->packetLength;
        return;
    }
    for (;;) {
        { (peek) = (cur) >> (32 - (8)); if ((bit) > 32 - (8)) { (peek) |= (nxt) >> (64 - (8) - (bit)); } };
        if (peek != 0xFF) {
            break;
        }
        { (bit) += (8); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (8); } };
    }
    { (peek) = (cur) >> (32 - (2)); if ((bit) > 32 - (2)) { (peek) |= (nxt) >> (64 - (2) - (bit)); } };
    if (peek == 1) {
        { (bit) += (2); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (2); } };
        { (bufferBoundScale) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
        { if ((bit) >= 32 - (13)) { (bit) -= 32 - (13); if ((bit) != 0) { (cur) |= (nxt) >> ((13) - (bit)); (bufferSizeBound) = (cur) >> (32 - (13)); (cur) = (nxt) << (bit); } else { (bufferSizeBound) = (cur) >> (32 - (13)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bufferSizeBound) = (cur) >> (32 - (13)); (cur) <<= (13); (bit) += (13); } };
        bufferSizeBound <<= 7;
        if (bufferBoundScale != 0) {
            bufferSizeBound <<= 3;
        }
        pes->stdBufferSize = bufferSizeBound;
    }
    { (peek) = (cur) >> (32 - (4)); if ((bit) > 32 - (4)) { (peek) |= (nxt) >> (64 - (4) - (bit)); } };
    if (peek == 2) {
        { (bit) += (4); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (4); } };
        { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsHi) = (cur) >> (32 - (3)); (cur) <<= (3); (bit) += (3); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsMid) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsLo) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        pes->pts = (tsHi << 28) | (tsMid << 13) | (tsLo >> 2);
        pes->dts = -1;
    } else if (peek == 3) {
        { (bit) += (4); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (4); } };
        { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsHi) = (cur) >> (32 - (3)); (cur) <<= (3); (bit) += (3); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsMid) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsLo) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        pes->pts = (tsHi << 28) | (tsMid << 13) | (tsLo >> 2);
        { (bit) += (4); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (4); } };
        { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (tsHi) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsHi) = (cur) >> (32 - (3)); (cur) <<= (3); (bit) += (3); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsMid) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsMid) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        { if ((bit) >= 32 - (15)) { (bit) -= 32 - (15); if ((bit) != 0) { (cur) |= (nxt) >> ((15) - (bit)); (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt) << (bit); } else { (tsLo) = (cur) >> (32 - (15)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (tsLo) = (cur) >> (32 - (15)); (cur) <<= (15); (bit) += (15); } };
        { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
        pes->dts = (tsHi << 28) | (tsMid << 13) | (tsLo >> 2);
    } else {
        { (bit) += (8); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (8); } };
        pes->pts = -1;
        pes->dts = -1;
    }
    end = (unsigned char *)rp + ((bit + 7) >> 3) - 8;
    *len = end - pos;
    pes->dataSize = pes->packetLength + headerBase - *len;
}
int func_0017AAF0_x0017AAF0(unsigned char *p) __asm__("func_0017AAF0");
/* MPS_GetStartCodeKind: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsdmx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017AAF0_x0017AAF0(unsigned char *p) {
    unsigned char code;
    if (p[0] == 0 && p[1] == 0 && p[2] == 1) {
        code = p[3];
        switch (code) {
        case 0xBA: return 0x10000;
        case 0xBB: return 0x20000;
        case 0xB9: return 0x80000;
        }
        if (code >= 0xBC) return 0x40000;
    }
    return 0;
}
__asm__("# rebind func_0017AAF0 0x0017AAF0");
unsigned char *mpsdmx_SearchStartCode_x0017AB60(unsigned char *p, int size, unsigned char code) __asm__("func_0017ABC0");
unsigned char *mpsdmx_SearchStartCode_x0017AB60(unsigned char *p, int size, unsigned char code) __asm__("func_0017ABC0");
int func_0017AB60_x0017AB60(unsigned char *buf, int size) __asm__("func_0017AB60");
/* MPS_IsMpeg1: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsdmx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017AB60_x0017AB60(unsigned char *buf, int size) {
    unsigned char *p = mpsdmx_SearchStartCode_x0017AB60(buf, size, 0xBA);
    if (p == 0) {
        return 0;
    }
    p += 4;
    size -= p - buf;
    if (size <= 0) {
        return 0;
    }
    return (*p >> 6) == 0;
}
unsigned char *func_0017ABC0_x0017ABC0(unsigned char *p, int size, unsigned char code) __asm__("func_0017ABC0");
/* mpsdmx_SearchStartCode: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpsdmx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned char *func_0017ABC0_x0017ABC0(unsigned char *p, int size, unsigned char code) {
    int i;
    for (i = 0; i + 3 < size; i++, p++) {
        if (p[0] == 0 && p[1] == 0 && p[2] == 1 && p[3] == code) {
            return p;
        }
    }
    return 0;
}
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
typedef struct { s32 f0; u8 pad[0xD0]; } MpvE_x0017AF10_x0017AF10;
typedef struct { s32 pad[3]; s32 n; MpvE_x0017AF10_x0017AF10 e[1]; } MpvT_x0017AF10_x0017AF10;
extern MpvT_x0017AF10_x0017AF10 *D_00424C38_x0017AF10 __asm__("D_00424C38");
void func_00179018_x0017AF10(void *, s32, s32) __asm__("func_00179018");
void func_0017B020_x0017AF10(MpvT_x0017AF10_x0017AF10 *) __asm__("func_0017B020");
s32 func_0017AF10_x0017AF10(s32 n, MpvT_x0017AF10_x0017AF10 *buf) __asm__("func_0017AF10");
s32 func_0017AF10_x0017AF10(s32 n, MpvT_x0017AF10_x0017AF10 *buf)
{
  MpvT_x0017AF10_x0017AF10 *t;
  MpvE_x0017AF10_x0017AF10 (*new_var)[1];
  s32 i;
  D_00424C38_x0017AF10 = buf;
  func_00179018_x0017AF10(buf, 0, (n * 0x35) + 4);
  func_0017B020_x0017AF10(D_00424C38_x0017AF10);
  (*D_00424C38_x0017AF10).n = n;
  new_var = &D_00424C38_x0017AF10->e;
  for (i = 0; i < n; i++)
  {
    (*((*new_var) + i)).f0 = 1;
  }

  return 0;
}
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
typedef s32 (*CbFn_x0017B098)(s32);
typedef struct { CbFn_x0017B098 fn; s32 arg; s32 val; } CbObj_x0017B098;
s32 func_0017B098_x0017B098(CbObj_x0017B098 *o, s32 v) __asm__("func_0017B098");
s32 func_0017B098_x0017B098(CbObj_x0017B098 *o, s32 v)
{
    s32 r = v;
    o->val = r;
    if (r != 0) {
        r = (s32)o->fn;
        if (r != 0) {
            r = ((CbFn_x0017B098)r)(o->arg);
        }
    }
    return r;
}
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
typedef int (*MpsErrFn_x0017B178)(void *obj);
typedef struct MpsErr_x0017B178 {
    MpsErrFn_x0017B178 fn;
    void *obj;
    int code;
} MpsErr_x0017B178;
typedef struct MpsPackHd_x0017B178 {
    long long scr;
    int isMpeg1;
    int muxRate;
} MpsPackHd_x0017B178;
typedef struct MpsSysHd_x0017B178 {
    int headerLength;
    int rateBound;
    int audioBound;
    int videoBound;
    int fixedFlag;
    int cspsFlag;
    int audioLockFlag;
    int videoLockFlag;
} MpsSysHd_x0017B178;
typedef struct MpsSysHdStream_x0017B178 {
    unsigned char streamId;
    unsigned char bufferBoundScale;
    unsigned short bufferSizeBound;
} MpsSysHdStream_x0017B178;
typedef struct MpsSysHdInf_x0017B178 {
    int rateBound;
    unsigned char audioBound;
    unsigned char fixedFlag;
    unsigned char cspsFlag;
    unsigned char audioLockFlag;
    unsigned char videoLockFlag;
    unsigned char videoBound;
    unsigned char packetRateRestrictionFlag;
    unsigned char reserved;
    int streamCount;
    MpsSysHdStream_x0017B178 stream[48];
} MpsSysHdInf_x0017B178;
typedef struct MpsPesInf_x0017B178 {
    long long pts;
    long long dts;
    int streamId;
    int streamKind;
    int streamNo;
    int packetLength;
    int stdBufferSize;
    int dataSize;
} MpsPesInf_x0017B178;
typedef struct MpsHn_x0017B178 MpsHn_x0017B178;
typedef int (*MpsDecodeFn_x0017B178)(MpsHn_x0017B178 *mps, unsigned char *pos, int n, int *len, int *flags);
typedef void (*MpsCbFn_x0017B178)(void *obj, int arg);
typedef void (*MpsSysHdFn_x0017B178)(void *obj, MpsSysHdInf_x0017B178 *inf);
struct MpsHn_x0017B178 {
    int stat;
    MpsErr_x0017B178 err;
    int pesSw;
    int f20;
    MpsPackHd_x0017B178 pack;
    MpsSysHd_x0017B178 sysHd;
    MpsSysHd_x0017B178 sysHdKind[3];
    MpsPesInf_x0017B178 pes;
    int f208;
    MpsDecodeFn_x0017B178 decode;
    int f216;
    int f220;
    int f224;
    MpsSysHdFn_x0017B178 sysHdFn;
    void *sysHdObj;
    MpsCbFn_x0017B178 auxFn;
    void *auxObj;
    MpsCbFn_x0017B178 pesFn;
    void *pesObj;
    int f252;
};
typedef struct MpsWork_x0017B178 {
    MpsErr_x0017B178 err;
    int nhn;
    MpsHn_x0017B178 hn[1];
} MpsWork_x0017B178;
int MPSLIB_CheckHn_x0017B178(MpsHn_x0017B178 *mps) __asm__("func_0017B218");
int MPSLIB_SetErr_x0017B178(MpsHn_x0017B178 *mps, int code) __asm__("func_0017B048");
extern MpsWork_x0017B178 *mps_work_x0017B178 __asm__("D_00424C38");
int MPSLIB_SetErr_x0017B178(MpsHn_x0017B178 *mps, int code) __asm__("func_0017B048");
int MPSLIB_CheckHn_x0017B178(MpsHn_x0017B178 *mps) __asm__("func_0017B218");
int func_0017B178_x0017B178(MpsHn_x0017B178 *mps, MpsErr_x0017B178 *out) __asm__("func_0017B178");
/* MPS_GetErrInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/mps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017B178_x0017B178(MpsHn_x0017B178 *mps, MpsErr_x0017B178 *out) {
    if (mps == 0) {
        *out = mps_work_x0017B178->err;
    } else {
        if (MPSLIB_CheckHn_x0017B178(mps) != 0) {
            return MPSLIB_SetErr_x0017B178(0, 0xFF020102);
        }
        *out = mps->err;
    }
    return 0;
}
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
s32 func_0017B278_x0017B240() __asm__("func_0017B278");
s32 func_0017B2D0_x0017B240(s32) __asm__("func_0017B2D0");
s32 func_0017B240_x0017B240(void) __asm__("func_0017B240");
s32 func_0017B240_x0017B240(void)
{
    s32 h = func_0017B278_x0017B240();
    if (h == 0) {
        return 0;
    }
    return func_0017B2D0_x0017B240(h);
}
typedef struct { int used; char pad[0xD0]; } Ent_B278_x0017B278;
typedef struct { char pad[0xC]; int n; Ent_B278_x0017B278 e[1]; } Tbl_B278_x0017B278;
extern Tbl_B278_x0017B278 *D_00424C38_x0017B278 __asm__("D_00424C38");
Ent_B278_x0017B278 *func_0017B278_x0017B278(void) __asm__("func_0017B278");
Ent_B278_x0017B278 *func_0017B278_x0017B278(void)
{
    Ent_B278_x0017B278 *e = D_00424C38_x0017B278->e;
    int n = D_00424C38_x0017B278->n;
    int i;
    for (i = 0; i < n; i++) {
        if (e[i].used == 1) {
            return &e[i];
        }
    }
    return 0;
}
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
int MPV_CheckDelim_x0017B4B8(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B4B8(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B4B8(const unsigned char *p) __attribute__((weak, section(".b3stub")));
int MPV_CheckDelim_x0017B4B8(const unsigned char *p) {}
char *func_0017B4B8_x0017B4B8(char *end, int len, int mask) __asm__("func_0017B4B8");
/* MPV_BsearchDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/startcode.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_0017B4B8_x0017B4B8(char *end, int len, int mask)
{
    char c;
    unsigned int state = 0;
    char *p = end;
    char *start = end - len;
    while (start < p) {
        p--;
        c = *p;
        switch (state) {
        case 0:
            state = 1;
            break;
        case 1:
            if (c == 1)
                state = 2;
            break;
        case 2:
            if (c == 0)
                state = 3;
            else if (c != 1)
                state = 1;
            break;
        case 3:
            if (c == 0) {
                if (mask & MPV_CheckDelim_x0017B4B8((const unsigned char *)p))
                    return p;
                state = 0;
            } else
                state = c != 1 ? 1 : 2;
            break;
        }
    }
    return 0;
}
__asm__("# rebind func_0017B4B8 0x0017B4B8");
int MPV_CheckDelim_x0017B5B8(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B5B8(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B5B8(const unsigned char *p) __attribute__((weak, section(".b3stub")));
int MPV_CheckDelim_x0017B5B8(const unsigned char *p) {}
char *func_0017B5B8_x0017B5B8(char *buf, int len, int mask) __asm__("func_0017B5B8");
/* MPV_SearchDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/startcode.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_0017B5B8_x0017B5B8(char *buf, int len, int mask)
{
    char *p = buf;
    char *end = buf + len;
    unsigned int state = 0;
    char c;
    char *hit;
    while (p < end) {
        c = *p++;
        switch (state) {
        case 0:
            if (c == 0)
                state = 1;
            break;
        case 1:
            state = c != 0 ? 0 : 2;
            break;
        case 2:
            if (c == 1)
                state = 3;
            else if (c != 0)
                state = 0;
            break;
        case 3:
            hit = p - 4;
            if (mask & MPV_CheckDelim_x0017B5B8((const unsigned char *)hit))
                return hit;
            state = 0;
            break;
        }
    }
    return 0;
}
__asm__("# rebind func_0017B5B8 0x0017B5B8");
int MPV_CheckDelim_x0017B6C0(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B6C0(const unsigned char *p) __asm__("func_0017B420");
int MPV_CheckDelim_x0017B6C0(const unsigned char *p) __attribute__((weak, section(".b3stub")));
int MPV_CheckDelim_x0017B6C0(const unsigned char *p) {}
char *func_0017B6C0_x0017B6C0(char *dst, char *src, int len, int mask) __asm__("func_0017B6C0");
/* MPV_CopyStm: from https://github.com/crashbashash/DW4_Decomp (src/cri/startcode.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_0017B6C0_x0017B6C0(char *dst, char *src, int len, int mask)
{
    char *p = src;
    char *end = src + len;
    unsigned int state = 0;
    char c;
    while (p < end) {
        c = *p++;
        *dst++ = c;
        switch (state) {
        case 0:
            if (c == 0)
                state = 1;
            break;
        case 1:
            state = c != 0 ? 0 : 2;
            break;
        case 2:
            if (c == 1)
                state = 3;
            else if (c != 0)
                state = 0;
            break;
        case 3:
            if (mask & MPV_CheckDelim_x0017B6C0((const unsigned char *)(p - 4)))
                return p;
            state = 0;
            break;
        }
    }
    return p;
}
__asm__("# rebind func_0017B6C0 0x0017B6C0");
extern short mpvsc_mbaddr_incr_vlc_x0017B7D0[] __asm__("D_00424C40");
int func_0017B7D0_x0017B7D0(unsigned char *buf, int nbyte, int nmb) __asm__("func_0017B7D0");
/* MPV_IsEmptyBpic: from https://github.com/crashbashash/DW4_Decomp (src/cri/startcode.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017B7D0_x0017B7D0(unsigned char *buf, int nbyte, int nmb) {
    int bit;
    char *rp;
    unsigned int cur, nxt;
    int cnt;
    unsigned int val;
    int code;
    int len;
    int pos;
    char *q;
    { (rp) = (char *)((int)(buf) & ~3); (bit) = ((char *)(buf) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) != 0) { (val) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (val) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    if (val != 0x101) {
        return 0;
    }
    { if ((bit) >= 32 - (5)) { (bit) -= 32 - (5); if ((bit) != 0) { (cur) |= (nxt) >> ((5) - (bit)); (val) = (cur) >> (32 - (5)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (5)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (5)); (bit) += (5); (cur) <<= (5); } };
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val != 0) {
        return 0;
    }
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val == 0) {
        return 0;
    }
    do { (val) = (cur) >> (32 - (6)); if ((bit) > 32 - (6)) { (val) |= (nxt) >> (64 - (6) - (bit)); } } while (0);
    switch (val) {
    case 0x16:
    case 0x17:
        { (bit) += (5); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (5); } };
        break;
    case 0x0B:
        { (bit) += (6); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (6); } };
        break;
    default:
        return 0;
    }
    cnt = nmb - 1;
    for (;;) {
        do { (val) = (cur) >> (32 - (11)); if ((bit) > 32 - (11)) { (val) |= (nxt) >> (64 - (11) - (bit)); } } while (0);
        if (val != 8) {
            break;
        }
        { (bit) += (11); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (11); } };
        cnt -= 33;
        if (cnt <= 33) {
            break;
        }
    }
    if (cnt <= 0 || cnt > 33) {
        return 0;
    }
    code = mpvsc_mbaddr_incr_vlc_x0017B7D0[cnt];
    len = code & 0xFF;
    { if ((bit) >= 32 - (len)) { (bit) -= 32 - (len); if ((bit) != 0) { (cur) |= (nxt) >> ((len) - (bit)); (val) = (cur) >> (32 - (len)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (len)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (len)); (bit) += (len); (cur) <<= (len); } };
    if (val != code >> 8) {
        return 0;
    }
    do { (val) = (cur) >> (32 - (6)); if ((bit) > 32 - (6)) { (val) |= (nxt) >> (64 - (6) - (bit)); } } while (0);
    switch (val) {
    case 0x16:
    case 0x17:
        { (bit) += (5); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (5); } };
        break;
    case 0x0B:
        { (bit) += (6); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (6); } };
        break;
    default:
        return 0;
    }
    q = rp;
    q += (bit + 7) >> 3;
    q -= 8;
    pos = q - (char *)buf;
    if (pos > nbyte) {
        return 0;
    }
    return 1;
}
__asm__("# rebind func_0017B7D0 0x0017B7D0");
/* padding for ee-gcc (scripts/func_insert.py, moved_pad) */
extern int m211010;
int MPV_CheckDelim_x0017BC78(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x0017BC78(char *buf, int len, int mask) __asm__("func_0017B5B8");
extern short mpvsc_mbaddr_incr_vlc_x0017BC78[] __asm__("D_00424C40");
int MPV_CheckDelim_x0017BC78(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x0017BC78(char *buf, int len, int mask) __asm__("func_0017B5B8");
int func_0017BC78_x0017BC78(unsigned char *buf, int nbyte, int nmb) __asm__("func_0017BC78");
/* MPV_IsEmptyPpic: from https://github.com/crashbashash/DW4_Decomp (src/cri/startcode.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017BC78_x0017BC78(unsigned char *buf, int nbyte, int nmb) {
    int bit;
    char *rp;
    unsigned int cur, nxt;
    int cnt;
    unsigned int val;
    int code;
    int len;
    int pos;
    char *q;
    char *p;
    int flg;
    { (rp) = (char *)((int)(buf) & ~3); (bit) = ((char *)(buf) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) != 0) { (val) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (val) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    if (val != 0x101) {
        return 0;
    }
    { if ((bit) >= 32 - (5)) { (bit) -= 32 - (5); if ((bit) != 0) { (cur) |= (nxt) >> ((5) - (bit)); (val) = (cur) >> (32 - (5)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (5)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (5)); (bit) += (5); (cur) <<= (5); } };
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val != 0) {
        return 0;
    }
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val == 0) {
        return 0;
    }
    do { (val) = (cur) >> (32 - (5)); if ((bit) > 32 - (5)) { (val) |= (nxt) >> (64 - (5) - (bit)); } } while (0);
    if (val != 7) {
        return 0;
    }
    { (bit) += (5); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (5); } };
    cnt = nmb - 1;
    for (;;) {
        do { (val) = (cur) >> (32 - (11)); if ((bit) > 32 - (11)) { (val) |= (nxt) >> (64 - (11) - (bit)); } } while (0);
        if (val != 8) {
            break;
        }
        { (bit) += (11); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (11); } };
        cnt -= 33;
        if (cnt <= 33) {
            break;
        }
    }
    if (cnt <= 0 || cnt > 33) {
        return 0;
    }
    code = mpvsc_mbaddr_incr_vlc_x0017BC78[cnt];
    len = code & 0xFF;
    { if ((bit) >= 32 - (len)) { (bit) -= 32 - (len); if ((bit) != 0) { (cur) |= (nxt) >> ((len) - (bit)); (val) = (cur) >> (32 - (len)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (len)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (len)); (bit) += (len); (cur) <<= (len); } };
    if (val != code >> 8) {
        return 0;
    }
    do { (val) = (cur) >> (32 - (5)); if ((bit) > 32 - (5)) { (val) |= (nxt) >> (64 - (5) - (bit)); } } while (0);
    if (val != 7) {
        return 0;
    }
    { (bit) += (5); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (5); } };
    q = rp + ((bit + 7) >> 3) - 8;
    pos = q - (char *)buf;
    if (pos > nbyte) {
        return 0;
    }
    for (;;) {
        p = MPV_SearchDelim_x0017BC78(q, nbyte - pos, 0xCC);
        if (p == 0) {
            return 0;
        }
        flg = MPV_CheckDelim_x0017BC78((unsigned char *)p);
        if (flg & 0x04) {
            if ((((p[5] & 3) << 1) | ((unsigned int)p[6] >> 31)) != 3) {
                return 0;
            }
            q = p + 1;
            pos = p + 1 - (char *)buf;
            continue;
        }
        if (flg & 0x40) {
            q = p + 1;
            pos = p + 1 - (char *)buf;
            continue;
        }
        if (flg & 0x80) {
            pos = p + 4 - (char *)buf;
            if (pos > nbyte) {
                return 0;
            }
            break;
        }
        if (flg & 0x08) {
            if (p[7] & 0x40) {
                pos = p + 7 - (char *)buf;
                if (pos > nbyte) {
                    return 0;
                }
                break;
            }
            return 0;
        }
        return 0;
    }
    return 1;
}
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
typedef s32 (*CbFn_x0017C330)(s32);
typedef struct { CbFn_x0017C330 fn; s32 arg; s32 val; } CbObj_x0017C330;
s32 func_0017C330_x0017C330(CbObj_x0017C330 *o, s32 v) __asm__("func_0017C330");
s32 func_0017C330_x0017C330(CbObj_x0017C330 *o, s32 v)
{
    s32 r = v;
    o->val = r;
    if (r != 0) {
        r = (s32)o->fn;
        if (r != 0) {
            r = ((CbFn_x0017C330)r)(o->arg);
        }
    }
    return r;
}
typedef struct SfdSj_x0017C368 SfdSj_x0017C368;
typedef struct SfdSjChunk_x0017C368 {
    char *data;
    int len;
} SfdSjChunk_x0017C368;
typedef struct SfdSjVtbl_x0017C368 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017C368 *sj);
    int (*getUuid)(SfdSj_x0017C368 *sj);
    void (*reset)(SfdSj_x0017C368 *sj);
    void (*getChunk)(SfdSj_x0017C368 *sj, int id, int n, SfdSjChunk_x0017C368 *ck);
    void (*ungetChunk)(SfdSj_x0017C368 *sj, int id, SfdSjChunk_x0017C368 *ck);
    void (*putChunk)(SfdSj_x0017C368 *sj, int id, SfdSjChunk_x0017C368 *ck);
    int (*getNumData)(SfdSj_x0017C368 *sj, int id);
} SfdSjVtbl_x0017C368;
struct SfdSj_x0017C368 {
    SfdSjVtbl_x0017C368 *vtbl;
};
SfdSj_x0017C368 *SJMEM_Create_x0017C368(char *buf, int bsize) __asm__("func_0016DBE0");
struct SfdSj_x0017C368;
typedef struct M2vErrInf_x0017C368 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017C368;
typedef struct Mpeg2Ext_x0017C368 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017C368;
typedef enum M2vFrameRate_x0017C368 {
    M2V_FRAME_RATE_FORBIDDEN_x0017C368 = 0
} M2vFrameRate_x0017C368;
typedef enum M2vPicType_x0017C368 {
    M2V_PICTYPE_I_x0017C368 = 1,
    M2V_PICTYPE_P_x0017C368 = 2,
    M2V_PICTYPE_B_x0017C368 = 3,
    M2V_PICTYPE_D_x0017C368 = 4
} M2vPicType_x0017C368;
typedef enum M2vPicStruct_x0017C368 {
    M2V_PICSTRUCT_TOP_FIELD_x0017C368 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017C368 = 2,
    M2V_PICSTRUCT_FRAME_x0017C368 = 3
} M2vPicStruct_x0017C368;
typedef enum M2vPicAtrF64_x0017C368 {
    M2V_PICATR_F64_0_x0017C368 = 0
} M2vPicAtrF64_x0017C368;
typedef struct M2vPicAtr_x0017C368 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017C368 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017C368 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017C368 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017C368 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017C368;
typedef void (*M2vUsrDatFn_x0017C368)(void *obj, int level);
typedef struct M2vUsrSj_x0017C368 {
    struct SfdSj_x0017C368 *sj;
    M2vUsrDatFn_x0017C368 fn;
    void *obj;
} M2vUsrSj_x0017C368;
typedef struct M2vPicUsr_x0017C368 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017C368;
typedef void (*M2vCondFn_x0017C368)();
typedef struct M2vObj_x0017C368 {
    int stat;
    M2vErrInf_x0017C368 err;
    M2vCondFn_x0017C368 cond[16];
    M2vPicAtr_x0017C368 picatr;
    char pad216[64];
    M2vUsrSj_x0017C368 usrsj[4];
    M2vPicUsr_x0017C368 picusr;
    char pad340[12];
    Mpeg2Ext_x0017C368 ext;
    char pad1656[8];
} M2vObj_x0017C368;
extern void M2V_SetErrFunc_x0017C368(M2vObj_x0017C368 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017C368 {
    MPV_UDLVL_SEQ_x0017C368 = 1,
    MPV_UDLVL_GOP_x0017C368 = 2,
    MPV_UDLVL_PIC_x0017C368 = 3
} MpvUdLevel_x0017C368;
typedef struct MpvSeqInf_x0017C368 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017C368;
typedef struct MpvMotionRange_x0017C368 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017C368;
typedef struct MpvErrObj_x0017C368 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017C368;
typedef struct MpvHn_x0017C368 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017C368 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017C368 picInf;
    MpvErrObj_x0017C368 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017C368 fwd;
    char pad764[20];
    MpvMotionRange_x0017C368 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017C368 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017C368 *lower;
    MpvUdLevel_x0017C368 usrDatLevel;
    M2vUsrSj_x0017C368 bufEnt[4];
    M2vPicUsr_x0017C368 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017C368;
struct SfdFrmPara_x0017C368;
int MPV_DecPicSj_x0017C368(MpvHn_x0017C368 *mpv, SfdSj_x0017C368 *sj, struct SfdFrmPara_x0017C368 *para) __asm__("func_0017C4D0");
extern void mpvhook_SetErrFunc_x0017C368(M2vObj_x0017C368 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
int MPV_DecPicSj_x0017C368(MpvHn_x0017C368 *mpv, SfdSj_x0017C368 *sj, struct SfdFrmPara_x0017C368 *para) __asm__("func_0017C4D0");
int func_0017C368_x0017C368(MpvHn_x0017C368 *mpv, SfdSjChunk_x0017C368 *buf, int *used, struct SfdFrmPara_x0017C368 *para) __asm__("func_0017C368");
/* MPV_DecodeFrm: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvapi.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017C368_x0017C368(MpvHn_x0017C368 *mpv, SfdSjChunk_x0017C368 *buf, int *used, struct SfdFrmPara_x0017C368 *para) {
    SfdSj_x0017C368 *sj = SJMEM_Create_x0017C368(buf->data, buf->len);
    int result;
    if (sj == 0) {
        return -1;
    }
    result = MPV_DecPicSj_x0017C368(mpv, sj, para);
    *used = buf->len - sj->vtbl->getNumData(sj, 1);
    sj->vtbl->destroy(sj);
    return result;
}
typedef struct SfdSj_x0017C418 SfdSj_x0017C418;
typedef struct SfdSjChunk_x0017C418 {
    char *data;
    int len;
} SfdSjChunk_x0017C418;
typedef struct SfdSjVtbl_x0017C418 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017C418 *sj);
    int (*getUuid)(SfdSj_x0017C418 *sj);
    void (*reset)(SfdSj_x0017C418 *sj);
    void (*getChunk)(SfdSj_x0017C418 *sj, int id, int n, SfdSjChunk_x0017C418 *ck);
    void (*ungetChunk)(SfdSj_x0017C418 *sj, int id, SfdSjChunk_x0017C418 *ck);
    void (*putChunk)(SfdSj_x0017C418 *sj, int id, SfdSjChunk_x0017C418 *ck);
    int (*getNumData)(SfdSj_x0017C418 *sj, int id);
} SfdSjVtbl_x0017C418;
struct SfdSj_x0017C418 {
    SfdSjVtbl_x0017C418 *vtbl;
};
struct SfdSj_x0017C418;
typedef struct M2vErrInf_x0017C418 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017C418;
typedef struct Mpeg2Ext_x0017C418 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017C418;
typedef enum M2vFrameRate_x0017C418 {
    M2V_FRAME_RATE_FORBIDDEN_x0017C418 = 0
} M2vFrameRate_x0017C418;
typedef enum M2vPicType_x0017C418 {
    M2V_PICTYPE_I_x0017C418 = 1,
    M2V_PICTYPE_P_x0017C418 = 2,
    M2V_PICTYPE_B_x0017C418 = 3,
    M2V_PICTYPE_D_x0017C418 = 4
} M2vPicType_x0017C418;
typedef enum M2vPicStruct_x0017C418 {
    M2V_PICSTRUCT_TOP_FIELD_x0017C418 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017C418 = 2,
    M2V_PICSTRUCT_FRAME_x0017C418 = 3
} M2vPicStruct_x0017C418;
typedef enum M2vPicAtrF64_x0017C418 {
    M2V_PICATR_F64_0_x0017C418 = 0
} M2vPicAtrF64_x0017C418;
typedef struct M2vPicAtr_x0017C418 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017C418 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017C418 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017C418 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017C418 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017C418;
typedef void (*M2vUsrDatFn_x0017C418)(void *obj, int level);
typedef struct M2vUsrSj_x0017C418 {
    struct SfdSj_x0017C418 *sj;
    M2vUsrDatFn_x0017C418 fn;
    void *obj;
} M2vUsrSj_x0017C418;
typedef struct M2vPicUsr_x0017C418 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017C418;
typedef void (*M2vCondFn_x0017C418)();
typedef struct M2vObj_x0017C418 {
    int stat;
    M2vErrInf_x0017C418 err;
    M2vCondFn_x0017C418 cond[16];
    M2vPicAtr_x0017C418 picatr;
    char pad216[64];
    M2vUsrSj_x0017C418 usrsj[4];
    M2vPicUsr_x0017C418 picusr;
    char pad340[12];
    Mpeg2Ext_x0017C418 ext;
    char pad1656[8];
} M2vObj_x0017C418;
extern void M2V_SetErrFunc_x0017C418(M2vObj_x0017C418 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017C418 {
    MPV_UDLVL_SEQ_x0017C418 = 1,
    MPV_UDLVL_GOP_x0017C418 = 2,
    MPV_UDLVL_PIC_x0017C418 = 3
} MpvUdLevel_x0017C418;
typedef struct MpvSeqInf_x0017C418 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017C418;
typedef struct MpvMotionRange_x0017C418 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017C418;
typedef struct MpvErrObj_x0017C418 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017C418;
typedef struct MpvHn_x0017C418 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017C418 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017C418 picInf;
    MpvErrObj_x0017C418 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017C418 fwd;
    char pad764[20];
    MpvMotionRange_x0017C418 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017C418 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017C418 *lower;
    MpvUdLevel_x0017C418 usrDatLevel;
    M2vUsrSj_x0017C418 bufEnt[4];
    M2vPicUsr_x0017C418 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017C418;
int MPVLIB_CheckHn_x0017C418(MpvHn_x0017C418 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017C418(MpvHn_x0017C418 *mpv, int code) __asm__("func_0017C2E0");
char *MPV_SearchDelim_x0017C418(char *buf, int len, int mask) __asm__("func_0017B5B8");
extern void mpvhook_SetErrFunc_x0017C418(M2vObj_x0017C418 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
int mpv_ReportError_x0017C418(MpvHn_x0017C418 *mpv, int code) __asm__("func_0017C2E0");
int func_0017C418_x0017C418(MpvHn_x0017C418 *mpv, SfdSjChunk_x0017C418 *buf, int *ofst) __asm__("func_0017C418");
/* MPV_SkipFrm: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvapi.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017C418_x0017C418(MpvHn_x0017C418 *mpv, SfdSjChunk_x0017C418 *buf, int *ofst) {
    char *data;
    int len;
    char *hit;
    int code;
    if (MPVLIB_CheckHn_x0017C418(mpv) != 0) {
        return mpv_ReportError_x0017C418(0, 0xFF03020A);
    }
    data = buf->data;
    len = buf->len;
    hit = MPV_SearchDelim_x0017C418(data, len, 0xCC);
    code = 0xFF030305;
    if (hit == 0) {
        *ofst = len;
    } else {
        *ofst = hit - data;
        code = 0;
    }
    return mpv_ReportError_x0017C418(mpv, code);
}
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
typedef struct SfdSj_x0017C590 SfdSj_x0017C590;
typedef struct SfdSjChunk_x0017C590 {
    char *data;
    int len;
} SfdSjChunk_x0017C590;
typedef struct SfdSjVtbl_x0017C590 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017C590 *sj);
    int (*getUuid)(SfdSj_x0017C590 *sj);
    void (*reset)(SfdSj_x0017C590 *sj);
    void (*getChunk)(SfdSj_x0017C590 *sj, int id, int n, SfdSjChunk_x0017C590 *ck);
    void (*ungetChunk)(SfdSj_x0017C590 *sj, int id, SfdSjChunk_x0017C590 *ck);
    void (*putChunk)(SfdSj_x0017C590 *sj, int id, SfdSjChunk_x0017C590 *ck);
    int (*getNumData)(SfdSj_x0017C590 *sj, int id);
} SfdSjVtbl_x0017C590;
struct SfdSj_x0017C590 {
    SfdSjVtbl_x0017C590 *vtbl;
};
struct SfdSj_x0017C590;
typedef struct M2vErrInf_x0017C590 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017C590;
typedef struct Mpeg2Ext_x0017C590 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017C590;
typedef enum M2vFrameRate_x0017C590 {
    M2V_FRAME_RATE_FORBIDDEN_x0017C590 = 0
} M2vFrameRate_x0017C590;
typedef enum M2vPicType_x0017C590 {
    M2V_PICTYPE_I_x0017C590 = 1,
    M2V_PICTYPE_P_x0017C590 = 2,
    M2V_PICTYPE_B_x0017C590 = 3,
    M2V_PICTYPE_D_x0017C590 = 4
} M2vPicType_x0017C590;
typedef enum M2vPicStruct_x0017C590 {
    M2V_PICSTRUCT_TOP_FIELD_x0017C590 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017C590 = 2,
    M2V_PICSTRUCT_FRAME_x0017C590 = 3
} M2vPicStruct_x0017C590;
typedef enum M2vPicAtrF64_x0017C590 {
    M2V_PICATR_F64_0_x0017C590 = 0
} M2vPicAtrF64_x0017C590;
typedef struct M2vPicAtr_x0017C590 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017C590 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017C590 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017C590 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017C590 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017C590;
typedef void (*M2vUsrDatFn_x0017C590)(void *obj, int level);
typedef struct M2vUsrSj_x0017C590 {
    struct SfdSj_x0017C590 *sj;
    M2vUsrDatFn_x0017C590 fn;
    void *obj;
} M2vUsrSj_x0017C590;
typedef struct M2vPicUsr_x0017C590 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017C590;
typedef void (*M2vCondFn_x0017C590)();
typedef struct M2vObj_x0017C590 {
    int stat;
    M2vErrInf_x0017C590 err;
    M2vCondFn_x0017C590 cond[16];
    M2vPicAtr_x0017C590 picatr;
    char pad216[64];
    M2vUsrSj_x0017C590 usrsj[4];
    M2vPicUsr_x0017C590 picusr;
    char pad340[12];
    Mpeg2Ext_x0017C590 ext;
    char pad1656[8];
} M2vObj_x0017C590;
extern void M2V_SetErrFunc_x0017C590(M2vObj_x0017C590 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017C590 {
    MPV_UDLVL_SEQ_x0017C590 = 1,
    MPV_UDLVL_GOP_x0017C590 = 2,
    MPV_UDLVL_PIC_x0017C590 = 3
} MpvUdLevel_x0017C590;
typedef struct MpvSeqInf_x0017C590 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017C590;
typedef struct MpvMotionRange_x0017C590 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017C590;
typedef struct MpvErrObj_x0017C590 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017C590;
typedef struct MpvHn_x0017C590 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017C590 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017C590 picInf;
    MpvErrObj_x0017C590 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017C590 fwd;
    char pad764[20];
    MpvMotionRange_x0017C590 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017C590 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017C590 *lower;
    MpvUdLevel_x0017C590 usrDatLevel;
    M2vUsrSj_x0017C590 bufEnt[4];
    M2vPicUsr_x0017C590 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017C590;
int MPVLIB_CheckHn_x0017C590(MpvHn_x0017C590 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017C590(MpvHn_x0017C590 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017C590(M2vObj_x0017C590 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
int mpv_ReportError_x0017C590(MpvHn_x0017C590 *mpv, int code) __asm__("func_0017C2E0");
int func_0017C590_x0017C590(MpvHn_x0017C590 *mpv, M2vPicAtr_x0017C590 *out) __asm__("func_0017C590");
/* MPV_GetPicInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvapi.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017C590_x0017C590(MpvHn_x0017C590 *mpv, M2vPicAtr_x0017C590 *out) {
    if (MPVLIB_CheckHn_x0017C590(mpv) != 0)
        return mpv_ReportError_x0017C590(0, 0xFF03020C);
    *out = mpv->picInf;
    return 0;
}
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
typedef struct SfdSj_x0017C6F8 SfdSj_x0017C6F8;
typedef struct SfdSjChunk_x0017C6F8 {
    char *data;
    int len;
} SfdSjChunk_x0017C6F8;
typedef struct SfdSjVtbl_x0017C6F8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017C6F8 *sj);
    int (*getUuid)(SfdSj_x0017C6F8 *sj);
    void (*reset)(SfdSj_x0017C6F8 *sj);
    void (*getChunk)(SfdSj_x0017C6F8 *sj, int id, int n, SfdSjChunk_x0017C6F8 *ck);
    void (*ungetChunk)(SfdSj_x0017C6F8 *sj, int id, SfdSjChunk_x0017C6F8 *ck);
    void (*putChunk)(SfdSj_x0017C6F8 *sj, int id, SfdSjChunk_x0017C6F8 *ck);
    int (*getNumData)(SfdSj_x0017C6F8 *sj, int id);
} SfdSjVtbl_x0017C6F8;
struct SfdSj_x0017C6F8 {
    SfdSjVtbl_x0017C6F8 *vtbl;
};
struct SfdSj_x0017C6F8;
typedef struct M2vErrInf_x0017C6F8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017C6F8;
typedef struct Mpeg2Ext_x0017C6F8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017C6F8;
typedef enum M2vFrameRate_x0017C6F8 {
    M2V_FRAME_RATE_FORBIDDEN_x0017C6F8 = 0
} M2vFrameRate_x0017C6F8;
typedef enum M2vPicType_x0017C6F8 {
    M2V_PICTYPE_I_x0017C6F8 = 1,
    M2V_PICTYPE_P_x0017C6F8 = 2,
    M2V_PICTYPE_B_x0017C6F8 = 3,
    M2V_PICTYPE_D_x0017C6F8 = 4
} M2vPicType_x0017C6F8;
typedef enum M2vPicStruct_x0017C6F8 {
    M2V_PICSTRUCT_TOP_FIELD_x0017C6F8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017C6F8 = 2,
    M2V_PICSTRUCT_FRAME_x0017C6F8 = 3
} M2vPicStruct_x0017C6F8;
typedef enum M2vPicAtrF64_x0017C6F8 {
    M2V_PICATR_F64_0_x0017C6F8 = 0
} M2vPicAtrF64_x0017C6F8;
typedef struct M2vPicAtr_x0017C6F8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017C6F8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017C6F8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017C6F8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017C6F8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017C6F8;
typedef void (*M2vUsrDatFn_x0017C6F8)(void *obj, int level);
typedef struct M2vUsrSj_x0017C6F8 {
    struct SfdSj_x0017C6F8 *sj;
    M2vUsrDatFn_x0017C6F8 fn;
    void *obj;
} M2vUsrSj_x0017C6F8;
typedef struct M2vPicUsr_x0017C6F8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017C6F8;
typedef void (*M2vCondFn_x0017C6F8)();
typedef struct M2vObj_x0017C6F8 {
    int stat;
    M2vErrInf_x0017C6F8 err;
    M2vCondFn_x0017C6F8 cond[16];
    M2vPicAtr_x0017C6F8 picatr;
    char pad216[64];
    M2vUsrSj_x0017C6F8 usrsj[4];
    M2vPicUsr_x0017C6F8 picusr;
    char pad340[12];
    Mpeg2Ext_x0017C6F8 ext;
    char pad1656[8];
} M2vObj_x0017C6F8;
extern void M2V_SetErrFunc_x0017C6F8(M2vObj_x0017C6F8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017C6F8 {
    MPV_UDLVL_SEQ_x0017C6F8 = 1,
    MPV_UDLVL_GOP_x0017C6F8 = 2,
    MPV_UDLVL_PIC_x0017C6F8 = 3
} MpvUdLevel_x0017C6F8;
typedef struct MpvSeqInf_x0017C6F8 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017C6F8;
typedef struct MpvMotionRange_x0017C6F8 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017C6F8;
typedef struct MpvErrObj_x0017C6F8 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017C6F8;
typedef struct MpvHn_x0017C6F8 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017C6F8 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017C6F8 picInf;
    MpvErrObj_x0017C6F8 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017C6F8 fwd;
    char pad764[20];
    MpvMotionRange_x0017C6F8 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017C6F8 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017C6F8 *lower;
    MpvUdLevel_x0017C6F8 usrDatLevel;
    M2vUsrSj_x0017C6F8 bufEnt[4];
    M2vPicUsr_x0017C6F8 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017C6F8;
int MPVLIB_CheckHn_x0017C6F8(MpvHn_x0017C6F8 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017C6F8(MpvHn_x0017C6F8 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017C6F8(M2vObj_x0017C6F8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
int mpv_ReportError_x0017C6F8(MpvHn_x0017C6F8 *mpv, int code) __asm__("func_0017C2E0");
int func_0017C6F8_x0017C6F8(MpvHn_x0017C6F8 *mpv, int *size, int *delay, int *bytes) __asm__("func_0017C6F8");
/* MPV_GetVbvBufSiz: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvapi.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017C6F8_x0017C6F8(MpvHn_x0017C6F8 *mpv, int *size, int *delay, int *bytes) {
    if (MPVLIB_CheckHn_x0017C6F8(mpv) != 0) {
        return mpv_ReportError_x0017C6F8(0, 0xFF03020F);
    }
    *size = mpv->vbvBufferSize << 11;
    *delay = mpv->vbvDelay;
    if (mpv->bitRate == 0x3FFFF) {
        *bytes = -1;
    } else {
        *bytes = mpv->vbvDelay * mpv->bitRate / 1800;
    }
    return 0;
}
typedef struct SfdSj_x0017C7C0 SfdSj_x0017C7C0;
typedef struct SfdSjChunk_x0017C7C0 {
    char *data;
    int len;
} SfdSjChunk_x0017C7C0;
typedef struct SfdSjVtbl_x0017C7C0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017C7C0 *sj);
    int (*getUuid)(SfdSj_x0017C7C0 *sj);
    void (*reset)(SfdSj_x0017C7C0 *sj);
    void (*getChunk)(SfdSj_x0017C7C0 *sj, int id, int n, SfdSjChunk_x0017C7C0 *ck);
    void (*ungetChunk)(SfdSj_x0017C7C0 *sj, int id, SfdSjChunk_x0017C7C0 *ck);
    void (*putChunk)(SfdSj_x0017C7C0 *sj, int id, SfdSjChunk_x0017C7C0 *ck);
    int (*getNumData)(SfdSj_x0017C7C0 *sj, int id);
} SfdSjVtbl_x0017C7C0;
struct SfdSj_x0017C7C0 {
    SfdSjVtbl_x0017C7C0 *vtbl;
};
struct SfdSj_x0017C7C0;
typedef struct M2vErrInf_x0017C7C0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017C7C0;
typedef struct Mpeg2Ext_x0017C7C0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017C7C0;
typedef enum M2vFrameRate_x0017C7C0 {
    M2V_FRAME_RATE_FORBIDDEN_x0017C7C0 = 0
} M2vFrameRate_x0017C7C0;
typedef enum M2vPicType_x0017C7C0 {
    M2V_PICTYPE_I_x0017C7C0 = 1,
    M2V_PICTYPE_P_x0017C7C0 = 2,
    M2V_PICTYPE_B_x0017C7C0 = 3,
    M2V_PICTYPE_D_x0017C7C0 = 4
} M2vPicType_x0017C7C0;
typedef enum M2vPicStruct_x0017C7C0 {
    M2V_PICSTRUCT_TOP_FIELD_x0017C7C0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017C7C0 = 2,
    M2V_PICSTRUCT_FRAME_x0017C7C0 = 3
} M2vPicStruct_x0017C7C0;
typedef enum M2vPicAtrF64_x0017C7C0 {
    M2V_PICATR_F64_0_x0017C7C0 = 0
} M2vPicAtrF64_x0017C7C0;
typedef struct M2vPicAtr_x0017C7C0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017C7C0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017C7C0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017C7C0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017C7C0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017C7C0;
typedef void (*M2vUsrDatFn_x0017C7C0)(void *obj, int level);
typedef struct M2vUsrSj_x0017C7C0 {
    struct SfdSj_x0017C7C0 *sj;
    M2vUsrDatFn_x0017C7C0 fn;
    void *obj;
} M2vUsrSj_x0017C7C0;
typedef struct M2vPicUsr_x0017C7C0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017C7C0;
typedef void (*M2vCondFn_x0017C7C0)();
typedef struct M2vObj_x0017C7C0 {
    int stat;
    M2vErrInf_x0017C7C0 err;
    M2vCondFn_x0017C7C0 cond[16];
    M2vPicAtr_x0017C7C0 picatr;
    char pad216[64];
    M2vUsrSj_x0017C7C0 usrsj[4];
    M2vPicUsr_x0017C7C0 picusr;
    char pad340[12];
    Mpeg2Ext_x0017C7C0 ext;
    char pad1656[8];
} M2vObj_x0017C7C0;
extern void M2V_SetErrFunc_x0017C7C0(M2vObj_x0017C7C0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017C7C0 {
    MPV_UDLVL_SEQ_x0017C7C0 = 1,
    MPV_UDLVL_GOP_x0017C7C0 = 2,
    MPV_UDLVL_PIC_x0017C7C0 = 3
} MpvUdLevel_x0017C7C0;
typedef struct MpvSeqInf_x0017C7C0 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017C7C0;
typedef struct MpvMotionRange_x0017C7C0 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017C7C0;
typedef struct MpvErrObj_x0017C7C0 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017C7C0;
typedef struct MpvHn_x0017C7C0 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017C7C0 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017C7C0 picInf;
    MpvErrObj_x0017C7C0 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017C7C0 fwd;
    char pad764[20];
    MpvMotionRange_x0017C7C0 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017C7C0 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017C7C0 *lower;
    MpvUdLevel_x0017C7C0 usrDatLevel;
    M2vUsrSj_x0017C7C0 bufEnt[4];
    M2vPicUsr_x0017C7C0 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017C7C0;
int MPVLIB_CheckHn_x0017C7C0(MpvHn_x0017C7C0 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017C7C0(MpvHn_x0017C7C0 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017C7C0(M2vObj_x0017C7C0 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
int mpv_ReportError_x0017C7C0(MpvHn_x0017C7C0 *mpv, int code) __asm__("func_0017C2E0");
int func_0017C7C0_x0017C7C0(MpvHn_x0017C7C0 *mpv, int *inf3, int *inf4) __asm__("func_0017C7C0");
/* MPV_GetLinkFlg: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvapi.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017C7C0_x0017C7C0(MpvHn_x0017C7C0 *mpv, int *inf3, int *inf4) {
    if (MPVLIB_CheckHn_x0017C7C0(mpv) != 0) {
        return mpv_ReportError_x0017C7C0(0, 0xFF03020E);
    }
    *inf3 = mpv->closedGop;
    *inf4 = mpv->brokenLink;
    return 0;
}
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
typedef struct SfdSj_x0017C8A8 SfdSj_x0017C8A8;
typedef struct SfdSjChunk_x0017C8A8 { char *data; int len; } SfdSjChunk_x0017C8A8;
typedef struct SfdSjVtbl_x0017C8A8 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x0017C8A8 *sj); int (*getUuid)(SfdSj_x0017C8A8 *sj); void (*reset)(SfdSj_x0017C8A8 *sj); void (*getChunk)(SfdSj_x0017C8A8 *sj, int id, int n, SfdSjChunk_x0017C8A8 *ck); void (*ungetChunk)(SfdSj_x0017C8A8 *sj, int id, SfdSjChunk_x0017C8A8 *ck); void (*putChunk)(SfdSj_x0017C8A8 *sj, int id, SfdSjChunk_x0017C8A8 *ck); int (*getNumData)(SfdSj_x0017C8A8 *sj, int id); } SfdSjVtbl_x0017C8A8;
struct SfdSj_x0017C8A8 { SfdSjVtbl_x0017C8A8 *vtbl; };
typedef struct SfdBufStat_x0017C8A8 { SfdSjChunk_x0017C8A8 ck0; SfdSjChunk_x0017C8A8 ck1; char *tailData; int tailLen; int tailFlag; int pad28; } SfdBufStat_x0017C8A8;
enum SjLine_x0017C8A8 { SJ_LIN_FREE_x0017C8A8 = 0, SJ_LIN_DATA_x0017C8A8 = 1 };
typedef void (*SjErrFunc_x0017C8A8)(void *obj, int code);
typedef struct SjxObj_x0017C8A8 SjxObj_x0017C8A8;
void SJ_SplitChunk_x0017C8A8(SfdSjChunk_x0017C8A8 *ck, int nbyte, SfdSjChunk_x0017C8A8 *head, SfdSjChunk_x0017C8A8 *rest) __asm__("SJ_SplitChunk");
void SJ_MakeTag_x0017C8A8(SfdSjChunk_x0017C8A8 *tag, const char *id) __asm__("SJ_MakeTag");
void SJ_GetTagContent_x0017C8A8(char *tag, SfdSjChunk_x0017C8A8 *content) __asm__("SJ_GetTagContent");
char *SJ_SearchTag_x0017C8A8(SfdSjChunk_x0017C8A8 *ck, const char *id, const char *endid, SfdSjChunk_x0017C8A8 *content) __asm__("SJ_SearchTag");
void SJCRS_Init_x0017C8A8(void) __asm__("SJCRS_Init");
void SJCRS_Finish_x0017C8A8(void) __asm__("SJCRS_Finish");
void SJCRS_BeginSvr_x0017C8A8(void) __asm__("SJCRS_BeginSvr");
void SJCRS_EndSvr_x0017C8A8(void) __asm__("SJCRS_EndSvr");
void SJCRS_Lock_x0017C8A8(void) __asm__("SJCRS_Lock");
void SJCRS_Unlock_x0017C8A8(void) __asm__("SJCRS_Unlock");
void SJERR_CallErr_x0017C8A8(const char *message) __asm__("SJERR_CallErr");
void SJMEM_Init_x0017C8A8(void) __asm__("SJMEM_Init");
void SJMEM_Finish_x0017C8A8(void) __asm__("SJMEM_Finish");
SfdSj_x0017C8A8 *SJMEM_Create_x0017C8A8(char *buf, int bsize) __asm__("SJMEM_Create");
char *SJMEM_GetBufPtr_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("SJMEM_GetBufPtr");
int SJMEM_GetBufSize_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("SJMEM_GetBufSize");
void SJRBF_Init_x0017C8A8(void) __asm__("SJRBF_Init");
void SJRBF_Finish_x0017C8A8(void) __asm__("SJRBF_Finish");
SfdSj_x0017C8A8 *SJRBF_Create_x0017C8A8(char *buf, int bsize, int xsize) __asm__("SJRBF_Create");
char *SJRBF_GetBufPtr_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("SJRBF_GetBufPtr");
int SJRBF_GetBufSize_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("SJRBF_GetBufSize");
int SJRBF_GetXtrSize_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("SJRBF_GetXtrSize");
void SJRBF_SetFlowCnt_x0017C8A8(SfdSj_x0017C8A8 *sj, int line, int flow, int cnt) __asm__("SJRBF_SetFlowCnt");
int SJRBF_GetFlowCnt_x0017C8A8(SfdSj_x0017C8A8 *sj, int line, int flow) __asm__("SJRBF_GetFlowCnt");
void SJUNI_Init_x0017C8A8(void) __asm__("SJUNI_Init");
void SJUNI_Finish_x0017C8A8(void) __asm__("SJUNI_Finish");
SfdSj_x0017C8A8 *SJUNI_Create_x0017C8A8(int mode, char *work, int wksize) __asm__("SJUNI_Create");
void *SJRBF_CreateRmt_x0017C8A8(int buf, int bsize, int xsize) __asm__("SJRBF_CreateRmt");
void *SJMEM_CreateRmt_x0017C8A8(int buf, int bsize) __asm__("SJMEM_CreateRmt");
void *SJUNI_CreateRmt_x0017C8A8(int mode, int work, int wksize) __asm__("SJUNI_CreateRmt");
void SJRMT_Destroy_x0017C8A8(void *sjrmt) __asm__("SJRMT_Destroy");
int *SJRMT_GetUuid_x0017C8A8(void *sjrmt) __asm__("SJRMT_GetUuid");
void SJRMT_Reset_x0017C8A8(void *sjrmt) __asm__("SJRMT_Reset");
void SJRMT_GetChunk_x0017C8A8(void *sjrmt, int line, int nbyte, SfdSjChunk_x0017C8A8 *ck) __asm__("SJRMT_GetChunk");
void SJRMT_UngetChunk_x0017C8A8(void *sjrmt, int line, SfdSjChunk_x0017C8A8 *ck) __asm__("SJRMT_UngetChunk");
int SJRMT_PutChunk_x0017C8A8(void *sjrmt, int line, SfdSjChunk_x0017C8A8 *ck) __asm__("SJRMT_PutChunk");
int SJRMT_GetNumData_x0017C8A8(void *sjrmt, int line) __asm__("SJRMT_GetNumData");
int SJRMT_IsGetChunk_x0017C8A8(void *sjrmt, int line, int nbyte, int *rbyte) __asm__("SJRMT_IsGetChunk");
void SJRMT_Init_x0017C8A8(void) __asm__("SJRMT_Init");
void SJRMT_Finish_x0017C8A8(void) __asm__("SJRMT_Finish");
void SJX_ExecServer_x0017C8A8(void) __asm__("SJX_ExecServer");
void SJX_Init_x0017C8A8(void) __asm__("SJX_Init");
void SJX_Finish_x0017C8A8(void) __asm__("SJX_Finish");
SjxObj_x0017C8A8 *SJX_Create_x0017C8A8(SfdSj_x0017C8A8 *sj, void *sjrmt, int line) __asm__("SJX_Create");
void SJX_Destroy_x0017C8A8(SjxObj_x0017C8A8 *sjx) __asm__("SJX_Destroy");
void SJX_Reset_x0017C8A8(SjxObj_x0017C8A8 *sjx) __asm__("SJX_Reset");
struct SfdSj_x0017C8A8;
typedef struct M2vErrInf_x0017C8A8 { int (*func)(void *obj); void *obj; int code; int reserved[2]; } M2vErrInf_x0017C8A8;
typedef struct Mpeg2Ext_x0017C8A8 { int sequence_header_code; int horizontal_size_value; int vertical_size_value; int aspect_ratio_information; int frame_rate_code; int bit_rate_value; int marker_bit; int vbv_buffer_size_value; int constrained_parameters_flag; int load_intra_quantiser_matrix; int load_non_intra_quantiser_matrix; int sec_start_code; int udsc_start_code; int start_code; int number_of_frame_centre_offsets; char pad3[4]; int extension_id; int profile_and_level_indication; int progressive_sequence; int chroma_format; int horizontal_size_extension; int vertical_size_extension; int bit_rate_extension; int vbv_buffer_size_extension; int low_delay; int frame_rate_extension_n; int frame_rate_extension_d; int video_format; int colour_description; int colour_primaries; int transfer_characteristics; int matrix_coefficients; int display_horizontal_size; int display_vertical_size; int scalable_mode; int layer_id; int lower_layer_prediction_horizontal_size; int lower_layer_prediction_vertical_size; int horizontal_subsampling_factor_m; int horizontal_subsampling_factor_n; int vertical_subsampling_factor_m; int vertical_subsampling_factor_n; int picture_mux_enable; int mux_to_progressive_sequence; int picture_mux_order; int picture_mux_factor; int group_start_code; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int closed_gop; int broken_link; int picture_start_code; int temporal_reference; int picture_coding_type; int vbv_delay; int full_pel_forward_vector; int forward_f_code; int full_pel_backward_vector; int backward_f_code; int extra_bit_picture; int extra_information_picture; char pad4b[4]; int f_code00; int f_code01; int f_code10; int f_code11; int intra_dc_precision; int picture_structure; int top_field_first; int frame_pred_frame_dct; int concealment_motion_vectors; int q_scale_type; int intra_vlc_format; int alternate_scan; int repeat_first_field; int chroma_420_type; int progressive_frame; int composite_display_flag; int v_axis; int field_sequence; int sub_carrier; int burst_amplitude; int sub_carrier_phase; int load_chroma_intra_quantiser_matrix; int load_chroma_non_intra_quantiser_matrix; int frame_centre_horizontal_offset[3]; int frame_centre_vertical_offset[3]; int reference_select_code; int forward_temporal_reference; int backward_temporal_reference; int lower_layer_temporal_reference; int lower_layer_horizontal_offset; int lower_layer_vertical_offset; int spatial_temporal_weight_code_table_index; int lower_layer_progressive_frame; int lower_layer_deinterlaced_field_select; int copyright_flag; int copyright_identifier; int original_or_copy; int copyright_reserved; int copyright_number_1; int copyright_number_2; int copyright_number_3; char pad5[268]; int horizontal_size; int vertical_size; int mb_width; int mb_height; int bit_rate; int vbv_buffer_size; char pad6[44]; int ext_state; int expected_ext_id; int scalable_seen; int spatial_scalable_seen; int blocks_per_macroblock; char pad796[4]; int dc_dct_pred_reset; char pad804[12]; int intra_dc_mult; char pad820[128]; int padded_width; int padded_height; int half_width; int half_height; int second_field; int field_parity; char pad8[164]; int rsv1[5]; int header_level; int f1160; int rsv2; int shc_count; int sec_count; int udsc_count; int call_count; int gsc_count; int psc_count; int picture_count[4]; char pad10[64]; int error_count; int warning_count; char pad1280[12]; int rsv3; char pad1296[8]; } Mpeg2Ext_x0017C8A8;
typedef enum M2vFrameRate_x0017C8A8 { M2V_FRAME_RATE_FORBIDDEN_x0017C8A8 = 0 } M2vFrameRate_x0017C8A8;
typedef enum M2vPicType_x0017C8A8 { M2V_PICTYPE_I_x0017C8A8 = 1, M2V_PICTYPE_P_x0017C8A8 = 2, M2V_PICTYPE_B_x0017C8A8 = 3, M2V_PICTYPE_D_x0017C8A8 = 4 } M2vPicType_x0017C8A8;
typedef enum M2vPicStruct_x0017C8A8 { M2V_PICSTRUCT_TOP_FIELD_x0017C8A8 = 1, M2V_PICSTRUCT_BOTTOM_FIELD_x0017C8A8 = 2, M2V_PICSTRUCT_FRAME_x0017C8A8 = 3 } M2vPicStruct_x0017C8A8;
typedef enum M2vChromaPos_x0017C8A8 { M2V_CHROMAPOS_COSITED_x0017C8A8 = 0, M2V_CHROMAPOS_CENTRE_x0017C8A8 = 1 } M2vChromaPos_x0017C8A8;
typedef struct M2vPicAtr_x0017C8A8 { int horizontal_size; int vertical_size; int mb_width; int mb_height; M2vFrameRate_x0017C8A8 frame_rate_code; int temporal_reference; M2vPicType_x0017C8A8 picture_coding_type; int drop_frame_flag; int time_code_hours; int time_code_minutes; int time_code_seconds; int time_code_pictures; int gsc_count; int shc_count; M2vPicStruct_x0017C8A8 picture_structure; int chroma_format; M2vChromaPos_x0017C8A8 chroma_pos_h; int chroma_pos_v; int bit_rate; int vbv_buffer_size; unsigned short display_horizontal_size; unsigned short display_vertical_size; unsigned char field_count; unsigned char progressive_frame; unsigned char top_field_first; signed char repeat_first_field; signed char second_field; unsigned char aspect_ratio_information; unsigned char constrained_parameters_flag; unsigned char frame_rate_extension_n; unsigned char frame_rate_extension_d; unsigned char profile_and_level_indication; unsigned char progressive_sequence; unsigned char low_delay; unsigned char video_format; unsigned char colour_description; unsigned char colour_primaries; unsigned char transfer_characteristics; unsigned char matrix_coefficients; char pad101[27]; } M2vPicAtr_x0017C8A8;
typedef void (*M2vUsrDatFn_x0017C8A8)(void *obj, int level);
typedef struct M2vUsrSj_x0017C8A8 { struct SfdSj_x0017C8A8 *sj; M2vUsrDatFn_x0017C8A8 fn; void *obj; } M2vUsrSj_x0017C8A8;
typedef struct M2vPicUsr_x0017C8A8 { char *buf; int size; int len; } M2vPicUsr_x0017C8A8;
typedef void (*M2vCondFn_x0017C8A8)();
typedef struct M2vObj_x0017C8A8 { int stat; M2vErrInf_x0017C8A8 err; M2vCondFn_x0017C8A8 cond[16]; M2vPicAtr_x0017C8A8 picatr; char pad216[64]; M2vUsrSj_x0017C8A8 usrsj[4]; M2vPicUsr_x0017C8A8 picusr; char pad340[12]; Mpeg2Ext_x0017C8A8 ext; char pad1656[8]; } M2vObj_x0017C8A8;
extern void calcHvSize_x0017C8A8(Mpeg2Ext_x0017C8A8 *) __asm__("calcHvSize");
extern void calcNumberOfFrameCentreOffsets_x0017C8A8(Mpeg2Ext_x0017C8A8 *) __asm__("calcNumberOfFrameCentreOffsets");
extern void calcPictureCodingExt_x0017C8A8(Mpeg2Ext_x0017C8A8 *) __asm__("calcPictureCodingExt");
extern void calcDarSar_x0017C8A8(Mpeg2Ext_x0017C8A8 *) __asm__("calcDarSar");
extern void resetQuantiserMatrix_x0017C8A8(Mpeg2Ext_x0017C8A8 *) __asm__("resetQuantiserMatrix");
typedef struct M2vLibWork_x0017C8A8 { M2vCondFn_x0017C8A8 cond[16]; int nobj; M2vObj_x0017C8A8 *obj; } M2vLibWork_x0017C8A8;
void M2V_Init_x0017C8A8(int nobj, char *work, unsigned int size) __asm__("M2V_Init");
void M2V_Finish_x0017C8A8(void) __asm__("M2V_Finish");
char *M2V_GetVersionStr_x0017C8A8(void) __asm__("M2V_GetVersionStr");
int M2V_IsDecodable_x0017C8A8(char *buf, int size) __asm__("M2V_IsDecodable");
M2vObj_x0017C8A8 *M2V_Create_x0017C8A8(void) __asm__("M2V_Create");
void M2V_Destroy_x0017C8A8(M2vObj_x0017C8A8 *hn) __asm__("M2V_Destroy");
void M2V_MbCbFn_x0017C8A8(void) __asm__("M2V_MbCbFn");
void M2V_SetCond_x0017C8A8(M2vObj_x0017C8A8 *hn, int no, M2vCondFn_x0017C8A8 fn) __asm__("M2V_SetCond");
int M2VLIB_CheckHn_x0017C8A8(M2vObj_x0017C8A8 *hn) __asm__("M2VLIB_CheckHn");
void M2V_SetUsrSj_x0017C8A8(M2vObj_x0017C8A8 *hn, int no, struct SfdSj_x0017C8A8 *sj, M2vUsrDatFn_x0017C8A8 fn, void *obj) __asm__("M2V_SetUsrSj");
void M2V_SetPicUsrBuf_x0017C8A8(M2vObj_x0017C8A8 *hn, char *buf, int size) __asm__("M2V_SetPicUsrBuf");
void M2V_GetPicUsr_x0017C8A8(M2vObj_x0017C8A8 *hn, char **buf, int *size) __asm__("M2V_GetPicUsr");
void M2VERR_Init_x0017C8A8(void) __asm__("M2VERR_Init");
void M2V_SetErrFunc_x0017C8A8(M2vObj_x0017C8A8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void M2V_GetErrInf_x0017C8A8(M2vObj_x0017C8A8 *hn, M2vErrInf_x0017C8A8 *inf) __asm__("M2V_GetErrInf");
int M2VERR_SetCode_x0017C8A8(M2vObj_x0017C8A8 *hn, int code) __asm__("M2VERR_SetCode");
void M2V_SkipFrm_x0017C8A8(M2vObj_x0017C8A8 *hn, struct SfdSj_x0017C8A8 *sj) __asm__("M2V_SkipFrm");
void M2V_DecodeFrm_x0017C8A8(void) __asm__("M2V_DecodeFrm");
void M2V_GetPicAtr_x0017C8A8(M2vObj_x0017C8A8 *hn, M2vPicAtr_x0017C8A8 *picatr) __asm__("M2V_GetPicAtr");
void M2V_GetBitRate_x0017C8A8(M2vObj_x0017C8A8 *hn, int *bit_rate) __asm__("M2V_GetBitRate");
void M2V_GetVbvBufSiz_x0017C8A8(M2vObj_x0017C8A8 *hn, int *vbv_size, int *vbv_delay, int *reserved) __asm__("M2V_GetVbvBufSiz");
void M2V_GetLinkFlg_x0017C8A8(M2vObj_x0017C8A8 *hn, int *closed_gop, int *broken_link) __asm__("M2V_GetLinkFlg");
void M2VHDEC_Init_x0017C8A8(void) __asm__("M2VHDEC_Init");
void M2VHDEC_InitHn_x0017C8A8(M2vObj_x0017C8A8 *hn) __asm__("M2VHDEC_InitHn");
int M2V_DecodePicAtr_x0017C8A8(M2vObj_x0017C8A8 *hn, struct SfdSj_x0017C8A8 *sj) __asm__("M2V_DecodePicAtr");
typedef enum MpvUdLevel_x0017C8A8 { MPV_UDLVL_SEQ_x0017C8A8 = 1, MPV_UDLVL_GOP_x0017C8A8 = 2, MPV_UDLVL_PIC_x0017C8A8 = 3 } MpvUdLevel_x0017C8A8;
typedef struct MpvSeqInf_x0017C8A8 { char pad0[24]; int width; int height; } MpvSeqInf_x0017C8A8;
typedef struct MpvMotionRange_x0017C8A8 { int fullPel; int rSize; int shift; int f; } MpvMotionRange_x0017C8A8;
typedef struct MpvErrObj_x0017C8A8 { int (*fn)(void *arg); void *arg; int code; int skipReqCnt; int skipPicCnt; } MpvErrObj_x0017C8A8;
typedef struct MpvHn_x0017C8A8 { char pad0[44]; char *mbBuf; char *blkBuf; char *dctBuf; char pad56[8]; unsigned char *clampY; char pad68[52]; MpvSeqInf_x0017C8A8 seq; char pad152[120]; unsigned char *clampC; char pad276[116]; int stat; int rsv; int cond[16]; M2vPicAtr_x0017C8A8 picInf; MpvErrObj_x0017C8A8 err; char pad612[64]; int pelAspectRatio; int bitRate; int vbvBufferSize; int constrainedParams; int closedGop; int brokenLink; int vbvDelay; char pad704[20]; void (*mcFunc[4])(struct MpvHn_x0017C8A8 *mpv); char pad740[8]; MpvMotionRange_x0017C8A8 fwd; char pad764[20]; MpvMotionRange_x0017C8A8 bwd; char pad800[32]; int lastMbAddr; char pad836[20]; int strmType; int stc[3]; char pad872[24]; int skipReq; int skipCnt; SfdSjChunk_x0017C8A8 chunk; char pad912[4]; int idcPrec; char pad920[12]; int maxCount; char pad936[8]; M2vObj_x0017C8A8 *lower; MpvUdLevel_x0017C8A8 usrDatLevel; M2vUsrSj_x0017C8A8 bufEnt[4]; M2vPicUsr_x0017C8A8 picusr; char pad1012[1016 - 1012]; char pad1016[1024 - 1016]; } MpvHn_x0017C8A8;
typedef struct MpvPool_x0017C8A8 { char pad0[4352]; char blk[32]; char mb[64]; char dct[1664]; unsigned char clamp[1024]; } MpvPool_x0017C8A8;
typedef struct MpvLib_x0017C8A8 { int cond[16]; int optionFlag; int initFlag; char pad72[4]; char *tables; MpvPool_x0017C8A8 *pool; int nhn; MpvHn_x0017C8A8 *hn; } MpvLib_x0017C8A8;
typedef struct MpvBuildInf_x0017C8A8 { int magic; int libSize; int hnSize; int poolSize; } MpvBuildInf_x0017C8A8;
extern MpvErrObj_x0017C8A8 mpv_err_global_x0017C8A8 __asm__("mpv_err_global");
int MPV_GoNextDelimSj_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("MPV_GoNextDelimSj");
int MPV_MoveChunk_x0017C8A8(SfdSj_x0017C8A8 *sj, int id, int n) __asm__("MPV_MoveChunk");
int MPV_Init_x0017C8A8(int count, void *work) __asm__("MPV_Init");
void MPV_Finish_x0017C8A8(void) __asm__("MPV_Finish");
MpvHn_x0017C8A8 *MPV_Create_x0017C8A8(void) __asm__("MPV_Create");
int MPV_Destroy_x0017C8A8(MpvHn_x0017C8A8 *hn) __asm__("MPV_Destroy");
int MPV_SetCond_x0017C8A8(MpvHn_x0017C8A8 *hn, int no, int value) __asm__("MPV_SetCond");
int MPV_GetCond_x0017C8A8(MpvHn_x0017C8A8 *hn, int no, int *value) __asm__("MPV_GetCond");
int func_0017EB90_x0017C8A8(MpvHn_x0017C8A8 *hn) __asm__("func_0017EB90");
int func_0017EC60_x0017C8A8(MpvHn_x0017C8A8 *hn, SfdSj_x0017C8A8 *sj) __asm__("func_0017EC60");
void mpv_InitLibErr_x0017C8A8(void) __asm__("mpv_InitLibErr");
void mpv_ResetErr_x0017C8A8(MpvErrObj_x0017C8A8 *err) __asm__("mpv_ResetErr");
int func_0017C2E0_x0017C8A8(MpvHn_x0017C8A8 *mpv, int code) __asm__("func_0017C2E0");
void mpvapi_Init_x0017C8A8(void) __asm__("mpvapi_Init");
struct SfdFrmPara_x0017C8A8;
int MPV_DecPicSj_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj, struct SfdFrmPara_x0017C8A8 *para) __asm__("MPV_DecPicSj");
int MPV_SkipFrmSj_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("MPV_SkipFrmSj");
int MPV_GetPicInf_x0017C8A8(MpvHn_x0017C8A8 *mpv, M2vPicAtr_x0017C8A8 *out) __asm__("MPV_GetPicInf");
int MPV_GetBitRate_x0017C8A8(MpvHn_x0017C8A8 *mpv, int *bitRate) __asm__("MPV_GetBitRate");
void MPV_GetDctCnt_x0017C8A8(MpvHn_x0017C8A8 *hn, int *width, int *height) __asm__("MPV_GetDctCnt");
int MPV_GetVbvBufSiz_x0017C8A8(MpvHn_x0017C8A8 *mpv, int *size, int *delay, int *bytes) __asm__("MPV_GetVbvBufSiz");
int MPV_GetLinkFlg_x0017C8A8(MpvHn_x0017C8A8 *mpv, int *inf3, int *inf4) __asm__("MPV_GetLinkFlg");
void MPV_SetUsrSj_x0017C8A8(MpvHn_x0017C8A8 *mpv, int index, SfdSj_x0017C8A8 *sj, M2vUsrDatFn_x0017C8A8 fn, void *obj) __asm__("MPV_SetUsrSj");
void MPV_SetPicUsrBuf_x0017C8A8(MpvHn_x0017C8A8 *mpv, char *buf, int size) __asm__("MPV_SetPicUsrBuf");
void MPV_GetPicUsr_x0017C8A8(MpvHn_x0017C8A8 *mpv, char **buf, int *len) __asm__("MPV_GetPicUsr");
int func_0017C8A8_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("func_0017C8A8");
int MPV_DecodePicAtr_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSjChunk_x0017C8A8 *buf, int *used) __asm__("MPV_DecodePicAtr");
int MPV_CheckDelim_x0017C8A8(const unsigned char *p) __asm__("MPV_CheckDelim");
char *MPV_SearchDelim_x0017C8A8(char *buf, int len, int mask) __asm__("MPV_SearchDelim");
char *MPV_BsearchDelim_x0017C8A8(char *end, int len, int mask) __asm__("MPV_BsearchDelim");
int MPV_IsEmptyBpic_x0017C8A8(unsigned char *buf, int nbyte, int nmb) __asm__("MPV_IsEmptyBpic");
int MPV_IsEmptyPpic_x0017C8A8(unsigned char *buf, int nbyte, int nmb) __asm__("MPV_IsEmptyPpic");
int mpvhook_IsInstalled_x0017C8A8(void) __asm__("mpvhook_IsInstalled");
void mpvhook_Init_x0017C8A8(int nobj, char *work, unsigned int size) __asm__("mpvhook_Init");
void mpvhook_Finish_x0017C8A8(void) __asm__("mpvhook_Finish");
M2vObj_x0017C8A8 *mpvhook_Create_x0017C8A8(void) __asm__("mpvhook_Create");
void mpvhook_Destroy_x0017C8A8(M2vObj_x0017C8A8 *lower) __asm__("mpvhook_Destroy");
void mpvhook_SetCond_x0017C8A8(M2vObj_x0017C8A8 *lower, int no, M2vCondFn_x0017C8A8 fn) __asm__("mpvhook_SetCond");
void mpvhook_SetUsrSj_x0017C8A8(M2vObj_x0017C8A8 *lower, int index, SfdSj_x0017C8A8 *sj, M2vUsrDatFn_x0017C8A8 fn, void *obj) __asm__("mpvhook_SetUsrSj");
void mpvhook_SetPicUsrBuf_x0017C8A8(M2vObj_x0017C8A8 *lower, char *buf, int size) __asm__("mpvhook_SetPicUsrBuf");
void mpvhook_GetPicUsr_x0017C8A8(M2vObj_x0017C8A8 *lower, char **buf, int *len) __asm__("mpvhook_GetPicUsr");
int mpvhook_DecodePicAtr_x0017C8A8(M2vObj_x0017C8A8 *lower, SfdSj_x0017C8A8 *sj) __asm__("mpvhook_DecodePicAtr");
void mpvhook_GetPicAtr_x0017C8A8(M2vObj_x0017C8A8 *lower, M2vPicAtr_x0017C8A8 *picatr) __asm__("mpvhook_GetPicAtr");
void mpvhook_GetBitRate_x0017C8A8(M2vObj_x0017C8A8 *lower, int *bit_rate) __asm__("mpvhook_GetBitRate");
void mpvhook_GetVbvBufSiz_x0017C8A8(M2vObj_x0017C8A8 *lower, int *vbv_size, int *vbv_delay, int *reserved) __asm__("mpvhook_GetVbvBufSiz");
void mpvhook_GetLinkFlg_x0017C8A8(M2vObj_x0017C8A8 *lower, int *closed_gop, int *broken_link) __asm__("mpvhook_GetLinkFlg");
char *mpvhook_GetVersionStr_x0017C8A8(void) __asm__("mpvhook_GetVersionStr");
int mpvhook_IsDecodable_x0017C8A8(char *buf, int size) __asm__("mpvhook_IsDecodable");
void mpvhook_MbCbFn_x0017C8A8(void) __asm__("mpvhook_MbCbFn");
void mpvhook_SetErrFunc_x0017C8A8(M2vObj_x0017C8A8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void mpvhook_GetErrInf_x0017C8A8(M2vObj_x0017C8A8 *lower, M2vErrInf_x0017C8A8 *inf) __asm__("mpvhook_GetErrInf");
void mpvhook_DecodeFrm_x0017C8A8(void) __asm__("mpvhook_DecodeFrm");
void mpvhook_SkipFrm_x0017C8A8(M2vObj_x0017C8A8 *lower, SfdSj_x0017C8A8 *sj) __asm__("mpvhook_SkipFrm");
void mpv_InstallHooks_x0017C8A8(void) __asm__("mpv_InstallHooks");
typedef unsigned int size_t_x0017C8A8;
typedef int ptrdiff_t_x0017C8A8;
void *memset_x0017C8A8(void *, int, size_t_x0017C8A8) __asm__("memset");
void *memcpy_x0017C8A8(void *, const void *, size_t_x0017C8A8) __asm__("memcpy");
void *memmove_x0017C8A8(void *, const void *, size_t_x0017C8A8) __asm__("memmove");
int memcmp_x0017C8A8(const void *, const void *, size_t_x0017C8A8) __asm__("memcmp");
size_t_x0017C8A8 strlen_x0017C8A8(const char *) __asm__("strlen");
char *strcpy_x0017C8A8(char *, const char *) __asm__("strcpy");
char *strncpy_x0017C8A8(char *, const char *, size_t_x0017C8A8) __asm__("strncpy");
int strcmp_x0017C8A8(const char *, const char *) __asm__("strcmp");
int strncmp_x0017C8A8(const char *, const char *, size_t_x0017C8A8) __asm__("strncmp");
char *strcat_x0017C8A8(char *, const char *) __asm__("strcat");
enum LscStat_x0017C8A8 { LSC_STAT_STOP_x0017C8A8 = 0, LSC_STAT_WAIT_x0017C8A8 = 1, LSC_STAT_EXEC_x0017C8A8 = 2, LSC_STAT_ERROR_x0017C8A8 = 3 };
typedef void (*LscStatFunc_x0017C8A8)(void *obj, void *usr);
typedef void (*LscErrFunc_x0017C8A8)(void *obj, const char *msg);
typedef struct LscStm_x0017C8A8 { int id; const char *fname; int fname_sum; void *dir; int ofst; int nsct; int stat; int rdsct; } LscStm_x0017C8A8;
typedef struct LscObj_x0017C8A8 { signed char used; signed char stat; signed char reading; signed char loop; signed char pause; char rsv1; short rsv2; SfdSj_x0017C8A8 *sj; SfdSjChunk_x0017C8A8 ck; int flow_min; int flow_max; int wpos; int rpos; int nstm; void *stm; int stm_size; int reqsct; int errcnt; LscStm_x0017C8A8 stms[16]; } LscObj_x0017C8A8;
LscObj_x0017C8A8 *LSC_Create_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("LSC_Create");
void LSC_Destroy_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_Destroy");
void LSC_SetStmHndl_x0017C8A8(LscObj_x0017C8A8 *lsc, void *stm) __asm__("LSC_SetStmHndl");
int LSC_EntryFname_x0017C8A8(LscObj_x0017C8A8 *lsc, const char *fname) __asm__("LSC_EntryFname");
int LSC_EntryFileRange_x0017C8A8(LscObj_x0017C8A8 *lsc, const char *fname, void *dir, int ofst, int nsct) __asm__("LSC_EntryFileRange");
void LSC_ResetEntry_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_ResetEntry");
void LSC_Start_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_Start");
void LSC_Stop_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_Stop");
void LSC_Pause_x0017C8A8(LscObj_x0017C8A8 *lsc, int sw) __asm__("LSC_Pause");
void LSC_ExecServer_x0017C8A8(void) __asm__("LSC_ExecServer");
int LSC_GetStat_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_GetStat");
int LSC_GetNumStm_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_GetNumStm");
int LSC_GetStmId_x0017C8A8(LscObj_x0017C8A8 *lsc, int no) __asm__("LSC_GetStmId");
const char *LSC_GetStmFname_x0017C8A8(LscObj_x0017C8A8 *lsc, int id) __asm__("LSC_GetStmFname");
int LSC_GetStmStat_x0017C8A8(LscObj_x0017C8A8 *lsc, int id) __asm__("LSC_GetStmStat");
int LSC_GetStmRdSct_x0017C8A8(LscObj_x0017C8A8 *lsc, int id) __asm__("LSC_GetStmRdSct");
void LSC_SetFlowLimit_x0017C8A8(LscObj_x0017C8A8 *lsc, int min) __asm__("LSC_SetFlowLimit");
int LSC_GetFlowLimit_x0017C8A8(LscObj_x0017C8A8 *lsc) __asm__("LSC_GetFlowLimit");
void LSC_EntryChgStatFunc_x0017C8A8(LscStatFunc_x0017C8A8 func, void *obj, void *usr) __asm__("LSC_EntryChgStatFunc");
void LSC_SetLpFlg_x0017C8A8(LscObj_x0017C8A8 *lsc, int loop) __asm__("LSC_SetLpFlg");
void LSC_EntryErrFunc_x0017C8A8(LscErrFunc_x0017C8A8 func, void *obj) __asm__("LSC_EntryErrFunc");
void LSC_CallErrFunc_x0017C8A8(const char *format, ...) __asm__("LSC_CallErrFunc");
void LSC_Init_x0017C8A8(void) __asm__("LSC_Init");
void LSC_Finish_x0017C8A8(void) __asm__("LSC_Finish");
enum AdxPdStat_x0017C8A8 { ADXPD_STAT_STOP_x0017C8A8 = 0, ADXPD_STAT_DECODE_QUEUED_x0017C8A8 = 1, ADXPD_STAT_DECODING_x0017C8A8 = 2, ADXPD_STAT_DECEND_x0017C8A8 = 3 };
enum AdxPdChannels_x0017C8A8 { ADXPD_CH_MONO_x0017C8A8 = 1, ADXPD_CH_STEREO_x0017C8A8 = 2 };
typedef struct AdxPdObj_x0017C8A8 { int used; int id; int mode; int stat; int nblk_decoded; int channels; unsigned char *ibuf; int nblk; short *obufl; short *obufr; short dly[2][2]; short k0; short k1; short seed; short mul; short add; } AdxPdObj_x0017C8A8;
void ADXPD_Init_x0017C8A8(void) __asm__("ADXPD_Init");
void ADXPD_Finish_x0017C8A8(void) __asm__("ADXPD_Finish");
AdxPdObj_x0017C8A8 *ADXPD_Create_x0017C8A8(void) __asm__("ADXPD_Create");
void ADXPD_SetCoef_x0017C8A8(AdxPdObj_x0017C8A8 *pd, int sfreq, int cutoff) __asm__("ADXPD_SetCoef");
void ADXPD_SetDly_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned short *dly1, unsigned short *dly2) __asm__("ADXPD_SetDly");
void ADXPD_GetDly_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned short *dly1, unsigned short *dly2) __asm__("ADXPD_GetDly");
void ADXPD_SetExtPrm_x0017C8A8(AdxPdObj_x0017C8A8 *pd, short seed, short mul, short add) __asm__("ADXPD_SetExtPrm");
void ADXPD_GetExtPrm_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned short *seed, unsigned short *mul, unsigned short *add) __asm__("ADXPD_GetExtPrm");
void ADXPD_Destroy_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_Destroy");
void ADXPD_SetMode_x0017C8A8(AdxPdObj_x0017C8A8 *pd, int mode) __asm__("ADXPD_SetMode");
int ADXPD_GetStat_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_GetStat");
int ADXPD_EntryMono_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntryMono");
int ADXPD_EntrySte_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntrySte");
int ADXPD_EntryPl2_x0017C8A8(AdxPdObj_x0017C8A8 *pd, unsigned char *ibuf, int nblk, short *obufl, short *obufr) __asm__("ADXPD_EntryPl2");
void ADXPD_Start_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_Start");
void ADXPD_Stop_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_Stop");
void ADXPD_Reset_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_Reset");
int ADXPD_GetNumBlk_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_GetNumBlk");
void ADXPD_ExecHndl_x0017C8A8(AdxPdObj_x0017C8A8 *pd) __asm__("ADXPD_ExecHndl");
void ADXPD_ExecServer_x0017C8A8(void) __asm__("ADXPD_ExecServer");
typedef struct AdxDecPara_x0017C8A8 { char *ibuf; int niblk; int nch; int blksize; int blknsmpl; short *pcmbuf; int pcmbsize; int pcmbdist; int wpos; int nroom; int lp_nsmpl; int ndecsmpl; } AdxDecPara_x0017C8A8;
enum { ADXB_FORMAT_ADX_x0017C8A8 = 0, ADXB_FORMAT_WAV_x0017C8A8 = 1, ADXB_FORMAT_SPSD_x0017C8A8 = 2, ADXB_FORMAT_AIFF_x0017C8A8 = 3, ADXB_FORMAT_AU_x0017C8A8 = 4, ADXB_FORMAT_AHX_x0017C8A8 = 10, ADXB_FORMAT_AC3_x0017C8A8 = 15 };
struct Pl2Enc_x0017C8A8;
typedef struct AdxbObj_x0017C8A8 AdxbObj_x0017C8A8;
typedef short *(*AdxbGetWrFunc_x0017C8A8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017C8A8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017C8A8 { short used; short hdcdflag; int stat; AdxPdObj_x0017C8A8 *xpd; signed char code; signed char bps; signed char nch; signed char blklen; int blknsmpl; int sfreq; int total_nsmpl; short cof; short rsv1; int lp_ins_nsmpl; short nloop; short lp_type; int lp_spos; int lp_sofst; int lp_epos; int lp_eofst; int maxnch; short *pcmbuf; int pcmbsize; int pcmbdist; AdxDecPara_x0017C8A8 dp; AdxbGetWrFunc_x0017C8A8 getwrfunc; void *getwrobj; AdxbAddWrFunc_x0017C8A8 addwrfunc; void *addwrobj; int total_ndecsmpl; int curwpos; int ndecsmpl; int ndeclen; short fmttype; unsigned short def_fmttype; short cdctype; short f158; short k0; short km; short ka; unsigned short xp_key; unsigned short xp_km; unsigned short xp_ka; unsigned short dly1[2]; unsigned short dly2[2]; void *ahx; int ahx_dec_nsmpl; int ahx_dec_nfrm; void *ac3; int ac3_dec_nsmpl; int ac3_dec_nfrm; int ainf_len; char dataid[16]; short def_outvol; short def_pan[2]; char pad230[2]; struct Pl2Enc_x0017C8A8 *pl2; int pl2_x; int pl2_y; int cb_ndeclen; int rsv; void (*decfunc)(void *context, int count, int bytes); void *decobj; };
extern void (*adxb_pl2_exec_func_x0017C8A8)(AdxbObj_x0017C8A8 *obj, int v, short *src, short *dst) __asm__("adxb_pl2_exec_func");
extern void (*adxb_pl2_reset_func_x0017C8A8)(AdxbObj_x0017C8A8 *obj) __asm__("adxb_pl2_reset_func");
void ADXB_Init_x0017C8A8(void) __asm__("ADXB_Init");
void ADXB_Finish_x0017C8A8(void) __asm__("ADXB_Finish");
AdxbObj_x0017C8A8 *ADXB_Create_x0017C8A8(int nch, short *buf, int bsize, int bdist) __asm__("ADXB_Create");
void ADXB_Destroy_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_Destroy");
int ADXB_DecodeHeaderAdx_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAdx");
void ADXB_ResetDefFmt_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ResetDefFmt");
void ADXB_SetDefPrm_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_SetDefPrm");
int ADXB_DecodeHeader_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeader");
void ADXB_EntryGetWrFunc_x0017C8A8(AdxbObj_x0017C8A8 *adxb, AdxbGetWrFunc_x0017C8A8 func, void *obj) __asm__("ADXB_EntryGetWrFunc");
void ADXB_EntryAddWrFunc_x0017C8A8(AdxbObj_x0017C8A8 *adxb, AdxbAddWrFunc_x0017C8A8 func, void *obj) __asm__("ADXB_EntryAddWrFunc");
short *ADXB_GetPcmBuf_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetPcmBuf");
int ADXB_GetFormat_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetFormat");
int ADXB_GetSfreq_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetSfreq");
int ADXB_GetNumChan_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetNumChan");
int ADXB_GetFmtBps_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetFmtBps");
int ADXB_GetOutBps_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetOutBps");
int ADXB_GetBlkSmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetBlkSmpl");
int ADXB_GetBlkLen_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetBlkLen");
int ADXB_GetTotalNumSmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetTotalNumSmpl");
int ADXB_GetCof_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetCof");
int ADXB_GetLpInsNsmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetLpInsNsmpl");
int ADXB_GetNumLoop_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetNumLoop");
int ADXB_GetLpStartPos_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetLpStartPos");
int ADXB_GetLpStartOfst_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetLpStartOfst");
int ADXB_GetLpEndPos_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetLpEndPos");
int ADXB_GetLpEndOfst_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetLpEndOfst");
int ADXB_GetAinfLen_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetAinfLen");
short ADXB_GetDefOutVol_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetDefOutVol");
short ADXB_GetDefPan_x0017C8A8(AdxbObj_x0017C8A8 *adxb, int ch) __asm__("ADXB_GetDefPan");
char *ADXB_GetDataId_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetDataId");
void ADXB_TakeSnapshot_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_TakeSnapshot");
void ADXB_RestoreSnapshot_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_RestoreSnapshot");
void ADXB_SetExtString_x0017C8A8(AdxbObj_x0017C8A8 *adxb, const char *str) __asm__("ADXB_SetExtString");
void ADXB_SetDefExtString_x0017C8A8(const char *str) __asm__("ADXB_SetDefExtString");
int ADXB_GetStat_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetStat");
void ADXB_EntryData_x0017C8A8(AdxbObj_x0017C8A8 *adxb, char *data, int len) __asm__("ADXB_EntryData");
void ADXB_Start_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_Start");
void ADXB_Stop_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_Stop");
void ADXB_Reset_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_Reset");
int ADXB_GetDecDtLen_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetDecDtLen");
int ADXB_GetDecNumSmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetDecNumSmpl");
void ADXB_EntryDecFunc_x0017C8A8(AdxbObj_x0017C8A8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
AdxPdObj_x0017C8A8 *ADXB_GetAdxpd_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_GetAdxpd");
void ADXB_ExecOneAdx_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneAdx");
void ADXB_ExecHndl_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecHndl");
void ADXB_ExecServer_x0017C8A8(void) __asm__("ADXB_ExecServer");
void ADXB_SetAc3InSj_x0017C8A8(AdxbObj_x0017C8A8 *adxb, SfdSj_x0017C8A8 *sji) __asm__("ADXB_SetAc3InSj");
void ADXB_SetAc3DecSmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb, int nsmpl) __asm__("ADXB_SetAc3DecSmpl");
void ADXB_Ac3TermSupply_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_Ac3TermSupply");
void ADXB_ExecOneAc3_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneAc3");
int ADXB_DecodeHeaderAc3_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAc3");
int ADXB_CheckAc3_x0017C8A8(unsigned char *hdr) __asm__("ADXB_CheckAc3");
void ADXB_SetAhxInSj_x0017C8A8(AdxbObj_x0017C8A8 *adxb, SfdSj_x0017C8A8 *sji) __asm__("ADXB_SetAhxInSj");
void ADXB_SetAhxDecSmpl_x0017C8A8(AdxbObj_x0017C8A8 *adxb, int nsmpl) __asm__("ADXB_SetAhxDecSmpl");
void ADXB_ExecOneAhx_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneAhx");
void ADXB_AhxTermSupply_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_AhxTermSupply");
int ADXB_CheckAiff_x0017C8A8(unsigned char *hdr) __asm__("ADXB_CheckAiff");
int ADXB_DecodeHeaderAiff_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAiff");
void ADXB_ExecOneAiff_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneAiff");
int ADXB_CheckAu_x0017C8A8(unsigned char *hdr) __asm__("ADXB_CheckAu");
int ADXB_DecodeHeaderAu_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAu");
void ADXB_ExecOneAu_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneAu");
int ADXB_DecodeHeaderSpsd_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderSpsd");
void ADXB_ExecOneSpsd_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneSpsd");
int ADXB_CheckSpsd_x0017C8A8(unsigned char *hdr) __asm__("ADXB_CheckSpsd");
int ADXB_DecodeHeaderWav_x0017C8A8(AdxbObj_x0017C8A8 *adxb, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderWav");
int ADXB_CheckWav_x0017C8A8(unsigned char *hdr) __asm__("ADXB_CheckWav");
void ADXB_ExecOneWav_x0017C8A8(AdxbObj_x0017C8A8 *adxb) __asm__("ADXB_ExecOneWav");
enum AdxSjdStat_x0017C8A8 { ADXSJD_STAT_STOP_x0017C8A8 = 0, ADXSJD_STAT_DECHDR_x0017C8A8 = 1, ADXSJD_STAT_DECODE_x0017C8A8 = 2, ADXSJD_STAT_DECEND_x0017C8A8 = 3, ADXSJD_STAT_ERROR_x0017C8A8 = 4 };
typedef struct AdxSjdObj_x0017C8A8 { signed char used; signed char stat; signed char maxnch; signed char empty_end; AdxbObj_x0017C8A8 *adxb; SfdSj_x0017C8A8 *sji; SfdSj_x0017C8A8 *sjo[2]; SfdSjChunk_x0017C8A8 cki; SfdSjChunk_x0017C8A8 cko[2]; int total_decsmpl; int total_decdtlen; int decpos; int maxdecsmpl; int dtrpsmpl; int dtrpcnt; int dtrpdtlen; void (*dtrpfunc)(void *context); void *dtrpobj; void (*dfltfunc)(void *context, int ch, char *data, int len); void *dfltobj; char hdr[64]; int hdrlen; int lnksw; int fill; int skip; } AdxSjdObj_x0017C8A8;
extern void (*adxsjd_header_hook_x0017C8A8)(AdxbObj_x0017C8A8 *adxb, int rate) __asm__("adxsjd_header_hook");
void SFA_Init_x0017C8A8(void) __asm__("SFA_Init");
void SFA_Finish_x0017C8A8(void) __asm__("SFA_Finish");
void ADXSJD_Init_x0017C8A8(void) __asm__("ADXSJD_Init");
void ADXSJD_Finish_x0017C8A8(void) __asm__("ADXSJD_Finish");
AdxSjdObj_x0017C8A8 *ADXSJD_Create_x0017C8A8(SfdSj_x0017C8A8 *sji, int nch, SfdSj_x0017C8A8 **sjo) __asm__("ADXSJD_Create");
void ADXSJD_Destroy_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_Destroy");
char ADXSJD_GetStat_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetStat");
void ADXSJD_SetInSj_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, SfdSj_x0017C8A8 *sji) __asm__("ADXSJD_SetInSj");
void ADXSJD_SetOutSj_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int ch, SfdSj_x0017C8A8 *sjo) __asm__("ADXSJD_SetOutSj");
void ADXSJD_SetMaxDecSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int nsmpl) __asm__("ADXSJD_SetMaxDecSmpl");
void ADXSJD_TermSupply_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_TermSupply");
void ADXSJD_Start_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_Start");
void ADXSJD_Stop_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_Stop");
void ADXSJD_ExecHndl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_ExecHndl");
void ADXSJD_ExecServer_x0017C8A8(void) __asm__("ADXSJD_ExecServer");
int ADXSJD_GetDecDtLen_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetDecDtLen");
int ADXSJD_GetDecNumSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetDecNumSmpl");
void ADXSJD_SetDecPos_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int pos) __asm__("ADXSJD_SetDecPos");
int ADXSJD_GetDecPos_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetDecPos");
void ADXSJD_SetLnkSw_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int sw) __asm__("ADXSJD_SetLnkSw");
int ADXSJD_GetLnkSw_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetLnkSw");
void ADXSJD_SetExtString_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, const char *str) __asm__("ADXSJD_SetExtString");
void ADXSJD_SetDefExtString_x0017C8A8(const char *str) __asm__("ADXSJD_SetDefExtString");
void ADXSJD_ResetDefFmt_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_ResetDefFmt");
int ADXSJD_AdjustSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int nsmpl) __asm__("ADXSJD_AdjustSmpl");
void ADXSJD_EntryFltFunc_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
void ADXSJD_EntryTrapFunc_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
void ADXSJD_SetTrapNumSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int nsmpl) __asm__("ADXSJD_SetTrapNumSmpl");
int ADXSJD_GetTrapNumSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetTrapNumSmpl");
void ADXSJD_SetTrapCnt_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int cnt) __asm__("ADXSJD_SetTrapCnt");
int ADXSJD_GetTrapCnt_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetTrapCnt");
void ADXSJD_SetTrapDtLen_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int len) __asm__("ADXSJD_SetTrapDtLen");
int ADXSJD_GetTrapDtLen_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetTrapDtLen");
int ADXSJD_GetFormat_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetFormat");
int ADXSJD_GetSfreq_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetSfreq");
int ADXSJD_GetNumChan_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetNumChan");
int ADXSJD_GetOutBps_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetOutBps");
int ADXSJD_GetBlkSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetBlkSmpl");
int ADXSJD_GetTotalNumSmpl_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetTotalNumSmpl");
int ADXSJD_GetNumLoop_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetNumLoop");
int ADXSJD_GetLpStartPos_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetLpStartPos");
int ADXSJD_GetLpStartOfst_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetLpStartOfst");
int ADXSJD_GetLpEndPos_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetLpEndPos");
int ADXSJD_GetLpEndOfst_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetLpEndOfst");
int ADXSJD_GetAinfLen_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetAinfLen");
short ADXSJD_GetDefOutVol_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetDefOutVol");
short ADXSJD_GetDefPan_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd, int ch) __asm__("ADXSJD_GetDefPan");
char *ADXSJD_GetDataId_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetDataId");
int ADXSJD_GetHdrLen_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetHdrLen");
int ADXSJD_GetFmtBps_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetFmtBps");
char *ADXSJD_GetSpsdInfo_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_GetSpsdInfo");
void ADXSJD_TakeSnapshot_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_TakeSnapshot");
void ADXSJD_RestoreSnapshot_x0017C8A8(AdxSjdObj_x0017C8A8 *sjd) __asm__("ADXSJD_RestoreSnapshot");
enum CvFsOptCode_x0017C8A8 { CVFS_OPT_SET_CUR_VOLUME_x0017C8A8 = 1, CVFS_OPT_ADD_VOLUME_x0017C8A8 = 2, CVFS_OPT_DEL_VOLUME_x0017C8A8 = 3, CVFS_OPT_GET_NUM_FILES_x0017C8A8 = 4, CVFS_OPT_GET_VOLUME_INFO_x0017C8A8 = 5, CVFS_OPT_SET_DEF_VOL_x0017C8A8 = 6, CVFS_OPT_IS_FULL_PATH_x0017C8A8 = 100, CVFS_OPT_NUM_TR64_HIGH_x0017C8A8 = 200, CVFS_OPT_NUM_TR64_LOW_x0017C8A8 = 201, CVFS_OPT_FILE_SIZE64_HIGH_x0017C8A8 = 202, CVFS_OPT_FILE_SIZE64_LOW_x0017C8A8 = 203, CVFS_OPT_FILE_SIZE_EX64_HIGH_x0017C8A8 = 204, CVFS_OPT_FILE_SIZE_EX64_LOW_x0017C8A8 = 205, CVFS_OPT_FSYS64_INFO_x0017C8A8 = 299, CVFS_OPT_FILE_SIZE_BY_HNDL_x0017C8A8 = 300 };
typedef void (*CvFsErrFn_x0017C8A8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017C8A8)(CvFsErrFn_x0017C8A8 func, void *obj);
typedef int (*CvFsPathFn_x0017C8A8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017C8A8)(void);
typedef int (*CvFsOpenFn_x0017C8A8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017C8A8)(int fd);
typedef int (*CvFsFdIntFn_x0017C8A8)(int fd);
typedef int (*CvFsSeekFn_x0017C8A8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017C8A8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017C8A8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017C8A8)(void);
typedef int (*CvFsLoadDirInfoFn_x0017C8A8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017C8A8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017C8A8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017C8A8 { void (*exec_server)(void); CvFsEntryErrFuncFn_x0017C8A8 entry_err_func; CvFsPathFn_x0017C8A8 get_file_size; CvFsGetFreeSizeFn_x0017C8A8 get_free_size; CvFsOpenFn_x0017C8A8 open; CvFsFdFn_x0017C8A8 close; CvFsSeekFn_x0017C8A8 seek; CvFsFdIntFn_x0017C8A8 tell; CvFsXferFn_x0017C8A8 req_rd; CvFsXferFn_x0017C8A8 req_wr; CvFsFdFn_x0017C8A8 stop_tr; CvFsFdIntFn_x0017C8A8 get_stat; CvFsFdIntFn_x0017C8A8 get_sct_len; CvFsSetSctLenFn_x0017C8A8 set_sct_len; CvFsFdIntFn_x0017C8A8 get_num_tr; CvFsPathFn_x0017C8A8 change_dir; CvFsPathFn_x0017C8A8 is_exist_file; CvFsGetNumFilesFn_x0017C8A8 get_num_files; CvFsLoadDirInfoFn_x0017C8A8 load_dir_info; CvFsFdIntFn_x0017C8A8 get_max_byte_rate; CvFsPathFn_x0017C8A8 make_dir; CvFsPathFn_x0017C8A8 remove_dir; CvFsPathFn_x0017C8A8 delete_file; CvFsGetFileSizeExFn_x0017C8A8 get_file_size_ex; int (*opt_fn1)(); CvFsOptFn2_x0017C8A8 opt_fn2; } CvFsVtbl_x0017C8A8;
typedef struct CvFsHandle_x0017C8A8 { CvFsVtbl_x0017C8A8 *vtbl; int fd; } CvFsHandle_x0017C8A8;
typedef struct CvFsDevice_x0017C8A8 { CvFsVtbl_x0017C8A8 *vtbl; char name[12]; } CvFsDevice_x0017C8A8;
typedef struct CvFsOptPrm_x0017C8A8 { void *prm[5]; } CvFsOptPrm_x0017C8A8;
extern CvFsErrFn_x0017C8A8 cvfs_errfn_x0017C8A8 __asm__("cvfs_errfn");
extern void *cvfs_errobj_x0017C8A8 __asm__("cvfs_errobj");
extern int cvfs_init_cnt_x0017C8A8 __asm__("cvfs_init_cnt");
extern CvFsHandle_x0017C8A8 cvfs_handles_x0017C8A8[40] __asm__("cvfs_handles");
extern CvFsDevice_x0017C8A8 cvfs_devices_x0017C8A8[32] __asm__("cvfs_devices");
extern char cvfs_defdev_x0017C8A8[9] __asm__("cvfs_defdev");
extern char cvfs_path_work_x0017C8A8[] __asm__("cvfs_path_work");
void cvFsCallUsrErrFn_x0017C8A8(void *obj, const char *msg, int code) __asm__("cvFsCallUsrErrFn");
void cvFsError_x0017C8A8(const char *msg) __asm__("cvFsError");
void cvFsInit_x0017C8A8(void) __asm__("cvFsInit");
void cvFsFinish_x0017C8A8(void) __asm__("cvFsFinish");
void cvFsAddDev_x0017C8A8(char *devname, CvFsVtbl_x0017C8A8 *(*get_if)(void), void *prm) __asm__("cvFsAddDev");
CvFsVtbl_x0017C8A8 *addDevice_x0017C8A8(char *devname, CvFsVtbl_x0017C8A8 *(*get_if)(void)) __asm__("addDevice");
CvFsVtbl_x0017C8A8 *getDevice_x0017C8A8(const char *devname) __asm__("getDevice");
void toUpperStr_x0017C8A8(char *str) __asm__("toUpperStr");
void cvFsDelDev_x0017C8A8(const char *devname) __asm__("cvFsDelDev");
void cvFsSetDefDev_x0017C8A8(char *devname) __asm__("cvFsSetDefDev");
int isExistDev_x0017C8A8(const char *devname, int len) __asm__("isExistDev");
char *cvFsGetDefDev_x0017C8A8(void) __asm__("cvFsGetDefDev");
CvFsVtbl_x0017C8A8 *variousProc_x0017C8A8(char *devname, char *fname, const char *path) __asm__("variousProc");
CvFsHandle_x0017C8A8 *cvFsOpen_x0017C8A8(const char *path, void *atr, int rw) __asm__("cvFsOpen");
CvFsHandle_x0017C8A8 *allocCvFsHn_x0017C8A8(void) __asm__("allocCvFsHn");
void releaseCvFsHn_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("releaseCvFsHn");
void getDevName_x0017C8A8(char *devname, char *fname, const char *path) __asm__("getDevName");
void getDefDev_x0017C8A8(char *devname) __asm__("getDefDev");
void cvFsClose_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsClose");
int cvFsTell_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsTell");
int cvFsSeek_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int offset, int origin) __asm__("cvFsSeek");
int cvFsReqRd_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int nsct, void *buf) __asm__("cvFsReqRd");
int cvFsReqWr_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int nsct, void *buf) __asm__("cvFsReqWr");
void cvFsStopTr_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsStopTr");
void cvFsExecServer_x0017C8A8(void) __asm__("cvFsExecServer");
int cvFsGetStat_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetStat");
int cvFsGetFileSize_x0017C8A8(const char *path) __asm__("cvFsGetFileSize");
int cvFsGetFileSizeEx_x0017C8A8(const char *path, int arg) __asm__("cvFsGetFileSizeEx");
int cvFsGetFileSizeByHndl_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetFileSizeByHndl");
int cvFsGetFreeSize_x0017C8A8(const char *devname) __asm__("cvFsGetFreeSize");
int cvFsGetSctLen_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetSctLen");
void cvFsSetSctLen_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int len) __asm__("cvFsSetSctLen");
int cvFsGetNumTr_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetNumTr");
int cvFsChangeDir_x0017C8A8(const char *path) __asm__("cvFsChangeDir");
int cvFsIsExistFile_x0017C8A8(const char *path) __asm__("cvFsIsExistFile");
int cvFsGetNumFiles_x0017C8A8(const char *devname) __asm__("cvFsGetNumFiles");
int cvFsLoadDirInfo_x0017C8A8(const char *path, void *work, int nfile) __asm__("cvFsLoadDirInfo");
int cvFsGetMaxByteRate_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetMaxByteRate");
int cvFsMakeDir_x0017C8A8(const char *path) __asm__("cvFsMakeDir");
int cvFsRemoveDir_x0017C8A8(const char *path) __asm__("cvFsRemoveDir");
int cvFsDeleteFile_x0017C8A8(const char *path) __asm__("cvFsDeleteFile");
char *cvFsGetDevName_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetDevName");
void cvFsEntryErrFunc_x0017C8A8(CvFsErrFn_x0017C8A8 func, void *obj) __asm__("cvFsEntryErrFunc");
int cvFsOptFn1_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int code, int arg) __asm__("cvFsOptFn1");
int cvFsOptFn2_x0017C8A8(CvFsHandle_x0017C8A8 *hdl, int code, int arg) __asm__("cvFsOptFn2");
int cvFsSetCurVolume_x0017C8A8(const char *devname, void *image) __asm__("cvFsSetCurVolume");
int cvFsAddVolumeEx_x0017C8A8(const char *devname, const char *volume, void *image, int option) __asm__("cvFsAddVolumeEx");
int cvFsDelVolume_x0017C8A8(const char *devname, const char *volume) __asm__("cvFsDelVolume");
int cvFsGetVolumeInfo_x0017C8A8(const char *devname, const char *volume, void *info) __asm__("cvFsGetVolumeInfo");
void cvFsSetDefVol_x0017C8A8(const char *devname, const char *volume) __asm__("cvFsSetDefVol");
int isNeedDevName_x0017C8A8(const char *devname) __asm__("isNeedDevName");
void addDevName_x0017C8A8(char *devname, char *fname) __asm__("addDevName");
int cvFsIsExistDevice_x0017C8A8(const char *devname) __asm__("cvFsIsExistDevice");
long long cvFsGetNumTr64_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetNumTr64");
long long cvFsGetFileSize64_x0017C8A8(const char *path) __asm__("cvFsGetFileSize64");
long long cvFsGetFileSizeEx64_x0017C8A8(const char *path, int arg) __asm__("cvFsGetFileSizeEx64");
int cvFsGetFsys64Info_x0017C8A8(CvFsHandle_x0017C8A8 *hdl) __asm__("cvFsGetFsys64Info");
enum AdxStmStat_x0017C8A8 { ADXSTM_STAT_STOP_x0017C8A8 = 1, ADXSTM_STAT_READ_x0017C8A8 = 2, ADXSTM_STAT_READEND_x0017C8A8 = 3, ADXSTM_STAT_ERROR_x0017C8A8 = 4 };
typedef struct AdxStmObj_x0017C8A8 { signed char used; signed char stat; signed char rdflg; signed char rtrycnt; SfdSj_x0017C8A8 *sj; CvFsHandle_x0017C8A8 *fd; int fofst; int fsize; int fsctsz; int maxrdsz; int minrdsz; int rdsct; SfdSjChunk_x0017C8A8 rdck; int reqrdsct; int eos; int rdbyte; void (*eosfunc)(void *obj); void *eosobj; int buflen; signed char pause; signed char open_req; signed char close_req; signed char start_req; signed char stop_req; signed char opened; signed char nrmlflg; char f75[5]; const char *fname; void *dir; int curpos; int maxsct; } AdxStmObj_x0017C8A8;
void ADXT_SetupRtimeNumStm_x0017C8A8(int num) __asm__("ADXT_SetupRtimeNumStm");
void ADXSTMF_SetRtimNum_x0017C8A8(int num) __asm__("ADXSTMF_SetRtimNum");
int ADXSTM_Init_x0017C8A8(void) __asm__("ADXSTM_Init");
void ADXSTM_Reset_x0017C8A8(void) __asm__("ADXSTM_Reset");
void ADXSTM_Finish_x0017C8A8(void) __asm__("ADXSTM_Finish");
AdxStmObj_x0017C8A8 *ADXSTMF_CreateCvfs_x0017C8A8(CvFsHandle_x0017C8A8 *fd, int fofst, int fsize, SfdSj_x0017C8A8 *sj) __asm__("ADXSTMF_CreateCvfs");
AdxStmObj_x0017C8A8 *ADXSTMF_CreateCvfsRt_x0017C8A8(CvFsHandle_x0017C8A8 *fd, int fofst, int fsize, SfdSj_x0017C8A8 *sj) __asm__("ADXSTMF_CreateCvfsRt");
AdxStmObj_x0017C8A8 *ADXSTM_Create_x0017C8A8(SfdSj_x0017C8A8 *sj, int maxsct) __asm__("ADXSTM_Create");
void ADXSTM_Destroy_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_Destroy");
void ADXSTM_BindFileNw_x0017C8A8(AdxStmObj_x0017C8A8 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("ADXSTM_BindFileNw");
void ADXSTM_BindFile_x0017C8A8(AdxStmObj_x0017C8A8 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("ADXSTM_BindFile");
void ADXSTM_ReleaseFileNw_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_ReleaseFileNw");
void ADXSTM_ReleaseFile_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_ReleaseFile");
int ADXSTM_IsOpenedFile_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_IsOpenedFile");
int ADXSTM_GetStat_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetStat");
int ADXSTM_Seek_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int pos) __asm__("ADXSTM_Seek");
int ADXSTM_Tell_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_Tell");
int ADXSTM_Start_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_Start");
int ADXSTM_Start2_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int maxsct) __asm__("ADXSTM_Start2");
void ADXSTM_StopNw_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_StopNw");
void ADXSTM_Stop_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_Stop");
void ADXSTM_EntryEosFunc_x0017C8A8(AdxStmObj_x0017C8A8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXSTM_SetEos_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int eos) __asm__("ADXSTM_SetEos");
void ADXSTM_ExecServer_x0017C8A8(void) __asm__("ADXSTM_ExecServer");
int ADXSTM_GetCurSct_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int *nsct) __asm__("ADXSTM_GetCurSct");
int ADXSTM_GetBufSize_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int *min, int *max) __asm__("ADXSTM_GetBufSize");
SfdSj_x0017C8A8 *ADXSTM_GetSj_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetSj");
int ADXSTM_SetBufSize_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int min, int max) __asm__("ADXSTM_SetBufSize");
int ADXSTM_SetReqRdSize_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int nsct) __asm__("ADXSTM_SetReqRdSize");
void ADXSTM_EntryErrFunc_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int prio) __asm__("ADXSTM_EntryErrFunc");
int ADXSTM_GetFileLen_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetFileLen");
int ADXSTM_GetFileSct_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetFileSct");
void ADXSTM_SetPause_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int sw) __asm__("ADXSTM_SetPause");
int ADXSTM_GetPause_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetPause");
void ADXSTM_GetCvdfsStat_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int *stat) __asm__("ADXSTM_GetCvdfsStat");
int ADXSTM_GetFad_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int *fad) __asm__("ADXSTM_GetFad");
int ADXSTM_GetFsizeSct_x0017C8A8(const char *fname, int *nsct) __asm__("ADXSTM_GetFsizeSct");
int ADXSTM_GetFsizeByte_x0017C8A8(const char *fname, int *nbyte) __asm__("ADXSTM_GetFsizeByte");
void ADXSTM_SetSj_x0017C8A8(AdxStmObj_x0017C8A8 *stm, SfdSj_x0017C8A8 *sj) __asm__("ADXSTM_SetSj");
void ADXSTM_SetRdSct_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int nsct) __asm__("ADXSTM_SetRdSct");
void ADXSTM_SetOfst_x0017C8A8(AdxStmObj_x0017C8A8 *stm, int ofst) __asm__("ADXSTM_SetOfst");
void ADXT_SetNumRetry_x0017C8A8(int num) __asm__("ADXT_SetNumRetry");
int ADXSTM_GetReadFlg_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_GetReadFlg");
void ADXSTM_OpenCvfs_x0017C8A8(AdxStmObj_x0017C8A8 *stm) __asm__("ADXSTM_OpenCvfs");
typedef struct AdxAmpObj_x0017C8A8 AdxAmpObj_x0017C8A8;
void ADXAMP_Init_x0017C8A8(void) __asm__("ADXAMP_Init");
void ADXAMP_Finish_x0017C8A8(void) __asm__("ADXAMP_Finish");
AdxAmpObj_x0017C8A8 *ADXAMP_Create_x0017C8A8(int maxnch, SfdSj_x0017C8A8 **sji, SfdSj_x0017C8A8 **sjo) __asm__("ADXAMP_Create");
void ADXAMP_Destroy_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_Destroy");
int ADXAMP_GetStat_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_GetStat");
void ADXAMP_Start_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_Start");
void ADXAMP_Stop_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_Stop");
void ADXAMP_ExecHndl_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_ExecHndl");
void ADXAMP_ExecServer_x0017C8A8(void) __asm__("ADXAMP_ExecServer");
int ADXAMP_GetExtractNumSmpl_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_GetExtractNumSmpl");
void ADXAMP_SetSfreq_x0017C8A8(AdxAmpObj_x0017C8A8 *amp, int sfreq) __asm__("ADXAMP_SetSfreq");
int ADXAMP_GetSfreq_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_GetSfreq");
void ADXAMP_SetFrmLen_x0017C8A8(AdxAmpObj_x0017C8A8 *amp, float frmlen) __asm__("ADXAMP_SetFrmLen");
float ADXAMP_GetFrmLen_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_GetFrmLen");
void ADXAMP_SetFrmPrd_x0017C8A8(AdxAmpObj_x0017C8A8 *amp, float frmprd) __asm__("ADXAMP_SetFrmPrd");
float ADXAMP_GetFrmPrd_x0017C8A8(AdxAmpObj_x0017C8A8 *amp) __asm__("ADXAMP_GetFrmPrd");
typedef struct DtrObj_x0017C8A8 DtrObj_x0017C8A8;
signed char DTR_GetStat_x0017C8A8(DtrObj_x0017C8A8 *dtr) __asm__("DTR_GetStat");
void DTR_ExecServer_x0017C8A8(void) __asm__("DTR_ExecServer");
void DTR_Init_x0017C8A8(void) __asm__("DTR_Init");
void DTR_Finish_x0017C8A8(void) __asm__("DTR_Finish");
DtrObj_x0017C8A8 *DTR_Create_x0017C8A8(SfdSj_x0017C8A8 *sjs, SfdSj_x0017C8A8 *sjd) __asm__("DTR_Create");
void DTR_Destroy_x0017C8A8(DtrObj_x0017C8A8 *dtr) __asm__("DTR_Destroy");
void DTR_Start_x0017C8A8(DtrObj_x0017C8A8 *dtr) __asm__("DTR_Start");
void DTR_Stop_x0017C8A8(DtrObj_x0017C8A8 *dtr) __asm__("DTR_Stop");
typedef struct Ps2RnaPsj_x0017C8A8 { char used; void *sjrmt; SfdSj_x0017C8A8 *sjuni; SjxObj_x0017C8A8 *sjx; SfdSjChunk_x0017C8A8 ck; } Ps2RnaPsj_x0017C8A8;
typedef struct Ps2Rna_x0017C8A8 { signed char used; int maxnch; Ps2RnaPsj_x0017C8A8 *psj[2]; DtrObj_x0017C8A8 *dtr[2]; SfdSj_x0017C8A8 *sjo[2]; void *id; int pad36; int ring_size; int psj_bufsize; int sfreq; int sent_sfreq; int outvol; int sent_outvol; int outpan[2]; int sent_outpan[2]; signed char playsw; signed char sent_playsw; signed char nch; signed char sent_nch; signed char auxsw; signed char sent_auxsw; signed char dualsw; signed char sent_dualsw; signed char transsw; signed char trans_stopped; signed char sent_stopflag; signed char stopflag; int outbalance; int sent_outbalance; } Ps2Rna_x0017C8A8;
void PS2RNA_SetupVoice_x0017C8A8(int nste, int nmono) __asm__("PS2RNA_SetupVoice");
void PS2RNA_Init_x0017C8A8(void) __asm__("PS2RNA_Init");
void PS2RNA_SendOutMode_x0017C8A8(int outmode) __asm__("PS2RNA_SendOutMode");
void PS2RNA_StartAux_x0017C8A8(void) __asm__("PS2RNA_StartAux");
void PS2RNA_StopAux_x0017C8A8(void) __asm__("PS2RNA_StopAux");
void PS2RNA_SetAuxSw_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int sw) __asm__("PS2RNA_SetAuxSw");
void PS2RNA_SetDualSw_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int sw) __asm__("PS2RNA_SetDualSw");
signed char PS2RNA_GetDualSw_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetDualSw");
void PS2RNA_OpenPort_x0017C8A8(unsigned int port) __asm__("PS2RNA_OpenPort");
void PS2RNA_ClosePort_x0017C8A8(unsigned int port) __asm__("PS2RNA_ClosePort");
int PS2RNA_IsPortOpen_x0017C8A8(unsigned int port) __asm__("PS2RNA_IsPortOpen");
int PS2RNA_Finish_x0017C8A8(void) __asm__("PS2RNA_Finish");
Ps2Rna_x0017C8A8 *PS2RNA_Create_x0017C8A8(SfdSj_x0017C8A8 **sjo, int nch) __asm__("PS2RNA_Create");
void PS2RNA_Destroy_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_Destroy");
void PS2RNA_Start_x0017C8A8(void) __asm__("PS2RNA_Start");
void PS2RNA_Stop_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_Stop");
void PS2RNA_SetTransSw_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int sw) __asm__("PS2RNA_SetTransSw");
void PS2RNA_SetPlaySw_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int sw) __asm__("PS2RNA_SetPlaySw");
void PS2RNA_SetOutMode_x0017C8A8(int outmode) __asm__("PS2RNA_SetOutMode");
int PS2RNA_GetOutMode_x0017C8A8(void) __asm__("PS2RNA_GetOutMode");
void PS2RNA_SetStopFlag_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int flag) __asm__("PS2RNA_SetStopFlag");
void PS2RNA_ClearBuf_x0017C8A8(void) __asm__("PS2RNA_ClearBuf");
void PS2RNA_SetPcmType_x0017C8A8(void) __asm__("PS2RNA_SetPcmType");
void PS2RNA_GetTime_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int *ncount, int *tscale) __asm__("PS2RNA_GetTime");
int PS2RNA_GetNumData_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetNumData");
int PS2RNA_GetNumRoom_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetNumRoom");
void PS2RNA_ExecServer_x0017C8A8(void) __asm__("PS2RNA_ExecServer");
void PS2RNA_SetStartSmpl_x0017C8A8(void) __asm__("PS2RNA_SetStartSmpl");
void PS2RNA_SetNumChan_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int nch) __asm__("PS2RNA_SetNumChan");
void PS2RNA_SetSfreq_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int sfreq) __asm__("PS2RNA_SetSfreq");
void PS2RNA_SetOutVol_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int vol) __asm__("PS2RNA_SetOutVol");
void PS2RNA_SetOutPan_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int ch, int pan) __asm__("PS2RNA_SetOutPan");
void PS2RNA_SetOutBalance_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int balance) __asm__("PS2RNA_SetOutBalance");
int PS2RNA_SetBitPerSmpl_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int bps) __asm__("PS2RNA_SetBitPerSmpl");
int PS2RNA_GetStartSmpl_x0017C8A8(void) __asm__("PS2RNA_GetStartSmpl");
int PS2RNA_GetSfreq_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetSfreq");
int PS2RNA_GetOutVol_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetOutVol");
int PS2RNA_GetOutPan_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int ch) __asm__("PS2RNA_GetOutPan");
int PS2RNA_GetOutBalance_x0017C8A8(Ps2Rna_x0017C8A8 *rna) __asm__("PS2RNA_GetOutBalance");
int PS2RNA_GetBitPerSmpl_x0017C8A8(void) __asm__("PS2RNA_GetBitPerSmpl");
int PS2RNA_IsOverflow_x0017C8A8(void) __asm__("PS2RNA_IsOverflow");
void PS2RNA_ClearOverflow_x0017C8A8(void) __asm__("PS2RNA_ClearOverflow");
void PS2RNA_Flush_x0017C8A8(void) __asm__("PS2RNA_Flush");
int PS2RNA_DiscardData_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int nsmpl) __asm__("PS2RNA_DiscardData");
void PS2RNA_SetTotalNumSmpl_x0017C8A8(void) __asm__("PS2RNA_SetTotalNumSmpl");
int PS2RNA_SetStmHdInfo_x0017C8A8(Ps2Rna_x0017C8A8 *rna, char *info) __asm__("PS2RNA_SetStmHdInfo");
SfdSj_x0017C8A8 *PS2RNA_GetSjUni_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int ch) __asm__("PS2RNA_GetSjUni");
void *PS2RNA_GetSjRmt_x0017C8A8(Ps2Rna_x0017C8A8 *rna, int ch) __asm__("PS2RNA_GetSjRmt");
typedef struct AdxtHdrInfo_x0017C8A8 { int fmt; int sfreq; int nch; int bps; int nsmpl; int lptype; int lpstart; int lpend; } AdxtHdrInfo_x0017C8A8;
enum AdxtStat_x0017C8A8 { ADXT_STAT_STOP_x0017C8A8 = 0, ADXT_STAT_DECINFO_x0017C8A8 = 1, ADXT_STAT_PREP_x0017C8A8 = 2, ADXT_STAT_PLAYING_x0017C8A8 = 3, ADXT_STAT_DECEND_x0017C8A8 = 4, ADXT_STAT_PLAYEND_x0017C8A8 = 5, ADXT_STAT_ERROR_x0017C8A8 = 6 };
enum AdxtPmode_x0017C8A8 { ADXT_PMODE_FNAME_x0017C8A8 = 0, ADXT_PMODE_AFS_x0017C8A8 = 1, ADXT_PMODE_MEM_x0017C8A8 = 2, ADXT_PMODE_SJ_x0017C8A8 = 3, ADXT_PMODE_SLFILE_x0017C8A8 = 4 };
enum AdxtRmode_x0017C8A8 { ADXT_RMODE_NOACT_x0017C8A8 = 0, ADXT_RMODE_STOP_x0017C8A8 = 1, ADXT_RMODE_REPLAY_x0017C8A8 = 2 };
enum AdxtErrCode_x0017C8A8 { ADXT_ERR_OK_x0017C8A8 = 0, ADXT_ERR_SHRTBUF_x0017C8A8 = -1, ADXT_ERR_SNDBLK_x0017C8A8 = -2 };
typedef struct AdxtObj_x0017C8A8 { signed char used; signed char stat; signed char pmode; signed char maxnch; AdxSjdObj_x0017C8A8 *sjd; AdxStmObj_x0017C8A8 *stm; Ps2Rna_x0017C8A8 *rna; SfdSj_x0017C8A8 *sjf; SfdSj_x0017C8A8 *sji; SfdSj_x0017C8A8 *sjo[2]; char *ibuf; int ibufbsize; int ibufxsize; char *obuf; int obufsize; int obufdist; int svrfreq; short maxsct; short minsct; short outvol; short outpan[2]; short outbalance; int maxdecsmpl; int lpcnt; int lp_skiplen; int trp; int wpos; int mofst; short ercode; int edecpos; short edeccnt; short eshrtcnt; signed char lpflg; signed char autorcvr; signed char fltmode; signed char execflag; signed char pstwait_flag; signed char pstready_flag; signed char pause_flag; AdxAmpObj_x0017C8A8 *amp; SfdSj_x0017C8A8 *ampsji[2]; SfdSj_x0017C8A8 *ampsjo[2]; int time_ofst; int lesct; int trpnsmpl; LscObj_x0017C8A8 *lsc; signed char lnkflg; unsigned int vtime; int vbase; int decofst; int pad_nsmpl; signed char stm_req; char *fnbuf; char *fname; void *dir; int ofst; int nsct; } AdxtObj_x0017C8A8;
typedef void (*AdxtHookFunc_x0017C8A8)(AdxtObj_x0017C8A8 *adxt);
typedef void (*AdxtFltFunc_x0017C8A8)(void *obj, int ch, char *data, int len);
typedef void (*AdxtDecFunc_x0017C8A8)(void *obj, int nsmpl, int nbyte);
typedef void (*AdxtErrFunc_x0017C8A8)(void *obj, char *message);
typedef void (*AdxtDecInfoFunc_x0017C8A8)(AdxtObj_x0017C8A8 *adxt, int sfreq, int nch, int total_nsmpl);
typedef struct AcxEntry_x0017C8A8 { int ofst; int len; } AcxEntry_x0017C8A8;
typedef struct AcxHeader_x0017C8A8 { int id; int count; AcxEntry_x0017C8A8 ent[1]; } AcxHeader_x0017C8A8;
extern AdxtObj_x0017C8A8 adxt_obj_x0017C8A8[16] __asm__("adxt_obj");
extern int adxt_output_mono_x0017C8A8 __asm__("adxt_output_mono");
extern AdxtHookFunc_x0017C8A8 adxt_detach_pl2_x0017C8A8 __asm__("adxt_detach_pl2");
AdxtObj_x0017C8A8 *ADXT_Create_x0017C8A8(int maxnch, char *work, int worksize) __asm__("ADXT_Create");
AdxtObj_x0017C8A8 *ADXT_CreatePl2_x0017C8A8(char *work, int worksize) __asm__("ADXT_CreatePl2");
void ADXT_DetachAhx_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_DetachAhx");
void ADXT_DetachPl2_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_DetachPl2");
void ADXT_Destroy_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_Destroy");
void ADXT_DestroyAll_x0017C8A8(void) __asm__("ADXT_DestroyAll");
void ADXT_CloseAllHandles_x0017C8A8(void) __asm__("ADXT_CloseAllHandles");
void adxt_start_sj_x0017C8A8(AdxtObj_x0017C8A8 *adxt, SfdSj_x0017C8A8 *sji) __asm__("adxt_start_sj");
void adxt_start_stm_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *fname, void *dir, int ofst, int nsct) __asm__("adxt_start_stm");
void ADXT_StartSj_x0017C8A8(AdxtObj_x0017C8A8 *adxt, SfdSj_x0017C8A8 *sj) __asm__("ADXT_StartSj");
void ADXT_StopWithoutLsc_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_StopWithoutLsc");
void ADXT_Stop_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_Stop");
int ADXT_GetStat_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetStat");
void ADXT_SetTimeMode_x0017C8A8(int mode) __asm__("ADXT_SetTimeMode");
void ADXT_GetTimeSfreq_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int *ncount, int *tscale) __asm__("ADXT_GetTimeSfreq");
void ADXT_GetTime_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int *ncount, int *tscale) __asm__("ADXT_GetTime");
int ADXT_GetTimeReal_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetTimeReal");
int ADXT_GetNumSmpl_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetNumSmpl");
int ADXT_GetSfreq_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetSfreq");
int ADXT_GetNumChan_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetNumChan");
int ADXT_GetHdrLen_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetHdrLen");
int ADXT_GetFmtBps_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetFmtBps");
void ADXT_SetOutPan_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ch, int pan) __asm__("ADXT_SetOutPan");
int ADXT_GetOutPan_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ch) __asm__("ADXT_GetOutPan");
void ADXT_SetOutBalance_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int balance) __asm__("ADXT_SetOutBalance");
int ADXT_GetOutBalance_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetOutBalance");
void ADXT_SetOutVol_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int vol) __asm__("ADXT_SetOutVol");
int ADXT_GetOutVol_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetOutVol");
short ADXT_GetDefOutVol_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetDefOutVol");
short ADXT_GetDefPan_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ch) __asm__("ADXT_GetDefPan");
char *ADXT_GetDataId_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetDataId");
char *ADXT_GetHdrDataId_x0017C8A8(unsigned char *hdr) __asm__("ADXT_GetHdrDataId");
void ADXT_SetDefSvrFreq_x0017C8A8(int freq) __asm__("ADXT_SetDefSvrFreq");
void ADXT_SetSvrFreq_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int freq) __asm__("ADXT_SetSvrFreq");
void ADXT_SetReloadTime_x0017C8A8(AdxtObj_x0017C8A8 *adxt, float time, int nch, int sfreq) __asm__("ADXT_SetReloadTime");
void ADXT_ResetReloadTime_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ResetReloadTime");
void ADXT_SetReloadSct_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int minsct) __asm__("ADXT_SetReloadSct");
short ADXT_GetReloadSct_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetReloadSct");
int ADXT_GetNumSctIbuf_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetNumSctIbuf");
int ADXT_GetNumSmplObuf_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ch) __asm__("ADXT_GetNumSmplObuf");
float ADXT_GetIbufRemainTime_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetIbufRemainTime");
int ADXT_IsIbufSafety_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_IsIbufSafety");
void ADXT_SetAutoRcvr_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int rmode) __asm__("ADXT_SetAutoRcvr");
int ADXT_IsCompleted_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_IsCompleted");
void ADXT_ExecServer_x0017C8A8(void) __asm__("ADXT_ExecServer");
int ADXT_GetErrCode_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetErrCode");
void ADXT_ClearErrCode_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ClearErrCode");
int ADXT_GetLpCnt_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetLpCnt");
void ADXT_SetLpFlg_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int flg) __asm__("ADXT_SetLpFlg");
SfdSj_x0017C8A8 *ADXT_GetInputSj_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetInputSj");
void ADXT_SetWaitPlayStart_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int flg) __asm__("ADXT_SetWaitPlayStart");
int ADXT_IsReadyPlayStart_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_IsReadyPlayStart");
void ADXT_Pause_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int sw) __asm__("ADXT_Pause");
int ADXT_GetStatPause_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetStatPause");
void ADXT_SetOutMode_x0017C8A8(int mode) __asm__("ADXT_SetOutMode");
int ADXT_GetOutMode_x0017C8A8(void) __asm__("ADXT_GetOutMode");
void ADXT_SetTranspose_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int fxch, int fxlev) __asm__("ADXT_SetTranspose");
void ADXT_GetTranspose_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int *fxch, int *fxlev) __asm__("ADXT_GetTranspose");
AdxStmObj_x0017C8A8 *ADXT_GetStm_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetStm");
void ADXT_TermSupply_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_TermSupply");
void ADXT_SetDrctLvl_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int lvl) __asm__("ADXT_SetDrctLvl");
int ADXT_GetDrctLvl_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetDrctLvl");
void ADXT_SetFilter_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int coff, int q) __asm__("ADXT_SetFilter");
void ADXT_GetFilter_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int *coff, int *q) __asm__("ADXT_GetFilter");
void ADXT_SetSurround_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int sw) __asm__("ADXT_SetSurround");
void ADXT_GetSurround_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int *sw) __asm__("ADXT_GetSurround");
void ADXT_EntryErrFunc_x0017C8A8(AdxtErrFunc_x0017C8A8 func, void *obj) __asm__("ADXT_EntryErrFunc");
int ADXT_DiscardSmpl_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int nsmpl) __asm__("ADXT_DiscardSmpl");
int ADXT_GetTimeOfst_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetTimeOfst");
void ADXT_SetTimeOfst_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ofst) __asm__("ADXT_SetTimeOfst");
void ADXT_AdjustSmpl_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int nsmpl) __asm__("ADXT_AdjustSmpl");
void ADXT_SetLnkSw_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int sw) __asm__("ADXT_SetLnkSw");
int ADXT_GetLnkSw_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetLnkSw");
void ADXT_EntryFltFunc_x0017C8A8(AdxtObj_x0017C8A8 *adxt, AdxtFltFunc_x0017C8A8 func, void *obj) __asm__("ADXT_EntryFltFunc");
int ADXT_GetDecNumSmpl_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetDecNumSmpl");
int ADXT_GetDecDtLen_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetDecDtLen");
void ADXT_EntryDecFunc_x0017C8A8(AdxtObj_x0017C8A8 *adxt, AdxtDecFunc_x0017C8A8 func, void *obj) __asm__("ADXT_EntryDecFunc");
int ADXT_IsHeader_x0017C8A8(unsigned char *buf, int len, int *hdrlen) __asm__("ADXT_IsHeader");
int ADXT_IsEndcode_x0017C8A8(unsigned char *buf, int len, int *ftrlen) __asm__("ADXT_IsEndcode");
int ADXT_InsertSilence_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int nch, int nsmpl) __asm__("ADXT_InsertSilence");
void ADXT_SetOutputMono_x0017C8A8(int flag) __asm__("ADXT_SetOutputMono");
void ADXT_SetKeyString_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *str) __asm__("ADXT_SetKeyString");
void ADXT_SetDefKeyString_x0017C8A8(char *str) __asm__("ADXT_SetDefKeyString");
Ps2Rna_x0017C8A8 *ADXT_GetRna_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetRna");
void ADXT_ResetDefFmt_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ResetDefFmt");
void ADXT_StartAfs_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ptid, int flid) __asm__("ADXT_StartAfs");
void ADXT_StartFnameRange_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *fname, int ofst, int nsct) __asm__("ADXT_StartFnameRange");
void ADXT_StartFname_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *fname) __asm__("ADXT_StartFname");
void ADXT_StartMem_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *data) __asm__("ADXT_StartMem");
void ADXT_StartMem2_x0017C8A8(AdxtObj_x0017C8A8 *adxt, char *data, int size) __asm__("ADXT_StartMem2");
void ADXT_StartMemIdx_x0017C8A8(AdxtObj_x0017C8A8 *adxt, AcxHeader_x0017C8A8 *acx, int no) __asm__("ADXT_StartMemIdx");
void ADXT_ConfigVsyncSvr_x0017C8A8(int value) __asm__("ADXT_ConfigVsyncSvr");
void ADXT_VsyncProc_x0017C8A8(void) __asm__("ADXT_VsyncProc");
void ADXT_Init_x0017C8A8(void) __asm__("ADXT_Init");
void ADXT_ResetLibrary_x0017C8A8(void) __asm__("ADXT_ResetLibrary");
void ADXT_Finish_x0017C8A8(void) __asm__("ADXT_Finish");
void ADXT_InsertHdrSfa_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int nch, int sfreq, int nsmpl) __asm__("ADXT_InsertHdrSfa");
AdxtDecInfoFunc_x0017C8A8 ADXT_EntryDecInfoFunc_x0017C8A8(AdxtDecInfoFunc_x0017C8A8 func) __asm__("ADXT_EntryDecInfoFunc");
void ADXT_ExecErrChk_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ExecErrChk");
void ADXT_ExecRdErrChk_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ExecRdErrChk");
void ADXT_ExecRdCompChk_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ExecRdCompChk");
void ADXT_ExecHndl_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ExecHndl");
int ADXT_GetStatRead_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetStatRead");
void ADXT_EntryFname_x0017C8A8(AdxtObj_x0017C8A8 *adxt, const char *fname) __asm__("ADXT_EntryFname");
void ADXT_EntryFnameRange_x0017C8A8(AdxtObj_x0017C8A8 *adxt, const char *fname, int ofst, int nsct) __asm__("ADXT_EntryFnameRange");
void ADXT_EntryAfs_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ptid, int flid) __asm__("ADXT_EntryAfs");
void ADXT_StartSeamless_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_StartSeamless");
void ADXT_SetSeamlessLp_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int sw) __asm__("ADXT_SetSeamlessLp");
void ADXT_StartFnameLp_x0017C8A8(AdxtObj_x0017C8A8 *adxt, const char *fname) __asm__("ADXT_StartFnameLp");
void ADXT_StartFnameRangeLp_x0017C8A8(AdxtObj_x0017C8A8 *adxt, const char *fname, int ofst, int nsct) __asm__("ADXT_StartFnameRangeLp");
void ADXT_StartAfsLp_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int ptid, unsigned int flid) __asm__("ADXT_StartAfsLp");
void ADXT_ReleaseSeamless_x0017C8A8(void) __asm__("ADXT_ReleaseSeamless");
int ADXT_GetNumFiles_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_GetNumFiles");
void ADXT_ResetEntry_x0017C8A8(AdxtObj_x0017C8A8 *adxt) __asm__("ADXT_ResetEntry");
void ADXT_AttachPl2_x0017C8A8(AdxtObj_x0017C8A8 *adxt, void *work, int wksize) __asm__("ADXT_AttachPl2");
void ADXT_SetPl2Pos_x0017C8A8(AdxtObj_x0017C8A8 *adxt, int x, int y) __asm__("ADXT_SetPl2Pos");
void ADXT_ExecFsSvr_x0017C8A8(void) __asm__("ADXT_ExecFsSvr");
void ADXT_ExecFsServer_x0017C8A8(void) __asm__("ADXT_ExecFsServer");
int ADXT_IsActiveFsSvr_x0017C8A8(void) __asm__("ADXT_IsActiveFsSvr");
void ADXT_GetHdrInfo_x0017C8A8(void *buf, int size, AdxtHdrInfo_x0017C8A8 *info) __asm__("ADXT_GetHdrInfo");
extern char mpv_tag_idcprec_x0017C8A8[] __asm__("mpv_tag_idcprec");
extern char mpv_tag_stccode_x0017C8A8[] __asm__("mpv_tag_stccode");
void MPV_SetUsrSj_x0017C8A8(MpvHn_x0017C8A8 *mpv, int index, SfdSj_x0017C8A8 *sj, M2vUsrDatFn_x0017C8A8 fn, void *obj) __asm__("MPV_SetUsrSj");
void MPV_SetPicUsrBuf_x0017C8A8(MpvHn_x0017C8A8 *mpv, char *buf, int size) __asm__("MPV_SetPicUsrBuf");
void MPV_GetPicUsr_x0017C8A8(MpvHn_x0017C8A8 *mpv, char **buf, int *len) __asm__("MPV_GetPicUsr");
int func_0017CBA8_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSjChunk_x0017C8A8 *buf) __asm__("func_0017CBA8");
int func_0017CA98_x0017C8A8(SfdSj_x0017C8A8 *sj) __asm__("func_0017CA98");
int func_0017E198_x0017C8A8(MpvHn_x0017C8A8 *mpv, int mask, SfdSj_x0017C8A8 *sj) __asm__("func_0017E198");
int func_0017CC50_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("func_0017CC50");
int func_0017D308_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("func_0017D308");
int func_0017D578_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("func_0017D578");
int func_0017DB18_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj, int type) __asm__("func_0017DB18");
int func_0017DBD8_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj, int type) __asm__("func_0017DBD8");
int func_0017C8A8_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) __asm__("func_0017C8A8");
int func_0017C8A8_x0017C8A8(MpvHn_x0017C8A8 *mpv, SfdSj_x0017C8A8 *sj) {
    SfdSjChunk_x0017C8A8 ck;
    SfdSjChunk_x0017C8A8 head;
    int type;
    unsigned int kind;
    int err;
    if (func_0017EB90_x0017C8A8(mpv) != 0) {
        return func_0017C2E0_x0017C8A8(0, 0xFF03020C);
    }
    mpv->picusr.len = 0;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, &ck);
    sj->vtbl->ungetChunk(sj, 1, &ck);
    head.data = ck.data;
    head.len = ck.len;
    if (func_0017CBA8_x0017C8A8(mpv, &head) == 2) {
        return func_0017EC60_x0017C8A8(mpv, sj);
    }
    type = 0;
    for (;;) {
        err = func_0017E198_x0017C8A8(mpv, -1, sj);
        if (err != 0) {
            return func_0017C2E0_x0017C8A8(mpv, err);
        }
        kind = func_0017CA98_x0017C8A8(sj);
        if (kind == 0 || (kind & 3) != 0) {
            break;
        }
        switch (kind) {
        case 64:
            type = 64;
            func_0017CC50_x0017C8A8(mpv, sj);
            break;
        case 8:
            type = 8;
            func_0017D308_x0017C8A8(mpv, sj);
            break;
        case 4:
            type = 4;
            func_0017D578_x0017C8A8(mpv, sj);
            break;
        case 16:
            func_0017DB18_x0017C8A8(mpv, sj, type);
            break;
        case 32:
            func_0017DBD8_x0017C8A8(mpv, sj, type);
            break;
        }
    }
    return 0;
}
typedef struct SfdSj_x0017CA98 SfdSj_x0017CA98;
typedef struct SfdSjChunk_x0017CA98 {
    char *data;
    int len;
} SfdSjChunk_x0017CA98;
typedef struct SfdSjVtbl_x0017CA98 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017CA98 *sj);
    int (*getUuid)(SfdSj_x0017CA98 *sj);
    void (*reset)(SfdSj_x0017CA98 *sj);
    void (*getChunk)(SfdSj_x0017CA98 *sj, int id, int n, SfdSjChunk_x0017CA98 *ck);
    void (*ungetChunk)(SfdSj_x0017CA98 *sj, int id, SfdSjChunk_x0017CA98 *ck);
    void (*putChunk)(SfdSj_x0017CA98 *sj, int id, SfdSjChunk_x0017CA98 *ck);
    int (*getNumData)(SfdSj_x0017CA98 *sj, int id);
} SfdSjVtbl_x0017CA98;
struct SfdSj_x0017CA98 {
    SfdSjVtbl_x0017CA98 *vtbl;
};
struct SfdSj_x0017CA98;
typedef struct M2vErrInf_x0017CA98 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017CA98;
typedef struct Mpeg2Ext_x0017CA98 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017CA98;
typedef enum M2vFrameRate_x0017CA98 {
    M2V_FRAME_RATE_FORBIDDEN_x0017CA98 = 0
} M2vFrameRate_x0017CA98;
typedef enum M2vPicType_x0017CA98 {
    M2V_PICTYPE_I_x0017CA98 = 1,
    M2V_PICTYPE_P_x0017CA98 = 2,
    M2V_PICTYPE_B_x0017CA98 = 3,
    M2V_PICTYPE_D_x0017CA98 = 4
} M2vPicType_x0017CA98;
typedef enum M2vPicStruct_x0017CA98 {
    M2V_PICSTRUCT_TOP_FIELD_x0017CA98 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017CA98 = 2,
    M2V_PICSTRUCT_FRAME_x0017CA98 = 3
} M2vPicStruct_x0017CA98;
typedef enum M2vPicAtrF64_x0017CA98 {
    M2V_PICATR_F64_0_x0017CA98 = 0
} M2vPicAtrF64_x0017CA98;
typedef struct M2vPicAtr_x0017CA98 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017CA98 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017CA98 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017CA98 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017CA98 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017CA98;
typedef void (*M2vUsrDatFn_x0017CA98)(void *obj, int level);
typedef struct M2vUsrSj_x0017CA98 {
    struct SfdSj_x0017CA98 *sj;
    M2vUsrDatFn_x0017CA98 fn;
    void *obj;
} M2vUsrSj_x0017CA98;
typedef struct M2vPicUsr_x0017CA98 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017CA98;
typedef void (*M2vCondFn_x0017CA98)();
typedef struct M2vObj_x0017CA98 {
    int stat;
    M2vErrInf_x0017CA98 err;
    M2vCondFn_x0017CA98 cond[16];
    M2vPicAtr_x0017CA98 picatr;
    char pad216[64];
    M2vUsrSj_x0017CA98 usrsj[4];
    M2vPicUsr_x0017CA98 picusr;
    char pad340[12];
    Mpeg2Ext_x0017CA98 ext;
    char pad1656[8];
} M2vObj_x0017CA98;
extern void M2V_SetErrFunc_x0017CA98(M2vObj_x0017CA98 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
int MPV_CheckDelim_x0017CA98(const unsigned char *p) __asm__("func_0017B420");
extern void mpvhook_SetErrFunc_x0017CA98(M2vObj_x0017CA98 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017CA98;
typedef struct AdxPdObj_x0017CA98 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017CA98;
typedef struct AdxDecPara_x0017CA98 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017CA98;
struct Pl2Enc_x0017CA98;
typedef struct AdxbObj_x0017CA98 AdxbObj_x0017CA98;
typedef short *(*AdxbGetWrFunc_x0017CA98)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017CA98)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017CA98 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017CA98 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017CA98 dp;
    AdxbGetWrFunc_x0017CA98 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017CA98 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017CA98 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017CA98(AdxbObj_x0017CA98 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017CA98 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017CA98 *adxb;
    SfdSj_x0017CA98 *sji;
    SfdSj_x0017CA98 *sjo[2];
    SfdSjChunk_x0017CA98 cki;
    SfdSjChunk_x0017CA98 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017CA98;
extern void ADXSJD_EntryFltFunc_x0017CA98(AdxSjdObj_x0017CA98 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017CA98(AdxSjdObj_x0017CA98 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017CA98)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017CA98)(CvFsErrFn_x0017CA98 func, void *obj);
typedef int (*CvFsPathFn_x0017CA98)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017CA98)(void);
typedef int (*CvFsOpenFn_x0017CA98)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017CA98)(int fd);
typedef int (*CvFsFdIntFn_x0017CA98)(int fd);
typedef int (*CvFsSeekFn_x0017CA98)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017CA98)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017CA98)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017CA98)(void);
typedef int (*CvFsLoadDirInfoFn_x0017CA98)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017CA98)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017CA98)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017CA98 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017CA98 entry_err_func;
    CvFsPathFn_x0017CA98 get_file_size;
    CvFsGetFreeSizeFn_x0017CA98 get_free_size;
    CvFsOpenFn_x0017CA98 open;
    CvFsFdFn_x0017CA98 close;
    CvFsSeekFn_x0017CA98 seek;
    CvFsFdIntFn_x0017CA98 tell;
    CvFsXferFn_x0017CA98 req_rd;
    CvFsXferFn_x0017CA98 req_wr;
    CvFsFdFn_x0017CA98 stop_tr;
    CvFsFdIntFn_x0017CA98 get_stat;
    CvFsFdIntFn_x0017CA98 get_sct_len;
    CvFsSetSctLenFn_x0017CA98 set_sct_len;
    CvFsFdIntFn_x0017CA98 get_num_tr;
    CvFsPathFn_x0017CA98 change_dir;
    CvFsPathFn_x0017CA98 is_exist_file;
    CvFsGetNumFilesFn_x0017CA98 get_num_files;
    CvFsLoadDirInfoFn_x0017CA98 load_dir_info;
    CvFsFdIntFn_x0017CA98 get_max_byte_rate;
    CvFsPathFn_x0017CA98 make_dir;
    CvFsPathFn_x0017CA98 remove_dir;
    CvFsPathFn_x0017CA98 delete_file;
    CvFsGetFileSizeExFn_x0017CA98 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017CA98 opt_fn2;
} CvFsVtbl_x0017CA98;
typedef struct CvFsHandle_x0017CA98 {
    CvFsVtbl_x0017CA98 *vtbl;
    int fd;
} CvFsHandle_x0017CA98;
extern CvFsVtbl_x0017CA98 *addDevice_x0017CA98(char *devname, CvFsVtbl_x0017CA98 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017CA98 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017CA98 *sj;
    CvFsHandle_x0017CA98 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017CA98 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017CA98;
extern void ADXSTM_EntryEosFunc_x0017CA98(AdxStmObj_x0017CA98 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017CA98(void *, size_t_x0017CA98, size_t_x0017CA98, int (*)(const void *, const void *)) __asm__("qsort");
int func_0017CA98_x0017CA98(SfdSj_x0017CA98 *sj) __asm__("func_0017CA98");
/* mpvhdec_GetCurDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017CA98_x0017CA98(SfdSj_x0017CA98 *sj) {
    SfdSjChunk_x0017CA98 ck;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, &ck);
    sj->vtbl->ungetChunk(sj, 1, &ck);
    if (ck.len < 4) {
        return 0;
    }
    return MPV_CheckDelim_x0017CA98((unsigned char *)ck.data);
}
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
typedef struct SfdSj_x0017CBA8 SfdSj_x0017CBA8;
typedef struct SfdSjChunk_x0017CBA8 {
    char *data;
    int len;
} SfdSjChunk_x0017CBA8;
typedef struct SfdSjVtbl_x0017CBA8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017CBA8 *sj);
    int (*getUuid)(SfdSj_x0017CBA8 *sj);
    void (*reset)(SfdSj_x0017CBA8 *sj);
    void (*getChunk)(SfdSj_x0017CBA8 *sj, int id, int n, SfdSjChunk_x0017CBA8 *ck);
    void (*ungetChunk)(SfdSj_x0017CBA8 *sj, int id, SfdSjChunk_x0017CBA8 *ck);
    void (*putChunk)(SfdSj_x0017CBA8 *sj, int id, SfdSjChunk_x0017CBA8 *ck);
    int (*getNumData)(SfdSj_x0017CBA8 *sj, int id);
} SfdSjVtbl_x0017CBA8;
struct SfdSj_x0017CBA8 {
    SfdSjVtbl_x0017CBA8 *vtbl;
};
struct SfdSj_x0017CBA8;
typedef struct M2vErrInf_x0017CBA8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017CBA8;
typedef struct Mpeg2Ext_x0017CBA8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017CBA8;
typedef enum M2vFrameRate_x0017CBA8 {
    M2V_FRAME_RATE_FORBIDDEN_x0017CBA8 = 0
} M2vFrameRate_x0017CBA8;
typedef enum M2vPicType_x0017CBA8 {
    M2V_PICTYPE_I_x0017CBA8 = 1,
    M2V_PICTYPE_P_x0017CBA8 = 2,
    M2V_PICTYPE_B_x0017CBA8 = 3,
    M2V_PICTYPE_D_x0017CBA8 = 4
} M2vPicType_x0017CBA8;
typedef enum M2vPicStruct_x0017CBA8 {
    M2V_PICSTRUCT_TOP_FIELD_x0017CBA8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017CBA8 = 2,
    M2V_PICSTRUCT_FRAME_x0017CBA8 = 3
} M2vPicStruct_x0017CBA8;
typedef enum M2vPicAtrF64_x0017CBA8 {
    M2V_PICATR_F64_0_x0017CBA8 = 0
} M2vPicAtrF64_x0017CBA8;
typedef struct M2vPicAtr_x0017CBA8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017CBA8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017CBA8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017CBA8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017CBA8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017CBA8;
typedef void (*M2vUsrDatFn_x0017CBA8)(void *obj, int level);
typedef struct M2vUsrSj_x0017CBA8 {
    struct SfdSj_x0017CBA8 *sj;
    M2vUsrDatFn_x0017CBA8 fn;
    void *obj;
} M2vUsrSj_x0017CBA8;
typedef struct M2vPicUsr_x0017CBA8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017CBA8;
typedef void (*M2vCondFn_x0017CBA8)();
typedef struct M2vObj_x0017CBA8 {
    int stat;
    M2vErrInf_x0017CBA8 err;
    M2vCondFn_x0017CBA8 cond[16];
    M2vPicAtr_x0017CBA8 picatr;
    char pad216[64];
    M2vUsrSj_x0017CBA8 usrsj[4];
    M2vPicUsr_x0017CBA8 picusr;
    char pad340[12];
    Mpeg2Ext_x0017CBA8 ext;
    char pad1656[8];
} M2vObj_x0017CBA8;
extern void M2V_SetErrFunc_x0017CBA8(M2vObj_x0017CBA8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017CBA8 {
    MPV_UDLVL_SEQ_x0017CBA8 = 1,
    MPV_UDLVL_GOP_x0017CBA8 = 2,
    MPV_UDLVL_PIC_x0017CBA8 = 3
} MpvUdLevel_x0017CBA8;
typedef struct MpvSeqInf_x0017CBA8 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017CBA8;
typedef struct MpvMotionRange_x0017CBA8 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017CBA8;
typedef struct MpvErrObj_x0017CBA8 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017CBA8;
typedef struct MpvHn_x0017CBA8 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017CBA8 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017CBA8 picInf;
    MpvErrObj_x0017CBA8 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017CBA8 fwd;
    char pad764[20];
    MpvMotionRange_x0017CBA8 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017CBA8 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017CBA8 *lower;
    MpvUdLevel_x0017CBA8 usrDatLevel;
    M2vUsrSj_x0017CBA8 bufEnt[4];
    M2vPicUsr_x0017CBA8 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017CBA8;
int MPV_CheckDelim_x0017CBA8(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x0017CBA8(char *buf, int len, int mask) __asm__("func_0017B5B8");
extern void mpvhook_SetErrFunc_x0017CBA8(M2vObj_x0017CBA8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017CBA8;
typedef struct AdxPdObj_x0017CBA8 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017CBA8;
typedef struct AdxDecPara_x0017CBA8 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017CBA8;
struct Pl2Enc_x0017CBA8;
typedef struct AdxbObj_x0017CBA8 AdxbObj_x0017CBA8;
typedef short *(*AdxbGetWrFunc_x0017CBA8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017CBA8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017CBA8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017CBA8 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017CBA8 dp;
    AdxbGetWrFunc_x0017CBA8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017CBA8 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017CBA8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017CBA8(AdxbObj_x0017CBA8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017CBA8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017CBA8 *adxb;
    SfdSj_x0017CBA8 *sji;
    SfdSj_x0017CBA8 *sjo[2];
    SfdSjChunk_x0017CBA8 cki;
    SfdSjChunk_x0017CBA8 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017CBA8;
extern void ADXSJD_EntryFltFunc_x0017CBA8(AdxSjdObj_x0017CBA8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017CBA8(AdxSjdObj_x0017CBA8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017CBA8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017CBA8)(CvFsErrFn_x0017CBA8 func, void *obj);
typedef int (*CvFsPathFn_x0017CBA8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017CBA8)(void);
typedef int (*CvFsOpenFn_x0017CBA8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017CBA8)(int fd);
typedef int (*CvFsFdIntFn_x0017CBA8)(int fd);
typedef int (*CvFsSeekFn_x0017CBA8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017CBA8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017CBA8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017CBA8)(void);
typedef int (*CvFsLoadDirInfoFn_x0017CBA8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017CBA8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017CBA8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017CBA8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017CBA8 entry_err_func;
    CvFsPathFn_x0017CBA8 get_file_size;
    CvFsGetFreeSizeFn_x0017CBA8 get_free_size;
    CvFsOpenFn_x0017CBA8 open;
    CvFsFdFn_x0017CBA8 close;
    CvFsSeekFn_x0017CBA8 seek;
    CvFsFdIntFn_x0017CBA8 tell;
    CvFsXferFn_x0017CBA8 req_rd;
    CvFsXferFn_x0017CBA8 req_wr;
    CvFsFdFn_x0017CBA8 stop_tr;
    CvFsFdIntFn_x0017CBA8 get_stat;
    CvFsFdIntFn_x0017CBA8 get_sct_len;
    CvFsSetSctLenFn_x0017CBA8 set_sct_len;
    CvFsFdIntFn_x0017CBA8 get_num_tr;
    CvFsPathFn_x0017CBA8 change_dir;
    CvFsPathFn_x0017CBA8 is_exist_file;
    CvFsGetNumFilesFn_x0017CBA8 get_num_files;
    CvFsLoadDirInfoFn_x0017CBA8 load_dir_info;
    CvFsFdIntFn_x0017CBA8 get_max_byte_rate;
    CvFsPathFn_x0017CBA8 make_dir;
    CvFsPathFn_x0017CBA8 remove_dir;
    CvFsPathFn_x0017CBA8 delete_file;
    CvFsGetFileSizeExFn_x0017CBA8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017CBA8 opt_fn2;
} CvFsVtbl_x0017CBA8;
typedef struct CvFsHandle_x0017CBA8 {
    CvFsVtbl_x0017CBA8 *vtbl;
    int fd;
} CvFsHandle_x0017CBA8;
extern CvFsVtbl_x0017CBA8 *addDevice_x0017CBA8(char *devname, CvFsVtbl_x0017CBA8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017CBA8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017CBA8 *sj;
    CvFsHandle_x0017CBA8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017CBA8 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017CBA8;
extern void ADXSTM_EntryEosFunc_x0017CBA8(AdxStmObj_x0017CBA8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017CBA8(void *, size_t_x0017CBA8, size_t_x0017CBA8, int (*)(const void *, const void *)) __asm__("qsort");
int func_0017CBA8_x0017CBA8(MpvHn_x0017CBA8 *mpv, SfdSjChunk_x0017CBA8 *buf) __asm__("func_0017CBA8");
/* mpvhdec_GetCodec: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017CBA8_x0017CBA8(MpvHn_x0017CBA8 *mpv, SfdSjChunk_x0017CBA8 *buf) {
    char *p;
    int kind;
    if (mpv->strmType != 0) {
        return mpv->strmType;
    }
    p = MPV_SearchDelim_x0017CBA8(buf->data, buf->len, 64);
    if (p == 0) {
        return mpv->strmType;
    }
    p += 4;
    p = MPV_SearchDelim_x0017CBA8(p, buf->len - (p - buf->data), -1);
    if (p == 0) {
        return mpv->strmType;
    }
    kind = MPV_CheckDelim_x0017CBA8((unsigned char *)p);
    if (kind & 0x10) {
        mpv->strmType = 2;
    } else if (kind != 0) {
        mpv->strmType = 1;
    }
    return mpv->strmType;
}
typedef struct SfdSj_x0017CC50 SfdSj_x0017CC50;
typedef struct SfdSjChunk_x0017CC50 {
    char *data;
    int len;
} SfdSjChunk_x0017CC50;
typedef struct SfdSjVtbl_x0017CC50 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017CC50 *sj);
    int (*getUuid)(SfdSj_x0017CC50 *sj);
    void (*reset)(SfdSj_x0017CC50 *sj);
    void (*getChunk)(SfdSj_x0017CC50 *sj, int id, int n, SfdSjChunk_x0017CC50 *ck);
    void (*ungetChunk)(SfdSj_x0017CC50 *sj, int id, SfdSjChunk_x0017CC50 *ck);
    void (*putChunk)(SfdSj_x0017CC50 *sj, int id, SfdSjChunk_x0017CC50 *ck);
    int (*getNumData)(SfdSj_x0017CC50 *sj, int id);
} SfdSjVtbl_x0017CC50;
struct SfdSj_x0017CC50 {
    SfdSjVtbl_x0017CC50 *vtbl;
};
void SJ_SplitChunk_x0017CC50(SfdSjChunk_x0017CC50 *ck, int nbyte, SfdSjChunk_x0017CC50 *head, SfdSjChunk_x0017CC50 *rest) __asm__("func_0016F050");
struct SfdSj_x0017CC50;
typedef struct M2vErrInf_x0017CC50 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017CC50;
typedef struct Mpeg2Ext_x0017CC50 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017CC50;
typedef enum M2vFrameRate_x0017CC50 {
    M2V_FRAME_RATE_FORBIDDEN_x0017CC50 = 0
} M2vFrameRate_x0017CC50;
typedef enum M2vPicType_x0017CC50 {
    M2V_PICTYPE_I_x0017CC50 = 1,
    M2V_PICTYPE_P_x0017CC50 = 2,
    M2V_PICTYPE_B_x0017CC50 = 3,
    M2V_PICTYPE_D_x0017CC50 = 4
} M2vPicType_x0017CC50;
typedef enum M2vPicStruct_x0017CC50 {
    M2V_PICSTRUCT_TOP_FIELD_x0017CC50 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017CC50 = 2,
    M2V_PICSTRUCT_FRAME_x0017CC50 = 3
} M2vPicStruct_x0017CC50;
typedef enum M2vPicAtrF64_x0017CC50 {
    M2V_PICATR_F64_0_x0017CC50 = 0
} M2vPicAtrF64_x0017CC50;
typedef struct M2vPicAtr_x0017CC50 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017CC50 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017CC50 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017CC50 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017CC50 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017CC50;
typedef void (*M2vUsrDatFn_x0017CC50)(void *obj, int level);
typedef struct M2vUsrSj_x0017CC50 {
    struct SfdSj_x0017CC50 *sj;
    M2vUsrDatFn_x0017CC50 fn;
    void *obj;
} M2vUsrSj_x0017CC50;
typedef struct M2vPicUsr_x0017CC50 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017CC50;
typedef void (*M2vCondFn_x0017CC50)();
typedef struct M2vObj_x0017CC50 {
    int stat;
    M2vErrInf_x0017CC50 err;
    M2vCondFn_x0017CC50 cond[16];
    M2vPicAtr_x0017CC50 picatr;
    char pad216[64];
    M2vUsrSj_x0017CC50 usrsj[4];
    M2vPicUsr_x0017CC50 picusr;
    char pad340[12];
    Mpeg2Ext_x0017CC50 ext;
    char pad1656[8];
} M2vObj_x0017CC50;
extern void M2V_SetErrFunc_x0017CC50(M2vObj_x0017CC50 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017CC50 {
    MPV_UDLVL_SEQ_x0017CC50 = 1,
    MPV_UDLVL_GOP_x0017CC50 = 2,
    MPV_UDLVL_PIC_x0017CC50 = 3
} MpvUdLevel_x0017CC50;
typedef struct MpvSeqInf_x0017CC50 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017CC50;
typedef struct MpvMotionRange_x0017CC50 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017CC50;
typedef struct MpvErrObj_x0017CC50 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017CC50;
typedef struct MpvHn_x0017CC50 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017CC50 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017CC50 picInf;
    MpvErrObj_x0017CC50 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017CC50 fwd;
    char pad764[20];
    MpvMotionRange_x0017CC50 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017CC50 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017CC50 *lower;
    MpvUdLevel_x0017CC50 usrDatLevel;
    M2vUsrSj_x0017CC50 bufEnt[4];
    M2vPicUsr_x0017CC50 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017CC50;
extern void mpvhook_SetErrFunc_x0017CC50(M2vObj_x0017CC50 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017CC50;
typedef struct AdxPdObj_x0017CC50 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017CC50;
typedef struct AdxDecPara_x0017CC50 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017CC50;
struct Pl2Enc_x0017CC50;
typedef struct AdxbObj_x0017CC50 AdxbObj_x0017CC50;
typedef short *(*AdxbGetWrFunc_x0017CC50)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017CC50)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017CC50 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017CC50 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017CC50 dp;
    AdxbGetWrFunc_x0017CC50 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017CC50 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017CC50 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017CC50(AdxbObj_x0017CC50 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017CC50 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017CC50 *adxb;
    SfdSj_x0017CC50 *sji;
    SfdSj_x0017CC50 *sjo[2];
    SfdSjChunk_x0017CC50 cki;
    SfdSjChunk_x0017CC50 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017CC50;
extern void ADXSJD_EntryFltFunc_x0017CC50(AdxSjdObj_x0017CC50 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017CC50(AdxSjdObj_x0017CC50 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017CC50)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017CC50)(CvFsErrFn_x0017CC50 func, void *obj);
typedef int (*CvFsPathFn_x0017CC50)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017CC50)(void);
typedef int (*CvFsOpenFn_x0017CC50)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017CC50)(int fd);
typedef int (*CvFsFdIntFn_x0017CC50)(int fd);
typedef int (*CvFsSeekFn_x0017CC50)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017CC50)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017CC50)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017CC50)(void);
typedef int (*CvFsLoadDirInfoFn_x0017CC50)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017CC50)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017CC50)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017CC50 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017CC50 entry_err_func;
    CvFsPathFn_x0017CC50 get_file_size;
    CvFsGetFreeSizeFn_x0017CC50 get_free_size;
    CvFsOpenFn_x0017CC50 open;
    CvFsFdFn_x0017CC50 close;
    CvFsSeekFn_x0017CC50 seek;
    CvFsFdIntFn_x0017CC50 tell;
    CvFsXferFn_x0017CC50 req_rd;
    CvFsXferFn_x0017CC50 req_wr;
    CvFsFdFn_x0017CC50 stop_tr;
    CvFsFdIntFn_x0017CC50 get_stat;
    CvFsFdIntFn_x0017CC50 get_sct_len;
    CvFsSetSctLenFn_x0017CC50 set_sct_len;
    CvFsFdIntFn_x0017CC50 get_num_tr;
    CvFsPathFn_x0017CC50 change_dir;
    CvFsPathFn_x0017CC50 is_exist_file;
    CvFsGetNumFilesFn_x0017CC50 get_num_files;
    CvFsLoadDirInfoFn_x0017CC50 load_dir_info;
    CvFsFdIntFn_x0017CC50 get_max_byte_rate;
    CvFsPathFn_x0017CC50 make_dir;
    CvFsPathFn_x0017CC50 remove_dir;
    CvFsPathFn_x0017CC50 delete_file;
    CvFsGetFileSizeExFn_x0017CC50 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017CC50 opt_fn2;
} CvFsVtbl_x0017CC50;
typedef struct CvFsHandle_x0017CC50 {
    CvFsVtbl_x0017CC50 *vtbl;
    int fd;
} CvFsHandle_x0017CC50;
extern CvFsVtbl_x0017CC50 *addDevice_x0017CC50(char *devname, CvFsVtbl_x0017CC50 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017CC50 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017CC50 *sj;
    CvFsHandle_x0017CC50 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017CC50 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017CC50;
extern void ADXSTM_EntryEosFunc_x0017CC50(AdxStmObj_x0017CC50 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017CC50(void *, size_t_x0017CC50, size_t_x0017CC50, int (*)(const void *, const void *)) __asm__("qsort");
int func_0017CC50_x0017CC50(MpvHn_x0017CC50 *mpv, SfdSj_x0017CC50 *sj) __asm__("func_0017CC50");
/* mpv_DecSeqHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017CC50_x0017CC50(MpvHn_x0017CC50 *mpv, SfdSj_x0017CC50 *sj) {
    M2vPicAtr_x0017CC50 *inf = &mpv->picInf;
    SfdSjChunk_x0017CC50 *ck = &mpv->chunk;
    SfdSjChunk_x0017CC50 rest;
    unsigned int cur, nxt;
    unsigned int val;
    int bit;
    char *rp;
    char *end;
    int i;
    mpv->usrDatLevel = MPV_UDLVL_SEQ_x0017CC50;
    inf->shc_count++;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, ck);
    { (rp) = (char *)((int)(ck->data) & ~3); (bit) = ((char *)(ck->data) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) != 0) { (val) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (val) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 32 - (12)) { (bit) -= 32 - (12); if ((bit) != 0) { (cur) |= (nxt) >> ((12) - (bit)); (inf->horizontal_size) = (cur) >> (32 - (12)); (cur) = (nxt) << (bit); } else { (inf->horizontal_size) = (cur) >> (32 - (12)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (inf->horizontal_size) = (cur) >> (32 - (12)); (bit) += (12); (cur) <<= (12); } };
    { if ((bit) >= 32 - (12)) { (bit) -= 32 - (12); if ((bit) != 0) { (cur) |= (nxt) >> ((12) - (bit)); (inf->vertical_size) = (cur) >> (32 - (12)); (cur) = (nxt) << (bit); } else { (inf->vertical_size) = (cur) >> (32 - (12)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (inf->vertical_size) = (cur) >> (32 - (12)); (bit) += (12); (cur) <<= (12); } };
    { if ((bit) >= 32 - (4)) { (bit) -= 32 - (4); if ((bit) != 0) { (cur) |= (nxt) >> ((4) - (bit)); (mpv->pelAspectRatio) = (cur) >> (32 - (4)); (cur) = (nxt) << (bit); } else { (mpv->pelAspectRatio) = (cur) >> (32 - (4)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (mpv->pelAspectRatio) = (cur) >> (32 - (4)); (bit) += (4); (cur) <<= (4); } };
    { if ((bit) >= 32 - (4)) { (bit) -= 32 - (4); if ((bit) != 0) { (cur) |= (nxt) >> ((4) - (bit)); (val) = (cur) >> (32 - (4)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (4)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (4)); (bit) += (4); (cur) <<= (4); } };
    inf->frame_rate_code = val;
    { if ((bit) >= 32 - (18)) { (bit) -= 32 - (18); if ((bit) != 0) { (cur) |= (nxt) >> ((18) - (bit)); (mpv->bitRate) = (cur) >> (32 - (18)); (cur) = (nxt) << (bit); } else { (mpv->bitRate) = (cur) >> (32 - (18)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (mpv->bitRate) = (cur) >> (32 - (18)); (bit) += (18); (cur) <<= (18); } };
    { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
    { if ((bit) >= 32 - (10)) { (bit) -= 32 - (10); if ((bit) != 0) { (cur) |= (nxt) >> ((10) - (bit)); (mpv->vbvBufferSize) = (cur) >> (32 - (10)); (cur) = (nxt) << (bit); } else { (mpv->vbvBufferSize) = (cur) >> (32 - (10)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (mpv->vbvBufferSize) = (cur) >> (32 - (10)); (bit) += (10); (cur) <<= (10); } };
    { (mpv->constrainedParams) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val != 0) {
        for (i = 0; i < 64; i++) {
            { if ((bit) >= 32 - (8)) { (bit) -= 32 - (8); if ((bit) != 0) { (cur) |= (nxt) >> ((8) - (bit)); (val) = (cur) >> (32 - (8)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (8)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (8)); (bit) += (8); (cur) <<= (8); } };
        }
    }
    { (val) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    if (val != 0) {
        for (i = 0; i < 64; i++) {
            { if ((bit) >= 32 - (8)) { (bit) -= 32 - (8); if ((bit) != 0) { (cur) |= (nxt) >> ((8) - (bit)); (val) = (cur) >> (32 - (8)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (8)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (8)); (bit) += (8); (cur) <<= (8); } };
        }
    }
    inf->mb_width = (inf->horizontal_size + 15) >> 4;
    inf->mb_height = (inf->vertical_size + 15) >> 4;
    mpv->lastMbAddr = inf->mb_height * inf->mb_width - 1;
    inf->bit_rate = mpv->bitRate;
    inf->vbv_buffer_size = mpv->vbvBufferSize;
    inf->aspect_ratio_information = mpv->pelAspectRatio;
    inf->constrained_parameters_flag = mpv->constrainedParams;
    end = rp + ((bit + 7) >> 3);
    end -= 8;
    SJ_SplitChunk_x0017CC50(ck, end - mpv->chunk.data, ck, &rest);
    sj->vtbl->putChunk(sj, 0, ck);
    sj->vtbl->ungetChunk(sj, 1, &rest);
    return 0;
}
typedef struct SfdSj_x0017D308 SfdSj_x0017D308;
typedef struct SfdSjChunk_x0017D308 {
    char *data;
    int len;
} SfdSjChunk_x0017D308;
typedef struct SfdSjVtbl_x0017D308 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017D308 *sj);
    int (*getUuid)(SfdSj_x0017D308 *sj);
    void (*reset)(SfdSj_x0017D308 *sj);
    void (*getChunk)(SfdSj_x0017D308 *sj, int id, int n, SfdSjChunk_x0017D308 *ck);
    void (*ungetChunk)(SfdSj_x0017D308 *sj, int id, SfdSjChunk_x0017D308 *ck);
    void (*putChunk)(SfdSj_x0017D308 *sj, int id, SfdSjChunk_x0017D308 *ck);
    int (*getNumData)(SfdSj_x0017D308 *sj, int id);
} SfdSjVtbl_x0017D308;
struct SfdSj_x0017D308 {
    SfdSjVtbl_x0017D308 *vtbl;
};
void SJ_SplitChunk_x0017D308(SfdSjChunk_x0017D308 *ck, int nbyte, SfdSjChunk_x0017D308 *head, SfdSjChunk_x0017D308 *rest) __asm__("func_0016F050");
struct SfdSj_x0017D308;
typedef struct M2vErrInf_x0017D308 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017D308;
typedef struct Mpeg2Ext_x0017D308 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017D308;
typedef enum M2vFrameRate_x0017D308 {
    M2V_FRAME_RATE_FORBIDDEN_x0017D308 = 0
} M2vFrameRate_x0017D308;
typedef enum M2vPicType_x0017D308 {
    M2V_PICTYPE_I_x0017D308 = 1,
    M2V_PICTYPE_P_x0017D308 = 2,
    M2V_PICTYPE_B_x0017D308 = 3,
    M2V_PICTYPE_D_x0017D308 = 4
} M2vPicType_x0017D308;
typedef enum M2vPicStruct_x0017D308 {
    M2V_PICSTRUCT_TOP_FIELD_x0017D308 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017D308 = 2,
    M2V_PICSTRUCT_FRAME_x0017D308 = 3
} M2vPicStruct_x0017D308;
typedef enum M2vPicAtrF64_x0017D308 {
    M2V_PICATR_F64_0_x0017D308 = 0
} M2vPicAtrF64_x0017D308;
typedef struct M2vPicAtr_x0017D308 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017D308 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017D308 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017D308 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017D308 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017D308;
typedef void (*M2vUsrDatFn_x0017D308)(void *obj, int level);
typedef struct M2vUsrSj_x0017D308 {
    struct SfdSj_x0017D308 *sj;
    M2vUsrDatFn_x0017D308 fn;
    void *obj;
} M2vUsrSj_x0017D308;
typedef struct M2vPicUsr_x0017D308 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017D308;
typedef void (*M2vCondFn_x0017D308)();
typedef struct M2vObj_x0017D308 {
    int stat;
    M2vErrInf_x0017D308 err;
    M2vCondFn_x0017D308 cond[16];
    M2vPicAtr_x0017D308 picatr;
    char pad216[64];
    M2vUsrSj_x0017D308 usrsj[4];
    M2vPicUsr_x0017D308 picusr;
    char pad340[12];
    Mpeg2Ext_x0017D308 ext;
    char pad1656[8];
} M2vObj_x0017D308;
extern void M2V_SetErrFunc_x0017D308(M2vObj_x0017D308 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017D308 {
    MPV_UDLVL_SEQ_x0017D308 = 1,
    MPV_UDLVL_GOP_x0017D308 = 2,
    MPV_UDLVL_PIC_x0017D308 = 3
} MpvUdLevel_x0017D308;
typedef struct MpvSeqInf_x0017D308 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017D308;
typedef struct MpvMotionRange_x0017D308 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017D308;
typedef struct MpvErrObj_x0017D308 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017D308;
typedef struct MpvHn_x0017D308 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017D308 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017D308 picInf;
    MpvErrObj_x0017D308 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017D308 fwd;
    char pad764[20];
    MpvMotionRange_x0017D308 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017D308 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017D308 *lower;
    MpvUdLevel_x0017D308 usrDatLevel;
    M2vUsrSj_x0017D308 bufEnt[4];
    M2vPicUsr_x0017D308 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017D308;
extern void mpvhook_SetErrFunc_x0017D308(M2vObj_x0017D308 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017D308;
typedef struct AdxPdObj_x0017D308 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017D308;
typedef struct AdxDecPara_x0017D308 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017D308;
struct Pl2Enc_x0017D308;
typedef struct AdxbObj_x0017D308 AdxbObj_x0017D308;
typedef short *(*AdxbGetWrFunc_x0017D308)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017D308)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017D308 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017D308 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017D308 dp;
    AdxbGetWrFunc_x0017D308 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017D308 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017D308 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017D308(AdxbObj_x0017D308 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017D308 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017D308 *adxb;
    SfdSj_x0017D308 *sji;
    SfdSj_x0017D308 *sjo[2];
    SfdSjChunk_x0017D308 cki;
    SfdSjChunk_x0017D308 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017D308;
extern void ADXSJD_EntryFltFunc_x0017D308(AdxSjdObj_x0017D308 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017D308(AdxSjdObj_x0017D308 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017D308)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017D308)(CvFsErrFn_x0017D308 func, void *obj);
typedef int (*CvFsPathFn_x0017D308)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017D308)(void);
typedef int (*CvFsOpenFn_x0017D308)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017D308)(int fd);
typedef int (*CvFsFdIntFn_x0017D308)(int fd);
typedef int (*CvFsSeekFn_x0017D308)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017D308)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017D308)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017D308)(void);
typedef int (*CvFsLoadDirInfoFn_x0017D308)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017D308)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017D308)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017D308 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017D308 entry_err_func;
    CvFsPathFn_x0017D308 get_file_size;
    CvFsGetFreeSizeFn_x0017D308 get_free_size;
    CvFsOpenFn_x0017D308 open;
    CvFsFdFn_x0017D308 close;
    CvFsSeekFn_x0017D308 seek;
    CvFsFdIntFn_x0017D308 tell;
    CvFsXferFn_x0017D308 req_rd;
    CvFsXferFn_x0017D308 req_wr;
    CvFsFdFn_x0017D308 stop_tr;
    CvFsFdIntFn_x0017D308 get_stat;
    CvFsFdIntFn_x0017D308 get_sct_len;
    CvFsSetSctLenFn_x0017D308 set_sct_len;
    CvFsFdIntFn_x0017D308 get_num_tr;
    CvFsPathFn_x0017D308 change_dir;
    CvFsPathFn_x0017D308 is_exist_file;
    CvFsGetNumFilesFn_x0017D308 get_num_files;
    CvFsLoadDirInfoFn_x0017D308 load_dir_info;
    CvFsFdIntFn_x0017D308 get_max_byte_rate;
    CvFsPathFn_x0017D308 make_dir;
    CvFsPathFn_x0017D308 remove_dir;
    CvFsPathFn_x0017D308 delete_file;
    CvFsGetFileSizeExFn_x0017D308 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017D308 opt_fn2;
} CvFsVtbl_x0017D308;
typedef struct CvFsHandle_x0017D308 {
    CvFsVtbl_x0017D308 *vtbl;
    int fd;
} CvFsHandle_x0017D308;
extern CvFsVtbl_x0017D308 *addDevice_x0017D308(char *devname, CvFsVtbl_x0017D308 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017D308 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017D308 *sj;
    CvFsHandle_x0017D308 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017D308 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017D308;
extern void ADXSTM_EntryEosFunc_x0017D308(AdxStmObj_x0017D308 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017D308(void *, size_t_x0017D308, size_t_x0017D308, int (*)(const void *, const void *)) __asm__("qsort");
int func_0017D308_x0017D308(MpvHn_x0017D308 *mpv, SfdSj_x0017D308 *sj) __asm__("func_0017D308");
/* mpvhdec_DecGscSj: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017D308_x0017D308(MpvHn_x0017D308 *mpv, SfdSj_x0017D308 *sj) {
    M2vPicAtr_x0017D308 *inf = &mpv->picInf;
    SfdSjChunk_x0017D308 *ck = &mpv->chunk;
    SfdSjChunk_x0017D308 rest;
    unsigned int cur, nxt;
    unsigned int val;
    int bit;
    char *rp;
    char *end;
    mpv->usrDatLevel = MPV_UDLVL_GOP_x0017D308;
    inf->gsc_count++;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, ck);
    { (rp) = (char *)((int)(ck->data) & ~3); (bit) = ((char *)(ck->data) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) != 0) { (val) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (val) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 32 - (25)) { (bit) -= 32 - (25); if ((bit) != 0) { (cur) |= (nxt) >> ((25) - (bit)); (val) = (cur) >> (32 - (25)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (25)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (25)); (bit) += (25); (cur) <<= (25); } };
    inf->time_code_pictures = val & 0x3F;
    val >>= 6;
    inf->time_code_seconds = val & 0x3F;
    val >>= 7;
    inf->time_code_minutes = val & 0x3F;
    val >>= 6;
    inf->time_code_hours = val & 0x1F;
    inf->drop_frame_flag = val >> 5;
    { (mpv->closedGop) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    { (mpv->brokenLink) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
    end = rp + ((bit + 7) >> 3) - 8;
    SJ_SplitChunk_x0017D308(ck, end - mpv->chunk.data, ck, &rest);
    sj->vtbl->putChunk(sj, 0, ck);
    sj->vtbl->ungetChunk(sj, 1, &rest);
    return 0;
}
typedef struct SfdSj_x0017D578 SfdSj_x0017D578;
typedef struct SfdSjChunk_x0017D578 {
    char *data;
    int len;
} SfdSjChunk_x0017D578;
typedef struct SfdSjVtbl_x0017D578 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017D578 *sj);
    int (*getUuid)(SfdSj_x0017D578 *sj);
    void (*reset)(SfdSj_x0017D578 *sj);
    void (*getChunk)(SfdSj_x0017D578 *sj, int id, int n, SfdSjChunk_x0017D578 *ck);
    void (*ungetChunk)(SfdSj_x0017D578 *sj, int id, SfdSjChunk_x0017D578 *ck);
    void (*putChunk)(SfdSj_x0017D578 *sj, int id, SfdSjChunk_x0017D578 *ck);
    int (*getNumData)(SfdSj_x0017D578 *sj, int id);
} SfdSjVtbl_x0017D578;
struct SfdSj_x0017D578 {
    SfdSjVtbl_x0017D578 *vtbl;
};
void SJ_SplitChunk_x0017D578(SfdSjChunk_x0017D578 *ck, int nbyte, SfdSjChunk_x0017D578 *head, SfdSjChunk_x0017D578 *rest) __asm__("func_0016F050");
struct SfdSj_x0017D578;
typedef struct M2vErrInf_x0017D578 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017D578;
typedef struct Mpeg2Ext_x0017D578 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017D578;
typedef enum M2vFrameRate_x0017D578 {
    M2V_FRAME_RATE_FORBIDDEN_x0017D578 = 0
} M2vFrameRate_x0017D578;
typedef enum M2vPicType_x0017D578 {
    M2V_PICTYPE_I_x0017D578 = 1,
    M2V_PICTYPE_P_x0017D578 = 2,
    M2V_PICTYPE_B_x0017D578 = 3,
    M2V_PICTYPE_D_x0017D578 = 4
} M2vPicType_x0017D578;
typedef enum M2vPicStruct_x0017D578 {
    M2V_PICSTRUCT_TOP_FIELD_x0017D578 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017D578 = 2,
    M2V_PICSTRUCT_FRAME_x0017D578 = 3
} M2vPicStruct_x0017D578;
typedef enum M2vPicAtrF64_x0017D578 {
    M2V_PICATR_F64_0_x0017D578 = 0
} M2vPicAtrF64_x0017D578;
typedef struct M2vPicAtr_x0017D578 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017D578 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017D578 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017D578 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017D578 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017D578;
typedef void (*M2vUsrDatFn_x0017D578)(void *obj, int level);
typedef struct M2vUsrSj_x0017D578 {
    struct SfdSj_x0017D578 *sj;
    M2vUsrDatFn_x0017D578 fn;
    void *obj;
} M2vUsrSj_x0017D578;
typedef struct M2vPicUsr_x0017D578 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017D578;
typedef void (*M2vCondFn_x0017D578)();
typedef struct M2vObj_x0017D578 {
    int stat;
    M2vErrInf_x0017D578 err;
    M2vCondFn_x0017D578 cond[16];
    M2vPicAtr_x0017D578 picatr;
    char pad216[64];
    M2vUsrSj_x0017D578 usrsj[4];
    M2vPicUsr_x0017D578 picusr;
    char pad340[12];
    Mpeg2Ext_x0017D578 ext;
    char pad1656[8];
} M2vObj_x0017D578;
extern void M2V_SetErrFunc_x0017D578(M2vObj_x0017D578 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017D578 {
    MPV_UDLVL_SEQ_x0017D578 = 1,
    MPV_UDLVL_GOP_x0017D578 = 2,
    MPV_UDLVL_PIC_x0017D578 = 3
} MpvUdLevel_x0017D578;
typedef struct MpvSeqInf_x0017D578 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017D578;
typedef struct MpvMotionRange_x0017D578 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017D578;
typedef struct MpvErrObj_x0017D578 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017D578;
typedef struct MpvHn_x0017D578 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017D578 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017D578 picInf;
    MpvErrObj_x0017D578 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017D578 fwd;
    char pad764[20];
    MpvMotionRange_x0017D578 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017D578 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017D578 *lower;
    MpvUdLevel_x0017D578 usrDatLevel;
    M2vUsrSj_x0017D578 bufEnt[4];
    M2vPicUsr_x0017D578 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017D578;
extern void mpvhook_SetErrFunc_x0017D578(M2vObj_x0017D578 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017D578;
typedef struct AdxPdObj_x0017D578 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017D578;
typedef struct AdxDecPara_x0017D578 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017D578;
struct Pl2Enc_x0017D578;
typedef struct AdxbObj_x0017D578 AdxbObj_x0017D578;
typedef short *(*AdxbGetWrFunc_x0017D578)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017D578)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017D578 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017D578 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017D578 dp;
    AdxbGetWrFunc_x0017D578 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017D578 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017D578 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017D578(AdxbObj_x0017D578 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017D578 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017D578 *adxb;
    SfdSj_x0017D578 *sji;
    SfdSj_x0017D578 *sjo[2];
    SfdSjChunk_x0017D578 cki;
    SfdSjChunk_x0017D578 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017D578;
extern void ADXSJD_EntryFltFunc_x0017D578(AdxSjdObj_x0017D578 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017D578(AdxSjdObj_x0017D578 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017D578)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017D578)(CvFsErrFn_x0017D578 func, void *obj);
typedef int (*CvFsPathFn_x0017D578)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017D578)(void);
typedef int (*CvFsOpenFn_x0017D578)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017D578)(int fd);
typedef int (*CvFsFdIntFn_x0017D578)(int fd);
typedef int (*CvFsSeekFn_x0017D578)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017D578)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017D578)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017D578)(void);
typedef int (*CvFsLoadDirInfoFn_x0017D578)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017D578)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017D578)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017D578 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017D578 entry_err_func;
    CvFsPathFn_x0017D578 get_file_size;
    CvFsGetFreeSizeFn_x0017D578 get_free_size;
    CvFsOpenFn_x0017D578 open;
    CvFsFdFn_x0017D578 close;
    CvFsSeekFn_x0017D578 seek;
    CvFsFdIntFn_x0017D578 tell;
    CvFsXferFn_x0017D578 req_rd;
    CvFsXferFn_x0017D578 req_wr;
    CvFsFdFn_x0017D578 stop_tr;
    CvFsFdIntFn_x0017D578 get_stat;
    CvFsFdIntFn_x0017D578 get_sct_len;
    CvFsSetSctLenFn_x0017D578 set_sct_len;
    CvFsFdIntFn_x0017D578 get_num_tr;
    CvFsPathFn_x0017D578 change_dir;
    CvFsPathFn_x0017D578 is_exist_file;
    CvFsGetNumFilesFn_x0017D578 get_num_files;
    CvFsLoadDirInfoFn_x0017D578 load_dir_info;
    CvFsFdIntFn_x0017D578 get_max_byte_rate;
    CvFsPathFn_x0017D578 make_dir;
    CvFsPathFn_x0017D578 remove_dir;
    CvFsPathFn_x0017D578 delete_file;
    CvFsGetFileSizeExFn_x0017D578 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017D578 opt_fn2;
} CvFsVtbl_x0017D578;
typedef struct CvFsHandle_x0017D578 {
    CvFsVtbl_x0017D578 *vtbl;
    int fd;
} CvFsHandle_x0017D578;
extern CvFsVtbl_x0017D578 *addDevice_x0017D578(char *devname, CvFsVtbl_x0017D578 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017D578 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017D578 *sj;
    CvFsHandle_x0017D578 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017D578 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017D578;
extern void ADXSTM_EntryEosFunc_x0017D578(AdxStmObj_x0017D578 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017D578(void *, size_t_x0017D578, size_t_x0017D578, int (*)(const void *, const void *)) __asm__("qsort");
int func_0017D578_x0017D578(MpvHn_x0017D578 *mpv, SfdSj_x0017D578 *sj) __asm__("func_0017D578");
/* mpv_DecPicHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017D578_x0017D578(MpvHn_x0017D578 *mpv, SfdSj_x0017D578 *sj) {
    M2vPicAtr_x0017D578 *inf = &mpv->picInf;
    SfdSjChunk_x0017D578 *ck = &mpv->chunk;
    SfdSjChunk_x0017D578 rest;
    unsigned int cur, nxt;
    unsigned int val;
    int bit;
    char *rp;
    int type;
    int rSize;
    MpvMotionRange_x0017D578 *range;
    char *q;
    char *end;
    mpv->usrDatLevel = MPV_UDLVL_PIC_x0017D578;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, ck);
    { (rp) = (char *)((int)(ck->data) & ~3); (bit) = ((char *)(ck->data) - (rp)) << 3; { (cur) = *(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; (cur) <<= 8; (cur) |= (unsigned char)*(rp)++; }; (cur) <<= (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) != 0) { (val) = (cur) | ((nxt) >> (32 - (bit))); (cur) = (nxt) << (bit); } else { (val) = (cur); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; };
    { if ((bit) >= 32 - (10)) { (bit) -= 32 - (10); if ((bit) != 0) { (cur) |= (nxt) >> ((10) - (bit)); (inf->temporal_reference) = (cur) >> (32 - (10)); (cur) = (nxt) << (bit); } else { (inf->temporal_reference) = (cur) >> (32 - (10)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (inf->temporal_reference) = (cur) >> (32 - (10)); (bit) += (10); (cur) <<= (10); } };
    { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (val) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (val) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (val) = (cur) >> (32 - (3)); (bit) += (3); (cur) <<= (3); } };
    inf->picture_coding_type = val;
    { if ((bit) >= 32 - (16)) { (bit) -= 32 - (16); if ((bit) != 0) { (cur) |= (nxt) >> ((16) - (bit)); (mpv->vbvDelay) = (cur) >> (32 - (16)); (cur) = (nxt) << (bit); } else { (mpv->vbvDelay) = (cur) >> (32 - (16)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (mpv->vbvDelay) = (cur) >> (32 - (16)); (bit) += (16); (cur) <<= (16); } };
    type = inf->picture_coding_type;
    if (type == 2 || type == 3) {
        range = &mpv->fwd;
        { (range->fullPel) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
        { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (rSize) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (rSize) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (rSize) = (cur) >> (32 - (3)); (bit) += (3); (cur) <<= (3); } };
        range->rSize = --rSize;
        range->shift = 27 - rSize;
        range->f = 1 << rSize;
    }
    if (type == 3) {
        range = &mpv->bwd;
        { (range->fullPel) = (cur) >> 31; if ((bit) == 31) { (cur) = (nxt); (bit) = 0; { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (bit) += 1; (cur) <<= 1; } };
        { if ((bit) >= 32 - (3)) { (bit) -= 32 - (3); if ((bit) != 0) { (cur) |= (nxt) >> ((3) - (bit)); (rSize) = (cur) >> (32 - (3)); (cur) = (nxt) << (bit); } else { (rSize) = (cur) >> (32 - (3)); (cur) = (nxt); } { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (rSize) = (cur) >> (32 - (3)); (bit) += (3); (cur) <<= (3); } };
        range->rSize = --rSize;
        range->shift = 27 - rSize;
        range->f = 1 << rSize;
    }
    mpv->f724 = mpv->f732;
    for (;;) {
        val = cur >> 31;
        if (val == 0) {
            { (bit) += (1); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (1); } };
            break;
        }
        { (bit) += (9); if ((bit) >= 32) { (bit) -= 32; (cur) = (nxt) << (bit); { (nxt) = *(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; (nxt) <<= 8; (nxt) |= (unsigned char)*(rp)++; }; } else { (cur) <<= (9); } };
        q = rp + ((bit + 7) >> 3) - 8;
        if (mpv->chunk.len <= q - mpv->chunk.data) {
            return -3;
        }
    }
    end = rp + ((bit + 7) >> 3) - 8;
    SJ_SplitChunk_x0017D578(ck, end - mpv->chunk.data, ck, &rest);
    sj->vtbl->putChunk(sj, 0, ck);
    sj->vtbl->ungetChunk(sj, 1, &rest);
    return 0;
}
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
typedef struct SfdSj_x0017DBD8 SfdSj_x0017DBD8;
typedef struct SfdSjChunk_x0017DBD8 {
    char *data;
    int len;
} SfdSjChunk_x0017DBD8;
typedef struct SfdSjVtbl_x0017DBD8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017DBD8 *sj);
    int (*getUuid)(SfdSj_x0017DBD8 *sj);
    void (*reset)(SfdSj_x0017DBD8 *sj);
    void (*getChunk)(SfdSj_x0017DBD8 *sj, int id, int n, SfdSjChunk_x0017DBD8 *ck);
    void (*ungetChunk)(SfdSj_x0017DBD8 *sj, int id, SfdSjChunk_x0017DBD8 *ck);
    void (*putChunk)(SfdSj_x0017DBD8 *sj, int id, SfdSjChunk_x0017DBD8 *ck);
    int (*getNumData)(SfdSj_x0017DBD8 *sj, int id);
} SfdSjVtbl_x0017DBD8;
struct SfdSj_x0017DBD8 {
    SfdSjVtbl_x0017DBD8 *vtbl;
};
void SJ_SplitChunk_x0017DBD8(SfdSjChunk_x0017DBD8 *ck, int nbyte, SfdSjChunk_x0017DBD8 *head, SfdSjChunk_x0017DBD8 *rest) __asm__("func_0016F050");
struct SfdSj_x0017DBD8;
typedef struct M2vErrInf_x0017DBD8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017DBD8;
typedef struct Mpeg2Ext_x0017DBD8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017DBD8;
typedef enum M2vFrameRate_x0017DBD8 {
    M2V_FRAME_RATE_FORBIDDEN_x0017DBD8 = 0
} M2vFrameRate_x0017DBD8;
typedef enum M2vPicType_x0017DBD8 {
    M2V_PICTYPE_I_x0017DBD8 = 1,
    M2V_PICTYPE_P_x0017DBD8 = 2,
    M2V_PICTYPE_B_x0017DBD8 = 3,
    M2V_PICTYPE_D_x0017DBD8 = 4
} M2vPicType_x0017DBD8;
typedef enum M2vPicStruct_x0017DBD8 {
    M2V_PICSTRUCT_TOP_FIELD_x0017DBD8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017DBD8 = 2,
    M2V_PICSTRUCT_FRAME_x0017DBD8 = 3
} M2vPicStruct_x0017DBD8;
typedef enum M2vPicAtrF64_x0017DBD8 {
    M2V_PICATR_F64_0_x0017DBD8 = 0
} M2vPicAtrF64_x0017DBD8;
typedef struct M2vPicAtr_x0017DBD8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017DBD8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017DBD8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017DBD8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017DBD8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017DBD8;
typedef void (*M2vUsrDatFn_x0017DBD8)(void *obj, int level);
typedef struct M2vUsrSj_x0017DBD8 {
    struct SfdSj_x0017DBD8 *sj;
    M2vUsrDatFn_x0017DBD8 fn;
    void *obj;
} M2vUsrSj_x0017DBD8;
typedef struct M2vPicUsr_x0017DBD8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017DBD8;
typedef void (*M2vCondFn_x0017DBD8)();
typedef struct M2vObj_x0017DBD8 {
    int stat;
    M2vErrInf_x0017DBD8 err;
    M2vCondFn_x0017DBD8 cond[16];
    M2vPicAtr_x0017DBD8 picatr;
    char pad216[64];
    M2vUsrSj_x0017DBD8 usrsj[4];
    M2vPicUsr_x0017DBD8 picusr;
    char pad340[12];
    Mpeg2Ext_x0017DBD8 ext;
    char pad1656[8];
} M2vObj_x0017DBD8;
extern void M2V_SetErrFunc_x0017DBD8(M2vObj_x0017DBD8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017DBD8 {
    MPV_UDLVL_SEQ_x0017DBD8 = 1,
    MPV_UDLVL_GOP_x0017DBD8 = 2,
    MPV_UDLVL_PIC_x0017DBD8 = 3
} MpvUdLevel_x0017DBD8;
typedef struct MpvSeqInf_x0017DBD8 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017DBD8;
typedef struct MpvMotionRange_x0017DBD8 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017DBD8;
typedef struct MpvErrObj_x0017DBD8 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017DBD8;
typedef struct MpvHn_x0017DBD8 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017DBD8 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017DBD8 picInf;
    MpvErrObj_x0017DBD8 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017DBD8 fwd;
    char pad764[20];
    MpvMotionRange_x0017DBD8 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017DBD8 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017DBD8 *lower;
    MpvUdLevel_x0017DBD8 usrDatLevel;
    M2vUsrSj_x0017DBD8 bufEnt[4];
    M2vPicUsr_x0017DBD8 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017DBD8;
int MPV_GoNextDelimSj_x0017DBD8(SfdSj_x0017DBD8 *sj) __asm__("func_0017E040");
extern void mpvhook_SetErrFunc_x0017DBD8(M2vObj_x0017DBD8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017DBD8;
typedef struct AdxPdObj_x0017DBD8 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017DBD8;
typedef struct AdxDecPara_x0017DBD8 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017DBD8;
struct Pl2Enc_x0017DBD8;
typedef struct AdxbObj_x0017DBD8 AdxbObj_x0017DBD8;
typedef short *(*AdxbGetWrFunc_x0017DBD8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017DBD8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017DBD8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017DBD8 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017DBD8 dp;
    AdxbGetWrFunc_x0017DBD8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017DBD8 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017DBD8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017DBD8(AdxbObj_x0017DBD8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017DBD8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017DBD8 *adxb;
    SfdSj_x0017DBD8 *sji;
    SfdSj_x0017DBD8 *sjo[2];
    SfdSjChunk_x0017DBD8 cki;
    SfdSjChunk_x0017DBD8 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017DBD8;
extern void ADXSJD_EntryFltFunc_x0017DBD8(AdxSjdObj_x0017DBD8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017DBD8(AdxSjdObj_x0017DBD8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017DBD8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017DBD8)(CvFsErrFn_x0017DBD8 func, void *obj);
typedef int (*CvFsPathFn_x0017DBD8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017DBD8)(void);
typedef int (*CvFsOpenFn_x0017DBD8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017DBD8)(int fd);
typedef int (*CvFsFdIntFn_x0017DBD8)(int fd);
typedef int (*CvFsSeekFn_x0017DBD8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017DBD8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017DBD8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017DBD8)(void);
typedef int (*CvFsLoadDirInfoFn_x0017DBD8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017DBD8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017DBD8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017DBD8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017DBD8 entry_err_func;
    CvFsPathFn_x0017DBD8 get_file_size;
    CvFsGetFreeSizeFn_x0017DBD8 get_free_size;
    CvFsOpenFn_x0017DBD8 open;
    CvFsFdFn_x0017DBD8 close;
    CvFsSeekFn_x0017DBD8 seek;
    CvFsFdIntFn_x0017DBD8 tell;
    CvFsXferFn_x0017DBD8 req_rd;
    CvFsXferFn_x0017DBD8 req_wr;
    CvFsFdFn_x0017DBD8 stop_tr;
    CvFsFdIntFn_x0017DBD8 get_stat;
    CvFsFdIntFn_x0017DBD8 get_sct_len;
    CvFsSetSctLenFn_x0017DBD8 set_sct_len;
    CvFsFdIntFn_x0017DBD8 get_num_tr;
    CvFsPathFn_x0017DBD8 change_dir;
    CvFsPathFn_x0017DBD8 is_exist_file;
    CvFsGetNumFilesFn_x0017DBD8 get_num_files;
    CvFsLoadDirInfoFn_x0017DBD8 load_dir_info;
    CvFsFdIntFn_x0017DBD8 get_max_byte_rate;
    CvFsPathFn_x0017DBD8 make_dir;
    CvFsPathFn_x0017DBD8 remove_dir;
    CvFsPathFn_x0017DBD8 delete_file;
    CvFsGetFileSizeExFn_x0017DBD8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017DBD8 opt_fn2;
} CvFsVtbl_x0017DBD8;
typedef struct CvFsHandle_x0017DBD8 {
    CvFsVtbl_x0017DBD8 *vtbl;
    int fd;
} CvFsHandle_x0017DBD8;
extern CvFsVtbl_x0017DBD8 *addDevice_x0017DBD8(char *devname, CvFsVtbl_x0017DBD8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017DBD8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017DBD8 *sj;
    CvFsHandle_x0017DBD8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017DBD8 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017DBD8;
extern void ADXSTM_EntryEosFunc_x0017DBD8(AdxStmObj_x0017DBD8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017DBD8(void *, size_t_x0017DBD8, size_t_x0017DBD8, int (*)(const void *, const void *)) __asm__("qsort");
int mpvhdec_AnalyUd_x0017DBD8(MpvHn_x0017DBD8 *mpv, char *data, int len) __asm__("func_0017DCC8");
int mpvhdec_AnalyUd_x0017DBD8(MpvHn_x0017DBD8 *mpv, char *data, int len) __asm__("func_0017DCC8");
int MPV_GoNextDelimSj_x0017DBD8(SfdSj_x0017DBD8 *sj) __asm__("func_0017E040");
int func_0017DBD8_x0017DBD8(MpvHn_x0017DBD8 *mpv, SfdSj_x0017DBD8 *sj, int type) __asm__("func_0017DBD8");
/* mpvhdec_DecUdscSj: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017DBD8_x0017DBD8(MpvHn_x0017DBD8 *mpv, SfdSj_x0017DBD8 *sj, int type) {
    SfdSjChunk_x0017DBD8 *ck = &mpv->chunk;
    SfdSjChunk_x0017DBD8 rest;
    char *base;
    int bits;
    int ret;
    sj->vtbl->getChunk(sj, 1, 0x7FFFFFFF, ck);
    base = (char *)((int)ck->data & ~3);
    bits = (ck->data - base) * 8;
    ret = mpvhdec_AnalyUd_x0017DBD8(mpv, ck->data, mpv->chunk.len);
    base += 8;
    base += bits >> 3;
    base -= 4;
    SJ_SplitChunk_x0017DBD8(ck, base - ck->data, ck, &rest);
    sj->vtbl->putChunk(sj, 0, ck);
    sj->vtbl->ungetChunk(sj, 1, &rest);
    MPV_GoNextDelimSj_x0017DBD8(sj);
    return ret;
}
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
typedef struct SfdSj_x0017DE90 SfdSj_x0017DE90;
typedef struct SfdSjChunk_x0017DE90 {
    char *data;
    int len;
} SfdSjChunk_x0017DE90;
typedef struct SfdSjVtbl_x0017DE90 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017DE90 *sj);
    int (*getUuid)(SfdSj_x0017DE90 *sj);
    void (*reset)(SfdSj_x0017DE90 *sj);
    void (*getChunk)(SfdSj_x0017DE90 *sj, int id, int n, SfdSjChunk_x0017DE90 *ck);
    void (*ungetChunk)(SfdSj_x0017DE90 *sj, int id, SfdSjChunk_x0017DE90 *ck);
    void (*putChunk)(SfdSj_x0017DE90 *sj, int id, SfdSjChunk_x0017DE90 *ck);
    int (*getNumData)(SfdSj_x0017DE90 *sj, int id);
} SfdSjVtbl_x0017DE90;
struct SfdSj_x0017DE90 {
    SfdSjVtbl_x0017DE90 *vtbl;
};
struct SfdSj_x0017DE90;
typedef struct M2vErrInf_x0017DE90 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017DE90;
typedef struct Mpeg2Ext_x0017DE90 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017DE90;
typedef enum M2vFrameRate_x0017DE90 {
    M2V_FRAME_RATE_FORBIDDEN_x0017DE90 = 0
} M2vFrameRate_x0017DE90;
typedef enum M2vPicType_x0017DE90 {
    M2V_PICTYPE_I_x0017DE90 = 1,
    M2V_PICTYPE_P_x0017DE90 = 2,
    M2V_PICTYPE_B_x0017DE90 = 3,
    M2V_PICTYPE_D_x0017DE90 = 4
} M2vPicType_x0017DE90;
typedef enum M2vPicStruct_x0017DE90 {
    M2V_PICSTRUCT_TOP_FIELD_x0017DE90 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017DE90 = 2,
    M2V_PICSTRUCT_FRAME_x0017DE90 = 3
} M2vPicStruct_x0017DE90;
typedef enum M2vPicAtrF64_x0017DE90 {
    M2V_PICATR_F64_0_x0017DE90 = 0
} M2vPicAtrF64_x0017DE90;
typedef struct M2vPicAtr_x0017DE90 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017DE90 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017DE90 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017DE90 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017DE90 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017DE90;
typedef void (*M2vUsrDatFn_x0017DE90)(void *obj, int level);
typedef struct M2vUsrSj_x0017DE90 {
    struct SfdSj_x0017DE90 *sj;
    M2vUsrDatFn_x0017DE90 fn;
    void *obj;
} M2vUsrSj_x0017DE90;
typedef struct M2vPicUsr_x0017DE90 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017DE90;
typedef void (*M2vCondFn_x0017DE90)();
typedef struct M2vObj_x0017DE90 {
    int stat;
    M2vErrInf_x0017DE90 err;
    M2vCondFn_x0017DE90 cond[16];
    M2vPicAtr_x0017DE90 picatr;
    char pad216[64];
    M2vUsrSj_x0017DE90 usrsj[4];
    M2vPicUsr_x0017DE90 picusr;
    char pad340[12];
    Mpeg2Ext_x0017DE90 ext;
    char pad1656[8];
} M2vObj_x0017DE90;
extern void M2V_SetErrFunc_x0017DE90(M2vObj_x0017DE90 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017DE90 {
    MPV_UDLVL_SEQ_x0017DE90 = 1,
    MPV_UDLVL_GOP_x0017DE90 = 2,
    MPV_UDLVL_PIC_x0017DE90 = 3
} MpvUdLevel_x0017DE90;
typedef struct MpvSeqInf_x0017DE90 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017DE90;
typedef struct MpvMotionRange_x0017DE90 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017DE90;
typedef struct MpvErrObj_x0017DE90 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017DE90;
typedef struct MpvHn_x0017DE90 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017DE90 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017DE90 picInf;
    MpvErrObj_x0017DE90 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017DE90 fwd;
    char pad764[20];
    MpvMotionRange_x0017DE90 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017DE90 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017DE90 *lower;
    MpvUdLevel_x0017DE90 usrDatLevel;
    M2vUsrSj_x0017DE90 bufEnt[4];
    M2vPicUsr_x0017DE90 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017DE90;
int MPV_CheckDelim_x0017DE90(const unsigned char *p) __asm__("func_0017B420");
extern void mpvhook_SetErrFunc_x0017DE90(M2vObj_x0017DE90 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017DE90;
int strncmp_x0017DE90(const char *, const char *, size_t_x0017DE90) __asm__("func_00127E88");
typedef struct AdxPdObj_x0017DE90 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017DE90;
typedef struct AdxDecPara_x0017DE90 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017DE90;
struct Pl2Enc_x0017DE90;
typedef struct AdxbObj_x0017DE90 AdxbObj_x0017DE90;
typedef short *(*AdxbGetWrFunc_x0017DE90)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017DE90)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017DE90 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017DE90 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017DE90 dp;
    AdxbGetWrFunc_x0017DE90 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017DE90 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017DE90 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017DE90(AdxbObj_x0017DE90 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017DE90 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017DE90 *adxb;
    SfdSj_x0017DE90 *sji;
    SfdSj_x0017DE90 *sjo[2];
    SfdSjChunk_x0017DE90 cki;
    SfdSjChunk_x0017DE90 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017DE90;
extern void ADXSJD_EntryFltFunc_x0017DE90(AdxSjdObj_x0017DE90 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017DE90(AdxSjdObj_x0017DE90 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017DE90)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017DE90)(CvFsErrFn_x0017DE90 func, void *obj);
typedef int (*CvFsPathFn_x0017DE90)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017DE90)(void);
typedef int (*CvFsOpenFn_x0017DE90)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017DE90)(int fd);
typedef int (*CvFsFdIntFn_x0017DE90)(int fd);
typedef int (*CvFsSeekFn_x0017DE90)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017DE90)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017DE90)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017DE90)(void);
typedef int (*CvFsLoadDirInfoFn_x0017DE90)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017DE90)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017DE90)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017DE90 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017DE90 entry_err_func;
    CvFsPathFn_x0017DE90 get_file_size;
    CvFsGetFreeSizeFn_x0017DE90 get_free_size;
    CvFsOpenFn_x0017DE90 open;
    CvFsFdFn_x0017DE90 close;
    CvFsSeekFn_x0017DE90 seek;
    CvFsFdIntFn_x0017DE90 tell;
    CvFsXferFn_x0017DE90 req_rd;
    CvFsXferFn_x0017DE90 req_wr;
    CvFsFdFn_x0017DE90 stop_tr;
    CvFsFdIntFn_x0017DE90 get_stat;
    CvFsFdIntFn_x0017DE90 get_sct_len;
    CvFsSetSctLenFn_x0017DE90 set_sct_len;
    CvFsFdIntFn_x0017DE90 get_num_tr;
    CvFsPathFn_x0017DE90 change_dir;
    CvFsPathFn_x0017DE90 is_exist_file;
    CvFsGetNumFilesFn_x0017DE90 get_num_files;
    CvFsLoadDirInfoFn_x0017DE90 load_dir_info;
    CvFsFdIntFn_x0017DE90 get_max_byte_rate;
    CvFsPathFn_x0017DE90 make_dir;
    CvFsPathFn_x0017DE90 remove_dir;
    CvFsPathFn_x0017DE90 delete_file;
    CvFsGetFileSizeExFn_x0017DE90 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017DE90 opt_fn2;
} CvFsVtbl_x0017DE90;
typedef struct CvFsHandle_x0017DE90 {
    CvFsVtbl_x0017DE90 *vtbl;
    int fd;
} CvFsHandle_x0017DE90;
extern CvFsVtbl_x0017DE90 *addDevice_x0017DE90(char *devname, CvFsVtbl_x0017DE90 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017DE90 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017DE90 *sj;
    CvFsHandle_x0017DE90 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017DE90 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017DE90;
extern void ADXSTM_EntryEosFunc_x0017DE90(AdxStmObj_x0017DE90 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int atoi_x0017DE90(const char *) __asm__("func_001221D8");
extern void qsort_x0017DE90(void *, size_t_x0017DE90, size_t_x0017DE90, int (*)(const void *, const void *)) __asm__("qsort");
extern char mpv_tag_idcprec_x0017DE90[] __asm__("D_00465380");
extern char mpv_tag_stccode_x0017DE90[] __asm__("D_00465388");
int func_0017DE90_x0017DE90(MpvHn_x0017DE90 *mpv, char *buf, int size) __asm__("func_0017DE90");
/* mpv_ScanUsrTags: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017DE90_x0017DE90(MpvHn_x0017DE90 *mpv, char *buf, int size) {
    int n = size - 4;
    char *base = buf + 4;
    int i;
    char *p;
    for (i = 0; i < n; ) {
        p = base + i;
        i++;
        if (strncmp_x0017DE90(p, mpv_tag_idcprec_x0017DE90, 7) == 0)
            mpv->idcPrec = atoi_x0017DE90(p + 16) != 0 ? 3 : 0;
        if (strncmp_x0017DE90(p, mpv_tag_stccode_x0017DE90, 7) == 0) {
            mpv->f860 = atoi_x0017DE90(p + 16);
            mpv->f864 = atoi_x0017DE90(p + 24);
            mpv->f868 = atoi_x0017DE90(p + 32);
        }
        if (MPV_CheckDelim_x0017DE90((unsigned char *)p) != 0)
            break;
    }
    return 0;
}
int MPV_CheckDelim_x0017DF98(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x0017DF98(char *buf, int len, int mask) __asm__("func_0017B5B8");
int func_0017DF98_x0017DF98(char **data, int *remaining, int *offset) __asm__("func_0017DF98");
/* MPVHDEC_GoNextDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017DF98_x0017DF98(char **data, int *remaining, int *offset) {
    char *found;
    int skip;
    int kind;
    found = MPV_SearchDelim_x0017DF98(*data, *remaining, -1);
    kind = 0;
    if (found == 0) {
        skip = *remaining;
    } else {
        kind = MPV_CheckDelim_x0017DF98((unsigned char *)found);
        skip = found - *data;
    }
    *remaining -= skip;
    *data += skip;
    *offset += skip;
    return kind;
}
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
typedef struct SfdSj_x0017E198 SfdSj_x0017E198;
typedef struct SfdSjChunk_x0017E198 {
    char *data;
    int len;
} SfdSjChunk_x0017E198;
typedef struct SfdSjVtbl_x0017E198 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E198 *sj);
    int (*getUuid)(SfdSj_x0017E198 *sj);
    void (*reset)(SfdSj_x0017E198 *sj);
    void (*getChunk)(SfdSj_x0017E198 *sj, int id, int n, SfdSjChunk_x0017E198 *ck);
    void (*ungetChunk)(SfdSj_x0017E198 *sj, int id, SfdSjChunk_x0017E198 *ck);
    void (*putChunk)(SfdSj_x0017E198 *sj, int id, SfdSjChunk_x0017E198 *ck);
    int (*getNumData)(SfdSj_x0017E198 *sj, int id);
} SfdSjVtbl_x0017E198;
struct SfdSj_x0017E198 {
    SfdSjVtbl_x0017E198 *vtbl;
};
struct SfdSj_x0017E198;
typedef struct M2vErrInf_x0017E198 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E198;
typedef struct Mpeg2Ext_x0017E198 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E198;
typedef enum M2vFrameRate_x0017E198 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E198 = 0
} M2vFrameRate_x0017E198;
typedef enum M2vPicType_x0017E198 {
    M2V_PICTYPE_I_x0017E198 = 1,
    M2V_PICTYPE_P_x0017E198 = 2,
    M2V_PICTYPE_B_x0017E198 = 3,
    M2V_PICTYPE_D_x0017E198 = 4
} M2vPicType_x0017E198;
typedef enum M2vPicStruct_x0017E198 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E198 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E198 = 2,
    M2V_PICSTRUCT_FRAME_x0017E198 = 3
} M2vPicStruct_x0017E198;
typedef enum M2vPicAtrF64_x0017E198 {
    M2V_PICATR_F64_0_x0017E198 = 0
} M2vPicAtrF64_x0017E198;
typedef struct M2vPicAtr_x0017E198 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E198 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E198 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E198 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E198 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E198;
typedef void (*M2vUsrDatFn_x0017E198)(void *obj, int level);
typedef struct M2vUsrSj_x0017E198 {
    struct SfdSj_x0017E198 *sj;
    M2vUsrDatFn_x0017E198 fn;
    void *obj;
} M2vUsrSj_x0017E198;
typedef struct M2vPicUsr_x0017E198 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E198;
typedef void (*M2vCondFn_x0017E198)();
typedef struct M2vObj_x0017E198 {
    int stat;
    M2vErrInf_x0017E198 err;
    M2vCondFn_x0017E198 cond[16];
    M2vPicAtr_x0017E198 picatr;
    char pad216[64];
    M2vUsrSj_x0017E198 usrsj[4];
    M2vPicUsr_x0017E198 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E198 ext;
    char pad1656[8];
} M2vObj_x0017E198;
extern void M2V_SetErrFunc_x0017E198(M2vObj_x0017E198 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E198 {
    MPV_UDLVL_SEQ_x0017E198 = 1,
    MPV_UDLVL_GOP_x0017E198 = 2,
    MPV_UDLVL_PIC_x0017E198 = 3
} MpvUdLevel_x0017E198;
typedef struct MpvSeqInf_x0017E198 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E198;
typedef struct MpvMotionRange_x0017E198 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E198;
typedef struct MpvErrObj_x0017E198 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E198;
typedef struct MpvHn_x0017E198 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E198 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E198 picInf;
    MpvErrObj_x0017E198 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E198 fwd;
    char pad764[20];
    MpvMotionRange_x0017E198 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E198 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E198 *lower;
    MpvUdLevel_x0017E198 usrDatLevel;
    M2vUsrSj_x0017E198 bufEnt[4];
    M2vPicUsr_x0017E198 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E198;
int MPV_GoNextDelimSj_x0017E198(SfdSj_x0017E198 *sj) __asm__("func_0017E040");
int MPV_MoveChunk_x0017E198(SfdSj_x0017E198 *sj, int id, int n) __asm__("func_0017E268");
extern void mpvhook_SetErrFunc_x0017E198(M2vObj_x0017E198 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
typedef unsigned int size_t_x0017E198;
typedef struct AdxPdObj_x0017E198 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x0017E198;
typedef struct AdxDecPara_x0017E198 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x0017E198;
struct Pl2Enc_x0017E198;
typedef struct AdxbObj_x0017E198 AdxbObj_x0017E198;
typedef short *(*AdxbGetWrFunc_x0017E198)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0017E198)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0017E198 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0017E198 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x0017E198 dp;
    AdxbGetWrFunc_x0017E198 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0017E198 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x0017E198 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0017E198(AdxbObj_x0017E198 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0017E198 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0017E198 *adxb;
    SfdSj_x0017E198 *sji;
    SfdSj_x0017E198 *sjo[2];
    SfdSjChunk_x0017E198 cki;
    SfdSjChunk_x0017E198 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x0017E198;
extern void ADXSJD_EntryFltFunc_x0017E198(AdxSjdObj_x0017E198 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0017E198(AdxSjdObj_x0017E198 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0017E198)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0017E198)(CvFsErrFn_x0017E198 func, void *obj);
typedef int (*CvFsPathFn_x0017E198)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0017E198)(void);
typedef int (*CvFsOpenFn_x0017E198)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0017E198)(int fd);
typedef int (*CvFsFdIntFn_x0017E198)(int fd);
typedef int (*CvFsSeekFn_x0017E198)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0017E198)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0017E198)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0017E198)(void);
typedef int (*CvFsLoadDirInfoFn_x0017E198)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0017E198)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0017E198)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0017E198 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0017E198 entry_err_func;
    CvFsPathFn_x0017E198 get_file_size;
    CvFsGetFreeSizeFn_x0017E198 get_free_size;
    CvFsOpenFn_x0017E198 open;
    CvFsFdFn_x0017E198 close;
    CvFsSeekFn_x0017E198 seek;
    CvFsFdIntFn_x0017E198 tell;
    CvFsXferFn_x0017E198 req_rd;
    CvFsXferFn_x0017E198 req_wr;
    CvFsFdFn_x0017E198 stop_tr;
    CvFsFdIntFn_x0017E198 get_stat;
    CvFsFdIntFn_x0017E198 get_sct_len;
    CvFsSetSctLenFn_x0017E198 set_sct_len;
    CvFsFdIntFn_x0017E198 get_num_tr;
    CvFsPathFn_x0017E198 change_dir;
    CvFsPathFn_x0017E198 is_exist_file;
    CvFsGetNumFilesFn_x0017E198 get_num_files;
    CvFsLoadDirInfoFn_x0017E198 load_dir_info;
    CvFsFdIntFn_x0017E198 get_max_byte_rate;
    CvFsPathFn_x0017E198 make_dir;
    CvFsPathFn_x0017E198 remove_dir;
    CvFsPathFn_x0017E198 delete_file;
    CvFsGetFileSizeExFn_x0017E198 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0017E198 opt_fn2;
} CvFsVtbl_x0017E198;
typedef struct CvFsHandle_x0017E198 {
    CvFsVtbl_x0017E198 *vtbl;
    int fd;
} CvFsHandle_x0017E198;
extern CvFsVtbl_x0017E198 *addDevice_x0017E198(char *devname, CvFsVtbl_x0017E198 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0017E198 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0017E198 *sj;
    CvFsHandle_x0017E198 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0017E198 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x0017E198;
extern void ADXSTM_EntryEosFunc_x0017E198(AdxStmObj_x0017E198 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void qsort_x0017E198(void *, size_t_x0017E198, size_t_x0017E198, int (*)(const void *, const void *)) __asm__("qsort");
int MPV_GoNextDelimSj_x0017E198(SfdSj_x0017E198 *sj) __asm__("func_0017E040");
int MPV_MoveChunk_x0017E198(SfdSj_x0017E198 *sj, int id, int n) __asm__("func_0017E268");
int func_0017E198_x0017E198(MpvHn_x0017E198 *mpv, int mask, SfdSj_x0017E198 *sj) __asm__("func_0017E198");
/* mpvhdec_RecoverSj: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpvhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E198_x0017E198(MpvHn_x0017E198 *mpv, int mask, SfdSj_x0017E198 *sj) {
    MpvErrObj_x0017E198 *err = &mpv->err;
    int has = mpv->cond[1];
    int result;
    int kind;
    if (mpv->skipReq != 0) {
        mpv->skipReq = 0;
        mpv->skipCnt += 1;
        err->skipReqCnt += 1;
        if (has == 0) {
            return -2;
        }
        err->skipPicCnt += 1;
    }
    result = (has == 0) ? -2 : -3;
    do {
        kind = MPV_GoNextDelimSj_x0017E198(sj);
        if (kind == 0) {
            break;
        }
        if (kind & mask) {
            result = 0;
            break;
        }
    } while (MPV_MoveChunk_x0017E198(sj, 1, 4) == 4);
    return result;
}
typedef s32 (*CriVFunc_x0017E268)();
typedef struct CriObj_x0017E268 { CriVFunc_x0017E268 *vtbl; } CriObj_x0017E268;
s32 func_0017E268_x0017E268(CriObj_x0017E268 *obj, s32 a1, s32 a2) __asm__("func_0017E268");
s32 func_0017E268_x0017E268(CriObj_x0017E268 *obj, s32 a1, s32 a2)
{
    s32 buf[2];
    s32 flag;

    flag = (a1 == 0);
    obj->vtbl[6](obj, a1, a2, buf);
    obj->vtbl[8](obj, flag, buf);
    return buf[1];
}
s32 *func_0017E2C0(void) {
    return &D_00465390;
}
int MPV_CheckDelim_x0017E2D0(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x0017E2D0(char *buf, int len, int mask) __asm__("func_0017B5B8");
int mpv_IsLowerReady_x0017E2D0(void) __asm__("func_0017EBB8");
int mpv_IsLowerReady_x0017E2D0(void) __asm__("func_0017EBB8");
int func_0017E2D0_x0017E2D0(unsigned char *data, int size) __asm__("func_0017E2D0");
/* MPV_IsConformable: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E2D0_x0017E2D0(unsigned char *data, int size) {
    unsigned char *p = MPV_SearchDelim_x0017E2D0(data, size, 64);
    if (p == 0) {
        return 0;
    }
    if (mpv_IsLowerReady_x0017E2D0() != 0) {
        return 1;
    }
    p += 4;
    size -= p - data;
    if (size <= 0) {
        return 0;
    }
    p = MPV_SearchDelim_x0017E2D0(p, size, -1);
    if (p == 0) {
        return 0;
    }
    if (MPV_CheckDelim_x0017E2D0(p) & 0x10) {
        return 0;
    }
    return 1;
}
typedef struct SfdSj_x0017E368 SfdSj_x0017E368;
typedef struct SfdSjChunk_x0017E368 {
    char *data;
    int len;
} SfdSjChunk_x0017E368;
typedef struct SfdSjVtbl_x0017E368 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E368 *sj);
    int (*getUuid)(SfdSj_x0017E368 *sj);
    void (*reset)(SfdSj_x0017E368 *sj);
    void (*getChunk)(SfdSj_x0017E368 *sj, int id, int n, SfdSjChunk_x0017E368 *ck);
    void (*ungetChunk)(SfdSj_x0017E368 *sj, int id, SfdSjChunk_x0017E368 *ck);
    void (*putChunk)(SfdSj_x0017E368 *sj, int id, SfdSjChunk_x0017E368 *ck);
    int (*getNumData)(SfdSj_x0017E368 *sj, int id);
} SfdSjVtbl_x0017E368;
struct SfdSj_x0017E368 {
    SfdSjVtbl_x0017E368 *vtbl;
};
struct SfdSj_x0017E368;
typedef struct M2vErrInf_x0017E368 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E368;
typedef struct Mpeg2Ext_x0017E368 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E368;
typedef enum M2vFrameRate_x0017E368 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E368 = 0
} M2vFrameRate_x0017E368;
typedef enum M2vPicType_x0017E368 {
    M2V_PICTYPE_I_x0017E368 = 1,
    M2V_PICTYPE_P_x0017E368 = 2,
    M2V_PICTYPE_B_x0017E368 = 3,
    M2V_PICTYPE_D_x0017E368 = 4
} M2vPicType_x0017E368;
typedef enum M2vPicStruct_x0017E368 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E368 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E368 = 2,
    M2V_PICSTRUCT_FRAME_x0017E368 = 3
} M2vPicStruct_x0017E368;
typedef enum M2vPicAtrF64_x0017E368 {
    M2V_PICATR_F64_0_x0017E368 = 0
} M2vPicAtrF64_x0017E368;
typedef struct M2vPicAtr_x0017E368 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E368 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E368 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E368 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E368 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E368;
typedef void (*M2vUsrDatFn_x0017E368)(void *obj, int level);
typedef struct M2vUsrSj_x0017E368 {
    struct SfdSj_x0017E368 *sj;
    M2vUsrDatFn_x0017E368 fn;
    void *obj;
} M2vUsrSj_x0017E368;
typedef struct M2vPicUsr_x0017E368 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E368;
typedef void (*M2vCondFn_x0017E368)();
typedef struct M2vObj_x0017E368 {
    int stat;
    M2vErrInf_x0017E368 err;
    M2vCondFn_x0017E368 cond[16];
    M2vPicAtr_x0017E368 picatr;
    char pad216[64];
    M2vUsrSj_x0017E368 usrsj[4];
    M2vPicUsr_x0017E368 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E368 ext;
    char pad1656[8];
} M2vObj_x0017E368;
extern void M2V_SetErrFunc_x0017E368(M2vObj_x0017E368 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E368 {
    MPV_UDLVL_SEQ_x0017E368 = 1,
    MPV_UDLVL_GOP_x0017E368 = 2,
    MPV_UDLVL_PIC_x0017E368 = 3
} MpvUdLevel_x0017E368;
typedef struct MpvSeqInf_x0017E368 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E368;
typedef struct MpvMotionRange_x0017E368 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E368;
typedef struct MpvErrObj_x0017E368 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E368;
typedef struct MpvHn_x0017E368 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E368 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E368 picInf;
    MpvErrObj_x0017E368 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E368 fwd;
    char pad764[20];
    MpvMotionRange_x0017E368 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E368 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E368 *lower;
    MpvUdLevel_x0017E368 usrDatLevel;
    M2vUsrSj_x0017E368 bufEnt[4];
    M2vPicUsr_x0017E368 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E368;
typedef struct MpvLib_x0017E368 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E368 *hn;
} MpvLib_x0017E368;
void mpv_InitLibErr_x0017E368(void) __asm__("func_0017C1B8");
void mpvapi_Init_x0017E368(void) __asm__("func_0017C838");
extern void mpvhook_SetErrFunc_x0017E368(M2vObj_x0017E368 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern char cri_mpv_version_x0017E368[] __asm__("D_00465390");
extern char *volatile mpv_version_ptr_x0017E368 __asm__("D_004814E8");
extern MpvLib_x0017E368 mpv_lib_x0017E368 __asm__("D_004814F0");
void mpv_InitLower_x0017E368(void) __asm__("func_0017EBD0");
int MPVLIB_ConvOix_x0017E368(int flags) __asm__("func_0017E4E0");
void mpvlib_ChkCacheMode_x0017E368(void) __asm__("func_0017E4B8");
void mpv_InitClampTable_x0017E368(unsigned char *copy) __asm__("func_0017E500");
void mpvlib_InitObjTbl_x0017E368(void) __asm__("func_0017E5D8");
void mpv_InitHw_x0017E368(MpvLib_x0017E368 *pool) __asm__("func_0017E658");
void mpvlib_InitWork_x0017E368(int nhn, char *work) __asm__("func_0017E660");
int mpvlib_ChkFatal_x0017E368(void) __asm__("func_0017E440");
int mpvlib_ChkFatal_x0017E368(void) __asm__("func_0017E440");
void mpvlib_ChkCacheMode_x0017E368(void) __asm__("func_0017E4B8");
int MPVLIB_ConvOix_x0017E368(int flags) __asm__("func_0017E4E0");
void mpv_InitClampTable_x0017E368(unsigned char *copy) __asm__("func_0017E500");
void mpvlib_InitObjTbl_x0017E368(void) __asm__("func_0017E5D8");
void mpv_InitHw_x0017E368(MpvLib_x0017E368 *pool) __asm__("func_0017E658");
void mpvlib_InitWork_x0017E368(int nhn, char *work) __asm__("func_0017E660");
void mpv_InitLower_x0017E368(void) __asm__("func_0017EBD0");
int func_0017E368_x0017E368(int count, void *work) __asm__("func_0017E368");
/* MPV_Init: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E368_x0017E368(int count, void *work) {
    int result;
    char *pool;
    mpv_version_ptr_x0017E368 = cri_mpv_version_x0017E368;
    result = mpvlib_ChkFatal_x0017E368();
    if (result != 0) {
        if (result != 0xFF03FF05) {
            for (;;) {
            }
        }
        return result;
    }
    mpvlib_ChkCacheMode_x0017E368();
    mpvlib_InitWork_x0017E368(count, (char *)MPVLIB_ConvOix_x0017E368((int)work));
    pool = mpv_lib_x0017E368.pool;
    mpv_InitLibErr_x0017E368();
    mpvapi_Init_x0017E368();
    mpv_InitClampTable_x0017E368((unsigned char *)pool + 6112);
    mpvlib_InitObjTbl_x0017E368();
    mpv_InitHw_x0017E368((MpvLib_x0017E368 *)pool);
    mpv_InitLower_x0017E368();
    return 0;
}
typedef struct SfdSj_x0017E440 SfdSj_x0017E440;
typedef struct SfdSjChunk_x0017E440 {
    char *data;
    int len;
} SfdSjChunk_x0017E440;
typedef struct SfdSjVtbl_x0017E440 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E440 *sj);
    int (*getUuid)(SfdSj_x0017E440 *sj);
    void (*reset)(SfdSj_x0017E440 *sj);
    void (*getChunk)(SfdSj_x0017E440 *sj, int id, int n, SfdSjChunk_x0017E440 *ck);
    void (*ungetChunk)(SfdSj_x0017E440 *sj, int id, SfdSjChunk_x0017E440 *ck);
    void (*putChunk)(SfdSj_x0017E440 *sj, int id, SfdSjChunk_x0017E440 *ck);
    int (*getNumData)(SfdSj_x0017E440 *sj, int id);
} SfdSjVtbl_x0017E440;
struct SfdSj_x0017E440 {
    SfdSjVtbl_x0017E440 *vtbl;
};
struct SfdSj_x0017E440;
typedef struct M2vErrInf_x0017E440 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E440;
typedef struct Mpeg2Ext_x0017E440 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E440;
typedef enum M2vFrameRate_x0017E440 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E440 = 0
} M2vFrameRate_x0017E440;
typedef enum M2vPicType_x0017E440 {
    M2V_PICTYPE_I_x0017E440 = 1,
    M2V_PICTYPE_P_x0017E440 = 2,
    M2V_PICTYPE_B_x0017E440 = 3,
    M2V_PICTYPE_D_x0017E440 = 4
} M2vPicType_x0017E440;
typedef enum M2vPicStruct_x0017E440 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E440 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E440 = 2,
    M2V_PICSTRUCT_FRAME_x0017E440 = 3
} M2vPicStruct_x0017E440;
typedef enum M2vPicAtrF64_x0017E440 {
    M2V_PICATR_F64_0_x0017E440 = 0
} M2vPicAtrF64_x0017E440;
typedef struct M2vPicAtr_x0017E440 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E440 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E440 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E440 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E440 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E440;
typedef void (*M2vUsrDatFn_x0017E440)(void *obj, int level);
typedef struct M2vUsrSj_x0017E440 {
    struct SfdSj_x0017E440 *sj;
    M2vUsrDatFn_x0017E440 fn;
    void *obj;
} M2vUsrSj_x0017E440;
typedef struct M2vPicUsr_x0017E440 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E440;
typedef void (*M2vCondFn_x0017E440)();
typedef struct M2vObj_x0017E440 {
    int stat;
    M2vErrInf_x0017E440 err;
    M2vCondFn_x0017E440 cond[16];
    M2vPicAtr_x0017E440 picatr;
    char pad216[64];
    M2vUsrSj_x0017E440 usrsj[4];
    M2vPicUsr_x0017E440 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E440 ext;
    char pad1656[8];
} M2vObj_x0017E440;
extern void M2V_SetErrFunc_x0017E440(M2vObj_x0017E440 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E440 {
    MPV_UDLVL_SEQ_x0017E440 = 1,
    MPV_UDLVL_GOP_x0017E440 = 2,
    MPV_UDLVL_PIC_x0017E440 = 3
} MpvUdLevel_x0017E440;
typedef struct MpvSeqInf_x0017E440 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E440;
typedef struct MpvMotionRange_x0017E440 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E440;
typedef struct MpvErrObj_x0017E440 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E440;
typedef struct MpvHn_x0017E440 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E440 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E440 picInf;
    MpvErrObj_x0017E440 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E440 fwd;
    char pad764[20];
    MpvMotionRange_x0017E440 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E440 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E440 *lower;
    MpvUdLevel_x0017E440 usrDatLevel;
    M2vUsrSj_x0017E440 bufEnt[4];
    M2vPicUsr_x0017E440 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E440;
typedef struct MpvBuildInf_x0017E440 {
    int magic;
    int libSize;
    int hnSize;
    int poolSize;
} MpvBuildInf_x0017E440;
int mpv_ReportError_x0017E440(MpvHn_x0017E440 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017E440(M2vObj_x0017E440 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvBuildInf_x0017E440 mpv_build_inf_x0017E440 __asm__("D_00465420");
extern unsigned char mpv_endian_mark_x0017E440[4] __asm__("D_00465430");
int func_0017E440_x0017E440(void) __asm__("func_0017E440");
/* mpvlib_ChkFatal: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E440_x0017E440(void) {
    if (mpv_build_inf_x0017E440.magic != 0x5a5a5a5a) {
        return mpv_ReportError_x0017E440(0, 0xff03ff02);
    }
    if (mpv_endian_mark_x0017E440[0] != 4) {
        for (;;) {
            ((void (*)(void))-1)();
        }
    }
    return 0;
}
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
typedef struct SfdSj_x0017E620 SfdSj_x0017E620;
typedef struct SfdSjChunk_x0017E620 {
    char *data;
    int len;
} SfdSjChunk_x0017E620;
typedef struct SfdSjVtbl_x0017E620 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E620 *sj);
    int (*getUuid)(SfdSj_x0017E620 *sj);
    void (*reset)(SfdSj_x0017E620 *sj);
    void (*getChunk)(SfdSj_x0017E620 *sj, int id, int n, SfdSjChunk_x0017E620 *ck);
    void (*ungetChunk)(SfdSj_x0017E620 *sj, int id, SfdSjChunk_x0017E620 *ck);
    void (*putChunk)(SfdSj_x0017E620 *sj, int id, SfdSjChunk_x0017E620 *ck);
    int (*getNumData)(SfdSj_x0017E620 *sj, int id);
} SfdSjVtbl_x0017E620;
struct SfdSj_x0017E620 {
    SfdSjVtbl_x0017E620 *vtbl;
};
struct SfdSj_x0017E620;
typedef struct M2vErrInf_x0017E620 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E620;
typedef struct Mpeg2Ext_x0017E620 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E620;
typedef enum M2vFrameRate_x0017E620 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E620 = 0
} M2vFrameRate_x0017E620;
typedef enum M2vPicType_x0017E620 {
    M2V_PICTYPE_I_x0017E620 = 1,
    M2V_PICTYPE_P_x0017E620 = 2,
    M2V_PICTYPE_B_x0017E620 = 3,
    M2V_PICTYPE_D_x0017E620 = 4
} M2vPicType_x0017E620;
typedef enum M2vPicStruct_x0017E620 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E620 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E620 = 2,
    M2V_PICSTRUCT_FRAME_x0017E620 = 3
} M2vPicStruct_x0017E620;
typedef enum M2vPicAtrF64_x0017E620 {
    M2V_PICATR_F64_0_x0017E620 = 0
} M2vPicAtrF64_x0017E620;
typedef struct M2vPicAtr_x0017E620 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E620 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E620 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E620 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E620 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E620;
typedef void (*M2vUsrDatFn_x0017E620)(void *obj, int level);
typedef struct M2vUsrSj_x0017E620 {
    struct SfdSj_x0017E620 *sj;
    M2vUsrDatFn_x0017E620 fn;
    void *obj;
} M2vUsrSj_x0017E620;
typedef struct M2vPicUsr_x0017E620 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E620;
typedef void (*M2vCondFn_x0017E620)();
typedef struct M2vObj_x0017E620 {
    int stat;
    M2vErrInf_x0017E620 err;
    M2vCondFn_x0017E620 cond[16];
    M2vPicAtr_x0017E620 picatr;
    char pad216[64];
    M2vUsrSj_x0017E620 usrsj[4];
    M2vPicUsr_x0017E620 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E620 ext;
    char pad1656[8];
} M2vObj_x0017E620;
extern void M2V_SetErrFunc_x0017E620(M2vObj_x0017E620 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E620 {
    MPV_UDLVL_SEQ_x0017E620 = 1,
    MPV_UDLVL_GOP_x0017E620 = 2,
    MPV_UDLVL_PIC_x0017E620 = 3
} MpvUdLevel_x0017E620;
typedef struct MpvSeqInf_x0017E620 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E620;
typedef struct MpvMotionRange_x0017E620 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E620;
typedef struct MpvErrObj_x0017E620 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E620;
typedef struct MpvHn_x0017E620 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E620 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E620 picInf;
    MpvErrObj_x0017E620 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E620 fwd;
    char pad764[20];
    MpvMotionRange_x0017E620 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E620 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E620 *lower;
    MpvUdLevel_x0017E620 usrDatLevel;
    M2vUsrSj_x0017E620 bufEnt[4];
    M2vPicUsr_x0017E620 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E620;
typedef struct MpvLib_x0017E620 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E620 *hn;
} MpvLib_x0017E620;
extern void mpvhook_SetErrFunc_x0017E620(M2vObj_x0017E620 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvLib_x0017E620 mpv_lib_x0017E620 __asm__("D_004814F0");
extern unsigned char *mpv_clamp_x0017E620 __asm__("D_00424CA4");
void func_0017E620_x0017E620(MpvHn_x0017E620 *hn) __asm__("func_0017E620");
/* mpv_BindHnBuffers: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017E620_x0017E620(MpvHn_x0017E620 *hn) {
    char *pool = mpv_lib_x0017E620.pool;
    hn->mbBuf = pool + 4384;
    hn->blkBuf = pool + 4352;
    hn->dctBuf = pool + 4448;
    hn->clampY = mpv_clamp_x0017E620;
    hn->clampC = mpv_clamp_x0017E620;
}
void func_0017E658(void) {

}
typedef struct SfdSj_x0017E660 SfdSj_x0017E660;
typedef struct SfdSjChunk_x0017E660 {
    char *data;
    int len;
} SfdSjChunk_x0017E660;
typedef struct SfdSjVtbl_x0017E660 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E660 *sj);
    int (*getUuid)(SfdSj_x0017E660 *sj);
    void (*reset)(SfdSj_x0017E660 *sj);
    void (*getChunk)(SfdSj_x0017E660 *sj, int id, int n, SfdSjChunk_x0017E660 *ck);
    void (*ungetChunk)(SfdSj_x0017E660 *sj, int id, SfdSjChunk_x0017E660 *ck);
    void (*putChunk)(SfdSj_x0017E660 *sj, int id, SfdSjChunk_x0017E660 *ck);
    int (*getNumData)(SfdSj_x0017E660 *sj, int id);
} SfdSjVtbl_x0017E660;
struct SfdSj_x0017E660 {
    SfdSjVtbl_x0017E660 *vtbl;
};
struct SfdSj_x0017E660;
typedef struct M2vErrInf_x0017E660 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E660;
typedef struct Mpeg2Ext_x0017E660 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E660;
typedef enum M2vFrameRate_x0017E660 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E660 = 0
} M2vFrameRate_x0017E660;
typedef enum M2vPicType_x0017E660 {
    M2V_PICTYPE_I_x0017E660 = 1,
    M2V_PICTYPE_P_x0017E660 = 2,
    M2V_PICTYPE_B_x0017E660 = 3,
    M2V_PICTYPE_D_x0017E660 = 4
} M2vPicType_x0017E660;
typedef enum M2vPicStruct_x0017E660 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E660 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E660 = 2,
    M2V_PICSTRUCT_FRAME_x0017E660 = 3
} M2vPicStruct_x0017E660;
typedef enum M2vPicAtrF64_x0017E660 {
    M2V_PICATR_F64_0_x0017E660 = 0
} M2vPicAtrF64_x0017E660;
typedef struct M2vPicAtr_x0017E660 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E660 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E660 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E660 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E660 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E660;
typedef void (*M2vUsrDatFn_x0017E660)(void *obj, int level);
typedef struct M2vUsrSj_x0017E660 {
    struct SfdSj_x0017E660 *sj;
    M2vUsrDatFn_x0017E660 fn;
    void *obj;
} M2vUsrSj_x0017E660;
typedef struct M2vPicUsr_x0017E660 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E660;
typedef void (*M2vCondFn_x0017E660)();
typedef struct M2vObj_x0017E660 {
    int stat;
    M2vErrInf_x0017E660 err;
    M2vCondFn_x0017E660 cond[16];
    M2vPicAtr_x0017E660 picatr;
    char pad216[64];
    M2vUsrSj_x0017E660 usrsj[4];
    M2vPicUsr_x0017E660 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E660 ext;
    char pad1656[8];
} M2vObj_x0017E660;
extern void M2V_SetErrFunc_x0017E660(M2vObj_x0017E660 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E660 {
    MPV_UDLVL_SEQ_x0017E660 = 1,
    MPV_UDLVL_GOP_x0017E660 = 2,
    MPV_UDLVL_PIC_x0017E660 = 3
} MpvUdLevel_x0017E660;
typedef struct MpvSeqInf_x0017E660 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E660;
typedef struct MpvMotionRange_x0017E660 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E660;
typedef struct MpvErrObj_x0017E660 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E660;
typedef struct MpvHn_x0017E660 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E660 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E660 picInf;
    MpvErrObj_x0017E660 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E660 fwd;
    char pad764[20];
    MpvMotionRange_x0017E660 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E660 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E660 *lower;
    MpvUdLevel_x0017E660 usrDatLevel;
    M2vUsrSj_x0017E660 bufEnt[4];
    M2vPicUsr_x0017E660 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E660;
typedef struct MpvLib_x0017E660 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E660 *hn;
} MpvLib_x0017E660;
extern void mpvhook_SetErrFunc_x0017E660(M2vObj_x0017E660 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void UTY_MemcpyDword_x0017E660(void *dst, void *src, unsigned int n) __asm__("func_00178E38");
void UTY_MemsetDword_x0017E660(void *dst, int value, unsigned int count) __asm__("func_00179018");
extern int mpv_default_cond_x0017E660[16] __asm__("D_004653E0");
extern MpvLib_x0017E660 mpv_lib_x0017E660 __asm__("D_004814F0");
void mpvlib_AllocLc_x0017E660(void *p, int size) __asm__("func_0017E9D0");
void mpvlib_AllocLc_x0017E660(void *p, int size) __asm__("func_0017E9D0");
void func_0017E660_x0017E660(int nhn, char *work) __asm__("func_0017E660");
/* mpvlib_InitWork: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017E660_x0017E660(int nhn, char *work) {
    char *base;
    char *tables;
    char *pool;
    base = (char *)(((int)work + 63) & ~63);
    UTY_MemsetDword_x0017E660(base, 0, (nhn << 8) + 0x800);
    tables = base + (nhn << 10);
    pool = tables + 0x420;
    mpvlib_AllocLc_x0017E660(pool, 7136);
    UTY_MemcpyDword_x0017E660(&mpv_lib_x0017E660, mpv_default_cond_x0017E660, 16);
    mpv_lib_x0017E660.tables = tables;
    mpv_lib_x0017E660.pool = pool;
    mpv_lib_x0017E660.nhn = nhn;
    mpv_lib_x0017E660.hn = (MpvHn_x0017E660 *)base;
}
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
typedef struct SfdSj_x0017E7B8 SfdSj_x0017E7B8;
typedef struct SfdSjChunk_x0017E7B8 {
    char *data;
    int len;
} SfdSjChunk_x0017E7B8;
typedef struct SfdSjVtbl_x0017E7B8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E7B8 *sj);
    int (*getUuid)(SfdSj_x0017E7B8 *sj);
    void (*reset)(SfdSj_x0017E7B8 *sj);
    void (*getChunk)(SfdSj_x0017E7B8 *sj, int id, int n, SfdSjChunk_x0017E7B8 *ck);
    void (*ungetChunk)(SfdSj_x0017E7B8 *sj, int id, SfdSjChunk_x0017E7B8 *ck);
    void (*putChunk)(SfdSj_x0017E7B8 *sj, int id, SfdSjChunk_x0017E7B8 *ck);
    int (*getNumData)(SfdSj_x0017E7B8 *sj, int id);
} SfdSjVtbl_x0017E7B8;
struct SfdSj_x0017E7B8 {
    SfdSjVtbl_x0017E7B8 *vtbl;
};
struct SfdSj_x0017E7B8;
typedef struct M2vErrInf_x0017E7B8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E7B8;
typedef struct Mpeg2Ext_x0017E7B8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E7B8;
typedef enum M2vFrameRate_x0017E7B8 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E7B8 = 0
} M2vFrameRate_x0017E7B8;
typedef enum M2vPicType_x0017E7B8 {
    M2V_PICTYPE_I_x0017E7B8 = 1,
    M2V_PICTYPE_P_x0017E7B8 = 2,
    M2V_PICTYPE_B_x0017E7B8 = 3,
    M2V_PICTYPE_D_x0017E7B8 = 4
} M2vPicType_x0017E7B8;
typedef enum M2vPicStruct_x0017E7B8 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E7B8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E7B8 = 2,
    M2V_PICSTRUCT_FRAME_x0017E7B8 = 3
} M2vPicStruct_x0017E7B8;
typedef enum M2vPicAtrF64_x0017E7B8 {
    M2V_PICATR_F64_0_x0017E7B8 = 0
} M2vPicAtrF64_x0017E7B8;
typedef struct M2vPicAtr_x0017E7B8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E7B8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E7B8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E7B8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E7B8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E7B8;
typedef void (*M2vUsrDatFn_x0017E7B8)(void *obj, int level);
typedef struct M2vUsrSj_x0017E7B8 {
    struct SfdSj_x0017E7B8 *sj;
    M2vUsrDatFn_x0017E7B8 fn;
    void *obj;
} M2vUsrSj_x0017E7B8;
typedef struct M2vPicUsr_x0017E7B8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E7B8;
typedef void (*M2vCondFn_x0017E7B8)();
typedef struct M2vObj_x0017E7B8 {
    int stat;
    M2vErrInf_x0017E7B8 err;
    M2vCondFn_x0017E7B8 cond[16];
    M2vPicAtr_x0017E7B8 picatr;
    char pad216[64];
    M2vUsrSj_x0017E7B8 usrsj[4];
    M2vPicUsr_x0017E7B8 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E7B8 ext;
    char pad1656[8];
} M2vObj_x0017E7B8;
extern void M2V_SetErrFunc_x0017E7B8(M2vObj_x0017E7B8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E7B8 {
    MPV_UDLVL_SEQ_x0017E7B8 = 1,
    MPV_UDLVL_GOP_x0017E7B8 = 2,
    MPV_UDLVL_PIC_x0017E7B8 = 3
} MpvUdLevel_x0017E7B8;
typedef struct MpvSeqInf_x0017E7B8 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E7B8;
typedef struct MpvMotionRange_x0017E7B8 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E7B8;
typedef struct MpvErrObj_x0017E7B8 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E7B8;
typedef struct MpvHn_x0017E7B8 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E7B8 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E7B8 picInf;
    MpvErrObj_x0017E7B8 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E7B8 fwd;
    char pad764[20];
    MpvMotionRange_x0017E7B8 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E7B8 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E7B8 *lower;
    MpvUdLevel_x0017E7B8 usrDatLevel;
    M2vUsrSj_x0017E7B8 bufEnt[4];
    M2vPicUsr_x0017E7B8 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E7B8;
typedef struct MpvLib_x0017E7B8 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E7B8 *hn;
} MpvLib_x0017E7B8;
extern void mpvhook_SetErrFunc_x0017E7B8(M2vObj_x0017E7B8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvLib_x0017E7B8 mpv_lib_x0017E7B8 __asm__("D_004814F0");
void mpv_FinishLower_x0017E7B8(void) __asm__("func_0017EC00");
void mpvlib_FreeLc_x0017E7B8(void *p, int size) __asm__("func_0017E9D8");
void mpvlib_FreeLc_x0017E7B8(void *p, int size) __asm__("func_0017E9D8");
void mpv_FinishLower_x0017E7B8(void) __asm__("func_0017EC00");
void func_0017E7B8_x0017E7B8(void) __asm__("func_0017E7B8");
/* MPV_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017E7B8_x0017E7B8(void) {
    mpv_FinishLower_x0017E7B8();
    mpvlib_FreeLc_x0017E7B8(mpv_lib_x0017E7B8.pool, 7136);
}
typedef struct SfdSj_x0017E7E0 SfdSj_x0017E7E0;
typedef struct SfdSjChunk_x0017E7E0 {
    char *data;
    int len;
} SfdSjChunk_x0017E7E0;
typedef struct SfdSjVtbl_x0017E7E0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E7E0 *sj);
    int (*getUuid)(SfdSj_x0017E7E0 *sj);
    void (*reset)(SfdSj_x0017E7E0 *sj);
    void (*getChunk)(SfdSj_x0017E7E0 *sj, int id, int n, SfdSjChunk_x0017E7E0 *ck);
    void (*ungetChunk)(SfdSj_x0017E7E0 *sj, int id, SfdSjChunk_x0017E7E0 *ck);
    void (*putChunk)(SfdSj_x0017E7E0 *sj, int id, SfdSjChunk_x0017E7E0 *ck);
    int (*getNumData)(SfdSj_x0017E7E0 *sj, int id);
} SfdSjVtbl_x0017E7E0;
struct SfdSj_x0017E7E0 {
    SfdSjVtbl_x0017E7E0 *vtbl;
};
struct SfdSj_x0017E7E0;
typedef struct M2vErrInf_x0017E7E0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E7E0;
typedef struct Mpeg2Ext_x0017E7E0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E7E0;
typedef enum M2vFrameRate_x0017E7E0 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E7E0 = 0
} M2vFrameRate_x0017E7E0;
typedef enum M2vPicType_x0017E7E0 {
    M2V_PICTYPE_I_x0017E7E0 = 1,
    M2V_PICTYPE_P_x0017E7E0 = 2,
    M2V_PICTYPE_B_x0017E7E0 = 3,
    M2V_PICTYPE_D_x0017E7E0 = 4
} M2vPicType_x0017E7E0;
typedef enum M2vPicStruct_x0017E7E0 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E7E0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E7E0 = 2,
    M2V_PICSTRUCT_FRAME_x0017E7E0 = 3
} M2vPicStruct_x0017E7E0;
typedef enum M2vPicAtrF64_x0017E7E0 {
    M2V_PICATR_F64_0_x0017E7E0 = 0
} M2vPicAtrF64_x0017E7E0;
typedef struct M2vPicAtr_x0017E7E0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E7E0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E7E0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E7E0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E7E0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E7E0;
typedef void (*M2vUsrDatFn_x0017E7E0)(void *obj, int level);
typedef struct M2vUsrSj_x0017E7E0 {
    struct SfdSj_x0017E7E0 *sj;
    M2vUsrDatFn_x0017E7E0 fn;
    void *obj;
} M2vUsrSj_x0017E7E0;
typedef struct M2vPicUsr_x0017E7E0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E7E0;
typedef void (*M2vCondFn_x0017E7E0)();
typedef struct M2vObj_x0017E7E0 {
    int stat;
    M2vErrInf_x0017E7E0 err;
    M2vCondFn_x0017E7E0 cond[16];
    M2vPicAtr_x0017E7E0 picatr;
    char pad216[64];
    M2vUsrSj_x0017E7E0 usrsj[4];
    M2vPicUsr_x0017E7E0 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E7E0 ext;
    char pad1656[8];
} M2vObj_x0017E7E0;
extern void M2V_SetErrFunc_x0017E7E0(M2vObj_x0017E7E0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E7E0 {
    MPV_UDLVL_SEQ_x0017E7E0 = 1,
    MPV_UDLVL_GOP_x0017E7E0 = 2,
    MPV_UDLVL_PIC_x0017E7E0 = 3
} MpvUdLevel_x0017E7E0;
typedef struct MpvSeqInf_x0017E7E0 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E7E0;
typedef struct MpvMotionRange_x0017E7E0 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E7E0;
typedef struct MpvErrObj_x0017E7E0 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E7E0;
typedef struct MpvHn_x0017E7E0 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E7E0 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E7E0 picInf;
    MpvErrObj_x0017E7E0 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E7E0 fwd;
    char pad764[20];
    MpvMotionRange_x0017E7E0 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E7E0 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E7E0 *lower;
    MpvUdLevel_x0017E7E0 usrDatLevel;
    M2vUsrSj_x0017E7E0 bufEnt[4];
    M2vPicUsr_x0017E7E0 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E7E0;
extern void mpvhook_SetErrFunc_x0017E7E0(M2vObj_x0017E7E0 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void mpvlib_AllocLc_x0017E7E0(void *p, int size) __asm__("func_0017E9D0");
MpvHn_x0017E7E0 *mpvlib_SearchFreeHn_x0017E7E0(void) __asm__("func_0017E838");
MpvHn_x0017E7E0 *mpvlib_InitHn_x0017E7E0(MpvHn_x0017E7E0 *hn) __asm__("func_0017E888");
M2vObj_x0017E7E0 *mpvcmc_OneMakeMbTa_x0017E7E0(MpvHn_x0017E7E0 *hn) __asm__("func_0017EC18");
MpvHn_x0017E7E0 *mpvlib_SearchFreeHn_x0017E7E0(void) __asm__("func_0017E838");
MpvHn_x0017E7E0 *mpvlib_InitHn_x0017E7E0(MpvHn_x0017E7E0 *hn) __asm__("func_0017E888");
void mpvlib_AllocLc_x0017E7E0(void *p, int size) __asm__("func_0017E9D0");
M2vObj_x0017E7E0 *mpvcmc_OneMakeMbTa_x0017E7E0(MpvHn_x0017E7E0 *hn) __asm__("func_0017EC18");
MpvHn_x0017E7E0 *func_0017E7E0_x0017E7E0(void) __asm__("func_0017E7E0");
/* MPV_Create: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
MpvHn_x0017E7E0 *func_0017E7E0_x0017E7E0(void) {
    MpvHn_x0017E7E0 *hn;
    hn = mpvlib_SearchFreeHn_x0017E7E0();
    if (hn == 0) {
        return 0;
    }
    mpvlib_AllocLc_x0017E7E0(hn, 1016);
    hn = mpvlib_InitHn_x0017E7E0(hn);
    hn->lower = mpvcmc_OneMakeMbTa_x0017E7E0(hn);
    return hn;
}
typedef struct SfdSj_x0017E838 SfdSj_x0017E838;
typedef struct SfdSjChunk_x0017E838 {
    char *data;
    int len;
} SfdSjChunk_x0017E838;
typedef struct SfdSjVtbl_x0017E838 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E838 *sj);
    int (*getUuid)(SfdSj_x0017E838 *sj);
    void (*reset)(SfdSj_x0017E838 *sj);
    void (*getChunk)(SfdSj_x0017E838 *sj, int id, int n, SfdSjChunk_x0017E838 *ck);
    void (*ungetChunk)(SfdSj_x0017E838 *sj, int id, SfdSjChunk_x0017E838 *ck);
    void (*putChunk)(SfdSj_x0017E838 *sj, int id, SfdSjChunk_x0017E838 *ck);
    int (*getNumData)(SfdSj_x0017E838 *sj, int id);
} SfdSjVtbl_x0017E838;
struct SfdSj_x0017E838 {
    SfdSjVtbl_x0017E838 *vtbl;
};
struct SfdSj_x0017E838;
typedef struct M2vErrInf_x0017E838 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E838;
typedef struct Mpeg2Ext_x0017E838 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E838;
typedef enum M2vFrameRate_x0017E838 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E838 = 0
} M2vFrameRate_x0017E838;
typedef enum M2vPicType_x0017E838 {
    M2V_PICTYPE_I_x0017E838 = 1,
    M2V_PICTYPE_P_x0017E838 = 2,
    M2V_PICTYPE_B_x0017E838 = 3,
    M2V_PICTYPE_D_x0017E838 = 4
} M2vPicType_x0017E838;
typedef enum M2vPicStruct_x0017E838 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E838 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E838 = 2,
    M2V_PICSTRUCT_FRAME_x0017E838 = 3
} M2vPicStruct_x0017E838;
typedef enum M2vPicAtrF64_x0017E838 {
    M2V_PICATR_F64_0_x0017E838 = 0
} M2vPicAtrF64_x0017E838;
typedef struct M2vPicAtr_x0017E838 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E838 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E838 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E838 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E838 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E838;
typedef void (*M2vUsrDatFn_x0017E838)(void *obj, int level);
typedef struct M2vUsrSj_x0017E838 {
    struct SfdSj_x0017E838 *sj;
    M2vUsrDatFn_x0017E838 fn;
    void *obj;
} M2vUsrSj_x0017E838;
typedef struct M2vPicUsr_x0017E838 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E838;
typedef void (*M2vCondFn_x0017E838)();
typedef struct M2vObj_x0017E838 {
    int stat;
    M2vErrInf_x0017E838 err;
    M2vCondFn_x0017E838 cond[16];
    M2vPicAtr_x0017E838 picatr;
    char pad216[64];
    M2vUsrSj_x0017E838 usrsj[4];
    M2vPicUsr_x0017E838 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E838 ext;
    char pad1656[8];
} M2vObj_x0017E838;
extern void M2V_SetErrFunc_x0017E838(M2vObj_x0017E838 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E838 {
    MPV_UDLVL_SEQ_x0017E838 = 1,
    MPV_UDLVL_GOP_x0017E838 = 2,
    MPV_UDLVL_PIC_x0017E838 = 3
} MpvUdLevel_x0017E838;
typedef struct MpvSeqInf_x0017E838 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E838;
typedef struct MpvMotionRange_x0017E838 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E838;
typedef struct MpvErrObj_x0017E838 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E838;
typedef struct MpvHn_x0017E838 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E838 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E838 picInf;
    MpvErrObj_x0017E838 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E838 fwd;
    char pad764[20];
    MpvMotionRange_x0017E838 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E838 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E838 *lower;
    MpvUdLevel_x0017E838 usrDatLevel;
    M2vUsrSj_x0017E838 bufEnt[4];
    M2vPicUsr_x0017E838 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E838;
typedef struct MpvLib_x0017E838 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E838 *hn;
} MpvLib_x0017E838;
extern void mpvhook_SetErrFunc_x0017E838(M2vObj_x0017E838 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvLib_x0017E838 mpv_lib_x0017E838 __asm__("D_004814F0");
MpvHn_x0017E838 *func_0017E838_x0017E838(void) __asm__("func_0017E838");
/* mpvlib_SearchFreeHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
MpvHn_x0017E838 *func_0017E838_x0017E838(void) {
    MpvHn_x0017E838 *hn = mpv_lib_x0017E838.hn;
    int nhn = mpv_lib_x0017E838.nhn;
    int i;
    for (i = 0; i < nhn; i++, hn++) {
        if (hn->stat == 1) {
            return hn;
        }
    }
    return 0;
}
typedef struct SfdSj_x0017E888 SfdSj_x0017E888;
typedef struct SfdSjChunk_x0017E888 {
    char *data;
    int len;
} SfdSjChunk_x0017E888;
typedef struct SfdSjVtbl_x0017E888 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E888 *sj);
    int (*getUuid)(SfdSj_x0017E888 *sj);
    void (*reset)(SfdSj_x0017E888 *sj);
    void (*getChunk)(SfdSj_x0017E888 *sj, int id, int n, SfdSjChunk_x0017E888 *ck);
    void (*ungetChunk)(SfdSj_x0017E888 *sj, int id, SfdSjChunk_x0017E888 *ck);
    void (*putChunk)(SfdSj_x0017E888 *sj, int id, SfdSjChunk_x0017E888 *ck);
    int (*getNumData)(SfdSj_x0017E888 *sj, int id);
} SfdSjVtbl_x0017E888;
struct SfdSj_x0017E888 {
    SfdSjVtbl_x0017E888 *vtbl;
};
struct SfdSj_x0017E888;
typedef struct M2vErrInf_x0017E888 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E888;
typedef struct Mpeg2Ext_x0017E888 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E888;
typedef enum M2vFrameRate_x0017E888 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E888 = 0
} M2vFrameRate_x0017E888;
typedef enum M2vPicType_x0017E888 {
    M2V_PICTYPE_I_x0017E888 = 1,
    M2V_PICTYPE_P_x0017E888 = 2,
    M2V_PICTYPE_B_x0017E888 = 3,
    M2V_PICTYPE_D_x0017E888 = 4
} M2vPicType_x0017E888;
typedef enum M2vPicStruct_x0017E888 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E888 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E888 = 2,
    M2V_PICSTRUCT_FRAME_x0017E888 = 3
} M2vPicStruct_x0017E888;
typedef enum M2vPicAtrF64_x0017E888 {
    M2V_PICATR_F64_0_x0017E888 = 0
} M2vPicAtrF64_x0017E888;
typedef struct M2vPicAtr_x0017E888 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E888 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E888 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E888 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E888 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E888;
typedef void (*M2vUsrDatFn_x0017E888)(void *obj, int level);
typedef struct M2vUsrSj_x0017E888 {
    struct SfdSj_x0017E888 *sj;
    M2vUsrDatFn_x0017E888 fn;
    void *obj;
} M2vUsrSj_x0017E888;
typedef struct M2vPicUsr_x0017E888 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E888;
typedef void (*M2vCondFn_x0017E888)();
typedef struct M2vObj_x0017E888 {
    int stat;
    M2vErrInf_x0017E888 err;
    M2vCondFn_x0017E888 cond[16];
    M2vPicAtr_x0017E888 picatr;
    char pad216[64];
    M2vUsrSj_x0017E888 usrsj[4];
    M2vPicUsr_x0017E888 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E888 ext;
    char pad1656[8];
} M2vObj_x0017E888;
extern void M2V_SetErrFunc_x0017E888(M2vObj_x0017E888 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E888 {
    MPV_UDLVL_SEQ_x0017E888 = 1,
    MPV_UDLVL_GOP_x0017E888 = 2,
    MPV_UDLVL_PIC_x0017E888 = 3
} MpvUdLevel_x0017E888;
typedef struct MpvSeqInf_x0017E888 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E888;
typedef struct MpvMotionRange_x0017E888 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E888;
typedef struct MpvErrObj_x0017E888 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E888;
typedef struct MpvHn_x0017E888 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E888 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E888 picInf;
    MpvErrObj_x0017E888 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E888 fwd;
    char pad764[20];
    MpvMotionRange_x0017E888 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E888 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E888 *lower;
    MpvUdLevel_x0017E888 usrDatLevel;
    M2vUsrSj_x0017E888 bufEnt[4];
    M2vPicUsr_x0017E888 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E888;
typedef struct MpvLib_x0017E888 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E888 *hn;
} MpvLib_x0017E888;
void mpv_ResetErr_x0017E888(MpvErrObj_x0017E888 *err) __asm__("func_0017C1D8");
void MPV_SetUsrSj_x0017E888(MpvHn_x0017E888 *mpv, int index, SfdSj_x0017E888 *sj, M2vUsrDatFn_x0017E888 fn, void *obj) __asm__("func_0017C840");
void MPV_SetPicUsrBuf_x0017E888(MpvHn_x0017E888 *mpv, char *buf, int size) __asm__("func_0017C868");
extern void mpvhook_SetErrFunc_x0017E888(M2vObj_x0017E888 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void UTY_MemcpyDword_x0017E888(void *dst, void *src, unsigned int n) __asm__("func_00178E38");
extern MpvLib_x0017E888 mpv_lib_x0017E888 __asm__("D_004814F0");
void mpv_BindHnBuffers_x0017E888(MpvHn_x0017E888 *hn) __asm__("func_0017E620");
void mpv_ResetPicInf_x0017E888(M2vPicAtr_x0017E888 *inf) __asm__("func_0017E708");
void mpv_BindHnBuffers_x0017E888(MpvHn_x0017E888 *hn) __asm__("func_0017E620");
void mpv_ResetPicInf_x0017E888(M2vPicAtr_x0017E888 *inf) __asm__("func_0017E708");
MpvHn_x0017E888 *func_0017E888_x0017E888(MpvHn_x0017E888 *hn) __asm__("func_0017E888");
/* mpvlib_InitHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
MpvHn_x0017E888 *func_0017E888_x0017E888(MpvHn_x0017E888 *hn) {
    int i;
    mpv_BindHnBuffers_x0017E888(hn);
    hn->f396 = 0;
    UTY_MemcpyDword_x0017E888(hn->cond, mpv_lib_x0017E888.cond, 16);
    mpv_ResetErr_x0017E888(&hn->err);
    mpv_ResetPicInf_x0017E888(&hn->picInf);
    hn->skipReq = 0;
    hn->skipCnt = 0;
    hn->maxCount = hn->cond[7];
    hn->strmType = 0;
    hn->f860 = 0;
    hn->f864 = 0;
    hn->f868 = 0;
    hn->idcPrec = 0;
    for (i = 0; i < 4; i++) {
        MPV_SetUsrSj_x0017E888(hn, i, 0, 0, 0);
    }
    MPV_SetPicUsrBuf_x0017E888(hn, 0, 0);
    hn->stat = 2;
    return hn;
}
void func_0017E950(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x78;
    *arg1 = *(s32 *)((u8 *)temp_a0 + 0x18);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0x1C);
}
typedef struct SfdSj_x0017E968 SfdSj_x0017E968;
typedef struct SfdSjChunk_x0017E968 {
    char *data;
    int len;
} SfdSjChunk_x0017E968;
typedef struct SfdSjVtbl_x0017E968 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E968 *sj);
    int (*getUuid)(SfdSj_x0017E968 *sj);
    void (*reset)(SfdSj_x0017E968 *sj);
    void (*getChunk)(SfdSj_x0017E968 *sj, int id, int n, SfdSjChunk_x0017E968 *ck);
    void (*ungetChunk)(SfdSj_x0017E968 *sj, int id, SfdSjChunk_x0017E968 *ck);
    void (*putChunk)(SfdSj_x0017E968 *sj, int id, SfdSjChunk_x0017E968 *ck);
    int (*getNumData)(SfdSj_x0017E968 *sj, int id);
} SfdSjVtbl_x0017E968;
struct SfdSj_x0017E968 {
    SfdSjVtbl_x0017E968 *vtbl;
};
struct SfdSj_x0017E968;
typedef struct M2vErrInf_x0017E968 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E968;
typedef struct Mpeg2Ext_x0017E968 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E968;
typedef enum M2vFrameRate_x0017E968 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E968 = 0
} M2vFrameRate_x0017E968;
typedef enum M2vPicType_x0017E968 {
    M2V_PICTYPE_I_x0017E968 = 1,
    M2V_PICTYPE_P_x0017E968 = 2,
    M2V_PICTYPE_B_x0017E968 = 3,
    M2V_PICTYPE_D_x0017E968 = 4
} M2vPicType_x0017E968;
typedef enum M2vPicStruct_x0017E968 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E968 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E968 = 2,
    M2V_PICSTRUCT_FRAME_x0017E968 = 3
} M2vPicStruct_x0017E968;
typedef enum M2vPicAtrF64_x0017E968 {
    M2V_PICATR_F64_0_x0017E968 = 0
} M2vPicAtrF64_x0017E968;
typedef struct M2vPicAtr_x0017E968 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E968 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E968 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E968 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E968 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E968;
typedef void (*M2vUsrDatFn_x0017E968)(void *obj, int level);
typedef struct M2vUsrSj_x0017E968 {
    struct SfdSj_x0017E968 *sj;
    M2vUsrDatFn_x0017E968 fn;
    void *obj;
} M2vUsrSj_x0017E968;
typedef struct M2vPicUsr_x0017E968 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E968;
typedef void (*M2vCondFn_x0017E968)();
typedef struct M2vObj_x0017E968 {
    int stat;
    M2vErrInf_x0017E968 err;
    M2vCondFn_x0017E968 cond[16];
    M2vPicAtr_x0017E968 picatr;
    char pad216[64];
    M2vUsrSj_x0017E968 usrsj[4];
    M2vPicUsr_x0017E968 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E968 ext;
    char pad1656[8];
} M2vObj_x0017E968;
extern void M2V_SetErrFunc_x0017E968(M2vObj_x0017E968 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E968 {
    MPV_UDLVL_SEQ_x0017E968 = 1,
    MPV_UDLVL_GOP_x0017E968 = 2,
    MPV_UDLVL_PIC_x0017E968 = 3
} MpvUdLevel_x0017E968;
typedef struct MpvSeqInf_x0017E968 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E968;
typedef struct MpvMotionRange_x0017E968 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E968;
typedef struct MpvErrObj_x0017E968 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E968;
typedef struct MpvHn_x0017E968 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E968 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E968 picInf;
    MpvErrObj_x0017E968 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E968 fwd;
    char pad764[20];
    MpvMotionRange_x0017E968 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E968 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E968 *lower;
    MpvUdLevel_x0017E968 usrDatLevel;
    M2vUsrSj_x0017E968 bufEnt[4];
    M2vPicUsr_x0017E968 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E968;
int MPVLIB_CheckHn_x0017E968(MpvHn_x0017E968 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017E968(MpvHn_x0017E968 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017E968(M2vObj_x0017E968 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
void mpvlib_FreeLc_x0017E968(void *p, int size) __asm__("func_0017E9D8");
void mpvcmc_BiMakeMbTa_x0017E968(MpvHn_x0017E968 *hn) __asm__("func_0017EC30");
void mpvlib_FreeLc_x0017E968(void *p, int size) __asm__("func_0017E9D8");
int MPVLIB_CheckHn_x0017E968(MpvHn_x0017E968 *hn) __asm__("func_0017EB90");
void mpvcmc_BiMakeMbTa_x0017E968(MpvHn_x0017E968 *hn) __asm__("func_0017EC30");
int func_0017E968_x0017E968(MpvHn_x0017E968 *hn) __asm__("func_0017E968");
/* MPV_Destroy: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E968_x0017E968(MpvHn_x0017E968 *hn) {
    if (MPVLIB_CheckHn_x0017E968(hn) != 0) {
        return mpv_ReportError_x0017E968(0, 0xFF030201);
    }
    mpvcmc_BiMakeMbTa_x0017E968(hn);
    mpvlib_FreeLc_x0017E968(hn, 1016);
    hn->stat = 1;
    return 0;
}
void func_0017E9D0(void) {

}
void func_0017E9D8(void) {

}
void func_0017E9E0(void) {

}
typedef struct SfdSj_x0017E9E8 SfdSj_x0017E9E8;
typedef struct SfdSjChunk_x0017E9E8 {
    char *data;
    int len;
} SfdSjChunk_x0017E9E8;
typedef struct SfdSjVtbl_x0017E9E8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017E9E8 *sj);
    int (*getUuid)(SfdSj_x0017E9E8 *sj);
    void (*reset)(SfdSj_x0017E9E8 *sj);
    void (*getChunk)(SfdSj_x0017E9E8 *sj, int id, int n, SfdSjChunk_x0017E9E8 *ck);
    void (*ungetChunk)(SfdSj_x0017E9E8 *sj, int id, SfdSjChunk_x0017E9E8 *ck);
    void (*putChunk)(SfdSj_x0017E9E8 *sj, int id, SfdSjChunk_x0017E9E8 *ck);
    int (*getNumData)(SfdSj_x0017E9E8 *sj, int id);
} SfdSjVtbl_x0017E9E8;
struct SfdSj_x0017E9E8 {
    SfdSjVtbl_x0017E9E8 *vtbl;
};
struct SfdSj_x0017E9E8;
typedef struct M2vErrInf_x0017E9E8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017E9E8;
typedef struct Mpeg2Ext_x0017E9E8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017E9E8;
typedef enum M2vFrameRate_x0017E9E8 {
    M2V_FRAME_RATE_FORBIDDEN_x0017E9E8 = 0
} M2vFrameRate_x0017E9E8;
typedef enum M2vPicType_x0017E9E8 {
    M2V_PICTYPE_I_x0017E9E8 = 1,
    M2V_PICTYPE_P_x0017E9E8 = 2,
    M2V_PICTYPE_B_x0017E9E8 = 3,
    M2V_PICTYPE_D_x0017E9E8 = 4
} M2vPicType_x0017E9E8;
typedef enum M2vPicStruct_x0017E9E8 {
    M2V_PICSTRUCT_TOP_FIELD_x0017E9E8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017E9E8 = 2,
    M2V_PICSTRUCT_FRAME_x0017E9E8 = 3
} M2vPicStruct_x0017E9E8;
typedef enum M2vPicAtrF64_x0017E9E8 {
    M2V_PICATR_F64_0_x0017E9E8 = 0
} M2vPicAtrF64_x0017E9E8;
typedef struct M2vPicAtr_x0017E9E8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017E9E8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017E9E8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017E9E8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017E9E8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017E9E8;
typedef void (*M2vUsrDatFn_x0017E9E8)(void *obj, int level);
typedef struct M2vUsrSj_x0017E9E8 {
    struct SfdSj_x0017E9E8 *sj;
    M2vUsrDatFn_x0017E9E8 fn;
    void *obj;
} M2vUsrSj_x0017E9E8;
typedef struct M2vPicUsr_x0017E9E8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017E9E8;
typedef void (*M2vCondFn_x0017E9E8)();
typedef struct M2vObj_x0017E9E8 {
    int stat;
    M2vErrInf_x0017E9E8 err;
    M2vCondFn_x0017E9E8 cond[16];
    M2vPicAtr_x0017E9E8 picatr;
    char pad216[64];
    M2vUsrSj_x0017E9E8 usrsj[4];
    M2vPicUsr_x0017E9E8 picusr;
    char pad340[12];
    Mpeg2Ext_x0017E9E8 ext;
    char pad1656[8];
} M2vObj_x0017E9E8;
extern void M2V_SetErrFunc_x0017E9E8(M2vObj_x0017E9E8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017E9E8 {
    MPV_UDLVL_SEQ_x0017E9E8 = 1,
    MPV_UDLVL_GOP_x0017E9E8 = 2,
    MPV_UDLVL_PIC_x0017E9E8 = 3
} MpvUdLevel_x0017E9E8;
typedef struct MpvSeqInf_x0017E9E8 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017E9E8;
typedef struct MpvMotionRange_x0017E9E8 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017E9E8;
typedef struct MpvErrObj_x0017E9E8 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017E9E8;
typedef struct MpvHn_x0017E9E8 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017E9E8 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017E9E8 picInf;
    MpvErrObj_x0017E9E8 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017E9E8 fwd;
    char pad764[20];
    MpvMotionRange_x0017E9E8 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017E9E8 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017E9E8 *lower;
    MpvUdLevel_x0017E9E8 usrDatLevel;
    M2vUsrSj_x0017E9E8 bufEnt[4];
    M2vPicUsr_x0017E9E8 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017E9E8;
typedef struct MpvLib_x0017E9E8 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017E9E8 *hn;
} MpvLib_x0017E9E8;
int MPVLIB_CheckHn_x0017E9E8(MpvHn_x0017E9E8 *hn) __asm__("func_0017EB90");
int mpv_ReportError_x0017E9E8(MpvHn_x0017E9E8 *mpv, int code) __asm__("func_0017C2E0");
extern void mpvhook_SetErrFunc_x0017E9E8(M2vObj_x0017E9E8 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvLib_x0017E9E8 mpv_lib_x0017E9E8 __asm__("D_004814F0");
void MPV_MbCbFn_x0017E9E8(void) __asm__("func_0017E9E0");
void mpvlib_SetCondAll_x0017E9E8(int no, int value) __asm__("func_0017EAB0");
void mpv_SetLowerCond_x0017E9E8(MpvHn_x0017E9E8 *hn, int no, int value) __asm__("func_0017EC48");
void MPV_MbCbFn_x0017E9E8(void) __asm__("func_0017E9E0");
void mpvlib_SetCondAll_x0017E9E8(int no, int value) __asm__("func_0017EAB0");
int MPVLIB_CheckHn_x0017E9E8(MpvHn_x0017E9E8 *hn) __asm__("func_0017EB90");
void mpv_SetLowerCond_x0017E9E8(MpvHn_x0017E9E8 *hn, int no, int value) __asm__("func_0017EC48");
int func_0017E9E8_x0017E9E8(MpvHn_x0017E9E8 *hn, int no, int value) __asm__("func_0017E9E8");
/* MPV_SetCond: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017E9E8_x0017E9E8(MpvHn_x0017E9E8 *hn, int no, int value) {
    int *cond;
    if (no == 8 && value == 0) {
        value = (int)MPV_MbCbFn_x0017E9E8;
    }
    if (hn == 0) {
        mpvlib_SetCondAll_x0017E9E8(no, value);
        cond = mpv_lib_x0017E9E8.cond;
    } else {
        if (MPVLIB_CheckHn_x0017E9E8(hn) != 0) {
            return mpv_ReportError_x0017E9E8(0, 0xFF030202);
        }
        cond = hn->cond;
    }
    cond[no] = value;
    mpv_SetLowerCond_x0017E9E8(hn, no, value);
    return 0;
}
typedef struct SfdSj_x0017EAB0 SfdSj_x0017EAB0;
typedef struct SfdSjChunk_x0017EAB0 {
    char *data;
    int len;
} SfdSjChunk_x0017EAB0;
typedef struct SfdSjVtbl_x0017EAB0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0017EAB0 *sj);
    int (*getUuid)(SfdSj_x0017EAB0 *sj);
    void (*reset)(SfdSj_x0017EAB0 *sj);
    void (*getChunk)(SfdSj_x0017EAB0 *sj, int id, int n, SfdSjChunk_x0017EAB0 *ck);
    void (*ungetChunk)(SfdSj_x0017EAB0 *sj, int id, SfdSjChunk_x0017EAB0 *ck);
    void (*putChunk)(SfdSj_x0017EAB0 *sj, int id, SfdSjChunk_x0017EAB0 *ck);
    int (*getNumData)(SfdSj_x0017EAB0 *sj, int id);
} SfdSjVtbl_x0017EAB0;
struct SfdSj_x0017EAB0 {
    SfdSjVtbl_x0017EAB0 *vtbl;
};
struct SfdSj_x0017EAB0;
typedef struct M2vErrInf_x0017EAB0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0017EAB0;
typedef struct Mpeg2Ext_x0017EAB0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0017EAB0;
typedef enum M2vFrameRate_x0017EAB0 {
    M2V_FRAME_RATE_FORBIDDEN_x0017EAB0 = 0
} M2vFrameRate_x0017EAB0;
typedef enum M2vPicType_x0017EAB0 {
    M2V_PICTYPE_I_x0017EAB0 = 1,
    M2V_PICTYPE_P_x0017EAB0 = 2,
    M2V_PICTYPE_B_x0017EAB0 = 3,
    M2V_PICTYPE_D_x0017EAB0 = 4
} M2vPicType_x0017EAB0;
typedef enum M2vPicStruct_x0017EAB0 {
    M2V_PICSTRUCT_TOP_FIELD_x0017EAB0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0017EAB0 = 2,
    M2V_PICSTRUCT_FRAME_x0017EAB0 = 3
} M2vPicStruct_x0017EAB0;
typedef enum M2vPicAtrF64_x0017EAB0 {
    M2V_PICATR_F64_0_x0017EAB0 = 0
} M2vPicAtrF64_x0017EAB0;
typedef struct M2vPicAtr_x0017EAB0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0017EAB0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0017EAB0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0017EAB0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0017EAB0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0017EAB0;
typedef void (*M2vUsrDatFn_x0017EAB0)(void *obj, int level);
typedef struct M2vUsrSj_x0017EAB0 {
    struct SfdSj_x0017EAB0 *sj;
    M2vUsrDatFn_x0017EAB0 fn;
    void *obj;
} M2vUsrSj_x0017EAB0;
typedef struct M2vPicUsr_x0017EAB0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0017EAB0;
typedef void (*M2vCondFn_x0017EAB0)();
typedef struct M2vObj_x0017EAB0 {
    int stat;
    M2vErrInf_x0017EAB0 err;
    M2vCondFn_x0017EAB0 cond[16];
    M2vPicAtr_x0017EAB0 picatr;
    char pad216[64];
    M2vUsrSj_x0017EAB0 usrsj[4];
    M2vPicUsr_x0017EAB0 picusr;
    char pad340[12];
    Mpeg2Ext_x0017EAB0 ext;
    char pad1656[8];
} M2vObj_x0017EAB0;
extern void M2V_SetErrFunc_x0017EAB0(M2vObj_x0017EAB0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef enum MpvUdLevel_x0017EAB0 {
    MPV_UDLVL_SEQ_x0017EAB0 = 1,
    MPV_UDLVL_GOP_x0017EAB0 = 2,
    MPV_UDLVL_PIC_x0017EAB0 = 3
} MpvUdLevel_x0017EAB0;
typedef struct MpvSeqInf_x0017EAB0 {
    char pad0[24];
    int width;
    int height;
} MpvSeqInf_x0017EAB0;
typedef struct MpvMotionRange_x0017EAB0 {
    int fullPel;
    int rSize;
    int shift;
    int f;
} MpvMotionRange_x0017EAB0;
typedef struct MpvErrObj_x0017EAB0 {
    int (*fn)(void *arg);
    void *arg;
    int code;
    int skipReqCnt;
    int skipPicCnt;
} MpvErrObj_x0017EAB0;
typedef struct MpvHn_x0017EAB0 {
    char pad0[44];
    char *mbBuf;
    char *blkBuf;
    char *dctBuf;
    char pad56[8];
    unsigned char *clampY;
    char pad68[52];
    MpvSeqInf_x0017EAB0 seq;
    char pad152[120];
    unsigned char *clampC;
    char pad276[116];
    int stat;
    int f396;
    int cond[16];
    M2vPicAtr_x0017EAB0 picInf;
    MpvErrObj_x0017EAB0 err;
    char pad612[64];
    int pelAspectRatio;
    int bitRate;
    int vbvBufferSize;
    int constrainedParams;
    int closedGop;
    int brokenLink;
    int vbvDelay;
    char pad704[20];
    int f724;
    char pad728[4];
    int f732;
    char pad736[12];
    MpvMotionRange_x0017EAB0 fwd;
    char pad764[20];
    MpvMotionRange_x0017EAB0 bwd;
    char pad800[32];
    int lastMbAddr;
    char pad836[20];
    int strmType;
    int f860, f864, f868;
    char pad872[24];
    int skipReq;
    int skipCnt;
    SfdSjChunk_x0017EAB0 chunk;
    char pad912[4];
    int idcPrec;
    char pad920[12];
    int maxCount;
    char pad936[8];
    M2vObj_x0017EAB0 *lower;
    MpvUdLevel_x0017EAB0 usrDatLevel;
    M2vUsrSj_x0017EAB0 bufEnt[4];
    M2vPicUsr_x0017EAB0 picusr;
    char pad1012[1016 - 1012];
    char pad1016[1024 - 1016];
} MpvHn_x0017EAB0;
typedef struct MpvLib_x0017EAB0 {
    int cond[16];
    int optionFlag;
    int initFlag;
    char pad72[4];
    char *tables;
    char *pool;
    int nhn;
    MpvHn_x0017EAB0 *hn;
} MpvLib_x0017EAB0;
extern void mpvhook_SetErrFunc_x0017EAB0(M2vObj_x0017EAB0 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern MpvLib_x0017EAB0 mpv_lib_x0017EAB0 __asm__("D_004814F0");
void func_0017EAB0_x0017EAB0(int no, int value) __asm__("func_0017EAB0");
/* mpvlib_SetCondAll: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017EAB0_x0017EAB0(int no, int value) {
    MpvHn_x0017EAB0 *hn = mpv_lib_x0017EAB0.hn;
    int nhn = mpv_lib_x0017EAB0.nhn;
    int i;
    for (i = 0; i < nhn; i++, hn++) {
        if (hn->stat == 2) {
            hn->cond[no] = value;
        }
    }
}
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
typedef struct { int a, b, c; } Ent_EC60_x0017EC60;
typedef struct { char pad0[0x3B0]; int h; int pad3B4; Ent_EC60_x0017EC60 ent[4]; int f3E8, f3EC; int f3F0; } Mpv_EC60_x0017EC60;
int func_00172A88_x0017EC60(Mpv_EC60_x0017EC60 *) __asm__("func_00172A88");
void func_00172C90_x0017EC60(int, int, int, int, int) __asm__("func_00172C90");
void func_00172CB8_x0017EC60(int, int, int) __asm__("func_00172CB8");
void func_00172D08_x0017EC60(int, int) __asm__("func_00172D08");
void func_00172CE0_x0017EC60(int, int, int *) __asm__("func_00172CE0");
void func_0017ED20_x0017EC60(Mpv_EC60_x0017EC60 *) __asm__("func_0017ED20");
int func_0017EC60_x0017EC60(Mpv_EC60_x0017EC60 *m, int a1) __asm__("func_0017EC60");
int func_0017EC60_x0017EC60(Mpv_EC60_x0017EC60 *m, int a1)
{
    int i;
    Ent_EC60_x0017EC60 *e;

    if (func_00172A88_x0017EC60(m) != 0) {
        for (i = 0, e = m->ent; i < 4; i++, e++) {
            func_00172C90_x0017EC60(m->h, i, e->a, e->b, e->c);
        }
        func_00172CB8_x0017EC60(m->h, m->f3E8, m->f3EC);
        func_00172D08_x0017EC60(m->h, a1);
        func_00172CE0_x0017EC60(m->h, 0, &m->f3F0);
        func_0017ED20_x0017EC60(m);
        return 0;
    }
    return -1;
}
INCLUDE_ASM("asm/nonmatchings/cri/mpv", func_0017ED20);
void func_0017EE60(void) {
    func_0017EE78();
}
int func_0017EE78_x0017EE78(int a, int b, int c) __asm__("func_0017EE78");
/* UTY_MulDiv: from https://github.com/crashbashash/DW4_Decomp (src/cri/mpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0017EE78_x0017EE78(int a, int b, int c) {
    if (c == 0) {
        return ((a ^ b) < 0) ? (int)0x80000000 : 0x7FFFFFFF;
    }
    return (long)a * b / c;
}
double func_0011EA48_x0017EEE8(double) __asm__("func_0011EA48");
int func_0017EEE8_x0017EEE8(int a, int b, int c) __asm__("func_0017EEE8");
int func_0017EEE8_x0017EEE8(int a, int b, int c)
{
    if (c == 0) {
        return ((a ^ b) >= 0) ? 0x7FFFFFFF : 0x80000000;
    }
    return (int)func_0011EA48_x0017EEE8((double)a * (double)b / (double)c + 0.5);
}
typedef struct MwsfdCreInf_x0017EF98 {
    int type;
    int maxBps;
    int maxWidth;
    int maxHeight;
    int nfrmPoolWk;
    int nfrm;
    char *work;
    int workSize;
    int addInfMode;
    int bufFmt;
    int f40;
    int f44;
} MwsfdCreInf_x0017EF98;
void func_0017EF98_x0017EF98(MwsfdCreInf_x0017EF98 *cprm, int *inBuf, int *f1, int *xBuf, int *mpv0, int *mpv1,
                              int *mpv2) __asm__("func_0017EF98");
/* mwsfcre_CalcWorkStmBuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/mwsfcre.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017EF98_x0017EF98(MwsfdCreInf_x0017EF98 *cprm, int *inBuf, int *f1, int *xBuf, int *mpv0, int *mpv1,
                              int *mpv2) {
    int nfrm = cprm->nfrm;
    int maxBps;
    if (nfrm <= 0)
        nfrm = 1;
    maxBps = cprm->maxBps;
    if (cprm->type == 2) {
        *inBuf = maxBps / 16384 * nfrm * 2048;
        *f1 = 0;
        *xBuf = 0;
        *mpv0 = 0;
        *mpv1 = 0;
        *mpv2 = 0;
    } else if (cprm->type == 3) {
        *inBuf = maxBps / 16384 * nfrm * 2048;
        *f1 = 0;
        *xBuf = maxBps / 16384 * 1024 + 2048;
        *mpv0 = 0;
        *mpv1 = 0;
        *mpv2 = 0;
    } else {
        *inBuf = maxBps / 16384 * nfrm * 2048;
        *f1 = 0;
        *xBuf = maxBps / 16384 * 1024 + 2048;
        *mpv0 = 24012;
        *mpv1 = 24332;
        *mpv2 = 33216;
    }
}
typedef struct MwsfdCreInf_x0017F080 {
    int type;
    int maxBps;
    int maxWidth;
    int maxHeight;
    int nfrmPoolWk;
    int nfrm;
    char *work;
    int workSize;
    int addInfMode;
    int bufFmt;
    int f40;
    int f44;
} MwsfdCreInf_x0017F080;
void func_0017F080_x0017F080(MwsfdCreInf_x0017F080 *cprm, int *width, int *height, int *halfWidth, int *halfHeight) __asm__("func_0017F080");
/* mwsfcre_CalcFrmRes: from https://github.com/crashbashash/DW4_Decomp (src/cri/mwsfcre.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017F080_x0017F080(MwsfdCreInf_x0017F080 *cprm, int *width, int *height, int *halfWidth, int *halfHeight) {
    int w = cprm->maxWidth;
    int h = cprm->maxHeight;
    *halfWidth = (w / 2 + 31) / 32 * 32;
    *halfHeight = h / 2;
    *width = w;
    *height = h;
}
typedef struct MwsfdCreInf_x0017F0D0 {
    int type;
    int maxBps;
    int maxWidth;
    int maxHeight;
    int nfrmPoolWk;
    int nfrm;
    char *work;
    int workSize;
    int addInfMode;
    int bufFmt;
    int f40;
    int f44;
} MwsfdCreInf_x0017F0D0;
extern int mpv_frm_buf_num_x0017F0D0 __asm__("D_00425218");
int mwsfcre_ConvBufFmtFromMwsfd_x0017F0D0(int format) __asm__("MwsfdCrePrm");
void mwsfcre_CalcFrmRes_x0017F0D0(MwsfdCreInf_x0017F0D0 *cprm, int *width, int *height, int *halfWidth, int *halfHeight) __asm__("func_0017F080");
int mwsfcre_ConvBufFmtFromMwsfd_x0017F0D0(int format) __asm__("MwsfdCrePrm");
void func_0017F0D0_x0017F0D0(MwsfdCreInf_x0017F0D0 *cprm, int *frmSize, int *picBufSize) __asm__("func_0017F0D0");
/* mwsfcre_CalcWorkFrmBuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/mwsfcre.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0017F0D0_x0017F0D0(MwsfdCreInf_x0017F0D0 *cprm, int *frmSize, int *picBufSize) {
    int width;
    int height;
    int halfWidth;
    int halfHeight;
    int nfrm;
    int fmt;
    int mbWidth;
    int mbHeight;
    int size;
    if (mpv_frm_buf_num_x0017F0D0 != 0) {
        *frmSize = 0;
        *picBufSize = 0;
        return;
    }
    nfrm = cprm->nfrmPoolWk;
    mwsfcre_CalcFrmRes_x0017F0D0(cprm, &width, &height, &halfWidth, &halfHeight);
    fmt = mwsfcre_ConvBufFmtFromMwsfd_x0017F0D0(cprm->bufFmt);
    *frmSize = width * height * 9 / 2 + 551184;
    mbWidth = width / 16;
    mbHeight = height / 16;
    if (fmt == 2) {
        size = nfrm * (mbWidth * mbHeight * 1024 + 64);
    } else {
        size = nfrm * (mbWidth * mbHeight * 384 + 64);
    }
    *picBufSize = size;
}
