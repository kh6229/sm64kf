#include "src/game/envfx_snow.h"

const GeoLayout secret_ring_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, secret_ring_secret_ring_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
