#include <time.h>
#include <stdlib.h>

#include "DisplayFigures.h"
#include "DrawingCases.h"
#include "DestroyFigures.h"

/// jak sprawi� by figura kt�ra opad�a do do�u ni porusza�a si� ju� jak bd sterowa� koljn�;
/// mo�e 7 r�nych par x i y
/// ale co jak kolejny element o tym samym kszta�cie bd u�yty ???
/// zrobie macierz 0/1 ; 1 je�li tam co� jest 
/// jak usuwa� �eby wiersz 

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

	//allegro variable

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_BITMAP *plansza = NULL;
	ALLEGRO_TIMER *timer = NULL;

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

	while (!done) {
		
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE && ev.type == ALLEGRO_EVENT_KEY_UP) {
			done = true;
			break;
		}
		
		
		if (ev.keyboard.keycode == ALLEGRO_KEY_ENTER && ev.type == ALLEGRO_EVENT_KEY_UP) {
			
			 ruch = true;
			 a++;
		}

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			if (array1[a] == 1 || array1[a] == 3 || array1[a] == 4 || array1[a] == 5 || array1[a] == 6 || array1[a] == 7) {
				if (start_y <= 564) {
					start_y += 32;
				}
			}
			else if (array1[a] == 2) {
				if (start_y <= 500) {
					start_y += 32;
				}
			}

		}
		
		if (!ruch)
		{
			
			al_clear_to_color(al_map_rgb(0, 0, 50));
			plansza = al_load_bitmap("plansza1.bmp");
			al_draw_bitmap(plansza, 20, 20, 0);
			al_draw_rectangle(16, 16, 344, 664, al_map_rgb(190, 190, 190), 4);
			al_draw_rectangle(366, 432, 564, 664, al_map_rgb(190, 190, 190), 4);

			Draw_Case(array1[a]);
			Destroy_Section(array1[a]);
			Display_Section(array1[1 + a]);
			al_flip_display();
			//al_rest(1);
			

		}
		
		ruch = false;
	
		
		//al_flip_display();
	}

	al_destroy_event_queue(event_queue);
	al_destroy_display(display);
	al_destroy_bitmap(plansza);
	al_destroy_timer(timer);

	return 0;

}