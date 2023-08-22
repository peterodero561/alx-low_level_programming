/*
 * File: 8-print_array.c
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array to be printed
 * @n: number of elements of the array to be printed
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		if (cnt == 0)
			printf("%d", a[cnt]);
		else
			printf(", %d", a[cnt]);
	}
	_putchar('\n');
}
