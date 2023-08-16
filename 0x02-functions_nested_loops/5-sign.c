/*
 * File: 5-sign.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_sign - Determines the sign of a given number
 * @n: the number to be checked
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
