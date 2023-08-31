/*
 * File: 5-swrt_recursion.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to find the square root
 *
 * Return: -1 if @n has no natural square and sruare root of @n otherwise
 */

int _sqrt_recursion(int n)
{
	guess(n, 1);
}

/**
 * guess - find square root of a given number
 * @a: number to find square root
 * @b: incrementer
 *
 * Return: -1 if asquare root is not a natural number
 * otherwise square root of the given number
 */

int guess(int a, int b)
{
	int sqr;

	sqr = b * b;
	if (sqr == a)
		return (b);
	else if (sqr < a)
		return (guess(a, b + 1));
	else
		return (-1);
}
