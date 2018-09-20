/*
** EPITECH PROJECT, 2017
** for_norme
** File description:
** prototype.h
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include <stdbool.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "piano.h"
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080
#define WINDOW_BITS_PER_PIXEL 32
#define WINDOW_PARAMS sfClose //| sfResize
#define FRAMERATE_LIMIT 30
#define WINDOW_NAME "My_Synthesia"
#define WINDOW_SIZE sfRenderWindow_getSize(window)
#define COL(r, g, b, a) (sfColor){r, g, b, a}
#define V2F(x, y) (sfVector2f){x, y}

extern const char *str_g;
extern const char *music_g[];

size_t menu(sfRenderWindow *window);
void game(sfRenderWindow *window, size_t music, bool game);
bool evt_close(sfEvent *event, sfRenderWindow *window);
sfRenderWindow *window_create(void);
void destroy_game(sfSprite *back, sfTexture *texture, piano_t *piano);
piano_t create_piano(const char *partition);
void collision_piano(piano_t *piano, sfRenderWindow *window, sfEvent *event);
bool hit_point_rec(sfVector2i *point, sfRectangleShape *rec);
bool key_collision(piano_t *piano, sfEvent *event);
void display_partition(sfRenderWindow *window, piano_t *piano);
char *my_strncat(char *s1, char *s2, size_t n);
void insert_partition(piano_t *piano);
bool checkerror_notes(sfMusic *white_notes[WHITE_NOTES], sfMusic *black_notes[BLACK_NOTES]);
void solfege(sfMusic *white_notes[WHITE_NOTES], sfMusic *black_notes[BLACK_NOTES]);
void coord_notes(piano_t *piano, char c, size_t index);
bool text_collision(piano_t *piano);
bool create_background(sfSprite *back, sfTexture *texture, char *img);
void display_partition_game(sfRenderWindow *window, piano_t *piano);
#endif
