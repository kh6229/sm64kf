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
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, -4221, 2957, 5044, 0, -180, 0, 0x00000000, bhvBobombBuddyOpensCannon),
		OBJECT(MODEL_CANNON_BASE, 0, 2571, 0, 0, 0, 0, 0x00000000, bhvCannon),
		OBJECT(MODEL_DL_CANNON_LID, 0, 3037, 0, 0, 0, 0, 0x00000000, bhvCannonClosed),
		OBJECT(MODEL_YELLOW_COIN, -4653, 2627, -3816, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_NONE, -4653, 3257, -4687, 0, 0, 0, (COIN_FORMATION_BP_SHAPE_ARROW << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1165, 3824, 4807, 0, -90, 0, (COIN_FORMATION_BP_SHAPE_ARROW << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 35, 2953, 4807, 0, 0, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_FLYGUY, 8718, 6908, 2865, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 7992, 6908, 1413, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 8533, 6908, 17, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 7437, 6908, -1535, 0, 0, 0, 0x00000000, bhvFlyGuy),
		MARIO_POS(0x01, -90, 4698, 3357, -4687),
		OBJECT(MODEL_RED_COIN, 4698, 6242, 4612, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 465, 3557, 0, 0, 0, 0, (0x02 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -4653, 5942, 4612, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4653, 6242, -4687, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4698, 6242, -4687, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4603, 7304, 7583, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 8262, 6908, 715, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 23, 5633, -4687, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -7132, 6721, -1298, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_SECRET_RING, 3567, 5763, -661, 0, 0, 0, (0x01 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -6905, 4781, -2185, 0, 0, 0, (0x01 << 24), bhvHiddenStar),
		OBJECT(MODEL_SECRET_RING, 1234, 5875, -661, 0, 25, 0, (0x01 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_SECRET_RING, -687, 4877, 1031, 0, 35, 0, (0x01 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_SECRET_RING, -3775, 5326, 2428, 0, -25, 0, (0x01 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_SECRET_RING, -5189, 4947, 651, 0, -45, 0, (0x01 << 16), bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 4698, 3357, -4687, 0, -90, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -4653, 3357, 4188, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -446, 3357, 0, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -7132, 7153, 427, 0, -32, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 4698, 3757, -4687, 0, 0, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 8077, 6727, 4161, 0, -32, 0, 0x00000000, bhvExclamationBox),
		OBJECT(MODEL_CAP_SWITCH, -4653, 2957, 4612, 0, 90, 0, 0x00000000, bhvCapSwitch),
		OBJECT(MODEL_STAR, -4653, 3457, 4612, 0, 90, 0, 0x00000000, bhvStar),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_WING_CAP),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, 4698, 3357, -4687),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};