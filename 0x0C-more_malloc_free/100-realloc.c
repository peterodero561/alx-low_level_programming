/*
 * File: 100-realloc.c
 * Auth: Peter
 */

#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to prviously allocated to call malloc
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes for new memory block
 *
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	nptr = _memcpy(nptr, ptr, min);
	free(ptr);
	return (nptr);
}

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Amount to copy from memory area
 *
 * Return: Pointer to area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

