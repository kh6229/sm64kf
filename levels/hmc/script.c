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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x03, 0x34, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x03, 0x66, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, -8300, -270, 1694, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -10930, -332, 3610, 0, 0, 0, (0x18 << 16), bhvBlueCoinSwitch),
		OBJECT(MODEL_BLUE_COIN, -6963, -216, 3524, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -9033, -165, 6330, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -10116, -226, 2326, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -10615, -227, 5332, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -12041, -232, 3044, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -908, -461, 5203, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_NONE, 4829, 291, 1239, 0, 65, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4946, 2015, 6218, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 11297, 2654, 3827, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 994, -541, -9147, 0, 110, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2243, 146, 619, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -339, -460, -4388, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1101, -461, -3460, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4259, 1501, 443, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5937, -19, 5878, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3249, -616, 783, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 8972, 1964, 1157, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3620, -413, -4449, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 11069, -473, 4315, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5033, -271, 9021, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -543, -461, 5203, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -285, -461, 4945, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -285, -461, 4579, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -543, -461, 4321, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -908, -461, 4321, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1167, -461, 4579, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1167, -461, 4945, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_GUMMY_GOOMBA, 2319, 213, -1210, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -8400, 3418, -1705, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -1138, 759, -729, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, 3920, 118, 2203, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -5428, -119, 6113, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -6601, -119, 5563, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -13210, 4618, -1327, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, 6646, -307, 6217, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -4169, -473, -4321, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, -3072, -458, -4576, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GUMMY_GOOMBA, 2023, -522, -8682, 0, 0, 0, 0x00000000, bhvGoomba),
		MARIO_POS(0x01, -180, -5937, -42, 5878),
		OBJECT(MODEL_OREO, -731, 691, 516, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_OREO, 788, 46, 660, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_OREO, 1528, 46, -289, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_OREO, 2243, 46, 619, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_OREO, 3240, 46, 191, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_OREO, 3223, 46, 1290, 0, 0, 0, 0x00000000, bhvOreo),
		OBJECT(MODEL_RED_COIN, 788, 146, 660, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 1985, 616, 2237, 0, 0, 0, (0x02 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 3240, 146, 191, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -731, 791, 516, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5006, 616, 710, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -718, 1661, 1916, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4161, 1011, -859, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1672, 1067, 271, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2212, 217, 2273, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 11069, -73, 4315, 0, 0, 0, (EXCLAMATION_BOX_BP_KOOPA_SHELL << 16), bhvExclamationBox),
		OBJECT(MODEL_STAR, -13400, 5018, -1930, 0, 0, 0, (0x01 << 24), bhvStar),
		OBJECT(MODEL_STAR, 2776, 3829, -4738, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, -14694, 266, -4089, 0, 0, 0, (0x03 << 24), bhvStar),
		OBJECT(MODEL_STAR, 183, 2704, -10888, 0, 0, 0, (0x04 << 24), bhvStar),
		OBJECT(MODEL_NONE, -5937, -42, 5878, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_FOOD_LEVEL),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -5937, -42, 5878),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};