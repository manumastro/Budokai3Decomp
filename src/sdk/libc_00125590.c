#include "common.h"

s32 GetThreadId();                                  /* extern */
s32 WaitSema(s32);                              /* extern */
extern s32 D_003ECD50;
extern s32 D_003F00B0;
extern s32 D_003F00B4;

struct Reent_x00125590;
typedef struct {
    unsigned char *base;
    int size;
} Sbuf_x00125590;
struct Reent_x00125590;
typedef struct Glue_x00125590 {
    struct Glue_x00125590 *next;
    int niobs;
    struct Fil_x00125590 *iobs;
} Glue_x00125590;
typedef struct Fil_x00125590 {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf_x00125590 bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf_x00125590 ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf_x00125590 lb;
    int blksize;
    int offset;
    struct Reent_x00125590 *data;
} Fil_x00125590;
struct _Bigint_x00125590 {
    struct _Bigint_x00125590 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent_x00125590 {
    int err;
    Fil_x00125590 *in, *out, *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint_x00125590 *result;
    int result_k;
    struct _Bigint_x00125590 *p5s;
    struct _Bigint_x00125590 **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue_x00125590 glue;
    Fil_x00125590 sf[3];
} Reent_x00125590;
int func_00125590_x00125590(struct Reent_x00125590 *r, int *pwc, const char *s, int n, int *state) __asm__("func_00125590");
/* _mbtowc_r: from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/mbtowc_r.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00125590_x00125590(struct Reent_x00125590 *r, int *pwc, const char *s, int n, int *state)
{
    int dummy;
    int *p = &dummy;
    unsigned char *t = (unsigned char *)s;
    if (pwc != 0)
        p = pwc;
    if (t == 0)
        goto zero;
    if (n != 0)
        goto store;
    return -1;
zero:
    return 0;
store:
    *p = *t;
    return *t != 0;
}
typedef signed int s32_x001255C8;
typedef unsigned int u32_x001255C8;
typedef signed long long s64_x001255C8;
typedef float f32_x001255C8;
extern s32_x001255C8 AddDmacHandler2_x001255C8(s32_x001255C8 channel, s32_x001255C8 (*handler)(s32_x001255C8, void *), s32_x001255C8 arg, u32_x001255C8 *arg3) __asm__("AddDmacHandler2");
extern s32_x001255C8 RhBase_SetVSyncCallback_x001255C8(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x001255C8 SzMsg_DrawRatioX_Pipe_x001255C8(s32_x001255C8 packet, s32_x001255C8 slot, s64_x001255C8 x, s64_x001255C8 y, f32_x001255C8 scaleX, f32_x001255C8 scaleY, s32_x001255C8 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
extern s32_x001255C8 func_00190A90_x001255C8(void (*arg0)(void)) __asm__("func_00190A90");
extern void func_00199BC0_x001255C8(s32_x001255C8 arg0, u32_x001255C8 n, u32_x001255C8 es, void (*arg3)(void)) __asm__("func_00199BC0");
void func_00199BC0_x001255C8(s32_x001255C8 arg0, u32_x001255C8 n, u32_x001255C8 es, void (*arg3)(void)) __asm__("func_00199BC0");
void *memchr_x001255C8(const void *s, s32_x001255C8 c, u32_x001255C8 n) __asm__("memchr");
/* memchr_x001255C8: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *memchr_x001255C8(const void *s, s32_x001255C8 c, u32_x001255C8 n) {
    register s32_x001255C8 r4 __asm__("$4");
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	sltiu	$2,$6,0x10\n"
        "	bnez	$2,_func_00198618_001986B8\n"
        "	andi	$5,$5,0xFF\n"
        "	andi	$2,$4,0xF\n"
        "	bnez	$2,_func_00198618_001986B8\n"
        "	daddu	$7,$4,$0\n"
        "	dsll	$3,$5,8\n"
        "	lui	$2,(0x1010101 >> 16)\n"
        "	ori	$2,$2,(0x1010101 & 0xFFFF)\n"
        "	dsll	$2,$2,16\n"
        "	ori	$2,$2,0x101\n"
        "	dsll	$2,$2,16\n"
        "	ori	$2,$2,0x101\n"
        "	daddu	$10,$3,$5\n"
        "	lui	$3,(0x80808080 >> 16)\n"
        "	ori	$3,$3,(0x80808080 & 0xFFFF)\n"
        "	dsll	$3,$3,16\n"
        "	ori	$3,$3,0x8080\n"
        "	dsll	$3,$3,16\n"
        "	ori	$3,$3,0x8080\n"
        "	pcpyh	$8,$10\n"
        "	pcpyld	$9,$8,$8\n"
        "	daddu	$4,$2,$0\n"
        "	pcpyld	$8,$3,$3\n"
        "_func_00198618_00198678:\n"
        "	lq	$2,0x0($7)\n"
        "	pxor	$2,$2,$9\n"
        "	pcpyld	$10,$4,$4\n"
        "	pnor	$3,$0,$2\n"
        "	psubb	$2,$2,$10\n"
        "	pand	$2,$2,$3\n"
        "	pand	$2,$2,$8\n"
        "	pcpyud	$3,$2,$9\n"
        "	or	$2,$2,$3\n"
        "	bnel	$2,$0,_func_00198618_001986B8\n"
        "	daddu	$4,$7,$0\n"
        "	addiu	$6,$6,-0x10\n"
        "	sltiu	$2,$6,0x10\n"
        "	beqz	$2,_func_00198618_00198678\n"
        "	addiu	$7,$7,0x10\n"
        "	daddu	$4,$7,$0\n"
        "_func_00198618_001986B8:\n"
        "	lui	$2,(0xFFFFFFFF >> 16)\n"
        "	addiu	$6,$6,-0x1\n"
        "	ori	$2,$2,(0xFFFFFFFF & 0xFFFF)\n"
        "	beq	$6,$2,_func_00198618_001986E8\n"
        "	nop\n"
        "	lui	$3,(0xFFFFFFFF >> 16)\n"
        "	ori	$3,$3,(0xFFFFFFFF & 0xFFFF)\n"
        "_func_00198618_001986D4:\n"
        "	lbu	$2,0x0($4)\n"
        "	beq	$2,$5,_func_00198618_001986F0\n"
        "	addiu	$6,$6,-0x1\n"
        "	bne	$6,$3,_func_00198618_001986D4\n"
        "	addiu	$4,$4,0x1\n"
        "_func_00198618_001986E8:\n"
        "	jr	$31\n"
        "	daddu	$2,$0,$0\n"
        "_func_00198618_001986F0:\n"
        "	.set	reorder\n"
        : "=r"(r4));
    return (void *)r4;
}
typedef signed int s32_x001256A8;
s32_x001256A8 memcmp_x001256A8(s32_x001256A8 *a, s32_x001256A8 *b, s32_x001256A8 n) __asm__("memcmp");
/* memcmp_x001256A8: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x001256A8 memcmp_x001256A8(s32_x001256A8 *a, s32_x001256A8 *b, s32_x001256A8 n) {
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	sltiu	$2,$6,0x10\n"
        "	bnez	$2,_func_001986F8_00198744\n"
        "	or	$2,$4,$5\n"
        "	andi	$2,$2,0xF\n"
        "	bnez	$2,_func_001986F8_00198744\n"
        "	nop\n"
        "_func_001986F8_00198710:\n"
        "	lq	$3,0x0($4)\n"
        "	sltiu	$7,$6,0x20\n"
        "	lq	$2,0x0($5)\n"
        "	addiu	$4,$4,0x10\n"
        "	pxor	$8,$2,$3\n"
        "	addiu	$2,$5,0x10\n"
        "	pcpyud	$10,$8,$7\n"
        "	or	$9,$10,$8\n"
        "	movz	$5,$2,$9\n"
        "	bnel	$9,$0,_func_001986F8_00198744\n"
        "	addiu	$4,$4,-0x10\n"
        "	beqz	$7,_func_001986F8_00198710\n"
        "	addiu	$6,$6,-0x10\n"
        "_func_001986F8_00198744:\n"
        "	lui	$2,(0xFFFFFFFF >> 16)\n"
        "	addiu	$6,$6,-0x1\n"
        "	ori	$2,$2,(0xFFFFFFFF & 0xFFFF)\n"
        "	beq	$6,$2,_func_001986F8_00198784\n"
        "	nop\n"
        "	lui	$7,(0xFFFFFFFF >> 16)\n"
        "	ori	$7,$7,(0xFFFFFFFF & 0xFFFF)\n"
        "_func_001986F8_00198760:\n"
        "	lbu	$3,0x0($4)\n"
        "	lbu	$2,0x0($5)\n"
        "	beq	$3,$2,_func_001986F8_00198778\n"
        "	addiu	$4,$4,0x1\n"
        "	jr	$31\n"
        "	subu	$2,$3,$2\n"
        "_func_001986F8_00198778:\n"
        "	addiu	$6,$6,-0x1\n"
        "	bne	$6,$7,_func_001986F8_00198760\n"
        "	addiu	$5,$5,0x1\n"
        "_func_001986F8_00198784:\n"
        "	.set	reorder\n"
       );
    return 0;
}
typedef signed int s32_x00125740;
typedef unsigned int u32_x00125740;
typedef signed long long s64_x00125740;
typedef float f32_x00125740;
extern s32_x00125740 AddDmacHandler2_x00125740(s32_x00125740 channel, s32_x00125740 (*handler)(s32_x00125740, void *), s32_x00125740 arg, u32_x00125740 *arg3) __asm__("AddDmacHandler2");
extern s32_x00125740 RhBase_SetVSyncCallback_x00125740(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x00125740 SzMsg_DrawRatioX_Pipe_x00125740(s32_x00125740 packet, s32_x00125740 slot, s64_x00125740 x, s64_x00125740 y, f32_x00125740 scaleX, f32_x00125740 scaleY, s32_x00125740 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
extern s32_x00125740 func_00190A90_x00125740(void (*arg0)(void)) __asm__("func_00190A90");
extern void func_00199BC0_x00125740(s32_x00125740 arg0, u32_x00125740 n, u32_x00125740 es, void (*arg3)(void)) __asm__("func_00199BC0");
void func_00199BC0_x00125740(s32_x00125740 arg0, u32_x00125740 n, u32_x00125740 es, void (*arg3)(void)) __asm__("func_00199BC0");
void *memcpy_x00125740(void *dst, const void *src, s32_x00125740 n) __asm__("memcpy");
/* memcpy_x00125740: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *memcpy_x00125740(void *dst, const void *src, s32_x00125740 n) {
    register s32_x00125740 r8 __asm__("$8");
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	daddu	$8,$4,$0\n"
        "	sltiu	$2,$6,0x20\n"
        "	bnez	$2,_func_00198790_0019880C\n"
        "	daddu	$3,$8,$0\n"
        "	or	$2,$5,$8\n"
        "	andi	$2,$2,0xF\n"
        "	bnel	$2,$0,_func_00198790_00198810\n"
        "	addiu	$6,$6,-0x1\n"
        "	daddu	$7,$8,$0\n"
        "_func_00198790_001987B4:\n"
        "	lq	$3,0x0($5)\n"
        "	addiu	$6,$6,-0x20\n"
        "	addiu	$5,$5,0x10\n"
        "	sltiu	$4,$6,0x20\n"
        "	sq	$3,0x0($7)\n"
        "	addiu	$7,$7,0x10\n"
        "	lq	$2,0x0($5)\n"
        "	addiu	$5,$5,0x10\n"
        "	sq	$2,0x0($7)\n"
        "	beqz	$4,_func_00198790_001987B4\n"
        "	addiu	$7,$7,0x10\n"
        "	sltiu	$2,$6,0x8\n"
        "	bnez	$2,_func_00198790_0019880C\n"
        "	daddu	$3,$7,$0\n"
        "_func_00198790_001987EC:\n"
        "	ld	$3,0x0($5)\n"
        "	addiu	$6,$6,-0x8\n"
        "	addiu	$5,$5,0x8\n"
        "	sltiu	$2,$6,0x8\n"
        "	sd	$3,0x0($7)\n"
        "	beqz	$2,_func_00198790_001987EC\n"
        "	addiu	$7,$7,0x8\n"
        "	daddu	$3,$7,$0\n"
        "_func_00198790_0019880C:\n"
        "	addiu	$6,$6,-0x1\n"
        "_func_00198790_00198810:\n"
        "	addiu	$2,$0,-0x1\n"
        "	beq	$6,$2,_func_00198790_00198838\n"
        "	daddu	$4,$2,$0\n"
        "_func_00198790_0019881C:\n"
        "	lbu	$2,0x0($5)\n"
        "	addiu	$6,$6,-0x1\n"
        "	addiu	$5,$5,0x1\n"
        "	sb	$2,0x0($3)\n"
        "	addiu	$3,$3,0x1\n"
        "	bne	$6,$4,_func_00198790_0019881C\n"
        "	nop\n"
        "_func_00198790_00198838:\n"
        "	.set	reorder\n"
        : "=r"(r8));
    return (void *)r8;
}
typedef signed int s32_x001257F0;
s32_x001257F0 memmove_x001257F0(s32_x001257F0 dst, s32_x001257F0 src) __asm__("memmove");
/* memmove_x001257F0: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x001257F0 memmove_x001257F0(s32_x001257F0 dst, s32_x001257F0 src) {
    register s32_x001257F0 r8 __asm__("$8");
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	daddu	$8,$4,$0\n"
        "	sltu	$2,$5,$8\n"
        "	beqz	$2,_func_00198840_00198898\n"
        "	daddu	$3,$8,$0\n"
        "	addu	$7,$5,$6\n"
        "	sltu	$2,$8,$7\n"
        "	beqz	$2,_func_00198840_00198898\n"
        "	addiu	$2,$0,-0x1\n"
        "	addu	$3,$8,$6\n"
        "	addiu	$6,$6,-0x1\n"
        "	beq	$6,$2,_func_00198840_0019893C\n"
        "	daddu	$5,$7,$0\n"
        "	daddu	$4,$2,$0\n"
        "_func_00198840_00198874:\n"
        "	addiu	$5,$5,-0x1\n"
        "	addiu	$3,$3,-0x1\n"
        "	lbu	$2,0x0($5)\n"
        "	addiu	$6,$6,-0x1\n"
        "	sb	$2,0x0($3)\n"
        "	bne	$6,$4,_func_00198840_00198874\n"
        "	nop\n"
        "	jr	$31\n"
        "	daddu	$2,$8,$0\n"
        "_func_00198840_00198898:\n"
        "	sltiu	$2,$6,0x20\n"
        "	bnel	$2,$0,_func_00198840_00198914\n"
        "	addiu	$6,$6,-0x1\n"
        "	or	$2,$5,$3\n"
        "	andi	$2,$2,0xF\n"
        "	bnel	$2,$0,_func_00198840_00198914\n"
        "	addiu	$6,$6,-0x1\n"
        "	daddu	$7,$3,$0\n"
        "_func_00198840_001988B8:\n"
        "	lq	$3,0x0($5)\n"
        "	addiu	$6,$6,-0x20\n"
        "	addiu	$5,$5,0x10\n"
        "	sltiu	$4,$6,0x20\n"
        "	sq	$3,0x0($7)\n"
        "	addiu	$7,$7,0x10\n"
        "	lq	$2,0x0($5)\n"
        "	addiu	$5,$5,0x10\n"
        "	sq	$2,0x0($7)\n"
        "	beqz	$4,_func_00198840_001988B8\n"
        "	addiu	$7,$7,0x10\n"
        "	sltiu	$2,$6,0x8\n"
        "	bnez	$2,_func_00198840_00198910\n"
        "	daddu	$3,$7,$0\n"
        "_func_00198840_001988F0:\n"
        "	ld	$3,0x0($5)\n"
        "	addiu	$6,$6,-0x8\n"
        "	addiu	$5,$5,0x8\n"
        "	sltiu	$2,$6,0x8\n"
        "	sd	$3,0x0($7)\n"
        "	beqz	$2,_func_00198840_001988F0\n"
        "	addiu	$7,$7,0x8\n"
        "	daddu	$3,$7,$0\n"
        "_func_00198840_00198910:\n"
        "	addiu	$6,$6,-0x1\n"
        "_func_00198840_00198914:\n"
        "	addiu	$2,$0,-0x1\n"
        "	beq	$6,$2,_func_00198840_0019893C\n"
        "	daddu	$4,$2,$0\n"
        "_func_00198840_00198920:\n"
        "	lbu	$2,0x0($5)\n"
        "	addiu	$6,$6,-0x1\n"
        "	addiu	$5,$5,0x1\n"
        "	sb	$2,0x0($3)\n"
        "	addiu	$3,$3,0x1\n"
        "	bne	$6,$4,_func_00198840_00198920\n"
        "	nop\n"
        "_func_00198840_0019893C:\n"
        "	.set	reorder\n"
        : "=r"(r8));
    return r8;
}
typedef signed int s32_x001258F8;
typedef unsigned int u32_x001258F8;
typedef signed long long s64_x001258F8;
typedef float f32_x001258F8;
extern s32_x001258F8 AddDmacHandler2_x001258F8(s32_x001258F8 channel, s32_x001258F8 (*handler)(s32_x001258F8, void *), s32_x001258F8 arg, u32_x001258F8 *arg3) __asm__("AddDmacHandler2");
extern s32_x001258F8 RhBase_SetVSyncCallback_x001258F8(void (*callback)(void)) __asm__("RhBase_SetVSyncCallback");
extern s32_x001258F8 SzMsg_DrawRatioX_Pipe_x001258F8(s32_x001258F8 packet, s32_x001258F8 slot, s64_x001258F8 x, s64_x001258F8 y, f32_x001258F8 scaleX, f32_x001258F8 scaleY, s32_x001258F8 color, void (*draw)(void)) __asm__("SzMsg_DrawRatioX_Pipe");
extern s32_x001258F8 func_00190A90_x001258F8(void (*arg0)(void)) __asm__("func_00190A90");
extern void func_00199BC0_x001258F8(s32_x001258F8 arg0, u32_x001258F8 n, u32_x001258F8 es, void (*arg3)(void)) __asm__("func_00199BC0");
void func_00199BC0_x001258F8(s32_x001258F8 arg0, u32_x001258F8 n, u32_x001258F8 es, void (*arg3)(void)) __asm__("func_00199BC0");
void *memset_x001258F8(void *dst, s32_x001258F8 c, u32_x001258F8 n) __asm__("memset");
/* memset_x001258F8: from https://github.com/kira-502/dotr-decomp (src/sdk/newlib_2.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *memset_x001258F8(void *dst, s32_x001258F8 c, u32_x001258F8 n) {
    register s32_x001258F8 r4 __asm__("$4");
    __asm__ __volatile__(
        "	.set	noreorder\n"
        "	sltiu	$2,$6,0x8\n"
        "	bnez	$2,_func_00198948_001989C8\n"
        "	daddu	$3,$4,$0\n"
        "	andi	$2,$4,0xF\n"
        "	bnez	$2,_func_00198948_001989C8\n"
        "	daddu	$7,$4,$0\n"
        "	andi	$9,$5,0xFF\n"
        "	sltiu	$10,$6,0x20\n"
        "	daddu	$8,$9,$0\n"
        "	dsll	$3,$8,8\n"
        "	or	$8,$3,$9\n"
        "	pcpyh	$3,$8\n"
        "	bnez	$10,_func_00198948_001989B4\n"
        "	sltiu	$2,$6,0x8\n"
        "	pcpyld	$8,$3,$3\n"
        "_func_00198948_00198984:\n"
        "	sq	$8,0x0($7)\n"
        "	addiu	$6,$6,-0x20\n"
        "	addiu	$7,$7,0x10\n"
        "	sltiu	$2,$6,0x20\n"
        "	sq	$8,0x0($7)\n"
        "	beqz	$2,_func_00198948_00198984\n"
        "	addiu	$7,$7,0x10\n"
        "	b	_func_00198948_001989B4\n"
        "	sltiu	$2,$6,0x8\n"
        "_func_00198948_001989A8:\n"
        "	addiu	$6,$6,-0x8\n"
        "	addiu	$7,$7,0x8\n"
        "	sltiu	$2,$6,0x8\n"
        "_func_00198948_001989B4:\n"
        "	nop\n"
        "	nop\n"
        "	beql	$2,$0,_func_00198948_001989A8\n"
        "	sd	$3,0x0($7)\n"
        "	daddu	$3,$7,$0\n"
        "_func_00198948_001989C8:\n"
        "	lui	$2,(0xFFFFFFFF >> 16)\n"
        "	addiu	$6,$6,-0x1\n"
        "	ori	$2,$2,(0xFFFFFFFF & 0xFFFF)\n"
        "	beq	$6,$2,_func_00198948_00198A00\n"
        "	nop\n"
        "	lui	$2,(0xFFFFFFFF >> 16)\n"
        "	ori	$2,$2,(0xFFFFFFFF & 0xFFFF)\n"
        "_func_00198948_001989E4:\n"
        "	sb	$5,0x0($3)\n"
        "	addiu	$6,$6,-0x1\n"
        "	addiu	$3,$3,0x1\n"
        "	nop\n"
        "	nop\n"
        "	bne	$6,$2,_func_00198948_001989E4\n"
        "	nop\n"
        "_func_00198948_00198A00:\n"
        "	.set	reorder\n"
        : "=r"(r4));
    return (void *)r4;
}
void __malloc_lock(void) {
    s32 temp_v0;

    temp_v0 = GetThreadId();
    if (D_003F00B0 == temp_v0) {
        D_003F00B4 += 1;
        return;
    }
    WaitSema(D_003ECD50);
    D_003F00B0 = temp_v0;
    D_003F00B4 += 1;
}
extern int D_00040D60_x00125A38 __asm__("D_003F00B4");
extern int D_00040D5C_x00125A38 __asm__("D_003F00B0");
extern int B_000BF6CC_x00125A38 __asm__("D_003ECD50");
extern void SignalSema_x00125A38(int) __asm__("SignalSema");
void __malloc_unlock_x00125A38(void) __asm__("__malloc_unlock");
/* isysObjSignalSema: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/vscheduler.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void __malloc_unlock_x00125A38(void)
{
    int *p = &D_00040D60_x00125A38;
    if (--*p == 0) {
        D_00040D5C_x00125A38 = -1;
        SignalSema_x00125A38(B_000BF6CC_x00125A38);
    }
}
