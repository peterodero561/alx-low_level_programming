/*
 * File: 6-puts2.c
 * Auth: Peter
 */

#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string whose chara cter are to be printed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
