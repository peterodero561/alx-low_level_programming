/*
 * File: 6-is_prime_number.c
 * Auth: Peter
 */

#include "main.h"
int guess(int a, int b);
int sqrt(int x, int i);
/**
 * is_prime_number - finds out if a number is prime or not
 * @n: number to determine whteher is prime or not
 *
 * Return: 1 if  @n is prime ortherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n < 4)
		return (1);
	return (guess(n, 2));
}

/**
 * sqrt - returns the square root of a number
 * @x: number to determine the square root
 * @i: increment
 *
 * Return: square root of @x
 */

int sqrt(int x, int i)
{
	int sqr;

	sqr = i * i;
	if (square > x)
		return (i);
	else
		return (sqrt(x, i + 1));
}

/**
 * guess - helps function is_prime_number to determine
 * whether a given number is prime number or not
 * @a: number to determine if prime or not
 * @b: incrementer
 *
 * Return: 1 if  @n is prime ortherwise 0
 */

int guess(int a, int b)
{
	if (a % b == 0)
		return (0);
	else if (sqrt(a, 1) < b)
		return (1);
	else
		return (guess(a, b + 1));
}
