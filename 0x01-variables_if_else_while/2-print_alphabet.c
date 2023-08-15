/*
 * File: 2-print_alphabet.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
