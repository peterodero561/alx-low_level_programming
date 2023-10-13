#include <stdio.h>

/**
 * main - prints a sentence
 *  Return: always 0
 */

void print() __attribute__((constructor));

void print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
