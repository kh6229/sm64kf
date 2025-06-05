#include "src/game/envfx_snow.h"

const GeoLayout ice_wall_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ice_wall_ice_wall_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
