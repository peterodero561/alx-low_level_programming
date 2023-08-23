/*
 * File: 102-print_comb5.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int i;
	int j;
	int k;
	int l;

	for (x = 0; x < 100; x++)
	{
		i = x / 10;
		j = x % 10;

		for (y = 0; y < 100; j++)
		{
			k = y / 10;
			l = y % 10;

			if (i < k || (i == k && j < l))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');

				if (!(i == 9 && j == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
