#include "common.h"

typedef struct { unsigned int src; int pad; void *block[4]; void *block_right[4]; char pad28[0x12C - 0x28]; int pred_count; char pad130[0x10]; } Spr_X_x00104BE8;
typedef struct { char pad0[0x5A0]; Spr_X_x00104BE8 spr[2]; char pad820[0x820 - 0x5A0 - 0x280]; int mb_buffer; char pad824[0x87C - 0x824]; int f87C; } Dec_X_x00104BE8;
extern unsigned long long D_00470A40_x00104BE8[64] __asm__("D_00470A40");
int DI_x00104BE8(void) __asm__("DI");
int EI_x00104BE8(void) __asm__("EI");
void func_00104BE8_x00104BE8(Dec_X_x00104BE8 *dec) __asm__("func_00104BE8");
void func_00104BE8_x00104BE8(Dec_X_x00104BE8 *dec)
{
    unsigned long long *tag;
    int count;
    int intr;
    int i;

    if (dec->f87C == 0) {
        tag = (unsigned long long *)(((unsigned int)D_00470A40_x00104BE8 & 0x0FFFFFFF) | 0x20000000);
        count = dec->spr[dec->mb_buffer].pred_count;
        for (i = 0; i < count; i++) {
            unsigned long long a0, a1;
            unsigned long long ref = 3;
            unsigned long long id;

            a0 = (unsigned int)dec->spr[dec->mb_buffer].block[i] & 0x0FFFFFFF;
            a1 = (unsigned int)dec->spr[dec->mb_buffer].block_right[i] & 0x0FFFFFFF;
            id = i == count - 1 ? 0 : 3;
            tag[0] = (a0 << 32) | (ref << 28) | 48;
            tag[2] = (a1 << 32) | (id << 28) | 48;
            tag += 4;
        }
        intr = DI_x00104BE8();
        __asm__("sync");
        *(volatile unsigned int *)0x1000D480 = dec->spr[dec->mb_buffer].src;
        *(volatile unsigned int *)0x1000D430 = (unsigned int)D_00470A40_x00104BE8;
        *(volatile unsigned int *)0x1000D420 = 0;
        *(volatile unsigned int *)0x1000D400 = 0x105;
        if (intr) {
            EI_x00104BE8();
        }
    }
}
/* func_00104D68: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00104D68\n"
    "	.type	func_00104D68, @function\n"
    "func_00104D68:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t0, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	mtsab	$t0, 0x0\n"
    "	sll	$t3, $t4, 1\n"
    "	addiu	$t7, $zero, -0x1\n"
    ".L00104D8C:\n"
    "	lq	$t0, 0x0($a1)\n"
    "	lq	$t1, 0x0($a2)\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $t4\n"
    "	addu	$a2, $a2, $t4\n"
    "	qfsrv	$t2, $t1, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	pextub	$t1, $zero, $t2\n"
    "	sq	$t0, 0x0($t6)\n"
    "	sq	$t1, 0x10($t6)\n"
    "	bgtz	$a3, .L00104D8C\n"
    "	addu	$t6, $t6, $t3\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t7, $a3\n"
    "	bnez	$t2, .L00104D8C\n"
    "	daddu	$t7, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00104D68, . - func_00104D68\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00104DE0: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00104DE0\n"
    "	.type	func_00104DE0, @function\n"
    "func_00104DE0:\n"
    "	lw	$a1, 0x0($a0)\n"
    "	lw	$a2, 0x14($a0)\n"
    "	lw	$a3, 0x18($a0)\n"
    "	lw	$t5, 0x10($a0)\n"
    "	lw	$t4, 0x4($a0)\n"
    "	sll	$t3, $t5, 1\n"
    "	mtsab	$t4, 0x0\n"
    "	addiu	$t8, $zero, -0x1\n"
    ".L00104E00:\n"
    "	lw	$t7, 0x8($a0)\n"
    "	addiu	$t9, $zero, -0x1\n"
    ".L00104E08:\n"
    "	ld	$t0, 0x0($a2)\n"
    "	ld	$t1, 0x0($a3)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t1, $t0, $t0\n"
    "	pextlb	$t0, $zero, $t1\n"
    "	sq	$t0, 0x0($a1)\n"
    "	addi	$t7, $t7, -0x1\n"
    "	addu	$a2, $a2, $t5\n"
    "	addu	$a1, $a1, $t3\n"
    "	bgtz	$t7, .L00104E08\n"
    "	addu	$a3, $a3, $t5\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	addiu	$a3, $a3, 0x140\n"
    "	lw	$t7, 0xC($a0)\n"
    "	and	$t2, $t9, $t7\n"
    "	bnez	$t2, .L00104E08\n"
    "	daddu	$t9, $zero, $zero\n"
    "	lw	$a1, 0x0($a0)\n"
    "	lw	$a2, 0x14($a0)\n"
    "	lw	$a3, 0x18($a0)\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	addiu	$a3, $a3, 0x40\n"
    "	bnez	$t8, .L00104E00\n"
    "	daddu	$t8, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00104DE0, . - func_00104DE0\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00104E78: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00104E78\n"
    "	.type	func_00104E78, @function\n"
    "func_00104E78:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t8, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	lq	$t0, 0x0($a1)\n"
    "	sll	$t4, $t8, 1\n"
    "	lq	$t1, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t2, $t1, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	addiu	$t3, $zero, -0x1\n"
    "	beqz	$a3, .L00104F0C\n"
    "	pextub	$t1, $zero, $t2\n"
    ".L00104EBC:\n"
    "	addu	$a1, $a1, $t8\n"
    "	addu	$a2, $a2, $t8\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	paddh	$v0, $t0, $t2\n"
    "	paddh	$v1, $t1, $t7\n"
    "	por	$t0, $t2, $zero\n"
    "	por	$t1, $t7, $zero\n"
    "	paddh	$v0, $v0, $t9\n"
    "	paddh	$v1, $v1, $t9\n"
    "	psrlh	$v0, $v0, 1\n"
    "	psrlh	$v1, $v1, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sq	$v1, 0x10($t6)\n"
    "	bgtz	$a3, .L00104EBC\n"
    "	addu	$t6, $t6, $t4\n"
    ".L00104F0C:\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L00104EBC\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00104E78, . - func_00104E78\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00104F30: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00104F30\n"
    "	.type	func_00104F30, @function\n"
    "func_00104F30:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t3, $zero, 0x1\n"
    "	sll	$t8, $t4, 1\n"
    "	mtsab	$t5, 0x0\n"
    ".L00104F58:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	ori	$t3, $t3, 0x8000\n"
    "	beqz	$a3, .L00104FB4\n"
    "	pextlb	$t7, $zero, $t0\n"
    ".L00104F78:\n"
    "	addu	$a1, $a1, $t4\n"
    "	addu	$a2, $a2, $t4\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t2, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	paddh	$t1, $t2, $t7\n"
    "	por	$t7, $t2, $zero\n"
    "	paddh	$t2, $t1, $t9\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L00104F78\n"
    "	addu	$t6, $t6, $t8\n"
    ".L00104FB4:\n"
    "	psrah	$t2, $t3, 15\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	and	$t2, $t2, $a3\n"
    "	bnez	$t2, .L00104F78\n"
    "	andi	$t3, $t3, 0x7FFF\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	andi	$t2, $t3, 0x1\n"
    "	bnez	$t2, .L00104F58\n"
    "	andi	$t3, $t3, 0xFFFE\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00104F30, . - func_00104F30\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105000: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105000\n"
    "	.type	func_00105000, @function\n"
    "func_00105000:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	sll	$t0, $t1, 1\n"
    "	addiu	$t3, $zero, -0x1\n"
    ".L0010502C:\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	qfsrv	$v1, $t2, $t7\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$v1, $v1, $v0\n"
    "	pextlb	$v0, $zero, $v1\n"
    "	pextub	$v1, $zero, $v1\n"
    "	paddh	$t2, $t2, $v0\n"
    "	paddh	$t7, $t7, $v1\n"
    "	paddh	$v0, $t2, $t9\n"
    "	paddh	$v1, $t7, $t9\n"
    "	psrlh	$v0, $v0, 1\n"
    "	psrlh	$v1, $v1, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sq	$v1, 0x10($t6)\n"
    "	addu	$a1, $a1, $t1\n"
    "	addu	$a2, $a2, $t1\n"
    "	bgtz	$a3, .L0010502C\n"
    "	addu	$t6, $t6, $t0\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t4, $t3, $a3\n"
    "	bnez	$t4, .L0010502C\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105000, . - func_00105000\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_001050B0: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_001050B0\n"
    "	.type	func_001050B0, @function\n"
    "func_001050B0:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$v1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	addiu	$t4, $zero, -0x1\n"
    "	sll	$v0, $v1, 1\n"
    ".L001050D8:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	addiu	$t3, $zero, -0x1\n"
    ".L001050E0:\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $v1\n"
    "	addu	$a2, $a2, $v1\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	paddh	$t2, $t1, $t0\n"
    "	paddh	$t2, $t2, $t9\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L001050E0\n"
    "	addu	$t6, $t6, $v0\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L001050E0\n"
    "	daddu	$t3, $zero, $zero\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	bnez	$t4, .L001050D8\n"
    "	daddu	$t4, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_001050B0, . - func_001050B0\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105168: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105168\n"
    "	.type	func_00105168, @function\n"
    "func_00105168:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	psllh	$t9, $t9, 1\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	lq	$t0, 0x0($a1)\n"
    "	lq	$t1, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t2, $t1, $t0\n"
    "	qfsrv	$t7, $t0, $t1\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	pextub	$t1, $zero, $t2\n"
    "	addiu	$t3, $zero, -0x1\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t7, $t7, $t2\n"
    "	pextlb	$t2, $zero, $t7\n"
    "	pextub	$t7, $zero, $t7\n"
    "	paddh	$t0, $t0, $t2\n"
    "	beqz	$a3, .L00105240\n"
    "	paddh	$t1, $t1, $t7\n"
    ".L001051CC:\n"
    "	addu	$a1, $a1, $t4\n"
    "	addu	$a2, $a2, $t4\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	qfsrv	$v1, $t2, $t7\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$v1, $v1, $v0\n"
    "	pextlb	$v0, $zero, $v1\n"
    "	pextub	$v1, $zero, $v1\n"
    "	paddh	$t2, $t2, $v0\n"
    "	paddh	$t7, $t7, $v1\n"
    "	paddh	$v0, $t0, $t2\n"
    "	paddh	$v1, $t1, $t7\n"
    "	por	$t0, $t2, $zero\n"
    "	por	$t1, $t7, $zero\n"
    "	paddh	$v0, $v0, $t9\n"
    "	paddh	$v1, $v1, $t9\n"
    "	psrlh	$v0, $v0, 2\n"
    "	psrlh	$v1, $v1, 2\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sll	$t2, $t4, 1\n"
    "	sq	$v1, 0x10($t6)\n"
    "	bgtz	$a3, .L001051CC\n"
    "	addu	$t6, $t6, $t2\n"
    ".L00105240:\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L001051CC\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105168, . - func_00105168\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105260: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105260\n"
    "	.type	func_00105260, @function\n"
    "func_00105260:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	psllh	$t9, $t9, 1\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	addiu	$t3, $zero, 0x1\n"
    ".L00105288:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addu	$a1, $a1, $t4\n"
    "	ori	$t3, $t3, 0x8000\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	beqz	$a3, .L00105314\n"
    "	paddh	$t7, $t1, $t0\n"
    ".L001052C0:\n"
    "	addu	$a2, $a2, $t4\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $t4\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	paddh	$t2, $t1, $t0\n"
    "	paddh	$t1, $t2, $t7\n"
    "	por	$t7, $t2, $zero\n"
    "	paddh	$t2, $t1, $t9\n"
    "	sll	$t0, $t4, 1\n"
    "	psrlh	$t2, $t2, 2\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L001052C0\n"
    "	addu	$t6, $t6, $t0\n"
    ".L00105314:\n"
    "	psrah	$t2, $t3, 15\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	and	$t2, $t2, $a3\n"
    "	bnez	$t2, .L001052C0\n"
    "	andi	$t3, $t3, 0x7FFF\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	andi	$t2, $t3, 0x1\n"
    "	bnez	$t2, .L00105288\n"
    "	andi	$t3, $t3, 0xFFFE\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105260, . - func_00105260\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105360: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105360\n"
    "	.type	func_00105360, @function\n"
    "func_00105360:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	sll	$t0, $t1, 1\n"
    "	addiu	$t3, $zero, -0x1\n"
    "	mtsab	$t5, 0x0\n"
    ".L00105384:\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	pextub	$t7, $zero, $v0\n"
    "	lq	$v0, 0x0($t6)\n"
    "	lq	$v1, 0x10($t6)\n"
    "	paddh	$v0, $v0, $t2\n"
    "	paddh	$v1, $v1, $t7\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	paddh	$t2, $v0, $t9\n"
    "	psrlh	$v0, $t2, 1\n"
    "	paddh	$t2, $v1, $t9\n"
    "	psrlh	$v1, $t2, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sq	$v1, 0x10($t6)\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $t1\n"
    "	addu	$t6, $t6, $t0\n"
    "	bgtz	$a3, .L00105384\n"
    "	addu	$a2, $a2, $t1\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t4, $t3, $a3\n"
    "	bnez	$t4, .L00105384\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105360, . - func_00105360\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105400: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105400\n"
    "	.type	func_00105400, @function\n"
    "func_00105400:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$v1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	addiu	$t4, $zero, -0x1\n"
    "	sll	$v0, $v1, 1\n"
    "	mtsab	$t5, 0x0\n"
    ".L00105420:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	addiu	$t3, $zero, -0x1\n"
    ".L00105428:\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $v1\n"
    "	addu	$a2, $a2, $v1\n"
    "	lq	$t0, 0x0($t6)\n"
    "	paddh	$t2, $t1, $t0\n"
    "	pcgth	$t1, $t2, $zero\n"
    "	psrlh	$t1, $t1, 15\n"
    "	paddh	$t2, $t2, $t1\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L00105428\n"
    "	addu	$t6, $t6, $v0\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L00105428\n"
    "	daddu	$t3, $zero, $zero\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	bnez	$t4, .L00105420\n"
    "	daddu	$t4, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105400, . - func_00105400\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_001054B0: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_001054B0\n"
    "	.type	func_001054B0, @function\n"
    "func_001054B0:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	lq	$t0, 0x0($a1)\n"
    "	lq	$t1, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t2, $t1, $t0\n"
    "	sll	$t8, $t4, 1\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	addiu	$t3, $zero, -0x1\n"
    "	beqz	$a3, .L0010556C\n"
    "	pextub	$t1, $zero, $t2\n"
    ".L001054F4:\n"
    "	addu	$a1, $a1, $t4\n"
    "	addu	$a2, $a2, $t4\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	paddh	$v0, $t0, $t2\n"
    "	paddh	$v1, $t1, $t7\n"
    "	por	$t0, $t2, $zero\n"
    "	por	$t1, $t7, $zero\n"
    "	paddh	$v0, $v0, $t9\n"
    "	paddh	$v1, $v1, $t9\n"
    "	psrlh	$v0, $v0, 1\n"
    "	psrlh	$v1, $v1, 1\n"
    "	lq	$t2, 0x0($t6)\n"
    "	lq	$t7, 0x10($t6)\n"
    "	paddh	$v0, $v0, $t2\n"
    "	paddh	$v1, $v1, $t7\n"
    "	paddh	$t2, $v0, $t9\n"
    "	psrlh	$v0, $t2, 1\n"
    "	pcgth	$t2, $v1, $zero\n"
    "	psrlh	$t2, $t2, 15\n"
    "	paddh	$t2, $v1, $t2\n"
    "	psrlh	$v1, $t2, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sq	$v1, 0x10($t6)\n"
    "	bgtz	$a3, .L001054F4\n"
    "	addu	$t6, $t6, $t8\n"
    ".L0010556C:\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L001054F4\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_001054B0, . - func_001054B0\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105590: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105590\n"
    "	.type	func_00105590, @function\n"
    "func_00105590:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t3, $zero, 0x1\n"
    "	sll	$t8, $t4, 1\n"
    "	mtsab	$t5, 0x0\n"
    ".L001055B8:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	ori	$t3, $t3, 0x8000\n"
    "	beqz	$a3, .L0010562C\n"
    "	pextlb	$t7, $zero, $t0\n"
    ".L001055D8:\n"
    "	addu	$a1, $a1, $t4\n"
    "	addu	$a2, $a2, $t4\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t2, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	paddh	$t1, $t2, $t7\n"
    "	por	$t7, $t2, $zero\n"
    "	paddh	$t2, $t1, $t9\n"
    "	psrlh	$t2, $t2, 1\n"
    "	lq	$t0, 0x0($t6)\n"
    "	paddh	$t2, $t2, $t0\n"
    "	pcgth	$t1, $t2, $zero\n"
    "	psrlh	$t1, $t1, 15\n"
    "	paddh	$t2, $t2, $t1\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L001055D8\n"
    "	addu	$t6, $t6, $t8\n"
    ".L0010562C:\n"
    "	psrah	$t2, $t3, 15\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	and	$t2, $t2, $a3\n"
    "	bnez	$t2, .L001055D8\n"
    "	andi	$t3, $t3, 0x7FFF\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	andi	$t2, $t3, 0x1\n"
    "	bnez	$t2, .L001055B8\n"
    "	andi	$t3, $t3, 0xFFFE\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105590, . - func_00105590\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105678: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105678\n"
    "	.type	func_00105678, @function\n"
    "func_00105678:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	sll	$t0, $t1, 1\n"
    "	addiu	$t3, $zero, -0x1\n"
    ".L001056A4:\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	qfsrv	$v1, $t2, $t7\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$v1, $v1, $v0\n"
    "	pextlb	$v0, $zero, $v1\n"
    "	pextub	$v1, $zero, $v1\n"
    "	paddh	$t2, $t2, $v0\n"
    "	paddh	$t7, $t7, $v1\n"
    "	paddh	$v0, $t2, $t9\n"
    "	paddh	$v1, $t7, $t9\n"
    "	psrlh	$v0, $v0, 1\n"
    "	psrlh	$v1, $v1, 1\n"
    "	lq	$t2, 0x0($t6)\n"
    "	lq	$t7, 0x10($t6)\n"
    "	paddh	$v0, $v0, $t2\n"
    "	paddh	$v1, $v1, $t7\n"
    "	paddh	$t2, $v0, $t9\n"
    "	psrlh	$v0, $t2, 1\n"
    "	pcgth	$t2, $v1, $zero\n"
    "	psrlh	$t2, $t2, 15\n"
    "	paddh	$t2, $v1, $t2\n"
    "	psrlh	$v1, $t2, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sq	$v1, 0x10($t6)\n"
    "	addu	$a1, $a1, $t1\n"
    "	addu	$a2, $a2, $t1\n"
    "	bgtz	$a3, .L001056A4\n"
    "	addu	$t6, $t6, $t0\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t4, $t3, $a3\n"
    "	bnez	$t4, .L001056A4\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105678, . - func_00105678\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105750: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105750\n"
    "	.type	func_00105750, @function\n"
    "func_00105750:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$v1, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	addiu	$t4, $zero, -0x1\n"
    "	sll	$v0, $v1, 1\n"
    ".L00105778:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	addiu	$t3, $zero, -0x1\n"
    ".L00105780:\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $v1\n"
    "	addu	$a2, $a2, $v1\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	paddh	$t2, $t1, $t0\n"
    "	paddh	$t2, $t2, $t9\n"
    "	psrlh	$t2, $t2, 1\n"
    "	lq	$t0, 0x0($t6)\n"
    "	paddh	$t2, $t2, $t0\n"
    "	pcgth	$t1, $t2, $zero\n"
    "	psrlh	$t1, $t1, 15\n"
    "	paddh	$t2, $t2, $t1\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L00105780\n"
    "	addu	$t6, $t6, $v0\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L00105780\n"
    "	daddu	$t3, $zero, $zero\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	bnez	$t4, .L00105778\n"
    "	daddu	$t4, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105750, . - func_00105750\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105820: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105820\n"
    "	.type	func_00105820, @function\n"
    "func_00105820:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t8, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	lw	$a3, 0x8($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	psllh	$t9, $t9, 1\n"
    "	addiu	$t4, $zero, 0x1\n"
    "	lq	$t0, 0x0($a1)\n"
    "	lq	$t1, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t2, $t1, $t0\n"
    "	qfsrv	$t7, $t0, $t1\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	pextub	$t1, $zero, $t2\n"
    "	addiu	$t3, $zero, -0x1\n"
    "	mtsab	$t4, 0x0\n"
    "	qfsrv	$t7, $t7, $t2\n"
    "	pextlb	$t2, $zero, $t7\n"
    "	pextub	$t7, $zero, $t7\n"
    "	paddh	$t0, $t0, $t2\n"
    "	beqz	$a3, .L00105920\n"
    "	paddh	$t1, $t1, $t7\n"
    ".L00105884:\n"
    "	addu	$a1, $a1, $t8\n"
    "	addu	$a2, $a2, $t8\n"
    "	lq	$t2, 0x0($a1)\n"
    "	lq	$t7, 0x0($a2)\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$v0, $t7, $t2\n"
    "	qfsrv	$v1, $t2, $t7\n"
    "	pextlb	$t2, $zero, $v0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	pextub	$t7, $zero, $v0\n"
    "	mtsab	$t4, 0x0\n"
    "	qfsrv	$v1, $v1, $v0\n"
    "	pextlb	$v0, $zero, $v1\n"
    "	pextub	$v1, $zero, $v1\n"
    "	paddh	$t2, $t2, $v0\n"
    "	paddh	$t7, $t7, $v1\n"
    "	paddh	$v0, $t0, $t2\n"
    "	paddh	$v1, $t1, $t7\n"
    "	por	$t0, $t2, $zero\n"
    "	por	$t1, $t7, $zero\n"
    "	paddh	$v0, $v0, $t9\n"
    "	paddh	$v1, $v1, $t9\n"
    "	psrlh	$v0, $v0, 2\n"
    "	psrlh	$v1, $v1, 2\n"
    "	lq	$t2, 0x0($t6)\n"
    "	lq	$t7, 0x10($t6)\n"
    "	paddh	$v0, $v0, $t2\n"
    "	paddh	$v1, $v1, $t7\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	paddh	$t2, $v0, $t9\n"
    "	psrlh	$v0, $t2, 1\n"
    "	paddh	$t2, $v1, $t9\n"
    "	psrlh	$v1, $t2, 1\n"
    "	sq	$v0, 0x0($t6)\n"
    "	sll	$t2, $t8, 1\n"
    "	sq	$v1, 0x10($t6)\n"
    "	bgtz	$a3, .L00105884\n"
    "	addu	$t6, $t6, $t2\n"
    ".L00105920:\n"
    "	addiu	$a1, $a1, 0x80\n"
    "	addiu	$a2, $a2, 0x80\n"
    "	lw	$a3, 0xC($a0)\n"
    "	and	$t2, $t3, $a3\n"
    "	bnez	$t2, .L00105884\n"
    "	daddu	$t3, $zero, $zero\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105820, . - func_00105820\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
/* func_00105940: written in assembly by Sony (MMI hand code: lq/sq, parallel multimedia instructions, addi, hand register use, no prologue); the source is the assembly, as splat reads it from the executable */
__asm__(
    ".section .text\n"
    "\t.align 3\n"
    "\t.set noat\n"
    "\t.set noreorder\n"
    "	.globl	func_00105940\n"
    "	.type	func_00105940, @function\n"
    "func_00105940:\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	lw	$t4, 0x10($a0)\n"
    "	lw	$t5, 0x4($a0)\n"
    "	pnor	$t9, $zero, $zero\n"
    "	psrlh	$t9, $t9, 15\n"
    "	psllh	$t9, $t9, 1\n"
    "	addiu	$t8, $zero, 0x1\n"
    "	addiu	$t3, $zero, 0x1\n"
    ".L00105968:\n"
    "	lw	$a3, 0x8($a0)\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addu	$a1, $a1, $t4\n"
    "	ori	$t3, $t3, 0x8000\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	beqz	$a3, .L00105A0C\n"
    "	paddh	$t7, $t1, $t0\n"
    ".L001059A0:\n"
    "	addu	$a2, $a2, $t4\n"
    "	ld	$t0, 0x0($a1)\n"
    "	ld	$t1, 0x0($a2)\n"
    "	pcpyld	$t0, $t1, $t0\n"
    "	mtsab	$t5, 0x0\n"
    "	qfsrv	$t0, $t0, $t0\n"
    "	pextlb	$t1, $zero, $t0\n"
    "	addi	$a3, $a3, -0x1\n"
    "	addu	$a1, $a1, $t4\n"
    "	mtsab	$t8, 0x0\n"
    "	qfsrv	$t2, $zero, $t0\n"
    "	pextlb	$t0, $zero, $t2\n"
    "	paddh	$t2, $t1, $t0\n"
    "	paddh	$t1, $t2, $t7\n"
    "	por	$t7, $t2, $zero\n"
    "	paddh	$t2, $t1, $t9\n"
    "	psrlh	$t2, $t2, 2\n"
    "	lq	$t0, 0x0($t6)\n"
    "	paddh	$t2, $t2, $t0\n"
    "	pcgth	$t1, $t2, $zero\n"
    "	psrlh	$t1, $t1, 15\n"
    "	paddh	$t2, $t2, $t1\n"
    "	sll	$t0, $t4, 1\n"
    "	psrlh	$t2, $t2, 1\n"
    "	sq	$t2, 0x0($t6)\n"
    "	bgtz	$a3, .L001059A0\n"
    "	addu	$t6, $t6, $t0\n"
    ".L00105A0C:\n"
    "	psrah	$t2, $t3, 15\n"
    "	addiu	$a1, $a1, 0x140\n"
    "	lw	$a3, 0xC($a0)\n"
    "	addiu	$a2, $a2, 0x140\n"
    "	and	$t2, $t2, $a3\n"
    "	bnez	$t2, .L001059A0\n"
    "	andi	$t3, $t3, 0x7FFF\n"
    "	lw	$t6, 0x0($a0)\n"
    "	lw	$a1, 0x14($a0)\n"
    "	lw	$a2, 0x18($a0)\n"
    "	addiu	$t6, $t6, 0x80\n"
    "	addiu	$a1, $a1, 0x40\n"
    "	addiu	$a2, $a2, 0x40\n"
    "	andi	$t2, $t3, 0x1\n"
    "	bnez	$t2, .L00105968\n"
    "	andi	$t3, $t3, 0xFFFE\n"
    "	jr	$ra\n"
    "	nop\n"
    "	.size	func_00105940, . - func_00105940\n"
    "	nop\n"
    "\t.set reorder\n"
    "\t.set at\n"
);
int DIntr_x00105A58(void) __asm__("DI");
int EIntr_x00105A58(void) __asm__("EI");
void func_00105A58_x00105A58(unsigned int addr, int size) __asm__("func_00105A58");
/* func_0039FDD8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399d70.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00105A58_x00105A58(unsigned int addr, int size) {
    int oldstat;
    oldstat = DIntr_x00105A58();
    if ((addr >> 28) == 7) {
        addr &= 0x0FFFFFFFU;
        addr |= 0x80000000U;
    } else {
        addr &= 0x0FFFFFFFU;
    }
    *(volatile unsigned int *)0x1000B010 = addr;
    *(volatile unsigned int *)0x1000B020 = size >> 4;
    *(volatile unsigned int *)0x1000B000 = 0x100;
    if (oldstat != 0) EIntr_x00105A58();
}
typedef struct Blk_x00105AF8 {
    int f00, f04, f08, f0C, f10, f14, f18, f1C;
} Blk_x00105AF8;
typedef struct Ctx_x00105AF8 {
    char pad_000[0x12C];
    int  f12C;
    char pad_130[0x13C - 0x130];
    int  f13C;
    char pad_140[0x1C0 - 0x140];
    int  f1C0;
    int  f1C4;
    char pad_1C8[0x878 - 0x1C8];
    int  f878;
} Ctx_x00105AF8;
extern char D_0045E7A8_x00105AF8[] __asm__("D_0045CF60");
extern char D_0045E7D0_x00105AF8[] __asm__("D_0045CF88");
extern void func_003A0E20_x00105AF8(Ctx_x00105AF8 *s, int n) __asm__("func_00106AA0");
extern void flushByteBoundary_x00105AF8(Ctx_x00105AF8 *s) __asm__("func_00106C08");
extern void func_003A0F80_x00105AF8(Ctx_x00105AF8 *s) __asm__("func_00106C00");
extern void func_0039C3E8_x00105AF8(Ctx_x00105AF8 *s, char *msg, int a) __asm__("func_00109790");
extern void _sceMpegError_x00105AF8(Ctx_x00105AF8 *s, char *msg) __asm__("func_00109738");
int func_0039E648_x00105AF8() __asm__("func_001042C8");
int func_0039EAA8_x00105AF8() __asm__("func_00104728");
int func_0039EB90_x00105AF8() __asm__("func_00104810");
int func_00105AF8_x00105AF8(Ctx_x00105AF8 *s, int unused, int *p3, int *p4, Blk_x00105AF8 *b) __asm__("func_00105AF8");
/* func_0039FE78: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039fe78.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00105AF8_x00105AF8(Ctx_x00105AF8 *s, int unused, int *p3, int *p4, Blk_x00105AF8 *b)
{
    int code;
    int mb;

    s->f12C = 0;
    flushByteBoundary_x00105AF8(s);
    while (func_0039EB90_x00105AF8(s, 24) != 1) {
        if (s->f878 != 0)
            break;
        func_003A0E20_x00105AF8(s, 8);
    }
    code = func_0039EB90_x00105AF8(s, 32);
    if (code < 0x101 || code > 0x1AF) {
        func_0039C3E8_x00105AF8(s, D_0045E7A8_x00105AF8, code);
        return 2;
    }
    func_003A0F80_x00105AF8(s);
    s->f1C4 = func_0039EAA8_x00105AF8(s, 5);
    if (func_0039EAA8_x00105AF8(s, 1) != 0) {
        func_0039EAA8_x00105AF8(s, 1);
        func_003A0E20_x00105AF8(s, 7);
        while (func_0039EAA8_x00105AF8(s, 1) != 0)
            func_003A0E20_x00105AF8(s, 8);
    }
    mb = func_0039E648_x00105AF8(s);
    *p4 = mb;
    if (s->f12C != 0) {
        _sceMpegError_x00105AF8(s, D_0045E7D0_x00105AF8);
        return 1;
    }
    *p3 = ((code & 0xFF) - 1) * s->f13C + mb - 1;
    *p4 = 1;
    s->f1C0 = 1;
    b->f14 = 0;
    b->f10 = 0;
    b->f04 = 0;
    b->f00 = 0;
    b->f1C = 0;
    b->f18 = 0;
    b->f0C = 0;
    b->f08 = 0;
    return 0;
}
__asm__("# noswap func_00105AF8");
typedef struct { char *base; int width, height, mb_width, mb_height; char pad14[0x68 - 0x14]; } Pic5C98_x00105C98;
typedef struct { char pad0[0x10C]; char *frame_buffers[3]; int alalc[7]; int h_size, v_size, mb_width, mb_height; char pad144[0x14C - 0x144]; int progressive_sequence, chroma_format, matrix_coefficients; char pad158[0x184 - 0x158]; int picture_structure; int pad188; int frame_pred_frame_dct; char pad190[0x198 - 0x190]; int progressive_frame; char pad19C[0x1F8 - 0x19C]; Pic5C98_x00105C98 pictures[9]; char pad5A0[0x858 - 0x5A0]; int mpeg2; char pad85C[0x87C - 0x85C]; int buffer_mode; } Dec5C98_x00105C98;
typedef struct { int width, height; char pad8[0x40 - 8]; Dec5C98_x00105C98 *sys; } Mp5C98_x00105C98;
void _alalcFree_x00105C98(int *) __asm__("_alalcFree");
char *func_00108170_x00105C98(Dec5C98_x00105C98 *, int *, unsigned int, int) __asm__("func_00108170");
static __inline__ char *unc5C98(char *p) { return (char *)(((unsigned int)p & 0x0FFFFFFF) | 0x20000000); };
static __inline__ void fp5C98(Pic5C98_x00105C98 *p0, Pic5C98_x00105C98 *p1, Pic5C98_x00105C98 *p2, Pic5C98_x00105C98 *p3, Pic5C98_x00105C98 *p4, Pic5C98_x00105C98 *p5, Pic5C98_x00105C98 *p6, Pic5C98_x00105C98 *p7, Pic5C98_x00105C98 *p8, char *buffer0, char *buffer1, char *buffer2, int width, int height) { p0->base = buffer0; p1->base = buffer1; p2->base = buffer2; p3->base = buffer0; p4->base = buffer1; p5->base = buffer2; p6->base = buffer0 + width * height / 512 * 384; p7->base = buffer1 + width * height / 512 * 384; p8->base = buffer2 + width * height / 512 * 384; };
static __inline__ void ps5C98(Pic5C98_x00105C98 *p, int width, int height) { p->width = width; p->height = height; p->mb_width = width >> 4; p->mb_height = height >> 4; };
void func_00105C98_x00105C98(Mp5C98_x00105C98 *mp) __asm__("func_00105C98");
void func_00105C98_x00105C98(Mp5C98_x00105C98 *mp)
{
    Dec5C98_x00105C98 *dec = mp->sys;
    int width, height;
    unsigned int bytes;

    if (!dec->mpeg2) {
        dec->progressive_sequence = 1;
        dec->chroma_format = 1;
        dec->progressive_frame = 1;
        dec->picture_structure = 3;
        dec->frame_pred_frame_dct = 1;
        dec->matrix_coefficients = 5;
    }
    dec->mb_width = (dec->h_size + 15) >> 4;
    dec->mb_height = dec->mpeg2 && !dec->progressive_sequence ? (dec->v_size + 31) >> 5 << 1 : (dec->v_size + 15) >> 4;
    height = dec->mb_height << 4;
    width = dec->mb_width << 4;
    if (width == mp->width && height == mp->height) {
        return;
    }
    mp->width = width;
    mp->height = height;
    bytes = (unsigned int)(width * 384 * height) >> 8;
    _alalcFree_x00105C98(dec->alalc);
    dec->frame_buffers[0] = func_00108170_x00105C98(dec, dec->alalc, bytes, 64);
    dec->frame_buffers[1] = func_00108170_x00105C98(dec, dec->alalc, bytes, 64);
    dec->frame_buffers[2] = func_00108170_x00105C98(dec, dec->alalc, bytes, 64);
    if (dec->buffer_mode == 0) {
        fp5C98(&dec->pictures[0], &dec->pictures[1], &dec->pictures[2], &dec->pictures[3], &dec->pictures[4],
               &dec->pictures[5], &dec->pictures[6], &dec->pictures[7], &dec->pictures[8],
               unc5C98(dec->frame_buffers[0]), unc5C98(dec->frame_buffers[1]), unc5C98(dec->frame_buffers[2]), mp->width, mp->height);
    } else if (dec->buffer_mode == 1) {
        fp5C98(&dec->pictures[0], &dec->pictures[1], &dec->pictures[2], &dec->pictures[3], &dec->pictures[4],
               &dec->pictures[5], &dec->pictures[6], &dec->pictures[7], &dec->pictures[8],
               dec->frame_buffers[0], dec->frame_buffers[1], dec->frame_buffers[2], mp->width, mp->height);
    }
    ps5C98(&dec->pictures[0], width, height);
    ps5C98(&dec->pictures[1], width, height);
    ps5C98(&dec->pictures[2], width, height);
    ps5C98(&dec->pictures[3], width, height / 2);
    ps5C98(&dec->pictures[4], width, height / 2);
    ps5C98(&dec->pictures[5], width, height / 2);
    ps5C98(&dec->pictures[6], width, height / 2);
    ps5C98(&dec->pictures[7], width, height / 2);
    ps5C98(&dec->pictures[8], width, height / 2);
}
int DIntr_x00105FB0(void) __asm__("DI");
int EIntr_x00105FB0(void) __asm__("EI");
extern void _initSeq_x00105FB0(int h) __asm__("func_00105C98");
extern int func_0039EAA8_x00105FB0(void *v, int n) __asm__("func_00104728");
extern void _sceMpegError_x00105FB0(void *v, char *msg) __asm__("func_00109738");
extern void func_003A0DE8_x00105FB0(void *v) __asm__("func_00106A68");
extern void func_0039AB20_x00105FB0(int h, void *req) __asm__("func_00107DE0");
extern void func_003A0C18_x00105FB0(void *v) __asm__("func_00106898");
extern char D_0045E7F8_x00105FB0[] __asm__("D_0045CFB0");
extern unsigned char D_003FA280_x00105FB0[] __asm__("D_003EC4C0");
extern unsigned char D_003FA2C0_x00105FB0[] __asm__("D_003EC500");
typedef struct {
	int cmd;
	long a;
	long b;
} MpegCb_x00105FB0;
typedef struct {
	char _pad0[0xE8];
	int first_picture_structure;		 
	char _pad1[0x48];
	int horizontal_size;			 
	int vertical_size;			 
	char _pad2[0x8];
	int bit_rate;				 
	int vbv_buffer_size;			 
	char _pad3[0x6DC];
	int ipu_busy;				 
	unsigned int ipu_cmd;			 
	char _pad4[0x20];
	int load_intra_quantiser_matrix;	 
	int load_non_intra_quantiser_matrix;	 
	char _pad5[0x10];
	int cb;					 
} Mpeg_x00105FB0;
void func_00105FB0_x00105FB0(Mpeg_x00105FB0 *v) __asm__("func_00105FB0");
/* func_003A0330: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a0330.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00105FB0_x00105FB0(Mpeg_x00105FB0 *v)
{
	MpegCb_x00105FB0 req;
	unsigned int n;
	int vsize;
	int r;

	v->first_picture_structure = 0;
	n = func_0039EAA8_x00105FB0(v, 32);
	vsize = (n >> 8) & 0xFFF;
	v->horizontal_size = n >> 20;
	v->vertical_size = vsize;
	if (vsize > 2800)
		_sceMpegError_x00105FB0(v, D_0045E7F8_x00105FB0);

	n = func_0039EAA8_x00105FB0(v, 30);
	v->bit_rate = n >> 12;
	v->vbv_buffer_size = (n >> 1) & 0x3FF;

	v->load_intra_quantiser_matrix = func_0039EAA8_x00105FB0(v, 1);
	if (v->load_intra_quantiser_matrix) {
		func_003A0DE8_x00105FB0(v);
		(*(volatile unsigned int *)0x10002000) = 0x50000000;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00105FB0(v);
	} else {
		unsigned int p = (unsigned int)D_003FA280_x00105FB0;
		unsigned int cmd = 0x50000000;
		req.cmd = 2;
		func_0039AB20_x00105FB0(v->cb, &req);
		func_003A0DE8_x00105FB0(v);
		(*(volatile unsigned int *)0x10002000) = 0;
		func_003A0DE8_x00105FB0(v);
		r = DIntr_x00105FB0();
		(*(volatile unsigned int *)0x1000B410) = p & 0x0FFFFFFF;
		(*(volatile unsigned int *)0x1000B420) = 4;
		(*(volatile unsigned int *)0x1000B400) = 0x101;
		if (r != 0)
			EIntr_x00105FB0();
		(*(volatile unsigned int *)0x10002000) = cmd;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00105FB0(v);
		req.cmd = 3;
		func_0039AB20_x00105FB0(v->cb, &req);
	}

	v->load_non_intra_quantiser_matrix = func_0039EAA8_x00105FB0(v, 1);
	if (v->load_non_intra_quantiser_matrix) {
		func_003A0DE8_x00105FB0(v);
		(*(volatile unsigned int *)0x10002000) = 0x58000000;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00105FB0(v);
	} else {
		unsigned int p = (unsigned int)D_003FA2C0_x00105FB0;
		unsigned int cmd = 0x58000000;
		req.cmd = 2;
		func_0039AB20_x00105FB0(v->cb, &req);
		func_003A0DE8_x00105FB0(v);
		(*(volatile unsigned int *)0x10002000) = 0;
		func_003A0DE8_x00105FB0(v);
		r = DIntr_x00105FB0();
		(*(volatile unsigned int *)0x1000B410) = p & 0x0FFFFFFF;
		(*(volatile unsigned int *)0x1000B420) = 4;
		(*(volatile unsigned int *)0x1000B400) = 0x101;
		if (r != 0)
			EIntr_x00105FB0();
		(*(volatile unsigned int *)0x10002000) = cmd;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00105FB0(v);
		req.cmd = 3;
		func_0039AB20_x00105FB0(v->cb, &req);
	}

	func_003A0C18_x00105FB0(v);
	_initSeq_x00105FB0(v->cb);
}
s32 func_00104728_x00106260() __asm__("func_00104728");
s32 func_00106898_x00106260() __asm__("func_00106898");
void func_00106260_x00106260(u8 *arg0) __asm__("func_00106260");
void func_00106260_x00106260(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0xFC) = 0;
    *(s32 *)((u8 *)arg0 + 0x864) = 1;
    *(s32 *)((u8 *)arg0 + 0x85C) = (s32) (*(s32 *)((u8 *)arg0 + 0x860) + 1);
    func_00104728_x00106260(arg0, (u8 *)1);
    func_00104728_x00106260(arg0, 5);
    func_00104728_x00106260(arg0, 6);
    func_00104728_x00106260(arg0, 1);
    func_00104728_x00106260(arg0, 6);
    func_00104728_x00106260(arg0, 6);
    *(s32 *)((u8 *)arg0 + 0x1B4) = func_00104728_x00106260(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x1B8) = func_00104728_x00106260(arg0, 1);
    func_00106898_x00106260(arg0);
}
s32 func_00104728_x00106300() __asm__("func_00104728");
s32 func_00106898_x00106300() __asm__("func_00106898");
s32 func_00106AA0_x00106300() __asm__("func_00106AA0");
void func_00106300_x00106300(u8 *arg0) __asm__("func_00106300");
void func_00106300_x00106300(u8 *arg0)
{
  s32 temp_a0;
  s32 temp_s1;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_a1;
  temp_s1 = func_00104728_x00106300(arg0, (u8 *) 0xA);
  *((s32 *) (((u8 *) arg0) + 0x160)) = func_00104728_x00106300(arg0, 3);
  func_00104728_x00106300(arg0, 0x10);
  if (((u32) ((*((s32 *) (((u8 *) arg0) + 0x160))) - 2)) >= 2U)
  {
    goto block_2;
  }
  *((s32 *) (((u8 *) arg0) + 0x164)) = func_00104728_x00106300(arg0, 1);
  *((s32 *) (((u8 *) arg0) + 0x168)) = func_00104728_x00106300(arg0, 3);
  block_2:
  if ((*((s32 *) (((u8 *) arg0) + 0x160))) != 3)
  {
    goto block_7;
  }

  *((s32 *) (((u8 *) arg0) + 0x16C)) = func_00104728_x00106300(arg0, 1);
  *((s32 *) (((u8 *) arg0) + 0x170)) = func_00104728_x00106300(arg0, 3);
 do { } while (0);
  goto block_6;
  block_5:
  func_00106AA0_x00106300(arg0, 8);

  block_6:
  block_7:
  if (func_00104728_x00106300(arg0, 1) != 0)
  {
    goto block_5;
  }


  func_00106898_x00106300(arg0);
  var_a1 = 0;
  var_a0 = 0;
  if ((*((s32 *) (((u8 *) arg0) + 0x160))) == 3)
  {
    goto block_13;
  }
  if (temp_s1 == 0)
  {
    goto block_13;
  }
  if (temp_s1 >= 0)
  {
    goto block_12;
  }
  var_a1 = (*((s32 *) (((u8 *) arg0) + 0x864))) == 0;
  block_12:
  *((s32 *) (((u8 *) arg0) + 0x864)) = 0;

  var_a0 = temp_s1;
  block_13:
  temp_v1 = (*((s32 *) (((u8 *) arg0) + 0x85C))) + temp_s1;

  *((s32 *) (((u8 *) arg0) + 0x1BC)) = temp_v1;
  if (var_a1 == 0)
  {
    goto block_16;
  }
  if (var_a0 < temp_s1)
  {
    goto block_16;
  }
  *((s32 *) (((u8 *) arg0) + 0x1BC)) = (s32) (temp_v1 + 0x400);
  block_16:
  temp_v0 = *((s32 *) (((u8 *) arg0) + 0x860));

  temp_a0 = *((s32 *) (((u8 *) arg0) + 0x1BC));
  *((s32 *) (((u8 *) arg0) + 0x860)) = (s32) ((temp_v0 < temp_a0) ? (temp_a0) : (*((s32 *) (((u8 *) arg0) + 0x860))));
  return;
}
extern int func_0039EAA8_x00106448(void *v, int n) __asm__("func_00104728");
extern void _sceMpegError_x00106448(void *v, char *msg) __asm__("func_00109738");
extern char D_0045E810_x00106448[] __asm__("D_0045CFC8");
extern char D_0045E838_x00106448[] __asm__("D_0045CFF0");
typedef struct {
	char _pad0[0x134];
	int horizontal_size;		 
	int vertical_size;		 
	char _pad1[0x8];
	int bit_rate;			 
	int vbv_buffer_size;		 
	int progressive_sequence;	 
	int chroma_format;		 
	char _pad2[0x704];
	int is_mpeg2;			 
} Mpeg_x00106448;
void func_00106448_x00106448(Mpeg_x00106448 *v) __asm__("func_00106448");
/* func_003A07C8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a07c8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00106448_x00106448(Mpeg_x00106448 *v)
{
	unsigned int n;
	unsigned int m;
	int profile_and_level_indication;
	int chroma_format;
	int horizontal_size_extension;
	int vertical_size_extension;
	int bit_rate_extension;
	int vbv_buffer_size_extension;

	v->is_mpeg2 = 1;
	(*(volatile unsigned int *)0x10002010) = (*(volatile unsigned int *)0x10002010) & 0xFF7FFFFF;
	n = func_0039EAA8_x00106448(v, 28);
	bit_rate_extension = (n >> 1) & 0xFFF;
	vertical_size_extension = (n >> 13) & 3;
	horizontal_size_extension = (n >> 15) & 3;
	chroma_format = (n >> 17) & 3;
	v->chroma_format = chroma_format;
	if (chroma_format != 1)
		_sceMpegError_x00106448(v, D_0045E810_x00106448);
	v->progressive_sequence = (n >> 19) & 1;
	profile_and_level_indication = n >> 20;
	m = func_0039EAA8_x00106448(v, 16);
	vbv_buffer_size_extension = m >> 8;
	if (profile_and_level_indication != 0x48 &&
	    profile_and_level_indication != 0x58 &&
	    profile_and_level_indication != 0x44)
		_sceMpegError_x00106448(v, D_0045E838_x00106448);
	v->horizontal_size = (horizontal_size_extension << 12) | (v->horizontal_size & 0xFFF);
	v->vertical_size = (vertical_size_extension << 12) | (v->vertical_size & 0xFFF);
	v->bit_rate += bit_rate_extension << 18;
	v->vbv_buffer_size += vbv_buffer_size_extension << 10;
}
extern int func_0039EAA8_x00106588(void *v, int n) __asm__("func_00104728");
extern void func_003A0DE8_x00106588(void *v) __asm__("func_00106A68");
extern void _sceMpegError_x00106588(void *v, char *msg) __asm__("func_00109738");
extern char D_0045E858_x00106588[] __asm__("D_0045D010");
extern char D_0045E880_x00106588[] __asm__("D_0045D038");
typedef struct {
	char _pad0[0x828];
	int ipu_busy;			 
	unsigned int ipu_cmd;		 
	char _pad1[0x20];
	int load_intra_quantiser_matrix;	 
	int load_non_intra_quantiser_matrix;	 
} Mpeg_x00106588;
void func_00106588_x00106588(Mpeg_x00106588 *v) __asm__("func_00106588");
/* func_003A0908: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a0908.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00106588_x00106588(Mpeg_x00106588 *v)
{
	v->load_intra_quantiser_matrix = func_0039EAA8_x00106588(v, 1);
	if (v->load_intra_quantiser_matrix) {
		func_003A0DE8_x00106588(v);
		(*(volatile unsigned int *)0x10002000) = 0x50000000;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00106588(v);
	}
	v->load_non_intra_quantiser_matrix = func_0039EAA8_x00106588(v, 1);
	if (v->load_non_intra_quantiser_matrix) {
		func_003A0DE8_x00106588(v);
		(*(volatile unsigned int *)0x10002000) = 0x58000000;
		v->ipu_cmd = 0x50000000;
		v->ipu_busy = 1;
		func_003A0DE8_x00106588(v);
	}
	if (func_0039EAA8_x00106588(v, 1))
		_sceMpegError_x00106588(v, D_0045E858_x00106588);
	if (func_0039EAA8_x00106588(v, 1))
		_sceMpegError_x00106588(v, D_0045E880_x00106588);
}
s32 func_00109738_x00106670() __asm__("func_00109738");
extern s32 D_0045D068_x00106670 __asm__("D_0045D068");
void func_00106670_x00106670(s32 arg0) __asm__("func_00106670");
void func_00106670_x00106670(s32 arg0) {
    func_00109738_x00106670(arg0, &D_0045D068_x00106670);
}
s32 func_00109738_x00106680() __asm__("func_00109738");
extern s32 D_0045D098_x00106680 __asm__("D_0045D098");
void func_00106680_x00106680(s32 arg0) __asm__("func_00106680");
void func_00106680_x00106680(s32 arg0) {
    func_00109738_x00106680(arg0, &D_0045D098_x00106680);
}
extern int func_0039EAA8_x00106690(void *v, int n) __asm__("func_00104728");
typedef struct {
	char _pad0[0xE8];
	int first_picture_structure;	 
	char _pad1[0x88];
	int f_code00;			 
	int f_code01;			 
	int f_code10;			 
	int f_code11;			 
	int picture_structure;		 
	int top_field_first;		 
	int frame_pred_frame_dct;	 
	int concealment_motion_vectors;	 
	int repeat_first_field;		 
	int progressive_frame;		 
} Mpeg_x00106690;
int func_00106690_x00106690(Mpeg_x00106690 *v) __asm__("func_00106690");
/* func_003A0A10: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a0a10.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00106690_x00106690(Mpeg_x00106690 *v)
{
	int t;

	v->f_code00 = func_0039EAA8_x00106690(v, 4);
	v->f_code01 = func_0039EAA8_x00106690(v, 4);
	v->f_code10 = func_0039EAA8_x00106690(v, 4);
	v->f_code11 = func_0039EAA8_x00106690(v, 4);
	t = func_0039EAA8_x00106690(v, 2);			 
	(*(volatile unsigned int *)0x10002010) = ((*(volatile unsigned int *)0x10002010) & 0xFFFCFFFF) | (t << 16);
	t = func_0039EAA8_x00106690(v, 2);			 
	v->picture_structure = t;
	if (v->first_picture_structure == 0)
		v->first_picture_structure = t;
	v->top_field_first = func_0039EAA8_x00106690(v, 1);
	v->frame_pred_frame_dct = func_0039EAA8_x00106690(v, 1);
	v->concealment_motion_vectors = func_0039EAA8_x00106690(v, 1);
	t = func_0039EAA8_x00106690(v, 1);			 
	(*(volatile unsigned int *)0x10002010) = ((*(volatile unsigned int *)0x10002010) & 0xFFBFFFFF) | (t << 22);
	t = func_0039EAA8_x00106690(v, 1);			 
	(*(volatile unsigned int *)0x10002010) = ((*(volatile unsigned int *)0x10002010) & 0xFFDFFFFF) | (t << 21);
	t = func_0039EAA8_x00106690(v, 1);			 
	(*(volatile unsigned int *)0x10002010) = ((*(volatile unsigned int *)0x10002010) & 0xFFEFFFFF) | (t << 20);
	v->repeat_first_field = func_0039EAA8_x00106690(v, 1);
	func_0039EAA8_x00106690(v, 1);				 
	v->progressive_frame = func_0039EAA8_x00106690(v, 1);
	if (func_0039EAA8_x00106690(v, 1)) {			 
		func_0039EAA8_x00106690(v, 1);			 
		func_0039EAA8_x00106690(v, 3);			 
		func_0039EAA8_x00106690(v, 1);			 
		func_0039EAA8_x00106690(v, 7);			 
		return func_0039EAA8_x00106690(v, 8);		 
	}
}
s32 func_00109738_x00106878() __asm__("func_00109738");
extern s32 D_0045D0B0_x00106878 __asm__("D_0045D0B0");
void func_00106878_x00106878(s32 arg0) __asm__("func_00106878");
void func_00106878_x00106878(s32 arg0) {
    func_00109738_x00106878(arg0, &D_0045D0B0_x00106878);
}
s32 func_00109738_x00106888() __asm__("func_00109738");
extern s32 D_0045D0E8_x00106888 __asm__("D_0045D0E8");
void func_00106888_x00106888(s32 arg0) __asm__("func_00106888");
void func_00106888_x00106888(s32 arg0) {
    func_00109738_x00106888(arg0, &D_0045D0E8_x00106888);
}
typedef struct { char pad[0x878]; int f878; } Dec6898_x00106898;
typedef struct { void (*f[11])(Dec6898_x00106898 *); } Tab6898_x00106898;
extern Tab6898_x00106898 D_0045D120_x00106898 __asm__("D_0045D120");
void func_00106C08_x00106898(Dec6898_x00106898 *) __asm__("func_00106C08");
void func_00106C00_x00106898(Dec6898_x00106898 *) __asm__("func_00106C00");
void func_00106AA0_x00106898(Dec6898_x00106898 *, int) __asm__("func_00106AA0");
unsigned int func_00104810_x00106898(Dec6898_x00106898 *, int) __asm__("func_00104810");
unsigned int func_00104728_x00106898(Dec6898_x00106898 *, int) __asm__("func_00104728");
void func_00106898_x00106898(Dec6898_x00106898 *dec) __asm__("func_00106898");
void func_00106898_x00106898(Dec6898_x00106898 *dec)
{
    Tab6898_x00106898 ext = D_0045D120_x00106898;
    unsigned int code;
    unsigned int id;

    func_00106C08_x00106898(dec);
    while (func_00104810_x00106898(dec, 24) != 1 && !dec->f878) func_00106AA0_x00106898(dec, 8);
    while ((code = func_00104810_x00106898(dec, 32)) == 0x1B5 || code == 0x1B2) {
        if (code == 0x1B5) {
            func_00106C00_x00106898(dec);
            id = func_00104728_x00106898(dec, 4);
            id = id > 10 ? 0 : id;
            ext.f[id](dec);
            func_00106C08_x00106898(dec);
            while (func_00104810_x00106898(dec, 24) != 1 && !dec->f878) func_00106AA0_x00106898(dec, 8);
        } else {
            func_00106C00_x00106898(dec);
            func_00106C08_x00106898(dec);
            while (func_00104810_x00106898(dec, 24) != 1 && !dec->f878) func_00106AA0_x00106898(dec, 8);
        }
    }
}
s32 func_00104440_x00106A68(s32) __asm__("func_00104440");
void func_00106A68_x00106A68(s32 a0) __asm__("func_00106A68");
void func_00106A68_x00106A68(s32 a0) {
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        func_00104440_x00106A68(a0);
    }
}
s32 func_001048A0_x00106AA0() __asm__("func_001048A0");
void func_00106AA0_x00106AA0(s32 arg0, s32 arg1) __asm__("func_00106AA0");
void func_00106AA0_x00106AA0(s32 arg0, s32 arg1) {
    func_001048A0_x00106AA0(arg0, arg1);
}
extern void flushByteBoundary_x00106AA8(void *v) __asm__("func_00106C08");
extern int func_0039EAA8_x00106AA8(void *v, int n) __asm__("func_00104728");
extern int func_0039EB90_x00106AA8(void *v, int n) __asm__("func_00104810");
extern int func_003A0E20_x00106AA8(void *v, int n) __asm__("func_00106AA0");
extern void func_003A0330_x00106AA8(void *v) __asm__("func_00105FB0");
extern void func_003A05E0_x00106AA8(void *v) __asm__("func_00106260");
extern void func_003A0680_x00106AA8(void *v) __asm__("func_00106300");
extern void func_0039AB20_x00106AA8(int h, void *req) __asm__("func_00107DE0");
typedef struct {
	int cmd;			 
	long pts;			 
	long dts;			 
} MpegCb_x00106AA8;
typedef struct {
	char _pad0[0x160];
	int picture_coding_type;	 
	char _pad1[0x6D4];
	long pts;			 
	long dts;			 
	char _pad2[0x20];
	int cb;				 
	char _pad3[0xC];
	int stop;			 
} Mpeg_x00106AA8;
int func_00106AA8_x00106AA8(Mpeg_x00106AA8 *v) __asm__("func_00106AA8");
/* func_003A0E28: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a0e28.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00106AA8_x00106AA8(Mpeg_x00106AA8 *v)
{
	MpegCb_x00106AA8 req;
	unsigned int code;

	for (;;) {
		if (v->stop != 0)
			return -1;
		flushByteBoundary_x00106AA8(v);
		while (func_0039EB90_x00106AA8(v, 24) != 1 && v->stop == 0)
			func_003A0E20_x00106AA8(v, 8);
		code = func_0039EAA8_x00106AA8(v, 32);
		switch (code) {
		case 0x1B3:
			func_003A0330_x00106AA8(v);
			break;
		case 0x1B8:
			func_003A05E0_x00106AA8(v);
			break;
		case 0x100:
			func_003A0680_x00106AA8(v);
			req.cmd = 5;
			req.pts = -1;
			req.dts = -1;
			func_0039AB20_x00106AA8(v->cb, &req);
			v->dts = req.dts;
			v->pts = req.pts;
			return v->picture_coding_type;
		case 0x1B7:
			return 0;
		}
	}
}
__asm__("# rebind func_00106AA8 0x00106AA8");
s32 func_00106AA0_x00106C00() __asm__("func_00106AA0");
void func_00106C00_x00106C00(s32 a0) __asm__("func_00106C00");
void func_00106C00_x00106C00(s32 a0) {
    func_00106AA0_x00106C00(a0, 32);
}
void func_00106A68_x00106C08(s32) __asm__("func_00106A68");
void func_00106AA0_x00106C08(s32, s32) __asm__("func_00106AA0");
void func_00106C08_x00106C08(s32 a0) __asm__("func_00106C08");
void func_00106C08_x00106C08(s32 a0)
{
    s32 n;
    func_00106A68_x00106C08(a0);
    n = -(*(volatile u32 *)0x10002020 & 7) & 7;
    if (n != 0) {
        func_00106AA0_x00106C08(a0, n);
    }
}
s32 func_00104728_x00106C58() __asm__("func_00104728");
void func_00106C58_x00106C58(u8 *arg0) __asm__("func_00106C58");
void func_00106C58_x00106C58(u8 *arg0) {
    func_00104728_x00106C58(arg0, (u8 *)3);
    if (func_00104728_x00106C58(arg0, 1) != 0) {
        func_00104728_x00106C58(arg0, 8);
        func_00104728_x00106C58(arg0, 8);
        *(s32 *)((u8 *)arg0 + 0x154) = func_00104728_x00106C58(arg0, 8);
    }
    *(s32 *)((u8 *)arg0 + 0x158) = func_00104728_x00106C58(arg0, 0xE);
    func_00104728_x00106C58(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x15C) = func_00104728_x00106C58(arg0, 0xE);
}
s32 func_00104728_x00106CE8() __asm__("func_00104728");
s32 func_00106CE8_x00106CE8(s32 arg0) __asm__("func_00106CE8");
s32 func_00106CE8_x00106CE8(s32 arg0) {
    func_00104728_x00106CE8(arg0, 1);
    func_00104728_x00106CE8(arg0, 8);
    func_00104728_x00106CE8(arg0, 1);
    func_00104728_x00106CE8(arg0, 7);
    func_00104728_x00106CE8(arg0, 1);
    func_00104728_x00106CE8(arg0, 0x14);
    func_00104728_x00106CE8(arg0, 1);
    func_00104728_x00106CE8(arg0, 0x16);
    func_00104728_x00106CE8(arg0, 1);
    return func_00104728_x00106CE8(arg0, 0x16);
}
extern int func_0039EAA8_x00106D80(void *v, int n) __asm__("func_00104728");
typedef struct {
	char _pad0[0x14C];
	int progressive_sequence;		 
	char _pad1[0x34];
	int picture_structure;			 
	int top_field_first;			 
	char _pad2[0x8];
	int repeat_first_field;			 
	char _pad3[0x4];
	int frame_centre_horizontal_offset[3];	 
	int frame_centre_vertical_offset[3];	 
} Mpeg_x00106D80;
void func_00106D80_x00106D80(Mpeg_x00106D80 *v) __asm__("func_00106D80");
/* func_003A1100: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a1100.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00106D80_x00106D80(Mpeg_x00106D80 *v)
{
	int n;
	int i;

	if (v->progressive_sequence) {
		if (v->repeat_first_field)
			n = v->top_field_first ? 3 : 2;
		else
			n = 1;
	} else if (v->picture_structure != 3) {
		n = 1;
	} else {
		n = v->repeat_first_field ? 3 : 2;
	}
	for (i = 0; i < n; i++) {
		v->frame_centre_horizontal_offset[i] = func_0039EAA8_x00106D80(v, 16);
		func_0039EAA8_x00106D80(v, 1);	 
		v->frame_centre_vertical_offset[i] = func_0039EAA8_x00106D80(v, 16);
		func_0039EAA8_x00106D80(v, 1);	 
	}
}
extern unsigned char D_0045E400_x00106E78[] __asm__("D_0045D150");
extern void _sceMpegError_x00106E78(void *, void *) __asm__("func_00109738");
void func_00106E78_x00106E78(void *m) __asm__("func_00106E78");
/* _clearOnce: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399d70.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00106E78_x00106E78(void *m) {
    int mode;
    *(volatile unsigned int *)0x10002010 =
        (*(volatile unsigned int *)0x10002010 & 0xFF7FFFFFU) | 0x800000;
    mode = *(int *)((char *)m + 0x87C);
    if (mode == 0) {
        int spr = 0x70000000;
        *(int *)((char *)m + 0x830) = 0x70003600;
        *(int *)((char *)m + 0x5A0) = spr;
        *(int *)((char *)m + 0x5A4) = 0x70001800;
        *(int *)((char *)m + 0x6E0) = 0x70001B00;
        *(int *)((char *)m + 0x6E4) = 0x70003300;
        *(int *)((char *)m + 0x820) = 0;
        return;
    }
    if (mode == 1) {
        *(int *)((char *)m + 0x830) = (int)((char *)m + 0xE80);
        *(int *)((char *)m + 0x5A4) =
            (int)((((unsigned int)((char *)m + 0x880)) & 0x0FFFFFFFU) | 0x30000000U);
        *(int *)((char *)m + 0x6E4) =
            (int)((((unsigned int)((char *)m + 0xB80)) & 0x0FFFFFFFU) | 0x30000000U);
        *(int *)((char *)m + 0x5A0) = 0;
        *(int *)((char *)m + 0x6E0) = 0;
        *(int *)((char *)m + 0x820) = 0;
        return;
    }
    _sceMpegError_x00106E78(m, D_0045E400_x00106E78);
}
typedef struct {
    int width, height, frameCount;
    long pts, dts;
    unsigned long flags;
    long pts2nd, dts2nd;
    unsigned long flags2nd;
    void *sys;
} sceMpeg_x00106F48;
typedef struct { int (*func)(); void *data; void *gp; } CB_x00106F48;
void *func_002333B4_x00106F48(void *, int, int) __asm__("memset");
void func_0024FA38_x00106F48(void *, const char *, int) __asm__("func_00109738");
void func_0024FA90_x00106F48(void *, const char *, int) __asm__("func_00109790");
void func_0024B8F8_x00106F48(void *, void *, int) __asm__("func_00108138");
int func_0024B930_x00106F48(void *, void *, int, int) __asm__("func_00108170");
void func_0024A908_x00106F48(void *) __asm__("func_00106E78");
void func_0024B590_x00106F48(sceMpeg_x00106F48 *) __asm__("func_00107C88");
int func_0024B7A8_x00106F48(sceMpeg_x00106F48 *) __asm__("func_00107F18");
void func_0024B910_x00106F48(void *) __asm__("func_00108150");
int func_0024B9A0_x00106F48() __asm__("func_001081F8");
int func_0024B9C8_x00106F48() __asm__("func_00108220");
extern char D_002AC2F8_x00106F48[] __asm__("D_0045D1B8");
extern char D_002AC2A8_x00106F48[] __asm__("D_0045D168");
extern char D_002AC2D0_x00106F48[] __asm__("D_0045D190");
int func_00106F48_x00106F48(sceMpeg_x00106F48 *mp, unsigned char *work, int size) __asm__("func_00106F48");
/* sceMpegCreate: from https://github.com/Komasia/sly2-decomp (src/lib/sceMpegCreate.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00106F48_x00106F48(sceMpeg_x00106F48 *mp, unsigned char *work, int size)
{
    char *d;
    void *bs;
    int rem;
    int r;
    func_002333B4_x00106F48(work, 0, size);
    d = (char *)((((unsigned int)work + 3) >> 2) << 2);
    rem = size - (d - (char *)work);
    if (rem < 0x19A0) {
        func_0024FA38_x00106F48(d, D_002AC2F8_x00106F48, rem);
        return 0;
    }
    bs = d + 0x118;
    mp->sys = d;
    func_0024B8F8_x00106F48(bs, d + 0x19A0, rem - 0x19A0);
    mp->width = 0;
    mp->height = 0;
    mp->frameCount = 0;
    mp->pts = -1;
    mp->dts = -1;
    mp->flags = 0;
    mp->pts2nd = -1;
    mp->dts2nd = -1;
    mp->flags2nd = 0;
    (*(int *)((char *)d + (0xC8))) = 0; (*(int *)((char *)d + (0xCC))) = 0; (*(int *)((char *)d + (0xD0))) = 0; (*(int *)((char *)d + (0xD4))) = 0;
    (*(int *)((char *)d + (0xD8))) = 0; (*(int *)((char *)d + (0xDC))) = 0; (*(int *)((char *)d + (0xE0))) = 0; (*(int *)((char *)d + (0xE4))) = 0;
    (*(int *)((char *)d + (0xE8))) = 0; (*(int *)((char *)d + (0xEC))) = 0; (*(int *)((char *)d + (0xF0))) = 0; (*(int *)((char *)d + (0xF4))) = 0;
    (*(int *)((char *)d + (0xF8))) = 0; (*(int *)((char *)d + (0xFC))) = 0; (*(int *)((char *)d + (0x108))) = 0;
    ((CB_x00106F48 *)(d + 0xC))[0].func = 0; ((CB_x00106F48 *)(d + 0xC))[1].func = 0; ((CB_x00106F48 *)(d + 0xC))[4].func = 0; ((CB_x00106F48 *)(d + 0xC))[5].func = 0; ((CB_x00106F48 *)(d + 0xC))[6].func = 0;
    (*(long *)((char *)d + (0x100))) = -1;
    ((CB_x00106F48 *)(d + 0xC))[2].func = func_0024B9A0_x00106F48;
    ((CB_x00106F48 *)(d + 0xC))[3].func = func_0024B9C8_x00106F48;
    r = func_0024B930_x00106F48(d, bs, 0x800, 8);
    (*(int *)((char *)d + (0x64))) = 0;
    (*(int *)((char *)d + (0x10C))) = 0; (*(int *)((char *)d + (0x110))) = 0; (*(int *)((char *)d + (0x114))) = 0;
    (*(int *)((char *)d + (0x8C))) = 0;
    (*(long *)((char *)d + (0x90))) = 0;
    (*(int *)((char *)d + (0x98))) = -1;
    (*(long *)((char *)d + (0xA0))) = 0;
    (*(int *)((char *)d + (0x9C))) = 0;
    (*(int *)((char *)d + (0xC0))) = 0;
    (*(int *)((char *)d + (0xA8))) = -1; (*(int *)((char *)d + (0xAC))) = -1; (*(int *)((char *)d + (0xB0))) = -1;
    (*(void **)((char *)d + (0x868))) = mp;
    (*(int *)((char *)d + (0x60))) = r;
    (*(int *)((char *)d + (0xC4))) = 1;
    func_0024A908_x00106F48(d);
    func_0024B590_x00106F48(mp);
    func_0024B7A8_x00106F48(mp);
    (*(void **)((char *)d + (0x1C8))) = d + 0x1F8;
    (*(void **)((char *)d + (0x1CC))) = d + 0x260;
    (*(void **)((char *)d + (0x1D4))) = d + 0x2C8;
    (*(void **)((char *)d + (0x1D8))) = d + 0x330;
    (*(void **)((char *)d + (0x1DC))) = d + 0x398;
    (*(void **)((char *)d + (0x1E4))) = d + 0x400;
    (*(void **)((char *)d + (0x1E8))) = d + 0x468;
    (*(void **)((char *)d + (0x1EC))) = d + 0x4D0;
    (*(void **)((char *)d + (0x1F4))) = d + 0x538;
    func_0024B910_x00106F48(bs);
    (*(int *)((char *)d + (0x860))) = -1;
    (*(int *)((char *)d + (0x85C))) = 0;
    (*(int *)((char *)d + (0x864))) = 0;
    if ((rem = (unsigned int)(d + 0x140) & 63)) {
        func_0024FA90_x00106F48(d, D_002AC2A8_x00106F48, rem);
        return 0;
    }
    if ((unsigned int)(d + 0x880) & 63) {
        func_0024FA90_x00106F48(d, D_002AC2D0_x00106F48, (unsigned int)(d + 0x880) & 63);
        return 0;
    }
    return 1;
}
void FlushCache_x00107180(int) __asm__("FlushCache");
int DI_x00107180(void) __asm__("DI");
int EI_x00107180(void) __asm__("EI");
void func_00107180_x00107180(unsigned char *dec, unsigned char *data, int size) __asm__("func_00107180");
void func_00107180_x00107180(unsigned char *dec, unsigned char *data, int size)
{
    unsigned long long *tag = (unsigned long long *)(((unsigned int)(dec + 0x1180) + 15) >> 4 << 4);
    unsigned long long *first = tag;
    int intr;

    while (size > 0) {
        int chunk = size < 0xFFF40 ? size : 0xFFF40;
        unsigned long long addr = (unsigned int)data & 0x0FFFFFFF;
        unsigned long long ref = 3;
        int qwc = (chunk + 15) / 16;
        unsigned long long id;

        size -= chunk;
        id = size ? ref : 0;
        *tag = (addr << 32) | (id << 28) | (unsigned int)qwc;
        __asm__("sync");
        data += chunk;
        tag += 2;
    }
    FlushCache_x00107180(0);
    intr = DI_x00107180();
    *(volatile unsigned int *)0x1000B430 = (unsigned int)first & 0x0FFFFFFF;
    *(volatile unsigned int *)0x1000B420 = 0;
    *(volatile unsigned int *)0x1000B400 = 0x105;
    if (intr) {
        EI_x00107180();
    }
}
int DIntr_x00107280(void) __asm__("DI");
int EIntr_x00107280(void) __asm__("EI");
extern void func_003BACA0_x00107280(int, int) __asm__("func_00109AF8");
void func_00107280_x00107280(void *m) __asm__("func_00107280");
/* _clearEach: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399d70.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00107280_x00107280(void *m) {
    int oldstat;
    *(int *)((char *)m + 0x828) = 1;
    *(int *)((char *)m + 0x1C0) = 0;
    oldstat = DIntr_x00107280();
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 = 0;
    *(volatile unsigned int *)0x1000B400 = 0;
    *(volatile unsigned int *)0x1000D400 = 0;
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & 0xFFFEFFFFU;
    if (oldstat != 0) EIntr_x00107280();
    *(volatile unsigned int *)0x1000B020 = 0;
    *(volatile unsigned int *)0x1000B420 = 0;
    *(volatile unsigned int *)0x1000D420 = 0;
    *(volatile unsigned int *)0x10002010 = 0x40000000;
    func_003BACA0_x00107280(0, 0);
}
typedef struct { int f0; char pad4[0xA8 - 4]; int fA8, fAC, fB0, fB4, fB8, fBC; char padC0[0xE8 - 0xC0]; int fE8, fEC; char padF0[0x184 - 0xF0]; int f184; char pad188[0x834 - 0x188]; int f834; char pad838[0x858 - 0x838]; int f858; char pad85C[0x878 - 0x85C]; int f878; } Dec7348_x00107348;
typedef struct { char pad[0x40]; Dec7348_x00107348 *sys; } M_7348_x00107348;
extern char D_0045D1E0_x00107348[] __asm__("D_0045D1E0");
extern char D_0045D220_x00107348[] __asm__("D_0045D220");
extern char D_0045D260_x00107348[] __asm__("D_0045D260");
void func_00109790_x00107348(Dec7348_x00107348 *, char *, int) __asm__("func_00109790");
int func_00106AA8_x00107348(Dec7348_x00107348 *) __asm__("func_00106AA8");
int func_00108BB8_x00107348(M_7348_x00107348 *) __asm__("func_00108BB8");
int func_00107ED0_x00107348(M_7348_x00107348 *, int, int) __asm__("func_00107ED0");
int scePrintf_x00107348(const char *, ...) __asm__("scePrintf");
__asm__("# rebind func_" "00107348 0x00107348");
int func_00107348_x00107348(M_7348_x00107348 *mp) __asm__("func_00107348");
int func_00107348_x00107348(M_7348_x00107348 *mp)
{
    Dec7348_x00107348 *d = mp->sys;
    int ret = 0;
    int type = 1;
    d->f0 = 0;
    if (d->fEC & 0x3F) {
        func_00109790_x00107348(d, D_0045D1E0_x00107348, d->fEC);
        return -1;
    }
    if (d->f878) {
        scePrintf_x00107348(D_0045D220_x00107348);
        return -1;
    }
    d->f834 = 0;
    do {
        if (ret != -1) {
            do {
                type = func_00106AA8_x00107348(d);
                if (type < 0) return -1;
            } while (type != 0 && d->f184 != d->fE8 && d->f858 != 0);
        }
        switch (type) {
        case 0:
            func_00108BB8_x00107348(mp);
            d->f0 = 1;
            break;
        case 1:
            d->fBC = 0;
            d->fB8 = 0;
            d->fB4 = 0;
            ret = func_00107ED0_x00107348(mp, 0, d->fA8);
            d->fB4++;
            break;
        case 2:
            ret = func_00107ED0_x00107348(mp, d->fB8, d->fAC);
            d->fB8++;
            break;
        case 3:
        case 4:
            ret = func_00107ED0_x00107348(mp, d->fBC, d->fB0);
            d->fBC++;
            break;
        }
        if (d->f878) {
            scePrintf_x00107348(D_0045D260_x00107348);
            return -1;
        }
        if (d->f834) return 1;
    } while (d->f0 == 0);
    return 1;
}
typedef struct { char pad0[0x18]; long pts, dts; int decoded, pct, ps, pseq, pframe, tff, rff; int co[6]; int dw, dh; } Pic7500_x00107500;
typedef struct { Pic7500_x00107500 *ref, *prev, *decode, *image; } Slot7500_x00107500;
typedef struct { char pad0[0xB4]; int count_i, count_p; char padBC[0xFC - 0xBC]; int set_broken_link; char pad100[0x14C - 0x100]; int pseq; char pad150[0x158 - 0x150]; int dw, dh, pct; char pad164[0x184 - 0x164]; int ps, tff; char pad18C[0x194 - 0x18C]; int rff, pframe; char pad19C[0x19C - 0x19C]; int hoff[3], voff[3]; int closed_gop, broken_link; char pad1BC[0x1C8 - 0x1BC]; Slot7500_x00107500 slots[3]; char pad1F8[0x838 - 0x1F8]; long pts, dts; } Dec7500_x00107500;
int func_00107500_x00107500(Dec7500_x00107500 *dec, int second) __asm__("func_00107500");
int func_00107500_x00107500(Dec7500_x00107500 *dec, int second)
{
    Pic7500_x00107500 *selected;
    Pic7500_x00107500 *picture = 0;
    int ready = 0;
    int refs_needed = dec->ps == 3 ? 2 : 4;

    if (dec->pct == 3) {
        dec->slots[0].decode = dec->slots[0].image;
        dec->slots[1].decode = dec->slots[1].image;
        dec->slots[2].decode = dec->slots[2].image;
        if (dec->count_i + dec->count_p >= refs_needed) {
            dec->set_broken_link = 0;
            dec->broken_link = 0;
            dec->closed_gop = 0;
        }
        if ((dec->set_broken_link || dec->broken_link) && !dec->closed_gop) {
            dec->slots[0].ref->decoded = 0;
            dec->slots[1].ref->decoded = 0;
            dec->slots[2].ref->decoded = 0;
        }
        dec->set_broken_link = 0;
        dec->broken_link = 0;
        if (dec->ps == 3) {
            if (dec->slots[0].ref->decoded == 1 || dec->closed_gop) {
                if (dec->slots[0].prev->decoded == 1) {
                    ready = 1;
                }
            }
        } else if ((dec->slots[1].ref->decoded == 1 && dec->slots[2].ref->decoded == 1) || dec->closed_gop) {
            if (dec->slots[1].prev->decoded == 1) {
                if (dec->slots[2].prev->decoded == 1) {
                    ready = 1;
                }
            }
        }
    } else {
        if (!second) {
            Pic7500_x00107500 *tmp;

            tmp = dec->slots[0].ref;
            dec->slots[0].ref = dec->slots[0].prev;
            dec->slots[0].prev = tmp;
            tmp = dec->slots[1].ref;
            dec->slots[1].ref = dec->slots[1].prev;
            dec->slots[1].prev = tmp;
            tmp = dec->slots[2].ref;
            dec->slots[2].ref = dec->slots[2].prev;
            dec->slots[2].prev = tmp;
        }
        dec->slots[0].decode = dec->slots[0].prev;
        dec->slots[1].decode = dec->slots[1].prev;
        dec->slots[2].decode = dec->slots[2].prev;
        if (dec->ps == 3) {
            if (dec->pct != 2 || dec->slots[0].ref->decoded == 1) {
                ready = 1;
            }
        } else {
            selected = dec->ps == 1 ? dec->slots[2].prev : dec->slots[1].prev;
            if (dec->pct != 2 || (second && selected->decoded == 1) ||
                (dec->slots[1].ref->decoded == 1 && dec->slots[2].ref->decoded == 1)) {
                ready = 1;
            }
        }
    }
    switch (dec->ps) {
    case 3:
        picture = dec->slots[0].decode;
        break;
    case 1:
        picture = dec->slots[1].decode;
        break;
    case 2:
        picture = dec->slots[2].decode;
        break;
    }
    picture->decoded = 0;
    picture->pts = dec->pts;
    picture->dts = dec->dts;
    picture->pct = dec->pct;
    picture->ps = dec->ps;
    picture->pseq = dec->pseq;
    picture->pframe = dec->pframe;
    picture->tff = dec->tff;
    picture->rff = dec->rff;
    picture->co[0] = dec->hoff[0];
    picture->co[1] = dec->hoff[1];
    picture->co[2] = dec->hoff[2];
    picture->co[3] = dec->voff[0];
    picture->co[4] = dec->voff[1];
    picture->co[5] = dec->voff[2];
    picture->dw = dec->dw;
    picture->dh = dec->dh;
    return ready;
}
typedef struct { int type; int pad[7]; } sceMpegCbData_x001077B8;
typedef int (*sceMpegCallback_x001077B8)(void *mp, sceMpegCbData_x001077B8 *cbd, void *data);
typedef struct { sceMpegCallback_x001077B8 func; void *data; void *gp; } CB_x001077B8;
typedef struct {
    int x0; int x4; int x8; char pC[0xC0 - 0xC]; int xC0;
    char pC4[0x128 - 0xC4]; int x128; char p12C[0x130 - 0x12C]; int second_field;
    char p134[0x184 - 0x134]; int picture_structure;
    char p188[0x878 - 0x188]; int stop;
} D_x001077B8;
typedef struct { int x0, x4, x8; char p0[0x40 - 0xC]; void *sys; } sceMpeg_x001077B8;
static inline void *SetGp_x001077B8(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $28\n\tmove $28, %1" : "=&r"(old) : "r"(gp) : "memory");
    return old;
}
static inline int _sceMpegDispatchMpegCbNodata_x001077B8(sceMpeg_x001077B8 *mp)
{
    sceMpegCbData_x001077B8 cbd;
    CB_x001077B8 *t;
    sceMpegCallback_x001077B8 f;
    cbd.type = 1;
    if (mp && (t = ((CB_x001077B8 **)mp)[16]) && (f = (t + cbd.type)[1].func)) {
        void *old = SetGp_x001077B8(((void **)(t + cbd.type))[5]);
        f(mp, &cbd, (t + cbd.type)[1].data);
        SetGp_x001077B8(old);
    }
    return 1;
}
int _updateRefImage_x001077B8(D_x001077B8 *d, int second) __asm__("func_00107500");
int _decPicture_x001077B8(D_x001077B8 *d) __asm__("func_00108068");
void _sceMpegOutputFrame_x001077B8(D_x001077B8 *d, int a, int b) __asm__("func_00108C78");
static inline int _decodeFrame_x001077B8(D_x001077B8 *d)
{
    int t, u = _updateRefImage_x001077B8(d, 0);
    t = 0;
    if (u) t = _decPicture_x001077B8(d) != 0;
    return t;
}
int func_001077B8_x001077B8(sceMpeg_x001077B8 *mp, int n, int limit) __asm__("func_001077B8");
/* _decodeOrSkipFrame: from https://github.com/Komasia/sly2-decomp (src/lib/_decodeOrSkipFrame.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001077B8_x001077B8(sceMpeg_x001077B8 *mp, int n, int limit)
{
    D_x001077B8 *d = mp->sys;
    int skipped = 0;
    int r;

    if (limit == -1 || n < limit) {
        if (d->x8 == 0) {
            mp->x8 = 0;
            d->x8 = 1;
        }
        r = _decodeFrame_x001077B8(d);
    } else {
        r = _updateRefImage_x001077B8(d, 0);
        _sceMpegDispatchMpegCbNodata_x001077B8(mp);
        skipped = 1;
    }
    if (d->stop)
        return 0;
    _sceMpegOutputFrame_x001077B8(d, d->x128, d->x4);
    if (d->picture_structure != 3 && !skipped)
        d->second_field = !d->second_field;
    mp->x8 = d->x128 - d->xC0;
    if (!d->second_field) {
        d->x128++;
        d->x4++;
    }
    return r;
}
typedef struct { int type; int pad[7]; } sceMpegCbData_x00107928;
typedef int (*sceMpegCallback_x00107928)(void *mp, sceMpegCbData_x00107928 *cbd, void *data);
typedef struct { sceMpegCallback_x00107928 func; void *data; void *gp; } CB_x00107928;
typedef struct {
    int x0; int x4; int x8; char pC[0xC0 - 0xC]; int xC0; char pC4[0xE8 - 0xC4]; int xE8;
    char pEC[0x128 - 0xEC]; int x128; char p12C[0x130 - 0x12C]; int second_field;
    char p134[0x184 - 0x134]; int picture_structure;
    char p188[0x878 - 0x188]; int stop;
} D_x00107928;
typedef struct { int x0, x4, x8; char p0[0x40 - 0xC]; D_x00107928 *sys; } sceMpeg_x00107928;
static inline void *SetGp_x00107928(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $28\n\tmove $28, %1" : "=&r"(old) : "r"(gp) : "memory");
    return old;
}
static inline int _sceMpegDispatchMpegCbNodata_x00107928(sceMpeg_x00107928 *mp)
{
    sceMpegCbData_x00107928 cbd;
    CB_x00107928 *t;
    sceMpegCallback_x00107928 f;
    cbd.type = 1;
    if (mp && (t = ((CB_x00107928 **)mp)[16]) && (f = (t + cbd.type)[1].func)) {
        void *old = SetGp_x00107928(((void **)(t + cbd.type))[5]);
        f(mp, &cbd, (t + cbd.type)[1].data);
        SetGp_x00107928(old);
    }
    return 1;
}
int _updateRefImage_x00107928(D_x00107928 *d, int second) __asm__("func_00107500");
int _decPicture_x00107928(D_x00107928 *d) __asm__("func_00108068");
void _sceMpegOutputFrame_x00107928(D_x00107928 *d, int a, int b) __asm__("func_00108C78");
int _sceMpegNextHeader_x00107928(D_x00107928 *d) __asm__("func_00106AA8");
void func_0024C360_x00107928(sceMpeg_x00107928 *mp) __asm__("func_00108BB8");
int func_00107928_x00107928(sceMpeg_x00107928 *mp, int n, int limit) __asm__("func_00107928");
/* _decodeOrSkipField: from https://github.com/Komasia/sly2-decomp (src/lib/_decodeOrSkipField.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00107928_x00107928(sceMpeg_x00107928 *mp, int n, int limit)
{
    D_x00107928 *d = mp->sys;
    int decode = 0;
    int r, ok, one, exp;

    d->second_field = 0;
    if (limit == -1 || n < limit)
        decode = 1;
    if (d->x8 == 0) {
        mp->x8 = 0;
        d->x8 = 1;
    }
    if (_updateRefImage_x00107928(d, 0) && decode)
        _decPicture_x00107928(d);
    if (d->stop)
        return 0;
    one = 1;
    d->second_field = one;
    if (!_sceMpegNextHeader_x00107928(d)) {
        func_0024C360_x00107928(mp);
        d->x0 = one;
        return 0;
    }
    exp = 2;
    if (d->xE8 ^ 1)
        exp = one;
    if (d->picture_structure != exp)
        return -1;
    ok = 0;
    if (_updateRefImage_x00107928(d, 1))
        ok = one;
    r = 0;
    if (ok && decode) {
        if (_decPicture_x00107928(d))
            r = one;
    }
    if (d->stop)
        return 0;
    _sceMpegOutputFrame_x00107928(d, d->x128, d->x4);
    d->second_field = 0;
    mp->x8 = d->x128 - d->xC0;
    d->x128++;
    d->x4++;
    if (!decode)
        _sceMpegDispatchMpegCbNodata_x00107928(mp);
    return r;
}
void sceIpuInit_x00107AF0(void) __asm__("func_00109BD8");
int DIntr_x00107AF0(void) __asm__("DI");
int EIntr_x00107AF0(void) __asm__("EI");
int func_00107AF0_x00107AF0(void) __asm__("func_00107AF0");
/* sceMpegInit: from https://github.com/crashbashash/DW4_Decomp (src/sony/libmpeg/mpeg.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00107AF0_x00107AF0(void)
{
    int intr = DIntr_x00107AF0();

    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 | 0x10000;
    *(volatile unsigned int *)0x1000B000 &= ~0x100;     
    *(volatile unsigned int *)0x1000B400 &= ~0x100;     
    *(volatile unsigned int *)0x1000F590 = *(volatile unsigned int *)0x1000F520 & ~0x10000;
    if (intr) {
        EIntr_x00107AF0();
    }
    *(volatile unsigned int *)0x1000B020 = 0;              
    *(volatile unsigned int *)0x1000B420 = 0;              
    sceIpuInit_x00107AF0();
    return 1;
}
