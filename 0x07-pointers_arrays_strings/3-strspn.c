/*
 * File: 3-strspn.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: string with the prefix
 * @accept: string with the bytes
 *
 * Return: No of bytes in the inital segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		while (*(accept + j) == *(s + i))
		{
			j++;
		}
	}
	return (j);
}
