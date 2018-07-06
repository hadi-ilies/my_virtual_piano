/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "prototype.h"
#include "piano.h"
#include "solfege.h"

/*must be "responsive"*/
bool create_whitetouch(sfRectangleShape *white_touch[WHITE_NOTES])
{
	size_t x = 50;

	for (size_t i = 0; i < WHITE_NOTES; i++) {
		white_touch[i] = sfRectangleShape_create();
		if (white_touch[i] == NULL)
			return (false);
		sfRectangleShape_setFillColor(white_touch[i], sfWhite);
		sfRectangleShape_setOutlineThickness(white_touch[i], 2);
		sfRectangleShape_setOutlineColor(white_touch[i], sfBlack);
		sfRectangleShape_setSize(white_touch[i], V2F(50, 280));//window - 800
		sfRectangleShape_setPosition(white_touch[i], V2F(x, 800));
		x += 50;
	}
	return (true);
}

/*must be "responsive"*/
bool create_blacktouch(sfRectangleShape *black_touch[BLACK_NOTES])
{
	size_t x = 110;
	size_t tmp = 1;
	size_t tmp2 = 1;

	for (size_t i = 0; i < BLACK_NOTES; i++) {
		black_touch[i] = sfRectangleShape_create();
		if (black_touch[i] == NULL)
			return (false);
		sfRectangleShape_setFillColor(black_touch[i], sfBlack);
		sfRectangleShape_setOutlineThickness(black_touch[i], 2);
		sfRectangleShape_setOutlineColor(black_touch[i], sfBlack);
		sfRectangleShape_setSize(black_touch[i], V2F(20, 100)); // white - window
		sfRectangleShape_setOrigin(black_touch[i], V2F(20, 0));
		sfRectangleShape_setPosition(black_touch[i], V2F(x, 800));
		if (tmp == 2 || tmp2 % 5 == 0) {
			tmp2 % 5 == 0 ? tmp = 0 : 0;
			x += 100;
		} else
			x += 50;
		tmp++;
		tmp2++;
	}
	return (true);
}

piano_t create_piano(const char *partition)
{
	piano_t piano;

	solfege_white_part_one(piano.white_notes);
	solfege_white_part_two(piano.white_notes);
	solfege_black_part_one(piano.black_notes);
	solfege_black_part_two(piano.black_notes);
	if (checkerror_whitenotes(piano.white_notes) == false
	|| checkerror_blacknotes(piano.black_notes) == false)
		exit(84);
	if (create_whitetouch(piano.white_touch) == false
	|| create_blacktouch(piano.black_touch) == false)
		exit(84);
	piano.nb_notes = strlen(partition) + 1;
	piano.text = malloc(sizeof(sfText *) * (piano.nb_notes + 1));
	piano.font = sfFont_createFromFile(FONT);
	for (size_t i = 0; i < piano.nb_notes; i++) {
		piano.text[i] = sfText_create();
		sfText_setFont(piano.text[i], piano.font);
	}
	return (piano);
}
