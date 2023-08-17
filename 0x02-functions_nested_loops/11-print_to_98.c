/*
 * File: 11-print_to_98
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from a given integer to 98
 * @n : number given
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%d, ", i);
	for (i = n; i >= 98 ; i--)
		printf("%d, ", i);
	printf("\n");
}
