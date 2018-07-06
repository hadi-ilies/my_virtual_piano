/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** my_strncat
*/

#include <stdlib.h>
#include "string.h"

char *my_strncat(char *s1, char *s2, size_t n)
{
	size_t c = 0;
	char *str = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (str == NULL)
		return (NULL);
	for (size_t i = 0; s1[i] != '\0'; i++) {
		str[c] = s1[i];
		c++;
	} for (size_t j = 0; j != n; j++) {
		str[c] = s2[j];
		c++;
	}
	str[c] = '\0';
	return (str);
}
