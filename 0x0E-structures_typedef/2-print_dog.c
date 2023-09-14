/*
 * File: 2-print_dog.c
 * Auth: Peter
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a @struct dog
 * @d: the data being printed
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	else
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
