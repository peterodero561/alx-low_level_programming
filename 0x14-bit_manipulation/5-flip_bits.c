#include "main.h"

/**
 * flip_bits - returns No of bits you would need
 * to flip to get from one No to another
 * @n: No to be checked for flipping
 * @m: No to reach after flipping
 *
 * Return: No of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
