/*
** EPITECH PROJECT, 2017
** my_cook
** File description:
** hit_functions.c
*/

#include "prototype.h"

bool hit_point_rect(sfVector2i *point, sfFloatRect *rect)
{
	int nb = 0;

	point->x >= rect->left ? nb++ : 0;
	point->y >= rect->top ? nb++ : 0;
	point->x < rect->left + rect->width ? nb++ : 0;
	point->y < rect->top + rect->height ? nb++ : 0;
	return (nb == 4 ? true : false);
}

bool hit_point_rec(sfVector2i *point, sfRectangleShape *rec)
{
	sfFloatRect rect = sfRectangleShape_getGlobalBounds(rec);

	return (hit_point_rect(point, &rect));
}
