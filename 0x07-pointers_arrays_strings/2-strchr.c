/*
 * File: 2-strchr.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character we're looking for
 *
 * Return: pointer to the first occurence of @c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i)  == c)
			return ((s + i));
	}
	return ((s + i));
}
