#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to be converted to binary
 *
 * Return: Nothing
 */
/*
void print_binary(unsigned long int n)
{
	int binary_digits[64];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		binary_digits[i] = n & 1;
		n >>= 1;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(binary_digits[i] + '0');
	}
}*/

void print_binary(unsigned long int n)
{
	int flag = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}

