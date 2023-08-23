/*
 * File: 100-print_comb3.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints all the possible combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (i = 0; i < 100; i++)
	{
		y = i / 10;
		z = i % 10;
		if (y < z)
		{
			putchar(y + '0');
			putchar(z + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
