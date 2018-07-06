/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "prototype.h"
#include "piano.h"

/* retry functiun
 * sffg
 * dgtgt
 * fgfdgt
*/

/*retry function*/
/*
void display_partition(sfRenderWindow *window, piano_t *piano)
{
	const size_t x = 0;
	size_t y = 0;
	static clock_t clk_s = -1;
	const size_t temp = 50000;

	for (size_t i = 0; i < piano->nb_notes;) {
		if (clock() > clk_s + temp * (piano->nb_notes - 1)) {
			sfText_setPosition(piano->text[i], V2F(100, y));
			sfRenderWindow_drawText(window, piano->text[i], NULL);
			y += 10;
			if (y > 100) {
				i++;
				y = 0;
			}
		}
	}
}
*/
