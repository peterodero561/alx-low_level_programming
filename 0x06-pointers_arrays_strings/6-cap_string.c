/*
 * File: 6-cap_string.c
 * Auth: Peter
 */

#include "main.h"

/**
 * cap_string - capitalizes first letters of words of a string
 * @c: string to be capitalized
 *
 * Return: Capitalized string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
				c[i] -= 32;
			else if (c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1]
				 == '.' || c[i - 1] == '!' || c[i - 1] == '"'
				 || c[i - 1] == ')' || c[i - 1] == '(' ||
				 c[i - 1] == '{' || c[i - 1] == '}' || c[i - 1]
				 == '\n' || c[i - 1] == 32 || c[i - 1] == '\t')
				c[i] -= 32;
		}
	}
	return (c);
}
