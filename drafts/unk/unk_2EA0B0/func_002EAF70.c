/* Draft (not built): func_002EAF70 at 0x002EAF70, size 0x15C, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 02EAC30(...)' redeclared was declared as: 'int (...)' now declared as: 'void ()' @ 621: extern void func_002EAC30(void);
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EAF70.s */

// src/unk/unk_2EA0B0.c func_002EAF70 cerr diff=-1/0
extern void func_001C75D0(void *, s32);
void func_002EAF70(s32 arg0) {
    s32 (*temp_v1)();
    s32 temp_v1_3;
    s32 var_a0;
    s8 temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v1_2;

    temp_s0 = D_00470958;
    if (*(s32 *)((u8 *)temp_s0 + 0x18) == 0) {
        var_a0 = 1;
    } else {
        temp_v1 = *(s32 (**)())((u8 *)temp_s0 + 0x24);
        if (temp_v1 != NULL) {
            var_a0 = temp_v1();
        } else {
            var_a0 = 1;
            if (*(s32 *)((u8 *)temp_s0 + 0xC) == 1) {

            } else {
                var_a0 = 0;
            }
        }
    }
    if ((var_a0 != 0) && ((var_a0 != 1) || (arg0 != 0))) {
        temp_v1_2 = *(u8 **)((u8 *)temp_s0 + 0x18);
        if ((*(s8 *)((u8 *)temp_v1_2 + 0) & 2) && (*(s8 *)((u8 *)temp_v1_2 + 3) < 0)) {
            temp_a2 = *(s8 *)((u8 *)temp_v1_2 + 1);
            temp_v0 = gBattle + (temp_a2 * 0x2020);
            temp_s1 = temp_v0 + 0x830;
            temp_v1_3 = *(s16 *)((u8 *)((temp_a2 * 2) + *(s32 *)((u8 *)temp_s0 + 0x14)) + 8) + 0x2D8;
            if (*(s32 *)((u8 *)temp_v0 + 0x13A0) != temp_v1_3) {
                *(s16 *)((u8 *)temp_s1 + 0xCB4) = 1;
                *(s32 *)((u8 *)temp_s1 + 0xB70) = temp_v1_3;
                *(s16 *)((u8 *)temp_s1 + 0xCB6) = 1;
                func_001C75D0(temp_s1, 0xF);
                *(s32 *)((u8 *)temp_s1 + 0xCA4) = 0x3DCCCCCD;
                *(s32 *)((u8 *)temp_s1 + 0xCA8) = 0x3D4CCCCD;
            }
        }
        *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x20) + 1);
        if (*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0) & 1) {
            *(s32 *)((u8 *)temp_s0 + 0x48) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x48) + 1);
        }
        func_002EAC30();
    }
}
