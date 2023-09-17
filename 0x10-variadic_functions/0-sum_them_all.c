#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: only parameter given
 *
 * Return: sum of all its parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int add;
	unsigned int i;

	add = 0;
	va_start (numbers, n);
	i = 0;
	while (i < n)
	{
		add += va_arg(numbers, unsigned int);
		i++;
	}
	va_end(numbers);
	return (add);
}
