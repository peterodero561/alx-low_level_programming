/*
 * File: 5-string_toupper.c
 * Auth: Peter
 */

#include "main.h"

/**
 * string_toupper - capitalizes each letter of a string
 *
 * Return: a capitalized version of a given string
 */

char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 97 && c[x] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
