/*
 * File: 2-print_alphabet_x10.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints small alphabet letters 10 times
 */

void print_alphabet_x10(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
