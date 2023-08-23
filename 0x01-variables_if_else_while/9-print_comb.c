/*
 * File: 9-print_comb.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
