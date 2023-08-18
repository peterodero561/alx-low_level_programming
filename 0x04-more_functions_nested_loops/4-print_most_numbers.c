/*
 * File: 4-print_most_numbers.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2 & 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
