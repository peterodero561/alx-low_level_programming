/*
 * File: 2-int_index.c
 * Auth: Peter
 */

#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - prints the index of given number in @array
 * @array: array to search a given No
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: 0 if size <= 0, -1 if no element matches
 * else index of the No in @array
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
