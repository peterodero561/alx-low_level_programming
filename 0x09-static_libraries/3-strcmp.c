/*
 * File: 3-strcmp
 * Auth: Peter
 */

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: one of the strings
 * @s2: the other string
 *
 * Return: 0 if strings are alike, + No if s1 > s2 and - No if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
	}
	return (0);
}
