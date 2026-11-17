#ifndef BATTLE_STAGE_H
#define BATTLE_STAGE_H

#include "common.h"
#include "battle/battle.h"

/* The stage (btb_main.c, btb_draw.c). Layouts inferred from the code that reads them; only the fields used so
 * far. */

/* A field of the battle's work area (gBattle, D_00470570) not yet in BattleWork (battle.h): the offsets used by
 * the stage code are listed here until the battle files settle that struct. */
#define BW_FIELD(bw, type, off) (*(type *)((u8 *)(bw) + (off)))

/* One area of a stage (a stage has two: the ground and the sky (guess)), in a row of the stage table. */
typedef struct StageArea {
    /* 0x00 */ s32 model;       /* index into D_0044A240 */
    /* 0x04 */ s32 fog;         /* index into D_0044A9C0 (guess: fog colour and range) */
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ u8 unk10[0x10];
} StageArea;

/* A row of the stage table D_0044AE50 (.data), one per stage. */
typedef struct StageInfo {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ StageArea area[2];
} StageInfo; /* 0x5C */

/* An entry of D_0044A240 (.data). */
typedef struct StageModel {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 unk10[0x40];
} StageModel; /* 0x50 */

/* An entry of D_0044A9C0 (.data). */
typedef struct StageFog {
    /* 0x00 */ s32 color;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
} StageFog; /* 0x14 */

typedef struct StageSlot {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 unk0E;
} StageSlot;

/* The stage's state (.bss, D_0051CCE0). */
typedef struct StageWork {
    /* 0x00 */ s32 stage;       /* row of D_0044AE50 */
    /* 0x04 */ u8 unk04[0x20 - 0x04];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ s32 unk24;
    /* 0x28 */ s32 unk28;
    /* 0x2C */ s32 unk2C;       /* a model (func_001A50F0's first argument) */
    /* 0x30 */ s32 unk30;
    /* 0x34 */ void *unk34;
    /* 0x38 */ u8 unk38[0x3C - 0x38];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ s32 area;        /* 0 or 1, the area of the stage row */
    /* 0x44 */ f32 unk44;
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 flags;
    /* 0x50 */ s16 unk50[4];
    /* 0x58 */ StageSlot slot[4];
    /* 0x98 */ u8 unk98[0x9E - 0x98];
    /* 0x9E */ u16 unk9E;
    /* 0xA0 */ u8 unkA0[0xA4 - 0xA0];
    /* 0xA4 */ s32 unkA4[7];
} StageWork;

extern StageWork D_0051CCE0;
extern StageInfo D_0044AE50[];
extern StageModel D_0044A240[];
extern StageFog D_0044A9C0[];

#endif
