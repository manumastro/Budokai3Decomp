/* Draft (not built): func_002FAFF0 at 0x002FAFF0, size 0x17C, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x164, original 0x17C
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FAFF0.s */

// src/unk/unk_2FAFF0.c func_002FAFF0 size diff=54/89
extern s16 D_0046B5B0[];
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133B50(s32, s32);
s32 func_00133D10(s32);
s32 func_0013B110(s32);
s32 func_0013BC00(s16, s32, s32, f32);
s32 func_0029D740(s32 *);
s32 func_0029DB00(void **, s32);
extern s32 D_00455920;
extern s32 D_00455928;
extern f32 D_0046FD80;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void func_0029D6C0(void *);
extern char D_003F0800[];
extern void func_0029D8B0(int, int);
void func_002FAFF0(u8 **arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp50;
    f32 *var_v1;
    s16 temp_a0;
    s32 var_v0;
    u8 *temp_s1;

    if (arg0 != NULL) {
        func_0013B0B0(D_003F0800);
        func_00131B90(&sp50);
        func_00131F00(&sp50, 0, 0);
        func_00132DF0(NULL);
        func_00133D10(0);
        var_v1 = &sp40;
        var_v0 = 0x10;
        temp_s1 = (unsigned char *)(&D_00455920 + (*(((u8 *)&D_0046B5B0) + (*(s32 *)((u8 *)(*arg0) + 0xC) * 2)) * 0x1C));
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp40 = *(f32 *)((u8 *)temp_s1 + 0x10);
        sp44 = *(f32 *)((u8 *)temp_s1 + 0x14);
        sp48 = *(f32 *)((u8 *)temp_s1 + 0x18);
        func_0029D6C0(&sp40);
        sp38 = 0x3F800000;
        sp3C = 0x3F800000;
        sp30 = 0;
        sp34 = 0;
        func_0029D740(&sp30);
        D_0046FD80 = *(f32 *)((u8 *)temp_s1 + 0xC);
        func_0029D8B0(-1, 4);
        temp_a0 = *(((u8 *)&D_0046B5B0) + (*(s32 *)((u8 *)(*arg0) + 0xC) * 2));
        func_0013BC00(temp_a0, 0, 0, *(&D_00455928 + (temp_a0 * 0x1C)));
        func_0029DB00((void **)(arg0), 0x3F800000);
        func_0013B110(1);
        func_00133B50(0, 0);
    }
}
