/*
 * File: 1-isdigit.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _isdigit - Determines whether a given charachter is a number  or not
 * @c: is the character ti be checked
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
