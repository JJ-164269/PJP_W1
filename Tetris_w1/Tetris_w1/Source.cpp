#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_native_dialog.h>
#include "DrawingCases.h"



int main(void) {

	//variables
	int width = 580;
	int height = 680;
	int FPS = 60;
	
	//int i;
	bool done = false;

	//allegro variable

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_BITMAP *plansza = NULL; 

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

	al_register_event_source(event_queue, al_get_keyboard_event_source());

	while (!done) {
		al_clear_to_color(al_map_rgb(0, 0, 50));
		plansza = al_load_bitmap("plansza1.bmp");
		al_draw_bitmap(plansza, 20, 20, 0);
		al_draw_rectangle(16, 16, 344, 664, al_map_rgb(190, 190, 190), 4);
		/*al_draw_filled_rectangle(20, 20, 340, 660, al_map_rgb(0, 0, 0));
		al_draw_rectangle(20, 20, 340, 660, al_map_rgb(190, 190, 190), 4);
		for (i = 0; i < 320; i += 32) {
			al_draw_line(52 + i, 20, 52 + i, 660, al_map_rgb(255, 250, 250), 1);
		}
		for (i = 0; i < 640; i += 32) {
			al_draw_line(20, 52 + i, 340, 52 + i, al_map_rgb(255, 250, 250), 1);
		}*/


		///SQUARE - case number 1
		Draw_Case(1);
		///LINE - case number 2
		Draw_Case(2);
		///S-SHAPE - case number 3
		Draw_Case(3);
		///Z-SHAPE - case number 4
		Draw_Case(4);
		///TRIANGLE_LIKE - case number 5
		Draw_Case(5);
		///REVERSED_L - case number 6
		Draw_Case(6);
		///L - case number 7
		Draw_Case(7);


		al_flip_display();
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE && ev.type == ALLEGRO_EVENT_KEY_UP)
			done = true;
		else if (ev.keyboard.keycode == ALLEGRO_KEY_SPACE && ev.type == ALLEGRO_EVENT_KEY_UP) {
			start_y +=32;
		}
		else if (ev.keyboard.keycode == ALLEGRO_KEY_ENTER && ev.type == ALLEGRO_EVENT_KEY_UP) {
			start_x +=32;
		}

	}

	al_destroy_event_queue(event_queue);
	al_destroy_display(display);
	al_destroy_bitmap(plansza);

	return 0;

}