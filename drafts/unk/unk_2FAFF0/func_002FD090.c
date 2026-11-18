/* Draft (not built): func_002FD090 at 0x002FD090, size 0x4C8, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 459: if (D_005CA030 == 2) { @ 439: if (D_005CA030 == 1) {
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FD090.s */

// src/unk/unk_2FAFF0.c func_002FD090 cerr diff=-1/0
extern s8 D_005D0080;
extern s8 D_005D0081;
void func_002FD090(s32 arg0) {
    s16 temp_t2;
    s16 temp_t4;
    s32 temp_a1;
    s32 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_a1_6;
    u8 *temp_a1_7;
    u8 *temp_a1_8;
    u8 *temp_t0;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_t0_6;
    u8 *temp_t0_7;
    u8 *temp_t0_8;
    u8 *temp_t0_9;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *temp_v1_8;

    temp_t0 = (u8 *)(gTourMap + 0x2F6);
    temp_a1 = D_005D0080 * 0x14;
    temp_v1 = D_005D0081 * 0x14;
    temp_t2 = *(temp_t0 + temp_v1);
    temp_t4 = *(temp_t0 + temp_a1);
    switch (arg0) {                                 /* irregular */
    case -1:
        if (D_005CA030 == 1) {
            temp_t0_2 = (u8 *)(gTourMap + temp_a1);
            if (temp_t4 >= 0) {
                *(s8 *)((u8 *)temp_t0_2 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_2 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
                temp_v1_2 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_v1_2 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_v1_2 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
                return;
            }
            temp_t0_3 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_t0_3 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_3 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
            temp_a0 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a0 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a0 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
            return;
        }
        if (D_005CA030 == 2) {
            if (temp_t4 >= 0) {
                temp_t0_4 = (u8 *)(gTourMap + temp_a1);
                if (temp_t2 >= 0) {
                    *(s8 *)((u8 *)temp_t0_4 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_4 + 0x2F3) + 1);
                    *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
                    temp_v1_3 = (u8 *)(gTourMap + temp_v1);
                    *(s8 *)((u8 *)temp_v1_3 + 0x2F0) = 3;
                    *(s32 *)((u8 *)temp_v1_3 + 0x2EC) = 0;
                    *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
                    return;
                }
            }
            temp_t0_5 = (u8 *)(gTourMap + temp_a1);
            if (temp_t4 >= 0) {
                *(s8 *)((u8 *)temp_t0_5 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_5 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
                temp_v1_4 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_v1_4 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_v1_4 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
                return;
            }
            temp_t0_6 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_t0_6 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_6 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
            temp_a0_2 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a0_2 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a0_2 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
            return;
        }
        if (temp_t4 >= 0) {
            temp_t0_7 = (u8 *)(gTourMap + temp_a1);
            if (temp_t2 >= 0) {
                *(s8 *)((u8 *)temp_t0_7 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_7 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
                temp_v1_5 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_v1_5 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_v1_5 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
                return;
            }
        }
        temp_t0_8 = (u8 *)(gTourMap + temp_a1);
        if (temp_t4 >= 0) {
            *(s8 *)((u8 *)temp_t0_8 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_8 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
            temp_v1_6 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_v1_6 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_v1_6 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
            return;
        }
        temp_a1_2 = (u8 *)(gTourMap + temp_a1);
        *(s8 *)((u8 *)temp_a1_2 + 0x2F0) = 3;
        *(s32 *)((u8 *)temp_a1_2 + 0x2EC) = 0;
        *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
        temp_a0_3 = (u8 *)(gTourMap + temp_v1);
        *(s8 *)((u8 *)temp_a0_3 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_3 + 0x2F3) + 1);
        *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
        return;
    case 1:
        if (D_005CA030 == 1) {
            if (temp_t4 >= 0) {
                temp_a1_3 = (u8 *)(gTourMap + temp_a1);
                *(s8 *)((u8 *)temp_a1_3 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_a1_3 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
                temp_a0_4 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_a0_4 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_4 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
                return;
            }
            temp_a0_5 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_a0_5 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a0_5 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
            temp_a0_6 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a0_6 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_6 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
            return;
        }
        if (D_005CA030 == 2) {
            if ((temp_t4 >= 0) && (temp_t2 >= 0)) {
                temp_a1_4 = (u8 *)(gTourMap + temp_a1);
                *(s8 *)((u8 *)temp_a1_4 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_a1_4 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
                temp_a0_7 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_a0_7 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_7 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
                return;
            }
            if (temp_t4 >= 0) {
                temp_a1_5 = (u8 *)(gTourMap + temp_a1);
                *(s8 *)((u8 *)temp_a1_5 + 0x2F0) = 3;
                *(s32 *)((u8 *)temp_a1_5 + 0x2EC) = 0;
                *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
                temp_a0_8 = (u8 *)(gTourMap + temp_v1);
                *(s8 *)((u8 *)temp_a0_8 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_8 + 0x2F3) + 1);
                *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
                return;
            }
            temp_a0_9 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_a0_9 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a0_9 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
            temp_a0_10 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a0_10 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_10 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
            return;
        }
        if ((temp_t4 >= 0) && (temp_t2 >= 0)) {
            temp_a1_6 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a1_6 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a1_6 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
            temp_a0_11 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_a0_11 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_11 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
            return;
        }
        if (temp_t4 >= 0) {
            temp_a1_7 = (u8 *)(gTourMap + temp_a1);
            *(s8 *)((u8 *)temp_a1_7 + 0x2F0) = 3;
            *(s32 *)((u8 *)temp_a1_7 + 0x2EC) = 0;
            *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
            temp_a0_12 = (u8 *)(gTourMap + temp_v1);
            *(s8 *)((u8 *)temp_a0_12 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a0_12 + 0x2F3) + 1);
            *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0081;
            return;
        }
        temp_t0_9 = (u8 *)(gTourMap + temp_a1);
        *(s8 *)((u8 *)temp_t0_9 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_t0_9 + 0x2F3) + 1);
        *(s16 *)((u8 *)gTourMap + 0x64) = (s16) D_005D0080;
        temp_v1_7 = (u8 *)(gTourMap + temp_v1);
        *(s8 *)((u8 *)temp_v1_7 + 0x2F0) = 3;
        *(s32 *)((u8 *)temp_v1_7 + 0x2EC) = 0;
        *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0081;
        return;
    case 0:
        temp_a1_8 = (u8 *)(gTourMap + temp_a1);
        *(s8 *)((u8 *)temp_a1_8 + 0x2F0) = 3;
        *(s32 *)((u8 *)temp_a1_8 + 0x2EC) = 0;
        temp_v1_8 = (u8 *)(gTourMap + temp_v1);
        *(s8 *)((u8 *)temp_v1_8 + 0x2F0) = 3;
        *(s32 *)((u8 *)temp_v1_8 + 0x2EC) = 0;
        *(s16 *)((u8 *)gTourMap + 0x66) = (s16) D_005D0080;
        *(s16 *)((u8 *)gTourMap + 0x64) = -1;
        return;
    }
}
