/*
** PERSONAL PROJECT, 2017
** for_norme
** File description:
** piano.h
*/

#ifndef PIANO_H_
#define PIANO_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#define BACKGROUND "resources/texture/background.jpg"
#define FONT "resources/font/font.ttf"
#define WHITE_NOTES 35
#define BLACK_NOTES 25
#define NB_PARTITION 1

typedef struct {
	sfMusic *white_notes[WHITE_NOTES];
	sfMusic *black_notes[BLACK_NOTES];
	sfRectangleShape *white_touch[WHITE_NOTES];
	sfRectangleShape *black_touch[BLACK_NOTES];
	sfFont *font;
	//sfText *text[NB_PARTITION];
	sfText **text;
	size_t nb_notes;
} piano_t;

#endif
