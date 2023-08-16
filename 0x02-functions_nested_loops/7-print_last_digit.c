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
	int num;
	int last;

	if (c < 0)
	{
		last = c * -1;
		num = last % 10;
		return (num);
	}
	else
	{
		num = c % 10;
		return (num);
	}
}
