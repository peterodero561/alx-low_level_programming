/*
 * File: 4-rev_array.c
 * Auth: Peter
 */

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an arry
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
