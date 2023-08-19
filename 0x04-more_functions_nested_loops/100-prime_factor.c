/*
 * File: 100-print_factor.c
 * Auth: Peter
 */

#include <math.h>
#include <stdio.h>

/**
 * main - prints lagest factor of a given number
 *
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	int i;

	for (i = 2; i <=  sqrt(n); i++)
	{
		if (n % 2 == 0)
		{
			n = n / i;
			i = 1;
		}
	}
	printf("%ld", n);
	return (0);
}
