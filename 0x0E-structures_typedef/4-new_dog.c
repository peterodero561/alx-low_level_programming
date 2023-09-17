/*
 * File: 4-new_dog.c
 * Auth: Peter
 */

#include "dog.h"
#include <stddef.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Return: a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *d;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
