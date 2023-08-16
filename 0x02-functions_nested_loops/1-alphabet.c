/*
 * File: print_alphabet.c
 * Auth: Peter
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in small letter
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
