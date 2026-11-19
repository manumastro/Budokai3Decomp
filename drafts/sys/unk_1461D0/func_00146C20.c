/* Draft (not built): func_00146C20 at 0x00146C20, size 0x204, segment sys/unk_1461D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/unk_1461D0/func_00146C20.s */

s32 amPkt_AllocTop(s32, s8);
s32 func_0012EF80(s64, s32, s32);
void func_00146C20(s8 *arg0, u8 *arg1) {
    s32 var_s3;
    s64 var_s2;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s0;
    s64 temp_a0;
    s8 temp_a1;
    var_s3 = 0;
    var_s2 = 0;
    if (*(s32 *)((u8 *)arg1 + 0x14) == 0 || *(s32 *)((u8 *)arg1 + 0x28) == 0) {
        temp_a1 = *arg0;
        switch (temp_a1) {
            case 2:
                temp_s1 = (s32)*(s32 *)((u8 *)*(u8 **)((u8 *)arg1 + 0) + 4) >> 2 & 3;
                var_s0 = 0;
                if (*(s32 *)((u8 *)arg1 + 0x28) == 0 && *(s8 *)((u8 *)arg1 + 0x23) != -1) {
                var_s2 = -1;
                var_s0 = 0xA0;
            }
                if (*(s32 *)((u8 *)arg1 + 0x14) == 0) {
                var_s3 = -1;
                var_s0 += 0x230 - (3 - temp_s1) * 0x70;
                var_a0 = amPkt_AllocTop(var_s0, temp_a1) - (3 - temp_s1) * 0x70;
                goto block_14;
            }
                if (var_s0 != 0) {
                var_a0 = amPkt_AllocTop(var_s0, temp_a1) - 0x230;
                block_14:
                if (var_s2 < 0) {
                    var_s2 = var_a0 + 0x230;
                    *(s32 *)((u8 *)arg1 + 0x28) = (s32)((u64)(var_s2 << 0x24) >> 0x24);
                }

                if (var_s3 < 0) {
                    temp_a0 = var_a0 + (3 - temp_s1) * 0x70;
                    *(s32 *)((u8 *)arg1 + 0x14) = (s32)((u64)(temp_a0 << 0x24) >> 0x24);
                    *(s32 *)((u8 *)arg1 + 0x18) = (s32)((u64)(var_a0 + 0x1F0 << 0x24) >> 0x24);
                    func_0012EF80(temp_a0, *(s32 *)((u8 *)arg1 + 8) + (3 - temp_s1) * 0x70, var_s0 >> 4);
                    return;
                }
                if (var_s2 != 0) {
                    func_0012EF80(var_s2, *(s32 *)((u8 *)arg1 + 8) + 0x230, var_s0 >> 4);
                    return;
                }
            }
                break;

            case 1:
                if (*(s32 *)((u8 *)arg1 + 8) == 0) {
                func_00146680(arg1);
            }
                break;
        }
    }
}
