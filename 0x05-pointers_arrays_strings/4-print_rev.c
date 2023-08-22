/*
 * File: 4-print-rev.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;
	int y;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
