#ifndef DisplayFigure_h
#define DisplayFigures_h

int start_x1 = 422;
int start_y1 = 480;
int d;

void Display_Case(int d) {
	//ALLEGRO_BITMAP *display_section = NULL;
	//display_section = al_load_bitmap("display_section.bmp");
	//al_set_target_bitmap( display_section);
	if (d == 1) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x1 + 32, start_y1, start_x1 + 64, start_y1 + 32, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x1, start_y1 + 32, start_x1 + 32, start_y1 + 64, al_map_rgb(255, 0, 0));
		al_draw_filled_rectangle(start_x1 + 32, start_y1 + 32, start_x1 + 64, start_y1 + 64, al_map_rgb(255, 0, 0));
	}
	else if (d == 2) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x1, start_y1 + 32, start_x1 + 32, start_y1 + 64, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x1, start_y1 + 64, start_x1 + 32, start_y1 + 96, al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(start_x1, start_y1 + 96, start_x1 + 32, start_y1 + 128, al_map_rgb(255, 255, 0));
	}
	else if (d == 3) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x1 + 32, start_y1, start_x1 + 64, start_y1 + 32, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x1 - 32, start_y1 + 32, start_x1, start_y1 + 64, al_map_rgb(0, 128, 0));
		al_draw_filled_rectangle(start_x1, start_y1 + 32, start_x1 + 32, start_y1 + 64, al_map_rgb(0, 128, 0));
	}
	else if (d == 4) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x1 + 32, start_y1, start_x1 + 64, start_y1 + 32, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x1 + 32, start_y1 + 32, start_x1 + 64, start_y1 + 64, al_map_rgb(0, 0, 128));
		al_draw_filled_rectangle(start_x1 + 64, start_y1 + 32, start_x1 + 96, start_y1 + 64, al_map_rgb(0, 0, 128));
	}
	else if (d == 5) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x1 - 32, start_y1 + 32, start_x1, start_y1 + 64, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x1, start_y1 + 32, start_x1 + 32, start_y1 + 64, al_map_rgb(128, 0, 128));
		al_draw_filled_rectangle(start_x1 + 32, start_y1 + 32, start_x1 + 64, start_y1 + 64, al_map_rgb(128, 0, 128));
	}
	else if (d == 6) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x1 + 32, start_y1, start_x1 + 64, start_y1 + 32, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x1 + 64, start_y1, start_x1 + 96, start_y1 + 32, al_map_rgb(255, 140, 0));
		al_draw_filled_rectangle(start_x1 + 64, start_y1 + 32, start_x1 + 96, start_y1 + 64, al_map_rgb(255, 140, 0));
	}
	else if (d == 7) {
		al_draw_filled_rectangle(start_x1, start_y1, start_x1 + 32, start_y1 + 32, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x1 + 32, start_y1, start_x1 + 64, start_y1 + 32, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x1 + 64, start_y1, start_x1 + 96, start_y1 + 32, al_map_rgb(199, 21, 133));
		al_draw_filled_rectangle(start_x1, start_y1 + 32, start_x1 + 32, start_y1 + 64, al_map_rgb(199, 21, 133));
	}
}

#endif