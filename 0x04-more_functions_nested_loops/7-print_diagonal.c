/*
 * File: 7-print_diagonal.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_diagonal - prints a diagonal a given number of times
 * @n: number of times slash to be printed
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int s;
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (s = 0; s < c; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			s = 0;
		}
	}
	else
		_putchar('\n');
}
