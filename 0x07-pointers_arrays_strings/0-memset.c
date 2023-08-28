/*
 * File: 0-memset.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _memset - fills a given No of bytes of memory with a constant byte
 * @s: adress that points to memory
 * @n: No of bytes to be filled
 * @b: the character to fill the memory adress
 *
 * Return: the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
