/*
 * File: 1-string_nconcat.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: one of the strings
 * @s2: the other string
 * @n: No of bytes of @s2 to be concatenated to @s1
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j;

	str = malloc(sizeof(str) * n);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	if (s2 == NULL)
		s2 = '\0';
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (j < n)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
