/*
 * File: 2-strncpy.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of strings to copy from @src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > i; i++)
	{
		dest[i] = src[i];
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
