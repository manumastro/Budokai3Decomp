/* Draft (not built): func_001D83E0 at 0x001D83E0, size 0x328, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 2EAE0(0x20, -1, var_a2, var_a3) / 10) & 1; @ 892: *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0x48) = 0;
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D83E0.s */

// src/unk/unk_1D5B30.c func_001D83E0 cerr diff=-1/0
s32 func_001C8020(s32, s32 *);
s32 func_001D4AF0();
extern s32 D_00492FCC;
void func_001D83E0(u8 *arg0) {
    s32 sp40;
    s16 temp_a0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1_2;
    s8 temp_v1_2;
    s8 var_s1;
    u16 temp_v1_3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_t0;
    u8 *var_a2;

    var_s1 = -1;
    temp_s0 = (u8 *)(gBattle);
    sp40 = 1 << *(s32 *)((u8 *)arg0 + 0x1350);
    func_001E1300(0);
    func_001D97D0(arg0);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x8900);
    if (temp_v1 < 0) {
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) >= 0) {
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0x48) = 0;
            func_001C8020(0, &sp40);
            *(s16 *)((u8 *)arg0 + 0x1AB8) = (s16) ((*(s32 *)((u8 *)arg0 + 0xBA4) * 2) + 0x2C8 + ((func_0012EAE0(0x20) / 10) & 1));
        }
        return;
    }
    if (temp_v1 == *(s32 *)((u8 *)arg0 + 0x1350)) {
        temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x1354);
        *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
        func_001D4AF0();
        var_a3 = 0;
        *(s16 *)((u8 *)arg0 + 0x1ABA) = -1;
        *(s16 *)((u8 *)arg0 + 0x1ABC) = -1;
        var_a2 = *(u8 **)((u8 *)arg0 + 0x1CF8);
loop_6:
        temp_v1_2 = *(s8 *)((u8 *)var_a2 + 0x94);
        temp_t0 = var_a2 + 0x94;
        if (temp_v1_2 != -1) {
            if ((temp_v1_2 == *(s32 *)((u8 *)temp_s0_2 + 0x1CFC)) && (*(u8 *)((u8 *)temp_t0 + 2) & (1 << *(s32 *)((u8 *)arg0 + 0xBA4))) && (*(u8 *)((u8 *)temp_t0 + 1) & (1 << *(s32 *)((u8 *)temp_s0_2 + 0xBA4)))) {
                *(s16 *)((u8 *)arg0 + 0x1ABA) = (s16) *(s8 *)((u8 *)temp_t0 + 3);
                *(s16 *)((u8 *)arg0 + 0x1ABC) = (s16) *(s8 *)((u8 *)temp_t0 + 4);
                var_s1 = *(s8 *)((u8 *)temp_t0 + 3);
            } else {
                var_a3 += 1;
                var_a2 += 5;
                if (var_a3 < 0xC) {
                    goto loop_6;
                }
            }
        }
        if (var_s1 < 0) {
            temp_a0 = *(s16 *)((u8 *)arg0 + 0x13A4);
            var_s1_2 = (func_0012EAE0(0x20, -1, var_a2, var_a3) / 10) & 1;
            if (temp_a0 >= 0) {
                temp_v1_3 = *(&D_00492FCC + (temp_a0 * 0xB8));
                if (temp_v1_3 & 0x4000) {
                    var_s1_2 = 1;
                } else if (temp_v1_3 & 0x1000) {
                    var_s1_2 = 0;
                }
            }
            var_s1 = var_s1_2 + (*(s32 *)((u8 *)arg0 + 0xBA4) * 2);
        }
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (var_s1 + 0x2A0);
        *(s16 *)((u8 *)arg0 + 0xCB6) = 2;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        func_001C75D0((void *)(arg0), 0xF);
        func_001C75D0((void *)(*(u8 **)((u8 *)arg0 + 0x1354)), 0);
        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0x48) = 0;
        func_001C8020(0, &sp40);
    } else {
        *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
        func_001D4AF0();
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xBA4) + 0x2C0);
        *(s16 *)((u8 *)arg0 + 0xCB6) = 2;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        func_001C75D0((void *)(arg0), 0xF);
        func_001C75D0((void *)(*(u8 **)((u8 *)arg0 + 0x1354)), 0);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10) & 3) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0x48) = -1;
        } else {
            *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x1350) * 2) + sp) + 0x48) = 0;
        }
        func_001C8020(0, &sp40);
    }
    *(s32 *)((u8 *)arg0 + 0x19F4) = 0x3F000000;
    *(s32 *)((u8 *)arg0 + 0x19F8) = 0x3F000000;
    *(s32 *)((u8 *)arg0 + 0x19FC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A00) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A04) = 0;
    *(s32 *)((u8 *)arg0 + 0x18C0) = 0;
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
}
