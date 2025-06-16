void scroll_hmc_dl_Level_Mesh_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 26;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Level_Mesh_mesh_layer_5_vtx_0);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_hmc_dl_Level_Mesh_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 36;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Level_Mesh_mesh_layer_5_vtx_1);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;
	deltaY = (int)(-0.10000000149011612 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_hmc_dl_Level_Mesh_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Level_Mesh_mesh_layer_1_vtx_2);

	deltaX = (int)(-0.5 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_hmc_dl_Level_Mesh_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 130;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Level_Mesh_mesh_layer_1_vtx_4);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;
	deltaY = (int)(-0.10000000149011612 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_hmc() {
	scroll_hmc_dl_Level_Mesh_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Level_Mesh_mesh_layer_5_vtx_1();
	scroll_hmc_dl_Level_Mesh_mesh_layer_1_vtx_2();
	scroll_hmc_dl_Level_Mesh_mesh_layer_1_vtx_4();
};
