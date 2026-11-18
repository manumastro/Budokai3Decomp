#include "common.h"

typedef struct DbVec { f32 x, y, z, w; } DbVec;
extern s32 D_00470238;
extern s8 D_004703F4;
extern void func_0029D800(f32);
extern void func_001CA780(s32, s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0029D8D0(void);
extern DbVec *func_0029D4A0(void);
extern void func_00133D90(f32);
extern void func_00133D80(u32);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern void func_0013E170(s32);
extern void func_0012F2C0(void);
void func_0029DB00(u8 *s1, f32 rate) {
    DbVec *c;
    f32 k;

    if (s1 != 0) {
        D_00470238 = 0;
        if (*(s32 *)s1 != 0) {
            if (D_004703F4 != 3) {
                k = 1.0f;
            } else {
                k = 1.2f;
            }
            func_0029D800(rate * k);
            func_001CA780(*(s32 *)s1, 1);
        } else if (*(s32 *)(s1 + 0x260) != 0) {
            amModel_SetCurrent(*(s32 *)(s1 + 0x2A8), 0x16A1100);
            if (func_0029D8D0() & 2) {
                c = func_0029D4A0();
                func_00133D90(c->w);
                func_00133D80(((u32)(255.0f * c->z) << 16) | ((u32)(255.0f * c->y) << 8) | (u32)(255.0f * c->x));
                DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
            }
            func_0013E170(*(s32 *)(s1 + 0x260));
            if (func_0029D8D0() & 2) {
                DrawFlags_Apply(0, 0x8000, 0, 0, 0);
                func_00133D90(0.0f);
            }
        }
        func_0012F2C0();
    }
}
// differs: 86 of 249 differ (round 7 r7c). Full draft (two inlined motion-select blocks as the MOT_SELECT macro, per-slot loop over obj+0x270, clamp of the three slot ids). Open: (1) the flags sequence at s2+0x414 is lw/and -13/sw, then lw + dsll32 0 + dsrl32 0 + sw (a zero-extension of the word that no plain C cast/&0xFFFFFFFF reproduced in micro tests: casts are dropped, a long long mask gives dsra32), then lw/ori 4/sw; (2) float register roles in the wrap loop (time reload should be f1, the (f32)(len-1) value f0); (3) the slot clamp part: the original keeps a0=**s2 in a0 and reloads *s2 for the second and third store, ours keeps one pointer; (4) n = movz form was fixed with 'n = c != 0 ? 2 : 1'.
#if 0
extern void func_0013C1E0(void *, f32, f32);
extern void amMotion_Update(void *, s32);
extern void func_001D0A20(u8 *, f32);
#define MOT_SELECT(m, id) \
    do { \
        u8 *p = (m) + 0x41C; \
        s32 i; \
        if (*(s32 *)p != (id)) { \
            for (i = 0; i < *(s32 *)((m) + 0x418); i++) { \
                *(s32 *)(*(u8 **)(p + 0x10) + i * 0x40 + 0x30) = -1; \
                *(s32 *)(*(u8 **)(p + 0x10) + i * 0x40 + 0x34) = -1; \
                *(s32 *)(*(u8 **)(p + 0x10) + i * 0x40 + 0x38) = -1; \
            } \
            *(f32 *)(p + 0xC) = -1.0f; \
        } \
        *(s32 *)p = (id); \
    } while (0)
void func_0029DD30(u8 *s3, f32 dt) {
    s32 n;
    s32 h;
    u8 a3;
    u8 *s2;
    u8 *s1;
    s32 i;
    s32 a2;
    s32 a1;
    s32 lim;
    s32 id;
    u8 *s0;
    f32 g;
    f32 f;
    f32 t;
    if (s3 == 0 || (s2 = *(u8 **)(s3 + 0x260)) == 0) {
        return;
    }
    if (*(s32 *)(s3 + 0x290) != 0) {
        s1 = *(u8 **)*(u8 **)s3;
        a1 = *(s32 *)(s3 + 0x264);
        s0 = s3 + 0x10;
        if (D_004703F4 != 3) {
            g = 1.0f;
        } else {
            g = 1.2f;
        }
        f = *(f32 *)(s0 + 0x1B4);
        n = (*(s32 *)(s3 + 0x26C) != 0) ? 2 : 1;
        dt = dt * (f * g);
        for (i = 0; i < n; i++) {
            *(f32 *)(s3 + 0x270 + i * 4) = *(f32 *)(s3 + 0x270 + i * 4) + dt;
            t = (f32)(*(s32 *)(s3 + 0x278 + i * 4) - 1);
            if (*(f32 *)(s3 + 0x270 + i * 4) < t) {
                continue;
            }
            if (*(s8 *)(s3 + 0x2BA) != 0) {
                *(f32 *)(s3 + 0x270 + i * 4) = *(f32 *)(s3 + 0x270 + i * 4) - t;
            } else {
                *(f32 *)(s3 + 0x270 + i * 4) = t;
            }
        }
        g = *(f32 *)(s3 + 0x280) + *(f32 *)(s3 + 0x284) * dt;
        *(f32 *)(s3 + 0x280) = g;
        if (g > 1.0f) {
            g = 1.0f;
        } else if (g < 0.0f) {
            g = 0.0f;
        }
        *(f32 *)(s3 + 0x280) = g;
        if (a1 != 0) {
            func_001D0A20(s0, *(f32 *)(s3 + 0x270));
            a3 = *(s8 *)(s0 + 0x1B0);
            a2 = *(s8 *)(s0 + 0x1AE);
            a1 = *(s8 *)(s0 + 0x1AF);
            lim = *(s32 *)(**(u8 ***)s2 + 0x20);
            if (a3 >= lim) {
                a3 = 0;
            }
            if (a2 >= lim) {
                a2 = 0;
            }
            if (a1 >= lim) {
                a1 = 0;
            }
            h = *(s16 *)(s1 + 0x26);
            if (h >= 0) {
                *(s32 *)(*(u8 **)s2 + h * 8 + 8) = a3;
            }
            h = *(s16 *)(s1 + 0x14);
            if (h >= 0) {
                *(s32 *)(*(u8 **)s2 + h * 8 + 8) = a2;
            }
            h = *(s16 *)(s1 + 0x16);
            if (h >= 0) {
                *(s32 *)(*(u8 **)s2 + h * 8 + 8) = a1;
            }
        }
    } else {
        if (D_004703F4 != 3) {
            g = 1.0f;
        } else {
            g = 1.2f;
        }
        *(f32 *)(s3 + 0x270) = *(f32 *)(s3 + 0x270) + g;
        t = (f32)(*(s32 *)(s3 + 0x278) - 1);
        if (!(*(f32 *)(s3 + 0x270) < t)) {
            if (*(s8 *)(s3 + 0x2BA) != 0) {
                *(f32 *)(s3 + 0x270) = *(f32 *)(s3 + 0x270) - t;
            } else {
                *(f32 *)(s3 + 0x270) = t;
            }
        }
    }
    *(s32 *)(s2 + 0x414) &= ~0xC;
    *(s32 *)(s2 + 0x414) = (u32)*(s32 *)(s2 + 0x414);
    *(s32 *)(s2 + 0x414) |= 4;
    id = *(s32 *)(s3 + 0x268);
    MOT_SELECT(s2, id);
    *(f32 *)(s2 + 0x424) = *(f32 *)(s3 + 0x270);
    amMotion_Update(s2, 0);
    id = *(s32 *)(s3 + 0x26C);
    if (id != 0) {
        MOT_SELECT(s2, id);
        *(f32 *)(s2 + 0x424) = *(f32 *)(s3 + 0x274);
        amMotion_Update(s2, 1);
    }
    func_0013C1E0(s2, 0.0f, *(f32 *)(s3 + 0x280));
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029DD30);
// differs: 51 of 204 differ (round 7 r7c). Structure and the saved/float registers match (zero declared before one gives f20=1.0f); the init block (macro ANIM_INIT, applied before and after the memset) is the same code twice. Still differs: the constant temps (t4/t5 for 1.0f/-1.0f swapped: in the original the float constants are created after the first stores), the address temps of the second ANIM_INIT (original hoists a+0x60, +0x90, +0xC0 before +0x30 and uses v0 for it), the table lookup sequence (sra/andi/sll order and registers v0/v1 swapped).
#if 0
extern void memset(void *, s32, s32);
extern void func_0029DD30(u8 *, f32);
#define ANIM_INIT(a) \
    do { \
        *(s16 *)((a) + 0x1C4) = 0; \
        *(f32 *)((a) + 0x1BC) = -1.0f; \
        *(f32 *)((a) + 0x1B4) = 1.0f; \
        *(s32 *)((a) + 0x1B8) = 0; \
        *(s8 *)((a) + 0x1AE) = 0; \
        *(s8 *)((a) + 0x1AF) = 0; \
        *(s8 *)((a) + 0x1B0) = 0; \
        *(s8 *)((a) + 0x1A8) = 0; \
        *(s32 *)((a) + 0x1A0) = 0; \
        *(u8 **)((a) + 0x180) = (a); \
        *(u8 **)((a) + 0x184) = (a) + 0x30; \
        *(u8 **)((a) + 0x188) = (a) + 0x60; \
        *(u8 **)((a) + 0x18C) = (a) + 0x90; \
        *(u8 **)((a) + 0x190) = (a) + 0xC0; \
        *(u8 **)((a) + 0x194) = (a) + 0xF0; \
        *(u8 **)((a) + 0x198) = (a) + 0x120; \
        *(u8 **)((a) + 0x19C) = (a) + 0x150; \
        *(s8 *)((a) + 0x1A9) = 0; \
        *(s8 *)((a) + 0x1AA) = 0; \
        *(s8 *)((a) + 0x1AB) = 0; \
        *(s8 *)((a) + 0x1AC) = 0; \
        *(s8 *)((a) + 0x1AD) = 0; \
        *(s32 *)((a) + 0x244) = 0; \
    } while (0)
#define ANIM_LOOKUP(o, v)     (*(s32 *)((((v) & 0xFFFF) << 4) + *(s32 *)(*(s32 *)(((((v) >> 16) - 1) * 4) + *(s32 *)((o) + 0x260) + 0x46C) + 0x14) + 8))
void func_0029E120(u8 *s4, s32 idx, s32 s3, f32 f23, f32 f22) {
    u8 *a;
    u8 *s1;
    u8 *s0;
    s32 v;
    f32 zero;
    f32 one;

    if (s4 == 0 || *(s32 *)(s4 + 0x260) == 0) {
        return;
    }
    s0 = *(u8 **)(s4 + 0x290);
    if (s0 != 0) {
        a = s4 + 0x10;
        s1 = *(u8 **)(*(s32 *)(s0 + 0x14) + idx * 4);
        one = 1.0f;
        zero = 0.0f;
        ANIM_INIT(a);
        memset(a, 0, 0x250);
        ANIM_INIT(a);
        *(u8 **)(a + 0x1A4) = s0;
        *(s32 *)(a + 0x1C0) = 0;
        *(u8 **)(s4 + 0x264) = s1;
        *(s32 *)(s4 + 0x268) = *(s16 *)s1 | 0xC0000;
        *(s32 *)(s4 + 0x270) = 0;
        v = *(s32 *)(s4 + 0x268);
        *(s32 *)(s4 + 0x278) = ANIM_LOOKUP(s4, v);
        *(s32 *)(s4 + 0x26C) = 0;
        v = *(s32 *)(s1 + 0x1C);
        if (v >= 0) {
            *(s32 *)(s4 + 0x26C) = v | 0xD0000;
            *(f32 *)(s4 + 0x274) = zero;
            v = *(s32 *)(s4 + 0x26C);
            *(s32 *)(s4 + 0x27C) = ANIM_LOOKUP(s4, v);
        }
    } else {
        one = 1.0f;
        zero = 0.0f;
        *(f32 *)(s4 + 0x280) = one;
        *(f32 *)(s4 + 0x284) = zero;
        *(s32 *)(s4 + 0x268) = 0xC0000;
        *(s32 *)(s4 + 0x270) = 0;
        v = *(s32 *)(s4 + 0x268);
        *(s32 *)(s4 + 0x278) = ANIM_LOOKUP(s4, v);
    }
    if (f23 > one) {
        f23 = one;
    } else if (f23 < zero) {
        f23 = zero;
    }
    *(f32 *)(s4 + 0x280) = f23;
    if (f22 > one) {
        f22 = one;
    } else if (f22 < zero) {
        f22 = zero;
    }
    *(f32 *)(s4 + 0x284) = f22;
    *(s8 *)(s4 + 0x2BA) = s3;
    func_0029DD30(s4, zero);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029E120);
extern void amHeap_Free(void *);
extern void amCdFs_ReleaseCache(void *);
extern void amCdFs_Close(void *, s32);
extern void Character_Release(s32);
void func_0029E450(u8 *s0) {
    s32 *s3;
    s32 s2;

    if (s0 != 0) {
        if (*(s32 *)(s0 + 0x290) != 0) {
            amCdFs_ReleaseCache(*(void **)(s0 + 0x29C));
            *(s32 *)(s0 + 0x29C) = 0;
            *(s32 *)(s0 + 0x290) = 0;
        } else if (*(s32 *)(s0 + 0x29C) != 0) {
            amCdFs_Close(*(void **)(s0 + 0x29C), 0);
            *(s32 *)(s0 + 0x29C) = 0;
        }
        s3 = *(s32 **)(s0 + 0x260);
        for (s2 = 0; s2 < 2; s2++) {
            if (*(s32 *)(s0 + 0x288 + s2 * 4) != 0) {
                amCdFs_ReleaseCache(*(void **)(s0 + 0x294 + s2 * 4));
                *(s32 *)(s0 + 0x294 + s2 * 4) = 0;
                *(s32 *)(s0 + 0x288 + s2 * 4) = 0;
                s3[0x126 + s2] = 0;
            } else if (*(s32 *)(s0 + 0x294 + s2 * 4) != 0) {
                amCdFs_Close(*(void **)(s0 + 0x294 + s2 * 4), 0);
                *(s32 *)(s0 + 0x294 + s2 * 4) = 0;
            }
        }
        if (*(s32 *)s0 == 0) {
            if (*(s32 *)(s0 + 0x2AC) != 0) {
                if (*(s32 *)(s0 + 0x260) != 0) {
                    amHeap_Free(*(void **)(s0 + 0x260));
                    *(s32 *)(s0 + 0x260) = 0;
                }
                amHeap_Free(*(void **)(s0 + 0x2AC));
                *(s32 *)(s0 + 0x2AC) = 0;
            }
            if (*(s32 *)(s0 + 0x2A4) != 0) {
                amCdFs_ReleaseCache(*(void **)(s0 + 0x2B0));
                *(s32 *)(s0 + 0x2B0) = 0;
                *(s32 *)(s0 + 0x2A4) = 0;
            } else if (*(s32 *)(s0 + 0x2B0) != 0) {
                amCdFs_Close(*(void **)(s0 + 0x2B0), 0);
                *(s32 *)(s0 + 0x2B0) = 0;
            }
            if (*(s32 *)(s0 + 0x2A8) != 0) {
                amCdFs_ReleaseCache(*(void **)(s0 + 0x2B4));
                *(s32 *)(s0 + 0x2B4) = 0;
                *(s32 *)(s0 + 0x2A8) = 0;
            } else if (*(s32 *)(s0 + 0x2B4) != 0) {
                amCdFs_Close(*(void **)(s0 + 0x2B4), 0);
                *(s32 *)(s0 + 0x2B4) = 0;
            }
        }
        if (*(s8 *)(s0 + 0x2B8) != 0) {
            Character_Release(*(s32 *)s0);
            *(s32 *)s0 = 0;
        }
        amHeap_Free(s0);
    }
}
extern void amFile_Load(s32);
extern void amCdFs_Close(void *, s32);
extern s32 amObject_Create(s32, s32);
extern u8 *amMotion_CreateFromObj(s32, s32, s32);
extern void amMotion_BindAnim(void *, s32, s32);
extern void func_001CA8F0(s32);
void func_0029E610(u8 *s5) {
    u8 *s0;
    u8 *s4;
    s32 s3;
    u8 *s2;
    u8 *s1;
    s32 a;

    if (s5 == 0 || *(s8 *)(s5 + 0x2B9) != 0) {
        return;
    }
    a = *(s32 *)s5;
    if (a != 0) {
        s4 = *(u8 **)(*(s32 *)a + 0x4C);
        func_001CA8F0(a);
    } else {
        s0 = *(u8 **)(s5 + 0x2B0);
        if (s0 != 0) {
            *(s32 *)(s5 + 0x2B0) = *(s32 *)(s0 + 0x40);
            *(s32 *)(s5 + 0x2A4) = *(s32 *)(*(s32 *)(s0 + 0x40) + 0x50);
            amFile_Load(*(s32 *)(s5 + 0x2A4));
            *(s32 *)(s0 + 0x40) = 0;
            amCdFs_Close(s0, 0);
            *(s32 *)(s5 + 0x2AC) = amObject_Create(*(s32 *)(s5 + 0x2A4), 0);
            s4 = amMotion_CreateFromObj(*(s32 *)(s5 + 0x2AC), 2, 0);
        }
        s0 = *(u8 **)(s5 + 0x2B4);
        if (s0 != 0) {
            *(s32 *)(s5 + 0x2B4) = *(s32 *)(s0 + 0x40);
            *(s32 *)(s5 + 0x2A8) = *(s32 *)(*(s32 *)(s0 + 0x40) + 0x50);
            amFile_Load(*(s32 *)(s5 + 0x2A8));
            *(s32 *)(s0 + 0x40) = 0;
            amCdFs_Close(s0, 0);
        }
    }
    s3 = 0;
    s2 = s5;
    s1 = s4;
    for (; s3 < 2; s3++) {
        s0 = *(u8 **)(s2 + 0x294);
        if (s0 != 0) {
            *(s32 *)(s2 + 0x294) = *(s32 *)(s0 + 0x40);
            *(s32 *)(s2 + 0x288) = *(s32 *)(*(s32 *)(s0 + 0x40) + 0x50);
            amFile_Load(*(s32 *)(s2 + 0x288));
            *(s32 *)(s0 + 0x40) = 0;
            amCdFs_Close(s0, 0);
            *(s32 *)(s1 + 0x498) = 0;
            amMotion_BindAnim(s4, s3 + 0xB, *(s32 *)(s2 + 0x288));
        }
        s2 += 4;
        s1 += 4;
    }
    s0 = *(u8 **)(s5 + 0x29C);
    if (s0 != 0) {
        *(s32 *)(s5 + 0x29C) = *(s32 *)(s0 + 0x40);
        *(s32 *)(s5 + 0x290) = *(s32 *)(*(s32 *)(s0 + 0x40) + 0x50);
        amFile_Load(*(s32 *)(s5 + 0x290));
        *(s32 *)(s0 + 0x40) = 0;
        amCdFs_Close(s0, 0);
    }
    *(u8 **)(s5 + 0x260) = s4;
    *(s32 *)(s5 + 0x264) = 0;
    *(s8 *)(s5 + 0x2B9) = 1;
}
extern s32 func_001CAA30(s32 *);
s32 func_0029E7F0(u8 *a0) {
    if (a0 == 0) {
        return 1;
    }
    if (*(s32 *)(a0 + 0x2A0) == 0) {
        return 1;
    }
    if (func_001CAA30(*(s32 **)a0) != 0 && *(s16 *)(*(s32 *)(a0 + 0x2A0) + 4) == 3) {
        return 1;
    }
    return 0;
}
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern char D_0046EA48[];
u8 *func_0029E870(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 *s0;
    s32 v;

    s0 = amHeap_Alloc(0x2C0, 0, D_0046EA48, 0xAC);
    memset(s0, 0, 0x2C0);
    s0[0x2B8] = 0;
    s0[0x2B9] = 0;
    if (a0 != 0) {
        *(s32 *)s0 = a0;
        *(s32 *)(s0 + 0x2A0) = *(s32 *)(a0 + 0x20);
    } else {
        v = amCdFs_ReadFileId(0xEFA, 0, 1);
        *(s32 *)(s0 + 0x2B0) = v;
        *(s32 *)(s0 + 0x2A0) = v;
        v = amCdFs_ReadFileId(0xEFB, 0, 1);
        *(s32 *)(s0 + 0x2B4) = v;
        *(s32 *)(s0 + 0x2A0) = v;
        a1 = 0xEF9;
    }
    if (a1 != -1) {
        v = amCdFs_ReadFileId(a1, 0, 1);
        *(s32 *)(s0 + 0x294) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    if (a2 != -1) {
        v = amCdFs_ReadFileId(a2, 0, 1);
        *(s32 *)(s0 + 0x298) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    if (a3 != -1) {
        v = amCdFs_ReadFileId(a3, 0, 1);
        *(s32 *)(s0 + 0x29C) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    return s0;
}
extern s32 func_001CAAB0(s32, s32, s32, s32, s32);
extern u8 *func_0029E870(s32, s32, s32, s32);
void func_0029E9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    u8 *r = 0;

    if (a0 != -1) {
        r = (u8 *)func_001CAAB0(a0, a1, a2, a3, 1);
    }
    r = func_0029E870((s32)r, a4, a5, a6);
    if (r != 0) {
        r[0x2B8] = 1;
    }
}
extern u8 *D_004708CC;
extern void func_0022D0E0(s32, s32);
void func_0029EA20(void) {
    u8 *s0;
    s32 i;
    s32 j;
    s32 k;
    s32 h;

    s0 = D_004708CC;
    if (*(s32 *)(s0 + 0x4C) != 0) {
        for (i = 0; i < *(s32 *)(s0 + 0xC); i++) {
            for (j = 0; j < *(s32 *)s0; j++) {
                if (*(s32 *)(i * 0x2C + (s32)(*(u8 ***)(s0 + 0x4C))[j]) >= 0
                    && *(s32 *)(i * 0x2C + (s32)(*(u8 ***)(s0 + 0x4C))[j] + 0x1C) != 0) {
                    func_0022D0E0(*(s32 *)(i * 0x2C + (s32)(*(u8 ***)(s0 + 0x4C))[j] + 0x1C), 1);
                    *(s32 *)(i * 0x2C + (s32)(*(u8 ***)(s0 + 0x4C))[j] + 0x1C) = 0;
                }
            }
        }
        for (i = 0; i < *(s32 *)(s0 + 0xC); i++) {
            for (j = 0; j < *(s32 *)s0; j++) {
                if (*(s32 *)(i * 0x2C + (s32)(*(u8 ***)(s0 + 0x4C))[j] + 4) >= 0) {
                    h = *(s32 *)(*(s32 *)(s0 + 0x58) + i * 0x30 + 0x10);
                    if (h != 0) {
                        /* FAKEMATCH: the original tests the handle twice (probably an inlined guard); the repeated test reproduces both compares. */
                        if (h != 0) {
                            func_0022D0E0(h, 1);
                            *(s32 *)(*(s32 *)(s0 + 0x58) + i * 0x30 + 0x10) = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (*(s32 *)(s0 + 0x58) != 0) {
            amHeap_Free(*(void **)(s0 + 0x58));
            *(s32 *)(s0 + 0x58) = 0;
        }
        if (*(s32 *)(s0 + 0x4C) != 0) {
            for (k = 0; k < *(s32 *)s0; k++) {
                if ((*(u8 ***)(s0 + 0x4C))[k] != 0) {
                    amHeap_Free((*(u8 ***)(s0 + 0x4C))[k]);
                    (*(u8 ***)(s0 + 0x4C))[k] = 0;
                }
            }
            amHeap_Free(*(void **)(s0 + 0x4C));
            *(s32 *)(s0 + 0x4C) = 0;
        }
    }
}
extern void amHeap_Free(void *);
extern void amAdx_Stop(s32);
extern s32 func_002A8F70();
extern u8 *D_004708CC;
void func_0029EC40(void) {
    u8 *s4;
    s32 s5;
    s32 i;
    s32 j;

    s4 = D_004708CC;
    if (*(s32 *)(s4 + 0x54) != 0) {
        for (i = 0; i < *(s32 *)(s4 + 8); i++) {
            for (j = 0; j < *(s32 *)s4; j++) {
                s5 = *(s32 *)(i * 0x20 + (s32)(*(u8 ***)(s4 + 0x48))[j]);
                if (func_002A8F70() != 1 || s5 >= 2) {
                    amAdx_Stop(*(s32 *)(i * 0x20 + (s32)(*(u8 ***)(s4 + 0x48))[j]));
                }
            }
        }
        amHeap_Free(*(void **)(s4 + 0x54));
        *(s32 *)(s4 + 0x54) = 0;
    }
    if (*(s32 *)(s4 + 0x48) != 0) {
        for (j = 0; j < *(s32 *)s4; j++) {
            if ((*(u8 ***)(s4 + 0x48))[j] != 0) {
                amHeap_Free((*(u8 ***)(s4 + 0x48))[j]);
                (*(u8 ***)(s4 + 0x48))[j] = 0;
            }
        }
        amHeap_Free(*(void **)(s4 + 0x48));
        *(s32 *)(s4 + 0x48) = 0;
    }
}
extern u8 *D_004708CC;
extern s8 D_004B4B63[];
typedef struct DispGT { u16 f00; u8 pad[0xB6]; } DispGT;
extern DispGT D_00492FCE[];
typedef struct DispE {
    s32 a00;
    s32 a04;
    u8 pad08[0x14];
    s32 a1C;
    f32 f20;
    u8 pad24[4];
    f32 f28;
} DispE;
typedef struct DispF {
    u8 pad00[0x10];
    s32 a10;
    u8 pad14[0x1C];
} DispF;
extern void func_0022C7D0(s32, s32, f32);
s32 func_0029EDC0(void) {
    u8 *s4;
    s32 j;
    DispE *e;
    DispF *f;
    s32 i;
    s32 ok;

    s4 = D_004708CC;
    if (func_0029EF70() == 0) {
        *(s32 *)(s4 + 0x30) += 1;
    } else if ((ok = !((u16)(*(s32 *)(D_004708CC + 0x40) & D_00492FCE[D_004B4B63[0]].f00) & 0x4000)) != 0) {
    } else {
        for (j = 0; j < *(s32 *)(s4 + 0xC); j++) {
            e = &(*(DispE ***)(s4 + 0x4C))[*(s32 *)(s4 + 0x30)][j];
            f = &(*(DispF **)(s4 + 0x58))[j];
            if (e->a04 >= 0 && e->f28 < e->f20) {
                func_0022C7D0(f->a10, 1, e->f20);
                e->f28 = e->f20;
            }
            if (e->a00 >= 0 && e->f28 < e->f20) {
                func_0022C7D0(e->a1C, 1, e->f20);
                e->f28 = e->f20;
            }
        }
        for (i = 1; i < 4; i++) {
            amAdx_Stop(i);
        }
        *(s32 *)(s4 + 0x30) += 1;
    }
    return *(s32 *)(s4 + 0x30) < *(s32 *)s4;
}
s32 func_0029EF70(void) {
    u8 *s = D_004708CC;
    s32 j;
    s32 n1 = *(s32 *)(s + 4);
    s32 k = *(s32 *)(s + 0x30);
    s32 n2;
    s32 n3;

    for (j = 0; j < n1; j++) {
        if (*(s32 *)((*(u8 ***)(s + 0x44))[k] + j * 0xE0 + 0x14) < 3) {
            return 1;
        }
    }
    n2 = *(s32 *)(s + 8);
    for (j = 1; j < n2; j++) {
        if (*(s32 *)((*(u8 ***)(s + 0x48))[k] + j * 0x20 + 0x14) < 3) {
            return 1;
        }
    }
    n3 = *(s32 *)(s + 0xC);
    for (j = 0; j < n3; j++) {
        if (*(s32 *)((*(u8 ***)(s + 0x4C))[k] + j * 0x2C + 0x18) < 3) {
            return 1;
        }
    }
    return 0;
}
typedef struct DispAnim {
    /* 0x00 */ f32 f00;
    /* 0x04 */ f32 f04;
    /* 0x08 */ f32 f08;
    /* 0x0C */ f32 f0C;
    /* 0x10 */ s32 n10;
} DispAnim;

void func_0029F070(u8 *a0, f32 dt) {
    DispAnim *a2;
    s32 mode;

    *(f32 *)(a0 + 0x28) = *(f32 *)(a0 + 0x28) + 1.0f;
    a2 = (DispAnim *)(a0 + 8);
    mode = a2->n10;
    switch (mode) {
    case 0:
        if (!(a2->f0C < a2->f00)) {
            *(s32 *)(a0 + 0x24) = 1;
            a2->n10++;
        }
        a2->f0C = a2->f0C + dt;
        break;
    case 1:
        if (a2->f08 >= 0.0f && (a2->f0C - a2->f00) > a2->f08) {
            *(s32 *)(a0 + 0x24) = 0;
            a2->n10++;
        }
        a2->f0C = a2->f0C + dt;
        break;
    case 2:
        if ((a2->f0C - a2->f00) - a2->f08 > a2->f04) {
            a2->n10 = mode + 1;
        }
        a2->f0C = a2->f0C + dt;
        break;
    }
}
// differs: 55+ of 116 differ (round 7 r7c, structure right, VU0 copy via inline asm lqc2/sqc2): the first two loads/regs differ (the original takes the D_004B4B40 base pointer in a1, D in a0 and the stack address in v1; saved registers s0/s2/s1/s5 numbered differently), the second block's bltz slot is filled by the arg move in ours but is a nop in the original (same unsolved pattern as func_0029F350), mult/lwc1 order. Tried: declaration orders, pad pointer local, cast, separate locals for the block values.
#if 0
extern u8 *D_004708CC;
extern s8 D_004B4B40[];
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_00228410();
extern void func_0022CD00(s32);
typedef struct DispVec { f32 v[4]; } __attribute__((aligned(16))) DispVec;
void func_0029F180(u8 *s4, u8 *s3) {
    u8 *s6;
    s32 s5;
    s32 s2;
    s32 s1;
    s32 s0;
    s32 stride;
    s32 a1c;
    s32 a18;
    s32 mode;
    s8 *pad;
    DispVec tmp;

    s6 = D_004708CC;
    mode = *(s32 *)(s4 + 0x18);
    if (mode == 2) {
    } else if (mode == 1) {
    } else if (mode == 0) {
        return;
    }
    pad = D_004B4B40;
    s0 = pad[0x23];
    s2 = *(s32 *)(D_004708CC + 0x20);
    stride = *(s32 *)(D_004708CC + 0x24);
    s1 = *(s32 *)(D_004708CC + 0x28);
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(s3), "r"(&tmp));
    tmp.v[1] = tmp.v[1] + (f32)(stride * s2);
    if (*(s32 *)(s4 + 4) >= 0) {
        func_00228430(0);
        func_00227A30((u8 *)&tmp);
        s5 = *(s32 *)(s3 + 0x20);
        a1c = *(s32 *)(s3 + 0x1C);
        a18 = *(s32 *)(s3 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s5;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s5;
        func_0022C060(1.0f, *(s32 *)(s3 + 0x10));
        func_00228410();
        func_0022CD00(*(s32 *)(s3 + 0x10));
    }
    if (*(s32 *)s4 >= 0) {
        func_00228430(0);
        func_00227A30((u8 *)&tmp);
        s5 = *(s32 *)(s3 + 0x20);
        a1c = *(s32 *)(s3 + 0x1C);
        a18 = *(s32 *)(s3 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s5;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s5;
        func_0022C060(1.0f, *(s32 *)(s4 + 0x1C));
        func_00228410();
        func_0022CD00(*(s32 *)(s4 + 0x1C));
    }
    if (s0 & 0x10 & *(s32 *)(s6 + 0x40)) {
        s2--;
        if (s2 < 0) {
            s2 = s1 - 1;
        }
    } else if (s0 & 0x40 & *(s32 *)(s6 + 0x40)) {
        s2++;
        if (s2 >= s1) {
            s2 = 0;
        }
    }
    *(s32 *)(D_004708CC + 0x20) = s2;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F180);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_00228410();
extern void func_0022CD00(s32);
// GIVEN UP (round 5 chr2): 4 of 70 differ, all in block 1 (the first s1->4 test). The original keeps the bltz delay slot a nop and the
// argument 0 of func_00228430 in the jal delay slot; ours moves the argument into the bltz slot. Tried: switch on the mode (cases ascending, 62 differ),
// if chain with empty bodies (this one, 4 differ), nested else (4 differ), a1c loaded before a18 (kept).
#if 0
void func_0029F350(u8 *s1, u8 *s0) {
    s32 s2;
    s32 a18;
    s32 a1c;
    s32 mode;

    mode = *(s32 *)(s1 + 0x18);
    if (mode == 2) {
    } else if (mode == 1) {
    } else if (mode == 0) {
        return;
    }
    if (*(s32 *)(s1 + 4) >= 0) {
        func_00228430(0);
        func_00227A30(s0);
        s2 = *(s32 *)(s0 + 0x20);
        a1c = *(s32 *)(s0 + 0x1C);
        a18 = *(s32 *)(s0 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s2;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s2;
        func_0022C060(1.0f, *(s32 *)(s0 + 0x10));
        func_00228410();
        func_0022CD00(*(s32 *)(s0 + 0x10));
    }
    if (*(s32 *)s1 >= 0) {
        func_00228430(0);
        func_00227A30(s0);
        s2 = *(s32 *)(s0 + 0x20);
        a1c = *(s32 *)(s0 + 0x1C);
        a18 = *(s32 *)(s0 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s2;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s2;
        func_0022C060(1.0f, *(s32 *)(s1 + 0x1C));
        func_00228410();
        func_0022CD00(*(s32 *)(s1 + 0x1C));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F350);
extern void amAdx_Stop(s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern s32 amAdx_IsStopped(s32);
extern s32 func_002A8F70();
extern f32 D_004E0610[];
extern f32 D_004E0614[];
typedef struct ATm { f32 a; f32 b; f32 c; f32 time; s32 st; } ATm;
void func_0029F470(u8 *s6) {
    s32 i;
    u8 *s4;
    ATm *s3;
    s32 s2;
    s32 s1;
    s32 k;

    k = *(s32 *)(s6 + 0x30);
    for (i = 0; i < *(s32 *)(s6 + 8); i++) {
        s4 = ((u8 **)*(s32 *)(s6 + 0x48))[k] + i * 0x20;
        s3 = (ATm *)(s4 + 4);
        switch (s3->st) {
        case 0:
            if (*(s32 *)s4 > 0) {
                amAdx_Stop(*(s32 *)s4);
            }
            s3->time = s3->time + *(f32 *)(s6 + 0x38);
            if (s3->time < s3->a) {
                break;
            }
            if (*(s32 *)s4 >= 0) {
                if (func_002A8F70() != 1 || *(s32 *)s4 != 0) {
                    s1 = *(s32 *)(*(s32 *)(s6 + 0x54) + i * 4);
                    s2 = *(s32 *)s4;
                    if (s1 > 0) {
                        if (s2 == 0 || s2 == 1) {
                            amAdx_SetVolume(s2, D_004E0610[0]);
                        } else {
                            amAdx_SetVolume(s2, D_004E0614[0]);
                        }
                        amAdx_Pause(s2, 0);
                        amAdx_PlayAfs(s2, s1, 0);
                    }
                    *(s32 *)(s4 + 0x18) = 1;
                }
            }
            s3->st++;
            break;
        case 1:
            s3->time = s3->time + *(f32 *)(s6 + 0x38);
            if (*(s32 *)s4 < 0) {
                s3->st++;
                break;
            }
            if (amAdx_IsStopped(*(s32 *)s4) != 0) {
                *(s32 *)(s4 + 0x18) = 0;
                s3->st++;
                break;
            }
            if (s3->c < 0.0f) {
                break;
            }
            if (s3->time < s3->c - s3->a) {
                break;
            }
            amAdx_Stop(*(s32 *)s4);
            *(s32 *)(s4 + 0x18) = 0;
            s3->st++;
            break;
        case 2:
            s3->time = s3->time + *(f32 *)(s6 + 0x38);
            if (s3->time - s3->a - s3->c < s3->b) {
                break;
            }
            s3->st++;
            break;
        default:
            s3->st = 3;
            break;
        }
    }
}
void func_0029F730(DispAnim *a, f32 dt) {
    f32 c;

    switch (a->n10) {
    case 0:
        c = a->f0C + dt;
        a->f0C = c;
        if (c < a->f00) {
            break;
        }
        a->n10++;
        func_0029F730(a, dt);
        break;
    case 1:
        a->f0C = a->f0C + dt;
        if (a->f08 < 0.0f) {
            break;
        }
        if (a->f0C - a->f00 < a->f08) {
            break;
        }
        a->n10++;
        break;
    case 2:
        c = a->f0C + dt;
        a->f0C = c;
        if (c - a->f00 - a->f08 < a->f04) {
            break;
        }
        a->n10++;
        break;
    }
}

// differs: 2 of 151 differ (round 7 r7c): in the second func_00136E80 call the original loads a3 (obj+0x20) before a2 (obj); ours loads a2 first. Tried: temporaries, +0, an inline helper taking a3. The pb/pd pointers (cast, used for the first member) are what makes the frame and the saved registers match.
#if 0
typedef struct DV4 { f32 x, y, z, w; } DV4;
typedef struct DS30 {
    f32 f00, f04, f08, f0c;
    f32 f10, f14, f18, f1c;
    f32 f20, f24, f28, f2c;
    DV4 q;
    f32 f40, f44, f48, f4c;
} DS30;
extern void func_00136E80(s32, void *, s32, s32, s32);
extern void func_00137560(void *, void *);
extern void amDraw_FlushPacket(void);
void func_0029F830(u8 *a0) {
    DV4 q[2];
    DV4 b;
    DV4 a;
    DV4 d;
    DV4 c;
    DS30 *s;
    DV4 *pd;
    DV4 *pb;
    s32 flags;

    s = (DS30 *)(a0 + 0x30);
    if (*(f32 *)(a0 + 0x30) < 0.0f) {
        s->f00 = (s->f40 + s->f48) / 2.0f;
    }
    if (s->f04 < 0.0f) {
        s->f04 = (s->f44 + s->f4c) / 2.0f;
    }
    a.x = s->f10 - s->f00 * s->f20;
    pb = (DV4 *)&b;
    pb->x = s->f10 + s->f20 * (*(f32 *)(a0 + 0x10) - s->f00);
    a.y = s->f14 - s->f04 * s->f24;
    b.y = s->f14 + s->f24 * (*(f32 *)(a0 + 0x14) - s->f04);
    a.z = s->f08 + s->f18;
    b.z = s->f08 + s->f18;
    a.w = 1.0f;
    b.w = 1.0f;
    q[0].x = s->q.x;
    q[0].y = s->q.y;
    q[0].z = s->q.z;
    q[0].w = s->q.w;
    q[1].x = s->q.x;
    q[1].y = s->q.y;
    q[1].z = s->q.z;
    q[1].w = s->q.w;
    if (s->q.w > 0.0f) {
        c.x = s->f40;
        c.y = s->f44;
        c.z = 1.0f;
        c.w = 1.0f;
        pd = (DV4 *)&d;
        pd->x = s->f48 - 0.5f;
        d.y = s->f4c - 0.5f;
        d.z = 1.0f;
        d.w = 1.0f;
        if (*(s32 *)(a0 + 0x20) == 0) {
            flags = 0x40001924;
            func_00136E80(flags, q, *(s32 *)a0, 0, 5);
        } else {
            flags = 0x60000924;
        }
        func_00136E80(flags, q, *(s32 *)a0, *(s32 *)(a0 + 0x20), 5);
        func_00137560(&a, &c);
        func_00137560(pb, pd);
        amDraw_FlushPacket();
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F830);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029FA90);
