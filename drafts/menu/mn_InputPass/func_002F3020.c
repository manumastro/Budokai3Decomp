/* Draft (not built): func_002F3020 at 0x002F3020, size 0x1E8, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'void *' to 'int' @ 830: u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xC)) + 0x14)) + 0xC)))))), 0);
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F3020.s */

// src/menu/mn_InputPass.c func_002F3020 cerr diff=-1/0
extern void func_002F3210(Task *);
s32 func_002F4A70(s32);
void func_002F3020(u8 *arg0) {
    s32 *var_v0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s1;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gInputName;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x10);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x5000);
    D_00470238 = 0;
    func_002F2D50(temp_s3);
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)temp_s3 + 0x60) < 5) {
        var_s1 = temp_s3;
        var_s0 = temp_s3;
        do {
            if (*(s16 *)((u8 *)var_s1 + 0x50) != -1) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 8);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (((s64) (func_002F4A80(*(s32 *)((u8 *)temp_s3 + 0x3C)) << 0x30) >> 0x30) == 4) {
        if (func_002F4A70(*(s32 *)((u8 *)temp_s3 + 0x3C)) != 0) {
            var_v0 = (s32 *)(&func_002F3210);
            if (&func_002F3210 == NULL) {
                var_v0 = NULL;
            }
        } else {
            *(s8 *)((u8 *)temp_s3 + 0x61) = 1;
            *(s32 *)((u8 *)temp_s3 + 0x40) = 0x41A00000;
            *(u8 *)((u8 *)temp_s3 + 0x60) = 5U;
            temp_s0_2 = gInputName;
            temp_a0_2 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
            D_00470704 = (s32)(temp_a0_2);
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0x5000);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s3 + 0);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s3 + 0) = func_0022D860((s32)((s32)((s32)((s32)((s32)((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xC)) + 0x14)) + 0xC))))))), 0);
            temp_a0_4 = *(s32 *)((u8 *)temp_s3 + 0x28);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
                *(s32 *)((u8 *)temp_s3 + 0x28) = 0;
            }
            temp_a0_5 = *(s32 *)((u8 *)temp_s3 + 0x2C);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
                *(s32 *)((u8 *)temp_s3 + 0x2C) = 0;
            }
            var_v0 = (s32 *)(&func_002F2F00);
            if (&func_002F2F00 == NULL) {
                var_v0 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        func_002F4A90(*(s32 *)((u8 *)temp_s3 + 0x3C));
        *(s32 *)((u8 *)temp_s3 + 0x3C) = 0;
    }
}
