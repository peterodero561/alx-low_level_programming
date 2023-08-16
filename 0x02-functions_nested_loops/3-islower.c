/*
 * File: 3-islower
 * Auth: Peter
 */

#include "main.h"

/**
 * _islower - determines whether a give character is capital or small
 * letter
 *
 * Return: Always 0
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
