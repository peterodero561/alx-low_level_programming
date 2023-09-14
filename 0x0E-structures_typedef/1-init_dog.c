/*
 * File: 1-init_dog.c
 * Auth: Peter
 */

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - intializes the variable type @struct dog
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: age of the dog
 * @d: variable decleared by @struct dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
