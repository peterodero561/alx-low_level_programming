/*
 * File: 7-print_tebahpla.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - Print small letters in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar (letter);
	putchar ('\n');
	return (0);
}
