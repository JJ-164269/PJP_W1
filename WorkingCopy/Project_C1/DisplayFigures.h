#ifndef DisplayFigure_h
#define DisplayFigures_h

#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_native_dialog.h>


void Display_Section(int d){

	ALLEGRO_BITMAP *display_section1 = NULL;
	ALLEGRO_BITMAP *display_section2 = NULL;
	ALLEGRO_BITMAP *display_section3 = NULL;
	ALLEGRO_BITMAP *display_section4 = NULL;
	ALLEGRO_BITMAP *display_section5 = NULL;
	ALLEGRO_BITMAP *display_section6 = NULL;
	ALLEGRO_BITMAP *display_section7 = NULL;


	display_section1 = al_load_bitmap("display_section1.bmp");
	display_section2 = al_load_bitmap("display_section2.bmp");
	display_section3 = al_load_bitmap("display_section3.bmp");
	display_section4 = al_load_bitmap("display_section4.bmp");
	display_section5 = al_load_bitmap("display_section5.bmp");
	display_section6 = al_load_bitmap("display_section6.bmp");
	display_section7 = al_load_bitmap("display_section7.bmp");


	if (d == 1) {
		al_draw_bitmap(display_section1, 370, 436, 0);
	}
	else if (d == 2) {
		al_draw_bitmap(display_section2, 370, 436, 0);
	}
	else if (d == 3) {
		al_draw_bitmap(display_section3, 370, 436, 0);
	}
	else if (d == 4) {
		al_draw_bitmap(display_section4, 370, 436, 0);
	}
	else if (d == 5) {
		al_draw_bitmap(display_section5, 370, 436, 0);
	}
	else if (d == 6) {
		al_draw_bitmap(display_section6, 370, 436, 0);
	}
	else if (d == 7) {
		al_draw_bitmap(display_section7, 370, 436, 0);
	}
}

#endif