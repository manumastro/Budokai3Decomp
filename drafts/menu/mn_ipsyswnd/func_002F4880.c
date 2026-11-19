/* Draft (not built): func_002F4880 at 0x002F4880, size 0x1F0, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x224, original 0x1F0
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4880.s */

// src/menu/mn_ipsyswnd.c func_002F4880 size diff=76/137
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern f32 D_004E0614;
extern void amFile_Load(void *);
extern void SoundRpc_Send3();
extern void func_0022E0B0(void *);
extern void func_002F4780(void);
void func_002F4880(u8 *arg0) {
    s32 *var_v1;
    s16 temp_v1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s0 = gInputName;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(s32 *)((u8 *)temp_s0 + 0x14) == 0) {
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 4) == 3) {
            *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = 0;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
            *(s32 *)((u8 *)temp_s0 + 0) = 0;
            *(u8 **)((u8 *)temp_s0 + 0x10) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
            *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            *(u8 **)((u8 *)temp_s0 + 0x14) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 8), 0);
            *(u8 **)((u8 *)temp_s0 + 8) = NULL;
            func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 0xC));
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0x10));
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0x14));
            goto block_3;
        }
    } else {
block_3:
        temp_s0_2 = gInputName;
        temp_a0 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x5000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 0);
        if (temp_a0_2 != 0) {
            func_0022D0E0((void *)(temp_a0_2), 1);
        }
        *(s32 *)((u8 *)temp_s1 + 0) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xC)) + 0x1C)) + 0xEC), 0);
        temp_v1 = *(s16 *)((u8 *)temp_s1 + 0xC);
        if ((temp_v1 != 6) && (temp_v1 != 4) && (temp_v1 != 0)) {

        } else {
            temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 4);
            if (temp_a0_3 != 0) {
                func_0022D0E0((void *)(temp_a0_3), 1);
            }
            *(s32 *)((u8 *)temp_s1 + 4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xC)) + 0x14)) + 0x10), 0);
        }
        *(s16 *)((u8 *)temp_s1 + 0xE) = 1;
        *(s32 *)((u8 *)temp_s1 + 0x14) = 0x41F00000;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        var_v1 = (int *)(&func_002F4780);
        if (&func_002F4780 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002F2350 (src/menu/mn_InputPass.c), similarity 0.75.
 * It is the template below (not built). */
#if 0
void func_002F2350(Task *a0) {
    u8 *s2;
    u8 *s1;
    u8 *s0;
    s32 v;

    s2 = (u8 *)a0;
    s0 = (u8 *)gInputName;
    s1 = *(u8 **)((u8 *)a0 + 0x30);
    if (*(s32 *)(s0 + 0x14) == 0) {
        if (*(s16 *)(*(u8 **)(s0 + 0x8) + 0x4) != 3) {
            return;
        }
        {
            *(s32 *)(s0 + 0xC) = *(s32 *)(*(u8 **)s0 + 0x54);
            *(s32 *)(*(u8 **)s0 + 0x54) = 0;
            amCdFs_Close(*(void **)s0, 0);
            *(s32 *)s0 = 0;
            *(s32 *)(s0 + 0x10) = *(s32 *)(*(u8 **)(s0 + 0x4) + 0x54);
            *(s32 *)(*(u8 **)(s0 + 0x4) + 0x54) = 0;
            amCdFs_Close(*(void **)(s0 + 0x4), 0);
            *(s32 *)(s0 + 0x4) = 0;
            *(s32 *)(s0 + 0x14) = *(s32 *)(*(u8 **)(s0 + 0x8) + 0x54);
            *(s32 *)(*(u8 **)(s0 + 0x8) + 0x54) = 0;
            amCdFs_Close(*(void **)(s0 + 0x8), 0);
            *(s32 *)(s0 + 0x8) = 0;
            func_0022E0B0(*(s32 *)(s0 + 0xC));
            amFile_Load(*(s32 *)(s0 + 0x10));
            amFile_Load(*(s32 *)(s0 + 0x14));
        }
    }
    s0 = (u8 *)gInputName;
    v = *(s32 *)(s0 + 0x10);
    D_00470704 = v;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x5000);
    D_00470238 = 0;
    *(void **)s1 = func_0022D860(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x14)));
    *(u8 *)(s1 + 0x170) = 1;
    *(f32 *)(s1 + 0x118) = 30.0f;
    *(s16 *)(s1 + 0x124) = 0x21;
    func_002F0B00(s1);
    func_002F0870((u32 *)s1);
    *(void **)(s2 + 0x1C) = ((void *)func_002F21B0 == 0) ? 0 : (void *)func_002F21B0;
}
#endif
