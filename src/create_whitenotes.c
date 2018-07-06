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

bool checkerror_whitenotes(sfMusic *white_notes[WHITE_NOTES])
{
	for (size_t i = 0; i < WHITE_NOTES; i++) {
		if (white_notes[i] == NULL) {
			printf("Oops you forgot a white note ! index : %ld\n", i);
			return (false);
		}
	}
	return (true);
}

void solfege_white_part_two(sfMusic *white_notes[WHITE_NOTES])
{
	white_notes[21] = sfMusic_createFromFile(DO4);
	white_notes[22] = sfMusic_createFromFile(RE4);
	white_notes[23] = sfMusic_createFromFile(MI4);
	white_notes[24] = sfMusic_createFromFile(FA4);
	white_notes[25] = sfMusic_createFromFile(SOL4);
	white_notes[26] = sfMusic_createFromFile(LA4);
	white_notes[27] = sfMusic_createFromFile(SI4);

	white_notes[28] = sfMusic_createFromFile(DO5);
	white_notes[29] = sfMusic_createFromFile(RE5);
	white_notes[30] = sfMusic_createFromFile(MI5);
	white_notes[31] = sfMusic_createFromFile(FA5);
	white_notes[32] = sfMusic_createFromFile(SOL5);
	white_notes[33] = sfMusic_createFromFile(LA5);
	white_notes[34] = sfMusic_createFromFile(SI5);
}

void solfege_white_part_one(sfMusic *white_notes[WHITE_NOTES])
{
	white_notes[0] = sfMusic_createFromFile(DO1);
	white_notes[1] = sfMusic_createFromFile(RE1);
	white_notes[2] = sfMusic_createFromFile(MI1);
	white_notes[3] = sfMusic_createFromFile(FA1);
	white_notes[4] = sfMusic_createFromFile(SOL1);
	white_notes[5] = sfMusic_createFromFile(LA1);
	white_notes[6] = sfMusic_createFromFile(SI1);

	white_notes[7] = sfMusic_createFromFile(DO2);
	white_notes[8] = sfMusic_createFromFile(RE2);
	white_notes[9] = sfMusic_createFromFile(MI2);
	white_notes[10] = sfMusic_createFromFile(FA2);
	white_notes[11] = sfMusic_createFromFile(SOL2);
	white_notes[12] = sfMusic_createFromFile(LA2);
	white_notes[13] = sfMusic_createFromFile(SI2);

	white_notes[14] = sfMusic_createFromFile(DO3);
	white_notes[15] = sfMusic_createFromFile(RE3);
	white_notes[16] = sfMusic_createFromFile(MI3);
	white_notes[17] = sfMusic_createFromFile(FA3);
	white_notes[18] = sfMusic_createFromFile(SOL3);
	white_notes[19] = sfMusic_createFromFile(LA3);
	white_notes[20] = sfMusic_createFromFile(SI3);
}
