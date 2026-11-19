/* Draft (not built): func_0030EAE0 at 0x0030EAE0, size 0x2B4, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'struct ' to '__int128' mwccps2.exe Compiler: @ 553: sp70 = D_00459140;
 * Original: asm/nonmatchings/story/str_staffroll/func_0030EAE0.s */

// src/story/str_staffroll.c func_0030EAE0 cerr diff=-1/0
s32 amAdx_SetVolume(s32, f32);
s32 dpmul(s32, s32);
s32 func_001214F8(u8, s8, f32);
f32 func_001220B0(s32);
extern void func_0030E890(void);
void func_0030EAE0(u8 *arg0, s32 unused_arg1, s32 unused_arg2, s8 arg3) {
    s8 sp50;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    s128 sp70;
    s32 *var_v1_2;
    f32 temp_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    s64 var_a1;
    s8 *var_v1;
    s8 var_a3;
    u8 temp_a2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;

    var_a3 = arg3;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_s0 + 0x14) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x14) + gFrameDelta);
    if ((*(u8 *)((u8 *)temp_s0 + 0x1C) == 1) && (*(u8 *)((u8 *)temp_s0 + 0x1D) != 0)) {
        var_a3 = (*(signed char *)(D_004B4B63));
        if (*(D_00492FCE + (var_a3 * 0xB8)) & 8) {
            *(u8 *)((u8 *)temp_s0 + 0x1C) = 2U;
            *(f32 *)((u8 *)temp_s0 + 0x18) = 0.0f;
        }
    }
    temp_a2 = *(u8 *)((u8 *)temp_s0 + 0x1C);
    if (temp_a2 == 2) {
        temp_f0 = *(f32 *)((u8 *)temp_s0 + 0x18) + func_001220B0(dpmul(0x47AE147B | (0x3F847AE1 << 0x20), func_001214F8(temp_a2, var_a3, gFrameDelta)));
        *(f32 *)((u8 *)temp_s0 + 0x18) = temp_f0;
        if (!(temp_f0 <= 1.0f)) {
            *(f32 *)((u8 *)temp_s0 + 0x18) = 1.0f;
        }
        amAdx_SetVolume(0, 1.0f - *(f32 *)((u8 *)temp_s0 + 0x18));
        var_v1 = &sp50;
        sp70 = D_00459140;
        var_v0 = 0x10;
        sp60 = (s128) D_00459150;
        sp60 = D_0047042C;
        sp64 = D_00470430;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp5C = *(f32 *)((u8 *)temp_s0 + 0x18);
        func_00136E80(0x900, &sp50, -1, 0x44, 0);
        func_00137C10(&sp70, &sp60);
        amDraw_FlushPacket();
    }
    var_a1 = 0;
    if ((*(u8 *)((u8 *)temp_s0 + 0x1C) == 2) && !(*(f32 *)((u8 *)temp_s0 + 0x18) < 1.0f)) {
        var_a1 = 1;
    }
    if (!(*(f32 *)((u8 *)temp_s0 + 0x14) < 14116.0f)) {
        var_a1 = 1;
    }
    if (((s64) (var_a1 << 0x30) >> 0x30) != 0) {
        temp_s2 = *(u8 **)((u8 *)temp_s0 + 8);
        temp_a0 = *(s32 *)((u8 *)temp_s2 + 0x38);
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
        }
        amTask_Kill((void *)(temp_s2));
        *(u8 **)((u8 *)temp_s0 + 8) = NULL;
        temp_s3 = *(u8 **)((u8 *)temp_s0 + 0xC);
        temp_a0_2 = *(s32 *)((u8 *)temp_s3 + 0x30);
        if (temp_a0_2 >= 0) {
            amSofdec_Stop(temp_a0_2);
            amSofdec_Destroy(*(s32 *)((u8 *)temp_s3 + 0x30));
        }
        amTask_Kill((void *)(temp_s3));
        *(u8 **)((u8 *)temp_s0 + 0xC) = NULL;
        amTask_Kill((void *)(*(u8 **)((u8 *)temp_s0 + 0x10)));
        *(u8 **)((u8 *)temp_s0 + 0x10) = NULL;
        *(u8 *)((u8 *)temp_s0 + 0x1C) = 3U;
        *(f32 *)((u8 *)temp_s0 + 0x18) = 1.0f;
        *(f32 *)((u8 *)temp_s0 + 0x14) = 300.0f;
        var_v1_2 = (int *)(&func_0030E890);
        if (&func_0030E890 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
