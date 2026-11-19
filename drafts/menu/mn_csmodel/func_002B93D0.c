/* Draft (not built): func_002B93D0 at 0x002B93D0, size 0x304, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 171 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B93D0.s */

// src/menu/mn_csmodel.c func_002B93D0 diff diff=171/193
extern s32 D_0047010C;
s32 A2d_SetMode(s32);
s32 Fade_Request(s32, s32, s32);
s32 amCdFs_Close(void *, s32);
s32 func_00229800(s32, s32 *, s32, s32);
extern s32 D_00455350;
extern s8 D_004B4BEB;
extern s32 D_004DFB19;
extern s16 D_004E05F8;
extern f32 D_004E0610;
extern void amFile_Load(void *);
extern void Obj_CopyVec4F50(void *, void *);
extern void func_0022E0B0(void *);
extern void VsCharasel_Load(void);
extern void func_002B8260(void);
void func_002B93D0(u8 *arg0) {
    s32 sp50;
    s32 temp_a0;
    s32 var_a0;
    u8 temp_a0_2;
    void (*var_v1)();
    void (*var_v1_2)();
    void (*var_v1_3)();
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gPracMode;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4) == 3) {
        *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = 0;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
        *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
        amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
        func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
        amFile_Load(*(u8 **)((u8 *)temp_s0 + 0xC));
        Fade_Request(-1, 0, 0);
        amAdx_SetVolume(NULL, D_004E0610);
        amAdx_PlayAfs(0, 0x210A6, 0);
        amAdx_Pause(0, 0);
        temp_s3 = gPracMode;
        if (D_004E05F8 != 0) {
            A2d_SetMode(1);
        } else {
            A2d_SetMode(0);
        }
        temp_a0 = *(s32 *)((u8 *)temp_s3 + 0xC);
        D_00470704 = temp_a0;
        D_0047070C = 0x1000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x1000);
        D_00470238 = 0;
        func_002B7C40(temp_s1);
        *(s8 *)((u8 *)temp_s1 + 0x5D) = 1;
        *(s8 *)((u8 *)temp_s1 + 0x61) = 1;
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0x420C0000;
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x98), &sp50, -1, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s1 + 0x54), &sp50);
        temp_a0_2 = *(u8 *)((u8 *)temp_s1 + 0x64);
        if (temp_a0_2 != 2) {
            if (temp_a0_2 != 3) {
                if (temp_a0_2 != 1) {
                    if (temp_a0_2 != 0) {
                        return;
                    }
                    var_v1 = func_002B92E0;
                    if (func_002B92E0 == NULL) {
                        var_v1 = NULL;
                    }
                    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
                    return;
                }
                VsCharasel_Load();
                VsCharasel_Start(-1, -1);
                PracMode_Exit();
                return;
            }
            var_a0 = 1;
            if (D_004B4BEB != 0) {
                goto block_21;
            }
            if ((D_0047010C < 0xB) && ((s32) *(&D_004DFB19 + *(&D_00455350 + (D_0047010C * 2))) > 0)) {
block_21:
                var_a0 = 0;
            }
            if (var_a0 != 0) {
                *(s8 *)((u8 *)temp_s1 + 0x5E) = (s8) D_0047010C;
                *(u8 *)((u8 *)temp_s1 + 0x5F) = (u8) (*D_004B4BEA + 1);
                if ((s32) *(u8 *)((u8 *)temp_s1 + 0x5F) >= 0xC) {
                    *(u8 *)((u8 *)temp_s1 + 0x5F) = 0xCU;
                }
                *(s32 *)((u8 *)temp_s1 + 0x68) = 0x420C0000;
                *(s8 *)((u8 *)temp_s1 + 0x5D) = 3;
                *(s8 *)((u8 *)temp_s1 + 0x61) = 7;
                func_002B7930(temp_s1);
                var_v1_2 = func_002B8260;
                if (func_002B8260 == NULL) {
                    var_v1_2 = NULL;
                }
                *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
                return;
            }
            goto block_29;
        }
block_29:
        *(s8 *)((u8 *)temp_s1 + 0x5E) = (s8) D_0047010C;
        *(u8 *)((u8 *)temp_s1 + 0x5F) = (u8) *D_004B4BEA;
        *(s32 *)((u8 *)temp_s1 + 0x68) = 0x420C0000;
        *(s8 *)((u8 *)temp_s1 + 0x5D) = 3;
        *(s8 *)((u8 *)temp_s1 + 0x61) = 7;
        func_002B7930(temp_s1);
        var_v1_3 = func_002B89E0;
        if (func_002B89E0 == NULL) {
            var_v1_3 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_3;
    }
}
