/*
 * File: 101-print_comb4.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints all posible number of 3 digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w < 1000; w++)
	{
		x = w / 100;
		y = (w / 10) % 10;
		z = w % 10;

		if (x < y && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');
			if (i < 700)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
