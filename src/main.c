/*
** PERSONAL PROJECT, 2017
** for_norme
** File description:
** main.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "prototype.h"

int main(void)
{
	sfRenderWindow *window = window_create();

	if (!window)
		return (84);
	//sfRenderWindow_destroy(window);
	return (menu(window));
}
