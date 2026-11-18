/* Draft (not built): func_002F1300 at 0x002F1300, size 0x200, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'void *' to 'int' @ 324: ((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 0xC)) + 0x14)) + 4)))))), 0);
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F1300.s */

// src/menu/mn_InputPass.c func_002F1300 cerr diff=-1/0
extern void *func_0022D860(f32, void *);
s32 InputName_Start();
s32 func_002F4A70(s32);
extern void StrStatus_Free(void);
extern void func_002BFD90(void);
extern void func_002F10F0(void);
void func_002F1300(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;
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
    func_002F0BC0(temp_s3);
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)temp_s3 + 0x170) < 5) {
        var_s1 = temp_s3;
        var_s0 = temp_s3;
        do {
            if (*(u16 *)((u8 *)var_s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (((s64) (func_002F4A80(*(s32 *)((u8 *)temp_s3 + 0x110)) << 0x30) >> 0x30) == 4) {
        *(s32 *)((u8 *)temp_s3 + 0x118) = 0x41A00000;
        *(u8 *)((u8 *)temp_s3 + 0x172) = (u8) (func_002F4A70(*(s32 *)((u8 *)temp_s3 + 0x110)) == 0);
        *(u8 *)((u8 *)temp_s3 + 0x170) = 5U;
        func_002F4A90(*(s32 *)((u8 *)temp_s3 + 0x110));
        *(s32 *)((u8 *)temp_s3 + 0x110) = 0;
        if (*(u8 *)((u8 *)temp_s3 + 0x172) != 0) {
            temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
            var_v1 = (s32 *)(&func_002F10F0);
            *(s32 *)((u8 *)temp_s0_2 + 0x114) = InputName_Start();
            if (&func_002F10F0 == NULL) {
                var_v1 = NULL;
            }
        } else {
            temp_s0_3 = gInputName;
            temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
            temp_a0_2 = *(u8 **)((u8 *)temp_s0_3 + 0x10);
            D_00470704 = (s32)(temp_a0_2);
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0x5000);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s1 + 0);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s1 + 0) = func_0022D860((s32)((s32)((s32)((s32)((s32)((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 0xC)) + 0x14)) + 4))))))), 0);
            temp_a0_4 = *(s32 *)((u8 *)temp_s1 + 0x98);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
                *(s32 *)((u8 *)temp_s1 + 0x98) = 0;
            }
            temp_a0_5 = *(s32 *)((u8 *)temp_s1 + 0x9C);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
                *(s32 *)((u8 *)temp_s1 + 0x9C) = 0;
            }
            StrStatus_Free();
            func_002BFD90();
            var_v1 = (s32 *)(&func_002F0FD0);
            if (&func_002F0FD0 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
