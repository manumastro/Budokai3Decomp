#include "common.h"

/* The part of an actor that these functions use: a state word, a timer at 0x1C. */
typedef struct Part30C {
    s16 f0;
    char pad2[0x1A];
    f32 f1C;
} Part30C;

/* An actor: a task function at 0x1C and its part at 0x30. */
typedef struct Ac30C {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    Part30C *f30;
} Ac30C;

extern f32 gFrameDelta;
extern void func_0030BFC0(Part30C *);
extern void func_0030B2E0(Part30C *);
extern void func_0030C860(void);
extern void func_0022D4B0(s32, s32);
extern void func_0022D0E0(s32, s32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030B130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030B2E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030BD30);
void func_0030BF10(s32 *p) {
    s32 i;
    s32 *q;

    q = p;
    for (i = 0; i < 8; i++, q++) {
        if (q[5] != 0) {
            func_0022D4B0(q[5], 1);
            q[5] = 0;
        }
    }
    if (p[1] != 0) {
        func_0022D0E0(p[1], 1);
        p[1] = 0;
    }
    for (i = 0; i < 3; i++, p++) {
        if (p[2] != 0) {
            func_0022D0E0(p[2], 1);
            p[2] = 0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030BFC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C0E0);
void func_0030C280(u8 *arg0)
{
  u8 *new_var;
  u8 *temp_a1;
  u8 *temp_a2;
  u8 *temp_v1;
  temp_a2 = arg0 + ((*((s16 *) (((u8 *) arg0) + 0x12))) * 0x28);
  temp_v1 = temp_a2 + 0x208;
  temp_a1 = arg0 + 0x20;
  new_var = ((u8 *) arg0) + 0x20;
  if ((*((s8 *) (((u8 *) temp_a2) + 0x208))) == 0)
  {
    *((s8 *) (((u8 *) arg0) + 0xD)) = 0;
    *((s32 *) (((u8 *) arg0) + 0x20)) = 0;
    *((s32 *) (((u8 *) temp_a1) + 4)) = 0;
    *((s32 *) (((u8 *) temp_a1) + 8)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0xC)) = -1;
    *((s8 *) (((u8 *) temp_a1) + 0xE)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0xF)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x10)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x11)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x12)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x13)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x14)) = 0;
    *((s8 *) (((u8 *) temp_a1) + 0x15)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x16)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x18)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x1A)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x1C)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x1E)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x20)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x22)) = 0;
    *((s16 *) (((u8 *) temp_a1) + 0x24)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x26)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x28)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x2A)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x2C)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x2E)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x30)) = -1;
    *((s16 *) (((u8 *) temp_a1) + 0x32)) = -1;
    return;
  }
  *((s8 *) (((u8 *) arg0) + 0xD)) = 1;
  *((s32 *) new_var) = 0;
  *((s32 *) (((u8 *) temp_a1) + 4)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 8)) = 0;
  *((s16 *) (((u8 *) temp_a1) + 0xC)) = (s16) (*((s8 *) (((u8 *) temp_v1) + 1)));
  *((s8 *) (((u8 *) temp_a1) + 0xE)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 2)));
  *((s8 *) (((u8 *) temp_a1) + 0xF)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 3)));
  *((s8 *) (((u8 *) temp_a1) + 0x10)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 4)));
  *((s8 *) (((u8 *) temp_a1) + 0x11)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 5)));
  *((s8 *) (((u8 *) temp_a1) + 0x12)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 6)));
  *((s8 *) (((u8 *) temp_a1) + 0x13)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 7)));
  *((s8 *) (((u8 *) temp_a1) + 0x14)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 8)));
  *((s8 *) (((u8 *) temp_a1) + 0x15)) = (s8) (*((s8 *) (((u8 *) temp_v1) + 9)));
  *((s16 *) (((u8 *) temp_a1) + 0x16)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0xA)));
  *((s16 *) (((u8 *) temp_a1) + 0x18)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0xC)));
  *((s16 *) (((u8 *) temp_a1) + 0x1A)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0xE)));
  *((s16 *) (((u8 *) temp_a1) + 0x1C)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x10)));
  *((s16 *) (((u8 *) temp_a1) + 0x1E)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x12)));
  *((s16 *) (((u8 *) temp_a1) + 0x20)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x14)));
  *((s16 *) (((u8 *) temp_a1) + 0x22)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x16)));
  *((s16 *) (((u8 *) temp_a1) + 0x24)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x18)));
  *((s16 *) (((u8 *) temp_a1) + 0x26)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x1A)));
  *((s16 *) (((u8 *) temp_a1) + 0x28)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x1C)));
  *((s16 *) (((u8 *) temp_a1) + 0x2A)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x1E)));
  *((s16 *) (((u8 *) temp_a1) + 0x2C)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x20)));
  *((s16 *) (((u8 *) temp_a1) + 0x2E)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x22)));
  *((s16 *) (((u8 *) temp_a1) + 0x30)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x24)));
  *((s16 *) (((u8 *) temp_a1) + 0x32)) = (s16) (*((s16 *) (((u8 *) temp_v1) + 0x26)));
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C6F0);
void func_0030C860(void) {
}
/* differs: the outer task store is shared by both paths of the timer test, and the original keeps the value in $v1 (19 of 35 with the ?: form) */
#if 0
void func_0030C870(Ac30C *s) {
    Part30C *p = s->f30;
    f32 t;

    func_0030BFC0(p);
    func_0030B2E0(p);
    t = p->f1C - gFrameDelta;
    if (t <= 0.0f) {
        p->f1C = t;
        p->f0 = 7;
    }
    s->f1C = (t <= 0.0f) ? (void *)func_0030C860 : NULL;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_30B130", func_0030C9C0);
