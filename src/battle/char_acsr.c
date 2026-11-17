#include "common.h"

#include "battle/character.h"

/* An accessory (char_acsr.c): a small model hung on a joint of its owner's model. */
typedef struct AcsrOwner {
    /* 0x000 */ s32 unk000;
    /* 0x004 */ s32 unk004;
    /* 0x008 */ u8 unk008[0x408 - 0x008];
    /* 0x408 */ Mtx *matrices;
} AcsrOwner;

typedef struct AcsrData {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 file;
} AcsrData;

typedef struct AcsrFile {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s16 state;
    /* 0x06 */ u8 unk06[0x40 - 0x06];
    /* 0x40 */ struct AcsrFile *next;
    /* 0x44 */ u8 unk44[0x50 - 0x44];
    /* 0x50 */ s32 data;
} AcsrFile;

typedef struct Acsr {
    /* 0x00 */ s32 model;
    /* 0x04 */ s32 unk04[2];
    /* 0x0C */ AcsrData *data;
    /* 0x10 */ AcsrOwner *owner;
    /* 0x14 */ s32 joint;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ void *unk1C;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ AcsrFile *file;
    /* 0x2C */ AcsrFile *loading;
} Acsr;

typedef struct SizeQuery {
    s32 unk00[4];
    s32 count;
    s32 unk14[3];
} SizeQuery;

typedef struct SizeQuery2 {
    s32 unk00[4];
    s32 count;
    s32 unk14[7];
} SizeQuery2;

extern char D_00469338[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void amHeap_Free(void *);
extern void memset(void *, s32, s32);
extern s32 amObject_GetSize(void *);
extern AcsrFile *amCdFs_ReadFileId(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void func_00145CC0(s32, void *);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern void func_0013B960(Mtx *);
extern void func_0013E0A0(s32);
extern void amFile_Load(s32);
extern s32 func_001A50F0(s32, s32);
extern s32 amObject_Create(s32, s32);
extern s32 amMotion_FindBone(s32, AcsrData *);

static inline void Acsr_Draw(Acsr *a) {
    func_00145CC0(a->unk18, a->unk1C);
    func_0013B0B0(0);
    if (a->owner != 0) {
        func_0013B960(&a->owner->matrices[a->joint]);
    }
    func_0013E0A0(a->model);
    func_0013B110(1);
}

extern s32 func_0029D8D0(void);
extern Vec4 *func_0029D4A0(void);
extern void func_00133D90(f32);
extern void func_00133D80(u32);
extern void func_00133920(s32, s32, s32, s32, s32);

typedef struct ClothPt {
    Vec4 v[8];
} ClothPt;

typedef struct AcsrCloth {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ ClothPt *pts;
    /* 0x58 */ u8 unk58[0x60 - 0x58];
    /* 0x60 */ s32 color;
    /* 0x64 */ s32 color2;
    /* 0x68 */ s32 unk68;
    /* 0x6C */ s16 w;
    /* 0x6E */ s16 h;
} AcsrCloth;

extern u8 D_003F0800[];
extern s64 D_003F01C8[];
extern void amDraw_SetPacketMode(s32);
extern void amDraw_ClosePacket(s32);
extern void amDraw_FlushPacket(void);
extern void func_00134690(s32, s32, s32, s32, s64, s32);
extern void func_00136310(ClothPt *, ClothPt *);
extern void func_00135C60(ClothPt *, Vec4 *, Vec4 *);

void func_001D0B90(Acsr *a) {
    if (a != 0) {
        Acsr_Draw(a);
    }
}
void func_001D0C00(Acsr *a) {
    Vec4 *c;
    if (a != 0 && !(func_0029D8D0() & 2)) {
        Acsr_Draw(a);
    }
    if (a != 0 && (func_0029D8D0() & 2)) {
        c = func_0029D4A0();
        func_00133D90(c->w);
        func_00133D80(((u32)(255.0f * c->z) << 16) | ((u32)(255.0f * c->y) << 8) | (u32)(255.0f * c->x));
        func_00133920(0x8000, 0, 0, 0x8000, 0);
        Acsr_Draw(a);
        func_00133920(0, 0x8000, 0, 0, 0);
        func_00133D90(0.0f);
    }
}
void func_001D0E40(Acsr *a) {
    if (a != 0) {
        if (a->unk20 != 0) {
            amCdFs_ReleaseCache(a->file);
        } else {
            amCdFs_Close(a->file, 0);
        }
        amHeap_Free(a);
    }
}
void func_001D0EA0(Acsr *a, AcsrOwner *owner, void *slot) {
    AcsrFile *f;
    if (a != 0) {
        a->owner = owner;
        a->unk1C = slot;
        f = a->file;
        if (f != 0) {
            a->file = f->next;
            a->unk20 = f->next->data;
            amFile_Load(a->unk20);
            f->next = 0;
            amCdFs_Close(f, 0);
            a->unk24 = func_001A50F0(a->unk20, 0);
            amFile_Load(a->unk24);
            a->unk18 = func_001A50F0(a->unk20, 1);
            amFile_Load(a->unk18);
        }
        if (a->unk24 != 0) {
            a->model = amObject_Create(a->unk24, a->model);
        }
        a->joint = -1;
        if (a->owner != 0) {
            a->joint = amMotion_FindBone(a->owner->unk004, a->data);
        }
    }
}
s32 func_001D0F80(Acsr *a) {
    if (a == 0 || a->loading == 0 || a->loading->state == 3) {
        return 1;
    }
    return 0;
}
Acsr *func_001D0FC0(AcsrData *data) {
    Acsr *a;
    s32 size;
    SizeQuery2 q;
    if (data == 0) {
        return 0;
    }
    q.count = 0x10;
    size = ((amObject_GetSize(&q) + 15) & ~15) + 0x30;
    a = amHeap_Alloc(size, 1, D_00469338, 113);
    memset(a, 0, size);
    a->model = (s32)((u8 *)a + 0x30);
    a->data = data;
    a->loading = 0;
    if (data->file != -1) {
        a->loading = a->file = amCdFs_ReadFileId(data->file, 0, 1);
    }
    return a;
}
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D1090);
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D12A0);
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D13A0);
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D14A0);
#if 0
/* Does not match yet: 11 of 74 instructions differ. */
void func_001D15C0(AcsrCloth *c) {
    s32 w;
    s32 h;
    s32 i;
    s32 j;
    if (c != 0) {
        func_0013B0B0(D_003F0800);
        w = c->w;
        h = c->h;
        amDraw_SetPacketMode(1);
        j = 0;
        for (i = 0; i < h - 1; i++) {
            if (i != 0) {
                amDraw_ClosePacket(-1);
            } else {
                func_00134690(1, 0x800200, 0, -1, 0, 0);
            }
            for (j = 0; j < w; j++) {
                func_00136310(&c->pts[j + c->w * i], &c->pts[j + c->w * (i + 1)]);
            }
        }
        amDraw_FlushPacket();
        amDraw_SetPacketMode(0);
        func_0013B110(1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D15C0);
#if 0
/* Does not match yet: 9 of 114 instructions differ. */
void func_001D16F0(AcsrCloth *c) {
    s32 w;
    s32 h;
    s32 n;
    s32 k;
    s32 i;
    s32 j;
    s32 mode;
    s32 color;
    ClothPt *p;
    if (c != 0) {
        w = c->w;
        h = c->h;
        n = (c->color2 >= 0 && D_003F01C8[0] == 0x42) ? 2 : 1;
        func_0013B0B0(D_003F0800);
        amDraw_SetPacketMode(1);
        for (k = 0; k < n; k++) {
            for (i = 0; i < h - 1; i++) {
                if (i != 0) {
                    amDraw_ClosePacket(-1);
                } else {
                    if (k == 0) {
                        mode = 0x425;
                        color = c->color;
                    } else {
                        mode = 0x1402C2D;
                        color = c->color2;
                    }
                    func_00134690(1, mode, 0, color, D_003F01C8[0], 5);
                }
                for (j = 0; j < w; j++) {
                    p = &c->pts[j + c->w * i];
                    func_00135C60(p, &p->v[2], &p->v[5]);
                    p = &c->pts[j + c->w * (i + 1)];
                    func_00135C60(p, &p->v[2], &p->v[5]);
                }
            }
        }
        amDraw_FlushPacket();
        amDraw_SetPacketMode(0);
        func_0013B110(1);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D16F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_acsr", func_001D18C0);
