/* Draft (not built): func_0029A4F0 at 0x0029A4F0, size 0x3E4, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  to 'int' mwccps2.exe Compiler: @ 143: ((s32)((u8 *)(**(s32 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x58)) + 0x1C)))))), 0);
 * Original: asm/nonmatchings/story/str_map/func_0029A4F0.s */

// src/story/str_map.c func_0029A4F0 cerr diff=-1/0
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);
extern s32 func_0022BF80(s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, void *, s32, s32);
s32 func_0022C560(void *);
s32 func_0028E640(s32);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_0029A4F0(s32 arg0) {
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a2;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s8 temp_a0;
    s8 temp_v0_2;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_t2;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_a0 = *(s8 *)((u8 *)gStrMap + 0x1B1);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_v1 = *(u8 **)((u8 *)gStrMap + 4);
        if (temp_v1 != NULL) {
            if (*(s16 *)((u8 *)temp_v1 + 4) == 3) {
                goto block_7;
            }
        } else {
block_7:
            var_s1 = 0;
            var_s0 = 0;
            do {
                temp_v1_2 = (u8 *)(gStrMap + var_s0);
                temp_v0 = *(u8 **)((u8 *)temp_v1_2 + 0);
                if (temp_v0 != NULL) {
                    *(s32 *)((u8 *)temp_v1_2 + 0x10) = (s32) *(s32 *)((u8 *)temp_v0 + 0x40);
                    *(s32 *)((u8 *)(*(gStrMap + var_s0)) + 0x40) = 0;
                    amCdFs_Close(*(gStrMap + var_s0), 0);
                    *(gStrMap + var_s0) = 0;
                    amFile_Load((s32)((void *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(gStrMap + var_s0) + 0x10)) + 0x50))));
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < 2);
            *(u8 **)((u8 *)gStrMap + 0x58) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x10)) + 0x50);
            *(u8 **)((u8 *)gStrMap + 0x60) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x14)) + 0x50);
            *(s8 *)((u8 *)gStrMap + 0x1B1) = 1;
            temp_v0_2 = *(s8 *)((u8 *)gStrMap + 0x1B2);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                temp_a0_2 = *(u8 **)((u8 *)gStrMap + 0x68);
                if (temp_a0_2 != NULL) {
                    func_0022D0E0((s32)(temp_a0_2), 1);
                }
                *(u8 **)((u8 *)gStrMap + 0x68) = func_0022D670((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(**(s32 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x58)) + 0x1C))))))), 0);
                func_0028EC50(arg0, gStrMap + 0x68, *(u8 **)((u8 *)gStrMap + 0x60), 0x500000);
                *(s8 *)((u8 *)gStrMap + 0x1B1) = 2;
                break;
            case 1:                                 /* switch 2 */
                temp_a0_3 = *(u8 **)((u8 *)gStrMap + 0x68);
                if (temp_a0_3 != NULL) {
                    func_0022D0E0((s32)(temp_a0_3), 1);
                }
                *(u8 **)((u8 *)gStrMap + 0x68) = func_0022D670((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x58)) + 0x1C)) + 4))))))), 0);
                func_0028EC50(arg0, gStrMap + 0x68, *(u8 **)((u8 *)gStrMap + 0x60), 0x500000);
                *(s8 *)((u8 *)gStrMap + 0x1B1) = 2;
                break;
            }
        default:                                    /* switch 1 */
        case 2:                                     /* switch 1 */
            temp_s2 = amGs_SetReg32(2, 0x30402);
            func_00133780(2, 1);
            func_0028E640(arg0);
            func_0022C560(*(u8 **)((u8 *)gStrMap + 0x68));
            temp_v0_3 = *(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x68)) + 0x30);
            sp70 = *(f32 *)((u8 *)temp_v0_3 + 0x20);
            sp74 = *(f32 *)((u8 *)temp_v0_3 + 0x24);
            sp78 = *(f32 *)((u8 *)temp_v0_3 + 0x28);
            sp7C = *(f32 *)((u8 *)temp_v0_3 + 0x2C);
            temp_t2 = *(u8 **)((u8 *)gStrMap + 0x60);
            temp_a2 = *(s8 *)((u8 *)gStrMap + 0x1B0) + 2;
            temp_v0_4 = temp_t2 + *(*(s32 *)((u8 *)temp_t2 + 0x14) + temp_t2 + ((temp_a2 - *(s32 *)((u8 *)temp_t2 + 0x18)) * 4));
            temp_f21 = (f32) *(s16 *)((u8 *)temp_v0_4 + 0x10);
            temp_f20 = (f32) *(s16 *)((u8 *)temp_v0_4 + 0x12);
            func_00136E80(0x40000924, *(u8 **)((u8 *)(*(u8 **)((u8 *)gStrMap + 0x68)) + 0x30) + 0x50, temp_a2, 0x44);
            sp70 -= temp_f21;
            sp74 -= 0.5f * temp_f20;
            sp78 -= 10.0f;
            sp60 = 0.0f;
            sp64 = 0.0f;
            sp68 = 0x3F800000;
            sp6C = 0x3F800000;
            func_00137560(&sp70, &sp60);
            sp70 += temp_f21;
            sp74 += temp_f20;
            sp60 = temp_f21;
            sp64 = temp_f20;
            func_00137560(&sp70, &sp60);
            amDraw_FlushPacket();
            func_00133780(2, 0);
            amGs_SetReg32(2, temp_s2);
            if ((*(s8 *)((u8 *)gStrMap + 0x1B2) == 1) && (func_0022BF80(*(u8 **)((u8 *)gStrMap + 0x68), gStrMap) == 0xFF)) {
                *(s8 *)((u8 *)gStrMap + 0x1B1) = 1;
            }
        }
        return;
    case 1:                                         /* switch 1 */
        return;
    }
}
