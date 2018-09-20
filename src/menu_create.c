/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** menu_create.h
*/

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "prototype.h"
#include "menu.h"

menu_t menu_create(void)
{
	menu_t menu;
	size_t y = WINDOW_HEIGHT / 2 - 120; // 60 width sprite

	menu.texture_button[0] = sfTexture_createFromFile(BUTTON1, NULL);
	menu.texture_button[1] = sfTexture_createFromFile(BUTTON2, NULL);
	menu.texture_button[2] = sfTexture_createFromFile(BUTTON3, NULL);
	for (size_t i = 0; i < NB_BUTTON; i++) {
		menu.button[i] = sfRectangleShape_create();
		if (menu.button[i] == NULL || menu.texture_button[i] == NULL)
			return (menu);
		sfRectangleShape_setSize(menu.button[i], V2F(600, 60)); // size sprite
		sfRectangleShape_setOrigin(menu.button[i], V2F(300, 30));
		sfRectangleShape_setPosition(menu.button[i], V2F(WINDOW_WIDTH / 2, y));
		sfRectangleShape_setTexture(menu.button[i], menu.texture_button[i], sfTrue);
		y += 200;
	}
	return (menu);
}
