#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to No to be altered
 * @index: is the index strating from 0 of the bit you want to set
 *
 * Return: 1 if it works or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1Ul << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}
