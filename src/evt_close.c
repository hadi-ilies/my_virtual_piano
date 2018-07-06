/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** evt_close.c
*/

#include "prototype.h"

bool evt_close(sfEvent *event, sfRenderWindow *window)
{
	if (event->type == sfEvtClosed)
		sfRenderWindow_close(window);
	if (event->type == sfEvtKeyPressed && event->key.code == sfKeyEscape)
		return (false);
	return (true);
}
