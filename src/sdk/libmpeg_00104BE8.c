#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00104BE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00104D68);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00104DE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00104E78);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00104F30);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105000);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_001050B0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105168);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105260);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105360);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105400);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_001054B0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105590);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105678);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105750);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105820);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105940);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105C98);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106898);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107180);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107348);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107500);
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
