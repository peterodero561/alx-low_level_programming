/*
 * File: 4-strpbrk.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search to saerch in
 * @accept: characters to search in @s
 *
 * Return: pointer to bytes @s that matches one of the bytes in accept
 * or NULL if no search byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	if (*(s + i) == '\0')
		return (0);
	return (s);
}
