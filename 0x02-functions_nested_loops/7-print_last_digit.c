/*
 * File: 7-print_last_digit.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of given number
 * @c: number to remove its digit
 *
 * Return: Always 0
 */

int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
