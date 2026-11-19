/* Draft (not built): func_002A8A60 at 0x002A8A60, size 0x1E4, segment unk/unk_2A8970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )(), int, int, int, int, char *)' @ 146: *(u8 **)((u8 *)temp_s0 + 8) = amTask_Create(&func_002A1DB0, 0, 0x9500, 0x4000);
 * Original: asm/nonmatchings/unk/unk_2A8970/func_002A8A60.s */

// src/unk/unk_2A8970.c func_002A8A60 cerr diff=-1/0
s32 func_002A1F30(s32, s32, s8 *);
extern s128 D_00455220;
extern s32 D_004E066D;
extern s8 D_00511450;
extern s32 func_002A1DB0;
extern void EvtScrp_Init(void);
extern char D_00511479[];
extern char D_004E05DC[];
void func_002A8A60(void) {
    u8 sp[0x400];
    s128 sp20;
    s16 *var_v1;
    s16 temp_v0;
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1_2;
    s8 *temp_v1_2;
    u32 var_v0_2;
    u8 *temp_s0;

    var_a1 = 0;
    var_v1 = (short *)(D_004E6560 + (D_00511450 * 0x1210) + 0x1270);
    do {
        temp_v0 = *var_v1;
        if (temp_v0 > 0) {
            *var_v1 = temp_v0 & 0xFFF;
        }
        var_a1 += 1;
        var_v1 += 2;
    } while (var_a1 < 7);
    EvtScrp_Init();
    var_v1_2 = (s8) D_00511450 >> 4;
    if (D_00511450 < 0) {
        var_v1_2 = (s32) (D_00511450 + 0xF) >> 4;
    }
    var_v0 = D_00511450 & 0xF;
    if (D_00511450 < 0) {
        var_a0 = var_v0 * 2;
        if (var_v0 != 0) {
            var_v0 -= 0x10;
            goto block_9;
        }
    } else {
block_9:
        var_a0 = var_v0 * 2;
    }
    temp_a1 = var_v1_2 * 4;
    var_v0_2 = (u32) ((3 << var_a0) & *(D_004E6560 + temp_a1)) >> var_a0;
    if (var_v0_2 < 3U) {
        var_v0_2 += 1;
    }
    temp_a0 = var_v0_2 << var_a0;
    temp_v1 = (int *)(D_004E6560 + temp_a1);
    *temp_v1 |= temp_a0;
    func_002A1F30((s32)(temp_a0), (s32)(temp_a1), (s8 *)(D_004E6560));
    sp20 = D_00455220;
    temp_v0_2 = *D_004E05DC - 4;
    if (temp_v0_2 >= 0) {
        temp_a1_2 = *(s32 *)((u8 *)((temp_v0_2 * 4) + sp) + 0x20);
        if ((s32) (u8) D_00511479[temp_a1_2] < (s32) *(&D_004E066D + (temp_a1_2 * 0x28))) {
            temp_v1_2 = (signed char *)(&D_004E6560[temp_a1_2]);
            *(u8 *)((u8 *)temp_v1_2 + 0x2AF19) = (u8) (*(u8 *)((u8 *)temp_v1_2 + 0x2AF19) + 1);
            *(s32 *)((u8 *)((*(s32 *)((u8 *)gEvtWork + 0xF8) * 4) + gEvtWork) + 0x100) = temp_a1_2;
            *(s32 *)((u8 *)gEvtWork + 0xF8) = (s32) (*(s32 *)((u8 *)gEvtWork + 0xF8) + 1);
        }
    }
    temp_s0 = (unsigned char *)(gEvtWork);
    *(u8 **)((u8 *)temp_s0 + 8) = amTask_Create(&func_002A1DB0, 0, 0x9500, 0x4000);
}
