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
	int i;
	unsigned int deci_val;
	unsigned int base;

	base = 1; /* 2 raised to 0*/
	deci_val = 0;
	if (b == NULL || b[0] == '\0')
		return (0);
	i = 0;
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			deci_val += base;
		base = base * 2;
		i--;
	}
	return (deci_val);

}
