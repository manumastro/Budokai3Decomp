#include "common.h"

s32 func_00127CD8(s32 *, s32, s32);     /* extern */

s32 func_00128040(s32 *, s32, s32);     /* extern */
extern s32 D_00423340;
extern s32 D_00481470;

s32 func_0016FEB0(s32);                     /* extern */

s32 func_0016FE50(s32);                     /* extern */

INCLUDE_ASM("asm/nonmatchings/cri/svm", func_0016FEB0);
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
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170060);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170070);
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
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001701D8);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001702E8);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170380);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170450);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_001704C8);
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
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170660);
INCLUDE_ASM("asm/nonmatchings/cri/svm", func_00170678);
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
