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
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 startArea;   /* the area a battle starts in */
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

/* A resource a stage object points to (StageObj.res). */
typedef struct StageResInfo {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 unk20;
} StageResInfo;

typedef struct StageRes {
    /* 0x00 */ StageResInfo *info;   /* the key StageLink*.key names */
    /* 0x04 */ s32 count;
    /* 0x08 */ struct {
        s32 unk00;
        s32 unk04;
    } ent[1];
} StageRes;

/* A stage object (0x20 bytes; func_001F8420 builds one). */
typedef struct StageObj {
    /* 0x00 */ void *src;
    /* 0x04 */ StageRes *res;
    /* 0x08 */ void **unk08;
    /* 0x0C */ void **unk0C;
    /* 0x10 */ void *unk10;
    /* 0x14 */ u8 unk14[0xC];
} StageObj;

/* A group of stage objects (0x24 bytes; func_001F89D0 builds one). */
typedef struct StageGroup {
    /* 0x00 */ s32 index;
    /* 0x04 */ struct StageGroupSrc *src;
    /* 0x08 */ s32 count;
    /* 0x0C */ StageObj *objs;
    /* 0x10 */ u8 unk10[0x14];
} StageGroup;

/* A reference by key from the stage file to an object (func_001F8740 resolves them). */
typedef struct StageLinkA {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ StageResInfo *key;
    /* 0x14 */ StageRes *ref;
    /* 0x18 */ StageObj *obj;
    /* 0x1C */ u8 unk1C[4];
} StageLinkA;

typedef struct StageLinkB {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ StageResInfo *key;
    /* 0x20 */ StageRes *ref;
    /* 0x24 */ StageObj *obj;
    /* 0x28 */ u8 unk28[8];
} StageLinkB;

typedef struct StageGroupSrc {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ s32 count;
    /* 0x94 */ s32 nlinkA;
    /* 0x98 */ s32 nlinkB;
    /* 0x9C */ s32 nlinkC;
    /* 0xA0 */ s32 nlinkD;
    /* 0xA4 */ u8 unkA4[4];
    /* 0xA8 */ void **objs;
    /* 0xAC */ StageLinkA *linkA;
    /* 0xB0 */ StageLinkB *linkB;
    /* 0xB4 */ StageLinkA *linkC;
    /* 0xB8 */ StageLinkB *linkD;
    /* 0xBC */ u8 unkBC[0xD8 - 0xBC];
    /* 0xD8 */ s32 *unkD8;
} StageGroupSrc;

/* The header of the stage's main file (StageWork.hdr). */
typedef struct StageHeader {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 ngroups;
    /* 0x08 */ s32 nobjs;
    /* 0x0C */ s32 nlinkA;
    /* 0x10 */ s32 nlinkB;
    /* 0x14 */ u8 unk14[0x20 - 0x14];
    /* 0x20 */ StageGroupSrc **groups;
    /* 0x24 */ void **objs;
    /* 0x28 */ StageLinkA *linkA;
    /* 0x2C */ StageLinkB *linkB;
} StageHeader;

/* The stage's state (.bss, D_0051CCE0). The first 0x40 bytes are the loaded stage (func_001FA320 clears them). */
typedef struct StageWork {
    /* 0x00 */ s32 stage;       /* row of D_0044AE50 */
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 *unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ void *data;      /* the stage file */
    /* 0x20 */ StageHeader *hdr; /* its parts (func_001A50F0) */
    /* 0x24 */ void *unk24;
    /* 0x28 */ void *unk28;
    /* 0x2C */ void *unk2C;
    /* 0x30 */ void *unk30;
    /* 0x34 */ StageGroup *groups;
    /* 0x38 */ s32 nobjs;
    /* 0x3C */ StageObj *objs;
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
