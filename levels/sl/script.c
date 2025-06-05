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
#include "levels/sl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE, sl_geo_000390), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE, sl_geo_000360), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK, sl_geo_000378), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE, snow_tree_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sl_area_1),
		WARP_NODE(0x0A, LEVEL_SL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x02, 0x36, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x68, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BIG_CHILL_BULLY, 5739, 709, -7274, 0, -90, 0, 0x00000000, bhvChiefChilly),
		OBJECT(MODEL_CHILL_BULLY, -2499, 1230, -8968, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_NONE, -2404, 607, -5307, 0, 113, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3920, 1230, -8968, 0, 113, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5270, 625, -7074, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2875, 200, -1712, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1932, 1230, -7782, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3211, 3456, -7253, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4854, 782, 2425, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -3070, 1126, -6462, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3566, 1126, -8081, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3210, 1462, -5500, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4450, 1933, -6013, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4963, 2575, -7253, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3091, 1126, -7241, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_ICE_WALL, 5285, 710, -6177, 0, -23, 0, (0x01 << 16), bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 4642, 710, -6820, 0, -68, 0, 0x00000000, bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 5285, 710, -8371, 0, -158, 0, 0x00000000, bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 4642, 710, -7729, 0, -113, 0, (0x01 << 16), bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 6194, 710, -8371, 0, 157, 0, (0x01 << 16), bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 6836, 710, -6820, 0, 67, 0, (0x01 << 16), bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 6194, 710, -6177, 0, 22, 0, 0x00000000, bhvIceWall),
		OBJECT(MODEL_ICE_WALL, 6836, 710, -7729, 0, 112, 0, 0x00000000, bhvIceWall),
		MARIO_POS(0x01, 0, 0, 280, 0),
		OBJECT(MODEL_EXCLAMATION_BOX, -4854, 1138, 2425, 0, 0, 0, (EXCLAMATION_BOX_BP_METAL_CAP << 16), bhvExclamationBox),
		OBJECT(MODEL_MR_BLIZZARD, -1296, 571, -4845, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_RED_COIN, 1543, 819, -7135, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -2875, 600, -1712, 0, 0, 0, (0x02 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -4591, 819, -3685, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -5889, 819, -9895, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4493, 819, -4340, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7620, 819, -1691, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 9772, 819, -7083, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 9752, 819, 1829, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5059, 819, 1450, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, -2875, 500, -2278, 0, 0, 0, (EXCLAMATION_BOX_BP_KOOPA_SHELL << 16), bhvExclamationBox),
		OBJECT(MODEL_SPINDRIFT, -1359, 3409, -7224, 0, 0, 0, 0x00000000, bhvSpindrift),
		OBJECT(MODEL_STAR, 7854, 3849, 4586, 0, 0, 0, (0x01 << 24), bhvStar),
		OBJECT(MODEL_NONE, 0, 280, 0, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(sl_area_1_collision),
		MACRO_OBJECTS(sl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 280, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};