/*
 * File: 4-print_alphabt.c
 * Auth: Peter
 */

#include <stdio.h>
/**
 * main - Prints all small letters except q & e
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar ('\n');
	return (0);
}
