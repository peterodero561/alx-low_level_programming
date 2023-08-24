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
	int temp;

	for (i = n - 1, j = 0; i >= 0, j <= n - 1; i--, j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
