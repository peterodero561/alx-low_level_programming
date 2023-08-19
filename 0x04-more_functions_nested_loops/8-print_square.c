/*
 * File: 8-print_square.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_square - prints agiven number of squares
 * @size: the number of squares to be printed
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
		}
		y = 0;
		_putchar('\n');
	}
	else
		_putchar('\n');
}
