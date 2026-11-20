#include "common.h"
extern u8 *gOutputPass;

INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4330);
extern void func_002F4330();

void IpSysWnd_Exit(u8 *a0) {
    func_002F4330(*(void **)(a0 + 0x30));
}
extern f32 gFrameDelta;
extern void IpSysWnd_Exit();

void func_002F4460(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002F4330(s0);
    *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) - gFrameDelta;
    if (*(f32 *)(s0 + 0x14) <= 0.0f) {
        *(s16 *)(s0 + 0xE) = 4;
        *(void **)(a0 + 0x1C) = ((void *)IpSysWnd_Exit == 0) ? 0 : (void *)IpSysWnd_Exit;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F44E0);
extern f32 gFrameDelta;
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void func_002F4330();
extern void func_002F44E0();

void func_002F4780(u8 *a0) {
    u8 *g;
    u8 *o;
    f32 f;
    s32 m;

    o = *(u8 **)(a0 + 0x30);
    func_002F4330(o);
    f = *(f32 *)(o + 0x14) - gFrameDelta;
    *(f32 *)(o + 0x14) = f;
    if (f <= 0.0f) {
        *(s16 *)(o + 0xE) = 2;
        g = (u8 *)gInputName;
        switch (*(s16 *)(o + 0xC)) {
        case 0:
        case 4:
        case 6:
            m = *(s32 *)(g + 0x10);
            D_00470704 = m;
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent(m, 0x5000);
            D_00470238 = 0;
            if (*(s32 *)(o + 0x8) != 0) {
                func_0022D0E0(*(void **)(o + 0x8), 1);
            }
            *(s32 *)(o + 0x8) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)(g + 0xC) + 0x1C) + (*(s16 *)(o + 0x10) + 0x40) * 4), 0.0f);
            break;
        }
        *(void **)(a0 + 0x1C) = ((void *)func_002F44E0 == 0) ? 0 : (void *)func_002F44E0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4880);
s16 func_002F4A70(u8 *a0) {
    return *(s16 *)(*(u8 **)(a0 + 0x30) + 0x10);
}
s16 func_002F4A80(u8 *a0) {
    return *(s16 *)(*(u8 **)(a0 + 0x30) + 0xE);
}
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amTask_Kill(void *);

void func_002F4A90(u8 *a0) {
    u8 *s0;
    u8 *s1;
    void *p;
    s1 = a0;
    if (gInputName != 0) {
        s0 = *(u8 **)(s1 + 0x30);
        p = *(void **)(s0 + 0x0);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x0) = 0;
        }
        p = *(void **)(s0 + 0x4);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x4) = 0;
        }
        p = *(void **)(s0 + 0x8);
        if (p != 0) {
            func_0022D0E0(p, 1);
            *(void **)(s0 + 0x8) = 0;
        }
        amHeap_Free(s0);
        amTask_Kill(s1);
    }
}
extern char D_0046F778[];
extern char D_0046F788[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_002F4880();

void *IpSysWnd_Start(s16 a0) {
    u8 *s0;
    u8 *s1;
    s1 = amTask_Create(func_002F4880, 0, 0x6000, 8, 2, D_0046F778);
    *(void **)(s1 + 0x30) = s0 = amHeap_Alloc(0x18, 0, D_0046F788, 0x47);
    memset(s0, 0, 0x18);
    *(s16 *)(s0 + 0xC) = a0;
    return s1;
}
typedef unsigned char u8_c2F4BB0;
typedef signed short s16_c2F4BB0;
typedef unsigned short u16_c2F4BB0;
typedef signed int s32_c2F4BB0;
typedef unsigned int u32_c2F4BB0;
typedef float f32_c2F4BB0;
extern void func_00229800(void *, void *, s32_c2F4BB0, f32_c2F4BB0);
void func_002F4BB0(u8_c2F4BB0 *a0, s32_c2F4BB0 a1) {
    u8_c2F4BB0 *s2;
    u32_c2F4BB0 s1;
    u32_c2F4BB0 s0;
    s16_c2F4BB0 idx;
    s32_c2F4BB0 t;
    f32_c2F4BB0 out[8];
    void *val;

    idx = (s16_c2F4BB0)a1;
    t = *(u16_c2F4BB0 *)((u8_c2F4BB0 *)(idx * 2) + (s32_c2F4BB0)a0 + 0xC2);
    if (t == 0xFFFF) {
        return;
    }
    s2 = *(u8_c2F4BB0 **)((u8_c2F4BB0 *)(idx * 4) + (s32_c2F4BB0)a0 + 4);
    s1 = (u16_c2F4BB0)(t % 10);
    s0 = (u16_c2F4BB0)(t / 10);
    val = *(void **)(*(s32_c2F4BB0 *)(*(u8_c2F4BB0 **)((u8_c2F4BB0 *)(*(void * *)&gOutputPass) + 0x8) + 0x1C) + (s16_c2F4BB0)(idx + 0x4) * 4);
    func_00229800(val, out, -1, 0.0f);
    *(f32_c2F4BB0 *)(s2 + 0x20) = out[0];
    *(f32_c2F4BB0 *)(s2 + 0x24) = out[1];
    *(u32_c2F4BB0 *)(s2 + 0x34) = 0xC1A00000;
    *(u32_c2F4BB0 *)(s2 + 0x3C) = 0x41A00000;
    *(u32_c2F4BB0 *)(s2 + 0x30) = 0xC1A00000;
    *(u32_c2F4BB0 *)(s2 + 0x38) = 0x41A00000;
    *(f32_c2F4BB0 *)(s2 + 0x44) = 40.0f * (f32_c2F4BB0)s0;
    *(f32_c2F4BB0 *)(s2 + 0x40) = 40.0f * (f32_c2F4BB0)s1;
    *(f32_c2F4BB0 *)(s2 + 0x48) = 40.0f * (f32_c2F4BB0)((u16_c2F4BB0)s1 + 1);
    *(f32_c2F4BB0 *)(s2 + 0x4C) = 40.0f * (f32_c2F4BB0)((u16_c2F4BB0)s0 + 1);
}

extern void *A2d_AllocObj(s32, f32);
void func_002F4D50(u8 *arg0) {
    u8 *glob;
    s32 cnt;
    u8 *rec;
    u8 *cur;
    cur = arg0;
    cnt = 0;
    glob = gOutputPass;
    do {
        *(u8 **)(cur + 4) = rec = A2d_AllocObj(0, 0.0f);
        memset(rec, 0, 0x60);
        cnt++;
        *(s32 *)(rec + 4) = 3;
        *(s32 *)(rec + 0x10) = *(s32 *)(glob + 0xC);
        *(s32 *)(rec + 0x14) = 0x6000;
        *(s16 *)(rec + 0x18) = 2;
        *(s16 *)(rec + 0x1A) = 0;
        *(s32 *)(rec + 8) = 1;
        *(s32 *)(rec + 0xC) = 3;
        *(s32 *)(rec + 0x20) = 0;
        *(s32 *)(rec + 0x24) = 0;
        *(s32 *)(rec + 0x28) = 0;
        *(s32 *)(rec + 0x2C) = 0x3F800000;
        *(s32 *)(rec + 0x34) = 0;
        *(s32 *)(rec + 0x3C) = 0;
        *(s32 *)(rec + 0x30) = 0;
        *(s32 *)(rec + 0x38) = 0;
        *(s32 *)(rec + 0x44) = 0;
        *(s32 *)(rec + 0x40) = 0;
        *(s32 *)(rec + 0x48) = 0;
        *(s32 *)(rec + 0x4C) = 0;
        *(s32 *)(rec + 0x50) = 0x3F800000;
        *(s32 *)(rec + 0x54) = 0x3F800000;
        *(s32 *)(rec + 0x58) = 0x3F800000;
        *(s32 *)(rec + 0x5C) = 0x3F800000;
        cur += 4;
    } while (cnt < 0x24);
}
extern u8 *gOutputPass;
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_0022CF70(s32);
extern void A2d_FlushList(void);
extern f32 gFrameDelta;
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;

void func_002F4E40(u8 *a0) {
    u8 *s4;
    u8 *s3;
    s32 s2;
    u16 *s1;
    u8 *s0;
    f32 f1;
    s32 v;

    s4 = a0;
    s3 = *(u8 **)(a0 + 0x30);
    s0 = gOutputPass;
    func_00133B50(0, 0);
    v = *(s32 *)(s0 + 0xC);
    D_00470704 = v;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x6000);
    s0 = gOutputPass;
    D_00470238 = 0;
    v = *(s32 *)(s0 + 0xC);
    D_00470704 = v;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x6000);
    D_00470238 = 0;
    s0 = *(u8 **)s3;
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    if (*(s16 *)(s3 + 0xC0) == 2) {
        s2 = 0;
        s1 = (u16 *)s3;
        s0 = s3;
        do {
            if (*(u16 *)((u8 *)s1 + 0xC2) != 0xFFFF) {
                func_0022CF70(*(s32 *)(s0 + 0x4));
            }
            s2++;
            s1 = s1 + 1;
            s0 = s0 + 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    f1 = *(f32 *)(s3 + 0xBC) - gFrameDelta;
    *(f32 *)(s3 + 0xBC) = f1;
    if (f1 <= 0.0f) {
        *(s16 *)(s3 + 0xC0) = 4;
        *(s32 *)(s4 + 0x1C) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F4F70);
extern void func_002F4F70();

void func_002F5120(u8 *task) {
    u8 *s3;
    u8 *s0;
    s32 s2;
    u8 *s1;
    s32 m;
    s32 o;
    f32 f;

    s3 = *(u8 **)(task + 0x30);
    s0 = gOutputPass;
    func_00133B50(0, 0);
    m = *(s32 *)(s0 + 0xC);
    D_00470704 = m;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x6000);
    D_00470238 = 0;
    m = *(s32 *)(gOutputPass + 0xC);
    D_00470704 = m;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(m, 0x6000);
    D_00470238 = 0;
    o = *(s32 *)s3;
    if (o != 0) {
        func_0022C060(o, 1.0f);
        func_0022CD00(o);
    }
    if (*(s16 *)(s3 + 0xC0) == 2) {
        s2 = 0;
        s1 = s3;
        s0 = s3;
        do {
            if (*(u16 *)(s1 + 0xC2) != 0xFFFF) {
                func_0022CF70(*(s32 *)(s0 + 0x4));
            }
            s2++;
            s1 += 2;
            s0 += 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    f = *(f32 *)(s3 + 0xBC) - gFrameDelta;
    *(f32 *)(s3 + 0xBC) = f;
    if (f <= 0.0f) {
        *(s16 *)(s3 + 0xC0) = 2;
        *(void **)(task + 0x1C) = ((void *)func_002F4F70 == 0) ? 0 : (void *)func_002F4F70;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ipsyswnd", func_002F5260);
extern u8 *gOutputPass;

#if 0
// differs: the original reads gOutputPass into v0 and branches with bnez to the load, mine uses v1 and beqz with the move in the delay slot (tried if/else, return in each branch, local pointer)
s16 func_002F5480(void) {
    u8 *g = gOutputPass;
    if (*(u8 **)(g + 0x10) != 0) {
        return *(s16 *)(*(u8 **)(g + 0x30) + 0xC0);
    } else {
        return 0;
    }
}
#endif
s32 func_002F5480(void) {
    u8 *v;

    v = *(u8 **)((u8 *)gOutputPass + 0x10);
    if (v == 0) {
        return 0;
    }
    return *(s16 *)(*(u8 **)(v + 0x30) + 0xC0);
}
extern u8 *gOutputPass;

void OutputPass_Clear(void) {
    gOutputPass = 0;
}
extern void func_0022D0E0(void *, s32);
extern void func_0022D4B0(void *, s32);

void OutputPass_Release(void) {
    u8 *s0;
        u8 *base;
    s32 cnt;
    u8 *lp;
    s0 = gOutputPass;
    if (s0 == 0) {
        return;
    }
    if (s0 != 0 && *(void **)(s0 + 0x10) != 0) {
        base = *(u8 **)(*(u8 **)(s0 + 0x10) + 0x30);
        if (*(void **)base != 0) {
            func_0022D0E0(*(void **)base, 1);
            *(s32 *)base = 0;
        }
        cnt = 0;
        lp = base;
        do {
            func_0022D4B0(*(void **)(lp + 0x4), 1);
            cnt++;
            lp += 4;
        } while (cnt < 0x24);
        amHeap_Free(base);
        amTask_Kill(*(void **)(s0 + 0x10));
        *(s32 *)(s0 + 0x10) = 0;
    }
    if (*(void **)s0 != 0) {
        amCdFs_Close(*(void **)s0, 0);
    }
    if (*(void **)(s0 + 0x4) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x4), 0);
    }
    if (*(void **)(s0 + 0x8) != 0) {
        amHeap_Free(*(void **)(s0 + 0x8));
    }
    if (*(void **)(s0 + 0xC) != 0) {
        amHeap_Free(*(void **)(s0 + 0xC));
    }
    amHeap_Free(s0);
    gOutputPass = 0;
    Help_Exit();
}
void func_002F55E0(void) {
    u8 *s0;
    u8 *s3;
    s32 s1;
    u32 *s2;
    u8 *v1;

    s0 = gOutputPass;
    if (s0 != 0) {
        v1 = *(u8 **)(s0 + 0x10);
        if (v1 != 0) {
            s3 = *(u8 **)(v1 + 0x30);
            if (*(void **)s3 != 0) {
                func_0022D0E0(*(void **)s3, 1);
                *(void **)s3 = 0;
            }
            s1 = 0;
            s2 = (u32 *)s3;
            do {
                func_0022D4B0((void *)s2[1], 1);
                s1++;
                s2++;
            } while (s1 < 0x24);
            amHeap_Free(s3);
            amTask_Kill(*(void **)(s0 + 0x10));
            *(void **)(s0 + 0x10) = 0;
        }
    }
}
