#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
