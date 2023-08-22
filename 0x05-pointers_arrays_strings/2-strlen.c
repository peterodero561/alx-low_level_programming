/*
 * File: 2-strlen.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _strlen - retruns the length of a string
 * @s: is the string to be checked
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i)
}
