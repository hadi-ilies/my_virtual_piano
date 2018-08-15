/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** place_notes.c
*/

#include "piano.h"

void coord_notes(piano_t *piano, char c, size_t index)
{
	if (c == 'a')
		piano->text[index].x = 1065;
	if (c == 'z')
		piano->text[index].x = 1515;
	if (c == 'e')
		piano->text[index].x = 665;
	if (c == 'r')
		piano->text[index].x = 715;
	if (c == 't')
		piano->text[index].x = 765;
	if (c == 'y')
		piano->text[index].x = 815;
	if (c == 'u')
		piano->text[index].x = 865;
	if (c == 'i')
		piano->text[index].x = 915;
	if (c == 'o')
		piano->text[index].x = 965;
	if (c == 'p')
		piano->text[index].x = 1015;
	if (c == 'q')
		piano->text[index].x = 565;
	if (c == 's')
		piano->text[index].x = 1115;
	if (c == 'd')
		piano->text[index].x = 1165;
	if (c == 'f')
		piano->text[index].x = 1215;
	if (c == 'g')
		piano->text[index].x = 1265;
	if (c == 'h')
		piano->text[index].x = 1315;
	if (c == 'j')
		piano->text[index].x = 1365;
	if (c == 'k')
		piano->text[index].x = 1415;
	if (c == 'l')
		piano->text[index].x = 1465;
	if (c == 'w')
		piano->text[index].x = 615;
	if (c == 'x')
		piano->text[index].x = 1565;
	if (c == 'c')
		piano->text[index].x = 1615;
	if (c == 'v')
		piano->text[index].x = 1665;
	if (c == 'b')
		piano->text[index].x = 1715;
	if (c == 'n')
		piano->text[index].x = 1765;
	if (c == 'Z')
		piano->text[index].x = 1540;
	if (c == 'E')
		piano->text[index].x = 690;
	if (c == 'T')
		piano->text[index].x = 790;
	if (c == 'Y')
		piano->text[index].x = 840;
	if (c == 'I')
		piano->text[index].x = 940;
	if (c == 'O')
		piano->text[index].x = 990;
	if (c == 'P')
		piano->text[index].x = 1040;
	if (c == 'Q')
		piano->text[index].x = 590;
	if (c == 'S')
		piano->text[index].x = 1140;
	if (c == 'D')
		piano->text[index].x = 1190;
	if (c == 'G')
		piano->text[index].x = 1300;
	if (c == 'H')
		piano->text[index].x = 1340;
	if (c == 'J')
		piano->text[index].x = 1390;
	if (c == 'L')
		piano->text[index].x = 1490;
	if (c == 'W')
		piano->text[index].x = 640;
	if (c == 'C')
		piano->text[index].x = 1640;
	if (c == 'V')
		piano->text[index].x = 1690;
	if (c == 'B')
		piano->text[index].x = 1735;
	if (c == '1')
		piano->text[index].x = 85;
	if (c == '2')
		piano->text[index].x = 135;
	if (c == '4')
		piano->text[index].x = 235;
	if (c == '5')
		piano->text[index].x = 285;
	if (c == '6')
		piano->text[index].x = 335;
	if (c == '8')
		piano->text[index].x = 435;
	if (c == '9')
		piano->text[index].x = 495;
	/*position and color*/
	if (c < 97) {
		piano->text[index].y = 50;
		sfText_setColor(piano->text[index].text, sfBlue);
	} else {
		piano->text[index].y = 150;
		sfText_setColor(piano->text[index].text, sfGreen);
	}
}
