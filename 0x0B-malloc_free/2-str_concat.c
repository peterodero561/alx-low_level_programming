/*
 * File: 2-str_concat.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: one of the strings
 * @s2: the other string
 *
 * Return: pointer to the concatenated sting otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concat;

	concat = malloc (sizeof(s1) + sizeof(s2));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
