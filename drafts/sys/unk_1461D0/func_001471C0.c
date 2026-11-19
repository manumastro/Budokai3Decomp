/* Draft (not built): func_001471C0 at 0x001471C0, size 0x3A0, segment sys/unk_1461D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x388, original 0x3A0
 * Original: asm/nonmatchings/sys/unk_1461D0/func_001471C0.s */

// src/sys/unk_1461D0.c func_001471C0 size diff=115/226
s32 func_00101230(s32, s32, s32, s16);
s32 func_00101498(s32, s32, s32, s16);
s32 func_00101808(s32, s32);
s32 iCancelWakeupThread(s32);
s32 iWakeupThread(s32);
extern s32 D_004593E0;
extern s32 D_004703AC;
extern s32 D_004703B0;
extern s32 D_004703B4;
extern s32 D_004703B8;
extern s32 D_004703D0;
extern s32 D_004703D4;
extern s32 D_004703D8;
extern s8 D_004703E4;
extern s8 D_004703F8;
extern s8 D_004703FC;
extern s8 D_00470400;
extern s8 D_00470408;
extern s32 D_00470418;
extern u32 D_00470424;
extern s32 gDmaQueue;
extern void func_00157FD8(void);
extern char D_0047E540[];
extern char D_00459400[];
void func_001471C0(void) {
    s16 temp_a1;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v1;
    u32 var_v0;
    u32 var_v0_2;
    u8 *temp_a0_2;
    u8 *var_a3;
    u8 *var_a3_2;

    D_004703AC = (s32) ((s64) (((((u64) *(u64 *)0x12001000 >> 0xD) & 1) ^ 1) << 0x20) >> 0x20);
    temp_a0 = D_004703B8;
    D_004703B8 = temp_a0 - 1;
    if ((temp_a0 > 0) || (D_004703E4 == 0)) {
        if (D_004703E4 != 0) {
            goto block_4;
        }
    } else if (!(D_004703D8 & (D_004703AC + 1))) {
        if (D_004703E8 != 0) {
            if ((*(s16 *)((u8 *)(&gDmaQueue) + 4) == 0) && (*(s16 *)((u8 *)(&gDmaQueue) + 0x10) == 0) && (*(s32 *)((u8 *)(&gDmaQueueBusy) + 0) < 0) && (*(s32 *)((u8 *)(&gDmaQueueBusy) + 4) < 0)) {
                temp_s0 = (s32) D_0047E540 | 0x20000000;
                if (D_00470408 == 0) {
                    if ((D_004703FC != 0) && (D_00470400 != 0)) {
                        temp_a3 = (s32) D_00459400 | 0x20000000;
                        var_a0 = D_004703D4;
                        var_v1 = 0x10 - var_a0;
                        if (D_004703AC == 0) {
                            var_a0 += 0x10;
                            var_v1 += 0x10;
                        }
                        temp_a2 = var_a0 & 0xFFFF;
                        temp_a1 = ((D_00470418 * 0x10) + var_a0) & 0xFFFF;
                        if (D_004703D0 != 0) {
                            var_a3 = (unsigned char *)(temp_a3 + 0xB0);
                            var_v0 = (u32) D_00470424 >> 6;
loop_23:
                            if (var_v0 != 0) {
                                *(s16 *)((u8 *)var_a3 + 0x12) = temp_a2;
                                *(s16 *)((u8 *)var_a3 + 0x32) = temp_a1;
                                *(s16 *)((u8 *)var_a3 + 0x72) = (s16) (var_v1 & 0xFFFF);
                                *(s16 *)((u8 *)var_a3 + 0x92) = (s16) (((D_00470418 * 0x10) + var_v1) & 0xFFFF);
                                var_v0 -= 1;
                                var_a3 += 0xC0;
                                goto loop_23;
                            }
                        } else {
                            var_a3_2 = (unsigned char *)(temp_a3 + 0xD0);
                            var_v0_2 = (u32) D_00470424 >> 6;
loop_28:
                            if (var_v0_2 != 0) {
                                *(s16 *)((u8 *)var_a3_2 + 2) = temp_a2;
                                *(s16 *)((u8 *)var_a3_2 + 0x22) = temp_a1;
                                var_v0_2 -= 1;
                                var_a3_2 += 0x40;
                                goto loop_28;
                            }
                        }
                    }
                    *(s32 *)0x1000A010 = 0;
                    *(s32 *)0x1000A020 = 0;
                    *(s32 **)0x1000A030 = &D_004593E0;
                    *(s32 *)0x1000E010 = 4;
                    M2C_SYNC();
                    *(s32 *)0x1000A000 = 0x145;
                    M2C_SYNC();
                }
                D_004703B0 ^= 1;
                D_004703B8 = D_004703B4;
                if (D_004703F8 != 0) {
                    if (D_004703B0 != 0) {
                        var_a0_2 = temp_s0 + 0x1D0;
                        var_s1 = temp_s0 + 0x250;
                    } else {
                        var_a0_2 = temp_s0 + 0x60;
                        var_s1 = temp_s0 + 0xE0;
                    }
                    func_00101230(var_a0_2, 0x800, 0x800, (s16) D_004703AC);
                    func_00101498(var_s1, 0x800, 0x800, (s16) D_004703AC);
                }
                func_00101808(temp_s0, D_004703B0);
                temp_a0_2 = (unsigned char *)(temp_s0 + (D_004703B0 * 0x28));
                *(s64 *)0x12000070 = *(s64 *)((u8 *)temp_a0_2 + 0x10);
                *(s64 *)0x12000080 = *(s64 *)((u8 *)temp_a0_2 + 0x18);
                *(s64 *)0x12000000 = *(s64 *)((u8 *)temp_a0_2 + 0);
                M2C_SYNC();
            } else {
                D_004703EC = 1;
            }
            D_004703E8 = 0;
        }
        if (D_004703E4 != 0) {
            D_004703F0 += 1;
            if (D_004703C8 != 0) {
                func_00157FD8();
                return;
            }
            iCancelWakeupThread(D_004703CC);
            iWakeupThread(D_004703CC);
        }
    } else {
block_4:
        D_004703F0 += 1;
        if (D_004703C8 != 0) {
            func_00157FD8();
        } else {
            iCancelWakeupThread(D_004703CC);
            iWakeupThread(D_004703CC);
        }
    }
}
