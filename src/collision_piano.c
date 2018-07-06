/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include "prototype.h"
#include "piano.h"

static bool mouse_collision(piano_t *piano, sfEvent *event, sfVector2i *mouse)
{
	if (event->type == sfEvtMouseButtonPressed) {
		for (size_t i = 0; i < BLACK_NOTES; i++) {
			if (hit_point_rec(mouse, piano->black_touch[i]) == true) {
				sfMusic_play(piano->black_notes[i]);
				sfRectangleShape_setFillColor(piano->black_touch[i], sfBlue);
				return (false);
			}
		} for (size_t i = 0; i < WHITE_NOTES; i++) {
			if (hit_point_rec(mouse, piano->white_touch[i]) == true) {
				sfMusic_play(piano->white_notes[i]);
				sfRectangleShape_setFillColor(piano->white_touch[i], sfGreen);
				return (false);
			}
		}
	}
	return (true);
}

void collision_piano(piano_t *piano, sfRenderWindow *window,
		     sfEvent *event)
{
	sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

	if (mouse_collision(piano, event, &mouse) == false)
		return;
	if (key_collision(piano, event) == false)
		return;
}
