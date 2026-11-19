/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/cache.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a member cache.o */
#include <libkernl_internal.h>

#include <eekernel.h>




void iSyncDCache(int start, int end)
{
    _sceSDC(start & 0xFFFFFFC0, end & 0xFFFFFFC0);
}
INCLUDE_PAD(4);
typedef signed int s32_x0010ABF0;
typedef unsigned int u32_x0010ABF0;
typedef signed long long s64_x0010ABF0;
typedef float f32_x0010ABF0;
extern s32_x0010ABF0 AddDmacHandler2_x0010ABF0(s32_x0010ABF0 channel, s32_x0010ABF0 (*handler)(s32_x0010ABF0, void *), s32_x0010ABF0 arg, u32_x0010ABF0 *arg3) __asm__("AddDmacHandler2");
extern s32_x0010ABF0 RhBase_SetVSyncCallback_x0010ABF0(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x0010ABF0 SzMsg_DrawRatioX_Pipe_x0010ABF0(s32_x0010ABF0 packet, s32_x0010ABF0 slot, s64_x0010ABF0 x, s64_x0010ABF0 y, f32_x0010ABF0 scaleX, f32_x0010ABF0 scaleY, s32_x0010ABF0 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
extern s32_x0010ABF0 func_00190A90_x0010ABF0(void (*arg0)(void)) __asm__("func_00190A90");
extern void func_00199BC0_x0010ABF0(s32_x0010ABF0 arg0, u32_x0010ABF0 n, u32_x0010ABF0 es, void (*arg3)(void)) __asm__("func_00199BC0");
void _sceIDC_x0010ABF0(u32_x0010ABF0 start, u32_x0010ABF0 end) __asm__("_sceIDC");
/* _sceIDC_x0010ABF0: from https://github.com/kira-502/dotr-decomp (src/sdk/kernel_glue.c, CC0-1.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void _sceIDC_x0010ABF0(u32_x0010ABF0 start, u32_x0010ABF0 end) {
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	lui	$7,(0xFFFFF000 >> 16)\n"
        "	daddu	$6,$0,$0\n"
        "	ori	$7,$7,(0xFFFFF000 & 0xFFFF)\n"
        "	nop\n"
        "_func_0017C270_0017C280:\n"
        "	sync\n"
        "	cache	0x10,0x0($6)\n"
        "	sync\n"
        "	.word	0x4002E000\n"
        "	and	$2,$2,$7\n"
        "	addu	$2,$2,$6\n"
        "	sltu	$3,$5,$2\n"
        "	sltu	$2,$2,$4\n"
        "	bnez	$2,_func_0017C270_0017C2BC\n"
        "	nop\n"
        "	bnez	$3,_func_0017C270_0017C2BC\n"
        "	nop\n"
        "	sync\n"
        "	cache	0x16,0x0($6)\n"
        "	sync\n"
        "_func_0017C270_0017C2BC:\n"
        "	sync\n"
        "	cache	0x10,0x1($6)\n"
        "	sync\n"
        "	.word	0x4002E000\n"
        "	and	$2,$2,$7\n"
        "	addu	$2,$2,$6\n"
        "	sltu	$3,$5,$2\n"
        "	sltu	$2,$2,$4\n"
        "	bnez	$2,_func_0017C270_0017C2F8\n"
        "	nop\n"
        "	bnez	$3,_func_0017C270_0017C2F8\n"
        "	nop\n"
        "	sync\n"
        "	cache	0x16,0x1($6)\n"
        "	sync\n"
        "_func_0017C270_0017C2F8:\n"
        "	sync\n"
        "	addiu	$6,$6,0x40\n"
        "	slti	$2,$6,0x1000\n"
        "	bnez	$2,_func_0017C270_0017C280\n"
        "	nop\n"
        "	.set	reorder\n"
       );
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/ico_cache", func_0010AC98);


void iInvalidDCache(int start, int end)
{
    _sceIDC(start & 0xFFFFFFC0, end & 0xFFFFFFC0);
}
INCLUDE_PAD(4);
