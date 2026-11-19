#include "common.h"

s32 func_00127CD8(s32 *, s32, s32);     /* extern */

s32 func_00128040(s32 *, s32, s32);     /* extern */
extern s32 D_00423340;
extern s32 D_00481470;

s32 func_0016FEB0(s32);                     /* extern */

s32 func_0016FE50(s32);                     /* extern */

typedef signed int Sint32_x0016FEB0;
typedef char Char8_x0016FEB0;
void SVM_CallErr_x0016FEB0(const Char8_x0016FEB0* format, ...) __asm__("func_00170070");
extern void SVM_SetCbErr_x0016FEB0(void (*callback)(void*, Char8_x0016FEB0*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0016FEB0 SVM_SetCbSvr_x0016FEB0(Sint32_x0016FEB0, Sint32_x0016FEB0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0016FEB0(Sint32_x0016FEB0, Sint32_x0016FEB0, Sint32_x0016FEB0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0016FEB0(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0016FEB0(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback_x0016FEB0;
extern volatile Sint32_x0016FEB0 svm_lock_level_x0016FEB0 __asm__("D_004232F8");
extern volatile Sint32_x0016FEB0 svm_locking_type_x0016FEB0 __asm__("D_004232FC");
extern SVMLockCallback_x0016FEB0 svm_unlock_callback_x0016FEB0 __asm__("D_00481468");
void SVM_CallErr_x0016FEB0(const Char8_x0016FEB0* format, ...) __asm__("func_00170070");
Sint32_x0016FEB0 SVM_SetCbSvr_x0016FEB0(Sint32_x0016FEB0 index, Sint32_x0016FEB0 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbSvrId_x0016FEB0(Sint32_x0016FEB0 svtype, Sint32_x0016FEB0 id, Sint32_x0016FEB0 (*func)(void*), void* object) __asm__("SVM_SetCbSvrId");
void SVM_SetCbErr_x0016FEB0(void (*func)(void*, Char8_x0016FEB0*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x0016FEB0(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x0016FEB0(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
extern char ext_str0_x0016FEB0[] __asm__("D_00464E98");
void func_0016FEB0_x0016FEB0(Sint32_x0016FEB0 type) __asm__("func_0016FEB0");
/* svm_unlock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016FEB0_x0016FEB0(Sint32_x0016FEB0 type) {
    if (svm_unlock_callback_x0016FEB0.func == 0) {
        return;
    }
    svm_lock_level_x0016FEB0 -= 1;
    if (svm_lock_level_x0016FEB0 == 0) {
        if (svm_locking_type_x0016FEB0 != type) {
            SVM_CallErr_x0016FEB0(
                ext_str0_x0016FEB0, svm_locking_type_x0016FEB0, type);
        }
        svm_locking_type_x0016FEB0 = 0;
    }
    svm_unlock_callback_x0016FEB0.func(svm_unlock_callback_x0016FEB0.object);
}
void func_0016FF40(void) {
    func_0016FE50(1);
}
void func_0016FF58(void) {
    func_0016FEB0(1);
}
void func_0016FF70(void) {
    func_0016FE50(2);
}
void func_0016FF88(void) {
    func_0016FE50(3);
}
void func_0016FFA0(void) {
    func_0016FE50(4);
}
void func_0016FFB8(void) {
    func_0016FE50(5);
}
void func_0016FFD0(void) {
    func_0016FE50(0x3E8);
}
void func_0016FFE8(void) {
    func_0016FEB0(2);
}
void func_00170000(void) {
    func_0016FEB0(3);
}
void func_00170018(void) {
    func_0016FEB0(4);
}
void func_00170030(void) {
    func_0016FEB0(5);
}
void func_00170048(void) {
    func_0016FEB0(0x3E8);
}
extern volatile s32 D_004232FC_x00170060 __asm__("D_004232FC");
s32 func_00170060_x00170060(void) __asm__("func_00170060");
s32 func_00170060_x00170060(void) {
    return D_004232FC_x00170060;
}
typedef unsigned int size_t_x00170070;
typedef signed int Sint32_x00170070;
typedef char Char8_x00170070;
extern void SVM_SetCbErr_x00170070(void (*callback)(void*, Char8_x00170070*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x00170070 SVM_SetCbSvr_x00170070(Sint32_x00170070, Sint32_x00170070 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00170070(Sint32_x00170070, Sint32_x00170070, Sint32_x00170070 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x00170070(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x00170070(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
extern int vsprintf_x00170070(char* buf, const char* fmt, ...) __asm__("func_0012C140");
void* memset_x00170070(void* s, int c, size_t_x00170070 n) __asm__("memset");
typedef char* va_list_x00170070;
typedef struct {
    void (*func)(void*, Char8_x00170070*);
    void* object;
} SVMErrorCallback_x00170070;
extern Char8_x00170070 svmerr_msg_x00170070[128] __asm__("D_00423340");
extern SVMErrorCallback_x00170070 svm_error_callback_x00170070 __asm__("D_00481470");
Sint32_x00170070 SVM_SetCbSvr_x00170070(Sint32_x00170070 index, Sint32_x00170070 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbSvrId_x00170070(Sint32_x00170070 svtype, Sint32_x00170070 id, Sint32_x00170070 (*func)(void*), void* object) __asm__("SVM_SetCbSvrId");
void SVM_SetCbErr_x00170070(void (*func)(void*, Char8_x00170070*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x00170070(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x00170070(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void func_00170070_x00170070(const Char8_x00170070* format, ...) __asm__("func_00170070");
/* SVM_CallErr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00170070_x00170070(const Char8_x00170070* format, ...) {
    va_list_x00170070 args;
    memset_x00170070(svmerr_msg_x00170070, 0, sizeof(svmerr_msg_x00170070));
    (args = ((char*) __builtin_next_arg (format) - (__builtin_args_info (2) >= 8 ? 0 : (8 - __builtin_args_info (2)) * 8)));
    vsprintf_x00170070(&svmerr_msg_x00170070, format, args);
    if (svm_error_callback_x00170070.func != 0) {
        svm_error_callback_x00170070.func(svm_error_callback_x00170070.object, svmerr_msg_x00170070);
    }
}
void func_00170118(s32 arg0) {
    func_00128040(&D_00423340, arg0, 0x7F);
    if (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0) != NULL) {
        (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0))(*(s32 *)((u8 *)(&D_00481470) + 4), &D_00423340);
    }
}
void func_00170168(s32 arg0, s32 arg1) {
    func_00128040(&D_00423340, arg0, 0x7F);
    func_00127CD8(&D_00423340, arg1, 0x7F);
    if (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0) != NULL) {
        (*(s32 (**)(s32, s32 *))((u8 *)(&D_00481470) + 0))(*(s32 *)((u8 *)(&D_00481470) + 4), &D_00423340);
    }
}
extern char svm_num_buf_x001701D8[] __asm__("D_00481280");
unsigned int strlen_x001701D8(const char *s) __asm__("func_00127BA0");
extern unsigned long __moddi3_x001701D8(unsigned long a, unsigned long b) __asm__("func_0011FDF0");
extern unsigned long __divdi3_x001701D8(unsigned long a, unsigned long b) __asm__("func_0011F758");
void func_001701D8_x001701D8(unsigned long num, char *buf, long size) __asm__("func_001701D8");
/* svm_ltoa: from https://github.com/new-coke/rez-decomp (src/cri/svm.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001701D8_x001701D8(unsigned long num, char *buf, long size)
{
    long i;
    long n;
    char *digit;
    for (i = 0; i < 32; i++) {
        digit = &buf[i];
        *digit = __moddi3_x001701D8(num, 10);
        num = __divdi3_x001701D8(num, 10);
        if (num == 0) {
            *digit = 0;
            break;
        }
    }
    n = strlen_x001701D8(svm_num_buf_x001701D8);
    if (n >= size - 1)
        n = size - 1;
    for (i = 0; i < n; i++)
        buf[i] = svm_num_buf_x001701D8[n - 1 - i];
    buf[i] = 0;
}
unsigned int strlen_x001702E8(const char *s) __asm__("func_00127BA0");
char *strncat_x001702E8(char *dst, const char *src, unsigned int n) __asm__("func_00127CD8");
void svm_ltoa_x001702E8(unsigned long num, char *buf, long size) __asm__("func_001701D8");
extern char ext_str0_x001702E8[] __asm__("D_00464EE0");
void func_001702E8_x001702E8(unsigned long first, unsigned long second, char *buf, long size) __asm__("func_001702E8");
/* svm_format_2num: from https://github.com/new-coke/rez-decomp (src/cri/svm.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001702E8_x001702E8(unsigned long first, unsigned long second, char *buf, long size)
{
    int n;
    svm_ltoa_x001702E8(first, buf, size);
    n = size;
    strncat_x001702E8(buf, ext_str0_x001702E8, n - strlen_x001702E8(buf) - 1);
    svm_ltoa_x001702E8(second, buf + strlen_x001702E8(buf), 4 - strlen_x001702E8(buf));
}
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170380);
typedef unsigned int Uint32_x00170450;
typedef signed int Sint32_x00170450;
typedef char Char8_x00170450;
void SVM_Lock_x00170450() __asm__("func_0016FF40");
void SVM_Unlock_x00170450() __asm__("func_0016FF58");
extern void SVM_SetCbErr_x00170450(void (*callback)(void*, Char8_x00170450*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x00170450 SVM_SetCbSvr_x00170450(Sint32_x00170450, Sint32_x00170450 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00170450(Sint32_x00170450, Sint32_x00170450, Sint32_x00170450 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x00170450(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x00170450(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void SVM_CallErr1_x00170450(const Char8_x00170450* msg) __asm__("func_00170118");
typedef struct {
    Sint32_x00170450 (*func)(void*);
    void* object;
} SVMSVRCallback_x00170450;
extern SVMSVRCallback_x00170450 D_006C0360_x00170450[8][6] __asm__("D_004812A0");
void SVM_Lock_x00170450() __asm__("func_0016FF40");
void SVM_Unlock_x00170450() __asm__("func_0016FF58");
void SVM_CallErr1_x00170450(const Char8_x00170450* msg) __asm__("func_00170118");
Sint32_x00170450 SVM_SetCbSvr_x00170450(Sint32_x00170450 index, Sint32_x00170450 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbSvrId_x00170450(Sint32_x00170450 svtype, Sint32_x00170450 id, Sint32_x00170450 (*func)(void*), void* object) __asm__("SVM_SetCbSvrId");
void SVM_SetCbErr_x00170450(void (*func)(void*, Char8_x00170450*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x00170450(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x00170450(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
extern char ext_str0_x00170450[] __asm__("D_00464F18");
void func_00170450_x00170450(Sint32_x00170450 group, Sint32_x00170450 id) __asm__("func_00170450");
/* SVM_DelCbSvr: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00170450_x00170450(Sint32_x00170450 group, Sint32_x00170450 id) {
    if ((Uint32_x00170450)id >= 6) {
        SVM_CallErr1_x00170450(ext_str0_x00170450);
    }
    SVM_Lock_x00170450();
    D_006C0360_x00170450[group][id].func = 0;
    D_006C0360_x00170450[group][id].object = 0;
    SVM_Unlock_x00170450();
}
typedef unsigned int Uint32_x001704C8;
typedef signed int Sint32_x001704C8;
typedef char Char8_x001704C8;
void SVM_Lock_x001704C8() __asm__("func_0016FF40");
void SVM_Unlock_x001704C8() __asm__("func_0016FF58");
extern void SVM_SetCbErr_x001704C8(void (*callback)(void*, Char8_x001704C8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x001704C8 SVM_SetCbSvr_x001704C8(Sint32_x001704C8, Sint32_x001704C8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbLock_x001704C8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x001704C8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void SVM_CallErr1_x001704C8(const Char8_x001704C8* msg) __asm__("func_00170118");
typedef struct {
    Sint32_x001704C8 (*func)(void*);
    void* object;
} SVMSVRCallback_x001704C8;
extern SVMSVRCallback_x001704C8 D_006C0360_x001704C8[8][6] __asm__("D_004812A0");
void SVM_Lock_x001704C8() __asm__("func_0016FF40");
void SVM_Unlock_x001704C8() __asm__("func_0016FF58");
void SVM_CallErr1_x001704C8(const Char8_x001704C8* msg) __asm__("func_00170118");
Sint32_x001704C8 SVM_SetCbSvr_x001704C8(Sint32_x001704C8 index, Sint32_x001704C8 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbErr_x001704C8(void (*func)(void*, Char8_x001704C8*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x001704C8(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x001704C8(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
extern char ext_str0_x001704C8[] __asm__("D_00464F88");
extern char ext_str1_x001704C8[] __asm__("D_00464F60");
extern char ext_str2_x001704C8[] __asm__("D_00464F38");
void func_001704C8_x001704C8(Sint32_x001704C8 svtype, Sint32_x001704C8 id, Sint32_x001704C8 (*func)(void*), void* object) __asm__("func_001704C8");
/* SVM_SetCbSvrId: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001704C8_x001704C8(Sint32_x001704C8 svtype, Sint32_x001704C8 id, Sint32_x001704C8 (*func)(void*), void* object) {
    SVMSVRCallback_x001704C8* callback;
    if ((Uint32_x001704C8)id >= 6) {
        SVM_CallErr1_x001704C8(ext_str2_x001704C8);
    }
    if ((svtype < 0) || (id >= 8)) {
        SVM_CallErr1_x001704C8(ext_str1_x001704C8);
    }
    SVM_Lock_x001704C8();
    callback = &D_006C0360_x001704C8[svtype][id];
    if (callback->func != 0) {
        SVM_CallErr1_x001704C8(ext_str0_x001704C8);
    }
    callback->func = func;
    callback->object = object;
    SVM_Unlock_x001704C8();
}
typedef void (*SVMCallbackFunction_x00170588)(void* object);
struct SVMCallback_x00170588 {
    SVMCallbackFunction_x00170588 function;
    void* object;
};
extern struct SVMCallback_x00170588 svm_goto_border_func_x00170588[8] __asm__("D_00481420");
void svm_unlock_x00170588(void) __asm__("func_0016FF58");
void svm_lock_x00170588(void) __asm__("func_0016FF40");
void func_00170588_x00170588(int server_id, SVMCallbackFunction_x00170588 function, void* object) __asm__("func_00170588");
/* SVM_SetCbBdr: from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00170588_x00170588(int server_id, SVMCallbackFunction_x00170588 function, void* object)
{
    svm_lock_x00170588();
    svm_goto_border_func_x00170588[server_id].function = function;
    svm_goto_border_func_x00170588[server_id].object = object;
    svm_unlock_x00170588();
}
typedef void (*SVMCallbackFunction_x001705E0)(void* object);
struct SVMCallback_x001705E0 {
    SVMCallbackFunction_x001705E0 function;
    void* object;
};
extern struct SVMCallback_x001705E0 svm_goto_border_func_x001705E0[8] __asm__("D_00481420");
void func_001705E0_x001705E0(int server_id) __asm__("func_001705E0");
/* SVM_GotoSvrBorder: from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001705E0_x001705E0(int server_id)
{
    if (svm_goto_border_func_x001705E0[server_id].function != 0) {
        svm_goto_border_func_x001705E0[server_id].function(
            svm_goto_border_func_x001705E0[server_id].object);
    }
}
typedef void (*SVMErrorFunction_x00170620)(void* object, char* message);
struct SVMErrorCallback_x00170620 {
    SVMErrorFunction_x00170620 function;
    void* object;
};
extern struct SVMErrorCallback_x00170620 svm_err_func_x00170620 __asm__("D_00481470");
void svm_unlock_x00170620(void) __asm__("func_0016FF58");
void svm_lock_x00170620(void) __asm__("func_0016FF40");
void func_00170620_x00170620(SVMErrorFunction_x00170620 function, void* object) __asm__("func_00170620");
/* SVM_SetCbErr: from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00170620_x00170620(SVMErrorFunction_x00170620 function, void* object)
{
    svm_lock_x00170620();
    svm_err_func_x00170620.function = function;
    svm_err_func_x00170620.object = object;
    svm_unlock_x00170620();
}
extern s32 D_00481460_x00170660 __asm__("D_00481460");
void func_00170660_x00170660(s32 arg0, s32 arg1) __asm__("func_00170660");
void func_00170660_x00170660(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = &D_00481460_x00170660;
  *((s32 *) (((u8 *) new_var) + 0)) = arg0;
  *((s32 *) (((u8 *) new_var) + 4)) = arg1;
}
extern s32 D_00481468_x00170678 __asm__("D_00481468");
void func_00170678_x00170678(s32 arg0, s32 arg1) __asm__("func_00170678");
void func_00170678_x00170678(s32 arg0, s32 arg1)
{
  *((s32 *) (((u8 *) (&D_00481468_x00170678)) + 0)) = arg0;
  *((s32 *) (((u8 *) (&D_00481468_x00170678)) + 4)) = arg1;
}
typedef int (*SVMServerFunction_x00170690)(void* object);
struct SVMServerCallback_x00170690 {
    SVMServerFunction_x00170690 function;
    void* object;
};
extern struct SVMServerCallback_x00170690 svm_svr_ftbl_x00170690[8][6] __asm__("D_004812A0");
extern int svm_svr_exec_flag_x00170690[8] __asm__("D_00423320");
extern int svm_exec_cnt_x00170690[8] __asm__("D_00423300");
int func_00170690_x00170690(int server_type) __asm__("func_00170690");
/* svm_exec_svr: from https://github.com/ShulkMaster/mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_00170690_x00170690(int server_type)
{
    struct SVMServerCallback_x00170690* callback;
    int index;
    int result;
    result = 0;
    callback = svm_svr_ftbl_x00170690[server_type];
    for (index = 0; index < 6; index++) {
        if (callback->function != 0) {
            svm_svr_exec_flag_x00170690[server_type] = 1;
            result |= callback->function(callback->object);
            svm_svr_exec_flag_x00170690[server_type] = 0;
        }
        callback++;
    }
    svm_exec_cnt_x00170690[server_type]++;
    return result;
}
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170758);
