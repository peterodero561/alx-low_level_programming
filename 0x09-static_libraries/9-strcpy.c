/*
 * File: 9-strcpy.c
 * Auth: Peter
 */

#include "main.h"

/**
 * *_strcpy - copies a string including the terminal null byte
 * @dest: pointer of buffer
 * @src: string to be copied
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
