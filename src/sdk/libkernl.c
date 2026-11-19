#include "common.h"

extern s32 D_003EC610;

void func_0010A6E0(void) {
    D_003EC610 = 0;
}
typedef signed int         s32_x0010A6F0;
typedef unsigned int       u32_x0010A6F0;
s32_x0010A6F0 EnableInterrupts_x0010A6F0(void) __asm__("EI");
extern s32_x0010A6F0 DIntr_x0010A6F0() __asm__("DI");
void func_0010A6F0_x0010A6F0(void) __asm__("func_0010A6F0");
/* VSync: from https://github.com/lombyte-project/Lombyte (src/sdk/kernel/v_sync.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010A6F0_x0010A6F0(void) {
    s32_x0010A6F0 interrupts_were_enabled;

    interrupts_were_enabled = DIntr_x0010A6F0();
    *(volatile u32_x0010A6F0 *)0x1000F000 = 4;
    __asm__ __volatile__("sync.l");
    if (interrupts_were_enabled != 0) {
        EnableInterrupts_x0010A6F0();
    }
    while ((*(volatile u32_x0010A6F0 *)0x1000F000 & 4) == 0) {
    }
    interrupts_were_enabled = DIntr_x0010A6F0();
    *(volatile u32_x0010A6F0 *)0x1000F000 = 4;
    __asm__ __volatile__("sync.l");
    if (interrupts_were_enabled != 0) {
        EnableInterrupts_x0010A6F0();
    }
}
typedef signed int         s32_x0010A780;
typedef unsigned int       u32_x0010A780;
typedef signed long long   s64_x0010A780;
s32_x0010A780 EnableInterrupts_x0010A780(void) __asm__("EI");
extern s32_x0010A780 DIntr_x0010A780() __asm__("DI");
extern void SetVSyncFlag_x0010A780(s32_x0010A780 *flag, s64_x0010A780 *result) __asm__("SetVSyncFlag");
s64_x0010A780 func_0010A780_x0010A780(void) __asm__("func_0010A780");
/* VSync2: from https://github.com/lombyte-project/Lombyte (src/sdk/kernel/VSync2.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
s64_x0010A780 func_0010A780_x0010A780(void) {
    volatile s32_x0010A780 flag;
    volatile s64_x0010A780 gs_csr_snapshot;

    s32_x0010A780 interrupts_were_enabled;

    flag = 0;
    SetVSyncFlag_x0010A780((s32_x0010A780 *)&flag, &gs_csr_snapshot);
    interrupts_were_enabled = DIntr_x0010A780();
    *(volatile u32_x0010A780 *)0x1000F000 = 4;
    __asm__ __volatile__("sync.l");
    if (interrupts_were_enabled != 0) {
        EnableInterrupts_x0010A780();
    }
    while ((*(volatile u32_x0010A780 *)0x1000F000 & 4) == 0 && flag == 0) {
    }
    interrupts_were_enabled = DIntr_x0010A780();
    *(volatile u32_x0010A780 *)0x1000F000 = 4;
    __asm__ __volatile__("sync.l");
    if (interrupts_were_enabled != 0) {
        EnableInterrupts_x0010A780();
    }
    return gs_csr_snapshot;
}
