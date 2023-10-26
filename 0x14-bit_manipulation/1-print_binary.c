#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to be converted to binary
 *
 * Return: Nothing
 */

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

