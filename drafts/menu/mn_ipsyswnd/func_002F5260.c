/* Draft (not built): func_002F5260 at 0x002F5260, size 0x218, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x218
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F5260.s */

// src/menu/mn_ipsyswnd.c func_002F5260 size diff=89/115
s32 func_0022D860(s32, s32);
s32 func_002F8340(s16 *);
extern void amFile_Load(void *);
extern void func_0022E0B0(void *);
extern void func_002F5120(void);
void func_002F5260(u8 *arg0) {
    s16 sp40;
    s16 sp42;
    s16 sp44;
    s16 sp46;
    s16 sp48;
    s16 sp4A;
    s16 sp4C;
    s16 sp4E;
    s16 sp50;
    s16 sp52;
    s16 sp54;
    s16 sp56;
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    s32 *var_v1;
    s16 *var_a1;
    s32 var_a2;
    u8 *temp_a0;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s0 = gOutputPass;
    var_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s2 = arg0;
    if (*(u8 **)((u8 *)var_s0 + 0xC) == NULL) {
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 4) == 3) {
            *(u8 **)((u8 *)var_s0 + 8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)var_s0 + 0), 0);
            *(u8 **)((u8 *)var_s0 + 0) = NULL;
            *(u8 **)((u8 *)var_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 4)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)var_s0 + 4), 0);
            *(u8 **)((u8 *)var_s0 + 4) = NULL;
            func_0022E0B0(*(u8 **)((u8 *)var_s0 + 8));
            amFile_Load(*(u8 **)((u8 *)var_s0 + 0xC));
            goto block_3;
        }
    } else {
block_3:
        *(s16 *)((u8 *)var_s1 + 0xC0) = 1;
        *(s32 *)((u8 *)var_s1 + 0xBC) = 0x41F00000;
        var_s0 = gOutputPass;
        temp_a0 = *(u8 **)((u8 *)var_s0 + 0xC);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x6000);
        D_00470238 = 0;
        *(s32 *)((u8 *)var_s1 + 0) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x14), 0);
        func_002F4D50(var_s1);
        sp40 = (s16) *(s8 *)((u8 *)var_s1 + 0x95);
        sp42 = (s16) *(s8 *)((u8 *)var_s1 + 0x96);
        sp44 = (s16) *(s8 *)((u8 *)var_s1 + 0x97);
        sp46 = (s16) *(s8 *)((u8 *)var_s1 + 0x98);
        sp48 = (s16) *(s8 *)((u8 *)var_s1 + 0x99);
        sp4A = (s16) *(s8 *)((u8 *)var_s1 + 0x9A);
        sp4C = (s16) *(s8 *)((u8 *)var_s1 + 0x9B);
        sp4E = (s16) *(s8 *)((u8 *)var_s1 + 0x9C);
        sp50 = (s16) *(s8 *)((u8 *)var_s1 + 0x9D);
        sp52 = *(s16 *)((u8 *)var_s1 + 0x9E);
        sp54 = *(s16 *)((u8 *)var_s1 + 0xA0);
        sp56 = *(s16 *)((u8 *)var_s1 + 0xA2);
        sp58 = *(s16 *)((u8 *)var_s1 + 0xA4);
        sp5A = *(s16 *)((u8 *)var_s1 + 0xA6);
        sp5C = *(s16 *)((u8 *)var_s1 + 0xA8);
        sp5E = *(s16 *)((u8 *)var_s1 + 0xAA);
        func_002F8340(&sp40);
        var_a2 = 0;
        var_a1 = &sp40;
        var_a0 = var_s1;
        do {
            var_a2 += 6;
            *(s16 *)((u8 *)var_a0 + 0xC2) = (s16) *(s16 *)((u8 *)var_a1 + 0x20);
            *(s16 *)((u8 *)var_a0 + 0xC4) = (s16) *(s16 *)((u8 *)var_a1 + 0x22);
            *(s16 *)((u8 *)var_a0 + 0xC6) = (s16) *(s16 *)((u8 *)var_a1 + 0x24);
            *(s16 *)((u8 *)var_a0 + 0xC8) = (s16) *(s16 *)((u8 *)var_a1 + 0x26);
            *(s16 *)((u8 *)var_a0 + 0xCA) = (s16) *(s16 *)((u8 *)var_a1 + 0x28);
            *(s16 *)((u8 *)var_a0 + 0xCC) = (s16) *(s16 *)((u8 *)var_a1 + 0x2A);
            var_a1 += 0xC;
            var_a0 += 0xC;
        } while (var_a2 < 0x24);
        var_s0 = NULL;
        do {
            func_002F4BB0(var_s1, (s64) ((s64) var_s0 << 0x30) >> 0x30);
            var_s0 += 1;
        } while ((s32) var_s0 < 0x24);
        var_v1 = (int *)(&func_002F5120);
        if (&func_002F5120 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)var_s2 + 0x1C) = var_v1;
    }
}
