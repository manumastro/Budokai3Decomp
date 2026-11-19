/* Draft (not built): func_002BD6B0 at 0x002BD6B0, size 0x59C, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  to 'int' mwccps2.exe Compiler: @ 176: StrStatus = (char *)amHeap_Alloc(0x5B0, 0, (s32 *)(&D_0046EE20),(char *)(0x288));
 * Original: asm/nonmatchings/story/str_status/func_002BD6B0.s */

// src/story/str_status.c func_002BD6B0 cerr diff=-1/0
s32 Flight_MapIndex(s8);
void *func_0029E9B0(s32, s8, s8, s32);
extern s32 D_00455920;
extern s32 D_00455D50;
extern s32 D_0046EE20;
extern void func_0029D6C0(void *);
extern void Help_Load();
extern void OutputPass_Load(void);
void func_002BD6B0(u8 *arg0, s32 arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 *var_v1;
    s32 *var_a1;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a1;

    if (gStrStatus != NULL) {
        amHeap_Free(gStrStatus);
    }
    gStrStatus = (char *)amHeap_Alloc(0x5B0, 0, (s32 *)(&D_0046EE20),(char *)(0x288));
    memset(gStrStatus, 0, 0x5B0);
    *(s32 *)((u8 *)gStrStatus + 0x284) = arg1;
    *(s32 *)((u8 *)gStrStatus + 0x27C) = 1;
    *(s32 *)((u8 *)gStrStatus + 0x288) = (s32) *(s8 *)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)gStrStatus + 0x28C) = (s32) *(s8 *)((u8 *)arg0 + 1);
    *(s32 *)((u8 *)gStrStatus + 0x290) = (s32) *(s8 *)((u8 *)arg0 + 2);
    *(s32 *)((u8 *)gStrStatus + 0x294) = (s32) *(s8 *)((u8 *)arg0 + 3);
    *(s32 *)((u8 *)gStrStatus + 0x298) = (s32) *(s8 *)((u8 *)arg0 + 4);
    *(s32 *)((u8 *)gStrStatus + 0x29C) = (s32) *(s8 *)((u8 *)arg0 + 5);
    *(s32 *)((u8 *)gStrStatus + 0x2B8) = (s32) *(s8 *)((u8 *)arg0 + 5);
    *(s32 *)((u8 *)gStrStatus + 0x2A0) = (s32) *(s8 *)((u8 *)arg0 + 6);
    *(s32 *)((u8 *)gStrStatus + 0x2BC) = (s32) *(s8 *)((u8 *)arg0 + 6);
    *(s32 *)((u8 *)gStrStatus + 0x2A4) = (s32) *(s8 *)((u8 *)arg0 + 7);
    *(s32 *)((u8 *)gStrStatus + 0x2C0) = (s32) *(s8 *)((u8 *)arg0 + 7);
    *(s32 *)((u8 *)gStrStatus + 0x2A8) = (s32) *(s8 *)((u8 *)arg0 + 8);
    *(s32 *)((u8 *)gStrStatus + 0x2C4) = (s32) *(s8 *)((u8 *)arg0 + 8);
    *(s32 *)((u8 *)gStrStatus + 0x2AC) = (s32) *(s8 *)((u8 *)arg0 + 9);
    *(s32 *)((u8 *)gStrStatus + 0x2C8) = (s32) *(s8 *)((u8 *)arg0 + 9);
    *(s32 *)((u8 *)gStrStatus + 0x2B0) = (s32) *(s8 *)((u8 *)arg0 + 0xA);
    *(s32 *)((u8 *)gStrStatus + 0x2CC) = (s32) *(s8 *)((u8 *)arg0 + 0xA);
    *(s32 *)((u8 *)gStrStatus + 0x2B4) = (s32) *(s8 *)((u8 *)arg0 + 0xB);
    *(s32 *)((u8 *)gStrStatus + 0x2D0) = (s32) *(s8 *)((u8 *)arg0 + 0xB);
    *(s32 *)((u8 *)gStrStatus + 0x2D4) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)gStrStatus + 0x2D8) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)gStrStatus + 0x420) = 0x64;
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x14);
    if (temp_a0 != NULL) {
        var_a2 = 0;
        var_a1 = (int *)(arg0 + 0x18);
        var_a3 = 0;
        *(s32 *)((u8 *)gStrStatus + 0x2F8) = (s32) *(s32 *)((u8 *)temp_a0 + 0);
        *(s32 *)((u8 *)gStrStatus + 0x2FC) = (s32) *(s32 *)((u8 *)temp_a0 + 4);
        *(s32 *)((u8 *)gStrStatus + 0x300) = (s32) *(s32 *)((u8 *)temp_a0 + 8);
        *(s32 *)((u8 *)gStrStatus + 0x304) = (s32) *(s32 *)((u8 *)temp_a0 + 0xC);
        *(s32 *)((u8 *)gStrStatus + 0x308) = (s32) *(s32 *)((u8 *)temp_a0 + 0x10);
        *(s32 *)((u8 *)gStrStatus + 0x30C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x14);
        *(s32 *)((u8 *)gStrStatus + 0x310) = (s32) *(s32 *)((u8 *)temp_a0 + 0x18);
        *(s32 *)((u8 *)gStrStatus + 0x314) = (s32) *(s32 *)((u8 *)temp_a0 + 0x1C);
        *(s32 *)((u8 *)gStrStatus + 0x318) = (s32) *(s32 *)((u8 *)temp_a0 + 0x20);
        *(s32 *)((u8 *)gStrStatus + 0x31C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x24);
        *(s32 *)((u8 *)gStrStatus + 0x320) = (s32) *(s32 *)((u8 *)temp_a0 + 0x28);
        *(s32 *)((u8 *)gStrStatus + 0x324) = (s32) *(s32 *)((u8 *)temp_a0 + 0x2C);
        *(s32 *)((u8 *)gStrStatus + 0x328) = (s32) *(s32 *)((u8 *)temp_a0 + 0x30);
        *(s32 *)((u8 *)gStrStatus + 0x32C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x34);
        *(s32 *)((u8 *)gStrStatus + 0x330) = (s32) *(s32 *)((u8 *)temp_a0 + 0x38);
        *(s32 *)((u8 *)gStrStatus + 0x334) = (s32) *(s32 *)((u8 *)temp_a0 + 0x3C);
        *(s32 *)((u8 *)gStrStatus + 0x338) = (s32) *(s32 *)((u8 *)temp_a0 + 0x40);
        *(s32 *)((u8 *)gStrStatus + 0x33C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x44);
        *(s32 *)((u8 *)gStrStatus + 0x340) = (s32) *(s32 *)((u8 *)temp_a0 + 0x48);
        *(s32 *)((u8 *)gStrStatus + 0x344) = (s32) *(s32 *)((u8 *)temp_a0 + 0x4C);
        *(s32 *)((u8 *)gStrStatus + 0x348) = (s32) *(s32 *)((u8 *)temp_a0 + 0x50);
        *(s32 *)((u8 *)gStrStatus + 0x34C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x54);
        *(s32 *)((u8 *)gStrStatus + 0x350) = (s32) *(s32 *)((u8 *)temp_a0 + 0x58);
        *(s32 *)((u8 *)gStrStatus + 0x354) = (s32) *(s32 *)((u8 *)temp_a0 + 0x5C);
        *(s32 *)((u8 *)gStrStatus + 0x358) = (s32) *(s32 *)((u8 *)temp_a0 + 0x60);
        *(s32 *)((u8 *)gStrStatus + 0x35C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x64);
        *(s32 *)((u8 *)gStrStatus + 0x360) = (s32) *(s32 *)((u8 *)temp_a0 + 0x68);
        *(s32 *)((u8 *)gStrStatus + 0x364) = (s32) *(s32 *)((u8 *)temp_a0 + 0x6C);
        *(s32 *)((u8 *)gStrStatus + 0x368) = (s32) *(s32 *)((u8 *)temp_a0 + 0x70);
        *(s32 *)((u8 *)gStrStatus + 0x36C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x74);
        *(s32 *)((u8 *)gStrStatus + 0x370) = (s32) *(s32 *)((u8 *)temp_a0 + 0x78);
        *(s32 *)((u8 *)gStrStatus + 0x374) = (s32) *(s32 *)((u8 *)temp_a0 + 0x7C);
        *(s32 *)((u8 *)gStrStatus + 0x378) = (s32) *(s32 *)((u8 *)temp_a0 + 0x80);
        *(s32 *)((u8 *)gStrStatus + 0x37C) = (s32) *(s32 *)((u8 *)temp_a0 + 0x84);
        *(s32 *)((u8 *)gStrStatus + 0x380) = (s32) *(s32 *)((u8 *)temp_a0 + 0x88);
        *(s32 *)((u8 *)gStrStatus + 0x280) = 1;
loop_4:
        temp_v0 = *var_a1;
        switch (temp_v0) {                          /* irregular */
        case 453:
            var_a2 += 0xA;
        default:
block_15:
            var_a3 += 1;
            var_a1 += 4;
            if (var_a3 < 7) {
                goto loop_4;
            }
            break;
        case 454:
            var_a2 += 0x19;
            goto block_15;
        case 455:
            var_a2 += 0x32;
            goto block_15;
        case 456:
            var_a2 += 0x64;
            goto block_15;
        }
        temp_a0_2 = *(&D_00455D50 + (*(s32 *)((u8 *)gStrStatus + 0x2CC) * 2)) + 0x64;
        *(s32 *)((u8 *)gStrStatus + 0x420) = (s32) (*(s32 *)((u8 *)gStrStatus + 0x420) + (((var_a2 * temp_a0_2) / 100) + ((u32) (var_a2 * temp_a0_2) >> 0x1F)));
    }
    *(s32 *)((u8 *)gStrStatus + 0x2DC) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
    *(s32 *)((u8 *)gStrStatus + 0x2E0) = (s32) *(s32 *)((u8 *)arg0 + 0x1C);
    *(s32 *)((u8 *)gStrStatus + 0x2E4) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
    *(s32 *)((u8 *)gStrStatus + 0x2E8) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
    *(s32 *)((u8 *)gStrStatus + 0x2EC) = (s32) *(s32 *)((u8 *)arg0 + 0x28);
    *(s32 *)((u8 *)gStrStatus + 0x2F0) = (s32) *(s32 *)((u8 *)arg0 + 0x2C);
    *(s32 *)((u8 *)gStrStatus + 0x2F4) = (s32) *(s32 *)((u8 *)arg0 + 0x30);
    temp_a0_3 = *(u8 **)((u8 *)gStrStatus + 0x258);
    if (temp_a0_3 != NULL) {
        Character_Release((s32)(temp_a0_3));
    }
    var_v1 = &sp30;
    var_v0 = 0x10;
    temp_a1 = (unsigned char *)(&D_00455920 + (*(s32 *)((u8 *)gStrStatus + 0x28C) * 0x1C));
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp30 = *(f32 *)((u8 *)temp_a1 + 0x10);
    sp34 = *(f32 *)((u8 *)temp_a1 + 0x14);
    sp38 = *(f32 *)((u8 *)temp_a1 + 0x18);
    func_0029D6C0(&sp30);
    Help_Load();
    OutputPass_Load();
    temp_a0_4 = *(u8 **)((u8 *)gStrStatus + 0x25C);
    if (temp_a0_4 != NULL) {
        func_0029E450((s32)(temp_a0_4));
    }
    *(u8 **)((u8 *)gStrStatus + 0x25C) = func_0029E9B0(Flight_MapIndex(*(s8 *)((u8 *)arg0 + 1)), *(s8 *)((u8 *)arg0 + 3), *(s8 *)((u8 *)arg0 + 2), 4);
    if (*(s32 *)((u8 *)gStrStatus + 0x280) != 0) {
        *(s32 *)((u8 *)gStrStatus + 8) = amCdFs_ReadFileId(0x107DA, 0, 1);
        *(s32 *)((u8 *)gStrStatus + 0xC) = amCdFs_ReadFileId(0x107DB, 0, 1, gStrStatus);
        *(s32 *)((u8 *)gStrStatus + 0x10) = amCdFs_ReadFileId(0x107E5, 0, 1, gStrStatus);
        *(s32 *)((u8 *)gStrStatus + 0x14) = amCdFs_ReadFileId(0x107E6, 0, 1, gStrStatus);
    }
    *(s32 *)((u8 *)gStrStatus + 0) = amCdFs_ReadFileId(0x107E9, 0, 1);
    *(s32 *)((u8 *)gStrStatus + 4) = amCdFs_ReadFileId(0x107EA, 0, 1, gStrStatus);
}
