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
#define NB_BUTTON 2
#define BUTTON1 "resources/texture/button1.png"
#define BUTTON2 "resources/texture/button2.png"

typedef struct {
	sfRectangleShape *button[NB_BUTTON];
	sfTexture *texture_button[NB_BUTTON];
} menu_t;

menu_t menu_create(void);
