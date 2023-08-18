/*
 * File: 0-isupper.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _isupper - determines whether a givenn character
 * is capital alphabet letter
 * @c - is the character to be cheacked
 *
 * Return: Always zero
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
