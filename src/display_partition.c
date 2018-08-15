/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "prototype.h"
#include "piano.h"

void display_partition(sfRenderWindow *window, piano_t *piano)
{
	static size_t i = 0;
	static clock_t clk_s = -1;
	const size_t temp = 50; //up => slowly, low => fastest

	for (size_t i = 0; i < piano->nb_notes; i++) {
		sfText_setPosition(piano->text[i].text, V2F(piano->text[i].x, piano->text[i].y));
		sfRenderWindow_drawText(window, piano->text[i].text, NULL);
	}
	printf("i = %ld\n", i);
	sfText_setPosition(piano->text[i].text, V2F(piano->text[i].x, piano->text[i].y));
	piano->text[i].y += 100; //speed music
	if (text_collision(piano) == false) {
		for (size_t j = 0; j < WHITE_NOTES; j++)
			sfRenderWindow_drawRectangleShape(window, piano->white_touch[j], NULL);
		for (size_t j = 0; j < BLACK_NOTES; j++)
			sfRenderWindow_drawRectangleShape(window, piano->black_touch[j], NULL);
		sfRenderWindow_display(window);
		piano->text[i].y = 0;
		i++;
	}
	clk_s = clock();
}

void display_partition_game(sfRenderWindow *window, piano_t *piano)
{
	static size_t i = 0;
	static clock_t clk_s = -1;
	const size_t temp = 5000;

	for (size_t i = 0; i < piano->nb_notes; i++) {
		sfText_setPosition(piano->text[i].text, V2F(piano->text[i].x, piano->text[i].y));
		sfRenderWindow_drawText(window, piano->text[i].text, NULL);
	} if (clock() > clk_s + temp) {
		sfText_setPosition(piano->text[i].text, V2F(piano->text[i].x, piano->text[i].y));
		piano->text[i].y += 20; //speed music
		if (text_collision(piano) == false) {
			for (size_t j = 0; j < WHITE_NOTES; j++)
				sfRenderWindow_drawRectangleShape(window, piano->white_touch[j], NULL);
			for (size_t j = 0; j < BLACK_NOTES; j++)
				sfRenderWindow_drawRectangleShape(window, piano->black_touch[j], NULL);
			sfRenderWindow_display(window);
			piano->text[i].y = 0;
			i++;
		}
		clk_s = clock();
	}
}
