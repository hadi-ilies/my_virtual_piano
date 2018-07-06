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

bool checkerror_notes(sfMusic *white_notes[WHITE_NOTES], sfMusic *black_notes[BLACK_NOTES])
{
	for (size_t i = 0; i < WHITE_NOTES; i++) {
		if (white_notes[i] == NULL) {
			printf("Oops you forgot a white note ! index : %ld\n", i);
			return (false);
		}
	} for (size_t i = 0; i < BLACK_NOTES; i++) {
		if (black_notes[i] == NULL) {
			printf("Oops you forgot a black note ! index : %ld\n", i);
			return (false);
		}
	}
	return (true);
}

void solfege(sfMusic *white_notes[WHITE_NOTES], sfMusic *black_notes[BLACK_NOTES])
{
	for (size_t i = 0; solfege_white[i] != NULL; i++)
		white_notes[i] = sfMusic_createFromFile(solfege_white[i]);
	for (size_t i = 0; solfege_black[i] != NULL; i++)
		black_notes[i] = sfMusic_createFromFile(solfege_black[i]);
}
