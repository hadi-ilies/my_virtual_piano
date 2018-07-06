/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include <stdio.h>
#include "prototype.h"
#include "piano.h"
#include "solfege.h"

bool checkerror_blacknotes(sfMusic *black_notes[BLACK_NOTES])
{
	for (size_t i = 0; i < BLACK_NOTES; i++) {
		if (black_notes[i] == NULL) {
			printf("Oops you forgot a black note ! index : %ld\n", i);
			return (false);
		}
	}
	return (true);
}

void solfege_black_part_two(sfMusic *black_notes[BLACK_NOTES])
{

	black_notes[15] = sfMusic_createFromFile(B4_1);
	black_notes[16] = sfMusic_createFromFile(B4_2);
	black_notes[17] = sfMusic_createFromFile(B4_3);
	black_notes[18] = sfMusic_createFromFile(B4_4);
	black_notes[19] = sfMusic_createFromFile(B4_5);

	black_notes[20] = sfMusic_createFromFile(B5_1);
	black_notes[21] = sfMusic_createFromFile(B5_2);
	black_notes[22] = sfMusic_createFromFile(B5_3);
	black_notes[23] = sfMusic_createFromFile(B5_4);
	black_notes[24] = sfMusic_createFromFile(B5_5);
}
void solfege_black_part_one(sfMusic *black_notes[BLACK_NOTES])
{
	black_notes[0] = sfMusic_createFromFile(B1_1);
	black_notes[1] = sfMusic_createFromFile(B1_2);
	black_notes[2] = sfMusic_createFromFile(B1_3);
	black_notes[3] = sfMusic_createFromFile(B1_4);
	black_notes[4] = sfMusic_createFromFile(B1_5);

	black_notes[5] = sfMusic_createFromFile(B2_1);
	black_notes[6] = sfMusic_createFromFile(B2_2);
	black_notes[7] = sfMusic_createFromFile(B2_3);
	black_notes[8] = sfMusic_createFromFile(B2_4);
	black_notes[9] = sfMusic_createFromFile(B2_5);

	black_notes[10] = sfMusic_createFromFile(B3_1);
	black_notes[11] = sfMusic_createFromFile(B3_2);
	black_notes[12] = sfMusic_createFromFile(B3_3);
	black_notes[13] = sfMusic_createFromFile(B3_4);
	black_notes[14] = sfMusic_createFromFile(B3_5);
}
