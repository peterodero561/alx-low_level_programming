/*
 * File: 0-strcat
 * Auth: Peter Odero
 */

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: another string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
