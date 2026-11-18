/* Draft (not built): func_0023E7A0 at 0x0023E7A0, size 0x1AC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x1AC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023E7A0.s */

// src/unk/unk_23A890.c func_0023E7A0 size diff=60/103
extern s8 D_004703F4;
void *BtlSys_GetSlot(s32);
s32 func_0021C680(s32);
void func_0023E7A0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_v0 = func_0021C3D0(0);
    func_0021C680(temp_v0);
    temp_s1 = func_0021C660(temp_v0);
    temp_s0 = BtlSys_GetSlot(temp_v0);
    temp_a3 = *(s32 *)((u8 *)(func_0021C400(temp_v0)) + 4);
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
    if (temp_a3 < temp_a0) {
        var_a1 = 0x19;
        if (D_004703F4 != 3) {
            var_a1 = 0x1E;
        }
        temp_lo = (s32) (temp_a0 - temp_a3) / var_a1;
        var_v1 = 0xC;
        if (D_004703F4 != 3) {
            var_v1 = 0xA;
        }
        if (temp_lo < var_v1) {
            var_v1_2 = 0xC;
            if (D_004703F4 != 3) {
                var_v1_2 = 0xA;
            }
            var_v1_3 = temp_a3 + var_v1_2;
        } else {
            var_v1_3 = temp_a3 + temp_lo;
        }
        *(s32 *)((u8 *)temp_s0 + 4) = var_v1_3;
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 8);
        if (temp_a0_2 < *(s32 *)((u8 *)temp_s0 + 4)) {
            *(s32 *)((u8 *)temp_s0 + 4) = temp_a0_2;
        }
    } else {
        *(s32 *)((u8 *)temp_s0 + 4) = temp_a0;
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0);
    if (temp_a0_3 & 8) {
        if (*(s32 *)((u8 *)temp_s0 + 8) > 0) {
            var_a1_2 = 0x19;
            if (D_004703F4 != 3) {
                var_a1_2 = 0x1E;
            }
            temp_lo_2 = (s32) *(s32 *)((u8 *)temp_s0 + 0xC) / var_a1_2;
            var_v1_4 = 0xC;
            if (D_004703F4 != 3) {
                var_v1_4 = 0xA;
            }
            if (temp_lo_2 < var_v1_4) {
                var_a0 = 0xA;
                if (D_004703F4 != 3) {

                } else {
                    var_a0 = 0xC;
                }
                *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) - var_a0);
                return;
            }
            *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) - temp_lo_2);
            return;
        }
        *(s32 *)((u8 *)temp_s0 + 0) = (s32) (temp_a0_3 ^ 8);
        *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    }
}
