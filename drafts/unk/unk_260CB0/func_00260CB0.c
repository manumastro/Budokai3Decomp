/* Draft (not built): func_00260CB0 at 0x00260CB0, size 0xAD8, segment unk/unk_260CB0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  mwccps2.exe Compiler: 10: extern FadeTask *D_004707A0; @ 8: extern void func_00136E80(s32, FadeColor *, s32, s32, s32);
 * Original: asm/nonmatchings/unk/unk_260CB0/func_00260CB0.s */

// src/unk/unk_260CB0.c func_00260CB0 cerr diff=-1/0
extern s32 amGs_SetReg32(s32, s32);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void func_00136E80(s32, FadeColor *, s32, s32, s32);
extern void amDraw_FlushPacket(void);
extern FadeTask *D_004707A0;
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw_ClosePacket(s32);
s32 amVram_Apply(s32);
s32 func_001363D0(s32, s32, s32, s32);
s32 func_00136870(s32, s32, s32, s32);
s32 func_001377E0(f32 *, s128 *);
s32 func_00137920(f32 *, s128 *, f32 *, s128 *);
extern s128 D_00452E30;
extern s128 D_00452E40;
extern s128 D_00452E50;
extern s32 D_0045A4D0;
extern s32 D_0045A4F0;
extern s32 D_004703B0;
extern u32 D_00470414;
extern s32 D_00470418;
extern u32 D_0047046C;
extern u16 D_0047E5A0;
extern u16 D_0047E710;
extern void *gPacketPtr;
extern void func_00137560(void *, void *);
extern void func_00137C10(void *, void *);
extern void amDraw3d_Sync(void);
extern void func_00263FB0(void);
void func_00260CB0(f32 fparg0) {
    f32 spB0;
    s32 spB4;
    s32 spB8;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    f32 spD0;
    s32 spD4;
    s32 spD8;
    f32 spE0;
    f32 spE4;
    s3232 spE8;
    s3232 spEC;
    f32 spF0;
    f32 spF4;
    s3232 spF8;
    s3232 spFC;
    f32 sp100;
    f32 sp104;
    s3232 sp108;
    s3232 sp10C;
    s128 sp110;
    s128 sp120;
    s128 sp130;
    f32 sp140;
    f32 sp144;
    s3232 sp148;
    s3232 sp14C;
    f32 sp150;
    f32 sp154;
    s3232 sp158;
    s3232 sp15C;
    f32 sp160;
    f32 sp164;
    s3232 sp168;
    s3232 sp16C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f2;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    f32 var_s4;
    s16 var_v0;
    s32 temp_s5;

    var_s4 = 100.0f * fparg0;
    if (M2C_BITWISE(s32, var_s4) >= 0x14) {
        if (M2C_BITWISE(s32, var_s4) >= 0x65) {
            var_s4 = 1.4e-43f;
        }
        if (M2C_BITWISE(s32, var_s4) < 0x41) {
            if (*(s32 *)((u8 *)D_004707A0 + 0x1C) == &func_00263FB0) {
                sp130 = D_00452E30;
                sp120 = D_00452E40;
                sp140 = 0.0f;
                sp144 = 112.0f;
                sp148 = 0;
                temp_f3 = (f32) (M2C_BITWISE(s32, var_s4) - 0x14) / 20.0f;
                sp14C = 0x3F800000;
                temp_f21 = 639.0f * temp_f3;
                sp160 = sp140;
                sp164 = sp144;
                sp168 = sp148;
                temp_f20 = 639.0f * (temp_f3 - 0.5f);
                sp16C = sp14C;
                sp160 = temp_f21;
                sp150 = temp_f21;
                sp154 = sp164;
                sp158 = sp168;
                sp15C = sp16C;
                sp150 = temp_f20;
                if (!(temp_f20 < 639.0f)) {
                    sp160 = 639.0f;
                    sp150 = 639.0f;
                }
                func_001363D0(1, 0x412, 0, 0);
                func_00137920(&sp160, &sp130, &sp150, &sp120);
                func_001377E0(&sp140, &sp120);
                sp140 = 639.0f;
                sp144 = 336.0f;
                sp148 = 0;
                temp_f1 = 639.0f - temp_f21;
                sp14C = 0x3F800000;
                temp_f0 = 639.0f - temp_f20;
                sp160 = sp140;
                sp164 = sp144;
                sp168 = sp148;
                sp16C = sp14C;
                sp160 = temp_f1;
                sp150 = temp_f1;
                sp154 = sp164;
                sp158 = sp168;
                sp15C = sp16C;
                sp150 = temp_f0;
                if (temp_f0 <= 0.0f) {
                    sp160 = 0.0f;
                    sp150 = 0.0f;
                }
                amDraw_ClosePacket(-1);
                func_00137920(&sp160, &sp130, &sp150, &sp120);
                func_001377E0(&sp140, &sp120);
                if (M2C_BITWISE(s32, var_s4) >= 0x29) {
                    temp_f20_2 = (f32) (M2C_BITWISE(s32, var_s4) - 0x28) / 15.0f;
                    var_f4 = temp_f20_2;
                    if (!(temp_f20_2 <= 1.0f)) {
                        var_f4 = 1.0f;
                    }
                    sp140 = 639.0f;
                    sp144 = 112.0f;
                    sp160 = 639.0f - (319.0f * var_f4);
                    var_f3 = temp_f20_2 - 0.5f;
                    sp164 = 112.0f + (112.0f * var_f4);
                    if (!(var_f3 <= 1.0f)) {
                        var_f3 = 1.0f;
                    }
                    sp150 = 639.0f - (319.0f * var_f3);
                    sp154 = 112.0f + (112.0f * var_f3);
                    amDraw_ClosePacket(-1);
                    func_00137920(&sp160, &sp130, &sp150, &sp120);
                    func_001377E0(&sp140, &sp120);
                    var_f3_2 = temp_f20_2;
                    if (!(temp_f20_2 <= 1.0f)) {
                        var_f3_2 = 1.0f;
                    }
                    sp140 = 0.0f;
                    sp144 = 336.0f;
                    sp160 = 320.0f * var_f3_2;
                    sp164 = 336.0f + (-112.0f * var_f3_2);
                    var_f2 = temp_f20_2 - 0.5f;
                    if (!(var_f2 <= 1.0f)) {
                        var_f2 = 1.0f;
                    }
                    sp150 = 320.0f * var_f2;
                    sp154 = 336.0f + (-112.0f * var_f2);
                    amDraw_ClosePacket(-1);
                    func_00137920(&sp160, &sp130, &sp150, &sp120);
                    func_001377E0(&sp140, &sp120);
                }
                amDraw_FlushPacket();
            }
        } else {
            sp110 = D_00452E50;
            amDraw3d_Sync();
            if (D_004703B0 != 0) {
                var_v0 = (D_0047E710 & 0x1FF & 0x1FF) << 5;
            } else {
                var_v0 = (D_0047E5A0 & 0x1FF & 0x1FF) << 5;
            }
            *((s32) &D_0045A4F0 | 0x20000000) = var_v0;
            *(s32 *)((u8 *)gPacketPtr + 0) = 0x50000000;
            *(s32 **)((u8 *)gPacketPtr + 4) = &D_0045A4D0;
            *(s64 *)((u8 *)gPacketPtr + 8) = 0;
            *(s64 *)((u8 *)gPacketPtr + 0x10) = 0x60000004;
            *(s64 *)((u8 *)gPacketPtr + 0x18) = (s64) (0x50000004 << 0x20);
            *(s64 *)((u8 *)gPacketPtr + 0x20) = (s64) (0x8003 | (0x10000000 << 0x20));
            *(s64 *)((u8 *)gPacketPtr + 0x28) = 0xE;
            *(s64 *)((u8 *)gPacketPtr + 0x30) = 1;
            *(s64 *)((u8 *)gPacketPtr + 0x38) = 0x14;
            *(s64 *)((u8 *)gPacketPtr + 0x40) = (s64) ((((u64) D_00470414 >> 6) << 0xE) | ((u64) ((u64) ((((s64) D_0047046C * 2) + D_0047046C) * 4) >> 2) >> 6) | (0x28000000 | (0x20000002 << 0x20)));
            *(s64 *)((u8 *)gPacketPtr + 0x48) = 6;
            *(s64 *)((u8 *)gPacketPtr + 0x50) = (s64) (0x80 | (0x80 << 0x20));
            *(s64 *)((u8 *)gPacketPtr + 0x58) = 0x3B;
            gPacketPtr += 0x60;
            amDma_Request(0, 1, 1, 1);
            amDraw3d_Sync();
            temp_s5 = amGs_SetReg32(0, 0x30000);
            func_00136E80(0x100, &sp110, -1, 0);
            sp100 = 0.0f;
            sp104 = 0.0f;
            sp108 = 0x461C4000;
            sp10C = 0x3F800000;
            spF0 = sp100;
            spF4 = sp104;
            spF8 = sp108;
            spFC = sp10C;
            spF0 = D_0047042C;
            spF4 = D_00470430;
            func_00137C10(&sp100, &spF0);
            amDraw_FlushPacket();
            amGs_SetReg32(0, temp_s5);
            temp_f20_3 = (f32) (M2C_BITWISE(s32, var_s4) - 0x41) / 35.0f;
            func_00136870(1, 0x40000424, 0, -1);
            sp100 = 0.0f;
            sp104 = -(temp_f20_3 * D_0047042C);
            sp108 = 0x42C80000;
            sp10C = 0x3F800000;
            spF0 = sp100;
            spF4 = sp104;
            spF8 = sp108;
            spFC = sp10C;
            spF4 += 112.0f;
            spD0 = 0.0f;
            spD4 = 0;
            spD8 = 0x3F800000;
            spC0 = 0.0f;
            spC4 = 64.0f;
            spC8 = 0x3F800000;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            sp100 = D_0047042C;
            spF0 = D_0047042C;
            if ((s32) D_00470414 >= 0) {
                var_f1 = (f32) D_00470414;
            } else {
                var_f1 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            temp_f0_2 = var_f1 - 0.5f;
            spD0 = temp_f0_2;
            spC0 = temp_f0_2;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            amDraw_ClosePacket(-1);
            sp100 = 0.0f;
            sp104 = 336.0f + (temp_f20_3 * D_0047042C);
            spF0 = 0.0f;
            spF4 = sp104 + (D_00470430 - 336.0f);
            spD0 = 0.0f;
            spD4 = 0x43400000;
            spC0 = 0.0f;
            if (D_00470418 >= 0) {
                var_f1_2 = (f32) D_00470418;
            } else {
                var_f1_2 = 2.0f * (f32) (((u32) D_00470418 >> 1) | (D_00470418 & 1));
            }
            spC4 = var_f1_2 - 0.5f;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            sp100 = D_0047042C;
            spF0 = D_0047042C;
            if ((s32) D_00470414 >= 0) {
                var_f1_3 = (f32) D_00470414;
            } else {
                var_f1_3 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            temp_f0_3 = var_f1_3 - 0.5f;
            spD0 = temp_f0_3;
            spC0 = temp_f0_3;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            amDraw_ClosePacket(-1);
            temp_f0_4 = -(temp_f20_3 * D_0047042C);
            sp100 = temp_f0_4;
            sp104 = 112.0f;
            spF0 = temp_f0_4 + D_0047042C;
            spF4 = 112.0f;
            spE0 = temp_f0_4;
            spE4 = sp104;
            spE8 = sp108;
            spEC = sp10C;
            spE4 = 336.0f;
            spD0 = 0.0f;
            spD4 = 0x42800000;
            if ((s32) D_00470414 >= 0) {
                var_f1_4 = (f32) D_00470414;
            } else {
                var_f1_4 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            spC0 = var_f1_4 - 0.5f;
            spC4 = 64.0f;
            spB0 = 0.0f;
            spB4 = 0x43400000;
            spB8 = 0x3F800000;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            func_00137560(&spE0, &spB0);
            amDraw_ClosePacket(-1);
            temp_f0_5 = D_0047042C + (temp_f20_3 * D_0047042C);
            sp100 = temp_f0_5;
            sp104 = 336.0f;
            spF0 = temp_f0_5 - D_0047042C;
            spF4 = 336.0f;
            spE0 = temp_f0_5;
            spE4 = sp104;
            spE8 = sp108;
            spEC = sp10C;
            spE4 = 112.0f;
            if ((s32) D_00470414 >= 0) {
                var_f1_5 = (f32) D_00470414;
            } else {
                var_f1_5 = 2.0f * (f32) (((u32) D_00470414 >> 1) | (D_00470414 & 1));
            }
            temp_f0_6 = var_f1_5 - 0.5f;
            spD0 = temp_f0_6;
            spD4 = 0x43400000;
            spC0 = 0.0f;
            spC4 = 192.0f;
            spB0 = temp_f0_6;
            spB4 = 0x42800000;
            func_00137560(&sp100, &spD0);
            func_00137560(&spF0, &spC0);
            func_00137560(&spE0, &spB0);
            amDraw_FlushPacket();
            amVram_Apply(0);
        }
    }
}
