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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105A58);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105AF8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105C98);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00105FB0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106448);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106588);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106690);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106A68);
s32 func_001048A0_x00106AA0() __asm__("func_001048A0");
void func_00106AA0_x00106AA0(s32 arg0, s32 arg1) __asm__("func_00106AA0");
void func_00106AA0_x00106AA0(s32 arg0, s32 arg1) {
    func_001048A0_x00106AA0(arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106AA8);
s32 func_00106AA0_x00106C00() __asm__("func_00106AA0");
void func_00106C00_x00106C00(s32 a0) __asm__("func_00106C00");
void func_00106C00_x00106C00(s32 a0) {
    func_00106AA0_x00106C00(a0, 32);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106C08);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106D80);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00106E78);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107280);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107348);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107500);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_001077B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_00104BE8", func_00107928);
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
