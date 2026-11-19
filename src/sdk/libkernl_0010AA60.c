#include "common.h"

s32 *__errno();                                     /* extern */

s32 func_0010AA60(void) {
    *__errno() = 5;
    return -1;
}
s32 func_0010AA88(void) {
    *__errno() = 5;
    return -1;
}
typedef signed int s32_x0010AAB0;
typedef unsigned int u32_x0010AAB0;
typedef signed long long s64_x0010AAB0;
typedef float f32_x0010AAB0;
extern s32_x0010AAB0 AddDmacHandler2_x0010AAB0(s32_x0010AAB0 channel, s32_x0010AAB0 (*handler)(s32_x0010AAB0, void *), s32_x0010AAB0 arg, u32_x0010AAB0 *arg3) __asm__("AddDmacHandler2");
extern s32_x0010AAB0 RhBase_SetVSyncCallback_x0010AAB0(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x0010AAB0 SzMsg_DrawRatioX_Pipe_x0010AAB0(s32_x0010AAB0 packet, s32_x0010AAB0 slot, s64_x0010AAB0 x, s64_x0010AAB0 y, f32_x0010AAB0 scaleX, f32_x0010AAB0 scaleY, s32_x0010AAB0 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
extern s32_x0010AAB0 func_00190A90_x0010AAB0(void (*arg0)(void)) __asm__("func_00190A90");
extern void func_00199BC0_x0010AAB0(s32_x0010AAB0 arg0, u32_x0010AAB0 n, u32_x0010AAB0 es, void (*arg3)(void)) __asm__("func_00199BC0");
void _sceSDC_x0010AAB0(u32_x0010AAB0 start, u32_x0010AAB0 end) __asm__("_sceSDC");
/* _sceSDC_x0010AAB0: from https://github.com/kira-502/dotr-decomp (src/sdk/kernel_glue.c, CC0-1.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void _sceSDC_x0010AAB0(u32_x0010AAB0 start, u32_x0010AAB0 end) {
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	lui	$7,(0xFFFFF000 >> 16)\n"
        "	daddu	$6,$0,$0\n"
        "	ori	$7,$7,(0xFFFFF000 & 0xFFFF)\n"
        "	nop\n"
        "_func_0017C130_0017C140:\n"
        "	sync\n"
        "	cache	0x10,0x0($6)\n"
        "	sync\n"
        "	.word	0x4002E000\n"
        "	and	$2,$2,$7\n"
        "	addu	$2,$2,$6\n"
        "	sltu	$3,$5,$2\n"
        "	sltu	$2,$2,$4\n"
        "	bnez	$2,_func_0017C130_0017C17C\n"
        "	nop\n"
        "	bnez	$3,_func_0017C130_0017C17C\n"
        "	nop\n"
        "	sync\n"
        "	cache	0x14,0x0($6)\n"
        "	sync\n"
        "_func_0017C130_0017C17C:\n"
        "	sync\n"
        "	cache	0x10,0x1($6)\n"
        "	sync\n"
        "	.word	0x4002E000\n"
        "	and	$2,$2,$7\n"
        "	addu	$2,$2,$6\n"
        "	sltu	$3,$5,$2\n"
        "	sltu	$2,$2,$4\n"
        "	bnez	$2,_func_0017C130_0017C1B8\n"
        "	nop\n"
        "	bnez	$3,_func_0017C130_0017C1B8\n"
        "	nop\n"
        "	sync\n"
        "	cache	0x14,0x1($6)\n"
        "	sync\n"
        "_func_0017C130_0017C1B8:\n"
        "	sync\n"
        "	addiu	$6,$6,0x40\n"
        "	slti	$2,$6,0x1000\n"
        "	bnez	$2,_func_0017C130_0017C140\n"
        "	nop\n"
        "	.set	reorder\n"
       );
}
int DI_x0010AB58(void) __asm__("DI");
int EI_x0010AB58(void) __asm__("EI");
void _sceSDC_x0010AB58(u32, u32) __asm__("_sceSDC");
void func_0010AB58_x0010AB58(u32 start, u32 end) __asm__("func_0010AB58");
void func_0010AB58_x0010AB58(u32 start, u32 end)
{
    u32 s;

    __asm__ volatile("mfc0 %0, $12" : "=r"(s));
    s &= 0x10000;
    if (s) {
        DI_x0010AB58();
    }
    _sceSDC_x0010AB58(start & 0xFFFFFFC0, end & 0xFFFFFFC0);
    if (s) {
        EI_x0010AB58();
    }
}
