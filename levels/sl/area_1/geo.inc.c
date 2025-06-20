#include "src/game/envfx_snow.h"

const GeoLayout sl_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, sl_dl_Level_Mesh_mesh_layer_7),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sl_dl_Level_Mesh_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, sl_dl_Level_Mesh_001_mesh_layer_7),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sl_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_SNOW_MOUNTAINS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, sl_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_BLIZZARD, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
