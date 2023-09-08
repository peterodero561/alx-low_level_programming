/*
 * File: 3-array_range.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: range where the numbers in array will start from
 * @max: range where the numbers in array will end
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *arr;

	if (min > max)
		return(NULL);
	arr = malloc(sizeof(arr) * (max - min));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max || j < (max - min); i++, j++)
		arr[j] = i;
	return (arr);
}
