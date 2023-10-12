#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer ti the NUmber to be altered
 * @index: is index starting from 0 of the bit you want to set
 *
 * Return: 1 if it works or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~mask;
	return (1);
}
