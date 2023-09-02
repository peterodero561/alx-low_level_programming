/*
 * File: 5-strstr.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string being be checked
 * @needle: string that is being checked in @haystack
 *
 * Return: pointer to the beggining of the located substring
 * or NULL if the string is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
				return (needle + i);
		}
	}
	if (*(haystack + j) == '\0')
		return (0);
	return (needle);
}
