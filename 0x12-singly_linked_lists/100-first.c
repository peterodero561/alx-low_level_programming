#include <stdio.h>

/**
 * print - prints a sentence
 *
 *  Return: Nothing
 */

void print(void) __attribute__((constructor));

void print(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
