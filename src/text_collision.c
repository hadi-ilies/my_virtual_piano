/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** textcolision.c
*/

#include <stdbool.h>
#include "prototype.h"
#include "piano.h"

bool text_collision(piano_t *piano)
{
	for (size_t i = 0; i < BLACK_NOTES; i++) {
		for (size_t j = 0; j < piano->nb_notes; j++)
			if (hit_point_rec(&(sfVector2i){(int)piano->text[j].x, (int)piano->text[j].y},
					  piano->black_touch[i]) == true) {
				sfMusic_play(piano->black_notes[i]);
				sfRectangleShape_setFillColor(piano->black_touch[i], sfBlue);
				return (false);
			}
	} for (size_t i = 0; i < WHITE_NOTES; i++) {
		for (size_t j = 0; j < piano->nb_notes; j++)
			if (hit_point_rec(&(sfVector2i) {(int)piano->text[j].x, (int)piano->text[j].y},
					  piano->white_touch[i]) == true) {
				sfMusic_play(piano->white_notes[i]);
				sfRectangleShape_setFillColor(piano->white_touch[i], sfGreen);
				return (false);
		}
	}
	return (true);
}
