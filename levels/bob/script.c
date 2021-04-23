#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, grill_geo), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CASTLE_GROUNDS, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, 3625, 250, -2061, 0, 0, 0, 0x00020000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -938, -1750, -3938, 0, 0, 0, 0x00010000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -4383, 2812, -1933, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -625, 250, 625, 0, 0, 0, 0x00020000, bhvExclamationBox),
		OBJECT(MODEL_BRIGE, -11500, 7875, -4500, 0, 0, 0, 0x00000000, bhvBrige),
		OBJECT(MODEL_BOBOMB_BUDDY, -4125, 219, -6062, 0, 0, 0, 0x00000000, bhvBobombBuddy),
		OBJECT(MODEL_NONE, -3563, 62, -6375, 0, 0, 0, 0x00010000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 3719, 62, -6062, 0, 0, 0, 0x00030000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 6062, 219, -2312, 0, -180, 0, 0x00020000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 4937, 188, 6187, 0, 0, 0, 0x00080000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, -2013, 219, -6062, 0, 0, 0, 0x000F0000, bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 500, 62, 6250, 0, 0, 0, 0x00100000, bhvBobombBuddy),
		OBJECT(MODEL_CAP_SWITCH, 5375, 62, -6062, 0, -90, 0, 0x00020000, bhvCapSwitch),
		OBJECT(MODEL_CAP_SWITCH, -1500, -2000, 1062, 0, -90, 0, 0x00010000, bhvCapSwitch),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -5031, 62, -5687, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -2338, 62, -5687, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 350, 62, -5687, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 3719, 62, -5687, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 5687, 62, -3625, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 575, 62, 4687, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 425, 62, 4687, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_GOOMBA, 2216, 63, 1675, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1577, 63, 2160, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 786, 63, 1812, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4617, 63, 2216, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4789, 63, -1986, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2190, 62, -4527, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2995, 62, -4492, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -1540, 0, 646, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -356, 125, -6231, 0, 0, 0, 0x01020000, bhvKoopa),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 5062, -2000, -3938, 0, 0, 0, 0x00030000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 5250, 1938, 5875, -180, 0, 0, 0x00040000, bhvWarpPipe),
		OBJECT(MODEL_PURPLE_SWITCH, -1500, -3000, -4500, 0, 0, 0, 0x00000000, bhvFloorSwitchGrills),
		OBJECT(MODEL_RED_COIN, -4455, -667, 4589, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 628, 2153, 4910, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1593, -2000, 490, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2983, 2662, 1534, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1437, 212, -6281, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6312, 125, -6062, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4633, 2562, -1933, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4774, -2938, -4500, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -6000, 250, -4500, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 4405, 0, -87, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_NMH),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
