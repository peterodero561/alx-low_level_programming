#include "main.h"

/**
 * get_bit - gets the value of a given bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: No to get bit from
 *
 * Return: value of bit at @index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit = (n & mask) >> index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (bit);
}
