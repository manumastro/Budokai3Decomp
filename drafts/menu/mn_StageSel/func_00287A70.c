/* Draft (not built): func_00287A70 at 0x00287A70, size 0x1C0, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x204, original 0x1C0
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00287A70.s */

// src/menu/mn_StageSel.c func_00287A70 size diff=66/129
s32 amCdFs_Close(void *, s32);
s32 func_00131D00(s32 *, s32, s32, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_00284CB0(void *);
extern void *D_0047082C;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amFile_Load(void *);
extern void func_0022E0B0(void *);
extern char D_003F0800[];
extern void func_002878B0(void);
void func_00287A70(u8 *arg0) {
    s32 sp40;
    s32 *var_v1;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = D_0047082C;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4) == 3) {
        *(u8 **)((u8 *)temp_s1 + 8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 8), 0);
        *(s32 *)((u8 *)temp_s0 + 8) = 0;
        *(u8 **)((u8 *)temp_s1 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0xC), 0);
        *(u8 **)((u8 *)temp_s0 + 0xC) = NULL;
        *(u8 **)((u8 *)temp_s1 + 0x10) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x10)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x10)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0x10), 0);
        *(u8 **)((u8 *)temp_s0 + 0x10) = NULL;
        *(u8 **)((u8 *)temp_s1 + 0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
        *(u8 **)((u8 *)temp_s1 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
        *(u8 **)((u8 *)temp_s0 + 4) = NULL;
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 8));
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 0xC));
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 0x10));
        func_0022E0B0(*(u8 **)((u8 *)temp_s1 + 0));
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 4));
        func_00284CB0(temp_s1);
        func_00286A30(temp_s1);
        *(s16 *)((u8 *)temp_s1 + 0x25C) = (s16) *(s16 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x260) * 0xC) + temp_s1) + 0x4C);
        *(s32 *)((u8 *)temp_s1 + 0x28C) = 0x42700000;
        func_0013B0B0(D_003F0800);
        func_00131B90(&sp40);
        func_00131D00(&sp40, 0, 0, 0);
        func_00131F00(&sp40, 0, 0);
        func_00132DF0(NULL);
        func_0013B110(1);
        var_v1 = (int *)(&func_002878B0);
        if (&func_002878B0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
