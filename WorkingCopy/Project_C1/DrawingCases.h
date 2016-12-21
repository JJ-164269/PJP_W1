#ifndef DrawingCases_h
#define DrawingCases_h

//int start_x = 148;
//int start_y = 20;
//x1=(start_x-20)/32
//y1=(start_y-20)/32
int x1 = 4;
int y1 = 0;

int c;

ALLEGRO_BITMAP *block1 = NULL;
ALLEGRO_BITMAP *block2 = NULL;
ALLEGRO_BITMAP *block3 = NULL;
ALLEGRO_BITMAP *block4 = NULL;
ALLEGRO_BITMAP *block5 = NULL;
ALLEGRO_BITMAP *block6 = NULL;
ALLEGRO_BITMAP *block7 = NULL;
ALLEGRO_BITMAP *block_full = NULL;
ALLEGRO_BITMAP *empty = NULL;



#define MOVING 1
#define FREE 0
#define FULL 2

int map[10][20] = { FREE };


void Draw_Case(int c) {

	empty = al_load_bitmap("empty.bmp");

	block1 = al_load_bitmap("1.bmp");
	block2 = al_load_bitmap("2.bmp");
	block3 = al_load_bitmap("3.bmp");
	block4 = al_load_bitmap("4.bmp");
	block5 = al_load_bitmap("5.bmp");
	block6 = al_load_bitmap("6.bmp");
	block7 = al_load_bitmap("7.bmp");
	block_full = al_load_bitmap("full.bmp");
	


	if (c == 1) {
		
		map[x1][y1] = MOVING;
		map[x1+1][y1] = MOVING;
		map[x1][y1+1] = MOVING;
		map[x1+1][y1+1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block1, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;	
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 18; j < 20; j++) {
				if (map[i][j] == MOVING) {
					map[i][j] == FULL;
					al_draw_bitmap(block_full, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		

	}
	else if (c == 2) {
		map[x1][y1] = MOVING;
		map[x1][y1+1] = MOVING;
		map[x1][y1+2] = MOVING;
		map[x1][y1+3] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block2, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;
				
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		
	}
	else if (c == 3) {
		map[x1][y1] = MOVING;
		map[x1+1][y1] = MOVING;
		map[x1-1][y1+1] = MOVING;
		map[x1][y1+1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block3, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;
				
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		
	}
	else if (c == 4) {
		map[x1][y1] = MOVING;
		map[x1 + 1][y1] = MOVING;
		map[x1 + 1][y1 + 1] = MOVING;
		map[x1 + 2][y1 + 1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block4, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;

			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
	
	}

	else if (c == 5) {
		map[x1][y1] = MOVING;
		map[x1 - 1][y1 + 1] = MOVING;
		map[x1][y1 + 1] = MOVING;
		map[x1 + 1][y1 + 1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block5, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;
				
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		
	}
	else if (c == 6) {
		map[x1][y1] = MOVING;
		map[x1 + 1][y1] = MOVING;
		map[x1 + 2][y1] = MOVING;
		map[x1 + 2][y1 + 1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block6, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;
				
			}
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
		
	}
	else if (c == 7) {
		map[x1][y1] = MOVING;
		map[x1 + 1][y1] = MOVING;
		map[x1 + 2][y1] = MOVING;
		map[x1][y1+1] = MOVING;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] == MOVING) {
					al_draw_bitmap(block7, i * 32 + 20, j * 32 + 20, 0);
				}
				map[i][j - 1] == FREE;
			}
		}
		
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (map[i][j] = FREE) {
					al_draw_bitmap(empty, i * 32 + 20, j * 32 + 20, 0);
				}
			}
		}
	}
	
}

#endif
