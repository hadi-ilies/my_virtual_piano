/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** destroy_menu.c
*/

#include "menu.h"

void destroy_menu(sfRenderWindow *window, sfSprite *back,
		sfTexture *texture, menu_t *menu)
{
	sfSprite_destroy(back);
	sfTexture_destroy(texture);
	for (size_t i = 0; i < NB_BUTTON; i++) {
		sfRectangleShape_destroy(menu->button[i]);
		sfTexture_destroy(menu->texture_button[i]);
	}
	sfRenderWindow_destroy(window);
}
