/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** menu.h
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#define BACK_MENU "resources/texture/back_menu.jpg"
#define NB_BUTTON 3
#define BUTTON1 "resources/texture/button3.png"
#define BUTTON2 "resources/texture/button1.png"
#define BUTTON3 "resources/texture/button2.png"
#define MUSIC 5

typedef struct {
	sfRectangleShape *back;
	sfSprite *screen;
	sfFont *font;
	sfText *choice[MUSIC];
	size_t choice_curs;
} choice_t;

typedef struct {
	size_t music;
	sfRectangleShape *button[NB_BUTTON];
	sfTexture *texture_button[NB_BUTTON];
} menu_t;

menu_t menu_create(void);
void destroy_menu(sfRenderWindow *window, sfSprite *back,
		sfTexture *texture, menu_t *menu);
int choose_music(sfRenderWindow *window);
sfRectangleShape *create_back_param(sfRenderWindow *window);
sfSprite *create_screen_param(sfRenderWindow *window);
