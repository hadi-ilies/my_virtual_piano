/*
** PERSONAL PROJECT, 2017
** for_norme
** File description:
** create_window
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "prototype.h"

sfRenderWindow *window_create(void)
{
	sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_BITS_PER_PIXEL};
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, WINDOW_NAME, WINDOW_PARAMS, NULL);
	if (window == NULL)
		return (NULL);
	sfRenderWindow_setFramerateLimit(window, FRAMERATE_LIMIT);
	return (window);
}
