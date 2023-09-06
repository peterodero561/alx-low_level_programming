/*
 * File: 1-strdup.c
 * Auth: Peter
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * in memery that contains coppy of the string given as parameter
 * @str: string parameter
 *
 * Return: pointer to duplicated string else NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(str) * 1);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	return (dup);
}
