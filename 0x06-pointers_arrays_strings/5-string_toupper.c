/*
 * File: 5-string_toupper.c
 * Auth: Peter
 */

#include "main.h"

/**
 * string_toupper - capitalizes each letter of a string
 * @c: string to be capitalized
 *
 * Return: a capitalized version of a given string
 */

char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 97 && c[x] <= 122)
			c[x] = c[x] - 32;
	}
	return (c);
}
