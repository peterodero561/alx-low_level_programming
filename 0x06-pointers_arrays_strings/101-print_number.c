/*
 * File: 101-print_number.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_number - prints a number
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else if (n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 100 + '0');
		_putchar(n % 10 + '0');
	}
}
