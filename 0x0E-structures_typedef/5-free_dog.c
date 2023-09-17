/*
 * File: 5-free_dog.c
 * Auth: Peter
 */

#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the @dog_t *d
 * @d: memory adress to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
