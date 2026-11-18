/* Draft (not built): func_0023A890 at 0x0023A890, size 0x1BC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )(), void (*)(), int, int, int, void *)' @ 239: *temp_s1 = amTask_Create(func_00239920, &func_002393E0, 0x5410, 0x1000);
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023A890.s */

// src/unk/unk_23A890.c func_0023A890 cerr diff=-1/0
s32 A2d_AllocObj(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_00238790(void *, s32, s32, s32, s32);
void func_00239920(s8 *);
s32 sprintf(s32 *, s32 *, s32);
extern s32 D_0046ABF8;
extern s32 D_0046AC08;
extern s32 D_0058BF40;
extern s32 func_002393E0;
extern void func_00228410(void);
extern void func_002392F0(char *);
void func_0023A890(s32 arg1) {
    s32 sp50;
    s32 temp_s0;
    s32 temp_v0;
    u8 **temp_s1;
    u8 *temp_a0;
    u8 *temp_s1_2;
    u8 *temp_s3;
    u8 *temp_v0_2;

    temp_s3 = gBtlSys;
    temp_v0 = func_0021C360(0);
    temp_s1 = (u8 **)(&D_0058BF40 + (temp_v0 * 4));
    if (*temp_s1 == NULL) {
        if (arg1 < 2) {

        } else {
            sprintf(&sp50, &D_0046ABF8, temp_v0);
            *temp_s1 = amTask_Create(func_00239920, &func_002393E0, 0x5410, 0x1000);
            temp_s1_2 = *temp_s1 + 0x30;
            memset(temp_s1_2, 0, 0x20);
            *(s32 *)((u8 *)temp_s1_2 + 4) = temp_v0;
            *(s32 *)((u8 *)temp_s1_2 + 8) = arg1;
            temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xE84);
            D_00470704 = (s32)(temp_a0);
            D_0047070C = 0x04010000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0), 0x04010000);
            D_00470238 = 0;
            func_00228430(0);
            func_002284D0(0);
            func_00238790(temp_s1_2 + 0xC, temp_v0, arg1, 0, 0);
            temp_s0 = temp_v0 & 1;
            if (temp_s0 != 0) {
                func_00228410();
            }
            *(s32 *)((u8 *)temp_s1_2 + 0x18) = A2d_AllocObj(*(s32 *)((u8 *)((temp_v0 * 0xC) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0xE8), 0);
            if (temp_s0 == 0) {
                func_00228410();
            }
            sprintf(&sp50, &D_0046AC08, temp_v0);
            *(u8 **)((u8 *)temp_s1_2 + 0x1C) = amTask_Create(func_002392F0, NULL, 0x3A10, 0x1000);
            temp_v0_2 = *(u8 **)((u8 *)temp_s1_2 + 0x1C);
            memset(temp_v0_2 + 0x30, 0, 4);
            *(u8 **)((u8 *)temp_v0_2 + 0x30) = temp_s1_2;
        }
    }
}
