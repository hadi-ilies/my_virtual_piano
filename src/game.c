/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include "prototype.h"
#include "piano.h"

const char *str_g;

bool create_background(sfSprite *back, sfTexture *texture, char *img)
{
	if (!back)
		return (false);
	texture = sfTexture_createFromFile(img, NULL);
	if (!texture)
		return (false);
	sfSprite_setTexture(back, texture, sfTrue);
	return (true);
}

static void display_game(sfRenderWindow *window, sfSprite *back, piano_t *piano, bool game)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, back, NULL);
	for (size_t i = 0; i < WHITE_NOTES; i++)
		sfRenderWindow_drawRectangleShape(window, piano->white_touch[i], NULL);
	for (size_t i = 0; i < BLACK_NOTES; i++)
		sfRenderWindow_drawRectangleShape(window, piano->black_touch[i], NULL);
	if (game == true)
		display_partition_game(window, piano);
	else
		display_partition(window, piano);
	sfRenderWindow_display(window);
	for (size_t i = 0; i < BLACK_NOTES; i++)
		sfRectangleShape_setFillColor(piano->black_touch[i], sfBlack);
	for (size_t i = 0; i < WHITE_NOTES; i++)
		sfRectangleShape_setFillColor(piano->white_touch[i], sfWhite);
}

void game(sfRenderWindow *window, size_t music, bool game)
{
	str_g = music_g[music];//must do that in menu
	sfEvent event;
	sfSprite *back = sfSprite_create();
	sfTexture *texture = NULL;
	piano_t piano = create_piano(str_g);//tmp

	if (create_background(back, texture, BACKGROUND) == false)
		return;
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (!evt_close(&event, window)) {
				destroy_game(back, texture, &piano);
				return;
			}
			collision_piano(&piano, window, &event);
		}
		insert_partition(&piano);//tmp
		display_game(window, back, &piano, game);
	}
	destroy_game(back, texture, &piano);
}
