#include "src/game/envfx_snow.h"

const GeoLayout blue_mushroom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, blue_mushroom_blue_mushroom_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
