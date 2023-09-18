#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - print strings followed by a new line
 * @separator: separates the strings to be printed
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(strings, char *);
		if (j != NULL)
			printf("%s", j);
		else
			printf("(nil)");
		if (i != n-1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
}
