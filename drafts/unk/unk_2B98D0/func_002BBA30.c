/* Draft (not built): func_002BBA30 at 0x002BBA30, size 0x280, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 85 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x294, original 0x280
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BBA30.s */

// src/unk/unk_2B98D0.c func_002BBA30 size diff=85/165
extern s128 D_00455E40;
extern s32 D_00455FD0;
extern s32 D_00511768;
extern void func_002BAC80(void);
void func_002BBA30(u8 *arg0) {
    s32 sp20;
    s128 sp40;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_a0_7;
    void (*var_v1)();
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_a0_6;
    u8 *temp_a0_8;

    if (func_0022BF80((void *)(*(s32 *)((u8 *)gStrStatus + 0x1C0))) == 0xFF) {
        temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x1C0);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)(temp_a0), 1);
            *(s32 *)((u8 *)gStrStatus + 0x1C0) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)gStrStatus + 0xA8);
        if (temp_a0_2 != NULL) {
            amTask_Kill(temp_a0_2);
            *(u8 **)((u8 *)gStrStatus + 0xA8) = NULL;
        }
        if (*(s32 *)((u8 *)gStrStatus + 0x40C) != 0) {
            var_v1 = func_002BC250;
            if (func_002BC250 == NULL) {
                var_v1 = NULL;
            }
        } else {
            sp40 = D_00455E40;
            func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
            StrBg_SetPos((void *)(*(s32 *)((u8 *)gStrStatus + 0x44)), (f32) *(s32 *)((u8 *)gStrStatus + 0x298), 0);
            temp_a0_3 = *(s32 *)((u8 *)gStrStatus + 0x1C8);
            if (temp_a0_3 != 0) {
                func_0022D0E0((void *)(temp_a0_3), 1);
                *(s32 *)((u8 *)gStrStatus + 0x1C8) = 0;
            }
            temp_a0_4 = *(u8 **)((u8 *)gStrStatus + 0x94);
            if (temp_a0_4 != NULL) {
                amTask_Kill(temp_a0_4);
                *(u8 **)((u8 *)gStrStatus + 0x94) = NULL;
            }
            temp_a0_5 = *(s32 *)((u8 *)gStrStatus + 0x1BC);
            if (temp_a0_5 != 0) {
                func_0022D0E0((void *)(temp_a0_5), 1);
                *(s32 *)((u8 *)gStrStatus + 0x1BC) = 0;
            }
            temp_a0_6 = *(u8 **)((u8 *)gStrStatus + 0x9C);
            if (temp_a0_6 != NULL) {
                amTask_Kill(temp_a0_6);
                *(u8 **)((u8 *)gStrStatus + 0x9C) = NULL;
            }
            temp_a0_7 = *(s32 *)((u8 *)gStrStatus + 0x1B8);
            if (temp_a0_7 != 0) {
                func_0022D0E0((void *)(temp_a0_7), 1);
                *(s32 *)((u8 *)gStrStatus + 0x1B8) = 0;
            }
            temp_a0_8 = *(u8 **)((u8 *)gStrStatus + 0x90);
            if (temp_a0_8 != NULL) {
                amTask_Kill(temp_a0_8);
                *(u8 **)((u8 *)gStrStatus + 0x90) = NULL;
            }
            if (D_00511768 != 0) {
                *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00455FD0) + 0);
                *(s64 *)((u8 *)(&sp20) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00455FD0) + 0x10);
                func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
                StrBg_SetPos((void *)(*(s32 *)((u8 *)gStrStatus + 0xC8)), (f32)(s32)(D_005116E8), 0);
                var_v1 = func_002BB890;
                *(u8 **)((u8 *)gStrStatus + 0x148) = amTask_Create((void (*)(void *))func_002BAC80, 0, (s32)(*(s32 *)((u8 *)gStrStatus + 0x274) + 0x44), 2, 0, 0);
                if (func_002BB890 == NULL) {
                    var_v1 = NULL;
                }
            } else {
                var_v1 = func_002BB650;
                if (func_002BB650 == NULL) {
                    var_v1 = NULL;
                }
            }
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
