Lights1 brige_f3d_material_061_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx brige_Wood_1_ci8_aligner[] = {gsSPEndDisplayList()};
u8 brige_Wood_1_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x03, 0x03, 
	0x06, 0x00, 0x07, 0x01, 0x01, 0x08, 0x09, 0x05, 
	0x07, 0x07, 0x07, 0x05, 0x06, 0x05, 0x0a, 0x01, 
	0x04, 0x0b, 0x0c, 0x0d, 0x0e, 0x01, 0x01, 0x0c, 
	0x0f, 0x0b, 0x0b, 0x03, 0x04, 0x0f, 0x03, 0x03, 
	0x06, 0x10, 0x0f, 0x11, 0x01, 0x03, 0x12, 0x05, 
	0x07, 0x05, 0x0f, 0x04, 0x13, 0x05, 0x03, 0x0b, 
	0x04, 0x14, 0x0c, 0x14, 0x15, 0x16, 0x0b, 0x0c, 
	0x07, 0x17, 0x02, 0x03, 0x04, 0x18, 0x03, 0x01, 
	0x06, 0x19, 0x07, 0x07, 0x05, 0x07, 0x06, 0x07, 
	0x07, 0x05, 0x07, 0x01, 0x19, 0x05, 0x05, 0x14, 
	0x04, 0x0e, 0x1a, 0x0e, 0x15, 0x01, 0x01, 0x16, 
	0x01, 0x16, 0x01, 0x02, 0x04, 0x04, 0x03, 0x01, 
	0x06, 0x1b, 0x1c, 0x07, 0x05, 0x05, 0x06, 0x1b, 
	0x10, 0x1c, 0x13, 0x01, 0x19, 0x01, 0x07, 0x16, 
	0x04, 0x15, 0x0c, 0x15, 0x14, 0x0c, 0x11, 0x16, 
	0x04, 0x14, 0x01, 0x1d, 0x0c, 0x01, 0x05, 0x01, 
	0x06, 0x1b, 0x10, 0x05, 0x18, 0x18, 0x1e, 0x1f, 
	0x10, 0x0f, 0x1b, 0x04, 0x19, 0x05, 0x01, 0x14, 
	0x04, 0x14, 0x0c, 0x15, 0x0e, 0x0b, 0x0b, 0x14, 
	0x0a, 0x0b, 0x04, 0x16, 0x0c, 0x01, 0x03, 0x02, 
	0x06, 0x1b, 0x10, 0x05, 0x05, 0x05, 0x20, 0x1c, 
	0x0f, 0x1b, 0x1b, 0x05, 0x13, 0x04, 0x0c, 0x21, 
	0x07, 0x22, 0x04, 0x23, 0x14, 0x0b, 0x14, 0x17, 
	0x07, 0x0b, 0x04, 0x0b, 0x0c, 0x01, 0x03, 0x0b, 
	0x06, 0x24, 0x0f, 0x1c, 0x07, 0x0f, 0x06, 0x10, 
	0x1b, 0x20, 0x25, 0x26, 0x1b, 0x04, 0x0b, 0x17, 
	0x27, 0x22, 0x04, 0x23, 0x17, 0x16, 0x14, 0x0b, 
	0x00, 0x07, 0x04, 0x0b, 0x0c, 0x01, 0x05, 0x0b, 
	0x25, 0x06, 0x1b, 0x1f, 0x05, 0x10, 0x1e, 0x10, 
	0x1b, 0x1b, 0x28, 0x10, 0x06, 0x25, 0x01, 0x14, 
	0x07, 0x11, 0x27, 0x23, 0x0b, 0x21, 0x1a, 0x1a, 
	0x10, 0x07, 0x0b, 0x0b, 0x04, 0x11, 0x11, 0x01, 
	0x25, 0x06, 0x1b, 0x10, 0x05, 0x10, 0x06, 0x1b, 
	0x06, 0x1b, 0x1e, 0x0f, 0x1b, 0x25, 0x04, 0x16, 
	0x0a, 0x11, 0x21, 0x15, 0x0c, 0x00, 0x01, 0x1a, 
	0x00, 0x01, 0x22, 0x14, 0x0c, 0x01, 0x11, 0x0b, 
	0x20, 0x1b, 0x07, 0x05, 0x05, 0x26, 0x06, 0x20, 
	0x10, 0x1b, 0x1f, 0x0f, 0x1b, 0x1b, 0x01, 0x14, 
	0x05, 0x0b, 0x04, 0x15, 0x1a, 0x14, 0x14, 0x14, 
	0x00, 0x01, 0x0b, 0x0b, 0x0c, 0x04, 0x03, 0x16, 
	0x1b, 0x1f, 0x07, 0x05, 0x05, 0x05, 0x1b, 0x1b, 
	0x1f, 0x1b, 0x10, 0x0f, 0x29, 0x06, 0x01, 0x14, 
	0x07, 0x01, 0x07, 0x14, 0x04, 0x14, 0x0e, 0x14, 
	0x1b, 0x00, 0x0b, 0x0b, 0x1a, 0x04, 0x05, 0x0b, 
	0x19, 0x10, 0x07, 0x05, 0x05, 0x07, 0x06, 0x1b, 
	0x1f, 0x1b, 0x10, 0x07, 0x2a, 0x00, 0x03, 0x14, 
	0x07, 0x01, 0x07, 0x14, 0x04, 0x1d, 0x14, 0x2b, 
	0x1b, 0x29, 0x01, 0x0b, 0x04, 0x0f, 0x07, 0x01, 
	0x06, 0x00, 0x07, 0x05, 0x0f, 0x0f, 0x06, 0x06, 
	0x1b, 0x1c, 0x1b, 0x0f, 0x28, 0x05, 0x05, 0x14, 
	0x05, 0x02, 0x2c, 0x0b, 0x03, 0x0b, 0x14, 0x14, 
	0x1b, 0x19, 0x0b, 0x0b, 0x0c, 0x1c, 0x0f, 0x01, 
	0x06, 0x00, 0x04, 0x05, 0x00, 0x07, 0x2d, 0x1f, 
	0x1b, 0x0f, 0x1b, 0x07, 0x29, 0x05, 0x03, 0x0c, 
	0x04, 0x0b, 0x07, 0x16, 0x0b, 0x0b, 0x0e, 0x14, 
	0x10, 0x19, 0x0b, 0x16, 0x04, 0x05, 0x05, 0x0b, 
	0x13, 0x00, 0x05, 0x07, 0x07, 0x05, 0x2e, 0x1f, 
	0x0f, 0x1b, 0x0f, 0x05, 0x29, 0x05, 0x02, 0x0b, 
	0x04, 0x1d, 0x07, 0x04, 0x01, 0x0b, 0x0e, 0x14, 
	0x00, 0x0f, 0x08, 0x16, 0x0c, 0x05, 0x05, 0x0b, 
	0x19, 0x00, 0x07, 0x11, 0x05, 0x05, 0x06, 0x10, 
	0x0f, 0x2f, 0x07, 0x03, 0x2a, 0x05, 0x01, 0x14, 
	0x16, 0x14, 0x04, 0x01, 0x07, 0x1d, 0x14, 0x14, 
	0x00, 0x07, 0x0b, 0x01, 0x04, 0x03, 0x01, 0x14, 
	0x2c, 0x00, 0x07, 0x05, 0x18, 0x05, 0x1b, 0x10, 
	0x0f, 0x0f, 0x11, 0x0c, 0x25, 0x05, 0x01, 0x0e, 
	0x01, 0x0e, 0x04, 0x01, 0x04, 0x0b, 0x14, 0x17, 
	0x07, 0x03, 0x1d, 0x01, 0x01, 0x01, 0x01, 0x0b, 
	0x19, 0x19, 0x07, 0x11, 0x05, 0x05, 0x10, 0x00, 
	0x05, 0x05, 0x02, 0x0b, 0x06, 0x01, 0x11, 0x14, 
	0x04, 0x0e, 0x04, 0x01, 0x0b, 0x14, 0x22, 0x0b, 
	0x07, 0x01, 0x1d, 0x01, 0x01, 0x01, 0x01, 0x02, 
	0x20, 0x10, 0x0f, 0x05, 0x05, 0x05, 0x19, 0x0f, 
	0x05, 0x05, 0x0b, 0x01, 0x1b, 0x0c, 0x05, 0x14, 
	0x0c, 0x0e, 0x04, 0x01, 0x16, 0x0b, 0x0b, 0x16, 
	0x07, 0x04, 0x0d, 0x01, 0x21, 0x01, 0x03, 0x01, 
	0x29, 0x06, 0x0f, 0x05, 0x05, 0x0f, 0x19, 0x00, 
	0x0f, 0x05, 0x0b, 0x0c, 0x1f, 0x01, 0x01, 0x14, 
	0x01, 0x0e, 0x04, 0x04, 0x1d, 0x02, 0x0d, 0x17, 
	0x0f, 0x01, 0x0d, 0x05, 0x07, 0x02, 0x0a, 0x0b, 
	0x25, 0x06, 0x00, 0x05, 0x03, 0x05, 0x10, 0x10, 
	0x0f, 0x05, 0x0b, 0x01, 0x1b, 0x05, 0x01, 0x2b, 
	0x1a, 0x0e, 0x21, 0x0c, 0x04, 0x14, 0x14, 0x17, 
	0x07, 0x0c, 0x0b, 0x05, 0x07, 0x0b, 0x05, 0x0c, 
	0x20, 0x1b, 0x00, 0x03, 0x01, 0x18, 0x1c, 0x0f, 
	0x05, 0x05, 0x04, 0x11, 0x1b, 0x05, 0x01, 0x14, 
	0x0c, 0x0e, 0x1a, 0x14, 0x0c, 0x17, 0x2b, 0x30, 
	0x07, 0x0b, 0x0c, 0x07, 0x07, 0x03, 0x05, 0x02, 
	0x20, 0x1b, 0x0f, 0x05, 0x01, 0x01, 0x10, 0x0f, 
	0x05, 0x07, 0x11, 0x04, 0x06, 0x05, 0x03, 0x16, 
	0x1a, 0x14, 0x1a, 0x0e, 0x0b, 0x0c, 0x2b, 0x30, 
	0x20, 0x01, 0x0c, 0x10, 0x00, 0x01, 0x05, 0x01, 
	0x25, 0x1b, 0x05, 0x01, 0x01, 0x18, 0x19, 0x25, 
	0x00, 0x0f, 0x07, 0x07, 0x09, 0x10, 0x05, 0x0b, 
	0x0c, 0x14, 0x16, 0x30, 0x2c, 0x14, 0x15, 0x14, 
	0x25, 0x01, 0x01, 0x00, 0x00, 0x05, 0x03, 0x05, 
	0x25, 0x06, 0x05, 0x03, 0x18, 0x05, 0x06, 0x2a, 
	0x10, 0x00, 0x0f, 0x00, 0x06, 0x0f, 0x11, 0x01, 
	0x31, 0x0b, 0x31, 0x16, 0x1a, 0x14, 0x0e, 0x14, 
	0x10, 0x0b, 0x0b, 0x10, 0x00, 0x05, 0x03, 0x05, 
	0x2a, 0x1b, 0x05, 0x03, 0x01, 0x03, 0x06, 0x20, 
	0x1b, 0x05, 0x0f, 0x05, 0x06, 0x05, 0x01, 0x01, 
	0x04, 0x0b, 0x01, 0x14, 0x15, 0x32, 0x14, 0x33, 
	0x0f, 0x0b, 0x0a, 0x00, 0x07, 0x05, 0x18, 0x05, 
	0x09, 0x1b, 0x05, 0x01, 0x02, 0x03, 0x06, 0x1b, 
	0x24, 0x05, 0x00, 0x11, 0x06, 0x05, 0x05, 0x03, 
	0x0a, 0x01, 0x0c, 0x14, 0x1a, 0x2b, 0x14, 0x14, 
	0x10, 0x02, 0x05, 0x07, 0x00, 0x05, 0x03, 0x05, 
	0x25, 0x1b, 0x05, 0x01, 0x02, 0x01, 0x20, 0x20, 
	0x00, 0x05, 0x0f, 0x0a, 0x06, 0x07, 0x07, 0x04, 
	0x07, 0x02, 0x01, 0x0b, 0x0c, 0x14, 0x0e, 0x33, 
	0x1f, 0x03, 0x0f, 0x18, 0x07, 0x05, 0x08, 0x11, 
	0x25, 0x1f, 0x05, 0x01, 0x08, 0x18, 0x1b, 0x25, 
	0x10, 0x10, 0x1c, 0x01, 0x06, 0x05, 0x0f, 0x01, 
	0x07, 0x03, 0x04, 0x0b, 0x0c, 0x16, 0x1d, 0x33, 
	0x06, 0x0b, 0x05, 0x03, 0x07, 0x00, 0x03, 0x05, 
	0x2e, 0x1b, 0x05, 0x01, 0x0b, 0x02, 0x19, 0x1b, 
	0x05, 0x07, 0x0f, 0x03, 0x1b, 0x05, 0x0f, 0x07, 
	0x07, 0x02, 0x04, 0x1d, 0x16, 0x0b, 0x0b, 0x14, 
	0x1b, 0x14, 0x05, 0x03, 0x11, 0x1c, 0x18, 0x11, 
	0x06, 0x13, 0x05, 0x01, 0x02, 0x03, 0x10, 0x00, 
	0x00, 0x05, 0x07, 0x0f, 0x1b, 0x05, 0x05, 0x11, 
	0x07, 0x0b, 0x04, 0x16, 0x17, 0x01, 0x0b, 0x0c, 
	0x10, 0x01, 0x11, 0x03, 0x11, 0x18, 0x03, 0x01, 
	0x06, 0x10, 0x05, 0x03, 0x01, 0x02, 0x06, 0x1c, 
	0x0f, 0x0a, 0x07, 0x07, 0x1b, 0x07, 0x05, 0x01, 
	0x21, 0x0b, 0x0c, 0x14, 0x14, 0x03, 0x01, 0x0c, 
	
};

Gfx brige_Wood_1_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 brige_Wood_1_ci8_pal_rgba16[] = {
	0x59, 0xcb, 0x72, 0x4d, 0x7a, 0x4d, 0x72, 0x4b, 
	0x6a, 0x4d, 0x6a, 0x0b, 0x49, 0x89, 0x62, 0x0b, 
	0x7a, 0x4b, 0x39, 0x47, 0x6a, 0x0d, 0x7a, 0x8d, 
	0x72, 0x8d, 0x82, 0xcd, 0x8a, 0xcf, 0x61, 0xcb, 
	0x59, 0xc9, 0x6a, 0x4b, 0x31, 0x07, 0x51, 0xcb, 
	0x82, 0xcf, 0x8b, 0x11, 0x7a, 0x8f, 0x7a, 0xcf, 
	0x72, 0x0b, 0x51, 0xc9, 0x72, 0x8f, 0x51, 0x89, 
	0x61, 0xc9, 0x82, 0x8d, 0x49, 0x47, 0x59, 0x89, 
	0x49, 0x49, 0x62, 0x0d, 0x82, 0x8f, 0x93, 0x51, 
	0x51, 0x8b, 0x41, 0x49, 0x69, 0xc9, 0x62, 0x4b, 
	0x41, 0x07, 0x41, 0x47, 0x39, 0x07, 0x8b, 0x0f, 
	0x5a, 0x0b, 0x41, 0x87, 0x41, 0x89, 0x6a, 0x09, 
	0x7a, 0xcd, 0x6a, 0x8d, 0x93, 0x0f, 0x83, 0x0f, 
	
};

Vtx brige_Cube_mesh_layer_1_vtx_0[24] = {
	{{{-5000, -125, 625},0, {560, 816},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5000, 125, 625},0, {432, 816},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5000, 125, -625},0, {432, 176},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5000, -125, -625},0, {560, 176},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5000, -125, -625},0, {560, 3056},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5000, 125, -625},0, {432, 3056},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5000, 125, -625},0, {432, -2064},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5000, -125, -625},0, {560, -2064},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5000, -125, -625},0, {560, 176},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{5000, 125, -625},0, {432, 176},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{5000, 125, 625},0, {432, 816},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{5000, -125, 625},0, {560, 816},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{5000, -125, 625},0, {560, -2064},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5000, 125, 625},0, {432, -2064},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5000, 125, 625},0, {432, 3056},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5000, -125, 625},0, {560, 3056},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5000, -125, -625},0, {176, 3056},{0x0, 0x81, 0x0, 0xFF}}},
	{{{5000, -125, -625},0, {176, -2064},{0x0, 0x81, 0x0, 0xFF}}},
	{{{5000, -125, 625},0, {816, -2064},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5000, -125, 625},0, {816, 3056},{0x0, 0x81, 0x0, 0xFF}}},
	{{{5000, 125, -625},0, {176, -2064},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5000, 125, -625},0, {176, 3056},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5000, 125, 625},0, {816, 3056},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5000, 125, 625},0, {816, -2064},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx brige_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(brige_Cube_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(brige_Cube_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_brige_f3d_material_061[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, brige_Wood_1_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 51),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, brige_Wood_1_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(brige_f3d_material_061_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_brige_f3d_material_061[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx brige_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_brige_f3d_material_061),
	gsSPDisplayList(brige_Cube_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_brige_f3d_material_061),
	gsSPEndDisplayList(),
};

Gfx brige_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

