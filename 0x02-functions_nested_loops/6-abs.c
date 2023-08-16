/*
 * File: 6-abs.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _abs - converts a given integer to its absolute value
 * @c: number to be converted
 *
 * Return: Always 0
 */

int _abs(int c)
{
	int num;

	if (c < 0)
	{
		num = c * -1;
		return (num);
	}
	return (c);
}
