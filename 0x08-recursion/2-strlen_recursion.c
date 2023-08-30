/*
 * File: 2-strlen_recursion.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a given string
 * @s: String whose length is to be determined
 *
 * Return: length of the given string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
