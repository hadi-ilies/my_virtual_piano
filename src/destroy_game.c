/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include "prototype.h"
#include "piano.h"

static void destroy_background(sfSprite *back, sfTexture *texture)
{
	sfSprite_destroy(back);
	sfTexture_destroy(texture);
}

void destroy_game(sfSprite *back, sfTexture *texture,
		sfRenderWindow *window, piano_t *piano)
{
	destroy_background(back, texture);
	sfRenderWindow_destroy(window);
	for (size_t i = 0; i < WHITE_NOTES; i++) {
		sfMusic_destroy(piano->white_notes[i]);
		sfRectangleShape_destroy(piano->white_touch[i]);
	} for (size_t i = 0; i < BLACK_NOTES; i++) {
		sfMusic_destroy(piano->black_notes[i]);
		sfRectangleShape_destroy(piano->black_touch[i]);
	}
}
