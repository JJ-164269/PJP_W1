#ifndef DrawingCases_h
#define DrawingCases_h

int start_x = 148;
int start_y = 20;
int c;

void Draw_Case(int c) {
	if (c == 1) {
		al_draw_filled_rectangle(start_x, start_y, start_x + 32, start_y + 32, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x + 32, start_y, start_x + 64, start_y + 32, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x, start_y + 32, start_x + 32, start_y + 64, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x + 32, start_y + 32, start_x + 64, start_y + 64, al_map_rgb(255, 0, 0));
	}
	else if (c == 2) {
		al_draw_filled_rectangle(start_x - 96, start_y, start_x - 64, start_y + 32, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x - 96, start_y + 32, start_x - 64, start_y + 64, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x - 96, start_y + 64, start_x - 64, start_y + 96, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x - 96, start_y + 96, start_x - 64, start_y + 128, al_map_rgb(255, 255, 0));
	}
	else if (c == 3) {
		al_draw_filled_rectangle(start_x, start_y + 96, start_x + 32, start_y + 128, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x + 32, start_y + 96, start_x + 64, start_y + 128, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x - 32, start_y + 128, start_x, start_y + 160, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x, start_y + 128, start_x + 32, start_y + 160, al_map_rgb(0, 128, 0));
	}
	else if (c == 4) {
		al_draw_filled_rectangle(start_x, start_y + 192, start_x + 32, start_y + 224, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x + 32, start_y + 192, start_x + 64, start_y + 224, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x + 32, start_y + 224, start_x + 64, start_y + 256, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x + 64, start_y + 224, start_x + 96, start_y + 256, al_map_rgb(0, 0, 128));
	}
	else if (c == 5) {
		al_draw_filled_rectangle(start_x, start_y + 288, start_x + 32, start_y + 320, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x - 32, start_y + 320, start_x, start_y + 352, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x, start_y + 320, start_x + 32, start_y + 352, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x + 32, start_y + 320, start_x + 64, start_y + 352, al_map_rgb(128, 0, 128));
	}
	else if (c == 6) {
		al_draw_filled_rectangle(start_x, start_y + 384, start_x + 32, start_y + 416, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x + 32, start_y + 384, start_x + 64, start_y + 416, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x + 64, start_y + 384, start_x + 96, start_y + 416, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x + 64, start_y + 416, start_x + 96, start_y + 448, al_map_rgb(255, 140, 0));
	}
	else if (c == 7) {
		al_draw_filled_rectangle(start_x, start_y + 480, start_x + 32, start_y + 512, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x + 32, start_y + 480, start_x + 64, start_y + 512, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x + 64, start_y + 480, start_x + 96, start_y + 512, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x, start_y + 512, start_x + 32, start_y + 544, al_map_rgb(199, 21, 133));
	}
}

#endif