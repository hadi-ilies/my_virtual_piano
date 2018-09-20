/*
** EPITECH PROJECT, 2018
** create_back and screnn
** File description:
** create_back and screnn
*/

#include "prototype.h"

void screen_and_back_destroy(sfRectangleShape *back, sfSprite *screen)
{
	sfRectangleShape_destroy(back);
	sfSprite_destroy(screen);
}

sfSprite *create_screen_param(sfRenderWindow *window)
{
	sfSprite *sprite;
	sfImage *screen = sfRenderWindow_capture(window);
	sfTexture *texture;

	sprite = sfSprite_create();
	texture = sfTexture_createFromImage(screen, NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setColor(sprite, COL(100, 100, 100, 255));
	return (sprite);
}

sfRectangleShape *create_back_param(sfRenderWindow *window)
{
	sfRectangleShape *back;

	back = sfRectangleShape_create();
	sfRectangleShape_setSize(back, V2F(600, 600));
	sfRectangleShape_setOrigin(back, V2F(300, 300));
	sfRectangleShape_setPosition(back,
	V2F(WINDOW_SIZE.x / 2, WINDOW_SIZE.y / 2));
	sfRectangleShape_setFillColor(back, COL(30, 30, 30, 120));
	sfRectangleShape_setOutlineThickness(back, 10);
	sfRectangleShape_setOutlineColor(back, sfCyan);
	return (back);
}
