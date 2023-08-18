/*
 * File: 6-print_line.c
 * Auth: Peter
 */

#include "main.h"

/**
 * print_line - prints _ a given number of times
 * @n: number of lines to be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
}
