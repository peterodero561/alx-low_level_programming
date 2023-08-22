/*
 * File: 7-puts_half.c
 * Auth: Peter
 */

#include "main.h"

/**
 * puts_half - prints half of a given string
 * @str: string to be half printed
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2 + 1; j <= i; j++)
			_putchar(str[j]);
	}
	else
	{
		i -= 1;
		for (j = i / 2 + 1; j <= i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
