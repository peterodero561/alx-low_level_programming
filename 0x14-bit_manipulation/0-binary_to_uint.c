/*
 * File: 0-binary_to_uint.c
 * Auth: Peter
 */

#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to the string containning the binary numbbers
 *
 * Return: the converted No OR 0 if b == NULL || b !=0 || b != 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci_val;

	deci_val = 0;
	if (b == NULL || b[0] == '\0')
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		deci_val = (deci_val << 1) | (*b - '0');
		b++;
	}
	return (deci_val);
}
