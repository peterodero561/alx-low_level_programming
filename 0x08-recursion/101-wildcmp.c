/*
 * File: 101-wildcmp
 * Auth: Peter
 */

#include "main.h"

/**
 * wildcmp - compares if two strings are identical
 * @s1: one of the strings to be compared
 * @s2: the other string to be compared
 *
 * Return: 1 if strings are identical othrwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
			return (wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
	}

	return (0);

}

/**
 * findsrc - helps @wildcmp to itarate in the strings given
 * @s: string
 * @c: string
 * @i: counter
 * @p: counter
 *
 * Return: iteration in the strings @s && @c
 */

int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}
