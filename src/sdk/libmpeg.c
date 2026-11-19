#include "common.h"

void func_001020B0_x001020B0(void *pic, int DMV[][2], int *dmvector, int mvx, int mvy) __asm__("func_001020B0");
/* _dualPrimeVector: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00399d70.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001020B0_x001020B0(void *pic, int DMV[][2], int *dmvector, int mvx, int mvy) {
    if (*(int *)((char *)pic + 0x184) == 3) {
        if (*(int *)((char *)pic + 0x188)) {
            DMV[0][0] = ((mvx   + (mvx > 0)) >> 1) + dmvector[0];
            DMV[0][1] = ((mvy   + (mvy > 0)) >> 1) + dmvector[1] - 1;
            DMV[1][0] = ((3*mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[1][1] = ((3*mvy + (mvy > 0)) >> 1) + dmvector[1] + 1;
        } else {
            DMV[0][0] = ((3*mvx + (mvx > 0)) >> 1) + dmvector[0];
            DMV[0][1] = ((3*mvy + (mvy > 0)) >> 1) + dmvector[1] - 1;
            DMV[1][0] = ((mvx   + (mvx > 0)) >> 1) + dmvector[0];
            DMV[1][1] = ((mvy   + (mvy > 0)) >> 1) + dmvector[1] + 1;
        }
    } else {
        DMV[0][0] = ((mvx + (mvx > 0)) >> 1) + dmvector[0];
        DMV[0][1] = ((mvy + (mvy > 0)) >> 1) + dmvector[1];
        if (*(int *)((char *)pic + 0x184) == 1)
            DMV[0][1]--;
        else
            DMV[0][1]++;
    }
}
typedef struct { int base; } Pic2238_x00102238;
typedef struct { Pic2238_x00102238 *ref_image, *prev_image, *decode, *image; } Slot2238_x00102238;
typedef struct { int dest; int pred_count; char pad8[0x140 - 8]; } Spr2238_x00102238;
typedef struct { char pad0[0x130]; int second_field; char pad134[0x160 - 0x134]; int picture_coding_type; char pad164[0x184 - 0x164]; int picture_structure; char pad188[0x1C8 - 0x188]; Slot2238_x00102238 slots[3]; char pad1F8[0x6C8 - 0x1F8]; Spr2238_x00102238 spr[1]; char pad808[0x820 - 0x808]; int mb_buffer; } Dec2238_x00102238;
extern char D_0045CDF8_x00102238[] __asm__("D_0045CDF8");
extern char D_0045CE18_x00102238[] __asm__("D_0045CE18");
extern char D_0045CE38_x00102238[] __asm__("D_0045CE38");
void func_00109790_x00102238(Dec2238_x00102238 *, char *, int) __asm__("func_00109790");
void func_001020B0_x00102238(Dec2238_x00102238 *, int DMV[][2], int *, int, int) __asm__("func_001020B0");
void func_00102B90_x00102238(Dec2238_x00102238 *, Pic2238_x00102238 *, int, int, int, int, int, int, int, int, int, int) __asm__("func_00102B90");
void func_00102238_x00102238(Dec2238_x00102238 *dec, int x, int y, int macroblock_type, int motion_type, int PMV[2][2][2], int mv_field_sel[2][2], int dmvector[2]) __asm__("func_00102238");
void func_00102238_x00102238(Dec2238_x00102238 *dec, int x, int y, int macroblock_type, int motion_type, int PMV[2][2][2], int mv_field_sel[2][2], int dmvector[2])
{
    int bottom;
    int dstParity = 1;
    int average = 0;
    int DMV[2][2];
    Pic2238_x00102238 *refs[2][2];

    dec->spr[dec->mb_buffer].pred_count = 0;
    if ((macroblock_type & 8) || dec->picture_coding_type == 2) {
        if (dec->picture_structure == 3) {
            if (motion_type == 2 || !(macroblock_type & 8)) {
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, 0, 0, 0, 16, x, y, PMV[0][0][0], PMV[0][0][1], 0, 0);
            } else if (motion_type == 1) {
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, mv_field_sel[0][0], 0, 0, 8, x, y, PMV[0][0][0],
             PMV[0][0][1] >> 1, 1, 0);
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, mv_field_sel[1][0], 1, 0, 8, x, y, PMV[1][0][0],
             PMV[1][0][1] >> 1, 1, 0);
            } else if (motion_type == 3) {
                func_001020B0_x00102238(dec, DMV, dmvector, PMV[0][0][0], PMV[0][0][1] >> 1);
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, 0, 0, 0, 8, x, y, PMV[0][0][0], PMV[0][0][1] >> 1, 1, 0);
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, 1, 0, 0, 8, x, y, DMV[0][0], DMV[0][1], 1, 1);
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, 1, 1, 0, 8, x, y, PMV[0][0][0], PMV[0][0][1] >> 1, 1, 0);
                func_00102B90_x00102238(dec, dec->slots[0].ref_image, 0, 1, 0, 8, x, y, DMV[1][0], DMV[1][1], 1, 1);
            } else {
                func_00109790_x00102238(dec, D_0045CDF8_x00102238, motion_type);
            }
        } else {
            refs[0][0] = dec->slots[1].ref_image;
            refs[0][1] = dec->slots[2].ref_image;
            refs[1][0] = dec->slots[1].prev_image;
            refs[1][1] = dec->slots[2].prev_image;
            bottom = dec->picture_structure == 2;
            if (dec->picture_coding_type == 2 && dec->second_field && bottom != mv_field_sel[0][0]) {
                dstParity = 1;
            } else {
                dstParity = 0;
            }
            if (motion_type == 1 || !(macroblock_type & 8)) {
                func_00102B90_x00102238(dec, refs[dstParity][mv_field_sel[0][0]], 0, 0, 0, 16, x, y, PMV[0][0][0], PMV[0][0][1], 0,
             0);
            } else if (motion_type == 2) {
                func_00102B90_x00102238(dec, refs[dstParity][mv_field_sel[0][0]], 0, 0, 0, 8, x, y, PMV[0][0][0], PMV[0][0][1], 0,
             0);
                if (dec->picture_coding_type == 2 && dec->second_field && bottom != mv_field_sel[1][0]) {
                    dstParity = 1;
                } else {
                    dstParity = 0;
                }
                func_00102B90_x00102238(dec, refs[dstParity][mv_field_sel[1][0]], 0, 0, 8, 8, x, y, PMV[1][0][0], PMV[1][0][1], 0,
             0);
            } else if (motion_type == 3) {
                if (dec->second_field) {
                    dstParity = 1;
                } else {
                    dstParity = 0;
                }
                func_001020B0_x00102238(dec, DMV, dmvector, PMV[0][0][0], PMV[0][0][1]);
                func_00102B90_x00102238(dec, refs[0][bottom], 0, 0, 0, 16, x, y, PMV[0][0][0], PMV[0][0][1], 0, 0);
                func_00102B90_x00102238(dec, refs[dstParity][!bottom], 0, 0, 0, 16, x, y, DMV[0][0], DMV[0][1], 0, 1);
            } else {
                func_00109790_x00102238(dec, D_0045CE18_x00102238, motion_type);
            }
        }
        average = 1;
    }
    if (macroblock_type & 4) {
        if (dec->picture_structure == 3) {
            dstParity = 1;
            if (motion_type == 2) {
                func_00102B90_x00102238(dec, dec->slots[0].prev_image, 0, 0, 0, 16, x, y, PMV[0][1][0], PMV[0][1][1], 0, average);
            } else {
                func_00102B90_x00102238(dec, dec->slots[0].prev_image, mv_field_sel[0][1], 0, 0, 8, x, y, PMV[0][1][0],
             PMV[0][1][1] >> 1, dstParity, average);
                func_00102B90_x00102238(dec, dec->slots[0].prev_image, mv_field_sel[1][1], 1, 0, 8, x, y, PMV[1][1][0],
             PMV[1][1][1] >> 1, dstParity, average);
            }
        } else if (motion_type == 1) {
            func_00102B90_x00102238(dec, mv_field_sel[0][1] ? dec->slots[2].prev_image : dec->slots[1].prev_image, 0, 0, 0, 16, x, y,
                     PMV[0][1][0], PMV[0][1][1], 0, average);
        } else if (motion_type == 2) {
            func_00102B90_x00102238(dec, mv_field_sel[0][1] ? dec->slots[2].prev_image : dec->slots[1].prev_image, 0, 0, 0, 8, x, y,
                     PMV[0][1][0], PMV[0][1][1], 0, average);
            func_00102B90_x00102238(dec, mv_field_sel[1][1] ? dec->slots[2].prev_image : dec->slots[1].prev_image, 0, 0, 8, 8, x, y,
                     PMV[1][1][0], PMV[1][1][1], 0, average);
        } else {
            func_00109790_x00102238(dec, D_0045CE38_x00102238, motion_type);
        }
    }
}
typedef struct { int base; int pad[3]; int mb_height; } Pic2940_x00102940;
typedef struct { Pic2940_x00102940 *ref, *prev, *decode, *image; } Slot2940_x00102940;
typedef struct { int dest; int pad; int intra, skipped, predicted; char pad14[0x140 - 0x14]; } Spr2940_x00102940;
typedef struct { char pad0[0x12C]; int error; char pad130[0x13C - 0x130]; int mb_width; char pad140[0x184 - 0x140]; int ps; char pad188[0x1C8 - 0x188]; Slot2940_x00102940 slots[3]; char pad1F8[0x6C8 - 0x1F8]; Spr2940_x00102940 spr[1]; char pad808[0x820 - 0x808]; int mb_buffer; } Dec2940_x00102940;
extern char D_0045CE58_x00102940[] __asm__("D_0045CE58");
void func_00109790_x00102940(Dec2940_x00102940 *, char *, int) __asm__("func_00109790");
void func_00102238_x00102940(Dec2940_x00102940 *, int, int, int, int, int *, int *, int *) __asm__("func_00102238");
void func_00104BE8_x00102940(Dec2940_x00102940 *) __asm__("func_00104BE8");
int func_00102940_x00102940(Dec2940_x00102940 *dec, int MBA, int MBAinc, int macroblock_type, int motion_type,
                  int *PMV, int *mv_field_sel, int *dmvector) __asm__("func_00102940");
int func_00102940_x00102940(Dec2940_x00102940 *dec, int MBA, int MBAinc, int macroblock_type, int motion_type,
                  int *PMV, int *mv_field_sel, int *dmvector)
{
    int intra = macroblock_type & 1;
    int bx = MBA % dec->mb_width;
    int by = MBA / dec->mb_width;
    int x = bx * 16;
    int y = by * 16;
    Pic2940_x00102940 *picture;

    if (intra) {
        while ((*(volatile unsigned int *)0x1000D400 >> 8) & 1)
            ;
        dec->spr[dec->mb_buffer].predicted = 0;
    } else {
        if ((unsigned int)(motion_type - 1) >= 3) {
            func_00109790_x00102940(dec, D_0045CE58_x00102940, motion_type);
            dec->error = 1;
            return 0;
        }
        func_00102238_x00102940(dec, x, y, macroblock_type, motion_type, PMV, mv_field_sel, dmvector);
        while ((*(volatile unsigned int *)0x1000D400 >> 8) & 1)
            ;
        func_00104BE8_x00102940(dec);
        dec->spr[dec->mb_buffer].predicted = 1;
    }
    if (MBAinc == 1 && (macroblock_type & 2)) {
        dec->spr[dec->mb_buffer].skipped = MBAinc;
    } else {
        dec->spr[dec->mb_buffer].skipped = 0;
    }
    dec->spr[dec->mb_buffer].intra = intra;
    if (dec->ps == 3) {
        dec->spr[dec->mb_buffer].dest =
            dec->slots[0].decode->base + (bx * dec->slots[0].decode->mb_height + by) * 384;
    } else {
        picture = dec->ps == 2 ? dec->slots[2].decode : dec->slots[1].decode;
        dec->spr[dec->mb_buffer].dest = picture->base + (bx * picture->mb_height + by) * 384;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00102B90);
int _sceMpegError_x00103018(int m, int msg) __asm__("func_00109738");
typedef struct MpegMcSet_x00103018 {
    int unk00;
    void *residual;                      
    char unk08[0x20];
    void (*predA[4])(void *arg);         
    void (*predB[4])(void *arg);         
    char argA[4][0x1C];                  
    char argB[4][0x1C];                  
    void *dst;                           
    int num;                             
    int intra;                           
    int unk134;
    int predict;                         
    int skipped;                         
} MpegMcSet_x00103018;
typedef struct MpegMcState_x00103018 {
    char unk000[0x5A0];
    MpegMcSet_x00103018 mc[2];                     
    char unk820[0x10];
    void *pred;                          
} MpegMcState_x00103018;
extern char D_0045E6C8_x00103018[] __asm__("D_0045CE80");
void func_0039EEA8_x00103018(void *dst, void *src) __asm__("func_00104B28");
void func_0039EDB8_x00103018(void *dst, void *pred, void *residual) __asm__("func_00104A38");
void func_00103018_x00103018(MpegMcState_x00103018 *s, int f) __asm__("func_00103018");
/* _doMC: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039d398.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00103018_x00103018(MpegMcState_x00103018 *s, int f)
{
    int i;

    if (s->mc[f].predict) {
        for (i = 0; i < s->mc[f].num; i++) {
            s->mc[f].predA[i](s->mc[f].argA[i]);
            s->mc[f].predB[i](s->mc[f].argB[i]);
        }
    }
    if (s->mc[f].intra && s->mc[f].skipped) {
        _sceMpegError_x00103018((int)s, (int)D_0045E6C8_x00103018);
    }
    if (s->mc[f].intra) {
        func_0039EEA8_x00103018(s->mc[f].dst, s->mc[f].residual);
    } else if (s->mc[f].skipped) {
        func_0039EEA8_x00103018(s->mc[f].dst, s->pred);
    } else {
        func_0039EDB8_x00103018(s->mc[f].dst, s->pred, s->mc[f].residual);
    }
}
extern char D_0045E6E0_x00103238[] __asm__("D_0045CE98");
extern void _waitIpuIdle_x00103238(void *s) __asm__("func_00104938");
extern void func_0039AB98_x00103238(int h) __asm__("func_00107E58");
extern void _sceMpegStopIpuDma_x00103238(void) __asm__("func_001095D0");
extern void _sceMpegErrorBdec_x00103238(void *s) __asm__("func_00109670");
extern void _doMC_x00103238(void *s, int f) __asm__("func_00103018");
extern void _sceMpegError_x00103238(void *s, char *msg) __asm__("func_00109738");
int _slice0_x00103238() __asm__("func_00103478");
int func_00103238_x00103238(char *s) __asm__("func_00103238");
/* func_0039D5B8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039d5b8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00103238_x00103238(char *s)
{
    long long top;
    unsigned int bp;
    unsigned int k;
    int n;
    int r;
    int ok;
    int res;
    unsigned int v;

    *(int *)(s + 0x820) = 0;
    *(int *)(s + 0x824) = 0;
    n = *(int *)(s + 0x13C) * *(int *)(s + 0x140);
    if (*(int *)(s + 0x184) != 3)
        n = n >> 1;
    do {
        r = _slice0_x00103238(s, n);
    } while (r == 1 || r == 3);
    ok = 1;
    _waitIpuIdle_x00103238(s);
    _waitIpuIdle_x00103238(s);
    if ((*(volatile unsigned int *)0x1000B020) != 0 && ((*(volatile unsigned int *)0x10002010) & 0x4000) == 0) {
        do {
            if ((*(volatile unsigned int *)0x1000B420) == 0 && ((*(volatile unsigned int *)0x1000B400) & 0x100) == 0)
                func_0039AB98_x00103238(*(int *)(s + 0x868));
            if (*(int *)(s + 0x878) != 0) {
                _sceMpegStopIpuDma_x00103238();
                res = 0;
                goto skip;
            }
        } while ((*(volatile unsigned int *)0x1000B020) != 0 && ((*(volatile unsigned int *)0x10002010) & 0x4000) == 0);
    }
    bp = (*(volatile unsigned int *)0x10002020);
    top = (*(volatile long long *)0x10002030);
    *(int *)(s + 0x848) = (int)top;
    if (top < 0) {
        k = bp & 0x1F;
        if (k != 0)
            v = 0x20 - k;
        else
            v = 0;
    } else {
        v = 0x20;
    }
    *(int *)(s + 0x84C) = v;
    if (((*(volatile unsigned int *)0x10002010) & 0x4000) != 0) {
        _sceMpegErrorBdec_x00103238(s);
        ok = 0;
    }
    res = ok;
skip:
    if (res == 0) {
        if (*(int *)(s + 0x878) != 0)
            return 4;
        r = 2;
    }
    while ((((*(volatile unsigned int *)0x1000D400) >> 8) & 1) != 0)
        ;
    if (r == 0)
        _doMC_x00103238(s, *(int *)(s + 0x820) == 0);
    if ((unsigned int)(r - 1) < 2)
        _sceMpegError_x00103238(s, D_0045E6E0_x00103238);
    return (unsigned int)r < 1;
}
__asm__("# noswap func_00103238");
typedef struct Blk_x00103478 {
    int f00, f04, f08, f0C, f10, f14, f18, f1C;
} Blk_x00103478;
extern char D_0045E700_x00103478[] __asm__("D_0045CEB8");
extern void _waitIpuIdle_x00103478(void *s) __asm__("func_00104938");
extern void func_0039AB98_x00103478(int h) __asm__("func_00107E58");
extern void _sceMpegStopIpuDma_x00103478(void) __asm__("func_001095D0");
extern void _sceMpegErrorBdec_x00103478(void *s) __asm__("func_00109670");
extern void _doMC_x00103478(void *s, int f) __asm__("func_00103018");
extern void _sceMpegError_x00103478(void *s, char *msg) __asm__("func_00109738");
int _decMB0_x00103478() __asm__("func_00103D70");
int func_0039CCC0_x00103478() __asm__("func_00102940");
int func_0039E648_x00103478() __asm__("func_001042C8");
int func_0039EB90_x00103478() __asm__("func_00104810");
int func_0039ECF8_x00103478() __asm__("func_00104978");
int func_0039FE78_x00103478() __asm__("func_00105AF8");
int func_00103478_x00103478(char *s, int nmb) __asm__("func_00103478");
/* _slice0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039d7f8.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00103478_x00103478(char *s, int nmb)
{
    Blk_x00103478 b;
    int p1[4];
    int p2[4];
    int mba;
    int ninc;
    int v48;
    int v4C;
    int v50;
    long long top;
    unsigned int bp;
    unsigned int k;
    unsigned int v;
    int r;
    int ok;
    int res;
    int rc;

    mba = 0;
    ninc = 0;
    r = func_0039FE78_x00103478(s, nmb, &mba, &ninc, &b);
    if (r != 0)
        return r;
    *(int *)(s + 0x12C) = 0;
    for (;;) {
        if (mba >= nmb)
            return 0;
        ok = 1;
        *(int *)(s + *(int *)(s + 0x820) * 0x140 + 0x6DC) = 0;
        _waitIpuIdle_x00103478(s);
        while ((*(volatile unsigned int *)0x1000B020) != 0 && ((*(volatile unsigned int *)0x10002010) & 0x4000) == 0) {

                if ((*(volatile unsigned int *)0x1000B420) == 0 && ((*(volatile unsigned int *)0x1000B400) & 0x100) == 0)
                    func_0039AB98_x00103478(*(int *)(s + 0x868));
                if (*(int *)(s + 0x878) != 0) {
                    _sceMpegStopIpuDma_x00103478();
                    res = 0;
                    goto skip;
                }

        }
        bp = (*(volatile unsigned int *)0x10002020);
        top = (*(volatile long long *)0x10002030);
        *(int *)(s + 0x848) = (int)top;
        if (top < 0) {
            k = bp & 0x1F;
            if (k != 0)
                v = 0x20 - k;
            else
                v = 0;
        } else {
            v = 0x20;
        }
        *(int *)(s + 0x84C) = v;
        if (((*(volatile unsigned int *)0x10002010) & 0x4000) != 0) {
            _sceMpegErrorBdec_x00103478(s);
            ok = 0;
        }
        res = ok;
    skip:
        if (res == 0) {
            if (*(int *)(s + 0x878) == 0)
                rc = 2;
            else
                rc = 4;
            return rc;
        }
        if (ninc == 0) {
            if (func_0039EB90_x00103478(s, 0x17) == 0 || *(int *)(s + 0x12C) != 0) {
                *(int *)(s + 0x12C) = 0;
                return 3;
            }
            ninc = func_0039E648_x00103478(s);
            if (*(int *)(s + 0x12C) != 0) {
                *(int *)(s + 0x12C) = 0;
                return 1;
            }
        }
        if (mba >= nmb) {
            _sceMpegError_x00103478(s, D_0045E700_x00103478);
            return 2;
        }
        if (ninc == 1) {
            if (_decMB0_x00103478(s, &v48, &v4C, &v50, &b, p1, p2) == 0) {
                *(int *)(s + 0x12C) = 0;
                return 1;
            }
        } else {
            if (func_0039ECF8_x00103478(s, &b, &v4C, p1, &v48) == 0) {
                *(int *)(s + 0x12C) = 0;
                return 2;
            }
        }
        if (func_0039CCC0_x00103478(s, mba, ninc, v48, v4C, &b, p1, p2) == 0) {
            *(int *)(s + 0x12C) = 0;
            return 2;
        }
        if (mba != 0)
            _doMC_x00103478(s, *(int *)(s + 0x820) ^ 1);
        mba = mba + 1;
        *(int *)(s + 0x820) = *(int *)(s + 0x820) ^ 1;
        ninc = ninc - 1;
    }
}
__asm__("# noswap func_00103478");
extern void _waitIpuIdle_x001037A8(void *s) __asm__("func_00104938");
extern long long _sceMpegWaitIpuIdle64_x001037A8(void *s) __asm__("func_001045A8");
int func_0039EAA8_x001037A8() __asm__("func_00104728");
void func_001037A8_x001037A8(char *s, int *PMV, int *dmvector, int h_r_size, int v_r_size,
                   int dmv, int mvscale, int full_pel_vector) __asm__("func_001037A8");
/* _motionVector: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039db28.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001037A8_x001037A8(char *s, int *PMV, int *dmvector, int h_r_size, int v_r_size,
                   int dmv, int mvscale, int full_pel_vector)
{
    int motion_code;
    int motion_residual;

     {                                                                           long long v_;                                                           long long top_;                                                         unsigned int bp_;                                                       _waitIpuIdle_x001037A8(s);                                                        *(volatile unsigned int *)0x10002000 = (0x38000000);                           *(int *)(s + 0x828) = 0;                                                *(int *)(s + 0x82C) = 0x30000000;                                       v_ = _sceMpegWaitIpuIdle64_x001037A8(s);                                          bp_ = *(volatile unsigned int *)0x10002020;                             top_ = *(volatile long long *)0x10002030;                               *(int *)(s + 0x848) = (int)top_;                                        if (top_ < 0)                                                               *(int *)(s + 0x84C) = (0 - (bp_ & 0x1F)) & 0x1F;                    else                                                                        *(int *)(s + 0x84C) = 0x20;                                         *(int *)(s + 0x12C) = ((int)v_ == 0);                                   ( motion_code) = (short)v_;                                                  }
    if (h_r_size != 0 && motion_code != 0)
        motion_residual = func_0039EAA8_x001037A8(s, h_r_size);
    else
        motion_residual = 0;
    {
        int *p;
        int lim;
        int vec;
        p = &PMV[0];
        lim = 16 << h_r_size;
        vec = full_pel_vector ? (*p >> 1) : *p;
        if (motion_code > 0) {
            vec += ((motion_code - 1) << h_r_size) + motion_residual + 1;
            if (vec >= lim)
                vec -= lim + lim;
        } else if (motion_code < 0) {
            vec -= ((-motion_code - 1) << h_r_size) + motion_residual + 1;
            if (vec < -lim)
                vec += lim + lim;
        }
        *p = full_pel_vector ? (vec << 1) : vec;
    }
    if (dmv)
         {                                                                           long long v_;                                                           long long top_;                                                         unsigned int bp_;                                                       _waitIpuIdle_x001037A8(s);                                                        *(volatile unsigned int *)0x10002000 = (0x3C000000);                           *(int *)(s + 0x828) = 0;                                                *(int *)(s + 0x82C) = 0x30000000;                                       v_ = _sceMpegWaitIpuIdle64_x001037A8(s);                                          bp_ = *(volatile unsigned int *)0x10002020;                             top_ = *(volatile long long *)0x10002030;                               *(int *)(s + 0x848) = (int)top_;                                        if (top_ < 0)                                                               *(int *)(s + 0x84C) = (0 - (bp_ & 0x1F)) & 0x1F;                    else                                                                        *(int *)(s + 0x84C) = 0x20;                                         *(int *)(s + 0x12C) = ((int)v_ == 0);                                   ( dmvector[0]) = (short)v_;                                                  }

     {                                                                           long long v_;                                                           long long top_;                                                         unsigned int bp_;                                                       _waitIpuIdle_x001037A8(s);                                                        *(volatile unsigned int *)0x10002000 = (0x38000000);                           *(int *)(s + 0x828) = 0;                                                *(int *)(s + 0x82C) = 0x30000000;                                       v_ = _sceMpegWaitIpuIdle64_x001037A8(s);                                          bp_ = *(volatile unsigned int *)0x10002020;                             top_ = *(volatile long long *)0x10002030;                               *(int *)(s + 0x848) = (int)top_;                                        if (top_ < 0)                                                               *(int *)(s + 0x84C) = (0 - (bp_ & 0x1F)) & 0x1F;                    else                                                                        *(int *)(s + 0x84C) = 0x20;                                         *(int *)(s + 0x12C) = ((int)v_ == 0);                                   ( motion_code) = (short)v_;                                                  }
    if (v_r_size != 0 && motion_code != 0)
        motion_residual = func_0039EAA8_x001037A8(s, v_r_size);
    else
        motion_residual = 0;
    if (mvscale)
        PMV[1] >>= 1;
    {
        int *p;
        int lim;
        int vec;
        p = &PMV[1];
        lim = 16 << v_r_size;
        vec = full_pel_vector ? (*p >> 1) : *p;
        if (motion_code > 0) {
            vec += ((motion_code - 1) << v_r_size) + motion_residual + 1;
            if (vec >= lim)
                vec -= lim + lim;
        } else if (motion_code < 0) {
            vec -= ((-motion_code - 1) << v_r_size) + motion_residual + 1;
            if (vec < -lim)
                vec += lim + lim;
        }
        *p = full_pel_vector ? (vec << 1) : vec;
    }
    if (mvscale)
        PMV[1] <<= 1;
    if (dmv)
         {                                                                           long long v_;                                                           long long top_;                                                         unsigned int bp_;                                                       _waitIpuIdle_x001037A8(s);                                                        *(volatile unsigned int *)0x10002000 = (0x3C000000);                           *(int *)(s + 0x828) = 0;                                                *(int *)(s + 0x82C) = 0x30000000;                                       v_ = _sceMpegWaitIpuIdle64_x001037A8(s);                                          bp_ = *(volatile unsigned int *)0x10002020;                             top_ = *(volatile long long *)0x10002030;                               *(int *)(s + 0x848) = (int)top_;                                        if (top_ < 0)                                                               *(int *)(s + 0x84C) = (0 - (bp_ & 0x1F)) & 0x1F;                    else                                                                        *(int *)(s + 0x84C) = 0x20;                                         *(int *)(s + 0x12C) = ((int)v_ == 0);                                   ( dmvector[1]) = (short)v_;                                                  }
}
__asm__("# noswap func_001037A8");
typedef struct sceIpuDmaEnv_x00103BD0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00103BD0;
typedef struct sceMpeg_x00103BD0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00103BD0 *sys;
} sceMpeg_x00103BD0;
typedef enum {
    sceMpegCbError_x00103BD0,
    sceMpegCbNodata_x00103BD0,
    sceMpegCbStopDMA_x00103BD0,
    sceMpegCbRestartDMA_x00103BD0,
    sceMpegCbBackground_x00103BD0,
    sceMpegCbTimeStamp_x00103BD0,
    sceMpegCbStr_x00103BD0,
    sceMpegCbNum_x00103BD0
} sceMpegCbType_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    char *errMessage;
} sceMpegCbDataError_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00103BD0;
typedef union {
    sceMpegCbType_x00103BD0 type;
    sceMpegCbDataError_x00103BD0 error;
    sceMpegCbDataTimeStamp_x00103BD0 ts;
    sceMpegCbDataStr_x00103BD0 str;
} sceMpegCbData_x00103BD0;
typedef int (*sceMpegCallback_x00103BD0)(sceMpeg_x00103BD0 *mp, sceMpegCbData_x00103BD0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00103BD0 func;
    void *data;
    void *gp;  
} _sceMpegCallbackSlot_x00103BD0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;  
} _sceMpegAlalc_x00103BD0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;                               
    long dts;
    int decoded;                            
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;                 
    int center_offsets[6];                  
    int disp_width;                         
    int disp_height;
} _sceMpegPicture_x00103BD0;
typedef struct {
    _sceMpegPicture_x00103BD0 *ref_image;
    _sceMpegPicture_x00103BD0 *prev_image;
    _sceMpegPicture_x00103BD0 *decode;
    _sceMpegPicture_x00103BD0 *image;
} _sceMpegPictureSlot_x00103BD0;
typedef struct {
    short *dst;                             
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00103BD0;
typedef void (*_sceMpegMcKernel_x00103BD0)(_sceMpegMcFetch_x00103BD0 *fetch);
typedef struct {
    unsigned int src;                       
    unsigned int dst;                       
    unsigned char *block[4];                
    unsigned char *block_right[4];          
    _sceMpegMcKernel_x00103BD0 luma_kernel[4];        
    _sceMpegMcKernel_x00103BD0 chroma_kernel[4];      
    _sceMpegMcFetch_x00103BD0 luma[4];                
    _sceMpegMcFetch_x00103BD0 chroma[4];              
    char *dest;                             
    int pred_count;                         
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00103BD0;
typedef struct _sceMpegDecoder_x00103BD0 {
    int is_end;                             
    int ref_count;                          
    int seq_state;
    _sceMpegCallbackSlot_x00103BD0 callbacks[sceMpegCbNum_x00103BD0];
    char *spare_buffer;                     
    int spare;
    sceIpuDmaEnv_x00103BD0 ipu_dma_env;               
    int has_pts_gap;                        
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;                       
    int half_field;
    int ni;                                 
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;                     
    int rgb32;                              
    int center_offsets[6];
    int disp_width;                         
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;                        
    int image_height;
    int image_size;                         
    int set_broken_link;                    
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];                 
    _sceMpegAlalc_x00103BD0 alalc;                    
    int frame_no;                           
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;                           
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;                      
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;                
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];                       
    int picture_structure;                  
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;                  
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;                         
    int broken_link;
    int temporal_order;
    int dc_reset;                           
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00103BD0 slots[3];           
    _sceMpegPicture_x00103BD0 pictures[9];            
    _sceMpegSprBuffer_x00103BD0 spr[2];               
    int mb_buffer;                          
    int mb_count;
    int ipu_cmd_pending;                    
    unsigned int mc_work;                   
    int stopped;                            
    int pad_2108;
    long pts;                               
    long dts;
    unsigned int bits;                      
    int bit_count;
    int load_intra_quantiser_matrix;        
    int load_non_intra_quantiser_matrix;
    int mpeg2;                              
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00103BD0 *mp;                            
    char pad_2164[12];
    unsigned long long ipu_tags[260];       
    int abort;                              
    char pad_4260[28];
} _sceMpegDecoder_x00103BD0;
unsigned int _ipuGetBits_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int n) __asm__("func_00104728");
void _motionVector_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int *PMV, int *dmvector, int h_r_size, int v_r_size, int dmv, int mvscale, int full_pel_vector) __asm__("func_001037A8");
void _motionVector_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int *PMV, int *dmvector, int h_r_size, int v_r_size, int dmv, int mvscale,
                   int full_pel_vector) __asm__("func_001037A8");
unsigned int _ipuGetBits_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int n) __asm__("func_00104728");
void func_00103BD0_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int PMV[2][2][2], int *dmvector, int mv_field_sel[2][2], int s,
                    int motion_vector_count, int mv_format, int h_r_size, int v_r_size, int dmv, int mvscale) __asm__("func_00103BD0");
/* _motionVectors: from https://github.com/crashbashash/DW4_Decomp (src/sony/libmpeg/mpc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00103BD0_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int PMV[2][2][2], int *dmvector, int mv_field_sel[2][2], int s,
                    int motion_vector_count, int mv_format, int h_r_size, int v_r_size, int dmv, int mvscale)
{
    if (motion_vector_count == 1) {
        if (mv_format == 0 && !dmv) {
            mv_field_sel[1][s] = mv_field_sel[0][s] = _ipuGetBits_x00103BD0(dec, 1);
        }
        _motionVector_x00103BD0(dec, PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        PMV[1][s][0] = PMV[0][s][0];
        PMV[1][s][1] = PMV[0][s][1];
    } else {
        mv_field_sel[0][s] = _ipuGetBits_x00103BD0(dec, 1);
        _motionVector_x00103BD0(dec, PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        mv_field_sel[1][s] = _ipuGetBits_x00103BD0(dec, 1);
        _motionVector_x00103BD0(dec, PMV[1][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
    }
}
extern char D_0045E750_x00103D70[] __asm__("D_0045CF08");
extern void _waitIpuIdle_x00103D70(void *s) __asm__("func_00104938");
extern long long _sceMpegWaitIpuIdle64_x00103D70(void *s) __asm__("func_001045A8");
extern void _sceMpegError_x00103D70(void *s, char *msg) __asm__("func_00109738");
extern void func_0039ECF0_x00103D70(void *s, int n) __asm__("func_00104970");
extern void func_0039FDD8_x00103D70(int a, int b) __asm__("func_00105A58");
extern void func_0039DF50_x00103D70(void *s, int *PMV, int *dmv, int *mvfs, int idx, int mvcount, int mvformat, int hr, int vr, int dmvf, int mvscale) __asm__("func_00103BD0");
extern void _motionVector_x00103D70(void *s, int *PMV, int *dmv, int hr, int vr, int dmvf, int mvscale, int fullpel) __asm__("func_001037A8");
int func_0039EAA8_x00103D70() __asm__("func_00104728");
int func_00103D70_x00103D70(char *s, int *mbtypep, int *motion_typep, int *dct_typep,
                  int *PMV, int *mvfs, int *dmvector) __asm__("func_00103D70");
/* _decMB0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039e0f0.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00103D70_x00103D70(char *s, int *mbtypep, int *motion_typep, int *dct_typep,
                  int *PMV, int *mvfs, int *dmvector)
{
    long long v;
    long long top;
    unsigned int bp;
    unsigned int cmd;
    unsigned int q;
    int mbtype;
    int mt;
    int ps;
    int mvcount;
    int two;
    int mvformat;
    int dmv;
    int mvscale;
    int dct_type;

    (*(volatile unsigned int *)0x10002010) = ((*(volatile unsigned int *)0x10002010) & 0xF8FFFFFF) | (*(int *)(s + 0x160) << 24);
    _waitIpuIdle_x00103D70(s);
    *(volatile unsigned int *)0x10002000 = 0x34000000;
    *(int *)(s + 0x828) = 0;
    *(int *)(s + 0x82C) = 0x30000000;
    v = _sceMpegWaitIpuIdle64_x00103D70(s);
    bp = *(volatile unsigned int *)0x10002020;
    top = *(volatile long long *)0x10002030;
    *(int *)(s + 0x848) = (int)top;
    if (top < 0)
        *(int *)(s + 0x84C) = (0 - (bp & 0x1F)) & 0x1F;
    else
        *(int *)(s + 0x84C) = 0x20;
    *(int *)(s + 0x12C) = ((int)v == 0);
    mbtype = (short)v;
    *mbtypep = mbtype;
    if (mbtype == 0) {
        _sceMpegError_x00103D70(s, D_0045E750_x00103D70);
        *(int *)(s + 0x12C) = 1;
        return 0;
    }
    if ((mbtype & 0xC) != 0) {
        if (*(int *)(s + 0x184) == 3 && *(int *)(s + 0x18C) != 0)
            *motion_typep = 2;
        else
            *motion_typep = func_0039EAA8_x00103D70(s, 2);
    } else if ((mbtype & 1) != 0) {
        if (*(int *)(s + 0x190) != 0)
            do { *motion_typep = (*(int *)(s + 0x184) == 3) ? 2 : 1; } while (0);
    }
    ps = *(int *)(s + 0x184);
    mt = *motion_typep;
    if (ps == 3) {
        mvcount = (mt == 1) ? 2 : 1;
        mvformat = (mt == 2);
    } else {
        two = 2;
        do { } while (0);
        mvcount = 1;
        do { } while (0);
        mvformat = 0;
        do { } while (0);
        if (mt == 2)
            mvcount = two;
    }
    dmv = (mt == 3);
    mvscale = (mvformat == 0 && ps == 3);
    if (ps == 3 && *(int *)(s + 0x18C) == 0 && (*mbtypep & 3) != 0)
        dct_type = func_0039EAA8_x00103D70(s, 1);
    else
        dct_type = 0;
    *dct_typep = dct_type;
    if ((*mbtypep & 0x10) != 0)
        *(int *)(s + 0x1C4) = func_0039EAA8_x00103D70(s, 5);
    if ((*mbtypep & 8) != 0
        || ((*mbtypep & 1) != 0 && *(int *)(s + 0x190) != 0)) {
        if (*(int *)(s + 0x858) != 0)
            func_0039DF50_x00103D70(s, PMV, dmvector, mvfs, 0, mvcount, mvformat,
                          *(int *)(s + 0x174) - 1, *(int *)(s + 0x178) - 1,
                          dmv, mvscale);
        else
            _motionVector_x00103D70(s, PMV, dmvector, *(int *)(s + 0x168) - 1,
                          *(int *)(s + 0x168) - 1, 0, 0, *(int *)(s + 0x164));
    }
    if (*(int *)(s + 0x12C) != 0)
        return 0;
    if ((*mbtypep & 4) != 0) {
        if (*(int *)(s + 0x858) != 0)
            func_0039DF50_x00103D70(s, PMV, dmvector, mvfs, 1, mvcount, mvformat,
                          *(int *)(s + 0x17C) - 1, *(int *)(s + 0x180) - 1,
                          0, mvscale);
        else
            _motionVector_x00103D70(s, PMV + 2, dmvector, *(int *)(s + 0x170) - 1,
                          *(int *)(s + 0x170) - 1, 0, 0, *(int *)(s + 0x16C));
    }
    if (*(int *)(s + 0x12C) != 0)
        return 0;
    if ((*mbtypep & 1) != 0 && *(int *)(s + 0x190) != 0)
        func_0039ECF0_x00103D70(s, 1);
    if ((*mbtypep & 3) != 0) {
        func_0039FDD8_x00103D70(*(int *)(s + *(int *)(s + 0x820) * 0x140 + 0x5A4), 0x300);
        _waitIpuIdle_x00103D70(s);
        q = (*(int *)(s + 0x1C4) << 16) | 0x20000000;
        cmd = (((*mbtypep & 1) << 27)
               | ((*dct_typep << 25) | (*(int *)(s + 0x1C0) << 26))) | q;
        *(volatile unsigned int *)0x10002000 = cmd;
        *(int *)(s + 0x82C) = cmd & 0xF0000000;
        if (*(int *)(s + 0x82C) == 0x20000000
            || *(int *)(s + 0x82C) == 0x30000000
            || *(int *)(s + 0x82C) == 0x40000000)
            *(int *)(s + 0x828) = 0;
        else
            *(int *)(s + 0x828) = 1;
    } else {
        *(int *)(s + *(int *)(s + 0x820) * 0x140 + 0x6DC) = 1;
    }
    *(int *)(s + 0x1C0) = 0;
    if (*(int *)(s + 0x12C) != 0)
        return 0;
    if ((*mbtypep & 1) == 0)
        *(int *)(s + 0x1C0) = 1;
    if ((*mbtypep & 1) != 0 && *(int *)(s + 0x190) == 0) {
        PMV[5] = 0;
        PMV[4] = 0;
        PMV[1] = 0;
        PMV[0] = 0;
        PMV[7] = 0;
        PMV[6] = 0;
        PMV[3] = 0;
        PMV[2] = 0;
    }
    if (*(int *)(s + 0x160) != 2)
        return 1;
    if ((*mbtypep & 9) != 0)
        return 1;
    PMV[5] = 0;
    PMV[4] = 0;
    PMV[1] = 0;
    PMV[0] = 0;
    if (*(int *)(s + 0x184) == 3) {
        *motion_typep = 2;
    } else {
        *motion_typep = 1;
        *mvfs = (*(int *)(s + 0x184) == 2);
    }
    return 1;
}
__asm__("# noswap func_00103D70");
extern char D_0045E770_x001042C8[] __asm__("D_0045CF28");
extern void _waitIpuIdle_x001042C8(void *s) __asm__("func_00104938");
extern long long _sceMpegWaitIpuIdle64_x001042C8(void *s) __asm__("func_001045A8");
extern unsigned int func_0039EB90_x001042C8(void *s, int n) __asm__("func_00104810");
extern void func_0039ECF0_x001042C8(void *s, int n) __asm__("func_00104970");
extern void func_0039C3E8_x001042C8(void *s, char *msg, int a) __asm__("func_00109790");
int func_001042C8_x001042C8(void *s) __asm__("func_001042C8");
/* func_0039E648: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039e648.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001042C8_x001042C8(void *s)
{
    long long v;
    long long top;
    unsigned int bp;
    unsigned int r;
    int code;
    int total;
    int again;
    unsigned int cmd;

    total = 0;
    do {
        _waitIpuIdle_x001042C8(s);
        cmd = 0x30000000;
        *(volatile unsigned int *)0x10002000 = cmd;
        *(int *)((char *)s + 0x82C) = cmd;
        *(int *)((char *)s + 0x828) = 0;
        v = _sceMpegWaitIpuIdle64_x001042C8(s);
        bp = *(volatile unsigned int *)0x10002020;
        top = *(volatile long long *)0x10002030;
        *(int *)((char *)s + 0x848) = (int)top;
        if (top < 0) {
            *(int *)((char *)s + 0x84C) = (0x20 - (bp & 0x1F)) & 0x1F;
        } else {
            *(int *)((char *)s + 0x84C) = 0x20;
        }
        *(int *)((char *)s + 0x12C) = ((int)v == 0);
        code = (short)v;
        switch ((unsigned int)code) {
        case 0x22:
            again = 1;
            break;
        case 0x23:
            again = 1;
            total += 0x21;
            break;
        case 0:
            r = func_0039EB90_x001042C8(s, 0xB);
            if (*(int *)((char *)s + 0x858) != 0 && r == 0xF) {
                func_0039ECF0_x001042C8(s, 0xB);
                again = 1;
                break;
            }
            func_0039C3E8_x001042C8(s, D_0045E770_x001042C8, code);
            *(int *)((char *)s + 0x12C) = 1;
            return 1;
        default:
            total += code;
            again = 0;
            break;
        }
    } while (again);
    return total;
}
__asm__("# rebind func_001042C8 0x001042C8");
typedef struct {
    char p0[0x82C]; unsigned int cmd;
    char p830[0x868 - 0x830]; void *mp;
    char p86C[0x878 - 0x86C]; int stop;
} D_x00104440;
int func_0024B6E8_x00104440(void *mp) __asm__("func_00107E58");
void func_0024F8D0_x00104440(void) __asm__("func_001095D0");
void func_00104440_x00104440(D_x00104440 *d) __asm__("func_00104440");
/* _sceMpegWaitIpuIdle: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegWaitIpuIdle.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00104440_x00104440(D_x00104440 *d)
{
    int cnt = 0;

    while (((*(volatile unsigned int *)(0x10002010)) & 0x80004000) == 0x80000000) {
        unsigned int bp = (*(volatile unsigned int *)(0x10002020));
        unsigned int cmd = d->cmd;
        unsigned int n = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((cmd == 0x20000000 || cmd == 0x30000000 || cmd == 0x40000000) && n < 0x20 && (*(volatile unsigned int *)(0x1000B420)) == 0) {
            func_0024B6E8_x00104440(d->mp);
            if (d->stop) { func_0024F8D0_x00104440(); break; }
            cnt = 0;
        }
        if (cnt++ > 5000) {
            func_0024B6E8_x00104440(d->mp);
            if (d->stop) { func_0024F8D0_x00104440(); break; }
            cnt = 0;
        }
    }
    d->cmd = 0;
}
typedef struct {
    char p0[0x82C]; unsigned int cmd;
    char p830[0x868 - 0x830]; void *mp;
    char p86C[0x878 - 0x86C]; int stop;
} D_x001045A8;
int func_0024B6E8_x001045A8(void *mp) __asm__("func_00107E58");
void func_0024F8D0_x001045A8(void) __asm__("func_001095D0");
long func_001045A8_x001045A8(D_x001045A8 *d) __asm__("func_001045A8");
/* _sceMpegWaitIpuIdle64: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegWaitIpuIdle64.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
long func_001045A8_x001045A8(D_x001045A8 *d)
{
    int cnt = 0;
    long r;

    while ((r = *(volatile long *)0x10002000) < 0 && !((*(volatile unsigned int *)(0x10002010)) & 0x4000)) {
        unsigned int bp = (*(volatile unsigned int *)(0x10002020));
        unsigned int cmd = d->cmd;
        unsigned int n = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((cmd == 0x20000000 || cmd == 0x30000000 || cmd == 0x40000000) && n < 0x20 && (*(volatile unsigned int *)(0x1000B420)) == 0) {
            func_0024B6E8_x001045A8(d->mp);
            if (d->stop) { func_0024F8D0_x001045A8(); break; }
            cnt = 0;
        }
        if (cnt++ > 500) {
            func_0024B6E8_x001045A8(d->mp);
            if (d->stop) { func_0024F8D0_x001045A8(); break; }
            cnt = 0;
        }
    }
    d->cmd = 0;
    return r;
}
typedef struct { char p0[0x828]; int x828; unsigned int x82C; char p1[0x848 - 0x830]; unsigned int x848; int x84C; } D_x00104728;
void _waitIpuIdle_x00104728(D_x00104728 *d) __asm__("func_00104938");
long _sceMpegWaitIpuIdle64_x00104728(D_x00104728 *d) __asm__("func_001045A8");
unsigned int func_00104728_x00104728(D_x00104728 *d, int n) __asm__("func_00104728");
/* _sceMpegNextBit: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegNextBit.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_00104728_x00104728(D_x00104728 *d, int n)
{
    unsigned int r, c, m;
    _waitIpuIdle_x00104728(d);
    if (d->x828 || d->x84C < n) {
        *(volatile unsigned int *)0x10002000 = 0x40000000;
        d->x828 = 0;
        d->x82C = 0x40000000;
        d->x848 = _sceMpegWaitIpuIdle64_x00104728(d);
    }
    r = d->x848 >> (32 - n);
    d->x84C = 32;
    c = n | 0x40000000;
    *(volatile unsigned int *)0x10002000 = c;
    m = c & 0xF0000000;
    d->x82C = m;
    if (m == 0x20000000 || m == 0x30000000 || m == 0x40000000)
        d->x828 = 0;
    else
        d->x828 = 1;
    d->x848 = _sceMpegWaitIpuIdle64_x00104728(d);
    return r;
}
typedef struct { char p0[0x828]; int x828; unsigned int x82C; char p1[0x848 - 0x830]; unsigned int x848; int x84C; } D_x00104810;
void _waitIpuIdle_x00104810(D_x00104810 *d) __asm__("func_00104938");
long _sceMpegWaitIpuIdle64_x00104810(D_x00104810 *d) __asm__("func_001045A8");
unsigned int func_00104810_x00104810(D_x00104810 *d, int n) __asm__("func_00104810");
/* _sceMpegPeepBit: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegPeepBit.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_00104810_x00104810(D_x00104810 *d, int n)
{
    if (d->x828 || d->x84C < n) {
        _waitIpuIdle_x00104810(d);
        *(volatile unsigned int *)0x10002000 = 0x40000000;
        d->x828 = 0;
        d->x82C = 0x40000000;
        d->x848 = _sceMpegWaitIpuIdle64_x00104810(d);
        d->x84C = 32;
    }
    return d->x848 >> (32 - n);
}
typedef struct { char p0[0x828]; int x828; unsigned int x82C; char p1[0x848 - 0x830]; int x848; int x84C; } D_x001048A0;
void _waitIpuIdle_x001048A0(D_x001048A0 *d) __asm__("func_00104938");
long _sceMpegWaitIpuIdle64_x001048A0(D_x001048A0 *d) __asm__("func_001045A8");
void func_001048A0_x001048A0(D_x001048A0 *d, unsigned int n) __asm__("func_001048A0");
/* _sceMpegFlushBuf: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegFlushBuf.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001048A0_x001048A0(D_x001048A0 *d, unsigned int n)
{
    _waitIpuIdle_x001048A0(d);
    n |= 0x40000000;
    *(volatile unsigned int *)0x10002000 = n;
    n &= 0xF0000000;
    d->x82C = n;
    if (n == 0x20000000 || n == 0x30000000 || n == 0x40000000)
        d->x828 = 0;
    else
        d->x828 = 1;
    d->x848 = _sceMpegWaitIpuIdle64_x001048A0(d);
    d->x84C = 32;
}
void func_00104440_x00104938(s32) __asm__("func_00104440");
void func_00104938_x00104938(s32 a0) __asm__("func_00104938");
void func_00104938_x00104938(s32 a0)
{
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        func_00104440_x00104938(a0);
    }
}
s32 func_001048A0_x00104970() __asm__("func_001048A0");
void func_00104970_x00104970(s32 arg0, s32 arg1) __asm__("func_00104970");
void func_00104970_x00104970(s32 arg0, s32 arg1) {
    func_001048A0_x00104970(arg0, arg1);
}
extern char D_0045E720_x00104978[] __asm__("D_0045CED8");
extern void _sceMpegError_x00104978(void *s, char *msg) __asm__("func_00109738");
int func_00104978_x00104978(void *s, int *b, int *p2, int *p3, int *p4) __asm__("func_00104978");
/* func_0039ECF8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039e648.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00104978_x00104978(void *s, int *b, int *p2, int *p3, int *p4)
{
    int ret;
    int flag;

    ret = 1;
    *(int *)((char *)s + *(int *)((char *)s + 0x820) * 0x140 + 0x6DC) = 1;
    *(int *)((char *)s + 0x1C0) = 1;
    if (*(int *)((char *)s + 0x160) == 2) {
        b[5] = 0;
        b[4] = 0;
        b[1] = 0;
        b[0] = 0;
    }
    if (*(int *)((char *)s + 0x184) == 3) {
        *p2 = 2;
    } else {
        *p2 = 1;
        flag = (*(int *)((char *)s + 0x184) == 2);
        p3[1] = flag;
        p3[0] = flag;
    }
    if (*(int *)((char *)s + 0x160) == 1) {
        _sceMpegError_x00104978(s, D_0045E720_x00104978);
        ret = 0;
    }
    *p4 = *p4 & -2;
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104A38);
