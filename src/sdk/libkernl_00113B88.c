#include "common.h"

s32 func_00115BE0(s32, s32, s32, s32);              /* extern */

s32 func_00115B20(s32);                             /* extern */

s32 func_00115A88(s32);                             /* extern */

s32 func_001158A0(s32);                             /* extern */

s32 func_001157A0(s32);                             /* extern */

s32 func_001156F0(s32, s32);                        /* extern */

s32 func_00115600(s32);                             /* extern */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_00115548();                                /* extern */

s32 Exit(s32);                                  /* extern */

s32 func_00113D78();                            /* extern */

s32 func_0010B038();                            /* extern */
s32 func_00113BF0();                            /* extern */
s32 func_00114388();                            /* extern */
s32 func_001144C8();                            /* extern */
s32 func_00114700();                            /* extern */
s32 func_00114AB8();                            /* extern */
s32 func_00114C30(s32);                     /* extern */
s32 func_00114E70();                            /* extern */
s32 func_001162F0();                            /* extern */

extern s32 D_003ECD54;

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113B88);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113B98);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113BF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CD8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113CE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D18);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D28);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D38);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D48);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D68);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113D78);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00113DB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kTLBException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", _kDebugException);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", DI);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", EI);
extern int CreateSema_x00114388(struct SemaParam_x00114388 *p) __asm__("CreateSema");
extern char D_00460370_x00114388[] __asm__("D_0045D9D0");
extern char D_00460380_x00114388[] __asm__("D_0045D9E0");
extern int D_003FAF18_x00114388 __asm__("D_003ECD50");
extern int D_003FAF1C_x00114388 __asm__("D_003ECD54");
struct SemaParam_x00114388 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
void func_00114388_x00114388(void) __asm__("func_00114388");
/* supplement_crt0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b0268.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114388_x00114388(void)
{
    struct SemaParam_x00114388 s1;
    struct SemaParam_x00114388 s2;

    s1.maxCount = 1;
    s1.initCount = 1;
    s1.option = (unsigned int)D_00460370_x00114388;
    s2.maxCount = 1;
    s2.initCount = 1;
    s2.option = (unsigned int)D_00460380_x00114388;
    D_003FAF18_x00114388 = CreateSema_x00114388(&s1);
    D_003FAF1C_x00114388 = CreateSema_x00114388(&s2);
}
s32 func_001143E8(void) {
    return D_003ECD54;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001143F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114408);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114440);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114480);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114490);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001144C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001145C8);
void func_001145D8(void) {
    func_00114388();
    func_001144C8();
    func_00114AB8();
    func_00114C30(2);
    func_00114E70();
    func_0010B038();
    func_00114700();
    func_00113BF0();
    func_001162F0();
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114630);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114640);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114650);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114688);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114698);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114700);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147B0);
s32 func_001147C0(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a3;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    if (arg2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a3 += 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a3 < arg2);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001147F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114800);
void func_00114918(void) {
    func_00113D78();
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114920);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114990);
void Exit_001149D8(s32 arg0) {
    func_00114918();
    Exit(arg0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A60);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114A70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114AA8);
void RFU090_x00114AB8(void *dst, void *src, int size) __asm__("func_00114A60");
void *RFU091_x00114AB8(int num) __asm__("func_00114AA8");
void RFU116_SetSyscall_x00114AB8(int num, void *func) __asm__("func_00114A50");
void FlushCache_x00114AB8(int mode) __asm__("FlushCache");
typedef struct SyscallPatch_x00114AB8 {
    int num;
    void *func;
} SyscallPatch_x00114AB8;
extern SyscallPatch_x00114AB8 libkernl_syscall_patches_x00114AB8[8] __asm__("D_003EDC88");
extern char libkernl_patch_code_x00114AB8[] __asm__("D_003ED520");
extern char libkernl_patch_code2_x00114AB8[] __asm__("D_003EDC60");
void func_00114AB8_x00114AB8(void) __asm__("func_00114AB8");
/* libkernl_install_patches: from https://github.com/new-coke/rez-decomp (src/sce/libkernl_patch.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00114AB8_x00114AB8(void)
{
    unsigned int i;
    SyscallPatch_x00114AB8 *patch;

    if (*(volatile unsigned int *)0x10001810 & 0x100)
        return;
    RFU116_SetSyscall_x00114AB8(libkernl_syscall_patches_x00114AB8[0].num, libkernl_syscall_patches_x00114AB8[0].func);
    RFU090_x00114AB8((void *)0x80076000, libkernl_patch_code_x00114AB8, 0x740);
    RFU090_x00114AB8((void *)0x00082000, libkernl_patch_code2_x00114AB8, 40);
    FlushCache_x00114AB8(0);
    FlushCache_x00114AB8(2);
    RFU116_SetSyscall_x00114AB8(libkernl_syscall_patches_x00114AB8[1].num, libkernl_syscall_patches_x00114AB8[1].func);
    for (i = 2, patch = &libkernl_syscall_patches_x00114AB8[2]; i < 8; i++, patch++)
        RFU116_SetSyscall_x00114AB8(patch->num, RFU091_x00114AB8(patch->num));
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114B90);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C10);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C20);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114C30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114D88);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114E40);
int DIntr_x00114E70(void) __asm__("DI");
int EIntr_x00114E70(void) __asm__("EI");
extern void SetT2_B0001010_3B6A10_x00114E70(int mode) __asm__("func_00114C10");
extern unsigned long iGetTimerSystemTime_x00114E70(void) __asm__("func_00115478");
extern void SetNextComp_x00114E70(unsigned long t) __asm__("func_00114F80");
int func_00114E70_x00114E70(void) __asm__("func_00114E70");
/* func_003B6B90: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b2cd0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00114E70_x00114E70(void)
{
    int state;
    int mode;

    state = DIntr_x00114E70();
    mode = *(volatile int *)0x10001010;
    if (mode & 0x80) {
        if (state != 0) {
            EIntr_x00114E70();
        }
        return 1;
    }
    SetT2_B0001010_3B6A10_x00114E70((mode & 0xFFFFF3FF) | 0x80);
    SetNextComp_x00114E70(iGetTimerSystemTime_x00114E70());
    if (state != 0) {
        EIntr_x00114E70();
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00114F80);
typedef struct _timer_alarm_x00115110 sceTimerAlarm_x00115110;
struct _timer_alarm_x00115110 {
    sceTimerAlarm_x00115110 *next;       
    sceTimerAlarm_x00115110 *prev;       
    unsigned char  pad08[0x8];
    unsigned long  interval;   
    unsigned long  elapsed;    
    unsigned long  start;      
};
typedef struct _timer_ctl_x00115110 {
    unsigned long  ovf;        
    unsigned char  pad08[0x10];
    sceTimerAlarm_x00115110 *alarms;     
} sceTimerCtl_x00115110;
extern sceTimerCtl_x00115110 D_003FBE90_x00115110 __asm__("D_003EDCC8");
void func_00115110_x00115110(sceTimerAlarm_x00115110 *a) __asm__("func_00115110");
/* func_003B6DB8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b6db8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00115110_x00115110(sceTimerAlarm_x00115110 *a)
{
    sceTimerAlarm_x00115110 *prev;
    sceTimerAlarm_x00115110 *cur;
    unsigned long t;

    t = (a->start + a->interval) - a->elapsed;
    prev = 0;
    cur = D_003FBE90_x00115110.alarms;
    while (cur != 0) {
        if (t < (cur->start + cur->interval) - cur->elapsed) {
            break;
        }
        prev = cur;
        cur = prev->next;
    }
    a->prev = prev;
    a->next = cur;
    if (cur != 0) {
        cur->prev = a;
    }
    if (prev != 0) {
        prev->next = a;
    } else {
        D_003FBE90_x00115110.alarms = a;
    }
}
extern void *D_003EDCE0_x00115198 __asm__("D_003EDCE0");
u8 *func_00115198_x00115198(u8 *arg0) __asm__("func_00115198");
u8 *func_00115198_x00115198(u8 *arg0)
{
  u8 **temp_v0;
  u8 *temp_v1;
  temp_v0 = *((u8 ***) (((u8 *) arg0) + 4));
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0));
  if (temp_v0 != ((void *) 0))
  {
    *temp_v0 = temp_v1;
    arg0++;
    arg0--;
  }
  else
  {
    D_003EDCE0_x00115198 = temp_v1;
  }
  if (temp_v1 != ((void *) 0))
  {
    *((u8 ***) (((u8 *) temp_v1) + 4)) = (u8 **) (*((u8 ***) (((u8 *) arg0) + 4)));
  }
  *((u8 ***) (((u8 *) arg0) + 4)) = (void *) 0;
  return temp_v1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001151D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115478);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001154C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115548);
s32 func_001155B8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = DI();
    temp_s1 = func_00115548();
    if (temp_s0 != 0) {
        EI();
    }
    return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115600);
s32 func_001156A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115600(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001156F0);
s32 func_00115740(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = DI();
    temp_s0 = func_001156F0(arg0, arg1);
    if (temp_s2 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001157A0);
s32 func_00115850(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001157A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001158A0);
s32 func_00115968(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_001158A0(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001159B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115A88);
s32 func_00115AD0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115A88(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115B20);
s32 func_00115B90(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = DI();
    temp_s0 = func_00115B20(arg0);
    if (temp_s1 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115BE0);
s32 func_00115CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;

    temp_s4 = DI();
    temp_s0 = func_00115BE0(arg0, arg1, arg2, arg3);
    if (temp_s4 != 0) {
        EI();
    }
    return temp_s0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115E70);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115EC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F00);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115F50);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00115FB0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001160E0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001161D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116278);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001162F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116318);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116398);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_00116450);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_00113B88", func_001164A8);
