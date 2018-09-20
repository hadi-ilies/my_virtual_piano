/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** menu.c
*/

#include <stdlib.h>
#include "prototype.h"
#include "menu.h"

/**
 * check all error because there is many error in code
 **/

static void display_choice(sfRenderWindow *window, choice_t *music)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, music->screen, NULL);
	sfRenderWindow_drawRectangleShape(window, music->back, NULL);
	sfText_setPosition(music->choice[0],
			V2F(WINDOW_SIZE.x / 2 - 200, WINDOW_SIZE.y / 2 - 200));
	sfRenderWindow_drawText(window, music->choice[0], NULL);
	sfRenderWindow_display(window);
}

static choice_t create_choice(sfRenderWindow *window)
{
	choice_t choice;

	choice.back = create_back_param(window);
	choice.screen = create_screen_param(window);
	choice.font = sfFont_createFromFile(FONT);
	choice.choice_curs = 0;
	for (size_t i = 0; i < MUSIC; i++) {
		choice.choice[i] = sfText_create();
		sfText_setFont(choice.choice[i], choice.font);
	}
	return (choice);
}

static void choice_cursor(choice_t *music)
{
	if (music->choice_curs == 0)
		sfText_setString(music->choice[0], "Elfen Lied main theme");
	if (music->choice_curs == 1)
		sfText_setString(music->choice[0], "Tokyo ghoul main theme");
	if (music->choice_curs == 2)
		sfText_setString(music->choice[0], "steins gate main theme");
	if (music->choice_curs == 3)
		sfText_setString(music->choice[0], "bleach main theme");
	if (music->choice_curs == 4)
		sfText_setString(music->choice[0], "Elfen Lied main theme");
	if (music->choice_curs == 5)
		sfText_setString(music->choice[0], "Elfen Lied main theme");
}

static void cursor(choice_t *music, sfEvent *event)
{
	if (event && event->type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyLeft)
		&& music->choice_curs > 0) {
			music->choice_curs--;
		} if (sfKeyboard_isKeyPressed(sfKeyRight)
		&& music->choice_curs < MUSIC) {
			music->choice_curs++;
		}
	}
	choice_cursor(music);
}

int choose_music(sfRenderWindow *window)
{
	choice_t music = create_choice(window);
	sfEvent event;

	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (!evt_close(&event, window))
				return (music.choice_curs);
			cursor(&music, &event);
		}
		display_choice(window, &music);
	}
	return (music.choice_curs);
}
