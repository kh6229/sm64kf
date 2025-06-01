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

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
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
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x02, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -5278, 1807, -2097, 0, 0, 0, (0x32 << 24) | (0x01 << 16), bhvWarp),
		OBJECT(MODEL_BLUE_COIN, -3675, 1233, 748, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN_SWITCH, -2918, 289, 57, 0, 0, 0, (0x0F << 16), bhvBlueCoinSwitch),
		OBJECT(MODEL_BLUE_COIN, -2165, 1650, -800, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1160, 1300, -1471, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1154, 953, -454, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -481, 1126, 307, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1557, 865, -915, 0, 0, 0, 0x00000000, bhvHiddenBlueCoin),
		OBJECT(MODEL_BROWN_MUSHROOM, -2474, 5672, -6418, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_BROWN_MUSHROOM, 1097, 328, -77, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_BROWN_MUSHROOM, 4114, 465, 833, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_BROWN_MUSHROOM, 1218, 2522, -6566, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_BROWN_MUSHROOM, -1857, 191, 4673, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_YELLOW_COIN, -2, 2946, 2377, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_NONE, -808, 4404, -6944, 0, 85, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5129, 5879, -1797, 0, 119, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 686, 925, -969, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3937, 5129, -6027, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2330, 1550, 827, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2741, 1392, 1518, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2272, 7611, 5463, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1487, -988, 1623, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1834, 2135, 4047, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4358, 3842, -2734, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -2, 2814, 4138, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2460, 5898, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 1949, 7659, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2814, 616, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1610, 781, 2135, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 1949, -2905, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2236, 6778, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2683, 5018, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2946, 3257, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2946, 1497, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2683, -264, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2460, -1144, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2, 2236, -2025, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2716, 1010, 2774, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 3822, 1230, 2135, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_NONE, 1645, 191, 3512, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 1972, 1981, -4041, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		MARIO_POS(0x01, -180, 15, 270, 5624),
		OBJECT(MODEL_RED_COIN, 3352, 994, 5635, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 4914, 1896, 3033, 0, 0, 0, (0x01 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 4120, 1487, 5377, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2695, 552, 5928, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4094, 874, 4915, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3631, 559, 4984, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4167, 838, 4325, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4713, 1404, 4291, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4301, 563, 3602, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 945, 1906, 9036, 0, 0, 0, (0x02 << 24), bhvHiddenStar),
		OBJECT(MODEL_STAR, 5728, 9111, -4537, 0, 0, 0, (0x03 << 24), bhvStar),
		OBJECT(MODEL_STAR, -3761, 3774, -4572, 0, 0, 0, (0x04 << 24), bhvStar),
		OBJECT(MODEL_NONE, 15, 270, 5624, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -4952, 1721, -1314, 0, 30, 0, (0x02 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -2460, 5111, -4797, 0, 0, 0, 0x00000000, bhvExclamationBox),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MUSHROOM_VALLEY),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x02, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 268, -600, 0, 0, 0, (0x16 << 24) | (0x01 << 16), bhvWarp),
		OBJECT(MODEL_BLUE_MUSHROOM, 0, -1109, 2952, 0, 0, 0, 0x00000000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -1000, -1109, 5594, 0, 0, 0, 0x00000000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, -1626, -190, 4264, 0, 0, 0, 0x00000000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 1589, 1790, 5353, 0, 0, 0, 0x00000000, bhvBlueMushroom),
		OBJECT(MODEL_BLUE_MUSHROOM, 1289, 1790, 6853, 0, 0, 0, 0x00000000, bhvBlueMushroom),
		OBJECT(MODEL_NONE, 0, 58, 400, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1892, 1220, 6492, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1278, 1324, 8702, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_STAR, -1278, 1624, 8702, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 92, -228, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 15, 270, 5624),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};