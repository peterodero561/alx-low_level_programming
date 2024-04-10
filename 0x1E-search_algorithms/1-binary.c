#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using Binary search algorithm
 * @array: pointer to the 1st element of the array
 * @size: No of elements in the @array
 * @value: the value to search for in the @array
 * Return: if value is not in array or array is NULL return -1,
 * else return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, mid;
	
	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
	i = 0;
	j = size - 1;
	while (i <= j)
	{
		size_t k;
		mid = (i + j) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			i = mid + 1;
			printf("Searching in array: ");
			for (k = i; k <= j; k++)
			{
				if (k != i)
					printf(", ");
				printf("%d", array[k]);
			}
			printf("\n");
		}
		else
		{
			j = mid - 1;
			printf("Searching in array: ");
			for (k = i; k <= j; k++)
			{
				if (k != i)
					printf(", ");
				printf("%d", array[k]);
			}
			printf("\n");
		}
	}
	return (-1);
}
