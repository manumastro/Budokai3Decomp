/* Draft (not built): func_002B4680 at 0x002B4680, size 0x14C, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  SklRec *' to 'float' @ 282: 4))), gSklEdit, (f32)(s32)((f32) *(s32 *)((u8 *)temp_v1 + 0x128) * gFrameDelta)) == 0xFF) {
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B4680.s */

// src/unk/unk_2B2C20.c func_002B4680 cerr diff=-1/0
void func_002B4680(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_v1;
    void (*var_v1_2)();
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_t2;

    temp_v1 = (unsigned char *)(gSklEdit + (*(s32 *)((u8 *)arg0 + 0x30) * 0x1C8));
    temp_s0 = temp_v1 + 0x48;
    if (func_0022BC30((s32)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gSklEdit + 0x10)) + 0x1C) + (*(s32 *)((u8 *)temp_v1 + 0x120) * 4))), gSklEdit, (f32)(s32)((f32) *(s32 *)((u8 *)temp_v1 + 0x128) * gFrameDelta)) == 0xFF) {
        temp_a3 = *(s32 *)((u8 *)temp_s0 + 0xB8);
        var_t2 = temp_s0 + 0xB8;
        var_t1 = 0;
        var_t0 = 0;
        if (temp_a3 > 0) {
loop_3:
            if (var_t0 < 8) {
                temp_a2 = *(s32 *)((u8 *)var_t2 + 4);
                var_t0 += 1;
                temp_a0 = temp_a2 * 4;
                var_t2 += 4;
                var_t1 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_a0 + temp_a2) * 8)) + 8) & 7;
                if (var_t0 >= temp_a3) {

                } else {
                    goto loop_3;
                }
            }
        }
        var_v1 = var_t1 + 1;
        if (var_t1 < 7) {

        } else {
            var_v1 = 7;
        }
        *(s32 *)((u8 *)temp_s0 + 0x20) = var_v1;
        if (*(s32 *)((u8 *)temp_s0 + 0x14) != 0) {
            var_v1_2 = func_002B3D40;
            *(s32 *)((u8 *)temp_s0 + 0xC) = 4;
            if (func_002B3D40 == NULL) {
                var_v1_2 = NULL;
            }
        } else {
            *(s32 *)((u8 *)temp_s0 + 0xC) = 5;
            var_v1_2 = func_002B3D90;
            if (func_002B3D90 == NULL) {
                var_v1_2 = NULL;
            }
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
