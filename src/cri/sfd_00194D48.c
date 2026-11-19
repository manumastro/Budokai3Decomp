#include "common.h"

s32 func_0019EB20();                            /* extern */

s32 func_0019D7C8();                                /* extern */

s32 func_0019D6D0(s32 *);                   /* extern */
extern s32 D_00492A58;
extern s32 D_00492A64;

extern s32 D_00467A00;

s32 func_0019CF60();                            /* extern */
s32 func_0019CFE8(s32);                         /* extern */
s32 func_0019D070(s32);                             /* extern */

extern s32 D_00426B38;
extern s32 D_00426B3C;

s32 memset(s32, s32, s32);              /* extern */

extern s32 D_00426A98;

s32 func_00172A40();                            /* extern */

s32 func_0019AA08();                            /* extern */

s32 func_0019A718();                            /* extern */

s32 func_0019A218();                            /* extern */
s32 func_0019AD80(s32);                         /* extern */

s32 func_0019A058(s32);                         /* extern */

s32 func_001998B8();                                /* extern */

s32 func_001976B8();                            /* extern */

s32 func_00198F70(s32, s32 *);                  /* extern */

s32 func_00198BE8(s32, s32 *);                  /* extern */

s32 func_0018A7A0(s32, s32);                    /* extern */

extern s32 D_00426ADC;

s32 func_00196B90();                            /* extern */
s32 func_00196C38(s32);                         /* extern */
s32 func_00196CC0(s32);                         /* extern */

s32 func_001969A8();                            /* extern */
s32 func_00198C30(s32);                         /* extern */

s32 func_0019A160();                            /* extern */

s32 func_001966C0();                            /* extern */

s32 func_00189DE8(s32, s32);                    /* extern */
s32 func_0019B938(s32, s32);                    /* extern */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

s32 func_00178C68(s32 *, s32, s32);     /* extern */

s32 func_00107AF0();                            /* extern */
s32 func_00178F48(s32 *, s32, s32); /* extern */
extern s32 D_004929F8;

extern s32 D_00426B18;

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */

void func_00194D48(s64 *arg0, s64 arg1, s64 arg2, s64 arg3) {
    *arg0 = (arg1 << 0x20) | ((u64) (arg2 << 0x20) >> 4) | ((u64) (arg3 << 0x20) >> 0x20);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194D70);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194DE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00194F28);
void func_00195018(u8 *arg0, s32 arg1) {
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) (*(s32 *)((u8 *)arg0 + 0x14) + arg1);
    *(s64 *)((u8 *)arg0 + 0x48) = (s64) (arg1 + *(s64 *)((u8 *)arg0 + 0x48));
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
}
extern int WaitSema_x00195068(int sid) __asm__("WaitSema");
extern int SignalSema_x00195068(int sid) __asm__("SignalSema");
typedef struct {
               unsigned int base;
               unsigned int tagp;
               int nblk;
               int rd;
               int rdofs;
               int wr;
               int size;
               unsigned char pad1C[0x40 - 0x1C];
               int sema;
               int active;
               long long total;
               void *ent;
               int nent;
               int f58;
               int f5C;
} ViBuf_x00195068;
int func_00195068_x00195068(ViBuf_x00195068 *b, int n) __asm__("func_00195068");
/* func_00355C08: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00353500.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00195068_x00195068(ViBuf_x00195068 *b, int n)
{
    WaitSema_x00195068(b->sema);
    b->wr -= n;
    b->total -= n;
    if (b->wr < 0) {
        for (;;) {
        }
    }
    SignalSema_x00195068(b->sema);
    return n;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001950E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001952E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001953E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195700);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195758);
void func_001957A8(s32 arg0) {
    D_00426B18 = arg0;
}
s32 func_001957B8(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFC8) != 0;
}
void func_001957C8(void) {
    if (D_00426B18 != 0) {
        func_00107AF0();
        func_00178F48(&D_004929F8, 0, 0x48);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195878);
s32 func_00195A90(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x109C);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195AA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195B08);
s32 func_001950E8_x00195BA8(void *) __asm__("func_001950E8");
s32 func_00195B08_x00195BA8(void *, s32 *, s32) __asm__("func_00195B08");
extern s32 D_00467558_x00195BA8 __asm__("D_00467558");
s32 func_00195BA8_x00195BA8(s32 arg0, s32 arg1, u8 *arg2) __asm__("func_00195BA8");
s32 func_00195BA8_x00195BA8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_v0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_v0 = *(s32 *)((u8 *)arg2 + 0x1C70);
    temp_s0 = temp_v0 + 0x1038;
    temp_s1 = temp_v0 + 0xFC8;
    func_001950E8_x00195BA8(temp_s0);
    if ((*(s32 *)((u8 *)temp_s1 + 0x14) != 0) && (*(s32 *)((u8 *)temp_s0 + 0x10) == 0)) {
        *(s32 *)((u8 *)temp_s1 + 0x18) = 1;
        func_00195B08_x00195BA8(temp_s0, &D_00467558_x00195BA8, 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) *(s32 *)((u8 *)temp_s0 + 0x18);
        func_001950E8_x00195BA8(temp_s0);
    }
    return 1;
}
s32 func_001952E8_x00195C28(s32 a0) __asm__("func_001952E8");
s32 func_00195C28_x00195C28(s32 a0, s32 a1, u8 *a2) __asm__("func_00195C28");
s32 func_00195C28_x00195C28(s32 a0, s32 a1, u8 *a2) {
    func_001952E8_x00195C28(*(s32 *)(a2 + 0x1C70) + 0x1038);
    return 1;
}
s32 func_001953E8_x00195C50(s32 a0) __asm__("func_001953E8");
s32 func_00195C50_x00195C50(s32 a0, s32 a1, u8 *a2) __asm__("func_00195C50");
s32 func_00195C50_x00195C50(s32 a0, s32 a1, u8 *a2) {
    func_001953E8_x00195C50(*(s32 *)(a2 + 0x1C70) + 0x1038);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195C78);
void func_00195D00(u8 *arg0) {
    func_00178C68(&D_004929F8, *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, 0x48);
}
void func_00195D28(u8 *arg0) {
    func_00178C68(*(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, &D_004929F8, 0x48);
}
s32 func_001957B8_x00195D50() __asm__("func_001957B8");
s32 func_00195B08_x00195D50(s32, s32, s32) __asm__("func_00195B08");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00195D50");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) {
    if (func_001957B8_x00195D50() == 0) {
        return arg2;
    }
    return func_00195B08_x00195D50(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1, arg2);
}
s32 func_00195068_x00195DC0(s32, s32) __asm__("func_00195068");
s32 func_001957B8_x00195DC0() __asm__("func_001957B8");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) __asm__("func_00195DC0");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) {
    if (func_001957B8_x00195DC0() == 0) {
        return arg1;
    }
    return func_00195068_x00195DC0(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1);
}
s32 func_00195758_x00195E20(s32) __asm__("func_00195758");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1) __asm__("func_00195E20");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1)
{
  s32 temp_s0;
  u8 *temp_s0_2;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1C70));
  func_00195758_x00195E20(temp_s0 + 0x1038);
  temp_s0_2 = temp_s0 + 0xFC8;
  *((s32 *) (((u8 *) temp_s0_2) + 0x20)) = arg1;
  *((s32 *) (((u8 *) temp_s0_2) + 0x1C)) = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195E68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195F98);
s32 func_001960E0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFF8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001960F0);
void func_00196288(u8 *arg0) {
    u8 *temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFC8;
    *(s32 *)((u8 *)temp_v1 + 0xC) = (s32) (*(s32 *)((u8 *)temp_v1 + 0xC) - 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001962A0);
s32 func_001962F8(void) {
    return 0x48;
}
s32 func_00196300(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000141);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x50);
}
typedef unsigned char Uint8_x00196350;
typedef signed char Sint8_x00196350;
typedef signed short Sint16_x00196350;
typedef unsigned int Uint32_x00196350;
typedef signed int Sint32_x00196350;
typedef signed long long Sint64_x00196350;
typedef char Char8_x00196350;
typedef struct SJ_OBJ_x00196350 *SJ_x00196350;
typedef struct {
        Uint8_x00196350 *data;
        Sint32_x00196350 len;
} SJCK_x00196350;
typedef struct {
        Uint8_x00196350 data[16];
} SJUUID_x00196350;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00196350 sj);
        const SJUUID_x00196350 *(*GetUuid)(SJ_x00196350 sj);
        void (*Reset)(SJ_x00196350 sj);
        void (*GetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, Sint32_x00196350 nbyte, SJCK_x00196350 *ck);
        void (*UngetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, SJCK_x00196350 *ck);
        void (*PutChunk)(SJ_x00196350 sj, Sint32_x00196350 id, SJCK_x00196350 *ck);
        Sint32_x00196350 (*GetNumData)(SJ_x00196350 sj, Sint32_x00196350 id);
        Sint32_x00196350 (*IsGetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, Sint32_x00196350 nbyte, Sint32_x00196350 *rbyte);
        void (*EntryErrFunc)(SJ_x00196350 sj, void (*func)(void *obj, Char8_x00196350 *msg), void *obj);
} SJ_IF_x00196350;
struct SJ_OBJ_x00196350 {
        SJ_IF_x00196350 *vtbl;
};
typedef struct SFD_OBJ_x00196350 *SFD_x00196350;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00196350 rsv1;
        Sint32_x00196350 rsv2;
} SFUO_CH_x00196350;
typedef struct {
        Sint32_x00196350 nch;
        SFUO_CH_x00196350 ch[3];
} SFUO_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Sint32_x00196350 (*SetOutPan)(SFD_x00196350 sfd, Sint32_x00196350 ch, Sint32_x00196350 pan);
        Sint32_x00196350 (*GetOutPan)(SFD_x00196350 sfd, Sint32_x00196350 ch);
        Sint32_x00196350 (*SetOutVol)(SFD_x00196350 sfd, Sint32_x00196350 vol);
        Sint32_x00196350 (*GetOutVol)(SFD_x00196350 sfd);
        void (*SetSpeed)(SFD_x00196350 sfd, Sint32_x00196350 speed);
        Sint32_x00196350 x18;
} SFAOAP_x00196350;
typedef struct {
        Uint8_x00196350 pad0[0xB8];
        Sint32_x00196350 tottime;
        Sint32_x00196350 tunit;
        Uint8_x00196350 padc0[0x150 - 0xC0];
        Sint64_x00196350 scr_base;
        Sint64_x00196350 scr_ofst;
        Sint32_x00196350 pad160;
        Sint32_x00196350 ctime;
        Sint32_x00196350 ctime_idx;
        Sint32_x00196350 ctime_que[32];
        Sint32_x00196350 tot_last;
        Sint32_x00196350 pad1F0;
        Sint32_x00196350 que_wr;
        Sint32_x00196350 que_rd;
        Sint32_x00196350 tot_que[32];
} SFCON_x00196350;
typedef struct {
        Sint32_x00196350 type;
        Sint32_x00196350 drop;
        Sint32_x00196350 hour;
        Sint32_x00196350 min;
        Sint32_x00196350 sec;
        Sint32_x00196350 frm;
        Sint32_x00196350 frm2;
        Sint16_x00196350 x1c;
        Sint16_x00196350 field;
} SFTIM_TC_x00196350;
typedef struct {
        Sint32_x00196350 valid;
        SFTIM_TC_x00196350 tc;
        Sint32_x00196350 val;
        Sint32_x00196350 unit;
} SFTIM_TTU_x00196350;
typedef struct {
        Sint64_x00196350 pts;
        Uint32_x00196350 pos;
        Uint32_x00196350 len;
} SFPTS_ENT_x00196350;
typedef struct {
        SFPTS_ENT_x00196350 *ent;
        Sint32_x00196350 num;
        Sint32_x00196350 cnt;
        Sint32_x00196350 wr;
        Sint32_x00196350 rd;
} SFPTS_QUE_x00196350;
typedef struct {
        Sint32_x00196350 raw[0x20];
} SFD_VFRM_INF_x00196350;
typedef struct {
        void *frm;
        Sint32_x00196350 x04;
        SFD_VFRM_INF_x00196350 inf;
} SFD_VFRM_x00196350;
typedef struct {
        Sint32_x00196350 kind;
        SJ_x00196350 sj;
        Uint32_x00196350 ofst;
        Sint32_x00196350 size;
        Sint32_x00196350 xsize;
        Sint32_x00196350 x14;
} SFBUF_SUP_x00196350;
typedef struct {
        SFBUF_SUP_x00196350 sup;
        Uint8_x00196350 *dlm_pos;
        Sint32_x00196350 dlm_len;
        Sint32_x00196350 wtot;
        Sint32_x00196350 rtot;
        SFPTS_QUE_x00196350 ptsque;
} SFBUF_RING_x00196350;
typedef struct {
        Sint32_x00196350 mode;
        Sint32_x00196350 used;
        Sint32_x00196350 prepflg;
        Sint32_x00196350 termflg;
        union {
                SFBUF_RING_x00196350 ring;
                struct {
                        Uint32_x00196350 adr;
                        Sint32_x00196350 size;
                        Sint32_x00196350 x18;
                        Sint32_x00196350 x1c;
                        SFD_VFRM_x00196350 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00196350 adr;
                        Sint32_x00196350 size;
                        Sint32_x00196350 rsv[7];
                        Sint32_x00196350 rsv2[3];
                } aout;
                SFUO_CH_x00196350 uoch[3];
        } u;
        Sint32_x00196350 in_tr;
        Sint32_x00196350 out_tr;
        Sint32_x00196350 rsv[8];
} SFBUF_WORK_x00196350;
typedef Sint32_x00196350 (*SFD_TR_FUNC_x00196350)();
typedef struct {
        Sint32_x00196350 prepflg;
        Sint32_x00196350 termflg;
        void *hn;
        SFD_TR_FUNC_x00196350 *trif;
        Sint32_x00196350 bufin;
        Sint32_x00196350 bufout;
        Sint32_x00196350 bufout2;
        Sint32_x00196350 bufout3;
        Sint32_x00196350 x20;
        Uint8_x00196350 pad24[0x44 - 0x24];
} SFD_TR_x00196350;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00196350 cwidth;
        Sint16_x00196350 ywidth;
} SFMPV_PLANE_x00196350;
typedef struct {
        void *buf;
        Sint32_x00196350 len;
} SFMPV_PICUSR_x00196350;
typedef struct {
        Sint32_x00196350 stat;
        Sint32_x00196350 lock;
        void *buf;
        SFTIM_TTU_x00196350 ttu;
        Sint32_x00196350 ftime;
        Sint32_x00196350 tunit;
        Sint32_x00196350 ndct;
        Sint32_x00196350 nbyte;
        Sint32_x00196350 gopno;
        Sint32_x00196350 x4c;
        Sint32_x00196350 x50;
        SFMPV_PICUSR_x00196350 *picusr;
        Sint32_x00196350 pa_width;
        Sint32_x00196350 pa_height;
        Sint32_x00196350 pa_mb_width;
        Sint32_x00196350 pa_mb_height;
        Sint32_x00196350 pa_frame_rate;
        Sint32_x00196350 tmpref;
        Sint32_x00196350 pa_pic_type;
        Sint32_x00196350 pa_tc_drop;
        Sint32_x00196350 pa_tc_hour;
        Sint32_x00196350 pa_tc_min;
        Sint32_x00196350 pa_tc_sec;
        Sint32_x00196350 pa_tc_pic;
        Sint32_x00196350 x88;
        Sint32_x00196350 x8c;
        Sint32_x00196350 pa_x90[3];
        Sint32_x00196350 pa_x9c[3];
        Sint16_x00196350 pa_xa8;
        Sint16_x00196350 pa_xaa;
        Sint8_x00196350 pa_xac;
        Sint8_x00196350 pa_xad;
        Sint8_x00196350 pa_xae;
        Sint8_x00196350 pa_xaf;
        Sint8_x00196350 pa_xb0;
        Sint8_x00196350 pa_xb1;
        Sint8_x00196350 pa_xb2;
        Sint8_x00196350 pa_xb3;
        Sint8_x00196350 pa_xb4;
        Sint8_x00196350 pa_xb5;
        Sint8_x00196350 pa_xb6;
        Sint8_x00196350 pa_xb7;
        Sint8_x00196350 pa_xb8;
        Sint8_x00196350 pa_xb9;
        Sint8_x00196350 pa_xba;
        Sint8_x00196350 pa_xbb;
        Sint8_x00196350 pa_xbc;
        Uint8_x00196350 padbd[0xD8 - 0xBD];
        Sint64_x00196350 pts;
} SFMPV_FRM_x00196350;
typedef struct {
        Sint32_x00196350 cwidth;
        Sint32_x00196350 cheight;
        Sint32_x00196350 width;
        Sint32_x00196350 height;
        Sint32_x00196350 x10;
        Sint32_x00196350 max_width;
        Sint32_x00196350 max_height;
        Sint32_x00196350 nfrm;
        Sint32_x00196350 x20;
} SFMPV_PARA_x00196350;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00196350 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00196350 *curfrm;
        Sint32_x00196350 picstat;
        Sint32_x00196350 dlmmask;
        Sint32_x00196350 termflg;
        Sint32_x00196350 gopstat;
        Sint32_x00196350 nskip;
        Sint32_x00196350 nconcat;
        Uint8_x00196350 picatr[0x80];
        Sint32_x00196350 last_ngop;
        Sint32_x00196350 newgop;
        Sint32_x00196350 vbvsiz;
        Sint32_x00196350 pts_tmpref;
        Sint32_x00196350 pts_ofst;
        Sint32_x00196350 pts_max;
        Sint32_x00196350 pad124;
        SFPTS_ENT_x00196350 ptsent;
        Sint32_x00196350 refidx[2];
        SFMPV_PLANE_x00196350 rfbuf[2];
        SFMPV_FRM_x00196350 *ref[2];
        SFMPV_FRM_x00196350 *pendfrm;
        Sint32_x00196350 skipret;
        Sint32_x00196350 dlmwait;
        Sint32_x00196350 tmpref_adj;
        Sint32_x00196350 nfrm;
        Sint32_x00196350 pad17c;
        SFMPV_FRM_x00196350 frm[16];
        void *picusr_buf;
        Sint32_x00196350 picusr_num;
        Sint32_x00196350 picusr_siz;
        Uint8_x00196350 *picusr_dat;
        Sint32_x00196350 picusr_len;
        SFMPV_PICUSR_x00196350 picusr[16];
        Sint32_x00196350 pad1014;
        Sint64_x00196350 pts;
} SFMPV_WORK_x00196350;
typedef struct {
        Sint32_x00196350 raw[0x2A];
} SFD_PLYINF_x00196350 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00196350 code);
        void *obj;
        Sint32_x00196350 code;
        Sint32_x00196350 x0c;
        Sint32_x00196350 x10;
} SFLIB_ERRINF_x00196350;
typedef struct {
        Sint32_x00196350 codec;
        Sint32_x00196350 layer;
        Sint32_x00196350 chnum;
        Sint32_x00196350 smphz;
} SFHDS_AUD_x00196350;
typedef struct {
        Sint32_x00196350 codec;
        Sint32_x00196350 bitrate;
        Sint32_x00196350 picw;
        Sint32_x00196350 pich;
        Sint32_x00196350 picrate;
        Sint32_x00196350 ftr_eff;
        Sint32_x00196350 ftr_coltype;
        Sint32_x00196350 ftr_pictype;
        Sint32_x00196350 ftr_fixflg;
        Sint32_x00196350 ftr_shcfixflg;
        Sint32_x00196350 ftr_expand;
        Sint32_x00196350 ftr_gopn;
        Sint32_x00196350 ftr_gopm;
} SFHDS_VID_x00196350;
typedef struct {
        Sint32_x00196350 valid;
        Sint32_x00196350 ver_major;
        Sint32_x00196350 ver_minor;
        Sint32_x00196350 byterate;
        Sint32_x00196350 hdrsiz;
        Sint32_x00196350 packtype;
        Sint32_x00196350 pketsizlen;
        Sint32_x00196350 packsiz;
        Sint32_x00196350 numelem_tot;
        Sint32_x00196350 numelem_aud;
        Sint32_x00196350 numelem_vid;
        Sint32_x00196350 numelem_prv;
        Sint32_x00196350 maxplylen_aud;
        Sint32_x00196350 maxplylen_vid;
        Sint32_x00196350 maxfrmnum;
        Sint32_x00196350 stmid_prv1;
        Sint32_x00196350 stmid_prv2;
        Sint32_x00196350 stmid_aud;
        Sint32_x00196350 stmid_vid;
        SFHDS_AUD_x00196350 aud;
        SFHDS_VID_x00196350 vid;
        Sint32_x00196350 rawsiz;
        Uint8_x00196350 raw[0x800];
} SFHDS_FHD_x00196350;
typedef struct {
        Uint8_x00196350 data[2][0xB0];
        Sint32_x00196350 len[2];
} SFSEE_SYSHD_x00196350;
typedef struct {
        Sint32_x00196350 analyzed;
        Sint32_x00196350 ncount;
        Sint32_x00196350 tscale;
        Sint32_x00196350 nvid;
        Sint32_x00196350 naud;
        Sint32_x00196350 pad14;
        Sint64_x00196350 scr_base;
        Sint64_x00196350 pts_min;
        Sint32_x00196350 stmid_vid;
        Sint32_x00196350 stmid_aud;
        SFSEE_SYSHD_x00196350 syshd;
} SFSEE_SHDR_x00196350;
typedef struct {
        Sint32_x00196350 analyzed;
        Sint32_x00196350 ncount;
        Sint32_x00196350 tscale;
        SFHDS_FHD_x00196350 fhd;
        SFSEE_SHDR_x00196350 shdr;
        Uint8_x00196350 pada38[0xAD0 - 0xA38];
        Sint32_x00196350 a1hdr;
        Sint32_x00196350 a1ncount;
        Sint32_x00196350 a1tscale;
        Uint8_x00196350 padadc[0xD0C - 0xADC];
        Sint32_x00196350 a2hdr;
        Sint32_x00196350 a2ncount;
        Sint32_x00196350 a2tscale;
        Uint8_x00196350 padd18[0xDA8 - 0xD18];
        Sint32_x00196350 rate;
        Sint32_x00196350 fsize_est;
        Sint32_x00196350 tot_est;
        Sint32_x00196350 tunit_est;
        Sint32_x00196350 av_a;
        Sint32_x00196350 av_b;
        Sint32_x00196350 paddc0;
        Sint32_x00196350 fsize;
        Sint32_x00196350 tottime;
        Sint32_x00196350 tunit;
        Sint32_x00196350 byterate;
        Sint32_x00196350 seekpos;
} SFSEE_WORK_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Sint32_x00196350 pos;
        Sint32_x00196350 x08;
} SFSEE_REQ_x00196350;
typedef struct {
        Sint32_x00196350 bsize;
        Sint32_x00196350 xsize;
        void *buf;
        Sint32_x00196350 maxnch;
        Sint32_x00196350 x10;
        Sint32_x00196350 worksize;
        void *work;
} SFADXT_PARA_x00196350;
typedef struct {
        void *adxt;
        SJ_x00196350 sj;
        SFADXT_PARA_x00196350 para;
        Sint32_x00196350 tcount;
        Sint32_x00196350 tunit;
        Sint32_x00196350 pause;
        Sint32_x00196350 discard;
        Sint32_x00196350 seekflg;
        Sint32_x00196350 smplofst;
        void (*func)(SFD_x00196350 sfd, Uint8_x00196350 *data, Sint32_x00196350 len, Sint32_x00196350 *nbyte);
        Sint32_x00196350 x40;
        Sint32_x00196350 svrfreq;
        Sint32_x00196350 totbyte;
        Sint32_x00196350 x4c;
} SFADXT_WORK_x00196350;
typedef struct {
        SFSEE_WORK_x00196350 *wk;
        SFSEE_REQ_x00196350 req;
} SFSEE_HN_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Uint32_x00196350 adr;
        Sint32_x00196350 size[7];
        Sint32_x00196350 x24;
        Sint32_x00196350 unit;
        Sint32_x00196350 x2c;
        Sint32_x00196350 x30;
        Sint32_x00196350 x34;
        Sint32_x00196350 x38;
        void *hnwork;
        Sint32_x00196350 hnwksiz;
} SFD_CREPRM_x00196350;
typedef struct {
        void *x00;
        Sint32_x00196350 x04;
        Sint32_x00196350 x08;
} SFPLY_PTSM_x00196350;
typedef struct {
        Sint64_x00196350 sum;
        Sint64_x00196350 min;
        Sint64_x00196350 max;
        Sint32_x00196350 cnt;
} SFTMR_TSUM_x00196350;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00196350 nvid;
        Sint32_x00196350 naud;
        Sint32_x00196350 x0c;
        Sint64_x00196350 pts_min;
        Sint64_x00196350 pts_min2;
        Sint32_x00196350 concat_cnt;
        Sint32_x00196350 last_vid;
        Sint32_x00196350 last_aud;
        Sint32_x00196350 first_vid;
        Sint32_x00196350 first_aud;
        Sint32_x00196350 cur_vid;
        Sint32_x00196350 cur_aud;
        Sint32_x00196350 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00196350 stmid);
        void *outobj;
        Sint32_x00196350 skip;
        Sint32_x00196350 x15c;
        Sint32_x00196350 x160;
        Sint32_x00196350 x164;
} SFMPS_WORK_x00196350;
typedef struct SFD_OBJ_x00196350 {
        SFD_CREPRM_x00196350 prm;
        Sint32_x00196350 chg_flg;
        Sint32_x00196350 stat;
        Sint32_x00196350 req;
        Sint32_x00196350 pause_sw;
        Sint32_x00196350 pause_cnt;
        Uint8_x00196350 pad58[0x74 - 0x58];
        Sint32_x00196350 pad74;
        SFHDS_FHD_x00196350 fhd;
        Sint32_x00196350 x90c;
        Sint32_x00196350 x910;
        Sint32_x00196350 x914;
        Sint32_x00196350 x918;
        Sint32_x00196350 x91c;
        Sint32_x00196350 picrate;
        Sint32_x00196350 x924;
        Sint32_x00196350 x928;
        Sint32_x00196350 x92c;
        Sint32_x00196350 numelem_aud;
        Sint32_x00196350 numelem_vid;
        Sint32_x00196350 numelem_prv;
        Sint32_x00196350 x93c;
        Sint32_x00196350 x940;
        Sint32_x00196350 x944;
        Sint32_x00196350 x948;
        Sint32_x00196350 x94c;
        SFD_PLYINF_x00196350 plyinf;
        SFLIB_ERRINF_x00196350 err;
        Sint32_x00196350 cond[100];
        Sint32_x00196350 cond_def[100];
        Uint8_x00196350 padD24[4];
        SFCON_x00196350 con;
        Uint8_x00196350 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00196350))];
        Uint8_x00196350 tst[0x1C0];
        Uint8_x00196350 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00196350 ptsm;
        Uint8_x00196350 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00196350 buf[8];
        SFD_VFRM_x00196350 vfrm[16];
        SFD_TR_x00196350 tr[9];
        Sint32_x00196350 pad218c;
        SFMPS_WORK_x00196350 mps;
        Uint8_x00196350 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00196350 mpv;
        SFADXT_WORK_x00196350 adxt;
        Uint8_x00196350 pad3410[0x3474 - 0x3410];
        SFAOAP_x00196350 aoap;
        SFUO_x00196350 uo_tbl;
        Sint32_x00196350 pad34c4;
        SFSEE_HN_x00196350 see;
        SFTMR_TSUM_x00196350 tsum[6];
} SFD_OBJ_x00196350;
Sint32_x00196350 SFLIB_SetErr_x00196350(SFD_x00196350 sfd, Sint32_x00196350 code) __asm__("func_0018D650");
Sint32_x00196350 SFLIB_CheckHn_x00196350(SFD_x00196350 sfd) __asm__("func_0018D870");
Sint32_x00196350 SFPL2_Pause_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw) __asm__("func_001963E0");
Sint32_x00196350 func_00196350_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw) __asm__("func_00196350");
/* SFD_Pause: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_pl2.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00196350 func_00196350_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw)
{
        Sint32_x00196350 psw;
        Sint32_x00196350 mode;
        Sint32_x00196350 ret;
        if (SFLIB_CheckHn_x00196350(sfd) != 0) {
                return SFLIB_SetErr_x00196350(0, 0xFF000142);
        }
        psw = sfd->pause_sw;
        if (sw == 0) {
                if (psw == 0) {
                        return 0;
                }
                mode = 0;
        } else {
                if (psw == 0) {
                        mode = 1;
                } else {
                        mode = 2;
                }
        }
        sfd->pause_sw = sw;
        ret = SFPL2_Pause_x00196350(sfd, mode);
        sfd->chg_flg = 1;
        return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001963E0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196470);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001964D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196500);
s32 func_00196548(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 3;
    return 0;
}
s32 func_00196558(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000144);
    }
    func_0019B938(arg0, arg1);
    func_00189DE8(arg0, arg1);
    return 0;
}
s32 func_0018D650_x001965C8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x001965C8() __asm__("func_0018D870");
s32 func_00199818_x001965C8(s32, s32, s32) __asm__("func_00199818");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) __asm__("func_001965C8");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) {
    if (func_0018D870_x001965C8() != 0) {
        return func_0018D650_x001965C8(0, 0xFF000145, arg1);
    }
    func_00199818_x001965C8(arg0, 0x1E, arg1);
    return 0;
}
s32 func_0018D650_x00196638(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00196638() __asm__("func_0018D870");
s32 func_00199818_x00196638(s32, s32, s32) __asm__("func_00199818");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) __asm__("func_00196638");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) {
    if (func_0018D870_x00196638() != 0) {
        return func_0018D650_x00196638(0, 0xFF000146, arg1);
    }
    func_00199818_x00196638(arg0, 0x1D, arg1);
    return 0;
}
void func_001966A8(void) {
    func_001966C0();
}
s32 func_0018D650_x001966C0(s32, s32) __asm__("func_0018D650");
extern s32 D_004676A4_x001966C0 __asm__("D_004676A4");
void func_001966C0_x001966C0(void) __asm__("func_001966C0");
void func_001966C0_x001966C0(void) {
    if (D_004676A4_x001966C0 != 0x5A5A5A5A) {
        func_0018D650_x001966C0(0, 0xFF000201);
    }
}
void func_00196708(void) {
    func_0019A160();
}
void func_00196720(void) {

}
typedef unsigned char u8_x00196728;
typedef unsigned int u32_x00196728;
typedef struct MovieModuleState_x00196728 {
    u8_x00196728 _pad_0[0x44];
    u32_x00196728 field_44;
    u32_x00196728 field_48;
} MovieModuleState_x00196728;
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) __asm__("func_00196728");
/* fn_12_2CD44: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CD44.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) {
    if (state->field_48 - 1 > 3) {
        return 1;
    }
    return state->field_44 == 0;
}
s32 func_00196728_x00196750(s32) __asm__("func_00196728");
extern s32 D_00426AE4_x00196750 __asm__("D_00426AE4");
s32 func_00196750_x00196750(void) __asm__("func_00196750");
s32 func_00196750_x00196750(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_s0 = &D_00426AE4_x00196750;
    var_s1 = 0;
loop_1:
    temp_v0 = *var_s0;
    var_s0 += 1;
    if ((temp_v0 == 0) || (var_v0 = func_00196728_x00196750(temp_v0), (var_v0 != 0))) {
        var_s1 += 1;
        if (var_s1 >= 8) {
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
typedef unsigned char u8_x001967B8;
typedef unsigned int u32_x001967B8;
typedef struct MovieModuleState_x001967B8 {
    u8_x001967B8 _pad_0[0x44];
    u32_x001967B8 field_44;
} MovieModuleState_x001967B8;
extern int fn_12_24990_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_0018D870");
extern int fn_12_24A88_x001967B8(int arg0, u32_x001967B8 arg1) __asm__("func_0018D650");
extern void fn_12_2C9C4_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_00196868");
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_001967B8");
/* fn_12_2CC24: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CC24.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) {
    if (fn_12_24990_x001967B8(state)) {
        return fn_12_24A88_x001967B8(0, 0xFF000138);
    }
    state->field_44 = 1;
    fn_12_2C9C4_x001967B8(state);
    return 0;
}
s32 func_00196868_x00196810(s32) __asm__("func_00196868");
s32 func_001976B8_x00196810() __asm__("func_001976B8");
extern s32 D_00426AE4_x00196810 __asm__("D_00426AE4");
void func_00196810_x00196810(void) __asm__("func_00196810");
void func_00196810_x00196810(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &D_00426AE4_x00196810;
    var_s1 = 7;
    do {
        temp_v0 = *var_s0;
        var_s0 += 1;
        if (temp_v0 != 0) {
            func_00196868_x00196810(temp_v0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_001976B8_x00196810();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196868);
void func_00196980(s32 arg0) {
    func_001969A8();
    func_00198C30(arg0);
}
s32 func_0019C040_x001969A8(s32, s32) __asm__("func_0019C040");
void func_001969A8_x001969A8(s32 a0) __asm__("func_001969A8");
void func_001969A8_x001969A8(s32 a0) {
    func_0019C040_x001969A8(a0, 2);
}
s32 func_001969C0(u8 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x4C);
    var_a1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 >= 2) && ((temp_v1 < 5) || (temp_v1 == 6))) {
        var_a1 = 2;
    }
    return var_a1;
}
int sfply_IsPrepEnd_x001969F0(void*) __asm__("func_00196AB0");
void sfply_AdjustPrepEnd_x001969F0(void*) __asm__("func_00196B60");
void sfply_TrStart_x001969F0(void*) __asm__("func_00197DC0");
int func_00357988_x001969F0(void*) __asm__("func_00196EA0");
int func_001969F0_x001969F0(int *a0) __asm__("func_001969F0");
/* func_003574D8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324040.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001969F0_x001969F0(int *a0) {
    int ret = a0[0x12];
    int sel = a0[0x13];
    if (sfply_IsPrepEnd_x001969F0(a0) == 0) {
        return ret;
    }
    sfply_AdjustPrepEnd_x001969F0(a0);
    switch (sel) {
        case 2:
            ret = 2;
            break;
        case 4:
        case 6:
            if (func_00357988_x001969F0(a0) != 0) {
                sfply_TrStart_x001969F0(a0);
                ret = 4;
                break;
            }
        case 3:
            ret = 3;
            break;
    }
    return ret;
}
typedef unsigned char Uint8_x00196AB0;
typedef signed char Sint8_x00196AB0;
typedef signed short Sint16_x00196AB0;
typedef unsigned int Uint32_x00196AB0;
typedef signed int Sint32_x00196AB0;
typedef signed long long Sint64_x00196AB0;
typedef char Char8_x00196AB0;
typedef Sint32_x00196AB0 Bool_x00196AB0;
typedef struct SJ_OBJ_x00196AB0 *SJ_x00196AB0;
typedef struct {
        Uint8_x00196AB0 *data;
        Sint32_x00196AB0 len;
} SJCK_x00196AB0;
typedef struct {
        Uint8_x00196AB0 data[16];
} SJUUID_x00196AB0;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00196AB0 sj);
        const SJUUID_x00196AB0 *(*GetUuid)(SJ_x00196AB0 sj);
        void (*Reset)(SJ_x00196AB0 sj);
        void (*GetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, Sint32_x00196AB0 nbyte, SJCK_x00196AB0 *ck);
        void (*UngetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, SJCK_x00196AB0 *ck);
        void (*PutChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, SJCK_x00196AB0 *ck);
        Sint32_x00196AB0 (*GetNumData)(SJ_x00196AB0 sj, Sint32_x00196AB0 id);
        Sint32_x00196AB0 (*IsGetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, Sint32_x00196AB0 nbyte, Sint32_x00196AB0 *rbyte);
        void (*EntryErrFunc)(SJ_x00196AB0 sj, void (*func)(void *obj, Char8_x00196AB0 *msg), void *obj);
} SJ_IF_x00196AB0;
struct SJ_OBJ_x00196AB0 {
        SJ_IF_x00196AB0 *vtbl;
};
typedef struct SFD_OBJ_x00196AB0 *SFD_x00196AB0;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00196AB0 rsv1;
        Sint32_x00196AB0 rsv2;
} SFUO_CH_x00196AB0;
typedef struct {
        Sint32_x00196AB0 nch;
        SFUO_CH_x00196AB0 ch[3];
} SFUO_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Sint32_x00196AB0 (*SetOutPan)(SFD_x00196AB0 sfd, Sint32_x00196AB0 ch, Sint32_x00196AB0 pan);
        Sint32_x00196AB0 (*GetOutPan)(SFD_x00196AB0 sfd, Sint32_x00196AB0 ch);
        Sint32_x00196AB0 (*SetOutVol)(SFD_x00196AB0 sfd, Sint32_x00196AB0 vol);
        Sint32_x00196AB0 (*GetOutVol)(SFD_x00196AB0 sfd);
        void (*SetSpeed)(SFD_x00196AB0 sfd, Sint32_x00196AB0 speed);
        Sint32_x00196AB0 x18;
} SFAOAP_x00196AB0;
typedef struct {
        Uint8_x00196AB0 pad0[0xB8];
        Sint32_x00196AB0 tottime;
        Sint32_x00196AB0 tunit;
        Uint8_x00196AB0 padc0[0x150 - 0xC0];
        Sint64_x00196AB0 scr_base;
        Sint64_x00196AB0 scr_ofst;
        Sint32_x00196AB0 pad160;
        Sint32_x00196AB0 ctime;
        Sint32_x00196AB0 ctime_idx;
        Sint32_x00196AB0 ctime_que[32];
        Sint32_x00196AB0 tot_last;
        Sint32_x00196AB0 pad1F0;
        Sint32_x00196AB0 que_wr;
        Sint32_x00196AB0 que_rd;
        Sint32_x00196AB0 tot_que[32];
} SFCON_x00196AB0;
typedef struct {
        Sint32_x00196AB0 type;
        Sint32_x00196AB0 drop;
        Sint32_x00196AB0 hour;
        Sint32_x00196AB0 min;
        Sint32_x00196AB0 sec;
        Sint32_x00196AB0 frm;
        Sint32_x00196AB0 frm2;
        Sint16_x00196AB0 x1c;
        Sint16_x00196AB0 field;
} SFTIM_TC_x00196AB0;
typedef struct {
        Sint32_x00196AB0 valid;
        SFTIM_TC_x00196AB0 tc;
        Sint32_x00196AB0 val;
        Sint32_x00196AB0 unit;
} SFTIM_TTU_x00196AB0;
typedef struct {
        Sint64_x00196AB0 pts;
        Uint32_x00196AB0 pos;
        Uint32_x00196AB0 len;
} SFPTS_ENT_x00196AB0;
typedef struct {
        SFPTS_ENT_x00196AB0 *ent;
        Sint32_x00196AB0 num;
        Sint32_x00196AB0 cnt;
        Sint32_x00196AB0 wr;
        Sint32_x00196AB0 rd;
} SFPTS_QUE_x00196AB0;
typedef struct {
        Sint32_x00196AB0 raw[0x20];
} SFD_VFRM_INF_x00196AB0;
typedef struct {
        void *frm;
        Sint32_x00196AB0 x04;
        SFD_VFRM_INF_x00196AB0 inf;
} SFD_VFRM_x00196AB0;
typedef struct {
        Sint32_x00196AB0 kind;
        SJ_x00196AB0 sj;
        Uint32_x00196AB0 ofst;
        Sint32_x00196AB0 size;
        Sint32_x00196AB0 xsize;
        Sint32_x00196AB0 x14;
} SFBUF_SUP_x00196AB0;
typedef struct {
        SFBUF_SUP_x00196AB0 sup;
        Uint8_x00196AB0 *dlm_pos;
        Sint32_x00196AB0 dlm_len;
        Sint32_x00196AB0 wtot;
        Sint32_x00196AB0 rtot;
        SFPTS_QUE_x00196AB0 ptsque;
} SFBUF_RING_x00196AB0;
typedef struct {
        Sint32_x00196AB0 mode;
        Sint32_x00196AB0 used;
        Sint32_x00196AB0 prepflg;
        Sint32_x00196AB0 termflg;
        union {
                SFBUF_RING_x00196AB0 ring;
                struct {
                        Uint32_x00196AB0 adr;
                        Sint32_x00196AB0 size;
                        Sint32_x00196AB0 x18;
                        Sint32_x00196AB0 x1c;
                        SFD_VFRM_x00196AB0 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00196AB0 adr;
                        Sint32_x00196AB0 size;
                        Sint32_x00196AB0 rsv[7];
                        Sint32_x00196AB0 rsv2[3];
                } aout;
                SFUO_CH_x00196AB0 uoch[3];
        } u;
        Sint32_x00196AB0 in_tr;
        Sint32_x00196AB0 out_tr;
        Sint32_x00196AB0 rsv[8];
} SFBUF_WORK_x00196AB0;
typedef Sint32_x00196AB0 (*SFD_TR_FUNC_x00196AB0)();
typedef struct {
        Sint32_x00196AB0 prepflg;
        Sint32_x00196AB0 termflg;
        void *hn;
        SFD_TR_FUNC_x00196AB0 *trif;
        Sint32_x00196AB0 bufin;
        Sint32_x00196AB0 bufout;
        Sint32_x00196AB0 bufout2;
        Sint32_x00196AB0 bufout3;
        Sint32_x00196AB0 x20;
        Uint8_x00196AB0 pad24[0x44 - 0x24];
} SFD_TR_x00196AB0;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00196AB0 cwidth;
        Sint16_x00196AB0 ywidth;
} SFMPV_PLANE_x00196AB0;
typedef struct {
        void *buf;
        Sint32_x00196AB0 len;
} SFMPV_PICUSR_x00196AB0;
typedef struct {
        Sint32_x00196AB0 stat;
        Sint32_x00196AB0 lock;
        void *buf;
        SFTIM_TTU_x00196AB0 ttu;
        Sint32_x00196AB0 ftime;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 ndct;
        Sint32_x00196AB0 nbyte;
        Sint32_x00196AB0 gopno;
        Sint32_x00196AB0 x4c;
        Sint32_x00196AB0 x50;
        SFMPV_PICUSR_x00196AB0 *picusr;
        Sint32_x00196AB0 pa_width;
        Sint32_x00196AB0 pa_height;
        Sint32_x00196AB0 pa_mb_width;
        Sint32_x00196AB0 pa_mb_height;
        Sint32_x00196AB0 pa_frame_rate;
        Sint32_x00196AB0 tmpref;
        Sint32_x00196AB0 pa_pic_type;
        Sint32_x00196AB0 pa_tc_drop;
        Sint32_x00196AB0 pa_tc_hour;
        Sint32_x00196AB0 pa_tc_min;
        Sint32_x00196AB0 pa_tc_sec;
        Sint32_x00196AB0 pa_tc_pic;
        Sint32_x00196AB0 x88;
        Sint32_x00196AB0 x8c;
        Sint32_x00196AB0 pa_x90[3];
        Sint32_x00196AB0 pa_x9c[3];
        Sint16_x00196AB0 pa_xa8;
        Sint16_x00196AB0 pa_xaa;
        Sint8_x00196AB0 pa_xac;
        Sint8_x00196AB0 pa_xad;
        Sint8_x00196AB0 pa_xae;
        Sint8_x00196AB0 pa_xaf;
        Sint8_x00196AB0 pa_xb0;
        Sint8_x00196AB0 pa_xb1;
        Sint8_x00196AB0 pa_xb2;
        Sint8_x00196AB0 pa_xb3;
        Sint8_x00196AB0 pa_xb4;
        Sint8_x00196AB0 pa_xb5;
        Sint8_x00196AB0 pa_xb6;
        Sint8_x00196AB0 pa_xb7;
        Sint8_x00196AB0 pa_xb8;
        Sint8_x00196AB0 pa_xb9;
        Sint8_x00196AB0 pa_xba;
        Sint8_x00196AB0 pa_xbb;
        Sint8_x00196AB0 pa_xbc;
        Uint8_x00196AB0 padbd[0xD8 - 0xBD];
        Sint64_x00196AB0 pts;
} SFMPV_FRM_x00196AB0;
typedef struct {
        Sint32_x00196AB0 cwidth;
        Sint32_x00196AB0 cheight;
        Sint32_x00196AB0 width;
        Sint32_x00196AB0 height;
        Sint32_x00196AB0 x10;
        Sint32_x00196AB0 max_width;
        Sint32_x00196AB0 max_height;
        Sint32_x00196AB0 nfrm;
        Sint32_x00196AB0 x20;
} SFMPV_PARA_x00196AB0;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00196AB0 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00196AB0 *curfrm;
        Sint32_x00196AB0 picstat;
        Sint32_x00196AB0 dlmmask;
        Sint32_x00196AB0 termflg;
        Sint32_x00196AB0 gopstat;
        Sint32_x00196AB0 nskip;
        Sint32_x00196AB0 nconcat;
        Uint8_x00196AB0 picatr[0x80];
        Sint32_x00196AB0 last_ngop;
        Sint32_x00196AB0 newgop;
        Sint32_x00196AB0 vbvsiz;
        Sint32_x00196AB0 pts_tmpref;
        Sint32_x00196AB0 pts_ofst;
        Sint32_x00196AB0 pts_max;
        Sint32_x00196AB0 pad124;
        SFPTS_ENT_x00196AB0 ptsent;
        Sint32_x00196AB0 refidx[2];
        SFMPV_PLANE_x00196AB0 rfbuf[2];
        SFMPV_FRM_x00196AB0 *ref[2];
        SFMPV_FRM_x00196AB0 *pendfrm;
        Sint32_x00196AB0 skipret;
        Sint32_x00196AB0 dlmwait;
        Sint32_x00196AB0 tmpref_adj;
        Sint32_x00196AB0 nfrm;
        Sint32_x00196AB0 pad17c;
        SFMPV_FRM_x00196AB0 frm[16];
        void *picusr_buf;
        Sint32_x00196AB0 picusr_num;
        Sint32_x00196AB0 picusr_siz;
        Uint8_x00196AB0 *picusr_dat;
        Sint32_x00196AB0 picusr_len;
        SFMPV_PICUSR_x00196AB0 picusr[16];
        Sint32_x00196AB0 pad1014;
        Sint64_x00196AB0 pts;
} SFMPV_WORK_x00196AB0;
typedef struct {
        Sint32_x00196AB0 raw[0x2A];
} SFD_PLYINF_x00196AB0 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00196AB0 code);
        void *obj;
        Sint32_x00196AB0 code;
        Sint32_x00196AB0 x0c;
        Sint32_x00196AB0 x10;
} SFLIB_ERRINF_x00196AB0;
typedef struct {
        Sint32_x00196AB0 codec;
        Sint32_x00196AB0 layer;
        Sint32_x00196AB0 chnum;
        Sint32_x00196AB0 smphz;
} SFHDS_AUD_x00196AB0;
typedef struct {
        Sint32_x00196AB0 codec;
        Sint32_x00196AB0 bitrate;
        Sint32_x00196AB0 picw;
        Sint32_x00196AB0 pich;
        Sint32_x00196AB0 picrate;
        Sint32_x00196AB0 ftr_eff;
        Sint32_x00196AB0 ftr_coltype;
        Sint32_x00196AB0 ftr_pictype;
        Sint32_x00196AB0 ftr_fixflg;
        Sint32_x00196AB0 ftr_shcfixflg;
        Sint32_x00196AB0 ftr_expand;
        Sint32_x00196AB0 ftr_gopn;
        Sint32_x00196AB0 ftr_gopm;
} SFHDS_VID_x00196AB0;
typedef struct {
        Sint32_x00196AB0 valid;
        Sint32_x00196AB0 ver_major;
        Sint32_x00196AB0 ver_minor;
        Sint32_x00196AB0 byterate;
        Sint32_x00196AB0 hdrsiz;
        Sint32_x00196AB0 packtype;
        Sint32_x00196AB0 pketsizlen;
        Sint32_x00196AB0 packsiz;
        Sint32_x00196AB0 numelem_tot;
        Sint32_x00196AB0 numelem_aud;
        Sint32_x00196AB0 numelem_vid;
        Sint32_x00196AB0 numelem_prv;
        Sint32_x00196AB0 maxplylen_aud;
        Sint32_x00196AB0 maxplylen_vid;
        Sint32_x00196AB0 maxfrmnum;
        Sint32_x00196AB0 stmid_prv1;
        Sint32_x00196AB0 stmid_prv2;
        Sint32_x00196AB0 stmid_aud;
        Sint32_x00196AB0 stmid_vid;
        SFHDS_AUD_x00196AB0 aud;
        SFHDS_VID_x00196AB0 vid;
        Sint32_x00196AB0 rawsiz;
        Uint8_x00196AB0 raw[0x800];
} SFHDS_FHD_x00196AB0;
typedef struct {
        Uint8_x00196AB0 data[2][0xB0];
        Sint32_x00196AB0 len[2];
} SFSEE_SYSHD_x00196AB0;
typedef struct {
        Sint32_x00196AB0 analyzed;
        Sint32_x00196AB0 ncount;
        Sint32_x00196AB0 tscale;
        Sint32_x00196AB0 nvid;
        Sint32_x00196AB0 naud;
        Sint32_x00196AB0 pad14;
        Sint64_x00196AB0 scr_base;
        Sint64_x00196AB0 pts_min;
        Sint32_x00196AB0 stmid_vid;
        Sint32_x00196AB0 stmid_aud;
        SFSEE_SYSHD_x00196AB0 syshd;
} SFSEE_SHDR_x00196AB0;
typedef struct {
        Sint32_x00196AB0 analyzed;
        Sint32_x00196AB0 ncount;
        Sint32_x00196AB0 tscale;
        SFHDS_FHD_x00196AB0 fhd;
        SFSEE_SHDR_x00196AB0 shdr;
        Uint8_x00196AB0 pada38[0xAD0 - 0xA38];
        Sint32_x00196AB0 a1hdr;
        Sint32_x00196AB0 a1ncount;
        Sint32_x00196AB0 a1tscale;
        Uint8_x00196AB0 padadc[0xD0C - 0xADC];
        Sint32_x00196AB0 a2hdr;
        Sint32_x00196AB0 a2ncount;
        Sint32_x00196AB0 a2tscale;
        Uint8_x00196AB0 padd18[0xDA8 - 0xD18];
        Sint32_x00196AB0 rate;
        Sint32_x00196AB0 fsize_est;
        Sint32_x00196AB0 tot_est;
        Sint32_x00196AB0 tunit_est;
        Sint32_x00196AB0 av_a;
        Sint32_x00196AB0 av_b;
        Sint32_x00196AB0 paddc0;
        Sint32_x00196AB0 fsize;
        Sint32_x00196AB0 tottime;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 byterate;
        Sint32_x00196AB0 seekpos;
} SFSEE_WORK_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Sint32_x00196AB0 pos;
        Sint32_x00196AB0 x08;
} SFSEE_REQ_x00196AB0;
typedef struct {
        Sint32_x00196AB0 bsize;
        Sint32_x00196AB0 xsize;
        void *buf;
        Sint32_x00196AB0 maxnch;
        Sint32_x00196AB0 x10;
        Sint32_x00196AB0 worksize;
        void *work;
} SFADXT_PARA_x00196AB0;
typedef struct {
        void *adxt;
        SJ_x00196AB0 sj;
        SFADXT_PARA_x00196AB0 para;
        Sint32_x00196AB0 tcount;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 pause;
        Sint32_x00196AB0 discard;
        Sint32_x00196AB0 seekflg;
        Sint32_x00196AB0 smplofst;
        void (*func)(SFD_x00196AB0 sfd, Uint8_x00196AB0 *data, Sint32_x00196AB0 len, Sint32_x00196AB0 *nbyte);
        Sint32_x00196AB0 x40;
        Sint32_x00196AB0 svrfreq;
        Sint32_x00196AB0 totbyte;
        Sint32_x00196AB0 x4c;
} SFADXT_WORK_x00196AB0;
typedef struct {
        SFSEE_WORK_x00196AB0 *wk;
        SFSEE_REQ_x00196AB0 req;
} SFSEE_HN_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Uint32_x00196AB0 adr;
        Sint32_x00196AB0 size[7];
        Sint32_x00196AB0 x24;
        Sint32_x00196AB0 unit;
        Sint32_x00196AB0 x2c;
        Sint32_x00196AB0 x30;
        Sint32_x00196AB0 x34;
        Sint32_x00196AB0 x38;
        void *hnwork;
        Sint32_x00196AB0 hnwksiz;
} SFD_CREPRM_x00196AB0;
typedef struct {
        void *x00;
        Sint32_x00196AB0 x04;
        Sint32_x00196AB0 x08;
} SFPLY_PTSM_x00196AB0;
typedef struct {
        Sint64_x00196AB0 sum;
        Sint64_x00196AB0 min;
        Sint64_x00196AB0 max;
        Sint32_x00196AB0 cnt;
} SFTMR_TSUM_x00196AB0;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00196AB0 nvid;
        Sint32_x00196AB0 naud;
        Sint32_x00196AB0 x0c;
        Sint64_x00196AB0 pts_min;
        Sint64_x00196AB0 pts_min2;
        Sint32_x00196AB0 concat_cnt;
        Sint32_x00196AB0 last_vid;
        Sint32_x00196AB0 last_aud;
        Sint32_x00196AB0 first_vid;
        Sint32_x00196AB0 first_aud;
        Sint32_x00196AB0 cur_vid;
        Sint32_x00196AB0 cur_aud;
        Sint32_x00196AB0 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00196AB0 stmid);
        void *outobj;
        Sint32_x00196AB0 skip;
        Sint32_x00196AB0 x15c;
        Sint32_x00196AB0 x160;
        Sint32_x00196AB0 x164;
} SFMPS_WORK_x00196AB0;
typedef struct SFD_OBJ_x00196AB0 {
        SFD_CREPRM_x00196AB0 prm;
        Sint32_x00196AB0 chg_flg;
        Sint32_x00196AB0 stat;
        Sint32_x00196AB0 req;
        Sint32_x00196AB0 pause_sw;
        Sint32_x00196AB0 pause_cnt;
        Uint8_x00196AB0 pad58[0x74 - 0x58];
        Sint32_x00196AB0 pad74;
        SFHDS_FHD_x00196AB0 fhd;
        Sint32_x00196AB0 x90c;
        Sint32_x00196AB0 x910;
        Sint32_x00196AB0 x914;
        Sint32_x00196AB0 x918;
        Sint32_x00196AB0 x91c;
        Sint32_x00196AB0 picrate;
        Sint32_x00196AB0 x924;
        Sint32_x00196AB0 x928;
        Sint32_x00196AB0 x92c;
        Sint32_x00196AB0 numelem_aud;
        Sint32_x00196AB0 numelem_vid;
        Sint32_x00196AB0 numelem_prv;
        Sint32_x00196AB0 x93c;
        Sint32_x00196AB0 x940;
        Sint32_x00196AB0 x944;
        Sint32_x00196AB0 x948;
        Sint32_x00196AB0 x94c;
        SFD_PLYINF_x00196AB0 plyinf;
        SFLIB_ERRINF_x00196AB0 err;
        Sint32_x00196AB0 cond[100];
        Sint32_x00196AB0 cond_def[100];
        Uint8_x00196AB0 padD24[4];
        SFCON_x00196AB0 con;
        Uint8_x00196AB0 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00196AB0))];
        Uint8_x00196AB0 tst[0x1C0];
        Uint8_x00196AB0 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00196AB0 ptsm;
        Uint8_x00196AB0 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00196AB0 buf[8];
        SFD_VFRM_x00196AB0 vfrm[16];
        SFD_TR_x00196AB0 tr[9];
        Sint32_x00196AB0 pad218c;
        SFMPS_WORK_x00196AB0 mps;
        Uint8_x00196AB0 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00196AB0 mpv;
        SFADXT_WORK_x00196AB0 adxt;
        Uint8_x00196AB0 pad3410[0x3474 - 0x3410];
        SFAOAP_x00196AB0 aoap;
        SFUO_x00196AB0 uo_tbl;
        Sint32_x00196AB0 pad34c4;
        SFSEE_HN_x00196AB0 see;
        SFTMR_TSUM_x00196AB0 tsum[6];
} SFD_OBJ_x00196AB0;
Sint32_x00196AB0 SFSET_GetCond_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_001999E0");
Sint32_x00196AB0 SFTRN_GetTermFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C170");
Sint32_x00196AB0 SFTRN_GetPrepFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C140");
extern Sint32_x00196AB0 SFTRN_GetPrepFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C140");
extern void (*SFPLY_recordgetfrm_x00196AB0)(SFD_x00196AB0 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00196AB0)(SFPLY_PTSM_x00196AB0 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00196AB0)(SFPLY_PTSM_x00196AB0 *ptsm) __asm__("SFPLY_ResetPtsm");
Bool_x00196AB0 func_00196AB0_x00196AB0(SFD_x00196AB0 sfd) __asm__("func_00196AB0");
/* sfply_IsPrepared: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x00196AB0 func_00196AB0_x00196AB0(SFD_x00196AB0 sfd)
{
        Bool_x00196AB0 vprep;
        Bool_x00196AB0 aprep;
        if (SFSET_GetCond_x00196AB0(sfd, 5) == 0) {
                vprep = 1;
        } else {
                vprep = SFTRN_GetPrepFlg_x00196AB0(sfd, 6);
                vprep |= SFTRN_GetTermFlg_x00196AB0(sfd, 6);
        }
        if (SFSET_GetCond_x00196AB0(sfd, 6) == 0) {
                aprep = 1;
        } else {
                aprep = SFTRN_GetPrepFlg_x00196AB0(sfd, 7);
                aprep |= SFTRN_GetTermFlg_x00196AB0(sfd, 7);
        }
        if (vprep == 0 || aprep == 0) {
                return 0;
        }
        return 1;
}
void func_00196B60(s32 arg0) {
    func_00196B90();
    func_00196C38(arg0);
    func_00196CC0(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196B90);
s32 func_00199818_x00196C38() __asm__("func_00199818");
void func_00196C38_x00196C38(s32 arg0) __asm__("func_00196C38");
void func_00196C38_x00196C38(s32 arg0) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x9A0;
    if (*(s32 *)((u8 *)temp_s0 + 0x18) != 0) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 2) {
        goto block_3;
    }
    func_00199818_x00196C38(arg0, 0xF, 1);
block_3:
    if (*(s32 *)((u8 *)temp_s0 + 0x14) == 0) {
        goto block_5;
    }
    return;
block_5:
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 1) {
        goto block_9;
    }
    func_00199818_x00196C38(arg0, 0xF, 2);
    return;
block_9:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196CC0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196D88);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196E28);
s32 func_00196E98(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x48);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196EA0);
s32 func_0018D908_x00196F08(void *) __asm__("func_0018D908");
s32 func_0018D920_x00196F08(void *) __asm__("func_0018D920");
s32 func_001963E0_x00196F08(s32, s32) __asm__("func_001963E0");
s32 func_00196FB8_x00196F08(s32) __asm__("func_00196FB8");
s32 func_00197138_x00196F08(s32) __asm__("func_00197138");
s32 func_00196F08_x00196F08(s32 arg0) __asm__("func_00196F08");
s32 func_00196F08_x00196F08(s32 arg0)
{
  u8 sp[8];
  s32 var_s2;
  s32 var_v0;
  u8 *temp_s1;
  temp_s1 = arg0 + 0x94C;
  func_0018D908_x00196F08(sp);
  var_s2 = 0;
  if ((var_v0 = *((s32 *) (((u8 *) temp_s1) + 0x1C))) == 0)
  {
    if (func_00196FB8_x00196F08(arg0) != 0)
    {
      *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 1;
      *((s32 *) (0x20 + ((u8 *) temp_s1))) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x20))) + 1);
      var_v0 = func_001963E0_x00196F08(arg0, 1);
      goto block_5;
    }
  }
  else
    if (func_00197138_x00196F08(arg0) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 0;
    var_v0 = func_001963E0_x00196F08(arg0, 0);
    block_5:
    var_s2 = var_v0;

  }
  func_0018D920_x00196F08(sp);
  return var_s2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196FB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197138);
typedef unsigned char Uint8_x00197218;
typedef signed char Sint8_x00197218;
typedef signed short Sint16_x00197218;
typedef unsigned int Uint32_x00197218;
typedef signed int Sint32_x00197218;
typedef signed long long Sint64_x00197218;
typedef char Char8_x00197218;
typedef Sint32_x00197218 Bool_x00197218;
typedef struct SJ_OBJ_x00197218 *SJ_x00197218;
typedef struct {
        Uint8_x00197218 *data;
        Sint32_x00197218 len;
} SJCK_x00197218;
typedef struct {
        Uint8_x00197218 data[16];
} SJUUID_x00197218;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197218 sj);
        const SJUUID_x00197218 *(*GetUuid)(SJ_x00197218 sj);
        void (*Reset)(SJ_x00197218 sj);
        void (*GetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, Sint32_x00197218 nbyte, SJCK_x00197218 *ck);
        void (*UngetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, SJCK_x00197218 *ck);
        void (*PutChunk)(SJ_x00197218 sj, Sint32_x00197218 id, SJCK_x00197218 *ck);
        Sint32_x00197218 (*GetNumData)(SJ_x00197218 sj, Sint32_x00197218 id);
        Sint32_x00197218 (*IsGetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, Sint32_x00197218 nbyte, Sint32_x00197218 *rbyte);
        void (*EntryErrFunc)(SJ_x00197218 sj, void (*func)(void *obj, Char8_x00197218 *msg), void *obj);
} SJ_IF_x00197218;
struct SJ_OBJ_x00197218 {
        SJ_IF_x00197218 *vtbl;
};
typedef struct SFD_OBJ_x00197218 *SFD_x00197218;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197218 rsv1;
        Sint32_x00197218 rsv2;
} SFUO_CH_x00197218;
typedef struct {
        Sint32_x00197218 nch;
        SFUO_CH_x00197218 ch[3];
} SFUO_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Sint32_x00197218 (*SetOutPan)(SFD_x00197218 sfd, Sint32_x00197218 ch, Sint32_x00197218 pan);
        Sint32_x00197218 (*GetOutPan)(SFD_x00197218 sfd, Sint32_x00197218 ch);
        Sint32_x00197218 (*SetOutVol)(SFD_x00197218 sfd, Sint32_x00197218 vol);
        Sint32_x00197218 (*GetOutVol)(SFD_x00197218 sfd);
        void (*SetSpeed)(SFD_x00197218 sfd, Sint32_x00197218 speed);
        Sint32_x00197218 x18;
} SFAOAP_x00197218;
typedef struct {
        Uint8_x00197218 pad0[0xB8];
        Sint32_x00197218 tottime;
        Sint32_x00197218 tunit;
        Uint8_x00197218 padc0[0x150 - 0xC0];
        Sint64_x00197218 scr_base;
        Sint64_x00197218 scr_ofst;
        Sint32_x00197218 pad160;
        Sint32_x00197218 ctime;
        Sint32_x00197218 ctime_idx;
        Sint32_x00197218 ctime_que[32];
        Sint32_x00197218 tot_last;
        Sint32_x00197218 pad1F0;
        Sint32_x00197218 que_wr;
        Sint32_x00197218 que_rd;
        Sint32_x00197218 tot_que[32];
} SFCON_x00197218;
typedef struct {
        Sint32_x00197218 type;
        Sint32_x00197218 drop;
        Sint32_x00197218 hour;
        Sint32_x00197218 min;
        Sint32_x00197218 sec;
        Sint32_x00197218 frm;
        Sint32_x00197218 frm2;
        Sint16_x00197218 x1c;
        Sint16_x00197218 field;
} SFTIM_TC_x00197218;
typedef struct {
        Sint32_x00197218 valid;
        SFTIM_TC_x00197218 tc;
        Sint32_x00197218 val;
        Sint32_x00197218 unit;
} SFTIM_TTU_x00197218;
typedef struct {
        Sint64_x00197218 pts;
        Uint32_x00197218 pos;
        Uint32_x00197218 len;
} SFPTS_ENT_x00197218;
typedef struct {
        SFPTS_ENT_x00197218 *ent;
        Sint32_x00197218 num;
        Sint32_x00197218 cnt;
        Sint32_x00197218 wr;
        Sint32_x00197218 rd;
} SFPTS_QUE_x00197218;
typedef struct {
        Sint32_x00197218 raw[0x20];
} SFD_VFRM_INF_x00197218;
typedef struct {
        void *frm;
        Sint32_x00197218 x04;
        SFD_VFRM_INF_x00197218 inf;
} SFD_VFRM_x00197218;
typedef struct {
        Sint32_x00197218 kind;
        SJ_x00197218 sj;
        Uint32_x00197218 ofst;
        Sint32_x00197218 size;
        Sint32_x00197218 xsize;
        Sint32_x00197218 x14;
} SFBUF_SUP_x00197218;
typedef struct {
        SFBUF_SUP_x00197218 sup;
        Uint8_x00197218 *dlm_pos;
        Sint32_x00197218 dlm_len;
        Sint32_x00197218 wtot;
        Sint32_x00197218 rtot;
        SFPTS_QUE_x00197218 ptsque;
} SFBUF_RING_x00197218;
typedef struct {
        Sint32_x00197218 mode;
        Sint32_x00197218 used;
        Sint32_x00197218 prepflg;
        Sint32_x00197218 termflg;
        union {
                SFBUF_RING_x00197218 ring;
                struct {
                        Uint32_x00197218 adr;
                        Sint32_x00197218 size;
                        Sint32_x00197218 x18;
                        Sint32_x00197218 x1c;
                        SFD_VFRM_x00197218 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197218 adr;
                        Sint32_x00197218 size;
                        Sint32_x00197218 rsv[7];
                        Sint32_x00197218 rsv2[3];
                } aout;
                SFUO_CH_x00197218 uoch[3];
        } u;
        Sint32_x00197218 in_tr;
        Sint32_x00197218 out_tr;
        Sint32_x00197218 rsv[8];
} SFBUF_WORK_x00197218;
typedef Sint32_x00197218 (*SFD_TR_FUNC_x00197218)();
typedef struct {
        Sint32_x00197218 prepflg;
        Sint32_x00197218 termflg;
        void *hn;
        SFD_TR_FUNC_x00197218 *trif;
        Sint32_x00197218 bufin;
        Sint32_x00197218 bufout;
        Sint32_x00197218 bufout2;
        Sint32_x00197218 bufout3;
        Sint32_x00197218 x20;
        Uint8_x00197218 pad24[0x44 - 0x24];
} SFD_TR_x00197218;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197218 cwidth;
        Sint16_x00197218 ywidth;
} SFMPV_PLANE_x00197218;
typedef struct {
        void *buf;
        Sint32_x00197218 len;
} SFMPV_PICUSR_x00197218;
typedef struct {
        Sint32_x00197218 stat;
        Sint32_x00197218 lock;
        void *buf;
        SFTIM_TTU_x00197218 ttu;
        Sint32_x00197218 ftime;
        Sint32_x00197218 tunit;
        Sint32_x00197218 ndct;
        Sint32_x00197218 nbyte;
        Sint32_x00197218 gopno;
        Sint32_x00197218 x4c;
        Sint32_x00197218 x50;
        SFMPV_PICUSR_x00197218 *picusr;
        Sint32_x00197218 pa_width;
        Sint32_x00197218 pa_height;
        Sint32_x00197218 pa_mb_width;
        Sint32_x00197218 pa_mb_height;
        Sint32_x00197218 pa_frame_rate;
        Sint32_x00197218 tmpref;
        Sint32_x00197218 pa_pic_type;
        Sint32_x00197218 pa_tc_drop;
        Sint32_x00197218 pa_tc_hour;
        Sint32_x00197218 pa_tc_min;
        Sint32_x00197218 pa_tc_sec;
        Sint32_x00197218 pa_tc_pic;
        Sint32_x00197218 x88;
        Sint32_x00197218 x8c;
        Sint32_x00197218 pa_x90[3];
        Sint32_x00197218 pa_x9c[3];
        Sint16_x00197218 pa_xa8;
        Sint16_x00197218 pa_xaa;
        Sint8_x00197218 pa_xac;
        Sint8_x00197218 pa_xad;
        Sint8_x00197218 pa_xae;
        Sint8_x00197218 pa_xaf;
        Sint8_x00197218 pa_xb0;
        Sint8_x00197218 pa_xb1;
        Sint8_x00197218 pa_xb2;
        Sint8_x00197218 pa_xb3;
        Sint8_x00197218 pa_xb4;
        Sint8_x00197218 pa_xb5;
        Sint8_x00197218 pa_xb6;
        Sint8_x00197218 pa_xb7;
        Sint8_x00197218 pa_xb8;
        Sint8_x00197218 pa_xb9;
        Sint8_x00197218 pa_xba;
        Sint8_x00197218 pa_xbb;
        Sint8_x00197218 pa_xbc;
        Uint8_x00197218 padbd[0xD8 - 0xBD];
        Sint64_x00197218 pts;
} SFMPV_FRM_x00197218;
typedef struct {
        Sint32_x00197218 cwidth;
        Sint32_x00197218 cheight;
        Sint32_x00197218 width;
        Sint32_x00197218 height;
        Sint32_x00197218 x10;
        Sint32_x00197218 max_width;
        Sint32_x00197218 max_height;
        Sint32_x00197218 nfrm;
        Sint32_x00197218 x20;
} SFMPV_PARA_x00197218;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197218 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197218 *curfrm;
        Sint32_x00197218 picstat;
        Sint32_x00197218 dlmmask;
        Sint32_x00197218 termflg;
        Sint32_x00197218 gopstat;
        Sint32_x00197218 nskip;
        Sint32_x00197218 nconcat;
        Uint8_x00197218 picatr[0x80];
        Sint32_x00197218 last_ngop;
        Sint32_x00197218 newgop;
        Sint32_x00197218 vbvsiz;
        Sint32_x00197218 pts_tmpref;
        Sint32_x00197218 pts_ofst;
        Sint32_x00197218 pts_max;
        Sint32_x00197218 pad124;
        SFPTS_ENT_x00197218 ptsent;
        Sint32_x00197218 refidx[2];
        SFMPV_PLANE_x00197218 rfbuf[2];
        SFMPV_FRM_x00197218 *ref[2];
        SFMPV_FRM_x00197218 *pendfrm;
        Sint32_x00197218 skipret;
        Sint32_x00197218 dlmwait;
        Sint32_x00197218 tmpref_adj;
        Sint32_x00197218 nfrm;
        Sint32_x00197218 pad17c;
        SFMPV_FRM_x00197218 frm[16];
        void *picusr_buf;
        Sint32_x00197218 picusr_num;
        Sint32_x00197218 picusr_siz;
        Uint8_x00197218 *picusr_dat;
        Sint32_x00197218 picusr_len;
        SFMPV_PICUSR_x00197218 picusr[16];
        Sint32_x00197218 pad1014;
        Sint64_x00197218 pts;
} SFMPV_WORK_x00197218;
typedef struct {
        Sint32_x00197218 raw[0x2A];
} SFD_PLYINF_x00197218 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197218 code);
        void *obj;
        Sint32_x00197218 code;
        Sint32_x00197218 x0c;
        Sint32_x00197218 x10;
} SFLIB_ERRINF_x00197218;
typedef struct {
        Sint32_x00197218 codec;
        Sint32_x00197218 layer;
        Sint32_x00197218 chnum;
        Sint32_x00197218 smphz;
} SFHDS_AUD_x00197218;
typedef struct {
        Sint32_x00197218 codec;
        Sint32_x00197218 bitrate;
        Sint32_x00197218 picw;
        Sint32_x00197218 pich;
        Sint32_x00197218 picrate;
        Sint32_x00197218 ftr_eff;
        Sint32_x00197218 ftr_coltype;
        Sint32_x00197218 ftr_pictype;
        Sint32_x00197218 ftr_fixflg;
        Sint32_x00197218 ftr_shcfixflg;
        Sint32_x00197218 ftr_expand;
        Sint32_x00197218 ftr_gopn;
        Sint32_x00197218 ftr_gopm;
} SFHDS_VID_x00197218;
typedef struct {
        Sint32_x00197218 valid;
        Sint32_x00197218 ver_major;
        Sint32_x00197218 ver_minor;
        Sint32_x00197218 byterate;
        Sint32_x00197218 hdrsiz;
        Sint32_x00197218 packtype;
        Sint32_x00197218 pketsizlen;
        Sint32_x00197218 packsiz;
        Sint32_x00197218 numelem_tot;
        Sint32_x00197218 numelem_aud;
        Sint32_x00197218 numelem_vid;
        Sint32_x00197218 numelem_prv;
        Sint32_x00197218 maxplylen_aud;
        Sint32_x00197218 maxplylen_vid;
        Sint32_x00197218 maxfrmnum;
        Sint32_x00197218 stmid_prv1;
        Sint32_x00197218 stmid_prv2;
        Sint32_x00197218 stmid_aud;
        Sint32_x00197218 stmid_vid;
        SFHDS_AUD_x00197218 aud;
        SFHDS_VID_x00197218 vid;
        Sint32_x00197218 rawsiz;
        Uint8_x00197218 raw[0x800];
} SFHDS_FHD_x00197218;
typedef struct {
        Uint8_x00197218 data[2][0xB0];
        Sint32_x00197218 len[2];
} SFSEE_SYSHD_x00197218;
typedef struct {
        Sint32_x00197218 analyzed;
        Sint32_x00197218 ncount;
        Sint32_x00197218 tscale;
        Sint32_x00197218 nvid;
        Sint32_x00197218 naud;
        Sint32_x00197218 pad14;
        Sint64_x00197218 scr_base;
        Sint64_x00197218 pts_min;
        Sint32_x00197218 stmid_vid;
        Sint32_x00197218 stmid_aud;
        SFSEE_SYSHD_x00197218 syshd;
} SFSEE_SHDR_x00197218;
typedef struct {
        Sint32_x00197218 analyzed;
        Sint32_x00197218 ncount;
        Sint32_x00197218 tscale;
        SFHDS_FHD_x00197218 fhd;
        SFSEE_SHDR_x00197218 shdr;
        Uint8_x00197218 pada38[0xAD0 - 0xA38];
        Sint32_x00197218 a1hdr;
        Sint32_x00197218 a1ncount;
        Sint32_x00197218 a1tscale;
        Uint8_x00197218 padadc[0xD0C - 0xADC];
        Sint32_x00197218 a2hdr;
        Sint32_x00197218 a2ncount;
        Sint32_x00197218 a2tscale;
        Uint8_x00197218 padd18[0xDA8 - 0xD18];
        Sint32_x00197218 rate;
        Sint32_x00197218 fsize_est;
        Sint32_x00197218 tot_est;
        Sint32_x00197218 tunit_est;
        Sint32_x00197218 av_a;
        Sint32_x00197218 av_b;
        Sint32_x00197218 paddc0;
        Sint32_x00197218 fsize;
        Sint32_x00197218 tottime;
        Sint32_x00197218 tunit;
        Sint32_x00197218 byterate;
        Sint32_x00197218 seekpos;
} SFSEE_WORK_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Sint32_x00197218 pos;
        Sint32_x00197218 x08;
} SFSEE_REQ_x00197218;
typedef struct {
        Sint32_x00197218 bsize;
        Sint32_x00197218 xsize;
        void *buf;
        Sint32_x00197218 maxnch;
        Sint32_x00197218 x10;
        Sint32_x00197218 worksize;
        void *work;
} SFADXT_PARA_x00197218;
typedef struct {
        void *adxt;
        SJ_x00197218 sj;
        SFADXT_PARA_x00197218 para;
        Sint32_x00197218 tcount;
        Sint32_x00197218 tunit;
        Sint32_x00197218 pause;
        Sint32_x00197218 discard;
        Sint32_x00197218 seekflg;
        Sint32_x00197218 smplofst;
        void (*func)(SFD_x00197218 sfd, Uint8_x00197218 *data, Sint32_x00197218 len, Sint32_x00197218 *nbyte);
        Sint32_x00197218 x40;
        Sint32_x00197218 svrfreq;
        Sint32_x00197218 totbyte;
        Sint32_x00197218 x4c;
} SFADXT_WORK_x00197218;
typedef struct {
        SFSEE_WORK_x00197218 *wk;
        SFSEE_REQ_x00197218 req;
} SFSEE_HN_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Uint32_x00197218 adr;
        Sint32_x00197218 size[7];
        Sint32_x00197218 x24;
        Sint32_x00197218 unit;
        Sint32_x00197218 x2c;
        Sint32_x00197218 x30;
        Sint32_x00197218 x34;
        Sint32_x00197218 x38;
        void *hnwork;
        Sint32_x00197218 hnwksiz;
} SFD_CREPRM_x00197218;
typedef struct {
        void *x00;
        Sint32_x00197218 x04;
        Sint32_x00197218 x08;
} SFPLY_PTSM_x00197218;
typedef struct {
        Sint64_x00197218 sum;
        Sint64_x00197218 min;
        Sint64_x00197218 max;
        Sint32_x00197218 cnt;
} SFTMR_TSUM_x00197218;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197218 nvid;
        Sint32_x00197218 naud;
        Sint32_x00197218 x0c;
        Sint64_x00197218 pts_min;
        Sint64_x00197218 pts_min2;
        Sint32_x00197218 concat_cnt;
        Sint32_x00197218 last_vid;
        Sint32_x00197218 last_aud;
        Sint32_x00197218 first_vid;
        Sint32_x00197218 first_aud;
        Sint32_x00197218 cur_vid;
        Sint32_x00197218 cur_aud;
        Sint32_x00197218 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197218 stmid);
        void *outobj;
        Sint32_x00197218 skip;
        Sint32_x00197218 x15c;
        Sint32_x00197218 x160;
        Sint32_x00197218 x164;
} SFMPS_WORK_x00197218;
typedef struct SFD_OBJ_x00197218 {
        SFD_CREPRM_x00197218 prm;
        Sint32_x00197218 chg_flg;
        Sint32_x00197218 stat;
        Sint32_x00197218 req;
        Sint32_x00197218 pause_sw;
        Sint32_x00197218 pause_cnt;
        Uint8_x00197218 pad58[0x74 - 0x58];
        Sint32_x00197218 pad74;
        SFHDS_FHD_x00197218 fhd;
        Sint32_x00197218 x90c;
        Sint32_x00197218 x910;
        Sint32_x00197218 x914;
        Sint32_x00197218 x918;
        Sint32_x00197218 x91c;
        Sint32_x00197218 picrate;
        Sint32_x00197218 x924;
        Sint32_x00197218 x928;
        Sint32_x00197218 x92c;
        Sint32_x00197218 numelem_aud;
        Sint32_x00197218 numelem_vid;
        Sint32_x00197218 numelem_prv;
        Sint32_x00197218 x93c;
        Sint32_x00197218 x940;
        Sint32_x00197218 x944;
        Sint32_x00197218 x948;
        Sint32_x00197218 x94c;
        SFD_PLYINF_x00197218 plyinf;
        SFLIB_ERRINF_x00197218 err;
        Sint32_x00197218 cond[100];
        Sint32_x00197218 cond_def[100];
        Uint8_x00197218 padD24[4];
        SFCON_x00197218 con;
        Uint8_x00197218 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197218))];
        Uint8_x00197218 tst[0x1C0];
        Uint8_x00197218 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197218 ptsm;
        Uint8_x00197218 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197218 buf[8];
        SFD_VFRM_x00197218 vfrm[16];
        SFD_TR_x00197218 tr[9];
        Sint32_x00197218 pad218c;
        SFMPS_WORK_x00197218 mps;
        Uint8_x00197218 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197218 mpv;
        SFADXT_WORK_x00197218 adxt;
        Uint8_x00197218 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197218 aoap;
        SFUO_x00197218 uo_tbl;
        Sint32_x00197218 pad34c4;
        SFSEE_HN_x00197218 see;
        SFTMR_TSUM_x00197218 tsum[6];
} SFD_OBJ_x00197218;
Sint32_x00197218 SFSET_GetCond_x00197218(SFD_x00197218 sfd, Sint32_x00197218 id) __asm__("func_001999E0");
Sint32_x00197218 SFTRN_GetTermFlg_x00197218(SFD_x00197218 sfd, Sint32_x00197218 id) __asm__("func_0019C170");
Sint32_x00197218 SFBUF_GetTermFlg_x00197218(SFD_x00197218 sfd, Sint32_x00197218 buf) __asm__("func_0018B770");
extern void (*SFPLY_recordgetfrm_x00197218)(SFD_x00197218 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197218)(SFPLY_PTSM_x00197218 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197218)(SFPLY_PTSM_x00197218 *ptsm) __asm__("SFPLY_ResetPtsm");
Bool_x00197218 func_00197218_x00197218(SFD_x00197218 sfd) __asm__("func_00197218");
/* sfply_IsTermAny: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x00197218 func_00197218_x00197218(SFD_x00197218 sfd)
{
        Uint32_x00197218 i;
        if (SFSET_GetCond_x00197218(sfd, 5) && SFTRN_GetTermFlg_x00197218(sfd, 6)) {
                return 1;
        }
        if (SFSET_GetCond_x00197218(sfd, 6) && SFTRN_GetTermFlg_x00197218(sfd, 7)) {
                return 1;
        }
        for (i = 0; i < 8; i++) {
                if (SFBUF_GetTermFlg_x00197218(sfd, i)) {
                        return 1;
                }
        }
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001972B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197370);
s32 func_00197460_x001973F0() __asm__("func_00197460");
s32 func_001974D0_x001973F0(s32) __asm__("func_001974D0");
s32 func_00197598_x001973F0(s32) __asm__("func_00197598");
s32 func_001975F0_x001973F0(s32) __asm__("func_001975F0");
s32 func_00197680_x001973F0(s32) __asm__("func_00197680");
void func_001973F0_x001973F0(s32 arg0) __asm__("func_001973F0");
void func_001973F0_x001973F0(s32 arg0) {
    if (func_00197460_x001973F0() != 0) {
        goto block_6;
    }
    if (func_001974D0_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_00197598_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_001975F0_x001973F0(arg0) != 0) {
        goto block_5;
    }
    return;
block_5:
block_6:
    func_00197680_x001973F0(arg0);
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197460);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001974D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197598);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001975F0);
typedef unsigned char Uint8_x00197680;
typedef signed char Sint8_x00197680;
typedef signed short Sint16_x00197680;
typedef unsigned int Uint32_x00197680;
typedef signed int Sint32_x00197680;
typedef signed long long Sint64_x00197680;
typedef char Char8_x00197680;
typedef struct SJ_OBJ_x00197680 *SJ_x00197680;
typedef struct {
        Uint8_x00197680 *data;
        Sint32_x00197680 len;
} SJCK_x00197680;
typedef struct {
        Uint8_x00197680 data[16];
} SJUUID_x00197680;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197680 sj);
        const SJUUID_x00197680 *(*GetUuid)(SJ_x00197680 sj);
        void (*Reset)(SJ_x00197680 sj);
        void (*GetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, Sint32_x00197680 nbyte, SJCK_x00197680 *ck);
        void (*UngetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, SJCK_x00197680 *ck);
        void (*PutChunk)(SJ_x00197680 sj, Sint32_x00197680 id, SJCK_x00197680 *ck);
        Sint32_x00197680 (*GetNumData)(SJ_x00197680 sj, Sint32_x00197680 id);
        Sint32_x00197680 (*IsGetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, Sint32_x00197680 nbyte, Sint32_x00197680 *rbyte);
        void (*EntryErrFunc)(SJ_x00197680 sj, void (*func)(void *obj, Char8_x00197680 *msg), void *obj);
} SJ_IF_x00197680;
struct SJ_OBJ_x00197680 {
        SJ_IF_x00197680 *vtbl;
};
typedef struct SFD_OBJ_x00197680 *SFD_x00197680;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197680 rsv1;
        Sint32_x00197680 rsv2;
} SFUO_CH_x00197680;
typedef struct {
        Sint32_x00197680 nch;
        SFUO_CH_x00197680 ch[3];
} SFUO_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Sint32_x00197680 (*SetOutPan)(SFD_x00197680 sfd, Sint32_x00197680 ch, Sint32_x00197680 pan);
        Sint32_x00197680 (*GetOutPan)(SFD_x00197680 sfd, Sint32_x00197680 ch);
        Sint32_x00197680 (*SetOutVol)(SFD_x00197680 sfd, Sint32_x00197680 vol);
        Sint32_x00197680 (*GetOutVol)(SFD_x00197680 sfd);
        void (*SetSpeed)(SFD_x00197680 sfd, Sint32_x00197680 speed);
        Sint32_x00197680 x18;
} SFAOAP_x00197680;
typedef struct {
        Uint8_x00197680 pad0[0xB8];
        Sint32_x00197680 tottime;
        Sint32_x00197680 tunit;
        Uint8_x00197680 padc0[0x150 - 0xC0];
        Sint64_x00197680 scr_base;
        Sint64_x00197680 scr_ofst;
        Sint32_x00197680 pad160;
        Sint32_x00197680 ctime;
        Sint32_x00197680 ctime_idx;
        Sint32_x00197680 ctime_que[32];
        Sint32_x00197680 tot_last;
        Sint32_x00197680 pad1F0;
        Sint32_x00197680 que_wr;
        Sint32_x00197680 que_rd;
        Sint32_x00197680 tot_que[32];
} SFCON_x00197680;
typedef struct {
        Sint32_x00197680 type;
        Sint32_x00197680 drop;
        Sint32_x00197680 hour;
        Sint32_x00197680 min;
        Sint32_x00197680 sec;
        Sint32_x00197680 frm;
        Sint32_x00197680 frm2;
        Sint16_x00197680 x1c;
        Sint16_x00197680 field;
} SFTIM_TC_x00197680;
typedef struct {
        Sint32_x00197680 valid;
        SFTIM_TC_x00197680 tc;
        Sint32_x00197680 val;
        Sint32_x00197680 unit;
} SFTIM_TTU_x00197680;
typedef struct {
        Sint64_x00197680 pts;
        Uint32_x00197680 pos;
        Uint32_x00197680 len;
} SFPTS_ENT_x00197680;
typedef struct {
        SFPTS_ENT_x00197680 *ent;
        Sint32_x00197680 num;
        Sint32_x00197680 cnt;
        Sint32_x00197680 wr;
        Sint32_x00197680 rd;
} SFPTS_QUE_x00197680;
typedef struct {
        Sint32_x00197680 raw[0x20];
} SFD_VFRM_INF_x00197680;
typedef struct {
        void *frm;
        Sint32_x00197680 x04;
        SFD_VFRM_INF_x00197680 inf;
} SFD_VFRM_x00197680;
typedef struct {
        Sint32_x00197680 kind;
        SJ_x00197680 sj;
        Uint32_x00197680 ofst;
        Sint32_x00197680 size;
        Sint32_x00197680 xsize;
        Sint32_x00197680 x14;
} SFBUF_SUP_x00197680;
typedef struct {
        SFBUF_SUP_x00197680 sup;
        Uint8_x00197680 *dlm_pos;
        Sint32_x00197680 dlm_len;
        Sint32_x00197680 wtot;
        Sint32_x00197680 rtot;
        SFPTS_QUE_x00197680 ptsque;
} SFBUF_RING_x00197680;
typedef struct {
        Sint32_x00197680 mode;
        Sint32_x00197680 used;
        Sint32_x00197680 prepflg;
        Sint32_x00197680 termflg;
        union {
                SFBUF_RING_x00197680 ring;
                struct {
                        Uint32_x00197680 adr;
                        Sint32_x00197680 size;
                        Sint32_x00197680 x18;
                        Sint32_x00197680 x1c;
                        SFD_VFRM_x00197680 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197680 adr;
                        Sint32_x00197680 size;
                        Sint32_x00197680 rsv[7];
                        Sint32_x00197680 rsv2[3];
                } aout;
                SFUO_CH_x00197680 uoch[3];
        } u;
        Sint32_x00197680 in_tr;
        Sint32_x00197680 out_tr;
        Sint32_x00197680 rsv[8];
} SFBUF_WORK_x00197680;
typedef Sint32_x00197680 (*SFD_TR_FUNC_x00197680)();
typedef struct {
        Sint32_x00197680 prepflg;
        Sint32_x00197680 termflg;
        void *hn;
        SFD_TR_FUNC_x00197680 *trif;
        Sint32_x00197680 bufin;
        Sint32_x00197680 bufout;
        Sint32_x00197680 bufout2;
        Sint32_x00197680 bufout3;
        Sint32_x00197680 x20;
        Uint8_x00197680 pad24[0x44 - 0x24];
} SFD_TR_x00197680;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197680 cwidth;
        Sint16_x00197680 ywidth;
} SFMPV_PLANE_x00197680;
typedef struct {
        void *buf;
        Sint32_x00197680 len;
} SFMPV_PICUSR_x00197680;
typedef struct {
        Sint32_x00197680 stat;
        Sint32_x00197680 lock;
        void *buf;
        SFTIM_TTU_x00197680 ttu;
        Sint32_x00197680 ftime;
        Sint32_x00197680 tunit;
        Sint32_x00197680 ndct;
        Sint32_x00197680 nbyte;
        Sint32_x00197680 gopno;
        Sint32_x00197680 x4c;
        Sint32_x00197680 x50;
        SFMPV_PICUSR_x00197680 *picusr;
        Sint32_x00197680 pa_width;
        Sint32_x00197680 pa_height;
        Sint32_x00197680 pa_mb_width;
        Sint32_x00197680 pa_mb_height;
        Sint32_x00197680 pa_frame_rate;
        Sint32_x00197680 tmpref;
        Sint32_x00197680 pa_pic_type;
        Sint32_x00197680 pa_tc_drop;
        Sint32_x00197680 pa_tc_hour;
        Sint32_x00197680 pa_tc_min;
        Sint32_x00197680 pa_tc_sec;
        Sint32_x00197680 pa_tc_pic;
        Sint32_x00197680 x88;
        Sint32_x00197680 x8c;
        Sint32_x00197680 pa_x90[3];
        Sint32_x00197680 pa_x9c[3];
        Sint16_x00197680 pa_xa8;
        Sint16_x00197680 pa_xaa;
        Sint8_x00197680 pa_xac;
        Sint8_x00197680 pa_xad;
        Sint8_x00197680 pa_xae;
        Sint8_x00197680 pa_xaf;
        Sint8_x00197680 pa_xb0;
        Sint8_x00197680 pa_xb1;
        Sint8_x00197680 pa_xb2;
        Sint8_x00197680 pa_xb3;
        Sint8_x00197680 pa_xb4;
        Sint8_x00197680 pa_xb5;
        Sint8_x00197680 pa_xb6;
        Sint8_x00197680 pa_xb7;
        Sint8_x00197680 pa_xb8;
        Sint8_x00197680 pa_xb9;
        Sint8_x00197680 pa_xba;
        Sint8_x00197680 pa_xbb;
        Sint8_x00197680 pa_xbc;
        Uint8_x00197680 padbd[0xD8 - 0xBD];
        Sint64_x00197680 pts;
} SFMPV_FRM_x00197680;
typedef struct {
        Sint32_x00197680 cwidth;
        Sint32_x00197680 cheight;
        Sint32_x00197680 width;
        Sint32_x00197680 height;
        Sint32_x00197680 x10;
        Sint32_x00197680 max_width;
        Sint32_x00197680 max_height;
        Sint32_x00197680 nfrm;
        Sint32_x00197680 x20;
} SFMPV_PARA_x00197680;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197680 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197680 *curfrm;
        Sint32_x00197680 picstat;
        Sint32_x00197680 dlmmask;
        Sint32_x00197680 termflg;
        Sint32_x00197680 gopstat;
        Sint32_x00197680 nskip;
        Sint32_x00197680 nconcat;
        Uint8_x00197680 picatr[0x80];
        Sint32_x00197680 last_ngop;
        Sint32_x00197680 newgop;
        Sint32_x00197680 vbvsiz;
        Sint32_x00197680 pts_tmpref;
        Sint32_x00197680 pts_ofst;
        Sint32_x00197680 pts_max;
        Sint32_x00197680 pad124;
        SFPTS_ENT_x00197680 ptsent;
        Sint32_x00197680 refidx[2];
        SFMPV_PLANE_x00197680 rfbuf[2];
        SFMPV_FRM_x00197680 *ref[2];
        SFMPV_FRM_x00197680 *pendfrm;
        Sint32_x00197680 skipret;
        Sint32_x00197680 dlmwait;
        Sint32_x00197680 tmpref_adj;
        Sint32_x00197680 nfrm;
        Sint32_x00197680 pad17c;
        SFMPV_FRM_x00197680 frm[16];
        void *picusr_buf;
        Sint32_x00197680 picusr_num;
        Sint32_x00197680 picusr_siz;
        Uint8_x00197680 *picusr_dat;
        Sint32_x00197680 picusr_len;
        SFMPV_PICUSR_x00197680 picusr[16];
        Sint32_x00197680 pad1014;
        Sint64_x00197680 pts;
} SFMPV_WORK_x00197680;
typedef struct {
        Sint32_x00197680 raw[0x2A];
} SFD_PLYINF_x00197680 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197680 code);
        void *obj;
        Sint32_x00197680 code;
        Sint32_x00197680 x0c;
        Sint32_x00197680 x10;
} SFLIB_ERRINF_x00197680;
typedef struct {
        Sint32_x00197680 codec;
        Sint32_x00197680 layer;
        Sint32_x00197680 chnum;
        Sint32_x00197680 smphz;
} SFHDS_AUD_x00197680;
typedef struct {
        Sint32_x00197680 codec;
        Sint32_x00197680 bitrate;
        Sint32_x00197680 picw;
        Sint32_x00197680 pich;
        Sint32_x00197680 picrate;
        Sint32_x00197680 ftr_eff;
        Sint32_x00197680 ftr_coltype;
        Sint32_x00197680 ftr_pictype;
        Sint32_x00197680 ftr_fixflg;
        Sint32_x00197680 ftr_shcfixflg;
        Sint32_x00197680 ftr_expand;
        Sint32_x00197680 ftr_gopn;
        Sint32_x00197680 ftr_gopm;
} SFHDS_VID_x00197680;
typedef struct {
        Sint32_x00197680 valid;
        Sint32_x00197680 ver_major;
        Sint32_x00197680 ver_minor;
        Sint32_x00197680 byterate;
        Sint32_x00197680 hdrsiz;
        Sint32_x00197680 packtype;
        Sint32_x00197680 pketsizlen;
        Sint32_x00197680 packsiz;
        Sint32_x00197680 numelem_tot;
        Sint32_x00197680 numelem_aud;
        Sint32_x00197680 numelem_vid;
        Sint32_x00197680 numelem_prv;
        Sint32_x00197680 maxplylen_aud;
        Sint32_x00197680 maxplylen_vid;
        Sint32_x00197680 maxfrmnum;
        Sint32_x00197680 stmid_prv1;
        Sint32_x00197680 stmid_prv2;
        Sint32_x00197680 stmid_aud;
        Sint32_x00197680 stmid_vid;
        SFHDS_AUD_x00197680 aud;
        SFHDS_VID_x00197680 vid;
        Sint32_x00197680 rawsiz;
        Uint8_x00197680 raw[0x800];
} SFHDS_FHD_x00197680;
typedef struct {
        Uint8_x00197680 data[2][0xB0];
        Sint32_x00197680 len[2];
} SFSEE_SYSHD_x00197680;
typedef struct {
        Sint32_x00197680 analyzed;
        Sint32_x00197680 ncount;
        Sint32_x00197680 tscale;
        Sint32_x00197680 nvid;
        Sint32_x00197680 naud;
        Sint32_x00197680 pad14;
        Sint64_x00197680 scr_base;
        Sint64_x00197680 pts_min;
        Sint32_x00197680 stmid_vid;
        Sint32_x00197680 stmid_aud;
        SFSEE_SYSHD_x00197680 syshd;
} SFSEE_SHDR_x00197680;
typedef struct {
        Sint32_x00197680 analyzed;
        Sint32_x00197680 ncount;
        Sint32_x00197680 tscale;
        SFHDS_FHD_x00197680 fhd;
        SFSEE_SHDR_x00197680 shdr;
        Uint8_x00197680 pada38[0xAD0 - 0xA38];
        Sint32_x00197680 a1hdr;
        Sint32_x00197680 a1ncount;
        Sint32_x00197680 a1tscale;
        Uint8_x00197680 padadc[0xD0C - 0xADC];
        Sint32_x00197680 a2hdr;
        Sint32_x00197680 a2ncount;
        Sint32_x00197680 a2tscale;
        Uint8_x00197680 padd18[0xDA8 - 0xD18];
        Sint32_x00197680 rate;
        Sint32_x00197680 fsize_est;
        Sint32_x00197680 tot_est;
        Sint32_x00197680 tunit_est;
        Sint32_x00197680 av_a;
        Sint32_x00197680 av_b;
        Sint32_x00197680 paddc0;
        Sint32_x00197680 fsize;
        Sint32_x00197680 tottime;
        Sint32_x00197680 tunit;
        Sint32_x00197680 byterate;
        Sint32_x00197680 seekpos;
} SFSEE_WORK_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Sint32_x00197680 pos;
        Sint32_x00197680 x08;
} SFSEE_REQ_x00197680;
typedef struct {
        Sint32_x00197680 bsize;
        Sint32_x00197680 xsize;
        void *buf;
        Sint32_x00197680 maxnch;
        Sint32_x00197680 x10;
        Sint32_x00197680 worksize;
        void *work;
} SFADXT_PARA_x00197680;
typedef struct {
        void *adxt;
        SJ_x00197680 sj;
        SFADXT_PARA_x00197680 para;
        Sint32_x00197680 tcount;
        Sint32_x00197680 tunit;
        Sint32_x00197680 pause;
        Sint32_x00197680 discard;
        Sint32_x00197680 seekflg;
        Sint32_x00197680 smplofst;
        void (*func)(SFD_x00197680 sfd, Uint8_x00197680 *data, Sint32_x00197680 len, Sint32_x00197680 *nbyte);
        Sint32_x00197680 x40;
        Sint32_x00197680 svrfreq;
        Sint32_x00197680 totbyte;
        Sint32_x00197680 x4c;
} SFADXT_WORK_x00197680;
typedef struct {
        SFSEE_WORK_x00197680 *wk;
        SFSEE_REQ_x00197680 req;
} SFSEE_HN_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Uint32_x00197680 adr;
        Sint32_x00197680 size[7];
        Sint32_x00197680 x24;
        Sint32_x00197680 unit;
        Sint32_x00197680 x2c;
        Sint32_x00197680 x30;
        Sint32_x00197680 x34;
        Sint32_x00197680 x38;
        void *hnwork;
        Sint32_x00197680 hnwksiz;
} SFD_CREPRM_x00197680;
typedef struct {
        void *x00;
        Sint32_x00197680 x04;
        Sint32_x00197680 x08;
} SFPLY_PTSM_x00197680;
typedef struct {
        Sint64_x00197680 sum;
        Sint64_x00197680 min;
        Sint64_x00197680 max;
        Sint32_x00197680 cnt;
} SFTMR_TSUM_x00197680;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197680 nvid;
        Sint32_x00197680 naud;
        Sint32_x00197680 x0c;
        Sint64_x00197680 pts_min;
        Sint64_x00197680 pts_min2;
        Sint32_x00197680 concat_cnt;
        Sint32_x00197680 last_vid;
        Sint32_x00197680 last_aud;
        Sint32_x00197680 first_vid;
        Sint32_x00197680 first_aud;
        Sint32_x00197680 cur_vid;
        Sint32_x00197680 cur_aud;
        Sint32_x00197680 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197680 stmid);
        void *outobj;
        Sint32_x00197680 skip;
        Sint32_x00197680 x15c;
        Sint32_x00197680 x160;
        Sint32_x00197680 x164;
} SFMPS_WORK_x00197680;
typedef struct SFD_OBJ_x00197680 {
        SFD_CREPRM_x00197680 prm;
        Sint32_x00197680 chg_flg;
        Sint32_x00197680 stat;
        Sint32_x00197680 req;
        Sint32_x00197680 pause_sw;
        Sint32_x00197680 pause_cnt;
        Uint8_x00197680 pad58[0x74 - 0x58];
        Sint32_x00197680 pad74;
        SFHDS_FHD_x00197680 fhd;
        Sint32_x00197680 x90c;
        Sint32_x00197680 x910;
        Sint32_x00197680 x914;
        Sint32_x00197680 x918;
        Sint32_x00197680 x91c;
        Sint32_x00197680 picrate;
        Sint32_x00197680 x924;
        Sint32_x00197680 x928;
        Sint32_x00197680 x92c;
        Sint32_x00197680 numelem_aud;
        Sint32_x00197680 numelem_vid;
        Sint32_x00197680 numelem_prv;
        Sint32_x00197680 x93c;
        Sint32_x00197680 x940;
        Sint32_x00197680 x944;
        Sint32_x00197680 x948;
        Sint32_x00197680 x94c;
        SFD_PLYINF_x00197680 plyinf;
        SFLIB_ERRINF_x00197680 err;
        Sint32_x00197680 cond[100];
        Sint32_x00197680 cond_def[100];
        Uint8_x00197680 padD24[4];
        SFCON_x00197680 con;
        Uint8_x00197680 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197680))];
        Uint8_x00197680 tst[0x1C0];
        Uint8_x00197680 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197680 ptsm;
        Uint8_x00197680 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197680 buf[8];
        SFD_VFRM_x00197680 vfrm[16];
        SFD_TR_x00197680 tr[9];
        Sint32_x00197680 pad218c;
        SFMPS_WORK_x00197680 mps;
        Uint8_x00197680 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197680 mpv;
        SFADXT_WORK_x00197680 adxt;
        Uint8_x00197680 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197680 aoap;
        SFUO_x00197680 uo_tbl;
        Sint32_x00197680 pad34c4;
        SFSEE_HN_x00197680 see;
        SFTMR_TSUM_x00197680 tsum[6];
} SFD_OBJ_x00197680;
extern void (*SFPLY_recordgetfrm_x00197680)(SFD_x00197680 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197680)(SFPLY_PTSM_x00197680 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197680)(SFPLY_PTSM_x00197680 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197680 sfply_StopTr_x00197680(SFD_x00197680 sfd) __asm__("func_00197EC8");
Sint32_x00197680 func_00197680_x00197680(SFD_x00197680 sfd) __asm__("func_00197680");
/* sfply_StopPlay: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197680 func_00197680_x00197680(SFD_x00197680 sfd)
{
        Sint32_x00197680 ret;
        ret = sfply_StopTr_x00197680(sfd);
        if (ret != 0) {
                return ret;
        }
        sfd->req = 6;
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001976B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197778);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197810);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197830);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197870);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197A60);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197AC8);
s32 func_00179018_x00197B20() __asm__("func_00179018");
s32 func_0019B948_x00197B20() __asm__("func_0019B948");
void func_00197B20_x00197B20(s32 arg0) __asm__("func_00197B20");
void func_00197B20_x00197B20(s32 arg0)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  var_a0 = arg0;
  var_s1 = 4;
  func_00179018_x00197B20(arg0, 0, 0x30);
  var_s0 = var_a0;
  do
  {
    var_a0 = var_s0;
    var_s0 += 0x20;
    var_s1 -= 1;
    func_0019B948_x00197B20(var_a0);
    var_a0 = var_s0;
  }
  while (var_s1 >= 0);
  func_0019B948_x00197B20(arg0 - -0xA0);
}
struct MovieModule_x00197B80 {
    char pad_94c[0x94c];
    int value_94c;
};
typedef void (*MovieCallback_x00197B80)(struct MovieModule_x00197B80 *, void *, int *);
extern MovieCallback_x00197B80 fn_12_2D73C_x00197B80(struct MovieModule_x00197B80 *, int) __asm__("func_001999E0");
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) __asm__("func_00197B80");
/* fn_12_2BA6C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2BA6C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) {
    int *value = &module->value_94c;
    MovieCallback_x00197B80 callback;
    *value += delta;
    callback = fn_12_2D73C_x00197B80(module, 0x24);
    if (callback != 0) {
        callback(module, arg, value);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197BE8);
s32 func_0019C040_x00197C50(s32, s32) __asm__("func_0019C040");
void func_00197C50_x00197C50(s32 a0) __asm__("func_00197C50");
void func_00197C50_x00197C50(s32 a0) {
    func_0019C040_x00197C50(a0, 3);
}
s32 func_0018A478_x00197C68(s32) __asm__("func_0018A478");
s32 func_0018C968_x00197C68(s32) __asm__("func_0018C968");
s32 func_0018D650_x00197C68(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00197C68() __asm__("func_0018D870");
s32 func_00197D08_x00197C68(s32) __asm__("func_00197D08");
s32 func_00197E40_x00197C68(s32) __asm__("func_00197E40");
extern s32 D_00426AE4_x00197C68 __asm__("D_00426AE4");
s32 func_00197C68_x00197C68(s32 arg0) __asm__("func_00197C68");
s32 func_00197C68_x00197C68(s32 arg0) {
  s32 new_var;
  s32 *var_v1;
  s32 var_a0;
  s32 temp_a1;
  if (((long) func_0018D870_x00197C68(arg0)) != 0)
  {
    return func_0018D650_x00197C68(0, 0xFF000131);
  }
  func_00197E40_x00197C68(arg0);
  func_0018C968_x00197C68(0x78 + arg0);
  func_0018A478_x00197C68(arg0);
  new_var = func_00197D08_x00197C68(arg0);
  var_a0 = 7;
  temp_a1 = new_var;
  var_v1 = &D_00426AE4_x00197C68;
  do
  {
    if ((*var_v1) == arg0)
    {
      *var_v1 = 0;
    }
    var_a0 -= 1;
    var_v1 += 1;
  }
  while (var_a0 >= 0);
  return temp_a1;
}
s32 func_0019C040_x00197D08() __asm__("func_0019C040");
void func_00197D08_x00197D08(u8 *arg0) __asm__("func_00197D08");
void func_00197D08_x00197D08(u8 *arg0) {
  *((s32 *) (((u8 *) arg0) + 0x4C)) = (*((s32 *) (((u8 *) arg0) + 0x48)) = 0);
  func_0019C040_x00197D08(arg0, 4);
}
s32 func_0018D650_x00197D30(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00197D30() __asm__("func_0018D870");
s32 func_00196548_x00197D30(void *) __asm__("func_00196548");
s32 func_00197DB0_x00197D30(void *) __asm__("func_00197DB0");
s32 func_001999E0_x00197D30(void *, s32) __asm__("func_001999E0");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0) __asm__("func_00197D30");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0)
{
  int new_var;
  s32 *new_var2;
  new_var = func_0018D870_x00197D30() != 0;
  if (new_var)
  {
    func_0018D650_x00197D30(0, 0xFF000132);
    return;
  }
  if (func_001999E0_x00197D30(arg0, 0x2F) == 1)
  {
    func_00196548_x00197D30(arg0);
  }
  else
  {
    func_00197DB0_x00197D30(arg0);
  }
  new_var2 = (s32 *) (((u8 *) arg0) + 0x44);
  *new_var2 = 1;
}
s32 func_00197DB0(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 4;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197DC0);
typedef unsigned char Uint8_x00197DE8;
typedef signed char Sint8_x00197DE8;
typedef signed short Sint16_x00197DE8;
typedef unsigned int Uint32_x00197DE8;
typedef signed int Sint32_x00197DE8;
typedef signed long long Sint64_x00197DE8;
typedef char Char8_x00197DE8;
typedef struct SJ_OBJ_x00197DE8 *SJ_x00197DE8;
typedef struct {
        Uint8_x00197DE8 *data;
        Sint32_x00197DE8 len;
} SJCK_x00197DE8;
typedef struct {
        Uint8_x00197DE8 data[16];
} SJUUID_x00197DE8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197DE8 sj);
        const SJUUID_x00197DE8 *(*GetUuid)(SJ_x00197DE8 sj);
        void (*Reset)(SJ_x00197DE8 sj);
        void (*GetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, Sint32_x00197DE8 nbyte, SJCK_x00197DE8 *ck);
        void (*UngetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, SJCK_x00197DE8 *ck);
        void (*PutChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, SJCK_x00197DE8 *ck);
        Sint32_x00197DE8 (*GetNumData)(SJ_x00197DE8 sj, Sint32_x00197DE8 id);
        Sint32_x00197DE8 (*IsGetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, Sint32_x00197DE8 nbyte, Sint32_x00197DE8 *rbyte);
        void (*EntryErrFunc)(SJ_x00197DE8 sj, void (*func)(void *obj, Char8_x00197DE8 *msg), void *obj);
} SJ_IF_x00197DE8;
struct SJ_OBJ_x00197DE8 {
        SJ_IF_x00197DE8 *vtbl;
};
typedef struct SFD_OBJ_x00197DE8 *SFD_x00197DE8;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197DE8 rsv1;
        Sint32_x00197DE8 rsv2;
} SFUO_CH_x00197DE8;
typedef struct {
        Sint32_x00197DE8 nch;
        SFUO_CH_x00197DE8 ch[3];
} SFUO_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Sint32_x00197DE8 (*SetOutPan)(SFD_x00197DE8 sfd, Sint32_x00197DE8 ch, Sint32_x00197DE8 pan);
        Sint32_x00197DE8 (*GetOutPan)(SFD_x00197DE8 sfd, Sint32_x00197DE8 ch);
        Sint32_x00197DE8 (*SetOutVol)(SFD_x00197DE8 sfd, Sint32_x00197DE8 vol);
        Sint32_x00197DE8 (*GetOutVol)(SFD_x00197DE8 sfd);
        void (*SetSpeed)(SFD_x00197DE8 sfd, Sint32_x00197DE8 speed);
        Sint32_x00197DE8 x18;
} SFAOAP_x00197DE8;
typedef struct {
        Uint8_x00197DE8 pad0[0xB8];
        Sint32_x00197DE8 tottime;
        Sint32_x00197DE8 tunit;
        Uint8_x00197DE8 padc0[0x150 - 0xC0];
        Sint64_x00197DE8 scr_base;
        Sint64_x00197DE8 scr_ofst;
        Sint32_x00197DE8 pad160;
        Sint32_x00197DE8 ctime;
        Sint32_x00197DE8 ctime_idx;
        Sint32_x00197DE8 ctime_que[32];
        Sint32_x00197DE8 tot_last;
        Sint32_x00197DE8 pad1F0;
        Sint32_x00197DE8 que_wr;
        Sint32_x00197DE8 que_rd;
        Sint32_x00197DE8 tot_que[32];
} SFCON_x00197DE8;
typedef struct {
        Sint32_x00197DE8 type;
        Sint32_x00197DE8 drop;
        Sint32_x00197DE8 hour;
        Sint32_x00197DE8 min;
        Sint32_x00197DE8 sec;
        Sint32_x00197DE8 frm;
        Sint32_x00197DE8 frm2;
        Sint16_x00197DE8 x1c;
        Sint16_x00197DE8 field;
} SFTIM_TC_x00197DE8;
typedef struct {
        Sint32_x00197DE8 valid;
        SFTIM_TC_x00197DE8 tc;
        Sint32_x00197DE8 val;
        Sint32_x00197DE8 unit;
} SFTIM_TTU_x00197DE8;
typedef struct {
        Sint64_x00197DE8 pts;
        Uint32_x00197DE8 pos;
        Uint32_x00197DE8 len;
} SFPTS_ENT_x00197DE8;
typedef struct {
        SFPTS_ENT_x00197DE8 *ent;
        Sint32_x00197DE8 num;
        Sint32_x00197DE8 cnt;
        Sint32_x00197DE8 wr;
        Sint32_x00197DE8 rd;
} SFPTS_QUE_x00197DE8;
typedef struct {
        Sint32_x00197DE8 raw[0x20];
} SFD_VFRM_INF_x00197DE8;
typedef struct {
        void *frm;
        Sint32_x00197DE8 x04;
        SFD_VFRM_INF_x00197DE8 inf;
} SFD_VFRM_x00197DE8;
typedef struct {
        Sint32_x00197DE8 kind;
        SJ_x00197DE8 sj;
        Uint32_x00197DE8 ofst;
        Sint32_x00197DE8 size;
        Sint32_x00197DE8 xsize;
        Sint32_x00197DE8 x14;
} SFBUF_SUP_x00197DE8;
typedef struct {
        SFBUF_SUP_x00197DE8 sup;
        Uint8_x00197DE8 *dlm_pos;
        Sint32_x00197DE8 dlm_len;
        Sint32_x00197DE8 wtot;
        Sint32_x00197DE8 rtot;
        SFPTS_QUE_x00197DE8 ptsque;
} SFBUF_RING_x00197DE8;
typedef struct {
        Sint32_x00197DE8 mode;
        Sint32_x00197DE8 used;
        Sint32_x00197DE8 prepflg;
        Sint32_x00197DE8 termflg;
        union {
                SFBUF_RING_x00197DE8 ring;
                struct {
                        Uint32_x00197DE8 adr;
                        Sint32_x00197DE8 size;
                        Sint32_x00197DE8 x18;
                        Sint32_x00197DE8 x1c;
                        SFD_VFRM_x00197DE8 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197DE8 adr;
                        Sint32_x00197DE8 size;
                        Sint32_x00197DE8 rsv[7];
                        Sint32_x00197DE8 rsv2[3];
                } aout;
                SFUO_CH_x00197DE8 uoch[3];
        } u;
        Sint32_x00197DE8 in_tr;
        Sint32_x00197DE8 out_tr;
        Sint32_x00197DE8 rsv[8];
} SFBUF_WORK_x00197DE8;
typedef Sint32_x00197DE8 (*SFD_TR_FUNC_x00197DE8)();
typedef struct {
        Sint32_x00197DE8 prepflg;
        Sint32_x00197DE8 termflg;
        void *hn;
        SFD_TR_FUNC_x00197DE8 *trif;
        Sint32_x00197DE8 bufin;
        Sint32_x00197DE8 bufout;
        Sint32_x00197DE8 bufout2;
        Sint32_x00197DE8 bufout3;
        Sint32_x00197DE8 x20;
        Uint8_x00197DE8 pad24[0x44 - 0x24];
} SFD_TR_x00197DE8;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197DE8 cwidth;
        Sint16_x00197DE8 ywidth;
} SFMPV_PLANE_x00197DE8;
typedef struct {
        void *buf;
        Sint32_x00197DE8 len;
} SFMPV_PICUSR_x00197DE8;
typedef struct {
        Sint32_x00197DE8 stat;
        Sint32_x00197DE8 lock;
        void *buf;
        SFTIM_TTU_x00197DE8 ttu;
        Sint32_x00197DE8 ftime;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 ndct;
        Sint32_x00197DE8 nbyte;
        Sint32_x00197DE8 gopno;
        Sint32_x00197DE8 x4c;
        Sint32_x00197DE8 x50;
        SFMPV_PICUSR_x00197DE8 *picusr;
        Sint32_x00197DE8 pa_width;
        Sint32_x00197DE8 pa_height;
        Sint32_x00197DE8 pa_mb_width;
        Sint32_x00197DE8 pa_mb_height;
        Sint32_x00197DE8 pa_frame_rate;
        Sint32_x00197DE8 tmpref;
        Sint32_x00197DE8 pa_pic_type;
        Sint32_x00197DE8 pa_tc_drop;
        Sint32_x00197DE8 pa_tc_hour;
        Sint32_x00197DE8 pa_tc_min;
        Sint32_x00197DE8 pa_tc_sec;
        Sint32_x00197DE8 pa_tc_pic;
        Sint32_x00197DE8 x88;
        Sint32_x00197DE8 x8c;
        Sint32_x00197DE8 pa_x90[3];
        Sint32_x00197DE8 pa_x9c[3];
        Sint16_x00197DE8 pa_xa8;
        Sint16_x00197DE8 pa_xaa;
        Sint8_x00197DE8 pa_xac;
        Sint8_x00197DE8 pa_xad;
        Sint8_x00197DE8 pa_xae;
        Sint8_x00197DE8 pa_xaf;
        Sint8_x00197DE8 pa_xb0;
        Sint8_x00197DE8 pa_xb1;
        Sint8_x00197DE8 pa_xb2;
        Sint8_x00197DE8 pa_xb3;
        Sint8_x00197DE8 pa_xb4;
        Sint8_x00197DE8 pa_xb5;
        Sint8_x00197DE8 pa_xb6;
        Sint8_x00197DE8 pa_xb7;
        Sint8_x00197DE8 pa_xb8;
        Sint8_x00197DE8 pa_xb9;
        Sint8_x00197DE8 pa_xba;
        Sint8_x00197DE8 pa_xbb;
        Sint8_x00197DE8 pa_xbc;
        Uint8_x00197DE8 padbd[0xD8 - 0xBD];
        Sint64_x00197DE8 pts;
} SFMPV_FRM_x00197DE8;
typedef struct {
        Sint32_x00197DE8 cwidth;
        Sint32_x00197DE8 cheight;
        Sint32_x00197DE8 width;
        Sint32_x00197DE8 height;
        Sint32_x00197DE8 x10;
        Sint32_x00197DE8 max_width;
        Sint32_x00197DE8 max_height;
        Sint32_x00197DE8 nfrm;
        Sint32_x00197DE8 x20;
} SFMPV_PARA_x00197DE8;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197DE8 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197DE8 *curfrm;
        Sint32_x00197DE8 picstat;
        Sint32_x00197DE8 dlmmask;
        Sint32_x00197DE8 termflg;
        Sint32_x00197DE8 gopstat;
        Sint32_x00197DE8 nskip;
        Sint32_x00197DE8 nconcat;
        Uint8_x00197DE8 picatr[0x80];
        Sint32_x00197DE8 last_ngop;
        Sint32_x00197DE8 newgop;
        Sint32_x00197DE8 vbvsiz;
        Sint32_x00197DE8 pts_tmpref;
        Sint32_x00197DE8 pts_ofst;
        Sint32_x00197DE8 pts_max;
        Sint32_x00197DE8 pad124;
        SFPTS_ENT_x00197DE8 ptsent;
        Sint32_x00197DE8 refidx[2];
        SFMPV_PLANE_x00197DE8 rfbuf[2];
        SFMPV_FRM_x00197DE8 *ref[2];
        SFMPV_FRM_x00197DE8 *pendfrm;
        Sint32_x00197DE8 skipret;
        Sint32_x00197DE8 dlmwait;
        Sint32_x00197DE8 tmpref_adj;
        Sint32_x00197DE8 nfrm;
        Sint32_x00197DE8 pad17c;
        SFMPV_FRM_x00197DE8 frm[16];
        void *picusr_buf;
        Sint32_x00197DE8 picusr_num;
        Sint32_x00197DE8 picusr_siz;
        Uint8_x00197DE8 *picusr_dat;
        Sint32_x00197DE8 picusr_len;
        SFMPV_PICUSR_x00197DE8 picusr[16];
        Sint32_x00197DE8 pad1014;
        Sint64_x00197DE8 pts;
} SFMPV_WORK_x00197DE8;
typedef struct {
        Sint32_x00197DE8 raw[0x2A];
} SFD_PLYINF_x00197DE8 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197DE8 code);
        void *obj;
        Sint32_x00197DE8 code;
        Sint32_x00197DE8 x0c;
        Sint32_x00197DE8 x10;
} SFLIB_ERRINF_x00197DE8;
typedef struct {
        Sint32_x00197DE8 codec;
        Sint32_x00197DE8 layer;
        Sint32_x00197DE8 chnum;
        Sint32_x00197DE8 smphz;
} SFHDS_AUD_x00197DE8;
typedef struct {
        Sint32_x00197DE8 codec;
        Sint32_x00197DE8 bitrate;
        Sint32_x00197DE8 picw;
        Sint32_x00197DE8 pich;
        Sint32_x00197DE8 picrate;
        Sint32_x00197DE8 ftr_eff;
        Sint32_x00197DE8 ftr_coltype;
        Sint32_x00197DE8 ftr_pictype;
        Sint32_x00197DE8 ftr_fixflg;
        Sint32_x00197DE8 ftr_shcfixflg;
        Sint32_x00197DE8 ftr_expand;
        Sint32_x00197DE8 ftr_gopn;
        Sint32_x00197DE8 ftr_gopm;
} SFHDS_VID_x00197DE8;
typedef struct {
        Sint32_x00197DE8 valid;
        Sint32_x00197DE8 ver_major;
        Sint32_x00197DE8 ver_minor;
        Sint32_x00197DE8 byterate;
        Sint32_x00197DE8 hdrsiz;
        Sint32_x00197DE8 packtype;
        Sint32_x00197DE8 pketsizlen;
        Sint32_x00197DE8 packsiz;
        Sint32_x00197DE8 numelem_tot;
        Sint32_x00197DE8 numelem_aud;
        Sint32_x00197DE8 numelem_vid;
        Sint32_x00197DE8 numelem_prv;
        Sint32_x00197DE8 maxplylen_aud;
        Sint32_x00197DE8 maxplylen_vid;
        Sint32_x00197DE8 maxfrmnum;
        Sint32_x00197DE8 stmid_prv1;
        Sint32_x00197DE8 stmid_prv2;
        Sint32_x00197DE8 stmid_aud;
        Sint32_x00197DE8 stmid_vid;
        SFHDS_AUD_x00197DE8 aud;
        SFHDS_VID_x00197DE8 vid;
        Sint32_x00197DE8 rawsiz;
        Uint8_x00197DE8 raw[0x800];
} SFHDS_FHD_x00197DE8;
typedef struct {
        Uint8_x00197DE8 data[2][0xB0];
        Sint32_x00197DE8 len[2];
} SFSEE_SYSHD_x00197DE8;
typedef struct {
        Sint32_x00197DE8 analyzed;
        Sint32_x00197DE8 ncount;
        Sint32_x00197DE8 tscale;
        Sint32_x00197DE8 nvid;
        Sint32_x00197DE8 naud;
        Sint32_x00197DE8 pad14;
        Sint64_x00197DE8 scr_base;
        Sint64_x00197DE8 pts_min;
        Sint32_x00197DE8 stmid_vid;
        Sint32_x00197DE8 stmid_aud;
        SFSEE_SYSHD_x00197DE8 syshd;
} SFSEE_SHDR_x00197DE8;
typedef struct {
        Sint32_x00197DE8 analyzed;
        Sint32_x00197DE8 ncount;
        Sint32_x00197DE8 tscale;
        SFHDS_FHD_x00197DE8 fhd;
        SFSEE_SHDR_x00197DE8 shdr;
        Uint8_x00197DE8 pada38[0xAD0 - 0xA38];
        Sint32_x00197DE8 a1hdr;
        Sint32_x00197DE8 a1ncount;
        Sint32_x00197DE8 a1tscale;
        Uint8_x00197DE8 padadc[0xD0C - 0xADC];
        Sint32_x00197DE8 a2hdr;
        Sint32_x00197DE8 a2ncount;
        Sint32_x00197DE8 a2tscale;
        Uint8_x00197DE8 padd18[0xDA8 - 0xD18];
        Sint32_x00197DE8 rate;
        Sint32_x00197DE8 fsize_est;
        Sint32_x00197DE8 tot_est;
        Sint32_x00197DE8 tunit_est;
        Sint32_x00197DE8 av_a;
        Sint32_x00197DE8 av_b;
        Sint32_x00197DE8 paddc0;
        Sint32_x00197DE8 fsize;
        Sint32_x00197DE8 tottime;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 byterate;
        Sint32_x00197DE8 seekpos;
} SFSEE_WORK_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Sint32_x00197DE8 pos;
        Sint32_x00197DE8 x08;
} SFSEE_REQ_x00197DE8;
typedef struct {
        Sint32_x00197DE8 bsize;
        Sint32_x00197DE8 xsize;
        void *buf;
        Sint32_x00197DE8 maxnch;
        Sint32_x00197DE8 x10;
        Sint32_x00197DE8 worksize;
        void *work;
} SFADXT_PARA_x00197DE8;
typedef struct {
        void *adxt;
        SJ_x00197DE8 sj;
        SFADXT_PARA_x00197DE8 para;
        Sint32_x00197DE8 tcount;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 pause;
        Sint32_x00197DE8 discard;
        Sint32_x00197DE8 seekflg;
        Sint32_x00197DE8 smplofst;
        void (*func)(SFD_x00197DE8 sfd, Uint8_x00197DE8 *data, Sint32_x00197DE8 len, Sint32_x00197DE8 *nbyte);
        Sint32_x00197DE8 x40;
        Sint32_x00197DE8 svrfreq;
        Sint32_x00197DE8 totbyte;
        Sint32_x00197DE8 x4c;
} SFADXT_WORK_x00197DE8;
typedef struct {
        SFSEE_WORK_x00197DE8 *wk;
        SFSEE_REQ_x00197DE8 req;
} SFSEE_HN_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Uint32_x00197DE8 adr;
        Sint32_x00197DE8 size[7];
        Sint32_x00197DE8 x24;
        Sint32_x00197DE8 unit;
        Sint32_x00197DE8 x2c;
        Sint32_x00197DE8 x30;
        Sint32_x00197DE8 x34;
        Sint32_x00197DE8 x38;
        void *hnwork;
        Sint32_x00197DE8 hnwksiz;
} SFD_CREPRM_x00197DE8;
typedef struct {
        void *x00;
        Sint32_x00197DE8 x04;
        Sint32_x00197DE8 x08;
} SFPLY_PTSM_x00197DE8;
typedef struct {
        Sint64_x00197DE8 sum;
        Sint64_x00197DE8 min;
        Sint64_x00197DE8 max;
        Sint32_x00197DE8 cnt;
} SFTMR_TSUM_x00197DE8;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197DE8 nvid;
        Sint32_x00197DE8 naud;
        Sint32_x00197DE8 x0c;
        Sint64_x00197DE8 pts_min;
        Sint64_x00197DE8 pts_min2;
        Sint32_x00197DE8 concat_cnt;
        Sint32_x00197DE8 last_vid;
        Sint32_x00197DE8 last_aud;
        Sint32_x00197DE8 first_vid;
        Sint32_x00197DE8 first_aud;
        Sint32_x00197DE8 cur_vid;
        Sint32_x00197DE8 cur_aud;
        Sint32_x00197DE8 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197DE8 stmid);
        void *outobj;
        Sint32_x00197DE8 skip;
        Sint32_x00197DE8 x15c;
        Sint32_x00197DE8 x160;
        Sint32_x00197DE8 x164;
} SFMPS_WORK_x00197DE8;
typedef struct SFD_OBJ_x00197DE8 {
        SFD_CREPRM_x00197DE8 prm;
        Sint32_x00197DE8 chg_flg;
        Sint32_x00197DE8 stat;
        Sint32_x00197DE8 req;
        Sint32_x00197DE8 pause_sw;
        Sint32_x00197DE8 pause_cnt;
        Uint8_x00197DE8 pad58[0x74 - 0x58];
        Sint32_x00197DE8 pad74;
        SFHDS_FHD_x00197DE8 fhd;
        Sint32_x00197DE8 x90c;
        Sint32_x00197DE8 x910;
        Sint32_x00197DE8 x914;
        Sint32_x00197DE8 x918;
        Sint32_x00197DE8 x91c;
        Sint32_x00197DE8 picrate;
        Sint32_x00197DE8 x924;
        Sint32_x00197DE8 x928;
        Sint32_x00197DE8 x92c;
        Sint32_x00197DE8 numelem_aud;
        Sint32_x00197DE8 numelem_vid;
        Sint32_x00197DE8 numelem_prv;
        Sint32_x00197DE8 x93c;
        Sint32_x00197DE8 x940;
        Sint32_x00197DE8 x944;
        Sint32_x00197DE8 x948;
        Sint32_x00197DE8 x94c;
        SFD_PLYINF_x00197DE8 plyinf;
        SFLIB_ERRINF_x00197DE8 err;
        Sint32_x00197DE8 cond[100];
        Sint32_x00197DE8 cond_def[100];
        Uint8_x00197DE8 padD24[4];
        SFCON_x00197DE8 con;
        Uint8_x00197DE8 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197DE8))];
        Uint8_x00197DE8 tst[0x1C0];
        Uint8_x00197DE8 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197DE8 ptsm;
        Uint8_x00197DE8 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197DE8 buf[8];
        SFD_VFRM_x00197DE8 vfrm[16];
        SFD_TR_x00197DE8 tr[9];
        Sint32_x00197DE8 pad218c;
        SFMPS_WORK_x00197DE8 mps;
        Uint8_x00197DE8 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197DE8 mpv;
        SFADXT_WORK_x00197DE8 adxt;
        Uint8_x00197DE8 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197DE8 aoap;
        SFUO_x00197DE8 uo_tbl;
        Sint32_x00197DE8 pad34c4;
        SFSEE_HN_x00197DE8 see;
        SFTMR_TSUM_x00197DE8 tsum[6];
} SFD_OBJ_x00197DE8;
Sint32_x00197DE8 SFLIB_SetErr_x00197DE8(SFD_x00197DE8 sfd, Sint32_x00197DE8 code) __asm__("func_0018D650");
Sint32_x00197DE8 SFLIB_CheckHn_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_0018D870");
extern void (*SFPLY_recordgetfrm_x00197DE8)(SFD_x00197DE8 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197DE8)(SFPLY_PTSM_x00197DE8 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197DE8)(SFPLY_PTSM_x00197DE8 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197DE8 sfply_StopHn_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_00197E40");
Sint32_x00197DE8 func_00197DE8_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_00197DE8");
/* SFD_Stop: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197DE8 func_00197DE8_x00197DE8(SFD_x00197DE8 sfd)
{
        Sint32_x00197DE8 ret;
        if (SFLIB_CheckHn_x00197DE8(sfd) != 0) {
                return SFLIB_SetErr_x00197DE8(0, 0xFF000133);
        }
        ret = sfply_StopHn_x00197DE8(sfd);
        sfd->chg_flg = 1;
        return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197E40);
void func_00197EA8(s32 arg0) {
    D_00426ADC = arg0;
}
s32 func_00197EB8(void) {
    return D_00426ADC;
}
typedef unsigned char Uint8_x00197EC8;
typedef signed char Sint8_x00197EC8;
typedef signed short Sint16_x00197EC8;
typedef unsigned int Uint32_x00197EC8;
typedef signed int Sint32_x00197EC8;
typedef signed long long Sint64_x00197EC8;
typedef char Char8_x00197EC8;
typedef struct SJ_OBJ_x00197EC8 *SJ_x00197EC8;
typedef struct {
        Uint8_x00197EC8 *data;
        Sint32_x00197EC8 len;
} SJCK_x00197EC8;
typedef struct {
        Uint8_x00197EC8 data[16];
} SJUUID_x00197EC8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197EC8 sj);
        const SJUUID_x00197EC8 *(*GetUuid)(SJ_x00197EC8 sj);
        void (*Reset)(SJ_x00197EC8 sj);
        void (*GetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, Sint32_x00197EC8 nbyte, SJCK_x00197EC8 *ck);
        void (*UngetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, SJCK_x00197EC8 *ck);
        void (*PutChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, SJCK_x00197EC8 *ck);
        Sint32_x00197EC8 (*GetNumData)(SJ_x00197EC8 sj, Sint32_x00197EC8 id);
        Sint32_x00197EC8 (*IsGetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, Sint32_x00197EC8 nbyte, Sint32_x00197EC8 *rbyte);
        void (*EntryErrFunc)(SJ_x00197EC8 sj, void (*func)(void *obj, Char8_x00197EC8 *msg), void *obj);
} SJ_IF_x00197EC8;
struct SJ_OBJ_x00197EC8 {
        SJ_IF_x00197EC8 *vtbl;
};
typedef struct SFD_OBJ_x00197EC8 *SFD_x00197EC8;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197EC8 rsv1;
        Sint32_x00197EC8 rsv2;
} SFUO_CH_x00197EC8;
typedef struct {
        Sint32_x00197EC8 nch;
        SFUO_CH_x00197EC8 ch[3];
} SFUO_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Sint32_x00197EC8 (*SetOutPan)(SFD_x00197EC8 sfd, Sint32_x00197EC8 ch, Sint32_x00197EC8 pan);
        Sint32_x00197EC8 (*GetOutPan)(SFD_x00197EC8 sfd, Sint32_x00197EC8 ch);
        Sint32_x00197EC8 (*SetOutVol)(SFD_x00197EC8 sfd, Sint32_x00197EC8 vol);
        Sint32_x00197EC8 (*GetOutVol)(SFD_x00197EC8 sfd);
        void (*SetSpeed)(SFD_x00197EC8 sfd, Sint32_x00197EC8 speed);
        Sint32_x00197EC8 x18;
} SFAOAP_x00197EC8;
typedef struct {
        Uint8_x00197EC8 pad0[0xB8];
        Sint32_x00197EC8 tottime;
        Sint32_x00197EC8 tunit;
        Uint8_x00197EC8 padc0[0x150 - 0xC0];
        Sint64_x00197EC8 scr_base;
        Sint64_x00197EC8 scr_ofst;
        Sint32_x00197EC8 pad160;
        Sint32_x00197EC8 ctime;
        Sint32_x00197EC8 ctime_idx;
        Sint32_x00197EC8 ctime_que[32];
        Sint32_x00197EC8 tot_last;
        Sint32_x00197EC8 pad1F0;
        Sint32_x00197EC8 que_wr;
        Sint32_x00197EC8 que_rd;
        Sint32_x00197EC8 tot_que[32];
} SFCON_x00197EC8;
typedef struct {
        Sint32_x00197EC8 type;
        Sint32_x00197EC8 drop;
        Sint32_x00197EC8 hour;
        Sint32_x00197EC8 min;
        Sint32_x00197EC8 sec;
        Sint32_x00197EC8 frm;
        Sint32_x00197EC8 frm2;
        Sint16_x00197EC8 x1c;
        Sint16_x00197EC8 field;
} SFTIM_TC_x00197EC8;
typedef struct {
        Sint32_x00197EC8 valid;
        SFTIM_TC_x00197EC8 tc;
        Sint32_x00197EC8 val;
        Sint32_x00197EC8 unit;
} SFTIM_TTU_x00197EC8;
typedef struct {
        Sint64_x00197EC8 pts;
        Uint32_x00197EC8 pos;
        Uint32_x00197EC8 len;
} SFPTS_ENT_x00197EC8;
typedef struct {
        SFPTS_ENT_x00197EC8 *ent;
        Sint32_x00197EC8 num;
        Sint32_x00197EC8 cnt;
        Sint32_x00197EC8 wr;
        Sint32_x00197EC8 rd;
} SFPTS_QUE_x00197EC8;
typedef struct {
        Sint32_x00197EC8 raw[0x20];
} SFD_VFRM_INF_x00197EC8;
typedef struct {
        void *frm;
        Sint32_x00197EC8 x04;
        SFD_VFRM_INF_x00197EC8 inf;
} SFD_VFRM_x00197EC8;
typedef struct {
        Sint32_x00197EC8 kind;
        SJ_x00197EC8 sj;
        Uint32_x00197EC8 ofst;
        Sint32_x00197EC8 size;
        Sint32_x00197EC8 xsize;
        Sint32_x00197EC8 x14;
} SFBUF_SUP_x00197EC8;
typedef struct {
        SFBUF_SUP_x00197EC8 sup;
        Uint8_x00197EC8 *dlm_pos;
        Sint32_x00197EC8 dlm_len;
        Sint32_x00197EC8 wtot;
        Sint32_x00197EC8 rtot;
        SFPTS_QUE_x00197EC8 ptsque;
} SFBUF_RING_x00197EC8;
typedef struct {
        Sint32_x00197EC8 mode;
        Sint32_x00197EC8 used;
        Sint32_x00197EC8 prepflg;
        Sint32_x00197EC8 termflg;
        union {
                SFBUF_RING_x00197EC8 ring;
                struct {
                        Uint32_x00197EC8 adr;
                        Sint32_x00197EC8 size;
                        Sint32_x00197EC8 x18;
                        Sint32_x00197EC8 x1c;
                        SFD_VFRM_x00197EC8 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197EC8 adr;
                        Sint32_x00197EC8 size;
                        Sint32_x00197EC8 rsv[7];
                        Sint32_x00197EC8 rsv2[3];
                } aout;
                SFUO_CH_x00197EC8 uoch[3];
        } u;
        Sint32_x00197EC8 in_tr;
        Sint32_x00197EC8 out_tr;
        Sint32_x00197EC8 rsv[8];
} SFBUF_WORK_x00197EC8;
typedef Sint32_x00197EC8 (*SFD_TR_FUNC_x00197EC8)();
typedef struct {
        Sint32_x00197EC8 prepflg;
        Sint32_x00197EC8 termflg;
        void *hn;
        SFD_TR_FUNC_x00197EC8 *trif;
        Sint32_x00197EC8 bufin;
        Sint32_x00197EC8 bufout;
        Sint32_x00197EC8 bufout2;
        Sint32_x00197EC8 bufout3;
        Sint32_x00197EC8 x20;
        Uint8_x00197EC8 pad24[0x44 - 0x24];
} SFD_TR_x00197EC8;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197EC8 cwidth;
        Sint16_x00197EC8 ywidth;
} SFMPV_PLANE_x00197EC8;
typedef struct {
        void *buf;
        Sint32_x00197EC8 len;
} SFMPV_PICUSR_x00197EC8;
typedef struct {
        Sint32_x00197EC8 stat;
        Sint32_x00197EC8 lock;
        void *buf;
        SFTIM_TTU_x00197EC8 ttu;
        Sint32_x00197EC8 ftime;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 ndct;
        Sint32_x00197EC8 nbyte;
        Sint32_x00197EC8 gopno;
        Sint32_x00197EC8 x4c;
        Sint32_x00197EC8 x50;
        SFMPV_PICUSR_x00197EC8 *picusr;
        Sint32_x00197EC8 pa_width;
        Sint32_x00197EC8 pa_height;
        Sint32_x00197EC8 pa_mb_width;
        Sint32_x00197EC8 pa_mb_height;
        Sint32_x00197EC8 pa_frame_rate;
        Sint32_x00197EC8 tmpref;
        Sint32_x00197EC8 pa_pic_type;
        Sint32_x00197EC8 pa_tc_drop;
        Sint32_x00197EC8 pa_tc_hour;
        Sint32_x00197EC8 pa_tc_min;
        Sint32_x00197EC8 pa_tc_sec;
        Sint32_x00197EC8 pa_tc_pic;
        Sint32_x00197EC8 x88;
        Sint32_x00197EC8 x8c;
        Sint32_x00197EC8 pa_x90[3];
        Sint32_x00197EC8 pa_x9c[3];
        Sint16_x00197EC8 pa_xa8;
        Sint16_x00197EC8 pa_xaa;
        Sint8_x00197EC8 pa_xac;
        Sint8_x00197EC8 pa_xad;
        Sint8_x00197EC8 pa_xae;
        Sint8_x00197EC8 pa_xaf;
        Sint8_x00197EC8 pa_xb0;
        Sint8_x00197EC8 pa_xb1;
        Sint8_x00197EC8 pa_xb2;
        Sint8_x00197EC8 pa_xb3;
        Sint8_x00197EC8 pa_xb4;
        Sint8_x00197EC8 pa_xb5;
        Sint8_x00197EC8 pa_xb6;
        Sint8_x00197EC8 pa_xb7;
        Sint8_x00197EC8 pa_xb8;
        Sint8_x00197EC8 pa_xb9;
        Sint8_x00197EC8 pa_xba;
        Sint8_x00197EC8 pa_xbb;
        Sint8_x00197EC8 pa_xbc;
        Uint8_x00197EC8 padbd[0xD8 - 0xBD];
        Sint64_x00197EC8 pts;
} SFMPV_FRM_x00197EC8;
typedef struct {
        Sint32_x00197EC8 cwidth;
        Sint32_x00197EC8 cheight;
        Sint32_x00197EC8 width;
        Sint32_x00197EC8 height;
        Sint32_x00197EC8 x10;
        Sint32_x00197EC8 max_width;
        Sint32_x00197EC8 max_height;
        Sint32_x00197EC8 nfrm;
        Sint32_x00197EC8 x20;
} SFMPV_PARA_x00197EC8;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197EC8 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197EC8 *curfrm;
        Sint32_x00197EC8 picstat;
        Sint32_x00197EC8 dlmmask;
        Sint32_x00197EC8 termflg;
        Sint32_x00197EC8 gopstat;
        Sint32_x00197EC8 nskip;
        Sint32_x00197EC8 nconcat;
        Uint8_x00197EC8 picatr[0x80];
        Sint32_x00197EC8 last_ngop;
        Sint32_x00197EC8 newgop;
        Sint32_x00197EC8 vbvsiz;
        Sint32_x00197EC8 pts_tmpref;
        Sint32_x00197EC8 pts_ofst;
        Sint32_x00197EC8 pts_max;
        Sint32_x00197EC8 pad124;
        SFPTS_ENT_x00197EC8 ptsent;
        Sint32_x00197EC8 refidx[2];
        SFMPV_PLANE_x00197EC8 rfbuf[2];
        SFMPV_FRM_x00197EC8 *ref[2];
        SFMPV_FRM_x00197EC8 *pendfrm;
        Sint32_x00197EC8 skipret;
        Sint32_x00197EC8 dlmwait;
        Sint32_x00197EC8 tmpref_adj;
        Sint32_x00197EC8 nfrm;
        Sint32_x00197EC8 pad17c;
        SFMPV_FRM_x00197EC8 frm[16];
        void *picusr_buf;
        Sint32_x00197EC8 picusr_num;
        Sint32_x00197EC8 picusr_siz;
        Uint8_x00197EC8 *picusr_dat;
        Sint32_x00197EC8 picusr_len;
        SFMPV_PICUSR_x00197EC8 picusr[16];
        Sint32_x00197EC8 pad1014;
        Sint64_x00197EC8 pts;
} SFMPV_WORK_x00197EC8;
typedef struct {
        Sint32_x00197EC8 raw[0x2A];
} SFD_PLYINF_x00197EC8 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197EC8 code);
        void *obj;
        Sint32_x00197EC8 code;
        Sint32_x00197EC8 x0c;
        Sint32_x00197EC8 x10;
} SFLIB_ERRINF_x00197EC8;
typedef struct {
        Sint32_x00197EC8 codec;
        Sint32_x00197EC8 layer;
        Sint32_x00197EC8 chnum;
        Sint32_x00197EC8 smphz;
} SFHDS_AUD_x00197EC8;
typedef struct {
        Sint32_x00197EC8 codec;
        Sint32_x00197EC8 bitrate;
        Sint32_x00197EC8 picw;
        Sint32_x00197EC8 pich;
        Sint32_x00197EC8 picrate;
        Sint32_x00197EC8 ftr_eff;
        Sint32_x00197EC8 ftr_coltype;
        Sint32_x00197EC8 ftr_pictype;
        Sint32_x00197EC8 ftr_fixflg;
        Sint32_x00197EC8 ftr_shcfixflg;
        Sint32_x00197EC8 ftr_expand;
        Sint32_x00197EC8 ftr_gopn;
        Sint32_x00197EC8 ftr_gopm;
} SFHDS_VID_x00197EC8;
typedef struct {
        Sint32_x00197EC8 valid;
        Sint32_x00197EC8 ver_major;
        Sint32_x00197EC8 ver_minor;
        Sint32_x00197EC8 byterate;
        Sint32_x00197EC8 hdrsiz;
        Sint32_x00197EC8 packtype;
        Sint32_x00197EC8 pketsizlen;
        Sint32_x00197EC8 packsiz;
        Sint32_x00197EC8 numelem_tot;
        Sint32_x00197EC8 numelem_aud;
        Sint32_x00197EC8 numelem_vid;
        Sint32_x00197EC8 numelem_prv;
        Sint32_x00197EC8 maxplylen_aud;
        Sint32_x00197EC8 maxplylen_vid;
        Sint32_x00197EC8 maxfrmnum;
        Sint32_x00197EC8 stmid_prv1;
        Sint32_x00197EC8 stmid_prv2;
        Sint32_x00197EC8 stmid_aud;
        Sint32_x00197EC8 stmid_vid;
        SFHDS_AUD_x00197EC8 aud;
        SFHDS_VID_x00197EC8 vid;
        Sint32_x00197EC8 rawsiz;
        Uint8_x00197EC8 raw[0x800];
} SFHDS_FHD_x00197EC8;
typedef struct {
        Uint8_x00197EC8 data[2][0xB0];
        Sint32_x00197EC8 len[2];
} SFSEE_SYSHD_x00197EC8;
typedef struct {
        Sint32_x00197EC8 analyzed;
        Sint32_x00197EC8 ncount;
        Sint32_x00197EC8 tscale;
        Sint32_x00197EC8 nvid;
        Sint32_x00197EC8 naud;
        Sint32_x00197EC8 pad14;
        Sint64_x00197EC8 scr_base;
        Sint64_x00197EC8 pts_min;
        Sint32_x00197EC8 stmid_vid;
        Sint32_x00197EC8 stmid_aud;
        SFSEE_SYSHD_x00197EC8 syshd;
} SFSEE_SHDR_x00197EC8;
typedef struct {
        Sint32_x00197EC8 analyzed;
        Sint32_x00197EC8 ncount;
        Sint32_x00197EC8 tscale;
        SFHDS_FHD_x00197EC8 fhd;
        SFSEE_SHDR_x00197EC8 shdr;
        Uint8_x00197EC8 pada38[0xAD0 - 0xA38];
        Sint32_x00197EC8 a1hdr;
        Sint32_x00197EC8 a1ncount;
        Sint32_x00197EC8 a1tscale;
        Uint8_x00197EC8 padadc[0xD0C - 0xADC];
        Sint32_x00197EC8 a2hdr;
        Sint32_x00197EC8 a2ncount;
        Sint32_x00197EC8 a2tscale;
        Uint8_x00197EC8 padd18[0xDA8 - 0xD18];
        Sint32_x00197EC8 rate;
        Sint32_x00197EC8 fsize_est;
        Sint32_x00197EC8 tot_est;
        Sint32_x00197EC8 tunit_est;
        Sint32_x00197EC8 av_a;
        Sint32_x00197EC8 av_b;
        Sint32_x00197EC8 paddc0;
        Sint32_x00197EC8 fsize;
        Sint32_x00197EC8 tottime;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 byterate;
        Sint32_x00197EC8 seekpos;
} SFSEE_WORK_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Sint32_x00197EC8 pos;
        Sint32_x00197EC8 x08;
} SFSEE_REQ_x00197EC8;
typedef struct {
        Sint32_x00197EC8 bsize;
        Sint32_x00197EC8 xsize;
        void *buf;
        Sint32_x00197EC8 maxnch;
        Sint32_x00197EC8 x10;
        Sint32_x00197EC8 worksize;
        void *work;
} SFADXT_PARA_x00197EC8;
typedef struct {
        void *adxt;
        SJ_x00197EC8 sj;
        SFADXT_PARA_x00197EC8 para;
        Sint32_x00197EC8 tcount;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 pause;
        Sint32_x00197EC8 discard;
        Sint32_x00197EC8 seekflg;
        Sint32_x00197EC8 smplofst;
        void (*func)(SFD_x00197EC8 sfd, Uint8_x00197EC8 *data, Sint32_x00197EC8 len, Sint32_x00197EC8 *nbyte);
        Sint32_x00197EC8 x40;
        Sint32_x00197EC8 svrfreq;
        Sint32_x00197EC8 totbyte;
        Sint32_x00197EC8 x4c;
} SFADXT_WORK_x00197EC8;
typedef struct {
        SFSEE_WORK_x00197EC8 *wk;
        SFSEE_REQ_x00197EC8 req;
} SFSEE_HN_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Uint32_x00197EC8 adr;
        Sint32_x00197EC8 size[7];
        Sint32_x00197EC8 x24;
        Sint32_x00197EC8 unit;
        Sint32_x00197EC8 x2c;
        Sint32_x00197EC8 x30;
        Sint32_x00197EC8 x34;
        Sint32_x00197EC8 x38;
        void *hnwork;
        Sint32_x00197EC8 hnwksiz;
} SFD_CREPRM_x00197EC8;
typedef struct {
        void *x00;
        Sint32_x00197EC8 x04;
        Sint32_x00197EC8 x08;
} SFPLY_PTSM_x00197EC8;
typedef struct {
        Sint64_x00197EC8 sum;
        Sint64_x00197EC8 min;
        Sint64_x00197EC8 max;
        Sint32_x00197EC8 cnt;
} SFTMR_TSUM_x00197EC8;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197EC8 nvid;
        Sint32_x00197EC8 naud;
        Sint32_x00197EC8 x0c;
        Sint64_x00197EC8 pts_min;
        Sint64_x00197EC8 pts_min2;
        Sint32_x00197EC8 concat_cnt;
        Sint32_x00197EC8 last_vid;
        Sint32_x00197EC8 last_aud;
        Sint32_x00197EC8 first_vid;
        Sint32_x00197EC8 first_aud;
        Sint32_x00197EC8 cur_vid;
        Sint32_x00197EC8 cur_aud;
        Sint32_x00197EC8 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197EC8 stmid);
        void *outobj;
        Sint32_x00197EC8 skip;
        Sint32_x00197EC8 x15c;
        Sint32_x00197EC8 x160;
        Sint32_x00197EC8 x164;
} SFMPS_WORK_x00197EC8;
typedef struct SFD_OBJ_x00197EC8 {
        SFD_CREPRM_x00197EC8 prm;
        Sint32_x00197EC8 chg_flg;
        Sint32_x00197EC8 stat;
        Sint32_x00197EC8 req;
        Sint32_x00197EC8 pause_sw;
        Sint32_x00197EC8 pause_cnt;
        Uint8_x00197EC8 pad58[0x74 - 0x58];
        Sint32_x00197EC8 pad74;
        SFHDS_FHD_x00197EC8 fhd;
        Sint32_x00197EC8 x90c;
        Sint32_x00197EC8 x910;
        Sint32_x00197EC8 x914;
        Sint32_x00197EC8 x918;
        Sint32_x00197EC8 x91c;
        Sint32_x00197EC8 picrate;
        Sint32_x00197EC8 x924;
        Sint32_x00197EC8 x928;
        Sint32_x00197EC8 x92c;
        Sint32_x00197EC8 numelem_aud;
        Sint32_x00197EC8 numelem_vid;
        Sint32_x00197EC8 numelem_prv;
        Sint32_x00197EC8 x93c;
        Sint32_x00197EC8 x940;
        Sint32_x00197EC8 x944;
        Sint32_x00197EC8 x948;
        Sint32_x00197EC8 x94c;
        SFD_PLYINF_x00197EC8 plyinf;
        SFLIB_ERRINF_x00197EC8 err;
        Sint32_x00197EC8 cond[100];
        Sint32_x00197EC8 cond_def[100];
        Uint8_x00197EC8 padD24[4];
        SFCON_x00197EC8 con;
        Uint8_x00197EC8 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197EC8))];
        Uint8_x00197EC8 tst[0x1C0];
        Uint8_x00197EC8 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197EC8 ptsm;
        Uint8_x00197EC8 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197EC8 buf[8];
        SFD_VFRM_x00197EC8 vfrm[16];
        SFD_TR_x00197EC8 tr[9];
        Sint32_x00197EC8 pad218c;
        SFMPS_WORK_x00197EC8 mps;
        Uint8_x00197EC8 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197EC8 mpv;
        SFADXT_WORK_x00197EC8 adxt;
        Uint8_x00197EC8 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197EC8 aoap;
        SFUO_x00197EC8 uo_tbl;
        Sint32_x00197EC8 pad34c4;
        SFSEE_HN_x00197EC8 see;
        SFTMR_TSUM_x00197EC8 tsum[6];
} SFD_OBJ_x00197EC8;
Sint32_x00197EC8 SFTRN_CallTrtTrif_x00197EC8(SFD_x00197EC8 sfd, Sint32_x00197EC8 a, Sint32_x00197EC8 b, Sint32_x00197EC8 c, Sint32_x00197EC8 d) __asm__("func_0019C0D8");
extern void (*SFPLY_recordgetfrm_x00197EC8)(SFD_x00197EC8 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197EC8)(SFPLY_PTSM_x00197EC8 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197EC8)(SFPLY_PTSM_x00197EC8 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197EC8 func_00197EC8_x00197EC8(SFD_x00197EC8 sfd) __asm__("func_00197EC8");
/* sfply_StopTr: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197EC8 func_00197EC8_x00197EC8(SFD_x00197EC8 sfd)
{
        Sint32_x00197EC8 ret;
        if (sfd->stat == 4) {
                ret = SFTRN_CallTrtTrif_x00197EC8(sfd, 7, 7, 0, 0);
                if (ret != 0) {
                        return ret;
                }
        }
        sfd->stat = 1;
        sfd->req = 1;
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197F28);
typedef unsigned char Uint8_x00198128;
typedef signed char Sint8_x00198128;
typedef signed short Sint16_x00198128;
typedef unsigned int Uint32_x00198128;
typedef signed int Sint32_x00198128;
typedef signed long long Sint64_x00198128;
typedef char Char8_x00198128;
typedef struct SJ_OBJ_x00198128 *SJ_x00198128;
typedef struct {
        Uint8_x00198128 *data;
        Sint32_x00198128 len;
} SJCK_x00198128;
typedef struct {
        Uint8_x00198128 data[16];
} SJUUID_x00198128;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00198128 sj);
        const SJUUID_x00198128 *(*GetUuid)(SJ_x00198128 sj);
        void (*Reset)(SJ_x00198128 sj);
        void (*GetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, Sint32_x00198128 nbyte, SJCK_x00198128 *ck);
        void (*UngetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, SJCK_x00198128 *ck);
        void (*PutChunk)(SJ_x00198128 sj, Sint32_x00198128 id, SJCK_x00198128 *ck);
        Sint32_x00198128 (*GetNumData)(SJ_x00198128 sj, Sint32_x00198128 id);
        Sint32_x00198128 (*IsGetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, Sint32_x00198128 nbyte, Sint32_x00198128 *rbyte);
        void (*EntryErrFunc)(SJ_x00198128 sj, void (*func)(void *obj, Char8_x00198128 *msg), void *obj);
} SJ_IF_x00198128;
struct SJ_OBJ_x00198128 {
        SJ_IF_x00198128 *vtbl;
};
typedef struct SFD_OBJ_x00198128 *SFD_x00198128;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00198128 rsv1;
        Sint32_x00198128 rsv2;
} SFUO_CH_x00198128;
typedef struct {
        Sint32_x00198128 nch;
        SFUO_CH_x00198128 ch[3];
} SFUO_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Sint32_x00198128 (*SetOutPan)(SFD_x00198128 sfd, Sint32_x00198128 ch, Sint32_x00198128 pan);
        Sint32_x00198128 (*GetOutPan)(SFD_x00198128 sfd, Sint32_x00198128 ch);
        Sint32_x00198128 (*SetOutVol)(SFD_x00198128 sfd, Sint32_x00198128 vol);
        Sint32_x00198128 (*GetOutVol)(SFD_x00198128 sfd);
        void (*SetSpeed)(SFD_x00198128 sfd, Sint32_x00198128 speed);
        Sint32_x00198128 x18;
} SFAOAP_x00198128;
typedef struct {
        Uint8_x00198128 pad0[0xB8];
        Sint32_x00198128 tottime;
        Sint32_x00198128 tunit;
        Uint8_x00198128 padc0[0x150 - 0xC0];
        Sint64_x00198128 scr_base;
        Sint64_x00198128 scr_ofst;
        Sint32_x00198128 pad160;
        Sint32_x00198128 ctime;
        Sint32_x00198128 ctime_idx;
        Sint32_x00198128 ctime_que[32];
        Sint32_x00198128 tot_last;
        Sint32_x00198128 pad1F0;
        Sint32_x00198128 que_wr;
        Sint32_x00198128 que_rd;
        Sint32_x00198128 tot_que[32];
} SFCON_x00198128;
typedef struct {
        Sint32_x00198128 type;
        Sint32_x00198128 drop;
        Sint32_x00198128 hour;
        Sint32_x00198128 min;
        Sint32_x00198128 sec;
        Sint32_x00198128 frm;
        Sint32_x00198128 frm2;
        Sint16_x00198128 x1c;
        Sint16_x00198128 field;
} SFTIM_TC_x00198128;
typedef struct {
        Sint32_x00198128 valid;
        SFTIM_TC_x00198128 tc;
        Sint32_x00198128 val;
        Sint32_x00198128 unit;
} SFTIM_TTU_x00198128;
typedef struct {
        Sint64_x00198128 pts;
        Uint32_x00198128 pos;
        Uint32_x00198128 len;
} SFPTS_ENT_x00198128;
typedef struct {
        SFPTS_ENT_x00198128 *ent;
        Sint32_x00198128 num;
        Sint32_x00198128 cnt;
        Sint32_x00198128 wr;
        Sint32_x00198128 rd;
} SFPTS_QUE_x00198128;
typedef struct {
        Sint32_x00198128 raw[0x20];
} SFD_VFRM_INF_x00198128;
typedef struct {
        void *frm;
        Sint32_x00198128 x04;
        SFD_VFRM_INF_x00198128 inf;
} SFD_VFRM_x00198128;
typedef struct {
        Sint32_x00198128 kind;
        SJ_x00198128 sj;
        Uint32_x00198128 ofst;
        Sint32_x00198128 size;
        Sint32_x00198128 xsize;
        Sint32_x00198128 x14;
} SFBUF_SUP_x00198128;
typedef struct {
        SFBUF_SUP_x00198128 sup;
        Uint8_x00198128 *dlm_pos;
        Sint32_x00198128 dlm_len;
        Sint32_x00198128 wtot;
        Sint32_x00198128 rtot;
        SFPTS_QUE_x00198128 ptsque;
} SFBUF_RING_x00198128;
typedef struct {
        Sint32_x00198128 mode;
        Sint32_x00198128 used;
        Sint32_x00198128 prepflg;
        Sint32_x00198128 termflg;
        union {
                SFBUF_RING_x00198128 ring;
                struct {
                        Uint32_x00198128 adr;
                        Sint32_x00198128 size;
                        Sint32_x00198128 x18;
                        Sint32_x00198128 x1c;
                        SFD_VFRM_x00198128 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00198128 adr;
                        Sint32_x00198128 size;
                        Sint32_x00198128 rsv[7];
                        Sint32_x00198128 rsv2[3];
                } aout;
                SFUO_CH_x00198128 uoch[3];
        } u;
        Sint32_x00198128 in_tr;
        Sint32_x00198128 out_tr;
        Sint32_x00198128 rsv[8];
} SFBUF_WORK_x00198128;
typedef Sint32_x00198128 (*SFD_TR_FUNC_x00198128)();
typedef struct {
        Sint32_x00198128 prepflg;
        Sint32_x00198128 termflg;
        void *hn;
        SFD_TR_FUNC_x00198128 *trif;
        Sint32_x00198128 bufin;
        Sint32_x00198128 bufout;
        Sint32_x00198128 bufout2;
        Sint32_x00198128 bufout3;
        Sint32_x00198128 x20;
        Uint8_x00198128 pad24[0x44 - 0x24];
} SFD_TR_x00198128;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00198128 cwidth;
        Sint16_x00198128 ywidth;
} SFMPV_PLANE_x00198128;
typedef struct {
        void *buf;
        Sint32_x00198128 len;
} SFMPV_PICUSR_x00198128;
typedef struct {
        Sint32_x00198128 stat;
        Sint32_x00198128 lock;
        void *buf;
        SFTIM_TTU_x00198128 ttu;
        Sint32_x00198128 ftime;
        Sint32_x00198128 tunit;
        Sint32_x00198128 ndct;
        Sint32_x00198128 nbyte;
        Sint32_x00198128 gopno;
        Sint32_x00198128 x4c;
        Sint32_x00198128 x50;
        SFMPV_PICUSR_x00198128 *picusr;
        Sint32_x00198128 pa_width;
        Sint32_x00198128 pa_height;
        Sint32_x00198128 pa_mb_width;
        Sint32_x00198128 pa_mb_height;
        Sint32_x00198128 pa_frame_rate;
        Sint32_x00198128 tmpref;
        Sint32_x00198128 pa_pic_type;
        Sint32_x00198128 pa_tc_drop;
        Sint32_x00198128 pa_tc_hour;
        Sint32_x00198128 pa_tc_min;
        Sint32_x00198128 pa_tc_sec;
        Sint32_x00198128 pa_tc_pic;
        Sint32_x00198128 x88;
        Sint32_x00198128 x8c;
        Sint32_x00198128 pa_x90[3];
        Sint32_x00198128 pa_x9c[3];
        Sint16_x00198128 pa_xa8;
        Sint16_x00198128 pa_xaa;
        Sint8_x00198128 pa_xac;
        Sint8_x00198128 pa_xad;
        Sint8_x00198128 pa_xae;
        Sint8_x00198128 pa_xaf;
        Sint8_x00198128 pa_xb0;
        Sint8_x00198128 pa_xb1;
        Sint8_x00198128 pa_xb2;
        Sint8_x00198128 pa_xb3;
        Sint8_x00198128 pa_xb4;
        Sint8_x00198128 pa_xb5;
        Sint8_x00198128 pa_xb6;
        Sint8_x00198128 pa_xb7;
        Sint8_x00198128 pa_xb8;
        Sint8_x00198128 pa_xb9;
        Sint8_x00198128 pa_xba;
        Sint8_x00198128 pa_xbb;
        Sint8_x00198128 pa_xbc;
        Uint8_x00198128 padbd[0xD8 - 0xBD];
        Sint64_x00198128 pts;
} SFMPV_FRM_x00198128;
typedef struct {
        Sint32_x00198128 cwidth;
        Sint32_x00198128 cheight;
        Sint32_x00198128 width;
        Sint32_x00198128 height;
        Sint32_x00198128 x10;
        Sint32_x00198128 max_width;
        Sint32_x00198128 max_height;
        Sint32_x00198128 nfrm;
        Sint32_x00198128 x20;
} SFMPV_PARA_x00198128;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00198128 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00198128 *curfrm;
        Sint32_x00198128 picstat;
        Sint32_x00198128 dlmmask;
        Sint32_x00198128 termflg;
        Sint32_x00198128 gopstat;
        Sint32_x00198128 nskip;
        Sint32_x00198128 nconcat;
        Uint8_x00198128 picatr[0x80];
        Sint32_x00198128 last_ngop;
        Sint32_x00198128 newgop;
        Sint32_x00198128 vbvsiz;
        Sint32_x00198128 pts_tmpref;
        Sint32_x00198128 pts_ofst;
        Sint32_x00198128 pts_max;
        Sint32_x00198128 pad124;
        SFPTS_ENT_x00198128 ptsent;
        Sint32_x00198128 refidx[2];
        SFMPV_PLANE_x00198128 rfbuf[2];
        SFMPV_FRM_x00198128 *ref[2];
        SFMPV_FRM_x00198128 *pendfrm;
        Sint32_x00198128 skipret;
        Sint32_x00198128 dlmwait;
        Sint32_x00198128 tmpref_adj;
        Sint32_x00198128 nfrm;
        Sint32_x00198128 pad17c;
        SFMPV_FRM_x00198128 frm[16];
        void *picusr_buf;
        Sint32_x00198128 picusr_num;
        Sint32_x00198128 picusr_siz;
        Uint8_x00198128 *picusr_dat;
        Sint32_x00198128 picusr_len;
        SFMPV_PICUSR_x00198128 picusr[16];
        Sint32_x00198128 pad1014;
        Sint64_x00198128 pts;
} SFMPV_WORK_x00198128;
typedef struct {
        Sint32_x00198128 raw[0x2A];
} SFD_PLYINF_x00198128 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00198128 code);
        void *obj;
        Sint32_x00198128 code;
        Sint32_x00198128 x0c;
        Sint32_x00198128 x10;
} SFLIB_ERRINF_x00198128;
typedef struct {
        Sint32_x00198128 codec;
        Sint32_x00198128 layer;
        Sint32_x00198128 chnum;
        Sint32_x00198128 smphz;
} SFHDS_AUD_x00198128;
typedef struct {
        Sint32_x00198128 codec;
        Sint32_x00198128 bitrate;
        Sint32_x00198128 picw;
        Sint32_x00198128 pich;
        Sint32_x00198128 picrate;
        Sint32_x00198128 ftr_eff;
        Sint32_x00198128 ftr_coltype;
        Sint32_x00198128 ftr_pictype;
        Sint32_x00198128 ftr_fixflg;
        Sint32_x00198128 ftr_shcfixflg;
        Sint32_x00198128 ftr_expand;
        Sint32_x00198128 ftr_gopn;
        Sint32_x00198128 ftr_gopm;
} SFHDS_VID_x00198128;
typedef struct {
        Sint32_x00198128 valid;
        Sint32_x00198128 ver_major;
        Sint32_x00198128 ver_minor;
        Sint32_x00198128 byterate;
        Sint32_x00198128 hdrsiz;
        Sint32_x00198128 packtype;
        Sint32_x00198128 pketsizlen;
        Sint32_x00198128 packsiz;
        Sint32_x00198128 numelem_tot;
        Sint32_x00198128 numelem_aud;
        Sint32_x00198128 numelem_vid;
        Sint32_x00198128 numelem_prv;
        Sint32_x00198128 maxplylen_aud;
        Sint32_x00198128 maxplylen_vid;
        Sint32_x00198128 maxfrmnum;
        Sint32_x00198128 stmid_prv1;
        Sint32_x00198128 stmid_prv2;
        Sint32_x00198128 stmid_aud;
        Sint32_x00198128 stmid_vid;
        SFHDS_AUD_x00198128 aud;
        SFHDS_VID_x00198128 vid;
        Sint32_x00198128 rawsiz;
        Uint8_x00198128 raw[0x800];
} SFHDS_FHD_x00198128;
typedef struct {
        Uint8_x00198128 data[2][0xB0];
        Sint32_x00198128 len[2];
} SFSEE_SYSHD_x00198128;
typedef struct {
        Sint32_x00198128 analyzed;
        Sint32_x00198128 ncount;
        Sint32_x00198128 tscale;
        Sint32_x00198128 nvid;
        Sint32_x00198128 naud;
        Sint32_x00198128 pad14;
        Sint64_x00198128 scr_base;
        Sint64_x00198128 pts_min;
        Sint32_x00198128 stmid_vid;
        Sint32_x00198128 stmid_aud;
        SFSEE_SYSHD_x00198128 syshd;
} SFSEE_SHDR_x00198128;
typedef struct {
        Sint32_x00198128 analyzed;
        Sint32_x00198128 ncount;
        Sint32_x00198128 tscale;
        SFHDS_FHD_x00198128 fhd;
        SFSEE_SHDR_x00198128 shdr;
        Uint8_x00198128 pada38[0xAD0 - 0xA38];
        Sint32_x00198128 a1hdr;
        Sint32_x00198128 a1ncount;
        Sint32_x00198128 a1tscale;
        Uint8_x00198128 padadc[0xD0C - 0xADC];
        Sint32_x00198128 a2hdr;
        Sint32_x00198128 a2ncount;
        Sint32_x00198128 a2tscale;
        Uint8_x00198128 padd18[0xDA8 - 0xD18];
        Sint32_x00198128 rate;
        Sint32_x00198128 fsize_est;
        Sint32_x00198128 tot_est;
        Sint32_x00198128 tunit_est;
        Sint32_x00198128 av_a;
        Sint32_x00198128 av_b;
        Sint32_x00198128 paddc0;
        Sint32_x00198128 fsize;
        Sint32_x00198128 tottime;
        Sint32_x00198128 tunit;
        Sint32_x00198128 byterate;
        Sint32_x00198128 seekpos;
} SFSEE_WORK_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Sint32_x00198128 pos;
        Sint32_x00198128 x08;
} SFSEE_REQ_x00198128;
typedef struct {
        Sint32_x00198128 bsize;
        Sint32_x00198128 xsize;
        void *buf;
        Sint32_x00198128 maxnch;
        Sint32_x00198128 x10;
        Sint32_x00198128 worksize;
        void *work;
} SFADXT_PARA_x00198128;
typedef struct {
        void *adxt;
        SJ_x00198128 sj;
        SFADXT_PARA_x00198128 para;
        Sint32_x00198128 tcount;
        Sint32_x00198128 tunit;
        Sint32_x00198128 pause;
        Sint32_x00198128 discard;
        Sint32_x00198128 seekflg;
        Sint32_x00198128 smplofst;
        void (*func)(SFD_x00198128 sfd, Uint8_x00198128 *data, Sint32_x00198128 len, Sint32_x00198128 *nbyte);
        Sint32_x00198128 x40;
        Sint32_x00198128 svrfreq;
        Sint32_x00198128 totbyte;
        Sint32_x00198128 x4c;
} SFADXT_WORK_x00198128;
typedef struct {
        SFSEE_WORK_x00198128 *wk;
        SFSEE_REQ_x00198128 req;
} SFSEE_HN_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Uint32_x00198128 adr;
        Sint32_x00198128 size[7];
        Sint32_x00198128 x24;
        Sint32_x00198128 unit;
        Sint32_x00198128 x2c;
        Sint32_x00198128 x30;
        Sint32_x00198128 x34;
        Sint32_x00198128 x38;
        void *hnwork;
        Sint32_x00198128 hnwksiz;
} SFD_CREPRM_x00198128;
typedef struct {
        void *x00;
        Sint32_x00198128 x04;
        Sint32_x00198128 x08;
} SFPLY_PTSM_x00198128;
typedef struct {
        Sint64_x00198128 sum;
        Sint64_x00198128 min;
        Sint64_x00198128 max;
        Sint32_x00198128 cnt;
} SFTMR_TSUM_x00198128;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00198128 nvid;
        Sint32_x00198128 naud;
        Sint32_x00198128 x0c;
        Sint64_x00198128 pts_min;
        Sint64_x00198128 pts_min2;
        Sint32_x00198128 concat_cnt;
        Sint32_x00198128 last_vid;
        Sint32_x00198128 last_aud;
        Sint32_x00198128 first_vid;
        Sint32_x00198128 first_aud;
        Sint32_x00198128 cur_vid;
        Sint32_x00198128 cur_aud;
        Sint32_x00198128 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00198128 stmid);
        void *outobj;
        Sint32_x00198128 skip;
        Sint32_x00198128 x15c;
        Sint32_x00198128 x160;
        Sint32_x00198128 x164;
} SFMPS_WORK_x00198128;
typedef struct SFD_OBJ_x00198128 {
        SFD_CREPRM_x00198128 prm;
        Sint32_x00198128 chg_flg;
        Sint32_x00198128 stat;
        Sint32_x00198128 req;
        Sint32_x00198128 pause_sw;
        Sint32_x00198128 pause_cnt;
        Uint8_x00198128 pad58[0x74 - 0x58];
        Sint32_x00198128 pad74;
        SFHDS_FHD_x00198128 fhd;
        Sint32_x00198128 x90c;
        Sint32_x00198128 x910;
        Sint32_x00198128 x914;
        Sint32_x00198128 x918;
        Sint32_x00198128 x91c;
        Sint32_x00198128 picrate;
        Sint32_x00198128 x924;
        Sint32_x00198128 x928;
        Sint32_x00198128 x92c;
        Sint32_x00198128 numelem_aud;
        Sint32_x00198128 numelem_vid;
        Sint32_x00198128 numelem_prv;
        Sint32_x00198128 x93c;
        Sint32_x00198128 x940;
        Sint32_x00198128 x944;
        Sint32_x00198128 x948;
        Sint32_x00198128 x94c;
        SFD_PLYINF_x00198128 plyinf;
        SFLIB_ERRINF_x00198128 err;
        Sint32_x00198128 cond[100];
        Sint32_x00198128 cond_def[100];
        Uint8_x00198128 padD24[4];
        SFCON_x00198128 con;
        Uint8_x00198128 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00198128))];
        Uint8_x00198128 tst[0x1C0];
        Uint8_x00198128 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00198128 ptsm;
        Uint8_x00198128 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00198128 buf[8];
        SFD_VFRM_x00198128 vfrm[16];
        SFD_TR_x00198128 tr[9];
        Sint32_x00198128 pad218c;
        SFMPS_WORK_x00198128 mps;
        Uint8_x00198128 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00198128 mpv;
        SFADXT_WORK_x00198128 adxt;
        Uint8_x00198128 pad3410[0x3474 - 0x3410];
        SFAOAP_x00198128 aoap;
        SFUO_x00198128 uo_tbl;
        Sint32_x00198128 pad34c4;
        SFSEE_HN_x00198128 see;
        SFTMR_TSUM_x00198128 tsum[6];
} SFD_OBJ_x00198128;
Sint32_x00198128 SFLIB_SetErr_x00198128(SFD_x00198128 sfd, Sint32_x00198128 code) __asm__("func_0018D650");
Sint32_x00198128 SFLIB_CheckHn_x00198128(SFD_x00198128 sfd) __asm__("func_0018D870");
Sint32_x00198128 SFTRN_CallTrtTrif_x00198128(SFD_x00198128 sfd, Sint32_x00198128 a, Sint32_x00198128 b, Sint32_x00198128 c, Sint32_x00198128 d) __asm__("func_0019C0D8");
typedef struct {
        SJCK_x00198128 ck1;
        SJCK_x00198128 ck2;
        Sint32_x00198128 rsv[3];
} SFBUF_RINF_x00198128;
extern void (*SFPLY_recordgetfrm_x00198128)(SFD_x00198128 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00198128)(SFPLY_PTSM_x00198128 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00198128)(SFPLY_PTSM_x00198128 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00198128 func_00198128_x00198128(SFD_x00198128 sfd, SFBUF_RINF_x00198128 *inf) __asm__("func_00198128");
/* SFD_GetSupplyInf: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00198128 func_00198128_x00198128(SFD_x00198128 sfd, SFBUF_RINF_x00198128 *inf)
{
        if (SFLIB_CheckHn_x00198128(sfd) != 0) {
                return SFLIB_SetErr_x00198128(0, 0xFF000134);
        }
        return SFTRN_CallTrtTrif_x00198128(sfd, 0, 9, (Sint32_x00198128)inf, 0);
}
extern int Obj34D8_SetGlobalEE0B8_IfField48_x00198198(void *hn) __asm__("func_0018D870");
extern void func_0034DD70_x00198198(void *a0, unsigned int err) __asm__("func_0018D650");
extern void func_0035C2D0_x00198198(void *hn, int a1, int a2, void *a3, int a4) __asm__("func_0019C0D8");
void func_00198198_x00198198(void *hn, void *p, int n) __asm__("func_00198198");
/* SFD_AddWritePtr: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0034d1b8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00198198_x00198198(void *hn, void *p, int n)
{
    if (Obj34D8_SetGlobalEE0B8_IfField48_x00198198(hn) != 0) {
        func_0034DD70_x00198198(0, 0xFF000135);
        return;
    }
    func_0035C2D0_x00198198(hn, 0, 0xA, p, n);
}
s32 func_0018B750_x00198218(void *, s32, s32) __asm__("func_0018B750");
s32 func_0018B770_x00198218(void *, s32) __asm__("func_0018B770");
s32 func_0018D650_x00198218(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198218() __asm__("func_0018D870");
s32 func_00198218_x00198218(u8 *arg0) __asm__("func_00198218");
s32 func_00198218_x00198218(u8 *arg0)
{
  s32 temp_s0;
  if (func_0018D870_x00198218() != 0)
  {
    return func_0018D650_x00198218(0, 0xFF000135);
  }
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1BF4));
  if (func_0018B770_x00198218(arg0, temp_s0) != 1)
  {
    func_0018B750_x00198218(arg0, temp_s0, (unsigned short) 1);
    *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
  }
  return 0;
 do { } while (0);
}
s32 func_0018B770_x001982A8(void *a0, s32 a1) __asm__("func_0018B770");
s32 func_001982A8_x001982A8(void *a0) __asm__("func_001982A8");
s32 func_001982A8_x001982A8(void *a0) {
    return func_0018B770_x001982A8(a0, *(s32 *)((u8 *)a0 + 0x1BF4)) != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001982C8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198380);
void func_001983F0(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000139);
        return;
    }
    func_0018A7A0(arg0, arg1);
}
void func_00198450_x00198450(u8 *arg0) __asm__("func_00198450");
void func_00198450_x00198450(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
s32 func_0018D650_x00198468(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198468() __asm__("func_0018D870");
s32 func_001984F0_x00198468(s32, s32, s32) __asm__("func_001984F0");
s32 func_00198468_x00198468(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00198468");
s32 func_00198468_x00198468(s32 arg0, s32 arg1, s32 arg2)
{
  unsigned int new_var;
  if (arg1 != 0)
  {
    new_var = arg2;
    if (arg2 > 0)
    {
      if (func_0018D870_x00198468(arg0) != 0)
      {
        return func_0018D650_x00198468(0, 0xFF000165, new_var);
      }
      func_001984F0_x00198468(arg0 + 0x132C, arg1, arg2);
 do { } while (0);
      goto block_6;
    }
    return 0;
  }
  block_6:
  return new_var = 0;

}
s32 memset_x001984F0(s32, s32, s32) __asm__("memset");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_001984F0");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_s0;
  s32 temp_s2;
  s32 new_var;
  temp_s0 = (((u32) (arg1 + 3)) >> 2) * 4;
  temp_s2 = arg2 - 4;
  memset_x001984F0(temp_s0, 0, temp_s2);
  *((s32 *) (((u8 *) arg0) + 0)) = temp_s0;
  new_var = (s32) (temp_s2 / 12);
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = new_var;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198568);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001985F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001986A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198718);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001987C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198890);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001988D0);
s32 func_00198938_x001988F0(s32) __asm__("func_00198938");
void func_001988F0_x001988F0(s32 arg0, s32 arg1) __asm__("func_001988F0");
void func_001988F0_x001988F0(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg1 > 0)
  {
    var_s1 = arg0;
    var_s0 = arg1;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0xDC8;
      var_s0 -= 1;
      func_00198938_x001988F0(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198938);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001989A8);
s32 func_0018D650_x00198A60(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198A60() __asm__("func_0018D870");
char func_00198A60_x00198A60(u8 *arg0, s32 arg1) __asm__("func_00198A60");
char func_00198A60_x00198A60(u8 *arg0, s32 arg1) {
  if (func_0018D870_x00198A60(arg0) != 0)
  {
    func_0018D650_x00198A60(0, 0xFF000151);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x31E8)) = arg1;
}
s32 func_0018D650_x00198AB8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198AB8() __asm__("func_0018D870");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1) __asm__("func_00198AB8");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1)
{
  if (func_0018D870_x00198AB8() != 0)
  {
    func_0018D650_x00198AB8(0, 0xFF000152);
    return;
  }
  *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x31E8)))) + 0xDB0)) = arg1;
}
s32 func_0018D650_x00198B18(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198B18() __asm__("func_0018D870");
s32 func_00196548_x00198B18(s32) __asm__("func_00196548");
s32 func_00199818_x00198B18(s32, s32, s32) __asm__("func_00199818");
void func_00198B18_x00198B18(s32 arg0) __asm__("func_00198B18");
void func_00198B18_x00198B18(s32 arg0) {
    if (func_0018D870_x00198B18() != 0) {
        func_0018D650_x00198B18(0, 0xFF000153, 1);
        return;
    }
    func_00199818_x00198B18(arg0, 0x2F, 1);
    func_00196548_x00198B18(arg0);
}
s32 func_00198B78(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000154);
    }
    func_00198BE8(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) __asm__("func_00198BE8");
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg1 = ((temp_v0 ^ 1) != 0) ? 0 : temp_v0;
}
void func_00198C00(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_v1 != NULL) {
        if (*(s32 *)((u8 *)temp_v1 + 0xDA8) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDA8) = arg1;
        }
        if (*(s32 *)((u8 *)temp_v1 + 0xDAC) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDAC) = arg2;
        }
    }
}
s32 func_00198C78_x00198C30() __asm__("func_00198C78");
s32 func_001994D8_x00198C30(void *) __asm__("func_001994D8");
void func_00198C30_x00198C30(u8 *arg0) __asm__("func_00198C30");
void func_00198C30_x00198C30(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x31E8) == 0) {
        return;
    }
    func_00198C78_x00198C30();
    func_001994D8_x00198C30(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198C78);
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198DE0(int, int) __asm__("func_001999E0");
int func_00198DE0_x00198DE0(int a0, int a1, int a2) __asm__("func_00198DE0");
/* sfsee_IsAudioAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198DE0_x00198DE0(int a0, int a1, int a2) {
    int s0;
    int s1;
    int s2;
    int r;
    int v0;
    s2 = a1;
    s1 = a2;
    r = Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(a0, 3);
    s0 = a0;
    if (r) {
        r = GetArrayElemA0C_35A1C8_x00198DE0(s0, 6);
        if (r == 1) {
            *(int*)s1 = r;
            v0 = *(int*)s2;
            return ((unsigned int)v0 < 1u);
        }
    }
    *(int*)s1 = 0;
    return 0;
}
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198E60(int, int) __asm__("func_001999E0");
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) __asm__("func_00198E60");
/* sfsee_IsVideoAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) {
    int *s2;
    void *s0;
    int *s1;
    int v1;
    int v0;
    s2 = a1;
    s0 = a0;
    s1 = a2;
    if (!Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(s0, 2)) {
        goto fail;
    }
    v1 = GetArrayElemA0C_35A1C8_x00198E60(s0, 5);
    if (v1 != 1) {
        goto fail;
    }
    *s1 = v1;
    v0 = !(*s2);
    goto done;
fail:
    *s1 = 0;
    v0 = 0;
done:
    return v0;
}
s32 func_0019C188_x00198EE0(s32 a0, s32 a1) __asm__("func_0019C188");
s32 func_00198EE0_x00198EE0(s32 a0) __asm__("func_00198EE0");
s32 func_00198EE0_x00198EE0(s32 a0) {
    return func_0019C188_x00198EE0(a0, 1) != 0;
}
s32 func_00198F00(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000155);
    }
    func_00198F70(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198F70);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198FE0);
s32 func_0017EE78_x00199080() __asm__("func_0017EE78");
s32 func_001990D0_x00199080() __asm__("func_001990D0");
void func_00199080_x00199080(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_00199080");
void func_00199080_x00199080(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xDB0);
    if (temp_v0 != 0) {
        func_001990D0_x00199080(temp_v0, arg1, arg2, arg3);
        return;
    }
    *arg3 = func_0017EE78_x00199080(*(s32 *)((u8 *)arg0 + 0xD98));
}
void func_001990D0_x001990D0(s32 a0, s32 a1, s32 a2, s32 *a3) __asm__("func_001990D0");
void func_001990D0_x001990D0(s32 a0, s32 a1, s32 a2, s32 *a3) {
    *a3 = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001990D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199180);
void func_00199208_x00199208(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_00199208");
void func_00199208_x00199208(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    *arg2 = 0;
    *arg3 = 0x3E8;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199218);
s32 func_0018D870_x00199310() __asm__("func_0018D870");
s32 func_0018D650_x00199310() __asm__("func_0018D650");
s32 func_00199610_x00199310(void *) __asm__("func_00199610");
s32 func_00199310_x00199310(u8 *arg0, s32 arg1) __asm__("func_00199310");
s32 func_00199310_x00199310(u8 *arg0, s32 arg1)
{
  s32 r;
  u8 *p;
  r = func_0018D870_x00199310(arg0, arg1);
  if (r != 0)
  {
    return func_0018D650_x00199310(0, 0xFF000159);
  }
  p = *((u8 **) (arg0 + 0x31E8));
  if (p == 0)
  {
    return r;
  }
  *((s32 *) (p + 0xDB4)) = arg1;
  func_00199610_x00199310(arg0);
  r = 0;
  return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199380);
s32 func_0018D870_x00199408() __asm__("func_0018D870");
s32 func_0018D650_x00199408() __asm__("func_0018D650");
s32 func_00199610_x00199408(void *) __asm__("func_00199610");
s32 func_00199408_x00199408(u8 *arg0, s32 arg1) __asm__("func_00199408");
s32 func_00199408_x00199408(u8 *arg0, s32 arg1)
{
  s32 r;
  u8 *p;
  r = func_0018D870_x00199408(arg0, arg1);
  if (r != 0)
  {
    return func_0018D650_x00199408(0, 0xFF00015B);
  }
  p = *((u8 **) (arg0 + 0x31E8));
  if (p == 0)
  {
    return r;
  }
  *((s32 *) (p + 0xDC0)) = arg1;
  func_00199610_x00199408(arg0);
  r = 0;
  return r;
}
void func_00199478(u8 *arg0, s32 arg1) {
    u8 *temp_a0;

    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF00015C);
        return;
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_a0 != NULL) {
        *(s32 *)((u8 *)temp_a0 + 0xDC4) = arg1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001994D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001995C8);
s32 func_0017EE78_x00199610(s32, s32, s32) __asm__("func_0017EE78");
unsigned long long func_00199610_x00199610(u8 *arg0) __asm__("func_00199610");
unsigned long long func_00199610_x00199610(u8 *arg0)
{
  s32 var_a0;
  s32 var_a1;
  s32 var_a2;
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x31E8));
  var_v0 = *((s32 *) (((u8 *) temp_s0) + 0xDC0));
  if (var_v0 <= 0)
  {
    var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xDB4));
    var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDB8));
    var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDBC));
    if ((var_a0 <= 0) || (var_a2 <= 0))
    {
      var_v0 = *((s32 *) (((u8 *) temp_s0) + 4));
      if (var_v0 <= 0)
      {
        if (var_a0 <= 0)
        {
          var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xD9C));
        }
        if (var_a2 <= 0)
        {
          var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDA0));
          var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDA4));
        }
        if ((var_a0 > 0) && (var_a2 > 0))
        {
          goto block_10;
        }
      }
    }
    else
    {
      block_10:
      var_v0 = func_0017EE78_x00199610(var_a0, var_a1, var_a2);

    }
  }
  *((s32 *) (((u8 *) temp_s0) + 0xD98)) = var_v0;
}
void func_00199698(void) {
    func_001976B8();
}
s32 func_001996B0(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000111);
    }
    return *(s32 *)((u8 *)arg0 + 0x48);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001996F0);
s32 func_00199818_x001997A8(s32, s32, s32) __asm__("func_00199818");
extern s32 D_00426AE4_x001997A8 __asm__("D_00426AE4");
void func_001997A8_x001997A8(s32 arg0, s32 arg1) __asm__("func_001997A8");
void func_001997A8_x001997A8(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 7;
    var_s1 = &D_00426AE4_x001997A8;
    do {
        temp_v0 = *var_s1;
        var_s1 += 1;
        if (temp_v0 != 0) {
            func_00199818_x001997A8(temp_v0, arg0, arg1);
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
}
void func_00199818(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0) = arg2;
    }
}
void func_00199868(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0xB30) = arg2;
    }
}
extern int Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(int, int) __asm__("func_0019C188");
int func_001998B8_x001998B8(char *a0, int a1, int a2) __asm__("func_001998B8");
/* sfset_IsCondValid: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001998B8_x001998B8(char *a0, int a1, int a2)
{
    if (a1 == 6 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 3) == 0)
            return 0;
    }
    if (a1 == 5 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 2) == 0)
            return 0;
    }
    return 1;
}
typedef unsigned char Uint8_x00199940;
typedef signed char Sint8_x00199940;
typedef signed short Sint16_x00199940;
typedef unsigned int Uint32_x00199940;
typedef signed int Sint32_x00199940;
typedef signed long long Sint64_x00199940;
typedef char Char8_x00199940;
typedef struct SJ_OBJ_x00199940 *SJ_x00199940;
typedef struct {
        Uint8_x00199940 *data;
        Sint32_x00199940 len;
} SJCK_x00199940;
typedef struct {
        Uint8_x00199940 data[16];
} SJUUID_x00199940;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00199940 sj);
        const SJUUID_x00199940 *(*GetUuid)(SJ_x00199940 sj);
        void (*Reset)(SJ_x00199940 sj);
        void (*GetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, Sint32_x00199940 nbyte, SJCK_x00199940 *ck);
        void (*UngetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, SJCK_x00199940 *ck);
        void (*PutChunk)(SJ_x00199940 sj, Sint32_x00199940 id, SJCK_x00199940 *ck);
        Sint32_x00199940 (*GetNumData)(SJ_x00199940 sj, Sint32_x00199940 id);
        Sint32_x00199940 (*IsGetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, Sint32_x00199940 nbyte, Sint32_x00199940 *rbyte);
        void (*EntryErrFunc)(SJ_x00199940 sj, void (*func)(void *obj, Char8_x00199940 *msg), void *obj);
} SJ_IF_x00199940;
struct SJ_OBJ_x00199940 {
        SJ_IF_x00199940 *vtbl;
};
typedef struct SFD_OBJ_x00199940 *SFD_x00199940;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00199940 rsv1;
        Sint32_x00199940 rsv2;
} SFUO_CH_x00199940;
typedef struct {
        Sint32_x00199940 nch;
        SFUO_CH_x00199940 ch[3];
} SFUO_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Sint32_x00199940 (*SetOutPan)(SFD_x00199940 sfd, Sint32_x00199940 ch, Sint32_x00199940 pan);
        Sint32_x00199940 (*GetOutPan)(SFD_x00199940 sfd, Sint32_x00199940 ch);
        Sint32_x00199940 (*SetOutVol)(SFD_x00199940 sfd, Sint32_x00199940 vol);
        Sint32_x00199940 (*GetOutVol)(SFD_x00199940 sfd);
        void (*SetSpeed)(SFD_x00199940 sfd, Sint32_x00199940 speed);
        Sint32_x00199940 x18;
} SFAOAP_x00199940;
typedef struct {
        Uint8_x00199940 pad0[0xB8];
        Sint32_x00199940 tottime;
        Sint32_x00199940 tunit;
        Uint8_x00199940 padc0[0x150 - 0xC0];
        Sint64_x00199940 scr_base;
        Sint64_x00199940 scr_ofst;
        Sint32_x00199940 pad160;
        Sint32_x00199940 ctime;
        Sint32_x00199940 ctime_idx;
        Sint32_x00199940 ctime_que[32];
        Sint32_x00199940 tot_last;
        Sint32_x00199940 pad1F0;
        Sint32_x00199940 que_wr;
        Sint32_x00199940 que_rd;
        Sint32_x00199940 tot_que[32];
} SFCON_x00199940;
typedef struct {
        Sint32_x00199940 type;
        Sint32_x00199940 drop;
        Sint32_x00199940 hour;
        Sint32_x00199940 min;
        Sint32_x00199940 sec;
        Sint32_x00199940 frm;
        Sint32_x00199940 frm2;
        Sint16_x00199940 x1c;
        Sint16_x00199940 field;
} SFTIM_TC_x00199940;
typedef struct {
        Sint32_x00199940 valid;
        SFTIM_TC_x00199940 tc;
        Sint32_x00199940 val;
        Sint32_x00199940 unit;
} SFTIM_TTU_x00199940;
typedef struct {
        Sint64_x00199940 pts;
        Uint32_x00199940 pos;
        Uint32_x00199940 len;
} SFPTS_ENT_x00199940;
typedef struct {
        SFPTS_ENT_x00199940 *ent;
        Sint32_x00199940 num;
        Sint32_x00199940 cnt;
        Sint32_x00199940 wr;
        Sint32_x00199940 rd;
} SFPTS_QUE_x00199940;
typedef struct {
        Sint32_x00199940 raw[0x20];
} SFD_VFRM_INF_x00199940;
typedef struct {
        void *frm;
        Sint32_x00199940 x04;
        SFD_VFRM_INF_x00199940 inf;
} SFD_VFRM_x00199940;
typedef struct {
        Sint32_x00199940 kind;
        SJ_x00199940 sj;
        Uint32_x00199940 ofst;
        Sint32_x00199940 size;
        Sint32_x00199940 xsize;
        Sint32_x00199940 x14;
} SFBUF_SUP_x00199940;
typedef struct {
        SFBUF_SUP_x00199940 sup;
        Uint8_x00199940 *dlm_pos;
        Sint32_x00199940 dlm_len;
        Sint32_x00199940 wtot;
        Sint32_x00199940 rtot;
        SFPTS_QUE_x00199940 ptsque;
} SFBUF_RING_x00199940;
typedef struct {
        Sint32_x00199940 mode;
        Sint32_x00199940 used;
        Sint32_x00199940 prepflg;
        Sint32_x00199940 termflg;
        union {
                SFBUF_RING_x00199940 ring;
                struct {
                        Uint32_x00199940 adr;
                        Sint32_x00199940 size;
                        Sint32_x00199940 x18;
                        Sint32_x00199940 x1c;
                        SFD_VFRM_x00199940 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00199940 adr;
                        Sint32_x00199940 size;
                        Sint32_x00199940 rsv[7];
                        Sint32_x00199940 rsv2[3];
                } aout;
                SFUO_CH_x00199940 uoch[3];
        } u;
        Sint32_x00199940 in_tr;
        Sint32_x00199940 out_tr;
        Sint32_x00199940 rsv[8];
} SFBUF_WORK_x00199940;
typedef struct {
        Sint32_x00199940 (*Init)();
        Sint32_x00199940 (*Finish)();
        Sint32_x00199940 (*ExecServer)();
        Sint32_x00199940 (*Create)();
        Sint32_x00199940 (*Destroy)();
        Sint32_x00199940 (*Standby)();
        Sint32_x00199940 (*Start)();
        Sint32_x00199940 (*Stop)();
        Sint32_x00199940 (*Pause)();
        Sint32_x00199940 (*GetWrite)();
        Sint32_x00199940 (*AddWrite)();
        Sint32_x00199940 (*GetRead)();
        Sint32_x00199940 (*AddRead)();
        Sint32_x00199940 (*Seek)();
} SFD_TR_IF_x00199940;
typedef Sint32_x00199940 (*SFD_TR_FUNC_x00199940)();
typedef struct {
        Sint32_x00199940 prepflg;
        Sint32_x00199940 termflg;
        void *hn;
        SFD_TR_FUNC_x00199940 *trif;
        Sint32_x00199940 bufin;
        Sint32_x00199940 bufout;
        Sint32_x00199940 bufout2;
        Sint32_x00199940 bufout3;
        Sint32_x00199940 x20;
        Uint8_x00199940 pad24[0x44 - 0x24];
} SFD_TR_x00199940;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00199940 cwidth;
        Sint16_x00199940 ywidth;
} SFMPV_PLANE_x00199940;
typedef struct {
        void *buf;
        Sint32_x00199940 len;
} SFMPV_PICUSR_x00199940;
typedef struct {
        Sint32_x00199940 stat;
        Sint32_x00199940 lock;
        void *buf;
        SFTIM_TTU_x00199940 ttu;
        Sint32_x00199940 ftime;
        Sint32_x00199940 tunit;
        Sint32_x00199940 ndct;
        Sint32_x00199940 nbyte;
        Sint32_x00199940 gopno;
        Sint32_x00199940 x4c;
        Sint32_x00199940 x50;
        SFMPV_PICUSR_x00199940 *picusr;
        Sint32_x00199940 pa_width;
        Sint32_x00199940 pa_height;
        Sint32_x00199940 pa_mb_width;
        Sint32_x00199940 pa_mb_height;
        Sint32_x00199940 pa_frame_rate;
        Sint32_x00199940 tmpref;
        Sint32_x00199940 pa_pic_type;
        Sint32_x00199940 pa_tc_drop;
        Sint32_x00199940 pa_tc_hour;
        Sint32_x00199940 pa_tc_min;
        Sint32_x00199940 pa_tc_sec;
        Sint32_x00199940 pa_tc_pic;
        Sint32_x00199940 x88;
        Sint32_x00199940 x8c;
        Sint32_x00199940 pa_x90[3];
        Sint32_x00199940 pa_x9c[3];
        Sint16_x00199940 pa_xa8;
        Sint16_x00199940 pa_xaa;
        Sint8_x00199940 pa_xac;
        Sint8_x00199940 pa_xad;
        Sint8_x00199940 pa_xae;
        Sint8_x00199940 pa_xaf;
        Sint8_x00199940 pa_xb0;
        Sint8_x00199940 pa_xb1;
        Sint8_x00199940 pa_xb2;
        Sint8_x00199940 pa_xb3;
        Sint8_x00199940 pa_xb4;
        Sint8_x00199940 pa_xb5;
        Sint8_x00199940 pa_xb6;
        Sint8_x00199940 pa_xb7;
        Sint8_x00199940 pa_xb8;
        Sint8_x00199940 pa_xb9;
        Sint8_x00199940 pa_xba;
        Sint8_x00199940 pa_xbb;
        Sint8_x00199940 pa_xbc;
        Uint8_x00199940 padbd[0xD8 - 0xBD];
        Sint64_x00199940 pts;
} SFMPV_FRM_x00199940;
typedef struct {
        Sint32_x00199940 cwidth;
        Sint32_x00199940 cheight;
        Sint32_x00199940 width;
        Sint32_x00199940 height;
        Sint32_x00199940 x10;
        Sint32_x00199940 max_width;
        Sint32_x00199940 max_height;
        Sint32_x00199940 nfrm;
        Sint32_x00199940 x20;
} SFMPV_PARA_x00199940;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00199940 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00199940 *curfrm;
        Sint32_x00199940 picstat;
        Sint32_x00199940 dlmmask;
        Sint32_x00199940 termflg;
        Sint32_x00199940 gopstat;
        Sint32_x00199940 nskip;
        Sint32_x00199940 nconcat;
        Uint8_x00199940 picatr[0x80];
        Sint32_x00199940 last_ngop;
        Sint32_x00199940 newgop;
        Sint32_x00199940 vbvsiz;
        Sint32_x00199940 pts_tmpref;
        Sint32_x00199940 pts_ofst;
        Sint32_x00199940 pts_max;
        Sint32_x00199940 pad124;
        SFPTS_ENT_x00199940 ptsent;
        Sint32_x00199940 refidx[2];
        SFMPV_PLANE_x00199940 rfbuf[2];
        SFMPV_FRM_x00199940 *ref[2];
        SFMPV_FRM_x00199940 *pendfrm;
        Sint32_x00199940 skipret;
        Sint32_x00199940 dlmwait;
        Sint32_x00199940 tmpref_adj;
        Sint32_x00199940 nfrm;
        Sint32_x00199940 pad17c;
        SFMPV_FRM_x00199940 frm[16];
        void *picusr_buf;
        Sint32_x00199940 picusr_num;
        Sint32_x00199940 picusr_siz;
        Uint8_x00199940 *picusr_dat;
        Sint32_x00199940 picusr_len;
        SFMPV_PICUSR_x00199940 picusr[16];
        Sint32_x00199940 pad1014;
        Sint64_x00199940 pts;
} SFMPV_WORK_x00199940;
typedef struct {
        Sint32_x00199940 raw[0x2A];
} SFD_PLYINF_x00199940 __attribute__((aligned(8)));
typedef struct {
        SFD_TR_IF_x00199940 *tbl[15];
} SFTRN_TRIF_TBL_x00199940;
typedef struct {
        void (*fn)(void *obj, Sint32_x00199940 code);
        void *obj;
        Sint32_x00199940 code;
        Sint32_x00199940 x0c;
        Sint32_x00199940 x10;
} SFLIB_ERRINF_x00199940;
typedef struct {
        Sint32_x00199940 codec;
        Sint32_x00199940 layer;
        Sint32_x00199940 chnum;
        Sint32_x00199940 smphz;
} SFHDS_AUD_x00199940;
typedef struct {
        Sint32_x00199940 codec;
        Sint32_x00199940 bitrate;
        Sint32_x00199940 picw;
        Sint32_x00199940 pich;
        Sint32_x00199940 picrate;
        Sint32_x00199940 ftr_eff;
        Sint32_x00199940 ftr_coltype;
        Sint32_x00199940 ftr_pictype;
        Sint32_x00199940 ftr_fixflg;
        Sint32_x00199940 ftr_shcfixflg;
        Sint32_x00199940 ftr_expand;
        Sint32_x00199940 ftr_gopn;
        Sint32_x00199940 ftr_gopm;
} SFHDS_VID_x00199940;
typedef struct {
        Sint32_x00199940 valid;
        Sint32_x00199940 ver_major;
        Sint32_x00199940 ver_minor;
        Sint32_x00199940 byterate;
        Sint32_x00199940 hdrsiz;
        Sint32_x00199940 packtype;
        Sint32_x00199940 pketsizlen;
        Sint32_x00199940 packsiz;
        Sint32_x00199940 numelem_tot;
        Sint32_x00199940 numelem_aud;
        Sint32_x00199940 numelem_vid;
        Sint32_x00199940 numelem_prv;
        Sint32_x00199940 maxplylen_aud;
        Sint32_x00199940 maxplylen_vid;
        Sint32_x00199940 maxfrmnum;
        Sint32_x00199940 stmid_prv1;
        Sint32_x00199940 stmid_prv2;
        Sint32_x00199940 stmid_aud;
        Sint32_x00199940 stmid_vid;
        SFHDS_AUD_x00199940 aud;
        SFHDS_VID_x00199940 vid;
        Sint32_x00199940 rawsiz;
        Uint8_x00199940 raw[0x800];
} SFHDS_FHD_x00199940;
typedef struct {
        Uint8_x00199940 data[2][0xB0];
        Sint32_x00199940 len[2];
} SFSEE_SYSHD_x00199940;
typedef struct {
        Sint32_x00199940 analyzed;
        Sint32_x00199940 ncount;
        Sint32_x00199940 tscale;
        Sint32_x00199940 nvid;
        Sint32_x00199940 naud;
        Sint32_x00199940 pad14;
        Sint64_x00199940 scr_base;
        Sint64_x00199940 pts_min;
        Sint32_x00199940 stmid_vid;
        Sint32_x00199940 stmid_aud;
        SFSEE_SYSHD_x00199940 syshd;
} SFSEE_SHDR_x00199940;
typedef struct {
        Sint32_x00199940 analyzed;
        Sint32_x00199940 ncount;
        Sint32_x00199940 tscale;
        SFHDS_FHD_x00199940 fhd;
        SFSEE_SHDR_x00199940 shdr;
        Uint8_x00199940 pada38[0xAD0 - 0xA38];
        Sint32_x00199940 a1hdr;
        Sint32_x00199940 a1ncount;
        Sint32_x00199940 a1tscale;
        Uint8_x00199940 padadc[0xD0C - 0xADC];
        Sint32_x00199940 a2hdr;
        Sint32_x00199940 a2ncount;
        Sint32_x00199940 a2tscale;
        Uint8_x00199940 padd18[0xDA8 - 0xD18];
        Sint32_x00199940 rate;
        Sint32_x00199940 fsize_est;
        Sint32_x00199940 tot_est;
        Sint32_x00199940 tunit_est;
        Sint32_x00199940 av_a;
        Sint32_x00199940 av_b;
        Sint32_x00199940 paddc0;
        Sint32_x00199940 fsize;
        Sint32_x00199940 tottime;
        Sint32_x00199940 tunit;
        Sint32_x00199940 byterate;
        Sint32_x00199940 seekpos;
} SFSEE_WORK_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Sint32_x00199940 pos;
        Sint32_x00199940 x08;
} SFSEE_REQ_x00199940;
typedef struct {
        Sint32_x00199940 bsize;
        Sint32_x00199940 xsize;
        void *buf;
        Sint32_x00199940 maxnch;
        Sint32_x00199940 x10;
        Sint32_x00199940 worksize;
        void *work;
} SFADXT_PARA_x00199940;
typedef struct {
        void *adxt;
        SJ_x00199940 sj;
        SFADXT_PARA_x00199940 para;
        Sint32_x00199940 tcount;
        Sint32_x00199940 tunit;
        Sint32_x00199940 pause;
        Sint32_x00199940 discard;
        Sint32_x00199940 seekflg;
        Sint32_x00199940 smplofst;
        void (*func)(SFD_x00199940 sfd, Uint8_x00199940 *data, Sint32_x00199940 len, Sint32_x00199940 *nbyte);
        Sint32_x00199940 x40;
        Sint32_x00199940 svrfreq;
        Sint32_x00199940 totbyte;
        Sint32_x00199940 x4c;
} SFADXT_WORK_x00199940;
typedef struct {
        SFSEE_WORK_x00199940 *wk;
        SFSEE_REQ_x00199940 req;
} SFSEE_HN_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Uint32_x00199940 adr;
        Sint32_x00199940 size[7];
        Sint32_x00199940 x24;
        Sint32_x00199940 unit;
        Sint32_x00199940 x2c;
        Sint32_x00199940 x30;
        Sint32_x00199940 x34;
        Sint32_x00199940 x38;
        void *hnwork;
        Sint32_x00199940 hnwksiz;
} SFD_CREPRM_x00199940;
typedef struct {
        void *x00;
        Sint32_x00199940 x04;
        Sint32_x00199940 x08;
} SFPLY_PTSM_x00199940;
typedef struct {
        Sint64_x00199940 sum;
        Sint64_x00199940 min;
        Sint64_x00199940 max;
        Sint32_x00199940 cnt;
} SFTMR_TSUM_x00199940;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00199940 nvid;
        Sint32_x00199940 naud;
        Sint32_x00199940 x0c;
        Sint64_x00199940 pts_min;
        Sint64_x00199940 pts_min2;
        Sint32_x00199940 concat_cnt;
        Sint32_x00199940 last_vid;
        Sint32_x00199940 last_aud;
        Sint32_x00199940 first_vid;
        Sint32_x00199940 first_aud;
        Sint32_x00199940 cur_vid;
        Sint32_x00199940 cur_aud;
        Sint32_x00199940 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00199940 stmid);
        void *outobj;
        Sint32_x00199940 skip;
        Sint32_x00199940 x15c;
        Sint32_x00199940 x160;
        Sint32_x00199940 x164;
} SFMPS_WORK_x00199940;
typedef struct SFD_OBJ_x00199940 {
        SFD_CREPRM_x00199940 prm;
        Sint32_x00199940 chg_flg;
        Sint32_x00199940 stat;
        Sint32_x00199940 req;
        Sint32_x00199940 pause_sw;
        Sint32_x00199940 pause_cnt;
        Uint8_x00199940 pad58[0x74 - 0x58];
        Sint32_x00199940 pad74;
        SFHDS_FHD_x00199940 fhd;
        Sint32_x00199940 x90c;
        Sint32_x00199940 x910;
        Sint32_x00199940 x914;
        Sint32_x00199940 x918;
        Sint32_x00199940 x91c;
        Sint32_x00199940 picrate;
        Sint32_x00199940 x924;
        Sint32_x00199940 x928;
        Sint32_x00199940 x92c;
        Sint32_x00199940 numelem_aud;
        Sint32_x00199940 numelem_vid;
        Sint32_x00199940 numelem_prv;
        Sint32_x00199940 x93c;
        Sint32_x00199940 x940;
        Sint32_x00199940 x944;
        Sint32_x00199940 x948;
        Sint32_x00199940 x94c;
        SFD_PLYINF_x00199940 plyinf;
        SFLIB_ERRINF_x00199940 err;
        Sint32_x00199940 cond[100];
        Sint32_x00199940 cond_def[100];
        Uint8_x00199940 padD24[4];
        SFCON_x00199940 con;
        Uint8_x00199940 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00199940))];
        Uint8_x00199940 tst[0x1C0];
        Uint8_x00199940 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00199940 ptsm;
        Uint8_x00199940 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00199940 buf[8];
        SFD_VFRM_x00199940 vfrm[16];
        SFD_TR_x00199940 tr[9];
        Sint32_x00199940 pad218c;
        SFMPS_WORK_x00199940 mps;
        Uint8_x00199940 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00199940 mpv;
        SFADXT_WORK_x00199940 adxt;
        Uint8_x00199940 pad3410[0x3474 - 0x3410];
        SFAOAP_x00199940 aoap;
        SFUO_x00199940 uo_tbl;
        Sint32_x00199940 pad34c4;
        SFSEE_HN_x00199940 see;
        SFTMR_TSUM_x00199940 tsum[6];
} SFD_OBJ_x00199940;
typedef struct {
        Sint32_x00199940 cond[100];
        SFTRN_TRIF_TBL_x00199940 *trif_tbl;
        Sint32_x00199940 prm1;
        Sint32_x00199940 x198;
        SFLIB_ERRINF_x00199940 err;
        Uint8_x00199940 tim[0xC];
        Sint32_x00199940 buf;
        SFTRN_TRIF_TBL_x00199940 trif;
        Sint32_x00199940 x1fc;
        Sint32_x00199940 x200;
        SFD_x00199940 hn[8];
        Sint32_x00199940 x224;
} SFLIB_WORK_x00199940;
extern SFLIB_WORK_x00199940 SFLIB_libwork_x00199940 __asm__("D_004268E0");
Sint32_x00199940 SFLIB_SetErr_x00199940(SFD_x00199940 sfd, Sint32_x00199940 code) __asm__("func_0018D650");
Sint32_x00199940 SFLIB_CheckHn_x00199940(SFD_x00199940 sfd) __asm__("func_0018D870");
Sint32_x00199940 SFSET_GetCond_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id) __asm__("func_001999E0");
Sint32_x00199940 SFSET_GetCond_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id) __asm__("func_001999E0");
Sint32_x00199940 func_00199940_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id, Sint32_x00199940 *val) __asm__("func_00199940");
/* SFD_GetCond: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_set.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00199940 func_00199940_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id, Sint32_x00199940 *val)
{
        if (sfd == 0) {
                *val = SFLIB_libwork_x00199940.cond[id];
        } else {
                if (SFLIB_CheckHn_x00199940(sfd) != 0) {
                        return SFLIB_SetErr_x00199940(0, 0xFF000113);
                }
                *val = SFSET_GetCond_x00199940(sfd, id);
        }
        return 0;
}
s32 func_001999E0(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001999F0);
typedef unsigned char u8_x00199AC8;
typedef signed int s32_x00199AC8;
typedef unsigned int u32_x00199AC8;
struct fn_12_2D58C_Copy64_x00199AC8 { u32_x00199AC8 a[16]; };
extern s32_x00199AC8 fn_12_24990_x00199AC8(u32_x00199AC8) __asm__("func_0018D870");
extern s32_x00199AC8 fn_12_24A88_x00199AC8(void *, s32_x00199AC8) __asm__("func_0018D650");
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) __asm__("func_00199AC8");
/* fn_12_2D58C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2D58C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) {
    s32_x00199AC8 t0;
    t0 = fn_12_24990_x00199AC8(arg0);
    if (t0 != 0) {
    return fn_12_24A88_x00199AC8(0, 0xFF000000 + 281);
    }
    *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg1 + 0) = *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg0 + 2380);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199BA0);
s32 func_0018D650_x00199CA8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00199CA8() __asm__("func_0018D870");
s32 func_00199D28_x00199CA8(s32, s32, s32) __asm__("func_00199D28");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00199CA8");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0018D870_x00199CA8() != 0) {
        return func_0018D650_x00199CA8(0, 0xFF000117, arg2);
    }
    func_00199D28_x00199CA8(arg0, arg1, arg2);
    return 0;
}
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_00199D28");
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;

    temp_v0 = *(s32 **)((u8 *)((arg1 * 0x44) + arg0) + 0x1BE8);
    if (temp_v0 == NULL) {
        goto block_2;
    }
    goto block_5;
block_2:
    *arg2 = 0;
    return;
block_5:
    *arg2 = *temp_v0;
    return;
}
s32 func_00199D58(u8 *arg0, u8 **arg1, s32 *arg2) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00011C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        *arg1 = arg0 + 0x10C;
        *arg2 = *(s32 *)((u8 *)arg0 + 0x108);
    } else {
        *arg1 = NULL;
        *arg2 = 0;
    }
    return 0;
}
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1) __asm__("func_00199DF0");
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1)
{
 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = 0; } while (0);
}
void func_00199E00(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199E08);
void func_0019A010(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    func_0019A058(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
}
void func_0019A058_x0019A058(u8 *arg0) __asm__("func_0019A058");
void func_0019A058_x0019A058(u8 *arg0)
{
  *((s16 *) (((u8 *) arg0) + 0x1E)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0xC)) = 0; *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0x14)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1C)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A080);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A160);
void func_0019A1C8(s32 arg0) {
    func_0019A218();
    if (func_001999E0(arg0, 0x47) == 1) {
        func_0019AD80(arg0);
    }
}
s32 func_0019A288_x0019A218() __asm__("func_0019A288");
s32 func_0019A2C0_x0019A218(s32, void *) __asm__("func_0019A2C0");
void func_0019A218_x0019A218(s32 arg0) __asm__("func_0019A218");
void func_0019A218_x0019A218(s32 arg0)
{
  u8 *temp_s1;
  temp_s1 = arg0 + 0xCC0;
  if (func_0019A288_x0019A218(arg0) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x29C)) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x29C))) + (*((s32 *) (((u8 *) temp_s1) + 0x2A0))));
  }
  if (func_0019A2C0_x0019A218(arg0, temp_s1) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x2C0)) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x2C0))) + (*((s32 *) (((u8 *) temp_s1) + 0x2A0))));
    asm __volatile__("");
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A288);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A2C0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A2E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A330);
s32 func_0018D650_x0019A3C8(s32, s32) __asm__("func_0018D650");
s32 func_0019A408_x0019A3C8() __asm__("func_0019A408");
s32 func_0019A3C8_x0019A3C8(s32 arg0) __asm__("func_0019A3C8");
s32 func_0019A3C8_x0019A3C8(s32 arg0)
{
  s32 var_v0;
  s32 new_var;
  var_v0 = func_0019A408_x0019A3C8(arg0);
  if (var_v0 != 0)
  {
    func_0018D650_x0019A3C8(arg0, 0xFF000222);
    var_v0 = 1;
  }
  if (var_v0)
  {
    new_var = var_v0;
    return new_var;
  }
  else
  {
    return var_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A408);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A488);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A4D8);
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019A550");
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  u8 *new_var;
 do { *((s32 *) (((u8 *) arg0) + 0x148)) = arg2; new_var = arg0; } while (0);
  new_var2 = ((u8 *) new_var) + 0x144;
  *((s32 *) new_var2) = arg1;
}
typedef unsigned char Uint8_x0019A560;
typedef signed char Sint8_x0019A560;
typedef signed short Sint16_x0019A560;
typedef unsigned int Uint32_x0019A560;
typedef signed int Sint32_x0019A560;
typedef signed long long Sint64_x0019A560;
typedef char Char8_x0019A560;
typedef struct SJ_OBJ_x0019A560 *SJ_x0019A560;
typedef struct {
        Uint8_x0019A560 *data;
        Sint32_x0019A560 len;
} SJCK_x0019A560;
typedef struct {
        Uint8_x0019A560 data[16];
} SJUUID_x0019A560;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019A560 sj);
        const SJUUID_x0019A560 *(*GetUuid)(SJ_x0019A560 sj);
        void (*Reset)(SJ_x0019A560 sj);
        void (*GetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, Sint32_x0019A560 nbyte, SJCK_x0019A560 *ck);
        void (*UngetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, SJCK_x0019A560 *ck);
        void (*PutChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, SJCK_x0019A560 *ck);
        Sint32_x0019A560 (*GetNumData)(SJ_x0019A560 sj, Sint32_x0019A560 id);
        Sint32_x0019A560 (*IsGetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, Sint32_x0019A560 nbyte, Sint32_x0019A560 *rbyte);
        void (*EntryErrFunc)(SJ_x0019A560 sj, void (*func)(void *obj, Char8_x0019A560 *msg), void *obj);
} SJ_IF_x0019A560;
struct SJ_OBJ_x0019A560 {
        SJ_IF_x0019A560 *vtbl;
};
typedef struct SFD_OBJ_x0019A560 *SFD_x0019A560;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019A560 rsv1;
        Sint32_x0019A560 rsv2;
} SFUO_CH_x0019A560;
typedef struct {
        Sint32_x0019A560 nch;
        SFUO_CH_x0019A560 ch[3];
} SFUO_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Sint32_x0019A560 (*SetOutPan)(SFD_x0019A560 sfd, Sint32_x0019A560 ch, Sint32_x0019A560 pan);
        Sint32_x0019A560 (*GetOutPan)(SFD_x0019A560 sfd, Sint32_x0019A560 ch);
        Sint32_x0019A560 (*SetOutVol)(SFD_x0019A560 sfd, Sint32_x0019A560 vol);
        Sint32_x0019A560 (*GetOutVol)(SFD_x0019A560 sfd);
        void (*SetSpeed)(SFD_x0019A560 sfd, Sint32_x0019A560 speed);
        Sint32_x0019A560 x18;
} SFAOAP_x0019A560;
typedef struct {
        Uint8_x0019A560 pad0[0xB8];
        Sint32_x0019A560 tottime;
        Sint32_x0019A560 tunit;
        Uint8_x0019A560 padc0[0x150 - 0xC0];
        Sint64_x0019A560 scr_base;
        Sint64_x0019A560 scr_ofst;
        Sint32_x0019A560 pad160;
        Sint32_x0019A560 ctime;
        Sint32_x0019A560 ctime_idx;
        Sint32_x0019A560 ctime_que[32];
        Sint32_x0019A560 tot_last;
        Sint32_x0019A560 pad1F0;
        Sint32_x0019A560 que_wr;
        Sint32_x0019A560 que_rd;
        Sint32_x0019A560 tot_que[32];
} SFCON_x0019A560;
typedef struct {
        Sint32_x0019A560 type;
        Sint32_x0019A560 drop;
        Sint32_x0019A560 hour;
        Sint32_x0019A560 min;
        Sint32_x0019A560 sec;
        Sint32_x0019A560 frm;
        Sint32_x0019A560 frm2;
        Sint16_x0019A560 x1c;
        Sint16_x0019A560 field;
} SFTIM_TC_x0019A560;
typedef struct {
        Sint32_x0019A560 valid;
        SFTIM_TC_x0019A560 tc;
        Sint32_x0019A560 val;
        Sint32_x0019A560 unit;
} SFTIM_TTU_x0019A560;
typedef struct {
        Sint64_x0019A560 pts;
        Uint32_x0019A560 pos;
        Uint32_x0019A560 len;
} SFPTS_ENT_x0019A560;
typedef struct {
        SFPTS_ENT_x0019A560 *ent;
        Sint32_x0019A560 num;
        Sint32_x0019A560 cnt;
        Sint32_x0019A560 wr;
        Sint32_x0019A560 rd;
} SFPTS_QUE_x0019A560;
typedef struct {
        Sint32_x0019A560 raw[0x20];
} SFD_VFRM_INF_x0019A560;
typedef struct {
        void *frm;
        Sint32_x0019A560 x04;
        SFD_VFRM_INF_x0019A560 inf;
} SFD_VFRM_x0019A560;
typedef struct {
        Sint32_x0019A560 kind;
        SJ_x0019A560 sj;
        Uint32_x0019A560 ofst;
        Sint32_x0019A560 size;
        Sint32_x0019A560 xsize;
        Sint32_x0019A560 x14;
} SFBUF_SUP_x0019A560;
typedef struct {
        SFBUF_SUP_x0019A560 sup;
        Uint8_x0019A560 *dlm_pos;
        Sint32_x0019A560 dlm_len;
        Sint32_x0019A560 wtot;
        Sint32_x0019A560 rtot;
        SFPTS_QUE_x0019A560 ptsque;
} SFBUF_RING_x0019A560;
typedef struct {
        Sint32_x0019A560 mode;
        Sint32_x0019A560 used;
        Sint32_x0019A560 prepflg;
        Sint32_x0019A560 termflg;
        union {
                SFBUF_RING_x0019A560 ring;
                struct {
                        Uint32_x0019A560 adr;
                        Sint32_x0019A560 size;
                        Sint32_x0019A560 x18;
                        Sint32_x0019A560 x1c;
                        SFD_VFRM_x0019A560 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019A560 adr;
                        Sint32_x0019A560 size;
                        Sint32_x0019A560 rsv[7];
                        Sint32_x0019A560 rsv2[3];
                } aout;
                SFUO_CH_x0019A560 uoch[3];
        } u;
        Sint32_x0019A560 in_tr;
        Sint32_x0019A560 out_tr;
        Sint32_x0019A560 rsv[8];
} SFBUF_WORK_x0019A560;
typedef Sint32_x0019A560 (*SFD_TR_FUNC_x0019A560)();
typedef struct {
        Sint32_x0019A560 prepflg;
        Sint32_x0019A560 termflg;
        void *hn;
        SFD_TR_FUNC_x0019A560 *trif;
        Sint32_x0019A560 bufin;
        Sint32_x0019A560 bufout;
        Sint32_x0019A560 bufout2;
        Sint32_x0019A560 bufout3;
        Sint32_x0019A560 x20;
        Uint8_x0019A560 pad24[0x44 - 0x24];
} SFD_TR_x0019A560;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019A560 cwidth;
        Sint16_x0019A560 ywidth;
} SFMPV_PLANE_x0019A560;
typedef struct {
        void *buf;
        Sint32_x0019A560 len;
} SFMPV_PICUSR_x0019A560;
typedef struct {
        Sint32_x0019A560 stat;
        Sint32_x0019A560 lock;
        void *buf;
        SFTIM_TTU_x0019A560 ttu;
        Sint32_x0019A560 ftime;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 ndct;
        Sint32_x0019A560 nbyte;
        Sint32_x0019A560 gopno;
        Sint32_x0019A560 x4c;
        Sint32_x0019A560 x50;
        SFMPV_PICUSR_x0019A560 *picusr;
        Sint32_x0019A560 pa_width;
        Sint32_x0019A560 pa_height;
        Sint32_x0019A560 pa_mb_width;
        Sint32_x0019A560 pa_mb_height;
        Sint32_x0019A560 pa_frame_rate;
        Sint32_x0019A560 tmpref;
        Sint32_x0019A560 pa_pic_type;
        Sint32_x0019A560 pa_tc_drop;
        Sint32_x0019A560 pa_tc_hour;
        Sint32_x0019A560 pa_tc_min;
        Sint32_x0019A560 pa_tc_sec;
        Sint32_x0019A560 pa_tc_pic;
        Sint32_x0019A560 x88;
        Sint32_x0019A560 x8c;
        Sint32_x0019A560 pa_x90[3];
        Sint32_x0019A560 pa_x9c[3];
        Sint16_x0019A560 pa_xa8;
        Sint16_x0019A560 pa_xaa;
        Sint8_x0019A560 pa_xac;
        Sint8_x0019A560 pa_xad;
        Sint8_x0019A560 pa_xae;
        Sint8_x0019A560 pa_xaf;
        Sint8_x0019A560 pa_xb0;
        Sint8_x0019A560 pa_xb1;
        Sint8_x0019A560 pa_xb2;
        Sint8_x0019A560 pa_xb3;
        Sint8_x0019A560 pa_xb4;
        Sint8_x0019A560 pa_xb5;
        Sint8_x0019A560 pa_xb6;
        Sint8_x0019A560 pa_xb7;
        Sint8_x0019A560 pa_xb8;
        Sint8_x0019A560 pa_xb9;
        Sint8_x0019A560 pa_xba;
        Sint8_x0019A560 pa_xbb;
        Sint8_x0019A560 pa_xbc;
        Uint8_x0019A560 padbd[0xD8 - 0xBD];
        Sint64_x0019A560 pts;
} SFMPV_FRM_x0019A560;
typedef struct {
        Sint32_x0019A560 cwidth;
        Sint32_x0019A560 cheight;
        Sint32_x0019A560 width;
        Sint32_x0019A560 height;
        Sint32_x0019A560 x10;
        Sint32_x0019A560 max_width;
        Sint32_x0019A560 max_height;
        Sint32_x0019A560 nfrm;
        Sint32_x0019A560 x20;
} SFMPV_PARA_x0019A560;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019A560 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019A560 *curfrm;
        Sint32_x0019A560 picstat;
        Sint32_x0019A560 dlmmask;
        Sint32_x0019A560 termflg;
        Sint32_x0019A560 gopstat;
        Sint32_x0019A560 nskip;
        Sint32_x0019A560 nconcat;
        Uint8_x0019A560 picatr[0x80];
        Sint32_x0019A560 last_ngop;
        Sint32_x0019A560 newgop;
        Sint32_x0019A560 vbvsiz;
        Sint32_x0019A560 pts_tmpref;
        Sint32_x0019A560 pts_ofst;
        Sint32_x0019A560 pts_max;
        Sint32_x0019A560 pad124;
        SFPTS_ENT_x0019A560 ptsent;
        Sint32_x0019A560 refidx[2];
        SFMPV_PLANE_x0019A560 rfbuf[2];
        SFMPV_FRM_x0019A560 *ref[2];
        SFMPV_FRM_x0019A560 *pendfrm;
        Sint32_x0019A560 skipret;
        Sint32_x0019A560 dlmwait;
        Sint32_x0019A560 tmpref_adj;
        Sint32_x0019A560 nfrm;
        Sint32_x0019A560 pad17c;
        SFMPV_FRM_x0019A560 frm[16];
        void *picusr_buf;
        Sint32_x0019A560 picusr_num;
        Sint32_x0019A560 picusr_siz;
        Uint8_x0019A560 *picusr_dat;
        Sint32_x0019A560 picusr_len;
        SFMPV_PICUSR_x0019A560 picusr[16];
        Sint32_x0019A560 pad1014;
        Sint64_x0019A560 pts;
} SFMPV_WORK_x0019A560;
typedef struct {
        Sint32_x0019A560 raw[0x2A];
} SFD_PLYINF_x0019A560 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019A560 code);
        void *obj;
        Sint32_x0019A560 code;
        Sint32_x0019A560 x0c;
        Sint32_x0019A560 x10;
} SFLIB_ERRINF_x0019A560;
typedef struct {
        Sint32_x0019A560 codec;
        Sint32_x0019A560 layer;
        Sint32_x0019A560 chnum;
        Sint32_x0019A560 smphz;
} SFHDS_AUD_x0019A560;
typedef struct {
        Sint32_x0019A560 codec;
        Sint32_x0019A560 bitrate;
        Sint32_x0019A560 picw;
        Sint32_x0019A560 pich;
        Sint32_x0019A560 picrate;
        Sint32_x0019A560 ftr_eff;
        Sint32_x0019A560 ftr_coltype;
        Sint32_x0019A560 ftr_pictype;
        Sint32_x0019A560 ftr_fixflg;
        Sint32_x0019A560 ftr_shcfixflg;
        Sint32_x0019A560 ftr_expand;
        Sint32_x0019A560 ftr_gopn;
        Sint32_x0019A560 ftr_gopm;
} SFHDS_VID_x0019A560;
typedef struct {
        Sint32_x0019A560 valid;
        Sint32_x0019A560 ver_major;
        Sint32_x0019A560 ver_minor;
        Sint32_x0019A560 byterate;
        Sint32_x0019A560 hdrsiz;
        Sint32_x0019A560 packtype;
        Sint32_x0019A560 pketsizlen;
        Sint32_x0019A560 packsiz;
        Sint32_x0019A560 numelem_tot;
        Sint32_x0019A560 numelem_aud;
        Sint32_x0019A560 numelem_vid;
        Sint32_x0019A560 numelem_prv;
        Sint32_x0019A560 maxplylen_aud;
        Sint32_x0019A560 maxplylen_vid;
        Sint32_x0019A560 maxfrmnum;
        Sint32_x0019A560 stmid_prv1;
        Sint32_x0019A560 stmid_prv2;
        Sint32_x0019A560 stmid_aud;
        Sint32_x0019A560 stmid_vid;
        SFHDS_AUD_x0019A560 aud;
        SFHDS_VID_x0019A560 vid;
        Sint32_x0019A560 rawsiz;
        Uint8_x0019A560 raw[0x800];
} SFHDS_FHD_x0019A560;
typedef struct {
        Uint8_x0019A560 data[2][0xB0];
        Sint32_x0019A560 len[2];
} SFSEE_SYSHD_x0019A560;
typedef struct {
        Sint32_x0019A560 analyzed;
        Sint32_x0019A560 ncount;
        Sint32_x0019A560 tscale;
        Sint32_x0019A560 nvid;
        Sint32_x0019A560 naud;
        Sint32_x0019A560 pad14;
        Sint64_x0019A560 scr_base;
        Sint64_x0019A560 pts_min;
        Sint32_x0019A560 stmid_vid;
        Sint32_x0019A560 stmid_aud;
        SFSEE_SYSHD_x0019A560 syshd;
} SFSEE_SHDR_x0019A560;
typedef struct {
        Sint32_x0019A560 analyzed;
        Sint32_x0019A560 ncount;
        Sint32_x0019A560 tscale;
        SFHDS_FHD_x0019A560 fhd;
        SFSEE_SHDR_x0019A560 shdr;
        Uint8_x0019A560 pada38[0xAD0 - 0xA38];
        Sint32_x0019A560 a1hdr;
        Sint32_x0019A560 a1ncount;
        Sint32_x0019A560 a1tscale;
        Uint8_x0019A560 padadc[0xD0C - 0xADC];
        Sint32_x0019A560 a2hdr;
        Sint32_x0019A560 a2ncount;
        Sint32_x0019A560 a2tscale;
        Uint8_x0019A560 padd18[0xDA8 - 0xD18];
        Sint32_x0019A560 rate;
        Sint32_x0019A560 fsize_est;
        Sint32_x0019A560 tot_est;
        Sint32_x0019A560 tunit_est;
        Sint32_x0019A560 av_a;
        Sint32_x0019A560 av_b;
        Sint32_x0019A560 paddc0;
        Sint32_x0019A560 fsize;
        Sint32_x0019A560 tottime;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 byterate;
        Sint32_x0019A560 seekpos;
} SFSEE_WORK_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Sint32_x0019A560 pos;
        Sint32_x0019A560 x08;
} SFSEE_REQ_x0019A560;
typedef struct {
        Sint32_x0019A560 bsize;
        Sint32_x0019A560 xsize;
        void *buf;
        Sint32_x0019A560 maxnch;
        Sint32_x0019A560 x10;
        Sint32_x0019A560 worksize;
        void *work;
} SFADXT_PARA_x0019A560;
typedef struct {
        void *adxt;
        SJ_x0019A560 sj;
        SFADXT_PARA_x0019A560 para;
        Sint32_x0019A560 tcount;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 pause;
        Sint32_x0019A560 discard;
        Sint32_x0019A560 seekflg;
        Sint32_x0019A560 smplofst;
        void (*func)(SFD_x0019A560 sfd, Uint8_x0019A560 *data, Sint32_x0019A560 len, Sint32_x0019A560 *nbyte);
        Sint32_x0019A560 x40;
        Sint32_x0019A560 svrfreq;
        Sint32_x0019A560 totbyte;
        Sint32_x0019A560 x4c;
} SFADXT_WORK_x0019A560;
typedef struct {
        SFSEE_WORK_x0019A560 *wk;
        SFSEE_REQ_x0019A560 req;
} SFSEE_HN_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Uint32_x0019A560 adr;
        Sint32_x0019A560 size[7];
        Sint32_x0019A560 x24;
        Sint32_x0019A560 unit;
        Sint32_x0019A560 x2c;
        Sint32_x0019A560 x30;
        Sint32_x0019A560 x34;
        Sint32_x0019A560 x38;
        void *hnwork;
        Sint32_x0019A560 hnwksiz;
} SFD_CREPRM_x0019A560;
typedef struct {
        void *x00;
        Sint32_x0019A560 x04;
        Sint32_x0019A560 x08;
} SFPLY_PTSM_x0019A560;
typedef struct {
        Sint64_x0019A560 sum;
        Sint64_x0019A560 min;
        Sint64_x0019A560 max;
        Sint32_x0019A560 cnt;
} SFTMR_TSUM_x0019A560;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019A560 nvid;
        Sint32_x0019A560 naud;
        Sint32_x0019A560 x0c;
        Sint64_x0019A560 pts_min;
        Sint64_x0019A560 pts_min2;
        Sint32_x0019A560 concat_cnt;
        Sint32_x0019A560 last_vid;
        Sint32_x0019A560 last_aud;
        Sint32_x0019A560 first_vid;
        Sint32_x0019A560 first_aud;
        Sint32_x0019A560 cur_vid;
        Sint32_x0019A560 cur_aud;
        Sint32_x0019A560 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019A560 stmid);
        void *outobj;
        Sint32_x0019A560 skip;
        Sint32_x0019A560 x15c;
        Sint32_x0019A560 x160;
        Sint32_x0019A560 x164;
} SFMPS_WORK_x0019A560;
typedef struct SFD_OBJ_x0019A560 {
        SFD_CREPRM_x0019A560 prm;
        Sint32_x0019A560 chg_flg;
        Sint32_x0019A560 stat;
        Sint32_x0019A560 req;
        Sint32_x0019A560 pause_sw;
        Sint32_x0019A560 pause_cnt;
        Uint8_x0019A560 pad58[0x74 - 0x58];
        Sint32_x0019A560 pad74;
        SFHDS_FHD_x0019A560 fhd;
        Sint32_x0019A560 x90c;
        Sint32_x0019A560 x910;
        Sint32_x0019A560 x914;
        Sint32_x0019A560 x918;
        Sint32_x0019A560 x91c;
        Sint32_x0019A560 picrate;
        Sint32_x0019A560 x924;
        Sint32_x0019A560 x928;
        Sint32_x0019A560 x92c;
        Sint32_x0019A560 numelem_aud;
        Sint32_x0019A560 numelem_vid;
        Sint32_x0019A560 numelem_prv;
        Sint32_x0019A560 x93c;
        Sint32_x0019A560 x940;
        Sint32_x0019A560 x944;
        Sint32_x0019A560 x948;
        Sint32_x0019A560 x94c;
        SFD_PLYINF_x0019A560 plyinf;
        SFLIB_ERRINF_x0019A560 err;
        Sint32_x0019A560 cond[100];
        Sint32_x0019A560 cond_def[100];
        Uint8_x0019A560 padD24[4];
        SFCON_x0019A560 con;
        Uint8_x0019A560 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019A560))];
        Uint8_x0019A560 tst[0x1C0];
        Uint8_x0019A560 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019A560 ptsm;
        Uint8_x0019A560 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019A560 buf[8];
        SFD_VFRM_x0019A560 vfrm[16];
        SFD_TR_x0019A560 tr[9];
        Sint32_x0019A560 pad218c;
        SFMPS_WORK_x0019A560 mps;
        Uint8_x0019A560 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019A560 mpv;
        SFADXT_WORK_x0019A560 adxt;
        Uint8_x0019A560 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019A560 aoap;
        SFUO_x0019A560 uo_tbl;
        Sint32_x0019A560 pad34c4;
        SFSEE_HN_x0019A560 see;
        SFTMR_TSUM_x0019A560 tsum[6];
} SFD_OBJ_x0019A560;
Sint32_x0019A560 SFLIB_SetErr_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 code) __asm__("func_0018D650");
Sint32_x0019A560 SFLIB_CheckHn_x0019A560(SFD_x0019A560 sfd) __asm__("func_0018D870");
Sint32_x0019A560 SFTIM_GetTimeSub_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale) __asm__("func_0019A5D8");
Sint32_x0019A560 func_0019A560_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale) __asm__("func_0019A560");
/* SFD_GetTime: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019A560 func_0019A560_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale)
{
        if (SFLIB_CheckHn_x0019A560(sfd) != 0) {
                return SFLIB_SetErr_x0019A560(0, 0xFF000121);
        }
        return SFTIM_GetTimeSub_x0019A560(sfd, ncount, tscale);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A5D8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A688);
void func_0019A700(void) {
    func_0019A718();
}
s32 func_0019A718(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0xCC0;
    *arg1 = *(s32 *)((u8 *)temp_a0 + 0x280);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0x284);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A738);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A7B0);
s32 func_0019AA08_x0019A848() __asm__("func_0019AA08");
s32 func_0019A848_x0019A848(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0019A848");
s32 func_0019A848_x0019A848(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 var_v0;
  var_v0 = func_0019AA08_x0019A848(arg0, arg1, arg2);
  if (var_v0 != 0)
  {
    *arg1 = (var_v0 = -2);
    var_v0 = 0;
    *arg2 = 1;
    return var_v0;
  }
}
s32 func_0019AA08_x0019A890() __asm__("func_0019AA08");
extern s32 D_00426A98_x0019A890 __asm__("D_00426A98");
s32 func_0019A890_x0019A890(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0019A890");
s32 func_0019A890_x0019A890(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 var_v0;
  int new_var;
  var_v0 = func_0019AA08_x0019A890(arg0, arg1, arg2);
  new_var = arg0 + 0xCC0;
  ;
  if (var_v0 != 0)
  {
    *arg1 = *((s32 *) (((u8 *) new_var) + 0x29C));
    *arg2 = D_00426A98_x0019A890;
    return 0;
  }
}
s32 func_0019A8F0(void) {
    func_0019AA08();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A910);
s32 func_0019AA08(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 != 4) && (temp_v1 != -4) && (temp_v1 != 6) && (temp_v1 != -6)) {
        *arg1 = -1;
        *arg2 = 1;
        return 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AA58);
s32 func_0018D650_x0019AAB8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AAB8() __asm__("func_0018D870");
unsigned int func_0019AAB8_x0019AAB8(u8 *arg0, s32 arg1) __asm__("func_0019AAB8");
unsigned int func_0019AAB8_x0019AAB8(u8 *arg0, s32 arg1) {
  if (func_0018D870_x0019AAB8(arg0) != 0)
  {
    func_0018D650_x0019AAB8(0, 0xFF000124);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0xCD8)) = arg1;
}
void func_0019AB10(void) {
    func_00172A40();
}
s32 func_0018D650_x0019AB28(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AB28() __asm__("func_0018D870");
s32 func_00199818_x0019AB28(s32, s32, s32) __asm__("func_00199818");
s32 func_0019AE00_x0019AB28(s32, s32, s32) __asm__("func_0019AE00");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) __asm__("func_0019AB28");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) {
    if (func_0018D870_x0019AB28() != 0) {
        return func_0018D650_x0019AB28(0, 0xFF000123, 4);
    }
    func_0019AE00_x0019AB28(arg0, arg1, 4);
    func_00199818_x0019AB28(arg0, 0xF, 4);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ABA0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AC90);
s32 func_0018D650_x0019AD18(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AD18() __asm__("func_0018D870");
s32 func_001999E0_x0019AD18(s32, s32) __asm__("func_001999E0");
s32 func_0019AD80_x0019AD18(s32) __asm__("func_0019AD80");
s32 func_0019AD18_x0019AD18(s32 arg0) __asm__("func_0019AD18");
s32 func_0019AD18_x0019AD18(s32 arg0)
{
  if (func_0018D870_x0019AD18(arg0) != 0)
  {
    return func_0018D650_x0019AD18(0, 0xFF00012A);
  }
  if (func_001999E0_x0019AD18(arg0, 0x47) != 1)
  {
    func_0019AD80_x0019AD18(arg0);
  }
 do { return 0; } while (0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AD80);
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019AE00");
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + (arg2 * 4);
  *((s32 *) (((u8 *) new_var) + 0xCC0)) = arg1;
}
typedef unsigned char Uint8_x0019AE10;
typedef signed char Sint8_x0019AE10;
typedef signed short Sint16_x0019AE10;
typedef unsigned int Uint32_x0019AE10;
typedef signed int Sint32_x0019AE10;
typedef signed long long Sint64_x0019AE10;
typedef char Char8_x0019AE10;
typedef struct SJ_OBJ_x0019AE10 *SJ_x0019AE10;
typedef struct {
        Uint8_x0019AE10 *data;
        Sint32_x0019AE10 len;
} SJCK_x0019AE10;
typedef struct {
        Uint8_x0019AE10 data[16];
} SJUUID_x0019AE10;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019AE10 sj);
        const SJUUID_x0019AE10 *(*GetUuid)(SJ_x0019AE10 sj);
        void (*Reset)(SJ_x0019AE10 sj);
        void (*GetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, Sint32_x0019AE10 nbyte, SJCK_x0019AE10 *ck);
        void (*UngetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, SJCK_x0019AE10 *ck);
        void (*PutChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, SJCK_x0019AE10 *ck);
        Sint32_x0019AE10 (*GetNumData)(SJ_x0019AE10 sj, Sint32_x0019AE10 id);
        Sint32_x0019AE10 (*IsGetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, Sint32_x0019AE10 nbyte, Sint32_x0019AE10 *rbyte);
        void (*EntryErrFunc)(SJ_x0019AE10 sj, void (*func)(void *obj, Char8_x0019AE10 *msg), void *obj);
} SJ_IF_x0019AE10;
struct SJ_OBJ_x0019AE10 {
        SJ_IF_x0019AE10 *vtbl;
};
typedef struct SFD_OBJ_x0019AE10 *SFD_x0019AE10;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019AE10 rsv1;
        Sint32_x0019AE10 rsv2;
} SFUO_CH_x0019AE10;
typedef struct {
        Sint32_x0019AE10 nch;
        SFUO_CH_x0019AE10 ch[3];
} SFUO_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Sint32_x0019AE10 (*SetOutPan)(SFD_x0019AE10 sfd, Sint32_x0019AE10 ch, Sint32_x0019AE10 pan);
        Sint32_x0019AE10 (*GetOutPan)(SFD_x0019AE10 sfd, Sint32_x0019AE10 ch);
        Sint32_x0019AE10 (*SetOutVol)(SFD_x0019AE10 sfd, Sint32_x0019AE10 vol);
        Sint32_x0019AE10 (*GetOutVol)(SFD_x0019AE10 sfd);
        void (*SetSpeed)(SFD_x0019AE10 sfd, Sint32_x0019AE10 speed);
        Sint32_x0019AE10 x18;
} SFAOAP_x0019AE10;
typedef struct {
        Uint8_x0019AE10 pad0[0xB8];
        Sint32_x0019AE10 tottime;
        Sint32_x0019AE10 tunit;
        Uint8_x0019AE10 padc0[0x150 - 0xC0];
        Sint64_x0019AE10 scr_base;
        Sint64_x0019AE10 scr_ofst;
        Sint32_x0019AE10 pad160;
        Sint32_x0019AE10 ctime;
        Sint32_x0019AE10 ctime_idx;
        Sint32_x0019AE10 ctime_que[32];
        Sint32_x0019AE10 tot_last;
        Sint32_x0019AE10 pad1F0;
        Sint32_x0019AE10 que_wr;
        Sint32_x0019AE10 que_rd;
        Sint32_x0019AE10 tot_que[32];
} SFCON_x0019AE10;
typedef struct {
        Sint32_x0019AE10 type;
        Sint32_x0019AE10 drop;
        Sint32_x0019AE10 hour;
        Sint32_x0019AE10 min;
        Sint32_x0019AE10 sec;
        Sint32_x0019AE10 frm;
        Sint32_x0019AE10 frm2;
        Sint16_x0019AE10 x1c;
        Sint16_x0019AE10 field;
} SFTIM_TC_x0019AE10;
typedef struct {
        Sint32_x0019AE10 valid;
        SFTIM_TC_x0019AE10 tc;
        Sint32_x0019AE10 val;
        Sint32_x0019AE10 unit;
} SFTIM_TTU_x0019AE10;
extern const Sint32_x0019AE10 SFTIM_prate_x0019AE10[9] __asm__("D_00467730");
typedef struct {
        Sint64_x0019AE10 pts;
        Uint32_x0019AE10 pos;
        Uint32_x0019AE10 len;
} SFPTS_ENT_x0019AE10;
typedef struct {
        SFPTS_ENT_x0019AE10 *ent;
        Sint32_x0019AE10 num;
        Sint32_x0019AE10 cnt;
        Sint32_x0019AE10 wr;
        Sint32_x0019AE10 rd;
} SFPTS_QUE_x0019AE10;
typedef struct {
        Sint32_x0019AE10 raw[0x20];
} SFD_VFRM_INF_x0019AE10;
typedef struct {
        void *frm;
        Sint32_x0019AE10 x04;
        SFD_VFRM_INF_x0019AE10 inf;
} SFD_VFRM_x0019AE10;
typedef struct {
        Sint32_x0019AE10 kind;
        SJ_x0019AE10 sj;
        Uint32_x0019AE10 ofst;
        Sint32_x0019AE10 size;
        Sint32_x0019AE10 xsize;
        Sint32_x0019AE10 x14;
} SFBUF_SUP_x0019AE10;
typedef struct {
        SFBUF_SUP_x0019AE10 sup;
        Uint8_x0019AE10 *dlm_pos;
        Sint32_x0019AE10 dlm_len;
        Sint32_x0019AE10 wtot;
        Sint32_x0019AE10 rtot;
        SFPTS_QUE_x0019AE10 ptsque;
} SFBUF_RING_x0019AE10;
typedef struct {
        Sint32_x0019AE10 mode;
        Sint32_x0019AE10 used;
        Sint32_x0019AE10 prepflg;
        Sint32_x0019AE10 termflg;
        union {
                SFBUF_RING_x0019AE10 ring;
                struct {
                        Uint32_x0019AE10 adr;
                        Sint32_x0019AE10 size;
                        Sint32_x0019AE10 x18;
                        Sint32_x0019AE10 x1c;
                        SFD_VFRM_x0019AE10 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019AE10 adr;
                        Sint32_x0019AE10 size;
                        Sint32_x0019AE10 rsv[7];
                        Sint32_x0019AE10 rsv2[3];
                } aout;
                SFUO_CH_x0019AE10 uoch[3];
        } u;
        Sint32_x0019AE10 in_tr;
        Sint32_x0019AE10 out_tr;
        Sint32_x0019AE10 rsv[8];
} SFBUF_WORK_x0019AE10;
typedef Sint32_x0019AE10 (*SFD_TR_FUNC_x0019AE10)();
typedef struct {
        Sint32_x0019AE10 prepflg;
        Sint32_x0019AE10 termflg;
        void *hn;
        SFD_TR_FUNC_x0019AE10 *trif;
        Sint32_x0019AE10 bufin;
        Sint32_x0019AE10 bufout;
        Sint32_x0019AE10 bufout2;
        Sint32_x0019AE10 bufout3;
        Sint32_x0019AE10 x20;
        Uint8_x0019AE10 pad24[0x44 - 0x24];
} SFD_TR_x0019AE10;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019AE10 cwidth;
        Sint16_x0019AE10 ywidth;
} SFMPV_PLANE_x0019AE10;
typedef struct {
        void *buf;
        Sint32_x0019AE10 len;
} SFMPV_PICUSR_x0019AE10;
typedef struct {
        Sint32_x0019AE10 stat;
        Sint32_x0019AE10 lock;
        void *buf;
        SFTIM_TTU_x0019AE10 ttu;
        Sint32_x0019AE10 ftime;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 ndct;
        Sint32_x0019AE10 nbyte;
        Sint32_x0019AE10 gopno;
        Sint32_x0019AE10 x4c;
        Sint32_x0019AE10 x50;
        SFMPV_PICUSR_x0019AE10 *picusr;
        Sint32_x0019AE10 pa_width;
        Sint32_x0019AE10 pa_height;
        Sint32_x0019AE10 pa_mb_width;
        Sint32_x0019AE10 pa_mb_height;
        Sint32_x0019AE10 pa_frame_rate;
        Sint32_x0019AE10 tmpref;
        Sint32_x0019AE10 pa_pic_type;
        Sint32_x0019AE10 pa_tc_drop;
        Sint32_x0019AE10 pa_tc_hour;
        Sint32_x0019AE10 pa_tc_min;
        Sint32_x0019AE10 pa_tc_sec;
        Sint32_x0019AE10 pa_tc_pic;
        Sint32_x0019AE10 x88;
        Sint32_x0019AE10 x8c;
        Sint32_x0019AE10 pa_x90[3];
        Sint32_x0019AE10 pa_x9c[3];
        Sint16_x0019AE10 pa_xa8;
        Sint16_x0019AE10 pa_xaa;
        Sint8_x0019AE10 pa_xac;
        Sint8_x0019AE10 pa_xad;
        Sint8_x0019AE10 pa_xae;
        Sint8_x0019AE10 pa_xaf;
        Sint8_x0019AE10 pa_xb0;
        Sint8_x0019AE10 pa_xb1;
        Sint8_x0019AE10 pa_xb2;
        Sint8_x0019AE10 pa_xb3;
        Sint8_x0019AE10 pa_xb4;
        Sint8_x0019AE10 pa_xb5;
        Sint8_x0019AE10 pa_xb6;
        Sint8_x0019AE10 pa_xb7;
        Sint8_x0019AE10 pa_xb8;
        Sint8_x0019AE10 pa_xb9;
        Sint8_x0019AE10 pa_xba;
        Sint8_x0019AE10 pa_xbb;
        Sint8_x0019AE10 pa_xbc;
        Uint8_x0019AE10 padbd[0xD8 - 0xBD];
        Sint64_x0019AE10 pts;
} SFMPV_FRM_x0019AE10;
typedef struct {
        Sint32_x0019AE10 cwidth;
        Sint32_x0019AE10 cheight;
        Sint32_x0019AE10 width;
        Sint32_x0019AE10 height;
        Sint32_x0019AE10 x10;
        Sint32_x0019AE10 max_width;
        Sint32_x0019AE10 max_height;
        Sint32_x0019AE10 nfrm;
        Sint32_x0019AE10 x20;
} SFMPV_PARA_x0019AE10;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019AE10 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019AE10 *curfrm;
        Sint32_x0019AE10 picstat;
        Sint32_x0019AE10 dlmmask;
        Sint32_x0019AE10 termflg;
        Sint32_x0019AE10 gopstat;
        Sint32_x0019AE10 nskip;
        Sint32_x0019AE10 nconcat;
        Uint8_x0019AE10 picatr[0x80];
        Sint32_x0019AE10 last_ngop;
        Sint32_x0019AE10 newgop;
        Sint32_x0019AE10 vbvsiz;
        Sint32_x0019AE10 pts_tmpref;
        Sint32_x0019AE10 pts_ofst;
        Sint32_x0019AE10 pts_max;
        Sint32_x0019AE10 pad124;
        SFPTS_ENT_x0019AE10 ptsent;
        Sint32_x0019AE10 refidx[2];
        SFMPV_PLANE_x0019AE10 rfbuf[2];
        SFMPV_FRM_x0019AE10 *ref[2];
        SFMPV_FRM_x0019AE10 *pendfrm;
        Sint32_x0019AE10 skipret;
        Sint32_x0019AE10 dlmwait;
        Sint32_x0019AE10 tmpref_adj;
        Sint32_x0019AE10 nfrm;
        Sint32_x0019AE10 pad17c;
        SFMPV_FRM_x0019AE10 frm[16];
        void *picusr_buf;
        Sint32_x0019AE10 picusr_num;
        Sint32_x0019AE10 picusr_siz;
        Uint8_x0019AE10 *picusr_dat;
        Sint32_x0019AE10 picusr_len;
        SFMPV_PICUSR_x0019AE10 picusr[16];
        Sint32_x0019AE10 pad1014;
        Sint64_x0019AE10 pts;
} SFMPV_WORK_x0019AE10;
typedef struct {
        Sint32_x0019AE10 raw[0x2A];
} SFD_PLYINF_x0019AE10 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019AE10 code);
        void *obj;
        Sint32_x0019AE10 code;
        Sint32_x0019AE10 x0c;
        Sint32_x0019AE10 x10;
} SFLIB_ERRINF_x0019AE10;
typedef struct {
        Sint32_x0019AE10 codec;
        Sint32_x0019AE10 layer;
        Sint32_x0019AE10 chnum;
        Sint32_x0019AE10 smphz;
} SFHDS_AUD_x0019AE10;
typedef struct {
        Sint32_x0019AE10 codec;
        Sint32_x0019AE10 bitrate;
        Sint32_x0019AE10 picw;
        Sint32_x0019AE10 pich;
        Sint32_x0019AE10 picrate;
        Sint32_x0019AE10 ftr_eff;
        Sint32_x0019AE10 ftr_coltype;
        Sint32_x0019AE10 ftr_pictype;
        Sint32_x0019AE10 ftr_fixflg;
        Sint32_x0019AE10 ftr_shcfixflg;
        Sint32_x0019AE10 ftr_expand;
        Sint32_x0019AE10 ftr_gopn;
        Sint32_x0019AE10 ftr_gopm;
} SFHDS_VID_x0019AE10;
typedef struct {
        Sint32_x0019AE10 valid;
        Sint32_x0019AE10 ver_major;
        Sint32_x0019AE10 ver_minor;
        Sint32_x0019AE10 byterate;
        Sint32_x0019AE10 hdrsiz;
        Sint32_x0019AE10 packtype;
        Sint32_x0019AE10 pketsizlen;
        Sint32_x0019AE10 packsiz;
        Sint32_x0019AE10 numelem_tot;
        Sint32_x0019AE10 numelem_aud;
        Sint32_x0019AE10 numelem_vid;
        Sint32_x0019AE10 numelem_prv;
        Sint32_x0019AE10 maxplylen_aud;
        Sint32_x0019AE10 maxplylen_vid;
        Sint32_x0019AE10 maxfrmnum;
        Sint32_x0019AE10 stmid_prv1;
        Sint32_x0019AE10 stmid_prv2;
        Sint32_x0019AE10 stmid_aud;
        Sint32_x0019AE10 stmid_vid;
        SFHDS_AUD_x0019AE10 aud;
        SFHDS_VID_x0019AE10 vid;
        Sint32_x0019AE10 rawsiz;
        Uint8_x0019AE10 raw[0x800];
} SFHDS_FHD_x0019AE10;
typedef struct {
        Uint8_x0019AE10 data[2][0xB0];
        Sint32_x0019AE10 len[2];
} SFSEE_SYSHD_x0019AE10;
typedef struct {
        Sint32_x0019AE10 analyzed;
        Sint32_x0019AE10 ncount;
        Sint32_x0019AE10 tscale;
        Sint32_x0019AE10 nvid;
        Sint32_x0019AE10 naud;
        Sint32_x0019AE10 pad14;
        Sint64_x0019AE10 scr_base;
        Sint64_x0019AE10 pts_min;
        Sint32_x0019AE10 stmid_vid;
        Sint32_x0019AE10 stmid_aud;
        SFSEE_SYSHD_x0019AE10 syshd;
} SFSEE_SHDR_x0019AE10;
typedef struct {
        Sint32_x0019AE10 analyzed;
        Sint32_x0019AE10 ncount;
        Sint32_x0019AE10 tscale;
        SFHDS_FHD_x0019AE10 fhd;
        SFSEE_SHDR_x0019AE10 shdr;
        Uint8_x0019AE10 pada38[0xAD0 - 0xA38];
        Sint32_x0019AE10 a1hdr;
        Sint32_x0019AE10 a1ncount;
        Sint32_x0019AE10 a1tscale;
        Uint8_x0019AE10 padadc[0xD0C - 0xADC];
        Sint32_x0019AE10 a2hdr;
        Sint32_x0019AE10 a2ncount;
        Sint32_x0019AE10 a2tscale;
        Uint8_x0019AE10 padd18[0xDA8 - 0xD18];
        Sint32_x0019AE10 rate;
        Sint32_x0019AE10 fsize_est;
        Sint32_x0019AE10 tot_est;
        Sint32_x0019AE10 tunit_est;
        Sint32_x0019AE10 av_a;
        Sint32_x0019AE10 av_b;
        Sint32_x0019AE10 paddc0;
        Sint32_x0019AE10 fsize;
        Sint32_x0019AE10 tottime;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 byterate;
        Sint32_x0019AE10 seekpos;
} SFSEE_WORK_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Sint32_x0019AE10 pos;
        Sint32_x0019AE10 x08;
} SFSEE_REQ_x0019AE10;
typedef struct {
        Sint32_x0019AE10 bsize;
        Sint32_x0019AE10 xsize;
        void *buf;
        Sint32_x0019AE10 maxnch;
        Sint32_x0019AE10 x10;
        Sint32_x0019AE10 worksize;
        void *work;
} SFADXT_PARA_x0019AE10;
typedef struct {
        void *adxt;
        SJ_x0019AE10 sj;
        SFADXT_PARA_x0019AE10 para;
        Sint32_x0019AE10 tcount;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 pause;
        Sint32_x0019AE10 discard;
        Sint32_x0019AE10 seekflg;
        Sint32_x0019AE10 smplofst;
        void (*func)(SFD_x0019AE10 sfd, Uint8_x0019AE10 *data, Sint32_x0019AE10 len, Sint32_x0019AE10 *nbyte);
        Sint32_x0019AE10 x40;
        Sint32_x0019AE10 svrfreq;
        Sint32_x0019AE10 totbyte;
        Sint32_x0019AE10 x4c;
} SFADXT_WORK_x0019AE10;
typedef struct {
        SFSEE_WORK_x0019AE10 *wk;
        SFSEE_REQ_x0019AE10 req;
} SFSEE_HN_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Uint32_x0019AE10 adr;
        Sint32_x0019AE10 size[7];
        Sint32_x0019AE10 x24;
        Sint32_x0019AE10 unit;
        Sint32_x0019AE10 x2c;
        Sint32_x0019AE10 x30;
        Sint32_x0019AE10 x34;
        Sint32_x0019AE10 x38;
        void *hnwork;
        Sint32_x0019AE10 hnwksiz;
} SFD_CREPRM_x0019AE10;
typedef struct {
        void *x00;
        Sint32_x0019AE10 x04;
        Sint32_x0019AE10 x08;
} SFPLY_PTSM_x0019AE10;
typedef struct {
        Sint64_x0019AE10 sum;
        Sint64_x0019AE10 min;
        Sint64_x0019AE10 max;
        Sint32_x0019AE10 cnt;
} SFTMR_TSUM_x0019AE10;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019AE10 nvid;
        Sint32_x0019AE10 naud;
        Sint32_x0019AE10 x0c;
        Sint64_x0019AE10 pts_min;
        Sint64_x0019AE10 pts_min2;
        Sint32_x0019AE10 concat_cnt;
        Sint32_x0019AE10 last_vid;
        Sint32_x0019AE10 last_aud;
        Sint32_x0019AE10 first_vid;
        Sint32_x0019AE10 first_aud;
        Sint32_x0019AE10 cur_vid;
        Sint32_x0019AE10 cur_aud;
        Sint32_x0019AE10 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019AE10 stmid);
        void *outobj;
        Sint32_x0019AE10 skip;
        Sint32_x0019AE10 x15c;
        Sint32_x0019AE10 x160;
        Sint32_x0019AE10 x164;
} SFMPS_WORK_x0019AE10;
typedef struct SFD_OBJ_x0019AE10 {
        SFD_CREPRM_x0019AE10 prm;
        Sint32_x0019AE10 chg_flg;
        Sint32_x0019AE10 stat;
        Sint32_x0019AE10 req;
        Sint32_x0019AE10 pause_sw;
        Sint32_x0019AE10 pause_cnt;
        Uint8_x0019AE10 pad58[0x74 - 0x58];
        Sint32_x0019AE10 pad74;
        SFHDS_FHD_x0019AE10 fhd;
        Sint32_x0019AE10 x90c;
        Sint32_x0019AE10 x910;
        Sint32_x0019AE10 x914;
        Sint32_x0019AE10 x918;
        Sint32_x0019AE10 x91c;
        Sint32_x0019AE10 picrate;
        Sint32_x0019AE10 x924;
        Sint32_x0019AE10 x928;
        Sint32_x0019AE10 x92c;
        Sint32_x0019AE10 numelem_aud;
        Sint32_x0019AE10 numelem_vid;
        Sint32_x0019AE10 numelem_prv;
        Sint32_x0019AE10 x93c;
        Sint32_x0019AE10 x940;
        Sint32_x0019AE10 x944;
        Sint32_x0019AE10 x948;
        Sint32_x0019AE10 x94c;
        SFD_PLYINF_x0019AE10 plyinf;
        SFLIB_ERRINF_x0019AE10 err;
        Sint32_x0019AE10 cond[100];
        Sint32_x0019AE10 cond_def[100];
        Uint8_x0019AE10 padD24[4];
        SFCON_x0019AE10 con;
        Uint8_x0019AE10 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019AE10))];
        Uint8_x0019AE10 tst[0x1C0];
        Uint8_x0019AE10 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019AE10 ptsm;
        Uint8_x0019AE10 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019AE10 buf[8];
        SFD_VFRM_x0019AE10 vfrm[16];
        SFD_TR_x0019AE10 tr[9];
        Sint32_x0019AE10 pad218c;
        SFMPS_WORK_x0019AE10 mps;
        Uint8_x0019AE10 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019AE10 mpv;
        SFADXT_WORK_x0019AE10 adxt;
        Uint8_x0019AE10 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019AE10 aoap;
        SFUO_x0019AE10 uo_tbl;
        Sint32_x0019AE10 pad34c4;
        SFSEE_HN_x0019AE10 see;
        SFTMR_TSUM_x0019AE10 tsum[6];
} SFD_OBJ_x0019AE10;
Sint32_x0019AE10 SFLIB_SetErr_x0019AE10(SFD_x0019AE10 sfd, Sint32_x0019AE10 code) __asm__("func_0018D650");
typedef void (*SFTIM_TC2TIME_FN_x0019AE10)(Sint32_x0019AE10 prate, SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale);
extern const Sint32_x0019AE10 SFTIM_prate_x0019AE10[9] __asm__("D_00467730");
extern const SFTIM_TC2TIME_FN_x0019AE10 sftim_tc2time_x0019AE10[9][2] __asm__("D_00467758");
void func_0019AE10_x0019AE10(SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale) __asm__("func_0019AE10");
/* SFTIM_Tc2Time: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019AE10_x0019AE10(SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale)
{
        SFTIM_TC2TIME_FN_x0019AE10 fn;
        Sint32_x0019AE10 prate;
        prate = SFTIM_prate_x0019AE10[tc->type];
        fn = sftim_tc2time_x0019AE10[tc->type][tc->drop];
        if (fn == 0) {
                SFLIB_SetErr_x0019AE10(0, 0xFF000221);
                *ncount = 0;
                *tscale = 1;
                return;
        }
        fn(prate, tc, ncount, tscale);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AEB0);
s32 func_0019AEB0_x0019AF40(s32) __asm__("func_0019AEB0");
void func_0019AF40_x0019AF40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AF40");
void func_0019AF40_x0019AF40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AF40(0x5DC0);
    *arg3 = arg0;
}
s32 func_0019AEB0_x0019AF78(s32) __asm__("func_0019AEB0");
void func_0019AF78_x0019AF78(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AF78");
void func_0019AF78_x0019AF78(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AF78(0x7530);
    *arg3 = arg0;
}
s32 func_0019AEB0_x0019AFB0(s32) __asm__("func_0019AEB0");
void func_0019AFB0_x0019AFB0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AFB0");
void func_0019AFB0_x0019AFB0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AFB0(0xEA60);
    *arg3 = arg0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019AFE8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B088);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B120);
extern void func_0035B5B8_x0019B1C8(void *, int *, int *) __asm__("func_0019B2E0");
extern void func_0035B500_x0019B1C8(void *, int, int) __asm__("func_0019B228");
extern void func_0035B568_x0019B1C8(void *, int, int) __asm__("func_0019B290");
void func_0019B1C8_x0019B1C8(void *a0, int a1) __asm__("func_0019B1C8");
/* func_0035B4A0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00323a00.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019B1C8_x0019B1C8(void *a0, int a1) {
    void *s0;
    int tmp0;
    int tmp1;
    s0 = a0;
    if ((unsigned int)a1 < 2) return;
    if (a1 != 2) return;
    func_0035B5B8_x0019B1C8(s0, &tmp0, &tmp1);
    func_0035B500_x0019B1C8(s0, tmp0, tmp1);
    func_0035B568_x0019B1C8(s0, tmp0, tmp1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B228);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B290);
typedef unsigned char u8_x0019B2E0;
typedef struct SfdPlaybackSettings_x0019B2E0 {
    u8_x0019B2E0 unknown_00[0x14];
    int frame_rate_code;
} SfdPlaybackSettings_x0019B2E0;
typedef struct SfdHandle_x0019B2E0 {
    u8_x0019B2E0 unknown_0000[0x44];
    int field_0044;
    int playback_state;
    u8_x0019B2E0 unknown_004C[0x8C0];
    SfdPlaybackSettings_x0019B2E0 playback_settings;
} SfdHandle_x0019B2E0;
extern const int lbl_12_rodata_E10_x0019B2E0[9] __asm__("D_00467730");
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) __asm__("func_0019B2E0");
/* SFTIM_GetTimeOneFrmVideo: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/SFTIM_GetTimeOneFrmVideo.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) {
    int code = handle->playback_settings.frame_rate_code;
    if (code == 0) {
        *value = 0;
        *scale = 29970;
    } else {
        *value = 1000;
        *scale = lbl_12_rodata_E10_x0019B2E0[code];
    }
}
typedef unsigned char Uint8_x0019B320;
typedef signed char Sint8_x0019B320;
typedef signed short Sint16_x0019B320;
typedef unsigned int Uint32_x0019B320;
typedef signed int Sint32_x0019B320;
typedef signed long long Sint64_x0019B320;
typedef char Char8_x0019B320;
typedef struct SJ_OBJ_x0019B320 *SJ_x0019B320;
typedef struct {
        Uint8_x0019B320 *data;
        Sint32_x0019B320 len;
} SJCK_x0019B320;
typedef struct {
        Uint8_x0019B320 data[16];
} SJUUID_x0019B320;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019B320 sj);
        const SJUUID_x0019B320 *(*GetUuid)(SJ_x0019B320 sj);
        void (*Reset)(SJ_x0019B320 sj);
        void (*GetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, Sint32_x0019B320 nbyte, SJCK_x0019B320 *ck);
        void (*UngetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, SJCK_x0019B320 *ck);
        void (*PutChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, SJCK_x0019B320 *ck);
        Sint32_x0019B320 (*GetNumData)(SJ_x0019B320 sj, Sint32_x0019B320 id);
        Sint32_x0019B320 (*IsGetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, Sint32_x0019B320 nbyte, Sint32_x0019B320 *rbyte);
        void (*EntryErrFunc)(SJ_x0019B320 sj, void (*func)(void *obj, Char8_x0019B320 *msg), void *obj);
} SJ_IF_x0019B320;
struct SJ_OBJ_x0019B320 {
        SJ_IF_x0019B320 *vtbl;
};
typedef struct SFD_OBJ_x0019B320 *SFD_x0019B320;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019B320 rsv1;
        Sint32_x0019B320 rsv2;
} SFUO_CH_x0019B320;
typedef struct {
        Sint32_x0019B320 nch;
        SFUO_CH_x0019B320 ch[3];
} SFUO_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Sint32_x0019B320 (*SetOutPan)(SFD_x0019B320 sfd, Sint32_x0019B320 ch, Sint32_x0019B320 pan);
        Sint32_x0019B320 (*GetOutPan)(SFD_x0019B320 sfd, Sint32_x0019B320 ch);
        Sint32_x0019B320 (*SetOutVol)(SFD_x0019B320 sfd, Sint32_x0019B320 vol);
        Sint32_x0019B320 (*GetOutVol)(SFD_x0019B320 sfd);
        void (*SetSpeed)(SFD_x0019B320 sfd, Sint32_x0019B320 speed);
        Sint32_x0019B320 x18;
} SFAOAP_x0019B320;
typedef struct {
        Uint8_x0019B320 pad0[0xB8];
        Sint32_x0019B320 tottime;
        Sint32_x0019B320 tunit;
        Uint8_x0019B320 padc0[0x150 - 0xC0];
        Sint64_x0019B320 scr_base;
        Sint64_x0019B320 scr_ofst;
        Sint32_x0019B320 pad160;
        Sint32_x0019B320 ctime;
        Sint32_x0019B320 ctime_idx;
        Sint32_x0019B320 ctime_que[32];
        Sint32_x0019B320 tot_last;
        Sint32_x0019B320 pad1F0;
        Sint32_x0019B320 que_wr;
        Sint32_x0019B320 que_rd;
        Sint32_x0019B320 tot_que[32];
} SFCON_x0019B320;
typedef struct {
        Sint32_x0019B320 type;
        Sint32_x0019B320 drop;
        Sint32_x0019B320 hour;
        Sint32_x0019B320 min;
        Sint32_x0019B320 sec;
        Sint32_x0019B320 frm;
        Sint32_x0019B320 frm2;
        Sint16_x0019B320 x1c;
        Sint16_x0019B320 field;
} SFTIM_TC_x0019B320;
typedef struct {
        Sint32_x0019B320 valid;
        SFTIM_TC_x0019B320 tc;
        Sint32_x0019B320 val;
        Sint32_x0019B320 unit;
} SFTIM_TTU_x0019B320;
extern const Sint32_x0019B320 SFTIM_prate_x0019B320[9] __asm__("D_00467730");
typedef struct {
        Sint64_x0019B320 pts;
        Uint32_x0019B320 pos;
        Uint32_x0019B320 len;
} SFPTS_ENT_x0019B320;
typedef struct {
        SFPTS_ENT_x0019B320 *ent;
        Sint32_x0019B320 num;
        Sint32_x0019B320 cnt;
        Sint32_x0019B320 wr;
        Sint32_x0019B320 rd;
} SFPTS_QUE_x0019B320;
typedef struct {
        Sint32_x0019B320 raw[0x20];
} SFD_VFRM_INF_x0019B320;
typedef struct {
        void *frm;
        Sint32_x0019B320 x04;
        SFD_VFRM_INF_x0019B320 inf;
} SFD_VFRM_x0019B320;
typedef struct {
        Sint32_x0019B320 kind;
        SJ_x0019B320 sj;
        Uint32_x0019B320 ofst;
        Sint32_x0019B320 size;
        Sint32_x0019B320 xsize;
        Sint32_x0019B320 x14;
} SFBUF_SUP_x0019B320;
typedef struct {
        SFBUF_SUP_x0019B320 sup;
        Uint8_x0019B320 *dlm_pos;
        Sint32_x0019B320 dlm_len;
        Sint32_x0019B320 wtot;
        Sint32_x0019B320 rtot;
        SFPTS_QUE_x0019B320 ptsque;
} SFBUF_RING_x0019B320;
typedef struct {
        Sint32_x0019B320 mode;
        Sint32_x0019B320 used;
        Sint32_x0019B320 prepflg;
        Sint32_x0019B320 termflg;
        union {
                SFBUF_RING_x0019B320 ring;
                struct {
                        Uint32_x0019B320 adr;
                        Sint32_x0019B320 size;
                        Sint32_x0019B320 x18;
                        Sint32_x0019B320 x1c;
                        SFD_VFRM_x0019B320 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019B320 adr;
                        Sint32_x0019B320 size;
                        Sint32_x0019B320 rsv[7];
                        Sint32_x0019B320 rsv2[3];
                } aout;
                SFUO_CH_x0019B320 uoch[3];
        } u;
        Sint32_x0019B320 in_tr;
        Sint32_x0019B320 out_tr;
        Sint32_x0019B320 rsv[8];
} SFBUF_WORK_x0019B320;
typedef Sint32_x0019B320 (*SFD_TR_FUNC_x0019B320)();
typedef struct {
        Sint32_x0019B320 prepflg;
        Sint32_x0019B320 termflg;
        void *hn;
        SFD_TR_FUNC_x0019B320 *trif;
        Sint32_x0019B320 bufin;
        Sint32_x0019B320 bufout;
        Sint32_x0019B320 bufout2;
        Sint32_x0019B320 bufout3;
        Sint32_x0019B320 x20;
        Uint8_x0019B320 pad24[0x44 - 0x24];
} SFD_TR_x0019B320;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019B320 cwidth;
        Sint16_x0019B320 ywidth;
} SFMPV_PLANE_x0019B320;
typedef struct {
        void *buf;
        Sint32_x0019B320 len;
} SFMPV_PICUSR_x0019B320;
typedef struct {
        Sint32_x0019B320 stat;
        Sint32_x0019B320 lock;
        void *buf;
        SFTIM_TTU_x0019B320 ttu;
        Sint32_x0019B320 ftime;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 ndct;
        Sint32_x0019B320 nbyte;
        Sint32_x0019B320 gopno;
        Sint32_x0019B320 x4c;
        Sint32_x0019B320 x50;
        SFMPV_PICUSR_x0019B320 *picusr;
        Sint32_x0019B320 pa_width;
        Sint32_x0019B320 pa_height;
        Sint32_x0019B320 pa_mb_width;
        Sint32_x0019B320 pa_mb_height;
        Sint32_x0019B320 pa_frame_rate;
        Sint32_x0019B320 tmpref;
        Sint32_x0019B320 pa_pic_type;
        Sint32_x0019B320 pa_tc_drop;
        Sint32_x0019B320 pa_tc_hour;
        Sint32_x0019B320 pa_tc_min;
        Sint32_x0019B320 pa_tc_sec;
        Sint32_x0019B320 pa_tc_pic;
        Sint32_x0019B320 x88;
        Sint32_x0019B320 x8c;
        Sint32_x0019B320 pa_x90[3];
        Sint32_x0019B320 pa_x9c[3];
        Sint16_x0019B320 pa_xa8;
        Sint16_x0019B320 pa_xaa;
        Sint8_x0019B320 pa_xac;
        Sint8_x0019B320 pa_xad;
        Sint8_x0019B320 pa_xae;
        Sint8_x0019B320 pa_xaf;
        Sint8_x0019B320 pa_xb0;
        Sint8_x0019B320 pa_xb1;
        Sint8_x0019B320 pa_xb2;
        Sint8_x0019B320 pa_xb3;
        Sint8_x0019B320 pa_xb4;
        Sint8_x0019B320 pa_xb5;
        Sint8_x0019B320 pa_xb6;
        Sint8_x0019B320 pa_xb7;
        Sint8_x0019B320 pa_xb8;
        Sint8_x0019B320 pa_xb9;
        Sint8_x0019B320 pa_xba;
        Sint8_x0019B320 pa_xbb;
        Sint8_x0019B320 pa_xbc;
        Uint8_x0019B320 padbd[0xD8 - 0xBD];
        Sint64_x0019B320 pts;
} SFMPV_FRM_x0019B320;
typedef struct {
        Sint32_x0019B320 cwidth;
        Sint32_x0019B320 cheight;
        Sint32_x0019B320 width;
        Sint32_x0019B320 height;
        Sint32_x0019B320 x10;
        Sint32_x0019B320 max_width;
        Sint32_x0019B320 max_height;
        Sint32_x0019B320 nfrm;
        Sint32_x0019B320 x20;
} SFMPV_PARA_x0019B320;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019B320 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019B320 *curfrm;
        Sint32_x0019B320 picstat;
        Sint32_x0019B320 dlmmask;
        Sint32_x0019B320 termflg;
        Sint32_x0019B320 gopstat;
        Sint32_x0019B320 nskip;
        Sint32_x0019B320 nconcat;
        Uint8_x0019B320 picatr[0x80];
        Sint32_x0019B320 last_ngop;
        Sint32_x0019B320 newgop;
        Sint32_x0019B320 vbvsiz;
        Sint32_x0019B320 pts_tmpref;
        Sint32_x0019B320 pts_ofst;
        Sint32_x0019B320 pts_max;
        Sint32_x0019B320 pad124;
        SFPTS_ENT_x0019B320 ptsent;
        Sint32_x0019B320 refidx[2];
        SFMPV_PLANE_x0019B320 rfbuf[2];
        SFMPV_FRM_x0019B320 *ref[2];
        SFMPV_FRM_x0019B320 *pendfrm;
        Sint32_x0019B320 skipret;
        Sint32_x0019B320 dlmwait;
        Sint32_x0019B320 tmpref_adj;
        Sint32_x0019B320 nfrm;
        Sint32_x0019B320 pad17c;
        SFMPV_FRM_x0019B320 frm[16];
        void *picusr_buf;
        Sint32_x0019B320 picusr_num;
        Sint32_x0019B320 picusr_siz;
        Uint8_x0019B320 *picusr_dat;
        Sint32_x0019B320 picusr_len;
        SFMPV_PICUSR_x0019B320 picusr[16];
        Sint32_x0019B320 pad1014;
        Sint64_x0019B320 pts;
} SFMPV_WORK_x0019B320;
typedef struct {
        Sint32_x0019B320 raw[0x2A];
} SFD_PLYINF_x0019B320 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019B320 code);
        void *obj;
        Sint32_x0019B320 code;
        Sint32_x0019B320 x0c;
        Sint32_x0019B320 x10;
} SFLIB_ERRINF_x0019B320;
typedef struct {
        Sint32_x0019B320 codec;
        Sint32_x0019B320 layer;
        Sint32_x0019B320 chnum;
        Sint32_x0019B320 smphz;
} SFHDS_AUD_x0019B320;
typedef struct {
        Sint32_x0019B320 codec;
        Sint32_x0019B320 bitrate;
        Sint32_x0019B320 picw;
        Sint32_x0019B320 pich;
        Sint32_x0019B320 picrate;
        Sint32_x0019B320 ftr_eff;
        Sint32_x0019B320 ftr_coltype;
        Sint32_x0019B320 ftr_pictype;
        Sint32_x0019B320 ftr_fixflg;
        Sint32_x0019B320 ftr_shcfixflg;
        Sint32_x0019B320 ftr_expand;
        Sint32_x0019B320 ftr_gopn;
        Sint32_x0019B320 ftr_gopm;
} SFHDS_VID_x0019B320;
typedef struct {
        Sint32_x0019B320 valid;
        Sint32_x0019B320 ver_major;
        Sint32_x0019B320 ver_minor;
        Sint32_x0019B320 byterate;
        Sint32_x0019B320 hdrsiz;
        Sint32_x0019B320 packtype;
        Sint32_x0019B320 pketsizlen;
        Sint32_x0019B320 packsiz;
        Sint32_x0019B320 numelem_tot;
        Sint32_x0019B320 numelem_aud;
        Sint32_x0019B320 numelem_vid;
        Sint32_x0019B320 numelem_prv;
        Sint32_x0019B320 maxplylen_aud;
        Sint32_x0019B320 maxplylen_vid;
        Sint32_x0019B320 maxfrmnum;
        Sint32_x0019B320 stmid_prv1;
        Sint32_x0019B320 stmid_prv2;
        Sint32_x0019B320 stmid_aud;
        Sint32_x0019B320 stmid_vid;
        SFHDS_AUD_x0019B320 aud;
        SFHDS_VID_x0019B320 vid;
        Sint32_x0019B320 rawsiz;
        Uint8_x0019B320 raw[0x800];
} SFHDS_FHD_x0019B320;
typedef struct {
        Uint8_x0019B320 data[2][0xB0];
        Sint32_x0019B320 len[2];
} SFSEE_SYSHD_x0019B320;
typedef struct {
        Sint32_x0019B320 analyzed;
        Sint32_x0019B320 ncount;
        Sint32_x0019B320 tscale;
        Sint32_x0019B320 nvid;
        Sint32_x0019B320 naud;
        Sint32_x0019B320 pad14;
        Sint64_x0019B320 scr_base;
        Sint64_x0019B320 pts_min;
        Sint32_x0019B320 stmid_vid;
        Sint32_x0019B320 stmid_aud;
        SFSEE_SYSHD_x0019B320 syshd;
} SFSEE_SHDR_x0019B320;
typedef struct {
        Sint32_x0019B320 analyzed;
        Sint32_x0019B320 ncount;
        Sint32_x0019B320 tscale;
        SFHDS_FHD_x0019B320 fhd;
        SFSEE_SHDR_x0019B320 shdr;
        Uint8_x0019B320 pada38[0xAD0 - 0xA38];
        Sint32_x0019B320 a1hdr;
        Sint32_x0019B320 a1ncount;
        Sint32_x0019B320 a1tscale;
        Uint8_x0019B320 padadc[0xD0C - 0xADC];
        Sint32_x0019B320 a2hdr;
        Sint32_x0019B320 a2ncount;
        Sint32_x0019B320 a2tscale;
        Uint8_x0019B320 padd18[0xDA8 - 0xD18];
        Sint32_x0019B320 rate;
        Sint32_x0019B320 fsize_est;
        Sint32_x0019B320 tot_est;
        Sint32_x0019B320 tunit_est;
        Sint32_x0019B320 av_a;
        Sint32_x0019B320 av_b;
        Sint32_x0019B320 paddc0;
        Sint32_x0019B320 fsize;
        Sint32_x0019B320 tottime;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 byterate;
        Sint32_x0019B320 seekpos;
} SFSEE_WORK_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Sint32_x0019B320 pos;
        Sint32_x0019B320 x08;
} SFSEE_REQ_x0019B320;
typedef struct {
        Sint32_x0019B320 bsize;
        Sint32_x0019B320 xsize;
        void *buf;
        Sint32_x0019B320 maxnch;
        Sint32_x0019B320 x10;
        Sint32_x0019B320 worksize;
        void *work;
} SFADXT_PARA_x0019B320;
typedef struct {
        void *adxt;
        SJ_x0019B320 sj;
        SFADXT_PARA_x0019B320 para;
        Sint32_x0019B320 tcount;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 pause;
        Sint32_x0019B320 discard;
        Sint32_x0019B320 seekflg;
        Sint32_x0019B320 smplofst;
        void (*func)(SFD_x0019B320 sfd, Uint8_x0019B320 *data, Sint32_x0019B320 len, Sint32_x0019B320 *nbyte);
        Sint32_x0019B320 x40;
        Sint32_x0019B320 svrfreq;
        Sint32_x0019B320 totbyte;
        Sint32_x0019B320 x4c;
} SFADXT_WORK_x0019B320;
typedef struct {
        SFSEE_WORK_x0019B320 *wk;
        SFSEE_REQ_x0019B320 req;
} SFSEE_HN_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Uint32_x0019B320 adr;
        Sint32_x0019B320 size[7];
        Sint32_x0019B320 x24;
        Sint32_x0019B320 unit;
        Sint32_x0019B320 x2c;
        Sint32_x0019B320 x30;
        Sint32_x0019B320 x34;
        Sint32_x0019B320 x38;
        void *hnwork;
        Sint32_x0019B320 hnwksiz;
} SFD_CREPRM_x0019B320;
typedef struct {
        void *x00;
        Sint32_x0019B320 x04;
        Sint32_x0019B320 x08;
} SFPLY_PTSM_x0019B320;
typedef struct {
        Sint64_x0019B320 sum;
        Sint64_x0019B320 min;
        Sint64_x0019B320 max;
        Sint32_x0019B320 cnt;
} SFTMR_TSUM_x0019B320;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019B320 nvid;
        Sint32_x0019B320 naud;
        Sint32_x0019B320 x0c;
        Sint64_x0019B320 pts_min;
        Sint64_x0019B320 pts_min2;
        Sint32_x0019B320 concat_cnt;
        Sint32_x0019B320 last_vid;
        Sint32_x0019B320 last_aud;
        Sint32_x0019B320 first_vid;
        Sint32_x0019B320 first_aud;
        Sint32_x0019B320 cur_vid;
        Sint32_x0019B320 cur_aud;
        Sint32_x0019B320 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019B320 stmid);
        void *outobj;
        Sint32_x0019B320 skip;
        Sint32_x0019B320 x15c;
        Sint32_x0019B320 x160;
        Sint32_x0019B320 x164;
} SFMPS_WORK_x0019B320;
typedef struct SFD_OBJ_x0019B320 {
        SFD_CREPRM_x0019B320 prm;
        Sint32_x0019B320 chg_flg;
        Sint32_x0019B320 stat;
        Sint32_x0019B320 req;
        Sint32_x0019B320 pause_sw;
        Sint32_x0019B320 pause_cnt;
        Uint8_x0019B320 pad58[0x74 - 0x58];
        Sint32_x0019B320 pad74;
        SFHDS_FHD_x0019B320 fhd;
        Sint32_x0019B320 x90c;
        Sint32_x0019B320 x910;
        Sint32_x0019B320 x914;
        Sint32_x0019B320 x918;
        Sint32_x0019B320 x91c;
        Sint32_x0019B320 picrate;
        Sint32_x0019B320 x924;
        Sint32_x0019B320 x928;
        Sint32_x0019B320 x92c;
        Sint32_x0019B320 numelem_aud;
        Sint32_x0019B320 numelem_vid;
        Sint32_x0019B320 numelem_prv;
        Sint32_x0019B320 x93c;
        Sint32_x0019B320 x940;
        Sint32_x0019B320 x944;
        Sint32_x0019B320 x948;
        Sint32_x0019B320 x94c;
        SFD_PLYINF_x0019B320 plyinf;
        SFLIB_ERRINF_x0019B320 err;
        Sint32_x0019B320 cond[100];
        Sint32_x0019B320 cond_def[100];
        Uint8_x0019B320 padD24[4];
        SFCON_x0019B320 con;
        Uint8_x0019B320 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019B320))];
        Uint8_x0019B320 tst[0x1C0];
        Uint8_x0019B320 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019B320 ptsm;
        Uint8_x0019B320 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019B320 buf[8];
        SFD_VFRM_x0019B320 vfrm[16];
        SFD_TR_x0019B320 tr[9];
        Sint32_x0019B320 pad218c;
        SFMPS_WORK_x0019B320 mps;
        Uint8_x0019B320 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019B320 mpv;
        SFADXT_WORK_x0019B320 adxt;
        Uint8_x0019B320 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019B320 aoap;
        SFUO_x0019B320 uo_tbl;
        Sint32_x0019B320 pad34c4;
        SFSEE_HN_x0019B320 see;
        SFTMR_TSUM_x0019B320 tsum[6];
} SFD_OBJ_x0019B320;
Sint32_x0019B320 SFLIB_SetErr_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 code) __asm__("func_0018D650");
Sint32_x0019B320 SFLIB_CheckHn_x0019B320(SFD_x0019B320 sfd) __asm__("func_0018D870");
extern const Sint32_x0019B320 SFTIM_prate_x0019B320[9] __asm__("D_00467730");
Sint32_x0019B320 func_0019B320_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 *fps) __asm__("func_0019B320");
/* SFD_GetFps: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019B320 func_0019B320_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 *fps)
{
        *fps = -1;
        if (SFLIB_CheckHn_x0019B320(sfd) != 0) {
                return SFLIB_SetErr_x0019B320(0, 0xFF00011B);
        }
        if (sfd->picrate == 0) {
                return 0;
        }
        *fps = SFTIM_prate_x0019B320[sfd->picrate];
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B398);
typedef unsigned char u8_x0019B428;
typedef signed int s32_x0019B428;
typedef struct MovieEntry_x0019B428 {
    u8_x0019B428 pad_0[0x14];
    s32_x0019B428 value_14;
    s32_x0019B428 value_18;
} MovieEntry_x0019B428;
extern int fn_12_2DEB0_x0019B428(void *arg0, s32_x0019B428 value_14, s32_x0019B428 value_18) __asm__("func_0019B460");
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) __asm__("func_0019B428");
/* fn_12_2DEF0: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2DEF0.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) {
    if (entry == 0) {
        return 0;
    }
    return fn_12_2DEB0_x0019B428(arg0, entry->value_14, entry->value_18);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B460);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B498);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B520);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B5E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B738);
void func_0019B7B0(u8 *arg0, s32 *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 var_t0;
    s32 var_v0;
    u8 *temp_a2;

    temp_f1 = (f32) *(s32 *)((u8 *)arg0 + 0xA58);
    temp_a2 = arg0 + 0xCC0;
    if ((fparg1 + temp_f1) < fparg0) {
        *arg1 = 0;
        return;
    }
    if (fparg0 <= (fparg1 - temp_f1)) {
        *arg1 = 1;
        if ((*(f32 *)((u8 *)temp_a2 + 0x2BC) != fparg0) && (*(f32 *)((u8 *)temp_a2 + 0x2B4) != fparg0)) {
            *(f32 *)((u8 *)temp_a2 + 0x2B4) = fparg0;
            *(s32 *)((u8 *)temp_a2 + 0x2B0) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x2B0) + 1);
        }
    } else {
        var_t0 = 0;
        if ((D_00426A98 == 0xEA24) && (*(s32 *)((u8 *)arg0 + 0x920) < 3)) {
            var_t0 = *(s32 *)((u8 *)temp_a2 + 0x2A0) == 0x3E8;
        }
        if (var_t0 >= *(s32 *)((u8 *)temp_a2 + 0x2B0)) {
            var_v0 = *(s32 *)((u8 *)temp_a2 + 0x2B8);
            goto block_16;
        }
        var_v0 = 1;
        if (fparg1 < fparg0) {
            *arg1 = 0;
        } else {
block_16:
            *arg1 = var_v0;
        }
        *(s32 *)((u8 *)temp_a2 + 0x2B0) = 0;
        *(f32 *)((u8 *)temp_a2 + 0x2BC) = fparg0;
        *(s32 *)((u8 *)temp_a2 + 0x2B8) = (s32) *arg1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B8A0);
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) __asm__("func_0019B938");
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xF60) = arg1;
}
s32 func_0019B940(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xF60);
}
void func_0019B948_x0019B948(u8 *arg0) __asm__("func_0019B948");
void func_0019B948_x0019B948(u8 *arg0)
{
  *((s64 *) (((u8 *) arg0) + 0)) = (*((s32 *) (((u8 *) arg0) + 0x18)) = 0);
  *((s64 *) (((u8 *) arg0) + 0x10)) = 0;
  *((u64 *) (((u8 *) arg0) + 8)) = (u64) ((-((unsigned long long) 1U)) >> 1);
}
void func_0019B968_x0019B968(u8 *arg0, s64 arg1) __asm__("func_0019B968");
void func_0019B968_x0019B968(u8 *arg0, s64 arg1)
{
  s64 temp_a3;
  s64 temp_t0;
  temp_a3 = *((s64 *) (((u8 *) arg0) + 8));
  temp_t0 = *((s64 *) (((u8 *) arg0) + 0x10));
  *((s64 *) (((u8 *) arg0) + 0)) = (s64) ((*((s64 *) (((u8 *) arg0) + 0))) + arg1);
  *((s64 *) (((u8 *) arg0) + 8)) = (s64) ((arg1 < (*((s64 *) (((u8 *) arg0) + 8)))) ? (arg1) : (temp_a3));
  *((s64 *) (((u8 *) arg0) + 0x10)) = (s64) (((*((s64 *) (((u8 *) arg0) + 0x10))) < arg1) ? (arg1) : (*((s64 *) (((u8 *) arg0) + 0x10))));
  *((s32 *) (((u8 *) arg0) + 0x18)) = (*((s32 *) (((u8 *) arg0) + 0x18))) + 1;
}
typedef signed long Sint32_x0019B9A8;
typedef Sint32_x0019B9A8 (*SFD_TR_FUNC_x0019B9A8)();
typedef struct {
    SFD_TR_FUNC_x0019B9A8 functions[14];
} SFD_TR_IF_x0019B9A8;
typedef struct {
    const SFD_TR_IF_x0019B9A8 *tbl[15];
} SFTRN_TRIF_TBL_x0019B9A8;
Sint32_x0019B9A8 sftrn_CallInit_x0019B9A8(const SFD_TR_IF_x0019B9A8 **p, Sint32_x0019B9A8 ret) __asm__("func_0019BA58");
Sint32_x0019B9A8 func_0019B9A8_x0019B9A8(SFTRN_TRIF_TBL_x0019B9A8 *dst, SFTRN_TRIF_TBL_x0019B9A8 *src) __asm__("func_0019B9A8");
/* SFTRN_Init: from https://github.com/dev-camo/shadow-decomp (src/CRI/sfd_trn.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019B9A8 func_0019B9A8_x0019B9A8(SFTRN_TRIF_TBL_x0019B9A8 *dst, SFTRN_TRIF_TBL_x0019B9A8 *src) {
    Sint32_x0019B9A8 ret;
    ret = 0;
    *dst = *src;
    ret = sftrn_CallInit_x0019B9A8(src->tbl, ret);
    return ret;
}
typedef struct cVec_x0019BA40 {
    float x, y, z, w_x0019BA40;
} cVec_x0019BA40;
typedef struct cBox_x0019BA40 {
    float center[3];
    float half[3];
} cBox_x0019BA40;
typedef struct cMeshInfo_x0019BA40 {
    int dataOfs;
    char unk04[4];
    long name_x0019BA40;
    char unk10[0x24];
    unsigned int flags_x0019BA40;
    char unk38[0xB];
    unsigned char layer;
    char unk44[0x14];
    unsigned char alpha;
} cMeshInfo_x0019BA40;
typedef struct cMeshData_x0019BA40 {
    char unk00[8];
    unsigned short num;
} cMeshData_x0019BA40;
typedef struct cModelNode_x0019BA40 {
    char packet[2][0xB0];
    char unk160[0x220];
    unsigned int dispFlags;
    unsigned char unk384;
    char unk385;
    unsigned char meshNum;
    char unk387;
    struct cMeshData_x0019BA40 *data;
    float uvScroll[2];
    char unk394[0xC];
    float color[3];
    float alpha;
    char unk3B0[0x50];
    int unk400;
    struct cModelNode_x0019BA40 *next;
    int pktBuf;
    unsigned char layer;
    char unk40D[0x3];
    unsigned int tag;
    cMeshInfo_x0019BA40 *info;
} cModelNode_x0019BA40;
typedef struct cVtEnt_x0019BA40 {
    short delta;
    short index;
    void *pfn;
} cVtEnt_x0019BA40;
struct cParts_x0019BA40;
typedef struct cParts_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8];
} cParts_x0019BA40;
typedef struct SEQ_DATA_HEADER_1_x0019BA40 {
    char magic[4];
    char unk04[0x10];
    unsigned short entryOfs;
    unsigned short entryNum;
} SEQ_DATA_HEADER_1_x0019BA40;
typedef struct cSeqEffect_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char id;
    char unk02[2];
    int handle;
    unsigned char part;
    unsigned char flags_x0019BA40;
    char unk0A[2];
} cSeqEffect_x0019BA40;
typedef struct cGameObj_x0019BA40 cGameObj_x0019BA40;
struct cGameObj_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
};
typedef char cGameObj_chk_mtx[((int)&((struct cGameObj_x0019BA40 *)0)->mtx_x0019BA40) == 0x80 ? 1 : -1];
typedef char cGameObj_chk_pos[((int)&((struct cGameObj_x0019BA40 *)0)->pos_x0019BA40) == 0xF0 ? 1 : -1];
typedef char cGameObj_chk_rot[((int)&((struct cGameObj_x0019BA40 *)0)->rot_x0019BA40) == 0x100 ? 1 : -1];
typedef char cGameObj_chk_anim[((int)&((struct cGameObj_x0019BA40 *)0)->tint.w_x0019BA40) == 0x24C ? 1 : -1];
typedef char cGameObj_chk_vt[((int)&((struct cGameObj_x0019BA40 *)0)->vtable_x0019BA40) == 0x214 ? 1 : -1];
typedef char cGameObj_chk_step[((int)&((struct cGameObj_x0019BA40 *)0)->step_x0019BA40) == 0x2F6 ? 1 : -1];
typedef char cGameObj_chk_posA[((int)&((struct cGameObj_x0019BA40 *)0)->posA_x0019BA40) == 0x490 ? 1 : -1];
typedef char cGameObj_chk_stored[((int)&((struct cGameObj_x0019BA40 *)0)->stored_x0019BA40) == 0x520 ? 1 : -1];
typedef char cGameObj_chk_motion[((int)&((struct cGameObj_x0019BA40 *)0)->seqFlags_x0019BA40) == 0x3AC ? 1 : -1];
typedef char cGameObj_chk_hp[((int)&((struct cGameObj_x0019BA40 *)0)->hp_x0019BA40) == 0x54A ? 1 : -1];
typedef char cGameObj_chk_kind[((int)&((struct cGameObj_x0019BA40 *)0)->kindName_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cGameObj_chk_emno[((int)&((struct cGameObj_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cGameObj_chk_eff[((int)&((struct cGameObj_x0019BA40 *)0)->seqData_x0019BA40) == 0x42C ? 1 : -1];
typedef char cGameObj_chk_effno[((int)&((struct cGameObj_x0019BA40 *)0)->effNo_x0019BA40) == 0x570 ? 1 : -1];
typedef char cGameObj_chk_scr[((int)&((struct cGameObj_x0019BA40 *)0)->scrFlags_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cGameObj_chk_scale[((int)&((struct cGameObj_x0019BA40 *)0)->scale_x0019BA40) == 0x110 ? 1 : -1];
typedef char cGameObj_chk_child[((int)&((struct cGameObj_x0019BA40 *)0)->children_x0019BA40) == 0x278 ? 1 : -1];
typedef char cGameObj_chk_childn[((int)&((struct cGameObj_x0019BA40 *)0)->partNum_x0019BA40) == 0x2B4 ? 1 : -1];
typedef char cGameObj_chk_ik[((int)&((struct cGameObj_x0019BA40 *)0)->ik_x0019BA40) == 0x448 ? 1 : -1];
typedef char cGameObj_chk_drop[((int)&((struct cGameObj_x0019BA40 *)0)->dropItem_x0019BA40) == 0x560 ? 1 : -1];
typedef char cGameObj_chk_rate[((int)&((struct cGameObj_x0019BA40 *)0)->speedRate_x0019BA40) == 0x5A8 ? 1 : -1];
typedef char cGameObj_chk_ground[((int)&((struct cGameObj_x0019BA40 *)0)->groundKind_x0019BA40) == 0x474 ? 1 : -1];
typedef char cGameObj_chk_frame[((int)&((struct cGameObj_x0019BA40 *)0)->motionFrame_x0019BA40) == 0x430 ? 1 : -1];
typedef char cGameObj_chk_name[((int)&((struct cGameObj_x0019BA40 *)0)->name_x0019BA40) == 0x538 ? 1 : -1];
typedef char cGameObj_chk_size[sizeof(struct cGameObj_x0019BA40) == 0x5B0 ? 1 : -1];
typedef struct cOmBase_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x4];
    int flags0;
    int hitFlags;
    int flags2;
    char unk5BC[0x4];
    cVec_x0019BA40 knock;
    cVec_x0019BA40 posB;
} cOmBase_x0019BA40;
typedef char cOmBase_size_check[(sizeof(cOmBase_x0019BA40) == 0x5E0) ? 1 : -1];
typedef struct cCoreSaveCombo_x0019BA40 {
    int id[6];
    char lv[6];
    char pad1E[2];
    int max;
} cCoreSaveCombo_x0019BA40;
typedef struct cCoreSaveSpawn_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char sub;
    unsigned short angle;
    float pos_x0019BA40[4];
    int param;
} cCoreSaveSpawn_x0019BA40;
typedef struct cCoreSaveItem_x0019BA40 {
    unsigned short stage;
    unsigned short kind_x0019BA40;
    unsigned char flag;
    signed char yaw;
    unsigned short serial;
    short pos_x0019BA40[3];
    unsigned short extra;
} cCoreSaveItem_x0019BA40;
typedef struct cCoreSaveData_x0019BA40 {
    int worldTime;
    int worldTimeB;
    unsigned int counter08;
    unsigned short saveStageA;
    unsigned short saveStageB;
    unsigned short clearNum;
    unsigned short continueNum;
    unsigned int flags_x0019BA40;
    char unk18[4];
    short levelPoint;
    char levelDownGrace;
    char difficulty;
    int gold;
    int addGoldNum;
    int addGold[16];
    int keyCardNum;
    int keyNum;
    int upgradeLv[4];
    int vitalMax;
    int vital;
    unsigned short counter88;
    unsigned char comboST;
    char unk8B;
    short killEmNum[5];
    unsigned short killNpcNum;
    unsigned char reelSlot[10];
    char unkA2[2];
    unsigned int clearStageMask;
    unsigned char godItem[6];
    unsigned char costumeNo;
    unsigned char prevCostumeNo;
    char skill[0x80];
    unsigned int godReel;
    unsigned char stock[0x20];
    unsigned char vitalItemNum;
    unsigned char tensionItemNum;
    unsigned char reelItemNum;
    unsigned char paper;
    cCoreSaveSpawn_x0019BA40 spawn;
    int worldToggle;
    int worldActive;
    int savedToggle;
    int unk17C;
    char unk180[0x30];
    cCoreSaveCombo_x0019BA40 combo[6];
    unsigned short itemNum;
    cCoreSaveItem_x0019BA40 item[0x80];
    char unkA8A[0x102];
    unsigned int unkB8C;
    unsigned int eventFlags;
    int casinoTicketNum;
    unsigned int fightingRingClear[4];
    int fightingRingEmListNo;
    short allKillEmNum[5];
    unsigned short allKillNpcNum;
    unsigned short allContinueNum;
    unsigned short stateBits;
    unsigned int allStageTime;
    int oliviaCostumeNo;
    char unkBC4[0x8DC];
} cCoreSaveData_x0019BA40;
typedef char cCoreSaveData_size_check[sizeof(cCoreSaveData_x0019BA40) == 0x14A0 ? 1 : -1];
typedef struct cCoreSave_x0019BA40 {
    cCoreSaveData_x0019BA40 *data;
} cCoreSave_x0019BA40;
void cCoreSave_setGameLevel_x0019BA40(cCoreSave_x0019BA40 *self, int level) __asm__("func_0019BA58");
typedef struct cOmbb_x0019BA40 {
    cOmBase_x0019BA40 base;
    char unk5E0[0x20];
    unsigned char fireLit;
    unsigned char bombKind;
    char unk602[2];
    float countdown;
    int hissSe;
} cOmbb_x0019BA40;
typedef struct cEmActorVt_x0019BA40 {
    char unk00[0x60];
    short suspendDelta;
    short pad62;
    void (*suspend)(void *self, int flag);
    char unk68[8];
    short setPosDelta;
    short pad72;
    void (*setPos)(void *self, int pos_x0019BA40);
    short setScaleDelta;
    short pad7A;
    void (*setScale)(void *self, void *scale_x0019BA40);
    char unk80[0x98 - 0x80];
    short entryDelta;
    short pad9A;
    int (*entry_x0019BA40)(void *self, void *data, void *parent);
    char unkA0[0xD8 - 0xA0];
    short startDelta;
    short padDA;
    void (*startAction)(void *self);
} cEmActorVt_x0019BA40;
typedef struct cEmActor_x0019BA40 {
    char unk000[0xF0];
    struct cVec_x0019BA40 *pos_x0019BA40;
    char unk0F4[0x100 - 0xF4];
    float rot_x0019BA40[3];
    char unk10C[0x214 - 0x10C];
    cEmActorVt_x0019BA40 *vt;
    char unk218[0x250 - 0x218];
    int objFlags_x0019BA40;
    char unk254[0x2FE - 0x254];
    unsigned short actorId;
    char unk300[0x4AC - 0x300];
    int kind_x0019BA40;
    char unk4B0[0x548 - 0x4B0];
    short vitalMax;
    short vital;
    char unk54C[0x560 - 0x54C];
    int dropItem_x0019BA40;
    int emNo_x0019BA40;
    char unk568[0x5A0 - 0x568];
    int scrFlags_x0019BA40;
    char unk5A4[4];
    float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x640 - 0x5AC];
    unsigned short entryNo_x0019BA40;
} cEmActor_x0019BA40;
typedef char cEmActor_chk_flags[((int)&((cEmActor_x0019BA40 *)0)->objFlags_x0019BA40) == 0x250 ? 1 : -1];
typedef char cEmActor_chk_kind[((int)&((cEmActor_x0019BA40 *)0)->kind_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cEmActor_chk_emno[((int)&((cEmActor_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cEmActor_chk_entry[((int)&((cEmActor_x0019BA40 *)0)->entryNo_x0019BA40) == 0x640 ? 1 : -1];
typedef char cEmActorVt_chk_entry[(int)&((cEmActorVt_x0019BA40 *)0)->entry_x0019BA40 == 0x9C ? 1 : -1];
typedef struct SET_EM_DATA_x0019BA40 {
    int objId;
    char unk04[0xC];
    cVec_x0019BA40 pos_x0019BA40;
    float rot_x0019BA40;
    unsigned int flags_x0019BA40;
    int seBank;
    int seNo;
    unsigned char appPattern;
    unsigned char entryNo_x0019BA40;
} SET_EM_DATA_x0019BA40;
typedef struct cEmSlot_x0019BA40 {
    struct cEmSlot_x0019BA40 *prev;
    struct cEmSlot_x0019BA40 *next;
    cEmActor_x0019BA40 *em;
    int kind_x0019BA40;
    unsigned char used;
    char unk11[3];
} cEmSlot_x0019BA40;
typedef struct cEmList_x0019BA40 {
    cEmSlot_x0019BA40 *top_x0019BA40;
    cEmSlot_x0019BA40 *last;
} cEmList_x0019BA40;
typedef struct cEmManage_x0019BA40 {
    cEmSlot_x0019BA40 slot[64];
    cEmList_x0019BA40 list;
    int emNum;
    int kindNum;
    int unk510;
    int slotWait;
    unsigned char darkWorld;
    char unk519[7];
    cVec_x0019BA40 unk520_x0019BA40;
    int unk530;
    char unk534[4];
    signed char bigHitEffWait_x0019BA40;
    signed char unk539;
    signed char unk53A;
    signed char plBombHit;
    signed char plCatched;
    signed char plSorry;
    signed char unk53E;
    unsigned char unk53F;
    signed char unk540;
    signed char unk541;
    short unk542;
    float unk544;
    float speedRate_x0019BA40;
    int unk54C;
    int turnBehind_x0019BA40;
    int turnPlus;
    int turnMinus;
    int nextNo_x0019BA40;
    cEmActor_x0019BA40 *unk560[5];
    cEmActor_x0019BA40 *specialEm_x0019BA40[5];
    cEmActor_x0019BA40 *unk588[4];
    char unk598[8];
    unsigned char unk5A0_x0019BA40;
    unsigned char unk5A1;
    unsigned char unk5A2;
    unsigned char unk5A3;
    unsigned char unk5A4;
    unsigned char unk5A5;
    char unk5A6[6];
    cOmbb_x0019BA40 *unk5AC_x0019BA40[2];
    char unk5B4;
    unsigned char unk5B5_x0019BA40;
} cEmManage_x0019BA40;
typedef char SET_EM_DATA_chk_size[sizeof(SET_EM_DATA_x0019BA40) == 0x34 ? 1 : -1];
typedef char SET_EM_DATA_chk_pos[(int)&((SET_EM_DATA_x0019BA40 *)0)->pos_x0019BA40 == 0x10 ? 1 : -1];
typedef char SET_EM_DATA_chk_flags[(int)&((SET_EM_DATA_x0019BA40 *)0)->flags_x0019BA40 == 0x24 ? 1 : -1];
typedef char cEmSlot_chk_size[sizeof(cEmSlot_x0019BA40) == 0x14 ? 1 : -1];
typedef char cEmManage_chk_top[((int)&((cEmManage_x0019BA40 *)0)->list.top_x0019BA40) == 0x500 ? 1 : -1];
typedef char cEmManage_chk_vec[((int)&((cEmManage_x0019BA40 *)0)->unk520_x0019BA40) == 0x520 ? 1 : -1];
typedef char cEmManage_chk_wait[((int)&((cEmManage_x0019BA40 *)0)->bigHitEffWait_x0019BA40) == 0x538 ? 1 : -1];
typedef char cEmManage_chk_rate[((int)&((cEmManage_x0019BA40 *)0)->speedRate_x0019BA40) == 0x548 ? 1 : -1];
typedef char cEmManage_chk_turn[((int)&((cEmManage_x0019BA40 *)0)->turnBehind_x0019BA40) == 0x550 ? 1 : -1];
typedef char cEmManage_chk_no[((int)&((cEmManage_x0019BA40 *)0)->nextNo_x0019BA40) == 0x55C ? 1 : -1];
typedef char cEmManage_chk_special[((int)&((cEmManage_x0019BA40 *)0)->specialEm_x0019BA40) == 0x574 ? 1 : -1];
typedef char cEmManage_chk_flags[((int)&((cEmManage_x0019BA40 *)0)->unk5A0_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cEmManage_chk_5ac[((int)&((cEmManage_x0019BA40 *)0)->unk5AC_x0019BA40) == 0x5AC ? 1 : -1];
typedef char cEmManage_chk_5b5[((int)&((cEmManage_x0019BA40 *)0)->unk5B5_x0019BA40) == 0x5B5 ? 1 : -1];
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) __asm__("func_0019BA40");
/* cCoreSave_setGameLevel1_1F9AD0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/001b5160.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) { cCoreSave_setGameLevel_x0019BA40(self, 1); }
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BA58);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BAD8);
void func_0019BB90_x0019BB90(u8 *arg0, s32 arg1) __asm__("func_0019BB90");
void func_0019BB90_x0019BB90(u8 *arg0, s32 arg1) {
    s32 *var_v0;
    s32 var_v1;

    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    var_v1 = 2;
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = 8;
    var_v0 = arg0 + 0x1C;
    do {
        var_v1 -= 1;
        *var_v0 = 8;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    *(s32 *)((u8 *)arg0 + 0x20) = -1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BBD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BCF8);
s32 func_0019BF48_x0019BDE8() __asm__("func_0019BF48");
s32 func_0019C008_x0019BDE8() __asm__("func_0019C008");
void func_0019BDE8_x0019BDE8(s32 arg0, u8 *arg1) __asm__("func_0019BDE8");
void func_0019BDE8_x0019BDE8(s32 arg0, u8 *arg1) {
    func_0019C008_x0019BDE8(arg0, 1, 2);
    func_0019BF48_x0019BDE8(arg0, 2, 3);
    if (*(s32 *)((u8 *)arg1 + 0x10) != 0) {
        func_0019C008_x0019BDE8(arg0, 3, 4);
        func_0019BF48_x0019BDE8(arg0, 4, 5);
        func_0019C008_x0019BDE8(arg0, 5, 6);
        return;
    }
    func_0019C008_x0019BDE8(arg0, 3, 6);
}
s32 func_0019BF48_x0019BE88() __asm__("func_0019BF48");
s32 func_0019C008_x0019BE88() __asm__("func_0019C008");
void func_0019BE88_x0019BE88(s32 arg0, u8 *arg1) __asm__("func_0019BE88");
void func_0019BE88_x0019BE88(s32 arg0, u8 *arg1) {
    func_0019C008_x0019BE88(arg0, 2, 3);
    func_0019BF48_x0019BE88(arg0, 3, 4);
    if (*(s32 *)((u8 *)arg1 + 0x14) != 0) {
        func_0019C008_x0019BE88(arg0, 4, 5);
        func_0019BF48_x0019BE88(arg0, 5, 6);
        func_0019C008_x0019BE88(arg0, 6, 7);
        return;
    }
    func_0019C008_x0019BE88(arg0, 4, 7);
}
s32 func_0019C008_x0019BF28() __asm__("func_0019C008");
void func_0019BF28_x0019BF28(s32 arg0) __asm__("func_0019BF28");
void func_0019BF28_x0019BF28(s32 arg0) {
    func_0019C008_x0019BF28(arg0, 7, 8);
}
s32 func_0019BFC8_x0019BF48() __asm__("func_0019BFC8");
void func_0019BF48_x0019BF48(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF48");
void func_0019BF48_x0019BF48(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF48(arg0, arg1, 0, arg2);
}
s32 func_0019BFC8_x0019BF68() __asm__("func_0019BFC8");
void func_0019BF68_x0019BF68(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF68");
void func_0019BF68_x0019BF68(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF68(arg0, arg1, 0, arg2);
}
s32 func_0019BFC8_x0019BF88() __asm__("func_0019BFC8");
void func_0019BF88_x0019BF88(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF88");
void func_0019BF88_x0019BF88(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF88(arg0, arg1, 1, arg2);
}
s32 func_0019BFC8_x0019BFA8() __asm__("func_0019BFC8");
void func_0019BFA8_x0019BFA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BFA8");
void func_0019BFA8_x0019BFA8(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BFA8(arg0, arg1, 2, arg2);
}
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019BFC8");
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int new_var;
  s32 new_var2;
  int new_var4;
  s32 *new_var3;
  new_var3 = &arg3;
  new_var4 = arg1 * 0x44;
  *((s32 *) (((u8 *) ((arg2 * 4) + (arg0 + new_var4))) + 0x1BF4)) = *new_var3;
  new_var2 = arg3;
  new_var = arg0 + (new_var2 * 0x74);
  *((s32 *) (((u8 *) new_var) + 0x12CC)) = arg1;
}
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C008");
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  int new_var2;
  *((s32 *) (((u8 *) (arg0 + (arg2 * (new_var2 = 0x44)))) + 0x1BF0)) = arg1;
  *((s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + (new_var = 0x12D0))) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C040);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C0D8);
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C128");
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  *((s32 *) (((u8 *) (new_var = arg0 + (arg1 * 0x44))) + 0x1BE0)) = arg2;
}
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1) __asm__("func_0019C140");
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1)
{
  int new_var;
  new_var = arg0 + (arg1 * 0x44);
  return *((s32 *) (((u8 *) new_var) + 0x1BE0));
}
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C158");
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4);
  *new_var = arg2;
}
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1) __asm__("func_0019C170");
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4;
  return *((s32 *) new_var);
}
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1) __asm__("func_0019C188");
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BEC;
  return (*((s32 *) new_var)) != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C1A8);
void func_0019C288(u8 *arg0) {
    memset(arg0 + 0x18, 0, 0xF0);
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x19C) = (s32) (*(s32 *)((u8 *)arg0 + 0x19C) + 1);
}
void func_0019C2C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
void func_0019C2D0(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x138) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x140) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C2E8(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x148) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x150) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C300(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x158) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x160) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C318(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x168) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x170) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C330(u8 *arg0, s32 arg1) {
    if (arg1 > 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    }
}
void func_0019C340(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
}
void func_0019C348(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
}
extern long long func_0031DE10_x0019C350(long long, long long) __asm__("__muldi3");
extern long long func_003B7FE0_x0019C350(long long, long long) __asm__("func_0011F758");
void func_0019C350_x0019C350(char *a0, char *a1) __asm__("func_0019C350");
/* func_0035C548: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003264c8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C350_x0019C350(char *a0, char *a1) {
    long long r, r2;
    if (*(int *)(a0 + 0xC) == 0) {
        r = func_0031DE10_x0019C350(*(long long *)(a0 + 0x130), *(long long *)(a1));
        r2 = func_003B7FE0_x0019C350(r, *(long long *)(a1 + 8));
        *(long long *)(a0 + 0x128) += r2;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C3A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019C810);
s32 func_0019C8D0_x0019C870(void *) __asm__("func_0019C8D0");
void func_0019C870_x0019C870(u8 *arg0, s32 arg1) __asm__("func_0019C870");
void func_0019C870_x0019C870(u8 *arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) > 0) {
        var_v1 = arg0 + 0x18;
        do {
            var_a0 += 1;
            *var_v1 -= arg1;
            var_v1 += 1;
        } while (var_a0 < *(s32 *)((u8 *)arg0 + 0x10));
    }
    *(s32 *)((u8 *)arg0 + 0x1A8) = func_0019C8D0_x0019C870(arg0);
}
s32 func_0019C8D0_x0019C8D0(u8 *arg0) __asm__("func_0019C8D0");
s32 func_0019C8D0_x0019C8D0(u8 *arg0) {
    s32 *var_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x10);
    var_a2 = 0;
    if (temp_a1 > 0) {
        var_a0 = arg0 + 0x18;
        var_v1 = temp_a1;
        do {
            temp_v0 = *var_a0;
            var_a0 += 1;
            var_v1 -= 1;
            var_a2 += temp_v0;
        } while (var_v1 != 0);
    }
    return var_a2 / temp_a1;
}
void func_0019C920(s32 arg0, s32 arg1) {
    D_00426B3C = arg0;
    D_00426B38 = arg1;
}
extern char D_00459990_x0019C938[] __asm__("D_004677A0");
extern int D_003EE320_x0019C938 __asm__("D_00426B3C");
extern int D_003EE31C_x0019C938 __asm__("D_00426B38");
extern int D_003EE328_x0019C938 __asm__("D_00426B44");
extern int D_003EE32C_x0019C938 __asm__("D_00426B48");
extern void func_003A52F0_x0019C938(int a0, int a1, int a2) __asm__("memset");
extern void func_003A57C4_x0019C938(int a0, char *a1) __asm__("func_00127A88");
extern int strlen_x0019C938(const char *s) __asm__("func_00127BA0");
struct S35CB20_x0019C938 { char b[0x112]; };
void func_0019C938_x0019C938(void) __asm__("func_0019C938");
/* func_0035CB20: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035cb20.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C938_x0019C938(void) {
    struct S35CB20_x0019C938 buf = *(struct S35CB20_x0019C938 *)D_00459990_x0019C938;
    if (D_003EE320_x0019C938 != 0) {
        func_003A52F0_x0019C938(D_003EE320_x0019C938, 0, D_003EE31C_x0019C938);
        D_003EE328_x0019C938 = D_003EE320_x0019C938;
        func_003A57C4_x0019C938(D_003EE320_x0019C938, buf.b);
        D_003EE328_x0019C938 = D_003EE328_x0019C938 + strlen_x0019C938(buf.b);
        D_003EE32C_x0019C938 = D_003EE328_x0019C938;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CA98);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CCD0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CDF8);
s32 func_0019CF08(void) {
    return 0;
}
s32 func_0019CF10(void) {
    return 0;
}
s32 func_0019CF18(s32 arg0) {
    s32 temp_s0;

    func_0019CF60();
    temp_s0 = func_0019D070(arg0);
    func_0019CFE8(arg0);
    return temp_s0;
}
s32 func_0018B770_x0019CF60() __asm__("func_0018B770");
s32 func_0019C158_x0019CF60() __asm__("func_0019C158");
s32 func_0019C170_x0019CF60() __asm__("func_0019C170");
s32 func_0019CFE0_x0019CF60() __asm__("func_0019CFE0");
void func_0019CF60_x0019CF60(u8 *arg0) __asm__("func_0019CF60");
void func_0019CF60_x0019CF60(u8 *arg0) {
    if ((func_0019C170_x0019CF60(arg0, 8) != 1) && (func_0018B770_x0019CF60(arg0, *(s32 *)((u8 *)arg0 + 0x1E10)) == 1) && (func_0019CFE0_x0019CF60(arg0) != 0)) {
        func_0019C158_x0019CF60(arg0, 8, 1);
    }
}
s32 func_0019CFE0(void) {
    return 1;
}
s32 func_0018B730_x0019CFE8() __asm__("func_0018B730");
s32 func_0019C128_x0019CFE8() __asm__("func_0019C128");
s32 func_0019C140_x0019CFE8() __asm__("func_0019C140");
s32 func_0019D068_x0019CFE8() __asm__("func_0019D068");
void func_0019CFE8_x0019CFE8(u8 *arg0) __asm__("func_0019CFE8");
void func_0019CFE8_x0019CFE8(u8 *arg0) {
    if ((func_0019C140_x0019CFE8(arg0, 8) != 1) && (func_0018B730_x0019CFE8(arg0, *(s32 *)((u8 *)arg0 + 0x1E10)) == 1) && (func_0019D068_x0019CFE8(arg0) != 0)) {
        func_0019C128_x0019CFE8(arg0, 8, 1);
    }
}
s32 func_0019D068(void) {
    return 1;
}
s32 func_0019D070_x0019D070(void) __asm__("func_0019D070");
s32 func_0019D070_x0019D070(void) {
    return 0;
}
s32 func_0019D0A8_x0019D078() __asm__("func_0019D0A8");
s32 func_0019D078_x0019D078(s32 arg0) __asm__("func_0019D078");
s32 func_0019D078_x0019D078(s32 arg0)
{
  s32 temp_a1;
  u8 *temp_v0;
  ;
  temp_v0 = arg0 + 0x1E00;
  *((s32 *) (((u8 *) temp_v0) + 8)) = arg0 + 0x31B0;
  func_0019D0A8_x0019D078(arg0, arg0 + 0x31B0, *((s32 *) (((u8 *) temp_v0) + 0x10)));
  return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D0A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D120);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D148);
s32 func_0019D160(void) {
    return 0;
}
s32 func_0019D168(void) {
    return 0;
}
s32 func_0019D170(void) {
    return 0;
}
s32 func_0019D178(void) {
    return 0;
}
s32 func_0019D180(void) {
    return 0;
}
s32 func_0018D650_x0019D188() __asm__("func_0018D650");
void func_0019D188_x0019D188(s32 arg0) __asm__("func_0019D188");
void func_0019D188_x0019D188(s32 arg0) {
    func_0018D650_x0019D188(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1A8() __asm__("func_0018D650");
void func_0019D1A8_x0019D1A8(s32 arg0) __asm__("func_0019D1A8");
void func_0019D1A8_x0019D1A8(s32 arg0) {
    func_0018D650_x0019D1A8(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1C8() __asm__("func_0018D650");
void func_0019D1C8_x0019D1C8(s32 arg0) __asm__("func_0019D1C8");
void func_0019D1C8_x0019D1C8(s32 arg0) {
    func_0018D650_x0019D1C8(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1E8() __asm__("func_0018D650");
void func_0019D1E8_x0019D1E8(s32 arg0) __asm__("func_0019D1E8");
void func_0019D1E8_x0019D1E8(s32 arg0) {
    func_0018D650_x0019D1E8(arg0, 0xFF000601);
}
s32 func_0019D208(void) {
    return 0;
}
s32 func_0019D210(void) {
    return 0;
}
s32 func_0019D218(void) {
    return 0;
}
s32 func_001999E0_x0019D220() __asm__("func_001999E0");
s32 func_0019D278_x0019D220() __asm__("func_0019D278");
s32 func_0019D340_x0019D220() __asm__("func_0019D340");
s32 func_0019D3C8_x0019D220() __asm__("func_0019D3C8");
s32 func_0019D220_x0019D220(s32 arg0) __asm__("func_0019D220");
s32 func_0019D220_x0019D220(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0_x0019D220(arg0, 5);
    if (var_v0 != 0) {
        func_0019D278_x0019D220(arg0);
        temp_s0 = func_0019D3C8_x0019D220(arg0);
        func_0019D340_x0019D220(arg0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
s32 func_0018B770_x0019D278() __asm__("func_0018B770");
s32 func_0019C158_x0019D278() __asm__("func_0019C158");
s32 func_0019C170_x0019D278() __asm__("func_0019C170");
s32 func_0019D2F8_x0019D278() __asm__("func_0019D2F8");
void func_0019D278_x0019D278(u8 *arg0) __asm__("func_0019D278");
void func_0019D278_x0019D278(u8 *arg0) {
    if ((func_0019C170_x0019D278(arg0, 6) != 1) && (func_0018B770_x0019D278(arg0, *(s32 *)((u8 *)arg0 + 0x1D88)) == 1) && (func_0019D2F8_x0019D278(arg0) != 0)) {
        func_0019C158_x0019D278(arg0, 6, 1);
    }
}
s32 func_001999E0_x0019D2F8() __asm__("func_001999E0");
s32 func_0019B8A0_x0019D2F8() __asm__("func_0019B8A0");
s32 func_0019D2F8_x0019D2F8(s32 arg0) __asm__("func_0019D2F8");
s32 func_0019D2F8_x0019D2F8(s32 arg0) {
    if (func_001999E0_x0019D2F8(arg0, 0xF) == 0) {
        return 1;
    }
    return func_0019B8A0_x0019D2F8(arg0) != 0;
}
s32 func_0018B730_x0019D340() __asm__("func_0018B730");
s32 func_0019C128_x0019D340() __asm__("func_0019C128");
s32 func_0019C140_x0019D340() __asm__("func_0019C140");
s32 func_0019D3C0_x0019D340() __asm__("func_0019D3C0");
void func_0019D340_x0019D340(u8 *arg0) __asm__("func_0019D340");
void func_0019D340_x0019D340(u8 *arg0) {
    if ((func_0019C140_x0019D340(arg0, 6) != 1) && (func_0018B730_x0019D340(arg0, *(s32 *)((u8 *)arg0 + 0x1D88)) == 1) && (func_0019D3C0_x0019D340(arg0) != 0)) {
        func_0019C128_x0019D340(arg0, 6, 1);
    }
}
s32 func_0019D3C0(void) {
    return 1;
}
s32 func_0019D3C8(void) {
    return 0;
}
s32 func_0019D3D0(void) {
    return 0;
}
s32 func_0019D3D8(void) {
    return 0;
}
s32 func_0019D3E0(void) {
    return 0;
}
s32 func_0019D3E8(void) {
    return 0;
}
s32 func_0019D3F0(void) {
    return 0;
}
s32 func_0019D3F8(void) {
    return 0;
}
s32 func_0018D650_x0019D400() __asm__("func_0018D650");
void func_0019D400_x0019D400(s32 arg0) __asm__("func_0019D400");
void func_0019D400_x0019D400(s32 arg0) {
    func_0018D650_x0019D400(arg0, 0xFF000701);
}
s32 func_0018D650_x0019D420() __asm__("func_0018D650");
void func_0019D420_x0019D420(s32 arg0) __asm__("func_0019D420");
void func_0019D420_x0019D420(s32 arg0) {
    func_0018D650_x0019D420(arg0, 0xFF000701);
}
s32 func_0018B648_x0019D440() __asm__("func_0018B648");
s32 func_0019B428_x0019D440() __asm__("func_0019B428");
s32 func_0019D440_x0019D440(u8 *arg0, s32 *arg1) __asm__("func_0019D440");
s32 func_0019D440_x0019D440(u8 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    if ((u32) (*(s32 *)((u8 *)arg0 + 0x48) - 3) >= 2U) {
        *arg1 = 0;
        goto block_6;
    }
    var_v0 = func_0018B648_x0019D440(arg0, *(s32 *)((u8 *)arg0 + 0x1D88), arg1);
    if (var_v0 == 0) {
        temp_v0 = func_0019B428_x0019D440(arg0, *arg1);
        if (temp_v0 == 0) {
            *arg1 = 0;
            return temp_v0;
        }
block_6:
        var_v0 = 0;
        
        return var_v0;
    }
    return var_v0;
}
s32 func_0018B6A0_x0019D4B8() __asm__("func_0018B6A0");
void func_0019D4B8_x0019D4B8(u8 *arg0, s32 arg1) __asm__("func_0019D4B8");
void func_0019D4B8_x0019D4B8(u8 *arg0, s32 arg1) {
    func_0018B6A0_x0019D4B8(arg0, *(s32 *)((u8 *)arg0 + 0x1D88), arg1);
}
s32 func_0019D4D8(void) {
    return 0;
}
s32 *func_0019D4E0(void) {
    return &D_00467A00;
}
s32 func_0019D4F0(s32 arg0) {
    return arg0 == 2;
}
extern volatile int D_00766C9C_x0019D500 __asm__("D_00492A64");
extern volatile int *D_00766C88_x0019D500 __asm__("D_00492A50");
extern int D_00766C90_x0019D500 __asm__("D_00492A58");
extern int *Obj35D0_GetStringPtr_D00459BF0_x0019D500(void) __asm__("func_0019D4E0");
extern void initLibWork_x0019D500(int a0, int a1) __asm__("func_0019D720");
extern void Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(int *a0, int a1, int a2) __asm__("func_0019D6E0");
void func_0019D500_x0019D500(int a0, int a1) __asm__("func_0019D500");
/* func_0035D538: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019D500_x0019D500(int a0, int a1) {
    int t = D_00766C9C_x0019D500;
    if (t <= 0) {
        D_00766C9C_x0019D500 = t + 1;
        D_00766C88_x0019D500 = Obj35D0_GetStringPtr_D00459BF0_x0019D500();
        initLibWork_x0019D500(a0, a1);
        Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(&D_00766C90_x0019D500, a0, a1);
    }
}
void func_0019D590(void) {
    s32 temp_v0;

    temp_v0 = D_00492A64 - 1;
    D_00492A64 = temp_v0;
    if (temp_v0 <= 0) {
        func_0019D6D0(&D_00492A58);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D5D8);
s32 func_0019D6F0_x0019D6A0() __asm__("func_0019D6F0");
extern s32 D_00492A58_x0019D6A0 __asm__("D_00492A58");
void func_0019D6A0_x0019D6A0(void) __asm__("func_0019D6A0");
void func_0019D6A0_x0019D6A0(void)
{
  u8 *new_var2;
  s32 *new_var;
  func_0019D6F0_x0019D6A0();
  new_var2 = (u8 *) (&D_00492A58_x0019D6A0);
  new_var = &D_00492A58_x0019D6A0;
  *((s32 *) (new_var2 + 4)) = (s32) ((*((s32 *) (((u8 *) new_var) + 4))) - 1);
}
void func_0019D6D0_x0019D6D0(u8 *arg0) __asm__("func_0019D6D0");
void func_0019D6D0_x0019D6D0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
}
void func_0019D6E0(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
void func_0019D6F0_x0019D6F0(u8 *arg0) __asm__("func_0019D6F0");
void func_0019D6F0_x0019D6F0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
}
void func_0019D708_x0019D708(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019D708");
void func_0019D708_x0019D708(u8 *arg0, s32 arg1, s32 arg2)
{
 do { *((s32 *) (((u8 *) arg0) + 8)) = arg2; *((s32 *) (((u8 *) arg0) + 0)) = 1; } while (0);
  *((s32 *) (((u8 *) arg0) + 4)) = arg1;
}
s32 func_0019D6F0_x0019D720(s32) __asm__("func_0019D6F0");
void func_0019D720_x0019D720(s32 arg0, s32 arg1) __asm__("func_0019D720");
void func_0019D720_x0019D720(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg0 > 0)
  {
    var_s1 = arg1;
    var_s0 = arg0;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0x10;
      var_s0 -= 1;
      func_0019D6F0_x0019D720(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
s32 func_0019D770(s32 *arg0) {
    return *arg0 == 0;
}
s32 func_0019D780(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = func_0019D7C8();
    if ((var_v0 != 0) && ((temp_v0 = *(s32 *)((u8 *)arg0 + 0xC), (temp_v0 == 0x6B)) || (var_v0 = 0, ((temp_v0 < 0x6E) == 0)))) {
        var_v0 = 1;
    }
    return var_v0;
}
typedef unsigned char Uint8_x0019D7C8;
typedef signed int Sint32_x0019D7C8;
typedef Sint32_x0019D7C8 Bool_x0019D7C8;
typedef struct SFH_OBJ_x0019D7C8 *SFH_x0019D7C8;
typedef struct SFH_OBJ_x0019D7C8 {
        Sint32_x0019D7C8 stat;
        Uint8_x0019D7C8 *hdr;
        Sint32_x0019D7C8 size;
        Sint32_x0019D7C8 ver;
} SFH_OBJ_x0019D7C8;
Bool_x0019D7C8 func_0019D7C8_x0019D7C8(SFH_x0019D7C8 sfh) __asm__("func_0019D7C8");
/* sfh_IsValid: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D7C8 func_0019D7C8_x0019D7C8(SFH_x0019D7C8 sfh)
{
        Bool_x0019D7C8 ret;
        switch (sfh->stat) {
        case (-1):
        case 0:
        case 1:
                ret = 0;
                break;
        default:
                ret = 1;
                break;
        }
        return ret;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019D7F0);
typedef unsigned char Uint8_x0019D8E0;
typedef unsigned int Uint32_x0019D8E0;
typedef signed int Sint32_x0019D8E0;
typedef Sint32_x0019D8E0 Bool_x0019D8E0;
typedef struct SFH_OBJ_x0019D8E0 *SFH_x0019D8E0;
typedef struct SFH_OBJ_x0019D8E0 {
        Sint32_x0019D8E0 stat;
        Uint8_x0019D8E0 *hdr;
        Sint32_x0019D8E0 size;
        Sint32_x0019D8E0 ver;
} SFH_OBJ_x0019D8E0;
typedef struct {
        Uint8_x0019D8E0 pad0[0x18];
        Uint8_x0019D8E0 id;
        Uint8_x0019D8E0 codec;
        Uint8_x0019D8E0 aud_layer;
        Uint8_x0019D8E0 aud_chnum;
        Uint8_x0019D8E0 aud_smphz[4];
        Uint8_x0019D8E0 ftr_flag;
        Uint8_x0019D8E0 ftr_coltype;
        Uint8_x0019D8E0 ftr_pictype;
        Uint8_x0019D8E0 ftr_fixflg;
        Uint8_x0019D8E0 ftr_expand;
        Uint8_x0019D8E0 ftr_gopn;
        Uint8_x0019D8E0 ftr_gopm;
        Uint8_x0019D8E0 ftr_fxtype;
        Uint8_x0019D8E0 pad28[0x18];
} SFH_ELEM_x0019D8E0;
Bool_x0019D8E0 sfh_IsAnlyOk_x0019D8E0(SFH_x0019D8E0 sfh) __asm__("func_0019D780");
SFH_ELEM_x0019D8E0 *sfh_SearchElem_x0019D8E0(Uint8_x0019D8E0 *hdr, Uint32_x0019D8E0 id) __asm__("func_0019DA20");
Bool_x0019D8E0 func_0019D8E0_x0019D8E0(SFH_x0019D8E0 sfh, Uint8_x0019D8E0 id, Sint32_x0019D8E0 *flag) __asm__("func_0019D8E0");
/* SFH_IsExistStmId: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D8E0 func_0019D8E0_x0019D8E0(SFH_x0019D8E0 sfh, Uint8_x0019D8E0 id, Sint32_x0019D8E0 *flag)
{
        Uint8_x0019D8E0 *hdr;
        *flag = 0;
        hdr = sfh->hdr;
        if (!sfh_IsAnlyOk_x0019D8E0(sfh)) {
                return 0;
        }
        if (sfh_SearchElem_x0019D8E0(hdr, id) != 0) {
                *flag = 1;
        } else {
                *flag = 0;
        }
        return 1;
}
typedef unsigned char Uint8_x0019D950;
typedef unsigned int Uint32_x0019D950;
typedef signed int Sint32_x0019D950;
typedef Sint32_x0019D950 Bool_x0019D950;
typedef struct SFH_OBJ_x0019D950 *SFH_x0019D950;
typedef struct SFH_OBJ_x0019D950 {
        Sint32_x0019D950 stat;
        Uint8_x0019D950 *hdr;
        Sint32_x0019D950 size;
        Sint32_x0019D950 ver;
} SFH_OBJ_x0019D950;
typedef struct {
        Uint8_x0019D950 pad0[0x18];
        Uint8_x0019D950 id;
        Uint8_x0019D950 codec;
        Uint8_x0019D950 aud_layer;
        Uint8_x0019D950 aud_chnum;
        Uint8_x0019D950 aud_smphz[4];
        Uint8_x0019D950 ftr_flag;
        Uint8_x0019D950 ftr_coltype;
        Uint8_x0019D950 ftr_pictype;
        Uint8_x0019D950 ftr_fixflg;
        Uint8_x0019D950 ftr_expand;
        Uint8_x0019D950 ftr_gopn;
        Uint8_x0019D950 ftr_gopm;
        Uint8_x0019D950 ftr_fxtype;
        Uint8_x0019D950 pad28[0x18];
} SFH_ELEM_x0019D950;
SFH_ELEM_x0019D950 *sfh_GetElem_x0019D950(SFH_x0019D950 sfh, Uint32_x0019D950 id) __asm__("func_0019E240");
Uint32_x0019D950 sfh_GetStmType_x0019D950(Uint32_x0019D950 id) __asm__("func_0019EAC0");
Bool_x0019D950 sfh_IsEffFtrAud_x0019D950(Uint32_x0019D950 id, SFH_ELEM_x0019D950 *elem) __asm__("func_0019EA40");
Bool_x0019D950 sfh_IsEffFtrVid_x0019D950(Uint32_x0019D950 id, SFH_ELEM_x0019D950 *elem) __asm__("func_0019EA80");
Bool_x0019D950 func_0019D950_x0019D950(SFH_x0019D950 sfh, Uint8_x0019D950 id, Sint32_x0019D950 *flag) __asm__("func_0019D950");
/* SFH_IsEffFtrInf: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D950 func_0019D950_x0019D950(SFH_x0019D950 sfh, Uint8_x0019D950 id, Sint32_x0019D950 *flag)
{
        SFH_ELEM_x0019D950 *elem;
        Sint32_x0019D950 ver = sfh->ver;
        Uint32_x0019D950 sid;
        if (ver < 110) {
                return 0;
        }
        sid = id;
        switch (sfh_GetStmType_x0019D950(sid)) {
        case 0xC0:
                elem = sfh_GetElem_x0019D950(sfh, sid);
                if (elem == 0) {
                        return 0;
                }
                *flag = sfh_IsEffFtrAud_x0019D950(sid, elem);
                break;
        case 0xE0:
                elem = sfh_GetElem_x0019D950(sfh, sid);
                if (elem == 0) {
                        return 0;
                }
                *flag = sfh_IsEffFtrVid_x0019D950(sid, elem);
                break;
        default:
                return 0;
        }
        return 1;
}
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) __asm__("func_0019DA20");
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 var_v0;
    u8 *var_a3;
    u8 *var_v1;

    var_v1 = arg0 + 0x180;
    var_a3 = NULL;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
    var_a2 = 0;
    goto loop_4;
block_2:
    if (var_a2 >= 0x1A) {
        goto block_8;
    }
    var_v1 = arg0 + (var_a2 << 6) + 0x180;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
loop_4:
    if (var_v0 == arg1) {
        goto block_6;
    }
    var_a2 += 1;
    goto block_2;
block_6:
    var_a3 = var_v1;
block_8:
    return var_a3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DA68);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DAD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DB48);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DBD8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DC28);
s32 func_0019D780_x0019DCF8() __asm__("func_0019D780");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1) __asm__("func_0019DCF8");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1)
{
  s32 *temp_s0;
  s32 var_v0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DCF8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *temp_s0;
    return var_v0;
  }
}
s32 func_0019D780_x0019DD40() __asm__("func_0019D780");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1) __asm__("func_0019DD40");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD40();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 4)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DD88() __asm__("func_0019D780");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1) __asm__("func_0019DD88");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD88();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((s16 *) (((u8 *) temp_s0) + 8)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DDD0() __asm__("func_0019D780");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1) __asm__("func_0019DDD0");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DDD0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019DE78);
s32 func_0019D780_x0019DF00() __asm__("func_0019D780");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1) __asm__("func_0019DF00");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF00();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*temp_s0);
    return var_v0;
  }
}
s32 func_0019D780_x0019DF48() __asm__("func_0019D780");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1) __asm__("func_0019DF48");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF48();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 1)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DF90() __asm__("func_0019D780");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1) __asm__("func_0019DF90");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1)
{
  s32 *new_var;
  s32 var_v0;
  u8 *temp_s0;
  new_var = &(*((s32 *) (((u8 *) arg0) + 4)));
  temp_s0 = (*new_var) + 0xB0;
  var_v0 = func_0019D780_x0019DF90();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 2)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DFD8() __asm__("func_0019D780");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1) __asm__("func_0019DFD8");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DFD8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 3)));
    return var_v0;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E020);
s32 func_0019D780_x0019E088() __asm__("func_0019D780");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1) __asm__("func_0019E088");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E088();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 8));
    return var_v0;
  }
}
s32 func_0019D780_x0019E0D0() __asm__("func_0019D780");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1) __asm__("func_0019E0D0");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E0D0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
s32 func_0019D780_x0019E118() __asm__("func_0019D780");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1) __asm__("func_0019E118");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E118();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    if (1)
    {
      *arg1 = *((s32 *) (((u8 *) temp_s0) + 0x10));
      return var_v0;
    }
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E160);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E1D0);
s32 func_0019D780_x0019E240() __asm__("func_0019D780");
s32 func_0019DA20_x0019E240(s32, s32) __asm__("func_0019DA20");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) __asm__("func_0019E240");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    if (func_0019D780_x0019E240() != 0) {
        func_0019DA20_x0019E240(temp_s1, arg1);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E298);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E300);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E380);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E3E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E450);
void *func_0019E240_x0019E4B8(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E4B8(s32) __asm__("func_0019EAC0");
s32 func_0019E4B8_x0019E4B8(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E4B8");
s32 func_0019E4B8_x0019E4B8(s32 arg0, s32 arg1, s32 *arg2)
{
    u8 *temp;
    u16 v;
    s32 c;
    c = arg1 & 0xFF;
    temp = func_0019E240_x0019E4B8(arg0, c);
    if (temp == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E4B8(c) != 0xE0) {
        return 0;
    }
    v = *(u16 *)(temp + 0x1A);
    *arg2 = (v == 0xFFFF) ? 0 : v;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E528);
s32 func_0019E240_x0019E5D0(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E5D0(s32) __asm__("func_0019EAC0");
s32 func_0019E9D0_x0019E5D0(s32) __asm__("func_0019E9D0");
s32 func_0019E5D0_x0019E5D0(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E5D0");
s32 func_0019E5D0_x0019E5D0(s32 arg0, s32 arg1, s32 *arg2)
{
  u8 *p;
  u8 b;
  b = arg1;
  p = (u8 *) func_0019E240_x0019E5D0(arg0, b);
  if (p == 0)
  {
    return 0;
  }
  if (func_0019EAC0_x0019E5D0(b) != 0xE0)
  {
    return 0;
  }
  *arg2 = func_0019E9D0_x0019E5D0(p[0x1F]);
  return 1;
}
void * func_0019E240_x0019E640() __asm__("func_0019E240");
void * func_0019EA80_x0019E640() __asm__("func_0019EA80");
u8 *func_0019E640_x0019E640(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E640");
u8 *func_0019E640_x0019E640(s32 arg0, s32 arg1, s32 *arg2)
{
  void *new_var4;
  u8 *var_v0;
  void *new_var3;
  void *new_var;
  void *new_var2;
  s32 temp_s0;
  u8 *temp_s1;
  temp_s0 = arg1 & 0xFF;
  new_var2 = func_0019E240_x0019E640(arg0, temp_s0);
  var_v0 = new_var2;
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) 0))
  {
    new_var4 = func_0019EA80_x0019E640(temp_s0, temp_s1);
    new_var3 = new_var4;
    var_v0 = (new_var = new_var3);
 do { if (var_v0 != ((void *) 0)) { var_v0 = (u8 *) 1; temp_s1 = (u8 *) temp_s1; new_var = temp_s1; *arg2 = (s32) (*((u8 *) (new_var + 0x21))); return var_v0; } } while (0);
  }
}
void * func_0019E240_x0019E6A8() __asm__("func_0019E240");
void * func_0019EA80_x0019E6A8() __asm__("func_0019EA80");
u8 *func_0019E6A8_x0019E6A8(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E6A8");
u8 *func_0019E6A8_x0019E6A8(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  u8 *var_v0;
  temp_s0 = arg1 & 0xFF;
  var_v0 = func_0019E240_x0019E6A8(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) 0))
  {
    if (temp_s1)
    {
      var_v0 = func_0019EA80_x0019E6A8(temp_s0, temp_s1);
    }
    else
    {
      var_v0 = func_0019EA80_x0019E6A8(temp_s0, temp_s1);
    }
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (s32) (*((u8 *) (((u8 *) temp_s1) + 0x22)));
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E710() __asm__("func_0019E240");
void * func_0019EA80_x0019E710() __asm__("func_0019EA80");
u8 *func_0019E710_x0019E710(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E710");
u8 *func_0019E710_x0019E710(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  u8 *var_v0;
  int new_var;
  new_var = 0;
  temp_s0 = arg1;
  temp_s0 = temp_s0 & 0xFF;
  var_v0 = (temp_s1 = func_0019E240_x0019E710(arg0, temp_s0));
  if (temp_s1 != ((void *) new_var))
  {
    var_v0 = func_0019EA80_x0019E710(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (*((u8 *) (((u8 *) temp_s1) + 0x23))) & 1;
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E780() __asm__("func_0019E240");
void * func_0019EA80_x0019E780() __asm__("func_0019EA80");
u8 *func_0019E780_x0019E780(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E780");
u8 *func_0019E780_x0019E780(s32 arg0, s32 arg1, s32 *arg2)
{
  u8 *new_var;
  int new_var3;
  u8 *new_var2;
  s32 temp_s0;
  u8 *var_v0;
  u8 *temp_s1;
  temp_s0 = arg1 & 0xFF;
  var_v0 = func_0019E240_x0019E780(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != 0)
  {
    ;
    new_var3 = 0;
    if (func_0019EA80_x0019E780(temp_s0, temp_s1) != ((void *) 0))
    {
      new_var2 = (u8 *) temp_s1;
      ;
      *arg2 = (temp_s0 = ((*(new_var = &(*((u8 *) (new_var2 + 0x23))))) & 0x10) != new_var3);
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E7F0() __asm__("func_0019E240");
void * func_0019EA80_x0019E7F0() __asm__("func_0019EA80");
u8 *func_0019E7F0_x0019E7F0(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E7F0");
u8 *func_0019E7F0_x0019E7F0(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  void *new_var;
  u8 *var_v0;
  temp_s0 = 0xFF & arg1;
  new_var = func_0019E240_x0019E7F0(arg0, temp_s0);
  var_v0 = new_var;
  temp_s1 = var_v0;
  if (var_v0 != ((void *) 0))
  {
    var_v0 = func_0019EA80_x0019E7F0(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (s32) (*((u8 *) (((u8 *) temp_s1) + 0x24)));
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E858() __asm__("func_0019E240");
void * func_0019EA80_x0019E858() __asm__("func_0019EA80");
u8 *func_0019E858_x0019E858(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E858");
u8 *func_0019E858_x0019E858(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var;
  s32 new_var2;
  s32 temp_s0;
  u8 temp_v0;
  u8 *temp_s1;
  u8 *var_v0;
  temp_s0 = arg1 & 0xFF;
  new_var = 0;
  var_v0 = func_0019E240_x0019E858(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) new_var))
  {
    var_v0 = func_0019EA80_x0019E858(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      temp_v0 = *((u8 *) (((u8 *) temp_s1) + 0x25));
      *arg2 = (s32) temp_v0;
      new_var2 = (s32) temp_v0;
      if (new_var2 >= 0x40)
      {
        *arg2 = -1;
      }
      var_v0 = (u8 *) 1;
    }
  }
  temp_s1 = var_v0;
  return temp_s1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E8D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E948);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019E9D0);
typedef unsigned char Uint8_x0019EA40;
typedef unsigned int Uint32_x0019EA40;
typedef signed int Sint32_x0019EA40;
typedef Sint32_x0019EA40 Bool_x0019EA40;
typedef struct {
        Uint8_x0019EA40 pad0[0x18];
        Uint8_x0019EA40 id;
        Uint8_x0019EA40 codec;
        Uint8_x0019EA40 aud_layer;
        Uint8_x0019EA40 aud_chnum;
        Uint8_x0019EA40 aud_smphz[4];
        Uint8_x0019EA40 ftr_flag;
        Uint8_x0019EA40 ftr_coltype;
        Uint8_x0019EA40 ftr_pictype;
        Uint8_x0019EA40 ftr_fixflg;
        Uint8_x0019EA40 ftr_expand;
        Uint8_x0019EA40 ftr_gopn;
        Uint8_x0019EA40 ftr_gopm;
        Uint8_x0019EA40 ftr_fxtype;
        Uint8_x0019EA40 pad28[0x18];
} SFH_ELEM_x0019EA40;
Uint32_x0019EA40 sfh_GetStmType_x0019EA40(Uint32_x0019EA40 id) __asm__("func_0019EAC0");
Bool_x0019EA40 func_0019EA40_x0019EA40(Uint32_x0019EA40 id, SFH_ELEM_x0019EA40 *elem) __asm__("func_0019EA40");
/* sfh_IsEffFtrAud: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019EA40 func_0019EA40_x0019EA40(Uint32_x0019EA40 id, SFH_ELEM_x0019EA40 *elem)
{
        Uint32_x0019EA40 flg;
        if (sfh_GetStmType_x0019EA40(id) != 0xC0) {
                return 0;
        }
        flg = elem->ftr_flag;
        if (flg > 1) {
                return 0;
        } else if (flg == 0) {
                return 0;
        }
        return 1;
}
typedef unsigned char Uint8_x0019EA80;
typedef unsigned int Uint32_x0019EA80;
typedef signed int Sint32_x0019EA80;
typedef Sint32_x0019EA80 Bool_x0019EA80;
typedef struct {
        Uint8_x0019EA80 pad0[0x18];
        Uint8_x0019EA80 id;
        Uint8_x0019EA80 codec;
        Uint8_x0019EA80 aud_layer;
        Uint8_x0019EA80 aud_chnum;
        Uint8_x0019EA80 aud_smphz[4];
        Uint8_x0019EA80 ftr_flag;
        Uint8_x0019EA80 ftr_coltype;
        Uint8_x0019EA80 ftr_pictype;
        Uint8_x0019EA80 ftr_fixflg;
        Uint8_x0019EA80 ftr_expand;
        Uint8_x0019EA80 ftr_gopn;
        Uint8_x0019EA80 ftr_gopm;
        Uint8_x0019EA80 ftr_fxtype;
        Uint8_x0019EA80 pad28[0x18];
} SFH_ELEM_x0019EA80;
Uint32_x0019EA80 sfh_GetStmType_x0019EA80(Uint32_x0019EA80 id) __asm__("func_0019EAC0");
Bool_x0019EA80 func_0019EA80_x0019EA80(Uint32_x0019EA80 id, SFH_ELEM_x0019EA80 *elem) __asm__("func_0019EA80");
/* sfh_IsEffFtrVid: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019EA80 func_0019EA80_x0019EA80(Uint32_x0019EA80 id, SFH_ELEM_x0019EA80 *elem)
{
        Uint32_x0019EA80 flg;
        if (sfh_GetStmType_x0019EA80(id) != 0xE0) {
                return 0;
        }
        flg = elem->ftr_flag;
        if (flg > 1) {
                return 0;
        } else if (flg == 0) {
                return 0;
        }
        return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EAC0);
void func_0019EB08(void) {
    func_0019EB20();
}
s32 memset_x0019EB20(s32 *, s32, s32) __asm__("memset");
extern s32 D_00426B50_x0019EB20 __asm__("D_00426B50");
void func_0019EB20_x0019EB20(void) __asm__("func_0019EB20");
void func_0019EB20_x0019EB20(void) {
    memset_x0019EB20(&D_00426B50_x0019EB20, 0, 0xC8);
    *(s32 *)((u8 *)(&D_00426B50_x0019EB20) + 4) = 8;
}
void func_0019EB60(void) {

}
s32 *func_0019EBC0_x0019EB68() __asm__("func_0019EBC0");
s32 func_0019EC10_x0019EB68(s32 *) __asm__("func_0019EC10");
extern s32 D_00426B50_x0019EB68 __asm__("D_00426B50");
s32 *func_0019EB68_x0019EB68(void) __asm__("func_0019EB68");
s32 *func_0019EB68_x0019EB68(void)
{
  s32 *new_var;
  s32 *temp_v0;
  temp_v0 = func_0019EBC0_x0019EB68();
  if (temp_v0 != ((void *) 0))
  {
    func_0019EC10_x0019EB68(temp_v0);
    D_00426B50_x0019EB68 += 1;
    *temp_v0 = 1;
  }
  if (temp_v0)
  {
    return temp_v0;
  }
  else
  {
    new_var = temp_v0;
    return new_var;
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EBC0);
void func_0019EC10_x0019EC10(u8 *arg0) __asm__("func_0019EC10");
void func_0019EC10_x0019EC10(u8 *arg0)
{
  u8 *temp_v0;
  u8 *temp_v1;
  int new_var;
  temp_v1 = arg0 + 0x14;
  temp_v0 = arg0 + 8;
  new_var = 0x1F;
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0x64;
  *((s32 *) (((u8 *) temp_v0) + 4)) = new_var;
  temp_v0 = ((u8 *) arg0) + 8;
  *((s32 *) temp_v0) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 1;
  *((s8 *) (((u8 *) temp_v1) + 1)) = 0x40;
  *((s8 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s8 *) (((u8 *) temp_v1) + 2)) = -0x80;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019EC50);
s32 func_00172110_x0019EC78(s32, s32, s32, s32) __asm__("func_00172110");
void func_0019EC78_x0019EC78(s32 *arg0, s32 arg1, s32 arg2) __asm__("func_0019EC78");
void func_0019EC78_x0019EC78(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = arg0 + 2;
    func_00172110_x0019EC78(temp_v0[0], temp_v0[1], temp_v0[2], arg2);
    arg0[1] = 0;
}
s32 func_001723E0_x0019ECB8(s32, u8, u8, u8) __asm__("func_001723E0");
s32 func_0019ECB8_x0019ECB8(u8 *a0, s32 a1, s32 a2) __asm__("func_0019ECB8");
s32 func_0019ECB8_x0019ECB8(u8 *a0, s32 a1, s32 a2) {
    return func_001723E0_x0019ECB8(a2, a0[0x14], a0[0x15], a0[0x16]);
}
s32 func_0019ECE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019ECE8");
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *new_var;
  int new_var2;
  u8 *temp_v0;
  temp_v0 = arg0 + 8;
  new_var2 = 1;
  *((s32 *) (((u8 *) temp_v0) + 8)) = arg2;
 do { *((s32 *) (((u8 *) arg0) + 8)) = arg3; ; *((s32 *) (((u8 *) temp_v0) + 4)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = new_var2; } while (0);
}
void func_0019ED08(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 8;
    *arg3 = *(s32 *)((u8 *)arg0 + 8);
    *arg1 = *(s32 *)((u8 *)temp_a0 + 4);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 8);
}
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) __asm__("func_0019ED28");
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3)
{
  u8 *temp_a0;
 do { temp_a0 = arg0 + 0x14; *((s8 *) (((u8 *) temp_a0) + 2)) = arg3; *((s8 *) (((u8 *) arg0) + 0x14)) = arg1; } while (0);
  *((s8 *) (((u8 *) temp_a0) + 1)) = arg2;
}
void func_0019ED40(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x14;
    *arg1 = *(u8 *)((u8 *)arg0 + 0x14);
    *arg2 = *(u8 *)((u8 *)temp_a0 + 1);
    *arg3 = *(u8 *)((u8 *)temp_a0 + 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019ED60);
void func_0019ED80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
void func_0019EDA8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
