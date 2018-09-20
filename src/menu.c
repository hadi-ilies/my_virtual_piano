/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** menu.c
*/

#include <stdlib.h>
#include "prototype.h"
#include "menu.h"

void display_menu(sfRenderWindow *window, sfSprite *back, menu_t *menu)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, back, NULL);
	for (size_t i = 0; i < NB_BUTTON; i++)
		sfRenderWindow_drawRectangleShape(window, menu->button[i], NULL);
	sfRenderWindow_display(window);
}

size_t menu(sfRenderWindow *window)
{
	sfEvent event;
	sfSprite *back = sfSprite_create();
	sfTexture *texture = NULL;
	menu_t menu = menu_create();
	int music = -1;

	if (create_background(back, texture, BACK_MENU) == false)
		return (84);
	while (sfRenderWindow_isOpen(window)) {
		sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);

		while (sfRenderWindow_pollEvent(window, &event)) {
			if (!evt_close(&event, window)) {
				destroy_menu(window, back, texture, &menu);
				return (0);
			} if (event.type == sfEvtMouseButtonPressed
			&& hit_point_rec(&mouse_position, menu.button[0]))
				music = choose_music(window);
			if (event.type == sfEvtMouseButtonPressed
			    && hit_point_rec(&mouse_position, menu.button[1]) && music > -1)
				game(window, (size_t) music, true);
			if (event.type == sfEvtMouseButtonPressed
			&& hit_point_rec(&mouse_position, menu.button[2]) && music > -1)
				 game(window,(size_t) music, false);
		}
		display_menu(window, back, &menu);
	}
	return (0);
}
