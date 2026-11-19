/* Draft (not built): func_00139620 at 0x00139620, size 0x2B8, segment sys/unk_137EE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 133 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2E8, original 0x2B8
 * Original: asm/nonmatchings/sys/unk_137EE0/func_00139620.s */

// src/sys/unk_137EE0.c func_00139620 size diff=133/186
s32 func_00136E80(s32, s32);
extern s32 D_00470410;
extern u32 D_00470414;
extern u32 D_00470418;
extern f32 D_0047CA60;
extern f32 D_0047CA6C;
extern f32 D_0047CA80;
extern f32 D_0047CA84;
extern void *gModelBlock;
void func_00139620(s32 arg0, s32 arg2, f32 fparg0) {
    f32 var_a3;
    s16 temp_v0;
    s16 temp_v1;
    s16 var_a0;
    s16 var_a1;
    s16 var_t2;
    s16 var_t5;
    s16 var_t6;
    s32 var_t3;
    u32 *var_t0;
    u32 temp_t1;
    u32 temp_t1_2;
    u32 var_a2;
    u8 *temp_t2;

    func_00136E80(arg0, arg2);
    var_t0 = gPacketPtr;
    if (!(fparg0 <= D_0047CA60)) {
        var_a3 = D_0047CA84 + (D_0047CA80 / fparg0);
    } else {
        var_a3 = D_0047CA6C;
    }
    var_a1 = (0x800 - ((u32) D_00470414 >> 1)) * 0x10;
    var_a0 = var_a1 + 0x400;
    temp_v1 = (0x800 - ((u32) D_00470418 >> 1)) * 0x10;
    temp_v0 = (((u32) D_00470418 >> 1) + 0x800) * 0x10;
    var_a2 = (u32) D_00470414 >> 6;
    if (arg0 & 0x20) {
        gPacketQwc += var_a2 * 4;
        D_00470294 += var_a2 * 4;
        D_00470298 += var_a2 * 4;
        if (arg2 != -1) {
            temp_t2 = ((u8 *)gModelBlock) + *(s32 *)(((s32)(((u8 *)*(s32 *)((u8 *)gModelBlock + 0x14)))) + ((s32)(gModelBlock)) + ((arg2 - *(s32 *)((u8 *)gModelBlock + 0x18)) * 4));
            var_t3 = ((s16) *(s16 *)((u8 *)temp_t2 + 0x10) / (s32) var_a2) * 0x10;
            var_t2 = (*(s16 *)((u8 *)temp_t2 + 0x12) * 0x10) + 8;
        } else {
            var_t3 = 0x400;
            var_t2 = (D_00470410 * 0x10) + 8;
        }
        var_t6 = 8;
        var_t5 = var_t3 + 8;
loop_11:
        temp_t1 = var_a2;
        var_a2 = temp_t1 - 1;
        if (temp_t1 != 0) {
            *(s16 *)((u8 *)var_t0 + 0) = var_t6;
            *(s16 *)((u8 *)var_t0 + 2) = 8;
            *(s64 *)((u8 *)var_t0 + 8) = 3;
            *(s16 *)((u8 *)var_t0 + 0x10) = var_a1;
            *(s16 *)((u8 *)var_t0 + 0x12) = temp_v1;
            *(f32 *)((u8 *)var_t0 + 0x14) = var_a3;
            *(s64 *)((u8 *)var_t0 + 0x18) = 5;
            *(s16 *)((u8 *)var_t0 + 0x20) = var_t5;
            *(s16 *)((u8 *)var_t0 + 0x22) = var_t2;
            *(s64 *)((u8 *)var_t0 + 0x28) = 3;
            *(s16 *)((u8 *)var_t0 + 0x30) = var_a0;
            *(s16 *)((u8 *)var_t0 + 0x32) = temp_v0;
            *(f32 *)((u8 *)var_t0 + 0x34) = var_a3;
            *(s64 *)((u8 *)var_t0 + 0x38) = 5;
            var_a1 = var_a0;
            var_a0 += 0x400;
            var_t6 = var_t5;
            var_t5 += var_t3;
            var_t0 += 0x40;
            goto loop_11;
        }
    } else {
        gPacketQwc += var_a2 * 2;
        D_00470294 += var_a2 * 2;
        D_00470298 += var_a2 * 2;
loop_15:
        temp_t1_2 = var_a2;
        var_a2 = temp_t1_2 - 1;
        if (temp_t1_2 != 0) {
            *(s16 *)((u8 *)var_t0 + 0) = var_a1;
            *(s16 *)((u8 *)var_t0 + 2) = temp_v1;
            *(f32 *)((u8 *)var_t0 + 4) = var_a3;
            *(s64 *)((u8 *)var_t0 + 8) = 5;
            *(s16 *)((u8 *)var_t0 + 0x10) = var_a0;
            *(s16 *)((u8 *)var_t0 + 0x12) = temp_v0;
            *(f32 *)((u8 *)var_t0 + 0x14) = var_a3;
            *(s64 *)((u8 *)var_t0 + 0x18) = 5;
            var_a1 = var_a0;
            var_a0 += 0x400;
            var_t0 += 0x20;
            goto loop_15;
        }
    }
    gPacketPtr = var_t0;
    amDraw_FlushPacket();
}
