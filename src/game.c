/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include "prototype.h"
#include "piano.h"

const char *str_g = "azertyuiopqsdfghjklmwxcvbnpoiuytrezaqsdfghjklAZERTYUIOPQSDFGHJKLMNBVCXWaPErPsdERTYyRZtYUEZeRYOYUREZzrjfyAjdue4651rie98";//tmp

static bool create_background(sfSprite *back, sfTexture *texture)
{
	if (!back)
		return (false);
	texture = sfTexture_createFromFile(BACKGROUND, NULL);
	if (!texture)
		return (false);
	sfSprite_setTexture(back, texture, sfTrue);
	return (true);
}

static void display_game(sfRenderWindow *window, sfSprite *back, piano_t *piano)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, back, NULL);
	for (size_t i = 0; i < WHITE_NOTES; i++)
		sfRenderWindow_drawRectangleShape(window, piano->white_touch[i], NULL);
	for (size_t i = 0; i < BLACK_NOTES; i++)
		sfRenderWindow_drawRectangleShape(window, piano->black_touch[i], NULL);
	display_partition(window, piano);
	sfRenderWindow_display(window);
	for (size_t i = 0; i < BLACK_NOTES; i++)
		sfRectangleShape_setFillColor(piano->black_touch[i], sfBlack);
	for (size_t i = 0; i < WHITE_NOTES; i++)
		sfRectangleShape_setFillColor(piano->white_touch[i], sfWhite);
}

void game(sfRenderWindow *window)
{
	sfEvent event;
	sfSprite *back = sfSprite_create();
	sfTexture *texture = NULL;
	piano_t piano = create_piano(str_g);//tmp

	if (create_background(back, texture) == false)
		return;
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (!evt_close(&event, window))
				return; /*must free*/
			collision_piano(&piano, window, &event);
		}
		insert_partition(&piano);//tmp
		display_game(window, back, &piano);
	}
	destroy_game(back, texture, window, &piano);
}
