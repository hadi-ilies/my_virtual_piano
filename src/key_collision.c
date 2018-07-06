/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include "prototype.h"
#include "piano.h"

/*must erased if forest*/
/*sfKeyboard_isKeyPressed(sfKeyRShift) == sfTrue &&*/

static void key_part_one(piano_t *piano, sfEvent *event)
{
	int index = -1;

	if (event->key.code == sfKeyNum1)
		sfMusic_play(piano->white_notes[index = 0]);
	if (event->key.code == sfKeyNum2)
		sfMusic_play(piano->white_notes[index = 1]);
	if (event->key.code == sfKeyNum3)
		sfMusic_play(piano->white_notes[index = 2]);
	if (event->key.code == sfKeyNum4)
		sfMusic_play(piano->white_notes[index = 3]);
	if (event->key.code == sfKeyNum5)
		sfMusic_play(piano->white_notes[index = 4]);
	if (event->key.code == sfKeyNum6)
		sfMusic_play(piano->white_notes[index = 5]);
	if (event->key.code == sfKeyNum7)
		sfMusic_play(piano->white_notes[index = 6]);
	if (event->key.code == sfKeyNum8)
		sfMusic_play(piano->white_notes[index = 7]);
	if (event->key.code == sfKeyNum9)
		sfMusic_play(piano->white_notes[index = 8]);
	if (event->key.code == sfKeyNum0)
		sfMusic_play(piano->white_notes[index = 9]);
	if (index > -1)
		sfRectangleShape_setFillColor(piano->white_touch[index], sfGreen);
}

static void key_part_two(piano_t *piano, sfEvent *event)
{
	int index = -1;

	if (event->key.code == sfKeyA)
		sfMusic_play(piano->white_notes[index = 20]);
	if (event->key.code == sfKeyZ)
		sfMusic_play(piano->white_notes[index = 29]);
	if (event->key.code == sfKeyE)
		sfMusic_play(piano->white_notes[index = 12]);
	if (event->key.code == sfKeyR)
		sfMusic_play(piano->white_notes[index = 13]);
	if (event->key.code == sfKeyT)
		sfMusic_play(piano->white_notes[index = 14]);
	if (event->key.code == sfKeyY)
		sfMusic_play(piano->white_notes[index = 15]);
	if (event->key.code == sfKeyU)
		sfMusic_play(piano->white_notes[index = 16]);
	if (event->key.code == sfKeyI)
		sfMusic_play(piano->white_notes[index = 17]);
	if (event->key.code == sfKeyO)
		sfMusic_play(piano->white_notes[index = 18]);
	if (event->key.code == sfKeyP)
		sfMusic_play(piano->white_notes[index = 19]);
	if (index > -1)
		sfRectangleShape_setFillColor(piano->white_touch[index], sfGreen);
}

static void key_part_three(piano_t *piano, sfEvent *event)
{
	int index = -1;

	if (event->key.code == sfKeyQ)
		sfMusic_play(piano->white_notes[index = 11]);
	if (event->key.code == sfKeyS)
		sfMusic_play(piano->white_notes[index = 21]);
	if (event->key.code == sfKeyD)
		sfMusic_play(piano->white_notes[index = 22]);
	if (event->key.code == sfKeyF)
		sfMusic_play(piano->white_notes[index = 23]);
	if (event->key.code == sfKeyG)
		sfMusic_play(piano->white_notes[index = 24]);
	if (event->key.code == sfKeyH)
		sfMusic_play(piano->white_notes[index = 25]);
	if (event->key.code == sfKeyJ)
		sfMusic_play(piano->white_notes[index = 26]);
	if (event->key.code == sfKeyK)
		sfMusic_play(piano->white_notes[index = 27]);
	if (event->key.code == sfKeyL)
		sfMusic_play(piano->white_notes[index = 28]);
	if (index > -1)
		sfRectangleShape_setFillColor(piano->white_touch[index], sfGreen);
}

static void key_part_fourth(piano_t *piano, sfEvent *event)
{
	int index = -1;

	if (event->key.code == sfKeyM)
		sfMusic_play(piano->white_notes[index = 34]);
	if (event->key.code == sfKeyW)
		sfMusic_play(piano->white_notes[index = 12]);
	if (event->key.code == sfKeyX)
		sfMusic_play(piano->white_notes[index = 30]);
	if (event->key.code == sfKeyC)
		sfMusic_play(piano->white_notes[index = 31]);
	if (event->key.code == sfKeyV)
		sfMusic_play(piano->white_notes[index = 32]);
	if (event->key.code == sfKeyB)
		sfMusic_play(piano->white_notes[index = 33]);
	if (event->key.code == sfKeyN)
		sfMusic_play(piano->white_notes[index = 34]);
	if (index > -1)
		sfRectangleShape_setFillColor(piano->white_touch[index], sfGreen);
}

static void key_part_five(piano_t *piano, sfEvent *event)
{
	int index = -1;

	if (sfKeyboard_isKeyPressed(sfKeyRShift) == sfTrue) {
		if (event->key.code == sfKeyNum1)
			sfMusic_play(piano->black_notes[index = 0]);
		if (event->key.code == sfKeyNum2)
			sfMusic_play(piano->black_notes[index = 1]);
		if (event->key.code == sfKeyNum4)
			sfMusic_play(piano->black_notes[index = 2]);
		if (event->key.code == sfKeyNum5)
			sfMusic_play(piano->black_notes[index = 3]);
		if (event->key.code == sfKeyNum6)
			sfMusic_play(piano->black_notes[index = 4]);
		if (event->key.code == sfKeyNum8)
			sfMusic_play(piano->black_notes[index = 5]);
		if (event->key.code == sfKeyNum9)
			sfMusic_play(piano->black_notes[index = 6]);
		if (event->key.code == sfKeyE)
			sfMusic_play(piano->black_notes[index = 6]);
		if (index > -1)
			sfRectangleShape_setFillColor(piano->black_touch[index], sfBlue);
	}
}

bool key_collision(piano_t *piano, sfEvent *event)
{
	if (event->type == sfEvtKeyPressed) {
		//key_part_one(piano, event);
		key_part_two(piano, event);
		key_part_three(piano, event);
		key_part_fourth(piano, event);
		key_part_five(piano, event);
	}
	return (true);
}
