/*
 * File: 1-print_binary.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: No to be converted to binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i;
	int index;
	int bin[32];

	index = 31;
	while (index >= 0)
	{
		bin[index] = n & 1;
		index--;
		n >>= 1;
	}
	for (i = 0; i < 32; i++)
		_putchar(bin[i] + '0');
}
