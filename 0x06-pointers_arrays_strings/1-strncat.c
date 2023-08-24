/*
 * File: 1-strncat
 * Auth: Peter
 */

#include "main.h"

/**
 * _strncat - concatenates two stringsi using a given number of bytes
 * @dest: one string
 * @src: another string
 * @n: number of bytes to be concidered
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		i++;
		n--;
	}
	return (dest);
}
