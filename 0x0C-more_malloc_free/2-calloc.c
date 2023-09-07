/*
 * File: 2-calloc.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: No of elements in the array
 * @size: size in bytes of each element in the array
 *
 * Return: pointer to the memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
