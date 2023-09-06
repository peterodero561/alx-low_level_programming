/*
 * File: 3-alloc_grid.c
 * Auth: Peter
 */

#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: the width of the array (columns)
 * @height: the height of the array (rows)
 *
 * Return: pointer to the array otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int i;/*counter for rows*/
	int j;/*counter for columns*/
	int **arr;
	(void) width;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
