/*
 * File: 3-print_alphabets.c
 * Auth: Peter
 */

#include <stdio.h>

/**
 * main - Prints alphabets starting with
 * small letters then capital letters and a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar (alphabet);
	putchar ('\n');
	return (0);
}
