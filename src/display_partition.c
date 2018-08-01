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

/*
 * use array struct place static
 * struct {
 pos_x
 pos_y
 sftext
}
for each letter
*/

void display_partition(sfRenderWindow *window, piano_t *piano)
{
	const size_t x = 0;
	static size_t y = 0;
	static size_t i = 0;
	static clock_t clk_s = -1;
	const size_t temp = 50000;

	for (size_t i = 0; i < piano->nb_notes; i++)
		sfRenderWindow_drawText(window, piano->text[i].text, NULL);
	if (clock() > clk_s + temp * (1)) {
		printf("i = %d\n", i);
		sfText_setPosition(piano->text[i].text, V2F(100, y));
		y += 10;
		if (y > 1000) { //check position letter
			printf("y = %d\n", y);
			i++;
			y = 0;
		}
		clk_s = clock();
	}
}
