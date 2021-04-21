#include "src/game/envfx_snow.h"

const GeoLayout brige_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, brige_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(1, brige_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
