/* Draft (not built): func_002C9EF0 at 0x002C9EF0, size 0x334, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (u8 *)temp_v0 + 0x20)) + 0x84) * 4))(temp_s0); @ 797: var_v0_3 = amTask_Create(&func_002C9AF0 + 0x30, 0, 0x9002, 0x400);
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C9EF0.s */

// src/unk/unk_2C41C0.c func_002C9EF0 cerr diff=-1/0
s16 amMotion_FindBone(s32, s32 *);
s32 func_0020CCF0(s16, s32 *);
void *func_00215320(s64, s16);
extern s32 D_004563A0;
extern void *amTask_Create();
extern void func_002C9C40(void);
extern void func_002C9AF0(void);
void func_002C9EF0(u8 *arg0, u8 *arg1) {
    s32 sp50;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    s16 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *var_v0_3;

    *(s16 *)((u8 *)gEffWork + 0x4D84) = (s16) (*(s16 *)((u8 *)gEffWork + 0x4D84) + 1);
    if (*(s16 *)((u8 *)arg1 + 0x2C) & 0x2000) {
        var_v0 = 0;
    } else {
        var_v0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x10)) + 0x1350);
    }
    temp_v0 = func_00215320((s64) ((s64) var_v0 << 0x30) >> 0x30, *(s16 *)((u8 *)arg1 + 0x2E));
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = (int *)(&func_002C9C40);
        *(s32 **)((u8 *)temp_v0 + 0xC) = (int *)(&func_002C9AF0);
        *(s32 *)((u8 *)temp_v0 + 0x18) = 0xBF800000;
        memset(temp_s0, 0, 0x60);
        temp_f1 = *(f32 *)((u8 *)arg1 + 0x14);
        if (temp_f1 != 0.0f) {
            if (gBattle != NULL) {
                var_f0 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f0 = 1.0f;
            } else {
                var_f0 = 1.2f;
            }
            var_f0_2 = temp_f1 * var_f0;
            *(f32 *)((u8 *)temp_s0 + 0x24) = var_f0_2;
        } else {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1 = 1.0f;
            } else {
                var_f1 = 1.2f;
            }
            var_f0_2 = *(f32 *)((u8 *)arg0 + 0x30) * var_f1;
            *(f32 *)((u8 *)temp_s0 + 0x24) = var_f0_2;
        }
        *(f32 *)((u8 *)temp_s0 + 0x20) = var_f0_2;
        if (*(s16 *)((u8 *)arg1 + 0x2C) & 0x4000) {
            *(s32 *)((u8 *)temp_s0 + 0x48) = (s32) *(s32 *)((u8 *)arg1 + 0x20);
            var_v0_2 = *(s32 *)((u8 *)arg1 + 0x24);
        } else {
            *(s32 *)((u8 *)temp_s0 + 0x48) = (s32) *(s32 *)((u8 *)arg0 + 0x60);
            var_v0_2 = *(s32 *)((u8 *)arg0 + 0x64);
        }
        *(s32 *)((u8 *)temp_s0 + 0x4C) = var_v0_2;
        *(u8 **)((u8 *)temp_s0 + 0x14) = (u8 *) *(u8 **)((u8 *)arg1 + 0x10);
        *(s16 *)((u8 *)temp_s0 + 0x3E) = (s16) *(s32 *)((u8 *)gEffWork + 0x4D80);
        *(u8 **)((u8 *)temp_v0 + 0x20) = arg0;
        *(f32 *)((u8 *)temp_s0 + 0x28) = (f32) *(f32 *)((u8 *)arg0 + 0x34);
        *(s32 *)((u8 *)temp_s0 + 4) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
        *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
        *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) *(s32 *)((u8 *)arg0 + 0x28);
        temp_v1 = *(s16 *)((u8 *)arg0 + 0x84);
        if (temp_v1 == 2) {
            *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x2C);
            func_0020CCF0(*(s16 *)((u8 *)arg0 + 0x68), &sp50);
            *(s16 *)((u8 *)temp_s0 + 0x5E) = amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0xB88)) + 4), &sp50);
        } else if (temp_v1 == 3) {
            *(s16 *)((u8 *)temp_s0 + 0x38) = (s16) (*(s16 *)((u8 *)temp_s0 + 0x38) | 0x80);
        }
        if (*(((u8 *)&D_005BD260) + (*(s16 *)((u8 *)temp_s0 + 0x3E) * 4)) != 0) {
            func_002152E0();
        }
        *(((u8 *)&D_005BD260) + (*(s16 *)((u8 *)temp_s0 + 0x3E) * 4)) = (unsigned char)(temp_v0);
        if (*(s16 *)((u8 *)arg1 + 0x2C) & 0x2000) {
            var_v0_3 = amTask_Create(&func_002C9AF0 + 0x30, 0, 0x9002, 0x400);
        } else {
            var_v0_3 = amTask_Create(&func_002C9BC0, 0, 0x3780, 0x400);
        }
        *(u8 **)((u8 *)temp_s0 + 0x18) = var_v0_3;
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0x30) = temp_s0;
        *(&D_004563A0 + (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x20)) + 0x84) * 4))(temp_s0);
        *(s32 *)((u8 *)gEffWork + 0x4D80) = (s32) (*(s32 *)((u8 *)gEffWork + 0x4D80) + 1);
        if (*(s32 *)((u8 *)gEffWork + 0x4D80) >= 5) {
            *(s32 *)((u8 *)gEffWork + 0x4D80) = 0;
        }
    }
}
