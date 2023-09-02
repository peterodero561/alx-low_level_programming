/*
 * File: 4-isalpha.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _isalpha - Detrmines whether a given character is an alphabet
 * @c: character given
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
