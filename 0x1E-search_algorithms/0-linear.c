#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the linear serach
 * @array: pointer to the 1st element in the array to search
 * @size: No of elements in array
 * @value: is thea value to search for in the array
 * Return: 1st index where @value is located,
 * if value is not present in array or if array is NULL, return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
