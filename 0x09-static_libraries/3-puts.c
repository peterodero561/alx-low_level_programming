/*
 * File: 3-puts.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
