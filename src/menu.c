/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** menu.c
*/

#include <stdlib.h>
#include "prototype.h"
#include "menu.h"

/* iam too lazy so i wont make a menu */
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

	if (create_background(back, texture, BACK_MENU) == false)
		return (84);
	while (sfRenderWindow_isOpen(window)) {
		sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);

		while (sfRenderWindow_pollEvent(window, &event)) {
			if (!evt_close(&event, window))
				return (0); /*must free*/
			if (event.type == sfEvtMouseButtonPressed
			&& hit_point_rec(&mouse_position, menu.button[0]))
				game(window, 0, true); // seconde parameter must be conf
			if (event.type == sfEvtMouseButtonPressed
			&& hit_point_rec(&mouse_position, menu.button[1]))
				 game(window, 4, false);
		}
		display_menu(window, back, &menu);
	}
	return (0);
}
