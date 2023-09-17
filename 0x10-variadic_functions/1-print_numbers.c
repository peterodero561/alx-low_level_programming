#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print munbers followed by a new line
 * @separator: character to be printed between the numbers
 * @n: of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(numbers);
}
