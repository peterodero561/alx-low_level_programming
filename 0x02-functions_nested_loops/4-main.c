/*
 * File: 4-main.c
 * Auth: Peter
 */

#include "main.h"

/**
 * main - Determines whether a given chacter is an alphabetic letter
 *
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r  = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
