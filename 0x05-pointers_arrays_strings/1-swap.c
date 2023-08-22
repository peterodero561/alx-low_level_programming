/*
 * File: 1-swap.c
 * Auth: Peter
 */

#incude "main.h"

/**
 * swap_int - swaps the two integers given
 * @a: oone of the integers given
 * @b: another integer given
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
