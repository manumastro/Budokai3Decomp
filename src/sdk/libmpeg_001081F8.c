#include "common.h"

s32 func_001099A8(s32);                         /* extern */

s32 func_001098C0(s32);                         /* extern */

s32 func_001081F8(u8 *arg0) {
    func_001098C0(*(s32 *)((u8 *)arg0 + 0x40) + 0x68);
    return 1;
}
s32 func_00108220(u8 *arg0) {
    func_001099A8(*(s32 *)((u8 *)arg0 + 0x40) + 0x68);
    return 1;
}
typedef struct { char pad0[0xEC]; unsigned int image_buff; int pad; int image_height; int image_size; char padFC[0x184 - 0xFC]; int ps; } Dec8248_x00108248;
typedef struct { unsigned int base; int pad4, pad8; int mb_width, mb_height; } Pic8248_x00108248;
int DI_x00108248(void) __asm__("DI");
int EI_x00108248(void) __asm__("EI");
void func_00108248_x00108248(Dec8248_x00108248 *dec, Pic8248_x00108248 *picture) __asm__("func_00108248");
void func_00108248_x00108248(Dec8248_x00108248 *dec, Pic8248_x00108248 *picture)
{
    int fields;
    unsigned int src = picture->base & 0x0FFFFFFF;
    unsigned int dst = dec->image_buff & 0x0FFFFFFF;
    unsigned int out;
    int srcstep, dststep, qwc;
    int f, i, intr;

    if (dec->ps == 3 || dec->image_height == 0) {
        srcstep = picture->mb_height * 384;
        qwc = srcstep >> 4;
        if (dec->image_height) {
            dststep = (dec->image_height >> 4) * 384;
        } else {
            dststep = srcstep;
        }
        fields = 1;
    } else {
        dststep = (dec->image_height >> 4) * 192;
        srcstep = (picture->mb_height >> 1) * 384;
        fields = 2;
        qwc = srcstep >> 4;
    }
    for (f = 0; f < fields; f++) {
        out = dst;
        for (i = 0; i < picture->mb_width; i++) {
            intr = DI_x00108248();
            *(volatile unsigned int *)0x1000D480 = 0;
            *(volatile unsigned int *)0x1000D410 = src;
            *(volatile unsigned int *)0x1000D420 = qwc;
            *(volatile unsigned int *)0x1000D400 = 0x101;
            if (intr) {
                EI_x00108248();
            }
            while (*(volatile unsigned int *)0x1000D400 & 0x100);
            intr = DI_x00108248();
            *(volatile unsigned int *)0x1000D080 = 0;
            *(volatile unsigned int *)0x1000D010 = out;
            *(volatile unsigned int *)0x1000D020 = qwc;
            *(volatile unsigned int *)0x1000D000 = 0x100;
            if (intr) {
                EI_x00108248();
            }
            while (*(volatile unsigned int *)0x1000D000 & 0x100);
            while (*(volatile unsigned int *)0x1000D020);
            out += dststep;
            src += srcstep;
        }
        dst += dec->image_size * 192;
    }
}
extern long long func_0031DE10_x001084D8(long long a, long long b) __asm__("__muldi3");
extern void func_003B1EE0_x001084D8(char *buf, int size, char *fmt, int a, int b) __asm__("func_0010CE90");
extern void _sceMpegError_x001084D8(char *c, char *msg) __asm__("func_00109738");
extern void func_0039BB20_x001084D8(char *c, char *pic) __asm__("func_00108EC8");
extern void _cpr8_x001084D8(char *c, char *pic) __asm__("func_00108248");
extern char D_0045E5A8_x001084D8[] __asm__("D_0045D2F8");
extern unsigned int D_003FA1F8_x001084D8[] __asm__("D_003EC540");
void func_001084D8_x001084D8(char *c, char *pic, int n) __asm__("func_001084D8");
/* _dispRefImage: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039b130.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_001084D8_x001084D8(char *c, char *pic, int n)
{
    char buf[0x100];
    char *g;
    long long *p10;
    long long *p18;
    long long *p20;
    int ok;
    int ok2;
    int f;

    g = *(char **)(c + 0x868);
    p10 = (long long *)(g + 0x10);
    p18 = (long long *)(g + 0x18);
    p20 = (long long *)(g + 0x20);
    if (*(int *)(c + 0x8C) != 0 && *(long long *)(pic + 0x18) < 0
        && *(int *)(c + 0x98) >= 0) {
        int b = (int)*(long long *)(c + 0xA0);
        long long a = *(long long *)(c + 0x90);
        int b1 = b & 1;
        int s = (b & 1) & ((*(int *)(c + 0x9C) & 1) & (a & 1));
        int r = (int)(func_0031DE10_x001084D8(a, (long long)b) >> 1);
        *(long long *)(g + 0x10) = *(int *)(c + 0x98) + (r + s);
        if ((b1 & *(long long *)(c + 0x90)) != 0)
            *(int *)(c + 0x9C) = *(int *)(c + 0x9C) + 1;
    } else {
        *p10 = *(long long *)(pic + 0x18);
    }
    if (*(int *)(c + 0x108) == 2 && *(long long *)(c + 0x100) >= 0) {
        *p10 = *(long long *)(c + 0x100);
        *(int *)(c + 0x108) = 0;
        *(long long *)(c + 0x100) = -1;
    }
    *p18 = *(long long *)(pic + 0x20);
    *p20 = ((long long)*(int *)(pic + 0x34) << 8)
         | ((long long)*(int *)(pic + 0x38) << 7)
         | ((long long)*(int *)(pic + 0x3C) << 6)
         | ((long long)*(int *)(pic + 0x40) << 5)
         | ((long long)*(int *)(pic + 0x30) << 3)
         | (long long)*(int *)(pic + 0x2C);
    *(int *)(c + 0x98) = (int)*(long long *)(*(char **)(c + 0x868) + 0x10);
    *(long long *)(c + 0xA0) =
        D_003FA1F8_x001084D8[(int)(*(long long *)(*(char **)(c + 0x868) + 0x20) >> 5) & 0xF];
    *(int *)(c + 0xE0) = *(int *)(pic + 0x5C);
    *(int *)(c + 0xE4) = *(int *)(pic + 0x60);
    *(int *)(c + 0xC8) = *(int *)(pic + 0x44);
    *(int *)(c + 0xCC) = *(int *)(pic + 0x48);
    *(int *)(c + 0xD0) = *(int *)(pic + 0x4C);
    *(int *)(c + 0xD4) = *(int *)(pic + 0x50);
    *(int *)(c + 0xD8) = *(int *)(pic + 0x54);
    *(int *)(c + 0xDC) = *(int *)(pic + 0x58);
    f = *(int *)(c + 0xF4);
    if (f != 0)
        ok = *(int *)(c + 0xF0) >= *(int *)(pic + 0x4)
          && f >= *(int *)(pic + 0x8);
    else
        ok = *(int *)(c + 0xF8) >= *(int *)(pic + 0xC) * *(int *)(pic + 0x10);
    if (ok == 0) {
        func_003B1EE0_x001084D8(buf, 0x100, D_0045E5A8_x001084D8, *(int *)(pic + 0x4),
                      *(int *)(pic + 0x8));
        _sceMpegError_x001084D8(c, buf);
    }
    ok2 = ok;
    if (ok2 != 0) {
        if (*(int *)(pic + 0x28) == 1) {
            if (*(int *)(c + 0xC4) != 0)
                func_0039BB20_x001084D8(c, pic);
            else
                _cpr8_x001084D8(c, pic);
            if (*(int *)(c + 0x8) != 2) {
                *(int *)(c + 0x8) = 2;
                *(int *)(c + 0xC0) = *(int *)(c + 0x128);
            }
            *(int *)(c + 0x834) = 1;
        }
    }
}
typedef struct { char pad0[0x10]; long pts, dts; unsigned long flags; long pts2nd, dts2nd; unsigned long flags2nd; } Mp8798_x00108798;
typedef struct { int pad0; int width, height, mb_width, mb_height; char pad14[0x18 - 0x14]; long pts, dts; int decoded, pct, ps, pseq, pframe, tff, rff; int co[6]; int dw, dh; } Pic8798_x00108798;
typedef struct { char pad0[8]; int seq_state; char padC[0x8C - 0xC]; int has_pts_gap; long pts_gap; int last_pts; int half_field; long field_count; char padA8[0xC0 - 0xA8]; int first_frame_no; int rgb32; int co[6]; int disp_width, disp_height; char padE8[0xF0 - 0xE8]; int image_width, image_height, image_size; char padFC[0x100 - 0xFC]; long ptm; int ptm_state; char pad10C[0x128 - 0x10C]; int frame_no; char pad12C[0x184 - 0x12C]; int ps; char pad188[0x834 - 0x188]; int stopped; char pad838[0x868 - 0x838]; Mp8798_x00108798 *mp; } Dec8798_x00108798;
extern char D_0045D2F8_x00108798[] __asm__("D_0045D2F8");
int func_0010CE90_x00108798(char *, int, const char *, ...) __asm__("func_0010CE90");
void func_00109738_x00108798(Dec8798_x00108798 *, char *) __asm__("func_00109738");
void func_00108EC8_x00108798(Dec8798_x00108798 *, Pic8798_x00108798 *) __asm__("func_00108EC8");
void func_00108248_x00108798(Dec8798_x00108798 *, Pic8798_x00108798 *) __asm__("func_00108248");
static __inline__ void ts8798(Dec8798_x00108798 *dec, Pic8798_x00108798 *picture, long *pts, long *dts, unsigned long *flags) { if (dec->has_pts_gap && picture->pts < 0 && dec->last_pts >= 0) { int count = dec->field_count; int odd = count & 1; int carry = odd & (dec->pts_gap & 1) & (dec->half_field & 1); *pts = dec->last_pts + ((int)((dec->pts_gap * count) >> 1) + carry); if (odd & dec->pts_gap) { dec->half_field++; } } else { *pts = picture->pts; } if (dec->ptm_state == 2 && dec->ptm >= 0) { *pts = dec->ptm; dec->ptm_state = 0; dec->ptm = -1; } *dts = picture->dts; *flags = (long)picture->pseq << 8 | (long)picture->pframe << 7 | (long)picture->tff << 6 | (long)picture->rff << 5 | (long)picture->ps << 3 | picture->pct; };
static __inline__ int chk8798(Dec8798_x00108798 *dec, Pic8798_x00108798 *picture) { char message[256]; int fits; if (dec->image_height) { fits = dec->image_width >= picture->width && dec->image_height >= picture->height; } else { fits = dec->image_size >= picture->mb_width * picture->mb_height; } if (!fits) { func_0010CE90_x00108798(message, 256, D_0045D2F8_x00108798, picture->width, picture->height); func_00109738_x00108798(dec, message); } return fits; };
void func_00108798_x00108798(Dec8798_x00108798 *dec, Pic8798_x00108798 *top, Pic8798_x00108798 *bottom) __asm__("func_00108798");
void func_00108798_x00108798(Dec8798_x00108798 *dec, Pic8798_x00108798 *top, Pic8798_x00108798 *bottom)
{
    Pic8798_x00108798 *first;
    Pic8798_x00108798 *second;
    int topFirst = 0;

    if (dec->ps == 2) {
        first = top;
        second = bottom;
        topFirst = 64;
    } else {
        first = bottom;
        second = top;
    }
    ts8798(dec, first, &dec->mp->pts, &dec->mp->dts, &dec->mp->flags);
    dec->last_pts = dec->mp->pts;
    dec->field_count = 1;
    ts8798(dec, second, &dec->mp->pts2nd, &dec->mp->dts2nd, &dec->mp->flags2nd);
    dec->last_pts = dec->mp->pts2nd;
    dec->field_count = 1;
    dec->disp_width = first->dw;
    dec->mp->flags |= topFirst;
    dec->mp->flags2nd |= topFirst;
    dec->disp_height = first->dh;
    dec->co[0] = first->co[0];
    dec->co[1] = second->co[1];
    dec->co[3] = first->co[3];
    dec->co[4] = second->co[4];
    if (chk8798(dec, top) && top->decoded == 1 && bottom->decoded == 1) {
        top->mb_height *= 2;
        if (dec->rgb32) {
            func_00108EC8_x00108798(dec, top);
        } else {
            func_00108248_x00108798(dec, top);
        }
        top->mb_height >>= 1;
        if (dec->seq_state != 2) {
            dec->seq_state = 2;
            dec->first_frame_no = dec->frame_no;
        }
        dec->stopped = 1;
    }
}
typedef struct Ctx_x00108BB8 {
    char pad_00[0x004];
    int  f004;
    int  f008;
    char pad_00C[0x0C0 - 0x00C];
    int  f0C0;
    char pad_0C4[0x128 - 0x0C4];
    int  f128;
    char pad_12C[0x130 - 0x12C];
    int  f130;
    char pad_134[0x184 - 0x134];
    int  f184;
    char pad_188[0x1CC - 0x188];
    int  f1CC;
    char pad_1D0[0x1DC - 0x1D0];
    int  f1DC;
    char pad_1E0[0x1EC - 0x1E0];
    int  f1EC;
} Ctx_x00108BB8;
typedef struct Mpeg_x00108BB8 {
    char pad_00[0x08];
    int  f008;
    char pad_0C[0x40 - 0x0C];
    Ctx_x00108BB8 *ctx;
} Mpeg_x00108BB8;
extern char D_0045E5D8_x00108BB8[] __asm__("D_0045D328");
extern void _sceMpegError_x00108BB8(Ctx_x00108BB8 *c, char *msg) __asm__("func_00109738");
extern void _dispRefImage_x00108BB8(Ctx_x00108BB8 *c, int a, int b) __asm__("func_001084D8");
extern void _dispRefImageField_x00108BB8(Ctx_x00108BB8 *c, int a, int b, int d) __asm__("func_00108798");
int func_00108BB8_x00108BB8(Mpeg_x00108BB8 *m) __asm__("func_00108BB8");
/* func_0039B810: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0039b810.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00108BB8_x00108BB8(Mpeg_x00108BB8 *m)
{
    Ctx_x00108BB8 *c = m->ctx;
    int ret = 0;

    if (c->f004 != 0 && c->f008 != 0) {
        int n = c->f128;
        if (c->f130 != 0) {
            _sceMpegError_x00108BB8(c, D_0045E5D8_x00108BB8);
        } else if (c->f184 == 3) {
            _dispRefImage_x00108BB8(c, c->f1CC, n - 1);
        } else {
            _dispRefImageField_x00108BB8(c, c->f1DC, c->f1EC, n - 1);
        }
        c->f130 = 0;
        m->f008 = c->f128 - c->f0C0;
        c->f004 = 0;
        ret = 1;
    }
    return ret;
}
typedef struct {
    char p0[0x108]; int x108; char p1[0x160 - 0x10C]; int x160; char p2[0x184 - 0x164]; int x184;
    char p3[0x1C8 - 0x188]; void *a[4]; void *b[4]; void *c[4];
} D_x00108C78;
void _dispRefImage_x00108C78(D_x00108C78 *d, void *img, int n) __asm__("func_001084D8");
void _dispRefImageField_x00108C78(D_x00108C78 *d, void *i0, void *i1, int n) __asm__("func_00108798");
void func_00108C78_x00108C78(D_x00108C78 *d, int n, int flag) __asm__("func_00108C78");
/* _sceMpegOutputFrame: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegOutputFrame.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00108C78_x00108C78(D_x00108C78 *d, int n, int flag)
{
    if (flag) {
        if (d->x184 == 3) {
            _dispRefImage_x00108C78(d, d->x160 == 3 ? d->a[3] : d->a[0], n - 1);
        } else {
            void *i0, *i1;
            if (d->x160 == 3) {
                i0 = d->b[3];
                i1 = d->c[3];
            } else {
                i0 = d->b[0];
                i1 = d->c[0];
            }
            _dispRefImageField_x00108C78(d, i0, i1, n - 1);
        }
    }
    if (d->x108 == 1)
        d->x108 = 2;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108D08);
typedef struct { int type; int pad[7]; } CB_x00108EC8;
typedef struct { unsigned int size; unsigned int addr; int pad[2]; } ST_x00108EC8;
typedef struct { unsigned int addr; int x4; int x8; int w; int h; } P_x00108EC8;
typedef struct {
    char p0[0xEC]; unsigned int xEC;
    char pF0[0x828 - 0xF0]; int x828; int x82C;
    char p830[0x868 - 0x830]; void *mp;
} D_x00108EC8;
int _ch4dma_x00108EC8(int ch, void *arg) __asm__("func_001094E8");
extern int func_00234740_x00108EC8(int ch, int (*h)(int, void *), int next, void *arg) __asm__("AddDmacHandler2");
int func_00234750_x00108EC8(int ch, int id) __asm__("RemoveDmacHandler");
int func_00235248_x00108EC8(int ch) __asm__("func_0010AE78");
int func_002351E0_x00108EC8(int ch) __asm__("func_0010AE10");
void s1_FlushCache_x00108EC8(int) __asm__("FlushCache");
int func_00239450_x00108EC8(void) __asm__("DI");
int func_002394A0_x00108EC8(void) __asm__("EI");
int _sceMpegDispatchMpegCallback_x00108EC8(void *mp, CB_x00108EC8 *cb) __asm__("func_00107DE0");
void _doCSC2_x00108EC8(D_x00108EC8 *d, unsigned int out, int n) __asm__("func_00108D08");
static inline void ipuCmd_x00108EC8(D_x00108EC8 *d, unsigned int cmd)
{
    (*(volatile unsigned int *)(0x10002000)) = cmd;
    d->x82C = cmd & 0xF0000000;
    if ((cmd & 0xF0000000) == 0x20000000 || (cmd & 0xF0000000) == 0x30000000 || (cmd & 0xF0000000) == 0x40000000)
        d->x828 = 0;
    else
        d->x828 = 1;
}
static inline void cscStore_x00108EC8(D_x00108EC8 *d, int n)
{
    CB_x00108EC8 cb2;
    CB_x00108EC8 *pcb;
    unsigned int out;
    int qwc;
    int e;
    if (n < 0x400) {
        out = d->xEC;
        pcb = &cb2;
        qwc = n << 6;
        while ((*(volatile int *)(0x10002010)) < 0)
            ;
        e = func_00239450_x00108EC8();
        { volatile unsigned int *m = (void *)0x1000B010, *q = (void *)0x1000B020, *c = (void *)0x1000B000;
        *m = out & 0x0FFFFFFF;
        *q = qwc;
        *c = 0x100; }
        if (e)
            func_002394A0_x00108EC8();
        ipuCmd_x00108EC8(d, n | 0x70000000);
        pcb->type = 4;
        _sceMpegDispatchMpegCallback_x00108EC8(d->mp, &cb2);
        while (((*(volatile unsigned int *)(0x1000B000)) >> 8) & 1)
            ;
        while ((*(volatile int *)(0x10002010)) < 0)
            ;
    } else {
        _doCSC2_x00108EC8(d, d->xEC, n);
    }
}
void func_00108EC8_x00108EC8(D_x00108EC8 *d, P_x00108EC8 *p) __asm__("func_00108EC8");
/* _sceMpegCscStoreRefImage: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegCscStoreRefImage.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00108EC8_x00108EC8(D_x00108EC8 *d, P_x00108EC8 *p)
{
    CB_x00108EC8 cb;
    ST_x00108EC8 st;
    int n, id, e;

    n = p->w * p->h;
    cb.type = 2;
    _sceMpegDispatchMpegCallback_x00108EC8(d->mp, &cb);
    if ((*(volatile unsigned int *)(0x10002010)) & 0x4000)
        (*(volatile unsigned int *)(0x10002010)) = 0x40000000;
    while ((*(volatile int *)(0x10002010)) < 0)
        ;
    ipuCmd_x00108EC8(d, 0);
    while ((*(volatile int *)(0x10002010)) < 0)
        ;
    s1_FlushCache_x00108EC8(0);
    st.addr = p->addr & 0x0FFFFFFF;
    st.size = n * 0x18;
    if (st.size > 0xFFFF) {
        id = func_00234740_x00108EC8(4, _ch4dma_x00108EC8, 0, &st);
        (*(volatile unsigned int *)(0x1000E010)) = 0x10;
        func_00235248_x00108EC8(4);
        e = func_00239450_x00108EC8();
        { volatile unsigned int *m = (void *)0x1000B410, *q = (void *)0x1000B420, *c = (void *)0x1000B400;
        *m = st.addr;
        *q = 0xFFFF;
        *c = 0x101; }
        if (e)
            func_002394A0_x00108EC8();
        st.addr = (st.addr + 0xFFFF0) & 0x0FFFFFFF;
        st.size -= 0xFFFF;
        cscStore_x00108EC8(d, n);
        func_002351E0_x00108EC8(4);
        func_00234750_x00108EC8(4, id);
    } else {
        e = func_00239450_x00108EC8();
        { volatile unsigned int *m = (void *)0x1000B410, *q = (void *)0x1000B420, *c = (void *)0x1000B400;
        *m = p->addr & 0x0FFFFFFF;
        *q = st.size;
        *c = 0x101; }
        if (e)
            func_002394A0_x00108EC8();
        st.size = 0;
        cscStore_x00108EC8(d, n);
    }
    cb.type = 3;
    _sceMpegDispatchMpegCallback_x00108EC8(d->mp, &cb);
}
typedef struct {
    volatile int cnt;
    int done;
    int rem;
    unsigned int addr;
    int total;
} DmaState_x001093A0;
int func_001093A0_x001093A0(int ch, DmaState_x001093A0 *s) __asm__("func_001093A0");
/* _ch3dmaCSC: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libmpeg/func_001098B0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001093A0_x001093A0(int ch, DmaState_x001093A0 *s)
{
    int last;

    (*(volatile unsigned int *)(0x1000E010)) = 8;
    s->cnt++;
    if ((*(volatile unsigned int *)(0x1000B020)) != 0 || ((*(volatile unsigned int *)(0x1000B000)) & 0x100)) {
        s->done = 1;
        __asm__ volatile("sync\n\tei");
        return 0;
    }
    last = s->total - 1;
    if (s->cnt < last) {
        (*(volatile unsigned int *)(0x1000B010)) = s->addr;
        (*(volatile unsigned int *)(0x1000B020)) = 0xFFC0;
        (*(volatile unsigned int *)(0x1000B000)) = 0x100;
        (*(volatile unsigned int *)(0x10002000)) = 0x700003FF;
        s->addr = (s->addr + 0xFFC00) & 0x0FFFFFFF;
    } else if (s->cnt == last) {
        s->rem -= s->cnt * 1023;
        (*(volatile unsigned int *)(0x1000B010)) = s->addr;
        (*(volatile unsigned int *)(0x1000B020)) = s->rem << 6;
        (*(volatile unsigned int *)(0x1000B000)) = 0x100;
        (*(volatile unsigned int *)(0x10002000)) = s->rem | 0x70000000;
    }
    __asm__ volatile("sync\n\tei");
    return 0;
}
typedef struct {
    unsigned int cnt;
    unsigned int addr;
} DmaChunk_x001094E8;
int func_001094E8_x001094E8(int ch, DmaChunk_x001094E8 *s) __asm__("func_001094E8");
/* _ch4dma: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libmpeg/func_00109BB8.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001094E8_x001094E8(int ch, DmaChunk_x001094E8 *s)
{
    (*(volatile unsigned int *)(0x1000E010)) = 0x10;
    if (s->cnt == 0) {
        __asm__ volatile("sync\n\tei");
        return 1;
    }
    if (s->cnt > 0xFFFF) {
        (*(volatile unsigned int *)(0x1000B410)) = s->addr;
        (*(volatile unsigned int *)(0x1000B420)) = 0xFFFF;
        (*(volatile unsigned int *)(0x1000B400)) = 0x101;
        s->addr = (s->addr + 0xFFFF0) & 0x0FFFFFFF;
        s->cnt -= 0xFFFF;
    } else {
        (*(volatile unsigned int *)(0x1000B410)) = s->addr;
        (*(volatile unsigned int *)(0x1000B420)) = s->cnt;
        (*(volatile unsigned int *)(0x1000B400)) = 0x101;
        s->cnt = 0;
    }
    __asm__ volatile("sync\n\tei");
    return 0;
}
