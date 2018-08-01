/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** game.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prototype.h"
#include "piano.h"

static void insert_partition_text(char *notes, piano_t *piano,
				size_t *text, bool test)
{
	if (test == true) {
		//printf("%s\n", notes);
		sfText_setString(piano->text[*text].text, notes); //tmp
		(*text)++;
	}
}

void insert_partition(piano_t *piano)
{
	char *notes = malloc(sizeof(char *) * 2);
	static size_t i = 0;
	static bool test = true;
	static size_t text = 0;
	size_t j = 0;

	if (test == false)
		return;
	for (; j < 1; j++) {
		if (str_g[i] == '\0') {
			test = false;
			break;
		}
		notes[j] = str_g[i];
		i++;
	}
	notes[j] = '\0';
	insert_partition_text(notes, piano, &text, test);
	free(notes);
}
