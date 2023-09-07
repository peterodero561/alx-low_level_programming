/*
 * File: 0-malloc_checked.c
 * Auth: Peter
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - alocates memory using malloc
 * @b: size of the memory to be allocated
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(sizeof(b));
	if (t == NULL)
		return (NULL);
	return (t);
	free(t);
}
