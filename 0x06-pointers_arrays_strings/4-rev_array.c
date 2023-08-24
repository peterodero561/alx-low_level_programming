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
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
