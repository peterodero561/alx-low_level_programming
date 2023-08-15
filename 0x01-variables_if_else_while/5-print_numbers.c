/*
 * File: 5-print_numbers.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - Prints numbers of base 10 from 0 to 10
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
