#include "common.h"
#include "menu/menu.h"

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4 __attribute__((aligned(16)));

/* A bank of sprites: offsets (from the bank) of each entry, first id at f18. */
typedef struct SpriteEntry {
    char pad0[0x10];
    s16 w;
    s16 h;
} SpriteEntry;

typedef struct SpriteBank {
    char pad0[0x14];
    s32 table;          /* 0x14: offset of the entry table */
    s32 first;          /* 0x18: id of the first entry */
} SpriteBank;

typedef struct InputNameGlobal {
    void *file[2];
    char pad8[0x14 - 8];
    SpriteBank *bank;   /* 0x14 */
    Task *task;         /* 0x18 */
} InputNameGlobal;

typedef struct InputNameWork {
    char pad0[0x44];
    f32 f44;
    f32 f48;
    char pad4C[4];
    s16 f50[8];
    char pad60[4];
} InputNameWork;

extern InputNameGlobal *gInputName;
extern char D_0046F758[];
extern char D_0046F768[];
extern void func_002F3E00(Task *);
extern void memset(void *, s32, s32);
extern void Help_Load(void);
extern Vec4 D_00458070;
extern Vec4 D_00458080;
extern Vec4 D_00458090;
extern Vec4 D_004580A0;
extern void func_00145CC0(void *, s32);
extern s32 func_001484A0(s32);
extern void func_00136E80(s32, f32 *, s32, s32, s32);
extern void func_00137560(Vec4 *, Vec4 *);
extern void func_00137EE0(void);

Task *InputName_Start(void) {
    InputNameGlobal *g = gInputName;
    InputNameWork *w;
    Task *t;

    g->task = t = func_00144FC0(func_002F3E00, 0, 0x6000, 8, 2, D_0046F758);
    t->data.work = w = func_0013AAB0(0x64, 0, D_0046F768, 0x6C);
    memset(w, 0, 0x64);
    w->f44 = 240.0f;
    w->f48 = 80.0f;
    w->f50[0] = -1;
    w->f50[1] = -1;
    w->f50[2] = -1;
    w->f50[3] = -1;
    w->f50[4] = -1;
    w->f50[5] = -1;
    w->f50[6] = -1;
    w->f50[7] = -1;
    Help_Load();
    return t;
}

void InputName_DrawSprite(s32 a0, s32 arg1) {
    Vec4 a = D_00458070;
    Vec4 b = D_00458080;
    Vec4 c = D_00458090;
    Vec4 d = D_004580A0;
    f32 color[4];
    SpriteBank *bank;
    SpriteEntry *e;
    s32 old;
    s32 id = (s16)arg1;

    bank = gInputName->bank;
    e = (SpriteEntry *)((char *)bank + *(s32 *)(bank->table + (s32)bank + (id - bank->first) * 4));
    a.x = 300.0f - e->w / 2.0f;
    b.x = 300.0f + e->w / 2.0f;
    a.y = 180.0f - e->h / 2.0f;
    b.y = 180.0f + e->h / 2.0f;
    b.z = 100.0f;
    a.z = 100.0f;
    d.x = e->w - 1.0f;
    d.y = e->h - 1.0f;
    color[0] = 1.0f;
    color[1] = 1.0f;
    color[2] = 1.0f;
    color[3] = 1.0f;
    func_00145CC0(gInputName->bank, 0x5800);
    old = func_001484A0(0);
    func_00136E80(0x40000924, color, id, 0x44, 5);
    func_00137560(&a, &c);
    func_00137560(&b, &d);
    func_00137EE0();
    func_001484A0(old);
}
