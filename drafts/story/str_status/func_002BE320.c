/* Draft (not built): func_002BE320 at 0x002BE320, size 0x1C0, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); BE0B0(...)' redeclared was declared as: 'int (...)' now declared as: 'void (int)' @ 667: extern void func_002BE0B0(s32);
 * Original: asm/nonmatchings/story/str_status/func_002BE320.s */

// src/story/str_status.c func_002BE320 cerr diff=-1/0
s32 amMotion_FindBone(s32, s32 *);
s32 func_00209540(s32, s32, s32);
s32 func_002096D0(void *, s32, s32);
void *func_00240F40(s32, s32);
s32 func_00243600(s32, s32);
void *func_00243DC0(s32);
extern s32 D_0046EEA0;
extern s32 D_0058CA08;
void func_002BE320(u8 *arg0) {
    s32 temp_a1;
    s32 var_v0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s5 = (u8 *)(D_0046FE44);
    temp_s4 = (u8 *)(D_0046FE48);
    temp_s3 = func_00240F40(0, 0);
    temp_s2 = func_00240F40(0, 1);
    temp_s1 = func_00240F40(0, 2);
    temp_v0 = func_00240F40(0, 3);
    *(s32 *)((u8 *)temp_s3 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x24) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
    temp_v0_2 = func_00243DC0(0);
    *(s32 *)((u8 *)temp_s4 + 0x194) = (s32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v0_2 + 0xC) * 4) + temp_v0_2) + 0x14);
    temp_v0_3 = func_00243DC0(0);
    temp_a1 = *(s32 *)((u8 *)temp_v0_3 + 0xC) * 4;
    *(s32 *)((u8 *)temp_s4 + 0x198) = (s32) *(s32 *)((u8 *)(temp_a1 + temp_v0_3) + 0xFC);
    *(s32 *)((u8 *)temp_s4 + 0x19C) = 0x03006000;
    func_00243600(0, temp_a1);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    func_002BE0B0(arg0);
    *(s32 *)((u8 *)temp_s5 + 0x40) = func_002096D0(temp_s3, 0x400008, 0);
    *(s32 *)((u8 *)temp_s5 + 0x44) = func_002096D0(temp_s2, 0x400008, 0);
    *(s32 *)((u8 *)temp_s5 + 0x48) = func_002096D0(temp_s1, 0x400008, 0);
    if (*(s32 *)((u8 *)arg0 + 0xC) == 0xE) {
        *(s32 *)((u8 *)temp_s5 + 0x78) = amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x4C)) + 4), &D_0046EEA0);
        *(s32 *)((u8 *)temp_s4 + 0x1A0) = (s32) D_0058CA08;
        if (0 != 0) {
            var_v0 = 0xD;
        } else {
            var_v0 = 0xC;
        }
        *(s32 *)((u8 *)temp_s5 + 0x70) = func_00209540((&D_0058CA08)[var_v0], 0x400040, 0);
    }
}
