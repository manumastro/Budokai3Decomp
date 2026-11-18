#include "common.h"

s32 func_00112700(s32);                         /* extern */
s32 func_00165C68(s32);                         /* extern */
extern s32 D_00422784;
extern s32 D_0042278C;
extern s32 D_00422A18;

s32 func_001660C0();                            /* extern */

s32 func_00165F40();                            /* extern */
extern s32 D_0042277C;

s32 func_0016F148(s32);                             /* extern */

s32 func_00128040(s32, s32, s32);           /* extern */
s32 func_0016F0B0(s32, s32);                    /* extern */

extern s32 D_00421998;
extern s32 D_004219A0;

extern s32 D_0041D960;
extern s32 D_0041D968;

s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0041D478;
extern s32 D_0041D480;

s32 func_00170118();                            /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s32 D_0041D438;

INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016D9F8);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016DA38);
void func_0016DA78(void) {
    D_0041D438 = 0;
}
void func_0016DA88(void) {
    D_0041D438 = 0;
}
void func_0016DA98(void) {
    D_0041D438 += 1;
}
void func_0016DAB0(void) {
    D_0041D438 -= 1;
}
extern volatile s32 D_0041D440_x0016DAC8 __asm__("D_0041D440");
void func_0016DAC8_x0016DAC8(void) __asm__("func_0016DAC8");
void func_0016DAC8_x0016DAC8(void) {
    D_0041D440_x0016DAC8 = 0;
}
void func_0016DAD8(void) {
    func_0016FF40();
}
void func_0016DAF0(void) {
    func_0016FF58();
}
void func_0016DB08(void) {
    func_00170118();
}
s32 func_0016DB08_x0016DB20(s32 *) __asm__("func_0016DB08");
extern s32 D_00464D38_x0016DB20 __asm__("D_00464D38");
void func_0016DB20_x0016DB20(void) __asm__("func_0016DB20");
void func_0016DB20_x0016DB20(void) {
    func_0016DB08_x0016DB20(&D_00464D38_x0016DB20);
}
typedef unsigned int size_t_x0016DB40;
typedef unsigned char Uint8_x0016DB40;
typedef char Sint8_x0016DB40;
typedef unsigned short Uint16_x0016DB40;
typedef unsigned int Uint32_x0016DB40;
typedef signed int Sint32_x0016DB40;
typedef struct _UUID_x0016DB40 {
    Uint32_x0016DB40 Data1;
    Uint16_x0016DB40 Data2;
    Uint16_x0016DB40 Data3;
    Uint8_x0016DB40 Data4[8];
} UUID_x0016DB40;
typedef struct {
        Sint8_x0016DB40 *data;
        Sint32_x0016DB40 len;
} SJCK_x0016DB40;
typedef struct {
        struct _sj_vtbl_x0016DB40 *vtbl;
} SJ_OBJ_x0016DB40;
typedef SJ_OBJ_x0016DB40 *SJ_x0016DB40;
typedef struct _sj_vtbl_x0016DB40 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DB40 sj);
        UUID_x0016DB40 *(*GetUuid)(SJ_x0016DB40 sj);
        void (*Reset)(SJ_x0016DB40 sj);
        void (*GetChunk)(SJ_x0016DB40 sj, Sint32_x0016DB40 id, Sint32_x0016DB40 nbyte, SJCK_x0016DB40 *ck);
        void (*UngetChunk)(SJ_x0016DB40 sj, Sint32_x0016DB40 id, SJCK_x0016DB40 *ck);
        void (*PutChunk)(SJ_x0016DB40 sj, Sint32_x0016DB40 id, SJCK_x0016DB40 *ck);
        Sint32_x0016DB40 (*GetNumData)(SJ_x0016DB40 sj, Sint32_x0016DB40 id);
        Sint32_x0016DB40 (*IsGetChunk)(SJ_x0016DB40 sj, Sint32_x0016DB40 id, Sint32_x0016DB40 nbyte, Sint32_x0016DB40 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DB40 sj,
                                        void (*func)(void *obj, Sint32_x0016DB40 ecode), void *obj);
} SJ_IF_x0016DB40;
void* memset_x0016DB40(void* s, int c, size_t_x0016DB40 n) __asm__("memset");
typedef struct {
    SJ_OBJ_x0016DB40 sj;
    Sint32_x0016DB40 used;
    UUID_x0016DB40* uuid;
    Sint32_x0016DB40 unkC;
    Sint32_x0016DB40 unk10;
    Sint8_x0016DB40* buf_ptr;
    Sint32_x0016DB40 bsize;
    void (*err_func)(void* obj, Sint32_x0016DB40 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DB40;
typedef SJMEM_OBJ_x0016DB40* SJMEM_x0016DB40;
extern void SJMEM_EntryErrFunc_x0016DB40(SJMEM_x0016DB40 sjmem, void (*func)(void* obj, Sint32_x0016DB40 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
extern Sint32_x0016DB40 sjmem_init_cnt_x0016DB40 __asm__("D_0041D478");
extern SJMEM_OBJ_x0016DB40 sjmem_obj_x0016DB40[32] __asm__("D_0041D480");
void SJMEM_EntryErrFunc_x0016DB40(SJMEM_x0016DB40 sjmem, void (*func)(void* obj, Sint32_x0016DB40 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void func_0016DB40_x0016DB40() __asm__("func_0016DB40");
/* SJMEM_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016DB40_x0016DB40() {
    if (sjmem_init_cnt_x0016DB40 == 0) {
        memset_x0016DB40(sjmem_obj_x0016DB40, 0, sizeof(sjmem_obj_x0016DB40));
    }
    sjmem_init_cnt_x0016DB40 += 1;
}
void func_0016DB90(void) {
    s32 temp_v0;

    temp_v0 = D_0041D478 - 1;
    D_0041D478 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_0041D480, 0, 0x480);
    }
}
typedef unsigned char Uint8_x0016DBE0;
typedef char Sint8_x0016DBE0;
typedef unsigned short Uint16_x0016DBE0;
typedef unsigned int Uint32_x0016DBE0;
typedef signed int Sint32_x0016DBE0;
typedef struct _UUID_x0016DBE0 {
    Uint32_x0016DBE0 Data1;
    Uint16_x0016DBE0 Data2;
    Uint16_x0016DBE0 Data3;
    Uint8_x0016DBE0 Data4[8];
} UUID_x0016DBE0;
typedef struct {
        Sint8_x0016DBE0 *data;
        Sint32_x0016DBE0 len;
} SJCK_x0016DBE0;
typedef struct {
        struct _sj_vtbl_x0016DBE0 *vtbl;
} SJ_OBJ_x0016DBE0;
typedef SJ_OBJ_x0016DBE0 *SJ_x0016DBE0;
typedef struct _sj_vtbl_x0016DBE0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DBE0 sj);
        UUID_x0016DBE0 *(*GetUuid)(SJ_x0016DBE0 sj);
        void (*Reset)(SJ_x0016DBE0 sj);
        void (*GetChunk)(SJ_x0016DBE0 sj, Sint32_x0016DBE0 id, Sint32_x0016DBE0 nbyte, SJCK_x0016DBE0 *ck);
        void (*UngetChunk)(SJ_x0016DBE0 sj, Sint32_x0016DBE0 id, SJCK_x0016DBE0 *ck);
        void (*PutChunk)(SJ_x0016DBE0 sj, Sint32_x0016DBE0 id, SJCK_x0016DBE0 *ck);
        Sint32_x0016DBE0 (*GetNumData)(SJ_x0016DBE0 sj, Sint32_x0016DBE0 id);
        Sint32_x0016DBE0 (*IsGetChunk)(SJ_x0016DBE0 sj, Sint32_x0016DBE0 id, Sint32_x0016DBE0 nbyte, Sint32_x0016DBE0 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DBE0 sj,
                                        void (*func)(void *obj, Sint32_x0016DBE0 ecode), void *obj);
} SJ_IF_x0016DBE0;
typedef struct {
    SJ_OBJ_x0016DBE0 sj;
    Sint32_x0016DBE0 used;
    UUID_x0016DBE0* uuid;
    Sint32_x0016DBE0 unkC;
    Sint32_x0016DBE0 unk10;
    Sint8_x0016DBE0* buf_ptr;
    Sint32_x0016DBE0 bsize;
    void (*err_func)(void* obj, Sint32_x0016DBE0 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DBE0;
typedef SJMEM_OBJ_x0016DBE0* SJMEM_x0016DBE0;
void SJMEM_Reset_x0016DBE0(SJMEM_x0016DBE0 sjmem) __asm__("func_0016DCF8");
void SJMEM_Reset_x0016DBE0(SJMEM_x0016DBE0 sjmem) __asm__("func_0016DCF8");
extern void SJMEM_EntryErrFunc_x0016DBE0(SJMEM_x0016DBE0 sjmem, void (*func)(void* obj, Sint32_x0016DBE0 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
extern SJ_IF_x0016DBE0 sjmem_vtbl_x0016DBE0 __asm__("D_0041D448");
extern SJMEM_OBJ_x0016DBE0 sjmem_obj_x0016DBE0[32] __asm__("D_0041D480");
extern const UUID_x0016DBE0 sjmem_uuid_x0016DBE0 __asm__("D_00464D28");
void SJMEM_Error_x0016DBE0(void* obj, Sint32_x0016DBE0 ecode) __asm__("func_0016DB20");
void SJMEM_EntryErrFunc_x0016DBE0(SJMEM_x0016DBE0 sjmem, void (*func)(void* obj, Sint32_x0016DBE0 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void SJMEM_Reset_x0016DBE0(SJMEM_x0016DBE0 sjmem) __asm__("func_0016DCF8");
SJ_x0016DBE0 func_0016DBE0_x0016DBE0(Sint8_x0016DBE0* data, Sint32_x0016DBE0 bsize) __asm__("func_0016DBE0");
/* SJMEM_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
SJ_x0016DBE0 func_0016DBE0_x0016DBE0(Sint8_x0016DBE0* data, Sint32_x0016DBE0 bsize) {
    SJMEM_x0016DBE0 sjmem;
    Sint32_x0016DBE0 i;
    for (i = 0; i < 32; i++) {
        if (sjmem_obj_x0016DBE0[i].used == 0) {
            break;
        }
    }
    if (i == 32) {
        return 0;
    }
    sjmem = &sjmem_obj_x0016DBE0[i];
    sjmem->used = 1;
    sjmem->sj.vtbl = &sjmem_vtbl_x0016DBE0;
    sjmem->buf_ptr = data;
    sjmem->bsize = bsize;
    sjmem->uuid = &sjmem_uuid_x0016DBE0;
    sjmem->err_func = SJMEM_Error_x0016DBE0;
    sjmem->err_obj = sjmem;
    SJMEM_Reset_x0016DBE0(sjmem);
    return sjmem;
}
typedef unsigned char u8_x0016DCA8;
typedef unsigned int u32_x0016DCA8;
extern u32_x0016DCA8 memset_x0016DCA8(u32_x0016DCA8, u32_x0016DCA8, u32_x0016DCA8) __asm__("memset");
void func_0016DCA8_x0016DCA8(u32_x0016DCA8 arg0) __asm__("func_0016DCA8");
/* fn_80057B5C: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_80057B5C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0016DCA8_x0016DCA8(u32_x0016DCA8 arg0) {
    if (arg0 != 0) {
    memset_x0016DCA8(arg0, 0, 36);
    *(u32_x0016DCA8 *)((u8_x0016DCA8 *)arg0 + 4) = 0;
    }
}
s32 func_0016DCE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0016DCE8_x0016DCE8(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016DCE8");
void func_0016DCE8_x0016DCE8(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x1C)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x20)) = arg2;
}
void func_0016DCF8(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
}
s32 func_0016DD08(u8 *arg0, s32 arg1) {
    s32 (*temp_v0)(s32, s32);

    if (arg1 == 1) {
        return *(s32 *)((u8 *)arg0 + 0xC);
    }
    if (arg1 != 0) {
        temp_v0 = *(s32 (**)(s32, s32))((u8 *)arg0 + 0x1C);
        if (temp_v0 != NULL) {
            temp_v0(*(s32 *)((u8 *)arg0 + 0x20), -3);
        }
    }
    return 0;
}
typedef unsigned char Uint8_x0016DD50;
typedef char Sint8_x0016DD50;
typedef unsigned short Uint16_x0016DD50;
typedef unsigned int Uint32_x0016DD50;
typedef signed int Sint32_x0016DD50;
typedef struct _UUID_x0016DD50 {
    Uint32_x0016DD50 Data1;
    Uint16_x0016DD50 Data2;
    Uint16_x0016DD50 Data3;
    Uint8_x0016DD50 Data4[8];
} UUID_x0016DD50;
typedef struct {
        Sint8_x0016DD50 *data;
        Sint32_x0016DD50 len;
} SJCK_x0016DD50;
typedef struct {
        struct _sj_vtbl_x0016DD50 *vtbl;
} SJ_OBJ_x0016DD50;
typedef SJ_OBJ_x0016DD50 *SJ_x0016DD50;
typedef struct _sj_vtbl_x0016DD50 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DD50 sj);
        UUID_x0016DD50 *(*GetUuid)(SJ_x0016DD50 sj);
        void (*Reset)(SJ_x0016DD50 sj);
        void (*GetChunk)(SJ_x0016DD50 sj, Sint32_x0016DD50 id, Sint32_x0016DD50 nbyte, SJCK_x0016DD50 *ck);
        void (*UngetChunk)(SJ_x0016DD50 sj, Sint32_x0016DD50 id, SJCK_x0016DD50 *ck);
        void (*PutChunk)(SJ_x0016DD50 sj, Sint32_x0016DD50 id, SJCK_x0016DD50 *ck);
        Sint32_x0016DD50 (*GetNumData)(SJ_x0016DD50 sj, Sint32_x0016DD50 id);
        Sint32_x0016DD50 (*IsGetChunk)(SJ_x0016DD50 sj, Sint32_x0016DD50 id, Sint32_x0016DD50 nbyte, Sint32_x0016DD50 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DD50 sj,
                                        void (*func)(void *obj, Sint32_x0016DD50 ecode), void *obj);
} SJ_IF_x0016DD50;
void SJCRS_Lock_x0016DD50(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016DD50(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016DD50 sj;
    Sint32_x0016DD50 used;
    UUID_x0016DD50* uuid;
    Sint32_x0016DD50 unkC;
    Sint32_x0016DD50 unk10;
    Sint8_x0016DD50* buf_ptr;
    Sint32_x0016DD50 bsize;
    void (*err_func)(void* obj, Sint32_x0016DD50 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DD50;
typedef SJMEM_OBJ_x0016DD50* SJMEM_x0016DD50;
extern void SJMEM_EntryErrFunc_x0016DD50(SJMEM_x0016DD50 sjmem, void (*func)(void* obj, Sint32_x0016DD50 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void SJMEM_EntryErrFunc_x0016DD50(SJMEM_x0016DD50 sjmem, void (*func)(void* obj, Sint32_x0016DD50 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void func_0016DD50_x0016DD50(SJMEM_x0016DD50 sjmem, Sint32_x0016DD50 id, Sint32_x0016DD50 nbyte, SJCK_x0016DD50* ck) __asm__("func_0016DD50");
/* SJMEM_GetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016DD50_x0016DD50(SJMEM_x0016DD50 sjmem, Sint32_x0016DD50 id, Sint32_x0016DD50 nbyte, SJCK_x0016DD50* ck) {
    Sint32_x0016DD50 len;
    SJCRS_Lock_x0016DD50();
    if (id == 0) {
        ck->len = 0;
        ck->data = 0;
    } else if (id == 1) {
        len = sjmem->unkC;
        len = ((len) < (nbyte) ? (len) : (nbyte));
        ck->len = len;
        ck->data = sjmem->buf_ptr + sjmem->unk10;
        sjmem->unk10 += len;
        sjmem->unkC -= ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sjmem->err_func != 0) {
            sjmem->err_func(sjmem->err_obj, (-3));
        }
    }
    SJCRS_Unlock_x0016DD50();
}
typedef unsigned char Uint8_x0016DE10;
typedef char Sint8_x0016DE10;
typedef unsigned short Uint16_x0016DE10;
typedef unsigned int Uint32_x0016DE10;
typedef signed int Sint32_x0016DE10;
typedef struct _UUID_x0016DE10 {
    Uint32_x0016DE10 Data1;
    Uint16_x0016DE10 Data2;
    Uint16_x0016DE10 Data3;
    Uint8_x0016DE10 Data4[8];
} UUID_x0016DE10;
typedef struct {
        Sint8_x0016DE10 *data;
        Sint32_x0016DE10 len;
} SJCK_x0016DE10;
typedef struct {
        struct _sj_vtbl_x0016DE10 *vtbl;
} SJ_OBJ_x0016DE10;
typedef SJ_OBJ_x0016DE10 *SJ_x0016DE10;
typedef struct _sj_vtbl_x0016DE10 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DE10 sj);
        UUID_x0016DE10 *(*GetUuid)(SJ_x0016DE10 sj);
        void (*Reset)(SJ_x0016DE10 sj);
        void (*GetChunk)(SJ_x0016DE10 sj, Sint32_x0016DE10 id, Sint32_x0016DE10 nbyte, SJCK_x0016DE10 *ck);
        void (*UngetChunk)(SJ_x0016DE10 sj, Sint32_x0016DE10 id, SJCK_x0016DE10 *ck);
        void (*PutChunk)(SJ_x0016DE10 sj, Sint32_x0016DE10 id, SJCK_x0016DE10 *ck);
        Sint32_x0016DE10 (*GetNumData)(SJ_x0016DE10 sj, Sint32_x0016DE10 id);
        Sint32_x0016DE10 (*IsGetChunk)(SJ_x0016DE10 sj, Sint32_x0016DE10 id, Sint32_x0016DE10 nbyte, Sint32_x0016DE10 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DE10 sj,
                                        void (*func)(void *obj, Sint32_x0016DE10 ecode), void *obj);
} SJ_IF_x0016DE10;
void SJCRS_Lock_x0016DE10(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016DE10(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016DE10 sj;
    Sint32_x0016DE10 used;
    UUID_x0016DE10* uuid;
    Sint32_x0016DE10 unkC;
    Sint32_x0016DE10 unk10;
    Sint8_x0016DE10* buf_ptr;
    Sint32_x0016DE10 bsize;
    void (*err_func)(void* obj, Sint32_x0016DE10 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DE10;
typedef SJMEM_OBJ_x0016DE10* SJMEM_x0016DE10;
extern void SJMEM_EntryErrFunc_x0016DE10(SJMEM_x0016DE10 sjmem, void (*func)(void* obj, Sint32_x0016DE10 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void SJMEM_EntryErrFunc_x0016DE10(SJMEM_x0016DE10 sjmem, void (*func)(void* obj, Sint32_x0016DE10 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void func_0016DE10_x0016DE10(SJMEM_x0016DE10 sjmem, Sint32_x0016DE10 id, SJCK_x0016DE10* ck) __asm__("func_0016DE10");
/* SJMEM_PutChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016DE10_x0016DE10(SJMEM_x0016DE10 sjmem, Sint32_x0016DE10 id, SJCK_x0016DE10* ck) {
    if ((ck->len <= 0) || (ck->data == 0)) {
        return;
    }
    SJCRS_Lock_x0016DE10();
    if (id == 0) {
    } else if (id == 1) {
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sjmem->err_func != 0) {
            sjmem->err_func(sjmem->err_obj, (-3));
        }
    }
    SJCRS_Unlock_x0016DE10();
}
typedef unsigned char Uint8_x0016DEA8;
typedef char Sint8_x0016DEA8;
typedef unsigned short Uint16_x0016DEA8;
typedef unsigned int Uint32_x0016DEA8;
typedef signed int Sint32_x0016DEA8;
typedef struct _UUID_x0016DEA8 {
    Uint32_x0016DEA8 Data1;
    Uint16_x0016DEA8 Data2;
    Uint16_x0016DEA8 Data3;
    Uint8_x0016DEA8 Data4[8];
} UUID_x0016DEA8;
typedef struct {
        Sint8_x0016DEA8 *data;
        Sint32_x0016DEA8 len;
} SJCK_x0016DEA8;
typedef struct {
        struct _sj_vtbl_x0016DEA8 *vtbl;
} SJ_OBJ_x0016DEA8;
typedef SJ_OBJ_x0016DEA8 *SJ_x0016DEA8;
typedef struct _sj_vtbl_x0016DEA8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DEA8 sj);
        UUID_x0016DEA8 *(*GetUuid)(SJ_x0016DEA8 sj);
        void (*Reset)(SJ_x0016DEA8 sj);
        void (*GetChunk)(SJ_x0016DEA8 sj, Sint32_x0016DEA8 id, Sint32_x0016DEA8 nbyte, SJCK_x0016DEA8 *ck);
        void (*UngetChunk)(SJ_x0016DEA8 sj, Sint32_x0016DEA8 id, SJCK_x0016DEA8 *ck);
        void (*PutChunk)(SJ_x0016DEA8 sj, Sint32_x0016DEA8 id, SJCK_x0016DEA8 *ck);
        Sint32_x0016DEA8 (*GetNumData)(SJ_x0016DEA8 sj, Sint32_x0016DEA8 id);
        Sint32_x0016DEA8 (*IsGetChunk)(SJ_x0016DEA8 sj, Sint32_x0016DEA8 id, Sint32_x0016DEA8 nbyte, Sint32_x0016DEA8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DEA8 sj,
                                        void (*func)(void *obj, Sint32_x0016DEA8 ecode), void *obj);
} SJ_IF_x0016DEA8;
void SJCRS_Lock_x0016DEA8(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016DEA8(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016DEA8 sj;
    Sint32_x0016DEA8 used;
    UUID_x0016DEA8* uuid;
    Sint32_x0016DEA8 unkC;
    Sint32_x0016DEA8 unk10;
    Sint8_x0016DEA8* buf_ptr;
    Sint32_x0016DEA8 bsize;
    void (*err_func)(void* obj, Sint32_x0016DEA8 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DEA8;
typedef SJMEM_OBJ_x0016DEA8* SJMEM_x0016DEA8;
extern void SJMEM_EntryErrFunc_x0016DEA8(SJMEM_x0016DEA8 sjmem, void (*func)(void* obj, Sint32_x0016DEA8 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void SJMEM_EntryErrFunc_x0016DEA8(SJMEM_x0016DEA8 sjmem, void (*func)(void* obj, Sint32_x0016DEA8 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void func_0016DEA8_x0016DEA8(SJMEM_x0016DEA8 sjmem, Sint32_x0016DEA8 id, SJCK_x0016DEA8* ck) __asm__("func_0016DEA8");
/* SJMEM_UngetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016DEA8_x0016DEA8(SJMEM_x0016DEA8 sjmem, Sint32_x0016DEA8 id, SJCK_x0016DEA8* ck) {
    if ((ck->len <= 0) || (ck->data == 0)) {
        return;
    }
    SJCRS_Lock_x0016DEA8();
    if (id == 0) {
        if (sjmem->err_func != 0) {
            sjmem->err_func(sjmem->err_obj, (-3));
        }
    } else if (id == 1) {
        sjmem->unk10 = ((sjmem->unk10 - ck->len) < (0) ? (0) : (sjmem->unk10 - ck->len));
        sjmem->unkC = ((sjmem->bsize) < (sjmem->unkC + ck->len) ? (sjmem->bsize) : (sjmem->unkC + ck->len));
        if (sjmem->unk10 != (ck->data - sjmem->buf_ptr)) {
            if (sjmem->err_func != 0) {
                sjmem->err_func(sjmem->err_obj, (-3));
            }
        }
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sjmem->err_func != 0) {
            sjmem->err_func(sjmem->err_obj, (-3));
        }
    }
    SJCRS_Unlock_x0016DEA8();
}
typedef unsigned char Uint8_x0016DFA0;
typedef char Sint8_x0016DFA0;
typedef unsigned short Uint16_x0016DFA0;
typedef unsigned int Uint32_x0016DFA0;
typedef signed int Sint32_x0016DFA0;
typedef struct _UUID_x0016DFA0 {
    Uint32_x0016DFA0 Data1;
    Uint16_x0016DFA0 Data2;
    Uint16_x0016DFA0 Data3;
    Uint8_x0016DFA0 Data4[8];
} UUID_x0016DFA0;
typedef struct {
        Sint8_x0016DFA0 *data;
        Sint32_x0016DFA0 len;
} SJCK_x0016DFA0;
typedef struct {
        struct _sj_vtbl_x0016DFA0 *vtbl;
} SJ_OBJ_x0016DFA0;
typedef SJ_OBJ_x0016DFA0 *SJ_x0016DFA0;
typedef struct _sj_vtbl_x0016DFA0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016DFA0 sj);
        UUID_x0016DFA0 *(*GetUuid)(SJ_x0016DFA0 sj);
        void (*Reset)(SJ_x0016DFA0 sj);
        void (*GetChunk)(SJ_x0016DFA0 sj, Sint32_x0016DFA0 id, Sint32_x0016DFA0 nbyte, SJCK_x0016DFA0 *ck);
        void (*UngetChunk)(SJ_x0016DFA0 sj, Sint32_x0016DFA0 id, SJCK_x0016DFA0 *ck);
        void (*PutChunk)(SJ_x0016DFA0 sj, Sint32_x0016DFA0 id, SJCK_x0016DFA0 *ck);
        Sint32_x0016DFA0 (*GetNumData)(SJ_x0016DFA0 sj, Sint32_x0016DFA0 id);
        Sint32_x0016DFA0 (*IsGetChunk)(SJ_x0016DFA0 sj, Sint32_x0016DFA0 id, Sint32_x0016DFA0 nbyte, Sint32_x0016DFA0 *rbyte);
        void (*EntryErrFunc)(SJ_x0016DFA0 sj,
                                        void (*func)(void *obj, Sint32_x0016DFA0 ecode), void *obj);
} SJ_IF_x0016DFA0;
void SJCRS_Lock_x0016DFA0(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016DFA0(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016DFA0 sj;
    Sint32_x0016DFA0 used;
    UUID_x0016DFA0* uuid;
    Sint32_x0016DFA0 unkC;
    Sint32_x0016DFA0 unk10;
    Sint8_x0016DFA0* buf_ptr;
    Sint32_x0016DFA0 bsize;
    void (*err_func)(void* obj, Sint32_x0016DFA0 ecode);
    void* err_obj;
} SJMEM_OBJ_x0016DFA0;
typedef SJMEM_OBJ_x0016DFA0* SJMEM_x0016DFA0;
extern void SJMEM_EntryErrFunc_x0016DFA0(SJMEM_x0016DFA0 sjmem, void (*func)(void* obj, Sint32_x0016DFA0 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
void SJMEM_EntryErrFunc_x0016DFA0(SJMEM_x0016DFA0 sjmem, void (*func)(void* obj, Sint32_x0016DFA0 ecode), void* obj) __asm__("SJMEM_EntryErrFunc");
Sint32_x0016DFA0 func_0016DFA0_x0016DFA0(SJMEM_x0016DFA0 sjmem, Sint32_x0016DFA0 id, Sint32_x0016DFA0 nbyte, Sint32_x0016DFA0* rbyte) __asm__("func_0016DFA0");
/* SJMEM_IsGetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_mem.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016DFA0 func_0016DFA0_x0016DFA0(SJMEM_x0016DFA0 sjmem, Sint32_x0016DFA0 id, Sint32_x0016DFA0 nbyte, Sint32_x0016DFA0* rbyte) {
    Sint32_x0016DFA0 unk;
    SJCRS_Lock_x0016DFA0();
    if (id == 0) {
        unk = 0;
    } else if (id == 1) {
        unk = ((sjmem->unkC) < (nbyte) ? (sjmem->unkC) : (nbyte));
    } else {
        unk = 0;
        if (sjmem->err_func != 0) {
            sjmem->err_func(sjmem->err_obj, (-3));
        }
    }
    *rbyte = unk;
    SJCRS_Unlock_x0016DFA0();
    return unk == nbyte;
}
s32 func_0016E048(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
s32 func_0016E050(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x18);
}
s32 func_0016DB08_x0016E058(s32 *) __asm__("func_0016DB08");
extern s32 D_00464D58_x0016E058 __asm__("D_00464D58");
void func_0016E058_x0016E058(void) __asm__("func_0016E058");
void func_0016E058_x0016E058(void) {
    func_0016DB08_x0016E058(&D_00464D58_x0016E058);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E078);
void func_0016E0D0(void) {
    s32 temp_v0;

    func_0016DAD8();
    temp_v0 = D_0041D960 - 1;
    D_0041D960 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_0041D968, 0, 0x4000);
    }
    func_0016DAF0();
}
typedef unsigned char Uint8_x0016E120;
typedef char Sint8_x0016E120;
typedef unsigned short Uint16_x0016E120;
typedef unsigned int Uint32_x0016E120;
typedef signed int Sint32_x0016E120;
typedef struct _UUID_x0016E120 {
    Uint32_x0016E120 Data1;
    Uint16_x0016E120 Data2;
    Uint16_x0016E120 Data3;
    Uint8_x0016E120 Data4[8];
} UUID_x0016E120;
typedef struct {
        Sint8_x0016E120 *data;
        Sint32_x0016E120 len;
} SJCK_x0016E120;
typedef struct {
        struct _sj_vtbl_x0016E120 *vtbl;
} SJ_OBJ_x0016E120;
typedef SJ_OBJ_x0016E120 *SJ_x0016E120;
typedef struct _sj_vtbl_x0016E120 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E120 sj);
        UUID_x0016E120 *(*GetUuid)(SJ_x0016E120 sj);
        void (*Reset)(SJ_x0016E120 sj);
        void (*GetChunk)(SJ_x0016E120 sj, Sint32_x0016E120 id, Sint32_x0016E120 nbyte, SJCK_x0016E120 *ck);
        void (*UngetChunk)(SJ_x0016E120 sj, Sint32_x0016E120 id, SJCK_x0016E120 *ck);
        void (*PutChunk)(SJ_x0016E120 sj, Sint32_x0016E120 id, SJCK_x0016E120 *ck);
        Sint32_x0016E120 (*GetNumData)(SJ_x0016E120 sj, Sint32_x0016E120 id);
        Sint32_x0016E120 (*IsGetChunk)(SJ_x0016E120 sj, Sint32_x0016E120 id, Sint32_x0016E120 nbyte, Sint32_x0016E120 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E120 sj,
                                        void (*func)(void *obj, Sint32_x0016E120 ecode), void *obj);
} SJ_IF_x0016E120;
void SJCRS_Lock_x0016E120(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016E120(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016E120 sj;
    Sint32_x0016E120 used;
    UUID_x0016E120* uuid;
    Sint32_x0016E120 unkC;
    Sint32_x0016E120 unk10;
    Sint32_x0016E120 unk14;
    Sint32_x0016E120 unk18;
    Sint8_x0016E120* buf;
    Sint32_x0016E120 bsize;
    Sint32_x0016E120 xsize;
    Sint32_x0016E120 unk28;
    Sint32_x0016E120 unk2C;
    Sint32_x0016E120 unk30;
    Sint32_x0016E120 unk34;
    void (*err_func)(void* obj, Sint32_x0016E120 ecode);
    void* err_obj;
} SJRBF_OBJ_x0016E120;
typedef SJRBF_OBJ_x0016E120* SJRBF_x0016E120;
void SJRBF_Reset_x0016E120(SJRBF_x0016E120 sjrbf) __asm__("func_0016E268");
void SJRBF_Reset_x0016E120(SJRBF_x0016E120 sjrbf) __asm__("func_0016E268");
extern void SJRBF_EntryErrFunc_x0016E120(SJRBF_x0016E120 sjrbf, void (*func)(void* obj, Sint32_x0016E120 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
extern SJ_IF_x0016E120 sjrbf_vtbl_x0016E120 __asm__("D_0041D930");
extern SJRBF_OBJ_x0016E120 sjrbf_obj_x0016E120[256] __asm__("D_0041D968");
extern const UUID_x0016E120 sjrbf_uuid_x0016E120 __asm__("D_00464D48");
void SJRBF_Error_x0016E120(void* obj, Sint32_x0016E120 ecode) __asm__("func_0016E058");
void SJRBF_EntryErrFunc_x0016E120(SJRBF_x0016E120 sjrbf, void (*func)(void* obj, Sint32_x0016E120 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void SJRBF_Reset_x0016E120(SJRBF_x0016E120 sjrbf) __asm__("func_0016E268");
SJ_x0016E120 func_0016E120_x0016E120(Sint8_x0016E120* buf, Sint32_x0016E120 bsize, Sint32_x0016E120 xsize) __asm__("func_0016E120");
/* SJRBF_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
SJ_x0016E120 func_0016E120_x0016E120(Sint8_x0016E120* buf, Sint32_x0016E120 bsize, Sint32_x0016E120 xsize) {
    SJRBF_x0016E120 sjrbf;
    Sint32_x0016E120 i;
    SJCRS_Lock_x0016E120();
    for (i = 0; i < 256; i++) {
        if (sjrbf_obj_x0016E120[i].used == 0) {
            break;
        }
    }
    sjrbf = 0;
    if (i != 256) {
        sjrbf = &sjrbf_obj_x0016E120[i];
        sjrbf->used = 1;
        sjrbf->sj.vtbl = &sjrbf_vtbl_x0016E120;
        sjrbf->buf = buf;
        sjrbf->bsize = bsize;
        sjrbf->xsize = xsize;
        sjrbf->uuid = &sjrbf_uuid_x0016E120;
        sjrbf->err_func = SJRBF_Error_x0016E120;
        sjrbf->err_obj = sjrbf;
        SJRBF_Reset_x0016E120(sjrbf);
    }
    SJCRS_Unlock_x0016E120();
    return sjrbf;
}
void func_0016E210(u8 *arg0) {
    func_0016DAD8();
    if (arg0 != NULL) {
        memset(arg0, 0, 0x40);
        *(s32 *)((u8 *)arg0 + 4) = 0;
    }
    func_0016DAF0();
}
s32 func_0016E250(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0016E258_x0016E258(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016E258");
void func_0016E258_x0016E258(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x38)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x3C)) = arg2;
}
typedef unsigned char Uint8_x0016E268;
typedef char Sint8_x0016E268;
typedef unsigned short Uint16_x0016E268;
typedef unsigned int Uint32_x0016E268;
typedef signed int Sint32_x0016E268;
typedef struct _UUID_x0016E268 {
    Uint32_x0016E268 Data1;
    Uint16_x0016E268 Data2;
    Uint16_x0016E268 Data3;
    Uint8_x0016E268 Data4[8];
} UUID_x0016E268;
typedef struct {
        Sint8_x0016E268 *data;
        Sint32_x0016E268 len;
} SJCK_x0016E268;
typedef struct {
        struct _sj_vtbl_x0016E268 *vtbl;
} SJ_OBJ_x0016E268;
typedef SJ_OBJ_x0016E268 *SJ_x0016E268;
typedef struct _sj_vtbl_x0016E268 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E268 sj);
        UUID_x0016E268 *(*GetUuid)(SJ_x0016E268 sj);
        void (*Reset)(SJ_x0016E268 sj);
        void (*GetChunk)(SJ_x0016E268 sj, Sint32_x0016E268 id, Sint32_x0016E268 nbyte, SJCK_x0016E268 *ck);
        void (*UngetChunk)(SJ_x0016E268 sj, Sint32_x0016E268 id, SJCK_x0016E268 *ck);
        void (*PutChunk)(SJ_x0016E268 sj, Sint32_x0016E268 id, SJCK_x0016E268 *ck);
        Sint32_x0016E268 (*GetNumData)(SJ_x0016E268 sj, Sint32_x0016E268 id);
        Sint32_x0016E268 (*IsGetChunk)(SJ_x0016E268 sj, Sint32_x0016E268 id, Sint32_x0016E268 nbyte, Sint32_x0016E268 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E268 sj,
                                        void (*func)(void *obj, Sint32_x0016E268 ecode), void *obj);
} SJ_IF_x0016E268;
void SJCRS_Lock_x0016E268(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016E268(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016E268 sj;
    Sint32_x0016E268 used;
    UUID_x0016E268* uuid;
    Sint32_x0016E268 unkC;
    Sint32_x0016E268 unk10;
    Sint32_x0016E268 unk14;
    Sint32_x0016E268 unk18;
    Sint8_x0016E268* buf;
    Sint32_x0016E268 bsize;
    Sint32_x0016E268 xsize;
    Sint32_x0016E268 unk28;
    Sint32_x0016E268 unk2C;
    Sint32_x0016E268 unk30;
    Sint32_x0016E268 unk34;
    void (*err_func)(void* obj, Sint32_x0016E268 ecode);
    void* err_obj;
} SJRBF_OBJ_x0016E268;
typedef SJRBF_OBJ_x0016E268* SJRBF_x0016E268;
extern void SJRBF_EntryErrFunc_x0016E268(SJRBF_x0016E268 sjrbf, void (*func)(void* obj, Sint32_x0016E268 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void SJRBF_EntryErrFunc_x0016E268(SJRBF_x0016E268 sjrbf, void (*func)(void* obj, Sint32_x0016E268 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void func_0016E268_x0016E268(SJRBF_x0016E268 sjrbf) __asm__("func_0016E268");
/* SJRBF_Reset: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016E268_x0016E268(SJRBF_x0016E268 sjrbf) {
    SJCRS_Lock_x0016E268();
    sjrbf->unk34 = 0;
    sjrbf->unkC = 0;
    sjrbf->unk14 = 0;
    sjrbf->unk18 = 0;
    sjrbf->unk28 = 0;
    sjrbf->unk2C = 0;
    sjrbf->unk30 = 0;
    sjrbf->unk10 = sjrbf->bsize;
    SJCRS_Unlock_x0016E268();
}
typedef unsigned char u8_x0016E2B0;
typedef struct Fn80058380Object_x0016E2B0 Fn80058380Object_x0016E2B0;
typedef void (*Fn80058380Callback_x0016E2B0)(void *, int);
struct Fn80058380Object_x0016E2B0 {
    u8_x0016E2B0 pad_0x00[0x0C];
    int value_0x0C;
    int value_0x10;
    u8_x0016E2B0 pad_0x14[0x24];
    Fn80058380Callback_x0016E2B0 callback;
    void *callback_context;
};
int func_0016E2B0_x0016E2B0(Fn80058380Object_x0016E2B0 *object, int mode) __asm__("func_0016E2B0");
/* fn_80058380: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_80058380.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0016E2B0_x0016E2B0(Fn80058380Object_x0016E2B0 *object, int mode) {
    if (mode == 1) {
        return object->value_0x0C;
    }
    if (mode == 0) {
        return object->value_0x10;
    }
    if (object->callback) {
        object->callback(object->callback_context, -3);
    }
    return 0;
}
typedef unsigned char Uint8_x0016E300;
typedef char Sint8_x0016E300;
typedef unsigned short Uint16_x0016E300;
typedef unsigned int Uint32_x0016E300;
typedef signed int Sint32_x0016E300;
typedef struct _UUID_x0016E300 {
    Uint32_x0016E300 Data1;
    Uint16_x0016E300 Data2;
    Uint16_x0016E300 Data3;
    Uint8_x0016E300 Data4[8];
} UUID_x0016E300;
typedef struct {
        Sint8_x0016E300 *data;
        Sint32_x0016E300 len;
} SJCK_x0016E300;
typedef struct {
        struct _sj_vtbl_x0016E300 *vtbl;
} SJ_OBJ_x0016E300;
typedef SJ_OBJ_x0016E300 *SJ_x0016E300;
typedef struct _sj_vtbl_x0016E300 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E300 sj);
        UUID_x0016E300 *(*GetUuid)(SJ_x0016E300 sj);
        void (*Reset)(SJ_x0016E300 sj);
        void (*GetChunk)(SJ_x0016E300 sj, Sint32_x0016E300 id, Sint32_x0016E300 nbyte, SJCK_x0016E300 *ck);
        void (*UngetChunk)(SJ_x0016E300 sj, Sint32_x0016E300 id, SJCK_x0016E300 *ck);
        void (*PutChunk)(SJ_x0016E300 sj, Sint32_x0016E300 id, SJCK_x0016E300 *ck);
        Sint32_x0016E300 (*GetNumData)(SJ_x0016E300 sj, Sint32_x0016E300 id);
        Sint32_x0016E300 (*IsGetChunk)(SJ_x0016E300 sj, Sint32_x0016E300 id, Sint32_x0016E300 nbyte, Sint32_x0016E300 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E300 sj,
                                        void (*func)(void *obj, Sint32_x0016E300 ecode), void *obj);
} SJ_IF_x0016E300;
void SJCRS_Lock_x0016E300(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016E300(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016E300 sj;
    Sint32_x0016E300 used;
    UUID_x0016E300* uuid;
    Sint32_x0016E300 unkC;
    Sint32_x0016E300 unk10;
    Sint32_x0016E300 unk14;
    Sint32_x0016E300 unk18;
    Sint8_x0016E300* buf;
    Sint32_x0016E300 bsize;
    Sint32_x0016E300 xsize;
    Sint32_x0016E300 unk28;
    Sint32_x0016E300 unk2C;
    Sint32_x0016E300 unk30;
    Sint32_x0016E300 unk34;
    void (*err_func)(void* obj, Sint32_x0016E300 ecode);
    void* err_obj;
} SJRBF_OBJ_x0016E300;
typedef SJRBF_OBJ_x0016E300* SJRBF_x0016E300;
extern void SJRBF_EntryErrFunc_x0016E300(SJRBF_x0016E300 sjrbf, void (*func)(void* obj, Sint32_x0016E300 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void SJRBF_EntryErrFunc_x0016E300(SJRBF_x0016E300 sjrbf, void (*func)(void* obj, Sint32_x0016E300 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void func_0016E300_x0016E300(SJRBF_x0016E300 sjrbf, Sint32_x0016E300 id, Sint32_x0016E300 nbyte, SJCK_x0016E300* ck) __asm__("func_0016E300");
/* SJRBF_GetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016E300_x0016E300(SJRBF_x0016E300 sjrbf, Sint32_x0016E300 id, Sint32_x0016E300 nbyte, SJCK_x0016E300* ck) {
    SJCRS_Lock_x0016E300();
    if (id == 0) {
        ck->len = ((((sjrbf->unk10) < (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize) ? (sjrbf->unk10) : (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize))) < (nbyte) ? (((sjrbf->unk10) < (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize) ? (sjrbf->unk10) : (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize))) : (nbyte));
        ck->data = sjrbf->buf + sjrbf->unk14;
        sjrbf->unk14 = (sjrbf->unk14 + ck->len) % sjrbf->bsize;
        sjrbf->unk10 -= ck->len;
        sjrbf->unk28 += ck->len;
    } else if (id == 1) {
        ck->len = ((((sjrbf->unkC) < (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize) ? (sjrbf->unkC) : (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize))) < (nbyte) ? (((sjrbf->unkC) < (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize) ? (sjrbf->unkC) : (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize))) : (nbyte));
        ck->data = sjrbf->buf + sjrbf->unk18;
        sjrbf->unk18 = (sjrbf->unk18 + ck->len) % sjrbf->bsize;
        sjrbf->unkC -= ck->len;
        sjrbf->unk30 += ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sjrbf->err_func != 0) {
            sjrbf->err_func(sjrbf->err_obj, (-3));
        }
    }
    SJCRS_Unlock_x0016E300();
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016E470);
typedef unsigned char Uint8_x0016E5C8;
typedef char Sint8_x0016E5C8;
typedef unsigned short Uint16_x0016E5C8;
typedef unsigned int Uint32_x0016E5C8;
typedef signed int Sint32_x0016E5C8;
typedef struct _UUID_x0016E5C8 {
    Uint32_x0016E5C8 Data1;
    Uint16_x0016E5C8 Data2;
    Uint16_x0016E5C8 Data3;
    Uint8_x0016E5C8 Data4[8];
} UUID_x0016E5C8;
typedef struct {
        Sint8_x0016E5C8 *data;
        Sint32_x0016E5C8 len;
} SJCK_x0016E5C8;
typedef struct {
        struct _sj_vtbl_x0016E5C8 *vtbl;
} SJ_OBJ_x0016E5C8;
typedef SJ_OBJ_x0016E5C8 *SJ_x0016E5C8;
typedef struct _sj_vtbl_x0016E5C8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E5C8 sj);
        UUID_x0016E5C8 *(*GetUuid)(SJ_x0016E5C8 sj);
        void (*Reset)(SJ_x0016E5C8 sj);
        void (*GetChunk)(SJ_x0016E5C8 sj, Sint32_x0016E5C8 id, Sint32_x0016E5C8 nbyte, SJCK_x0016E5C8 *ck);
        void (*UngetChunk)(SJ_x0016E5C8 sj, Sint32_x0016E5C8 id, SJCK_x0016E5C8 *ck);
        void (*PutChunk)(SJ_x0016E5C8 sj, Sint32_x0016E5C8 id, SJCK_x0016E5C8 *ck);
        Sint32_x0016E5C8 (*GetNumData)(SJ_x0016E5C8 sj, Sint32_x0016E5C8 id);
        Sint32_x0016E5C8 (*IsGetChunk)(SJ_x0016E5C8 sj, Sint32_x0016E5C8 id, Sint32_x0016E5C8 nbyte, Sint32_x0016E5C8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E5C8 sj,
                                        void (*func)(void *obj, Sint32_x0016E5C8 ecode), void *obj);
} SJ_IF_x0016E5C8;
void SJCRS_Lock_x0016E5C8(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016E5C8(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016E5C8 sj;
    Sint32_x0016E5C8 used;
    UUID_x0016E5C8* uuid;
    Sint32_x0016E5C8 unkC;
    Sint32_x0016E5C8 unk10;
    Sint32_x0016E5C8 unk14;
    Sint32_x0016E5C8 unk18;
    Sint8_x0016E5C8* buf;
    Sint32_x0016E5C8 bsize;
    Sint32_x0016E5C8 xsize;
    Sint32_x0016E5C8 unk28;
    Sint32_x0016E5C8 unk2C;
    Sint32_x0016E5C8 unk30;
    Sint32_x0016E5C8 unk34;
    void (*err_func)(void* obj, Sint32_x0016E5C8 ecode);
    void* err_obj;
} SJRBF_OBJ_x0016E5C8;
typedef SJRBF_OBJ_x0016E5C8* SJRBF_x0016E5C8;
extern void SJRBF_EntryErrFunc_x0016E5C8(SJRBF_x0016E5C8 sjrbf, void (*func)(void* obj, Sint32_x0016E5C8 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void SJRBF_EntryErrFunc_x0016E5C8(SJRBF_x0016E5C8 sjrbf, void (*func)(void* obj, Sint32_x0016E5C8 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void func_0016E5C8_x0016E5C8(SJRBF_x0016E5C8 sjrbf, Sint32_x0016E5C8 id, SJCK_x0016E5C8* ck) __asm__("func_0016E5C8");
/* SJRBF_UngetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016E5C8_x0016E5C8(SJRBF_x0016E5C8 sjrbf, Sint32_x0016E5C8 id, SJCK_x0016E5C8* ck) {
    Sint32_x0016E5C8 a;
    Sint32_x0016E5C8 b;
    if ((ck->len <= 0) || (ck->data == 0)) {
        return;
    }
    SJCRS_Lock_x0016E5C8();
    if (id == 0) {
        a = (sjrbf->unk14 + sjrbf->bsize - ck->len) % sjrbf->bsize;
        b = (Sint32_x0016E5C8)(ck->data - sjrbf->buf) % sjrbf->bsize;
        if (a == b) {
            sjrbf->unk14 = a;
            sjrbf->unk10 += ck->len;
        } else {
            if (sjrbf->err_func != 0) {
                sjrbf->err_func(sjrbf->err_obj, (-3));
            }
        }
        sjrbf->unk28 -= ck->len;
    } else if (id == 1) {
        a = (sjrbf->unk18 + sjrbf->bsize - ck->len) % sjrbf->bsize;
        b = (Sint32_x0016E5C8)(ck->data - sjrbf->buf) % sjrbf->bsize;
        if (a == b) {
            sjrbf->unk18 = a;
            sjrbf->unkC += ck->len;
        } else {
            if (sjrbf->err_func != 0) {
                sjrbf->err_func(sjrbf->err_obj, (-3));
            }
        }
        sjrbf->unk30 -= ck->len;
    } else {
        ck->len = 0;
        ck->data = 0;
        if (sjrbf->err_func != 0) {
            sjrbf->err_func(sjrbf->err_obj, (-3));
        }
    }
    SJCRS_Unlock_x0016E5C8();
}
typedef unsigned char Uint8_x0016E760;
typedef char Sint8_x0016E760;
typedef unsigned short Uint16_x0016E760;
typedef unsigned int Uint32_x0016E760;
typedef signed int Sint32_x0016E760;
typedef struct _UUID_x0016E760 {
    Uint32_x0016E760 Data1;
    Uint16_x0016E760 Data2;
    Uint16_x0016E760 Data3;
    Uint8_x0016E760 Data4[8];
} UUID_x0016E760;
typedef struct {
        Sint8_x0016E760 *data;
        Sint32_x0016E760 len;
} SJCK_x0016E760;
typedef struct {
        struct _sj_vtbl_x0016E760 *vtbl;
} SJ_OBJ_x0016E760;
typedef SJ_OBJ_x0016E760 *SJ_x0016E760;
typedef struct _sj_vtbl_x0016E760 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E760 sj);
        UUID_x0016E760 *(*GetUuid)(SJ_x0016E760 sj);
        void (*Reset)(SJ_x0016E760 sj);
        void (*GetChunk)(SJ_x0016E760 sj, Sint32_x0016E760 id, Sint32_x0016E760 nbyte, SJCK_x0016E760 *ck);
        void (*UngetChunk)(SJ_x0016E760 sj, Sint32_x0016E760 id, SJCK_x0016E760 *ck);
        void (*PutChunk)(SJ_x0016E760 sj, Sint32_x0016E760 id, SJCK_x0016E760 *ck);
        Sint32_x0016E760 (*GetNumData)(SJ_x0016E760 sj, Sint32_x0016E760 id);
        Sint32_x0016E760 (*IsGetChunk)(SJ_x0016E760 sj, Sint32_x0016E760 id, Sint32_x0016E760 nbyte, Sint32_x0016E760 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E760 sj,
                                        void (*func)(void *obj, Sint32_x0016E760 ecode), void *obj);
} SJ_IF_x0016E760;
void SJCRS_Lock_x0016E760(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016E760(void) __asm__("func_0016DAF0");
typedef struct {
    SJ_OBJ_x0016E760 sj;
    Sint32_x0016E760 used;
    UUID_x0016E760* uuid;
    Sint32_x0016E760 unkC;
    Sint32_x0016E760 unk10;
    Sint32_x0016E760 unk14;
    Sint32_x0016E760 unk18;
    Sint8_x0016E760* buf;
    Sint32_x0016E760 bsize;
    Sint32_x0016E760 xsize;
    Sint32_x0016E760 unk28;
    Sint32_x0016E760 unk2C;
    Sint32_x0016E760 unk30;
    Sint32_x0016E760 unk34;
    void (*err_func)(void* obj, Sint32_x0016E760 ecode);
    void* err_obj;
} SJRBF_OBJ_x0016E760;
typedef SJRBF_OBJ_x0016E760* SJRBF_x0016E760;
extern void SJRBF_EntryErrFunc_x0016E760(SJRBF_x0016E760 sjrbf, void (*func)(void* obj, Sint32_x0016E760 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
void SJRBF_EntryErrFunc_x0016E760(SJRBF_x0016E760 sjrbf, void (*func)(void* obj, Sint32_x0016E760 ecode), void* obj) __asm__("SJRBF_EntryErrFunc");
Sint32_x0016E760 func_0016E760_x0016E760(SJRBF_x0016E760 sjrbf, Sint32_x0016E760 id, Sint32_x0016E760 nbyte, Sint32_x0016E760* rbyte) __asm__("func_0016E760");
/* SJRBF_IsGetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016E760 func_0016E760_x0016E760(SJRBF_x0016E760 sjrbf, Sint32_x0016E760 id, Sint32_x0016E760 nbyte, Sint32_x0016E760* rbyte) {
    Sint32_x0016E760 unk;
    SJCRS_Lock_x0016E760();
    if (id == 0) {
        unk = ((sjrbf->unk10) < (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize) ? (sjrbf->unk10) : (sjrbf->bsize - sjrbf->unk14 + sjrbf->xsize));
        unk = ((unk) < (nbyte) ? (unk) : (nbyte));
    } else if (id == 1) {
        unk = ((sjrbf->unkC) < (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize) ? (sjrbf->unkC) : (sjrbf->bsize - sjrbf->unk18 + sjrbf->xsize));
        unk = ((unk) < (nbyte) ? (unk) : (nbyte));
    } else {
        unk = 0;
        if (sjrbf->err_func != 0) {
            sjrbf->err_func(sjrbf->err_obj, (-3));
        }
    }
    *rbyte = unk;
    SJCRS_Unlock_x0016E760();
    return unk == nbyte;
}
s32 fn_80057DB0_x0016E828(u8 *arg0) __asm__("fn_80057DB0");
s32 fn_80057DB0_x0016E828(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1C);
}
s32 func_0016E830(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s32 func_0016E838(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x24);
}
void func_0016E840(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((u8 *)((((arg1 * 2) + arg2) * 4) + arg0) + 0x28) = arg3;
}
s32 func_0016E858(s32 arg0, s32 arg1, s32 arg2) {
    return *(s32 *)((u8 *)((((arg1 * 2) + arg2) * 4) + arg0) + 0x28);
}
s32 func_0016DB08_x0016E870(s32 *) __asm__("func_0016DB08");
extern s32 D_00464D78_x0016E870 __asm__("D_00464D78");
void func_0016E870_x0016E870(void) __asm__("func_0016E870");
void func_0016E870_x0016E870(void) {
    func_0016DB08_x0016E870(&D_00464D78_x0016E870);
}
typedef unsigned int size_t_x0016E890;
typedef unsigned char Uint8_x0016E890;
typedef char Sint8_x0016E890;
typedef unsigned short Uint16_x0016E890;
typedef unsigned int Uint32_x0016E890;
typedef signed int Sint32_x0016E890;
typedef struct _UUID_x0016E890 {
    Uint32_x0016E890 Data1;
    Uint16_x0016E890 Data2;
    Uint16_x0016E890 Data3;
    Uint8_x0016E890 Data4[8];
} UUID_x0016E890;
typedef struct {
        Sint8_x0016E890 *data;
        Sint32_x0016E890 len;
} SJCK_x0016E890;
typedef struct {
        struct _sj_vtbl_x0016E890 *vtbl;
} SJ_OBJ_x0016E890;
typedef SJ_OBJ_x0016E890 *SJ_x0016E890;
typedef struct _sj_vtbl_x0016E890 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E890 sj);
        UUID_x0016E890 *(*GetUuid)(SJ_x0016E890 sj);
        void (*Reset)(SJ_x0016E890 sj);
        void (*GetChunk)(SJ_x0016E890 sj, Sint32_x0016E890 id, Sint32_x0016E890 nbyte, SJCK_x0016E890 *ck);
        void (*UngetChunk)(SJ_x0016E890 sj, Sint32_x0016E890 id, SJCK_x0016E890 *ck);
        void (*PutChunk)(SJ_x0016E890 sj, Sint32_x0016E890 id, SJCK_x0016E890 *ck);
        Sint32_x0016E890 (*GetNumData)(SJ_x0016E890 sj, Sint32_x0016E890 id);
        Sint32_x0016E890 (*IsGetChunk)(SJ_x0016E890 sj, Sint32_x0016E890 id, Sint32_x0016E890 nbyte, Sint32_x0016E890 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E890 sj,
                                        void (*func)(void *obj, Sint32_x0016E890 ecode), void *obj);
} SJ_IF_x0016E890;
void* memset_x0016E890(void* s, int c, size_t_x0016E890 n) __asm__("memset");
typedef struct SJUNI_CK_x0016E890 {
    struct SJUNI_CK_x0016E890* next;
    Sint32_x0016E890 unk4;
    SJCK_x0016E890 ck;
} SJUNI_CK_x0016E890;
typedef struct {
    SJ_OBJ_x0016E890 sj;
    Sint8_x0016E890 used;
    Sint8_x0016E890 mode;
    UUID_x0016E890* uuid;
    SJUNI_CK_x0016E890* work;
    Sint32_x0016E890 chunk_count;
    SJUNI_CK_x0016E890* chain_pool;
    SJUNI_CK_x0016E890* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016E890 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016E890;
typedef SJUNI_OBJ_x0016E890* SJUNI_x0016E890;
extern void SJUNI_EntryErrFunc_x0016E890(SJUNI_x0016E890 sjuni, void (*func)(void* obj, Sint32_x0016E890 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
extern Sint32_x0016E890 sjuni_init_cnt_x0016E890 __asm__("D_00421998");
extern SJUNI_OBJ_x0016E890 sjuni_obj_x0016E890[64] __asm__("D_004219A0");
void SJUNI_EntryErrFunc_x0016E890(SJUNI_x0016E890 sjuni, void (*func)(void* obj, Sint32_x0016E890 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016E890_x0016E890() __asm__("func_0016E890");
/* SJUNI_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016E890_x0016E890() {
    if (sjuni_init_cnt_x0016E890 == 0) {
        memset_x0016E890(sjuni_obj_x0016E890, 0, sizeof(sjuni_obj_x0016E890));
    }
    sjuni_init_cnt_x0016E890 += 1;
}
void func_0016E8E0(void) {
    s32 temp_v0;

    temp_v0 = D_00421998 - 1;
    D_00421998 = temp_v0;
    if (temp_v0 == 0) {
        memset(&D_004219A0, 0, 0xC00);
    }
}
typedef unsigned char Uint8_x0016E930;
typedef char Sint8_x0016E930;
typedef unsigned short Uint16_x0016E930;
typedef unsigned int Uint32_x0016E930;
typedef signed int Sint32_x0016E930;
typedef struct _UUID_x0016E930 {
    Uint32_x0016E930 Data1;
    Uint16_x0016E930 Data2;
    Uint16_x0016E930 Data3;
    Uint8_x0016E930 Data4[8];
} UUID_x0016E930;
typedef struct {
        Sint8_x0016E930 *data;
        Sint32_x0016E930 len;
} SJCK_x0016E930;
typedef struct {
        struct _sj_vtbl_x0016E930 *vtbl;
} SJ_OBJ_x0016E930;
typedef SJ_OBJ_x0016E930 *SJ_x0016E930;
typedef struct _sj_vtbl_x0016E930 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016E930 sj);
        UUID_x0016E930 *(*GetUuid)(SJ_x0016E930 sj);
        void (*Reset)(SJ_x0016E930 sj);
        void (*GetChunk)(SJ_x0016E930 sj, Sint32_x0016E930 id, Sint32_x0016E930 nbyte, SJCK_x0016E930 *ck);
        void (*UngetChunk)(SJ_x0016E930 sj, Sint32_x0016E930 id, SJCK_x0016E930 *ck);
        void (*PutChunk)(SJ_x0016E930 sj, Sint32_x0016E930 id, SJCK_x0016E930 *ck);
        Sint32_x0016E930 (*GetNumData)(SJ_x0016E930 sj, Sint32_x0016E930 id);
        Sint32_x0016E930 (*IsGetChunk)(SJ_x0016E930 sj, Sint32_x0016E930 id, Sint32_x0016E930 nbyte, Sint32_x0016E930 *rbyte);
        void (*EntryErrFunc)(SJ_x0016E930 sj,
                                        void (*func)(void *obj, Sint32_x0016E930 ecode), void *obj);
} SJ_IF_x0016E930;
typedef struct SJUNI_CK_x0016E930 {
    struct SJUNI_CK_x0016E930* next;
    Sint32_x0016E930 unk4;
    SJCK_x0016E930 ck;
} SJUNI_CK_x0016E930;
typedef struct {
    SJ_OBJ_x0016E930 sj;
    Sint8_x0016E930 used;
    Sint8_x0016E930 mode;
    UUID_x0016E930* uuid;
    SJUNI_CK_x0016E930* work;
    Sint32_x0016E930 chunk_count;
    SJUNI_CK_x0016E930* chain_pool;
    SJUNI_CK_x0016E930* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016E930 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016E930;
typedef SJUNI_OBJ_x0016E930* SJUNI_x0016E930;
void SJUNI_Reset_x0016E930(SJUNI_x0016E930 sjuni) __asm__("func_0016EA68");
void SJUNI_Reset_x0016E930(SJUNI_x0016E930 sjuni) __asm__("func_0016EA68");
extern void SJUNI_EntryErrFunc_x0016E930(SJUNI_x0016E930 sjuni, void (*func)(void* obj, Sint32_x0016E930 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
extern SJ_IF_x0016E930 sjuni_vtbl_x0016E930 __asm__("D_00421968");
extern SJUNI_OBJ_x0016E930 sjuni_obj_x0016E930[64] __asm__("D_004219A0");
extern const UUID_x0016E930 sjuni_uuid_x0016E930 __asm__("D_00464D68");
void SJUNI_Error_x0016E930(void* obj, Sint32_x0016E930 ecode) __asm__("func_0016E870");
void SJUNI_EntryErrFunc_x0016E930(SJUNI_x0016E930 sjuni, void (*func)(void* obj, Sint32_x0016E930 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_Reset_x0016E930(SJUNI_x0016E930 sjuni) __asm__("func_0016EA68");
SJ_x0016E930 func_0016E930_x0016E930(Sint32_x0016E930 mode, Sint8_x0016E930* work, Sint32_x0016E930 wksize) __asm__("func_0016E930");
/* SJUNI_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
SJ_x0016E930 func_0016E930_x0016E930(Sint32_x0016E930 mode, Sint8_x0016E930* work, Sint32_x0016E930 wksize) {
    SJUNI_x0016E930 sjuni;
    Sint32_x0016E930 i;
    for (i = 0; i < 64; i++) {
        if (sjuni_obj_x0016E930[i].used == 0) {
            break;
        }
    }
    if (i == 64) {
        return 0;
    }
    sjuni = &sjuni_obj_x0016E930[i];
    sjuni->used = 1;
    sjuni->sj.vtbl = &sjuni_vtbl_x0016E930;
    sjuni->mode = mode;
    sjuni->uuid = &sjuni_uuid_x0016E930;
    sjuni->work = (SJUNI_CK_x0016E930*)work;
    sjuni->chunk_count = wksize / 16;
    sjuni->err_func = SJUNI_Error_x0016E930;
    sjuni->err_obj = sjuni;
    SJUNI_Reset_x0016E930(sjuni);
    return sjuni;
}
typedef unsigned int size_t_x0016EA18;
typedef unsigned char Uint8_x0016EA18;
typedef char Sint8_x0016EA18;
typedef unsigned short Uint16_x0016EA18;
typedef unsigned int Uint32_x0016EA18;
typedef signed int Sint32_x0016EA18;
typedef struct _UUID_x0016EA18 {
    Uint32_x0016EA18 Data1;
    Uint16_x0016EA18 Data2;
    Uint16_x0016EA18 Data3;
    Uint8_x0016EA18 Data4[8];
} UUID_x0016EA18;
typedef struct {
        Sint8_x0016EA18 *data;
        Sint32_x0016EA18 len;
} SJCK_x0016EA18;
typedef struct {
        struct _sj_vtbl_x0016EA18 *vtbl;
} SJ_OBJ_x0016EA18;
typedef SJ_OBJ_x0016EA18 *SJ_x0016EA18;
typedef struct _sj_vtbl_x0016EA18 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EA18 sj);
        UUID_x0016EA18 *(*GetUuid)(SJ_x0016EA18 sj);
        void (*Reset)(SJ_x0016EA18 sj);
        void (*GetChunk)(SJ_x0016EA18 sj, Sint32_x0016EA18 id, Sint32_x0016EA18 nbyte, SJCK_x0016EA18 *ck);
        void (*UngetChunk)(SJ_x0016EA18 sj, Sint32_x0016EA18 id, SJCK_x0016EA18 *ck);
        void (*PutChunk)(SJ_x0016EA18 sj, Sint32_x0016EA18 id, SJCK_x0016EA18 *ck);
        Sint32_x0016EA18 (*GetNumData)(SJ_x0016EA18 sj, Sint32_x0016EA18 id);
        Sint32_x0016EA18 (*IsGetChunk)(SJ_x0016EA18 sj, Sint32_x0016EA18 id, Sint32_x0016EA18 nbyte, Sint32_x0016EA18 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EA18 sj,
                                        void (*func)(void *obj, Sint32_x0016EA18 ecode), void *obj);
} SJ_IF_x0016EA18;
void* memset_x0016EA18(void* s, int c, size_t_x0016EA18 n) __asm__("memset");
typedef struct SJUNI_CK_x0016EA18 {
    struct SJUNI_CK_x0016EA18* next;
    Sint32_x0016EA18 unk4;
    SJCK_x0016EA18 ck;
} SJUNI_CK_x0016EA18;
typedef struct {
    SJ_OBJ_x0016EA18 sj;
    Sint8_x0016EA18 used;
    Sint8_x0016EA18 mode;
    UUID_x0016EA18* uuid;
    SJUNI_CK_x0016EA18* work;
    Sint32_x0016EA18 chunk_count;
    SJUNI_CK_x0016EA18* chain_pool;
    SJUNI_CK_x0016EA18* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EA18 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EA18;
typedef SJUNI_OBJ_x0016EA18* SJUNI_x0016EA18;
extern void SJUNI_EntryErrFunc_x0016EA18(SJUNI_x0016EA18 sjuni, void (*func)(void* obj, Sint32_x0016EA18 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EA18(SJUNI_x0016EA18 sjuni, void (*func)(void* obj, Sint32_x0016EA18 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016EA18_x0016EA18(SJUNI_x0016EA18 sjuni) __asm__("func_0016EA18");
/* SJUNI_Destroy: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016EA18_x0016EA18(SJUNI_x0016EA18 sjuni) {
    if (sjuni != 0) {
        memset_x0016EA18(sjuni, 0, sizeof(SJUNI_OBJ_x0016EA18));
        sjuni->used = 0;
    }
}
s32 func_0016EA50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0016EA58_x0016EA58(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016EA58");
void func_0016EA58_x0016EA58(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = 0x28 + ((u8 *) arg0);
 do { *((s32 *) (((u8 *) arg0) + 0x2C)) = arg2; *((s32 *) new_var) = arg1; } while (0);
}
typedef unsigned char Uint8_x0016EA68;
typedef char Sint8_x0016EA68;
typedef unsigned short Uint16_x0016EA68;
typedef unsigned int Uint32_x0016EA68;
typedef signed int Sint32_x0016EA68;
typedef struct _UUID_x0016EA68 {
    Uint32_x0016EA68 Data1;
    Uint16_x0016EA68 Data2;
    Uint16_x0016EA68 Data3;
    Uint8_x0016EA68 Data4[8];
} UUID_x0016EA68;
typedef struct {
        Sint8_x0016EA68 *data;
        Sint32_x0016EA68 len;
} SJCK_x0016EA68;
typedef struct {
        struct _sj_vtbl_x0016EA68 *vtbl;
} SJ_OBJ_x0016EA68;
typedef SJ_OBJ_x0016EA68 *SJ_x0016EA68;
typedef struct _sj_vtbl_x0016EA68 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EA68 sj);
        UUID_x0016EA68 *(*GetUuid)(SJ_x0016EA68 sj);
        void (*Reset)(SJ_x0016EA68 sj);
        void (*GetChunk)(SJ_x0016EA68 sj, Sint32_x0016EA68 id, Sint32_x0016EA68 nbyte, SJCK_x0016EA68 *ck);
        void (*UngetChunk)(SJ_x0016EA68 sj, Sint32_x0016EA68 id, SJCK_x0016EA68 *ck);
        void (*PutChunk)(SJ_x0016EA68 sj, Sint32_x0016EA68 id, SJCK_x0016EA68 *ck);
        Sint32_x0016EA68 (*GetNumData)(SJ_x0016EA68 sj, Sint32_x0016EA68 id);
        Sint32_x0016EA68 (*IsGetChunk)(SJ_x0016EA68 sj, Sint32_x0016EA68 id, Sint32_x0016EA68 nbyte, Sint32_x0016EA68 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EA68 sj,
                                        void (*func)(void *obj, Sint32_x0016EA68 ecode), void *obj);
} SJ_IF_x0016EA68;
typedef struct SJUNI_CK_x0016EA68 {
    struct SJUNI_CK_x0016EA68* next;
    Sint32_x0016EA68 unk4;
    SJCK_x0016EA68 ck;
} SJUNI_CK_x0016EA68;
typedef struct {
    SJ_OBJ_x0016EA68 sj;
    Sint8_x0016EA68 used;
    Sint8_x0016EA68 mode;
    UUID_x0016EA68* uuid;
    SJUNI_CK_x0016EA68* work;
    Sint32_x0016EA68 chunk_count;
    SJUNI_CK_x0016EA68* chain_pool;
    SJUNI_CK_x0016EA68* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EA68 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EA68;
typedef SJUNI_OBJ_x0016EA68* SJUNI_x0016EA68;
extern void SJUNI_EntryErrFunc_x0016EA68(SJUNI_x0016EA68 sjuni, void (*func)(void* obj, Sint32_x0016EA68 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EA68(SJUNI_x0016EA68 sjuni, void (*func)(void* obj, Sint32_x0016EA68 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016EA68_x0016EA68(SJUNI_x0016EA68 sjuni) __asm__("func_0016EA68");
/* SJUNI_Reset: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016EA68_x0016EA68(SJUNI_x0016EA68 sjuni) {
    Sint32_x0016EA68 i;
    SJUNI_CK_x0016EA68* work = sjuni->work;
    sjuni->chain_pool = work;
    for (i = 0; i < (sjuni->chunk_count - 1); i++) {
        work[i].next = &work[i + 1];
        work[i].ck.data = 0;
        work[i].ck.len = 0;
    }
    work[i].next = 0;
    work[i].ck.data = 0;
    work[i].ck.len = 0;
    for (i = 0; i < 4; i++) {
        sjuni->unk18[i] = 0;
    }
}
typedef unsigned char Uint8_x0016EAF8;
typedef char Sint8_x0016EAF8;
typedef unsigned short Uint16_x0016EAF8;
typedef unsigned int Uint32_x0016EAF8;
typedef signed int Sint32_x0016EAF8;
typedef struct _UUID_x0016EAF8 {
    Uint32_x0016EAF8 Data1;
    Uint16_x0016EAF8 Data2;
    Uint16_x0016EAF8 Data3;
    Uint8_x0016EAF8 Data4[8];
} UUID_x0016EAF8;
typedef struct {
        Sint8_x0016EAF8 *data;
        Sint32_x0016EAF8 len;
} SJCK_x0016EAF8;
typedef struct {
        struct _sj_vtbl_x0016EAF8 *vtbl;
} SJ_OBJ_x0016EAF8;
typedef SJ_OBJ_x0016EAF8 *SJ_x0016EAF8;
typedef struct _sj_vtbl_x0016EAF8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EAF8 sj);
        UUID_x0016EAF8 *(*GetUuid)(SJ_x0016EAF8 sj);
        void (*Reset)(SJ_x0016EAF8 sj);
        void (*GetChunk)(SJ_x0016EAF8 sj, Sint32_x0016EAF8 id, Sint32_x0016EAF8 nbyte, SJCK_x0016EAF8 *ck);
        void (*UngetChunk)(SJ_x0016EAF8 sj, Sint32_x0016EAF8 id, SJCK_x0016EAF8 *ck);
        void (*PutChunk)(SJ_x0016EAF8 sj, Sint32_x0016EAF8 id, SJCK_x0016EAF8 *ck);
        Sint32_x0016EAF8 (*GetNumData)(SJ_x0016EAF8 sj, Sint32_x0016EAF8 id);
        Sint32_x0016EAF8 (*IsGetChunk)(SJ_x0016EAF8 sj, Sint32_x0016EAF8 id, Sint32_x0016EAF8 nbyte, Sint32_x0016EAF8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EAF8 sj,
                                        void (*func)(void *obj, Sint32_x0016EAF8 ecode), void *obj);
} SJ_IF_x0016EAF8;
typedef struct SJUNI_CK_x0016EAF8 {
    struct SJUNI_CK_x0016EAF8* next;
    Sint32_x0016EAF8 unk4;
    SJCK_x0016EAF8 ck;
} SJUNI_CK_x0016EAF8;
typedef struct {
    SJ_OBJ_x0016EAF8 sj;
    Sint8_x0016EAF8 used;
    Sint8_x0016EAF8 mode;
    UUID_x0016EAF8* uuid;
    SJUNI_CK_x0016EAF8* work;
    Sint32_x0016EAF8 chunk_count;
    SJUNI_CK_x0016EAF8* chain_pool;
    SJUNI_CK_x0016EAF8* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EAF8 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EAF8;
typedef SJUNI_OBJ_x0016EAF8* SJUNI_x0016EAF8;
extern void SJUNI_EntryErrFunc_x0016EAF8(SJUNI_x0016EAF8 sjuni, void (*func)(void* obj, Sint32_x0016EAF8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EAF8(SJUNI_x0016EAF8 sjuni, void (*func)(void* obj, Sint32_x0016EAF8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
Sint32_x0016EAF8 func_0016EAF8_x0016EAF8(SJUNI_x0016EAF8 sjuni, Sint32_x0016EAF8 id) __asm__("func_0016EAF8");
/* SJUNI_GetNumData: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016EAF8 func_0016EAF8_x0016EAF8(SJUNI_x0016EAF8 sjuni, Sint32_x0016EAF8 id) {
    SJUNI_CK_x0016EAF8* chunk;
    Sint32_x0016EAF8 num_data;
    if ((Uint32_x0016EAF8)id >= 4) {
        if (sjuni->err_func != 0) {
            sjuni->err_func(sjuni->err_obj, (-3));
        }
        return 0;
    }
    chunk = sjuni->unk18[id];
    num_data = 0;
    while (chunk != 0) {
        num_data += chunk->ck.len;
        chunk = chunk->next;
    }
    return num_data;
}
typedef unsigned char Uint8_x0016EB70;
typedef char Sint8_x0016EB70;
typedef unsigned short Uint16_x0016EB70;
typedef unsigned int Uint32_x0016EB70;
typedef signed int Sint32_x0016EB70;
typedef struct _UUID_x0016EB70 {
    Uint32_x0016EB70 Data1;
    Uint16_x0016EB70 Data2;
    Uint16_x0016EB70 Data3;
    Uint8_x0016EB70 Data4[8];
} UUID_x0016EB70;
typedef struct {
        Sint8_x0016EB70 *data;
        Sint32_x0016EB70 len;
} SJCK_x0016EB70;
typedef struct {
        struct _sj_vtbl_x0016EB70 *vtbl;
} SJ_OBJ_x0016EB70;
typedef SJ_OBJ_x0016EB70 *SJ_x0016EB70;
typedef struct _sj_vtbl_x0016EB70 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EB70 sj);
        UUID_x0016EB70 *(*GetUuid)(SJ_x0016EB70 sj);
        void (*Reset)(SJ_x0016EB70 sj);
        void (*GetChunk)(SJ_x0016EB70 sj, Sint32_x0016EB70 id, Sint32_x0016EB70 nbyte, SJCK_x0016EB70 *ck);
        void (*UngetChunk)(SJ_x0016EB70 sj, Sint32_x0016EB70 id, SJCK_x0016EB70 *ck);
        void (*PutChunk)(SJ_x0016EB70 sj, Sint32_x0016EB70 id, SJCK_x0016EB70 *ck);
        Sint32_x0016EB70 (*GetNumData)(SJ_x0016EB70 sj, Sint32_x0016EB70 id);
        Sint32_x0016EB70 (*IsGetChunk)(SJ_x0016EB70 sj, Sint32_x0016EB70 id, Sint32_x0016EB70 nbyte, Sint32_x0016EB70 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EB70 sj,
                                        void (*func)(void *obj, Sint32_x0016EB70 ecode), void *obj);
} SJ_IF_x0016EB70;
void SJ_SplitChunk_x0016EB70(SJCK_x0016EB70 *ck, Sint32_x0016EB70 nbyte, SJCK_x0016EB70 *ck1, SJCK_x0016EB70 *ck2) __asm__("func_0016F050");
void SJCRS_Lock_x0016EB70(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016EB70(void) __asm__("func_0016DAF0");
typedef struct SJUNI_CK_x0016EB70 {
    struct SJUNI_CK_x0016EB70* next;
    Sint32_x0016EB70 unk4;
    SJCK_x0016EB70 ck;
} SJUNI_CK_x0016EB70;
typedef struct {
    SJ_OBJ_x0016EB70 sj;
    Sint8_x0016EB70 used;
    Sint8_x0016EB70 mode;
    UUID_x0016EB70* uuid;
    SJUNI_CK_x0016EB70* work;
    Sint32_x0016EB70 chunk_count;
    SJUNI_CK_x0016EB70* chain_pool;
    SJUNI_CK_x0016EB70* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EB70 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EB70;
typedef SJUNI_OBJ_x0016EB70* SJUNI_x0016EB70;
extern void SJUNI_EntryErrFunc_x0016EB70(SJUNI_x0016EB70 sjuni, void (*func)(void* obj, Sint32_x0016EB70 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EB70(SJUNI_x0016EB70 sjuni, void (*func)(void* obj, Sint32_x0016EB70 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016EB70_x0016EB70(SJUNI_x0016EB70 sjuni, Sint32_x0016EB70 id, Sint32_x0016EB70 nbyte, SJCK_x0016EB70* ck) __asm__("func_0016EB70");
/* SJUNI_GetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016EB70_x0016EB70(SJUNI_x0016EB70 sjuni, Sint32_x0016EB70 id, Sint32_x0016EB70 nbyte, SJCK_x0016EB70* ck) {
    SJCK_x0016EB70 sjck0;
    SJCK_x0016EB70 sjck1;
    SJUNI_CK_x0016EB70* cur;
    if ((Uint32_x0016EB70)id >= 4) {
        if (sjuni->err_func != 0) {
            sjuni->err_func(sjuni->err_obj, (-3));
        }
        ck->data = 0;
        ck->len = 0;
        return;
    }
    SJCRS_Lock_x0016EB70();
    cur = sjuni->unk18[id];
    if (cur != 0) {
        sjck0 = cur->ck;
        if (nbyte >= sjck0.len) {
            *ck = sjck0;
            sjuni->unk18[id] = cur->next;
            cur->next = sjuni->chain_pool;
            sjuni->chain_pool = cur;
        } else if (sjuni->mode == (1)) {
            SJ_SplitChunk_x0016EB70(&sjck0, nbyte, &sjck0, &sjck1);
            *ck = sjck0;
            cur->ck = sjck1;
        } else {
            ck->data = 0;
            ck->len = 0;
        }
    } else {
        ck->data = 0;
        ck->len = 0;
    }
    SJCRS_Unlock_x0016EB70();
}
typedef unsigned char Uint8_x0016ECA8;
typedef char Sint8_x0016ECA8;
typedef unsigned short Uint16_x0016ECA8;
typedef unsigned int Uint32_x0016ECA8;
typedef signed int Sint32_x0016ECA8;
typedef struct _UUID_x0016ECA8 {
    Uint32_x0016ECA8 Data1;
    Uint16_x0016ECA8 Data2;
    Uint16_x0016ECA8 Data3;
    Uint8_x0016ECA8 Data4[8];
} UUID_x0016ECA8;
typedef struct {
        Sint8_x0016ECA8 *data;
        Sint32_x0016ECA8 len;
} SJCK_x0016ECA8;
typedef struct {
        struct _sj_vtbl_x0016ECA8 *vtbl;
} SJ_OBJ_x0016ECA8;
typedef SJ_OBJ_x0016ECA8 *SJ_x0016ECA8;
typedef struct _sj_vtbl_x0016ECA8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016ECA8 sj);
        UUID_x0016ECA8 *(*GetUuid)(SJ_x0016ECA8 sj);
        void (*Reset)(SJ_x0016ECA8 sj);
        void (*GetChunk)(SJ_x0016ECA8 sj, Sint32_x0016ECA8 id, Sint32_x0016ECA8 nbyte, SJCK_x0016ECA8 *ck);
        void (*UngetChunk)(SJ_x0016ECA8 sj, Sint32_x0016ECA8 id, SJCK_x0016ECA8 *ck);
        void (*PutChunk)(SJ_x0016ECA8 sj, Sint32_x0016ECA8 id, SJCK_x0016ECA8 *ck);
        Sint32_x0016ECA8 (*GetNumData)(SJ_x0016ECA8 sj, Sint32_x0016ECA8 id);
        Sint32_x0016ECA8 (*IsGetChunk)(SJ_x0016ECA8 sj, Sint32_x0016ECA8 id, Sint32_x0016ECA8 nbyte, Sint32_x0016ECA8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016ECA8 sj,
                                        void (*func)(void *obj, Sint32_x0016ECA8 ecode), void *obj);
} SJ_IF_x0016ECA8;
void SJCRS_Lock_x0016ECA8(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016ECA8(void) __asm__("func_0016DAF0");
typedef struct SJUNI_CK_x0016ECA8 {
    struct SJUNI_CK_x0016ECA8* next;
    Sint32_x0016ECA8 unk4;
    SJCK_x0016ECA8 ck;
} SJUNI_CK_x0016ECA8;
typedef struct {
    SJ_OBJ_x0016ECA8 sj;
    Sint8_x0016ECA8 used;
    Sint8_x0016ECA8 mode;
    UUID_x0016ECA8* uuid;
    SJUNI_CK_x0016ECA8* work;
    Sint32_x0016ECA8 chunk_count;
    SJUNI_CK_x0016ECA8* chain_pool;
    SJUNI_CK_x0016ECA8* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016ECA8 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016ECA8;
typedef SJUNI_OBJ_x0016ECA8* SJUNI_x0016ECA8;
extern void SJUNI_EntryErrFunc_x0016ECA8(SJUNI_x0016ECA8 sjuni, void (*func)(void* obj, Sint32_x0016ECA8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016ECA8(SJUNI_x0016ECA8 sjuni, void (*func)(void* obj, Sint32_x0016ECA8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016ECA8_x0016ECA8(SJUNI_x0016ECA8 sjuni, Sint32_x0016ECA8 id, SJCK_x0016ECA8* ck) __asm__("func_0016ECA8");
/* SJUNI_PutChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016ECA8_x0016ECA8(SJUNI_x0016ECA8 sjuni, Sint32_x0016ECA8 id, SJCK_x0016ECA8* ck) {
    SJUNI_CK_x0016ECA8* last;
    SJUNI_CK_x0016ECA8* cur;
    SJUNI_CK_x0016ECA8** next_of_last;
    if ((Uint32_x0016ECA8)id >= 4) {
        if (sjuni->err_func != 0) {
            sjuni->err_func(sjuni->err_obj, (-3));
        }
        return;
    }
    if (ck->len <= 0 || ck->data == 0) {
        return;
    }
    SJCRS_Lock_x0016ECA8();
    next_of_last = &sjuni->unk18[id];
    cur = *next_of_last;
    last = 0;
    while (cur != 0) {
        last = cur;
        cur = cur->next;
        next_of_last = &last->next;
    }
    if (sjuni->mode == (1) && last != 0 && (last->ck.data + last->ck.len == ck->data)) {
        last->ck.len += ck->len;
    } else {
        last = sjuni->chain_pool;
        if (last == 0) {
            if (sjuni->err_func != 0) {
                sjuni->err_func(sjuni->err_obj, (-3));
            }
        } else {
            sjuni->chain_pool = sjuni->chain_pool->next;
            last->ck = *ck;
            last->next = 0;
            *next_of_last = last;
        }
    }
    SJCRS_Unlock_x0016ECA8();
}
typedef unsigned char Uint8_x0016EE00;
typedef char Sint8_x0016EE00;
typedef unsigned short Uint16_x0016EE00;
typedef unsigned int Uint32_x0016EE00;
typedef signed int Sint32_x0016EE00;
typedef struct _UUID_x0016EE00 {
    Uint32_x0016EE00 Data1;
    Uint16_x0016EE00 Data2;
    Uint16_x0016EE00 Data3;
    Uint8_x0016EE00 Data4[8];
} UUID_x0016EE00;
typedef struct {
        Sint8_x0016EE00 *data;
        Sint32_x0016EE00 len;
} SJCK_x0016EE00;
typedef struct {
        struct _sj_vtbl_x0016EE00 *vtbl;
} SJ_OBJ_x0016EE00;
typedef SJ_OBJ_x0016EE00 *SJ_x0016EE00;
typedef struct _sj_vtbl_x0016EE00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EE00 sj);
        UUID_x0016EE00 *(*GetUuid)(SJ_x0016EE00 sj);
        void (*Reset)(SJ_x0016EE00 sj);
        void (*GetChunk)(SJ_x0016EE00 sj, Sint32_x0016EE00 id, Sint32_x0016EE00 nbyte, SJCK_x0016EE00 *ck);
        void (*UngetChunk)(SJ_x0016EE00 sj, Sint32_x0016EE00 id, SJCK_x0016EE00 *ck);
        void (*PutChunk)(SJ_x0016EE00 sj, Sint32_x0016EE00 id, SJCK_x0016EE00 *ck);
        Sint32_x0016EE00 (*GetNumData)(SJ_x0016EE00 sj, Sint32_x0016EE00 id);
        Sint32_x0016EE00 (*IsGetChunk)(SJ_x0016EE00 sj, Sint32_x0016EE00 id, Sint32_x0016EE00 nbyte, Sint32_x0016EE00 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EE00 sj,
                                        void (*func)(void *obj, Sint32_x0016EE00 ecode), void *obj);
} SJ_IF_x0016EE00;
void SJCRS_Lock_x0016EE00(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016EE00(void) __asm__("func_0016DAF0");
typedef struct SJUNI_CK_x0016EE00 {
    struct SJUNI_CK_x0016EE00* next;
    Sint32_x0016EE00 unk4;
    SJCK_x0016EE00 ck;
} SJUNI_CK_x0016EE00;
typedef struct {
    SJ_OBJ_x0016EE00 sj;
    Sint8_x0016EE00 used;
    Sint8_x0016EE00 mode;
    UUID_x0016EE00* uuid;
    SJUNI_CK_x0016EE00* work;
    Sint32_x0016EE00 chunk_count;
    SJUNI_CK_x0016EE00* chain_pool;
    SJUNI_CK_x0016EE00* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EE00 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EE00;
typedef SJUNI_OBJ_x0016EE00* SJUNI_x0016EE00;
extern void SJUNI_EntryErrFunc_x0016EE00(SJUNI_x0016EE00 sjuni, void (*func)(void* obj, Sint32_x0016EE00 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EE00(SJUNI_x0016EE00 sjuni, void (*func)(void* obj, Sint32_x0016EE00 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void func_0016EE00_x0016EE00(SJUNI_x0016EE00 sjuni, Sint32_x0016EE00 id, SJCK_x0016EE00* ck) __asm__("func_0016EE00");
/* SJUNI_UngetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016EE00_x0016EE00(SJUNI_x0016EE00 sjuni, Sint32_x0016EE00 id, SJCK_x0016EE00* ck) {
    SJUNI_CK_x0016EE00* temp;
    if ((Uint32_x0016EE00)id >= 4) {
        if (sjuni->err_func != 0) {
            sjuni->err_func(sjuni->err_obj, (-3));
        }
        return;
    }
    if (ck->len <= 0 || ck->data == 0) {
        return;
    }
    SJCRS_Lock_x0016EE00();
    temp = sjuni->unk18[id];
    if ((sjuni->mode == (1)) && (temp != 0) && (ck->data + ck->len == temp->ck.data)) {
        temp->ck.data = ck->data;
        temp->ck.len += ck->len;
    } else {
        temp = sjuni->chain_pool;
        if (temp == 0) {
            if (sjuni->err_func != 0) {
                sjuni->err_func(sjuni->err_obj, (-3));
            }
        } else {
            sjuni->chain_pool = sjuni->chain_pool->next;
            temp->ck = *ck;
            temp->next = 0;
            temp->next = sjuni->unk18[id];
            sjuni->unk18[id] = temp;
        }
    }
    SJCRS_Unlock_x0016EE00();
}
typedef unsigned char Uint8_x0016EF48;
typedef char Sint8_x0016EF48;
typedef unsigned short Uint16_x0016EF48;
typedef unsigned int Uint32_x0016EF48;
typedef signed int Sint32_x0016EF48;
typedef struct _UUID_x0016EF48 {
    Uint32_x0016EF48 Data1;
    Uint16_x0016EF48 Data2;
    Uint16_x0016EF48 Data3;
    Uint8_x0016EF48 Data4[8];
} UUID_x0016EF48;
typedef struct {
        Sint8_x0016EF48 *data;
        Sint32_x0016EF48 len;
} SJCK_x0016EF48;
typedef struct {
        struct _sj_vtbl_x0016EF48 *vtbl;
} SJ_OBJ_x0016EF48;
typedef SJ_OBJ_x0016EF48 *SJ_x0016EF48;
typedef struct _sj_vtbl_x0016EF48 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EF48 sj);
        UUID_x0016EF48 *(*GetUuid)(SJ_x0016EF48 sj);
        void (*Reset)(SJ_x0016EF48 sj);
        void (*GetChunk)(SJ_x0016EF48 sj, Sint32_x0016EF48 id, Sint32_x0016EF48 nbyte, SJCK_x0016EF48 *ck);
        void (*UngetChunk)(SJ_x0016EF48 sj, Sint32_x0016EF48 id, SJCK_x0016EF48 *ck);
        void (*PutChunk)(SJ_x0016EF48 sj, Sint32_x0016EF48 id, SJCK_x0016EF48 *ck);
        Sint32_x0016EF48 (*GetNumData)(SJ_x0016EF48 sj, Sint32_x0016EF48 id);
        Sint32_x0016EF48 (*IsGetChunk)(SJ_x0016EF48 sj, Sint32_x0016EF48 id, Sint32_x0016EF48 nbyte, Sint32_x0016EF48 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EF48 sj,
                                        void (*func)(void *obj, Sint32_x0016EF48 ecode), void *obj);
} SJ_IF_x0016EF48;
typedef struct SJUNI_CK_x0016EF48 {
    struct SJUNI_CK_x0016EF48* next;
    Sint32_x0016EF48 unk4;
    SJCK_x0016EF48 ck;
} SJUNI_CK_x0016EF48;
typedef struct {
    SJ_OBJ_x0016EF48 sj;
    Sint8_x0016EF48 used;
    Sint8_x0016EF48 mode;
    UUID_x0016EF48* uuid;
    SJUNI_CK_x0016EF48* work;
    Sint32_x0016EF48 chunk_count;
    SJUNI_CK_x0016EF48* chain_pool;
    SJUNI_CK_x0016EF48* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EF48 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EF48;
typedef SJUNI_OBJ_x0016EF48* SJUNI_x0016EF48;
extern void SJUNI_EntryErrFunc_x0016EF48(SJUNI_x0016EF48 sjuni, void (*func)(void* obj, Sint32_x0016EF48 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EF48(SJUNI_x0016EF48 sjuni, void (*func)(void* obj, Sint32_x0016EF48 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
Sint32_x0016EF48 func_0016EF48_x0016EF48(SJUNI_x0016EF48 sjuni, Sint32_x0016EF48 id, Sint32_x0016EF48 nbyte, Sint32_x0016EF48* rbyte) __asm__("func_0016EF48");
/* SJUNI_IsGetChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016EF48 func_0016EF48_x0016EF48(SJUNI_x0016EF48 sjuni, Sint32_x0016EF48 id, Sint32_x0016EF48 nbyte, Sint32_x0016EF48* rbyte) {
    SJCK_x0016EF48 ck;
    *rbyte = 0;
    if ((Uint32_x0016EF48)id >= 4) {
        if (sjuni->err_func != 0) {
            sjuni->err_func(sjuni->err_obj, (-3));
        }
        return 0;
    }
    if (sjuni->unk18[id] == 0) {
        return 0;
    }
    ck = sjuni->unk18[id]->ck;
    *rbyte = ck.len;
    if (sjuni->mode == (1)) {
        if (ck.len >= nbyte) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return (ck.len == nbyte);
    }
}
typedef unsigned char Uint8_x0016EFD8;
typedef char Sint8_x0016EFD8;
typedef unsigned short Uint16_x0016EFD8;
typedef unsigned int Uint32_x0016EFD8;
typedef signed int Sint32_x0016EFD8;
typedef struct _UUID_x0016EFD8 {
    Uint32_x0016EFD8 Data1;
    Uint16_x0016EFD8 Data2;
    Uint16_x0016EFD8 Data3;
    Uint8_x0016EFD8 Data4[8];
} UUID_x0016EFD8;
typedef struct {
        Sint8_x0016EFD8 *data;
        Sint32_x0016EFD8 len;
} SJCK_x0016EFD8;
typedef struct {
        struct _sj_vtbl_x0016EFD8 *vtbl;
} SJ_OBJ_x0016EFD8;
typedef SJ_OBJ_x0016EFD8 *SJ_x0016EFD8;
typedef struct _sj_vtbl_x0016EFD8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016EFD8 sj);
        UUID_x0016EFD8 *(*GetUuid)(SJ_x0016EFD8 sj);
        void (*Reset)(SJ_x0016EFD8 sj);
        void (*GetChunk)(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id, Sint32_x0016EFD8 nbyte, SJCK_x0016EFD8 *ck);
        void (*UngetChunk)(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id, SJCK_x0016EFD8 *ck);
        void (*PutChunk)(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id, SJCK_x0016EFD8 *ck);
        Sint32_x0016EFD8 (*GetNumData)(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id);
        Sint32_x0016EFD8 (*IsGetChunk)(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id, Sint32_x0016EFD8 nbyte, Sint32_x0016EFD8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016EFD8 sj,
                                        void (*func)(void *obj, Sint32_x0016EFD8 ecode), void *obj);
} SJ_IF_x0016EFD8;
typedef struct SJUNI_CK_x0016EFD8 {
    struct SJUNI_CK_x0016EFD8* next;
    Sint32_x0016EFD8 unk4;
    SJCK_x0016EFD8 ck;
} SJUNI_CK_x0016EFD8;
typedef struct {
    SJ_OBJ_x0016EFD8 sj;
    Sint8_x0016EFD8 used;
    Sint8_x0016EFD8 mode;
    UUID_x0016EFD8* uuid;
    SJUNI_CK_x0016EFD8* work;
    Sint32_x0016EFD8 chunk_count;
    SJUNI_CK_x0016EFD8* chain_pool;
    SJUNI_CK_x0016EFD8* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016EFD8 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016EFD8;
typedef SJUNI_OBJ_x0016EFD8* SJUNI_x0016EFD8;
extern void SJUNI_EntryErrFunc_x0016EFD8(SJUNI_x0016EFD8 sjuni, void (*func)(void* obj, Sint32_x0016EFD8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016EFD8(SJUNI_x0016EFD8 sjuni, void (*func)(void* obj, Sint32_x0016EFD8 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
Sint32_x0016EFD8 func_0016EFD8_x0016EFD8(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id) __asm__("func_0016EFD8");
/* SJUNI_GetNumChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016EFD8 func_0016EFD8_x0016EFD8(SJ_x0016EFD8 sj, Sint32_x0016EFD8 id) {
    SJUNI_x0016EFD8 sjuni = (SJUNI_x0016EFD8)sj;
    SJUNI_CK_x0016EFD8* chunk = sjuni->unk18[id];
    Sint32_x0016EFD8 num_chunk = 0;
    while (chunk != 0) {
        chunk = chunk->next;
        num_chunk += 1;
    }
    return num_chunk;
}
typedef unsigned char Uint8_x0016F018;
typedef char Sint8_x0016F018;
typedef unsigned short Uint16_x0016F018;
typedef unsigned int Uint32_x0016F018;
typedef signed int Sint32_x0016F018;
typedef struct _UUID_x0016F018 {
    Uint32_x0016F018 Data1;
    Uint16_x0016F018 Data2;
    Uint16_x0016F018 Data3;
    Uint8_x0016F018 Data4[8];
} UUID_x0016F018;
typedef struct {
        Sint8_x0016F018 *data;
        Sint32_x0016F018 len;
} SJCK_x0016F018;
typedef struct {
        struct _sj_vtbl_x0016F018 *vtbl;
} SJ_OBJ_x0016F018;
typedef SJ_OBJ_x0016F018 *SJ_x0016F018;
typedef struct _sj_vtbl_x0016F018 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016F018 sj);
        UUID_x0016F018 *(*GetUuid)(SJ_x0016F018 sj);
        void (*Reset)(SJ_x0016F018 sj);
        void (*GetChunk)(SJ_x0016F018 sj, Sint32_x0016F018 id, Sint32_x0016F018 nbyte, SJCK_x0016F018 *ck);
        void (*UngetChunk)(SJ_x0016F018 sj, Sint32_x0016F018 id, SJCK_x0016F018 *ck);
        void (*PutChunk)(SJ_x0016F018 sj, Sint32_x0016F018 id, SJCK_x0016F018 *ck);
        Sint32_x0016F018 (*GetNumData)(SJ_x0016F018 sj, Sint32_x0016F018 id);
        Sint32_x0016F018 (*IsGetChunk)(SJ_x0016F018 sj, Sint32_x0016F018 id, Sint32_x0016F018 nbyte, Sint32_x0016F018 *rbyte);
        void (*EntryErrFunc)(SJ_x0016F018 sj,
                                        void (*func)(void *obj, Sint32_x0016F018 ecode), void *obj);
} SJ_IF_x0016F018;
typedef struct SJUNI_CK_x0016F018 {
    struct SJUNI_CK_x0016F018* next;
    Sint32_x0016F018 unk4;
    SJCK_x0016F018 ck;
} SJUNI_CK_x0016F018;
typedef struct {
    SJ_OBJ_x0016F018 sj;
    Sint8_x0016F018 used;
    Sint8_x0016F018 mode;
    UUID_x0016F018* uuid;
    SJUNI_CK_x0016F018* work;
    Sint32_x0016F018 chunk_count;
    SJUNI_CK_x0016F018* chain_pool;
    SJUNI_CK_x0016F018* unk18[4];
    void (*err_func)(void* obj, Sint32_x0016F018 ecode);
    void* err_obj;
} SJUNI_OBJ_x0016F018;
typedef SJUNI_OBJ_x0016F018* SJUNI_x0016F018;
extern void SJUNI_EntryErrFunc_x0016F018(SJUNI_x0016F018 sjuni, void (*func)(void* obj, Sint32_x0016F018 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
void SJUNI_EntryErrFunc_x0016F018(SJUNI_x0016F018 sjuni, void (*func)(void* obj, Sint32_x0016F018 ecode), void* obj) __asm__("SJUNI_EntryErrFunc");
Sint32_x0016F018 func_0016F018_x0016F018(SJ_x0016F018 sj) __asm__("func_0016F018");
/* SJUNI_GetNumChainPool: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_uni.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016F018 func_0016F018_x0016F018(SJ_x0016F018 sj) {
    SJUNI_x0016F018 sjuni = (SJUNI_x0016F018)sj;
    SJUNI_CK_x0016F018* chunk = sjuni->chain_pool;
    Sint32_x0016F018 num_chain_pool = 0;
    while (chunk != 0) {
        chunk = chunk->next;
        num_chain_pool += 1;
    }
    return num_chain_pool;
}
typedef char Sint8_x0016F050;
typedef signed int Sint32_x0016F050;
typedef struct {
        Sint8_x0016F050 *data;
        Sint32_x0016F050 len;
} SJCK_x0016F050;
void func_0016F050_x0016F050(SJCK_x0016F050* ck, Sint32_x0016F050 nbyte, SJCK_x0016F050* ck1, SJCK_x0016F050* ck2) __asm__("func_0016F050");
/* SJ_SplitChunk: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sj_utl.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016F050_x0016F050(SJCK_x0016F050* ck, Sint32_x0016F050 nbyte, SJCK_x0016F050* ck1, SJCK_x0016F050* ck2) {
    *ck1 = *ck;
    ck2->len = ck1->len;
    if (nbyte < ck1->len) {
        ck1->len = nbyte;
    }
    ck2->len -= ck1->len;
    if (ck2->len == 0) {
        ck2->data = 0;
    } else {
        ck2->data = ck1->data + ck1->len;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F0B0);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F148);
void func_0016F1F8(u8 *arg0, s32 arg1) {
    memset(*(s32 *)((u8 *)arg0 + 0), 0, *(s32 *)((u8 *)arg0 + 4));
    func_00128040(*(s32 *)((u8 *)arg0 + 0), arg1, 7);
    func_0016F0B0(*(s32 *)((u8 *)arg0 + 4) - 0x10, *(s32 *)((u8 *)arg0 + 0) + 8);
}
void func_0016F258(s32 arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = (s32) (arg0 + 0x10);
    *(s32 *)((u8 *)arg1 + 4) = func_0016F148(arg0 + 8);
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F290);
extern int sjrmt_rpc_rbuf_x0016F360[] __asm__("D_00481180");
extern int sjrmt_rpc_sbuf_x0016F360[] __asm__("D_00481080");
int dtx_call_iop_x0016F360(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
int func_0016F360_x0016F360(int word0, int word1, int word2) __asm__("func_0016F360");
/* sjrmt_iop_call32: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0016F360_x0016F360(int word0, int word1, int word2)
{
    sjrmt_rpc_sbuf_x0016F360[0] = word0;
    sjrmt_rpc_sbuf_x0016F360[1] = word1;
    sjrmt_rpc_sbuf_x0016F360[2] = word2;
    dtx_call_iop_x0016F360(32, sjrmt_rpc_sbuf_x0016F360, 3, sjrmt_rpc_rbuf_x0016F360, 1);
    return sjrmt_rpc_rbuf_x0016F360[0];
}
extern int sjrmt_rpc_rbuf_x0016F3B8[] __asm__("D_00481180");
extern int sjrmt_rpc_sbuf_x0016F3B8[] __asm__("D_00481080");
int dtx_call_iop_x0016F3B8(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
int func_0016F3B8_x0016F3B8(int word0, int word1) __asm__("func_0016F3B8");
/* sjrmt_iop_call33: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0016F3B8_x0016F3B8(int word0, int word1)
{
    sjrmt_rpc_sbuf_x0016F3B8[0] = word0;
    sjrmt_rpc_sbuf_x0016F3B8[1] = word1;
    dtx_call_iop_x0016F3B8(33, sjrmt_rpc_sbuf_x0016F3B8, 2, sjrmt_rpc_rbuf_x0016F3B8, 1);
    return sjrmt_rpc_rbuf_x0016F3B8[0];
}
typedef int s32_x0016F408;
typedef s32_x0016F408 intptr_t_x0016F408;
typedef char Sint8_x0016F408;
typedef unsigned int Uint32_x0016F408;
typedef signed int Sint32_x0016F408;
extern int* sceCdCallback_x0016F408(void (*func)(int)) __asm__("sceCdCallback");
intptr_t_x0016F408 DTX_CallUrpc_x0016F408(Uint32_x0016F408 call_id, intptr_t_x0016F408* snd_buf, Sint32_x0016F408 snd_buf_len, intptr_t_x0016F408* rcv_buf, Sint32_x0016F408 rcv_buf_len) __asm__("func_00165FB8");
extern intptr_t_x0016F408 D_006C0240_x0016F408[64] __asm__("D_00481180");
extern intptr_t_x0016F408 D_006C0140_x0016F408[52] __asm__("D_00481080");
void* func_0016F408_x0016F408(Sint32_x0016F408 arg0, Sint8_x0016F408* arg1, Sint32_x0016F408 arg2) __asm__("func_0016F408");
/* SJUNI_CreateRmt: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjr_clt.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void* func_0016F408_x0016F408(Sint32_x0016F408 arg0, Sint8_x0016F408* arg1, Sint32_x0016F408 arg2) {
    D_006C0140_x0016F408[0] = arg0;
    D_006C0140_x0016F408[1] = (intptr_t_x0016F408)arg1;
    D_006C0140_x0016F408[2] = arg2;
    DTX_CallUrpc_x0016F408(34, D_006C0140_x0016F408, 3, D_006C0240_x0016F408, 1);
    return (void*)D_006C0240_x0016F408[0];
}
typedef int s32_x0016F460;
typedef s32_x0016F460 intptr_t_x0016F460;
typedef unsigned int Uint32_x0016F460;
typedef signed int Sint32_x0016F460;
extern int* sceCdCallback_x0016F460(void (*func)(int)) __asm__("sceCdCallback");
intptr_t_x0016F460 DTX_CallUrpc_x0016F460(Uint32_x0016F460 call_id, intptr_t_x0016F460* snd_buf, Sint32_x0016F460 snd_buf_len, intptr_t_x0016F460* rcv_buf, Sint32_x0016F460 rcv_buf_len) __asm__("func_00165FB8");
extern intptr_t_x0016F460 D_006C0140_x0016F460[52] __asm__("D_00481080");
void func_0016F460_x0016F460(void* sjrmt) __asm__("func_0016F460");
/* SJRMT_Destroy: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjr_clt.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016F460_x0016F460(void* sjrmt) {
    D_006C0140_x0016F460[0] = sjrmt;
    DTX_CallUrpc_x0016F460(35, D_006C0140_x0016F460, 1, 0, 0);
}
extern int sjrmt_rpc_rbuf_x0016F490[] __asm__("D_00481180");
extern int sjrmt_rpc_sbuf_x0016F490[] __asm__("D_00481080");
extern int sjrmt_uuid_buf_x0016F490[] __asm__("D_00481040");
int dtx_call_iop_x0016F490(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
int *func_0016F490_x0016F490(void *sj) __asm__("func_0016F490");
/* sjrmt_get_uuid: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
int *func_0016F490_x0016F490(void *sj)
{
    sjrmt_rpc_sbuf_x0016F490[0] = (int)sj;
    dtx_call_iop_x0016F490(36, sjrmt_rpc_sbuf_x0016F490, 1, sjrmt_rpc_rbuf_x0016F490, 4);
    sjrmt_uuid_buf_x0016F490[0] = sjrmt_rpc_rbuf_x0016F490[0];
    sjrmt_uuid_buf_x0016F490[1] = sjrmt_rpc_rbuf_x0016F490[1];
    sjrmt_uuid_buf_x0016F490[2] = sjrmt_rpc_rbuf_x0016F490[2];
    sjrmt_uuid_buf_x0016F490[3] = sjrmt_rpc_rbuf_x0016F490[3];
    return sjrmt_uuid_buf_x0016F490;
}
extern int sjrmt_rpc_sbuf_x0016F500[] __asm__("D_00481080");
int dtx_call_iop_x0016F500(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
void func_0016F500_x0016F500(void *sj) __asm__("func_0016F500");
/* sjrmt_reset: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016F500_x0016F500(void *sj)
{
    sjrmt_rpc_sbuf_x0016F500[0] = (int)sj;
    dtx_call_iop_x0016F500(37, sjrmt_rpc_sbuf_x0016F500, 1, 0, 0);
}
typedef struct SjChunk_x0016F530 {
    char *data;
    int len;
} SjChunk_x0016F530;
struct SjChunk_x0016F530;
extern int sjrmt_rpc_rbuf_x0016F530[] __asm__("D_00481180");
extern int sjrmt_rpc_sbuf_x0016F530[] __asm__("D_00481080");
int dtx_call_iop_x0016F530(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
void func_0016F530_x0016F530(void *sj, int id, int nbyte, SjChunk_x0016F530 *ck) __asm__("func_0016F530");
/* sjrmt_get_chunk: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016F530_x0016F530(void *sj, int id, int nbyte, SjChunk_x0016F530 *ck)
{
    sjrmt_rpc_sbuf_x0016F530[0] = (int)sj;
    sjrmt_rpc_sbuf_x0016F530[1] = id;
    sjrmt_rpc_sbuf_x0016F530[2] = nbyte;
    dtx_call_iop_x0016F530(38, sjrmt_rpc_sbuf_x0016F530, 3, sjrmt_rpc_rbuf_x0016F530, 2);
    ck->data = (char *)sjrmt_rpc_rbuf_x0016F530[0];
    ck->len = sjrmt_rpc_rbuf_x0016F530[1];
}
typedef struct SjChunk_x0016F5A0 {
    char *data;
    int len;
} SjChunk_x0016F5A0;
struct SjChunk_x0016F5A0;
extern int sjrmt_rpc_sbuf_x0016F5A0[] __asm__("D_00481080");
int dtx_call_iop_x0016F5A0(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
void func_0016F5A0_x0016F5A0(void *sj, int id, SjChunk_x0016F5A0 *ck) __asm__("func_0016F5A0");
/* sjrmt_put_chunk: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016F5A0_x0016F5A0(void *sj, int id, SjChunk_x0016F5A0 *ck)
{
    sjrmt_rpc_sbuf_x0016F5A0[0] = (int)sj;
    sjrmt_rpc_sbuf_x0016F5A0[1] = id;
    sjrmt_rpc_sbuf_x0016F5A0[2] = (int)ck->data;
    sjrmt_rpc_sbuf_x0016F5A0[3] = ck->len;
    dtx_call_iop_x0016F5A0(39, sjrmt_rpc_sbuf_x0016F5A0, 4, 0, 0);
}
typedef struct SjChunk_x0016F5F0 {
    char *data;
    int len;
} SjChunk_x0016F5F0;
struct SjChunk_x0016F5F0;
extern int sjrmt_rpc_sbuf_x0016F5F0[] __asm__("D_00481080");
int dtx_call_iop_x0016F5F0(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
void func_0016F5F0_x0016F5F0(void *sj, int id, SjChunk_x0016F5F0 *ck) __asm__("func_0016F5F0");
/* sjrmt_unget_chunk: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0016F5F0_x0016F5F0(void *sj, int id, SjChunk_x0016F5F0 *ck)
{
    sjrmt_rpc_sbuf_x0016F5F0[0] = (int)sj;
    sjrmt_rpc_sbuf_x0016F5F0[1] = id;
    sjrmt_rpc_sbuf_x0016F5F0[2] = (int)ck->data;
    sjrmt_rpc_sbuf_x0016F5F0[3] = ck->len;
    dtx_call_iop_x0016F5F0(40, sjrmt_rpc_sbuf_x0016F5F0, 4, 0, 0);
}
extern int D_00758400_x0016F640[2] __asm__("D_00481080");
extern int D_00758500_x0016F640[1] __asm__("D_00481180");
extern int DTX_CallUrpc_x0016F640(int cmd, void *in, int nin, void *out, int nout) __asm__("func_00165FB8");
int func_0016F640_x0016F640(int a, int b) __asm__("func_0016F640");
/* SJRMT_GetNumData: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033adc0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0016F640_x0016F640(int a, int b)
{
    D_00758400_x0016F640[0] = a;
    D_00758400_x0016F640[1] = b;
    DTX_CallUrpc_x0016F640(0x29, D_00758400_x0016F640, 2, D_00758500_x0016F640, 1);
    return D_00758500_x0016F640[0];
}
extern int sjrmt_rpc_rbuf_x0016F690[] __asm__("D_00481180");
extern int sjrmt_rpc_sbuf_x0016F690[] __asm__("D_00481080");
int dtx_call_iop_x0016F690(int fno, int *in, int nin, int *out, int nout) __asm__("func_00165FB8");
int func_0016F690_x0016F690(void *sj, int id, int nbyte, int *rbyte) __asm__("func_0016F690");
/* sjrmt_is_get_chunk: from https://github.com/new-coke/rez-decomp (src/cri/sjrmt.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0016F690_x0016F690(void *sj, int id, int nbyte, int *rbyte)
{
    sjrmt_rpc_sbuf_x0016F690[0] = (int)sj;
    sjrmt_rpc_sbuf_x0016F690[1] = id;
    sjrmt_rpc_sbuf_x0016F690[2] = nbyte;
    dtx_call_iop_x0016F690(42, sjrmt_rpc_sbuf_x0016F690, 3, sjrmt_rpc_rbuf_x0016F690, 1);
    *rbyte = sjrmt_rpc_rbuf_x0016F690[1];
    return sjrmt_rpc_rbuf_x0016F690[0];
}
typedef signed int Sint32_x0016F6F8;
typedef char Char8_x0016F6F8;
extern int* sceCdCallback_x0016F6F8(void (*func)(int)) __asm__("sceCdCallback");
void DTX_Init_x0016F6F8() __asm__("func_00165E50");
extern Char8_x0016F6F8* volatile sjrmt_build_x0016F6F8 __asm__("D_00422778");
extern Sint32_x0016F6F8 sjrmt_init_cnt_x0016F6F8 __asm__("D_0042277C");
void func_0016F6F8_x0016F6F8() __asm__("func_0016F6F8");
/* SJRMT_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjr_clt.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016F6F8_x0016F6F8() {
    sjrmt_build_x0016F6F8;
    if (sjrmt_init_cnt_x0016F6F8 == 0) {
        DTX_Init_x0016F6F8();
    }
    sjrmt_init_cnt_x0016F6F8 += 1;
}
void func_0016F748(void) {
    s32 temp_v0;

    temp_v0 = D_0042277C - 1;
    D_0042277C = temp_v0;
    if (temp_v0 == 0) {
        func_00165F40();
    }
}
typedef unsigned char Uint8_x0016F788;
typedef char Sint8_x0016F788;
typedef unsigned short Uint16_x0016F788;
typedef signed short Sint16_x0016F788;
typedef unsigned int Uint32_x0016F788;
typedef signed int Sint32_x0016F788;
typedef struct _UUID_x0016F788 {
    Uint32_x0016F788 Data1;
    Uint16_x0016F788 Data2;
    Uint16_x0016F788 Data3;
    Uint8_x0016F788 Data4[8];
} UUID_x0016F788;
typedef struct {
        Sint8_x0016F788 *data;
        Sint32_x0016F788 len;
} SJCK_x0016F788;
typedef struct {
        struct _sj_vtbl_x0016F788 *vtbl;
} SJ_OBJ_x0016F788;
typedef SJ_OBJ_x0016F788 *SJ_x0016F788;
typedef struct _sj_vtbl_x0016F788 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016F788 sj);
        UUID_x0016F788 *(*GetUuid)(SJ_x0016F788 sj);
        void (*Reset)(SJ_x0016F788 sj);
        void (*GetChunk)(SJ_x0016F788 sj, Sint32_x0016F788 id, Sint32_x0016F788 nbyte, SJCK_x0016F788 *ck);
        void (*UngetChunk)(SJ_x0016F788 sj, Sint32_x0016F788 id, SJCK_x0016F788 *ck);
        void (*PutChunk)(SJ_x0016F788 sj, Sint32_x0016F788 id, SJCK_x0016F788 *ck);
        Sint32_x0016F788 (*GetNumData)(SJ_x0016F788 sj, Sint32_x0016F788 id);
        Sint32_x0016F788 (*IsGetChunk)(SJ_x0016F788 sj, Sint32_x0016F788 id, Sint32_x0016F788 nbyte, Sint32_x0016F788 *rbyte);
        void (*EntryErrFunc)(SJ_x0016F788 sj,
                                        void (*func)(void *obj, Sint32_x0016F788 ecode), void *obj);
} SJ_IF_x0016F788;
void SJCRS_Lock_x0016F788(void) __asm__("func_0016DAD8");
void SJCRS_Unlock_x0016F788(void) __asm__("func_0016DAF0");
extern int* sceCdCallback_x0016F788(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint32_x0016F788 unk0;
    SJ_x0016F788 sj;
} SJX_UNK_0_x0016F788;
typedef struct {
    Sint8_x0016F788 unk0;
    Sint8_x0016F788 id;
    Sint16_x0016F788 unk2;
    SJX_UNK_0_x0016F788* unk4;
    SJCK_x0016F788 chunk;
} SJX_UNK_1_x0016F788;
typedef struct {
    Sint32_x0016F788 count;
    Sint32_x0016F788 reserved4;
    Sint32_x0016F788 reserved8;
    Sint32_x0016F788 reservedC;
    SJX_UNK_1_x0016F788 items[0];
} SJX_UNK_2_x0016F788;
extern int AddIntcHandler_x0016F788(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016F788(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_0016F788_x0016F788(void* obj, void* arg1, Sint32_x0016F788 arg2) __asm__("func_0016F788");
/* sjx_rcvcbf: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016F788_x0016F788(void* obj, void* arg1, Sint32_x0016F788 arg2) {
    SJX_UNK_2_x0016F788* head = arg1;
    SJX_UNK_1_x0016F788* cur;
    Sint32_x0016F788 count;
    Sint32_x0016F788 i;
    if (head == 0) {
        while (1) {}
    }
    count = head->count;
    SJCRS_Lock_x0016F788();
    for (i = 0; i < count; i++) {
        cur = &head->items[i];
        if (cur->unk0 == 0) {
            (*(cur->unk4->sj)->vtbl->PutChunk)(cur->unk4->sj, cur->id, &cur->chunk);
        }
    }
    SJCRS_Unlock_x0016F788();
}
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F828);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F938);
INCLUDE_ASM("asm/nonmatchings/cri/sj", func_0016F9C8);
void func_0016FAD8(void) {
    func_001660C0();
}
typedef unsigned int size_t_x0016FAF0;
typedef int s32_x0016FAF0;
typedef unsigned int u32_x0016FAF0;
typedef s32_x0016FAF0 intptr_t_x0016FAF0;
typedef u32_x0016FAF0 uintptr_t_x0016FAF0;
typedef char Sint8_x0016FAF0;
typedef unsigned int Uint32_x0016FAF0;
typedef signed int Sint32_x0016FAF0;
extern int* sceCdCallback_x0016FAF0(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0016FAF0(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0016FAF0;
typedef void (*RcvCbf_x0016FAF0)(void*, void*, Sint32_x0016FAF0);
typedef void (*SndCbf_x0016FAF0)(void*, void*, Sint32_x0016FAF0);
typedef struct {
    Sint8_x0016FAF0 unk0;
    Sint8_x0016FAF0 unk1;
    Sint8_x0016FAF0 unk2;
    Sint8_x0016FAF0 unk3;
    void* unk4;
    Sint32_x0016FAF0 unk8;
    void* unkC;
    Sint32_x0016FAF0 unk10;
    Sint32_x0016FAF0* unk14;
    void* unk18;
    Sint32_x0016FAF0 unk1C;
    RcvCbf_x0016FAF0 rcvcbf;
    void* rcvcbf_obj;
    SndCbf_x0016FAF0 sndcbf;
    void* sndcbf_obj;
    sceSifDmaData_x0016FAF0 dma_data;
    Sint32_x0016FAF0 unk40;
} DTX_OBJ_x0016FAF0;
typedef DTX_OBJ_x0016FAF0* DTX_x0016FAF0;
void DTX_Init_x0016FAF0() __asm__("func_00165E50");
DTX_x0016FAF0 DTX_Create_x0016FAF0(Sint32_x0016FAF0 id, void* eewk, void* iopwk, Sint32_x0016FAF0 wklen) __asm__("DTX_Create");
void DTX_SetRcvCbf_x0016FAF0(DTX_x0016FAF0 dtx, RcvCbf_x0016FAF0 func, void* object) __asm__("func_00165CD0");
void DTX_SetSndCbf_x0016FAF0(DTX_x0016FAF0 dtx, SndCbf_x0016FAF0 func, void* object) __asm__("func_00165CE0");
intptr_t_x0016FAF0 DTX_CallUrpc_x0016FAF0(Uint32_x0016FAF0 call_id, intptr_t_x0016FAF0* snd_buf, Sint32_x0016FAF0 snd_buf_len, intptr_t_x0016FAF0* rcv_buf, Sint32_x0016FAF0 rcv_buf_len) __asm__("func_00165FB8");
extern int AddIntcHandler_x0016FAF0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016FAF0(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x0016FAF0(const char* fmt, ...) __asm__("scePrintf");
extern void* sceSifAllocIopHeap_x0016FAF0(unsigned int) __asm__("func_00112598");
void* memset_x0016FAF0(void* s, int c, size_t_x0016FAF0 n) __asm__("memset");
extern Sint32_x0016FAF0 sjx_init_cnt_x0016FAF0 __asm__("D_00422784");
extern void* sjx_eewk_x0016FAF0 __asm__("D_00422788");
extern void* sjx_iopwk0_x0016FAF0 __asm__("D_0042278C");
extern void* sjx_iopwk_x0016FAF0 __asm__("D_00422790");
extern DTX_x0016FAF0 sjx_dtx_x0016FAF0 __asm__("D_00422A18");
extern Sint32_x0016FAF0 sjx_wklen_x0016FAF0 __asm__("D_00422A1C");
extern Sint8_x0016FAF0 sjx_ee_work_x0016FAF0[0x8D0] __asm__("D_00422A20");
void sjx_rcvcbf_x0016FAF0(void* obj, void* arg1, Sint32_x0016FAF0 arg2) __asm__("func_0016F788");
void sjx_sndcbf_x0016FAF0(void* object, void* arg1, Sint32_x0016FAF0 arg2) __asm__("func_0016F828");
extern char ext_str0_x0016FAF0[] __asm__("D_00464E18");
extern char ext_str1_x0016FAF0[] __asm__("D_00464DE8");
void func_0016FAF0_x0016FAF0() __asm__("func_0016FAF0");
/* SJX_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016FAF0_x0016FAF0() {
    if (sjx_init_cnt_x0016FAF0 == 0) {
        memset_x0016FAF0(sjx_ee_work_x0016FAF0, 0, sizeof(sjx_ee_work_x0016FAF0));
        DTX_Init_x0016FAF0();
        sjx_wklen_x0016FAF0 = 0x880;
        sjx_eewk_x0016FAF0 = (void*)(((uintptr_t_x0016FAF0)sjx_ee_work_x0016FAF0 + 0x40) & ~0x3F);
        if (sjx_iopwk0_x0016FAF0 == 0) {
            sjx_iopwk0_x0016FAF0 = sceSifAllocIopHeap_x0016FAF0(0x8D0);
            if (sjx_iopwk0_x0016FAF0 == 0) {
                scePrintf_x0016FAF0(ext_str1_x0016FAF0);
                while (1) {}
            }
        }
        sjx_iopwk_x0016FAF0 = (void*)(((uintptr_t_x0016FAF0)sjx_iopwk0_x0016FAF0 + 0x40) & ~0x3F);
        sjx_dtx_x0016FAF0 = DTX_Create_x0016FAF0(0, sjx_eewk_x0016FAF0, sjx_iopwk_x0016FAF0, sjx_wklen_x0016FAF0);
        if (sjx_dtx_x0016FAF0 == 0) {
            scePrintf_x0016FAF0(ext_str0_x0016FAF0);
            while (1) {}
        }
        DTX_SetRcvCbf_x0016FAF0(sjx_dtx_x0016FAF0, sjx_rcvcbf_x0016FAF0, 0);
        DTX_SetSndCbf_x0016FAF0(sjx_dtx_x0016FAF0, sjx_sndcbf_x0016FAF0, 0);
        DTX_CallUrpc_x0016FAF0(3, 0, 0, 0, 0);
    }
    sjx_init_cnt_x0016FAF0 += 1;
}
void func_0016FC88(void) {
    s32 temp_v0;

    temp_v0 = D_00422784 - 1;
    D_00422784 = temp_v0;
    if (temp_v0 == 0) {
        func_00165C68(D_00422A18);
        D_00422A18 = 0;
        if (D_0042278C != 0) {
            func_00112700(D_0042278C);
            D_0042278C = 0;
        }
        func_00165F40();
    }
}
typedef unsigned int size_t_x0016FD00;
typedef int s32_x0016FD00;
typedef unsigned int u32_x0016FD00;
typedef s32_x0016FD00 intptr_t_x0016FD00;
typedef u32_x0016FD00 uintptr_t_x0016FD00;
typedef unsigned char Uint8_x0016FD00;
typedef char Sint8_x0016FD00;
typedef unsigned short Uint16_x0016FD00;
typedef signed short Sint16_x0016FD00;
typedef unsigned int Uint32_x0016FD00;
typedef signed int Sint32_x0016FD00;
typedef struct _UUID_x0016FD00 {
    Uint32_x0016FD00 Data1;
    Uint16_x0016FD00 Data2;
    Uint16_x0016FD00 Data3;
    Uint8_x0016FD00 Data4[8];
} UUID_x0016FD00;
typedef struct {
        Sint8_x0016FD00 *data;
        Sint32_x0016FD00 len;
} SJCK_x0016FD00;
typedef struct {
        struct _sj_vtbl_x0016FD00 *vtbl;
} SJ_OBJ_x0016FD00;
typedef SJ_OBJ_x0016FD00 *SJ_x0016FD00;
typedef struct _sj_vtbl_x0016FD00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016FD00 sj);
        UUID_x0016FD00 *(*GetUuid)(SJ_x0016FD00 sj);
        void (*Reset)(SJ_x0016FD00 sj);
        void (*GetChunk)(SJ_x0016FD00 sj, Sint32_x0016FD00 id, Sint32_x0016FD00 nbyte, SJCK_x0016FD00 *ck);
        void (*UngetChunk)(SJ_x0016FD00 sj, Sint32_x0016FD00 id, SJCK_x0016FD00 *ck);
        void (*PutChunk)(SJ_x0016FD00 sj, Sint32_x0016FD00 id, SJCK_x0016FD00 *ck);
        Sint32_x0016FD00 (*GetNumData)(SJ_x0016FD00 sj, Sint32_x0016FD00 id);
        Sint32_x0016FD00 (*IsGetChunk)(SJ_x0016FD00 sj, Sint32_x0016FD00 id, Sint32_x0016FD00 nbyte, Sint32_x0016FD00 *rbyte);
        void (*EntryErrFunc)(SJ_x0016FD00 sj,
                                        void (*func)(void *obj, Sint32_x0016FD00 ecode), void *obj);
} SJ_IF_x0016FD00;
extern int* sceCdCallback_x0016FD00(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint32_x0016FD00 unk0;
    SJ_x0016FD00 sj;
} SJX_UNK_0_x0016FD00;
typedef struct {
    Sint8_x0016FD00 used;
    Sint8_x0016FD00 unk1;
    Sint16_x0016FD00 unk2;
    SJ_x0016FD00 sj;
    void* unk8;
    Sint32_x0016FD00 unkC;
    SJX_UNK_0_x0016FD00* unk10;
} SJX_OBJ_x0016FD00;
typedef SJX_OBJ_x0016FD00* SJX_x0016FD00;
intptr_t_x0016FD00 DTX_CallUrpc_x0016FD00(Uint32_x0016FD00 call_id, intptr_t_x0016FD00* snd_buf, Sint32_x0016FD00 snd_buf_len, intptr_t_x0016FD00* rcv_buf, Sint32_x0016FD00 rcv_buf_len) __asm__("func_00165FB8");
extern int AddIntcHandler_x0016FD00(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016FD00(int, int (*)(int), int) __asm__("AddDmacHandler");
void scePrintf_x0016FD00(const char* fmt, ...) __asm__("scePrintf");
void* memset_x0016FD00(void* s, int c, size_t_x0016FD00 n) __asm__("memset");
extern SJX_OBJ_x0016FD00 sjx_obj_x0016FD00[32] __asm__("D_00422798");
extern char ext_str0_x0016FD00[] __asm__("D_00464E40");
SJX_x0016FD00 func_0016FD00_x0016FD00(SJ_x0016FD00 sj, void* arg1, Sint32_x0016FD00 arg2) __asm__("func_0016FD00");
/* SJX_Create: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
SJX_x0016FD00 func_0016FD00_x0016FD00(SJ_x0016FD00 sj, void* arg1, Sint32_x0016FD00 arg2) {
    uintptr_t_x0016FD00 rpc_buf[4];
    SJX_x0016FD00 sjx;
    Sint32_x0016FD00 i;
    for (i = 0; i < 32; i++) {
        sjx = &sjx_obj_x0016FD00[i];
        if (sjx->used == 0) {
            break;
        }
    }
    if (i == 32) {
        return 0;
    }
    memset_x0016FD00(sjx, 0, sizeof(SJX_OBJ_x0016FD00));
    sjx->sj = sj;
    sjx->unkC = arg2;
    sjx->unk8 = arg1;
    rpc_buf[0] = (uintptr_t_x0016FD00)sj;
    rpc_buf[1] = arg1;
    rpc_buf[2] = arg2;
    rpc_buf[3] = (uintptr_t_x0016FD00)sjx;
    sjx->unk10 = DTX_CallUrpc_x0016FD00(0, rpc_buf, 4, rpc_buf, 1);
    if (sjx->unk10 == 0) {
        scePrintf_x0016FD00(ext_str0_x0016FD00);
        return 0;
    }
    sjx->used = 1;
    return sjx;
}
typedef int s32_x0016FDF8;
typedef s32_x0016FDF8 intptr_t_x0016FDF8;
typedef unsigned char Uint8_x0016FDF8;
typedef char Sint8_x0016FDF8;
typedef unsigned short Uint16_x0016FDF8;
typedef signed short Sint16_x0016FDF8;
typedef unsigned int Uint32_x0016FDF8;
typedef signed int Sint32_x0016FDF8;
typedef struct _UUID_x0016FDF8 {
    Uint32_x0016FDF8 Data1;
    Uint16_x0016FDF8 Data2;
    Uint16_x0016FDF8 Data3;
    Uint8_x0016FDF8 Data4[8];
} UUID_x0016FDF8;
typedef struct {
        Sint8_x0016FDF8 *data;
        Sint32_x0016FDF8 len;
} SJCK_x0016FDF8;
typedef struct {
        struct _sj_vtbl_x0016FDF8 *vtbl;
} SJ_OBJ_x0016FDF8;
typedef SJ_OBJ_x0016FDF8 *SJ_x0016FDF8;
typedef struct _sj_vtbl_x0016FDF8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0016FDF8 sj);
        UUID_x0016FDF8 *(*GetUuid)(SJ_x0016FDF8 sj);
        void (*Reset)(SJ_x0016FDF8 sj);
        void (*GetChunk)(SJ_x0016FDF8 sj, Sint32_x0016FDF8 id, Sint32_x0016FDF8 nbyte, SJCK_x0016FDF8 *ck);
        void (*UngetChunk)(SJ_x0016FDF8 sj, Sint32_x0016FDF8 id, SJCK_x0016FDF8 *ck);
        void (*PutChunk)(SJ_x0016FDF8 sj, Sint32_x0016FDF8 id, SJCK_x0016FDF8 *ck);
        Sint32_x0016FDF8 (*GetNumData)(SJ_x0016FDF8 sj, Sint32_x0016FDF8 id);
        Sint32_x0016FDF8 (*IsGetChunk)(SJ_x0016FDF8 sj, Sint32_x0016FDF8 id, Sint32_x0016FDF8 nbyte, Sint32_x0016FDF8 *rbyte);
        void (*EntryErrFunc)(SJ_x0016FDF8 sj,
                                        void (*func)(void *obj, Sint32_x0016FDF8 ecode), void *obj);
} SJ_IF_x0016FDF8;
extern int* sceCdCallback_x0016FDF8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint32_x0016FDF8 unk0;
    SJ_x0016FDF8 sj;
} SJX_UNK_0_x0016FDF8;
typedef struct {
    Sint8_x0016FDF8 used;
    Sint8_x0016FDF8 unk1;
    Sint16_x0016FDF8 unk2;
    SJ_x0016FDF8 sj;
    void* unk8;
    Sint32_x0016FDF8 unkC;
    SJX_UNK_0_x0016FDF8* unk10;
} SJX_OBJ_x0016FDF8;
typedef SJX_OBJ_x0016FDF8* SJX_x0016FDF8;
intptr_t_x0016FDF8 DTX_CallUrpc_x0016FDF8(Uint32_x0016FDF8 call_id, intptr_t_x0016FDF8* snd_buf, Sint32_x0016FDF8 snd_buf_len, intptr_t_x0016FDF8* rcv_buf, Sint32_x0016FDF8 rcv_buf_len) __asm__("func_00165FB8");
extern int AddIntcHandler_x0016FDF8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x0016FDF8(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_0016FDF8_x0016FDF8(SJX_x0016FDF8 sjx) __asm__("func_0016FDF8");
/* SJX_Destroy: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/sjx.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016FDF8_x0016FDF8(SJX_x0016FDF8 sjx) {
    Sint32_x0016FDF8 rpc_buf[1];
    rpc_buf[0] = sjx->unk10;
    DTX_CallUrpc_x0016FDF8(1, rpc_buf, 1, 0, 0);
    sjx->used = 0;
}
void func_0016FE40(u8 *arg0) {
    *(u16 *)((u8 *)arg0 + 2) = (u16) (*(u16 *)((u8 *)arg0 + 2) + 1);
}
typedef signed int Sint32_x0016FE50;
typedef char Char8_x0016FE50;
extern void SVM_SetCbErr_x0016FE50(void (*callback)(void*, Char8_x0016FE50*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x0016FE50 SVM_SetCbSvr_x0016FE50(Sint32_x0016FE50, Sint32_x0016FE50 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x0016FE50(Sint32_x0016FE50, Sint32_x0016FE50, Sint32_x0016FE50 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x0016FE50(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
extern void SVM_SetCbUnlock_x0016FE50(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback_x0016FE50;
extern volatile Sint32_x0016FE50 svm_lock_level_x0016FE50 __asm__("D_004232F8");
extern volatile Sint32_x0016FE50 svm_locking_type_x0016FE50 __asm__("D_004232FC");
extern SVMLockCallback_x0016FE50 svm_lock_callback_x0016FE50 __asm__("D_00481460");
Sint32_x0016FE50 SVM_SetCbSvr_x0016FE50(Sint32_x0016FE50 index, Sint32_x0016FE50 (*func)(void*), void* object) __asm__("SVM_SetCbSvr");
void SVM_SetCbSvrId_x0016FE50(Sint32_x0016FE50 svtype, Sint32_x0016FE50 id, Sint32_x0016FE50 (*func)(void*), void* object) __asm__("SVM_SetCbSvrId");
void SVM_SetCbErr_x0016FE50(void (*func)(void*, Char8_x0016FE50*), void* object) __asm__("SVM_SetCbErr");
void SVM_SetCbLock_x0016FE50(void (*func)(void*), void* object) __asm__("SVM_SetCbLock");
void SVM_SetCbUnlock_x0016FE50(void (*func)(void*), void* object) __asm__("SVM_SetCbUnlock");
void func_0016FE50_x0016FE50(Sint32_x0016FE50 type) __asm__("func_0016FE50");
/* svm_lock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/svm.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_0016FE50_x0016FE50(Sint32_x0016FE50 type) {
    if (svm_lock_callback_x0016FE50.func == 0) {
        return;
    }
    svm_lock_callback_x0016FE50.func(svm_lock_callback_x0016FE50.object);
    if (svm_lock_level_x0016FE50 == 0) {
        svm_locking_type_x0016FE50 = type;
    }
    svm_lock_level_x0016FE50 += 1;
}
