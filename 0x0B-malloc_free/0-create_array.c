/*
 * File: 0-create_array.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: variable used in initalization
 *
 * Return: pointer to the array otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
