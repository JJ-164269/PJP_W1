#include <time.h>
#include <stdlib.h>


#include "DisplayFigures.h"
#include "DrawingCases.h"
#include "DestroyFigures.h"




int main(void) {

	//generating random numbers
	srand(time(NULL));
	int array1[500] = { 0 };
	for (int i = 0; i < 500; i++) {
		array1[i] = rand() % 7 + 1;
	}

	//variables
	int width = 580;
	int height = 680;
	int FPS = 60;
	int a = 0;


	bool done = false;
	bool ruch = false;
	bool down = false;

	//allegro variable

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_BITMAP *plansza = NULL;
	//ALLEGRO_BITMAP *block_full = NULL;
	ALLEGRO_TIMER *timer = NULL;

	
	plansza = al_load_bitmap("plansza1.bmp");

	al_init();
	if (!al_init())
		return -1;
	display = al_create_display(width, height);
	if (!display)
		return -1;

	al_init_primitives_addon();
	al_init_image_addon();
	al_install_keyboard();


	event_queue = al_create_event_queue();
	timer = al_create_timer(30.0 / FPS);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));


	al_clear_to_color(al_map_rgb(0, 0, 50));
	plansza = al_load_bitmap("plansza1.bmp");
	al_draw_bitmap(plansza, 20, 20, 0);
	al_draw_rectangle(16, 16, 344, 664, al_map_rgb(190, 190, 190), 4);
	al_draw_rectangle(366, 432, 564, 664, al_map_rgb(190, 190, 190), 4);
	Display_Section(array1[a]);
	al_flip_display();

	al_start_timer(timer);

	//block_full = al_load_bitmap("full.bmp");

	while (!done) {

		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (ev.keyboard.keycode) {
			case ALLEGRO_KEY_DOWN:
				if (y1 < 15 && array1[a] == 2) {
					y1 += 2;
					break;
				}
				else if (y1 < 17) {
					y1 += 2;
					break;
				}
				
				break;
			//case ALLEGRO_KEY_UP:
			case ALLEGRO_KEY_RIGHT:
				if (x1 < 8 && (array1[a] == 1 || array1[a] == 3 || array1[a] == 5)) {
					x1 += 1;
					break;
				}
				else if (x1 < 9 && array1[a] == 2) {
					x1 += 1;
					break;
				}
				else if (x1 < 7 && (array1[a] == 4 || array1[a] == 6 || array1[a] == 7)) {
					x1 += 1;
					break;
				}
				break;
			case ALLEGRO_KEY_LEFT:
				if (x1 > 0 && (array1[a] == 1 || array1[a] == 2 || array1[a] == 4 || array1[a] == 6 || array1[a] == 7)) {
					x1 -= 1;
					break;
				}
				else if (x1 > 1 && (array1[a] == 3 || array1[a] == 5)) {
					x1 -= 1;
					break;
				}
				break;
			case ALLEGRO_KEY_ENTER:
				ruch = true;
				a++;
				break;
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			}
		}

		if (ev.type == ALLEGRO_EVENT_TIMER) {

				if (array1[a] == 1 || array1[a] == 3 || array1[a] == 4 || array1[a] == 5 || array1[a] == 6 || array1[a] == 7) {
					if (y1 > 17) {
						down = true;
						a++;
						x1 = 4;
						y1 = 0;
						Draw_Case(array1[a]);
						// zmieniam na 8 
						// rysuje to co jest 8 
						for (int i = 0; i < 10; i++) {
							for (int j = 18; j < 20; j++) {
									map[i][j] == FULL;
									//al_draw_bitmap(block_full, i * 32 + 20, j * 32 + 20, 0);
							}
						}
					}
					else {
						down = false;
					}
				}
				else if (array1[a] == 2) {
					if (y1 > 15) {
						down =  true;
						a++;
						Draw_Case(array1[a]);
						for (int i = 0; i < 10; i++) {
							for (int j = 18; j < 20; j++) {
								map[i][j] == FULL;
								//al_draw_bitmap(block_full, i * 32 + 20, j * 32 + 20, 0);
							}
						}
					}
					else {
						down = false;
						
					}

				}
				if (!down) {
					y1 += 1;
				}
				
		}
		
		
		if (!ruch)
		{

			al_clear_to_color(al_map_rgb(0, 0, 50));
			
			al_draw_bitmap(plansza, 20, 20, 0);
			al_draw_rectangle(16, 16, 344, 664, al_map_rgb(190, 190, 190), 4);
			al_draw_rectangle(366, 432, 564, 664, al_map_rgb(190, 190, 190), 4);

			Draw_Case(array1[a]);
			//Destroy_Section(array1[a]);
			Display_Section(array1[1 + a]);

			al_flip_display();


		}
		ruch = false;

	}

	al_destroy_event_queue(event_queue);
	al_destroy_display(display);
	al_destroy_bitmap(plansza);
	al_destroy_timer(timer);

	
	return 0;

}